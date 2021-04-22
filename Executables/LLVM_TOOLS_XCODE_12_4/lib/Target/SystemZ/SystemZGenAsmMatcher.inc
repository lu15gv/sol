/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Assembly Matcher Source Fragment                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  FeatureBitset ComputeAvailableFeatures(const FeatureBitset& FB) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const OperandVector &Operands);
  void convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) override;
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo,
                                FeatureBitset &MissingFeatures,
                                bool matchingInlineAsm,
                                unsigned VariantID = 0);
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo,
                                bool matchingInlineAsm,
                                unsigned VariantID = 0) {
    FeatureBitset MissingFeatures;
    return MatchInstructionImpl(Operands, Inst, ErrorInfo, MissingFeatures,
                                matchingInlineAsm, VariantID);
  }

  OperandMatchResultTy MatchOperandParserImpl(
    OperandVector &Operands,
    StringRef Mnemonic,
    bool ParseForAllFeatures = false);
  OperandMatchResultTy tryCustomParseOperand(
    OperandVector &Operands,
    unsigned MCK);

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_FeatureDistinctOpsBit = 3,
  Feature_FeatureFastSerializationBit = 8,
  Feature_FeatureFPExtensionBit = 7,
  Feature_FeatureHighWordBit = 10,
  Feature_FeatureInterlockedAccess1Bit = 12,
  Feature_FeatureLoadStoreOnCondBit = 15,
  Feature_FeaturePopulationCountBit = 26,
  Feature_FeatureMessageSecurityAssist3Bit = 17,
  Feature_FeatureMessageSecurityAssist4Bit = 18,
  Feature_FeatureResetReferenceBitsMultipleBit = 28,
  Feature_FeatureExecutionHintBit = 6,
  Feature_FeatureLoadAndTrapBit = 13,
  Feature_FeatureMiscellaneousExtensionsBit = 23,
  Feature_FeatureProcessorAssistBit = 27,
  Feature_FeatureTransactionalExecutionBit = 29,
  Feature_FeatureDFPZonedConversionBit = 1,
  Feature_FeatureEnhancedDAT2Bit = 4,
  Feature_FeatureLoadAndZeroRightmostByteBit = 14,
  Feature_FeatureLoadStoreOnCond2Bit = 16,
  Feature_FeatureMessageSecurityAssist5Bit = 19,
  Feature_FeatureDFPPackedConversionBit = 0,
  Feature_FeatureVectorBit = 30,
  Feature_FeatureMiscellaneousExtensions2Bit = 24,
  Feature_FeatureGuardedStorageBit = 9,
  Feature_FeatureMessageSecurityAssist7Bit = 20,
  Feature_FeatureMessageSecurityAssist8Bit = 21,
  Feature_FeatureVectorEnhancements1Bit = 31,
  Feature_FeatureVectorPackedDecimalBit = 33,
  Feature_FeatureInsertReferenceBitsMultipleBit = 11,
  Feature_FeatureMiscellaneousExtensions3Bit = 25,
  Feature_FeatureMessageSecurityAssist9Bit = 22,
  Feature_FeatureVectorEnhancements2Bit = 32,
  Feature_FeatureVectorPackedDecimalEnhancementBit = 34,
  Feature_FeatureEnhancedSortBit = 5,
  Feature_FeatureDeflateConversionBit = 2,
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_FeatureDistinctOpsBit: return "distinct-ops";
  case Feature_FeatureFastSerializationBit: return "fast-serialization";
  case Feature_FeatureFPExtensionBit: return "fp-extension";
  case Feature_FeatureHighWordBit: return "high-word";
  case Feature_FeatureInterlockedAccess1Bit: return "interlocked-access1";
  case Feature_FeatureLoadStoreOnCondBit: return "load-store-on-cond";
  case Feature_FeaturePopulationCountBit: return "population-count";
  case Feature_FeatureMessageSecurityAssist3Bit: return "message-security-assist-extension3";
  case Feature_FeatureMessageSecurityAssist4Bit: return "message-security-assist-extension4";
  case Feature_FeatureResetReferenceBitsMultipleBit: return "reset-reference-bits-multiple";
  case Feature_FeatureExecutionHintBit: return "execution-hint";
  case Feature_FeatureLoadAndTrapBit: return "load-and-trap";
  case Feature_FeatureMiscellaneousExtensionsBit: return "miscellaneous-extensions";
  case Feature_FeatureProcessorAssistBit: return "processor-assist";
  case Feature_FeatureTransactionalExecutionBit: return "transactional-execution";
  case Feature_FeatureDFPZonedConversionBit: return "dfp-zoned-conversion";
  case Feature_FeatureEnhancedDAT2Bit: return "enhanced-dat-2";
  case Feature_FeatureLoadAndZeroRightmostByteBit: return "load-and-zero-rightmost-byte";
  case Feature_FeatureLoadStoreOnCond2Bit: return "load-store-on-cond-2";
  case Feature_FeatureMessageSecurityAssist5Bit: return "message-security-assist-extension5";
  case Feature_FeatureDFPPackedConversionBit: return "dfp-packed-conversion";
  case Feature_FeatureVectorBit: return "vector";
  case Feature_FeatureMiscellaneousExtensions2Bit: return "miscellaneous-extensions-2";
  case Feature_FeatureGuardedStorageBit: return "guarded-storage";
  case Feature_FeatureMessageSecurityAssist7Bit: return "message-security-assist-extension7";
  case Feature_FeatureMessageSecurityAssist8Bit: return "message-security-assist-extension8";
  case Feature_FeatureVectorEnhancements1Bit: return "vector-enhancements-1";
  case Feature_FeatureVectorPackedDecimalBit: return "vector-packed-decimal";
  case Feature_FeatureInsertReferenceBitsMultipleBit: return "insert-reference-bits-multiple";
  case Feature_FeatureMiscellaneousExtensions3Bit: return "miscellaneous-extensions-3";
  case Feature_FeatureMessageSecurityAssist9Bit: return "message-security-assist-extension9";
  case Feature_FeatureVectorEnhancements2Bit: return "vector-enhancements-2";
  case Feature_FeatureVectorPackedDecimalEnhancementBit: return "vector-packed-decimal-enhancement";
  case Feature_FeatureEnhancedSortBit: return "enhanced-sort";
  case Feature_FeatureDeflateConversionBit: return "deflate-conversion";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

enum {
  Tie0_1_1,
  Tie1_1_1,
  Tie2_1_1,
};

static const uint8_t TiedAsmOperandTable[][3] = {
  /* Tie0_1_1 */ { 0, 1, 1 },
  /* Tie1_1_1 */ { 1, 1, 1 },
  /* Tie2_1_1 */ { 2, 1, 1 },
};

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_addRegOperands,
  CVT_95_addBDXAddrOperands,
  CVT_95_addImmOperands,
  CVT_95_addBDAddrOperands,
  CVT_95_addBDLAddrOperands,
  CVT_95_addImmTLSOperands,
  CVT_95_addBDRAddrOperands,
  CVT_imm_95_0,
  CVT_95_addBDVAddrOperands,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0_1_1__FP641_1,
  Convert__FP641_0__FP641_1__FP641_2,
  Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1,
  Convert__FP321_0__Tie0_1_1__FP321_1,
  Convert__GR321_0__Tie0_1_1__S32Imm1_1,
  Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1,
  Convert__GR641_0__Tie0_1_1__S32Imm1_1,
  Convert__GR641_0__Tie0_1_1__GR321_1,
  Convert__GR641_0__Tie0_1_1__S16Imm1_1,
  Convert__GR641_0__GR641_1__S16Imm1_2,
  Convert__GR641_0__Tie0_1_1__GR641_1,
  Convert__GR641_0__GR641_1__GR641_2,
  Convert__BDAddr64Disp202_0__S8Imm1_1,
  Convert__GRH321_0__GRH321_1__GRH321_2,
  Convert__GRH321_0__GRH321_1__GR321_2,
  Convert__GR321_0__Tie0_1_1__S16Imm1_1,
  Convert__GR321_0__GR321_1__S16Imm1_2,
  Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1,
  Convert__GRH321_0__Tie0_1_1__S32Imm1_1,
  Convert__GR321_0__Tie0_1_1__GR321_1,
  Convert__GR321_0__Tie0_1_1__U32Imm1_1,
  Convert__GR641_0__Tie0_1_1__U32Imm1_1,
  Convert__GR321_0__GR321_1__GR321_2,
  Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1,
  Convert__FP1281_0__Tie0_1_1__FP1281_1,
  Convert__FP1281_0__FP1281_1__FP1281_2,
  Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3,
  Convert__BDXAddr64Disp123_0,
  Convert__GR641_0__GR641_1,
  Convert__GR641_0__BDXAddr64Disp123_1,
  Convert__GR641_0__ADDR641_1,
  Convert__U4Imm1_0__BDXAddr64Disp123_1,
  Convert__U4Imm1_0__GR641_1,
  Convert__GR321_0__Tie0_1_1__GR641_1,
  Convert__ADDR641_0,
  Convert__BDXAddr64Disp203_0,
  Convert__U4Imm1_0__BDXAddr64Disp203_1,
  Convert__U4Imm1_0__PCRel161_1__BDXAddr64Disp123_2,
  Convert__U4Imm1_0__PCRel121_1__PCRel241_2,
  Convert__GR641_0__PCRelTLS162_1,
  Convert__GR641_0__PCRelTLS322_1,
  Convert__U4Imm1_0__PCRel161_1,
  Convert__U4Imm1_0__PCRel321_1,
  Convert__GR321_0__Tie0_1_1__PCRel161_1,
  Convert__GR641_0__Tie0_1_1__PCRel161_1,
  Convert__GRH321_0__Tie0_1_1__PCRel321_1,
  Convert__GR321_0__Tie0_1_1__GR321_1__PCRel161_2,
  Convert__GR641_0__Tie0_1_1__GR641_1__PCRel161_2,
  Convert__GR321_0__Tie0_1_1__GR321_1__BDAddr64Disp122_2,
  Convert__GR641_0__Tie0_1_1__GR641_1__BDAddr64Disp202_2,
  Convert__GR321_0__BDXAddr64Disp123_1,
  Convert__FP641_0__BDXAddr64Disp123_1,
  Convert__FP641_0__FP641_1,
  Convert__FP641_0__GR321_1,
  Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP641_0__GR641_1,
  Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2,
  Convert__GR1281_0__Tie0_1_1__GR1281_1__BDAddr64Disp122_2,
  Convert__GR1281_0__Tie0_1_1__GR1281_1__BDAddr64Disp202_2,
  Convert__FP321_0__BDXAddr64Disp123_1,
  Convert__FP321_0__FP321_1,
  Convert__FP321_0__GR321_1,
  Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP321_0__GR641_1,
  Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__FP1281_0__FP1281_1,
  Convert__BDAddr64Disp122_0,
  Convert__GR321_0__U4Imm1_1__FP641_2,
  Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__GR321_0__U4Imm1_1__FP321_2,
  Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__GR321_0__S32Imm1_1,
  Convert__GR321_0__U4Imm1_1__FP1281_2,
  Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__GR641_0__BDXAddr64Disp203_1,
  Convert__GR641_0__U4Imm1_1__FP641_2,
  Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__GR641_0__U4Imm1_1__FP321_2,
  Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__GR641_0__S32Imm1_1,
  Convert__GR641_0__GR321_1,
  Convert__GR641_0__PCRel321_1,
  Convert__GR641_0__S16Imm1_1,
  Convert__BDAddr64Disp122_0__S16Imm1_1,
  Convert__GR641_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2,
  Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__S8Imm1_1__PCRel161_2,
  Convert__GR641_0__S16Imm1_1__U4Imm1_2,
  Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR641_0__GR641_1__BDAddr64Disp122_2,
  Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__GR641_1__PCRel161_2,
  Convert__GR641_0__GR641_1__U4Imm1_2,
  Convert__GR641_0__U4Imm1_1__FP1281_2,
  Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__GRH321_0__BDXAddr64Disp203_1,
  Convert__GRH321_0__GRH321_1,
  Convert__GR321_0__S16Imm1_1,
  Convert__GRH321_0__GR321_1,
  Convert__GR321_0__PCRel321_1,
  Convert__GR321_0__BDXAddr64Disp203_1,
  Convert__GR321_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2,
  Convert__GRH321_0__S32Imm1_1,
  Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__S8Imm1_1__PCRel161_2,
  Convert__GR321_0__S16Imm1_1__U4Imm1_2,
  Convert__GR641_0__GR1281_1__Tie0_1_1__Tie1_1_1,
  Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1,
  Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1,
  Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__BDAddr32Disp122_2,
  Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__BDAddr32Disp202_2,
  Convert__BDAddr64Disp122_0__U16Imm1_1,
  Convert__GR321_0__U32Imm1_1,
  Convert__GR321_0__U16Imm1_1__U4Imm1_2,
  Convert__GR321_0__U16Imm1_1,
  Convert__GR641_0__U32Imm1_1,
  Convert__GR641_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2,
  Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__U8Imm1_1__PCRel161_2,
  Convert__GR641_0__U16Imm1_1__U4Imm1_2,
  Convert__GR641_0__U16Imm1_1,
  Convert__GR641_0__BDAddr64Disp202_2__U4Imm1_1,
  Convert__GR641_0__BDAddr64Disp202_1,
  Convert__BDAddr64Disp122_0__U8Imm1_1,
  Convert__GR321_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2,
  Convert__GRH321_0__U32Imm1_1,
  Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__U8Imm1_1__PCRel161_2,
  Convert__BDAddr64Disp202_0__U8Imm1_1,
  Convert__GR321_0__U4Imm1_1__BDAddr64Disp122_2,
  Convert__GRH321_0__U4Imm1_1__BDAddr64Disp202_2,
  Convert__GR321_0__U4Imm1_1__BDAddr64Disp202_2,
  Convert__GR321_0__GR321_1,
  Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR321_0__GR321_1__BDAddr64Disp122_2,
  Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__GR321_1__PCRel161_2,
  Convert__GR321_0__GR321_1__U4Imm1_2,
  Convert__GR641_0__GR641_1__Tie0_1_1__Tie1_1_1,
  Convert__GR321_0__BDAddr64Disp202_2__U4Imm1_1,
  Convert__GR321_0__BDAddr64Disp202_1,
  Convert__FP641_0__FP641_2__FP641_1,
  Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2,
  Convert__AR321_0__AR321_1,
  Convert__GR1281_0__GR1281_2__GR641_1,
  Convert__GR1281_0__GR1281_2__GR641_1__U4Imm1_3,
  Convert_NoOperands,
  Convert__GR641_0__FP641_1__U4Imm1_2,
  Convert__GR1281_0__Tie0_1_1__GR641_1,
  Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2,
  Convert__GR1281_0__FP1281_1__U4Imm1_2,
  Convert__GR321_0__Tie0_1_1__GR321_1__BDAddr64Disp202_2,
  Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__U4Imm1_2,
  Convert__GR641_0__FP641_1,
  Convert__GR1281_0__FP1281_1,
  Convert__FP1281_0__GR321_1,
  Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP1281_0__GR641_1,
  Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__FP1281_0__GR1281_1,
  Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp123_1,
  Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__GR641_2,
  Convert__FP641_0__FP641_1__Tie0_1_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__FP321_1__Tie0_1_1__FP321_2__U4Imm1_3,
  Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp203_1,
  Convert__GR1281_0__Tie0_1_1__GR321_1,
  Convert__GR321_0__AR321_1,
  Convert__GR641_0__GR641_1__BDAddr32Disp202_2,
  Convert__GR321_0__GR641_1,
  Convert__GR321_0,
  Convert__GR641_0,
  Convert__GR321_0__Tie0_1_1,
  Convert__GR1281_0__GR321_1,
  Convert__FP641_0__U4Imm1_1__FP641_2,
  Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__U4Imm1_1__FP321_2,
  Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__FP1281_0__U4Imm1_1__FP1281_2,
  Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__GR1281_0__GR641_1,
  Convert__GR641_0__Tie0_1_1__BDXAddr64Disp123_1,
  Convert__GR321_0__Tie0_1_1__U4Imm1_1__BDAddr64Disp122_2,
  Convert__GRH321_0__Tie0_1_1__U4Imm1_1__BDAddr64Disp202_2,
  Convert__GR321_0__Tie0_1_1__U4Imm1_1__BDAddr64Disp202_2,
  Convert__GR641_0__GR641_2__GR641_1,
  Convert__GR641_0__GR641_2__GR641_1__U4Imm1_3,
  Convert__FP1281_0__FP1281_2__FP1281_1,
  Convert__GRH321_0__Tie0_1_1__U16Imm1_1,
  Convert__GR321_0__Tie0_1_1__U16Imm1_1,
  Convert__GR641_0__GR321_1__GR321_2,
  Convert__GR641_0__GR321_1__GR321_2__U4Imm1_3,
  Convert__PCRel161_0,
  Convert__PCRel321_0,
  Convert__GR1281_1__GR641_0__Tie0_1_1,
  Convert__GR1281_0__GR1281_2__GR1281_1__Tie0_1_1__Tie1_1_1__Tie2_1_1,
  Convert__GR321_0__GR321_1__BDAddr64Disp202_2,
  Convert__GR641_0__GR641_1__BDAddr64Disp202_2,
  Convert__AR321_0__AR321_1__BDAddr64Disp122_2,
  Convert__AR321_0__AR321_1__BDAddr64Disp202_2,
  Convert__BDAddr64Disp122_0__BDAddr64Disp122_1,
  Convert__GR321_0__BDXAddr64Disp123_1__U4Imm1_2,
  Convert__CR641_0__CR641_1__BDAddr64Disp122_2,
  Convert__CR641_0__CR641_1__BDAddr64Disp202_2,
  Convert__FP641_0__FP321_1,
  Convert__FP641_0__FP321_1__U4Imm1_2,
  Convert__VR1281_0__BDXAddr64Disp123_1,
  Convert__FP641_0__FP1281_1,
  Convert__FP641_0__BDXAddr64Disp203_1,
  Convert__FP321_0__FP641_1,
  Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__FP1281_1,
  Convert__FP321_0__BDXAddr64Disp203_1,
  Convert__GR641_0__GR641_1__BDAddr64Disp122_2__BDAddr64Disp122_3,
  Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2,
  Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1,
  Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1,
  Convert__GRH321_0__Tie0_1_1__GRH321_1__U4Imm1_2,
  Convert__GRH321_0__Tie0_1_1__GRH321_1,
  Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1,
  Convert__GR641_0__Tie0_1_1__S16Imm1_1__U4Imm1_2,
  Convert__GR641_0__Tie0_1_1__GR641_1__U4Imm1_2,
  Convert__GRH321_0__Tie0_1_1__S16Imm1_1__U4Imm1_2,
  Convert__GRH321_0__Tie0_1_1__S16Imm1_1,
  Convert__GR321_0__Tie0_1_1__S16Imm1_1__U4Imm1_2,
  Convert__GR321_0__Tie0_1_1__GR321_1__U4Imm1_2,
  Convert__GR1281_0__BDAddr64Disp122_1__BDAddr64Disp122_2,
  Convert__GR1281_0__BDXAddr64Disp203_1,
  Convert__GR641_0__GR641_1__Tie0_1_1__GR641_2__U4Imm1_3,
  Convert__FP1281_0__BDXAddr64Disp123_1,
  Convert__FP1281_0__FP641_1,
  Convert__FP1281_0__FP641_1__U4Imm1_2,
  Convert__FP1281_0__FP321_1,
  Convert__FP641_0,
  Convert__FP321_0,
  Convert__FP1281_0,
  Convert__FP641_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2,
  Convert__FP641_0__Tie0_1_1__FP641_1__FP641_2,
  Convert__FP321_0__Tie0_1_1__FP321_1__BDXAddr64Disp123_2,
  Convert__FP321_0__Tie0_1_1__FP321_1__FP321_2,
  Convert__FP1281_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2,
  Convert__FP1281_0__Tie0_1_1__FP641_1__FP641_2,
  Convert__FP641_0__Tie0_1_1__FP321_1,
  Convert__GR1281_0__GR641_1__GR641_2,
  Convert__GR1281_0,
  Convert__BDRAddr64Disp123_0__BDAddr64Disp122_1__GR641_2,
  Convert__FP1281_0__Tie0_1_1__BDXAddr64Disp123_1,
  Convert__FP1281_0__Tie0_1_1__FP641_1,
  Convert__FP1281_0__FP641_1__BDXAddr64Disp123_2,
  Convert__FP641_0__FP641_1__BDXAddr64Disp123_2,
  Convert__FP1281_0__FP641_1__FP641_2,
  Convert__U4Imm1_0__U4Imm1_1,
  Convert__GRH321_0__Tie0_1_1__U32Imm1_1,
  Convert__imm_95_0__BDXAddr64Disp123_0,
  Convert__imm_95_0__GR641_0,
  Convert__GR641_1__GR321_0__Tie0_1_1,
  Convert__BDAddr64Disp122_0__BDLAddr64Disp12Len83_1,
  Convert__GR641_0__BDAddr64Disp122_1__GR641_2__BDAddr64Disp122_3,
  Convert__GR641_0__Tie0_1_1,
  Convert__FP1281_0__FP1281_1__Tie0_1_1__FP1281_2__U4Imm1_3,
  Convert__GR641_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GRH321_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GR321_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GR321_0__GR321_1__BDAddr32Disp202_2,
  Convert__AR321_0__GR321_1,
  Convert__GRH321_0__GRH321_2__GRH321_1__U4Imm1_3,
  Convert__GRH321_0__GRH321_2__GRH321_1,
  Convert__GR321_0__GR321_2__GR321_1__U4Imm1_3,
  Convert__GR321_0__GR321_2__GR321_1,
  Convert__GR321_0__Tie0_1_1__BDAddr32Disp122_1,
  Convert__GR1281_0__Tie0_1_1__BDAddr32Disp122_1,
  Convert__FP1281_0__FP1281_1__BDXAddr64Disp123_2,
  Convert__BDAddr32Disp122_0,
  Convert__BDLAddr64Disp12Len43_0__BDAddr32Disp122_1__U4Imm1_2,
  Convert__GR321_0__GR641_1__U4Imm1_2,
  Convert__VR1281_0__BDXAddr64Disp123_1__imm_95_0,
  Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GRH321_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GRH321_0__BDAddr64Disp202_1,
  Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__U8Imm1_0,
  Convert__FP321_0__U4Imm1_1__FP641_2,
  Convert__GRH321_0__U16Imm1_1,
  Convert__BDLAddr64Disp12Len43_0,
  Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1,
  Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1__U4Imm1_2,
  Convert__GR641_1__GR1281_0__Tie1_1_1,
  Convert__GR641_1__GR1281_0__Tie1_1_1__U4Imm1_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3,
  Convert__VR1281_0__VR1281_1__VR1281_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3,
  Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3,
  Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__U4Imm1_2,
  Convert__VR1281_0__VR1281_1,
  Convert__GR321_0__VR1281_1__U4Imm1_2,
  Convert__GR321_0__VR1281_1__U4Imm1_2__U4Imm1_3,
  Convert__GR641_0__VR1281_1__U4Imm1_2,
  Convert__GR641_0__VR1281_1__U4Imm1_2__U4Imm1_3,
  Convert__VR1281_0__GR321_1__U8Imm1_2__U4Imm1_3,
  Convert__VR1281_0__GR641_1__U8Imm1_2__U4Imm1_3,
  Convert__VR1281_0__Tie0_1_1__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4,
  Convert__VR1281_0__Tie0_1_1__VR1281_1__VR1281_2__U8Imm1_3,
  Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3,
  Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0,
  Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0,
  Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5,
  Convert__VR1281_0__VR1281_1__U12Imm1_2__U4Imm1_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__U12Imm1_2,
  Convert__VR1281_0__U16Imm1_1,
  Convert__VR1281_0__Tie0_1_1__BDVAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__Tie0_1_1__BDVAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__U8Imm1_1__U8Imm1_2__U4Imm1_3,
  Convert__VR1281_0__U8Imm1_1__U8Imm1_2,
  Convert__VR1281_0__VR1281_1__U4Imm1_2__imm_95_0,
  Convert__VR1281_0__VR1281_1__imm_95_0,
  Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2,
  Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U4Imm1_2,
  Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U3Imm1_2,
  Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U4Imm1_2,
  Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U2Imm1_2,
  Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U1Imm1_2,
  Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U3Imm1_2,
  Convert__GR641_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3,
  Convert__GR641_0__VR1281_1__BDAddr32Disp122_2,
  Convert__VR1281_0__U16Imm1_1__U4Imm1_2,
  Convert__VR1281_0__GR321_1__BDAddr64Disp122_2,
  Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2,
  Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2__U4Imm1_3,
  Convert__VR1281_0__BDAddr64Disp122_1__U8Imm1_2,
  Convert__VR1281_0__Tie0_1_1__GR641_1__BDAddr32Disp122_2__U4Imm1_3,
  Convert__VR1281_0__Tie0_1_1__GR321_1__BDAddr32Disp122_2,
  Convert__VR1281_0__Tie0_1_1__GR641_1__BDAddr32Disp122_2,
  Convert__VR1281_0__GR641_1__GR641_2,
  Convert__VR1281_0__VR1281_1__VR1281_1,
  Convert__VR1281_0,
  Convert__VR1281_0__VR1281_1__U8Imm1_2__U8Imm1_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__U16Imm1_2__U4Imm1_3,
  Convert__VR1281_0__VR1281_1__U16Imm1_2,
  Convert__VR1281_0__S16Imm1_1__U4Imm1_2,
  Convert__VR1281_0__S16Imm1_1,
  Convert__VR1281_0__BDVAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__BDVAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3,
  Convert__VR1281_0__BDXAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__BDXAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__BDXAddr64Disp123_1__U3Imm1_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__imm_95_0,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0,
  Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3,
  Convert__VR321_0__VR321_1__U4Imm1_2__U4Imm1_3,
  Convert__VR641_0__VR641_1__VR641_2,
  Convert__VR321_0__VR321_1__VR321_2,
  Convert__VR641_0__VR641_1,
  Convert__VR321_0__VR321_1,
  Convert__VR1281_0__VR641_1,
  Convert__VR641_0__VR321_1,
  Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3,
  Convert__VR641_0__VR1281_1__U4Imm1_2__U4Imm1_3,
  Convert__VR641_0__VR641_1__VR641_2__VR641_3,
  Convert__VR321_0__VR321_1__VR321_2__VR321_3,
  Convert__VR641_0__VR641_1__VR641_2__U4Imm1_3,
  Convert__VR321_0__VR321_1__VR321_2__U4Imm1_3,
  Convert__VR641_0__VR641_1__U4Imm1_2,
  Convert__VR321_0__VR321_1__U4Imm1_2,
  Convert__VR641_0__VR641_1__U12Imm1_2,
  Convert__VR321_0__VR321_1__U12Imm1_2,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][13] = {
  // Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0_1_1__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__Tie0_1_1__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__S16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__GR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp202_0__S8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GRH321_0__GRH321_1__GRH321_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GRH321_0__GRH321_1__GR321_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__S16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__GR321_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1
  { CVT_95_addBDLAddrOperands, 1, CVT_95_addBDLAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0_1_1__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP1281_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__BDXAddr64Disp123_0
  { CVT_95_addBDXAddrOperands, 1, CVT_Done },
  // Convert__GR641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__ADDR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__BDXAddr64Disp123_1
  { CVT_95_addImmOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__GR641_1
  { CVT_95_addImmOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__ADDR641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__BDXAddr64Disp203_0
  { CVT_95_addBDXAddrOperands, 1, CVT_Done },
  // Convert__U4Imm1_0__BDXAddr64Disp203_1
  { CVT_95_addImmOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel161_1__BDXAddr64Disp123_2
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__U4Imm1_0__PCRel121_1__PCRel241_2
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__PCRelTLS162_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmTLSOperands, 2, CVT_Done },
  // Convert__GR641_0__PCRelTLS322_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmTLSOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel161_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel321_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__PCRel161_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__PCRel161_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__GR321_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__GR641_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDLAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR1281_0__Tie0_1_1__GR1281_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR1281_0__Tie0_1_1__GR1281_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0
  { CVT_95_addBDAddrOperands, 1, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__S16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__GR641_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GRH321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__GRH321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GRH321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GRH321_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR1281_1__Tie0_1_1__Tie1_1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_Tied, Tie1_1_1, CVT_Done },
  // Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1
  { CVT_95_addBDLAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_Tied, Tie1_1_1, CVT_Done },
  // Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_Tied, Tie1_1_1, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_Tied, Tie1_1_1, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp122_0__U16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_2__U4Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GRH321_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp202_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GRH321_0__U4Imm1_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__GR321_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__GR321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__Tie0_1_1__Tie1_1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_Tied, Tie1_1_1, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_2__U4Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_2__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDLAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__AR321_0__AR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__GR1281_2__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__GR1281_2__GR641_1__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__GR641_0__FP641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR1281_0__Tie0_1_1__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2
  { CVT_95_addBDAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR1281_0__FP1281_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__GR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_Tied, Tie1_1_1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__GR1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__GR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_Tied, Tie1_1_1, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__FP641_1__Tie0_1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__FP321_1__Tie0_1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0_1_1__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__AR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__GR641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__GR321_0__Tie0_1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__GR1281_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__U4Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__U4Imm1_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__U4Imm1_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_2__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_2__GR641_1__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__FP1281_2__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR321_1__GR321_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__GR321_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__PCRel161_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__PCRel321_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__GR1281_1__GR641_0__Tie0_1_1
  { CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__GR1281_0__GR1281_2__GR1281_1__Tie0_1_1__Tie1_1_1__Tie2_1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_Tied, Tie1_1_1, CVT_Tied, Tie2_1_1, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__AR321_0__AR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__AR321_0__AR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp122_0__BDAddr64Disp122_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp123_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__CR641_0__CR641_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__CR641_0__CR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__FP641_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__FP321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr64Disp122_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__GRH321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__GRH321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__GR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__GR321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR1281_0__BDAddr64Disp122_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR1281_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__Tie0_1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FP1281_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP321_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP1281_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP641_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0_1_1__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0_1_1__FP321_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0_1_1__FP321_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP1281_0__Tie0_1_1__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0_1_1__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__GR641_1__GR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR1281_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__BDRAddr64Disp123_0__BDAddr64Disp122_1__GR641_2
  { CVT_95_addBDRAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__Tie0_1_1__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0_1_1__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP641_0__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP1281_0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__U4Imm1_0__U4Imm1_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_95_0__BDXAddr64Disp123_0
  { CVT_imm_95_0, 0, CVT_95_addBDXAddrOperands, 1, CVT_Done },
  // Convert__imm_95_0__GR641_0
  { CVT_imm_95_0, 0, CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__GR641_1__GR321_0__Tie0_1_1
  { CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__BDAddr64Disp122_0__BDLAddr64Disp12Len83_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addBDLAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp122_1__GR641_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR641_0__Tie0_1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__FP1281_0__FP1281_1__Tie0_1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__AR321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GRH321_0__GRH321_2__GRH321_1__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GRH321_0__GRH321_2__GRH321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_2__GR321_1__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__GR321_2__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__BDAddr32Disp122_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0_1_1__BDAddr32Disp122_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP1281_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__BDAddr32Disp122_0
  { CVT_95_addBDAddrOperands, 1, CVT_Done },
  // Convert__BDLAddr64Disp12Len43_0__BDAddr32Disp122_1__U4Imm1_2
  { CVT_95_addBDLAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__GR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__U8Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GRH321_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BDLAddr64Disp12Len43_0
  { CVT_95_addBDLAddrOperands, 1, CVT_Done },
  // Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_Tied, Tie1_1_1, CVT_Done },
  // Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_Tied, Tie1_1_1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_1__GR1281_0__Tie1_1_1
  { CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 1, CVT_Tied, Tie1_1_1, CVT_Done },
  // Convert__GR641_1__GR1281_0__Tie1_1_1__U4Imm1_2
  { CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 1, CVT_Tied, Tie1_1_1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__VR1281_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__VR1281_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__VR1281_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__VR1281_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__GR321_1__U8Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__GR641_1__U8Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__VR1281_1__VR1281_2__U8Imm1_3
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U12Imm1_2__U4Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U12Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__BDVAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__BDVAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__U8Imm1_1__U8Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__U8Imm1_1__U8Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U4Imm1_2__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__VR1281_1__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U3Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U3Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__VR1281_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__U16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__BDAddr64Disp122_1__U8Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__GR641_1__BDAddr32Disp122_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__GR321_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__GR641_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__GR641_1__GR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR1281_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U8Imm1_2__U8Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U16Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__VR1281_0__BDVAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDVAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U3Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_95_addImmOperands, 5, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR321_0__VR321_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR641_0__VR641_1__VR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__VR321_0__VR321_1__VR321_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__VR641_0__VR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR321_0__VR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR1281_0__VR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR641_0__VR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR641_0__VR1281_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR641_0__VR641_1__VR641_2__VR641_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_Done },
  // Convert__VR321_0__VR321_1__VR321_2__VR321_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_Done },
  // Convert__VR641_0__VR641_1__VR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR321_0__VR321_1__VR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR641_0__VR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR321_0__VR321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR641_0__VR641_1__U12Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR321_0__VR321_1__U12Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
};

void SystemZAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  unsigned OpIdx;
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    OpIdx = *(p + 1);
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied: {
      assert(OpIdx < (size_t)(std::end(TiedAsmOperandTable) -
                          std::begin(TiedAsmOperandTable)) &&
             "Tied operand not found");
      unsigned TiedResOpnd = TiedAsmOperandTable[OpIdx][0];
      if (TiedResOpnd != (uint8_t) -1)
        Inst.addOperand(Inst.getOperand(TiedResOpnd));
      break;
    }
    case CVT_95_addRegOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addBDXAddrOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addBDXAddrOperands(Inst, 3);
      break;
    case CVT_95_addImmOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addBDAddrOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addBDAddrOperands(Inst, 2);
      break;
    case CVT_95_addBDLAddrOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addBDLAddrOperands(Inst, 3);
      break;
    case CVT_95_addImmTLSOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addImmTLSOperands(Inst, 2);
      break;
    case CVT_95_addBDRAddrOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addBDRAddrOperands(Inst, 3);
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_95_addBDVAddrOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addBDVAddrOperands(Inst, 3);
      break;
    }
  }
}

void SystemZAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_95_addRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDXAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addBDLAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addImmTLSOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addBDRAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addBDVAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  OptionalMatchClass = 1,
  MCK_LAST_TOKEN = OptionalMatchClass,
  MCK_CCR, // register class 'CCR'
  MCK_FPCRegs, // register class 'FPCRegs'
  MCK_ADDR128Bit, // register class 'ADDR128Bit'
  MCK_FP128Bit, // register class 'FP128Bit'
  MCK_GR128Bit, // register class 'GR128Bit'
  MCK_ADDR32Bit, // register class 'ADDR32Bit'
  MCK_ADDR64Bit, // register class 'ADDR64Bit'
  MCK_AR32Bit, // register class 'AR32Bit'
  MCK_CR64Bit, // register class 'CR64Bit'
  MCK_FP32Bit, // register class 'FP32Bit'
  MCK_FP64Bit, // register class 'FP64Bit'
  MCK_GR32Bit, // register class 'GR32Bit'
  MCK_GR64Bit, // register class 'GR64Bit'
  MCK_GRH32Bit, // register class 'GRH32Bit'
  MCK_VF128Bit, // register class 'VF128Bit'
  MCK_Reg13, // derived register class
  MCK_GRX32Bit, // register class 'GRX32Bit'
  MCK_VR128Bit, // register class 'VR128Bit'
  MCK_VR32Bit, // register class 'VR32Bit'
  MCK_VR64Bit, // register class 'VR64Bit'
  MCK_AnyRegBit, // register class 'AnyRegBit'
  MCK_LAST_REGISTER = MCK_AnyRegBit,
  MCK_ADDR128, // user defined class 'ADDR128AsmOperand'
  MCK_ADDR32, // user defined class 'ADDR32AsmOperand'
  MCK_ADDR64, // user defined class 'ADDR64AsmOperand'
  MCK_AR32, // user defined class 'AR32AsmOperand'
  MCK_AnyReg, // user defined class 'AnyRegAsmOperand'
  MCK_BDAddr32Disp12, // user defined class 'BDAddr32Disp12'
  MCK_BDAddr32Disp20, // user defined class 'BDAddr32Disp20'
  MCK_BDAddr64Disp12, // user defined class 'BDAddr64Disp12'
  MCK_BDAddr64Disp20, // user defined class 'BDAddr64Disp20'
  MCK_BDLAddr64Disp12Len4, // user defined class 'BDLAddr64Disp12Len4'
  MCK_BDLAddr64Disp12Len8, // user defined class 'BDLAddr64Disp12Len8'
  MCK_BDRAddr64Disp12, // user defined class 'BDRAddr64Disp12'
  MCK_BDVAddr64Disp12, // user defined class 'BDVAddr64Disp12'
  MCK_BDXAddr64Disp12, // user defined class 'BDXAddr64Disp12'
  MCK_BDXAddr64Disp20, // user defined class 'BDXAddr64Disp20'
  MCK_CR64, // user defined class 'CR64AsmOperand'
  MCK_FP128, // user defined class 'FP128AsmOperand'
  MCK_FP32, // user defined class 'FP32AsmOperand'
  MCK_FP64, // user defined class 'FP64AsmOperand'
  MCK_GR128, // user defined class 'GR128AsmOperand'
  MCK_GR32, // user defined class 'GR32AsmOperand'
  MCK_GR64, // user defined class 'GR64AsmOperand'
  MCK_GRH32, // user defined class 'GRH32AsmOperand'
  MCK_GRX32, // user defined class 'GRX32AsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_PCRel12, // user defined class 'PCRel12'
  MCK_PCRel16, // user defined class 'PCRel16'
  MCK_PCRel24, // user defined class 'PCRel24'
  MCK_PCRel32, // user defined class 'PCRel32'
  MCK_PCRelTLS16, // user defined class 'PCRelTLS16'
  MCK_PCRelTLS32, // user defined class 'PCRelTLS32'
  MCK_S16Imm, // user defined class 'S16Imm'
  MCK_S32Imm, // user defined class 'S32Imm'
  MCK_S8Imm, // user defined class 'S8Imm'
  MCK_U12Imm, // user defined class 'U12Imm'
  MCK_U16Imm, // user defined class 'U16Imm'
  MCK_U1Imm, // user defined class 'U1Imm'
  MCK_U2Imm, // user defined class 'U2Imm'
  MCK_U32Imm, // user defined class 'U32Imm'
  MCK_U3Imm, // user defined class 'U3Imm'
  MCK_U48Imm, // user defined class 'U48Imm'
  MCK_U4Imm, // user defined class 'U4Imm'
  MCK_U6Imm, // user defined class 'U6Imm'
  MCK_U8Imm, // user defined class 'U8Imm'
  MCK_VF128, // user defined class 'VF128AsmOperand'
  MCK_VR128, // user defined class 'VR128AsmOperand'
  MCK_VR32, // user defined class 'VR32AsmOperand'
  MCK_VR64, // user defined class 'VR64AsmOperand'
  NumMatchClassKinds
};

} // end anonymous namespace

static unsigned getDiagKindFromRegisterClass(MatchClassKind RegisterClass) {
  return MCTargetAsmParser::Match_InvalidOperand;
}

static MatchClassKind matchTokenString(StringRef Name) {
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_ADDR128Bit:
    return B == MCK_GR128Bit;

  case MCK_ADDR32Bit:
    switch (B) {
    default: return false;
    case MCK_GR32Bit: return true;
    case MCK_GRX32Bit: return true;
    }

  case MCK_ADDR64Bit:
    switch (B) {
    default: return false;
    case MCK_GR64Bit: return true;
    case MCK_AnyRegBit: return true;
    }

  case MCK_FP32Bit:
    return B == MCK_VR32Bit;

  case MCK_FP64Bit:
    switch (B) {
    default: return false;
    case MCK_Reg13: return true;
    case MCK_VR64Bit: return true;
    case MCK_AnyRegBit: return true;
    }

  case MCK_GR32Bit:
    return B == MCK_GRX32Bit;

  case MCK_GR64Bit:
    return B == MCK_AnyRegBit;

  case MCK_GRH32Bit:
    return B == MCK_GRX32Bit;

  case MCK_VF128Bit:
    switch (B) {
    default: return false;
    case MCK_Reg13: return true;
    case MCK_VR128Bit: return true;
    case MCK_AnyRegBit: return true;
    }

  case MCK_Reg13:
    return B == MCK_AnyRegBit;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  SystemZOperand &Operand = (SystemZOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken() && Kind <= MCK_LAST_TOKEN)
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  switch (Kind) {
  default: break;
  // 'ADDR128' class
  case MCK_ADDR128: {
    DiagnosticPredicate DP(Operand.isADDR128());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'ADDR32' class
  case MCK_ADDR32: {
    DiagnosticPredicate DP(Operand.isADDR32());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'ADDR64' class
  case MCK_ADDR64: {
    DiagnosticPredicate DP(Operand.isADDR64());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'AR32' class
  case MCK_AR32: {
    DiagnosticPredicate DP(Operand.isAR32());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'AnyReg' class
  case MCK_AnyReg: {
    DiagnosticPredicate DP(Operand.isAnyReg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BDAddr32Disp12' class
  case MCK_BDAddr32Disp12: {
    DiagnosticPredicate DP(Operand.isBDAddr32Disp12());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BDAddr32Disp20' class
  case MCK_BDAddr32Disp20: {
    DiagnosticPredicate DP(Operand.isBDAddr32Disp20());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BDAddr64Disp12' class
  case MCK_BDAddr64Disp12: {
    DiagnosticPredicate DP(Operand.isBDAddr64Disp12());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BDAddr64Disp20' class
  case MCK_BDAddr64Disp20: {
    DiagnosticPredicate DP(Operand.isBDAddr64Disp20());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BDLAddr64Disp12Len4' class
  case MCK_BDLAddr64Disp12Len4: {
    DiagnosticPredicate DP(Operand.isBDLAddr64Disp12Len4());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BDLAddr64Disp12Len8' class
  case MCK_BDLAddr64Disp12Len8: {
    DiagnosticPredicate DP(Operand.isBDLAddr64Disp12Len8());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BDRAddr64Disp12' class
  case MCK_BDRAddr64Disp12: {
    DiagnosticPredicate DP(Operand.isBDRAddr64Disp12());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BDVAddr64Disp12' class
  case MCK_BDVAddr64Disp12: {
    DiagnosticPredicate DP(Operand.isBDVAddr64Disp12());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BDXAddr64Disp12' class
  case MCK_BDXAddr64Disp12: {
    DiagnosticPredicate DP(Operand.isBDXAddr64Disp12());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BDXAddr64Disp20' class
  case MCK_BDXAddr64Disp20: {
    DiagnosticPredicate DP(Operand.isBDXAddr64Disp20());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'CR64' class
  case MCK_CR64: {
    DiagnosticPredicate DP(Operand.isCR64());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'FP128' class
  case MCK_FP128: {
    DiagnosticPredicate DP(Operand.isFP128());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'FP32' class
  case MCK_FP32: {
    DiagnosticPredicate DP(Operand.isFP32());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'FP64' class
  case MCK_FP64: {
    DiagnosticPredicate DP(Operand.isFP64());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'GR128' class
  case MCK_GR128: {
    DiagnosticPredicate DP(Operand.isGR128());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'GR32' class
  case MCK_GR32: {
    DiagnosticPredicate DP(Operand.isGR32());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'GR64' class
  case MCK_GR64: {
    DiagnosticPredicate DP(Operand.isGR64());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'GRH32' class
  case MCK_GRH32: {
    DiagnosticPredicate DP(Operand.isGRH32());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'GRX32' class
  case MCK_GRX32: {
    DiagnosticPredicate DP(Operand.isGRX32());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'Imm' class
  case MCK_Imm: {
    DiagnosticPredicate DP(Operand.isImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'PCRel12' class
  case MCK_PCRel12: {
    DiagnosticPredicate DP(Operand.isImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'PCRel16' class
  case MCK_PCRel16: {
    DiagnosticPredicate DP(Operand.isImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'PCRel24' class
  case MCK_PCRel24: {
    DiagnosticPredicate DP(Operand.isImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'PCRel32' class
  case MCK_PCRel32: {
    DiagnosticPredicate DP(Operand.isImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'PCRelTLS16' class
  case MCK_PCRelTLS16: {
    DiagnosticPredicate DP(Operand.isImmTLS());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'PCRelTLS32' class
  case MCK_PCRelTLS32: {
    DiagnosticPredicate DP(Operand.isImmTLS());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'S16Imm' class
  case MCK_S16Imm: {
    DiagnosticPredicate DP(Operand.isS16Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'S32Imm' class
  case MCK_S32Imm: {
    DiagnosticPredicate DP(Operand.isS32Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'S8Imm' class
  case MCK_S8Imm: {
    DiagnosticPredicate DP(Operand.isS8Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U12Imm' class
  case MCK_U12Imm: {
    DiagnosticPredicate DP(Operand.isU12Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U16Imm' class
  case MCK_U16Imm: {
    DiagnosticPredicate DP(Operand.isU16Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U1Imm' class
  case MCK_U1Imm: {
    DiagnosticPredicate DP(Operand.isU1Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U2Imm' class
  case MCK_U2Imm: {
    DiagnosticPredicate DP(Operand.isU2Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U32Imm' class
  case MCK_U32Imm: {
    DiagnosticPredicate DP(Operand.isU32Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U3Imm' class
  case MCK_U3Imm: {
    DiagnosticPredicate DP(Operand.isU3Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U48Imm' class
  case MCK_U48Imm: {
    DiagnosticPredicate DP(Operand.isU48Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U4Imm' class
  case MCK_U4Imm: {
    DiagnosticPredicate DP(Operand.isU4Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U6Imm' class
  case MCK_U6Imm: {
    DiagnosticPredicate DP(Operand.isU6Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U8Imm' class
  case MCK_U8Imm: {
    DiagnosticPredicate DP(Operand.isU8Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'VF128' class
  case MCK_VF128: {
    DiagnosticPredicate DP(Operand.isVF128());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'VR128' class
  case MCK_VR128: {
    DiagnosticPredicate DP(Operand.isVR128());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'VR32' class
  case MCK_VR32: {
    DiagnosticPredicate DP(Operand.isVR32());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'VR64' class
  case MCK_VR64: {
    DiagnosticPredicate DP(Operand.isVR64());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case SystemZ::R0L: OpKind = MCK_GR32Bit; break;
    case SystemZ::R0H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R0D: OpKind = MCK_GR64Bit; break;
    case SystemZ::R1L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R1H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R1D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R2L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R2H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R2D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R3L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R3H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R3D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R4L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R4H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R4D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R5L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R5H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R5D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R6L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R6H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R6D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R7L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R7H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R7D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R8L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R8H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R8D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R9L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R9H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R9D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R10L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R10H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R10D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R11L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R11H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R11D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R12L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R12H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R12D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R13L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R13H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R13D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R14L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R14H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R14D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R15L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R15H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R15D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R0Q: OpKind = MCK_GR128Bit; break;
    case SystemZ::R2Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R4Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R6Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R8Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R10Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R12Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R14Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::F0S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F0D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F1S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F1D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F2S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F2D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F3S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F3D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F4S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F4D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F5S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F5D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F6S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F6D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F7S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F7D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F8S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F8D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F9S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F9D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F10S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F10D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F11S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F11D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F12S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F12D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F13S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F13D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F14S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F14D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F15S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F15D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F16S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F16D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F17S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F17D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F18S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F18D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F19S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F19D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F20S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F20D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F21S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F21D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F22S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F22D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F23S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F23D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F24S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F24D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F25S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F25D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F26S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F26D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F27S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F27D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F28S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F28D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F29S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F29D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F30S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F30D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F31S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F31D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F0Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F1Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F4Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F5Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F8Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F9Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F12Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F13Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::V0: OpKind = MCK_VF128Bit; break;
    case SystemZ::V1: OpKind = MCK_VF128Bit; break;
    case SystemZ::V2: OpKind = MCK_VF128Bit; break;
    case SystemZ::V3: OpKind = MCK_VF128Bit; break;
    case SystemZ::V4: OpKind = MCK_VF128Bit; break;
    case SystemZ::V5: OpKind = MCK_VF128Bit; break;
    case SystemZ::V6: OpKind = MCK_VF128Bit; break;
    case SystemZ::V7: OpKind = MCK_VF128Bit; break;
    case SystemZ::V8: OpKind = MCK_VF128Bit; break;
    case SystemZ::V9: OpKind = MCK_VF128Bit; break;
    case SystemZ::V10: OpKind = MCK_VF128Bit; break;
    case SystemZ::V11: OpKind = MCK_VF128Bit; break;
    case SystemZ::V12: OpKind = MCK_VF128Bit; break;
    case SystemZ::V13: OpKind = MCK_VF128Bit; break;
    case SystemZ::V14: OpKind = MCK_VF128Bit; break;
    case SystemZ::V15: OpKind = MCK_VF128Bit; break;
    case SystemZ::V16: OpKind = MCK_VR128Bit; break;
    case SystemZ::V17: OpKind = MCK_VR128Bit; break;
    case SystemZ::V18: OpKind = MCK_VR128Bit; break;
    case SystemZ::V19: OpKind = MCK_VR128Bit; break;
    case SystemZ::V20: OpKind = MCK_VR128Bit; break;
    case SystemZ::V21: OpKind = MCK_VR128Bit; break;
    case SystemZ::V22: OpKind = MCK_VR128Bit; break;
    case SystemZ::V23: OpKind = MCK_VR128Bit; break;
    case SystemZ::V24: OpKind = MCK_VR128Bit; break;
    case SystemZ::V25: OpKind = MCK_VR128Bit; break;
    case SystemZ::V26: OpKind = MCK_VR128Bit; break;
    case SystemZ::V27: OpKind = MCK_VR128Bit; break;
    case SystemZ::V28: OpKind = MCK_VR128Bit; break;
    case SystemZ::V29: OpKind = MCK_VR128Bit; break;
    case SystemZ::V30: OpKind = MCK_VR128Bit; break;
    case SystemZ::V31: OpKind = MCK_VR128Bit; break;
    case SystemZ::CC: OpKind = MCK_CCR; break;
    case SystemZ::FPC: OpKind = MCK_FPCRegs; break;
    case SystemZ::A0: OpKind = MCK_AR32Bit; break;
    case SystemZ::A1: OpKind = MCK_AR32Bit; break;
    case SystemZ::A2: OpKind = MCK_AR32Bit; break;
    case SystemZ::A3: OpKind = MCK_AR32Bit; break;
    case SystemZ::A4: OpKind = MCK_AR32Bit; break;
    case SystemZ::A5: OpKind = MCK_AR32Bit; break;
    case SystemZ::A6: OpKind = MCK_AR32Bit; break;
    case SystemZ::A7: OpKind = MCK_AR32Bit; break;
    case SystemZ::A8: OpKind = MCK_AR32Bit; break;
    case SystemZ::A9: OpKind = MCK_AR32Bit; break;
    case SystemZ::A10: OpKind = MCK_AR32Bit; break;
    case SystemZ::A11: OpKind = MCK_AR32Bit; break;
    case SystemZ::A12: OpKind = MCK_AR32Bit; break;
    case SystemZ::A13: OpKind = MCK_AR32Bit; break;
    case SystemZ::A14: OpKind = MCK_AR32Bit; break;
    case SystemZ::A15: OpKind = MCK_AR32Bit; break;
    case SystemZ::C0: OpKind = MCK_CR64Bit; break;
    case SystemZ::C1: OpKind = MCK_CR64Bit; break;
    case SystemZ::C2: OpKind = MCK_CR64Bit; break;
    case SystemZ::C3: OpKind = MCK_CR64Bit; break;
    case SystemZ::C4: OpKind = MCK_CR64Bit; break;
    case SystemZ::C5: OpKind = MCK_CR64Bit; break;
    case SystemZ::C6: OpKind = MCK_CR64Bit; break;
    case SystemZ::C7: OpKind = MCK_CR64Bit; break;
    case SystemZ::C8: OpKind = MCK_CR64Bit; break;
    case SystemZ::C9: OpKind = MCK_CR64Bit; break;
    case SystemZ::C10: OpKind = MCK_CR64Bit; break;
    case SystemZ::C11: OpKind = MCK_CR64Bit; break;
    case SystemZ::C12: OpKind = MCK_CR64Bit; break;
    case SystemZ::C13: OpKind = MCK_CR64Bit; break;
    case SystemZ::C14: OpKind = MCK_CR64Bit; break;
    case SystemZ::C15: OpKind = MCK_CR64Bit; break;
    }
    return isSubclass(OpKind, Kind) ? (unsigned)MCTargetAsmParser::Match_Success :
                                      getDiagKindFromRegisterClass(Kind);
  }

  if (Kind > MCK_LAST_TOKEN && Kind <= MCK_LAST_REGISTER)
    return getDiagKindFromRegisterClass(Kind);

  return MCTargetAsmParser::Match_InvalidOperand;
}

#ifndef NDEBUG
const char *getMatchClassName(MatchClassKind Kind) {
  switch (Kind) {
  case InvalidMatchClass: return "InvalidMatchClass";
  case OptionalMatchClass: return "OptionalMatchClass";
  case MCK_CCR: return "MCK_CCR";
  case MCK_FPCRegs: return "MCK_FPCRegs";
  case MCK_ADDR128Bit: return "MCK_ADDR128Bit";
  case MCK_FP128Bit: return "MCK_FP128Bit";
  case MCK_GR128Bit: return "MCK_GR128Bit";
  case MCK_ADDR32Bit: return "MCK_ADDR32Bit";
  case MCK_ADDR64Bit: return "MCK_ADDR64Bit";
  case MCK_AR32Bit: return "MCK_AR32Bit";
  case MCK_CR64Bit: return "MCK_CR64Bit";
  case MCK_FP32Bit: return "MCK_FP32Bit";
  case MCK_FP64Bit: return "MCK_FP64Bit";
  case MCK_GR32Bit: return "MCK_GR32Bit";
  case MCK_GR64Bit: return "MCK_GR64Bit";
  case MCK_GRH32Bit: return "MCK_GRH32Bit";
  case MCK_VF128Bit: return "MCK_VF128Bit";
  case MCK_Reg13: return "MCK_Reg13";
  case MCK_GRX32Bit: return "MCK_GRX32Bit";
  case MCK_VR128Bit: return "MCK_VR128Bit";
  case MCK_VR32Bit: return "MCK_VR32Bit";
  case MCK_VR64Bit: return "MCK_VR64Bit";
  case MCK_AnyRegBit: return "MCK_AnyRegBit";
  case MCK_ADDR128: return "MCK_ADDR128";
  case MCK_ADDR32: return "MCK_ADDR32";
  case MCK_ADDR64: return "MCK_ADDR64";
  case MCK_AR32: return "MCK_AR32";
  case MCK_AnyReg: return "MCK_AnyReg";
  case MCK_BDAddr32Disp12: return "MCK_BDAddr32Disp12";
  case MCK_BDAddr32Disp20: return "MCK_BDAddr32Disp20";
  case MCK_BDAddr64Disp12: return "MCK_BDAddr64Disp12";
  case MCK_BDAddr64Disp20: return "MCK_BDAddr64Disp20";
  case MCK_BDLAddr64Disp12Len4: return "MCK_BDLAddr64Disp12Len4";
  case MCK_BDLAddr64Disp12Len8: return "MCK_BDLAddr64Disp12Len8";
  case MCK_BDRAddr64Disp12: return "MCK_BDRAddr64Disp12";
  case MCK_BDVAddr64Disp12: return "MCK_BDVAddr64Disp12";
  case MCK_BDXAddr64Disp12: return "MCK_BDXAddr64Disp12";
  case MCK_BDXAddr64Disp20: return "MCK_BDXAddr64Disp20";
  case MCK_CR64: return "MCK_CR64";
  case MCK_FP128: return "MCK_FP128";
  case MCK_FP32: return "MCK_FP32";
  case MCK_FP64: return "MCK_FP64";
  case MCK_GR128: return "MCK_GR128";
  case MCK_GR32: return "MCK_GR32";
  case MCK_GR64: return "MCK_GR64";
  case MCK_GRH32: return "MCK_GRH32";
  case MCK_GRX32: return "MCK_GRX32";
  case MCK_Imm: return "MCK_Imm";
  case MCK_PCRel12: return "MCK_PCRel12";
  case MCK_PCRel16: return "MCK_PCRel16";
  case MCK_PCRel24: return "MCK_PCRel24";
  case MCK_PCRel32: return "MCK_PCRel32";
  case MCK_PCRelTLS16: return "MCK_PCRelTLS16";
  case MCK_PCRelTLS32: return "MCK_PCRelTLS32";
  case MCK_S16Imm: return "MCK_S16Imm";
  case MCK_S32Imm: return "MCK_S32Imm";
  case MCK_S8Imm: return "MCK_S8Imm";
  case MCK_U12Imm: return "MCK_U12Imm";
  case MCK_U16Imm: return "MCK_U16Imm";
  case MCK_U1Imm: return "MCK_U1Imm";
  case MCK_U2Imm: return "MCK_U2Imm";
  case MCK_U32Imm: return "MCK_U32Imm";
  case MCK_U3Imm: return "MCK_U3Imm";
  case MCK_U48Imm: return "MCK_U48Imm";
  case MCK_U4Imm: return "MCK_U4Imm";
  case MCK_U6Imm: return "MCK_U6Imm";
  case MCK_U8Imm: return "MCK_U8Imm";
  case MCK_VF128: return "MCK_VF128";
  case MCK_VR128: return "MCK_VR128";
  case MCK_VR32: return "MCK_VR32";
  case MCK_VR64: return "MCK_VR64";
  case NumMatchClassKinds: return "NumMatchClassKinds";
  }
  llvm_unreachable("unhandled MatchClassKind!");
}

#endif // NDEBUG
FeatureBitset SystemZAsmParser::
ComputeAvailableFeatures(const FeatureBitset& FB) const {
  FeatureBitset Features;
  if ((FB[SystemZ::FeatureDistinctOps]))
    Features.set(Feature_FeatureDistinctOpsBit);
  if ((FB[SystemZ::FeatureFastSerialization]))
    Features.set(Feature_FeatureFastSerializationBit);
  if ((FB[SystemZ::FeatureFPExtension]))
    Features.set(Feature_FeatureFPExtensionBit);
  if ((FB[SystemZ::FeatureHighWord]))
    Features.set(Feature_FeatureHighWordBit);
  if ((FB[SystemZ::FeatureInterlockedAccess1]))
    Features.set(Feature_FeatureInterlockedAccess1Bit);
  if ((FB[SystemZ::FeatureLoadStoreOnCond]))
    Features.set(Feature_FeatureLoadStoreOnCondBit);
  if ((FB[SystemZ::FeaturePopulationCount]))
    Features.set(Feature_FeaturePopulationCountBit);
  if ((FB[SystemZ::FeatureMessageSecurityAssist3]))
    Features.set(Feature_FeatureMessageSecurityAssist3Bit);
  if ((FB[SystemZ::FeatureMessageSecurityAssist4]))
    Features.set(Feature_FeatureMessageSecurityAssist4Bit);
  if ((FB[SystemZ::FeatureResetReferenceBitsMultiple]))
    Features.set(Feature_FeatureResetReferenceBitsMultipleBit);
  if ((FB[SystemZ::FeatureExecutionHint]))
    Features.set(Feature_FeatureExecutionHintBit);
  if ((FB[SystemZ::FeatureLoadAndTrap]))
    Features.set(Feature_FeatureLoadAndTrapBit);
  if ((FB[SystemZ::FeatureMiscellaneousExtensions]))
    Features.set(Feature_FeatureMiscellaneousExtensionsBit);
  if ((FB[SystemZ::FeatureProcessorAssist]))
    Features.set(Feature_FeatureProcessorAssistBit);
  if ((FB[SystemZ::FeatureTransactionalExecution]))
    Features.set(Feature_FeatureTransactionalExecutionBit);
  if ((FB[SystemZ::FeatureDFPZonedConversion]))
    Features.set(Feature_FeatureDFPZonedConversionBit);
  if ((FB[SystemZ::FeatureEnhancedDAT2]))
    Features.set(Feature_FeatureEnhancedDAT2Bit);
  if ((FB[SystemZ::FeatureLoadAndZeroRightmostByte]))
    Features.set(Feature_FeatureLoadAndZeroRightmostByteBit);
  if ((FB[SystemZ::FeatureLoadStoreOnCond2]))
    Features.set(Feature_FeatureLoadStoreOnCond2Bit);
  if ((FB[SystemZ::FeatureMessageSecurityAssist5]))
    Features.set(Feature_FeatureMessageSecurityAssist5Bit);
  if ((FB[SystemZ::FeatureDFPPackedConversion]))
    Features.set(Feature_FeatureDFPPackedConversionBit);
  if ((FB[SystemZ::FeatureVector]))
    Features.set(Feature_FeatureVectorBit);
  if ((FB[SystemZ::FeatureMiscellaneousExtensions2]))
    Features.set(Feature_FeatureMiscellaneousExtensions2Bit);
  if ((FB[SystemZ::FeatureGuardedStorage]))
    Features.set(Feature_FeatureGuardedStorageBit);
  if ((FB[SystemZ::FeatureMessageSecurityAssist7]))
    Features.set(Feature_FeatureMessageSecurityAssist7Bit);
  if ((FB[SystemZ::FeatureMessageSecurityAssist8]))
    Features.set(Feature_FeatureMessageSecurityAssist8Bit);
  if ((FB[SystemZ::FeatureVectorEnhancements1]))
    Features.set(Feature_FeatureVectorEnhancements1Bit);
  if ((FB[SystemZ::FeatureVectorPackedDecimal]))
    Features.set(Feature_FeatureVectorPackedDecimalBit);
  if ((FB[SystemZ::FeatureInsertReferenceBitsMultiple]))
    Features.set(Feature_FeatureInsertReferenceBitsMultipleBit);
  if ((FB[SystemZ::FeatureMiscellaneousExtensions3]))
    Features.set(Feature_FeatureMiscellaneousExtensions3Bit);
  if ((FB[SystemZ::FeatureMessageSecurityAssist9]))
    Features.set(Feature_FeatureMessageSecurityAssist9Bit);
  if ((FB[SystemZ::FeatureVectorEnhancements2]))
    Features.set(Feature_FeatureVectorEnhancements2Bit);
  if ((FB[SystemZ::FeatureVectorPackedDecimalEnhancement]))
    Features.set(Feature_FeatureVectorPackedDecimalEnhancementBit);
  if ((FB[SystemZ::FeatureEnhancedSort]))
    Features.set(Feature_FeatureEnhancedSortBit);
  if ((FB[SystemZ::FeatureDeflateConversion]))
    Features.set(Feature_FeatureDeflateConversionBit);
  return Features;
}

static bool checkAsmTiedOperandConstraints(const SystemZAsmParser&AsmParser,
                               unsigned Kind,
                               const OperandVector &Operands,
                               uint64_t &ErrorInfo) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    case CVT_Tied: {
      unsigned OpIdx = *(p+1);
      assert(OpIdx < (size_t)(std::end(TiedAsmOperandTable) -
                              std::begin(TiedAsmOperandTable)) &&
             "Tied operand not found");
      unsigned OpndNum1 = TiedAsmOperandTable[OpIdx][1];
      unsigned OpndNum2 = TiedAsmOperandTable[OpIdx][2];
      if (OpndNum1 != OpndNum2) {
        auto &SrcOp1 = Operands[OpndNum1];
        auto &SrcOp2 = Operands[OpndNum2];
        if (SrcOp1->isReg() && SrcOp2->isReg()) {
          if (!AsmParser.regsEqual(*SrcOp1, *SrcOp2)) {
            ErrorInfo = OpndNum2;
            return false;
          }
        }
      }
      break;
    }
    default:
      break;
    }
  }
  return true;
}

static const char *const MnemonicTable =
    "\001a\002ad\003adb\004adbr\003adr\004adtr\005adtra\002ae\003aeb\004aebr"
    "\003aer\003afi\002ag\003agf\004agfi\004agfr\003agh\004aghi\005aghik\003"
    "agr\004agrk\004agsi\002ah\005ahhhr\005ahhlr\003ahi\004ahik\003ahy\003ai"
    "h\002al\003alc\004alcg\005alcgr\004alcr\004alfi\003alg\004algf\005algfi"
    "\005algfr\007alghsik\004algr\005algrk\005algsi\006alhhhr\006alhhlr\006a"
    "lhsik\003alr\004alrk\004alsi\005alsih\006alsihn\003aly\002ap\002ar\003a"
    "rk\003asi\002au\003aur\002aw\003awr\004axbr\003axr\004axtr\005axtra\002"
    "ay\001b\004bakr\003bal\004balr\003bas\004basr\005bassm\002bc\003bcr\003"
    "bct\004bctg\005bctgr\004bctr\002be\003ber\002bh\003bhe\004bher\003bhr\002"
    "bi\003bic\003bie\003bih\004bihe\003bil\004bile\004bilh\003bim\004bine\004"
    "binh\005binhe\004binl\005binle\005binlh\004binm\004bino\004binp\004binz"
    "\003bio\003bip\003biz\002bl\003ble\004bler\003blh\004blhr\003blr\002bm\003"
    "bmr\003bne\004bner\003bnh\004bnhe\005bnher\004bnhr\003bnl\004bnle\005bn"
    "ler\004bnlh\005bnlhr\004bnlr\003bnm\004bnmr\003bno\004bnor\003bnp\004bn"
    "pr\003bnz\004bnzr\002bo\003bor\002bp\003bpp\003bpr\004bprp\002br\004bra"
    "s\005brasl\003brc\004brcl\004brct\005brctg\005brcth\004brxh\005brxhg\005"
    "brxle\005brxlg\003bsa\003bsg\003bsm\003bxh\004bxhg\004bxle\005bxleg\002"
    "bz\003bzr\001c\002cd\003cdb\004cdbr\005cdfbr\006cdfbra\004cdfr\005cdftr"
    "\005cdgbr\006cdgbra\004cdgr\005cdgtr\006cdgtra\006cdlfbr\006cdlftr\006c"
    "dlgbr\006cdlgtr\004cdpt\003cdr\003cds\004cdsg\005cdstr\004cdsy\004cdtr\005"
    "cdutr\004cdzt\002ce\003ceb\004cebr\005cedtr\005cefbr\006cefbra\004cefr\005"
    "cegbr\006cegbra\004cegr\006celfbr\006celgbr\003cer\005cextr\003cfc\005c"
    "fdbr\006cfdbra\004cfdr\005cfdtr\005cfebr\006cfebra\004cfer\003cfi\005cf"
    "xbr\006cfxbra\004cfxr\005cfxtr\002cg\005cgdbr\006cgdbra\004cgdr\005cgdt"
    "r\006cgdtra\005cgebr\006cgebra\004cger\003cgf\004cgfi\004cgfr\005cgfrl\003"
    "cgh\004cghi\005cghrl\005cghsi\004cgib\005cgibe\005cgibh\006cgibhe\005cg"
    "ibl\006cgible\006cgiblh\006cgibne\006cgibnh\007cgibnhe\006cgibnl\007cgi"
    "bnle\007cgibnlh\004cgij\005cgije\005cgijh\006cgijhe\005cgijl\006cgijle\006"
    "cgijlh\006cgijne\006cgijnh\007cgijnhe\006cgijnl\007cgijnle\007cgijnlh\004"
    "cgit\005cgite\005cgith\006cgithe\005cgitl\006cgitle\006cgitlh\006cgitne"
    "\006cgitnh\007cgitnhe\006cgitnl\007cgitnle\007cgitnlh\003cgr\004cgrb\005"
    "cgrbe\005cgrbh\006cgrbhe\005cgrbl\006cgrble\006cgrblh\006cgrbne\006cgrb"
    "nh\007cgrbnhe\006cgrbnl\007cgrbnle\007cgrbnlh\004cgrj\005cgrje\005cgrjh"
    "\006cgrjhe\005cgrjl\006cgrjle\006cgrjlh\006cgrjne\006cgrjnh\007cgrjnhe\006"
    "cgrjnl\007cgrjnle\007cgrjnlh\004cgrl\004cgrt\005cgrte\005cgrth\006cgrth"
    "e\005cgrtl\006cgrtle\006cgrtlh\006cgrtne\006cgrtnh\007cgrtnhe\006cgrtnl"
    "\007cgrtnle\007cgrtnlh\005cgxbr\006cgxbra\004cgxr\005cgxtr\006cgxtra\002"
    "ch\003chf\004chhr\005chhsi\003chi\004chlr\004chrl\004chsi\003chy\003cib"
    "\004cibe\004cibh\005cibhe\004cibl\005cible\005ciblh\005cibne\005cibnh\006"
    "cibnhe\005cibnl\006cibnle\006cibnlh\003cih\003cij\004cije\004cijh\005ci"
    "jhe\004cijl\005cijle\005cijlh\005cijne\005cijnh\006cijnhe\005cijnl\006c"
    "ijnle\006cijnlh\003cit\004cite\004cith\005cithe\004citl\005citle\005cit"
    "lh\005citne\005citnh\006citnhe\005citnl\006citnle\006citnlh\004cksm\002"
    "cl\003clc\004clcl\005clcle\005clclu\006clfdbr\006clfdtr\006clfebr\006cl"
    "fhsi\004clfi\005clfit\006clfite\006clfith\007clfithe\006clfitl\007clfit"
    "le\007clfitlh\007clfitne\007clfitnh\010clfitnhe\007clfitnl\010clfitnle\010"
    "clfitnlh\006clfxbr\006clfxtr\003clg\006clgdbr\006clgdtr\006clgebr\004cl"
    "gf\005clgfi\005clgfr\006clgfrl\006clghrl\006clghsi\005clgib\006clgibe\006"
    "clgibh\007clgibhe\006clgibl\007clgible\007clgiblh\007clgibne\007clgibnh"
    "\010clgibnhe\007clgibnl\010clgibnle\010clgibnlh\005clgij\006clgije\006c"
    "lgijh\007clgijhe\006clgijl\007clgijle\007clgijlh\007clgijne\007clgijnh\010"
    "clgijnhe\007clgijnl\010clgijnle\010clgijnlh\005clgit\006clgite\006clgit"
    "h\007clgithe\006clgitl\007clgitle\007clgitlh\007clgitne\007clgitnh\010c"
    "lgitnhe\007clgitnl\010clgitnle\010clgitnlh\004clgr\005clgrb\006clgrbe\006"
    "clgrbh\007clgrbhe\006clgrbl\007clgrble\007clgrblh\007clgrbne\007clgrbnh"
    "\010clgrbnhe\007clgrbnl\010clgrbnle\010clgrbnlh\005clgrj\006clgrje\006c"
    "lgrjh\007clgrjhe\006clgrjl\007clgrjle\007clgrjlh\007clgrjne\007clgrjnh\010"
    "clgrjnhe\007clgrjnl\010clgrjnle\010clgrjnlh\005clgrl\005clgrt\006clgrte"
    "\006clgrth\007clgrthe\006clgrtl\007clgrtle\007clgrtlh\007clgrtne\007clg"
    "rtnh\010clgrtnhe\007clgrtnl\010clgrtnle\010clgrtnlh\004clgt\005clgte\005"
    "clgth\006clgthe\005clgtl\006clgtle\006clgtlh\006clgtne\006clgtnh\007clg"
    "tnhe\006clgtnl\007clgtnle\007clgtnlh\006clgxbr\006clgxtr\004clhf\005clh"
    "hr\006clhhsi\005clhlr\005clhrl\003cli\004clib\005clibe\005clibh\006clib"
    "he\005clibl\006clible\006cliblh\006clibne\006clibnh\007clibnhe\006clibn"
    "l\007clibnle\007clibnlh\004clih\004clij\005clije\005clijh\006clijhe\005"
    "clijl\006clijle\006clijlh\006clijne\006clijnh\007clijnhe\006clijnl\007c"
    "lijnle\007clijnlh\004cliy\003clm\004clmh\004clmy\003clr\004clrb\005clrb"
    "e\005clrbh\006clrbhe\005clrbl\006clrble\006clrblh\006clrbne\006clrbnh\007"
    "clrbnhe\006clrbnl\007clrbnle\007clrbnlh\004clrj\005clrje\005clrjh\006cl"
    "rjhe\005clrjl\006clrjle\006clrjlh\006clrjne\006clrjnh\007clrjnhe\006clr"
    "jnl\007clrjnle\007clrjnlh\004clrl\004clrt\005clrte\005clrth\006clrthe\005"
    "clrtl\006clrtle\006clrtlh\006clrtne\006clrtnh\007clrtnhe\006clrtnl\007c"
    "lrtnle\007clrtnlh\004clst\003clt\004clte\004clth\005clthe\004cltl\005cl"
    "tle\005cltlh\005cltne\005cltnh\006cltnhe\005cltnl\006cltnle\006cltnlh\003"
    "cly\005cmpsc\002cp\004cpdt\005cpsdr\004cpxt\004cpya\002cr\003crb\004crb"
    "e\004crbh\005crbhe\004crbl\005crble\005crblh\005crbne\005crbnh\006crbnh"
    "e\005crbnl\006crbnle\006crbnlh\005crdte\003crj\004crje\004crjh\005crjhe"
    "\004crjl\005crjle\005crjlh\005crjne\005crjnh\006crjnhe\005crjnl\006crjn"
    "le\006crjnlh\003crl\003crt\004crte\004crth\005crthe\004crtl\005crtle\005"
    "crtlh\005crtne\005crtnh\006crtnhe\005crtnl\006crtnle\006crtnlh\002cs\004"
    "csch\005csdtr\003csg\003csp\004cspg\004csst\005csxtr\003csy\004cu12\004"
    "cu14\004cu21\004cu24\004cu41\004cu42\005cudtr\004cuse\005cutfu\005cuutf"
    "\005cuxtr\003cvb\004cvbg\004cvby\003cvd\004cvdg\004cvdy\004cxbr\005cxfb"
    "r\006cxfbra\004cxfr\005cxftr\005cxgbr\006cxgbra\004cxgr\005cxgtr\006cxg"
    "tra\006cxlfbr\006cxlftr\006cxlgbr\006cxlgtr\004cxpt\003cxr\005cxstr\004"
    "cxtr\005cxutr\004cxzt\002cy\004czdt\004czxt\001d\002dd\003ddb\004ddbr\003"
    "ddr\004ddtr\005ddtra\002de\003deb\004debr\003der\006dfltcc\004diag\005d"
    "idbr\005diebr\002dl\003dlg\004dlgr\003dlr\002dp\002dr\003dsg\004dsgf\005"
    "dsgfr\004dsgr\004dxbr\003dxr\004dxtr\005dxtra\003ear\004ecag\005ecctr\005"
    "ecpga\004ectg\002ed\004edmk\005eedtr\005eextr\004efpc\005epair\004epar\005"
    "epctr\004epsw\004ereg\005eregg\005esair\004esar\005esdtr\004esea\004est"
    "a\005esxtr\004etnd\002ex\004exrl\005fidbr\006fidbra\004fidr\005fidtr\005"
    "fiebr\006fiebra\004fier\005fixbr\006fixbra\004fixr\005fixtr\005flogr\003"
    "hdr\003her\004hsch\003iac\002ic\003icm\004icmh\004icmy\003icy\004idte\005"
    "iedtr\005iextr\004iihf\004iihh\004iihl\004iilf\004iilh\004iill\003ipk\003"
    "ipm\004ipte\004irbm\004iske\004ivsk\001j\002je\002jg\003jge\003jgh\004j"
    "ghe\003jgl\004jgle\004jglh\003jgm\004jgne\004jgnh\005jgnhe\004jgnl\005j"
    "gnle\005jgnlh\004jgnm\004jgno\004jgnp\004jgnz\003jgo\003jgp\003jgz\002j"
    "h\003jhe\002jl\003jle\003jlh\002jm\003jne\003jnh\004jnhe\003jnl\004jnle"
    "\004jnlh\003jnm\003jno\003jnp\003jnz\002jo\002jp\002jz\003kdb\004kdbr\004"
    "kdsa\004kdtr\003keb\004kebr\004kimd\004klmd\002km\003kma\004kmac\003kmc"
    "\005kmctr\003kmf\003kmo\004kxbr\004kxtr\001l\002la\003laa\004laag\004la"
    "al\005laalg\003lae\004laey\003lam\004lamy\003lan\004lang\003lao\004laog"
    "\004larl\004lasp\003lat\003lax\004laxg\003lay\002lb\003lbh\003lbr\004lc"
    "bb\005lcctl\005lcdbr\005lcdfr\004lcdr\005lcebr\004lcer\005lcgfr\004lcgr"
    "\003lcr\004lctl\005lctlg\005lcxbr\004lcxr\002ld\003lde\004ldeb\005ldebr"
    "\004lder\005ldetr\004ldgr\003ldr\004ldrv\005ldxbr\006ldxbra\004ldxr\005"
    "ldxtr\003ldy\002le\005ledbr\006ledbra\004ledr\005ledtr\003ler\004lerv\005"
    "lexbr\006lexbra\004lexr\003ley\004lfas\003lfh\005lfhat\004lfpc\002lg\004"
    "lgat\003lgb\004lgbr\004lgdr\003lgf\004lgfi\004lgfr\005lgfrl\003lgg\003l"
    "gh\004lghi\004lghr\005lghrl\003lgr\004lgrl\004lgsc\002lh\003lhh\003lhi\003"
    "lhr\004lhrl\003lhy\003llc\004llch\004llcr\004llgc\005llgcr\004llgf\006l"
    "lgfat\005llgfr\006llgfrl\006llgfsg\004llgh\005llghr\006llghrl\004llgt\006"
    "llgtat\005llgtr\003llh\004llhh\004llhr\005llhrl\005llihf\005llihh\005ll"
    "ihl\005llilf\005llilh\005llill\006llzrgf\002lm\003lmd\003lmg\003lmh\003"
    "lmy\005lndbr\005lndfr\004lndr\005lnebr\004lner\005lngfr\004lngr\003lnr\005"
    "lnxbr\004lnxr\003loc\004loce\005locfh\006locfhe\006locfhh\007locfhhe\006"
    "locfhl\007locfhle\007locfhlh\006locfhm\007locfhne\007locfhnh\010locfhnh"
    "e\007locfhnl\010locfhnle\010locfhnlh\007locfhnm\007locfhno\007locfhnp\007"
    "locfhnz\006locfho\006locfhp\006locfhr\007locfhre\007locfhrh\010locfhrhe"
    "\007locfhrl\010locfhrle\010locfhrlh\007locfhrm\010locfhrne\010locfhrnh\t"
    "locfhrnhe\010locfhrnl\tlocfhrnle\tlocfhrnlh\010locfhrnm\010locfhrno\010"
    "locfhrnp\010locfhrnz\007locfhro\007locfhrp\007locfhrz\006locfhz\004locg"
    "\005locge\005locgh\006locghe\006locghi\007locghie\007locghih\010locghih"
    "e\007locghil\010locghile\010locghilh\007locghim\010locghine\010locghinh"
    "\tlocghinhe\010locghinl\tlocghinle\tlocghinlh\010locghinm\010locghino\010"
    "locghinp\010locghinz\007locghio\007locghip\007locghiz\005locgl\006locgl"
    "e\006locglh\005locgm\006locgne\006locgnh\007locgnhe\006locgnl\007locgnl"
    "e\007locgnlh\006locgnm\006locgno\006locgnp\006locgnz\005locgo\005locgp\005"
    "locgr\006locgre\006locgrh\007locgrhe\006locgrl\007locgrle\007locgrlh\006"
    "locgrm\007locgrne\007locgrnh\010locgrnhe\007locgrnl\010locgrnle\010locg"
    "rnlh\007locgrnm\007locgrno\007locgrnp\007locgrnz\006locgro\006locgrp\006"
    "locgrz\005locgz\004loch\005loche\006lochhi\007lochhie\007lochhih\010loc"
    "hhihe\007lochhil\010lochhile\010lochhilh\007lochhim\010lochhine\010loch"
    "hinh\tlochhinhe\010lochhinl\tlochhinle\tlochhinlh\010lochhinm\010lochhi"
    "no\010lochhinp\010lochhinz\007lochhio\007lochhip\007lochhiz\005lochi\006"
    "lochie\006lochih\007lochihe\006lochil\007lochile\007lochilh\006lochim\007"
    "lochine\007lochinh\010lochinhe\007lochinl\010lochinle\010lochinlh\007lo"
    "chinm\007lochino\007lochinp\007lochinz\006lochio\006lochip\006lochiz\004"
    "locl\005locle\005loclh\004locm\005locne\005locnh\006locnhe\005locnl\006"
    "locnle\006locnlh\005locnm\005locno\005locnp\005locnz\004loco\004locp\004"
    "locr\005locre\005locrh\006locrhe\005locrl\006locrle\006locrlh\005locrm\006"
    "locrne\006locrnh\007locrnhe\006locrnl\007locrnle\007locrnlh\006locrnm\006"
    "locrno\006locrnp\006locrnz\005locro\005locrp\005locrz\004locz\005lpctl\003"
    "lpd\005lpdbr\005lpdfr\004lpdg\004lpdr\005lpebr\004lper\005lpgfr\004lpgr"
    "\003lpp\003lpq\003lpr\004lpsw\005lpswe\005lptea\005lpxbr\004lpxr\002lr\003"
    "lra\004lrag\004lray\004lrdr\004lrer\003lrl\003lrv\004lrvg\005lrvgr\004l"
    "rvh\004lrvr\005lsctl\002lt\005ltdbr\004ltdr\005ltdtr\005ltebr\004lter\003"
    "ltg\004ltgf\005ltgfr\004ltgr\003ltr\005ltxbr\004ltxr\005ltxtr\004lura\005"
    "lurag\003lxd\004lxdb\005lxdbr\004lxdr\005lxdtr\003lxe\004lxeb\005lxebr\004"
    "lxer\003lxr\002ly\004lzdr\004lzer\004lzrf\004lzrg\004lzxr\001m\003mad\004"
    "madb\005madbr\004madr\003mae\004maeb\005maebr\004maer\003may\004mayh\005"
    "mayhr\004mayl\005maylr\004mayr\002mc\002md\003mdb\004mdbr\003mde\004mde"
    "b\005mdebr\004mder\003mdr\004mdtr\005mdtra\002me\003mee\004meeb\005meeb"
    "r\004meer\003mer\003mfy\002mg\003mgh\004mghi\004mgrk\002mh\003mhi\003mh"
    "y\002ml\003mlg\004mlgr\003mlr\002mp\002mr\002ms\003msc\004msch\003msd\004"
    "msdb\005msdbr\004msdr\003mse\004mseb\005msebr\004mser\004msfi\003msg\004"
    "msgc\004msgf\005msgfi\005msgfr\004msgr\006msgrkc\003msr\005msrkc\004mst"
    "a\003msy\003mvc\005mvcdk\005mvcin\004mvck\004mvcl\005mvcle\005mvclu\005"
    "mvcos\004mvcp\005mvcrl\004mvcs\005mvcsk\005mvghi\005mvhhi\004mvhi\003mv"
    "i\004mviy\003mvn\003mvo\004mvpg\004mvst\003mvz\004mxbr\003mxd\004mxdb\005"
    "mxdbr\004mxdr\003mxr\004mxtr\005mxtra\002my\003myh\004myhr\003myl\004my"
    "lr\003myr\001n\002nc\005ncgrk\004ncrk\002ng\003ngr\004ngrk\002ni\004nia"
    "i\004nihf\004nihh\004nihl\004nilf\004nilh\004nill\003niy\005nngrk\004nn"
    "rk\005nogrk\003nop\004nopr\004nork\002nr\003nrk\005ntstg\005nxgrk\004nx"
    "rk\002ny\001o\002oc\005ocgrk\004ocrk\002og\003ogr\004ogrk\002oi\004oihf"
    "\004oihh\004oihl\004oilf\004oilh\004oill\003oiy\002or\003ork\002oy\004p"
    "ack\004palb\002pc\003pcc\005pckmo\003pfd\005pfdrl\004pfmf\004pfpo\004pg"
    "in\005pgout\003pka\003pku\003plo\006popcnt\003ppa\004ppno\002pr\004prno"
    "\002pt\003ptf\004ptff\003pti\004ptlb\005qadtr\005qaxtr\005qctri\003qsi\004"
    "rchp\005risbg\006risbgn\006risbhg\006risblg\003rll\004rllg\005rnsbg\005"
    "rosbg\002rp\004rrbe\004rrbm\005rrdtr\005rrxtr\004rsch\005rxsbg\001s\003"
    "sac\004sacf\003sal\005sam24\005sam31\005sam64\003sar\005scctr\004schm\003"
    "sck\004sckc\005sckpf\002sd\003sdb\004sdbr\003sdr\004sdtr\005sdtra\002se"
    "\003seb\004sebr\006selfhr\007selfhre\007selfhrh\010selfhrhe\007selfhrl\010"
    "selfhrle\010selfhrlh\007selfhrm\010selfhrne\010selfhrnh\tselfhrnhe\010s"
    "elfhrnl\tselfhrnle\tselfhrnlh\010selfhrnm\010selfhrno\010selfhrnp\010se"
    "lfhrnz\007selfhro\007selfhrp\007selfhrz\005selgr\006selgre\006selgrh\007"
    "selgrhe\006selgrl\007selgrle\007selgrlh\006selgrm\007selgrne\007selgrnh"
    "\010selgrnhe\007selgrnl\010selgrnle\010selgrnlh\007selgrnm\007selgrno\007"
    "selgrnp\007selgrnz\006selgro\006selgrp\006selgrz\004selr\005selre\005se"
    "lrh\006selrhe\005selrl\006selrle\006selrlh\005selrm\006selrne\006selrnh"
    "\007selrnhe\006selrnl\007selrnle\007selrnlh\006selrnm\006selrno\006selr"
    "np\006selrnz\005selro\005selrp\005selrz\003ser\005sfasr\004sfpc\002sg\003"
    "sgf\004sgfr\003sgh\003sgr\004sgrk\002sh\005shhhr\005shhlr\003shy\003sie"
    "\004siga\004sigp\002sl\003sla\004slag\004slak\003slb\004slbg\005slbgr\004"
    "slbr\004slda\004sldl\004sldt\004slfi\003slg\004slgf\005slgfi\005slgfr\004"
    "slgr\005slgrk\006slhhhr\006slhhlr\003sll\004sllg\004sllk\003slr\004slrk"
    "\004slxt\003sly\005sortl\002sp\005spctr\004spka\003spm\003spt\003spx\003"
    "sqd\004sqdb\005sqdbr\004sqdr\003sqe\004sqeb\005sqebr\004sqer\005sqxbr\004"
    "sqxr\002sr\003sra\004srag\004srak\004srda\004srdl\004srdt\003srk\003srl"
    "\004srlg\004srlk\004srnm\005srnmb\005srnmt\003srp\004srst\005srstu\004s"
    "rxt\005ssair\004ssar\004ssch\004sske\003ssm\002st\004stam\005stamy\004s"
    "tap\003stc\004stch\004stck\005stckc\005stcke\005stckf\004stcm\005stcmh\005"
    "stcmy\005stcps\005stcrw\005stctg\005stctl\004stcy\003std\005stdrv\004st"
    "dy\003ste\005sterv\004stey\004stfh\004stfl\005stfle\005stfpc\003stg\005"
    "stgrl\005stgsc\003sth\004sthh\005sthrl\004sthy\005stidp\003stm\004stmg\004"
    "stmh\004stmy\005stnsm\004stoc\005stoce\006stocfh\007stocfhe\007stocfhh\010"
    "stocfhhe\007stocfhl\010stocfhle\010stocfhlh\007stocfhm\010stocfhne\010s"
    "tocfhnh\tstocfhnhe\010stocfhnl\tstocfhnle\tstocfhnlh\010stocfhnm\010sto"
    "cfhno\010stocfhnp\010stocfhnz\007stocfho\007stocfhp\007stocfhz\005stocg"
    "\006stocge\006stocgh\007stocghe\006stocgl\007stocgle\007stocglh\006stoc"
    "gm\007stocgne\007stocgnh\010stocgnhe\007stocgnl\010stocgnle\010stocgnlh"
    "\007stocgnm\007stocgno\007stocgnp\007stocgnz\006stocgo\006stocgp\006sto"
    "cgz\005stoch\006stoche\005stocl\006stocle\006stoclh\005stocm\006stocne\006"
    "stocnh\007stocnhe\006stocnl\007stocnle\007stocnlh\006stocnm\006stocno\006"
    "stocnp\006stocnz\005stoco\005stocp\005stocz\005stosm\004stpq\004stpt\004"
    "stpx\005strag\004strl\004strv\005strvg\005strvh\005stsch\004stsi\005stu"
    "ra\005sturg\003sty\002su\003sur\003svc\002sw\003swr\004sxbr\003sxr\004s"
    "xtr\005sxtra\002sy\006tabort\003tam\003tar\002tb\004tbdr\005tbedr\006tb"
    "egin\007tbeginc\004tcdb\004tceb\004tcxb\005tdcdt\005tdcet\005tdcxt\005t"
    "dgdt\005tdget\005tdgxt\004tend\005thder\004thdr\002tm\003tmh\004tmhh\004"
    "tmhl\003tml\004tmlh\004tmll\003tmy\002tp\003tpi\005tprot\002tr\005trace"
    "\005tracg\005trap2\005trap4\003tre\004troo\004trot\003trt\004trte\004tr"
    "to\004trtr\005trtre\004trtt\002ts\004tsch\004unpk\005unpka\005unpku\003"
    "upt\002va\003vab\003vac\004vacc\005vaccb\005vaccc\006vacccq\005vaccf\005"
    "vaccg\005vacch\005vaccq\004vacq\003vaf\003vag\003vah\003vap\003vaq\004v"
    "avg\005vavgb\005vavgf\005vavgg\005vavgh\005vavgl\006vavglb\006vavglf\006"
    "vavglg\006vavglh\006vbperm\004vcdg\005vcdgb\005vcdlg\006vcdlgb\005vcefb"
    "\006vcelfb\004vceq\005vceqb\006vceqbs\005vceqf\006vceqfs\005vceqg\006vc"
    "eqgs\005vceqh\006vceqhs\005vcfeb\005vcfpl\005vcfps\004vcgd\005vcgdb\003"
    "vch\004vchb\005vchbs\004vchf\005vchfs\004vchg\005vchgs\004vchh\005vchhs"
    "\004vchl\005vchlb\006vchlbs\005vchlf\006vchlfs\005vchlg\006vchlgs\005vc"
    "hlh\006vchlhs\005vcksm\006vclfeb\005vclfp\005vclgd\006vclgdb\004vclz\005"
    "vclzb\005vclzf\005vclzg\005vclzh\003vcp\005vcsfp\004vctz\005vctzb\005vc"
    "tzf\005vctzg\005vctzh\004vcvb\005vcvbg\004vcvd\005vcvdg\003vdp\003vec\004"
    "vecb\004vecf\004vecg\004vech\004vecl\005veclb\005veclf\005veclg\005vecl"
    "h\005verim\006verimb\006verimf\006verimg\006verimh\005verll\006verllb\006"
    "verllf\006verllg\006verllh\006verllv\007verllvb\007verllvf\007verllvg\007"
    "verllvh\004vesl\005veslb\005veslf\005veslg\005veslh\005veslv\006veslvb\006"
    "veslvf\006veslvg\006veslvh\005vesra\006vesrab\006vesraf\006vesrag\006ve"
    "srah\006vesrav\007vesravb\007vesravf\007vesravg\007vesravh\005vesrl\006"
    "vesrlb\006vesrlf\006vesrlg\006vesrlh\006vesrlv\007vesrlvb\007vesrlvf\007"
    "vesrlvg\007vesrlvh\003vfa\005vfadb\004vfae\005vfaeb\006vfaebs\005vfaef\006"
    "vfaefs\005vfaeh\006vfaehs\006vfaezb\007vfaezbs\006vfaezf\007vfaezfs\006"
    "vfaezh\007vfaezhs\005vfasb\004vfce\006vfcedb\007vfcedbs\006vfcesb\007vf"
    "cesbs\004vfch\006vfchdb\007vfchdbs\005vfche\007vfchedb\010vfchedbs\007v"
    "fchesb\010vfchesbs\006vfchsb\007vfchsbs\003vfd\005vfddb\005vfdsb\004vfe"
    "e\005vfeeb\006vfeebs\005vfeef\006vfeefs\005vfeeh\006vfeehs\006vfeezb\007"
    "vfeezbs\006vfeezf\007vfeezfs\006vfeezh\007vfeezhs\005vfene\006vfeneb\007"
    "vfenebs\006vfenef\007vfenefs\006vfeneh\007vfenehs\007vfenezb\010vfenezb"
    "s\007vfenezf\010vfenezfs\007vfenezh\010vfenezhs\003vfi\005vfidb\005vfis"
    "b\006vfkedb\007vfkedbs\006vfkesb\007vfkesbs\006vfkhdb\007vfkhdbs\007vfk"
    "hedb\010vfkhedbs\007vfkhesb\010vfkhesbs\006vfkhsb\007vfkhsbs\006vflcdb\006"
    "vflcsb\004vfll\005vflls\006vflndb\006vflnsb\006vflpdb\006vflpsb\004vflr"
    "\005vflrd\003vfm\004vfma\006vfmadb\006vfmasb\005vfmax\007vfmaxdb\007vfm"
    "axsb\005vfmdb\005vfmin\007vfmindb\007vfminsb\004vfms\005vfmsb\006vfmsdb"
    "\006vfmssb\005vfnma\007vfnmadb\007vfnmasb\005vfnms\007vfnmsdb\007vfnmss"
    "b\005vfpso\007vfpsodb\007vfpsosb\003vfs\005vfsdb\004vfsq\006vfsqdb\006v"
    "fsqsb\005vfssb\005vftci\007vftcidb\007vftcisb\004vgbm\004vgef\004vgeg\004"
    "vgfm\005vgfma\006vgfmab\006vgfmaf\006vgfmag\006vgfmah\005vgfmb\005vgfmf"
    "\005vgfmg\005vgfmh\003vgm\004vgmb\004vgmf\004vgmg\004vgmh\005vistr\006v"
    "istrb\007vistrbs\006vistrf\007vistrfs\006vistrh\007vistrhs\002vl\004vlb"
    "b\004vlbr\005vlbrf\005vlbrg\005vlbrh\005vlbrq\007vlbrrep\010vlbrrepf\010"
    "vlbrrepg\010vlbrreph\003vlc\004vlcb\004vlcf\004vlcg\004vlch\004vlde\005"
    "vldeb\004vleb\006vlebrf\006vlebrg\006vlebrh\004vled\005vledb\004vlef\004"
    "vleg\004vleh\005vleib\005vleif\005vleig\005vleih\004vler\005vlerf\005vl"
    "erg\005vlerh\004vlgv\005vlgvb\005vlgvf\005vlgvg\005vlgvh\004vlip\003vll"
    "\007vllebrz\010vllebrze\010vllebrzf\010vllebrzg\010vllebrzh\005vllez\006"
    "vllezb\006vllezf\006vllezg\006vllezh\007vllezlf\003vlm\003vlp\004vlpb\004"
    "vlpf\004vlpg\004vlph\003vlr\005vlrep\006vlrepb\006vlrepf\006vlrepg\006v"
    "lreph\004vlrl\005vlrlr\004vlvg\005vlvgb\005vlvgf\005vlvgg\005vlvgh\005v"
    "lvgp\004vmae\005vmaeb\005vmaef\005vmaeh\004vmah\005vmahb\005vmahf\005vm"
    "ahh\004vmal\005vmalb\005vmale\006vmaleb\006vmalef\006vmaleh\005vmalf\005"
    "vmalh\006vmalhb\006vmalhf\006vmalhh\006vmalhw\005vmalo\006vmalob\006vma"
    "lof\006vmaloh\004vmao\005vmaob\005vmaof\005vmaoh\003vme\004vmeb\004vmef"
    "\004vmeh\003vmh\004vmhb\004vmhf\004vmhh\003vml\004vmlb\004vmle\005vmleb"
    "\005vmlef\005vmleh\004vmlf\004vmlh\005vmlhb\005vmlhf\005vmlhh\005vmlhw\004"
    "vmlo\005vmlob\005vmlof\005vmloh\003vmn\004vmnb\004vmnf\004vmng\004vmnh\004"
    "vmnl\005vmnlb\005vmnlf\005vmnlg\005vmnlh\003vmo\004vmob\004vmof\004vmoh"
    "\003vmp\004vmrh\005vmrhb\005vmrhf\005vmrhg\005vmrhh\004vmrl\005vmrlb\005"
    "vmrlf\005vmrlg\005vmrlh\004vmsl\005vmslg\004vmsp\003vmx\004vmxb\004vmxf"
    "\004vmxg\004vmxh\004vmxl\005vmxlb\005vmxlf\005vmxlg\005vmxlh\002vn\003v"
    "nc\003vnn\003vno\004vnot\003vnx\002vo\003voc\004vone\004vpdi\005vperm\003"
    "vpk\004vpkf\004vpkg\004vpkh\005vpkls\006vpklsf\007vpklsfs\006vpklsg\007"
    "vpklsgs\006vpklsh\007vpklshs\004vpks\005vpksf\006vpksfs\005vpksg\006vpk"
    "sgs\005vpksh\006vpkshs\004vpkz\006vpopct\007vpopctb\007vpopctf\007vpopc"
    "tg\007vpopcth\005vpsop\004vrep\005vrepb\005vrepf\005vrepg\005vreph\005v"
    "repi\006vrepib\006vrepif\006vrepig\006vrepih\003vrp\002vs\003vsb\006vsb"
    "cbi\007vsbcbiq\004vsbi\005vsbiq\005vscbi\006vscbib\006vscbif\006vscbig\006"
    "vscbih\006vscbiq\005vscef\005vsceg\004vsdp\004vseg\005vsegb\005vsegf\005"
    "vsegh\004vsel\003vsf\003vsg\003vsh\003vsl\004vslb\004vsld\005vsldb\003v"
    "sp\003vsq\004vsra\005vsrab\004vsrd\004vsrl\005vsrlb\004vsrp\003vst\005v"
    "stbr\006vstbrf\006vstbrg\006vstbrh\006vstbrq\005vsteb\007vstebrf\007vst"
    "ebrg\007vstebrh\005vstef\005vsteg\005vsteh\005vster\006vsterf\006vsterg"
    "\006vsterh\004vstl\004vstm\005vstrc\006vstrcb\007vstrcbs\006vstrcf\007v"
    "strcfs\006vstrch\007vstrchs\007vstrczb\010vstrczbs\007vstrczf\010vstrcz"
    "fs\007vstrczh\010vstrczhs\005vstrl\006vstrlr\005vstrs\006vstrsb\006vstr"
    "sf\006vstrsh\007vstrszb\007vstrszf\007vstrszh\004vsum\005vsumb\005vsumg"
    "\006vsumgf\006vsumgh\005vsumh\005vsumq\006vsumqf\006vsumqg\003vtm\003vt"
    "p\004vuph\005vuphb\005vuphf\005vuphh\005vupkz\004vupl\005vuplb\005vuplf"
    "\005vuplh\006vuplhb\006vuplhf\006vuplhh\006vuplhw\005vupll\006vupllb\006"
    "vupllf\006vupllh\002vx\005vzero\005wcdgb\006wcdlgb\005wcefb\006wcelfb\005"
    "wcfeb\005wcgdb\006wclfeb\006wclgdb\005wfadb\005wfasb\005wfaxb\003wfc\005"
    "wfcdb\006wfcedb\007wfcedbs\006wfcesb\007wfcesbs\006wfcexb\007wfcexbs\006"
    "wfchdb\007wfchdbs\007wfchedb\010wfchedbs\007wfchesb\010wfchesbs\007wfch"
    "exb\010wfchexbs\006wfchsb\007wfchsbs\006wfchxb\007wfchxbs\005wfcsb\005w"
    "fcxb\005wfddb\005wfdsb\005wfdxb\005wfidb\005wfisb\005wfixb\003wfk\005wf"
    "kdb\006wfkedb\007wfkedbs\006wfkesb\007wfkesbs\006wfkexb\007wfkexbs\006w"
    "fkhdb\007wfkhdbs\007wfkhedb\010wfkhedbs\007wfkhesb\010wfkhesbs\007wfkhe"
    "xb\010wfkhexbs\006wfkhsb\007wfkhsbs\006wfkhxb\007wfkhxbs\005wfksb\005wf"
    "kxb\006wflcdb\006wflcsb\006wflcxb\005wflld\005wflls\006wflndb\006wflnsb"
    "\006wflnxb\006wflpdb\006wflpsb\006wflpxb\005wflrd\005wflrx\006wfmadb\006"
    "wfmasb\006wfmaxb\007wfmaxdb\007wfmaxsb\007wfmaxxb\005wfmdb\007wfmindb\007"
    "wfminsb\007wfminxb\005wfmsb\006wfmsdb\006wfmssb\006wfmsxb\005wfmxb\007w"
    "fnmadb\007wfnmasb\007wfnmaxb\007wfnmsdb\007wfnmssb\007wfnmsxb\007wfpsod"
    "b\007wfpsosb\007wfpsoxb\005wfsdb\006wfsqdb\006wfsqsb\006wfsqxb\005wfssb"
    "\005wfsxb\007wftcidb\007wftcisb\007wftcixb\005wldeb\005wledb\001x\002xc"
    "\002xg\003xgr\004xgrk\002xi\004xihf\004xilf\003xiy\002xr\003xrk\004xsch"
    "\002xy\003zap";

// Feature bitsets.
enum : uint8_t {
  AMFBS_None,
  AMFBS_FeatureDFPPackedConversion,
  AMFBS_FeatureDFPZonedConversion,
  AMFBS_FeatureDeflateConversion,
  AMFBS_FeatureDistinctOps,
  AMFBS_FeatureEnhancedDAT2,
  AMFBS_FeatureEnhancedSort,
  AMFBS_FeatureExecutionHint,
  AMFBS_FeatureFPExtension,
  AMFBS_FeatureGuardedStorage,
  AMFBS_FeatureHighWord,
  AMFBS_FeatureInsertReferenceBitsMultiple,
  AMFBS_FeatureInterlockedAccess1,
  AMFBS_FeatureLoadAndTrap,
  AMFBS_FeatureLoadAndZeroRightmostByte,
  AMFBS_FeatureLoadStoreOnCond,
  AMFBS_FeatureLoadStoreOnCond2,
  AMFBS_FeatureMessageSecurityAssist3,
  AMFBS_FeatureMessageSecurityAssist4,
  AMFBS_FeatureMessageSecurityAssist5,
  AMFBS_FeatureMessageSecurityAssist7,
  AMFBS_FeatureMessageSecurityAssist8,
  AMFBS_FeatureMessageSecurityAssist9,
  AMFBS_FeatureMiscellaneousExtensions,
  AMFBS_FeatureMiscellaneousExtensions2,
  AMFBS_FeatureMiscellaneousExtensions3,
  AMFBS_FeaturePopulationCount,
  AMFBS_FeatureProcessorAssist,
  AMFBS_FeatureResetReferenceBitsMultiple,
  AMFBS_FeatureTransactionalExecution,
  AMFBS_FeatureVector,
  AMFBS_FeatureVectorEnhancements1,
  AMFBS_FeatureVectorEnhancements2,
  AMFBS_FeatureVectorPackedDecimal,
  AMFBS_FeatureVectorPackedDecimalEnhancement,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // AMFBS_None
  {Feature_FeatureDFPPackedConversionBit, },
  {Feature_FeatureDFPZonedConversionBit, },
  {Feature_FeatureDeflateConversionBit, },
  {Feature_FeatureDistinctOpsBit, },
  {Feature_FeatureEnhancedDAT2Bit, },
  {Feature_FeatureEnhancedSortBit, },
  {Feature_FeatureExecutionHintBit, },
  {Feature_FeatureFPExtensionBit, },
  {Feature_FeatureGuardedStorageBit, },
  {Feature_FeatureHighWordBit, },
  {Feature_FeatureInsertReferenceBitsMultipleBit, },
  {Feature_FeatureInterlockedAccess1Bit, },
  {Feature_FeatureLoadAndTrapBit, },
  {Feature_FeatureLoadAndZeroRightmostByteBit, },
  {Feature_FeatureLoadStoreOnCondBit, },
  {Feature_FeatureLoadStoreOnCond2Bit, },
  {Feature_FeatureMessageSecurityAssist3Bit, },
  {Feature_FeatureMessageSecurityAssist4Bit, },
  {Feature_FeatureMessageSecurityAssist5Bit, },
  {Feature_FeatureMessageSecurityAssist7Bit, },
  {Feature_FeatureMessageSecurityAssist8Bit, },
  {Feature_FeatureMessageSecurityAssist9Bit, },
  {Feature_FeatureMiscellaneousExtensionsBit, },
  {Feature_FeatureMiscellaneousExtensions2Bit, },
  {Feature_FeatureMiscellaneousExtensions3Bit, },
  {Feature_FeaturePopulationCountBit, },
  {Feature_FeatureProcessorAssistBit, },
  {Feature_FeatureResetReferenceBitsMultipleBit, },
  {Feature_FeatureTransactionalExecutionBit, },
  {Feature_FeatureVectorBit, },
  {Feature_FeatureVectorEnhancements1Bit, },
  {Feature_FeatureVectorEnhancements2Bit, },
  {Feature_FeatureVectorPackedDecimalBit, },
  {Feature_FeatureVectorPackedDecimalEnhancementBit, },
};

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint8_t RequiredFeaturesIdx;
    uint8_t Classes[6];
    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace

static const MatchEntry MatchTable0[] = {
  { 0 /* a */, SystemZ::A, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2 /* ad */, SystemZ::AD, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 5 /* adb */, SystemZ::ADB, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 9 /* adbr */, SystemZ::ADBR, Convert__FP641_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 14 /* adr */, SystemZ::ADR, Convert__FP641_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 18 /* adtr */, SystemZ::ADTR, Convert__FP641_0__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 23 /* adtra */, SystemZ::ADTRA, Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 29 /* ae */, SystemZ::AE, Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 32 /* aeb */, SystemZ::AEB, Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 36 /* aebr */, SystemZ::AEBR, Convert__FP321_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 41 /* aer */, SystemZ::AER, Convert__FP321_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 45 /* afi */, SystemZ::AFI, Convert__GR321_0__Tie0_1_1__S32Imm1_1, AMFBS_None, { MCK_GR32, MCK_S32Imm }, },
  { 49 /* ag */, SystemZ::AG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 52 /* agf */, SystemZ::AGF, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 56 /* agfi */, SystemZ::AGFI, Convert__GR641_0__Tie0_1_1__S32Imm1_1, AMFBS_None, { MCK_GR64, MCK_S32Imm }, },
  { 61 /* agfr */, SystemZ::AGFR, Convert__GR641_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 66 /* agh */, SystemZ::AGH, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_FeatureMiscellaneousExtensions2, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 70 /* aghi */, SystemZ::AGHI, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 75 /* aghik */, SystemZ::AGHIK, Convert__GR641_0__GR641_1__S16Imm1_2, AMFBS_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_S16Imm }, },
  { 81 /* agr */, SystemZ::AGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 85 /* agrk */, SystemZ::AGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 90 /* agsi */, SystemZ::AGSI, Convert__BDAddr64Disp202_0__S8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 95 /* ah */, SystemZ::AH, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 98 /* ahhhr */, SystemZ::AHHHR, Convert__GRH321_0__GRH321_1__GRH321_2, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 104 /* ahhlr */, SystemZ::AHHLR, Convert__GRH321_0__GRH321_1__GR321_2, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GR32 }, },
  { 110 /* ahi */, SystemZ::AHI, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 114 /* ahik */, SystemZ::AHIK, Convert__GR321_0__GR321_1__S16Imm1_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_S16Imm }, },
  { 119 /* ahy */, SystemZ::AHY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 123 /* aih */, SystemZ::AIH, Convert__GRH321_0__Tie0_1_1__S32Imm1_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 127 /* al */, SystemZ::AL, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 130 /* alc */, SystemZ::ALC, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 134 /* alcg */, SystemZ::ALCG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 139 /* alcgr */, SystemZ::ALCGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 145 /* alcr */, SystemZ::ALCR, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 150 /* alfi */, SystemZ::ALFI, Convert__GR321_0__Tie0_1_1__U32Imm1_1, AMFBS_None, { MCK_GR32, MCK_U32Imm }, },
  { 155 /* alg */, SystemZ::ALG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 159 /* algf */, SystemZ::ALGF, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 164 /* algfi */, SystemZ::ALGFI, Convert__GR641_0__Tie0_1_1__U32Imm1_1, AMFBS_None, { MCK_GR64, MCK_U32Imm }, },
  { 170 /* algfr */, SystemZ::ALGFR, Convert__GR641_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 176 /* alghsik */, SystemZ::ALGHSIK, Convert__GR641_0__GR641_1__S16Imm1_2, AMFBS_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_S16Imm }, },
  { 184 /* algr */, SystemZ::ALGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 189 /* algrk */, SystemZ::ALGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 195 /* algsi */, SystemZ::ALGSI, Convert__BDAddr64Disp202_0__S8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 201 /* alhhhr */, SystemZ::ALHHHR, Convert__GRH321_0__GRH321_1__GRH321_2, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 208 /* alhhlr */, SystemZ::ALHHLR, Convert__GRH321_0__GRH321_1__GR321_2, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GR32 }, },
  { 215 /* alhsik */, SystemZ::ALHSIK, Convert__GR321_0__GR321_1__S16Imm1_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_S16Imm }, },
  { 222 /* alr */, SystemZ::ALR, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 226 /* alrk */, SystemZ::ALRK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 231 /* alsi */, SystemZ::ALSI, Convert__BDAddr64Disp202_0__S8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 236 /* alsih */, SystemZ::ALSIH, Convert__GRH321_0__Tie0_1_1__S32Imm1_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 242 /* alsihn */, SystemZ::ALSIHN, Convert__GRH321_0__Tie0_1_1__S32Imm1_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 249 /* aly */, SystemZ::ALY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 253 /* ap */, SystemZ::AP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, AMFBS_None, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 256 /* ar */, SystemZ::AR, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 259 /* ark */, SystemZ::ARK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 263 /* asi */, SystemZ::ASI, Convert__BDAddr64Disp202_0__S8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 267 /* au */, SystemZ::AU, Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 270 /* aur */, SystemZ::AUR, Convert__FP321_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 274 /* aw */, SystemZ::AW, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 277 /* awr */, SystemZ::AWR, Convert__FP641_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 281 /* axbr */, SystemZ::AXBR, Convert__FP1281_0__Tie0_1_1__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 286 /* axr */, SystemZ::AXR, Convert__FP1281_0__Tie0_1_1__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 290 /* axtr */, SystemZ::AXTR, Convert__FP1281_0__FP1281_1__FP1281_2, AMFBS_None, { MCK_FP128, MCK_FP128, MCK_FP128 }, },
  { 295 /* axtra */, SystemZ::AXTRA, Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 301 /* ay */, SystemZ::AY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 304 /* b */, SystemZ::B, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 306 /* bakr */, SystemZ::BAKR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 311 /* bal */, SystemZ::BAL, Convert__GR641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 315 /* balr */, SystemZ::BALR, Convert__GR641_0__ADDR641_1, AMFBS_None, { MCK_GR64, MCK_ADDR64 }, },
  { 320 /* bas */, SystemZ::BAS, Convert__GR641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 324 /* basr */, SystemZ::BASR, Convert__GR641_0__ADDR641_1, AMFBS_None, { MCK_GR64, MCK_ADDR64 }, },
  { 329 /* bassm */, SystemZ::BASSM, Convert__GR641_0__ADDR641_1, AMFBS_None, { MCK_GR64, MCK_ADDR64 }, },
  { 335 /* bc */, SystemZ::BCAsm, Convert__U4Imm1_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_U4Imm, MCK_BDXAddr64Disp12 }, },
  { 338 /* bcr */, SystemZ::BCRAsm, Convert__U4Imm1_0__GR641_1, AMFBS_None, { MCK_U4Imm, MCK_GR64 }, },
  { 342 /* bct */, SystemZ::BCT, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 346 /* bctg */, SystemZ::BCTG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 351 /* bctgr */, SystemZ::BCTGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 357 /* bctr */, SystemZ::BCTR, Convert__GR321_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR32, MCK_GR64 }, },
  { 362 /* be */, SystemZ::BAsmE, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 365 /* ber */, SystemZ::BRAsmE, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 369 /* bh */, SystemZ::BAsmH, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 372 /* bhe */, SystemZ::BAsmHE, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 376 /* bher */, SystemZ::BRAsmHE, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 381 /* bhr */, SystemZ::BRAsmH, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 385 /* bi */, SystemZ::BI, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 388 /* bic */, SystemZ::BICAsm, Convert__U4Imm1_0__BDXAddr64Disp203_1, AMFBS_FeatureMiscellaneousExtensions2, { MCK_U4Imm, MCK_BDXAddr64Disp20 }, },
  { 392 /* bie */, SystemZ::BIAsmE, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 396 /* bih */, SystemZ::BIAsmH, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 400 /* bihe */, SystemZ::BIAsmHE, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 405 /* bil */, SystemZ::BIAsmL, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 409 /* bile */, SystemZ::BIAsmLE, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 414 /* bilh */, SystemZ::BIAsmLH, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 419 /* bim */, SystemZ::BIAsmM, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 423 /* bine */, SystemZ::BIAsmNE, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 428 /* binh */, SystemZ::BIAsmNH, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 433 /* binhe */, SystemZ::BIAsmNHE, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 439 /* binl */, SystemZ::BIAsmNL, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 444 /* binle */, SystemZ::BIAsmNLE, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 450 /* binlh */, SystemZ::BIAsmNLH, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 456 /* binm */, SystemZ::BIAsmNM, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 461 /* bino */, SystemZ::BIAsmNO, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 466 /* binp */, SystemZ::BIAsmNP, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 471 /* binz */, SystemZ::BIAsmNZ, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 476 /* bio */, SystemZ::BIAsmO, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 480 /* bip */, SystemZ::BIAsmP, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 484 /* biz */, SystemZ::BIAsmZ, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 488 /* bl */, SystemZ::BAsmL, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 491 /* ble */, SystemZ::BAsmLE, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 495 /* bler */, SystemZ::BRAsmLE, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 500 /* blh */, SystemZ::BAsmLH, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 504 /* blhr */, SystemZ::BRAsmLH, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 509 /* blr */, SystemZ::BRAsmL, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 513 /* bm */, SystemZ::BAsmM, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 516 /* bmr */, SystemZ::BRAsmM, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 520 /* bne */, SystemZ::BAsmNE, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 524 /* bner */, SystemZ::BRAsmNE, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 529 /* bnh */, SystemZ::BAsmNH, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 533 /* bnhe */, SystemZ::BAsmNHE, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 538 /* bnher */, SystemZ::BRAsmNHE, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 544 /* bnhr */, SystemZ::BRAsmNH, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 549 /* bnl */, SystemZ::BAsmNL, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 553 /* bnle */, SystemZ::BAsmNLE, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 558 /* bnler */, SystemZ::BRAsmNLE, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 564 /* bnlh */, SystemZ::BAsmNLH, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 569 /* bnlhr */, SystemZ::BRAsmNLH, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 575 /* bnlr */, SystemZ::BRAsmNL, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 580 /* bnm */, SystemZ::BAsmNM, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 584 /* bnmr */, SystemZ::BRAsmNM, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 589 /* bno */, SystemZ::BAsmNO, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 593 /* bnor */, SystemZ::BRAsmNO, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 598 /* bnp */, SystemZ::BAsmNP, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 602 /* bnpr */, SystemZ::BRAsmNP, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 607 /* bnz */, SystemZ::BAsmNZ, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 611 /* bnzr */, SystemZ::BRAsmNZ, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 616 /* bo */, SystemZ::BAsmO, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 619 /* bor */, SystemZ::BRAsmO, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 623 /* bp */, SystemZ::BAsmP, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 626 /* bpp */, SystemZ::BPP, Convert__U4Imm1_0__PCRel161_1__BDXAddr64Disp123_2, AMFBS_FeatureExecutionHint, { MCK_U4Imm, MCK_PCRel16, MCK_BDXAddr64Disp12 }, },
  { 630 /* bpr */, SystemZ::BRAsmP, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 634 /* bprp */, SystemZ::BPRP, Convert__U4Imm1_0__PCRel121_1__PCRel241_2, AMFBS_FeatureExecutionHint, { MCK_U4Imm, MCK_PCRel12, MCK_PCRel24 }, },
  { 639 /* br */, SystemZ::BR, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 642 /* bras */, SystemZ::BRAS, Convert__GR641_0__PCRelTLS162_1, AMFBS_None, { MCK_GR64, MCK_PCRelTLS16 }, },
  { 647 /* brasl */, SystemZ::BRASL, Convert__GR641_0__PCRelTLS322_1, AMFBS_None, { MCK_GR64, MCK_PCRelTLS32 }, },
  { 653 /* brc */, SystemZ::BRCAsm, Convert__U4Imm1_0__PCRel161_1, AMFBS_None, { MCK_U4Imm, MCK_PCRel16 }, },
  { 657 /* brcl */, SystemZ::BRCLAsm, Convert__U4Imm1_0__PCRel321_1, AMFBS_None, { MCK_U4Imm, MCK_PCRel32 }, },
  { 662 /* brct */, SystemZ::BRCT, Convert__GR321_0__Tie0_1_1__PCRel161_1, AMFBS_None, { MCK_GR32, MCK_PCRel16 }, },
  { 667 /* brctg */, SystemZ::BRCTG, Convert__GR641_0__Tie0_1_1__PCRel161_1, AMFBS_None, { MCK_GR64, MCK_PCRel16 }, },
  { 673 /* brcth */, SystemZ::BRCTH, Convert__GRH321_0__Tie0_1_1__PCRel321_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_PCRel32 }, },
  { 679 /* brxh */, SystemZ::BRXH, Convert__GR321_0__Tie0_1_1__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 684 /* brxhg */, SystemZ::BRXHG, Convert__GR641_0__Tie0_1_1__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 690 /* brxle */, SystemZ::BRXLE, Convert__GR321_0__Tie0_1_1__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 696 /* brxlg */, SystemZ::BRXLG, Convert__GR641_0__Tie0_1_1__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 702 /* bsa */, SystemZ::BSA, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 706 /* bsg */, SystemZ::BSG, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 710 /* bsm */, SystemZ::BSM, Convert__GR641_0__ADDR641_1, AMFBS_None, { MCK_GR64, MCK_ADDR64 }, },
  { 714 /* bxh */, SystemZ::BXH, Convert__GR321_0__Tie0_1_1__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 718 /* bxhg */, SystemZ::BXHG, Convert__GR641_0__Tie0_1_1__GR641_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 723 /* bxle */, SystemZ::BXLE, Convert__GR321_0__Tie0_1_1__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 728 /* bxleg */, SystemZ::BXLEG, Convert__GR641_0__Tie0_1_1__GR641_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 734 /* bz */, SystemZ::BAsmZ, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 737 /* bzr */, SystemZ::BRAsmZ, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 741 /* c */, SystemZ::C, Convert__GR321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 743 /* cd */, SystemZ::CD, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 746 /* cdb */, SystemZ::CDB, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 750 /* cdbr */, SystemZ::CDBR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 755 /* cdfbr */, SystemZ::CDFBR, Convert__FP641_0__GR321_1, AMFBS_None, { MCK_FP64, MCK_GR32 }, },
  { 761 /* cdfbra */, SystemZ::CDFBRA, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 768 /* cdfr */, SystemZ::CDFR, Convert__FP641_0__GR321_1, AMFBS_None, { MCK_FP64, MCK_GR32 }, },
  { 773 /* cdftr */, SystemZ::CDFTR, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 779 /* cdgbr */, SystemZ::CDGBR, Convert__FP641_0__GR641_1, AMFBS_None, { MCK_FP64, MCK_GR64 }, },
  { 785 /* cdgbra */, SystemZ::CDGBRA, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 792 /* cdgr */, SystemZ::CDGR, Convert__FP641_0__GR641_1, AMFBS_None, { MCK_FP64, MCK_GR64 }, },
  { 797 /* cdgtr */, SystemZ::CDGTR, Convert__FP641_0__GR641_1, AMFBS_None, { MCK_FP64, MCK_GR64 }, },
  { 803 /* cdgtra */, SystemZ::CDGTRA, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 810 /* cdlfbr */, SystemZ::CDLFBR, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 817 /* cdlftr */, SystemZ::CDLFTR, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 824 /* cdlgbr */, SystemZ::CDLGBR, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 831 /* cdlgtr */, SystemZ::CDLGTR, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 838 /* cdpt */, SystemZ::CDPT, Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2, AMFBS_FeatureDFPPackedConversion, { MCK_FP64, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 843 /* cdr */, SystemZ::CDR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 847 /* cds */, SystemZ::CDS, Convert__GR1281_0__Tie0_1_1__GR1281_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_BDAddr64Disp12 }, },
  { 851 /* cdsg */, SystemZ::CDSG, Convert__GR1281_0__Tie0_1_1__GR1281_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_BDAddr64Disp20 }, },
  { 856 /* cdstr */, SystemZ::CDSTR, Convert__FP641_0__GR641_1, AMFBS_None, { MCK_FP64, MCK_GR64 }, },
  { 862 /* cdsy */, SystemZ::CDSY, Convert__GR1281_0__Tie0_1_1__GR1281_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_BDAddr64Disp20 }, },
  { 867 /* cdtr */, SystemZ::CDTR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 872 /* cdutr */, SystemZ::CDUTR, Convert__FP641_0__GR641_1, AMFBS_None, { MCK_FP64, MCK_GR64 }, },
  { 878 /* cdzt */, SystemZ::CDZT, Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2, AMFBS_FeatureDFPZonedConversion, { MCK_FP64, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 883 /* ce */, SystemZ::CE, Convert__FP321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 886 /* ceb */, SystemZ::CEB, Convert__FP321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 890 /* cebr */, SystemZ::CEBR, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 895 /* cedtr */, SystemZ::CEDTR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 901 /* cefbr */, SystemZ::CEFBR, Convert__FP321_0__GR321_1, AMFBS_None, { MCK_FP32, MCK_GR32 }, },
  { 907 /* cefbra */, SystemZ::CEFBRA, Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 914 /* cefr */, SystemZ::CEFR, Convert__FP321_0__GR321_1, AMFBS_None, { MCK_FP32, MCK_GR32 }, },
  { 919 /* cegbr */, SystemZ::CEGBR, Convert__FP321_0__GR641_1, AMFBS_None, { MCK_FP32, MCK_GR64 }, },
  { 925 /* cegbra */, SystemZ::CEGBRA, Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 932 /* cegr */, SystemZ::CEGR, Convert__FP321_0__GR641_1, AMFBS_None, { MCK_FP32, MCK_GR64 }, },
  { 937 /* celfbr */, SystemZ::CELFBR, Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 944 /* celgbr */, SystemZ::CELGBR, Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 951 /* cer */, SystemZ::CER, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 955 /* cextr */, SystemZ::CEXTR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 961 /* cfc */, SystemZ::CFC, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 965 /* cfdbr */, SystemZ::CFDBR, Convert__GR321_0__U4Imm1_1__FP641_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_FP64 }, },
  { 971 /* cfdbra */, SystemZ::CFDBRA, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 978 /* cfdr */, SystemZ::CFDR, Convert__GR321_0__U4Imm1_1__FP641_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_FP64 }, },
  { 983 /* cfdtr */, SystemZ::CFDTR, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 989 /* cfebr */, SystemZ::CFEBR, Convert__GR321_0__U4Imm1_1__FP321_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_FP32 }, },
  { 995 /* cfebra */, SystemZ::CFEBRA, Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 1002 /* cfer */, SystemZ::CFER, Convert__GR321_0__U4Imm1_1__FP321_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_FP32 }, },
  { 1007 /* cfi */, SystemZ::CFI, Convert__GR321_0__S32Imm1_1, AMFBS_None, { MCK_GR32, MCK_S32Imm }, },
  { 1011 /* cfxbr */, SystemZ::CFXBR, Convert__GR321_0__U4Imm1_1__FP1281_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_FP128 }, },
  { 1017 /* cfxbra */, SystemZ::CFXBRA, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1024 /* cfxr */, SystemZ::CFXR, Convert__GR321_0__U4Imm1_1__FP1281_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_FP128 }, },
  { 1029 /* cfxtr */, SystemZ::CFXTR, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1035 /* cg */, SystemZ::CG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1038 /* cgdbr */, SystemZ::CGDBR, Convert__GR641_0__U4Imm1_1__FP641_2, AMFBS_None, { MCK_GR64, MCK_U4Imm, MCK_FP64 }, },
  { 1044 /* cgdbra */, SystemZ::CGDBRA, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 1051 /* cgdr */, SystemZ::CGDR, Convert__GR641_0__U4Imm1_1__FP641_2, AMFBS_None, { MCK_GR64, MCK_U4Imm, MCK_FP64 }, },
  { 1056 /* cgdtr */, SystemZ::CGDTR, Convert__GR641_0__U4Imm1_1__FP641_2, AMFBS_None, { MCK_GR64, MCK_U4Imm, MCK_FP64 }, },
  { 1062 /* cgdtra */, SystemZ::CGDTRA, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 1069 /* cgebr */, SystemZ::CGEBR, Convert__GR641_0__U4Imm1_1__FP321_2, AMFBS_None, { MCK_GR64, MCK_U4Imm, MCK_FP32 }, },
  { 1075 /* cgebra */, SystemZ::CGEBRA, Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 1082 /* cger */, SystemZ::CGER, Convert__GR641_0__U4Imm1_1__FP321_2, AMFBS_None, { MCK_GR64, MCK_U4Imm, MCK_FP32 }, },
  { 1087 /* cgf */, SystemZ::CGF, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1091 /* cgfi */, SystemZ::CGFI, Convert__GR641_0__S32Imm1_1, AMFBS_None, { MCK_GR64, MCK_S32Imm }, },
  { 1096 /* cgfr */, SystemZ::CGFR, Convert__GR641_0__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 1101 /* cgfrl */, SystemZ::CGFRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 1107 /* cgh */, SystemZ::CGH, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1111 /* cghi */, SystemZ::CGHI, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1116 /* cghrl */, SystemZ::CGHRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 1122 /* cghsi */, SystemZ::CGHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 1128 /* cgib */, SystemZ::CGIBAsm, Convert__GR641_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 1133 /* cgibe */, SystemZ::CGIBAsmE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1139 /* cgibh */, SystemZ::CGIBAsmH, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1145 /* cgibhe */, SystemZ::CGIBAsmHE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1152 /* cgibl */, SystemZ::CGIBAsmL, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1158 /* cgible */, SystemZ::CGIBAsmLE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1165 /* cgiblh */, SystemZ::CGIBAsmLH, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1172 /* cgibne */, SystemZ::CGIBAsmNE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1179 /* cgibnh */, SystemZ::CGIBAsmNH, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1186 /* cgibnhe */, SystemZ::CGIBAsmNHE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1194 /* cgibnl */, SystemZ::CGIBAsmNL, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1201 /* cgibnle */, SystemZ::CGIBAsmNLE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1209 /* cgibnlh */, SystemZ::CGIBAsmNLH, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1217 /* cgij */, SystemZ::CGIJAsm, Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 1222 /* cgije */, SystemZ::CGIJAsmE, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1228 /* cgijh */, SystemZ::CGIJAsmH, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1234 /* cgijhe */, SystemZ::CGIJAsmHE, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1241 /* cgijl */, SystemZ::CGIJAsmL, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1247 /* cgijle */, SystemZ::CGIJAsmLE, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1254 /* cgijlh */, SystemZ::CGIJAsmLH, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1261 /* cgijne */, SystemZ::CGIJAsmNE, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1268 /* cgijnh */, SystemZ::CGIJAsmNH, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1275 /* cgijnhe */, SystemZ::CGIJAsmNHE, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1283 /* cgijnl */, SystemZ::CGIJAsmNL, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1290 /* cgijnle */, SystemZ::CGIJAsmNLE, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1298 /* cgijnlh */, SystemZ::CGIJAsmNLH, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1306 /* cgit */, SystemZ::CGITAsm, Convert__GR641_0__S16Imm1_1__U4Imm1_2, AMFBS_None, { MCK_GR64, MCK_S16Imm, MCK_U4Imm }, },
  { 1311 /* cgite */, SystemZ::CGITAsmE, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1317 /* cgith */, SystemZ::CGITAsmH, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1323 /* cgithe */, SystemZ::CGITAsmHE, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1330 /* cgitl */, SystemZ::CGITAsmL, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1336 /* cgitle */, SystemZ::CGITAsmLE, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1343 /* cgitlh */, SystemZ::CGITAsmLH, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1350 /* cgitne */, SystemZ::CGITAsmNE, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1357 /* cgitnh */, SystemZ::CGITAsmNH, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1364 /* cgitnhe */, SystemZ::CGITAsmNHE, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1372 /* cgitnl */, SystemZ::CGITAsmNL, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1379 /* cgitnle */, SystemZ::CGITAsmNLE, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1387 /* cgitnlh */, SystemZ::CGITAsmNLH, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1395 /* cgr */, SystemZ::CGR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1399 /* cgrb */, SystemZ::CGRBAsm, Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 1404 /* cgrbe */, SystemZ::CGRBAsmE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1410 /* cgrbh */, SystemZ::CGRBAsmH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1416 /* cgrbhe */, SystemZ::CGRBAsmHE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1423 /* cgrbl */, SystemZ::CGRBAsmL, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1429 /* cgrble */, SystemZ::CGRBAsmLE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1436 /* cgrblh */, SystemZ::CGRBAsmLH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1443 /* cgrbne */, SystemZ::CGRBAsmNE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1450 /* cgrbnh */, SystemZ::CGRBAsmNH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1457 /* cgrbnhe */, SystemZ::CGRBAsmNHE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1465 /* cgrbnl */, SystemZ::CGRBAsmNL, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1472 /* cgrbnle */, SystemZ::CGRBAsmNLE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1480 /* cgrbnlh */, SystemZ::CGRBAsmNLH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1488 /* cgrj */, SystemZ::CGRJAsm, Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_PCRel16 }, },
  { 1493 /* cgrje */, SystemZ::CGRJAsmE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1499 /* cgrjh */, SystemZ::CGRJAsmH, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1505 /* cgrjhe */, SystemZ::CGRJAsmHE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1512 /* cgrjl */, SystemZ::CGRJAsmL, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1518 /* cgrjle */, SystemZ::CGRJAsmLE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1525 /* cgrjlh */, SystemZ::CGRJAsmLH, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1532 /* cgrjne */, SystemZ::CGRJAsmNE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1539 /* cgrjnh */, SystemZ::CGRJAsmNH, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1546 /* cgrjnhe */, SystemZ::CGRJAsmNHE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1554 /* cgrjnl */, SystemZ::CGRJAsmNL, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1561 /* cgrjnle */, SystemZ::CGRJAsmNLE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1569 /* cgrjnlh */, SystemZ::CGRJAsmNLH, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1577 /* cgrl */, SystemZ::CGRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 1582 /* cgrt */, SystemZ::CGRTAsm, Convert__GR641_0__GR641_1__U4Imm1_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 1587 /* cgrte */, SystemZ::CGRTAsmE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1593 /* cgrth */, SystemZ::CGRTAsmH, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1599 /* cgrthe */, SystemZ::CGRTAsmHE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1606 /* cgrtl */, SystemZ::CGRTAsmL, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1612 /* cgrtle */, SystemZ::CGRTAsmLE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1619 /* cgrtlh */, SystemZ::CGRTAsmLH, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1626 /* cgrtne */, SystemZ::CGRTAsmNE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1633 /* cgrtnh */, SystemZ::CGRTAsmNH, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1640 /* cgrtnhe */, SystemZ::CGRTAsmNHE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1648 /* cgrtnl */, SystemZ::CGRTAsmNL, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1655 /* cgrtnle */, SystemZ::CGRTAsmNLE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1663 /* cgrtnlh */, SystemZ::CGRTAsmNLH, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1671 /* cgxbr */, SystemZ::CGXBR, Convert__GR641_0__U4Imm1_1__FP1281_2, AMFBS_None, { MCK_GR64, MCK_U4Imm, MCK_FP128 }, },
  { 1677 /* cgxbra */, SystemZ::CGXBRA, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1684 /* cgxr */, SystemZ::CGXR, Convert__GR641_0__U4Imm1_1__FP1281_2, AMFBS_None, { MCK_GR64, MCK_U4Imm, MCK_FP128 }, },
  { 1689 /* cgxtr */, SystemZ::CGXTR, Convert__GR641_0__U4Imm1_1__FP1281_2, AMFBS_None, { MCK_GR64, MCK_U4Imm, MCK_FP128 }, },
  { 1695 /* cgxtra */, SystemZ::CGXTRA, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1702 /* ch */, SystemZ::CH, Convert__GR321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 1705 /* chf */, SystemZ::CHF, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 1709 /* chhr */, SystemZ::CHHR, Convert__GRH321_0__GRH321_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GRH32 }, },
  { 1714 /* chhsi */, SystemZ::CHHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 1720 /* chi */, SystemZ::CHI, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1724 /* chlr */, SystemZ::CHLR, Convert__GRH321_0__GR321_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GR32 }, },
  { 1729 /* chrl */, SystemZ::CHRL, Convert__GR321_0__PCRel321_1, AMFBS_None, { MCK_GR32, MCK_PCRel32 }, },
  { 1734 /* chsi */, SystemZ::CHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 1739 /* chy */, SystemZ::CHY, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1743 /* cib */, SystemZ::CIBAsm, Convert__GR321_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 1747 /* cibe */, SystemZ::CIBAsmE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1752 /* cibh */, SystemZ::CIBAsmH, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1757 /* cibhe */, SystemZ::CIBAsmHE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1763 /* cibl */, SystemZ::CIBAsmL, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1768 /* cible */, SystemZ::CIBAsmLE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1774 /* ciblh */, SystemZ::CIBAsmLH, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1780 /* cibne */, SystemZ::CIBAsmNE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1786 /* cibnh */, SystemZ::CIBAsmNH, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1792 /* cibnhe */, SystemZ::CIBAsmNHE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1799 /* cibnl */, SystemZ::CIBAsmNL, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1805 /* cibnle */, SystemZ::CIBAsmNLE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1812 /* cibnlh */, SystemZ::CIBAsmNLH, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1819 /* cih */, SystemZ::CIH, Convert__GRH321_0__S32Imm1_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 1823 /* cij */, SystemZ::CIJAsm, Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 1827 /* cije */, SystemZ::CIJAsmE, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1832 /* cijh */, SystemZ::CIJAsmH, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1837 /* cijhe */, SystemZ::CIJAsmHE, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1843 /* cijl */, SystemZ::CIJAsmL, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1848 /* cijle */, SystemZ::CIJAsmLE, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1854 /* cijlh */, SystemZ::CIJAsmLH, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1860 /* cijne */, SystemZ::CIJAsmNE, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1866 /* cijnh */, SystemZ::CIJAsmNH, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1872 /* cijnhe */, SystemZ::CIJAsmNHE, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1879 /* cijnl */, SystemZ::CIJAsmNL, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1885 /* cijnle */, SystemZ::CIJAsmNLE, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1892 /* cijnlh */, SystemZ::CIJAsmNLH, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1899 /* cit */, SystemZ::CITAsm, Convert__GR321_0__S16Imm1_1__U4Imm1_2, AMFBS_None, { MCK_GR32, MCK_S16Imm, MCK_U4Imm }, },
  { 1903 /* cite */, SystemZ::CITAsmE, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1908 /* cith */, SystemZ::CITAsmH, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1913 /* cithe */, SystemZ::CITAsmHE, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1919 /* citl */, SystemZ::CITAsmL, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1924 /* citle */, SystemZ::CITAsmLE, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1930 /* citlh */, SystemZ::CITAsmLH, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1936 /* citne */, SystemZ::CITAsmNE, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1942 /* citnh */, SystemZ::CITAsmNH, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1948 /* citnhe */, SystemZ::CITAsmNHE, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1955 /* citnl */, SystemZ::CITAsmNL, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1961 /* citnle */, SystemZ::CITAsmNLE, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1968 /* citnlh */, SystemZ::CITAsmNLH, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1975 /* cksm */, SystemZ::CKSM, Convert__GR641_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR64, MCK_GR128 }, },
  { 1980 /* cl */, SystemZ::CL, Convert__GR321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 1983 /* clc */, SystemZ::CLC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 1987 /* clcl */, SystemZ::CLCL, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 1992 /* clcle */, SystemZ::CLCLE, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__BDAddr32Disp122_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 1998 /* clclu */, SystemZ::CLCLU, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__BDAddr32Disp202_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_BDAddr32Disp20 }, },
  { 2004 /* clfdbr */, SystemZ::CLFDBR, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 2011 /* clfdtr */, SystemZ::CLFDTR, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 2018 /* clfebr */, SystemZ::CLFEBR, Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 2025 /* clfhsi */, SystemZ::CLFHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 2032 /* clfi */, SystemZ::CLFI, Convert__GR321_0__U32Imm1_1, AMFBS_None, { MCK_GR32, MCK_U32Imm }, },
  { 2037 /* clfit */, SystemZ::CLFITAsm, Convert__GR321_0__U16Imm1_1__U4Imm1_2, AMFBS_None, { MCK_GR32, MCK_U16Imm, MCK_U4Imm }, },
  { 2043 /* clfite */, SystemZ::CLFITAsmE, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2050 /* clfith */, SystemZ::CLFITAsmH, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2057 /* clfithe */, SystemZ::CLFITAsmHE, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2065 /* clfitl */, SystemZ::CLFITAsmL, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2072 /* clfitle */, SystemZ::CLFITAsmLE, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2080 /* clfitlh */, SystemZ::CLFITAsmLH, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2088 /* clfitne */, SystemZ::CLFITAsmNE, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2096 /* clfitnh */, SystemZ::CLFITAsmNH, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2104 /* clfitnhe */, SystemZ::CLFITAsmNHE, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2113 /* clfitnl */, SystemZ::CLFITAsmNL, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2121 /* clfitnle */, SystemZ::CLFITAsmNLE, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2130 /* clfitnlh */, SystemZ::CLFITAsmNLH, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2139 /* clfxbr */, SystemZ::CLFXBR, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 2146 /* clfxtr */, SystemZ::CLFXTR, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 2153 /* clg */, SystemZ::CLG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2157 /* clgdbr */, SystemZ::CLGDBR, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 2164 /* clgdtr */, SystemZ::CLGDTR, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 2171 /* clgebr */, SystemZ::CLGEBR, Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 2178 /* clgf */, SystemZ::CLGF, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2183 /* clgfi */, SystemZ::CLGFI, Convert__GR641_0__U32Imm1_1, AMFBS_None, { MCK_GR64, MCK_U32Imm }, },
  { 2189 /* clgfr */, SystemZ::CLGFR, Convert__GR641_0__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 2195 /* clgfrl */, SystemZ::CLGFRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 2202 /* clghrl */, SystemZ::CLGHRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 2209 /* clghsi */, SystemZ::CLGHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 2216 /* clgib */, SystemZ::CLGIBAsm, Convert__GR641_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 2222 /* clgibe */, SystemZ::CLGIBAsmE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2229 /* clgibh */, SystemZ::CLGIBAsmH, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2236 /* clgibhe */, SystemZ::CLGIBAsmHE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2244 /* clgibl */, SystemZ::CLGIBAsmL, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2251 /* clgible */, SystemZ::CLGIBAsmLE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2259 /* clgiblh */, SystemZ::CLGIBAsmLH, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2267 /* clgibne */, SystemZ::CLGIBAsmNE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2275 /* clgibnh */, SystemZ::CLGIBAsmNH, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2283 /* clgibnhe */, SystemZ::CLGIBAsmNHE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2292 /* clgibnl */, SystemZ::CLGIBAsmNL, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2300 /* clgibnle */, SystemZ::CLGIBAsmNLE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2309 /* clgibnlh */, SystemZ::CLGIBAsmNLH, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2318 /* clgij */, SystemZ::CLGIJAsm, Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 2324 /* clgije */, SystemZ::CLGIJAsmE, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2331 /* clgijh */, SystemZ::CLGIJAsmH, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2338 /* clgijhe */, SystemZ::CLGIJAsmHE, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2346 /* clgijl */, SystemZ::CLGIJAsmL, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2353 /* clgijle */, SystemZ::CLGIJAsmLE, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2361 /* clgijlh */, SystemZ::CLGIJAsmLH, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2369 /* clgijne */, SystemZ::CLGIJAsmNE, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2377 /* clgijnh */, SystemZ::CLGIJAsmNH, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2385 /* clgijnhe */, SystemZ::CLGIJAsmNHE, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2394 /* clgijnl */, SystemZ::CLGIJAsmNL, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2402 /* clgijnle */, SystemZ::CLGIJAsmNLE, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2411 /* clgijnlh */, SystemZ::CLGIJAsmNLH, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2420 /* clgit */, SystemZ::CLGITAsm, Convert__GR641_0__U16Imm1_1__U4Imm1_2, AMFBS_None, { MCK_GR64, MCK_U16Imm, MCK_U4Imm }, },
  { 2426 /* clgite */, SystemZ::CLGITAsmE, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2433 /* clgith */, SystemZ::CLGITAsmH, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2440 /* clgithe */, SystemZ::CLGITAsmHE, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2448 /* clgitl */, SystemZ::CLGITAsmL, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2455 /* clgitle */, SystemZ::CLGITAsmLE, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2463 /* clgitlh */, SystemZ::CLGITAsmLH, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2471 /* clgitne */, SystemZ::CLGITAsmNE, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2479 /* clgitnh */, SystemZ::CLGITAsmNH, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2487 /* clgitnhe */, SystemZ::CLGITAsmNHE, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2496 /* clgitnl */, SystemZ::CLGITAsmNL, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2504 /* clgitnle */, SystemZ::CLGITAsmNLE, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2513 /* clgitnlh */, SystemZ::CLGITAsmNLH, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2522 /* clgr */, SystemZ::CLGR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2527 /* clgrb */, SystemZ::CLGRBAsm, Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 2533 /* clgrbe */, SystemZ::CLGRBAsmE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2540 /* clgrbh */, SystemZ::CLGRBAsmH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2547 /* clgrbhe */, SystemZ::CLGRBAsmHE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2555 /* clgrbl */, SystemZ::CLGRBAsmL, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2562 /* clgrble */, SystemZ::CLGRBAsmLE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2570 /* clgrblh */, SystemZ::CLGRBAsmLH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2578 /* clgrbne */, SystemZ::CLGRBAsmNE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2586 /* clgrbnh */, SystemZ::CLGRBAsmNH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2594 /* clgrbnhe */, SystemZ::CLGRBAsmNHE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2603 /* clgrbnl */, SystemZ::CLGRBAsmNL, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2611 /* clgrbnle */, SystemZ::CLGRBAsmNLE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2620 /* clgrbnlh */, SystemZ::CLGRBAsmNLH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2629 /* clgrj */, SystemZ::CLGRJAsm, Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_PCRel16 }, },
  { 2635 /* clgrje */, SystemZ::CLGRJAsmE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2642 /* clgrjh */, SystemZ::CLGRJAsmH, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2649 /* clgrjhe */, SystemZ::CLGRJAsmHE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2657 /* clgrjl */, SystemZ::CLGRJAsmL, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2664 /* clgrjle */, SystemZ::CLGRJAsmLE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2672 /* clgrjlh */, SystemZ::CLGRJAsmLH, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2680 /* clgrjne */, SystemZ::CLGRJAsmNE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2688 /* clgrjnh */, SystemZ::CLGRJAsmNH, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2696 /* clgrjnhe */, SystemZ::CLGRJAsmNHE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2705 /* clgrjnl */, SystemZ::CLGRJAsmNL, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2713 /* clgrjnle */, SystemZ::CLGRJAsmNLE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2722 /* clgrjnlh */, SystemZ::CLGRJAsmNLH, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2731 /* clgrl */, SystemZ::CLGRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 2737 /* clgrt */, SystemZ::CLGRTAsm, Convert__GR641_0__GR641_1__U4Imm1_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 2743 /* clgrte */, SystemZ::CLGRTAsmE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2750 /* clgrth */, SystemZ::CLGRTAsmH, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2757 /* clgrthe */, SystemZ::CLGRTAsmHE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2765 /* clgrtl */, SystemZ::CLGRTAsmL, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2772 /* clgrtle */, SystemZ::CLGRTAsmLE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2780 /* clgrtlh */, SystemZ::CLGRTAsmLH, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2788 /* clgrtne */, SystemZ::CLGRTAsmNE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2796 /* clgrtnh */, SystemZ::CLGRTAsmNH, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2804 /* clgrtnhe */, SystemZ::CLGRTAsmNHE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2813 /* clgrtnl */, SystemZ::CLGRTAsmNL, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2821 /* clgrtnle */, SystemZ::CLGRTAsmNLE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2830 /* clgrtnlh */, SystemZ::CLGRTAsmNLH, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2839 /* clgt */, SystemZ::CLGTAsm, Convert__GR641_0__BDAddr64Disp202_2__U4Imm1_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 2844 /* clgte */, SystemZ::CLGTAsmE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2850 /* clgth */, SystemZ::CLGTAsmH, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2856 /* clgthe */, SystemZ::CLGTAsmHE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2863 /* clgtl */, SystemZ::CLGTAsmL, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2869 /* clgtle */, SystemZ::CLGTAsmLE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2876 /* clgtlh */, SystemZ::CLGTAsmLH, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2883 /* clgtne */, SystemZ::CLGTAsmNE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2890 /* clgtnh */, SystemZ::CLGTAsmNH, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2897 /* clgtnhe */, SystemZ::CLGTAsmNHE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2905 /* clgtnl */, SystemZ::CLGTAsmNL, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2912 /* clgtnle */, SystemZ::CLGTAsmNLE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2920 /* clgtnlh */, SystemZ::CLGTAsmNLH, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2928 /* clgxbr */, SystemZ::CLGXBR, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 2935 /* clgxtr */, SystemZ::CLGXTR, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 2942 /* clhf */, SystemZ::CLHF, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 2947 /* clhhr */, SystemZ::CLHHR, Convert__GRH321_0__GRH321_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GRH32 }, },
  { 2953 /* clhhsi */, SystemZ::CLHHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 2960 /* clhlr */, SystemZ::CLHLR, Convert__GRH321_0__GR321_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GR32 }, },
  { 2966 /* clhrl */, SystemZ::CLHRL, Convert__GR321_0__PCRel321_1, AMFBS_None, { MCK_GR32, MCK_PCRel32 }, },
  { 2972 /* cli */, SystemZ::CLI, Convert__BDAddr64Disp122_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 2976 /* clib */, SystemZ::CLIBAsm, Convert__GR321_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 2981 /* clibe */, SystemZ::CLIBAsmE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2987 /* clibh */, SystemZ::CLIBAsmH, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2993 /* clibhe */, SystemZ::CLIBAsmHE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3000 /* clibl */, SystemZ::CLIBAsmL, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3006 /* clible */, SystemZ::CLIBAsmLE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3013 /* cliblh */, SystemZ::CLIBAsmLH, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3020 /* clibne */, SystemZ::CLIBAsmNE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3027 /* clibnh */, SystemZ::CLIBAsmNH, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3034 /* clibnhe */, SystemZ::CLIBAsmNHE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3042 /* clibnl */, SystemZ::CLIBAsmNL, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3049 /* clibnle */, SystemZ::CLIBAsmNLE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3057 /* clibnlh */, SystemZ::CLIBAsmNLH, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3065 /* clih */, SystemZ::CLIH, Convert__GRH321_0__U32Imm1_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_U32Imm }, },
  { 3070 /* clij */, SystemZ::CLIJAsm, Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 3075 /* clije */, SystemZ::CLIJAsmE, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3081 /* clijh */, SystemZ::CLIJAsmH, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3087 /* clijhe */, SystemZ::CLIJAsmHE, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3094 /* clijl */, SystemZ::CLIJAsmL, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3100 /* clijle */, SystemZ::CLIJAsmLE, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3107 /* clijlh */, SystemZ::CLIJAsmLH, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3114 /* clijne */, SystemZ::CLIJAsmNE, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3121 /* clijnh */, SystemZ::CLIJAsmNH, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3128 /* clijnhe */, SystemZ::CLIJAsmNHE, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3136 /* clijnl */, SystemZ::CLIJAsmNL, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3143 /* clijnle */, SystemZ::CLIJAsmNLE, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3151 /* clijnlh */, SystemZ::CLIJAsmNLH, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3159 /* cliy */, SystemZ::CLIY, Convert__BDAddr64Disp202_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 3164 /* clm */, SystemZ::CLM, Convert__GR321_0__U4Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 3168 /* clmh */, SystemZ::CLMH, Convert__GRH321_0__U4Imm1_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GRH32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 3173 /* clmy */, SystemZ::CLMY, Convert__GR321_0__U4Imm1_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 3178 /* clr */, SystemZ::CLR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3182 /* clrb */, SystemZ::CLRBAsm, Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 3187 /* clrbe */, SystemZ::CLRBAsmE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3193 /* clrbh */, SystemZ::CLRBAsmH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3199 /* clrbhe */, SystemZ::CLRBAsmHE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3206 /* clrbl */, SystemZ::CLRBAsmL, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3212 /* clrble */, SystemZ::CLRBAsmLE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3219 /* clrblh */, SystemZ::CLRBAsmLH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3226 /* clrbne */, SystemZ::CLRBAsmNE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3233 /* clrbnh */, SystemZ::CLRBAsmNH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3240 /* clrbnhe */, SystemZ::CLRBAsmNHE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3248 /* clrbnl */, SystemZ::CLRBAsmNL, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3255 /* clrbnle */, SystemZ::CLRBAsmNLE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3263 /* clrbnlh */, SystemZ::CLRBAsmNLH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3271 /* clrj */, SystemZ::CLRJAsm, Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_PCRel16 }, },
  { 3276 /* clrje */, SystemZ::CLRJAsmE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3282 /* clrjh */, SystemZ::CLRJAsmH, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3288 /* clrjhe */, SystemZ::CLRJAsmHE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3295 /* clrjl */, SystemZ::CLRJAsmL, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3301 /* clrjle */, SystemZ::CLRJAsmLE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3308 /* clrjlh */, SystemZ::CLRJAsmLH, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3315 /* clrjne */, SystemZ::CLRJAsmNE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3322 /* clrjnh */, SystemZ::CLRJAsmNH, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3329 /* clrjnhe */, SystemZ::CLRJAsmNHE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3337 /* clrjnl */, SystemZ::CLRJAsmNL, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3344 /* clrjnle */, SystemZ::CLRJAsmNLE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3352 /* clrjnlh */, SystemZ::CLRJAsmNLH, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3360 /* clrl */, SystemZ::CLRL, Convert__GR321_0__PCRel321_1, AMFBS_None, { MCK_GR32, MCK_PCRel32 }, },
  { 3365 /* clrt */, SystemZ::CLRTAsm, Convert__GR321_0__GR321_1__U4Imm1_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 3370 /* clrte */, SystemZ::CLRTAsmE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3376 /* clrth */, SystemZ::CLRTAsmH, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3382 /* clrthe */, SystemZ::CLRTAsmHE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3389 /* clrtl */, SystemZ::CLRTAsmL, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3395 /* clrtle */, SystemZ::CLRTAsmLE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3402 /* clrtlh */, SystemZ::CLRTAsmLH, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3409 /* clrtne */, SystemZ::CLRTAsmNE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3416 /* clrtnh */, SystemZ::CLRTAsmNH, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3423 /* clrtnhe */, SystemZ::CLRTAsmNHE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3431 /* clrtnl */, SystemZ::CLRTAsmNL, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3438 /* clrtnle */, SystemZ::CLRTAsmNLE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3446 /* clrtnlh */, SystemZ::CLRTAsmNLH, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3454 /* clst */, SystemZ::CLST, Convert__GR641_0__GR641_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 3459 /* clt */, SystemZ::CLTAsm, Convert__GR321_0__BDAddr64Disp202_2__U4Imm1_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 3463 /* clte */, SystemZ::CLTAsmE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3468 /* clth */, SystemZ::CLTAsmH, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3473 /* clthe */, SystemZ::CLTAsmHE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3479 /* cltl */, SystemZ::CLTAsmL, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3484 /* cltle */, SystemZ::CLTAsmLE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3490 /* cltlh */, SystemZ::CLTAsmLH, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3496 /* cltne */, SystemZ::CLTAsmNE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3502 /* cltnh */, SystemZ::CLTAsmNH, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3508 /* cltnhe */, SystemZ::CLTAsmNHE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3515 /* cltnl */, SystemZ::CLTAsmNL, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3521 /* cltnle */, SystemZ::CLTAsmNLE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3528 /* cltnlh */, SystemZ::CLTAsmNLH, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3535 /* cly */, SystemZ::CLY, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3539 /* cmpsc */, SystemZ::CMPSC, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 3545 /* cp */, SystemZ::CP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, AMFBS_None, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 3548 /* cpdt */, SystemZ::CPDT, Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2, AMFBS_FeatureDFPPackedConversion, { MCK_FP64, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 3553 /* cpsdr */, SystemZ::CPSDRdd, Convert__FP641_0__FP641_2__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 3559 /* cpxt */, SystemZ::CPXT, Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2, AMFBS_FeatureDFPPackedConversion, { MCK_FP128, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 3564 /* cpya */, SystemZ::CPYA, Convert__AR321_0__AR321_1, AMFBS_None, { MCK_AR32, MCK_AR32 }, },
  { 3569 /* cr */, SystemZ::CR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3572 /* crb */, SystemZ::CRBAsm, Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 3576 /* crbe */, SystemZ::CRBAsmE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3581 /* crbh */, SystemZ::CRBAsmH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3586 /* crbhe */, SystemZ::CRBAsmHE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3592 /* crbl */, SystemZ::CRBAsmL, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3597 /* crble */, SystemZ::CRBAsmLE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3603 /* crblh */, SystemZ::CRBAsmLH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3609 /* crbne */, SystemZ::CRBAsmNE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3615 /* crbnh */, SystemZ::CRBAsmNH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3621 /* crbnhe */, SystemZ::CRBAsmNHE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3628 /* crbnl */, SystemZ::CRBAsmNL, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3634 /* crbnle */, SystemZ::CRBAsmNLE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3641 /* crbnlh */, SystemZ::CRBAsmNLH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3648 /* crdte */, SystemZ::CRDTEOpt, Convert__GR1281_0__GR1281_2__GR641_1, AMFBS_FeatureEnhancedDAT2, { MCK_GR128, MCK_GR64, MCK_GR128 }, },
  { 3648 /* crdte */, SystemZ::CRDTE, Convert__GR1281_0__GR1281_2__GR641_1__U4Imm1_3, AMFBS_FeatureEnhancedDAT2, { MCK_GR128, MCK_GR64, MCK_GR128, MCK_U4Imm }, },
  { 3654 /* crj */, SystemZ::CRJAsm, Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_PCRel16 }, },
  { 3658 /* crje */, SystemZ::CRJAsmE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3663 /* crjh */, SystemZ::CRJAsmH, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3668 /* crjhe */, SystemZ::CRJAsmHE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3674 /* crjl */, SystemZ::CRJAsmL, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3679 /* crjle */, SystemZ::CRJAsmLE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3685 /* crjlh */, SystemZ::CRJAsmLH, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3691 /* crjne */, SystemZ::CRJAsmNE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3697 /* crjnh */, SystemZ::CRJAsmNH, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3703 /* crjnhe */, SystemZ::CRJAsmNHE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3710 /* crjnl */, SystemZ::CRJAsmNL, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3716 /* crjnle */, SystemZ::CRJAsmNLE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3723 /* crjnlh */, SystemZ::CRJAsmNLH, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3730 /* crl */, SystemZ::CRL, Convert__GR321_0__PCRel321_1, AMFBS_None, { MCK_GR32, MCK_PCRel32 }, },
  { 3734 /* crt */, SystemZ::CRTAsm, Convert__GR321_0__GR321_1__U4Imm1_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 3738 /* crte */, SystemZ::CRTAsmE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3743 /* crth */, SystemZ::CRTAsmH, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3748 /* crthe */, SystemZ::CRTAsmHE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3754 /* crtl */, SystemZ::CRTAsmL, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3759 /* crtle */, SystemZ::CRTAsmLE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3765 /* crtlh */, SystemZ::CRTAsmLH, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3771 /* crtne */, SystemZ::CRTAsmNE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3777 /* crtnh */, SystemZ::CRTAsmNH, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3783 /* crtnhe */, SystemZ::CRTAsmNHE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3790 /* crtnl */, SystemZ::CRTAsmNL, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3796 /* crtnle */, SystemZ::CRTAsmNLE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3803 /* crtnlh */, SystemZ::CRTAsmNLH, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3810 /* cs */, SystemZ::CS, Convert__GR321_0__Tie0_1_1__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3813 /* csch */, SystemZ::CSCH, Convert_NoOperands, AMFBS_None, {  }, },
  { 3818 /* csdtr */, SystemZ::CSDTR, Convert__GR641_0__FP641_1__U4Imm1_2, AMFBS_None, { MCK_GR64, MCK_FP64, MCK_U4Imm }, },
  { 3824 /* csg */, SystemZ::CSG, Convert__GR641_0__Tie0_1_1__GR641_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3828 /* csp */, SystemZ::CSP, Convert__GR1281_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 3832 /* cspg */, SystemZ::CSPG, Convert__GR1281_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 3837 /* csst */, SystemZ::CSST, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2, AMFBS_None, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 3842 /* csxtr */, SystemZ::CSXTR, Convert__GR1281_0__FP1281_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_FP128, MCK_U4Imm }, },
  { 3848 /* csy */, SystemZ::CSY, Convert__GR321_0__Tie0_1_1__GR321_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3852 /* cu12 */, SystemZ::CU12Opt, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 3852 /* cu12 */, SystemZ::CU12, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3857 /* cu14 */, SystemZ::CU14Opt, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 3857 /* cu14 */, SystemZ::CU14, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3862 /* cu21 */, SystemZ::CU21Opt, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 3862 /* cu21 */, SystemZ::CU21, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3867 /* cu24 */, SystemZ::CU24Opt, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 3867 /* cu24 */, SystemZ::CU24, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3872 /* cu41 */, SystemZ::CU41, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 3877 /* cu42 */, SystemZ::CU42, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 3882 /* cudtr */, SystemZ::CUDTR, Convert__GR641_0__FP641_1, AMFBS_None, { MCK_GR64, MCK_FP64 }, },
  { 3888 /* cuse */, SystemZ::CUSE, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 3893 /* cutfu */, SystemZ::CUTFUOpt, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 3893 /* cutfu */, SystemZ::CUTFU, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3899 /* cuutf */, SystemZ::CUUTFOpt, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 3899 /* cuutf */, SystemZ::CUUTF, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3905 /* cuxtr */, SystemZ::CUXTR, Convert__GR1281_0__FP1281_1, AMFBS_None, { MCK_GR128, MCK_FP128 }, },
  { 3911 /* cvb */, SystemZ::CVB, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3915 /* cvbg */, SystemZ::CVBG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3920 /* cvby */, SystemZ::CVBY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3925 /* cvd */, SystemZ::CVD, Convert__GR321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3929 /* cvdg */, SystemZ::CVDG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3934 /* cvdy */, SystemZ::CVDY, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3939 /* cxbr */, SystemZ::CXBR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 3944 /* cxfbr */, SystemZ::CXFBR, Convert__FP1281_0__GR321_1, AMFBS_None, { MCK_FP128, MCK_GR32 }, },
  { 3950 /* cxfbra */, SystemZ::CXFBRA, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 3957 /* cxfr */, SystemZ::CXFR, Convert__FP1281_0__GR321_1, AMFBS_None, { MCK_FP128, MCK_GR32 }, },
  { 3962 /* cxftr */, SystemZ::CXFTR, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 3968 /* cxgbr */, SystemZ::CXGBR, Convert__FP1281_0__GR641_1, AMFBS_None, { MCK_FP128, MCK_GR64 }, },
  { 3974 /* cxgbra */, SystemZ::CXGBRA, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 3981 /* cxgr */, SystemZ::CXGR, Convert__FP1281_0__GR641_1, AMFBS_None, { MCK_FP128, MCK_GR64 }, },
  { 3986 /* cxgtr */, SystemZ::CXGTR, Convert__FP1281_0__GR641_1, AMFBS_None, { MCK_FP128, MCK_GR64 }, },
  { 3992 /* cxgtra */, SystemZ::CXGTRA, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 3999 /* cxlfbr */, SystemZ::CXLFBR, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 4006 /* cxlftr */, SystemZ::CXLFTR, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 4013 /* cxlgbr */, SystemZ::CXLGBR, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 4020 /* cxlgtr */, SystemZ::CXLGTR, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 4027 /* cxpt */, SystemZ::CXPT, Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2, AMFBS_FeatureDFPPackedConversion, { MCK_FP128, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 4032 /* cxr */, SystemZ::CXR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4036 /* cxstr */, SystemZ::CXSTR, Convert__FP1281_0__GR1281_1, AMFBS_None, { MCK_FP128, MCK_GR128 }, },
  { 4042 /* cxtr */, SystemZ::CXTR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4047 /* cxutr */, SystemZ::CXUTR, Convert__FP1281_0__GR1281_1, AMFBS_None, { MCK_FP128, MCK_GR128 }, },
  { 4053 /* cxzt */, SystemZ::CXZT, Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2, AMFBS_FeatureDFPZonedConversion, { MCK_FP128, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 4058 /* cy */, SystemZ::CY, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4061 /* czdt */, SystemZ::CZDT, Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2, AMFBS_FeatureDFPZonedConversion, { MCK_FP64, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 4066 /* czxt */, SystemZ::CZXT, Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2, AMFBS_FeatureDFPZonedConversion, { MCK_FP128, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 4071 /* d */, SystemZ::D, Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp12 }, },
  { 4073 /* dd */, SystemZ::DD, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4076 /* ddb */, SystemZ::DDB, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4080 /* ddbr */, SystemZ::DDBR, Convert__FP641_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4085 /* ddr */, SystemZ::DDR, Convert__FP641_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4089 /* ddtr */, SystemZ::DDTR, Convert__FP641_0__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 4094 /* ddtra */, SystemZ::DDTRA, Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 4100 /* de */, SystemZ::DE, Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 4103 /* deb */, SystemZ::DEB, Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 4107 /* debr */, SystemZ::DEBR, Convert__FP321_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 4112 /* der */, SystemZ::DER, Convert__FP321_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 4116 /* dfltcc */, SystemZ::DFLTCC, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__GR641_2, AMFBS_FeatureDeflateConversion, { MCK_GR128, MCK_GR128, MCK_GR64 }, },
  { 4123 /* diag */, SystemZ::DIAG, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 4128 /* didbr */, SystemZ::DIDBR, Convert__FP641_0__FP641_1__Tie0_1_1__FP641_2__U4Imm1_3, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 4134 /* diebr */, SystemZ::DIEBR, Convert__FP321_0__FP321_1__Tie0_1_1__FP321_2__U4Imm1_3, AMFBS_None, { MCK_FP32, MCK_FP32, MCK_FP32, MCK_U4Imm }, },
  { 4140 /* dl */, SystemZ::DL, Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 4143 /* dlg */, SystemZ::DLG, Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 4147 /* dlgr */, SystemZ::DLGR, Convert__GR1281_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 4152 /* dlr */, SystemZ::DLR, Convert__GR1281_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR128, MCK_GR32 }, },
  { 4156 /* dp */, SystemZ::DP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, AMFBS_None, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 4159 /* dr */, SystemZ::DR, Convert__GR1281_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR128, MCK_GR32 }, },
  { 4162 /* dsg */, SystemZ::DSG, Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 4166 /* dsgf */, SystemZ::DSGF, Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 4171 /* dsgfr */, SystemZ::DSGFR, Convert__GR1281_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR128, MCK_GR32 }, },
  { 4177 /* dsgr */, SystemZ::DSGR, Convert__GR1281_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 4182 /* dxbr */, SystemZ::DXBR, Convert__FP1281_0__Tie0_1_1__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4187 /* dxr */, SystemZ::DXR, Convert__FP1281_0__Tie0_1_1__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4191 /* dxtr */, SystemZ::DXTR, Convert__FP1281_0__FP1281_1__FP1281_2, AMFBS_None, { MCK_FP128, MCK_FP128, MCK_FP128 }, },
  { 4196 /* dxtra */, SystemZ::DXTRA, Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 4202 /* ear */, SystemZ::EAR, Convert__GR321_0__AR321_1, AMFBS_None, { MCK_GR32, MCK_AR32 }, },
  { 4206 /* ecag */, SystemZ::ECAG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 4211 /* ecctr */, SystemZ::ECCTR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 4217 /* ecpga */, SystemZ::ECPGA, Convert__GR321_0__GR641_1, AMFBS_None, { MCK_GR32, MCK_GR64 }, },
  { 4223 /* ectg */, SystemZ::ECTG, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2, AMFBS_None, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 4228 /* ed */, SystemZ::ED, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 4231 /* edmk */, SystemZ::EDMK, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 4236 /* eedtr */, SystemZ::EEDTR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4242 /* eextr */, SystemZ::EEXTR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4248 /* efpc */, SystemZ::EFPC, Convert__GR321_0, AMFBS_None, { MCK_GR32 }, },
  { 4253 /* epair */, SystemZ::EPAIR, Convert__GR641_0, AMFBS_None, { MCK_GR64 }, },
  { 4259 /* epar */, SystemZ::EPAR, Convert__GR321_0, AMFBS_None, { MCK_GR32 }, },
  { 4264 /* epctr */, SystemZ::EPCTR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 4270 /* epsw */, SystemZ::EPSW, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 4275 /* ereg */, SystemZ::EREG, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 4280 /* eregg */, SystemZ::EREGG, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 4286 /* esair */, SystemZ::ESAIR, Convert__GR641_0, AMFBS_None, { MCK_GR64 }, },
  { 4292 /* esar */, SystemZ::ESAR, Convert__GR321_0, AMFBS_None, { MCK_GR32 }, },
  { 4297 /* esdtr */, SystemZ::ESDTR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4303 /* esea */, SystemZ::ESEA, Convert__GR321_0__Tie0_1_1, AMFBS_None, { MCK_GR32 }, },
  { 4308 /* esta */, SystemZ::ESTA, Convert__GR1281_0__GR321_1, AMFBS_None, { MCK_GR128, MCK_GR32 }, },
  { 4313 /* esxtr */, SystemZ::ESXTR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4319 /* etnd */, SystemZ::ETND, Convert__GR321_0, AMFBS_FeatureTransactionalExecution, { MCK_GR32 }, },
  { 4324 /* ex */, SystemZ::EX, Convert__GR641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 4327 /* exrl */, SystemZ::EXRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 4332 /* fidbr */, SystemZ::FIDBR, Convert__FP641_0__U4Imm1_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_U4Imm, MCK_FP64 }, },
  { 4338 /* fidbra */, SystemZ::FIDBRA, Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 4345 /* fidr */, SystemZ::FIDR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4350 /* fidtr */, SystemZ::FIDTR, Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_None, { MCK_FP64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 4356 /* fiebr */, SystemZ::FIEBR, Convert__FP321_0__U4Imm1_1__FP321_2, AMFBS_None, { MCK_FP32, MCK_U4Imm, MCK_FP32 }, },
  { 4362 /* fiebra */, SystemZ::FIEBRA, Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 4369 /* fier */, SystemZ::FIER, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 4374 /* fixbr */, SystemZ::FIXBR, Convert__FP1281_0__U4Imm1_1__FP1281_2, AMFBS_None, { MCK_FP128, MCK_U4Imm, MCK_FP128 }, },
  { 4380 /* fixbra */, SystemZ::FIXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 4387 /* fixr */, SystemZ::FIXR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4392 /* fixtr */, SystemZ::FIXTR, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_None, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 4398 /* flogr */, SystemZ::FLOGR, Convert__GR1281_0__GR641_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 4404 /* hdr */, SystemZ::HDR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4408 /* her */, SystemZ::HER, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 4412 /* hsch */, SystemZ::HSCH, Convert_NoOperands, AMFBS_None, {  }, },
  { 4417 /* iac */, SystemZ::IAC, Convert__GR321_0, AMFBS_None, { MCK_GR32 }, },
  { 4421 /* ic */, SystemZ::IC, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 4424 /* icm */, SystemZ::ICM, Convert__GR321_0__Tie0_1_1__U4Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 4428 /* icmh */, SystemZ::ICMH, Convert__GRH321_0__Tie0_1_1__U4Imm1_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GRH32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 4433 /* icmy */, SystemZ::ICMY, Convert__GR321_0__Tie0_1_1__U4Imm1_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 4438 /* icy */, SystemZ::ICY, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4442 /* idte */, SystemZ::IDTEOpt, Convert__GR641_0__GR641_2__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 4442 /* idte */, SystemZ::IDTE, Convert__GR641_0__GR641_2__GR641_1__U4Imm1_3, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 4447 /* iedtr */, SystemZ::IEDTR, Convert__FP641_0__FP641_2__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 4453 /* iextr */, SystemZ::IEXTR, Convert__FP1281_0__FP1281_2__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128, MCK_FP128 }, },
  { 4459 /* iihf */, SystemZ::IIHF, Convert__GRH321_0__U32Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U32Imm }, },
  { 4464 /* iihh */, SystemZ::IIHH, Convert__GRH321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U16Imm }, },
  { 4469 /* iihl */, SystemZ::IIHL, Convert__GRH321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U16Imm }, },
  { 4474 /* iilf */, SystemZ::IILF, Convert__GR321_0__U32Imm1_1, AMFBS_None, { MCK_GR32, MCK_U32Imm }, },
  { 4479 /* iilh */, SystemZ::IILH, Convert__GR321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 4484 /* iill */, SystemZ::IILL, Convert__GR321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 4489 /* ipk */, SystemZ::IPK, Convert_NoOperands, AMFBS_None, {  }, },
  { 4493 /* ipm */, SystemZ::IPM, Convert__GR321_0, AMFBS_None, { MCK_GR32 }, },
  { 4497 /* ipte */, SystemZ::IPTEOptOpt, Convert__GR641_0__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 4497 /* ipte */, SystemZ::IPTEOpt, Convert__GR641_0__GR321_1__GR321_2, AMFBS_None, { MCK_GR64, MCK_GR32, MCK_GR32 }, },
  { 4497 /* ipte */, SystemZ::IPTE, Convert__GR641_0__GR321_1__GR321_2__U4Imm1_3, AMFBS_None, { MCK_GR64, MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 4502 /* irbm */, SystemZ::IRBM, Convert__GR641_0__GR641_1, AMFBS_FeatureInsertReferenceBitsMultiple, { MCK_GR64, MCK_GR64 }, },
  { 4507 /* iske */, SystemZ::ISKE, Convert__GR321_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR32, MCK_GR64 }, },
  { 4512 /* ivsk */, SystemZ::IVSK, Convert__GR321_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR32, MCK_GR64 }, },
  { 4517 /* j */, SystemZ::J, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4519 /* je */, SystemZ::JAsmE, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4522 /* jg */, SystemZ::JG, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4525 /* jge */, SystemZ::JGAsmE, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4529 /* jgh */, SystemZ::JGAsmH, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4533 /* jghe */, SystemZ::JGAsmHE, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4538 /* jgl */, SystemZ::JGAsmL, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4542 /* jgle */, SystemZ::JGAsmLE, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4547 /* jglh */, SystemZ::JGAsmLH, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4552 /* jgm */, SystemZ::JGAsmM, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4556 /* jgne */, SystemZ::JGAsmNE, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4561 /* jgnh */, SystemZ::JGAsmNH, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4566 /* jgnhe */, SystemZ::JGAsmNHE, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4572 /* jgnl */, SystemZ::JGAsmNL, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4577 /* jgnle */, SystemZ::JGAsmNLE, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4583 /* jgnlh */, SystemZ::JGAsmNLH, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4589 /* jgnm */, SystemZ::JGAsmNM, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4594 /* jgno */, SystemZ::JGAsmNO, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4599 /* jgnp */, SystemZ::JGAsmNP, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4604 /* jgnz */, SystemZ::JGAsmNZ, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4609 /* jgo */, SystemZ::JGAsmO, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4613 /* jgp */, SystemZ::JGAsmP, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4617 /* jgz */, SystemZ::JGAsmZ, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4621 /* jh */, SystemZ::JAsmH, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4624 /* jhe */, SystemZ::JAsmHE, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4628 /* jl */, SystemZ::JAsmL, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4631 /* jle */, SystemZ::JAsmLE, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4635 /* jlh */, SystemZ::JAsmLH, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4639 /* jm */, SystemZ::JAsmM, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4642 /* jne */, SystemZ::JAsmNE, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4646 /* jnh */, SystemZ::JAsmNH, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4650 /* jnhe */, SystemZ::JAsmNHE, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4655 /* jnl */, SystemZ::JAsmNL, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4659 /* jnle */, SystemZ::JAsmNLE, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4664 /* jnlh */, SystemZ::JAsmNLH, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4669 /* jnm */, SystemZ::JAsmNM, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4673 /* jno */, SystemZ::JAsmNO, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4677 /* jnp */, SystemZ::JAsmNP, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4681 /* jnz */, SystemZ::JAsmNZ, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4685 /* jo */, SystemZ::JAsmO, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4688 /* jp */, SystemZ::JAsmP, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4691 /* jz */, SystemZ::JAsmZ, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4694 /* kdb */, SystemZ::KDB, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4698 /* kdbr */, SystemZ::KDBR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4703 /* kdsa */, SystemZ::KDSA, Convert__GR1281_1__GR641_0__Tie0_1_1, AMFBS_FeatureMessageSecurityAssist9, { MCK_GR64, MCK_GR128 }, },
  { 4708 /* kdtr */, SystemZ::KDTR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4713 /* keb */, SystemZ::KEB, Convert__FP321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 4717 /* kebr */, SystemZ::KEBR, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 4722 /* kimd */, SystemZ::KIMD, Convert__GR1281_1__GR641_0__Tie0_1_1, AMFBS_None, { MCK_GR64, MCK_GR128 }, },
  { 4727 /* klmd */, SystemZ::KLMD, Convert__GR1281_1__GR641_0__Tie0_1_1, AMFBS_None, { MCK_GR64, MCK_GR128 }, },
  { 4732 /* km */, SystemZ::KM, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 4735 /* kma */, SystemZ::KMA, Convert__GR1281_0__GR1281_2__GR1281_1__Tie0_1_1__Tie1_1_1__Tie2_1_1, AMFBS_FeatureMessageSecurityAssist8, { MCK_GR128, MCK_GR128, MCK_GR128 }, },
  { 4739 /* kmac */, SystemZ::KMAC, Convert__GR1281_1__GR641_0__Tie0_1_1, AMFBS_None, { MCK_GR64, MCK_GR128 }, },
  { 4744 /* kmc */, SystemZ::KMC, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 4748 /* kmctr */, SystemZ::KMCTR, Convert__GR1281_0__GR1281_2__GR1281_1__Tie0_1_1__Tie1_1_1__Tie2_1_1, AMFBS_FeatureMessageSecurityAssist4, { MCK_GR128, MCK_GR128, MCK_GR128 }, },
  { 4754 /* kmf */, SystemZ::KMF, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_FeatureMessageSecurityAssist4, { MCK_GR128, MCK_GR128 }, },
  { 4758 /* kmo */, SystemZ::KMO, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_FeatureMessageSecurityAssist4, { MCK_GR128, MCK_GR128 }, },
  { 4762 /* kxbr */, SystemZ::KXBR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4767 /* kxtr */, SystemZ::KXTR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4772 /* l */, SystemZ::L, Convert__GR321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 4774 /* la */, SystemZ::LA, Convert__GR641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 4777 /* laa */, SystemZ::LAA, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4781 /* laag */, SystemZ::LAAG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4786 /* laal */, SystemZ::LAAL, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4791 /* laalg */, SystemZ::LAALG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4797 /* lae */, SystemZ::LAE, Convert__GR641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 4801 /* laey */, SystemZ::LAEY, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4806 /* lam */, SystemZ::LAM, Convert__AR321_0__AR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_AR32, MCK_AR32, MCK_BDAddr64Disp12 }, },
  { 4810 /* lamy */, SystemZ::LAMY, Convert__AR321_0__AR321_1__BDAddr64Disp202_2, AMFBS_None, { MCK_AR32, MCK_AR32, MCK_BDAddr64Disp20 }, },
  { 4815 /* lan */, SystemZ::LAN, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4819 /* lang */, SystemZ::LANG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4824 /* lao */, SystemZ::LAO, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4828 /* laog */, SystemZ::LAOG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4833 /* larl */, SystemZ::LARL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 4838 /* lasp */, SystemZ::LASP, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 4843 /* lat */, SystemZ::LAT, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_FeatureLoadAndTrap, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4847 /* lax */, SystemZ::LAX, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4851 /* laxg */, SystemZ::LAXG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4856 /* lay */, SystemZ::LAY, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4860 /* lb */, SystemZ::LB, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4863 /* lbh */, SystemZ::LBH, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 4867 /* lbr */, SystemZ::LBR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 4871 /* lcbb */, SystemZ::LCBB, Convert__GR321_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_GR32, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 4876 /* lcctl */, SystemZ::LCCTL, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 4882 /* lcdbr */, SystemZ::LCDBR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4888 /* lcdfr */, SystemZ::LCDFR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4894 /* lcdr */, SystemZ::LCDR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4899 /* lcebr */, SystemZ::LCEBR, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 4905 /* lcer */, SystemZ::LCER, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 4910 /* lcgfr */, SystemZ::LCGFR, Convert__GR641_0__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 4916 /* lcgr */, SystemZ::LCGR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 4921 /* lcr */, SystemZ::LCR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 4925 /* lctl */, SystemZ::LCTL, Convert__CR641_0__CR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_CR64, MCK_CR64, MCK_BDAddr64Disp12 }, },
  { 4930 /* lctlg */, SystemZ::LCTLG, Convert__CR641_0__CR641_1__BDAddr64Disp202_2, AMFBS_None, { MCK_CR64, MCK_CR64, MCK_BDAddr64Disp20 }, },
  { 4936 /* lcxbr */, SystemZ::LCXBR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4942 /* lcxr */, SystemZ::LCXR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4947 /* ld */, SystemZ::LD, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4950 /* lde */, SystemZ::LDE, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4954 /* ldeb */, SystemZ::LDEB, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4959 /* ldebr */, SystemZ::LDEBR, Convert__FP641_0__FP321_1, AMFBS_None, { MCK_FP64, MCK_FP32 }, },
  { 4965 /* lder */, SystemZ::LDER, Convert__FP641_0__FP321_1, AMFBS_None, { MCK_FP64, MCK_FP32 }, },
  { 4970 /* ldetr */, SystemZ::LDETR, Convert__FP641_0__FP321_1__U4Imm1_2, AMFBS_None, { MCK_FP64, MCK_FP32, MCK_U4Imm }, },
  { 4976 /* ldgr */, SystemZ::LDGR, Convert__FP641_0__GR641_1, AMFBS_None, { MCK_FP64, MCK_GR64 }, },
  { 4981 /* ldr */, SystemZ::LDR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4985 /* ldrv */, SystemZ::VLLEBRZG, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 4990 /* ldxbr */, SystemZ::LDXBR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4996 /* ldxbra */, SystemZ::LDXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 5003 /* ldxr */, SystemZ::LDXR, Convert__FP641_0__FP1281_1, AMFBS_None, { MCK_FP64, MCK_FP128 }, },
  { 5008 /* ldxtr */, SystemZ::LDXTR, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_None, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 5014 /* ldy */, SystemZ::LDY, Convert__FP641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp20 }, },
  { 5018 /* le */, SystemZ::LE, Convert__FP321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 5021 /* ledbr */, SystemZ::LEDBR, Convert__FP321_0__FP641_1, AMFBS_None, { MCK_FP32, MCK_FP64 }, },
  { 5027 /* ledbra */, SystemZ::LEDBRA, Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 5034 /* ledr */, SystemZ::LEDR, Convert__FP321_0__FP641_1, AMFBS_None, { MCK_FP32, MCK_FP64 }, },
  { 5039 /* ledtr */, SystemZ::LEDTR, Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_None, { MCK_FP32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 5045 /* ler */, SystemZ::LER, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 5049 /* lerv */, SystemZ::VLLEBRZE, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 5054 /* lexbr */, SystemZ::LEXBR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 5060 /* lexbra */, SystemZ::LEXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 5067 /* lexr */, SystemZ::LEXR, Convert__FP321_0__FP1281_1, AMFBS_None, { MCK_FP32, MCK_FP128 }, },
  { 5072 /* ley */, SystemZ::LEY, Convert__FP321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp20 }, },
  { 5076 /* lfas */, SystemZ::LFAS, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 5081 /* lfh */, SystemZ::LFH, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 5085 /* lfhat */, SystemZ::LFHAT, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureLoadAndTrap, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 5091 /* lfpc */, SystemZ::LFPC, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 5096 /* lg */, SystemZ::LG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5099 /* lgat */, SystemZ::LGAT, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_FeatureLoadAndTrap, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5104 /* lgb */, SystemZ::LGB, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5108 /* lgbr */, SystemZ::LGBR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 5113 /* lgdr */, SystemZ::LGDR, Convert__GR641_0__FP641_1, AMFBS_None, { MCK_GR64, MCK_FP64 }, },
  { 5118 /* lgf */, SystemZ::LGF, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5122 /* lgfi */, SystemZ::LGFI, Convert__GR641_0__S32Imm1_1, AMFBS_None, { MCK_GR64, MCK_S32Imm }, },
  { 5127 /* lgfr */, SystemZ::LGFR, Convert__GR641_0__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 5132 /* lgfrl */, SystemZ::LGFRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 5138 /* lgg */, SystemZ::LGG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_FeatureGuardedStorage, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5142 /* lgh */, SystemZ::LGH, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5146 /* lghi */, SystemZ::LGHI, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 5151 /* lghr */, SystemZ::LGHR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 5156 /* lghrl */, SystemZ::LGHRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 5162 /* lgr */, SystemZ::LGR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 5166 /* lgrl */, SystemZ::LGRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 5171 /* lgsc */, SystemZ::LGSC, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_FeatureGuardedStorage, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5176 /* lh */, SystemZ::LH, Convert__GR321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 5179 /* lhh */, SystemZ::LHH, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 5183 /* lhi */, SystemZ::LHI, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 5187 /* lhr */, SystemZ::LHR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 5191 /* lhrl */, SystemZ::LHRL, Convert__GR321_0__PCRel321_1, AMFBS_None, { MCK_GR32, MCK_PCRel32 }, },
  { 5196 /* lhy */, SystemZ::LHY, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5200 /* llc */, SystemZ::LLC, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5204 /* llch */, SystemZ::LLCH, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 5209 /* llcr */, SystemZ::LLCR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 5214 /* llgc */, SystemZ::LLGC, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5219 /* llgcr */, SystemZ::LLGCR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 5225 /* llgf */, SystemZ::LLGF, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5230 /* llgfat */, SystemZ::LLGFAT, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_FeatureLoadAndTrap, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5237 /* llgfr */, SystemZ::LLGFR, Convert__GR641_0__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 5243 /* llgfrl */, SystemZ::LLGFRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 5250 /* llgfsg */, SystemZ::LLGFSG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_FeatureGuardedStorage, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5257 /* llgh */, SystemZ::LLGH, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5262 /* llghr */, SystemZ::LLGHR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 5268 /* llghrl */, SystemZ::LLGHRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 5275 /* llgt */, SystemZ::LLGT, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5280 /* llgtat */, SystemZ::LLGTAT, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_FeatureLoadAndTrap, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5287 /* llgtr */, SystemZ::LLGTR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 5293 /* llh */, SystemZ::LLH, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5297 /* llhh */, SystemZ::LLHH, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 5302 /* llhr */, SystemZ::LLHR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 5307 /* llhrl */, SystemZ::LLHRL, Convert__GR321_0__PCRel321_1, AMFBS_None, { MCK_GR32, MCK_PCRel32 }, },
  { 5313 /* llihf */, SystemZ::LLIHF, Convert__GR641_0__U32Imm1_1, AMFBS_None, { MCK_GR64, MCK_U32Imm }, },
  { 5319 /* llihh */, SystemZ::LLIHH, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 5325 /* llihl */, SystemZ::LLIHL, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 5331 /* llilf */, SystemZ::LLILF, Convert__GR641_0__U32Imm1_1, AMFBS_None, { MCK_GR64, MCK_U32Imm }, },
  { 5337 /* llilh */, SystemZ::LLILH, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 5343 /* llill */, SystemZ::LLILL, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 5349 /* llzrgf */, SystemZ::LLZRGF, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_FeatureLoadAndZeroRightmostByte, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5356 /* lm */, SystemZ::LM, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 5359 /* lmd */, SystemZ::LMD, Convert__GR641_0__GR641_1__BDAddr64Disp122_2__BDAddr64Disp122_3, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 5363 /* lmg */, SystemZ::LMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5367 /* lmh */, SystemZ::LMH, Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GRH32, MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5371 /* lmy */, SystemZ::LMY, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5375 /* lndbr */, SystemZ::LNDBR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 5381 /* lndfr */, SystemZ::LNDFR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 5387 /* lndr */, SystemZ::LNDR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 5392 /* lnebr */, SystemZ::LNEBR, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 5398 /* lner */, SystemZ::LNER, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 5403 /* lngfr */, SystemZ::LNGFR, Convert__GR641_0__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 5409 /* lngr */, SystemZ::LNGR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 5414 /* lnr */, SystemZ::LNR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 5418 /* lnxbr */, SystemZ::LNXBR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 5424 /* lnxr */, SystemZ::LNXR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 5429 /* loc */, SystemZ::LOCAsm, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 5433 /* loce */, SystemZ::LOCAsmE, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5438 /* locfh */, SystemZ::LOCFHAsm, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 5444 /* locfhe */, SystemZ::LOCFHAsmE, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5451 /* locfhh */, SystemZ::LOCFHAsmH, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5458 /* locfhhe */, SystemZ::LOCFHAsmHE, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5466 /* locfhl */, SystemZ::LOCFHAsmL, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5473 /* locfhle */, SystemZ::LOCFHAsmLE, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5481 /* locfhlh */, SystemZ::LOCFHAsmLH, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5489 /* locfhm */, SystemZ::LOCFHAsmM, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5496 /* locfhne */, SystemZ::LOCFHAsmNE, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5504 /* locfhnh */, SystemZ::LOCFHAsmNH, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5512 /* locfhnhe */, SystemZ::LOCFHAsmNHE, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5521 /* locfhnl */, SystemZ::LOCFHAsmNL, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5529 /* locfhnle */, SystemZ::LOCFHAsmNLE, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5538 /* locfhnlh */, SystemZ::LOCFHAsmNLH, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5547 /* locfhnm */, SystemZ::LOCFHAsmNM, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5555 /* locfhno */, SystemZ::LOCFHAsmNO, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5563 /* locfhnp */, SystemZ::LOCFHAsmNP, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5571 /* locfhnz */, SystemZ::LOCFHAsmNZ, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5579 /* locfho */, SystemZ::LOCFHAsmO, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5586 /* locfhp */, SystemZ::LOCFHAsmP, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5593 /* locfhr */, SystemZ::LOCFHRAsm, Convert__GRH321_0__Tie0_1_1__GRH321_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32, MCK_U4Imm }, },
  { 5600 /* locfhre */, SystemZ::LOCFHRAsmE, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5608 /* locfhrh */, SystemZ::LOCFHRAsmH, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5616 /* locfhrhe */, SystemZ::LOCFHRAsmHE, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5625 /* locfhrl */, SystemZ::LOCFHRAsmL, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5633 /* locfhrle */, SystemZ::LOCFHRAsmLE, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5642 /* locfhrlh */, SystemZ::LOCFHRAsmLH, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5651 /* locfhrm */, SystemZ::LOCFHRAsmM, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5659 /* locfhrne */, SystemZ::LOCFHRAsmNE, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5668 /* locfhrnh */, SystemZ::LOCFHRAsmNH, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5677 /* locfhrnhe */, SystemZ::LOCFHRAsmNHE, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5687 /* locfhrnl */, SystemZ::LOCFHRAsmNL, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5696 /* locfhrnle */, SystemZ::LOCFHRAsmNLE, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5706 /* locfhrnlh */, SystemZ::LOCFHRAsmNLH, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5716 /* locfhrnm */, SystemZ::LOCFHRAsmNM, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5725 /* locfhrno */, SystemZ::LOCFHRAsmNO, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5734 /* locfhrnp */, SystemZ::LOCFHRAsmNP, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5743 /* locfhrnz */, SystemZ::LOCFHRAsmNZ, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5752 /* locfhro */, SystemZ::LOCFHRAsmO, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5760 /* locfhrp */, SystemZ::LOCFHRAsmP, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5768 /* locfhrz */, SystemZ::LOCFHRAsmZ, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5776 /* locfhz */, SystemZ::LOCFHAsmZ, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5783 /* locg */, SystemZ::LOCGAsm, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 5788 /* locge */, SystemZ::LOCGAsmE, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5794 /* locgh */, SystemZ::LOCGAsmH, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5800 /* locghe */, SystemZ::LOCGAsmHE, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5807 /* locghi */, SystemZ::LOCGHIAsm, Convert__GR641_0__Tie0_1_1__S16Imm1_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm, MCK_U4Imm }, },
  { 5814 /* locghie */, SystemZ::LOCGHIAsmE, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5822 /* locghih */, SystemZ::LOCGHIAsmH, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5830 /* locghihe */, SystemZ::LOCGHIAsmHE, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5839 /* locghil */, SystemZ::LOCGHIAsmL, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5847 /* locghile */, SystemZ::LOCGHIAsmLE, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5856 /* locghilh */, SystemZ::LOCGHIAsmLH, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5865 /* locghim */, SystemZ::LOCGHIAsmM, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5873 /* locghine */, SystemZ::LOCGHIAsmNE, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5882 /* locghinh */, SystemZ::LOCGHIAsmNH, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5891 /* locghinhe */, SystemZ::LOCGHIAsmNHE, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5901 /* locghinl */, SystemZ::LOCGHIAsmNL, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5910 /* locghinle */, SystemZ::LOCGHIAsmNLE, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5920 /* locghinlh */, SystemZ::LOCGHIAsmNLH, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5930 /* locghinm */, SystemZ::LOCGHIAsmNM, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5939 /* locghino */, SystemZ::LOCGHIAsmNO, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5948 /* locghinp */, SystemZ::LOCGHIAsmNP, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5957 /* locghinz */, SystemZ::LOCGHIAsmNZ, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5966 /* locghio */, SystemZ::LOCGHIAsmO, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5974 /* locghip */, SystemZ::LOCGHIAsmP, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5982 /* locghiz */, SystemZ::LOCGHIAsmZ, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5990 /* locgl */, SystemZ::LOCGAsmL, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5996 /* locgle */, SystemZ::LOCGAsmLE, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6003 /* locglh */, SystemZ::LOCGAsmLH, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6010 /* locgm */, SystemZ::LOCGAsmM, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6016 /* locgne */, SystemZ::LOCGAsmNE, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6023 /* locgnh */, SystemZ::LOCGAsmNH, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6030 /* locgnhe */, SystemZ::LOCGAsmNHE, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6038 /* locgnl */, SystemZ::LOCGAsmNL, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6045 /* locgnle */, SystemZ::LOCGAsmNLE, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6053 /* locgnlh */, SystemZ::LOCGAsmNLH, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6061 /* locgnm */, SystemZ::LOCGAsmNM, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6068 /* locgno */, SystemZ::LOCGAsmNO, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6075 /* locgnp */, SystemZ::LOCGAsmNP, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6082 /* locgnz */, SystemZ::LOCGAsmNZ, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6089 /* locgo */, SystemZ::LOCGAsmO, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6095 /* locgp */, SystemZ::LOCGAsmP, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6101 /* locgr */, SystemZ::LOCGRAsm, Convert__GR641_0__Tie0_1_1__GR641_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 6107 /* locgre */, SystemZ::LOCGRAsmE, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6114 /* locgrh */, SystemZ::LOCGRAsmH, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6121 /* locgrhe */, SystemZ::LOCGRAsmHE, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6129 /* locgrl */, SystemZ::LOCGRAsmL, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6136 /* locgrle */, SystemZ::LOCGRAsmLE, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6144 /* locgrlh */, SystemZ::LOCGRAsmLH, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6152 /* locgrm */, SystemZ::LOCGRAsmM, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6159 /* locgrne */, SystemZ::LOCGRAsmNE, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6167 /* locgrnh */, SystemZ::LOCGRAsmNH, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6175 /* locgrnhe */, SystemZ::LOCGRAsmNHE, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6184 /* locgrnl */, SystemZ::LOCGRAsmNL, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6192 /* locgrnle */, SystemZ::LOCGRAsmNLE, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6201 /* locgrnlh */, SystemZ::LOCGRAsmNLH, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6210 /* locgrnm */, SystemZ::LOCGRAsmNM, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6218 /* locgrno */, SystemZ::LOCGRAsmNO, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6226 /* locgrnp */, SystemZ::LOCGRAsmNP, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6234 /* locgrnz */, SystemZ::LOCGRAsmNZ, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6242 /* locgro */, SystemZ::LOCGRAsmO, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6249 /* locgrp */, SystemZ::LOCGRAsmP, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6256 /* locgrz */, SystemZ::LOCGRAsmZ, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6263 /* locgz */, SystemZ::LOCGAsmZ, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6269 /* loch */, SystemZ::LOCAsmH, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6274 /* loche */, SystemZ::LOCAsmHE, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6280 /* lochhi */, SystemZ::LOCHHIAsm, Convert__GRH321_0__Tie0_1_1__S16Imm1_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm, MCK_U4Imm }, },
  { 6287 /* lochhie */, SystemZ::LOCHHIAsmE, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6295 /* lochhih */, SystemZ::LOCHHIAsmH, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6303 /* lochhihe */, SystemZ::LOCHHIAsmHE, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6312 /* lochhil */, SystemZ::LOCHHIAsmL, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6320 /* lochhile */, SystemZ::LOCHHIAsmLE, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6329 /* lochhilh */, SystemZ::LOCHHIAsmLH, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6338 /* lochhim */, SystemZ::LOCHHIAsmM, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6346 /* lochhine */, SystemZ::LOCHHIAsmNE, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6355 /* lochhinh */, SystemZ::LOCHHIAsmNH, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6364 /* lochhinhe */, SystemZ::LOCHHIAsmNHE, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6374 /* lochhinl */, SystemZ::LOCHHIAsmNL, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6383 /* lochhinle */, SystemZ::LOCHHIAsmNLE, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6393 /* lochhinlh */, SystemZ::LOCHHIAsmNLH, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6403 /* lochhinm */, SystemZ::LOCHHIAsmNM, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6412 /* lochhino */, SystemZ::LOCHHIAsmNO, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6421 /* lochhinp */, SystemZ::LOCHHIAsmNP, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6430 /* lochhinz */, SystemZ::LOCHHIAsmNZ, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6439 /* lochhio */, SystemZ::LOCHHIAsmO, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6447 /* lochhip */, SystemZ::LOCHHIAsmP, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6455 /* lochhiz */, SystemZ::LOCHHIAsmZ, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6463 /* lochi */, SystemZ::LOCHIAsm, Convert__GR321_0__Tie0_1_1__S16Imm1_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm, MCK_U4Imm }, },
  { 6469 /* lochie */, SystemZ::LOCHIAsmE, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6476 /* lochih */, SystemZ::LOCHIAsmH, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6483 /* lochihe */, SystemZ::LOCHIAsmHE, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6491 /* lochil */, SystemZ::LOCHIAsmL, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6498 /* lochile */, SystemZ::LOCHIAsmLE, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6506 /* lochilh */, SystemZ::LOCHIAsmLH, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6514 /* lochim */, SystemZ::LOCHIAsmM, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6521 /* lochine */, SystemZ::LOCHIAsmNE, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6529 /* lochinh */, SystemZ::LOCHIAsmNH, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6537 /* lochinhe */, SystemZ::LOCHIAsmNHE, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6546 /* lochinl */, SystemZ::LOCHIAsmNL, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6554 /* lochinle */, SystemZ::LOCHIAsmNLE, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6563 /* lochinlh */, SystemZ::LOCHIAsmNLH, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6572 /* lochinm */, SystemZ::LOCHIAsmNM, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6580 /* lochino */, SystemZ::LOCHIAsmNO, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6588 /* lochinp */, SystemZ::LOCHIAsmNP, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6596 /* lochinz */, SystemZ::LOCHIAsmNZ, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6604 /* lochio */, SystemZ::LOCHIAsmO, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6611 /* lochip */, SystemZ::LOCHIAsmP, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6618 /* lochiz */, SystemZ::LOCHIAsmZ, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6625 /* locl */, SystemZ::LOCAsmL, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6630 /* locle */, SystemZ::LOCAsmLE, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6636 /* loclh */, SystemZ::LOCAsmLH, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6642 /* locm */, SystemZ::LOCAsmM, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6647 /* locne */, SystemZ::LOCAsmNE, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6653 /* locnh */, SystemZ::LOCAsmNH, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6659 /* locnhe */, SystemZ::LOCAsmNHE, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6666 /* locnl */, SystemZ::LOCAsmNL, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6672 /* locnle */, SystemZ::LOCAsmNLE, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6679 /* locnlh */, SystemZ::LOCAsmNLH, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6686 /* locnm */, SystemZ::LOCAsmNM, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6692 /* locno */, SystemZ::LOCAsmNO, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6698 /* locnp */, SystemZ::LOCAsmNP, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6704 /* locnz */, SystemZ::LOCAsmNZ, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6710 /* loco */, SystemZ::LOCAsmO, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6715 /* locp */, SystemZ::LOCAsmP, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6720 /* locr */, SystemZ::LOCRAsm, Convert__GR321_0__Tie0_1_1__GR321_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 6725 /* locre */, SystemZ::LOCRAsmE, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6731 /* locrh */, SystemZ::LOCRAsmH, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6737 /* locrhe */, SystemZ::LOCRAsmHE, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6744 /* locrl */, SystemZ::LOCRAsmL, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6750 /* locrle */, SystemZ::LOCRAsmLE, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6757 /* locrlh */, SystemZ::LOCRAsmLH, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6764 /* locrm */, SystemZ::LOCRAsmM, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6770 /* locrne */, SystemZ::LOCRAsmNE, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6777 /* locrnh */, SystemZ::LOCRAsmNH, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6784 /* locrnhe */, SystemZ::LOCRAsmNHE, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6792 /* locrnl */, SystemZ::LOCRAsmNL, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6799 /* locrnle */, SystemZ::LOCRAsmNLE, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6807 /* locrnlh */, SystemZ::LOCRAsmNLH, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6815 /* locrnm */, SystemZ::LOCRAsmNM, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6822 /* locrno */, SystemZ::LOCRAsmNO, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6829 /* locrnp */, SystemZ::LOCRAsmNP, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6836 /* locrnz */, SystemZ::LOCRAsmNZ, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6843 /* locro */, SystemZ::LOCRAsmO, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6849 /* locrp */, SystemZ::LOCRAsmP, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6855 /* locrz */, SystemZ::LOCRAsmZ, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6861 /* locz */, SystemZ::LOCAsmZ, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6866 /* lpctl */, SystemZ::LPCTL, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 6872 /* lpd */, SystemZ::LPD, Convert__GR1281_0__BDAddr64Disp122_1__BDAddr64Disp122_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR128, MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 6876 /* lpdbr */, SystemZ::LPDBR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 6882 /* lpdfr */, SystemZ::LPDFR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 6888 /* lpdg */, SystemZ::LPDG, Convert__GR1281_0__BDAddr64Disp122_1__BDAddr64Disp122_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR128, MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 6893 /* lpdr */, SystemZ::LPDR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 6898 /* lpebr */, SystemZ::LPEBR, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 6904 /* lper */, SystemZ::LPER, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 6909 /* lpgfr */, SystemZ::LPGFR, Convert__GR641_0__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 6915 /* lpgr */, SystemZ::LPGR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 6920 /* lpp */, SystemZ::LPP, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 6924 /* lpq */, SystemZ::LPQ, Convert__GR1281_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 6928 /* lpr */, SystemZ::LPR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 6932 /* lpsw */, SystemZ::LPSW, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 6937 /* lpswe */, SystemZ::LPSWE, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 6943 /* lptea */, SystemZ::LPTEA, Convert__GR641_0__GR641_1__Tie0_1_1__GR641_2__U4Imm1_3, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 6949 /* lpxbr */, SystemZ::LPXBR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 6955 /* lpxr */, SystemZ::LPXR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 6960 /* lr */, SystemZ::LR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 6963 /* lra */, SystemZ::LRA, Convert__GR641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 6967 /* lrag */, SystemZ::LRAG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 6972 /* lray */, SystemZ::LRAY, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 6977 /* lrdr */, SystemZ::LRDR, Convert__FP641_0__FP1281_1, AMFBS_None, { MCK_FP64, MCK_FP128 }, },
  { 6982 /* lrer */, SystemZ::LRER, Convert__FP321_0__FP641_1, AMFBS_None, { MCK_FP32, MCK_FP64 }, },
  { 6987 /* lrl */, SystemZ::LRL, Convert__GR321_0__PCRel321_1, AMFBS_None, { MCK_GR32, MCK_PCRel32 }, },
  { 6991 /* lrv */, SystemZ::LRV, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 6995 /* lrvg */, SystemZ::LRVG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7000 /* lrvgr */, SystemZ::LRVGR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 7006 /* lrvh */, SystemZ::LRVH, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7011 /* lrvr */, SystemZ::LRVR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 7016 /* lsctl */, SystemZ::LSCTL, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 7022 /* lt */, SystemZ::LT, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7025 /* ltdbr */, SystemZ::LTDBR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 7031 /* ltdr */, SystemZ::LTDR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 7036 /* ltdtr */, SystemZ::LTDTR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 7042 /* ltebr */, SystemZ::LTEBR, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 7048 /* lter */, SystemZ::LTER, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 7053 /* ltg */, SystemZ::LTG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7057 /* ltgf */, SystemZ::LTGF, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7062 /* ltgfr */, SystemZ::LTGFR, Convert__GR641_0__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 7068 /* ltgr */, SystemZ::LTGR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 7073 /* ltr */, SystemZ::LTR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 7077 /* ltxbr */, SystemZ::LTXBR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 7083 /* ltxr */, SystemZ::LTXR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 7088 /* ltxtr */, SystemZ::LTXTR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 7094 /* lura */, SystemZ::LURA, Convert__GR321_0__GR641_1, AMFBS_None, { MCK_GR32, MCK_GR64 }, },
  { 7099 /* lurag */, SystemZ::LURAG, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 7105 /* lxd */, SystemZ::LXD, Convert__FP1281_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7109 /* lxdb */, SystemZ::LXDB, Convert__FP1281_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7114 /* lxdbr */, SystemZ::LXDBR, Convert__FP1281_0__FP641_1, AMFBS_None, { MCK_FP128, MCK_FP64 }, },
  { 7120 /* lxdr */, SystemZ::LXDR, Convert__FP1281_0__FP641_1, AMFBS_None, { MCK_FP128, MCK_FP64 }, },
  { 7125 /* lxdtr */, SystemZ::LXDTR, Convert__FP1281_0__FP641_1__U4Imm1_2, AMFBS_None, { MCK_FP128, MCK_FP64, MCK_U4Imm }, },
  { 7131 /* lxe */, SystemZ::LXE, Convert__FP1281_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7135 /* lxeb */, SystemZ::LXEB, Convert__FP1281_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7140 /* lxebr */, SystemZ::LXEBR, Convert__FP1281_0__FP321_1, AMFBS_None, { MCK_FP128, MCK_FP32 }, },
  { 7146 /* lxer */, SystemZ::LXER, Convert__FP1281_0__FP321_1, AMFBS_None, { MCK_FP128, MCK_FP32 }, },
  { 7151 /* lxr */, SystemZ::LXR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 7155 /* ly */, SystemZ::LY, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7158 /* lzdr */, SystemZ::LZDR, Convert__FP641_0, AMFBS_None, { MCK_FP64 }, },
  { 7163 /* lzer */, SystemZ::LZER, Convert__FP321_0, AMFBS_None, { MCK_FP32 }, },
  { 7168 /* lzrf */, SystemZ::LZRF, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_FeatureLoadAndZeroRightmostByte, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7173 /* lzrg */, SystemZ::LZRG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_FeatureLoadAndZeroRightmostByte, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7178 /* lzxr */, SystemZ::LZXR, Convert__FP1281_0, AMFBS_None, { MCK_FP128 }, },
  { 7183 /* m */, SystemZ::M, Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp12 }, },
  { 7185 /* mad */, SystemZ::MAD, Convert__FP641_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7189 /* madb */, SystemZ::MADB, Convert__FP641_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7194 /* madbr */, SystemZ::MADBR, Convert__FP641_0__Tie0_1_1__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7200 /* madr */, SystemZ::MADR, Convert__FP641_0__Tie0_1_1__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7205 /* mae */, SystemZ::MAE, Convert__FP321_0__Tie0_1_1__FP321_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7209 /* maeb */, SystemZ::MAEB, Convert__FP321_0__Tie0_1_1__FP321_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7214 /* maebr */, SystemZ::MAEBR, Convert__FP321_0__Tie0_1_1__FP321_1__FP321_2, AMFBS_None, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 7220 /* maer */, SystemZ::MAER, Convert__FP321_0__Tie0_1_1__FP321_1__FP321_2, AMFBS_None, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 7225 /* may */, SystemZ::MAY, Convert__FP1281_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP128, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7229 /* mayh */, SystemZ::MAYH, Convert__FP641_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7234 /* mayhr */, SystemZ::MAYHR, Convert__FP641_0__Tie0_1_1__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7240 /* mayl */, SystemZ::MAYL, Convert__FP641_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7245 /* maylr */, SystemZ::MAYLR, Convert__FP641_0__Tie0_1_1__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7251 /* mayr */, SystemZ::MAYR, Convert__FP1281_0__Tie0_1_1__FP641_1__FP641_2, AMFBS_None, { MCK_FP128, MCK_FP64, MCK_FP64 }, },
  { 7256 /* mc */, SystemZ::MC, Convert__BDAddr64Disp122_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 7259 /* md */, SystemZ::MD, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7262 /* mdb */, SystemZ::MDB, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7266 /* mdbr */, SystemZ::MDBR, Convert__FP641_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 7271 /* mde */, SystemZ::MDE, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7275 /* mdeb */, SystemZ::MDEB, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7280 /* mdebr */, SystemZ::MDEBR, Convert__FP641_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP64, MCK_FP32 }, },
  { 7286 /* mder */, SystemZ::MDER, Convert__FP641_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP64, MCK_FP32 }, },
  { 7291 /* mdr */, SystemZ::MDR, Convert__FP641_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 7295 /* mdtr */, SystemZ::MDTR, Convert__FP641_0__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7300 /* mdtra */, SystemZ::MDTRA, Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 7306 /* me */, SystemZ::ME, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7309 /* mee */, SystemZ::MEE, Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7313 /* meeb */, SystemZ::MEEB, Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7318 /* meebr */, SystemZ::MEEBR, Convert__FP321_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 7324 /* meer */, SystemZ::MEER, Convert__FP321_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 7329 /* mer */, SystemZ::MER, Convert__FP641_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP64, MCK_FP32 }, },
  { 7333 /* mfy */, SystemZ::MFY, Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 7337 /* mg */, SystemZ::MG, Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_FeatureMiscellaneousExtensions2, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 7340 /* mgh */, SystemZ::MGH, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_FeatureMiscellaneousExtensions2, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7344 /* mghi */, SystemZ::MGHI, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 7349 /* mgrk */, SystemZ::MGRK, Convert__GR1281_0__GR641_1__GR641_2, AMFBS_FeatureMiscellaneousExtensions2, { MCK_GR128, MCK_GR64, MCK_GR64 }, },
  { 7354 /* mh */, SystemZ::MH, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 7357 /* mhi */, SystemZ::MHI, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 7361 /* mhy */, SystemZ::MHY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7365 /* ml */, SystemZ::ML, Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 7368 /* mlg */, SystemZ::MLG, Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 7372 /* mlgr */, SystemZ::MLGR, Convert__GR1281_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 7377 /* mlr */, SystemZ::MLR, Convert__GR1281_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR128, MCK_GR32 }, },
  { 7381 /* mp */, SystemZ::MP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, AMFBS_None, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 7384 /* mr */, SystemZ::MR, Convert__GR1281_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR128, MCK_GR32 }, },
  { 7387 /* ms */, SystemZ::MS, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 7390 /* msc */, SystemZ::MSC, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_FeatureMiscellaneousExtensions2, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7394 /* msch */, SystemZ::MSCH, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 7399 /* msd */, SystemZ::MSD, Convert__FP641_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7403 /* msdb */, SystemZ::MSDB, Convert__FP641_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7408 /* msdbr */, SystemZ::MSDBR, Convert__FP641_0__Tie0_1_1__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7414 /* msdr */, SystemZ::MSDR, Convert__FP641_0__Tie0_1_1__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7419 /* mse */, SystemZ::MSE, Convert__FP321_0__Tie0_1_1__FP321_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7423 /* mseb */, SystemZ::MSEB, Convert__FP321_0__Tie0_1_1__FP321_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7428 /* msebr */, SystemZ::MSEBR, Convert__FP321_0__Tie0_1_1__FP321_1__FP321_2, AMFBS_None, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 7434 /* mser */, SystemZ::MSER, Convert__FP321_0__Tie0_1_1__FP321_1__FP321_2, AMFBS_None, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 7439 /* msfi */, SystemZ::MSFI, Convert__GR321_0__Tie0_1_1__S32Imm1_1, AMFBS_None, { MCK_GR32, MCK_S32Imm }, },
  { 7444 /* msg */, SystemZ::MSG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7448 /* msgc */, SystemZ::MSGC, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_FeatureMiscellaneousExtensions2, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7453 /* msgf */, SystemZ::MSGF, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7458 /* msgfi */, SystemZ::MSGFI, Convert__GR641_0__Tie0_1_1__S32Imm1_1, AMFBS_None, { MCK_GR64, MCK_S32Imm }, },
  { 7464 /* msgfr */, SystemZ::MSGFR, Convert__GR641_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 7470 /* msgr */, SystemZ::MSGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 7475 /* msgrkc */, SystemZ::MSGRKC, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureMiscellaneousExtensions2, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7482 /* msr */, SystemZ::MSR, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 7486 /* msrkc */, SystemZ::MSRKC, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureMiscellaneousExtensions2, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7492 /* msta */, SystemZ::MSTA, Convert__GR1281_0, AMFBS_None, { MCK_GR128 }, },
  { 7497 /* msy */, SystemZ::MSY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7501 /* mvc */, SystemZ::MVC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7505 /* mvcdk */, SystemZ::MVCDK, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 7511 /* mvcin */, SystemZ::MVCIN, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7517 /* mvck */, SystemZ::MVCK, Convert__BDRAddr64Disp123_0__BDAddr64Disp122_1__GR641_2, AMFBS_None, { MCK_BDRAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 7522 /* mvcl */, SystemZ::MVCL, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 7527 /* mvcle */, SystemZ::MVCLE, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__BDAddr32Disp122_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 7533 /* mvclu */, SystemZ::MVCLU, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__BDAddr32Disp202_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_BDAddr32Disp20 }, },
  { 7539 /* mvcos */, SystemZ::MVCOS, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2, AMFBS_None, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 7545 /* mvcp */, SystemZ::MVCP, Convert__BDRAddr64Disp123_0__BDAddr64Disp122_1__GR641_2, AMFBS_None, { MCK_BDRAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 7550 /* mvcrl */, SystemZ::MVCRL, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 7556 /* mvcs */, SystemZ::MVCS, Convert__BDRAddr64Disp123_0__BDAddr64Disp122_1__GR641_2, AMFBS_None, { MCK_BDRAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 7561 /* mvcsk */, SystemZ::MVCSK, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 7567 /* mvghi */, SystemZ::MVGHI, Convert__BDAddr64Disp122_0__S16Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 7573 /* mvhhi */, SystemZ::MVHHI, Convert__BDAddr64Disp122_0__S16Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 7579 /* mvhi */, SystemZ::MVHI, Convert__BDAddr64Disp122_0__S16Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 7584 /* mvi */, SystemZ::MVI, Convert__BDAddr64Disp122_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 7588 /* mviy */, SystemZ::MVIY, Convert__BDAddr64Disp202_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 7593 /* mvn */, SystemZ::MVN, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7597 /* mvo */, SystemZ::MVO, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, AMFBS_None, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 7601 /* mvpg */, SystemZ::MVPG, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 7606 /* mvst */, SystemZ::MVST, Convert__GR641_0__GR641_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 7611 /* mvz */, SystemZ::MVZ, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7615 /* mxbr */, SystemZ::MXBR, Convert__FP1281_0__Tie0_1_1__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 7620 /* mxd */, SystemZ::MXD, Convert__FP1281_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7624 /* mxdb */, SystemZ::MXDB, Convert__FP1281_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7629 /* mxdbr */, SystemZ::MXDBR, Convert__FP1281_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP128, MCK_FP64 }, },
  { 7635 /* mxdr */, SystemZ::MXDR, Convert__FP1281_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP128, MCK_FP64 }, },
  { 7640 /* mxr */, SystemZ::MXR, Convert__FP1281_0__Tie0_1_1__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 7644 /* mxtr */, SystemZ::MXTR, Convert__FP1281_0__FP1281_1__FP1281_2, AMFBS_None, { MCK_FP128, MCK_FP128, MCK_FP128 }, },
  { 7649 /* mxtra */, SystemZ::MXTRA, Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 7655 /* my */, SystemZ::MY, Convert__FP1281_0__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP128, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7658 /* myh */, SystemZ::MYH, Convert__FP641_0__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7662 /* myhr */, SystemZ::MYHR, Convert__FP641_0__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7667 /* myl */, SystemZ::MYL, Convert__FP641_0__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7671 /* mylr */, SystemZ::MYLR, Convert__FP641_0__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7676 /* myr */, SystemZ::MYR, Convert__FP1281_0__FP641_1__FP641_2, AMFBS_None, { MCK_FP128, MCK_FP64, MCK_FP64 }, },
  { 7680 /* n */, SystemZ::N, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 7682 /* nc */, SystemZ::NC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7685 /* ncgrk */, SystemZ::NCGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7691 /* ncrk */, SystemZ::NCRK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7696 /* ng */, SystemZ::NG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7699 /* ngr */, SystemZ::NGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 7703 /* ngrk */, SystemZ::NGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7708 /* ni */, SystemZ::NI, Convert__BDAddr64Disp122_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 7711 /* niai */, SystemZ::NIAI, Convert__U4Imm1_0__U4Imm1_1, AMFBS_FeatureExecutionHint, { MCK_U4Imm, MCK_U4Imm }, },
  { 7716 /* nihf */, SystemZ::NIHF, Convert__GRH321_0__Tie0_1_1__U32Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U32Imm }, },
  { 7721 /* nihh */, SystemZ::NIHH, Convert__GRH321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U16Imm }, },
  { 7726 /* nihl */, SystemZ::NIHL, Convert__GRH321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U16Imm }, },
  { 7731 /* nilf */, SystemZ::NILF, Convert__GR321_0__Tie0_1_1__U32Imm1_1, AMFBS_None, { MCK_GR32, MCK_U32Imm }, },
  { 7736 /* nilh */, SystemZ::NILH, Convert__GR321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 7741 /* nill */, SystemZ::NILL, Convert__GR321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 7746 /* niy */, SystemZ::NIY, Convert__BDAddr64Disp202_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 7750 /* nngrk */, SystemZ::NNGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7756 /* nnrk */, SystemZ::NNRK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7761 /* nogrk */, SystemZ::NOGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7767 /* nop */, SystemZ::BCAsm, Convert__imm_95_0__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 7771 /* nopr */, SystemZ::BCRAsm, Convert__imm_95_0__GR641_0, AMFBS_None, { MCK_GR64 }, },
  { 7776 /* nork */, SystemZ::NORK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7781 /* nr */, SystemZ::NR, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 7784 /* nrk */, SystemZ::NRK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7788 /* ntstg */, SystemZ::NTSTG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_FeatureTransactionalExecution, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7794 /* nxgrk */, SystemZ::NXGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7800 /* nxrk */, SystemZ::NXRK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7805 /* ny */, SystemZ::NY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7808 /* o */, SystemZ::O, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 7810 /* oc */, SystemZ::OC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7813 /* ocgrk */, SystemZ::OCGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7819 /* ocrk */, SystemZ::OCRK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7824 /* og */, SystemZ::OG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7827 /* ogr */, SystemZ::OGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 7831 /* ogrk */, SystemZ::OGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7836 /* oi */, SystemZ::OI, Convert__BDAddr64Disp122_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 7839 /* oihf */, SystemZ::OIHF, Convert__GRH321_0__Tie0_1_1__U32Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U32Imm }, },
  { 7844 /* oihh */, SystemZ::OIHH, Convert__GRH321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U16Imm }, },
  { 7849 /* oihl */, SystemZ::OIHL, Convert__GRH321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U16Imm }, },
  { 7854 /* oilf */, SystemZ::OILF, Convert__GR321_0__Tie0_1_1__U32Imm1_1, AMFBS_None, { MCK_GR32, MCK_U32Imm }, },
  { 7859 /* oilh */, SystemZ::OILH, Convert__GR321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 7864 /* oill */, SystemZ::OILL, Convert__GR321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 7869 /* oiy */, SystemZ::OIY, Convert__BDAddr64Disp202_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 7873 /* or */, SystemZ::OR, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 7876 /* ork */, SystemZ::ORK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7880 /* oy */, SystemZ::OY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7883 /* pack */, SystemZ::PACK, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, AMFBS_None, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 7888 /* palb */, SystemZ::PALB, Convert_NoOperands, AMFBS_None, {  }, },
  { 7893 /* pc */, SystemZ::PC, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 7896 /* pcc */, SystemZ::PCC, Convert_NoOperands, AMFBS_FeatureMessageSecurityAssist4, {  }, },
  { 7900 /* pckmo */, SystemZ::PCKMO, Convert_NoOperands, AMFBS_FeatureMessageSecurityAssist3, {  }, },
  { 7906 /* pfd */, SystemZ::PFD, Convert__U4Imm1_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_U4Imm, MCK_BDXAddr64Disp20 }, },
  { 7910 /* pfdrl */, SystemZ::PFDRL, Convert__U4Imm1_0__PCRel321_1, AMFBS_None, { MCK_U4Imm, MCK_PCRel32 }, },
  { 7916 /* pfmf */, SystemZ::PFMF, Convert__GR641_1__GR321_0__Tie0_1_1, AMFBS_None, { MCK_GR32, MCK_GR64 }, },
  { 7921 /* pfpo */, SystemZ::PFPO, Convert_NoOperands, AMFBS_None, {  }, },
  { 7926 /* pgin */, SystemZ::PGIN, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 7931 /* pgout */, SystemZ::PGOUT, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 7937 /* pka */, SystemZ::PKA, Convert__BDAddr64Disp122_0__BDLAddr64Disp12Len83_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_BDLAddr64Disp12Len8 }, },
  { 7941 /* pku */, SystemZ::PKU, Convert__BDAddr64Disp122_0__BDLAddr64Disp12Len83_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_BDLAddr64Disp12Len8 }, },
  { 7945 /* plo */, SystemZ::PLO, Convert__GR641_0__BDAddr64Disp122_1__GR641_2__BDAddr64Disp122_3, AMFBS_None, { MCK_GR64, MCK_BDAddr64Disp12, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 7949 /* popcnt */, SystemZ::POPCNT, Convert__GR641_0__GR641_1, AMFBS_FeaturePopulationCount, { MCK_GR64, MCK_GR64 }, },
  { 7949 /* popcnt */, SystemZ::POPCNTOpt, Convert__GR641_0__GR641_1__U4Imm1_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 7956 /* ppa */, SystemZ::PPA, Convert__GR641_0__GR641_1__U4Imm1_2, AMFBS_FeatureProcessorAssist, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 7960 /* ppno */, SystemZ::PPNO, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_FeatureMessageSecurityAssist5, { MCK_GR128, MCK_GR128 }, },
  { 7965 /* pr */, SystemZ::PR, Convert_NoOperands, AMFBS_None, {  }, },
  { 7968 /* prno */, SystemZ::PRNO, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_FeatureMessageSecurityAssist7, { MCK_GR128, MCK_GR128 }, },
  { 7973 /* pt */, SystemZ::PT, Convert__GR321_0__GR641_1, AMFBS_None, { MCK_GR32, MCK_GR64 }, },
  { 7976 /* ptf */, SystemZ::PTF, Convert__GR641_0__Tie0_1_1, AMFBS_None, { MCK_GR64 }, },
  { 7980 /* ptff */, SystemZ::PTFF, Convert_NoOperands, AMFBS_None, {  }, },
  { 7985 /* pti */, SystemZ::PTI, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 7989 /* ptlb */, SystemZ::PTLB, Convert_NoOperands, AMFBS_None, {  }, },
  { 7994 /* qadtr */, SystemZ::QADTR, Convert__FP641_0__FP641_1__Tie0_1_1__FP641_2__U4Imm1_3, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 8000 /* qaxtr */, SystemZ::QAXTR, Convert__FP1281_0__FP1281_1__Tie0_1_1__FP1281_2__U4Imm1_3, AMFBS_None, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 8006 /* qctri */, SystemZ::QCTRI, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8012 /* qsi */, SystemZ::QSI, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8016 /* rchp */, SystemZ::RCHP, Convert_NoOperands, AMFBS_None, {  }, },
  { 8021 /* risbg */, SystemZ::RISBG, Convert__GR641_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 8027 /* risbgn */, SystemZ::RISBGN, Convert__GR641_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 8034 /* risbhg */, SystemZ::RISBHG, Convert__GRH321_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 8041 /* risblg */, SystemZ::RISBLG, Convert__GR321_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, AMFBS_FeatureHighWord, { MCK_GR32, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 8048 /* rll */, SystemZ::RLL, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 8052 /* rllg */, SystemZ::RLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 8057 /* rnsbg */, SystemZ::RNSBG, Convert__GR641_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 8063 /* rosbg */, SystemZ::ROSBG, Convert__GR641_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 8069 /* rp */, SystemZ::RP, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8072 /* rrbe */, SystemZ::RRBE, Convert__GR321_0__GR641_1, AMFBS_None, { MCK_GR32, MCK_GR64 }, },
  { 8077 /* rrbm */, SystemZ::RRBM, Convert__GR641_0__GR641_1, AMFBS_FeatureResetReferenceBitsMultiple, { MCK_GR64, MCK_GR64 }, },
  { 8082 /* rrdtr */, SystemZ::RRDTR, Convert__FP641_0__FP641_1__Tie0_1_1__FP641_2__U4Imm1_3, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 8088 /* rrxtr */, SystemZ::RRXTR, Convert__FP1281_0__FP1281_1__Tie0_1_1__FP1281_2__U4Imm1_3, AMFBS_None, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 8094 /* rsch */, SystemZ::RSCH, Convert_NoOperands, AMFBS_None, {  }, },
  { 8099 /* rxsbg */, SystemZ::RXSBG, Convert__GR641_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 8105 /* s */, SystemZ::S, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 8107 /* sac */, SystemZ::SAC, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8111 /* sacf */, SystemZ::SACF, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8116 /* sal */, SystemZ::SAL, Convert_NoOperands, AMFBS_None, {  }, },
  { 8120 /* sam24 */, SystemZ::SAM24, Convert_NoOperands, AMFBS_None, {  }, },
  { 8126 /* sam31 */, SystemZ::SAM31, Convert_NoOperands, AMFBS_None, {  }, },
  { 8132 /* sam64 */, SystemZ::SAM64, Convert_NoOperands, AMFBS_None, {  }, },
  { 8138 /* sar */, SystemZ::SAR, Convert__AR321_0__GR321_1, AMFBS_None, { MCK_AR32, MCK_GR32 }, },
  { 8142 /* scctr */, SystemZ::SCCTR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 8148 /* schm */, SystemZ::SCHM, Convert_NoOperands, AMFBS_None, {  }, },
  { 8153 /* sck */, SystemZ::SCK, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8157 /* sckc */, SystemZ::SCKC, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8162 /* sckpf */, SystemZ::SCKPF, Convert_NoOperands, AMFBS_None, {  }, },
  { 8168 /* sd */, SystemZ::SD, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 8171 /* sdb */, SystemZ::SDB, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 8175 /* sdbr */, SystemZ::SDBR, Convert__FP641_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 8180 /* sdr */, SystemZ::SDR, Convert__FP641_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 8184 /* sdtr */, SystemZ::SDTR, Convert__FP641_0__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 8189 /* sdtra */, SystemZ::SDTRA, Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 8195 /* se */, SystemZ::SE, Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 8198 /* seb */, SystemZ::SEB, Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 8202 /* sebr */, SystemZ::SEBR, Convert__FP321_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 8207 /* selfhr */, SystemZ::SELFHRAsm, Convert__GRH321_0__GRH321_2__GRH321_1__U4Imm1_3, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32, MCK_U4Imm }, },
  { 8214 /* selfhre */, SystemZ::SELFHRAsmE, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8222 /* selfhrh */, SystemZ::SELFHRAsmH, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8230 /* selfhrhe */, SystemZ::SELFHRAsmHE, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8239 /* selfhrl */, SystemZ::SELFHRAsmL, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8247 /* selfhrle */, SystemZ::SELFHRAsmLE, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8256 /* selfhrlh */, SystemZ::SELFHRAsmLH, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8265 /* selfhrm */, SystemZ::SELFHRAsmM, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8273 /* selfhrne */, SystemZ::SELFHRAsmNE, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8282 /* selfhrnh */, SystemZ::SELFHRAsmNH, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8291 /* selfhrnhe */, SystemZ::SELFHRAsmNHE, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8301 /* selfhrnl */, SystemZ::SELFHRAsmNL, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8310 /* selfhrnle */, SystemZ::SELFHRAsmNLE, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8320 /* selfhrnlh */, SystemZ::SELFHRAsmNLH, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8330 /* selfhrnm */, SystemZ::SELFHRAsmNM, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8339 /* selfhrno */, SystemZ::SELFHRAsmNO, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8348 /* selfhrnp */, SystemZ::SELFHRAsmNP, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8357 /* selfhrnz */, SystemZ::SELFHRAsmNZ, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8366 /* selfhro */, SystemZ::SELFHRAsmO, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8374 /* selfhrp */, SystemZ::SELFHRAsmP, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8382 /* selfhrz */, SystemZ::SELFHRAsmZ, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8390 /* selgr */, SystemZ::SELGRAsm, Convert__GR641_0__GR641_2__GR641_1__U4Imm1_3, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 8396 /* selgre */, SystemZ::SELGRAsmE, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8403 /* selgrh */, SystemZ::SELGRAsmH, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8410 /* selgrhe */, SystemZ::SELGRAsmHE, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8418 /* selgrl */, SystemZ::SELGRAsmL, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8425 /* selgrle */, SystemZ::SELGRAsmLE, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8433 /* selgrlh */, SystemZ::SELGRAsmLH, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8441 /* selgrm */, SystemZ::SELGRAsmM, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8448 /* selgrne */, SystemZ::SELGRAsmNE, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8456 /* selgrnh */, SystemZ::SELGRAsmNH, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8464 /* selgrnhe */, SystemZ::SELGRAsmNHE, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8473 /* selgrnl */, SystemZ::SELGRAsmNL, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8481 /* selgrnle */, SystemZ::SELGRAsmNLE, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8490 /* selgrnlh */, SystemZ::SELGRAsmNLH, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8499 /* selgrnm */, SystemZ::SELGRAsmNM, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8507 /* selgrno */, SystemZ::SELGRAsmNO, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8515 /* selgrnp */, SystemZ::SELGRAsmNP, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8523 /* selgrnz */, SystemZ::SELGRAsmNZ, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8531 /* selgro */, SystemZ::SELGRAsmO, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8538 /* selgrp */, SystemZ::SELGRAsmP, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8545 /* selgrz */, SystemZ::SELGRAsmZ, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8552 /* selr */, SystemZ::SELRAsm, Convert__GR321_0__GR321_2__GR321_1__U4Imm1_3, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 8557 /* selre */, SystemZ::SELRAsmE, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8563 /* selrh */, SystemZ::SELRAsmH, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8569 /* selrhe */, SystemZ::SELRAsmHE, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8576 /* selrl */, SystemZ::SELRAsmL, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8582 /* selrle */, SystemZ::SELRAsmLE, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8589 /* selrlh */, SystemZ::SELRAsmLH, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8596 /* selrm */, SystemZ::SELRAsmM, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8602 /* selrne */, SystemZ::SELRAsmNE, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8609 /* selrnh */, SystemZ::SELRAsmNH, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8616 /* selrnhe */, SystemZ::SELRAsmNHE, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8624 /* selrnl */, SystemZ::SELRAsmNL, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8631 /* selrnle */, SystemZ::SELRAsmNLE, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8639 /* selrnlh */, SystemZ::SELRAsmNLH, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8647 /* selrnm */, SystemZ::SELRAsmNM, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8654 /* selrno */, SystemZ::SELRAsmNO, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8661 /* selrnp */, SystemZ::SELRAsmNP, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8668 /* selrnz */, SystemZ::SELRAsmNZ, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8675 /* selro */, SystemZ::SELRAsmO, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8681 /* selrp */, SystemZ::SELRAsmP, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8687 /* selrz */, SystemZ::SELRAsmZ, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8693 /* ser */, SystemZ::SER, Convert__FP321_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 8697 /* sfasr */, SystemZ::SFASR, Convert__GR321_0, AMFBS_None, { MCK_GR32 }, },
  { 8703 /* sfpc */, SystemZ::SFPC, Convert__GR321_0, AMFBS_None, { MCK_GR32 }, },
  { 8708 /* sg */, SystemZ::SG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8711 /* sgf */, SystemZ::SGF, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8715 /* sgfr */, SystemZ::SGFR, Convert__GR641_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 8720 /* sgh */, SystemZ::SGH, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_FeatureMiscellaneousExtensions2, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8724 /* sgr */, SystemZ::SGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 8728 /* sgrk */, SystemZ::SGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8733 /* sh */, SystemZ::SH, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 8736 /* shhhr */, SystemZ::SHHHR, Convert__GRH321_0__GRH321_1__GRH321_2, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8742 /* shhlr */, SystemZ::SHHLR, Convert__GRH321_0__GRH321_1__GR321_2, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GR32 }, },
  { 8748 /* shy */, SystemZ::SHY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 8752 /* sie */, SystemZ::SIE, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8756 /* siga */, SystemZ::SIGA, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8761 /* sigp */, SystemZ::SIGP, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 8766 /* sl */, SystemZ::SL, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 8769 /* sla */, SystemZ::SLA, Convert__GR321_0__Tie0_1_1__BDAddr32Disp122_1, AMFBS_None, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 8773 /* slag */, SystemZ::SLAG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 8778 /* slak */, SystemZ::SLAK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 8783 /* slb */, SystemZ::SLB, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 8787 /* slbg */, SystemZ::SLBG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8792 /* slbgr */, SystemZ::SLBGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 8798 /* slbr */, SystemZ::SLBR, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 8803 /* slda */, SystemZ::SLDA, Convert__GR1281_0__Tie0_1_1__BDAddr32Disp122_1, AMFBS_None, { MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 8808 /* sldl */, SystemZ::SLDL, Convert__GR1281_0__Tie0_1_1__BDAddr32Disp122_1, AMFBS_None, { MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 8813 /* sldt */, SystemZ::SLDT, Convert__FP641_0__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 8818 /* slfi */, SystemZ::SLFI, Convert__GR321_0__Tie0_1_1__U32Imm1_1, AMFBS_None, { MCK_GR32, MCK_U32Imm }, },
  { 8823 /* slg */, SystemZ::SLG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8827 /* slgf */, SystemZ::SLGF, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8832 /* slgfi */, SystemZ::SLGFI, Convert__GR641_0__Tie0_1_1__U32Imm1_1, AMFBS_None, { MCK_GR64, MCK_U32Imm }, },
  { 8838 /* slgfr */, SystemZ::SLGFR, Convert__GR641_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 8844 /* slgr */, SystemZ::SLGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 8849 /* slgrk */, SystemZ::SLGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8855 /* slhhhr */, SystemZ::SLHHHR, Convert__GRH321_0__GRH321_1__GRH321_2, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8862 /* slhhlr */, SystemZ::SLHHLR, Convert__GRH321_0__GRH321_1__GR321_2, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GR32 }, },
  { 8869 /* sll */, SystemZ::SLL, Convert__GR321_0__Tie0_1_1__BDAddr32Disp122_1, AMFBS_None, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 8873 /* sllg */, SystemZ::SLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 8878 /* sllk */, SystemZ::SLLK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 8883 /* slr */, SystemZ::SLR, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 8887 /* slrk */, SystemZ::SLRK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8892 /* slxt */, SystemZ::SLXT, Convert__FP1281_0__FP1281_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP128, MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 8897 /* sly */, SystemZ::SLY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 8901 /* sortl */, SystemZ::SORTL, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_FeatureEnhancedSort, { MCK_GR128, MCK_GR128 }, },
  { 8907 /* sp */, SystemZ::SP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, AMFBS_None, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 8910 /* spctr */, SystemZ::SPCTR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 8916 /* spka */, SystemZ::SPKA, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8921 /* spm */, SystemZ::SPM, Convert__GR321_0, AMFBS_None, { MCK_GR32 }, },
  { 8925 /* spt */, SystemZ::SPT, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8929 /* spx */, SystemZ::SPX, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8933 /* sqd */, SystemZ::SQD, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 8937 /* sqdb */, SystemZ::SQDB, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 8942 /* sqdbr */, SystemZ::SQDBR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 8948 /* sqdr */, SystemZ::SQDR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 8953 /* sqe */, SystemZ::SQE, Convert__FP321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 8957 /* sqeb */, SystemZ::SQEB, Convert__FP321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 8962 /* sqebr */, SystemZ::SQEBR, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 8968 /* sqer */, SystemZ::SQER, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 8973 /* sqxbr */, SystemZ::SQXBR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 8979 /* sqxr */, SystemZ::SQXR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 8984 /* sr */, SystemZ::SR, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 8987 /* sra */, SystemZ::SRA, Convert__GR321_0__Tie0_1_1__BDAddr32Disp122_1, AMFBS_None, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 8991 /* srag */, SystemZ::SRAG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 8996 /* srak */, SystemZ::SRAK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 9001 /* srda */, SystemZ::SRDA, Convert__GR1281_0__Tie0_1_1__BDAddr32Disp122_1, AMFBS_None, { MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 9006 /* srdl */, SystemZ::SRDL, Convert__GR1281_0__Tie0_1_1__BDAddr32Disp122_1, AMFBS_None, { MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 9011 /* srdt */, SystemZ::SRDT, Convert__FP641_0__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 9016 /* srk */, SystemZ::SRK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 9020 /* srl */, SystemZ::SRL, Convert__GR321_0__Tie0_1_1__BDAddr32Disp122_1, AMFBS_None, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 9024 /* srlg */, SystemZ::SRLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 9029 /* srlk */, SystemZ::SRLK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 9034 /* srnm */, SystemZ::SRNM, Convert__BDAddr32Disp122_0, AMFBS_None, { MCK_BDAddr32Disp12 }, },
  { 9039 /* srnmb */, SystemZ::SRNMB, Convert__BDAddr32Disp122_0, AMFBS_FeatureFPExtension, { MCK_BDAddr32Disp12 }, },
  { 9045 /* srnmt */, SystemZ::SRNMT, Convert__BDAddr32Disp122_0, AMFBS_None, { MCK_BDAddr32Disp12 }, },
  { 9051 /* srp */, SystemZ::SRP, Convert__BDLAddr64Disp12Len43_0__BDAddr32Disp122_1__U4Imm1_2, AMFBS_None, { MCK_BDLAddr64Disp12Len4, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 9055 /* srst */, SystemZ::SRST, Convert__GR641_0__GR641_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 9060 /* srstu */, SystemZ::SRSTU, Convert__GR641_0__GR641_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 9066 /* srxt */, SystemZ::SRXT, Convert__FP1281_0__FP1281_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP128, MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 9071 /* ssair */, SystemZ::SSAIR, Convert__GR641_0, AMFBS_None, { MCK_GR64 }, },
  { 9077 /* ssar */, SystemZ::SSAR, Convert__GR321_0, AMFBS_None, { MCK_GR32 }, },
  { 9082 /* ssch */, SystemZ::SSCH, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9087 /* sske */, SystemZ::SSKEOpt, Convert__GR321_0__GR641_1, AMFBS_None, { MCK_GR32, MCK_GR64 }, },
  { 9087 /* sske */, SystemZ::SSKE, Convert__GR321_0__GR641_1__U4Imm1_2, AMFBS_None, { MCK_GR32, MCK_GR64, MCK_U4Imm }, },
  { 9092 /* ssm */, SystemZ::SSM, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9096 /* st */, SystemZ::ST, Convert__GR321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 9099 /* stam */, SystemZ::STAM, Convert__AR321_0__AR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_AR32, MCK_AR32, MCK_BDAddr64Disp12 }, },
  { 9104 /* stamy */, SystemZ::STAMY, Convert__AR321_0__AR321_1__BDAddr64Disp202_2, AMFBS_None, { MCK_AR32, MCK_AR32, MCK_BDAddr64Disp20 }, },
  { 9110 /* stap */, SystemZ::STAP, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9115 /* stc */, SystemZ::STC, Convert__GR321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 9119 /* stch */, SystemZ::STCH, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 9124 /* stck */, SystemZ::STCK, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9129 /* stckc */, SystemZ::STCKC, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9135 /* stcke */, SystemZ::STCKE, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9141 /* stckf */, SystemZ::STCKF, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9147 /* stcm */, SystemZ::STCM, Convert__GR321_0__U4Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 9152 /* stcmh */, SystemZ::STCMH, Convert__GRH321_0__U4Imm1_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GRH32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 9158 /* stcmy */, SystemZ::STCMY, Convert__GR321_0__U4Imm1_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 9164 /* stcps */, SystemZ::STCPS, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9170 /* stcrw */, SystemZ::STCRW, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9176 /* stctg */, SystemZ::STCTG, Convert__CR641_0__CR641_1__BDAddr64Disp202_2, AMFBS_None, { MCK_CR64, MCK_CR64, MCK_BDAddr64Disp20 }, },
  { 9182 /* stctl */, SystemZ::STCTL, Convert__CR641_0__CR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_CR64, MCK_CR64, MCK_BDAddr64Disp12 }, },
  { 9188 /* stcy */, SystemZ::STCY, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 9193 /* std */, SystemZ::STD, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 9197 /* stdrv */, SystemZ::VSTEBRG, Convert__VR1281_0__BDXAddr64Disp123_1__imm_95_0, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 9203 /* stdy */, SystemZ::STDY, Convert__FP641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp20 }, },
  { 9208 /* ste */, SystemZ::STE, Convert__FP321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 9212 /* sterv */, SystemZ::VSTEBRF, Convert__VR1281_0__BDXAddr64Disp123_1__imm_95_0, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 9218 /* stey */, SystemZ::STEY, Convert__FP321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp20 }, },
  { 9223 /* stfh */, SystemZ::STFH, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 9228 /* stfl */, SystemZ::STFL, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9233 /* stfle */, SystemZ::STFLE, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9239 /* stfpc */, SystemZ::STFPC, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9245 /* stg */, SystemZ::STG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 9249 /* stgrl */, SystemZ::STGRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 9255 /* stgsc */, SystemZ::STGSC, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_FeatureGuardedStorage, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 9261 /* sth */, SystemZ::STH, Convert__GR321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 9265 /* sthh */, SystemZ::STHH, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 9270 /* sthrl */, SystemZ::STHRL, Convert__GR321_0__PCRel321_1, AMFBS_None, { MCK_GR32, MCK_PCRel32 }, },
  { 9276 /* sthy */, SystemZ::STHY, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 9281 /* stidp */, SystemZ::STIDP, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9287 /* stm */, SystemZ::STM, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 9291 /* stmg */, SystemZ::STMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9296 /* stmh */, SystemZ::STMH, Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GRH32, MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9301 /* stmy */, SystemZ::STMY, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9306 /* stnsm */, SystemZ::STNSM, Convert__BDAddr64Disp122_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 9312 /* stoc */, SystemZ::STOCAsm, Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 9317 /* stoce */, SystemZ::STOCAsmE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9323 /* stocfh */, SystemZ::STOCFHAsm, Convert__GRH321_0__BDAddr64Disp202_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 9330 /* stocfhe */, SystemZ::STOCFHAsmE, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9338 /* stocfhh */, SystemZ::STOCFHAsmH, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9346 /* stocfhhe */, SystemZ::STOCFHAsmHE, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9355 /* stocfhl */, SystemZ::STOCFHAsmL, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9363 /* stocfhle */, SystemZ::STOCFHAsmLE, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9372 /* stocfhlh */, SystemZ::STOCFHAsmLH, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9381 /* stocfhm */, SystemZ::STOCFHAsmM, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9389 /* stocfhne */, SystemZ::STOCFHAsmNE, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9398 /* stocfhnh */, SystemZ::STOCFHAsmNH, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9407 /* stocfhnhe */, SystemZ::STOCFHAsmNHE, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9417 /* stocfhnl */, SystemZ::STOCFHAsmNL, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9426 /* stocfhnle */, SystemZ::STOCFHAsmNLE, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9436 /* stocfhnlh */, SystemZ::STOCFHAsmNLH, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9446 /* stocfhnm */, SystemZ::STOCFHAsmNM, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9455 /* stocfhno */, SystemZ::STOCFHAsmNO, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9464 /* stocfhnp */, SystemZ::STOCFHAsmNP, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9473 /* stocfhnz */, SystemZ::STOCFHAsmNZ, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9482 /* stocfho */, SystemZ::STOCFHAsmO, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9490 /* stocfhp */, SystemZ::STOCFHAsmP, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9498 /* stocfhz */, SystemZ::STOCFHAsmZ, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9506 /* stocg */, SystemZ::STOCGAsm, Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 9512 /* stocge */, SystemZ::STOCGAsmE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9519 /* stocgh */, SystemZ::STOCGAsmH, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9526 /* stocghe */, SystemZ::STOCGAsmHE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9534 /* stocgl */, SystemZ::STOCGAsmL, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9541 /* stocgle */, SystemZ::STOCGAsmLE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9549 /* stocglh */, SystemZ::STOCGAsmLH, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9557 /* stocgm */, SystemZ::STOCGAsmM, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9564 /* stocgne */, SystemZ::STOCGAsmNE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9572 /* stocgnh */, SystemZ::STOCGAsmNH, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9580 /* stocgnhe */, SystemZ::STOCGAsmNHE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9589 /* stocgnl */, SystemZ::STOCGAsmNL, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9597 /* stocgnle */, SystemZ::STOCGAsmNLE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9606 /* stocgnlh */, SystemZ::STOCGAsmNLH, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9615 /* stocgnm */, SystemZ::STOCGAsmNM, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9623 /* stocgno */, SystemZ::STOCGAsmNO, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9631 /* stocgnp */, SystemZ::STOCGAsmNP, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9639 /* stocgnz */, SystemZ::STOCGAsmNZ, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9647 /* stocgo */, SystemZ::STOCGAsmO, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9654 /* stocgp */, SystemZ::STOCGAsmP, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9661 /* stocgz */, SystemZ::STOCGAsmZ, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9668 /* stoch */, SystemZ::STOCAsmH, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9674 /* stoche */, SystemZ::STOCAsmHE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9681 /* stocl */, SystemZ::STOCAsmL, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9687 /* stocle */, SystemZ::STOCAsmLE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9694 /* stoclh */, SystemZ::STOCAsmLH, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9701 /* stocm */, SystemZ::STOCAsmM, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9707 /* stocne */, SystemZ::STOCAsmNE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9714 /* stocnh */, SystemZ::STOCAsmNH, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9721 /* stocnhe */, SystemZ::STOCAsmNHE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9729 /* stocnl */, SystemZ::STOCAsmNL, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9736 /* stocnle */, SystemZ::STOCAsmNLE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9744 /* stocnlh */, SystemZ::STOCAsmNLH, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9752 /* stocnm */, SystemZ::STOCAsmNM, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9759 /* stocno */, SystemZ::STOCAsmNO, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9766 /* stocnp */, SystemZ::STOCAsmNP, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9773 /* stocnz */, SystemZ::STOCAsmNZ, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9780 /* stoco */, SystemZ::STOCAsmO, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9786 /* stocp */, SystemZ::STOCAsmP, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9792 /* stocz */, SystemZ::STOCAsmZ, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9798 /* stosm */, SystemZ::STOSM, Convert__BDAddr64Disp122_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 9804 /* stpq */, SystemZ::STPQ, Convert__GR1281_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 9809 /* stpt */, SystemZ::STPT, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9814 /* stpx */, SystemZ::STPX, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9819 /* strag */, SystemZ::STRAG, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 9825 /* strl */, SystemZ::STRL, Convert__GR321_0__PCRel321_1, AMFBS_None, { MCK_GR32, MCK_PCRel32 }, },
  { 9830 /* strv */, SystemZ::STRV, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 9835 /* strvg */, SystemZ::STRVG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 9841 /* strvh */, SystemZ::STRVH, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 9847 /* stsch */, SystemZ::STSCH, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9853 /* stsi */, SystemZ::STSI, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9858 /* stura */, SystemZ::STURA, Convert__GR321_0__GR641_1, AMFBS_None, { MCK_GR32, MCK_GR64 }, },
  { 9864 /* sturg */, SystemZ::STURG, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 9870 /* sty */, SystemZ::STY, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 9874 /* su */, SystemZ::SU, Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 9877 /* sur */, SystemZ::SUR, Convert__FP321_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 9881 /* svc */, SystemZ::SVC, Convert__U8Imm1_0, AMFBS_None, { MCK_U8Imm }, },
  { 9885 /* sw */, SystemZ::SW, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 9888 /* swr */, SystemZ::SWR, Convert__FP641_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 9892 /* sxbr */, SystemZ::SXBR, Convert__FP1281_0__Tie0_1_1__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 9897 /* sxr */, SystemZ::SXR, Convert__FP1281_0__Tie0_1_1__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 9901 /* sxtr */, SystemZ::SXTR, Convert__FP1281_0__FP1281_1__FP1281_2, AMFBS_None, { MCK_FP128, MCK_FP128, MCK_FP128 }, },
  { 9906 /* sxtra */, SystemZ::SXTRA, Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 9912 /* sy */, SystemZ::SY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 9915 /* tabort */, SystemZ::TABORT, Convert__BDAddr64Disp122_0, AMFBS_FeatureTransactionalExecution, { MCK_BDAddr64Disp12 }, },
  { 9922 /* tam */, SystemZ::TAM, Convert_NoOperands, AMFBS_None, {  }, },
  { 9926 /* tar */, SystemZ::TAR, Convert__AR321_0__GR321_1, AMFBS_None, { MCK_AR32, MCK_GR32 }, },
  { 9930 /* tb */, SystemZ::TB, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 9933 /* tbdr */, SystemZ::TBDR, Convert__FP641_0__U4Imm1_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_U4Imm, MCK_FP64 }, },
  { 9938 /* tbedr */, SystemZ::TBEDR, Convert__FP321_0__U4Imm1_1__FP641_2, AMFBS_None, { MCK_FP32, MCK_U4Imm, MCK_FP64 }, },
  { 9944 /* tbegin */, SystemZ::TBEGIN, Convert__BDAddr64Disp122_0__U16Imm1_1, AMFBS_FeatureTransactionalExecution, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 9951 /* tbeginc */, SystemZ::TBEGINC, Convert__BDAddr64Disp122_0__U16Imm1_1, AMFBS_FeatureTransactionalExecution, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 9959 /* tcdb */, SystemZ::TCDB, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 9964 /* tceb */, SystemZ::TCEB, Convert__FP321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 9969 /* tcxb */, SystemZ::TCXB, Convert__FP1281_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 9974 /* tdcdt */, SystemZ::TDCDT, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 9980 /* tdcet */, SystemZ::TDCET, Convert__FP321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 9986 /* tdcxt */, SystemZ::TDCXT, Convert__FP1281_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 9992 /* tdgdt */, SystemZ::TDGDT, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 9998 /* tdget */, SystemZ::TDGET, Convert__FP321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 10004 /* tdgxt */, SystemZ::TDGXT, Convert__FP1281_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 10010 /* tend */, SystemZ::TEND, Convert_NoOperands, AMFBS_FeatureTransactionalExecution, {  }, },
  { 10015 /* thder */, SystemZ::THDER, Convert__FP641_0__FP321_1, AMFBS_None, { MCK_FP64, MCK_FP32 }, },
  { 10021 /* thdr */, SystemZ::THDR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 10026 /* tm */, SystemZ::TM, Convert__BDAddr64Disp122_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 10029 /* tmh */, SystemZ::TMLH, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 10033 /* tmhh */, SystemZ::TMHH, Convert__GRH321_0__U16Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U16Imm }, },
  { 10038 /* tmhl */, SystemZ::TMHL, Convert__GRH321_0__U16Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U16Imm }, },
  { 10043 /* tml */, SystemZ::TMLL, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 10047 /* tmlh */, SystemZ::TMLH, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 10052 /* tmll */, SystemZ::TMLL, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 10057 /* tmy */, SystemZ::TMY, Convert__BDAddr64Disp202_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 10061 /* tp */, SystemZ::TP, Convert__BDLAddr64Disp12Len43_0, AMFBS_None, { MCK_BDLAddr64Disp12Len4 }, },
  { 10064 /* tpi */, SystemZ::TPI, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 10068 /* tprot */, SystemZ::TPROT, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 10074 /* tr */, SystemZ::TR, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 10077 /* trace */, SystemZ::TRACE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 10083 /* tracg */, SystemZ::TRACG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 10089 /* trap2 */, SystemZ::TRAP2, Convert_NoOperands, AMFBS_None, {  }, },
  { 10095 /* trap4 */, SystemZ::TRAP4, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 10101 /* tre */, SystemZ::TRE, Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 10105 /* troo */, SystemZ::TROOOpt, Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 10105 /* troo */, SystemZ::TROO, Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 10110 /* trot */, SystemZ::TROTOpt, Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 10110 /* trot */, SystemZ::TROT, Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 10115 /* trt */, SystemZ::TRT, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 10119 /* trte */, SystemZ::TRTEOpt, Convert__GR641_1__GR1281_0__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 10119 /* trte */, SystemZ::TRTE, Convert__GR641_1__GR1281_0__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 10124 /* trto */, SystemZ::TRTOOpt, Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 10124 /* trto */, SystemZ::TRTO, Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 10129 /* trtr */, SystemZ::TRTR, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 10134 /* trtre */, SystemZ::TRTREOpt, Convert__GR641_1__GR1281_0__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 10134 /* trtre */, SystemZ::TRTRE, Convert__GR641_1__GR1281_0__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 10140 /* trtt */, SystemZ::TRTTOpt, Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 10140 /* trtt */, SystemZ::TRTT, Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 10145 /* ts */, SystemZ::TS, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 10148 /* tsch */, SystemZ::TSCH, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 10153 /* unpk */, SystemZ::UNPK, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, AMFBS_None, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 10158 /* unpka */, SystemZ::UNPKA, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 10164 /* unpku */, SystemZ::UNPKU, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 10170 /* upt */, SystemZ::UPT, Convert_NoOperands, AMFBS_None, {  }, },
  { 10174 /* va */, SystemZ::VA, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10177 /* vab */, SystemZ::VAB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10181 /* vac */, SystemZ::VAC, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10185 /* vacc */, SystemZ::VACC, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10190 /* vaccb */, SystemZ::VACCB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10196 /* vaccc */, SystemZ::VACCC, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10202 /* vacccq */, SystemZ::VACCCQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10209 /* vaccf */, SystemZ::VACCF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10215 /* vaccg */, SystemZ::VACCG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10221 /* vacch */, SystemZ::VACCH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10227 /* vaccq */, SystemZ::VACCQ, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10233 /* vacq */, SystemZ::VACQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10238 /* vaf */, SystemZ::VAF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10242 /* vag */, SystemZ::VAG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10246 /* vah */, SystemZ::VAH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10250 /* vap */, SystemZ::VAP, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 10254 /* vaq */, SystemZ::VAQ, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10258 /* vavg */, SystemZ::VAVG, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10263 /* vavgb */, SystemZ::VAVGB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10269 /* vavgf */, SystemZ::VAVGF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10275 /* vavgg */, SystemZ::VAVGG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10281 /* vavgh */, SystemZ::VAVGH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10287 /* vavgl */, SystemZ::VAVGL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10293 /* vavglb */, SystemZ::VAVGLB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10300 /* vavglf */, SystemZ::VAVGLF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10307 /* vavglg */, SystemZ::VAVGLG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10314 /* vavglh */, SystemZ::VAVGLH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10321 /* vbperm */, SystemZ::VBPERM, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10328 /* vcdg */, SystemZ::VCDG, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10333 /* vcdgb */, SystemZ::VCDGB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10339 /* vcdlg */, SystemZ::VCDLG, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10345 /* vcdlgb */, SystemZ::VCDLGB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10352 /* vcefb */, SystemZ::VCEFB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10358 /* vcelfb */, SystemZ::VCELFB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10365 /* vceq */, SystemZ::VCEQ, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10370 /* vceqb */, SystemZ::VCEQB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10376 /* vceqbs */, SystemZ::VCEQBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10383 /* vceqf */, SystemZ::VCEQF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10389 /* vceqfs */, SystemZ::VCEQFS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10396 /* vceqg */, SystemZ::VCEQG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10402 /* vceqgs */, SystemZ::VCEQGS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10409 /* vceqh */, SystemZ::VCEQH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10415 /* vceqhs */, SystemZ::VCEQHS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10422 /* vcfeb */, SystemZ::VCFEB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10428 /* vcfpl */, SystemZ::VCFPL, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10434 /* vcfps */, SystemZ::VCFPS, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10440 /* vcgd */, SystemZ::VCGD, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10445 /* vcgdb */, SystemZ::VCGDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10451 /* vch */, SystemZ::VCH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10455 /* vchb */, SystemZ::VCHB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10460 /* vchbs */, SystemZ::VCHBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10466 /* vchf */, SystemZ::VCHF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10471 /* vchfs */, SystemZ::VCHFS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10477 /* vchg */, SystemZ::VCHG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10482 /* vchgs */, SystemZ::VCHGS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10488 /* vchh */, SystemZ::VCHH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10493 /* vchhs */, SystemZ::VCHHS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10499 /* vchl */, SystemZ::VCHL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10504 /* vchlb */, SystemZ::VCHLB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10510 /* vchlbs */, SystemZ::VCHLBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10517 /* vchlf */, SystemZ::VCHLF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10523 /* vchlfs */, SystemZ::VCHLFS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10530 /* vchlg */, SystemZ::VCHLG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10536 /* vchlgs */, SystemZ::VCHLGS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10543 /* vchlh */, SystemZ::VCHLH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10549 /* vchlhs */, SystemZ::VCHLHS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10556 /* vcksm */, SystemZ::VCKSM, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10562 /* vclfeb */, SystemZ::VCLFEB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10569 /* vclfp */, SystemZ::VCLFP, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10575 /* vclgd */, SystemZ::VCLGD, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10581 /* vclgdb */, SystemZ::VCLGDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10588 /* vclz */, SystemZ::VCLZ, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10593 /* vclzb */, SystemZ::VCLZB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10599 /* vclzf */, SystemZ::VCLZF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10605 /* vclzg */, SystemZ::VCLZG, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10611 /* vclzh */, SystemZ::VCLZH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10617 /* vcp */, SystemZ::VCP, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10621 /* vcsfp */, SystemZ::VCSFP, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10627 /* vctz */, SystemZ::VCTZ, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10632 /* vctzb */, SystemZ::VCTZB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10638 /* vctzf */, SystemZ::VCTZF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10644 /* vctzg */, SystemZ::VCTZG, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10650 /* vctzh */, SystemZ::VCTZH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10656 /* vcvb */, SystemZ::VCVB, Convert__GR321_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVectorPackedDecimal, { MCK_GR32, MCK_VR128, MCK_U4Imm }, },
  { 10656 /* vcvb */, SystemZ::VCVBOpt, Convert__GR321_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorPackedDecimalEnhancement, { MCK_GR32, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10661 /* vcvbg */, SystemZ::VCVBG, Convert__GR641_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVectorPackedDecimal, { MCK_GR64, MCK_VR128, MCK_U4Imm }, },
  { 10661 /* vcvbg */, SystemZ::VCVBGOpt, Convert__GR641_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorPackedDecimalEnhancement, { MCK_GR64, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10667 /* vcvd */, SystemZ::VCVD, Convert__VR1281_0__GR321_1__U8Imm1_2__U4Imm1_3, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_GR32, MCK_U8Imm, MCK_U4Imm }, },
  { 10672 /* vcvdg */, SystemZ::VCVDG, Convert__VR1281_0__GR641_1__U8Imm1_2__U4Imm1_3, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_GR64, MCK_U8Imm, MCK_U4Imm }, },
  { 10678 /* vdp */, SystemZ::VDP, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 10682 /* vec */, SystemZ::VEC, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10686 /* vecb */, SystemZ::VECB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10691 /* vecf */, SystemZ::VECF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10696 /* vecg */, SystemZ::VECG, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10701 /* vech */, SystemZ::VECH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10706 /* vecl */, SystemZ::VECL, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10711 /* veclb */, SystemZ::VECLB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10717 /* veclf */, SystemZ::VECLF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10723 /* veclg */, SystemZ::VECLG, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10729 /* veclh */, SystemZ::VECLH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10735 /* verim */, SystemZ::VERIM, Convert__VR1281_0__Tie0_1_1__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 10741 /* verimb */, SystemZ::VERIMB, Convert__VR1281_0__Tie0_1_1__VR1281_1__VR1281_2__U8Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 10748 /* verimf */, SystemZ::VERIMF, Convert__VR1281_0__Tie0_1_1__VR1281_1__VR1281_2__U8Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 10755 /* verimg */, SystemZ::VERIMG, Convert__VR1281_0__Tie0_1_1__VR1281_1__VR1281_2__U8Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 10762 /* verimh */, SystemZ::VERIMH, Convert__VR1281_0__Tie0_1_1__VR1281_1__VR1281_2__U8Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 10769 /* verll */, SystemZ::VERLL, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 10775 /* verllb */, SystemZ::VERLLB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10782 /* verllf */, SystemZ::VERLLF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10789 /* verllg */, SystemZ::VERLLG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10796 /* verllh */, SystemZ::VERLLH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10803 /* verllv */, SystemZ::VERLLV, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10810 /* verllvb */, SystemZ::VERLLVB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10818 /* verllvf */, SystemZ::VERLLVF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10826 /* verllvg */, SystemZ::VERLLVG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10834 /* verllvh */, SystemZ::VERLLVH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10842 /* vesl */, SystemZ::VESL, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 10847 /* veslb */, SystemZ::VESLB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10853 /* veslf */, SystemZ::VESLF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10859 /* veslg */, SystemZ::VESLG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10865 /* veslh */, SystemZ::VESLH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10871 /* veslv */, SystemZ::VESLV, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10877 /* veslvb */, SystemZ::VESLVB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10884 /* veslvf */, SystemZ::VESLVF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10891 /* veslvg */, SystemZ::VESLVG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10898 /* veslvh */, SystemZ::VESLVH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10905 /* vesra */, SystemZ::VESRA, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 10911 /* vesrab */, SystemZ::VESRAB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10918 /* vesraf */, SystemZ::VESRAF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10925 /* vesrag */, SystemZ::VESRAG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10932 /* vesrah */, SystemZ::VESRAH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10939 /* vesrav */, SystemZ::VESRAV, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10946 /* vesravb */, SystemZ::VESRAVB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10954 /* vesravf */, SystemZ::VESRAVF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10962 /* vesravg */, SystemZ::VESRAVG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10970 /* vesravh */, SystemZ::VESRAVH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10978 /* vesrl */, SystemZ::VESRL, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 10984 /* vesrlb */, SystemZ::VESRLB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10991 /* vesrlf */, SystemZ::VESRLF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10998 /* vesrlg */, SystemZ::VESRLG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 11005 /* vesrlh */, SystemZ::VESRLH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 11012 /* vesrlv */, SystemZ::VESRLV, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11019 /* vesrlvb */, SystemZ::VESRLVB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11027 /* vesrlvf */, SystemZ::VESRLVF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11035 /* vesrlvg */, SystemZ::VESRLVG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11043 /* vesrlvh */, SystemZ::VESRLVH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11051 /* vfa */, SystemZ::VFA, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11055 /* vfadb */, SystemZ::VFADB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11061 /* vfae */, SystemZ::VFAE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11061 /* vfae */, SystemZ::VFAE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11066 /* vfaeb */, SystemZ::VFAEB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11066 /* vfaeb */, SystemZ::VFAEB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11072 /* vfaebs */, SystemZ::VFAEBS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11072 /* vfaebs */, SystemZ::VFAEBS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11079 /* vfaef */, SystemZ::VFAEF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11079 /* vfaef */, SystemZ::VFAEF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11085 /* vfaefs */, SystemZ::VFAEFS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11085 /* vfaefs */, SystemZ::VFAEFS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11092 /* vfaeh */, SystemZ::VFAEH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11092 /* vfaeh */, SystemZ::VFAEH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11098 /* vfaehs */, SystemZ::VFAEHS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11098 /* vfaehs */, SystemZ::VFAEHS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11105 /* vfaezb */, SystemZ::VFAEZB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11105 /* vfaezb */, SystemZ::VFAEZB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11112 /* vfaezbs */, SystemZ::VFAEZBS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11112 /* vfaezbs */, SystemZ::VFAEZBS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11120 /* vfaezf */, SystemZ::VFAEZF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11120 /* vfaezf */, SystemZ::VFAEZF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11127 /* vfaezfs */, SystemZ::VFAEZFS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11127 /* vfaezfs */, SystemZ::VFAEZFS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11135 /* vfaezh */, SystemZ::VFAEZH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11135 /* vfaezh */, SystemZ::VFAEZH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11142 /* vfaezhs */, SystemZ::VFAEZHS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11142 /* vfaezhs */, SystemZ::VFAEZHS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11150 /* vfasb */, SystemZ::VFASB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11156 /* vfce */, SystemZ::VFCE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11161 /* vfcedb */, SystemZ::VFCEDB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11168 /* vfcedbs */, SystemZ::VFCEDBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11176 /* vfcesb */, SystemZ::VFCESB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11183 /* vfcesbs */, SystemZ::VFCESBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11191 /* vfch */, SystemZ::VFCH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11196 /* vfchdb */, SystemZ::VFCHDB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11203 /* vfchdbs */, SystemZ::VFCHDBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11211 /* vfche */, SystemZ::VFCHE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11217 /* vfchedb */, SystemZ::VFCHEDB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11225 /* vfchedbs */, SystemZ::VFCHEDBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11234 /* vfchesb */, SystemZ::VFCHESB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11242 /* vfchesbs */, SystemZ::VFCHESBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11251 /* vfchsb */, SystemZ::VFCHSB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11258 /* vfchsbs */, SystemZ::VFCHSBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11266 /* vfd */, SystemZ::VFD, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11270 /* vfddb */, SystemZ::VFDDB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11276 /* vfdsb */, SystemZ::VFDSB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11282 /* vfee */, SystemZ::VFEE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11282 /* vfee */, SystemZ::VFEE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11287 /* vfeeb */, SystemZ::VFEEB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11287 /* vfeeb */, SystemZ::VFEEB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11293 /* vfeebs */, SystemZ::VFEEBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11300 /* vfeef */, SystemZ::VFEEF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11300 /* vfeef */, SystemZ::VFEEF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11306 /* vfeefs */, SystemZ::VFEEFS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11313 /* vfeeh */, SystemZ::VFEEH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11313 /* vfeeh */, SystemZ::VFEEH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11319 /* vfeehs */, SystemZ::VFEEHS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11326 /* vfeezb */, SystemZ::VFEEZB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11333 /* vfeezbs */, SystemZ::VFEEZBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11341 /* vfeezf */, SystemZ::VFEEZF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11348 /* vfeezfs */, SystemZ::VFEEZFS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11356 /* vfeezh */, SystemZ::VFEEZH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11363 /* vfeezhs */, SystemZ::VFEEZHS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11371 /* vfene */, SystemZ::VFENE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11371 /* vfene */, SystemZ::VFENE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11377 /* vfeneb */, SystemZ::VFENEB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11377 /* vfeneb */, SystemZ::VFENEB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11384 /* vfenebs */, SystemZ::VFENEBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11392 /* vfenef */, SystemZ::VFENEF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11392 /* vfenef */, SystemZ::VFENEF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11399 /* vfenefs */, SystemZ::VFENEFS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11407 /* vfeneh */, SystemZ::VFENEH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11407 /* vfeneh */, SystemZ::VFENEH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11414 /* vfenehs */, SystemZ::VFENEHS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11422 /* vfenezb */, SystemZ::VFENEZB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11430 /* vfenezbs */, SystemZ::VFENEZBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11439 /* vfenezf */, SystemZ::VFENEZF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11447 /* vfenezfs */, SystemZ::VFENEZFS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11456 /* vfenezh */, SystemZ::VFENEZH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11464 /* vfenezhs */, SystemZ::VFENEZHS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11473 /* vfi */, SystemZ::VFI, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11477 /* vfidb */, SystemZ::VFIDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11483 /* vfisb */, SystemZ::VFISB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11489 /* vfkedb */, SystemZ::VFKEDB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11496 /* vfkedbs */, SystemZ::VFKEDBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11504 /* vfkesb */, SystemZ::VFKESB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11511 /* vfkesbs */, SystemZ::VFKESBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11519 /* vfkhdb */, SystemZ::VFKHDB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11526 /* vfkhdbs */, SystemZ::VFKHDBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11534 /* vfkhedb */, SystemZ::VFKHEDB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11542 /* vfkhedbs */, SystemZ::VFKHEDBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11551 /* vfkhesb */, SystemZ::VFKHESB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11559 /* vfkhesbs */, SystemZ::VFKHESBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11568 /* vfkhsb */, SystemZ::VFKHSB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11575 /* vfkhsbs */, SystemZ::VFKHSBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11583 /* vflcdb */, SystemZ::VFLCDB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11590 /* vflcsb */, SystemZ::VFLCSB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 11597 /* vfll */, SystemZ::VFLL, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11602 /* vflls */, SystemZ::VFLLS, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 11608 /* vflndb */, SystemZ::VFLNDB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11615 /* vflnsb */, SystemZ::VFLNSB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 11622 /* vflpdb */, SystemZ::VFLPDB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11629 /* vflpsb */, SystemZ::VFLPSB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 11636 /* vflr */, SystemZ::VFLR, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11641 /* vflrd */, SystemZ::VFLRD, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11647 /* vfm */, SystemZ::VFM, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11651 /* vfma */, SystemZ::VFMA, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11656 /* vfmadb */, SystemZ::VFMADB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11663 /* vfmasb */, SystemZ::VFMASB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11670 /* vfmax */, SystemZ::VFMAX, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11676 /* vfmaxdb */, SystemZ::VFMAXDB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11684 /* vfmaxsb */, SystemZ::VFMAXSB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11692 /* vfmdb */, SystemZ::VFMDB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11698 /* vfmin */, SystemZ::VFMIN, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11704 /* vfmindb */, SystemZ::VFMINDB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11712 /* vfminsb */, SystemZ::VFMINSB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11720 /* vfms */, SystemZ::VFMS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11725 /* vfmsb */, SystemZ::VFMSB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11731 /* vfmsdb */, SystemZ::VFMSDB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11738 /* vfmssb */, SystemZ::VFMSSB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11745 /* vfnma */, SystemZ::VFNMA, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11751 /* vfnmadb */, SystemZ::VFNMADB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11759 /* vfnmasb */, SystemZ::VFNMASB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11767 /* vfnms */, SystemZ::VFNMS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11773 /* vfnmsdb */, SystemZ::VFNMSDB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11781 /* vfnmssb */, SystemZ::VFNMSSB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11789 /* vfpso */, SystemZ::VFPSO, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11795 /* vfpsodb */, SystemZ::VFPSODB, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11803 /* vfpsosb */, SystemZ::VFPSOSB, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11811 /* vfs */, SystemZ::VFS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11815 /* vfsdb */, SystemZ::VFSDB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11821 /* vfsq */, SystemZ::VFSQ, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11826 /* vfsqdb */, SystemZ::VFSQDB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11833 /* vfsqsb */, SystemZ::VFSQSB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 11840 /* vfssb */, SystemZ::VFSSB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11846 /* vftci */, SystemZ::VFTCI, Convert__VR1281_0__VR1281_1__U12Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U12Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11852 /* vftcidb */, SystemZ::VFTCIDB, Convert__VR1281_0__VR1281_1__U12Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U12Imm }, },
  { 11860 /* vftcisb */, SystemZ::VFTCISB, Convert__VR1281_0__VR1281_1__U12Imm1_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U12Imm }, },
  { 11868 /* vgbm */, SystemZ::VGBM, Convert__VR1281_0__U16Imm1_1, AMFBS_FeatureVector, { MCK_VR128, MCK_U16Imm }, },
  { 11873 /* vgef */, SystemZ::VGEF, Convert__VR1281_0__Tie0_1_1__BDVAddr64Disp123_1__U2Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U2Imm }, },
  { 11878 /* vgeg */, SystemZ::VGEG, Convert__VR1281_0__Tie0_1_1__BDVAddr64Disp123_1__U1Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U1Imm }, },
  { 11883 /* vgfm */, SystemZ::VGFM, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11888 /* vgfma */, SystemZ::VGFMA, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11894 /* vgfmab */, SystemZ::VGFMAB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11901 /* vgfmaf */, SystemZ::VGFMAF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11908 /* vgfmag */, SystemZ::VGFMAG, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11915 /* vgfmah */, SystemZ::VGFMAH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11922 /* vgfmb */, SystemZ::VGFMB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11928 /* vgfmf */, SystemZ::VGFMF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11934 /* vgfmg */, SystemZ::VGFMG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11940 /* vgfmh */, SystemZ::VGFMH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11946 /* vgm */, SystemZ::VGM, Convert__VR1281_0__U8Imm1_1__U8Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm, MCK_U4Imm }, },
  { 11950 /* vgmb */, SystemZ::VGMB, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 11955 /* vgmf */, SystemZ::VGMF, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 11960 /* vgmg */, SystemZ::VGMG, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 11965 /* vgmh */, SystemZ::VGMH, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 11970 /* vistr */, SystemZ::VISTR, Convert__VR1281_0__VR1281_1__U4Imm1_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11970 /* vistr */, SystemZ::VISTR, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11976 /* vistrb */, SystemZ::VISTRB, Convert__VR1281_0__VR1281_1__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11976 /* vistrb */, SystemZ::VISTRB, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11983 /* vistrbs */, SystemZ::VISTRBS, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11991 /* vistrf */, SystemZ::VISTRF, Convert__VR1281_0__VR1281_1__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11991 /* vistrf */, SystemZ::VISTRF, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11998 /* vistrfs */, SystemZ::VISTRFS, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12006 /* vistrh */, SystemZ::VISTRH, Convert__VR1281_0__VR1281_1__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12006 /* vistrh */, SystemZ::VISTRH, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12013 /* vistrhs */, SystemZ::VISTRHS, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12021 /* vl */, SystemZ::VL, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12021 /* vl */, SystemZ::VLAlign, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 12024 /* vlbb */, SystemZ::VLBB, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 12029 /* vlbr */, SystemZ::VLBR, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 12034 /* vlbrf */, SystemZ::VLBRF, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12040 /* vlbrg */, SystemZ::VLBRG, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12046 /* vlbrh */, SystemZ::VLBRH, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12052 /* vlbrq */, SystemZ::VLBRQ, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12058 /* vlbrrep */, SystemZ::VLBRREP, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 12066 /* vlbrrepf */, SystemZ::VLBRREPF, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12075 /* vlbrrepg */, SystemZ::VLBRREPG, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12084 /* vlbrreph */, SystemZ::VLBRREPH, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12093 /* vlc */, SystemZ::VLC, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12097 /* vlcb */, SystemZ::VLCB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12102 /* vlcf */, SystemZ::VLCF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12107 /* vlcg */, SystemZ::VLCG, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12112 /* vlch */, SystemZ::VLCH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12117 /* vlde */, SystemZ::VLDE, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 12122 /* vldeb */, SystemZ::VLDEB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12128 /* vleb */, SystemZ::VLEB, Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 12133 /* vlebrf */, SystemZ::VLEBRF, Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U2Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U2Imm }, },
  { 12140 /* vlebrg */, SystemZ::VLEBRG, Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U1Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U1Imm }, },
  { 12147 /* vlebrh */, SystemZ::VLEBRH, Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U3Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U3Imm }, },
  { 12154 /* vled */, SystemZ::VLED, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 12159 /* vledb */, SystemZ::VLEDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 12165 /* vlef */, SystemZ::VLEF, Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U2Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U2Imm }, },
  { 12170 /* vleg */, SystemZ::VLEG, Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U1Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U1Imm }, },
  { 12175 /* vleh */, SystemZ::VLEH, Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U3Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U3Imm }, },
  { 12180 /* vleib */, SystemZ::VLEIB, Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U4Imm }, },
  { 12186 /* vleif */, SystemZ::VLEIF, Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U2Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U2Imm }, },
  { 12192 /* vleig */, SystemZ::VLEIG, Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U1Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U1Imm }, },
  { 12198 /* vleih */, SystemZ::VLEIH, Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U3Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U3Imm }, },
  { 12204 /* vler */, SystemZ::VLER, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 12209 /* vlerf */, SystemZ::VLERF, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12215 /* vlerg */, SystemZ::VLERG, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12221 /* vlerh */, SystemZ::VLERH, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12227 /* vlgv */, SystemZ::VLGV, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 12232 /* vlgvb */, SystemZ::VLGVB, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 12238 /* vlgvf */, SystemZ::VLGVF, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 12244 /* vlgvg */, SystemZ::VLGVG, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 12250 /* vlgvh */, SystemZ::VLGVH, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 12256 /* vlip */, SystemZ::VLIP, Convert__VR1281_0__U16Imm1_1__U4Imm1_2, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_U16Imm, MCK_U4Imm }, },
  { 12261 /* vll */, SystemZ::VLL, Convert__VR1281_0__GR321_1__BDAddr64Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 12265 /* vllebrz */, SystemZ::VLLEBRZ, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 12273 /* vllebrze */, SystemZ::VLLEBRZE, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12282 /* vllebrzf */, SystemZ::VLLEBRZF, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12291 /* vllebrzg */, SystemZ::VLLEBRZG, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12300 /* vllebrzh */, SystemZ::VLLEBRZH, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12309 /* vllez */, SystemZ::VLLEZ, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 12315 /* vllezb */, SystemZ::VLLEZB, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12322 /* vllezf */, SystemZ::VLLEZF, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12329 /* vllezg */, SystemZ::VLLEZG, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12336 /* vllezh */, SystemZ::VLLEZH, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12343 /* vllezlf */, SystemZ::VLLEZLF, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12351 /* vlm */, SystemZ::VLM, Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr64Disp12 }, },
  { 12351 /* vlm */, SystemZ::VLMAlign, Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr64Disp12, MCK_U4Imm }, },
  { 12355 /* vlp */, SystemZ::VLP, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12359 /* vlpb */, SystemZ::VLPB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12364 /* vlpf */, SystemZ::VLPF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12369 /* vlpg */, SystemZ::VLPG, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12374 /* vlph */, SystemZ::VLPH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12379 /* vlr */, SystemZ::VLR, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12383 /* vlrep */, SystemZ::VLREP, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 12389 /* vlrepb */, SystemZ::VLREPB, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12396 /* vlrepf */, SystemZ::VLREPF, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12403 /* vlrepg */, SystemZ::VLREPG, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12410 /* vlreph */, SystemZ::VLREPH, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12417 /* vlrl */, SystemZ::VLRL, Convert__VR1281_0__BDAddr64Disp122_1__U8Imm1_2, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 12422 /* vlrlr */, SystemZ::VLRLR, Convert__VR1281_0__GR321_1__BDAddr64Disp122_2, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 12428 /* vlvg */, SystemZ::VLVG, Convert__VR1281_0__Tie0_1_1__GR641_1__BDAddr32Disp122_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_GR64, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 12433 /* vlvgb */, SystemZ::VLVGB, Convert__VR1281_0__Tie0_1_1__GR321_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 12439 /* vlvgf */, SystemZ::VLVGF, Convert__VR1281_0__Tie0_1_1__GR321_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 12445 /* vlvgg */, SystemZ::VLVGG, Convert__VR1281_0__Tie0_1_1__GR641_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_GR64, MCK_BDAddr32Disp12 }, },
  { 12451 /* vlvgh */, SystemZ::VLVGH, Convert__VR1281_0__Tie0_1_1__GR321_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 12457 /* vlvgp */, SystemZ::VLVGP, Convert__VR1281_0__GR641_1__GR641_2, AMFBS_FeatureVector, { MCK_VR128, MCK_GR64, MCK_GR64 }, },
  { 12463 /* vmae */, SystemZ::VMAE, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12468 /* vmaeb */, SystemZ::VMAEB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12474 /* vmaef */, SystemZ::VMAEF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12480 /* vmaeh */, SystemZ::VMAEH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12486 /* vmah */, SystemZ::VMAH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12491 /* vmahb */, SystemZ::VMAHB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12497 /* vmahf */, SystemZ::VMAHF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12503 /* vmahh */, SystemZ::VMAHH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12509 /* vmal */, SystemZ::VMAL, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12514 /* vmalb */, SystemZ::VMALB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12520 /* vmale */, SystemZ::VMALE, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12526 /* vmaleb */, SystemZ::VMALEB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12533 /* vmalef */, SystemZ::VMALEF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12540 /* vmaleh */, SystemZ::VMALEH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12547 /* vmalf */, SystemZ::VMALF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12553 /* vmalh */, SystemZ::VMALH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12559 /* vmalhb */, SystemZ::VMALHB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12566 /* vmalhf */, SystemZ::VMALHF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12573 /* vmalhh */, SystemZ::VMALHH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12580 /* vmalhw */, SystemZ::VMALHW, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12587 /* vmalo */, SystemZ::VMALO, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12593 /* vmalob */, SystemZ::VMALOB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12600 /* vmalof */, SystemZ::VMALOF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12607 /* vmaloh */, SystemZ::VMALOH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12614 /* vmao */, SystemZ::VMAO, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12619 /* vmaob */, SystemZ::VMAOB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12625 /* vmaof */, SystemZ::VMAOF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12631 /* vmaoh */, SystemZ::VMAOH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12637 /* vme */, SystemZ::VME, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12641 /* vmeb */, SystemZ::VMEB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12646 /* vmef */, SystemZ::VMEF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12651 /* vmeh */, SystemZ::VMEH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12656 /* vmh */, SystemZ::VMH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12660 /* vmhb */, SystemZ::VMHB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12665 /* vmhf */, SystemZ::VMHF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12670 /* vmhh */, SystemZ::VMHH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12675 /* vml */, SystemZ::VML, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12679 /* vmlb */, SystemZ::VMLB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12684 /* vmle */, SystemZ::VMLE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12689 /* vmleb */, SystemZ::VMLEB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12695 /* vmlef */, SystemZ::VMLEF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12701 /* vmleh */, SystemZ::VMLEH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12707 /* vmlf */, SystemZ::VMLF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12712 /* vmlh */, SystemZ::VMLH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12717 /* vmlhb */, SystemZ::VMLHB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12723 /* vmlhf */, SystemZ::VMLHF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12729 /* vmlhh */, SystemZ::VMLHH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12735 /* vmlhw */, SystemZ::VMLHW, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12741 /* vmlo */, SystemZ::VMLO, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12746 /* vmlob */, SystemZ::VMLOB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12752 /* vmlof */, SystemZ::VMLOF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12758 /* vmloh */, SystemZ::VMLOH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12764 /* vmn */, SystemZ::VMN, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12768 /* vmnb */, SystemZ::VMNB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12773 /* vmnf */, SystemZ::VMNF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12778 /* vmng */, SystemZ::VMNG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12783 /* vmnh */, SystemZ::VMNH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12788 /* vmnl */, SystemZ::VMNL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12793 /* vmnlb */, SystemZ::VMNLB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12799 /* vmnlf */, SystemZ::VMNLF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12805 /* vmnlg */, SystemZ::VMNLG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12811 /* vmnlh */, SystemZ::VMNLH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12817 /* vmo */, SystemZ::VMO, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12821 /* vmob */, SystemZ::VMOB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12826 /* vmof */, SystemZ::VMOF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12831 /* vmoh */, SystemZ::VMOH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12836 /* vmp */, SystemZ::VMP, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 12840 /* vmrh */, SystemZ::VMRH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12845 /* vmrhb */, SystemZ::VMRHB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12851 /* vmrhf */, SystemZ::VMRHF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12857 /* vmrhg */, SystemZ::VMRHG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12863 /* vmrhh */, SystemZ::VMRHH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12869 /* vmrl */, SystemZ::VMRL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12874 /* vmrlb */, SystemZ::VMRLB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12880 /* vmrlf */, SystemZ::VMRLF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12886 /* vmrlg */, SystemZ::VMRLG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12892 /* vmrlh */, SystemZ::VMRLH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12898 /* vmsl */, SystemZ::VMSL, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 12903 /* vmslg */, SystemZ::VMSLG, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12909 /* vmsp */, SystemZ::VMSP, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 12914 /* vmx */, SystemZ::VMX, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12918 /* vmxb */, SystemZ::VMXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12923 /* vmxf */, SystemZ::VMXF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12928 /* vmxg */, SystemZ::VMXG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12933 /* vmxh */, SystemZ::VMXH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12938 /* vmxl */, SystemZ::VMXL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12943 /* vmxlb */, SystemZ::VMXLB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12949 /* vmxlf */, SystemZ::VMXLF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12955 /* vmxlg */, SystemZ::VMXLG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12961 /* vmxlh */, SystemZ::VMXLH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12967 /* vn */, SystemZ::VN, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12970 /* vnc */, SystemZ::VNC, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12974 /* vnn */, SystemZ::VNN, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12978 /* vno */, SystemZ::VNO, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12982 /* vnot */, SystemZ::VNO, Convert__VR1281_0__VR1281_1__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12987 /* vnx */, SystemZ::VNX, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12991 /* vo */, SystemZ::VO, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12994 /* voc */, SystemZ::VOC, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12998 /* vone */, SystemZ::VONE, Convert__VR1281_0, AMFBS_FeatureVector, { MCK_VR128 }, },
  { 13003 /* vpdi */, SystemZ::VPDI, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13008 /* vperm */, SystemZ::VPERM, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13014 /* vpk */, SystemZ::VPK, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13018 /* vpkf */, SystemZ::VPKF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13023 /* vpkg */, SystemZ::VPKG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13028 /* vpkh */, SystemZ::VPKH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13033 /* vpkls */, SystemZ::VPKLS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 13039 /* vpklsf */, SystemZ::VPKLSF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13046 /* vpklsfs */, SystemZ::VPKLSFS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13054 /* vpklsg */, SystemZ::VPKLSG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13061 /* vpklsgs */, SystemZ::VPKLSGS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13069 /* vpklsh */, SystemZ::VPKLSH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13076 /* vpklshs */, SystemZ::VPKLSHS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13084 /* vpks */, SystemZ::VPKS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 13089 /* vpksf */, SystemZ::VPKSF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13095 /* vpksfs */, SystemZ::VPKSFS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13102 /* vpksg */, SystemZ::VPKSG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13108 /* vpksgs */, SystemZ::VPKSGS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13115 /* vpksh */, SystemZ::VPKSH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13121 /* vpkshs */, SystemZ::VPKSHS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13128 /* vpkz */, SystemZ::VPKZ, Convert__VR1281_0__BDAddr64Disp122_1__U8Imm1_2, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 13133 /* vpopct */, SystemZ::VPOPCT, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13140 /* vpopctb */, SystemZ::VPOPCTB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 13148 /* vpopctf */, SystemZ::VPOPCTF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 13156 /* vpopctg */, SystemZ::VPOPCTG, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 13164 /* vpopcth */, SystemZ::VPOPCTH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 13172 /* vpsop */, SystemZ::VPSOP, Convert__VR1281_0__VR1281_1__U8Imm1_2__U8Imm1_3__U4Imm1_4, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U8Imm, MCK_U4Imm }, },
  { 13178 /* vrep */, SystemZ::VREP, Convert__VR1281_0__VR1281_1__U16Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm, MCK_U4Imm }, },
  { 13183 /* vrepb */, SystemZ::VREPB, Convert__VR1281_0__VR1281_1__U16Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 13189 /* vrepf */, SystemZ::VREPF, Convert__VR1281_0__VR1281_1__U16Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 13195 /* vrepg */, SystemZ::VREPG, Convert__VR1281_0__VR1281_1__U16Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 13201 /* vreph */, SystemZ::VREPH, Convert__VR1281_0__VR1281_1__U16Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 13207 /* vrepi */, SystemZ::VREPI, Convert__VR1281_0__S16Imm1_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U4Imm }, },
  { 13213 /* vrepib */, SystemZ::VREPIB, Convert__VR1281_0__S16Imm1_1, AMFBS_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 13220 /* vrepif */, SystemZ::VREPIF, Convert__VR1281_0__S16Imm1_1, AMFBS_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 13227 /* vrepig */, SystemZ::VREPIG, Convert__VR1281_0__S16Imm1_1, AMFBS_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 13234 /* vrepih */, SystemZ::VREPIH, Convert__VR1281_0__S16Imm1_1, AMFBS_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 13241 /* vrp */, SystemZ::VRP, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 13245 /* vs */, SystemZ::VS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13248 /* vsb */, SystemZ::VSB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13252 /* vsbcbi */, SystemZ::VSBCBI, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13259 /* vsbcbiq */, SystemZ::VSBCBIQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13267 /* vsbi */, SystemZ::VSBI, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13272 /* vsbiq */, SystemZ::VSBIQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13278 /* vscbi */, SystemZ::VSCBI, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13284 /* vscbib */, SystemZ::VSCBIB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13291 /* vscbif */, SystemZ::VSCBIF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13298 /* vscbig */, SystemZ::VSCBIG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13305 /* vscbih */, SystemZ::VSCBIH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13312 /* vscbiq */, SystemZ::VSCBIQ, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13319 /* vscef */, SystemZ::VSCEF, Convert__VR1281_0__BDVAddr64Disp123_1__U2Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U2Imm }, },
  { 13325 /* vsceg */, SystemZ::VSCEG, Convert__VR1281_0__BDVAddr64Disp123_1__U1Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U1Imm }, },
  { 13331 /* vsdp */, SystemZ::VSDP, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 13336 /* vseg */, SystemZ::VSEG, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13341 /* vsegb */, SystemZ::VSEGB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13347 /* vsegf */, SystemZ::VSEGF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13353 /* vsegh */, SystemZ::VSEGH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13359 /* vsel */, SystemZ::VSEL, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13364 /* vsf */, SystemZ::VSF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13368 /* vsg */, SystemZ::VSG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13372 /* vsh */, SystemZ::VSH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13376 /* vsl */, SystemZ::VSL, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13380 /* vslb */, SystemZ::VSLB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13385 /* vsld */, SystemZ::VSLD, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 13390 /* vsldb */, SystemZ::VSLDB, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 13396 /* vsp */, SystemZ::VSP, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 13400 /* vsq */, SystemZ::VSQ, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13404 /* vsra */, SystemZ::VSRA, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13409 /* vsrab */, SystemZ::VSRAB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13415 /* vsrd */, SystemZ::VSRD, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 13420 /* vsrl */, SystemZ::VSRL, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13425 /* vsrlb */, SystemZ::VSRLB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13431 /* vsrp */, SystemZ::VSRP, Convert__VR1281_0__VR1281_1__U8Imm1_2__U8Imm1_3__U4Imm1_4, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U8Imm, MCK_U4Imm }, },
  { 13436 /* vst */, SystemZ::VST, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 13436 /* vst */, SystemZ::VSTAlign, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 13440 /* vstbr */, SystemZ::VSTBR, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 13446 /* vstbrf */, SystemZ::VSTBRF, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 13453 /* vstbrg */, SystemZ::VSTBRG, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 13460 /* vstbrh */, SystemZ::VSTBRH, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 13467 /* vstbrq */, SystemZ::VSTBRQ, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 13474 /* vsteb */, SystemZ::VSTEB, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 13480 /* vstebrf */, SystemZ::VSTEBRF, Convert__VR1281_0__BDXAddr64Disp123_1__U2Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U2Imm }, },
  { 13488 /* vstebrg */, SystemZ::VSTEBRG, Convert__VR1281_0__BDXAddr64Disp123_1__U1Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U1Imm }, },
  { 13496 /* vstebrh */, SystemZ::VSTEBRH, Convert__VR1281_0__BDXAddr64Disp123_1__U3Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U3Imm }, },
  { 13504 /* vstef */, SystemZ::VSTEF, Convert__VR1281_0__BDXAddr64Disp123_1__U2Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U2Imm }, },
  { 13510 /* vsteg */, SystemZ::VSTEG, Convert__VR1281_0__BDXAddr64Disp123_1__U1Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U1Imm }, },
  { 13516 /* vsteh */, SystemZ::VSTEH, Convert__VR1281_0__BDXAddr64Disp123_1__U3Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U3Imm }, },
  { 13522 /* vster */, SystemZ::VSTER, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 13528 /* vsterf */, SystemZ::VSTERF, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 13535 /* vsterg */, SystemZ::VSTERG, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 13542 /* vsterh */, SystemZ::VSTERH, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 13549 /* vstl */, SystemZ::VSTL, Convert__VR1281_0__GR321_1__BDAddr64Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 13554 /* vstm */, SystemZ::VSTM, Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr64Disp12 }, },
  { 13554 /* vstm */, SystemZ::VSTMAlign, Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr64Disp12, MCK_U4Imm }, },
  { 13559 /* vstrc */, SystemZ::VSTRC, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13559 /* vstrc */, SystemZ::VSTRC, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 13565 /* vstrcb */, SystemZ::VSTRCB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13565 /* vstrcb */, SystemZ::VSTRCB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13572 /* vstrcbs */, SystemZ::VSTRCBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13572 /* vstrcbs */, SystemZ::VSTRCBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13580 /* vstrcf */, SystemZ::VSTRCF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13580 /* vstrcf */, SystemZ::VSTRCF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13587 /* vstrcfs */, SystemZ::VSTRCFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13587 /* vstrcfs */, SystemZ::VSTRCFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13595 /* vstrch */, SystemZ::VSTRCH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13595 /* vstrch */, SystemZ::VSTRCH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13602 /* vstrchs */, SystemZ::VSTRCHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13602 /* vstrchs */, SystemZ::VSTRCHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13610 /* vstrczb */, SystemZ::VSTRCZB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13610 /* vstrczb */, SystemZ::VSTRCZB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13618 /* vstrczbs */, SystemZ::VSTRCZBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13618 /* vstrczbs */, SystemZ::VSTRCZBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13627 /* vstrczf */, SystemZ::VSTRCZF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13627 /* vstrczf */, SystemZ::VSTRCZF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13635 /* vstrczfs */, SystemZ::VSTRCZFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13635 /* vstrczfs */, SystemZ::VSTRCZFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13644 /* vstrczh */, SystemZ::VSTRCZH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13644 /* vstrczh */, SystemZ::VSTRCZH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13652 /* vstrczhs */, SystemZ::VSTRCZHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13652 /* vstrczhs */, SystemZ::VSTRCZHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13661 /* vstrl */, SystemZ::VSTRL, Convert__VR1281_0__BDAddr64Disp122_1__U8Imm1_2, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 13667 /* vstrlr */, SystemZ::VSTRLR, Convert__VR1281_0__GR321_1__BDAddr64Disp122_2, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 13674 /* vstrs */, SystemZ::VSTRS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__imm_95_0, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13674 /* vstrs */, SystemZ::VSTRS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 13680 /* vstrsb */, SystemZ::VSTRSB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13680 /* vstrsb */, SystemZ::VSTRSB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13687 /* vstrsf */, SystemZ::VSTRSF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13687 /* vstrsf */, SystemZ::VSTRSF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13694 /* vstrsh */, SystemZ::VSTRSH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13694 /* vstrsh */, SystemZ::VSTRSH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13701 /* vstrszb */, SystemZ::VSTRSZB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13709 /* vstrszf */, SystemZ::VSTRSZF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13717 /* vstrszh */, SystemZ::VSTRSZH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13725 /* vsum */, SystemZ::VSUM, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13730 /* vsumb */, SystemZ::VSUMB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13736 /* vsumg */, SystemZ::VSUMG, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13742 /* vsumgf */, SystemZ::VSUMGF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13749 /* vsumgh */, SystemZ::VSUMGH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13756 /* vsumh */, SystemZ::VSUMH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13762 /* vsumq */, SystemZ::VSUMQ, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13768 /* vsumqf */, SystemZ::VSUMQF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13775 /* vsumqg */, SystemZ::VSUMQG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13782 /* vtm */, SystemZ::VTM, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13786 /* vtp */, SystemZ::VTP, Convert__VR1281_0, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128 }, },
  { 13790 /* vuph */, SystemZ::VUPH, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13795 /* vuphb */, SystemZ::VUPHB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13801 /* vuphf */, SystemZ::VUPHF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13807 /* vuphh */, SystemZ::VUPHH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13813 /* vupkz */, SystemZ::VUPKZ, Convert__VR1281_0__BDAddr64Disp122_1__U8Imm1_2, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 13819 /* vupl */, SystemZ::VUPL, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13824 /* vuplb */, SystemZ::VUPLB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13830 /* vuplf */, SystemZ::VUPLF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13836 /* vuplh */, SystemZ::VUPLH, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13842 /* vuplhb */, SystemZ::VUPLHB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13849 /* vuplhf */, SystemZ::VUPLHF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13856 /* vuplhh */, SystemZ::VUPLHH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13863 /* vuplhw */, SystemZ::VUPLHW, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13870 /* vupll */, SystemZ::VUPLL, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13876 /* vupllb */, SystemZ::VUPLLB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13883 /* vupllf */, SystemZ::VUPLLF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13890 /* vupllh */, SystemZ::VUPLLH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13897 /* vx */, SystemZ::VX, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13900 /* vzero */, SystemZ::VZERO, Convert__VR1281_0, AMFBS_FeatureVector, { MCK_VR128 }, },
  { 13906 /* wcdgb */, SystemZ::WCDGB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 13912 /* wcdlgb */, SystemZ::WCDLGB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 13919 /* wcefb */, SystemZ::WCEFB, Convert__VR321_0__VR321_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR32, MCK_VR32, MCK_U4Imm, MCK_U4Imm }, },
  { 13925 /* wcelfb */, SystemZ::WCELFB, Convert__VR321_0__VR321_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR32, MCK_VR32, MCK_U4Imm, MCK_U4Imm }, },
  { 13932 /* wcfeb */, SystemZ::WCFEB, Convert__VR321_0__VR321_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR32, MCK_VR32, MCK_U4Imm, MCK_U4Imm }, },
  { 13938 /* wcgdb */, SystemZ::WCGDB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 13944 /* wclfeb */, SystemZ::WCLFEB, Convert__VR321_0__VR321_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR32, MCK_VR32, MCK_U4Imm, MCK_U4Imm }, },
  { 13951 /* wclgdb */, SystemZ::WCLGDB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 13958 /* wfadb */, SystemZ::WFADB, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13964 /* wfasb */, SystemZ::WFASB, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13970 /* wfaxb */, SystemZ::WFAXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13976 /* wfc */, SystemZ::WFC, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 13980 /* wfcdb */, SystemZ::WFCDB, Convert__VR641_0__VR641_1, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 13986 /* wfcedb */, SystemZ::WFCEDB, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13993 /* wfcedbs */, SystemZ::WFCEDBS, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14001 /* wfcesb */, SystemZ::WFCESB, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14008 /* wfcesbs */, SystemZ::WFCESBS, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14016 /* wfcexb */, SystemZ::WFCEXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14023 /* wfcexbs */, SystemZ::WFCEXBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14031 /* wfchdb */, SystemZ::WFCHDB, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14038 /* wfchdbs */, SystemZ::WFCHDBS, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14046 /* wfchedb */, SystemZ::WFCHEDB, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14054 /* wfchedbs */, SystemZ::WFCHEDBS, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14063 /* wfchesb */, SystemZ::WFCHESB, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14071 /* wfchesbs */, SystemZ::WFCHESBS, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14080 /* wfchexb */, SystemZ::WFCHEXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14088 /* wfchexbs */, SystemZ::WFCHEXBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14097 /* wfchsb */, SystemZ::WFCHSB, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14104 /* wfchsbs */, SystemZ::WFCHSBS, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14112 /* wfchxb */, SystemZ::WFCHXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14119 /* wfchxbs */, SystemZ::WFCHXBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14127 /* wfcsb */, SystemZ::WFCSB, Convert__VR321_0__VR321_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32 }, },
  { 14133 /* wfcxb */, SystemZ::WFCXB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 14139 /* wfddb */, SystemZ::WFDDB, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14145 /* wfdsb */, SystemZ::WFDSB, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14151 /* wfdxb */, SystemZ::WFDXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14157 /* wfidb */, SystemZ::WFIDB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 14163 /* wfisb */, SystemZ::WFISB, Convert__VR321_0__VR321_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_U4Imm, MCK_U4Imm }, },
  { 14169 /* wfixb */, SystemZ::WFIXB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 14175 /* wfk */, SystemZ::WFK, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 14179 /* wfkdb */, SystemZ::WFKDB, Convert__VR641_0__VR641_1, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 14185 /* wfkedb */, SystemZ::WFKEDB, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14192 /* wfkedbs */, SystemZ::WFKEDBS, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14200 /* wfkesb */, SystemZ::WFKESB, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14207 /* wfkesbs */, SystemZ::WFKESBS, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14215 /* wfkexb */, SystemZ::WFKEXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14222 /* wfkexbs */, SystemZ::WFKEXBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14230 /* wfkhdb */, SystemZ::WFKHDB, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14237 /* wfkhdbs */, SystemZ::WFKHDBS, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14245 /* wfkhedb */, SystemZ::WFKHEDB, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14253 /* wfkhedbs */, SystemZ::WFKHEDBS, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14262 /* wfkhesb */, SystemZ::WFKHESB, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14270 /* wfkhesbs */, SystemZ::WFKHESBS, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14279 /* wfkhexb */, SystemZ::WFKHEXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14287 /* wfkhexbs */, SystemZ::WFKHEXBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14296 /* wfkhsb */, SystemZ::WFKHSB, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14303 /* wfkhsbs */, SystemZ::WFKHSBS, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14311 /* wfkhxb */, SystemZ::WFKHXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14318 /* wfkhxbs */, SystemZ::WFKHXBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14326 /* wfksb */, SystemZ::WFKSB, Convert__VR321_0__VR321_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32 }, },
  { 14332 /* wfkxb */, SystemZ::WFKXB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 14338 /* wflcdb */, SystemZ::WFLCDB, Convert__VR641_0__VR641_1, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 14345 /* wflcsb */, SystemZ::WFLCSB, Convert__VR321_0__VR321_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32 }, },
  { 14352 /* wflcxb */, SystemZ::WFLCXB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 14359 /* wflld */, SystemZ::WFLLD, Convert__VR1281_0__VR641_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR64 }, },
  { 14365 /* wflls */, SystemZ::WFLLS, Convert__VR641_0__VR321_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR32 }, },
  { 14371 /* wflndb */, SystemZ::WFLNDB, Convert__VR641_0__VR641_1, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 14378 /* wflnsb */, SystemZ::WFLNSB, Convert__VR321_0__VR321_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32 }, },
  { 14385 /* wflnxb */, SystemZ::WFLNXB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 14392 /* wflpdb */, SystemZ::WFLPDB, Convert__VR641_0__VR641_1, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 14399 /* wflpsb */, SystemZ::WFLPSB, Convert__VR321_0__VR321_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32 }, },
  { 14406 /* wflpxb */, SystemZ::WFLPXB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 14413 /* wflrd */, SystemZ::WFLRD, Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 14419 /* wflrx */, SystemZ::WFLRX, Convert__VR641_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 14425 /* wfmadb */, SystemZ::WFMADB, Convert__VR641_0__VR641_1__VR641_2__VR641_3, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14432 /* wfmasb */, SystemZ::WFMASB, Convert__VR321_0__VR321_1__VR321_2__VR321_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14439 /* wfmaxb */, SystemZ::WFMAXB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14446 /* wfmaxdb */, SystemZ::WFMAXDB, Convert__VR641_0__VR641_1__VR641_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_U4Imm }, },
  { 14454 /* wfmaxsb */, SystemZ::WFMAXSB, Convert__VR321_0__VR321_1__VR321_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32, MCK_U4Imm }, },
  { 14462 /* wfmaxxb */, SystemZ::WFMAXXB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 14470 /* wfmdb */, SystemZ::WFMDB, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14476 /* wfmindb */, SystemZ::WFMINDB, Convert__VR641_0__VR641_1__VR641_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_U4Imm }, },
  { 14484 /* wfminsb */, SystemZ::WFMINSB, Convert__VR321_0__VR321_1__VR321_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32, MCK_U4Imm }, },
  { 14492 /* wfminxb */, SystemZ::WFMINXB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 14500 /* wfmsb */, SystemZ::WFMSB, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14506 /* wfmsdb */, SystemZ::WFMSDB, Convert__VR641_0__VR641_1__VR641_2__VR641_3, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14513 /* wfmssb */, SystemZ::WFMSSB, Convert__VR321_0__VR321_1__VR321_2__VR321_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14520 /* wfmsxb */, SystemZ::WFMSXB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14527 /* wfmxb */, SystemZ::WFMXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14533 /* wfnmadb */, SystemZ::WFNMADB, Convert__VR641_0__VR641_1__VR641_2__VR641_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14541 /* wfnmasb */, SystemZ::WFNMASB, Convert__VR321_0__VR321_1__VR321_2__VR321_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14549 /* wfnmaxb */, SystemZ::WFNMAXB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14557 /* wfnmsdb */, SystemZ::WFNMSDB, Convert__VR641_0__VR641_1__VR641_2__VR641_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14565 /* wfnmssb */, SystemZ::WFNMSSB, Convert__VR321_0__VR321_1__VR321_2__VR321_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14573 /* wfnmsxb */, SystemZ::WFNMSXB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14581 /* wfpsodb */, SystemZ::WFPSODB, Convert__VR641_0__VR641_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm }, },
  { 14589 /* wfpsosb */, SystemZ::WFPSOSB, Convert__VR321_0__VR321_1__U4Imm1_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_U4Imm }, },
  { 14597 /* wfpsoxb */, SystemZ::WFPSOXB, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 14605 /* wfsdb */, SystemZ::WFSDB, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14611 /* wfsqdb */, SystemZ::WFSQDB, Convert__VR641_0__VR641_1, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 14618 /* wfsqsb */, SystemZ::WFSQSB, Convert__VR321_0__VR321_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32 }, },
  { 14625 /* wfsqxb */, SystemZ::WFSQXB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 14632 /* wfssb */, SystemZ::WFSSB, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14638 /* wfsxb */, SystemZ::WFSXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14644 /* wftcidb */, SystemZ::WFTCIDB, Convert__VR641_0__VR641_1__U12Imm1_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U12Imm }, },
  { 14652 /* wftcisb */, SystemZ::WFTCISB, Convert__VR321_0__VR321_1__U12Imm1_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_U12Imm }, },
  { 14660 /* wftcixb */, SystemZ::WFTCIXB, Convert__VR1281_0__VR1281_1__U12Imm1_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U12Imm }, },
  { 14668 /* wldeb */, SystemZ::WLDEB, Convert__VR641_0__VR321_1, AMFBS_FeatureVector, { MCK_VR64, MCK_VR32 }, },
  { 14674 /* wledb */, SystemZ::WLEDB, Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR32, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 14680 /* x */, SystemZ::X, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 14682 /* xc */, SystemZ::XC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 14685 /* xg */, SystemZ::XG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 14688 /* xgr */, SystemZ::XGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 14692 /* xgrk */, SystemZ::XGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 14697 /* xi */, SystemZ::XI, Convert__BDAddr64Disp122_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 14700 /* xihf */, SystemZ::XIHF, Convert__GRH321_0__Tie0_1_1__U32Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U32Imm }, },
  { 14705 /* xilf */, SystemZ::XILF, Convert__GR321_0__Tie0_1_1__U32Imm1_1, AMFBS_None, { MCK_GR32, MCK_U32Imm }, },
  { 14710 /* xiy */, SystemZ::XIY, Convert__BDAddr64Disp202_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 14714 /* xr */, SystemZ::XR, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 14717 /* xrk */, SystemZ::XRK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 14721 /* xsch */, SystemZ::XSCH, Convert_NoOperands, AMFBS_None, {  }, },
  { 14726 /* xy */, SystemZ::XY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 14729 /* zap */, SystemZ::ZAP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, AMFBS_None, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
};

#include "llvm/Support/Debug.h"
#include "llvm/Support/Format.h"

unsigned SystemZAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst,
                     uint64_t &ErrorInfo,
                     FeatureBitset &MissingFeatures,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 7) {
    ErrorInfo = 7;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  const FeatureBitset &AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((SystemZOperand&)*Operands[0]).getToken();

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  MissingFeatures.set();
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0ULL;
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  auto MnemonicRange = std::equal_range(Start, End, Mnemonic, LessOpcode());

  DEBUG_WITH_TYPE("asm-matcher", dbgs() << "AsmMatcher: found " <<
  std::distance(MnemonicRange.first, MnemonicRange.second) << 
  " encodings with mnemonic '" << Mnemonic << "'\n");

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    const FeatureBitset &RequiredFeatures = FeatureBitsets[it->RequiredFeaturesIdx];
    bool HasRequiredFeatures =
      (AvailableFeatures & RequiredFeatures) == RequiredFeatures;
    DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Trying to match opcode "
                                          << MII.getName(it->Opcode) << "\n");
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    bool OperandsValid = true;
    for (unsigned FormalIdx = 0, ActualIdx = 1; FormalIdx != 6; ++FormalIdx) {
      auto Formal = static_cast<MatchClassKind>(it->Classes[FormalIdx]);
      DEBUG_WITH_TYPE("asm-matcher",
                      dbgs() << "  Matching formal operand class " << getMatchClassName(Formal)
                             << " against actual operand at index " << ActualIdx);
      if (ActualIdx < Operands.size())
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << " (";
                        Operands[ActualIdx]->print(dbgs()); dbgs() << "): ");
      else
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << ": ");
      if (ActualIdx >= Operands.size()) {
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << "actual operand index out of range ");
        OperandsValid = (Formal == InvalidMatchClass) || isSubclass(Formal, OptionalMatchClass);
        if (!OperandsValid) ErrorInfo = ActualIdx;
        break;
      }
      MCParsedAsmOperand &Actual = *Operands[ActualIdx];
      unsigned Diag = validateOperandClass(Actual, Formal);
      if (Diag == Match_Success) {
        DEBUG_WITH_TYPE("asm-matcher",
                        dbgs() << "match success using generic matcher\n");
        ++ActualIdx;
        continue;
      }
      // If the generic handler indicates an invalid operand
      // failure, check for a special case.
      if (Diag != Match_Success) {
        unsigned TargetDiag = validateTargetOperandClass(Actual, Formal);
        if (TargetDiag == Match_Success) {
          DEBUG_WITH_TYPE("asm-matcher",
                          dbgs() << "match success using target matcher\n");
          ++ActualIdx;
          continue;
        }
        // If the target matcher returned a specific error code use
        // that, else use the one from the generic matcher.
        if (TargetDiag != Match_InvalidOperand && HasRequiredFeatures)
          Diag = TargetDiag;
      }
      // If current formal operand wasn't matched and it is optional
      // then try to match next formal operand
      if (Diag == Match_InvalidOperand && isSubclass(Formal, OptionalMatchClass)) {
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << "ignoring optional operand\n");
        continue;
      }
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= ActualIdx)) {
        if (HasRequiredFeatures && (ErrorInfo != ActualIdx || Diag != Match_InvalidOperand))
          RetCode = Diag;
        ErrorInfo = ActualIdx;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) {
      DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Opcode result: multiple "
                                               "operand mismatches, ignoring "
                                               "this opcode\n");
      continue;
    }
    if (!HasRequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      FeatureBitset NewMissingFeatures = RequiredFeatures & ~AvailableFeatures;
      DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Missing target features:";
                       for (unsigned I = 0, E = NewMissingFeatures.size(); I != E; ++I)
                         if (NewMissingFeatures[I])
                           dbgs() << ' ' << I;
                       dbgs() << "\n");
      if (NewMissingFeatures.count() <=
          MissingFeatures.count())
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    Inst.clear();

    Inst.setOpcode(it->Opcode);
    // We have a potential match but have not rendered the operands.
    // Check the target predicate to handle any context sensitive
    // constraints.
    // For example, Ties that are referenced multiple times must be
    // checked here to ensure the input is the same for each match
    // constraints. If we leave it any later the ties will have been
    // canonicalized
    unsigned MatchResult;
    if ((MatchResult = checkEarlyTargetMatchPredicate(Inst, Operands)) != Match_Success) {
      Inst.clear();
      DEBUG_WITH_TYPE(
          "asm-matcher",
          dbgs() << "Early target match predicate failed with diag code "
                 << MatchResult << "\n");
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    if (matchingInlineAsm) {
      convertToMapAndConstraints(it->ConvertFn, Operands);
      if (!checkAsmTiedOperandConstraints(*this, it->ConvertFn, Operands, ErrorInfo))
        return Match_InvalidTiedOperand;

      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      DEBUG_WITH_TYPE("asm-matcher",
                      dbgs() << "Target match predicate failed with diag code "
                             << MatchResult << "\n");
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    if (!checkAsmTiedOperandConstraints(*this, it->ConvertFn, Operands, ErrorInfo))
      return Match_InvalidTiedOperand;

    DEBUG_WITH_TYPE(
        "asm-matcher",
        dbgs() << "Opcode result: complete match, selecting this opcode\n");
    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  ErrorInfo = 0;
  return Match_MissingFeature;
}

namespace {
  struct OperandMatchEntry {
    uint16_t Mnemonic;
    uint8_t OperandMask;
    uint8_t Class;
    uint8_t RequiredFeaturesIdx;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcodeOperand {
    bool operator()(const OperandMatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic()  < RHS;
    }
    bool operator()(StringRef LHS, const OperandMatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const OperandMatchEntry &LHS, const OperandMatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace

static const OperandMatchEntry OperandMatchTable[3564] = {
  /* Operand List Mnemonic, Mask, Operand Class, Features */
  { 0 /* a */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 0 /* a */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2 /* ad */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 2 /* ad */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 5 /* adb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 5 /* adb */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 9 /* adbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 14 /* adr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 18 /* adtr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 23 /* adtra */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 29 /* ae */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 29 /* ae */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 32 /* aeb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 32 /* aeb */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 36 /* aebr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 41 /* aer */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 45 /* afi */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 49 /* ag */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 49 /* ag */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 52 /* agf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 52 /* agf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 56 /* agfi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 61 /* agfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 61 /* agfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 66 /* agh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 66 /* agh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions2 },
  { 70 /* aghi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 75 /* aghik */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureDistinctOps },
  { 81 /* agr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 85 /* agrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureDistinctOps },
  { 90 /* agsi */, 1 /* 0 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 95 /* ah */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 95 /* ah */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 98 /* ahhhr */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 104 /* ahhlr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureHighWord },
  { 104 /* ahhlr */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 110 /* ahi */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 114 /* ahik */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 119 /* ahy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 119 /* ahy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 123 /* aih */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 127 /* al */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 127 /* al */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 130 /* alc */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 130 /* alc */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 134 /* alcg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 134 /* alcg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 139 /* alcgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 145 /* alcr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 150 /* alfi */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 155 /* alg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 155 /* alg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 159 /* algf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 159 /* algf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 164 /* algfi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 170 /* algfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 170 /* algfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 176 /* alghsik */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureDistinctOps },
  { 184 /* algr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 189 /* algrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureDistinctOps },
  { 195 /* algsi */, 1 /* 0 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 201 /* alhhhr */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 208 /* alhhlr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureHighWord },
  { 208 /* alhhlr */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 215 /* alhsik */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 222 /* alr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 226 /* alrk */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 231 /* alsi */, 1 /* 0 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 236 /* alsih */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 242 /* alsihn */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 249 /* aly */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 249 /* aly */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 253 /* ap */, 3 /* 0, 1 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
  { 256 /* ar */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 259 /* ark */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 263 /* asi */, 1 /* 0 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 267 /* au */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 267 /* au */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 270 /* aur */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 274 /* aw */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 274 /* aw */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 277 /* awr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 281 /* axbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 286 /* axr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 290 /* axtr */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_None },
  { 295 /* axtra */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 301 /* ay */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 301 /* ay */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 304 /* b */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 306 /* bakr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 311 /* bal */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 311 /* bal */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 315 /* balr */, 2 /* 1 */, MCK_ADDR64, AMFBS_None },
  { 315 /* balr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 320 /* bas */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 320 /* bas */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 324 /* basr */, 2 /* 1 */, MCK_ADDR64, AMFBS_None },
  { 324 /* basr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 329 /* bassm */, 2 /* 1 */, MCK_ADDR64, AMFBS_None },
  { 329 /* bassm */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 335 /* bc */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 338 /* bcr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 342 /* bct */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 342 /* bct */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 346 /* bctg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 346 /* bctg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 351 /* bctgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 357 /* bctr */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 357 /* bctr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 362 /* be */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 365 /* ber */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 369 /* bh */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 372 /* bhe */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 376 /* bher */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 381 /* bhr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 385 /* bi */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 388 /* bic */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 392 /* bie */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 396 /* bih */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 400 /* bihe */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 405 /* bil */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 409 /* bile */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 414 /* bilh */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 419 /* bim */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 423 /* bine */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 428 /* binh */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 433 /* binhe */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 439 /* binl */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 444 /* binle */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 450 /* binlh */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 456 /* binm */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 461 /* bino */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 466 /* binp */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 471 /* binz */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 476 /* bio */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 480 /* bip */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 484 /* biz */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 488 /* bl */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 491 /* ble */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 495 /* bler */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 500 /* blh */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 504 /* blhr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 509 /* blr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 513 /* bm */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 516 /* bmr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 520 /* bne */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 524 /* bner */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 529 /* bnh */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 533 /* bnhe */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 538 /* bnher */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 544 /* bnhr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 549 /* bnl */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 553 /* bnle */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 558 /* bnler */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 564 /* bnlh */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 569 /* bnlhr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 575 /* bnlr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 580 /* bnm */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 584 /* bnmr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 589 /* bno */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 593 /* bnor */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 598 /* bnp */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 602 /* bnpr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 607 /* bnz */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 611 /* bnzr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 616 /* bo */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 619 /* bor */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 623 /* bp */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 626 /* bpp */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_FeatureExecutionHint },
  { 626 /* bpp */, 2 /* 1 */, MCK_PCRel16, AMFBS_FeatureExecutionHint },
  { 630 /* bpr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 634 /* bprp */, 2 /* 1 */, MCK_PCRel12, AMFBS_FeatureExecutionHint },
  { 634 /* bprp */, 4 /* 2 */, MCK_PCRel24, AMFBS_FeatureExecutionHint },
  { 639 /* br */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 642 /* bras */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 642 /* bras */, 2 /* 1 */, MCK_PCRelTLS16, AMFBS_None },
  { 647 /* brasl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 647 /* brasl */, 2 /* 1 */, MCK_PCRelTLS32, AMFBS_None },
  { 653 /* brc */, 2 /* 1 */, MCK_PCRel16, AMFBS_None },
  { 657 /* brcl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 662 /* brct */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 662 /* brct */, 2 /* 1 */, MCK_PCRel16, AMFBS_None },
  { 667 /* brctg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 667 /* brctg */, 2 /* 1 */, MCK_PCRel16, AMFBS_None },
  { 673 /* brcth */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 673 /* brcth */, 2 /* 1 */, MCK_PCRel32, AMFBS_FeatureHighWord },
  { 679 /* brxh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 679 /* brxh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 684 /* brxhg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 684 /* brxhg */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 690 /* brxle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 690 /* brxle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 696 /* brxlg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 696 /* brxlg */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 702 /* bsa */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 706 /* bsg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 710 /* bsm */, 2 /* 1 */, MCK_ADDR64, AMFBS_None },
  { 710 /* bsm */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 714 /* bxh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 714 /* bxh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 718 /* bxhg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 718 /* bxhg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 723 /* bxle */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 723 /* bxle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 728 /* bxleg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 728 /* bxleg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 734 /* bz */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 737 /* bzr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 741 /* c */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 741 /* c */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 743 /* cd */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 743 /* cd */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 746 /* cdb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 746 /* cdb */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 750 /* cdbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 755 /* cdfbr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 755 /* cdfbr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 761 /* cdfbra */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 761 /* cdfbra */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 768 /* cdfr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 768 /* cdfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 773 /* cdftr */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 773 /* cdftr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 779 /* cdgbr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 779 /* cdgbr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 785 /* cdgbra */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 785 /* cdgbra */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 792 /* cdgr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 792 /* cdgr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 797 /* cdgtr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 797 /* cdgtr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 803 /* cdgtra */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 803 /* cdgtra */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 810 /* cdlfbr */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 810 /* cdlfbr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 817 /* cdlftr */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 817 /* cdlftr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 824 /* cdlgbr */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 824 /* cdlgbr */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 831 /* cdlgtr */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 831 /* cdlgtr */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 838 /* cdpt */, 2 /* 1 */, MCK_BDLAddr64Disp12Len8, AMFBS_FeatureDFPPackedConversion },
  { 838 /* cdpt */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureDFPPackedConversion },
  { 843 /* cdr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 847 /* cds */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 847 /* cds */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 851 /* cdsg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 851 /* cdsg */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 856 /* cdstr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 856 /* cdstr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 862 /* cdsy */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 862 /* cdsy */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 867 /* cdtr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 872 /* cdutr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 872 /* cdutr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 878 /* cdzt */, 2 /* 1 */, MCK_BDLAddr64Disp12Len8, AMFBS_FeatureDFPZonedConversion },
  { 878 /* cdzt */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureDFPZonedConversion },
  { 883 /* ce */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 883 /* ce */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 886 /* ceb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 886 /* ceb */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 890 /* cebr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 895 /* cedtr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 901 /* cefbr */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 901 /* cefbr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 907 /* cefbra */, 1 /* 0 */, MCK_FP32, AMFBS_FeatureFPExtension },
  { 907 /* cefbra */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 914 /* cefr */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 914 /* cefr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 919 /* cegbr */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 919 /* cegbr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 925 /* cegbra */, 1 /* 0 */, MCK_FP32, AMFBS_FeatureFPExtension },
  { 925 /* cegbra */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 932 /* cegr */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 932 /* cegr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 937 /* celfbr */, 1 /* 0 */, MCK_FP32, AMFBS_FeatureFPExtension },
  { 937 /* celfbr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 944 /* celgbr */, 1 /* 0 */, MCK_FP32, AMFBS_FeatureFPExtension },
  { 944 /* celgbr */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 951 /* cer */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 955 /* cextr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 961 /* cfc */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 965 /* cfdbr */, 4 /* 2 */, MCK_FP64, AMFBS_None },
  { 965 /* cfdbr */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 971 /* cfdbra */, 4 /* 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 971 /* cfdbra */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 978 /* cfdr */, 4 /* 2 */, MCK_FP64, AMFBS_None },
  { 978 /* cfdr */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 983 /* cfdtr */, 4 /* 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 983 /* cfdtr */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 989 /* cfebr */, 4 /* 2 */, MCK_FP32, AMFBS_None },
  { 989 /* cfebr */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 995 /* cfebra */, 4 /* 2 */, MCK_FP32, AMFBS_FeatureFPExtension },
  { 995 /* cfebra */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 1002 /* cfer */, 4 /* 2 */, MCK_FP32, AMFBS_None },
  { 1002 /* cfer */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1007 /* cfi */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1011 /* cfxbr */, 4 /* 2 */, MCK_FP128, AMFBS_None },
  { 1011 /* cfxbr */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1017 /* cfxbra */, 4 /* 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 1017 /* cfxbra */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 1024 /* cfxr */, 4 /* 2 */, MCK_FP128, AMFBS_None },
  { 1024 /* cfxr */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1029 /* cfxtr */, 4 /* 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 1029 /* cfxtr */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 1035 /* cg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 1035 /* cg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1038 /* cgdbr */, 4 /* 2 */, MCK_FP64, AMFBS_None },
  { 1038 /* cgdbr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1044 /* cgdbra */, 4 /* 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 1044 /* cgdbra */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 1051 /* cgdr */, 4 /* 2 */, MCK_FP64, AMFBS_None },
  { 1051 /* cgdr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1056 /* cgdtr */, 4 /* 2 */, MCK_FP64, AMFBS_None },
  { 1056 /* cgdtr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1062 /* cgdtra */, 4 /* 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 1062 /* cgdtra */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 1069 /* cgebr */, 4 /* 2 */, MCK_FP32, AMFBS_None },
  { 1069 /* cgebr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1075 /* cgebra */, 4 /* 2 */, MCK_FP32, AMFBS_FeatureFPExtension },
  { 1075 /* cgebra */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 1082 /* cger */, 4 /* 2 */, MCK_FP32, AMFBS_None },
  { 1082 /* cger */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1087 /* cgf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 1087 /* cgf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1091 /* cgfi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1096 /* cgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 1096 /* cgfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1101 /* cgfrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1101 /* cgfrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 1107 /* cgh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 1107 /* cgh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1111 /* cghi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1116 /* cghrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1116 /* cghrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 1122 /* cghsi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1128 /* cgib */, 8 /* 3 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1128 /* cgib */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1133 /* cgibe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1133 /* cgibe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1139 /* cgibh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1139 /* cgibh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1145 /* cgibhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1145 /* cgibhe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1152 /* cgibl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1152 /* cgibl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1158 /* cgible */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1158 /* cgible */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1165 /* cgiblh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1165 /* cgiblh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1172 /* cgibne */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1172 /* cgibne */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1179 /* cgibnh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1179 /* cgibnh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1186 /* cgibnhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1186 /* cgibnhe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1194 /* cgibnl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1194 /* cgibnl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1201 /* cgibnle */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1201 /* cgibnle */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1209 /* cgibnlh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1209 /* cgibnlh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1217 /* cgij */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1217 /* cgij */, 8 /* 3 */, MCK_PCRel16, AMFBS_None },
  { 1222 /* cgije */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1222 /* cgije */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1228 /* cgijh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1228 /* cgijh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1234 /* cgijhe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1234 /* cgijhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1241 /* cgijl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1241 /* cgijl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1247 /* cgijle */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1247 /* cgijle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1254 /* cgijlh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1254 /* cgijlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1261 /* cgijne */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1261 /* cgijne */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1268 /* cgijnh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1268 /* cgijnh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1275 /* cgijnhe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1275 /* cgijnhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1283 /* cgijnl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1283 /* cgijnl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1290 /* cgijnle */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1290 /* cgijnle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1298 /* cgijnlh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1298 /* cgijnlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1306 /* cgit */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1311 /* cgite */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1317 /* cgith */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1323 /* cgithe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1330 /* cgitl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1336 /* cgitle */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1343 /* cgitlh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1350 /* cgitne */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1357 /* cgitnh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1364 /* cgitnhe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1372 /* cgitnl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1379 /* cgitnle */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1387 /* cgitnlh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1395 /* cgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1399 /* cgrb */, 8 /* 3 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1399 /* cgrb */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1404 /* cgrbe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1404 /* cgrbe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1410 /* cgrbh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1410 /* cgrbh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1416 /* cgrbhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1416 /* cgrbhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1423 /* cgrbl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1423 /* cgrbl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1429 /* cgrble */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1429 /* cgrble */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1436 /* cgrblh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1436 /* cgrblh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1443 /* cgrbne */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1443 /* cgrbne */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1450 /* cgrbnh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1450 /* cgrbnh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1457 /* cgrbnhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1457 /* cgrbnhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1465 /* cgrbnl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1465 /* cgrbnl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1472 /* cgrbnle */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1472 /* cgrbnle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1480 /* cgrbnlh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1480 /* cgrbnlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1488 /* cgrj */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1488 /* cgrj */, 8 /* 3 */, MCK_PCRel16, AMFBS_None },
  { 1493 /* cgrje */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1493 /* cgrje */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1499 /* cgrjh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1499 /* cgrjh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1505 /* cgrjhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1505 /* cgrjhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1512 /* cgrjl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1512 /* cgrjl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1518 /* cgrjle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1518 /* cgrjle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1525 /* cgrjlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1525 /* cgrjlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1532 /* cgrjne */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1532 /* cgrjne */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1539 /* cgrjnh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1539 /* cgrjnh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1546 /* cgrjnhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1546 /* cgrjnhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1554 /* cgrjnl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1554 /* cgrjnl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1561 /* cgrjnle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1561 /* cgrjnle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1569 /* cgrjnlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1569 /* cgrjnlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1577 /* cgrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1577 /* cgrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 1582 /* cgrt */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1587 /* cgrte */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1593 /* cgrth */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1599 /* cgrthe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1606 /* cgrtl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1612 /* cgrtle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1619 /* cgrtlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1626 /* cgrtne */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1633 /* cgrtnh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1640 /* cgrtnhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1648 /* cgrtnl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1655 /* cgrtnle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1663 /* cgrtnlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1671 /* cgxbr */, 4 /* 2 */, MCK_FP128, AMFBS_None },
  { 1671 /* cgxbr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1677 /* cgxbra */, 4 /* 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 1677 /* cgxbra */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 1684 /* cgxr */, 4 /* 2 */, MCK_FP128, AMFBS_None },
  { 1684 /* cgxr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1689 /* cgxtr */, 4 /* 2 */, MCK_FP128, AMFBS_None },
  { 1689 /* cgxtr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1695 /* cgxtra */, 4 /* 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 1695 /* cgxtra */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 1702 /* ch */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 1702 /* ch */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1705 /* chf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureHighWord },
  { 1705 /* chf */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 1709 /* chhr */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 1714 /* chhsi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1720 /* chi */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1724 /* chlr */, 2 /* 1 */, MCK_GR32, AMFBS_FeatureHighWord },
  { 1724 /* chlr */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 1729 /* chrl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1729 /* chrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 1734 /* chsi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1739 /* chy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 1739 /* chy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1743 /* cib */, 8 /* 3 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1743 /* cib */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1747 /* cibe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1747 /* cibe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1752 /* cibh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1752 /* cibh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1757 /* cibhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1757 /* cibhe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1763 /* cibl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1763 /* cibl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1768 /* cible */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1768 /* cible */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1774 /* ciblh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1774 /* ciblh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1780 /* cibne */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1780 /* cibne */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1786 /* cibnh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1786 /* cibnh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1792 /* cibnhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1792 /* cibnhe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1799 /* cibnl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1799 /* cibnl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1805 /* cibnle */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1805 /* cibnle */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1812 /* cibnlh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1812 /* cibnlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1819 /* cih */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 1823 /* cij */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1823 /* cij */, 8 /* 3 */, MCK_PCRel16, AMFBS_None },
  { 1827 /* cije */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1827 /* cije */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1832 /* cijh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1832 /* cijh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1837 /* cijhe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1837 /* cijhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1843 /* cijl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1843 /* cijl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1848 /* cijle */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1848 /* cijle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1854 /* cijlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1854 /* cijlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1860 /* cijne */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1860 /* cijne */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1866 /* cijnh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1866 /* cijnh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1872 /* cijnhe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1872 /* cijnhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1879 /* cijnl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1879 /* cijnl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1885 /* cijnle */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1885 /* cijnle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1892 /* cijnlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1892 /* cijnlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1899 /* cit */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1903 /* cite */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1908 /* cith */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1913 /* cithe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1919 /* citl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1924 /* citle */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1930 /* citlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1936 /* citne */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1942 /* citnh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1948 /* citnhe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1955 /* citnl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1961 /* citnle */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1968 /* citnlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1975 /* cksm */, 2 /* 1 */, MCK_GR128, AMFBS_None },
  { 1975 /* cksm */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1980 /* cl */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 1980 /* cl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1983 /* clc */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1983 /* clc */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 1987 /* clcl */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 1992 /* clcle */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 1992 /* clcle */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 1998 /* clclu */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_None },
  { 1998 /* clclu */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 2004 /* clfdbr */, 4 /* 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 2004 /* clfdbr */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 2011 /* clfdtr */, 4 /* 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 2011 /* clfdtr */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 2018 /* clfebr */, 4 /* 2 */, MCK_FP32, AMFBS_FeatureFPExtension },
  { 2018 /* clfebr */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 2025 /* clfhsi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2032 /* clfi */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2037 /* clfit */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2043 /* clfite */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2050 /* clfith */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2057 /* clfithe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2065 /* clfitl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2072 /* clfitle */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2080 /* clfitlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2088 /* clfitne */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2096 /* clfitnh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2104 /* clfitnhe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2113 /* clfitnl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2121 /* clfitnle */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2130 /* clfitnlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2139 /* clfxbr */, 4 /* 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 2139 /* clfxbr */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 2146 /* clfxtr */, 4 /* 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 2146 /* clfxtr */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 2153 /* clg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 2153 /* clg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2157 /* clgdbr */, 4 /* 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 2157 /* clgdbr */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 2164 /* clgdtr */, 4 /* 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 2164 /* clgdtr */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 2171 /* clgebr */, 4 /* 2 */, MCK_FP32, AMFBS_FeatureFPExtension },
  { 2171 /* clgebr */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 2178 /* clgf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 2178 /* clgf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2183 /* clgfi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2189 /* clgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 2189 /* clgfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2195 /* clgfrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2195 /* clgfrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 2202 /* clghrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2202 /* clghrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 2209 /* clghsi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2216 /* clgib */, 8 /* 3 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2216 /* clgib */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2222 /* clgibe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2222 /* clgibe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2229 /* clgibh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2229 /* clgibh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2236 /* clgibhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2236 /* clgibhe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2244 /* clgibl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2244 /* clgibl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2251 /* clgible */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2251 /* clgible */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2259 /* clgiblh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2259 /* clgiblh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2267 /* clgibne */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2267 /* clgibne */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2275 /* clgibnh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2275 /* clgibnh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2283 /* clgibnhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2283 /* clgibnhe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2292 /* clgibnl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2292 /* clgibnl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2300 /* clgibnle */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2300 /* clgibnle */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2309 /* clgibnlh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2309 /* clgibnlh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2318 /* clgij */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2318 /* clgij */, 8 /* 3 */, MCK_PCRel16, AMFBS_None },
  { 2324 /* clgije */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2324 /* clgije */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2331 /* clgijh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2331 /* clgijh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2338 /* clgijhe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2338 /* clgijhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2346 /* clgijl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2346 /* clgijl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2353 /* clgijle */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2353 /* clgijle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2361 /* clgijlh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2361 /* clgijlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2369 /* clgijne */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2369 /* clgijne */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2377 /* clgijnh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2377 /* clgijnh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2385 /* clgijnhe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2385 /* clgijnhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2394 /* clgijnl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2394 /* clgijnl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2402 /* clgijnle */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2402 /* clgijnle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2411 /* clgijnlh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2411 /* clgijnlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2420 /* clgit */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2426 /* clgite */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2433 /* clgith */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2440 /* clgithe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2448 /* clgitl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2455 /* clgitle */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2463 /* clgitlh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2471 /* clgitne */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2479 /* clgitnh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2487 /* clgitnhe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2496 /* clgitnl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2504 /* clgitnle */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2513 /* clgitnlh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2522 /* clgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2527 /* clgrb */, 8 /* 3 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2527 /* clgrb */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2533 /* clgrbe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2533 /* clgrbe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2540 /* clgrbh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2540 /* clgrbh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2547 /* clgrbhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2547 /* clgrbhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2555 /* clgrbl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2555 /* clgrbl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2562 /* clgrble */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2562 /* clgrble */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2570 /* clgrblh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2570 /* clgrblh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2578 /* clgrbne */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2578 /* clgrbne */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2586 /* clgrbnh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2586 /* clgrbnh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2594 /* clgrbnhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2594 /* clgrbnhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2603 /* clgrbnl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2603 /* clgrbnl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2611 /* clgrbnle */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2611 /* clgrbnle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2620 /* clgrbnlh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2620 /* clgrbnlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2629 /* clgrj */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2629 /* clgrj */, 8 /* 3 */, MCK_PCRel16, AMFBS_None },
  { 2635 /* clgrje */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2635 /* clgrje */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2642 /* clgrjh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2642 /* clgrjh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2649 /* clgrjhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2649 /* clgrjhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2657 /* clgrjl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2657 /* clgrjl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2664 /* clgrjle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2664 /* clgrjle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2672 /* clgrjlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2672 /* clgrjlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2680 /* clgrjne */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2680 /* clgrjne */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2688 /* clgrjnh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2688 /* clgrjnh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2696 /* clgrjnhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2696 /* clgrjnhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2705 /* clgrjnl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2705 /* clgrjnl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2713 /* clgrjnle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2713 /* clgrjnle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2722 /* clgrjnlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2722 /* clgrjnlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2731 /* clgrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2731 /* clgrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 2737 /* clgrt */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2743 /* clgrte */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2750 /* clgrth */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2757 /* clgrthe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2765 /* clgrtl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2772 /* clgrtle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2780 /* clgrtlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2788 /* clgrtne */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2796 /* clgrtnh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2804 /* clgrtnhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2813 /* clgrtnl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2821 /* clgrtnle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2830 /* clgrtnlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2839 /* clgt */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2839 /* clgt */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2844 /* clgte */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2844 /* clgte */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2850 /* clgth */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2850 /* clgth */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2856 /* clgthe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2856 /* clgthe */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2863 /* clgtl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2863 /* clgtl */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2869 /* clgtle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2869 /* clgtle */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2876 /* clgtlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2876 /* clgtlh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2883 /* clgtne */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2883 /* clgtne */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2890 /* clgtnh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2890 /* clgtnh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2897 /* clgtnhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2897 /* clgtnhe */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2905 /* clgtnl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2905 /* clgtnl */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2912 /* clgtnle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2912 /* clgtnle */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2920 /* clgtnlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2920 /* clgtnlh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2928 /* clgxbr */, 4 /* 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 2928 /* clgxbr */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 2935 /* clgxtr */, 4 /* 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 2935 /* clgxtr */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 2942 /* clhf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureHighWord },
  { 2942 /* clhf */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 2947 /* clhhr */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 2953 /* clhhsi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2960 /* clhlr */, 2 /* 1 */, MCK_GR32, AMFBS_FeatureHighWord },
  { 2960 /* clhlr */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 2966 /* clhrl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2966 /* clhrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 2972 /* cli */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2976 /* clib */, 8 /* 3 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2976 /* clib */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2981 /* clibe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2981 /* clibe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2987 /* clibh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2987 /* clibh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2993 /* clibhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2993 /* clibhe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3000 /* clibl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3000 /* clibl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3006 /* clible */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3006 /* clible */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3013 /* cliblh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3013 /* cliblh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3020 /* clibne */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3020 /* clibne */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3027 /* clibnh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3027 /* clibnh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3034 /* clibnhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3034 /* clibnhe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3042 /* clibnl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3042 /* clibnl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3049 /* clibnle */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3049 /* clibnle */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3057 /* clibnlh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3057 /* clibnlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3065 /* clih */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 3070 /* clij */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3070 /* clij */, 8 /* 3 */, MCK_PCRel16, AMFBS_None },
  { 3075 /* clije */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3075 /* clije */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3081 /* clijh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3081 /* clijh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3087 /* clijhe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3087 /* clijhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3094 /* clijl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3094 /* clijl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3100 /* clijle */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3100 /* clijle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3107 /* clijlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3107 /* clijlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3114 /* clijne */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3114 /* clijne */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3121 /* clijnh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3121 /* clijnh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3128 /* clijnhe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3128 /* clijnhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3136 /* clijnl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3136 /* clijnl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3143 /* clijnle */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3143 /* clijnle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3151 /* clijnlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3151 /* clijnlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3159 /* cliy */, 1 /* 0 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 3164 /* clm */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3164 /* clm */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3168 /* clmh */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 3168 /* clmh */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 3173 /* clmy */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 3173 /* clmy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3178 /* clr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3182 /* clrb */, 8 /* 3 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3182 /* clrb */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3187 /* clrbe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3187 /* clrbe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3193 /* clrbh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3193 /* clrbh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3199 /* clrbhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3199 /* clrbhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3206 /* clrbl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3206 /* clrbl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3212 /* clrble */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3212 /* clrble */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3219 /* clrblh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3219 /* clrblh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3226 /* clrbne */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3226 /* clrbne */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3233 /* clrbnh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3233 /* clrbnh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3240 /* clrbnhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3240 /* clrbnhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3248 /* clrbnl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3248 /* clrbnl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3255 /* clrbnle */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3255 /* clrbnle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3263 /* clrbnlh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3263 /* clrbnlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3271 /* clrj */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3271 /* clrj */, 8 /* 3 */, MCK_PCRel16, AMFBS_None },
  { 3276 /* clrje */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3276 /* clrje */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3282 /* clrjh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3282 /* clrjh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3288 /* clrjhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3288 /* clrjhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3295 /* clrjl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3295 /* clrjl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3301 /* clrjle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3301 /* clrjle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3308 /* clrjlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3308 /* clrjlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3315 /* clrjne */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3315 /* clrjne */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3322 /* clrjnh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3322 /* clrjnh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3329 /* clrjnhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3329 /* clrjnhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3337 /* clrjnl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3337 /* clrjnl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3344 /* clrjnle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3344 /* clrjnle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3352 /* clrjnlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3352 /* clrjnlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3360 /* clrl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3360 /* clrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 3365 /* clrt */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3370 /* clrte */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3376 /* clrth */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3382 /* clrthe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3389 /* clrtl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3395 /* clrtle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3402 /* clrtlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3409 /* clrtne */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3416 /* clrtnh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3423 /* clrtnhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3431 /* clrtnl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3438 /* clrtnle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3446 /* clrtnlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3454 /* clst */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 3459 /* clt */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3459 /* clt */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3463 /* clte */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3463 /* clte */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3468 /* clth */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3468 /* clth */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3473 /* clthe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3473 /* clthe */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3479 /* cltl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3479 /* cltl */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3484 /* cltle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3484 /* cltle */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3490 /* cltlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3490 /* cltlh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3496 /* cltne */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3496 /* cltne */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3502 /* cltnh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3502 /* cltnh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3508 /* cltnhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3508 /* cltnhe */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3515 /* cltnl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3515 /* cltnl */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3521 /* cltnle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3521 /* cltnle */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3528 /* cltnlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3528 /* cltnlh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3535 /* cly */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 3535 /* cly */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3539 /* cmpsc */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3545 /* cp */, 3 /* 0, 1 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
  { 3548 /* cpdt */, 2 /* 1 */, MCK_BDLAddr64Disp12Len8, AMFBS_FeatureDFPPackedConversion },
  { 3548 /* cpdt */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureDFPPackedConversion },
  { 3553 /* cpsdr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 3559 /* cpxt */, 2 /* 1 */, MCK_BDLAddr64Disp12Len8, AMFBS_FeatureDFPPackedConversion },
  { 3559 /* cpxt */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureDFPPackedConversion },
  { 3564 /* cpya */, 3 /* 0, 1 */, MCK_AR32, AMFBS_None },
  { 3569 /* cr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3572 /* crb */, 8 /* 3 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3572 /* crb */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3576 /* crbe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3576 /* crbe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3581 /* crbh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3581 /* crbh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3586 /* crbhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3586 /* crbhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3592 /* crbl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3592 /* crbl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3597 /* crble */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3597 /* crble */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3603 /* crblh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3603 /* crblh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3609 /* crbne */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3609 /* crbne */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3615 /* crbnh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3615 /* crbnh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3621 /* crbnhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3621 /* crbnhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3628 /* crbnl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3628 /* crbnl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3634 /* crbnle */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3634 /* crbnle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3641 /* crbnlh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3641 /* crbnlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3648 /* crdte */, 5 /* 0, 2 */, MCK_GR128, AMFBS_FeatureEnhancedDAT2 },
  { 3648 /* crdte */, 2 /* 1 */, MCK_GR64, AMFBS_FeatureEnhancedDAT2 },
  { 3648 /* crdte */, 5 /* 0, 2 */, MCK_GR128, AMFBS_FeatureEnhancedDAT2 },
  { 3648 /* crdte */, 2 /* 1 */, MCK_GR64, AMFBS_FeatureEnhancedDAT2 },
  { 3654 /* crj */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3654 /* crj */, 8 /* 3 */, MCK_PCRel16, AMFBS_None },
  { 3658 /* crje */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3658 /* crje */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3663 /* crjh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3663 /* crjh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3668 /* crjhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3668 /* crjhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3674 /* crjl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3674 /* crjl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3679 /* crjle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3679 /* crjle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3685 /* crjlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3685 /* crjlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3691 /* crjne */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3691 /* crjne */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3697 /* crjnh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3697 /* crjnh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3703 /* crjnhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3703 /* crjnhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3710 /* crjnl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3710 /* crjnl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3716 /* crjnle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3716 /* crjnle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3723 /* crjnlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3723 /* crjnlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3730 /* crl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3730 /* crl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 3734 /* crt */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3738 /* crte */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3743 /* crth */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3748 /* crthe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3754 /* crtl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3759 /* crtle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3765 /* crtlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3771 /* crtne */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3777 /* crtnh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3783 /* crtnhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3790 /* crtnl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3796 /* crtnle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3803 /* crtnlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3810 /* cs */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3810 /* cs */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3818 /* csdtr */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 3818 /* csdtr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 3824 /* csg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 3824 /* csg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 3828 /* csp */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 3828 /* csp */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 3832 /* cspg */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 3832 /* cspg */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 3837 /* csst */, 3 /* 0, 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3837 /* csst */, 4 /* 2 */, MCK_GR64, AMFBS_None },
  { 3842 /* csxtr */, 2 /* 1 */, MCK_FP128, AMFBS_None },
  { 3842 /* csxtr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 3848 /* csy */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 3848 /* csy */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3852 /* cu12 */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3852 /* cu12 */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3857 /* cu14 */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3857 /* cu14 */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3862 /* cu21 */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3862 /* cu21 */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3867 /* cu24 */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3867 /* cu24 */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3872 /* cu41 */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3877 /* cu42 */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3882 /* cudtr */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 3882 /* cudtr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 3888 /* cuse */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3893 /* cutfu */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3893 /* cutfu */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3899 /* cuutf */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3899 /* cuutf */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3905 /* cuxtr */, 2 /* 1 */, MCK_FP128, AMFBS_None },
  { 3905 /* cuxtr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 3911 /* cvb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 3911 /* cvb */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3915 /* cvbg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 3915 /* cvbg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 3920 /* cvby */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 3920 /* cvby */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3925 /* cvd */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 3925 /* cvd */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3929 /* cvdg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 3929 /* cvdg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 3934 /* cvdy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 3934 /* cvdy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3939 /* cxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 3944 /* cxfbr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 3944 /* cxfbr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 3950 /* cxfbra */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 3950 /* cxfbra */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 3957 /* cxfr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 3957 /* cxfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 3962 /* cxftr */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 3962 /* cxftr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 3968 /* cxgbr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 3968 /* cxgbr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 3974 /* cxgbra */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 3974 /* cxgbra */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 3981 /* cxgr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 3981 /* cxgr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 3986 /* cxgtr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 3986 /* cxgtr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 3992 /* cxgtra */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 3992 /* cxgtra */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 3999 /* cxlfbr */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 3999 /* cxlfbr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 4006 /* cxlftr */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 4006 /* cxlftr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 4013 /* cxlgbr */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 4013 /* cxlgbr */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 4020 /* cxlgtr */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 4020 /* cxlgtr */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 4027 /* cxpt */, 2 /* 1 */, MCK_BDLAddr64Disp12Len8, AMFBS_FeatureDFPPackedConversion },
  { 4027 /* cxpt */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureDFPPackedConversion },
  { 4032 /* cxr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4036 /* cxstr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 4036 /* cxstr */, 2 /* 1 */, MCK_GR128, AMFBS_None },
  { 4042 /* cxtr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4047 /* cxutr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 4047 /* cxutr */, 2 /* 1 */, MCK_GR128, AMFBS_None },
  { 4053 /* cxzt */, 2 /* 1 */, MCK_BDLAddr64Disp12Len8, AMFBS_FeatureDFPZonedConversion },
  { 4053 /* cxzt */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureDFPZonedConversion },
  { 4058 /* cy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 4058 /* cy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4061 /* czdt */, 2 /* 1 */, MCK_BDLAddr64Disp12Len8, AMFBS_FeatureDFPZonedConversion },
  { 4061 /* czdt */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureDFPZonedConversion },
  { 4066 /* czxt */, 2 /* 1 */, MCK_BDLAddr64Disp12Len8, AMFBS_FeatureDFPZonedConversion },
  { 4066 /* czxt */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureDFPZonedConversion },
  { 4071 /* d */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4071 /* d */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4073 /* dd */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4073 /* dd */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 4076 /* ddb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4076 /* ddb */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 4080 /* ddbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4085 /* ddr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4089 /* ddtr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 4094 /* ddtra */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 4100 /* de */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4100 /* de */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 4103 /* deb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4103 /* deb */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 4107 /* debr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 4112 /* der */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 4116 /* dfltcc */, 3 /* 0, 1 */, MCK_GR128, AMFBS_FeatureDeflateConversion },
  { 4116 /* dfltcc */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureDeflateConversion },
  { 4123 /* diag */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 4123 /* diag */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 4128 /* didbr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 4134 /* diebr */, 7 /* 0, 1, 2 */, MCK_FP32, AMFBS_None },
  { 4140 /* dl */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 4140 /* dl */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4143 /* dlg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 4143 /* dlg */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4147 /* dlgr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4147 /* dlgr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 4152 /* dlr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4152 /* dlr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 4156 /* dp */, 3 /* 0, 1 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
  { 4159 /* dr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4159 /* dr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 4162 /* dsg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 4162 /* dsg */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4166 /* dsgf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 4166 /* dsgf */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4171 /* dsgfr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4171 /* dsgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 4177 /* dsgr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4177 /* dsgr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 4182 /* dxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4187 /* dxr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4191 /* dxtr */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_None },
  { 4196 /* dxtra */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 4202 /* ear */, 2 /* 1 */, MCK_AR32, AMFBS_None },
  { 4202 /* ear */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4206 /* ecag */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_None },
  { 4206 /* ecag */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 4211 /* ecctr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 4217 /* ecpga */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4217 /* ecpga */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 4223 /* ectg */, 3 /* 0, 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 4223 /* ectg */, 4 /* 2 */, MCK_GR64, AMFBS_None },
  { 4228 /* ed */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 4228 /* ed */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 4231 /* edmk */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 4231 /* edmk */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 4236 /* eedtr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4242 /* eextr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4248 /* efpc */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4253 /* epair */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4259 /* epar */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4264 /* epctr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 4270 /* epsw */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 4275 /* ereg */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 4280 /* eregg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 4286 /* esair */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4292 /* esar */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4297 /* esdtr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4303 /* esea */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4308 /* esta */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4308 /* esta */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 4313 /* esxtr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4319 /* etnd */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureTransactionalExecution },
  { 4324 /* ex */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4324 /* ex */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4327 /* exrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4327 /* exrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 4332 /* fidbr */, 5 /* 0, 2 */, MCK_FP64, AMFBS_None },
  { 4338 /* fidbra */, 5 /* 0, 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 4345 /* fidr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4350 /* fidtr */, 5 /* 0, 2 */, MCK_FP64, AMFBS_None },
  { 4356 /* fiebr */, 5 /* 0, 2 */, MCK_FP32, AMFBS_None },
  { 4362 /* fiebra */, 5 /* 0, 2 */, MCK_FP32, AMFBS_FeatureFPExtension },
  { 4369 /* fier */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 4374 /* fixbr */, 5 /* 0, 2 */, MCK_FP128, AMFBS_None },
  { 4380 /* fixbra */, 5 /* 0, 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 4387 /* fixr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4392 /* fixtr */, 5 /* 0, 2 */, MCK_FP128, AMFBS_None },
  { 4398 /* flogr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4398 /* flogr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 4404 /* hdr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4408 /* her */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 4417 /* iac */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4421 /* ic */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4421 /* ic */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4424 /* icm */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 4424 /* icm */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4428 /* icmh */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 4428 /* icmh */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 4433 /* icmy */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 4433 /* icmy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4438 /* icy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 4438 /* icy */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4442 /* idte */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_None },
  { 4442 /* idte */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_None },
  { 4447 /* iedtr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 4453 /* iextr */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_None },
  { 4459 /* iihf */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 4464 /* iihh */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 4469 /* iihl */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 4474 /* iilf */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4479 /* iilh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4484 /* iill */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4493 /* ipm */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4497 /* ipte */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 4497 /* ipte */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4497 /* ipte */, 6 /* 1, 2 */, MCK_GR32, AMFBS_None },
  { 4497 /* ipte */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4497 /* ipte */, 6 /* 1, 2 */, MCK_GR32, AMFBS_None },
  { 4497 /* ipte */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4502 /* irbm */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureInsertReferenceBitsMultiple },
  { 4507 /* iske */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4507 /* iske */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 4512 /* ivsk */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4512 /* ivsk */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 4517 /* j */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4519 /* je */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4522 /* jg */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4525 /* jge */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4529 /* jgh */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4533 /* jghe */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4538 /* jgl */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4542 /* jgle */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4547 /* jglh */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4552 /* jgm */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4556 /* jgne */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4561 /* jgnh */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4566 /* jgnhe */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4572 /* jgnl */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4577 /* jgnle */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4583 /* jgnlh */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4589 /* jgnm */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4594 /* jgno */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4599 /* jgnp */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4604 /* jgnz */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4609 /* jgo */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4613 /* jgp */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4617 /* jgz */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4621 /* jh */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4624 /* jhe */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4628 /* jl */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4631 /* jle */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4635 /* jlh */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4639 /* jm */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4642 /* jne */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4646 /* jnh */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4650 /* jnhe */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4655 /* jnl */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4659 /* jnle */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4664 /* jnlh */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4669 /* jnm */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4673 /* jno */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4677 /* jnp */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4681 /* jnz */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4685 /* jo */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4688 /* jp */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4691 /* jz */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4694 /* kdb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4694 /* kdb */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 4698 /* kdbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4703 /* kdsa */, 2 /* 1 */, MCK_GR128, AMFBS_FeatureMessageSecurityAssist9 },
  { 4703 /* kdsa */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMessageSecurityAssist9 },
  { 4708 /* kdtr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4713 /* keb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4713 /* keb */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 4717 /* kebr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 4722 /* kimd */, 2 /* 1 */, MCK_GR128, AMFBS_None },
  { 4722 /* kimd */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4727 /* klmd */, 2 /* 1 */, MCK_GR128, AMFBS_None },
  { 4727 /* klmd */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4732 /* km */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 4735 /* kma */, 7 /* 0, 1, 2 */, MCK_GR128, AMFBS_FeatureMessageSecurityAssist8 },
  { 4739 /* kmac */, 2 /* 1 */, MCK_GR128, AMFBS_None },
  { 4739 /* kmac */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4744 /* kmc */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 4748 /* kmctr */, 7 /* 0, 1, 2 */, MCK_GR128, AMFBS_FeatureMessageSecurityAssist4 },
  { 4754 /* kmf */, 3 /* 0, 1 */, MCK_GR128, AMFBS_FeatureMessageSecurityAssist4 },
  { 4758 /* kmo */, 3 /* 0, 1 */, MCK_GR128, AMFBS_FeatureMessageSecurityAssist4 },
  { 4762 /* kxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4767 /* kxtr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4772 /* l */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4772 /* l */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4774 /* la */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4774 /* la */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4777 /* laa */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureInterlockedAccess1 },
  { 4777 /* laa */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureInterlockedAccess1 },
  { 4781 /* laag */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureInterlockedAccess1 },
  { 4781 /* laag */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureInterlockedAccess1 },
  { 4786 /* laal */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureInterlockedAccess1 },
  { 4786 /* laal */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureInterlockedAccess1 },
  { 4791 /* laalg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureInterlockedAccess1 },
  { 4791 /* laalg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureInterlockedAccess1 },
  { 4797 /* lae */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4797 /* lae */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4801 /* laey */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 4801 /* laey */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4806 /* lam */, 3 /* 0, 1 */, MCK_AR32, AMFBS_None },
  { 4806 /* lam */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 4810 /* lamy */, 3 /* 0, 1 */, MCK_AR32, AMFBS_None },
  { 4810 /* lamy */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 4815 /* lan */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureInterlockedAccess1 },
  { 4815 /* lan */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureInterlockedAccess1 },
  { 4819 /* lang */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureInterlockedAccess1 },
  { 4819 /* lang */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureInterlockedAccess1 },
  { 4824 /* lao */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureInterlockedAccess1 },
  { 4824 /* lao */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureInterlockedAccess1 },
  { 4828 /* laog */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureInterlockedAccess1 },
  { 4828 /* laog */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureInterlockedAccess1 },
  { 4833 /* larl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4833 /* larl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 4838 /* lasp */, 3 /* 0, 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 4843 /* lat */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureLoadAndTrap },
  { 4843 /* lat */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadAndTrap },
  { 4847 /* lax */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureInterlockedAccess1 },
  { 4847 /* lax */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureInterlockedAccess1 },
  { 4851 /* laxg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureInterlockedAccess1 },
  { 4851 /* laxg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureInterlockedAccess1 },
  { 4856 /* lay */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 4856 /* lay */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4860 /* lb */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 4860 /* lb */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4863 /* lbh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureHighWord },
  { 4863 /* lbh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 4867 /* lbr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 4871 /* lcbb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 4871 /* lcbb */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureVector },
  { 4876 /* lcctl */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 4882 /* lcdbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4888 /* lcdfr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4894 /* lcdr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4899 /* lcebr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 4905 /* lcer */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 4910 /* lcgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 4910 /* lcgfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4916 /* lcgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 4921 /* lcr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 4925 /* lctl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 4925 /* lctl */, 3 /* 0, 1 */, MCK_CR64, AMFBS_None },
  { 4930 /* lctlg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 4930 /* lctlg */, 3 /* 0, 1 */, MCK_CR64, AMFBS_None },
  { 4936 /* lcxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4942 /* lcxr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4947 /* ld */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4947 /* ld */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 4950 /* lde */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4950 /* lde */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 4954 /* ldeb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4954 /* ldeb */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 4959 /* ldebr */, 2 /* 1 */, MCK_FP32, AMFBS_None },
  { 4959 /* ldebr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 4965 /* lder */, 2 /* 1 */, MCK_FP32, AMFBS_None },
  { 4965 /* lder */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 4970 /* ldetr */, 2 /* 1 */, MCK_FP32, AMFBS_None },
  { 4970 /* ldetr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 4976 /* ldgr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 4976 /* ldgr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 4981 /* ldr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4985 /* ldrv */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 4985 /* ldrv */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 4990 /* ldxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4996 /* ldxbra */, 5 /* 0, 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 5003 /* ldxr */, 2 /* 1 */, MCK_FP128, AMFBS_None },
  { 5003 /* ldxr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 5008 /* ldxtr */, 5 /* 0, 2 */, MCK_FP128, AMFBS_None },
  { 5014 /* ldy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5014 /* ldy */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 5018 /* le */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 5018 /* le */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 5021 /* ledbr */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 5021 /* ledbr */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 5027 /* ledbra */, 1 /* 0 */, MCK_FP32, AMFBS_FeatureFPExtension },
  { 5027 /* ledbra */, 4 /* 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 5034 /* ledr */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 5034 /* ledr */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 5039 /* ledtr */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 5039 /* ledtr */, 4 /* 2 */, MCK_FP64, AMFBS_None },
  { 5045 /* ler */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 5049 /* lerv */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 5049 /* lerv */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 5054 /* lexbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 5060 /* lexbra */, 5 /* 0, 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 5067 /* lexr */, 2 /* 1 */, MCK_FP128, AMFBS_None },
  { 5067 /* lexr */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 5072 /* ley */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5072 /* ley */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 5076 /* lfas */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 5081 /* lfh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureHighWord },
  { 5081 /* lfh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 5085 /* lfhat */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureLoadAndTrap },
  { 5085 /* lfhat */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadAndTrap },
  { 5091 /* lfpc */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 5096 /* lg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5096 /* lg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5099 /* lgat */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureLoadAndTrap },
  { 5099 /* lgat */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadAndTrap },
  { 5104 /* lgb */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5104 /* lgb */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5108 /* lgbr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 5113 /* lgdr */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 5113 /* lgdr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5118 /* lgf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5118 /* lgf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5122 /* lgfi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5127 /* lgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 5127 /* lgfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5132 /* lgfrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5132 /* lgfrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 5138 /* lgg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureGuardedStorage },
  { 5138 /* lgg */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureGuardedStorage },
  { 5142 /* lgh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5142 /* lgh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5146 /* lghi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5151 /* lghr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 5156 /* lghrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5156 /* lghrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 5162 /* lgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 5166 /* lgrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5166 /* lgrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 5171 /* lgsc */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureGuardedStorage },
  { 5171 /* lgsc */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureGuardedStorage },
  { 5176 /* lh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 5176 /* lh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 5179 /* lhh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureHighWord },
  { 5179 /* lhh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 5183 /* lhi */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 5187 /* lhr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 5191 /* lhrl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 5191 /* lhrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 5196 /* lhy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5196 /* lhy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 5200 /* llc */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5200 /* llc */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 5204 /* llch */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureHighWord },
  { 5204 /* llch */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 5209 /* llcr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 5214 /* llgc */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5214 /* llgc */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5219 /* llgcr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 5225 /* llgf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5225 /* llgf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5230 /* llgfat */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureLoadAndTrap },
  { 5230 /* llgfat */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadAndTrap },
  { 5237 /* llgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 5237 /* llgfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5243 /* llgfrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5243 /* llgfrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 5250 /* llgfsg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureGuardedStorage },
  { 5250 /* llgfsg */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureGuardedStorage },
  { 5257 /* llgh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5257 /* llgh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5262 /* llghr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 5268 /* llghrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5268 /* llghrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 5275 /* llgt */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5275 /* llgt */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5280 /* llgtat */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureLoadAndTrap },
  { 5280 /* llgtat */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadAndTrap },
  { 5287 /* llgtr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 5293 /* llh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5293 /* llh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 5297 /* llhh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureHighWord },
  { 5297 /* llhh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 5302 /* llhr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 5307 /* llhrl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 5307 /* llhrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 5313 /* llihf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5319 /* llihh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5325 /* llihl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5331 /* llilf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5337 /* llilh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5343 /* llill */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5349 /* llzrgf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureLoadAndZeroRightmostByte },
  { 5349 /* llzrgf */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadAndZeroRightmostByte },
  { 5356 /* lm */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 5356 /* lm */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 5359 /* lmd */, 12 /* 2, 3 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 5359 /* lmd */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 5363 /* lmg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 5363 /* lmg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 5367 /* lmh */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 5367 /* lmh */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_None },
  { 5371 /* lmy */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 5371 /* lmy */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 5375 /* lndbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 5381 /* lndfr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 5387 /* lndr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 5392 /* lnebr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 5398 /* lner */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 5403 /* lngfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 5403 /* lngfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5409 /* lngr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 5414 /* lnr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 5418 /* lnxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 5424 /* lnxr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 5429 /* loc */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 5429 /* loc */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 5433 /* loce */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 5433 /* loce */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 5438 /* locfh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5438 /* locfh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5444 /* locfhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5444 /* locfhe */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5451 /* locfhh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5451 /* locfhh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5458 /* locfhhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5458 /* locfhhe */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5466 /* locfhl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5466 /* locfhl */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5473 /* locfhle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5473 /* locfhle */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5481 /* locfhlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5481 /* locfhlh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5489 /* locfhm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5489 /* locfhm */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5496 /* locfhne */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5496 /* locfhne */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5504 /* locfhnh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5504 /* locfhnh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5512 /* locfhnhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5512 /* locfhnhe */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5521 /* locfhnl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5521 /* locfhnl */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5529 /* locfhnle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5529 /* locfhnle */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5538 /* locfhnlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5538 /* locfhnlh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5547 /* locfhnm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5547 /* locfhnm */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5555 /* locfhno */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5555 /* locfhno */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5563 /* locfhnp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5563 /* locfhnp */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5571 /* locfhnz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5571 /* locfhnz */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5579 /* locfho */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5579 /* locfho */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5586 /* locfhp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5586 /* locfhp */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5593 /* locfhr */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5600 /* locfhre */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5608 /* locfhrh */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5616 /* locfhrhe */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5625 /* locfhrl */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5633 /* locfhrle */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5642 /* locfhrlh */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5651 /* locfhrm */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5659 /* locfhrne */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5668 /* locfhrnh */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5677 /* locfhrnhe */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5687 /* locfhrnl */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5696 /* locfhrnle */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5706 /* locfhrnlh */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5716 /* locfhrnm */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5725 /* locfhrno */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5734 /* locfhrnp */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5743 /* locfhrnz */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5752 /* locfhro */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5760 /* locfhrp */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5768 /* locfhrz */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5776 /* locfhz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5776 /* locfhz */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5783 /* locg */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 5783 /* locg */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 5788 /* locge */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 5788 /* locge */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 5794 /* locgh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 5794 /* locgh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 5800 /* locghe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 5800 /* locghe */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 5807 /* locghi */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5814 /* locghie */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5822 /* locghih */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5830 /* locghihe */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5839 /* locghil */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5847 /* locghile */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5856 /* locghilh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5865 /* locghim */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5873 /* locghine */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5882 /* locghinh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5891 /* locghinhe */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5901 /* locghinl */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5910 /* locghinle */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5920 /* locghinlh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5930 /* locghinm */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5939 /* locghino */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5948 /* locghinp */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5957 /* locghinz */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5966 /* locghio */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5974 /* locghip */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5982 /* locghiz */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5990 /* locgl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 5990 /* locgl */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 5996 /* locgle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 5996 /* locgle */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6003 /* locglh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6003 /* locglh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6010 /* locgm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6010 /* locgm */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6016 /* locgne */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6016 /* locgne */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6023 /* locgnh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6023 /* locgnh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6030 /* locgnhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6030 /* locgnhe */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6038 /* locgnl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6038 /* locgnl */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6045 /* locgnle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6045 /* locgnle */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6053 /* locgnlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6053 /* locgnlh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6061 /* locgnm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6061 /* locgnm */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6068 /* locgno */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6068 /* locgno */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6075 /* locgnp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6075 /* locgnp */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6082 /* locgnz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6082 /* locgnz */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6089 /* locgo */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6089 /* locgo */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6095 /* locgp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6095 /* locgp */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6101 /* locgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6107 /* locgre */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6114 /* locgrh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6121 /* locgrhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6129 /* locgrl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6136 /* locgrle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6144 /* locgrlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6152 /* locgrm */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6159 /* locgrne */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6167 /* locgrnh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6175 /* locgrnhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6184 /* locgrnl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6192 /* locgrnle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6201 /* locgrnlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6210 /* locgrnm */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6218 /* locgrno */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6226 /* locgrnp */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6234 /* locgrnz */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6242 /* locgro */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6249 /* locgrp */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6256 /* locgrz */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6263 /* locgz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6263 /* locgz */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6269 /* loch */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6269 /* loch */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6274 /* loche */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6274 /* loche */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6280 /* lochhi */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6287 /* lochhie */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6295 /* lochhih */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6303 /* lochhihe */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6312 /* lochhil */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6320 /* lochhile */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6329 /* lochhilh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6338 /* lochhim */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6346 /* lochhine */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6355 /* lochhinh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6364 /* lochhinhe */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6374 /* lochhinl */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6383 /* lochhinle */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6393 /* lochhinlh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6403 /* lochhinm */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6412 /* lochhino */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6421 /* lochhinp */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6430 /* lochhinz */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6439 /* lochhio */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6447 /* lochhip */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6455 /* lochhiz */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6463 /* lochi */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6469 /* lochie */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6476 /* lochih */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6483 /* lochihe */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6491 /* lochil */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6498 /* lochile */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6506 /* lochilh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6514 /* lochim */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6521 /* lochine */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6529 /* lochinh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6537 /* lochinhe */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6546 /* lochinl */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6554 /* lochinle */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6563 /* lochinlh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6572 /* lochinm */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6580 /* lochino */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6588 /* lochinp */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6596 /* lochinz */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6604 /* lochio */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6611 /* lochip */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6618 /* lochiz */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6625 /* locl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6625 /* locl */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6630 /* locle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6630 /* locle */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6636 /* loclh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6636 /* loclh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6642 /* locm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6642 /* locm */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6647 /* locne */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6647 /* locne */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6653 /* locnh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6653 /* locnh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6659 /* locnhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6659 /* locnhe */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6666 /* locnl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6666 /* locnl */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6672 /* locnle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6672 /* locnle */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6679 /* locnlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6679 /* locnlh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6686 /* locnm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6686 /* locnm */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6692 /* locno */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6692 /* locno */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6698 /* locnp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6698 /* locnp */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6704 /* locnz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6704 /* locnz */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6710 /* loco */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6710 /* loco */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6715 /* locp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6715 /* locp */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6720 /* locr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6725 /* locre */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6731 /* locrh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6737 /* locrhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6744 /* locrl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6750 /* locrle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6757 /* locrlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6764 /* locrm */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6770 /* locrne */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6777 /* locrnh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6784 /* locrnhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6792 /* locrnl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6799 /* locrnle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6807 /* locrnlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6815 /* locrnm */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6822 /* locrno */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6829 /* locrnp */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6836 /* locrnz */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6843 /* locro */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6849 /* locrp */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6855 /* locrz */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6861 /* locz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6861 /* locz */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6866 /* lpctl */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 6872 /* lpd */, 6 /* 1, 2 */, MCK_BDAddr64Disp12, AMFBS_FeatureInterlockedAccess1 },
  { 6872 /* lpd */, 1 /* 0 */, MCK_GR128, AMFBS_FeatureInterlockedAccess1 },
  { 6876 /* lpdbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 6882 /* lpdfr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 6888 /* lpdg */, 6 /* 1, 2 */, MCK_BDAddr64Disp12, AMFBS_FeatureInterlockedAccess1 },
  { 6888 /* lpdg */, 1 /* 0 */, MCK_GR128, AMFBS_FeatureInterlockedAccess1 },
  { 6893 /* lpdr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 6898 /* lpebr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 6904 /* lper */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 6909 /* lpgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 6909 /* lpgfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 6915 /* lpgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 6920 /* lpp */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 6924 /* lpq */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 6924 /* lpq */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 6928 /* lpr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 6932 /* lpsw */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 6937 /* lpswe */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 6943 /* lptea */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_None },
  { 6949 /* lpxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 6955 /* lpxr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 6960 /* lr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 6963 /* lra */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 6963 /* lra */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 6967 /* lrag */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 6967 /* lrag */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 6972 /* lray */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 6972 /* lray */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 6977 /* lrdr */, 2 /* 1 */, MCK_FP128, AMFBS_None },
  { 6977 /* lrdr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 6982 /* lrer */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 6982 /* lrer */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 6987 /* lrl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 6987 /* lrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 6991 /* lrv */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 6991 /* lrv */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 6995 /* lrvg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 6995 /* lrvg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7000 /* lrvgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 7006 /* lrvh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7006 /* lrvh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7011 /* lrvr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 7016 /* lsctl */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7022 /* lt */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7022 /* lt */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7025 /* ltdbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7031 /* ltdr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7036 /* ltdtr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7042 /* ltebr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 7048 /* lter */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 7053 /* ltg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7053 /* ltg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7057 /* ltgf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7057 /* ltgf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7062 /* ltgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 7062 /* ltgfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7068 /* ltgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 7073 /* ltr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 7077 /* ltxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 7083 /* ltxr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 7088 /* ltxtr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 7094 /* lura */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7094 /* lura */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 7099 /* lurag */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 7105 /* lxd */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7105 /* lxd */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7109 /* lxdb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7109 /* lxdb */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7114 /* lxdbr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7114 /* lxdbr */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 7120 /* lxdr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7120 /* lxdr */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 7125 /* lxdtr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7125 /* lxdtr */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 7131 /* lxe */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7131 /* lxe */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7135 /* lxeb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7135 /* lxeb */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7140 /* lxebr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7140 /* lxebr */, 2 /* 1 */, MCK_FP32, AMFBS_None },
  { 7146 /* lxer */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7146 /* lxer */, 2 /* 1 */, MCK_FP32, AMFBS_None },
  { 7151 /* lxr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 7155 /* ly */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7155 /* ly */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7158 /* lzdr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 7163 /* lzer */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 7168 /* lzrf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureLoadAndZeroRightmostByte },
  { 7168 /* lzrf */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadAndZeroRightmostByte },
  { 7173 /* lzrg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureLoadAndZeroRightmostByte },
  { 7173 /* lzrg */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadAndZeroRightmostByte },
  { 7178 /* lzxr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7183 /* m */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7183 /* m */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 7185 /* mad */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7185 /* mad */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7189 /* madb */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7189 /* madb */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7194 /* madbr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 7200 /* madr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 7205 /* mae */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7205 /* mae */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 7209 /* maeb */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7209 /* maeb */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 7214 /* maebr */, 7 /* 0, 1, 2 */, MCK_FP32, AMFBS_None },
  { 7220 /* maer */, 7 /* 0, 1, 2 */, MCK_FP32, AMFBS_None },
  { 7225 /* may */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7225 /* may */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7225 /* may */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 7229 /* mayh */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7229 /* mayh */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7234 /* mayhr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 7240 /* mayl */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7240 /* mayl */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7245 /* maylr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 7251 /* mayr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7251 /* mayr */, 6 /* 1, 2 */, MCK_FP64, AMFBS_None },
  { 7256 /* mc */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7259 /* md */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7259 /* md */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 7262 /* mdb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7262 /* mdb */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 7266 /* mdbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7271 /* mde */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7271 /* mde */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 7275 /* mdeb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7275 /* mdeb */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 7280 /* mdebr */, 2 /* 1 */, MCK_FP32, AMFBS_None },
  { 7280 /* mdebr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 7286 /* mder */, 2 /* 1 */, MCK_FP32, AMFBS_None },
  { 7286 /* mder */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 7291 /* mdr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7295 /* mdtr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 7300 /* mdtra */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 7306 /* me */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7306 /* me */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 7309 /* mee */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7309 /* mee */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 7313 /* meeb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7313 /* meeb */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 7318 /* meebr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 7324 /* meer */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 7329 /* mer */, 2 /* 1 */, MCK_FP32, AMFBS_None },
  { 7329 /* mer */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 7333 /* mfy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7333 /* mfy */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 7337 /* mg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7337 /* mg */, 1 /* 0 */, MCK_GR128, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7340 /* mgh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7340 /* mgh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7344 /* mghi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7349 /* mgrk */, 1 /* 0 */, MCK_GR128, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7349 /* mgrk */, 6 /* 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7354 /* mh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7354 /* mh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7357 /* mhi */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7361 /* mhy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7361 /* mhy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7365 /* ml */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7365 /* ml */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 7368 /* mlg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7368 /* mlg */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 7372 /* mlgr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 7372 /* mlgr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 7377 /* mlr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 7377 /* mlr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 7381 /* mp */, 3 /* 0, 1 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
  { 7384 /* mr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 7384 /* mr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 7387 /* ms */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7387 /* ms */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7390 /* msc */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7390 /* msc */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7394 /* msch */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7399 /* msd */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7399 /* msd */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7403 /* msdb */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7403 /* msdb */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7408 /* msdbr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 7414 /* msdr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 7419 /* mse */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7419 /* mse */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 7423 /* mseb */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7423 /* mseb */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 7428 /* msebr */, 7 /* 0, 1, 2 */, MCK_FP32, AMFBS_None },
  { 7434 /* mser */, 7 /* 0, 1, 2 */, MCK_FP32, AMFBS_None },
  { 7439 /* msfi */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7444 /* msg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7444 /* msg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7448 /* msgc */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7448 /* msgc */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7453 /* msgf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7453 /* msgf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7458 /* msgfi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7464 /* msgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 7464 /* msgfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7470 /* msgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 7475 /* msgrkc */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7482 /* msr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 7486 /* msrkc */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7492 /* msta */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 7497 /* msy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7497 /* msy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7501 /* mvc */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7501 /* mvc */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 7505 /* mvcdk */, 3 /* 0, 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7511 /* mvcin */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7511 /* mvcin */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 7517 /* mvck */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7517 /* mvck */, 1 /* 0 */, MCK_BDRAddr64Disp12, AMFBS_None },
  { 7517 /* mvck */, 4 /* 2 */, MCK_GR64, AMFBS_None },
  { 7522 /* mvcl */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 7527 /* mvcle */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 7527 /* mvcle */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 7533 /* mvclu */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_None },
  { 7533 /* mvclu */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 7539 /* mvcos */, 3 /* 0, 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7539 /* mvcos */, 4 /* 2 */, MCK_GR64, AMFBS_None },
  { 7545 /* mvcp */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7545 /* mvcp */, 1 /* 0 */, MCK_BDRAddr64Disp12, AMFBS_None },
  { 7545 /* mvcp */, 4 /* 2 */, MCK_GR64, AMFBS_None },
  { 7550 /* mvcrl */, 3 /* 0, 1 */, MCK_BDAddr64Disp12, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7556 /* mvcs */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7556 /* mvcs */, 1 /* 0 */, MCK_BDRAddr64Disp12, AMFBS_None },
  { 7556 /* mvcs */, 4 /* 2 */, MCK_GR64, AMFBS_None },
  { 7561 /* mvcsk */, 3 /* 0, 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7567 /* mvghi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7573 /* mvhhi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7579 /* mvhi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7584 /* mvi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7588 /* mviy */, 1 /* 0 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 7593 /* mvn */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7593 /* mvn */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 7597 /* mvo */, 3 /* 0, 1 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
  { 7601 /* mvpg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 7606 /* mvst */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 7611 /* mvz */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7611 /* mvz */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 7615 /* mxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 7620 /* mxd */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7620 /* mxd */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7624 /* mxdb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7624 /* mxdb */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7629 /* mxdbr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7629 /* mxdbr */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 7635 /* mxdr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7635 /* mxdr */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 7640 /* mxr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 7644 /* mxtr */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_None },
  { 7649 /* mxtra */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 7655 /* my */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7655 /* my */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7655 /* my */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 7658 /* myh */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7658 /* myh */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7662 /* myhr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 7667 /* myl */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7667 /* myl */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7671 /* mylr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 7676 /* myr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7676 /* myr */, 6 /* 1, 2 */, MCK_FP64, AMFBS_None },
  { 7680 /* n */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7680 /* n */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7682 /* nc */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7682 /* nc */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 7685 /* ncgrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7691 /* ncrk */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7696 /* ng */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7696 /* ng */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7699 /* ngr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 7703 /* ngrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureDistinctOps },
  { 7708 /* ni */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7716 /* nihf */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 7721 /* nihh */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 7726 /* nihl */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 7731 /* nilf */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7736 /* nilh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7741 /* nill */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7746 /* niy */, 1 /* 0 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 7750 /* nngrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7756 /* nnrk */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7761 /* nogrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7767 /* nop */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7771 /* nopr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7776 /* nork */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7781 /* nr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 7784 /* nrk */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 7788 /* ntstg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureTransactionalExecution },
  { 7788 /* ntstg */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureTransactionalExecution },
  { 7794 /* nxgrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7800 /* nxrk */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7805 /* ny */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7805 /* ny */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7808 /* o */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7808 /* o */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7810 /* oc */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7810 /* oc */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 7813 /* ocgrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7819 /* ocrk */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7824 /* og */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7824 /* og */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7827 /* ogr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 7831 /* ogrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureDistinctOps },
  { 7836 /* oi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7839 /* oihf */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 7844 /* oihh */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 7849 /* oihl */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 7854 /* oilf */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7859 /* oilh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7864 /* oill */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7869 /* oiy */, 1 /* 0 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 7873 /* or */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 7876 /* ork */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 7880 /* oy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7880 /* oy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7883 /* pack */, 3 /* 0, 1 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
  { 7893 /* pc */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7906 /* pfd */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7910 /* pfdrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 7916 /* pfmf */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7916 /* pfmf */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 7926 /* pgin */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 7931 /* pgout */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 7937 /* pka */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7937 /* pka */, 2 /* 1 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 7941 /* pku */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7941 /* pku */, 2 /* 1 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 7945 /* plo */, 10 /* 1, 3 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7945 /* plo */, 5 /* 0, 2 */, MCK_GR64, AMFBS_None },
  { 7949 /* popcnt */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeaturePopulationCount },
  { 7949 /* popcnt */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7956 /* ppa */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureProcessorAssist },
  { 7960 /* ppno */, 3 /* 0, 1 */, MCK_GR128, AMFBS_FeatureMessageSecurityAssist5 },
  { 7968 /* prno */, 3 /* 0, 1 */, MCK_GR128, AMFBS_FeatureMessageSecurityAssist7 },
  { 7973 /* pt */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7973 /* pt */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 7976 /* ptf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7985 /* pti */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 7994 /* qadtr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 8000 /* qaxtr */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_None },
  { 8006 /* qctri */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8012 /* qsi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8021 /* risbg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8027 /* risbgn */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 8034 /* risbhg */, 2 /* 1 */, MCK_GR64, AMFBS_FeatureHighWord },
  { 8034 /* risbhg */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 8041 /* risblg */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureHighWord },
  { 8041 /* risblg */, 2 /* 1 */, MCK_GR64, AMFBS_FeatureHighWord },
  { 8048 /* rll */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_None },
  { 8048 /* rll */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 8052 /* rllg */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_None },
  { 8052 /* rllg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8057 /* rnsbg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8063 /* rosbg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8069 /* rp */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8072 /* rrbe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8072 /* rrbe */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 8077 /* rrbm */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureResetReferenceBitsMultiple },
  { 8082 /* rrdtr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 8088 /* rrxtr */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_None },
  { 8099 /* rxsbg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8105 /* s */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8105 /* s */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8107 /* sac */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8111 /* sacf */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8138 /* sar */, 1 /* 0 */, MCK_AR32, AMFBS_None },
  { 8138 /* sar */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 8142 /* scctr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8153 /* sck */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8157 /* sckc */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8168 /* sd */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8168 /* sd */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 8171 /* sdb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8171 /* sdb */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 8175 /* sdbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 8180 /* sdr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 8184 /* sdtr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 8189 /* sdtra */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 8195 /* se */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8195 /* se */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 8198 /* seb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8198 /* seb */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 8202 /* sebr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 8207 /* selfhr */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8214 /* selfhre */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8222 /* selfhrh */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8230 /* selfhrhe */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8239 /* selfhrl */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8247 /* selfhrle */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8256 /* selfhrlh */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8265 /* selfhrm */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8273 /* selfhrne */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8282 /* selfhrnh */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8291 /* selfhrnhe */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8301 /* selfhrnl */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8310 /* selfhrnle */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8320 /* selfhrnlh */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8330 /* selfhrnm */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8339 /* selfhrno */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8348 /* selfhrnp */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8357 /* selfhrnz */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8366 /* selfhro */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8374 /* selfhrp */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8382 /* selfhrz */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8390 /* selgr */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8396 /* selgre */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8403 /* selgrh */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8410 /* selgrhe */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8418 /* selgrl */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8425 /* selgrle */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8433 /* selgrlh */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8441 /* selgrm */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8448 /* selgrne */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8456 /* selgrnh */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8464 /* selgrnhe */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8473 /* selgrnl */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8481 /* selgrnle */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8490 /* selgrnlh */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8499 /* selgrnm */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8507 /* selgrno */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8515 /* selgrnp */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8523 /* selgrnz */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8531 /* selgro */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8538 /* selgrp */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8545 /* selgrz */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8552 /* selr */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8557 /* selre */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8563 /* selrh */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8569 /* selrhe */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8576 /* selrl */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8582 /* selrle */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8589 /* selrlh */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8596 /* selrm */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8602 /* selrne */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8609 /* selrnh */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8616 /* selrnhe */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8624 /* selrnl */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8631 /* selrnle */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8639 /* selrnlh */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8647 /* selrnm */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8654 /* selrno */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8661 /* selrnp */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8668 /* selrnz */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8675 /* selro */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8681 /* selrp */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8687 /* selrz */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8693 /* ser */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 8697 /* sfasr */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8703 /* sfpc */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8708 /* sg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 8708 /* sg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 8711 /* sgf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 8711 /* sgf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 8715 /* sgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 8715 /* sgfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 8720 /* sgh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 8720 /* sgh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions2 },
  { 8724 /* sgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8728 /* sgrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureDistinctOps },
  { 8733 /* sh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8733 /* sh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8736 /* shhhr */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 8742 /* shhlr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureHighWord },
  { 8742 /* shhlr */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 8748 /* shy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 8748 /* shy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8752 /* sie */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8756 /* siga */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8761 /* sigp */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8761 /* sigp */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8766 /* sl */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8766 /* sl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8769 /* sla */, 2 /* 1 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 8769 /* sla */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8773 /* slag */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_None },
  { 8773 /* slag */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8778 /* slak */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_FeatureDistinctOps },
  { 8778 /* slak */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 8783 /* slb */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 8783 /* slb */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8787 /* slbg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 8787 /* slbg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 8792 /* slbgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8798 /* slbr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 8803 /* slda */, 2 /* 1 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 8803 /* slda */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 8808 /* sldl */, 2 /* 1 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 8808 /* sldl */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 8813 /* sldt */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8813 /* sldt */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 8818 /* slfi */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8823 /* slg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 8823 /* slg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 8827 /* slgf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 8827 /* slgf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 8832 /* slgfi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 8838 /* slgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 8838 /* slgfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 8844 /* slgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8849 /* slgrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureDistinctOps },
  { 8855 /* slhhhr */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 8862 /* slhhlr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureHighWord },
  { 8862 /* slhhlr */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 8869 /* sll */, 2 /* 1 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 8869 /* sll */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8873 /* sllg */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_None },
  { 8873 /* sllg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8878 /* sllk */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_FeatureDistinctOps },
  { 8878 /* sllk */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 8883 /* slr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 8887 /* slrk */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 8892 /* slxt */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8892 /* slxt */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 8897 /* sly */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 8897 /* sly */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8901 /* sortl */, 3 /* 0, 1 */, MCK_GR128, AMFBS_FeatureEnhancedSort },
  { 8907 /* sp */, 3 /* 0, 1 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
  { 8910 /* spctr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8916 /* spka */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8921 /* spm */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8925 /* spt */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8929 /* spx */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8933 /* sqd */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8933 /* sqd */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 8937 /* sqdb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8937 /* sqdb */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 8942 /* sqdbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 8948 /* sqdr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 8953 /* sqe */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8953 /* sqe */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 8957 /* sqeb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8957 /* sqeb */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 8962 /* sqebr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 8968 /* sqer */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 8973 /* sqxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 8979 /* sqxr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 8984 /* sr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 8987 /* sra */, 2 /* 1 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 8987 /* sra */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8991 /* srag */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_None },
  { 8991 /* srag */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8996 /* srak */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_FeatureDistinctOps },
  { 8996 /* srak */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 9001 /* srda */, 2 /* 1 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 9001 /* srda */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 9006 /* srdl */, 2 /* 1 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 9006 /* srdl */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 9011 /* srdt */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9011 /* srdt */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 9016 /* srk */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 9020 /* srl */, 2 /* 1 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 9020 /* srl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9024 /* srlg */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_None },
  { 9024 /* srlg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 9029 /* srlk */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_FeatureDistinctOps },
  { 9029 /* srlk */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 9034 /* srnm */, 1 /* 0 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 9039 /* srnmb */, 1 /* 0 */, MCK_BDAddr32Disp12, AMFBS_FeatureFPExtension },
  { 9045 /* srnmt */, 1 /* 0 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 9051 /* srp */, 2 /* 1 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 9051 /* srp */, 1 /* 0 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
  { 9055 /* srst */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 9060 /* srstu */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 9066 /* srxt */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9066 /* srxt */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 9071 /* ssair */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 9077 /* ssar */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9082 /* ssch */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9087 /* sske */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9087 /* sske */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 9087 /* sske */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9087 /* sske */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 9092 /* ssm */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9096 /* st */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9096 /* st */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9099 /* stam */, 3 /* 0, 1 */, MCK_AR32, AMFBS_None },
  { 9099 /* stam */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9104 /* stamy */, 3 /* 0, 1 */, MCK_AR32, AMFBS_None },
  { 9104 /* stamy */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 9110 /* stap */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9115 /* stc */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9115 /* stc */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9119 /* stch */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureHighWord },
  { 9119 /* stch */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 9124 /* stck */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9129 /* stckc */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9135 /* stcke */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9141 /* stckf */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9147 /* stcm */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9147 /* stcm */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9152 /* stcmh */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 9152 /* stcmh */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 9158 /* stcmy */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 9158 /* stcmy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9164 /* stcps */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9170 /* stcrw */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9176 /* stctg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 9176 /* stctg */, 3 /* 0, 1 */, MCK_CR64, AMFBS_None },
  { 9182 /* stctl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9182 /* stctl */, 3 /* 0, 1 */, MCK_CR64, AMFBS_None },
  { 9188 /* stcy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9188 /* stcy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9193 /* std */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9193 /* std */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 9197 /* stdrv */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 9197 /* stdrv */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 9203 /* stdy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9203 /* stdy */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 9208 /* ste */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9208 /* ste */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 9212 /* sterv */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 9212 /* sterv */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 9218 /* stey */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9218 /* stey */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 9223 /* stfh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureHighWord },
  { 9223 /* stfh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 9228 /* stfl */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9233 /* stfle */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9239 /* stfpc */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9245 /* stg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9245 /* stg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 9249 /* stgrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 9249 /* stgrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 9255 /* stgsc */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureGuardedStorage },
  { 9255 /* stgsc */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureGuardedStorage },
  { 9261 /* sth */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9261 /* sth */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9265 /* sthh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureHighWord },
  { 9265 /* sthh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 9270 /* sthrl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9270 /* sthrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 9276 /* sthy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9276 /* sthy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9281 /* stidp */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9287 /* stm */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9287 /* stm */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 9291 /* stmg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 9291 /* stmg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 9296 /* stmh */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 9296 /* stmh */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_None },
  { 9301 /* stmy */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 9301 /* stmy */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 9306 /* stnsm */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9312 /* stoc */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9312 /* stoc */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9317 /* stoce */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9317 /* stoce */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9323 /* stocfh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9323 /* stocfh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9330 /* stocfhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9330 /* stocfhe */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9338 /* stocfhh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9338 /* stocfhh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9346 /* stocfhhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9346 /* stocfhhe */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9355 /* stocfhl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9355 /* stocfhl */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9363 /* stocfhle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9363 /* stocfhle */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9372 /* stocfhlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9372 /* stocfhlh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9381 /* stocfhm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9381 /* stocfhm */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9389 /* stocfhne */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9389 /* stocfhne */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9398 /* stocfhnh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9398 /* stocfhnh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9407 /* stocfhnhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9407 /* stocfhnhe */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9417 /* stocfhnl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9417 /* stocfhnl */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9426 /* stocfhnle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9426 /* stocfhnle */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9436 /* stocfhnlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9436 /* stocfhnlh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9446 /* stocfhnm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9446 /* stocfhnm */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9455 /* stocfhno */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9455 /* stocfhno */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9464 /* stocfhnp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9464 /* stocfhnp */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9473 /* stocfhnz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9473 /* stocfhnz */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9482 /* stocfho */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9482 /* stocfho */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9490 /* stocfhp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9490 /* stocfhp */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9498 /* stocfhz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9498 /* stocfhz */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9506 /* stocg */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9506 /* stocg */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9512 /* stocge */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9512 /* stocge */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9519 /* stocgh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9519 /* stocgh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9526 /* stocghe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9526 /* stocghe */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9534 /* stocgl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9534 /* stocgl */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9541 /* stocgle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9541 /* stocgle */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9549 /* stocglh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9549 /* stocglh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9557 /* stocgm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9557 /* stocgm */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9564 /* stocgne */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9564 /* stocgne */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9572 /* stocgnh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9572 /* stocgnh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9580 /* stocgnhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9580 /* stocgnhe */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9589 /* stocgnl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9589 /* stocgnl */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9597 /* stocgnle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9597 /* stocgnle */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9606 /* stocgnlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9606 /* stocgnlh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9615 /* stocgnm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9615 /* stocgnm */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9623 /* stocgno */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9623 /* stocgno */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9631 /* stocgnp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9631 /* stocgnp */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9639 /* stocgnz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9639 /* stocgnz */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9647 /* stocgo */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9647 /* stocgo */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9654 /* stocgp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9654 /* stocgp */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9661 /* stocgz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9661 /* stocgz */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9668 /* stoch */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9668 /* stoch */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9674 /* stoche */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9674 /* stoche */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9681 /* stocl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9681 /* stocl */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9687 /* stocle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9687 /* stocle */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9694 /* stoclh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9694 /* stoclh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9701 /* stocm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9701 /* stocm */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9707 /* stocne */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9707 /* stocne */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9714 /* stocnh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9714 /* stocnh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9721 /* stocnhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9721 /* stocnhe */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9729 /* stocnl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9729 /* stocnl */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9736 /* stocnle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9736 /* stocnle */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9744 /* stocnlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9744 /* stocnlh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9752 /* stocnm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9752 /* stocnm */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9759 /* stocno */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9759 /* stocno */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9766 /* stocnp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9766 /* stocnp */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9773 /* stocnz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9773 /* stocnz */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9780 /* stoco */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9780 /* stoco */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9786 /* stocp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9786 /* stocp */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9792 /* stocz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9792 /* stocz */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9798 /* stosm */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9804 /* stpq */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9804 /* stpq */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 9809 /* stpt */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9814 /* stpx */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9819 /* strag */, 3 /* 0, 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9825 /* strl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9825 /* strl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 9830 /* strv */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9830 /* strv */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9835 /* strvg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9835 /* strvg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 9841 /* strvh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9841 /* strvh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9847 /* stsch */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9853 /* stsi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9858 /* stura */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9858 /* stura */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 9864 /* sturg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 9870 /* sty */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9870 /* sty */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9874 /* su */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9874 /* su */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 9877 /* sur */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 9885 /* sw */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9885 /* sw */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 9888 /* swr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 9892 /* sxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 9897 /* sxr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 9901 /* sxtr */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_None },
  { 9906 /* sxtra */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 9912 /* sy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9912 /* sy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9915 /* tabort */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_FeatureTransactionalExecution },
  { 9926 /* tar */, 1 /* 0 */, MCK_AR32, AMFBS_None },
  { 9926 /* tar */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 9930 /* tb */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 9933 /* tbdr */, 5 /* 0, 2 */, MCK_FP64, AMFBS_None },
  { 9938 /* tbedr */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 9938 /* tbedr */, 4 /* 2 */, MCK_FP64, AMFBS_None },
  { 9944 /* tbegin */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_FeatureTransactionalExecution },
  { 9951 /* tbeginc */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_FeatureTransactionalExecution },
  { 9959 /* tcdb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9959 /* tcdb */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 9964 /* tceb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9964 /* tceb */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 9969 /* tcxb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9969 /* tcxb */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 9974 /* tdcdt */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9974 /* tdcdt */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 9980 /* tdcet */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9980 /* tdcet */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 9986 /* tdcxt */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9986 /* tdcxt */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 9992 /* tdgdt */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9992 /* tdgdt */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 9998 /* tdget */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9998 /* tdget */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 10004 /* tdgxt */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 10004 /* tdgxt */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 10015 /* thder */, 2 /* 1 */, MCK_FP32, AMFBS_None },
  { 10015 /* thder */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 10021 /* thdr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 10026 /* tm */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10029 /* tmh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 10033 /* tmhh */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 10038 /* tmhl */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 10043 /* tml */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 10047 /* tmlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 10052 /* tmll */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 10057 /* tmy */, 1 /* 0 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 10061 /* tp */, 1 /* 0 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
  { 10064 /* tpi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10068 /* tprot */, 3 /* 0, 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10074 /* tr */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10074 /* tr */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 10077 /* trace */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10077 /* trace */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 10083 /* tracg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 10083 /* tracg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 10095 /* trap4 */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10101 /* tre */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10101 /* tre */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10105 /* troo */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10105 /* troo */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10105 /* troo */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10105 /* troo */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10110 /* trot */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10110 /* trot */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10110 /* trot */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10110 /* trot */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10115 /* trt */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10115 /* trt */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 10119 /* trte */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10119 /* trte */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10119 /* trte */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10119 /* trte */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10124 /* trto */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10124 /* trto */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10124 /* trto */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10124 /* trto */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10129 /* trtr */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10129 /* trtr */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 10134 /* trtre */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10134 /* trtre */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10134 /* trtre */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10134 /* trtre */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10140 /* trtt */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10140 /* trtt */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10140 /* trtt */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10140 /* trtt */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10145 /* ts */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10148 /* tsch */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10153 /* unpk */, 3 /* 0, 1 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
  { 10158 /* unpka */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10158 /* unpka */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 10164 /* unpku */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10164 /* unpku */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 10174 /* va */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10177 /* vab */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10181 /* vac */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 10185 /* vacc */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10190 /* vaccb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10196 /* vaccc */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 10202 /* vacccq */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 10209 /* vaccf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10215 /* vaccg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10221 /* vacch */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10227 /* vaccq */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10233 /* vacq */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 10238 /* vaf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10242 /* vag */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10246 /* vah */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10250 /* vap */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 10254 /* vaq */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10258 /* vavg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10263 /* vavgb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10269 /* vavgf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10275 /* vavgg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10281 /* vavgh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10287 /* vavgl */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10293 /* vavglb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10300 /* vavglf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10307 /* vavglg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10314 /* vavglh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10321 /* vbperm */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 10328 /* vcdg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10333 /* vcdgb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10339 /* vcdlg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10345 /* vcdlgb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10352 /* vcefb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 10358 /* vcelfb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 10365 /* vceq */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10370 /* vceqb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10376 /* vceqbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10383 /* vceqf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10389 /* vceqfs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10396 /* vceqg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10402 /* vceqgs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10409 /* vceqh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10415 /* vceqhs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10422 /* vcfeb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 10428 /* vcfpl */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 10434 /* vcfps */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 10440 /* vcgd */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10445 /* vcgdb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10451 /* vch */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10455 /* vchb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10460 /* vchbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10466 /* vchf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10471 /* vchfs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10477 /* vchg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10482 /* vchgs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10488 /* vchh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10493 /* vchhs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10499 /* vchl */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10504 /* vchlb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10510 /* vchlbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10517 /* vchlf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10523 /* vchlfs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10530 /* vchlg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10536 /* vchlgs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10543 /* vchlh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10549 /* vchlhs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10556 /* vcksm */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10562 /* vclfeb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 10569 /* vclfp */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 10575 /* vclgd */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10581 /* vclgdb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10588 /* vclz */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10593 /* vclzb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10599 /* vclzf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10605 /* vclzg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10611 /* vclzh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10617 /* vcp */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 10621 /* vcsfp */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 10627 /* vctz */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10632 /* vctzb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10638 /* vctzf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10644 /* vctzg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10650 /* vctzh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10656 /* vcvb */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureVectorPackedDecimal },
  { 10656 /* vcvb */, 2 /* 1 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 10656 /* vcvb */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureVectorPackedDecimalEnhancement },
  { 10656 /* vcvb */, 2 /* 1 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimalEnhancement },
  { 10661 /* vcvbg */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureVectorPackedDecimal },
  { 10661 /* vcvbg */, 2 /* 1 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 10661 /* vcvbg */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureVectorPackedDecimalEnhancement },
  { 10661 /* vcvbg */, 2 /* 1 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimalEnhancement },
  { 10667 /* vcvd */, 2 /* 1 */, MCK_GR32, AMFBS_FeatureVectorPackedDecimal },
  { 10667 /* vcvd */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 10672 /* vcvdg */, 2 /* 1 */, MCK_GR64, AMFBS_FeatureVectorPackedDecimal },
  { 10672 /* vcvdg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 10678 /* vdp */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 10682 /* vec */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10686 /* vecb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10691 /* vecf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10696 /* vecg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10701 /* vech */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10706 /* vecl */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10711 /* veclb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10717 /* veclf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10723 /* veclg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10729 /* veclh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10735 /* verim */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10741 /* verimb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10748 /* verimf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10755 /* verimg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10762 /* verimh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10769 /* verll */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10769 /* verll */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10775 /* verllb */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10775 /* verllb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10782 /* verllf */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10782 /* verllf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10789 /* verllg */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10789 /* verllg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10796 /* verllh */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10796 /* verllh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10803 /* verllv */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10810 /* verllvb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10818 /* verllvf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10826 /* verllvg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10834 /* verllvh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10842 /* vesl */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10842 /* vesl */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10847 /* veslb */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10847 /* veslb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10853 /* veslf */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10853 /* veslf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10859 /* veslg */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10859 /* veslg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10865 /* veslh */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10865 /* veslh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10871 /* veslv */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10877 /* veslvb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10884 /* veslvf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10891 /* veslvg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10898 /* veslvh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10905 /* vesra */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10905 /* vesra */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10911 /* vesrab */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10911 /* vesrab */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10918 /* vesraf */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10918 /* vesraf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10925 /* vesrag */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10925 /* vesrag */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10932 /* vesrah */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10932 /* vesrah */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10939 /* vesrav */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10946 /* vesravb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10954 /* vesravf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10962 /* vesravg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10970 /* vesravh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10978 /* vesrl */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10978 /* vesrl */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10984 /* vesrlb */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10984 /* vesrlb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10991 /* vesrlf */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10991 /* vesrlf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10998 /* vesrlg */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10998 /* vesrlg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11005 /* vesrlh */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 11005 /* vesrlh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11012 /* vesrlv */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11019 /* vesrlvb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11027 /* vesrlvf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11035 /* vesrlvg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11043 /* vesrlvh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11051 /* vfa */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11055 /* vfadb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11061 /* vfae */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11061 /* vfae */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11066 /* vfaeb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11066 /* vfaeb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11072 /* vfaebs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11072 /* vfaebs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11079 /* vfaef */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11079 /* vfaef */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11085 /* vfaefs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11085 /* vfaefs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11092 /* vfaeh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11092 /* vfaeh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11098 /* vfaehs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11098 /* vfaehs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11105 /* vfaezb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11105 /* vfaezb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11112 /* vfaezbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11112 /* vfaezbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11120 /* vfaezf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11120 /* vfaezf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11127 /* vfaezfs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11127 /* vfaezfs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11135 /* vfaezh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11135 /* vfaezh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11142 /* vfaezhs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11142 /* vfaezhs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11150 /* vfasb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11156 /* vfce */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11161 /* vfcedb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11168 /* vfcedbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11176 /* vfcesb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11183 /* vfcesbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11191 /* vfch */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11196 /* vfchdb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11203 /* vfchdbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11211 /* vfche */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11217 /* vfchedb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11225 /* vfchedbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11234 /* vfchesb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11242 /* vfchesbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11251 /* vfchsb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11258 /* vfchsbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11266 /* vfd */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11270 /* vfddb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11276 /* vfdsb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11282 /* vfee */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11282 /* vfee */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11287 /* vfeeb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11287 /* vfeeb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11293 /* vfeebs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11300 /* vfeef */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11300 /* vfeef */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11306 /* vfeefs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11313 /* vfeeh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11313 /* vfeeh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11319 /* vfeehs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11326 /* vfeezb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11333 /* vfeezbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11341 /* vfeezf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11348 /* vfeezfs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11356 /* vfeezh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11363 /* vfeezhs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11371 /* vfene */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11371 /* vfene */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11377 /* vfeneb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11377 /* vfeneb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11384 /* vfenebs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11392 /* vfenef */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11392 /* vfenef */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11399 /* vfenefs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11407 /* vfeneh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11407 /* vfeneh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11414 /* vfenehs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11422 /* vfenezb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11430 /* vfenezbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11439 /* vfenezf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11447 /* vfenezfs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11456 /* vfenezh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11464 /* vfenezhs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11473 /* vfi */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11477 /* vfidb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11483 /* vfisb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11489 /* vfkedb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11496 /* vfkedbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11504 /* vfkesb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11511 /* vfkesbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11519 /* vfkhdb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11526 /* vfkhdbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11534 /* vfkhedb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11542 /* vfkhedbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11551 /* vfkhesb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11559 /* vfkhesbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11568 /* vfkhsb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11575 /* vfkhsbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11583 /* vflcdb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11590 /* vflcsb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11597 /* vfll */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11602 /* vflls */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11608 /* vflndb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11615 /* vflnsb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11622 /* vflpdb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11629 /* vflpsb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11636 /* vflr */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11641 /* vflrd */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11647 /* vfm */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11651 /* vfma */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 11656 /* vfmadb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 11663 /* vfmasb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11670 /* vfmax */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11676 /* vfmaxdb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11684 /* vfmaxsb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11692 /* vfmdb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11698 /* vfmin */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11704 /* vfmindb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11712 /* vfminsb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11720 /* vfms */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 11725 /* vfmsb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11731 /* vfmsdb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 11738 /* vfmssb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11745 /* vfnma */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11751 /* vfnmadb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11759 /* vfnmasb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11767 /* vfnms */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11773 /* vfnmsdb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11781 /* vfnmssb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11789 /* vfpso */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11795 /* vfpsodb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11803 /* vfpsosb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11811 /* vfs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11815 /* vfsdb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11821 /* vfsq */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11826 /* vfsqdb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11833 /* vfsqsb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11840 /* vfssb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11846 /* vftci */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11852 /* vftcidb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11860 /* vftcisb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11868 /* vgbm */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 11873 /* vgef */, 2 /* 1 */, MCK_BDVAddr64Disp12, AMFBS_FeatureVector },
  { 11873 /* vgef */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 11878 /* vgeg */, 2 /* 1 */, MCK_BDVAddr64Disp12, AMFBS_FeatureVector },
  { 11878 /* vgeg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 11883 /* vgfm */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11888 /* vgfma */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 11894 /* vgfmab */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 11901 /* vgfmaf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 11908 /* vgfmag */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 11915 /* vgfmah */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 11922 /* vgfmb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11928 /* vgfmf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11934 /* vgfmg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11940 /* vgfmh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11946 /* vgm */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 11950 /* vgmb */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 11955 /* vgmf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 11960 /* vgmg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 11965 /* vgmh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 11970 /* vistr */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11970 /* vistr */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11976 /* vistrb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11976 /* vistrb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11983 /* vistrbs */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11991 /* vistrf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11991 /* vistrf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11998 /* vistrfs */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12006 /* vistrh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12006 /* vistrh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12013 /* vistrhs */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12021 /* vl */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12021 /* vl */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12021 /* vl */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12021 /* vl */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12024 /* vlbb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12024 /* vlbb */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12029 /* vlbr */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12029 /* vlbr */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12034 /* vlbrf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12034 /* vlbrf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12040 /* vlbrg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12040 /* vlbrg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12046 /* vlbrh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12046 /* vlbrh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12052 /* vlbrq */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12052 /* vlbrq */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12058 /* vlbrrep */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12058 /* vlbrrep */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12066 /* vlbrrepf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12066 /* vlbrrepf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12075 /* vlbrrepg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12075 /* vlbrrepg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12084 /* vlbrreph */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12084 /* vlbrreph */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12093 /* vlc */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12097 /* vlcb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12102 /* vlcf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12107 /* vlcg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12112 /* vlch */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12117 /* vlde */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12122 /* vldeb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12128 /* vleb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12128 /* vleb */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12133 /* vlebrf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12133 /* vlebrf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12140 /* vlebrg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12140 /* vlebrg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12147 /* vlebrh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12147 /* vlebrh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12154 /* vled */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12159 /* vledb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12165 /* vlef */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12165 /* vlef */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12170 /* vleg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12170 /* vleg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12175 /* vleh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12175 /* vleh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12180 /* vleib */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12186 /* vleif */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12192 /* vleig */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12198 /* vleih */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12204 /* vler */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12204 /* vler */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12209 /* vlerf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12209 /* vlerf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12215 /* vlerg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12215 /* vlerg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12221 /* vlerh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12221 /* vlerh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12227 /* vlgv */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 12227 /* vlgv */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureVector },
  { 12227 /* vlgv */, 2 /* 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12232 /* vlgvb */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 12232 /* vlgvb */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureVector },
  { 12232 /* vlgvb */, 2 /* 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12238 /* vlgvf */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 12238 /* vlgvf */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureVector },
  { 12238 /* vlgvf */, 2 /* 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12244 /* vlgvg */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 12244 /* vlgvg */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureVector },
  { 12244 /* vlgvg */, 2 /* 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12250 /* vlgvh */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 12250 /* vlgvh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureVector },
  { 12250 /* vlgvh */, 2 /* 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12256 /* vlip */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 12261 /* vll */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_FeatureVector },
  { 12261 /* vll */, 2 /* 1 */, MCK_GR32, AMFBS_FeatureVector },
  { 12261 /* vll */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12265 /* vllebrz */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12265 /* vllebrz */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12273 /* vllebrze */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12273 /* vllebrze */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12282 /* vllebrzf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12282 /* vllebrzf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12291 /* vllebrzg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12291 /* vllebrzg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12300 /* vllebrzh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12300 /* vllebrzh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12309 /* vllez */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12309 /* vllez */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12315 /* vllezb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12315 /* vllezb */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12322 /* vllezf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12322 /* vllezf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12329 /* vllezg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12329 /* vllezg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12336 /* vllezh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12336 /* vllezh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12343 /* vllezlf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements1 },
  { 12343 /* vllezlf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 12351 /* vlm */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_FeatureVector },
  { 12351 /* vlm */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12351 /* vlm */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_FeatureVector },
  { 12351 /* vlm */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12355 /* vlp */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12359 /* vlpb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12364 /* vlpf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12369 /* vlpg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12374 /* vlph */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12379 /* vlr */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12383 /* vlrep */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12383 /* vlrep */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12389 /* vlrepb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12389 /* vlrepb */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12396 /* vlrepf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12396 /* vlrepf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12403 /* vlrepg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12403 /* vlrepg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12410 /* vlreph */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12410 /* vlreph */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12417 /* vlrl */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_FeatureVectorPackedDecimal },
  { 12417 /* vlrl */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 12422 /* vlrlr */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_FeatureVectorPackedDecimal },
  { 12422 /* vlrlr */, 2 /* 1 */, MCK_GR32, AMFBS_FeatureVectorPackedDecimal },
  { 12422 /* vlrlr */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 12428 /* vlvg */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 12428 /* vlvg */, 2 /* 1 */, MCK_GR64, AMFBS_FeatureVector },
  { 12428 /* vlvg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12433 /* vlvgb */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 12433 /* vlvgb */, 2 /* 1 */, MCK_GR32, AMFBS_FeatureVector },
  { 12433 /* vlvgb */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12439 /* vlvgf */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 12439 /* vlvgf */, 2 /* 1 */, MCK_GR32, AMFBS_FeatureVector },
  { 12439 /* vlvgf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12445 /* vlvgg */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 12445 /* vlvgg */, 2 /* 1 */, MCK_GR64, AMFBS_FeatureVector },
  { 12445 /* vlvgg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12451 /* vlvgh */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 12451 /* vlvgh */, 2 /* 1 */, MCK_GR32, AMFBS_FeatureVector },
  { 12451 /* vlvgh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12457 /* vlvgp */, 6 /* 1, 2 */, MCK_GR64, AMFBS_FeatureVector },
  { 12457 /* vlvgp */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12463 /* vmae */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12468 /* vmaeb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12474 /* vmaef */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12480 /* vmaeh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12486 /* vmah */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12491 /* vmahb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12497 /* vmahf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12503 /* vmahh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12509 /* vmal */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12514 /* vmalb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12520 /* vmale */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12526 /* vmaleb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12533 /* vmalef */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12540 /* vmaleh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12547 /* vmalf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12553 /* vmalh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12559 /* vmalhb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12566 /* vmalhf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12573 /* vmalhh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12580 /* vmalhw */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12587 /* vmalo */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12593 /* vmalob */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12600 /* vmalof */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12607 /* vmaloh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12614 /* vmao */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12619 /* vmaob */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12625 /* vmaof */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12631 /* vmaoh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12637 /* vme */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12641 /* vmeb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12646 /* vmef */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12651 /* vmeh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12656 /* vmh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12660 /* vmhb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12665 /* vmhf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12670 /* vmhh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12675 /* vml */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12679 /* vmlb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12684 /* vmle */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12689 /* vmleb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12695 /* vmlef */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12701 /* vmleh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12707 /* vmlf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12712 /* vmlh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12717 /* vmlhb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12723 /* vmlhf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12729 /* vmlhh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12735 /* vmlhw */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12741 /* vmlo */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12746 /* vmlob */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12752 /* vmlof */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12758 /* vmloh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12764 /* vmn */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12768 /* vmnb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12773 /* vmnf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12778 /* vmng */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12783 /* vmnh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12788 /* vmnl */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12793 /* vmnlb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12799 /* vmnlf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12805 /* vmnlg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12811 /* vmnlh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12817 /* vmo */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12821 /* vmob */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12826 /* vmof */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12831 /* vmoh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12836 /* vmp */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 12840 /* vmrh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12845 /* vmrhb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12851 /* vmrhf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12857 /* vmrhg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12863 /* vmrhh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12869 /* vmrl */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12874 /* vmrlb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12880 /* vmrlf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12886 /* vmrlg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12892 /* vmrlh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12898 /* vmsl */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 12903 /* vmslg */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 12909 /* vmsp */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 12914 /* vmx */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12918 /* vmxb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12923 /* vmxf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12928 /* vmxg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12933 /* vmxh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12938 /* vmxl */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12943 /* vmxlb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12949 /* vmxlf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12955 /* vmxlg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12961 /* vmxlh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12967 /* vn */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12970 /* vnc */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12974 /* vnn */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 12978 /* vno */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12982 /* vnot */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12987 /* vnx */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 12991 /* vo */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12994 /* voc */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 12998 /* vone */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13003 /* vpdi */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13008 /* vperm */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13014 /* vpk */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13018 /* vpkf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13023 /* vpkg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13028 /* vpkh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13033 /* vpkls */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13039 /* vpklsf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13046 /* vpklsfs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13054 /* vpklsg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13061 /* vpklsgs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13069 /* vpklsh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13076 /* vpklshs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13084 /* vpks */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13089 /* vpksf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13095 /* vpksfs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13102 /* vpksg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13108 /* vpksgs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13115 /* vpksh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13121 /* vpkshs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13128 /* vpkz */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_FeatureVectorPackedDecimal },
  { 13128 /* vpkz */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 13133 /* vpopct */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13140 /* vpopctb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 13148 /* vpopctf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 13156 /* vpopctg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 13164 /* vpopcth */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 13172 /* vpsop */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 13178 /* vrep */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13183 /* vrepb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13189 /* vrepf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13195 /* vrepg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13201 /* vreph */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13207 /* vrepi */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13213 /* vrepib */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13220 /* vrepif */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13227 /* vrepig */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13234 /* vrepih */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13241 /* vrp */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 13245 /* vs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13248 /* vsb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13252 /* vsbcbi */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13259 /* vsbcbiq */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13267 /* vsbi */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13272 /* vsbiq */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13278 /* vscbi */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13284 /* vscbib */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13291 /* vscbif */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13298 /* vscbig */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13305 /* vscbih */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13312 /* vscbiq */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13319 /* vscef */, 2 /* 1 */, MCK_BDVAddr64Disp12, AMFBS_FeatureVector },
  { 13319 /* vscef */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13325 /* vsceg */, 2 /* 1 */, MCK_BDVAddr64Disp12, AMFBS_FeatureVector },
  { 13325 /* vsceg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13331 /* vsdp */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 13336 /* vseg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13341 /* vsegb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13347 /* vsegf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13353 /* vsegh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13359 /* vsel */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13364 /* vsf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13368 /* vsg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13372 /* vsh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13376 /* vsl */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13380 /* vslb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13385 /* vsld */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13390 /* vsldb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13396 /* vsp */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 13400 /* vsq */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13404 /* vsra */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13409 /* vsrab */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13415 /* vsrd */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13420 /* vsrl */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13425 /* vsrlb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13431 /* vsrp */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 13436 /* vst */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 13436 /* vst */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13436 /* vst */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 13436 /* vst */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13440 /* vstbr */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13440 /* vstbr */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13446 /* vstbrf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13446 /* vstbrf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13453 /* vstbrg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13453 /* vstbrg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13460 /* vstbrh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13460 /* vstbrh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13467 /* vstbrq */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13467 /* vstbrq */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13474 /* vsteb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 13474 /* vsteb */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13480 /* vstebrf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13480 /* vstebrf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13488 /* vstebrg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13488 /* vstebrg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13496 /* vstebrh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13496 /* vstebrh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13504 /* vstef */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 13504 /* vstef */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13510 /* vsteg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 13510 /* vsteg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13516 /* vsteh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 13516 /* vsteh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13522 /* vster */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13522 /* vster */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13528 /* vsterf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13528 /* vsterf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13535 /* vsterg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13535 /* vsterg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13542 /* vsterh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13542 /* vsterh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13549 /* vstl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_FeatureVector },
  { 13549 /* vstl */, 2 /* 1 */, MCK_GR32, AMFBS_FeatureVector },
  { 13549 /* vstl */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13554 /* vstm */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_FeatureVector },
  { 13554 /* vstm */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13554 /* vstm */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_FeatureVector },
  { 13554 /* vstm */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13559 /* vstrc */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13559 /* vstrc */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13565 /* vstrcb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13565 /* vstrcb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13572 /* vstrcbs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13572 /* vstrcbs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13580 /* vstrcf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13580 /* vstrcf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13587 /* vstrcfs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13587 /* vstrcfs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13595 /* vstrch */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13595 /* vstrch */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13602 /* vstrchs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13602 /* vstrchs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13610 /* vstrczb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13610 /* vstrczb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13618 /* vstrczbs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13618 /* vstrczbs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13627 /* vstrczf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13627 /* vstrczf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13635 /* vstrczfs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13635 /* vstrczfs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13644 /* vstrczh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13644 /* vstrczh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13652 /* vstrczhs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13652 /* vstrczhs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13661 /* vstrl */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_FeatureVectorPackedDecimal },
  { 13661 /* vstrl */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 13667 /* vstrlr */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_FeatureVectorPackedDecimal },
  { 13667 /* vstrlr */, 2 /* 1 */, MCK_GR32, AMFBS_FeatureVectorPackedDecimal },
  { 13667 /* vstrlr */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 13674 /* vstrs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13674 /* vstrs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13680 /* vstrsb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13680 /* vstrsb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13687 /* vstrsf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13687 /* vstrsf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13694 /* vstrsh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13694 /* vstrsh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13701 /* vstrszb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13709 /* vstrszf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13717 /* vstrszh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13725 /* vsum */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13730 /* vsumb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13736 /* vsumg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13742 /* vsumgf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13749 /* vsumgh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13756 /* vsumh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13762 /* vsumq */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13768 /* vsumqf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13775 /* vsumqg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13782 /* vtm */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13786 /* vtp */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 13790 /* vuph */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13795 /* vuphb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13801 /* vuphf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13807 /* vuphh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13813 /* vupkz */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_FeatureVectorPackedDecimal },
  { 13813 /* vupkz */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 13819 /* vupl */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13824 /* vuplb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13830 /* vuplf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13836 /* vuplh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13842 /* vuplhb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13849 /* vuplhf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13856 /* vuplhh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13863 /* vuplhw */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13870 /* vupll */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13876 /* vupllb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13883 /* vupllf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13890 /* vupllh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13897 /* vx */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13900 /* vzero */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13906 /* wcdgb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 13912 /* wcdlgb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 13919 /* wcefb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements2 },
  { 13925 /* wcelfb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements2 },
  { 13932 /* wcfeb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements2 },
  { 13938 /* wcgdb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 13944 /* wclfeb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements2 },
  { 13951 /* wclgdb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 13958 /* wfadb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVector },
  { 13964 /* wfasb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 13970 /* wfaxb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 13976 /* wfc */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 13980 /* wfcdb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 13986 /* wfcedb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVector },
  { 13993 /* wfcedbs */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVector },
  { 14001 /* wfcesb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14008 /* wfcesbs */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14016 /* wfcexb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14023 /* wfcexbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14031 /* wfchdb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVector },
  { 14038 /* wfchdbs */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVector },
  { 14046 /* wfchedb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVector },
  { 14054 /* wfchedbs */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVector },
  { 14063 /* wfchesb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14071 /* wfchesbs */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14080 /* wfchexb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14088 /* wfchexbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14097 /* wfchsb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14104 /* wfchsbs */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14112 /* wfchxb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14119 /* wfchxbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14127 /* wfcsb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14133 /* wfcxb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14139 /* wfddb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVector },
  { 14145 /* wfdsb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14151 /* wfdxb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14157 /* wfidb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 14163 /* wfisb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14169 /* wfixb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14175 /* wfk */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 14179 /* wfkdb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 14185 /* wfkedb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14192 /* wfkedbs */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14200 /* wfkesb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14207 /* wfkesbs */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14215 /* wfkexb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14222 /* wfkexbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14230 /* wfkhdb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14237 /* wfkhdbs */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14245 /* wfkhedb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14253 /* wfkhedbs */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14262 /* wfkhesb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14270 /* wfkhesbs */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14279 /* wfkhexb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14287 /* wfkhexbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14296 /* wfkhsb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14303 /* wfkhsbs */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14311 /* wfkhxb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14318 /* wfkhxbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14326 /* wfksb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14332 /* wfkxb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14338 /* wflcdb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 14345 /* wflcsb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14352 /* wflcxb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14359 /* wflld */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14359 /* wflld */, 2 /* 1 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14365 /* wflls */, 2 /* 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14365 /* wflls */, 1 /* 0 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14371 /* wflndb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 14378 /* wflnsb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14385 /* wflnxb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14392 /* wflpdb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 14399 /* wflpsb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14406 /* wflpxb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14413 /* wflrd */, 1 /* 0 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14413 /* wflrd */, 2 /* 1 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14419 /* wflrx */, 2 /* 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14419 /* wflrx */, 1 /* 0 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14425 /* wfmadb */, 15 /* 0, 1, 2, 3 */, MCK_VR64, AMFBS_FeatureVector },
  { 14432 /* wfmasb */, 15 /* 0, 1, 2, 3 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14439 /* wfmaxb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14446 /* wfmaxdb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14454 /* wfmaxsb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14462 /* wfmaxxb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14470 /* wfmdb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVector },
  { 14476 /* wfmindb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14484 /* wfminsb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14492 /* wfminxb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14500 /* wfmsb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14506 /* wfmsdb */, 15 /* 0, 1, 2, 3 */, MCK_VR64, AMFBS_FeatureVector },
  { 14513 /* wfmssb */, 15 /* 0, 1, 2, 3 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14520 /* wfmsxb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14527 /* wfmxb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14533 /* wfnmadb */, 15 /* 0, 1, 2, 3 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14541 /* wfnmasb */, 15 /* 0, 1, 2, 3 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14549 /* wfnmaxb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14557 /* wfnmsdb */, 15 /* 0, 1, 2, 3 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14565 /* wfnmssb */, 15 /* 0, 1, 2, 3 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14573 /* wfnmsxb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14581 /* wfpsodb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 14589 /* wfpsosb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14597 /* wfpsoxb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14605 /* wfsdb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVector },
  { 14611 /* wfsqdb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 14618 /* wfsqsb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14625 /* wfsqxb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14632 /* wfssb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14638 /* wfsxb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14644 /* wftcidb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 14652 /* wftcisb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14660 /* wftcixb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14668 /* wldeb */, 2 /* 1 */, MCK_VR32, AMFBS_FeatureVector },
  { 14668 /* wldeb */, 1 /* 0 */, MCK_VR64, AMFBS_FeatureVector },
  { 14674 /* wledb */, 1 /* 0 */, MCK_VR32, AMFBS_FeatureVector },
  { 14674 /* wledb */, 2 /* 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 14680 /* x */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 14680 /* x */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 14682 /* xc */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 14682 /* xc */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 14685 /* xg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 14685 /* xg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 14688 /* xgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 14692 /* xgrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureDistinctOps },
  { 14697 /* xi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 14700 /* xihf */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 14705 /* xilf */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 14710 /* xiy */, 1 /* 0 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 14714 /* xr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 14717 /* xrk */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 14726 /* xy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 14726 /* xy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 14729 /* zap */, 3 /* 0, 1 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
};

OperandMatchResultTy SystemZAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_ADDR128:
    return parseADDR128(Operands);
  case MCK_ADDR32:
    return parseADDR32(Operands);
  case MCK_ADDR64:
    return parseADDR64(Operands);
  case MCK_AR32:
    return parseAR32(Operands);
  case MCK_AnyReg:
    return parseAnyReg(Operands);
  case MCK_BDAddr32Disp12:
    return parseBDAddr32(Operands);
  case MCK_BDAddr32Disp20:
    return parseBDAddr32(Operands);
  case MCK_BDAddr64Disp12:
    return parseBDAddr64(Operands);
  case MCK_BDAddr64Disp20:
    return parseBDAddr64(Operands);
  case MCK_BDLAddr64Disp12Len4:
    return parseBDLAddr64(Operands);
  case MCK_BDLAddr64Disp12Len8:
    return parseBDLAddr64(Operands);
  case MCK_BDRAddr64Disp12:
    return parseBDRAddr64(Operands);
  case MCK_BDVAddr64Disp12:
    return parseBDVAddr64(Operands);
  case MCK_BDXAddr64Disp12:
    return parseBDXAddr64(Operands);
  case MCK_BDXAddr64Disp20:
    return parseBDXAddr64(Operands);
  case MCK_CR64:
    return parseCR64(Operands);
  case MCK_FP128:
    return parseFP128(Operands);
  case MCK_FP32:
    return parseFP32(Operands);
  case MCK_FP64:
    return parseFP64(Operands);
  case MCK_GR128:
    return parseGR128(Operands);
  case MCK_GR32:
    return parseGR32(Operands);
  case MCK_GR64:
    return parseGR64(Operands);
  case MCK_GRH32:
    return parseGRH32(Operands);
  case MCK_GRX32:
    return parseGRX32(Operands);
  case MCK_PCRel12:
    return parsePCRel12(Operands);
  case MCK_PCRel16:
    return parsePCRel16(Operands);
  case MCK_PCRel24:
    return parsePCRel24(Operands);
  case MCK_PCRel32:
    return parsePCRel32(Operands);
  case MCK_PCRelTLS16:
    return parsePCRelTLS16(Operands);
  case MCK_PCRelTLS32:
    return parsePCRelTLS32(Operands);
  case MCK_VF128:
    return parseVF128(Operands);
  case MCK_VR128:
    return parseVR128(Operands);
  case MCK_VR32:
    return parseVR32(Operands);
  case MCK_VR64:
    return parseVR64(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

OperandMatchResultTy SystemZAsmParser::
MatchOperandParserImpl(OperandVector &Operands,
                       StringRef Mnemonic,
                       bool ParseForAllFeatures) {
  // Get the current feature set.
  const FeatureBitset &AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size() - 1;
  // Search the table.
  auto MnemonicRange =
    std::equal_range(std::begin(OperandMatchTable), std::end(OperandMatchTable),
                     Mnemonic, LessOpcodeOperand());

  if (MnemonicRange.first == MnemonicRange.second)
    return MatchOperand_NoMatch;

  for (const OperandMatchEntry *it = MnemonicRange.first,
       *ie = MnemonicRange.second; it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());

    // check if the available features match
    const FeatureBitset &RequiredFeatures = FeatureBitsets[it->RequiredFeaturesIdx];
    if (!ParseForAllFeatures && (AvailableFeatures & RequiredFeatures) != RequiredFeatures)
        continue;

    // check if the operand in question has a custom parser.
    if (!(it->OperandMask & (1 << NextOpNum)))
      continue;

    // call custom parse method to handle the operand
    OperandMatchResultTy Result = tryCustomParseOperand(Operands, it->Class);
    if (Result != MatchOperand_NoMatch)
      return Result;
  }

  // Okay, we had no match.
  return MatchOperand_NoMatch;
}

#endif // GET_MATCHER_IMPLEMENTATION


#ifdef GET_MNEMONIC_SPELL_CHECKER
#undef GET_MNEMONIC_SPELL_CHECKER

static std::string SystemZMnemonicSpellCheck(StringRef S, const FeatureBitset &FBS, unsigned VariantID) {
  const unsigned MaxEditDist = 2;
  std::vector<StringRef> Candidates;
  StringRef Prev = "";

  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }

  for (auto I = Start; I < End; I++) {
    // Ignore unsupported instructions.
    const FeatureBitset &RequiredFeatures = FeatureBitsets[I->RequiredFeaturesIdx];
    if ((FBS & RequiredFeatures) != RequiredFeatures)
      continue;

    StringRef T = I->getMnemonic();
    // Avoid recomputing the edit distance for the same string.
    if (T.equals(Prev))
      continue;

    Prev = T;
    unsigned Dist = S.edit_distance(T, false, MaxEditDist);
    if (Dist <= MaxEditDist)
      Candidates.push_back(T);
  }

  if (Candidates.empty())
    return "";

  std::string Res = ", did you mean: ";
  unsigned i = 0;
  for( ; i < Candidates.size() - 1; i++)
    Res += Candidates[i].str() + ", ";
  return Res + Candidates[i].str() + "?";
}

#endif // GET_MNEMONIC_SPELL_CHECKER


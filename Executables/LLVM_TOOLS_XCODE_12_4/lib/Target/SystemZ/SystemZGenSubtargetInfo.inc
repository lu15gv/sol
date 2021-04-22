/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Subtarget Enumeration Source Fragment                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM

namespace llvm {
namespace SystemZ {
enum {
  FeatureDFPPackedConversion = 0,
  FeatureDFPZonedConversion = 1,
  FeatureDeflateConversion = 2,
  FeatureDistinctOps = 3,
  FeatureEnhancedDAT2 = 4,
  FeatureEnhancedSort = 5,
  FeatureExecutionHint = 6,
  FeatureFPExtension = 7,
  FeatureFastSerialization = 8,
  FeatureGuardedStorage = 9,
  FeatureHighWord = 10,
  FeatureInsertReferenceBitsMultiple = 11,
  FeatureInterlockedAccess1 = 12,
  FeatureLoadAndTrap = 13,
  FeatureLoadAndZeroRightmostByte = 14,
  FeatureLoadStoreOnCond = 15,
  FeatureLoadStoreOnCond2 = 16,
  FeatureMessageSecurityAssist3 = 17,
  FeatureMessageSecurityAssist4 = 18,
  FeatureMessageSecurityAssist5 = 19,
  FeatureMessageSecurityAssist7 = 20,
  FeatureMessageSecurityAssist8 = 21,
  FeatureMessageSecurityAssist9 = 22,
  FeatureMiscellaneousExtensions = 23,
  FeatureMiscellaneousExtensions2 = 24,
  FeatureMiscellaneousExtensions3 = 25,
  FeaturePopulationCount = 26,
  FeatureProcessorAssist = 27,
  FeatureResetReferenceBitsMultiple = 28,
  FeatureTransactionalExecution = 29,
  FeatureVector = 30,
  FeatureVectorEnhancements1 = 31,
  FeatureVectorEnhancements2 = 32,
  FeatureVectorPackedDecimal = 33,
  FeatureVectorPackedDecimalEnhancement = 34,
  NumSubtargetFeatures = 35
};
} // end namespace SystemZ
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV SystemZFeatureKV[] = {
  { "deflate-conversion", "Assume that the deflate-conversion facility is installed", SystemZ::FeatureDeflateConversion, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "dfp-packed-conversion", "Assume that the DFP packed-conversion facility is installed", SystemZ::FeatureDFPPackedConversion, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "dfp-zoned-conversion", "Assume that the DFP zoned-conversion facility is installed", SystemZ::FeatureDFPZonedConversion, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "distinct-ops", "Assume that the distinct-operands facility is installed", SystemZ::FeatureDistinctOps, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "enhanced-dat-2", "Assume that the enhanced-DAT facility 2 is installed", SystemZ::FeatureEnhancedDAT2, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "enhanced-sort", "Assume that the enhanced-sort facility is installed", SystemZ::FeatureEnhancedSort, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "execution-hint", "Assume that the execution-hint facility is installed", SystemZ::FeatureExecutionHint, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "fast-serialization", "Assume that the fast-serialization facility is installed", SystemZ::FeatureFastSerialization, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "fp-extension", "Assume that the floating-point extension facility is installed", SystemZ::FeatureFPExtension, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "guarded-storage", "Assume that the guarded-storage facility is installed", SystemZ::FeatureGuardedStorage, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "high-word", "Assume that the high-word facility is installed", SystemZ::FeatureHighWord, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "insert-reference-bits-multiple", "Assume that the insert-reference-bits-multiple facility is installed", SystemZ::FeatureInsertReferenceBitsMultiple, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "interlocked-access1", "Assume that interlocked-access facility 1 is installed", SystemZ::FeatureInterlockedAccess1, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "load-and-trap", "Assume that the load-and-trap facility is installed", SystemZ::FeatureLoadAndTrap, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "load-and-zero-rightmost-byte", "Assume that the load-and-zero-rightmost-byte facility is installed", SystemZ::FeatureLoadAndZeroRightmostByte, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "load-store-on-cond", "Assume that the load/store-on-condition facility is installed", SystemZ::FeatureLoadStoreOnCond, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "load-store-on-cond-2", "Assume that the load/store-on-condition facility 2 is installed", SystemZ::FeatureLoadStoreOnCond2, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "message-security-assist-extension3", "Assume that the message-security-assist extension facility 3 is installed", SystemZ::FeatureMessageSecurityAssist3, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "message-security-assist-extension4", "Assume that the message-security-assist extension facility 4 is installed", SystemZ::FeatureMessageSecurityAssist4, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "message-security-assist-extension5", "Assume that the message-security-assist extension facility 5 is installed", SystemZ::FeatureMessageSecurityAssist5, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "message-security-assist-extension7", "Assume that the message-security-assist extension facility 7 is installed", SystemZ::FeatureMessageSecurityAssist7, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "message-security-assist-extension8", "Assume that the message-security-assist extension facility 8 is installed", SystemZ::FeatureMessageSecurityAssist8, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "message-security-assist-extension9", "Assume that the message-security-assist extension facility 9 is installed", SystemZ::FeatureMessageSecurityAssist9, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "miscellaneous-extensions", "Assume that the miscellaneous-extensions facility is installed", SystemZ::FeatureMiscellaneousExtensions, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "miscellaneous-extensions-2", "Assume that the miscellaneous-extensions facility 2 is installed", SystemZ::FeatureMiscellaneousExtensions2, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "miscellaneous-extensions-3", "Assume that the miscellaneous-extensions facility 3 is installed", SystemZ::FeatureMiscellaneousExtensions3, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "population-count", "Assume that the population-count facility is installed", SystemZ::FeaturePopulationCount, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "processor-assist", "Assume that the processor-assist facility is installed", SystemZ::FeatureProcessorAssist, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "reset-reference-bits-multiple", "Assume that the reset-reference-bits-multiple facility is installed", SystemZ::FeatureResetReferenceBitsMultiple, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "transactional-execution", "Assume that the transactional-execution facility is installed", SystemZ::FeatureTransactionalExecution, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "vector", "Assume that the vectory facility is installed", SystemZ::FeatureVector, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "vector-enhancements-1", "Assume that the vector enhancements facility 1 is installed", SystemZ::FeatureVectorEnhancements1, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "vector-enhancements-2", "Assume that the vector enhancements facility 2 is installed", SystemZ::FeatureVectorEnhancements2, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "vector-packed-decimal", "Assume that the vector packed decimal facility is installed", SystemZ::FeatureVectorPackedDecimal, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "vector-packed-decimal-enhancement", "Assume that the vector packed decimal enhancement facility is installed", SystemZ::FeatureVectorPackedDecimalEnhancement, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#if !defined(NDEBUG) || defined(LLVM_ENABLE_DUMP)
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry SystemZWriteProcResTable[] = {
  { 0,  0}, // Invalid
  { 3,  1}, // #1
  { 6,  1}, // #2
  { 4,  1}, // #3
  { 3,  1}, // #4
  { 4,  1}, // #5
  { 3,  3}, // #6
  { 4,  1}, // #7
  { 3,  2}, // #8
  { 6,  1}, // #9
  { 3,  2}, // #10
  { 4,  1}, // #11
  { 3,  1}, // #12
  { 4,  3}, // #13
  { 5,  1}, // #14
  { 4,  5}, // #15
  { 3,  5}, // #16
  { 4,  2}, // #17
  { 3,  1}, // #18
  { 4,  2}, // #19
  { 2,  4}, // #20
  { 3,  5}, // #21
  { 2,  4}, // #22
  { 3,  4}, // #23
  { 4,  1}, // #24
  { 2,  4}, // #25
  { 3,  3}, // #26
  { 4,  1}, // #27
  { 3,  5}, // #28
  { 4,  1}, // #29
  { 3,  6}, // #30
  { 4,  2}, // #31
  { 3,  2}, // #32
  { 4,  2}, // #33
  { 3,  3}, // #34
  { 4,  2}, // #35
  { 1,  2}, // #36
  { 3,  1}, // #37
  { 4,  2}, // #38
  { 1,  1}, // #39
  { 3,  1}, // #40
  { 4,  1}, // #41
  { 1,  4}, // #42
  { 3,  3}, // #43
  { 4,  1}, // #44
  { 1,  1}, // #45
  { 3,  2}, // #46
  { 4,  1}, // #47
  { 1,  4}, // #48
  { 3,  1}, // #49
  { 4,  2}, // #50
  { 1,  4}, // #51
  { 3,  2}, // #52
  { 4,  3}, // #53
  { 1,  4}, // #54
  { 4,  2}, // #55
  { 1,  2}, // #56
  { 4,  2}, // #57
  { 3,  5}, // #58
  { 4,  5}, // #59
  { 2,  1}, // #60
  { 2,  2}, // #61
  { 2,  1}, // #62
  { 4,  1}, // #63
  { 2,  4}, // #64
  { 4,  1}, // #65
  { 2,  1}, // #66
  { 3,  1}, // #67
  { 2,  4}, // #68
  { 3,  1}, // #69
  { 2,  2}, // #70
  { 3,  1}, // #71
  { 2,  2}, // #72
  { 4,  1}, // #73
  { 1,  2}, // #74
  { 4,  1}, // #75
  { 1,  2}, // #76
  { 3,  1}, // #77
  { 4,  1}, // #78
  { 1,  1}, // #79
  { 4,  1}, // #80
  { 1,  4}, // #81
  { 4,  1}, // #82
  { 3,  2}, // #83
  { 4,  4}, // #84
  { 1,  1}, // #85
  { 2,  1}, // #86
  { 1,  2}, // #87
  { 2,  2}, // #88
  { 1,  2}, // #89
  { 5,  1}, // #90
  { 1,  2}, // #91
  { 2,  1}, // #92
  { 2,  1}, // #93
  { 3,  3}, // #94
  { 2,  3}, // #95
  { 3,  2}, // #96
  { 2,  1}, // #97
  { 3,  2}, // #98
  { 1,  1}, // #99
  { 2,  1}, // #100
  { 3,  1}, // #101
  { 1,  3}, // #102
  { 2,  2}, // #103
  { 3,  1}, // #104
  { 1,  2}, // #105
  { 2,  4}, // #106
  { 3,  3}, // #107
  { 1,  3}, // #108
  { 3,  2}, // #109
  { 2,  1}, // #110
  { 3,  2}, // #111
  { 7,  2}, // #112
  { 2,  1}, // #113
  { 3,  1}, // #114
  { 7,  1}, // #115
  { 2,  3}, // #116
  { 3,  1}, // #117
  { 7,  4}, // #118
  { 2,  2}, // #119
  { 3,  1}, // #120
  { 7,  1}, // #121
  { 2,  1}, // #122
  { 3,  3}, // #123
  { 7,  1}, // #124
  { 2,  1}, // #125
  { 3,  3}, // #126
  { 7,  4}, // #127
  { 3,  2}, // #128
  { 7,  1}, // #129
  { 2,  1}, // #130
  { 3,  5}, // #131
  { 2,  5}, // #132
  { 3,  2}, // #133
  { 2,  1}, // #134
  { 7,  1}, // #135
  { 2,  1}, // #136
  { 7,  4}, // #137
  { 2,  1}, // #138
  { 7,  2}, // #139
  { 3,  1}, // #140
  { 6, 30}, // #141
  { 3,  1}, // #142
  { 7,  2}, // #143
  { 2,  2}, // #144
  { 7,  4}, // #145
  { 3,  2}, // #146
  { 7,  4}, // #147
  { 2,  1}, // #148
  { 3,  1}, // #149
  { 7,  2}, // #150
  { 1,  2}, // #151
  { 2,  1}, // #152
  { 3,  5}, // #153
  { 1,  1}, // #154
  { 3,  5}, // #155
  { 1,  2}, // #156
  { 2,  1}, // #157
  { 3,  3}, // #158
  { 1,  2}, // #159
  { 2,  2}, // #160
  { 3,  4}, // #161
  { 2,  1}, // #162
  { 3,  3}, // #163
  { 7,  2}, // #164
  { 2,  1}, // #165
  { 3,  2}, // #166
  { 7,  1} // #167
}; // SystemZWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry SystemZWriteLatencyTable[] = {
  { 0,  0}, // Invalid
  { 1,  0}, // #1 WLat1_LSU_FXb
  { 1,  0}, // #2 FXU_VBU_LSU_FXU3_FXU2_LSU2_LSU5_FXU5_GroupAlone_FXa_FXb_FXa2_FXb2_EndGroup_FXb3_WLat1_VecDFX
  { 1,  0}, // #3 NormalGr_EndGroup_LSU_VBU_LSU3_FXU5_LSU2_GroupAlone_DFU4_LSU5_FXb_FXb2_FXa2_FXb3_VecDF4_VecDFX4_VecDFX2_FXU2
  { 1,  0}, // #4 WLat1_GroupAlone_GroupAlone2_NormalGr_LSU_LSU2_DFU2_Cracked_LSU3_VecDF_VecDF2_VecXsPm_EndGroup
  { 1,  0}, // #5 FXU_GroupAlone3_GroupAlone2_Cracked
  { 1,  0}, // #6 LSU
  { 1,  0}, // #7 GroupAlone
  {30,  0}, // #8 WLat30
  {30,  0}, // #9 WLat30
  {30,  0}, // #10 WLat30
  { 1,  0}, // #11 MCD
  { 4,  0}, // #12 LSULatency_WLat4
  { 1,  0}, // #13 LSU_DFU_FXb_VecMul_VecStr_FXa
  { 1,  0}, // #14 NormalGr_GroupAlone
  { 5,  0}, // #15 LSULatency_WLat5
  { 1,  0}, // #16 FXU_LSU_FXU2_DFU2_FXb_FXa
  { 1,  0}, // #17 LSU_NormalGr_FXU_GroupAlone_DFU4_FXa_VecXsPm
  { 1,  0}, // #18 NormalGr_EndGroup_GroupAlone_GroupAlone2_Cracked
  { 5,  0}, // #19 LSULatency_WLat5
  { 5,  0}, // #20 LSULatency_WLat5
  { 1,  0}, // #21 LSU_FXU_FXa_LSU2_FXa2
  { 1,  0}, // #22 FXU_LSU_FXa_GroupAlone
  { 1,  0}, // #23 NormalGr
  {10,  0}, // #24 WLat10
  {10,  0}, // #25 WLat10
  { 1,  0}, // #26 LSU5_FPU4_DFU4_DFU2_VecDF4_VecDF2_LSU2
  { 1,  0}, // #27 GroupAlone_NormalGr
  { 2,  0}, // #28 WLat2
  { 2,  0}, // #29 WLat2
  { 1,  0}, // #30 FXU_FXU2_FXa_FXa2_FXb_FXb2_VecXsPm_VecDFX
  { 1,  0}, // #31 NormalGr_GroupAlone_Cracked_GroupAlone2_EndGroup
  { 3,  0}, // #32 WLat3
  { 3,  0}, // #33 WLat3
  { 1,  0}, // #34 FXU2_LSU_FXa2_FXb_VecXsPm_VecXsPm2_VecStr_VecDFX
  { 1,  0}, // #35 GroupAlone_NormalGr_EndGroup_Cracked
  { 6,  0}, // #36 LSULatency_WLat6
  { 6,  0}, // #37 LSULatency_WLat6
  { 1,  0}, // #38 FXU_FXU2_LSU2_DFU4_FXa_FXb_VecXsPm_FXa2_VecDFX_VecBF
  { 1,  0}, // #39 LSU_NormalGr_GroupAlone_LSU2
  { 1,  0}, // #40 NormalGr_GroupAlone_Cracked_EndGroup_GroupAlone2
  { 9,  0}, // #41 LSULatency_WLat9
  { 1,  0}, // #42 LSU2_FXU2_DFU2_FPU_FPU2_FPU4_FXa2_VecDF2_FXb
  { 1,  0}, // #43 FXU_GroupAlone_LSU_LSU2_FXU5_NormalGr_DFU_DFU4_FXb5_VecDF
  { 1,  0}, // #44 GroupAlone_NormalGr_GroupAlone2_Cracked
  {10,  0}, // #45 LSULatency_WLat10
  { 1,  0}, // #46 FXU_LSU_FXa_FXa2_VecBF_VecBF2
  { 1,  0}, // #47 LSU_FPU4_DFU_DFU2_VecDF4
  { 1,  0}, // #48 NormalGr_GroupAlone2
  {12,  0}, // #49 LSULatency_WLat12
  { 1,  0}, // #50 FXU_FPU_FXU2_FXa_LSU5_VecBF4_FXb2_FXa2
  { 1,  0}, // #51 LSU_DFU4_GroupAlone_VecDF4_VecDF2
  { 1,  0}, // #52 NormalGr_GroupAlone2_Cracked
  { 8,  0}, // #53 WLat8_LSULatency
  { 1,  0}, // #54 FXU_LSU2_FPU_DFU_FXa_VecBF4_VecDF_VecBF2_FXa2
  { 1,  0}, // #55 NormalGr_GroupAlone
  {15,  0}, // #56 LSULatency_WLat15
  { 1,  0}, // #57 FXU2_FPU4_FPU2_LSU2_FXa2_VecDF_VecDF2_FXb2_VecDF4
  { 1,  0}, // #58 LSU_GroupAlone_NormalGr_DFU4_VecDF4_VecDF2
  { 1,  0}, // #59 GroupAlone_NormalGr_GroupAlone3_GroupAlone2_Cracked
  { 7,  0}, // #60 WLat7_LSULatency
  { 1,  0}, // #61 FXU2_FPU_DFU_FXa2_VecBF_LSU2_VecBF4
  { 1,  0}, // #62 GroupAlone_NormalGr
  {11,  0}, // #63 LSULatency_WLat11
  { 1,  0}, // #64 FXU2_DFU4_FPU_FPU2_LSU_FXa2_VecBF_FXb_VecBF2_VecBF4
  { 1,  0}, // #65 LSU_LSU2_FPU4_DFU_VecDF4
  { 1,  0}, // #66 GroupAlone_NormalGr_GroupAlone2_Cracked
  {30,  0}, // #67 WLat30
  { 1,  0}, // #68 FPU4_FPU2_DFU_DFU2_FXU_DFU4_FXa4_FXa2_VecFPd_VecDF4_FXb_VecDF2
  { 1,  0}, // #69 FXU5_FXU4_LSU_NormalGr_GroupAlone_DFU_DFU4_VecDF_VecDF4
  { 1,  0}, // #70 GroupAlone3_NormalGr_GroupAlone2_Cracked
  {30,  0}, // #71 WLat30
  { 1,  0}, // #72 FPU4_FXU_FXb
  { 1,  0}, // #73 LSU_DFU2_VecDF2
  { 1,  0}, // #74 FXU4_FXU3_LSU2
  { 1,  0}, // #75 GroupAlone3_GroupAlone2
  { 9,  0}, // #76 LSULatency_WLat9
  { 9,  0}, // #77 LSULatency_WLat9
  { 1,  0}, // #78 FXU4_FXU5_FPU_FPU4_DFU_FXa4_FXb
  { 1,  0}, // #79 LSU_NormalGr_GroupAlone_VecDF_VecBF
  { 1,  0}, // #80 GroupAlone2_Cracked
  {12,  0}, // #81 WLat12_LSULatency
  {12,  0}, // #82 WLat12_LSULatency
  { 1,  0}, // #83 FXU6_FXb_FXa
  { 1,  0}, // #84 LSU2_FPU_FPU2_VecDF2
  { 1,  0}, // #85 GroupAlone_Cracked_NormalGr
  {30,  0}, // #86 WLat30
  {30,  0}, // #87 WLat30
  {30,  0}, // #88 WLat30
  { 1,  0}, // #89 FXU3_DFU4_FXa3_FXb_VecDF2
  { 1,  0}, // #90 LSU2_FPU2_DFU_DFU2_GroupAlone_DFU4_VecDF_VecDF2
  { 1,  0}, // #91 GroupAlone2_Cracked
  {20,  0}, // #92 WLat20_LSULatency
  { 1,  0}, // #93 FXU_LSU4_FXa4_VecDF4_LSU2_VecDF2_GroupAlone3_FXb
  { 1,  0}, // #94 DFU_FXU2_GroupAlone_VecDF4_FXa2_NormalGr_VecDF2
  { 1,  0}, // #95 LSU_GroupAlone2_GroupAlone3_FXb2_LSU2
  { 1,  0}, // #96 GroupAlone_GroupAlone3_GroupAlone2
  {15,  0}, // #97 LSULatency_WLat15
  { 1,  0}, // #98 FXU_FXU2_FXb_LSU3
  { 1,  0}, // #99 DFU4_VecDFX2_FXa2
  { 1,  0}, // #100 LSU2_LSU3_FXb
  { 1,  0}, // #101 GroupAlone_GroupAlone3_GroupAlone2
  { 7,  0}, // #102 WLat7
  { 7,  0}, // #103 WLat7
  { 1,  0}, // #104 FXU2_FPU_FXa2_VecBF
  { 1,  0}, // #105 GroupAlone_NormalGr
  {30,  0}, // #106 WLat30
  {30,  0}, // #107 WLat30
  {30,  0}, // #108 WLat30
  {30,  0}, // #109 WLat30
  { 1,  0}, // #110 MCD
  {30,  0}, // #111 WLat30
  {30,  0}, // #112 WLat30
  {30,  0}, // #113 WLat30
  {30,  0}, // #114 WLat30
  {30,  0}, // #115 WLat30
  {30,  0}, // #116 WLat30
  { 1,  0}, // #117 MCD
  { 8,  0}, // #118 WLat8_LSULatency
  { 1,  0}, // #119 FXU_FXU2_LSU_FXb_FXa
  { 1,  0}, // #120 FPU_DFU4_DFU2_VecBF_LSU
  { 1,  0}, // #121 GroupAlone_GroupAlone2_Cracked_NormalGr
  {11,  0}, // #122 LSULatency_WLat11
  {11,  0}, // #123 LSULatency_WLat11
  { 1,  0}, // #124 FPU_FXU_VecBF_FXb
  { 1,  0}, // #125 LSU_DFU_VecDF4
  { 1,  0}, // #126 NormalGr_GroupAlone_GroupAlone2
  {20,  0}, // #127 WLat20
  {20,  0}, // #128 WLat20
  { 1,  0}, // #129 FPU4_LSU5
  { 1,  0}, // #130 GroupAlone
  { 4,  0}, // #131 WLat4
  { 1,  0}, // #132 FXU_FXa
  { 1,  0}, // #133 LSU
  { 1,  0}, // #134 GroupAlone
  {15,  0}, // #135 WLat15
  {15,  0}, // #136 WLat15
  { 1,  0}, // #137 FPU4
  { 1,  0}, // #138 GroupAlone
  { 4,  0}, // #139 WLat4_LSULatency
  { 4,  0}, // #140 WLat4_LSULatency
  { 1,  0}, // #141 DFU_LSU_VecStr_VecDFX
  { 1,  0}, // #142 NormalGr
  { 7,  0}, // #143 WLat7
  { 7,  0}, // #144 WLat7_LSULatency
  { 1,  0}, // #145 FXU_LSU2_VecDFX_VecXsPm_FXb
  { 1,  0}, // #146 DFU2_DFU4_FXb_LSU_VecBF
  { 1,  0}, // #147 GroupAlone_GroupAlone2_Cracked_NormalGr
  { 8,  0}, // #148 WLat8_LSULatency
  { 8,  0}, // #149 WLat8_LSULatency
  { 1,  0}, // #150 DFU_VecDF_LSU5_LSU2_FXa
  { 1,  0}, // #151 NormalGr_GroupAlone
  {10,  0}, // #152 WLat10_LSULatency
  {10,  0}, // #153 WLat10_LSULatency
  { 1,  0}, // #154 FXU_FXb_FXa_VecBF
  { 1,  0}, // #155 LSU_VecBF
  { 1,  0}, // #156 NormalGr_Cracked_GroupAlone
  { 6,  0}, // #157 LSULatency
  { 1,  0}, // #158 FXa
  { 1,  0}, // #159 FXb
  { 1,  0}, // #160 LSU
  { 1,  0}, // #161 Cracked
  { 7,  0}, // #162 LSULatency
  { 7,  0}, // #163 LSULatency
  { 1,  0}, // #164 FXa
  { 1,  0}, // #165 FXb
  { 1,  0}, // #166 LSU
  { 1,  0}, // #167 GroupAlone
  {10,  0}, // #168 LSULatency
  {10,  0}, // #169 LSULatency
  { 1,  0}, // #170 FXa3_FXb
  { 1,  0}, // #171 FXb2_LSU
  { 1,  0}, // #172 LSU_VecXsPm
  { 1,  0}, // #173 GroupAlone2_Cracked
  {15,  0}, // #174 WLat15
  {15,  0}, // #175 WLat15
  { 1,  0}, // #176 FXa2_VecDF2
  { 1,  0}, // #177 FXb4
  { 1,  0}, // #178 LSU3_GroupAlone
  { 1,  0}, // #179 GroupAlone3
  { 9,  0}, // #180 LSULatency
  { 1,  0}, // #181 FXb
  { 1,  0}, // #182 VecDFX_LSU
  { 1,  0}, // #183 LSU3_VecXsPm
  { 1,  0}, // #184 GroupAlone2_Cracked
  { 8,  0}, // #185 WLat8_LSULatency
  { 1,  0}, // #186 VecDFX_FXa2
  { 1,  0}, // #187 LSU_FXb
  { 1,  0}, // #188 LSU_LSU5
  { 1,  0}, // #189 GroupAlone_GroupAlone2
  {20,  0}, // #190 WLat20
  {20,  0}, // #191 WLat20
  { 1,  0}, // #192 VecDF2
  { 1,  0}, // #193 FXb
  { 1,  0} // #194 GroupAlone
}; // SystemZWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry SystemZReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
  {0,  0,  4}, // #1
  {0,  0,  4}, // #2
  {1,  0,  4} // #3
}; // SystemZReadAdvanceTable

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc ZEC12ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  16383, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("ADJDYNALLOC")        1, false, false,  1, 1,  1, 3,  0, 0}, // #1
  {DBGFIELD("CallBRCL_BRC_BRCAsm_BRCL_BRCLAsm") 1, false, false,  2, 1,  1, 3,  0, 0}, // #2
  {DBGFIELD("CallJG_J_JAsmE_JAsmH_JAsmHE_JAsmL_JAsmLE_JAsmLH_JAsmM_JAsmNE_JAsmNH_JAsmNHE_JAsmNL_JAsmNLE_JAsmNLH_JAsmNM_JAsmNO_JAsmNP_JAsmNZ_JAsmO_JAsmP_JAsmZ_JG_JGAsmE_JGAsmH_JGAsmHE_JGAsmL_JGAsmLE_JGAsmLH_JGAsmM_JGAsmNE_JGAsmNH_JGAsmNHE_JGAsmNL_JGAsmNLE_JGAsmNLH_JGAsmNM_JGAsmNO_JGAsmNP_JGAsmNZ_JGAsmO_JGAsmP_JGAsmZ") 1, false, false,  2, 1,  1, 3,  0, 0}, // #3
  {DBGFIELD("CallBCR_BC_BCAsm_BCR_BCRAsm") 1, false, false,  3, 1,  1, 3,  0, 0}, // #4
  {DBGFIELD("CallBR_B_BAsmE_BAsmH_BAsmHE_BAsmL_BAsmLE_BAsmLH_BAsmM_BAsmNE_BAsmNH_BAsmNHE_BAsmNL_BAsmNLE_BAsmNLH_BAsmNM_BAsmNO_BAsmNP_BAsmNZ_BAsmO_BAsmP_BAsmZ_BR_BRAsmE_BRAsmH_BRAsmHE_BRAsmL_BRAsmLE_BRAsmLH_BRAsmM_BRAsmNE_BRAsmNH_BRAsmNHE_BRAsmNL_BRAsmNLE_BRAsmNLH_BRAsmNM_BRAsmNO_BRAsmNP_BRAsmNZ_BRAsmO_BRAsmP_BRAsmZ") 1, false, false,  3, 1,  1, 3,  0, 0}, // #5
  {DBGFIELD("BI_BIAsmE_BIAsmH_BIAsmHE_BIAsmL_BIAsmLE_BIAsmLH_BIAsmM_BIAsmNE_BIAsmNH_BIAsmNHE_BIAsmNL_BIAsmNLE_BIAsmNLH_BIAsmNM_BIAsmNO_BIAsmNP_BIAsmNZ_BIAsmO_BIAsmP_BIAsmZ_BIC_BICAsm") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #6
  {DBGFIELD("BRCT_BRCTG")         1, false, true,  1, 1,  1, 3,  0, 0}, // #7
  {DBGFIELD("BRCTH")              3, true, true,  4, 2,  4, 4,  0, 0}, // #8
  {DBGFIELD("BCT_BCTG_BCTGR_BCTR") 3, true, true,  4, 2,  1, 4,  0, 0}, // #9
  {DBGFIELD("BRXH_BRXHG_BRXLE_BRXLG_BXH_BXHG_BXLE_BXLEG") 6, true, true,  6, 2,  1, 4,  0, 0}, // #10
  {DBGFIELD("CGIJ_CGIJAsm_CGIJAsmE_CGIJAsmH_CGIJAsmHE_CGIJAsmL_CGIJAsmLE_CGIJAsmLH_CGIJAsmNE_CGIJAsmNH_CGIJAsmNHE_CGIJAsmNL_CGIJAsmNLE_CGIJAsmNLH_CGRJ_CGRJAsm_CGRJAsmE_CGRJAsmH_CGRJAsmHE_CGRJAsmL_CGRJAsmLE_CGRJAsmLH_CGRJAsmNE_CGRJAsmNH_CGRJAsmNHE_CGRJAsmNL_CGRJAsmNLE_CGRJAsmNLH_CIJ_CIJAsm_CIJAsmE_CIJAsmH_CIJAsmHE_CIJAsmL_CIJAsmLE_CIJAsmLH_CIJAsmNE_CIJAsmNH_CIJAsmNHE_CIJAsmNL_CIJAsmNLE_CIJAsmNLH_CLGIJ_CLGIJAsm_CLGIJAsmE_CLGIJAsmH_CLGIJAsmHE_CLGIJAsmL_CLGIJAsmLE_CLGIJAsmLH_CLGIJAsmNE_CLGIJAsmNH_CLGIJAsmNHE_CLGIJAsmNL_CLGIJAsmNLE_CLGIJAsmNLH_CLGRJ_CLGRJAsm_CLGRJAsmE_CLGRJAsmH_CLGRJAsmHE_CLGRJAsmL_CLGRJAsmLE_CLGRJAsmLH_CLGRJAsmNE_CLGRJAsmNH_CLGRJAsmNHE_CLGRJAsmNL_CLGRJAsmNLE_CLGRJAsmNLH_CLIJ_CLIJAsm_CLIJAsmE_CLIJAsmH_CLIJAsmHE_CLIJAsmL_CLIJAsmLE_CLIJAsmLH_CLIJAsmNE_CLIJAsmNH_CLIJAsmNHE_CLIJAsmNL_CLIJAsmNLE_CLIJAsmNLH_CLRJ_CLRJAsm_CLRJAsmE_CLRJAsmH_CLRJAsmHE_CLRJAsmL_CLRJAsmLE_CLRJAsmLH_CLRJAsmNE_CLRJAsmNH_CLRJAsmNHE_CLRJAsmNL_CLRJAsmNLE_CLRJAsmNLH_CRJ_CRJAsm_CRJAsmE_CRJAsmH_CRJAsmHE_CRJAsmL_CRJAsmLE_CRJAsmLH_CRJAsmNE_CRJAsmNH_CRJAsmNHE_CRJAsmNL_CRJAsmNLE_CRJAsmNLH") 1, false, false,  1, 1,  1, 3,  0, 0}, // #11
  {DBGFIELD("CGIBCall_CGIBReturn_CGRBCall_CGRBReturn_CIBCall_CIBReturn_CLGIBCall_CLGIBReturn_CLGRBCall_CLGRBReturn_CLIBCall_CLIBReturn_CLRBCall_CLRBReturn_CRBCall_CRBReturn_CGIB_CGIBAsm_CGIBAsmE_CGIBAsmH_CGIBAsmHE_CGIBAsmL_CGIBAsmLE_CGIBAsmLH_CGIBAsmNE_CGIBAsmNH_CGIBAsmNHE_CGIBAsmNL_CGIBAsmNLE_CGIBAsmNLH_CGRB_CGRBAsm_CGRBAsmE_CGRBAsmH_CGRBAsmHE_CGRBAsmL_CGRBAsmLE_CGRBAsmLH_CGRBAsmNE_CGRBAsmNH_CGRBAsmNHE_CGRBAsmNL_CGRBAsmNLE_CGRBAsmNLH_CIB_CIBAsm_CIBAsmE_CIBAsmH_CIBAsmHE_CIBAsmL_CIBAsmLE_CIBAsmLH_CIBAsmNE_CIBAsmNH_CIBAsmNHE_CIBAsmNL_CIBAsmNLE_CIBAsmNLH_CLGIB_CLGIBAsm_CLGIBAsmE_CLGIBAsmH_CLGIBAsmHE_CLGIBAsmL_CLGIBAsmLE_CLGIBAsmLH_CLGIBAsmNE_CLGIBAsmNH_CLGIBAsmNHE_CLGIBAsmNL_CLGIBAsmNLE_CLGIBAsmNLH_CLGRB_CLGRBAsm_CLGRBAsmE_CLGRBAsmH_CLGRBAsmHE_CLGRBAsmL_CLGRBAsmLE_CLGRBAsmLH_CLGRBAsmNE_CLGRBAsmNH_CLGRBAsmNHE_CLGRBAsmNL_CLGRBAsmNLE_CLGRBAsmNLH_CLIB_CLIBAsm_CLIBAsmE_CLIBAsmH_CLIBAsmHE_CLIBAsmL_CLIBAsmLE_CLIBAsmLH_CLIBAsmNE_CLIBAsmNH_CLIBAsmNHE_CLIBAsmNL_CLIBAsmNLE_CLIBAsmNLH_CLRB_CLRBAsm_CLRBAsmE_CLRBAsmH_CLRBAsmHE_CLRBAsmL_CLRBAsmLE_CLRBAsmLH_CLRBAsmNE_CLRBAsmNH_CLRBAsmNHE_CLRBAsmNL_CLRBAsmNLE_CLRBAsmNLH_CRB_CRBAsm_CRBAsmE_CRBAsmH_CRBAsmHE_CRBAsmL_CRBAsmLE_CRBAsmLH_CRBAsmNE_CRBAsmNH_CRBAsmNHE_CRBAsmNL_CRBAsmNLE_CRBAsmNLH") 3, true, true,  4, 2,  1, 4,  0, 0}, // #12
  {DBGFIELD("CondTrap_Trap")      1, false, false,  2, 1,  1, 3,  0, 0}, // #13
  {DBGFIELD("CGIT_CGITAsm_CGITAsmE_CGITAsmH_CGITAsmHE_CGITAsmL_CGITAsmLE_CGITAsmLH_CGITAsmNE_CGITAsmNH_CGITAsmNHE_CGITAsmNL_CGITAsmNLE_CGITAsmNLH_CGRT_CGRTAsm_CGRTAsmE_CGRTAsmH_CGRTAsmHE_CGRTAsmL_CGRTAsmLE_CGRTAsmLH_CGRTAsmNE_CGRTAsmNH_CGRTAsmNHE_CGRTAsmNL_CGRTAsmNLE_CGRTAsmNLH_CIT_CITAsm_CITAsmE_CITAsmH_CITAsmHE_CITAsmL_CITAsmLE_CITAsmLH_CITAsmNE_CITAsmNH_CITAsmNHE_CITAsmNL_CITAsmNLE_CITAsmNLH_CRT_CRTAsm_CRTAsmE_CRTAsmH_CRTAsmHE_CRTAsmL_CRTAsmLE_CRTAsmLH_CRTAsmNE_CRTAsmNH_CRTAsmNHE_CRTAsmNL_CRTAsmNLE_CRTAsmNLH") 1, false, false,  1, 1,  1, 3,  0, 0}, // #14
  {DBGFIELD("CLGRT_CLGRTAsm_CLGRTAsmE_CLGRTAsmH_CLGRTAsmHE_CLGRTAsmL_CLGRTAsmLE_CLGRTAsmLH_CLGRTAsmNE_CLGRTAsmNH_CLGRTAsmNHE_CLGRTAsmNL_CLGRTAsmNLE_CLGRTAsmNLH_CLRT_CLRTAsm_CLRTAsmE_CLRTAsmH_CLRTAsmHE_CLRTAsmL_CLRTAsmLE_CLRTAsmLH_CLRTAsmNE_CLRTAsmNH_CLRTAsmNHE_CLRTAsmNL_CLRTAsmNLE_CLRTAsmNLH") 1, false, false,  1, 1,  1, 3,  0, 0}, // #15
  {DBGFIELD("CLFIT_CLFITAsm_CLFITAsmE_CLFITAsmH_CLFITAsmHE_CLFITAsmL_CLFITAsmLE_CLFITAsmLH_CLFITAsmNE_CLFITAsmNH_CLFITAsmNHE_CLFITAsmNL_CLFITAsmNLE_CLFITAsmNLH_CLGIT_CLGITAsm_CLGITAsmE_CLGITAsmH_CLGITAsmHE_CLGITAsmL_CLGITAsmLE_CLGITAsmLH_CLGITAsmNE_CLGITAsmNH_CLGITAsmNHE_CLGITAsmNL_CLGITAsmNLE_CLGITAsmNLH") 1, false, false,  1, 1,  1, 3,  0, 0}, // #16
  {DBGFIELD("CLGT_CLGTAsm_CLGTAsmE_CLGTAsmH_CLGTAsmHE_CLGTAsmL_CLGTAsmLE_CLGTAsmLH_CLGTAsmNE_CLGTAsmNH_CLGTAsmNHE_CLGTAsmNL_CLGTAsmNLE_CLGTAsmNLH_CLT_CLTAsm_CLTAsmE_CLTAsmH_CLTAsmHE_CLTAsmL_CLTAsmLE_CLTAsmLH_CLTAsmNE_CLTAsmNH_CLTAsmNHE_CLTAsmNL_CLTAsmNLE_CLTAsmNLH") 1, false, false,  4, 2,  1, 4,  0, 0}, // #17
  {DBGFIELD("BRAS")               3, true, true,  8, 2,  1, 4,  0, 0}, // #18
  {DBGFIELD("CallBRASL_BRASL")    3, true, true, 10, 2,  1, 4,  0, 0}, // #19
  {DBGFIELD("CallBASR_BAS_BASR")  3, true, true, 10, 2,  1, 4,  0, 0}, // #20
  {DBGFIELD("TLS_GDCALL_TLS_LDCALL") 3, true, true, 10, 2,  1, 4,  0, 0}, // #21
  {DBGFIELD("Return")             1, false, true,  3, 1,  1, 3,  0, 0}, // #22
  {DBGFIELD("CondReturn")         1, false, false,  3, 1,  1, 3,  0, 0}, // #23
  {DBGFIELD("MVGHI_MVHHI_MVHI")   1, false, false,  4, 2,  1, 4,  0, 0}, // #24
  {DBGFIELD("MVI_MVIY")           1, false, false,  4, 2,  1, 4,  0, 0}, // #25
  {DBGFIELD("MVC")                3, true, true, 12, 2,  1, 4,  0, 0}, // #26
  {DBGFIELD("MVCL_MVCLE_MVCLU")   3, true, true, 14, 1,  8, 4,  0, 0}, // #27
  {DBGFIELD("MVCRL")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #28
  {DBGFIELD("COPY_TO_REGCLASS_COPY") 1, false, false,  1, 1,  1, 3,  0, 0}, // #29
  {DBGFIELD("EXTRACT_SUBREG")     1, false, false,  1, 1,  1, 3,  0, 0}, // #30
  {DBGFIELD("INSERT_SUBREG")      1, false, false,  1, 1,  1, 3,  0, 0}, // #31
  {DBGFIELD("REG_SEQUENCE")       1, false, false,  1, 1,  1, 3,  0, 0}, // #32
  {DBGFIELD("LMux_L_LFH_LRL_LY")  1, false, false,  3, 1, 12, 3,  0, 0}, // #33
  {DBGFIELD("LCBB")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #34
  {DBGFIELD("LG_LGRL")            1, false, false,  3, 1, 12, 3,  0, 0}, // #35
  {DBGFIELD("L128")               1, false, false,  3, 1, 12, 3,  0, 0}, // #36
  {DBGFIELD("LLIHF_LLIHH_LLIHL")  1, false, false,  1, 1,  1, 3,  0, 0}, // #37
  {DBGFIELD("LLILF_LLILH_LLILL")  1, false, false,  1, 1,  1, 3,  0, 0}, // #38
  {DBGFIELD("LGFI_LGHI")          1, false, false,  1, 1,  1, 3,  0, 0}, // #39
  {DBGFIELD("LHIMux_LHI")         1, false, false,  1, 1,  1, 3,  0, 0}, // #40
  {DBGFIELD("LR")                 1, false, false,  1, 1,  1, 3,  0, 0}, // #41
  {DBGFIELD("LZRF_LZRG")          16383, false, false,  0, 0,  0, 0,  0, 0}, // #42
  {DBGFIELD("LAT_LFHAT_LGAT")     1, false, false,  4, 2, 15, 4,  0, 0}, // #43
  {DBGFIELD("LT_LTG")             1, false, false,  4, 2, 19, 5,  0, 0}, // #44
  {DBGFIELD("LTGR_LTR")           1, false, false,  1, 1,  1, 3,  0, 0}, // #45
  {DBGFIELD("STG_STGRL")          1, false, false,  4, 2,  1, 4,  0, 0}, // #46
  {DBGFIELD("ST128")              1, false, false,  4, 2,  1, 4,  0, 0}, // #47
  {DBGFIELD("STMux_ST_STFH_STRL_STY") 1, false, false,  4, 2,  1, 4,  0, 0}, // #48
  {DBGFIELD("MVST")               3, true, true, 14, 1,  8, 4,  0, 0}, // #49
  {DBGFIELD("LOCRMux")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #50
  {DBGFIELD("LOCFHR_LOCFHRAsm_LOCFHRAsmE_LOCFHRAsmH_LOCFHRAsmHE_LOCFHRAsmL_LOCFHRAsmLE_LOCFHRAsmLH_LOCFHRAsmM_LOCFHRAsmNE_LOCFHRAsmNH_LOCFHRAsmNHE_LOCFHRAsmNL_LOCFHRAsmNLE_LOCFHRAsmNLH_LOCFHRAsmNM_LOCFHRAsmNO_LOCFHRAsmNP_LOCFHRAsmNZ_LOCFHRAsmO_LOCFHRAsmP_LOCFHRAsmZ_LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #51
  {DBGFIELD("LOCHIMux_LOCGHI_LOCGHIAsm_LOCGHIAsmE_LOCGHIAsmH_LOCGHIAsmHE_LOCGHIAsmL_LOCGHIAsmLE_LOCGHIAsmLH_LOCGHIAsmM_LOCGHIAsmNE_LOCGHIAsmNH_LOCGHIAsmNHE_LOCGHIAsmNL_LOCGHIAsmNLE_LOCGHIAsmNLH_LOCGHIAsmNM_LOCGHIAsmNO_LOCGHIAsmNP_LOCGHIAsmNZ_LOCGHIAsmO_LOCGHIAsmP_LOCGHIAsmZ_LOCHHI_LOCHHIAsm_LOCHHIAsmE_LOCHHIAsmH_LOCHHIAsmHE_LOCHHIAsmL_LOCHHIAsmLE_LOCHHIAsmLH_LOCHHIAsmM_LOCHHIAsmNE_LOCHHIAsmNH_LOCHHIAsmNHE_LOCHHIAsmNL_LOCHHIAsmNLE_LOCHHIAsmNLH_LOCHHIAsmNM_LOCHHIAsmNO_LOCHHIAsmNP_LOCHHIAsmNZ_LOCHHIAsmO_LOCHHIAsmP_LOCHHIAsmZ_LOCHI_LOCHIAsm_LOCHIAsmE_LOCHIAsmH_LOCHIAsmHE_LOCHIAsmL_LOCHIAsmLE_LOCHIAsmLH_LOCHIAsmM_LOCHIAsmNE_LOCHIAsmNH_LOCHIAsmNHE_LOCHIAsmNL_LOCHIAsmNLE_LOCHIAsmNLH_LOCHIAsmNM_LOCHIAsmNO_LOCHIAsmNP_LOCHIAsmNZ_LOCHIAsmO_LOCHIAsmP_LOCHIAsmZ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #52
  {DBGFIELD("LOCMux_LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCFH_LOCFHAsm_LOCFHAsmE_LOCFHAsmH_LOCFHAsmHE_LOCFHAsmL_LOCFHAsmLE_LOCFHAsmLH_LOCFHAsmM_LOCFHAsmNE_LOCFHAsmNH_LOCFHAsmNHE_LOCFHAsmNL_LOCFHAsmNLE_LOCFHAsmNLH_LOCFHAsmNM_LOCFHAsmNO_LOCFHAsmNP_LOCFHAsmNZ_LOCFHAsmO_LOCFHAsmP_LOCFHAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #53
  {DBGFIELD("STOCMux_STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCFH_STOCFHAsm_STOCFHAsmE_STOCFHAsmH_STOCFHAsmHE_STOCFHAsmL_STOCFHAsmLE_STOCFHAsmLH_STOCFHAsmM_STOCFHAsmNE_STOCFHAsmNH_STOCFHAsmNHE_STOCFHAsmNL_STOCFHAsmNLE_STOCFHAsmNLH_STOCFHAsmNM_STOCFHAsmNO_STOCFHAsmNP_STOCFHAsmNZ_STOCFHAsmO_STOCFHAsmP_STOCFHAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #54
  {DBGFIELD("SELRMux")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #55
  {DBGFIELD("SELFHR_SELFHRAsm_SELFHRAsmE_SELFHRAsmH_SELFHRAsmHE_SELFHRAsmL_SELFHRAsmLE_SELFHRAsmLH_SELFHRAsmM_SELFHRAsmNE_SELFHRAsmNH_SELFHRAsmNHE_SELFHRAsmNL_SELFHRAsmNLE_SELFHRAsmNLH_SELFHRAsmNM_SELFHRAsmNO_SELFHRAsmNP_SELFHRAsmNZ_SELFHRAsmO_SELFHRAsmP_SELFHRAsmZ_SELGR_SELGRAsm_SELGRAsmE_SELGRAsmH_SELGRAsmHE_SELGRAsmL_SELGRAsmLE_SELGRAsmLH_SELGRAsmM_SELGRAsmNE_SELGRAsmNH_SELGRAsmNHE_SELGRAsmNL_SELGRAsmNLE_SELGRAsmNLH_SELGRAsmNM_SELGRAsmNO_SELGRAsmNP_SELGRAsmNZ_SELGRAsmO_SELGRAsmP_SELGRAsmZ_SELR_SELRAsm_SELRAsmE_SELRAsmH_SELRAsmHE_SELRAsmL_SELRAsmLE_SELRAsmLH_SELRAsmM_SELRAsmNE_SELRAsmNH_SELRAsmNHE_SELRAsmNL_SELRAsmNLE_SELRAsmNLH_SELRAsmNM_SELRAsmNO_SELRAsmNP_SELRAsmNZ_SELRAsmO_SELRAsmP_SELRAsmZ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #56
  {DBGFIELD("LBR_LGR_LHR")        1, false, false,  1, 1,  1, 3,  0, 0}, // #57
  {DBGFIELD("LGBR_LGFR_LGHR")     1, false, false,  1, 1,  1, 3,  0, 0}, // #58
  {DBGFIELD("LTGF")               1, false, false,  4, 2, 19, 5,  0, 0}, // #59
  {DBGFIELD("LTGFR")              1, false, false,  1, 1,  1, 3,  0, 0}, // #60
  {DBGFIELD("LBMux_LB_LBH")       1, false, false,  4, 2, 15, 4,  0, 0}, // #61
  {DBGFIELD("LH_LHY")             1, false, false,  4, 2, 15, 4,  0, 0}, // #62
  {DBGFIELD("LHMux_LHH_LHRL")     1, false, false,  4, 2, 15, 4,  0, 0}, // #63
  {DBGFIELD("LGB_LGF_LGH")        1, false, false,  4, 2, 15, 4,  0, 0}, // #64
  {DBGFIELD("LGFRL_LGHRL")        1, false, false,  4, 2, 15, 4,  0, 0}, // #65
  {DBGFIELD("LLCRMux_LLCR")       1, false, false,  1, 1,  1, 3,  0, 0}, // #66
  {DBGFIELD("LLHRMux_LLHR")       1, false, false,  1, 1,  1, 3,  0, 0}, // #67
  {DBGFIELD("LLGCR_LLGFR_LLGHR_LLGTR") 1, false, false,  1, 1,  1, 3,  0, 0}, // #68
  {DBGFIELD("LLCMux_LLC")         1, false, false,  3, 1, 12, 3,  0, 0}, // #69
  {DBGFIELD("LLHMux_LLH")         1, false, false,  3, 1, 12, 3,  0, 0}, // #70
  {DBGFIELD("LLCH_LLHH")          1, false, false,  4, 2, 15, 4,  0, 0}, // #71
  {DBGFIELD("LLHRL")              1, false, false,  3, 1, 12, 3,  0, 0}, // #72
  {DBGFIELD("LLGC_LLGF_LLGFRL_LLGH_LLGHRL_LLGT") 1, false, false,  3, 1, 12, 3,  0, 0}, // #73
  {DBGFIELD("LLZRGF")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #74
  {DBGFIELD("LLGFAT_LLGTAT")      1, false, false,  4, 2, 15, 4,  0, 0}, // #75
  {DBGFIELD("STCMux_STC_STCH_STCY") 1, false, false,  4, 2,  1, 4,  0, 0}, // #76
  {DBGFIELD("STHMux_STH_STHH_STHRL_STHY") 1, false, false,  4, 2,  1, 4,  0, 0}, // #77
  {DBGFIELD("STCM_STCMH_STCMY")   1, false, false,  4, 2,  1, 4,  0, 0}, // #78
  {DBGFIELD("LM_LMG_LMH_LMY")     3, true, true, 15, 1, 24, 4,  0, 0}, // #79
  {DBGFIELD("LMD")                3, true, true, 14, 1,  9, 3,  0, 0}, // #80
  {DBGFIELD("STM_STMG_STMH_STMY") 3, true, true, 16, 2,  1, 4,  0, 0}, // #81
  {DBGFIELD("LRVGR_LRVR")         1, false, false,  1, 1,  1, 3,  0, 0}, // #82
  {DBGFIELD("LRV_LRVG_LRVH")      1, false, false,  4, 2, 15, 4,  0, 0}, // #83
  {DBGFIELD("STRV_STRVG_STRVH")   1, false, false,  4, 2,  1, 4,  0, 0}, // #84
  {DBGFIELD("MVCIN")              3, true, true, 14, 1, 10, 2,  0, 0}, // #85
  {DBGFIELD("LA_LARL_LAY")        1, false, false,  1, 1,  1, 3,  0, 0}, // #86
  {DBGFIELD("GOT")                1, false, false,  1, 1,  1, 3,  0, 0}, // #87
  {DBGFIELD("LPGR_LPR")           1, false, false,  1, 1, 28, 4,  0, 0}, // #88
  {DBGFIELD("LNGFR_LPGFR")        3, true, true,  8, 1, 32, 4,  0, 0}, // #89
  {DBGFIELD("LNGR_LNR")           1, false, false,  1, 1, 28, 4,  0, 0}, // #90
  {DBGFIELD("LCGR_LCR")           1, false, false,  1, 1,  1, 3,  0, 0}, // #91
  {DBGFIELD("LCGFR")              3, true, true,  8, 1, 28, 4,  0, 0}, // #92
  {DBGFIELD("IC_ICY")             1, false, false,  4, 2, 15, 4,  1, 1}, // #93
  {DBGFIELD("IC32_IC32Y")         1, false, false,  4, 2, 15, 4,  1, 1}, // #94
  {DBGFIELD("ICM_ICMH_ICMY")      1, false, false,  4, 2, 19, 5,  1, 1}, // #95
  {DBGFIELD("IIFMux_IIHMux_IILMux") 1, false, false,  1, 1,  1, 3,  0, 0}, // #96
  {DBGFIELD("IIHF64_IIHF")        1, false, false,  1, 1,  1, 3,  0, 0}, // #97
  {DBGFIELD("IIHH64_IIHH")        1, false, false,  1, 1,  1, 3,  0, 0}, // #98
  {DBGFIELD("IIHL64_IIHL")        1, false, false,  1, 1,  1, 3,  0, 0}, // #99
  {DBGFIELD("IILF64_IILF")        1, false, false,  1, 1,  1, 3,  0, 0}, // #100
  {DBGFIELD("IILH64_IILH")        1, false, false,  1, 1,  1, 3,  0, 0}, // #101
  {DBGFIELD("IILL64_IILL")        1, false, false,  1, 1,  1, 3,  0, 0}, // #102
  {DBGFIELD("A_AY")               1, false, false,  4, 2, 19, 5,  1, 1}, // #103
  {DBGFIELD("AH_AHY")             1, false, false,  4, 2, 36, 5,  1, 1}, // #104
  {DBGFIELD("AIH")                1, false, false,  1, 1,  1, 3,  0, 0}, // #105
  {DBGFIELD("AFIMux_AFI")         1, false, false,  1, 1,  1, 3,  0, 0}, // #106
  {DBGFIELD("AG")                 1, false, false,  4, 2, 19, 5,  1, 1}, // #107
  {DBGFIELD("AGFI")               1, false, false,  1, 1,  1, 3,  0, 0}, // #108
  {DBGFIELD("AGHI_AGHIK")         1, false, false,  1, 1,  1, 3,  0, 0}, // #109
  {DBGFIELD("AGR_AGRK")           1, false, false,  1, 1,  1, 3,  0, 0}, // #110
  {DBGFIELD("AHI_AHIK")           1, false, false,  1, 1,  1, 3,  0, 0}, // #111
  {DBGFIELD("AHIMux_AHIMuxK")     1, false, false,  1, 1,  1, 3,  0, 0}, // #112
  {DBGFIELD("AL_ALY")             1, false, false,  4, 2, 19, 5,  1, 1}, // #113
  {DBGFIELD("ALFI_ALHSIK")        1, false, false,  1, 1,  1, 3,  0, 0}, // #114
  {DBGFIELD("ALG_ALGF")           1, false, false,  4, 2, 19, 5,  1, 1}, // #115
  {DBGFIELD("ALGHSIK")            1, false, false,  1, 1,  1, 3,  0, 0}, // #116
  {DBGFIELD("ALGFI_ALGFR")        1, false, false,  1, 1,  1, 3,  0, 0}, // #117
  {DBGFIELD("ALGR_ALGRK")         1, false, false,  1, 1,  1, 3,  0, 0}, // #118
  {DBGFIELD("ALR_ALRK")           1, false, false,  1, 1,  1, 3,  0, 0}, // #119
  {DBGFIELD("AR_ARK")             1, false, false,  1, 1,  1, 3,  0, 0}, // #120
  {DBGFIELD("AHHHR_ALHHHR")       1, false, false,  1, 1,  1, 3,  0, 0}, // #121
  {DBGFIELD("AHHLR_ALHHLR")       1, false, false,  1, 1, 28, 4,  0, 0}, // #122
  {DBGFIELD("ALSIH_ALSIHN")       1, false, false,  1, 1,  1, 3,  0, 0}, // #123
  {DBGFIELD("AGSI_ALGSI_ALSI_ASI") 1, false, false,  4, 2, 15, 4,  0, 0}, // #124
  {DBGFIELD("ALC_ALCG")           3, true, true,  4, 2, 36, 5,  1, 1}, // #125
  {DBGFIELD("ALCGR_ALCR")         3, true, true,  1, 1, 28, 4,  0, 0}, // #126
  {DBGFIELD("AGF_AGH")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #127
  {DBGFIELD("AGFR")               1, false, false,  1, 1, 28, 4,  0, 0}, // #128
  {DBGFIELD("S_SG_SY")            1, false, false,  4, 2, 19, 5,  1, 1}, // #129
  {DBGFIELD("SH_SHY")             1, false, false,  4, 2, 36, 5,  1, 1}, // #130
  {DBGFIELD("SGR_SGRK")           1, false, false,  1, 1,  1, 3,  0, 0}, // #131
  {DBGFIELD("SLFI")               1, false, false,  1, 1,  1, 3,  0, 0}, // #132
  {DBGFIELD("SL_SLG_SLGF_SLY")    1, false, false,  4, 2, 19, 5,  1, 1}, // #133
  {DBGFIELD("SLGFI_SLGFR")        1, false, false,  1, 1,  1, 3,  0, 0}, // #134
  {DBGFIELD("SLGR_SLGRK")         1, false, false,  1, 1,  1, 3,  0, 0}, // #135
  {DBGFIELD("SLR_SLRK")           1, false, false,  1, 1,  1, 3,  0, 0}, // #136
  {DBGFIELD("SR_SRK")             1, false, false,  1, 1,  1, 3,  0, 0}, // #137
  {DBGFIELD("SHHHR_SLHHHR")       1, false, false,  1, 1,  1, 3,  0, 0}, // #138
  {DBGFIELD("SHHLR_SLHHLR")       1, false, false,  1, 1, 28, 4,  0, 0}, // #139
  {DBGFIELD("SLB_SLBG")           3, true, true,  4, 2, 36, 5,  1, 1}, // #140
  {DBGFIELD("SLBGR_SLBR")         3, true, true,  1, 1, 28, 4,  0, 0}, // #141
  {DBGFIELD("SGF_SGH")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #142
  {DBGFIELD("SGFR")               1, false, false,  1, 1, 28, 4,  0, 0}, // #143
  {DBGFIELD("N_NG_NY")            1, false, false,  4, 2, 19, 5,  1, 1}, // #144
  {DBGFIELD("NGR_NGRK")           1, false, false,  1, 1,  1, 3,  0, 0}, // #145
  {DBGFIELD("NIFMux_NIHMux_NILMux") 1, false, false,  1, 1,  1, 3,  0, 0}, // #146
  {DBGFIELD("NI_NIY")             1, false, false,  4, 2, 15, 4,  0, 0}, // #147
  {DBGFIELD("NIHF64_NIHF")        1, false, false,  1, 1,  1, 3,  0, 0}, // #148
  {DBGFIELD("NIHH64_NIHH")        1, false, false,  1, 1,  1, 3,  0, 0}, // #149
  {DBGFIELD("NIHL64_NIHL")        1, false, false,  1, 1,  1, 3,  0, 0}, // #150
  {DBGFIELD("NILF64_NILF")        1, false, false,  1, 1,  1, 3,  0, 0}, // #151
  {DBGFIELD("NILH64_NILH")        1, false, false,  1, 1,  1, 3,  0, 0}, // #152
  {DBGFIELD("NILL64_NILL")        1, false, false,  1, 1,  1, 3,  0, 0}, // #153
  {DBGFIELD("NR_NRK")             1, false, false,  1, 1,  1, 3,  0, 0}, // #154
  {DBGFIELD("NC")                 3, true, true, 18, 2, 41, 4,  0, 0}, // #155
  {DBGFIELD("O_OG_OY")            1, false, false,  4, 2, 19, 5,  1, 1}, // #156
  {DBGFIELD("OGR_OGRK")           1, false, false,  1, 1,  1, 3,  0, 0}, // #157
  {DBGFIELD("OI_OIY")             1, false, false,  4, 2, 15, 4,  0, 0}, // #158
  {DBGFIELD("OIFMux_OIHMux_OILMux") 1, false, false,  1, 1,  1, 3,  0, 0}, // #159
  {DBGFIELD("OIHF64_OIHF")        1, false, false,  1, 1,  1, 3,  0, 0}, // #160
  {DBGFIELD("OIHH64_OIHH")        1, false, false,  1, 1,  1, 3,  0, 0}, // #161
  {DBGFIELD("OIHL64_OIHL")        1, false, false,  1, 1,  1, 3,  0, 0}, // #162
  {DBGFIELD("OILF64_OILF")        1, false, false,  1, 1,  1, 3,  0, 0}, // #163
  {DBGFIELD("OILH64_OILH")        1, false, false,  1, 1,  1, 3,  0, 0}, // #164
  {DBGFIELD("OILL64_OILL")        1, false, false,  1, 1,  1, 3,  0, 0}, // #165
  {DBGFIELD("OR_ORK")             1, false, false,  1, 1,  1, 3,  0, 0}, // #166
  {DBGFIELD("OC")                 3, true, true, 18, 2, 41, 4,  0, 0}, // #167
  {DBGFIELD("X_XG_XY")            1, false, false,  4, 2, 19, 5,  1, 1}, // #168
  {DBGFIELD("XI_XIY")             1, false, false,  4, 2, 15, 4,  0, 0}, // #169
  {DBGFIELD("XIFMux")             1, false, false,  1, 1,  1, 3,  0, 0}, // #170
  {DBGFIELD("XGR_XGRK")           1, false, false,  1, 1,  1, 3,  0, 0}, // #171
  {DBGFIELD("XIHF64_XIHF")        1, false, false,  1, 1,  1, 3,  0, 0}, // #172
  {DBGFIELD("XILF64_XILF")        1, false, false,  1, 1,  1, 3,  0, 0}, // #173
  {DBGFIELD("XR_XRK")             1, false, false,  1, 1,  1, 3,  0, 0}, // #174
  {DBGFIELD("XC")                 3, true, true, 18, 2, 41, 4,  0, 0}, // #175
  {DBGFIELD("NCGRK_NCRK")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #176
  {DBGFIELD("OCGRK_OCRK")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #177
  {DBGFIELD("NNGRK_NNRK")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #178
  {DBGFIELD("NOGRK_NORK")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #179
  {DBGFIELD("NXGRK_NXRK")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #180
  {DBGFIELD("MS_MSGF_MSY")        1, false, false,  4, 2, 45, 4,  1, 1}, // #181
  {DBGFIELD("MSFI_MSR")           1, false, false,  1, 1, 37, 3,  0, 0}, // #182
  {DBGFIELD("MSG")                1, false, false,  4, 2, 49, 4,  1, 1}, // #183
  {DBGFIELD("MSGR")               1, false, false,  1, 1, 53, 3,  0, 0}, // #184
  {DBGFIELD("MSGFI_MSGFR")        1, false, false,  1, 1, 37, 3,  0, 0}, // #185
  {DBGFIELD("MLG")                3, true, true, 10, 2, 56, 4,  1, 1}, // #186
  {DBGFIELD("MLGR")               3, true, true,  8, 1, 41, 3,  0, 0}, // #187
  {DBGFIELD("MGHI")               1, false, false,  1, 1, 15, 3,  0, 0}, // #188
  {DBGFIELD("MHI")                1, false, false,  1, 1, 15, 3,  0, 0}, // #189
  {DBGFIELD("MH_MHY")             1, false, false,  4, 2, 41, 4,  1, 1}, // #190
  {DBGFIELD("MLR_MR")             3, true, true,  8, 1, 60, 3,  0, 0}, // #191
  {DBGFIELD("M_MFY_ML")           3, true, true, 10, 2, 63, 4,  1, 1}, // #192
  {DBGFIELD("MGH")                16383, false, false,  0, 0,  0, 0,  0, 0}, // #193
  {DBGFIELD("MG")                 16383, false, false,  0, 0,  0, 0,  0, 0}, // #194
  {DBGFIELD("MGRK")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #195
  {DBGFIELD("MSC")                16383, false, false,  0, 0,  0, 0,  0, 0}, // #196
  {DBGFIELD("MSGC")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #197
  {DBGFIELD("MSRKC")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #198
  {DBGFIELD("MSGRKC")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #199
  {DBGFIELD("DR")                 9, true, true, 20, 2, 67, 4,  0, 0}, // #200
  {DBGFIELD("D")                  9, true, true, 22, 3, 71, 5,  1, 1}, // #201
  {DBGFIELD("DSGFR_DSGR")         9, true, true, 22, 2, 67, 4,  0, 0}, // #202
  {DBGFIELD("DSG_DSGF")           9, true, true, 25, 3, 71, 5,  1, 1}, // #203
  {DBGFIELD("DLR")                9, true, true, 20, 2, 67, 4,  0, 0}, // #204
  {DBGFIELD("DLGR")               9, true, true, 20, 2, 67, 4,  0, 0}, // #205
  {DBGFIELD("DL_DLG")             9, true, true, 22, 3, 71, 5,  1, 1}, // #206
  {DBGFIELD("SLL_SLLG_SLLK")      1, false, false,  1, 1,  1, 3,  0, 0}, // #207
  {DBGFIELD("SRL_SRLG_SRLK")      1, false, false,  1, 1,  1, 3,  0, 0}, // #208
  {DBGFIELD("SRA_SRAG_SRAK")      1, false, false,  1, 1,  1, 3,  0, 0}, // #209
  {DBGFIELD("SLA_SLAG_SLAK")      1, false, false,  1, 1,  1, 3,  0, 0}, // #210
  {DBGFIELD("SLDA_SLDL_SRDA_SRDL") 6, true, true, 23, 2, 76, 5,  0, 0}, // #211
  {DBGFIELD("RLL_RLLG")           1, false, false,  4, 2, 37, 4,  0, 0}, // #212
  {DBGFIELD("RISBG_RISBG32_RISBGN") 1, false, false,  1, 1,  1, 3,  0, 0}, // #213
  {DBGFIELD("RISBHH_RISBHL_RISBHG") 1, false, false,  1, 1,  1, 3,  0, 0}, // #214
  {DBGFIELD("RISBLH_RISBLL_RISBLG") 1, false, false,  1, 1,  1, 3,  0, 0}, // #215
  {DBGFIELD("RISBMux")            1, false, false,  1, 1,  1, 3,  0, 0}, // #216
  {DBGFIELD("RNSBG_ROSBG_RXSBG")  3, true, true,  8, 1, 32, 4,  0, 0}, // #217
  {DBGFIELD("CMux_C_CG_CY")       1, false, false,  4, 2, 15, 4,  1, 1}, // #218
  {DBGFIELD("CRL")                1, false, false,  4, 2, 15, 4,  1, 1}, // #219
  {DBGFIELD("CFIMux_CHIMux_CFI_CHI") 1, false, false,  1, 1,  1, 3,  0, 0}, // #220
  {DBGFIELD("CGFI_CGHI")          1, false, false,  1, 1,  1, 3,  0, 0}, // #221
  {DBGFIELD("CGHSI_CGRL")         1, false, false,  4, 2, 15, 4,  0, 0}, // #222
  {DBGFIELD("CGR_CR")             1, false, false,  1, 1,  1, 3,  0, 0}, // #223
  {DBGFIELD("CIH")                1, false, false,  1, 1,  1, 3,  0, 0}, // #224
  {DBGFIELD("CHF")                1, false, false,  4, 2, 15, 4,  1, 1}, // #225
  {DBGFIELD("CHSI")               1, false, false,  4, 2, 15, 4,  0, 0}, // #226
  {DBGFIELD("CLMux_CL_CLY")       1, false, false,  4, 2, 15, 4,  1, 1}, // #227
  {DBGFIELD("CLFHSI")             1, false, false,  4, 2, 15, 4,  0, 0}, // #228
  {DBGFIELD("CLFIMux_CLFI")       1, false, false,  1, 1,  1, 3,  0, 0}, // #229
  {DBGFIELD("CLG")                1, false, false,  4, 2, 15, 4,  1, 1}, // #230
  {DBGFIELD("CLGHRL_CLGHSI")      1, false, false,  4, 2, 15, 4,  0, 0}, // #231
  {DBGFIELD("CLGF")               1, false, false,  4, 2, 15, 4,  1, 1}, // #232
  {DBGFIELD("CLGFRL")             1, false, false,  4, 2, 15, 4,  0, 0}, // #233
  {DBGFIELD("CLGFI_CLGFR")        1, false, false,  1, 1,  1, 3,  0, 0}, // #234
  {DBGFIELD("CLGR")               1, false, false,  1, 1,  1, 3,  0, 0}, // #235
  {DBGFIELD("CLGRL")              1, false, false,  4, 2, 15, 4,  0, 0}, // #236
  {DBGFIELD("CLHF")               1, false, false,  4, 2, 15, 4,  1, 1}, // #237
  {DBGFIELD("CLHHSI_CLHRL")       1, false, false,  4, 2, 15, 4,  0, 0}, // #238
  {DBGFIELD("CLIH")               1, false, false,  1, 1,  1, 3,  0, 0}, // #239
  {DBGFIELD("CLI_CLIY")           1, false, false,  4, 2, 15, 4,  0, 0}, // #240
  {DBGFIELD("CLR")                1, false, false,  1, 1,  1, 3,  0, 0}, // #241
  {DBGFIELD("CLRL")               1, false, false,  4, 2, 15, 4,  0, 0}, // #242
  {DBGFIELD("CHHR_CLHHR")         1, false, false,  1, 1,  1, 3,  0, 0}, // #243
  {DBGFIELD("CHLR_CLHLR")         1, false, false,  1, 1, 29, 3,  0, 0}, // #244
  {DBGFIELD("CH_CHY")             1, false, false,  4, 2, 37, 4,  1, 1}, // #245
  {DBGFIELD("CHRL")               1, false, false,  4, 2, 37, 4,  0, 0}, // #246
  {DBGFIELD("CGH")                1, false, false,  4, 2, 37, 4,  1, 1}, // #247
  {DBGFIELD("CGHRL")              1, false, false,  4, 2, 37, 4,  0, 0}, // #248
  {DBGFIELD("CHHSI")              3, true, true, 10, 2, 37, 4,  0, 0}, // #249
  {DBGFIELD("CGF")                1, false, false,  4, 2, 37, 4,  1, 1}, // #250
  {DBGFIELD("CGFRL")              1, false, false,  4, 2, 37, 4,  0, 0}, // #251
  {DBGFIELD("CGFR")               1, false, false,  1, 1, 29, 3,  0, 0}, // #252
  {DBGFIELD("CLC")                3, true, true, 18, 2, 41, 4,  0, 0}, // #253
  {DBGFIELD("CLCL_CLCLE_CLCLU")   3, true, true, 14, 1,  8, 4,  0, 0}, // #254
  {DBGFIELD("CLST")               3, true, true, 14, 1,  8, 4,  0, 0}, // #255
  {DBGFIELD("TM_TMY")             1, false, false,  4, 2, 15, 4,  0, 0}, // #256
  {DBGFIELD("TMHMux_TMLMux")      1, false, false,  1, 1,  1, 3,  0, 0}, // #257
  {DBGFIELD("TMHH64_TMHH")        1, false, false,  1, 1,  1, 3,  0, 0}, // #258
  {DBGFIELD("TMHL64_TMHL")        1, false, false,  1, 1,  1, 3,  0, 0}, // #259
  {DBGFIELD("TMLH64_TMLH")        1, false, false,  1, 1,  1, 3,  0, 0}, // #260
  {DBGFIELD("TMLL64_TMLL")        1, false, false,  1, 1,  1, 3,  0, 0}, // #261
  {DBGFIELD("CLM_CLMH_CLMY")      1, false, false,  4, 2, 37, 4,  1, 1}, // #262
  {DBGFIELD("PFD_PFDRL")          1, false, false,  3, 1,  1, 3,  0, 0}, // #263
  {DBGFIELD("BPP")                1, false, false,  3, 1,  1, 3,  0, 0}, // #264
  {DBGFIELD("BPRP")               1, false, false,  3, 1,  1, 3,  0, 0}, // #265
  {DBGFIELD("NIAI")               1, false, false,  1, 1,  1, 3,  0, 0}, // #266
  {DBGFIELD("Serialize")          1, false, true,  3, 1,  1, 3,  0, 0}, // #267
  {DBGFIELD("LAA_LAAG")           1, false, false,  4, 2, 19, 5,  0, 0}, // #268
  {DBGFIELD("LAAL_LAALG")         1, false, false,  4, 2, 19, 5,  0, 0}, // #269
  {DBGFIELD("LAN_LANG")           1, false, false,  4, 2, 19, 5,  0, 0}, // #270
  {DBGFIELD("LAO_LAOG")           1, false, false,  4, 2, 19, 5,  0, 0}, // #271
  {DBGFIELD("LAX_LAXG")           1, false, false,  4, 2, 19, 5,  0, 0}, // #272
  {DBGFIELD("TS")                 1, false, true,  4, 2, 15, 4,  0, 0}, // #273
  {DBGFIELD("CS_CSG_CSY")         3, true, true, 10, 2, 36, 5,  0, 0}, // #274
  {DBGFIELD("CDS_CDSY")           6, true, true, 28, 2, 76, 5,  0, 0}, // #275
  {DBGFIELD("CDSG")               3, true, true, 30, 2, 81, 5,  0, 0}, // #276
  {DBGFIELD("CSST")               3, true, true, 14, 1, 10, 2,  0, 0}, // #277
  {DBGFIELD("PLO")                3, true, true, 14, 1, 10, 2,  0, 0}, // #278
  {DBGFIELD("LPQ")                3, true, true, 17, 1, 53, 3,  0, 0}, // #279
  {DBGFIELD("STPQ")               3, true, true, 32, 2,  1, 4,  0, 0}, // #280
  {DBGFIELD("LPD_LPDG")           3, true, true, 17, 1, 36, 4,  0, 0}, // #281
  {DBGFIELD("TR")                 3, true, true,  3, 1,  1, 3,  0, 0}, // #282
  {DBGFIELD("TRT")                6, true, true, 34, 2, 86, 6,  0, 0}, // #283
  {DBGFIELD("TRTR")               3, true, true, 14, 1,  8, 4,  0, 0}, // #284
  {DBGFIELD("TRE")                3, true, true, 14, 1,  9, 3,  0, 0}, // #285
  {DBGFIELD("TRTE_TRTEOpt_TRTRE_TRTREOpt") 3, true, true, 14, 1,  8, 4,  0, 0}, // #286
  {DBGFIELD("TROO_TROOOpt_TROT_TROTOpt_TRTO_TRTOOpt_TRTT_TRTTOpt") 3, true, true, 14, 1,  8, 4,  0, 0}, // #287
  {DBGFIELD("CU12_CU12Opt_CU14_CU14Opt_CU21_CU21Opt_CU24_CU24Opt_CU41_CU42") 3, true, true, 14, 1,  8, 4,  0, 0}, // #288
  {DBGFIELD("CUTFU_CUTFUOpt_CUUTF_CUUTFOpt") 3, true, true, 14, 1,  8, 4,  0, 0}, // #289
  {DBGFIELD("KM_KMA_KMC_KMCTR_KMF_KMO") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #290
  {DBGFIELD("KDSA_KIMD_KLMD_KMAC") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #291
  {DBGFIELD("PCC_PPNO_PRNO")      16383, false, false,  0, 0,  0, 0,  0, 0}, // #292
  {DBGFIELD("LGG")                16383, false, false,  0, 0,  0, 0,  0, 0}, // #293
  {DBGFIELD("LLGFSG")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #294
  {DBGFIELD("LGSC_STGSC")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #295
  {DBGFIELD("CVBG")               6, true, true, 36, 3, 71, 5,  1, 1}, // #296
  {DBGFIELD("CVB_CVBY")           3, true, true, 39, 3, 92, 5,  1, 1}, // #297
  {DBGFIELD("CVDG")               9, true, true, 42, 3,  1, 5,  0, 0}, // #298
  {DBGFIELD("CVD_CVDY")           3, true, true, 45, 3,  1, 5,  0, 0}, // #299
  {DBGFIELD("MVN_MVO_MVZ")        3, true, true, 15, 1,  1, 3,  0, 0}, // #300
  {DBGFIELD("PACK_PKA_PKU")       3, true, true, 15, 1,  1, 3,  0, 0}, // #301
  {DBGFIELD("UNPKA_UNPKU")        3, true, true, 15, 1, 25, 3,  0, 0}, // #302
  {DBGFIELD("UNPK")               3, true, true, 18, 2,  1, 4,  0, 0}, // #303
  {DBGFIELD("AP_SP_ZAP")          3, true, true, 48, 3, 97, 5,  0, 0}, // #304
  {DBGFIELD("MP")                 3, true, true, 48, 3,  1, 5,  0, 0}, // #305
  {DBGFIELD("DP")                 3, true, true, 48, 3,  1, 5,  0, 0}, // #306
  {DBGFIELD("SRP")                3, true, true, 51, 3, 97, 5,  0, 0}, // #307
  {DBGFIELD("CP")                 3, true, true, 54, 2, 63, 4,  0, 0}, // #308
  {DBGFIELD("TP")                 3, true, true, 56, 2, 41, 4,  0, 0}, // #309
  {DBGFIELD("ED_EDMK")            3, true, true, 14, 1, 10, 2,  0, 0}, // #310
  {DBGFIELD("CPYA_EAR_SAR")       1, false, false,  3, 1, 33, 3,  0, 0}, // #311
  {DBGFIELD("LAE_LAEY")           3, true, true,  4, 2, 15, 4,  0, 0}, // #312
  {DBGFIELD("LAM_LAMY")           3, true, true, 15, 1, 24, 4,  0, 0}, // #313
  {DBGFIELD("STAM_STAMY")         3, true, true, 58, 2,  1, 4,  0, 0}, // #314
  {DBGFIELD("IPM")                1, false, true,  1, 1, 33, 3,  0, 0}, // #315
  {DBGFIELD("SPM")                1, false, true,  3, 1, 33, 3,  0, 0}, // #316
  {DBGFIELD("BAL_BALR")           3, true, true, 10, 2,  1, 4,  0, 0}, // #317
  {DBGFIELD("TAM")                1, false, false,  1, 1,  1, 3,  0, 0}, // #318
  {DBGFIELD("SAM24_SAM31_SAM64")  1, false, true,  3, 1,  1, 3,  0, 0}, // #319
  {DBGFIELD("BSM")                3, true, true,  4, 2,  1, 4,  0, 0}, // #320
  {DBGFIELD("BASSM")              3, true, true, 10, 2,  1, 4,  0, 0}, // #321
  {DBGFIELD("TBEGIN_TBEGINC")     3, true, true, 16, 2, 41, 4,  0, 0}, // #322
  {DBGFIELD("TEND")               3, true, true,  3, 1, 12, 3,  0, 0}, // #323
  {DBGFIELD("TABORT")             3, true, true, 14, 1, 10, 2,  0, 0}, // #324
  {DBGFIELD("ETND")               3, true, true, 14, 1, 10, 2,  0, 0}, // #325
  {DBGFIELD("NTSTG")              1, false, false,  4, 2,  1, 4,  0, 0}, // #326
  {DBGFIELD("PPA")                3, true, true, 14, 1, 10, 2,  0, 0}, // #327
  {DBGFIELD("FLOGR")              3, true, true,  8, 1, 102, 4,  0, 0}, // #328
  {DBGFIELD("POPCNT_POPCNTOpt")   16383, false, false,  0, 0,  0, 0,  0, 0}, // #329
  {DBGFIELD("SRST_SRSTU")         3, true, true, 14, 1,  8, 4,  0, 0}, // #330
  {DBGFIELD("CUSE")               3, true, true, 14, 1,  8, 4,  0, 0}, // #331
  {DBGFIELD("CFC")                3, true, true, 14, 1, 106, 5,  0, 0}, // #332
  {DBGFIELD("UPT")                3, true, true, 14, 1, 111, 7,  0, 0}, // #333
  {DBGFIELD("CKSM")               3, true, true, 14, 1,  8, 4,  0, 0}, // #334
  {DBGFIELD("CMPSC")              3, true, true, 14, 1, 106, 5,  0, 0}, // #335
  {DBGFIELD("SORTL")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #336
  {DBGFIELD("DFLTCC")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #337
  {DBGFIELD("EX_EXRL")            3, true, true,  3, 1,  1, 2,  0, 0}, // #338
  {DBGFIELD("InsnE_InsnRI_InsnRIE_InsnRIL_InsnRILU_InsnRIS_InsnRR_InsnRRE_InsnRRF_InsnRRS_InsnRS_InsnRSE_InsnRSI_InsnRSY_InsnRX_InsnRXE_InsnRXF_InsnRXY_InsnS_InsnSI_InsnSIL_InsnSIY_InsnSS_InsnSSE_InsnSSF") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #339
  {DBGFIELD("LZDR_LZER")          1, false, false,  1, 1,  1, 3,  0, 0}, // #340
  {DBGFIELD("LZXR")               3, true, true,  8, 1, 29, 3,  0, 0}, // #341
  {DBGFIELD("LER")                1, false, false,  1, 1,  1, 3,  0, 0}, // #342
  {DBGFIELD("LDGR_LDR_LDR32")     1, false, false,  1, 1,  1, 3,  0, 0}, // #343
  {DBGFIELD("LGDR")               1, false, false,  1, 1, 33, 3,  0, 0}, // #344
  {DBGFIELD("LXR")                3, true, true,  8, 1, 29, 3,  0, 0}, // #345
  {DBGFIELD("LTDBR_LTEBR")        1, false, false, 60, 1, 76, 4,  0, 0}, // #346
  {DBGFIELD("LTDBRCompare_LTEBRCompare") 1, false, false, 60, 1, 41, 3,  0, 0}, // #347
  {DBGFIELD("LTXBR_LTXBRCompare") 3, true, true, 20, 1, 24, 4,  0, 0}, // #348
  {DBGFIELD("CPSDRdd_CPSDRds_CPSDRsd_CPSDRss") 3, true, true,  8, 1, 15, 3,  0, 0}, // #349
  {DBGFIELD("LE_LEY")             1, false, false,  3, 1, 12, 3,  0, 0}, // #350
  {DBGFIELD("LD_LDE32_LDY")       1, false, false,  3, 1, 12, 3,  0, 0}, // #351
  {DBGFIELD("LX")                 1, false, false,  3, 1, 12, 3,  0, 0}, // #352
  {DBGFIELD("STD_STDY_STE_STEY")  1, false, false,  4, 2,  1, 4,  0, 0}, // #353
  {DBGFIELD("STX")                1, false, false,  4, 2,  1, 4,  0, 0}, // #354
  {DBGFIELD("LEDBR_LEDBRA")       1, false, false, 60, 1, 60, 3,  0, 0}, // #355
  {DBGFIELD("LDXBR_LDXBRA_LEXBR_LEXBRA") 1, false, false, 61, 1, 41, 3,  0, 0}, // #356
  {DBGFIELD("LDEB")               1, false, false, 62, 2, 63, 4,  0, 0}, // #357
  {DBGFIELD("LDEBR")              1, false, false, 60, 1, 60, 3,  0, 0}, // #358
  {DBGFIELD("LXDB_LXEB")          3, true, true, 64, 2, 56, 4,  0, 0}, // #359
  {DBGFIELD("LXDBR_LXEBR")        3, true, true, 20, 1, 25, 3,  0, 0}, // #360
  {DBGFIELD("CDFBR_CDFBRA_CDGBR_CDGBRA_CEFBR_CEFBRA_CEGBR_CEGBRA") 3, true, true, 66, 2, 118, 4,  0, 0}, // #361
  {DBGFIELD("CXFBR_CXFBRA_CXGBR_CXGBRA") 6, true, true, 68, 2, 63, 4,  0, 0}, // #362
  {DBGFIELD("CDLFBR_CDLGBR_CELFBR_CELGBR") 3, true, true, 66, 2, 118, 4,  0, 0}, // #363
  {DBGFIELD("CXLFBR_CXLGBR")      6, true, true, 68, 2, 63, 4,  0, 0}, // #364
  {DBGFIELD("CFDBR_CFDBRA_CFEBR_CFEBRA_CGDBR_CGDBRA_CGEBR_CGEBRA") 3, true, true, 66, 2, 81, 5,  0, 0}, // #365
  {DBGFIELD("CFXBR_CFXBRA_CGXBR_CGXBRA") 3, true, true, 70, 2, 81, 5,  0, 0}, // #366
  {DBGFIELD("CLFEBR")             3, true, true, 66, 2, 81, 5,  0, 0}, // #367
  {DBGFIELD("CLFDBR")             3, true, true, 66, 2, 81, 5,  0, 0}, // #368
  {DBGFIELD("CLGDBR_CLGEBR")      3, true, true, 66, 2, 81, 5,  0, 0}, // #369
  {DBGFIELD("CLFXBR_CLGXBR")      3, true, true, 70, 2, 81, 5,  0, 0}, // #370
  {DBGFIELD("LCDBR_LCEBR_LNDBR_LNEBR_LPDBR_LPEBR") 1, false, false, 60, 1, 102, 4,  0, 0}, // #371
  {DBGFIELD("LCDFR_LCDFR_32_LNDFR_LNDFR_32_LPDFR_LPDFR_32") 1, false, false,  1, 1,  1, 3,  0, 0}, // #372
  {DBGFIELD("LCXBR_LNXBR_LPXBR")  3, true, true, 20, 1, 24, 4,  0, 0}, // #373
  {DBGFIELD("SQDB_SQEB")          1, false, false, 62, 2, 67, 4,  0, 0}, // #374
  {DBGFIELD("SQDBR_SQEBR")        1, false, false, 60, 1, 67, 3,  0, 0}, // #375
  {DBGFIELD("SQXBR")              3, true, true, 20, 1, 67, 3,  0, 0}, // #376
  {DBGFIELD("FIDBR_FIDBRA_FIEBR_FIEBRA") 1, false, false, 60, 1, 60, 3,  0, 0}, // #377
  {DBGFIELD("FIXBR_FIXBRA")       3, true, true, 20, 1, 56, 3,  0, 0}, // #378
  {DBGFIELD("ADB_AEB")            1, false, false, 62, 2, 122, 5,  1, 1}, // #379
  {DBGFIELD("ADBR_AEBR")          1, false, false, 60, 1, 102, 4,  0, 0}, // #380
  {DBGFIELD("AXBR")               3, true, true, 20, 1, 127, 4,  0, 0}, // #381
  {DBGFIELD("SDB_SEB")            1, false, false, 62, 2, 122, 5,  1, 1}, // #382
  {DBGFIELD("SDBR_SEBR")          1, false, false, 60, 1, 102, 4,  0, 0}, // #383
  {DBGFIELD("SXBR")               3, true, true, 20, 1, 127, 4,  0, 0}, // #384
  {DBGFIELD("MDB_MDEB_MEEB")      1, false, false, 62, 2, 63, 4,  1, 1}, // #385
  {DBGFIELD("MDBR_MDEBR_MEEBR")   1, false, false, 60, 1, 60, 3,  0, 0}, // #386
  {DBGFIELD("MXDB")               3, true, true, 64, 2, 56, 4,  1, 1}, // #387
  {DBGFIELD("MXDBR")              3, true, true, 20, 1, 25, 3,  0, 0}, // #388
  {DBGFIELD("MXBR")               3, true, true, 20, 1, 67, 3,  0, 0}, // #389
  {DBGFIELD("MAEB_MSEB")          3, true, true, 72, 2, 63, 4,  2, 2}, // #390
  {DBGFIELD("MAEBR_MSEBR")        3, true, true, 60, 1, 60, 3,  0, 0}, // #391
  {DBGFIELD("MADB_MSDB")          3, true, true, 72, 2, 63, 4,  2, 2}, // #392
  {DBGFIELD("MADBR_MSDBR")        3, true, true, 60, 1, 60, 3,  0, 0}, // #393
  {DBGFIELD("DDB_DEB")            1, false, false, 62, 2, 67, 4,  1, 1}, // #394
  {DBGFIELD("DDBR_DEBR")          1, false, false, 60, 1, 67, 3,  0, 0}, // #395
  {DBGFIELD("DXBR")               3, true, true, 20, 1, 67, 3,  0, 0}, // #396
  {DBGFIELD("DIDBR_DIEBR")        3, true, true, 14, 1,  8, 4,  0, 0}, // #397
  {DBGFIELD("CDB_CEB_KDB_KEB")    1, false, false, 62, 2, 56, 4,  1, 1}, // #398
  {DBGFIELD("CDBR_CEBR_KDBR_KEBR") 1, false, false, 60, 1, 41, 3,  0, 0}, // #399
  {DBGFIELD("CXBR_KXBR")          1, false, false, 61, 1, 67, 3,  0, 0}, // #400
  {DBGFIELD("TCDB_TCEB")          1, false, false, 62, 2, 56, 4,  0, 0}, // #401
  {DBGFIELD("TCXB")               3, true, true, 64, 2, 56, 4,  0, 0}, // #402
  {DBGFIELD("EFPC")               3, true, true,  4, 2, 131, 4,  0, 0}, // #403
  {DBGFIELD("STFPC")              3, true, true,  4, 2,  1, 4,  0, 0}, // #404
  {DBGFIELD("SFPC")               3, true, true,  3, 1,  1, 3,  0, 0}, // #405
  {DBGFIELD("LFPC")               3, true, true, 17, 1,  1, 3,  0, 0}, // #406
  {DBGFIELD("SFASR")              3, true, true, 14, 1, 10, 2,  0, 0}, // #407
  {DBGFIELD("LFAS")               3, true, true, 14, 1, 10, 2,  0, 0}, // #408
  {DBGFIELD("SRNM_SRNMB_SRNMT")   3, true, true,  1, 1, 29, 3,  0, 0}, // #409
  {DBGFIELD("LTDR_LTER")          1, false, false, 60, 1, 76, 4,  0, 0}, // #410
  {DBGFIELD("LTXR")               3, true, true, 20, 1, 76, 4,  0, 0}, // #411
  {DBGFIELD("LEDR_LRER")          1, false, false, 60, 1, 60, 3,  0, 0}, // #412
  {DBGFIELD("LEXR")               1, false, false, 60, 1, 60, 3,  0, 0}, // #413
  {DBGFIELD("LDXR_LRDR")          1, false, false, 60, 1, 41, 3,  0, 0}, // #414
  {DBGFIELD("LDE")                1, false, false,  3, 1, 12, 3,  0, 0}, // #415
  {DBGFIELD("LDER")               1, false, false,  1, 1,  1, 3,  0, 0}, // #416
  {DBGFIELD("LXD_LXE")            3, true, true, 64, 2, 56, 4,  0, 0}, // #417
  {DBGFIELD("LXDR_LXER")          3, true, true, 20, 1, 41, 3,  0, 0}, // #418
  {DBGFIELD("CDFR_CDGR_CEFR_CEGR") 3, true, true, 66, 2, 118, 4,  0, 0}, // #419
  {DBGFIELD("CXFR_CXGR")          6, true, true, 68, 2, 45, 4,  0, 0}, // #420
  {DBGFIELD("CFDR_CFER_CGDR_CGER") 3, true, true, 66, 2, 81, 5,  0, 0}, // #421
  {DBGFIELD("CFXR_CGXR")          3, true, true, 70, 2, 87, 5,  0, 0}, // #422
  {DBGFIELD("THDER_THDR")         1, false, false, 60, 1, 102, 4,  0, 0}, // #423
  {DBGFIELD("TBDR_TBEDR")         1, false, false, 60, 1, 102, 4,  0, 0}, // #424
  {DBGFIELD("LCDR_LCER_LNDR_LNER_LPDR_LPER") 1, false, false, 60, 1, 102, 4,  0, 0}, // #425
  {DBGFIELD("LCXR_LNXR_LPXR")     3, true, true, 20, 1, 76, 4,  0, 0}, // #426
  {DBGFIELD("HDR_HER")            1, false, false, 60, 1, 60, 3,  0, 0}, // #427
  {DBGFIELD("SQD_SQE")            1, false, false, 62, 2, 67, 4,  0, 0}, // #428
  {DBGFIELD("SQDR_SQER")          1, false, false, 60, 1, 67, 3,  0, 0}, // #429
  {DBGFIELD("SQXR")               3, true, true, 20, 1, 67, 3,  0, 0}, // #430
  {DBGFIELD("FIDR_FIER")          1, false, false, 60, 1, 60, 3,  0, 0}, // #431
  {DBGFIELD("FIXR")               3, true, true, 20, 1, 56, 3,  0, 0}, // #432
  {DBGFIELD("AD_AE_AU_AW")        1, false, false, 62, 2, 122, 5,  1, 1}, // #433
  {DBGFIELD("ADR_AER_AUR_AWR")    1, false, false, 60, 1, 102, 4,  0, 0}, // #434
  {DBGFIELD("AXR")                3, true, true, 20, 1, 135, 4,  0, 0}, // #435
  {DBGFIELD("SD_SE_SU_SW")        1, false, false, 62, 2, 122, 5,  1, 1}, // #436
  {DBGFIELD("SDR_SER_SUR_SWR")    1, false, false, 60, 1, 102, 4,  0, 0}, // #437
  {DBGFIELD("SXR")                3, true, true, 20, 1, 135, 4,  0, 0}, // #438
  {DBGFIELD("MD_MDE_ME_MEE")      1, false, false, 62, 2, 49, 4,  1, 1}, // #439
  {DBGFIELD("MDER_MDR_MEER_MER")  1, false, false, 60, 1, 53, 3,  0, 0}, // #440
  {DBGFIELD("MXD")                3, true, true, 64, 2, 56, 4,  1, 1}, // #441
  {DBGFIELD("MXDR")               3, true, true, 20, 1, 25, 3,  0, 0}, // #442
  {DBGFIELD("MXR")                3, true, true, 20, 1, 67, 3,  0, 0}, // #443
  {DBGFIELD("MY")                 3, true, true, 64, 2, 56, 4,  1, 1}, // #444
  {DBGFIELD("MYH_MYL")            3, true, true, 72, 2, 63, 4,  1, 1}, // #445
  {DBGFIELD("MYR")                3, true, true, 20, 1, 25, 3,  0, 0}, // #446
  {DBGFIELD("MYHR_MYLR")          3, true, true, 60, 1, 60, 3,  0, 0}, // #447
  {DBGFIELD("MAD_MAE_MSD_MSE")    3, true, true, 72, 2, 63, 4,  2, 2}, // #448
  {DBGFIELD("MADR_MAER_MSDR_MSER") 3, true, true, 60, 1, 60, 3,  0, 0}, // #449
  {DBGFIELD("MAY")                3, true, true, 64, 2, 56, 4,  2, 2}, // #450
  {DBGFIELD("MAYH_MAYL")          3, true, true, 72, 2, 63, 4,  2, 2}, // #451
  {DBGFIELD("MAYR")               3, true, true, 20, 1, 25, 3,  0, 0}, // #452
  {DBGFIELD("MAYHR_MAYLR")        3, true, true, 60, 1, 60, 3,  0, 0}, // #453
  {DBGFIELD("DD_DE")              1, false, false, 62, 2, 67, 4,  1, 1}, // #454
  {DBGFIELD("DDR_DER")            1, false, false, 60, 1, 67, 3,  0, 0}, // #455
  {DBGFIELD("DXR")                3, true, true, 20, 1, 67, 3,  0, 0}, // #456
  {DBGFIELD("CD_CE")              1, false, false, 62, 2, 56, 4,  1, 1}, // #457
  {DBGFIELD("CDR_CER")            1, false, false, 60, 1, 41, 3,  0, 0}, // #458
  {DBGFIELD("CXR")                1, false, false, 61, 1, 56, 3,  0, 0}, // #459
  {DBGFIELD("LTDTR")              1, false, false, 39, 1, 139, 4,  0, 0}, // #460
  {DBGFIELD("LTXTR")              3, true, true, 42, 1, 36, 4,  0, 0}, // #461
  {DBGFIELD("LEDTR")              1, false, false, 39, 1, 67, 3,  0, 0}, // #462
  {DBGFIELD("LDXTR")              1, false, false, 36, 1, 67, 3,  0, 0}, // #463
  {DBGFIELD("LDETR")              1, false, false, 39, 1, 60, 3,  0, 0}, // #464
  {DBGFIELD("LXDTR")              3, true, true, 42, 1, 37, 3,  0, 0}, // #465
  {DBGFIELD("CDFTR")              3, true, true, 39, 2, 41, 4,  0, 0}, // #466
  {DBGFIELD("CDGTR_CDGTRA")       3, true, true, 39, 2, 67, 4,  0, 0}, // #467
  {DBGFIELD("CXFTR")              6, true, true, 48, 2, 15, 4,  0, 0}, // #468
  {DBGFIELD("CXGTR_CXGTRA")       6, true, true, 48, 2, 67, 4,  0, 0}, // #469
  {DBGFIELD("CDLFTR")             3, true, true, 39, 2, 41, 4,  0, 0}, // #470
  {DBGFIELD("CDLGTR")             3, true, true, 39, 2, 41, 4,  0, 0}, // #471
  {DBGFIELD("CXLFTR")             6, true, true, 48, 2, 41, 4,  0, 0}, // #472
  {DBGFIELD("CXLGTR")             6, true, true, 48, 2, 15, 4,  0, 0}, // #473
  {DBGFIELD("CFDTR_CGDTR_CGDTRA") 3, true, true, 39, 2, 87, 5,  0, 0}, // #474
  {DBGFIELD("CFXTR_CGXTR_CGXTRA") 3, true, true, 36, 2, 87, 5,  0, 0}, // #475
  {DBGFIELD("CLFDTR_CLGDTR")      3, true, true, 39, 2, 122, 5,  0, 0}, // #476
  {DBGFIELD("CLFXTR_CLGXTR")      3, true, true, 36, 2, 143, 5,  0, 0}, // #477
  {DBGFIELD("CDSTR_CDUTR")        3, true, true, 39, 2, 15, 4,  0, 0}, // #478
  {DBGFIELD("CXSTR_CXUTR")        6, true, true, 51, 2, 118, 4,  0, 0}, // #479
  {DBGFIELD("CSDTR_CUDTR")        3, true, true, 39, 2, 144, 4,  0, 0}, // #480
  {DBGFIELD("CSXTR_CUXTR")        6, true, true, 51, 2, 49, 4,  0, 0}, // #481
  {DBGFIELD("CDZT")               3, true, true, 74, 2, 118, 4,  0, 0}, // #482
  {DBGFIELD("CXZT")               9, true, true, 54, 2, 56, 4,  0, 0}, // #483
  {DBGFIELD("CZDT")               3, true, true, 76, 3,  1, 5,  0, 0}, // #484
  {DBGFIELD("CZXT")               3, true, true, 76, 3,  1, 5,  0, 0}, // #485
  {DBGFIELD("CDPT")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #486
  {DBGFIELD("CXPT")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #487
  {DBGFIELD("CPDT")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #488
  {DBGFIELD("CPXT")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #489
  {DBGFIELD("PFPO")               3, true, true, 14, 1,  8, 4,  0, 0}, // #490
  {DBGFIELD("FIDTR")              1, false, false, 39, 1, 53, 3,  0, 0}, // #491
  {DBGFIELD("FIXTR")              3, true, true, 42, 1, 25, 3,  0, 0}, // #492
  {DBGFIELD("EEDTR")              3, true, true, 39, 2, 144, 4,  0, 0}, // #493
  {DBGFIELD("EEXTR")              3, true, true, 36, 2, 118, 4,  0, 0}, // #494
  {DBGFIELD("ESDTR")              3, true, true, 39, 2, 144, 4,  0, 0}, // #495
  {DBGFIELD("ESXTR")              3, true, true, 36, 2, 118, 4,  0, 0}, // #496
  {DBGFIELD("ADTR_ADTRA")         1, false, false, 39, 1, 76, 4,  0, 0}, // #497
  {DBGFIELD("AXTR_AXTRA")         3, true, true, 42, 1, 87, 4,  0, 0}, // #498
  {DBGFIELD("SDTR_SDTRA")         1, false, false, 39, 1, 76, 4,  0, 0}, // #499
  {DBGFIELD("SXTR_SXTRA")         3, true, true, 42, 1, 87, 4,  0, 0}, // #500
  {DBGFIELD("MDTR_MDTRA")         1, false, false, 39, 1, 67, 3,  0, 0}, // #501
  {DBGFIELD("MXTR_MXTRA")         3, true, true, 42, 1, 67, 3,  0, 0}, // #502
  {DBGFIELD("DDTR_DDTRA")         1, false, false, 39, 1, 67, 3,  0, 0}, // #503
  {DBGFIELD("DXTR_DXTRA")         3, true, true, 42, 1, 67, 3,  0, 0}, // #504
  {DBGFIELD("QADTR")              1, false, false, 39, 1, 148, 4,  0, 0}, // #505
  {DBGFIELD("QAXTR")              3, true, true, 42, 1, 24, 4,  0, 0}, // #506
  {DBGFIELD("RRDTR")              3, true, true, 39, 2, 122, 5,  0, 0}, // #507
  {DBGFIELD("RRXTR")              6, true, true, 48, 2, 87, 5,  0, 0}, // #508
  {DBGFIELD("SLDT_SRDT")          3, true, true, 79, 2, 63, 4,  0, 0}, // #509
  {DBGFIELD("SLXT_SRXT")          3, true, true, 81, 2, 56, 4,  0, 0}, // #510
  {DBGFIELD("IEDTR")              3, true, true, 39, 2, 15, 4,  0, 0}, // #511
  {DBGFIELD("IEXTR")              6, true, true, 48, 2, 144, 4,  0, 0}, // #512
  {DBGFIELD("CDTR_KDTR")          1, false, false, 39, 1, 41, 3,  0, 0}, // #513
  {DBGFIELD("CXTR_KXTR")          1, false, false, 36, 1, 25, 3,  0, 0}, // #514
  {DBGFIELD("CEDTR")              1, false, false, 39, 1, 12, 3,  0, 0}, // #515
  {DBGFIELD("CEXTR")              1, false, false, 36, 1, 15, 3,  0, 0}, // #516
  {DBGFIELD("TDCDT_TDCET_TDGDT_TDGET") 1, false, false, 79, 2, 45, 4,  0, 0}, // #517
  {DBGFIELD("TDCXT_TDGXT")        1, false, false, 74, 2, 45, 4,  0, 0}, // #518
  {DBGFIELD("VLR32_VLR64_VLR")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #519
  {DBGFIELD("VLGV_VLGVB_VLGVF_VLGVG_VLGVH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #520
  {DBGFIELD("VLVG_VLVGB_VLVGF_VLVGG_VLVGH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #521
  {DBGFIELD("VLVGP32_VLVGP")      16383, false, false,  0, 0,  0, 0,  0, 0}, // #522
  {DBGFIELD("VZERO")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #523
  {DBGFIELD("VONE")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #524
  {DBGFIELD("VGBM")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #525
  {DBGFIELD("VGM_VGMB_VGMF_VGMG_VGMH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #526
  {DBGFIELD("VREPI_VREPIB_VREPIF_VREPIG_VREPIH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #527
  {DBGFIELD("VLEIB_VLEIF_VLEIG_VLEIH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #528
  {DBGFIELD("VL_VLAlign")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #529
  {DBGFIELD("VLBB_VLL")           16383, false, false,  0, 0,  0, 0,  0, 0}, // #530
  {DBGFIELD("VL32_VL64")          16383, false, false,  0, 0,  0, 0,  0, 0}, // #531
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH_VLLEZLF") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #532
  {DBGFIELD("VLREP_VLREPB_VLREPF_VLREPG_VLREPH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #533
  {DBGFIELD("VLEB_VLEF_VLEG_VLEH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #534
  {DBGFIELD("VGEF_VGEG")          16383, false, false,  0, 0,  0, 0,  0, 0}, // #535
  {DBGFIELD("VLM_VLMAlign")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #536
  {DBGFIELD("VLRL_VLRLR")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #537
  {DBGFIELD("VST32_VST64_VST_VSTAlign_VSTL") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #538
  {DBGFIELD("VSTEF_VSTEG")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #539
  {DBGFIELD("VSTEB_VSTEH")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #540
  {DBGFIELD("VSTM_VSTMAlign")     16383, false, false,  0, 0,  0, 0,  0, 0}, // #541
  {DBGFIELD("VSCEF_VSCEG")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #542
  {DBGFIELD("VSTRL_VSTRLR")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #543
  {DBGFIELD("VLBR_VLBRF_VLBRG_VLBRH_VLBRQ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #544
  {DBGFIELD("VLER_VLERF_VLERG_VLERH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #545
  {DBGFIELD("VLEBRF_VLEBRG_VLEBRH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #546
  {DBGFIELD("VLLEBRZ_VLLEBRZE_VLLEBRZF_VLLEBRZG_VLLEBRZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #547
  {DBGFIELD("VLBRREP_VLBRREPF_VLBRREPG_VLBRREPH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #548
  {DBGFIELD("VSTBR_VSTBRF_VSTBRG_VSTBRH_VSTBRQ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #549
  {DBGFIELD("VSTER_VSTERF_VSTERG_VSTERH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #550
  {DBGFIELD("VSTEBRH")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #551
  {DBGFIELD("VSTEBRF_VSTEBRG")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #552
  {DBGFIELD("VMRH_VMRHB_VMRHF_VMRHG_VMRHH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #553
  {DBGFIELD("VMRL_VMRLB_VMRLF_VMRLG_VMRLH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #554
  {DBGFIELD("VPERM")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #555
  {DBGFIELD("VPDI")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #556
  {DBGFIELD("VBPERM")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #557
  {DBGFIELD("VREP_VREPB_VREPF_VREPG_VREPH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #558
  {DBGFIELD("VSEL")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #559
  {DBGFIELD("VPK_VPKF_VPKG_VPKH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #560
  {DBGFIELD("VPKS_VPKSF_VPKSG_VPKSH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #561
  {DBGFIELD("VPKSFS_VPKSGS_VPKSHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #562
  {DBGFIELD("VPKLS_VPKLSF_VPKLSG_VPKLSH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #563
  {DBGFIELD("VPKLSFS_VPKLSGS_VPKLSHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #564
  {DBGFIELD("VSEG_VSEGB_VSEGF_VSEGH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #565
  {DBGFIELD("VUPH_VUPHB_VUPHF_VUPHH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #566
  {DBGFIELD("VUPL_VUPLB_VUPLF")   16383, false, false,  0, 0,  0, 0,  0, 0}, // #567
  {DBGFIELD("VUPLH_VUPLHB_VUPLHF_VUPLHH_VUPLHW") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #568
  {DBGFIELD("VUPLL_VUPLLB_VUPLLF_VUPLLH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #569
  {DBGFIELD("VA_VAB_VAC_VACQ_VAF_VAG_VAH_VAQ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #570
  {DBGFIELD("VACC_VACCB_VACCC_VACCCQ_VACCF_VACCG_VACCH_VACCQ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #571
  {DBGFIELD("VAVG_VAVGB_VAVGF_VAVGG_VAVGH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #572
  {DBGFIELD("VAVGL_VAVGLB_VAVGLF_VAVGLG_VAVGLH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #573
  {DBGFIELD("VN_VNC_VNN_VNO_VNX") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #574
  {DBGFIELD("VO_VOC")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #575
  {DBGFIELD("VCKSM")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #576
  {DBGFIELD("VCLZ_VCLZB_VCLZF_VCLZG_VCLZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #577
  {DBGFIELD("VCTZ_VCTZB_VCTZF_VCTZG_VCTZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #578
  {DBGFIELD("VX")                 16383, false, false,  0, 0,  0, 0,  0, 0}, // #579
  {DBGFIELD("VGFM")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #580
  {DBGFIELD("VGFMA_VGFMAB_VGFMAF_VGFMAG_VGFMAH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #581
  {DBGFIELD("VGFMB_VGFMF_VGFMG_VGFMH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #582
  {DBGFIELD("VLC_VLCB_VLCF_VLCG_VLCH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #583
  {DBGFIELD("VLP_VLPB_VLPF_VLPG_VLPH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #584
  {DBGFIELD("VMX_VMXB_VMXF_VMXG_VMXH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #585
  {DBGFIELD("VMXL_VMXLB_VMXLF_VMXLG_VMXLH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #586
  {DBGFIELD("VMN_VMNB_VMNF_VMNG_VMNH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #587
  {DBGFIELD("VMNL_VMNLB_VMNLF_VMNLG_VMNLH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #588
  {DBGFIELD("VMAL_VMALB_VMALF")   16383, false, false,  0, 0,  0, 0,  0, 0}, // #589
  {DBGFIELD("VMALE_VMALEB_VMALEF_VMALEH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #590
  {DBGFIELD("VMALH_VMALHB_VMALHF_VMALHH_VMALHW") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #591
  {DBGFIELD("VMALO_VMALOB_VMALOF_VMALOH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #592
  {DBGFIELD("VMAO_VMAOB_VMAOF_VMAOH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #593
  {DBGFIELD("VMAE_VMAEB_VMAEF_VMAEH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #594
  {DBGFIELD("VMAH_VMAHB_VMAHF_VMAHH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #595
  {DBGFIELD("VME_VMEB_VMEF_VMEH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #596
  {DBGFIELD("VMH_VMHB_VMHF_VMHH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #597
  {DBGFIELD("VML_VMLB_VMLF")      16383, false, false,  0, 0,  0, 0,  0, 0}, // #598
  {DBGFIELD("VMLE_VMLEB_VMLEF_VMLEH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #599
  {DBGFIELD("VMLH_VMLHB_VMLHF_VMLHH_VMLHW") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #600
  {DBGFIELD("VMLO_VMLOB_VMLOF_VMLOH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #601
  {DBGFIELD("VMO_VMOB_VMOF_VMOH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #602
  {DBGFIELD("VMSL_VMSLG")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #603
  {DBGFIELD("VPOPCT_VPOPCTB_VPOPCTF_VPOPCTG_VPOPCTH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #604
  {DBGFIELD("VERLL_VERLLB_VERLLF_VERLLG_VERLLH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #605
  {DBGFIELD("VERLLV_VERLLVB_VERLLVF_VERLLVG_VERLLVH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #606
  {DBGFIELD("VERIM_VERIMB_VERIMF_VERIMG_VERIMH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #607
  {DBGFIELD("VESL_VESLB_VESLF_VESLG_VESLH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #608
  {DBGFIELD("VESLV_VESLVB_VESLVF_VESLVG_VESLVH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #609
  {DBGFIELD("VESRA_VESRAB_VESRAF_VESRAG_VESRAH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #610
  {DBGFIELD("VESRAV_VESRAVB_VESRAVF_VESRAVG_VESRAVH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #611
  {DBGFIELD("VESRL_VESRLB_VESRLF_VESRLG_VESRLH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #612
  {DBGFIELD("VESRLV_VESRLVB_VESRLVF_VESRLVG_VESRLVH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #613
  {DBGFIELD("VSL_VSLDB")          16383, false, false,  0, 0,  0, 0,  0, 0}, // #614
  {DBGFIELD("VSLB")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #615
  {DBGFIELD("VSRA_VSRL")          16383, false, false,  0, 0,  0, 0,  0, 0}, // #616
  {DBGFIELD("VSRAB_VSRLB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #617
  {DBGFIELD("VSLD")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #618
  {DBGFIELD("VSRD")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #619
  {DBGFIELD("VSB_VSBCBI_VSBCBIQ_VSBI_VSBIQ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #620
  {DBGFIELD("VSCBI_VSCBIB_VSCBIF_VSCBIG_VSCBIH_VSCBIQ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #621
  {DBGFIELD("VS_VSF_VSG_VSH_VSQ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #622
  {DBGFIELD("VSUM_VSUMB_VSUMH")   16383, false, false,  0, 0,  0, 0,  0, 0}, // #623
  {DBGFIELD("VSUMG_VSUMGF_VSUMGH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #624
  {DBGFIELD("VSUMQ_VSUMQF_VSUMQG") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #625
  {DBGFIELD("VEC_VECB_VECF_VECG_VECH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #626
  {DBGFIELD("VECL_VECLB_VECLF_VECLG_VECLH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #627
  {DBGFIELD("VCEQ_VCEQB_VCEQF_VCEQG_VCEQH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #628
  {DBGFIELD("VCEQBS_VCEQFS_VCEQGS_VCEQHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #629
  {DBGFIELD("VCH_VCHB_VCHF_VCHG_VCHH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #630
  {DBGFIELD("VCHBS_VCHFS_VCHGS_VCHHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #631
  {DBGFIELD("VCHL_VCHLB_VCHLF_VCHLG_VCHLH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #632
  {DBGFIELD("VCHLBS_VCHLFS_VCHLGS_VCHLHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #633
  {DBGFIELD("VTM")                16383, false, false,  0, 0,  0, 0,  0, 0}, // #634
  {DBGFIELD("VCFPL_VCFPS")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #635
  {DBGFIELD("VCDG_VCDLG")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #636
  {DBGFIELD("VCDGB_VCDLGB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #637
  {DBGFIELD("WCDGB_WCDLGB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #638
  {DBGFIELD("VCEFB_VCELFB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #639
  {DBGFIELD("WCEFB_WCELFB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #640
  {DBGFIELD("VCLFP_VCSFP")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #641
  {DBGFIELD("VCGD_VCLGD")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #642
  {DBGFIELD("VCGDB_VCLGDB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #643
  {DBGFIELD("WCGDB_WCLGDB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #644
  {DBGFIELD("VCFEB_VCLFEB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #645
  {DBGFIELD("WCFEB_WCLFEB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #646
  {DBGFIELD("VLDE_VLED")          16383, false, false,  0, 0,  0, 0,  0, 0}, // #647
  {DBGFIELD("VLDEB_VLEDB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #648
  {DBGFIELD("WLDEB_WLEDB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #649
  {DBGFIELD("VFLL_VFLR")          16383, false, false,  0, 0,  0, 0,  0, 0}, // #650
  {DBGFIELD("VFLLS_VFLRD")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #651
  {DBGFIELD("WFLLS_WFLRD")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #652
  {DBGFIELD("WFLLD")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #653
  {DBGFIELD("WFLRX")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #654
  {DBGFIELD("VFI_VFIDB")          16383, false, false,  0, 0,  0, 0,  0, 0}, // #655
  {DBGFIELD("WFIDB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #656
  {DBGFIELD("VFISB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #657
  {DBGFIELD("WFISB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #658
  {DBGFIELD("WFIXB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #659
  {DBGFIELD("VFPSO")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #660
  {DBGFIELD("VFPSODB_WFPSODB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #661
  {DBGFIELD("VFPSOSB_WFPSOSB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #662
  {DBGFIELD("WFPSOXB")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #663
  {DBGFIELD("VFLCDB_VFLNDB_VFLPDB_WFLCDB_WFLNDB_WFLPDB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #664
  {DBGFIELD("VFLCSB_VFLNSB_VFLPSB_WFLCSB_WFLNSB_WFLPSB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #665
  {DBGFIELD("WFLCXB_WFLNXB_WFLPXB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #666
  {DBGFIELD("VFMAX_VFMIN")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #667
  {DBGFIELD("VFMAXDB_VFMINDB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #668
  {DBGFIELD("WFMAXDB_WFMINDB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #669
  {DBGFIELD("VFMAXSB_VFMINSB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #670
  {DBGFIELD("WFMAXSB_WFMINSB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #671
  {DBGFIELD("WFMAXXB_WFMINXB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #672
  {DBGFIELD("VFTCI")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #673
  {DBGFIELD("VFTCIDB_WFTCIDB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #674
  {DBGFIELD("VFTCISB_WFTCISB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #675
  {DBGFIELD("WFTCIXB")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #676
  {DBGFIELD("VFA_VFS")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #677
  {DBGFIELD("VFADB_VFSDB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #678
  {DBGFIELD("WFADB_WFSDB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #679
  {DBGFIELD("VFASB_VFSSB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #680
  {DBGFIELD("WFASB_WFSSB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #681
  {DBGFIELD("WFAXB_WFSXB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #682
  {DBGFIELD("VFM_VFMDB")          16383, false, false,  0, 0,  0, 0,  0, 0}, // #683
  {DBGFIELD("WFMDB_WFMSB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #684
  {DBGFIELD("VFMSB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #685
  {DBGFIELD("WFMXB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #686
  {DBGFIELD("VFMA_VFMS_VFNMA_VFNMS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #687
  {DBGFIELD("VFMADB_VFMSDB_VFNMADB_VFNMSDB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #688
  {DBGFIELD("WFMADB_WFMSDB_WFNMADB_WFNMSDB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #689
  {DBGFIELD("VFMASB_VFMSSB_VFNMASB_VFNMSSB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #690
  {DBGFIELD("WFMASB_WFMSSB_WFNMASB_WFNMSSB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #691
  {DBGFIELD("WFMAXB_WFMSXB_WFNMAXB_WFNMSXB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #692
  {DBGFIELD("VFD")                16383, false, false,  0, 0,  0, 0,  0, 0}, // #693
  {DBGFIELD("VFDDB_WFDDB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #694
  {DBGFIELD("VFDSB_WFDSB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #695
  {DBGFIELD("WFDXB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #696
  {DBGFIELD("VFSQ")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #697
  {DBGFIELD("VFSQDB_WFSQDB")      16383, false, false,  0, 0,  0, 0,  0, 0}, // #698
  {DBGFIELD("VFSQSB_WFSQSB")      16383, false, false,  0, 0,  0, 0,  0, 0}, // #699
  {DBGFIELD("WFSQXB")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #700
  {DBGFIELD("VFCE_VFCH_VFCHE")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #701
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB_VFKEDB_VFKHDB_VFKHEDB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #702
  {DBGFIELD("WFCEDB_WFCHDB_WFCHEDB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #703
  {DBGFIELD("WFKEDB_WFKHDB_WFKHEDB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #704
  {DBGFIELD("VFCESB_VFCHESB_VFCHSB_VFKESB_VFKHESB_VFKHSB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #705
  {DBGFIELD("WFCESB_WFCHESB_WFCHSB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #706
  {DBGFIELD("WFKESB_WFKHESB_WFKHSB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #707
  {DBGFIELD("WFCEXB_WFCHEXB_WFCHXB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #708
  {DBGFIELD("WFKEXB_WFKHEXB_WFKHXB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #709
  {DBGFIELD("VFCEDBS_VFCHDBS_VFCHEDBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #710
  {DBGFIELD("VFKEDBS_VFKHDBS_VFKHEDBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #711
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS_WFKEDBS_WFKHDBS_WFKHEDBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #712
  {DBGFIELD("VFCESBS_VFCHESBS_VFCHSBS_VFKESBS_VFKHESBS_VFKHSBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #713
  {DBGFIELD("WFCESBS_WFCHESBS_WFCHSBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #714
  {DBGFIELD("WFKESBS_WFKHESBS_WFKHSBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #715
  {DBGFIELD("WFCEXBS_WFCHEXBS_WFCHXBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #716
  {DBGFIELD("WFKEXBS_WFKHEXBS_WFKHXBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #717
  {DBGFIELD("WFC_WFK")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #718
  {DBGFIELD("WFCDB_WFKDB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #719
  {DBGFIELD("WFCSB_WFKSB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #720
  {DBGFIELD("WFCXB_WFKXB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #721
  {DBGFIELD("LEFR")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #722
  {DBGFIELD("LFER")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #723
  {DBGFIELD("VFAE_VFAEB")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #724
  {DBGFIELD("VFAEF_VFAEH")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #725
  {DBGFIELD("VFAEBS_VFAEFS_VFAEHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #726
  {DBGFIELD("VFAEZB_VFAEZF_VFAEZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #727
  {DBGFIELD("VFAEZBS_VFAEZFS_VFAEZHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #728
  {DBGFIELD("VFEE_VFEEB_VFEEF_VFEEH_VFEEZB_VFEEZF_VFEEZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #729
  {DBGFIELD("VFEEBS_VFEEFS_VFEEHS_VFEEZBS_VFEEZFS_VFEEZHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #730
  {DBGFIELD("VFENE_VFENEB_VFENEF_VFENEH_VFENEZB_VFENEZF_VFENEZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #731
  {DBGFIELD("VFENEBS_VFENEFS_VFENEHS_VFENEZBS_VFENEZFS_VFENEZHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #732
  {DBGFIELD("VISTR_VISTRB_VISTRF_VISTRH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #733
  {DBGFIELD("VISTRBS_VISTRFS_VISTRHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #734
  {DBGFIELD("VSTRC_VSTRCB_VSTRCF_VSTRCH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #735
  {DBGFIELD("VSTRCBS_VSTRCFS_VSTRCHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #736
  {DBGFIELD("VSTRCZB_VSTRCZF_VSTRCZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #737
  {DBGFIELD("VSTRCZBS_VSTRCZFS_VSTRCZHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #738
  {DBGFIELD("VSTRS_VSTRSB_VSTRSF_VSTRSH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #739
  {DBGFIELD("VSTRSZB_VSTRSZF_VSTRSZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #740
  {DBGFIELD("VLIP")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #741
  {DBGFIELD("VPKZ")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #742
  {DBGFIELD("VUPKZ")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #743
  {DBGFIELD("VCVB_VCVBG_VCVBGOpt_VCVBOpt") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #744
  {DBGFIELD("VCVD_VCVDG")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #745
  {DBGFIELD("VAP_VSP")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #746
  {DBGFIELD("VMP_VMSP")           16383, false, false,  0, 0,  0, 0,  0, 0}, // #747
  {DBGFIELD("VDP_VRP")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #748
  {DBGFIELD("VSDP")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #749
  {DBGFIELD("VSRP")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #750
  {DBGFIELD("VPSOP")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #751
  {DBGFIELD("VCP_VTP")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #752
  {DBGFIELD("EPSW")               3, true, true, 14, 1,  9, 3,  0, 0}, // #753
  {DBGFIELD("LPSW_LPSWE")         3, true, true, 14, 1, 10, 2,  0, 0}, // #754
  {DBGFIELD("IPK")                3, true, true,  1, 1, 33, 3,  0, 0}, // #755
  {DBGFIELD("SPKA")               1, false, true,  3, 1,  1, 3,  0, 0}, // #756
  {DBGFIELD("SSM")                1, false, true,  3, 1,  1, 3,  0, 0}, // #757
  {DBGFIELD("STNSM_STOSM")        3, true, true,  4, 2,  1, 4,  0, 0}, // #758
  {DBGFIELD("IAC")                1, false, false,  1, 1, 33, 3,  0, 0}, // #759
  {DBGFIELD("SAC_SACF")           1, false, true,  3, 1,  1, 3,  0, 0}, // #760
  {DBGFIELD("LCTL_LCTLG")         1, false, false,  4, 2, 152, 5,  0, 0}, // #761
  {DBGFIELD("STCTG_STCTL")        3, true, true, 58, 2,  1, 4,  0, 0}, // #762
  {DBGFIELD("EPAIR_EPAR_ESAIR_ESAR") 1, false, false,  3, 1, 12, 3,  0, 0}, // #763
  {DBGFIELD("SSAIR_SSAR")         3, true, true, 14, 1, 10, 2,  0, 0}, // #764
  {DBGFIELD("ESEA")               3, true, true, 14, 1, 10, 2,  0, 0}, // #765
  {DBGFIELD("SPX_STPX")           3, true, true, 14, 1, 10, 2,  0, 0}, // #766
  {DBGFIELD("ISKE")               3, true, true, 14, 1, 10, 2,  0, 0}, // #767
  {DBGFIELD("IVSK")               3, true, true, 14, 1, 10, 2,  0, 0}, // #768
  {DBGFIELD("SSKE_SSKEOpt")       3, true, true, 14, 1, 10, 2,  0, 0}, // #769
  {DBGFIELD("RRBE_RRBM")          3, true, true, 14, 1, 10, 2,  0, 0}, // #770
  {DBGFIELD("IRBM")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #771
  {DBGFIELD("PFMF")               3, true, true, 14, 1, 10, 2,  0, 0}, // #772
  {DBGFIELD("TB")                 3, true, true, 14, 1,  9, 3,  0, 0}, // #773
  {DBGFIELD("PGIN")               3, true, true, 14, 1, 10, 2,  0, 0}, // #774
  {DBGFIELD("PGOUT")              3, true, true, 14, 1, 10, 2,  0, 0}, // #775
  {DBGFIELD("IPTE_IPTEOpt_IPTEOptOpt") 3, true, true, 14, 1, 10, 2,  0, 0}, // #776
  {DBGFIELD("IDTE_IDTEOpt")       3, true, true, 14, 1, 10, 2,  0, 0}, // #777
  {DBGFIELD("CRDTE_CRDTEOpt")     3, true, true, 14, 1, 10, 2,  0, 0}, // #778
  {DBGFIELD("PTLB")               3, true, true, 14, 1, 10, 2,  0, 0}, // #779
  {DBGFIELD("CSP_CSPG")           3, true, true, 14, 1,  9, 3,  0, 0}, // #780
  {DBGFIELD("LPTEA")              3, true, true, 14, 1,  8, 4,  0, 0}, // #781
  {DBGFIELD("LRA_LRAG_LRAY")      3, true, true, 14, 1,  9, 3,  0, 0}, // #782
  {DBGFIELD("STRAG")              3, true, true, 14, 1, 10, 2,  0, 0}, // #783
  {DBGFIELD("LURA_LURAG")         3, true, true, 14, 1, 10, 2,  0, 0}, // #784
  {DBGFIELD("STURA_STURG")        3, true, true, 14, 1, 10, 2,  0, 0}, // #785
  {DBGFIELD("TPROT")              3, true, true, 14, 1, 10, 2,  0, 0}, // #786
  {DBGFIELD("MVCK_MVCP_MVCS")     3, true, true, 14, 1, 10, 2,  0, 0}, // #787
  {DBGFIELD("MVCDK_MVCSK")        3, true, true, 14, 1, 10, 2,  0, 0}, // #788
  {DBGFIELD("MVCOS")              3, true, true, 14, 1, 10, 2,  0, 0}, // #789
  {DBGFIELD("MVPG")               3, true, true, 14, 1, 10, 2,  0, 0}, // #790
  {DBGFIELD("LASP")               3, true, true, 14, 1, 10, 2,  0, 0}, // #791
  {DBGFIELD("PALB")               3, true, true,  3, 1,  1, 3,  0, 0}, // #792
  {DBGFIELD("PC")                 3, true, true, 14, 1, 10, 2,  0, 0}, // #793
  {DBGFIELD("PR")                 3, true, true, 14, 1, 10, 2,  0, 0}, // #794
  {DBGFIELD("PT_PTI")             3, true, true, 14, 1, 10, 2,  0, 0}, // #795
  {DBGFIELD("RP")                 3, true, true, 14, 1, 10, 2,  0, 0}, // #796
  {DBGFIELD("BSA_BSG")            3, true, true, 14, 1, 10, 2,  0, 0}, // #797
  {DBGFIELD("TAR")                3, true, true, 14, 1, 10, 2,  0, 0}, // #798
  {DBGFIELD("BAKR")               3, true, true, 14, 1, 10, 2,  0, 0}, // #799
  {DBGFIELD("EREG_EREGG")         3, true, true, 14, 1, 10, 2,  0, 0}, // #800
  {DBGFIELD("ESTA_MSTA")          3, true, true, 14, 1,  9, 3,  0, 0}, // #801
  {DBGFIELD("PTFF")               3, true, true, 14, 1, 10, 2,  0, 0}, // #802
  {DBGFIELD("SCK_SCKC_SCKPF")     3, true, true, 14, 1, 10, 2,  0, 0}, // #803
  {DBGFIELD("SPT")                3, true, true, 14, 1, 10, 2,  0, 0}, // #804
  {DBGFIELD("STCK_STCKF")         3, true, true, 18, 2, 41, 4,  0, 0}, // #805
  {DBGFIELD("STCKE")              6, true, true, 83, 2, 92, 4,  0, 0}, // #806
  {DBGFIELD("STCKC")              3, true, true, 14, 1, 10, 2,  0, 0}, // #807
  {DBGFIELD("STPT")               3, true, true, 14, 1, 10, 2,  0, 0}, // #808
  {DBGFIELD("STAP")               3, true, true, 14, 1, 10, 2,  0, 0}, // #809
  {DBGFIELD("STIDP")              3, true, true, 14, 1, 10, 2,  0, 0}, // #810
  {DBGFIELD("STSI")               3, true, true, 14, 1,  9, 3,  0, 0}, // #811
  {DBGFIELD("STFL_STFLE")         3, true, true, 14, 1,  9, 3,  0, 0}, // #812
  {DBGFIELD("ECAG")               3, true, true, 14, 1, 10, 2,  0, 0}, // #813
  {DBGFIELD("ECTG")               3, true, true, 14, 1,  9, 3,  0, 0}, // #814
  {DBGFIELD("PTF")                3, true, true, 14, 1, 10, 2,  0, 0}, // #815
  {DBGFIELD("PCKMO")              3, true, true, 14, 1, 10, 2,  0, 0}, // #816
  {DBGFIELD("SVC")                3, true, true, 14, 1, 10, 2,  0, 0}, // #817
  {DBGFIELD("MC")                 3, true, true,  1, 1,  1, 3,  0, 0}, // #818
  {DBGFIELD("DIAG")               3, true, true, 14, 1, 10, 2,  0, 0}, // #819
  {DBGFIELD("TRACE_TRACG")        1, false, false,  1, 1,  1, 3,  0, 0}, // #820
  {DBGFIELD("TRAP2_TRAP4")        3, true, true, 14, 1, 10, 2,  0, 0}, // #821
  {DBGFIELD("SIGA_SIGP")          3, true, true, 14, 1, 10, 2,  0, 0}, // #822
  {DBGFIELD("SIE")                3, true, true, 14, 1, 10, 2,  0, 0}, // #823
  {DBGFIELD("LPP")                1, false, false,  1, 1,  1, 3,  0, 0}, // #824
  {DBGFIELD("ECPGA")              3, true, true, 14, 1,  9, 3,  0, 0}, // #825
  {DBGFIELD("ECCTR_EPCTR")        3, true, true, 14, 1,  9, 3,  0, 0}, // #826
  {DBGFIELD("LCCTL")              3, true, true, 14, 1, 10, 2,  0, 0}, // #827
  {DBGFIELD("LPCTL_LSCTL")        3, true, true, 14, 1, 10, 2,  0, 0}, // #828
  {DBGFIELD("QCTRI_QSI")          3, true, true, 14, 1, 10, 2,  0, 0}, // #829
  {DBGFIELD("SCCTR_SPCTR")        3, true, true, 14, 1, 10, 2,  0, 0}, // #830
  {DBGFIELD("CSCH_HSCH_RSCH_XSCH") 3, true, true, 14, 1, 10, 2,  0, 0}, // #831
  {DBGFIELD("MSCH_SSCH_STSCH_TSCH") 3, true, true, 14, 1, 10, 2,  0, 0}, // #832
  {DBGFIELD("RCHP")               3, true, true, 14, 1, 10, 2,  0, 0}, // #833
  {DBGFIELD("SCHM")               3, true, true, 14, 1, 10, 2,  0, 0}, // #834
  {DBGFIELD("STCPS_STCRW")        3, true, true, 14, 1, 10, 2,  0, 0}, // #835
  {DBGFIELD("TPI")                3, true, true, 14, 1, 10, 2,  0, 0}, // #836
  {DBGFIELD("SAL")                3, true, true, 14, 1, 10, 2,  0, 0}, // #837
  {DBGFIELD("KIMD_KLMD_KMAC")     3, true, true, 14, 1,  8, 4,  0, 0}, // #838
  {DBGFIELD("POPCNT")             1, false, false,  1, 1, 32, 4,  0, 0}, // #839
  {DBGFIELD("VFI")                16383, false, false,  0, 0,  0, 0,  0, 0}, // #840
  {DBGFIELD("VFM")                16383, false, false,  0, 0,  0, 0,  0, 0}, // #841
  {DBGFIELD("VCVB_VCVBG")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #842
  {DBGFIELD("AGF")                1, false, false,  4, 2, 36, 5,  1, 1}, // #843
  {DBGFIELD("SGF")                1, false, false,  4, 2, 36, 5,  1, 1}, // #844
  {DBGFIELD("KM_KMC_KMCTR_KMF_KMO") 3, true, true, 14, 1, 106, 5,  0, 0}, // #845
  {DBGFIELD("PCC_PPNO")           16383, false, false,  0, 0,  0, 0,  0, 0}, // #846
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #847
  {DBGFIELD("VN_VNC_VNO")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #848
  {DBGFIELD("VO")                 16383, false, false,  0, 0,  0, 0,  0, 0}, // #849
  {DBGFIELD("VPOPCT")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #850
  {DBGFIELD("WFMDB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #851
  {DBGFIELD("VFMA_VFMS")          16383, false, false,  0, 0,  0, 0,  0, 0}, // #852
  {DBGFIELD("VFMADB_VFMSDB")      16383, false, false,  0, 0,  0, 0,  0, 0}, // #853
  {DBGFIELD("WFMADB_WFMSDB")      16383, false, false,  0, 0,  0, 0,  0, 0}, // #854
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #855
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #856
  {DBGFIELD("LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, false,  1, 1, 29, 3,  0, 0}, // #857
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ") 1, false, false,  4, 2, 37, 4,  1, 1}, // #858
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ") 1, false, false,  4, 2,  1, 4,  0, 0}, // #859
  {DBGFIELD("ALSI_ASI")           1, false, false,  4, 2, 19, 5,  0, 0}, // #860
  {DBGFIELD("ALGF")               1, false, false,  4, 2, 19, 5,  1, 1}, // #861
  {DBGFIELD("PCC")                3, true, true, 14, 1,  8, 4,  0, 0}, // #862
  {DBGFIELD("CELFBR_CELGBR")      3, true, true, 66, 2, 118, 4,  0, 0}, // #863
  {DBGFIELD("MD_MEE")             1, false, false, 62, 2, 63, 4,  1, 1}, // #864
  {DBGFIELD("MDR_MEER")           1, false, false, 60, 1, 60, 3,  0, 0}, // #865
  {DBGFIELD("CFDTR")              3, true, true, 39, 2, 122, 5,  0, 0}, // #866
  {DBGFIELD("CFXTR")              3, true, true, 36, 2, 143, 5,  0, 0}, // #867
  {DBGFIELD("TDCDT_TDGDT")        1, false, false, 79, 2, 41, 4,  0, 0}, // #868
  {DBGFIELD("SCK")                3, true, true, 14, 1, 10, 2,  0, 0}, // #869
  {DBGFIELD("SCKPF")              3, true, true, 14, 1, 10, 2,  0, 0}, // #870
  {DBGFIELD("RISBG_RISBG32")      1, false, false,  1, 1,  1, 3,  0, 0}, // #871
}; // ZEC12ModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc Z13ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  16383, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("ADJDYNALLOC")        1, false, false, 39, 1,  1, 3,  0, 0}, // #1
  {DBGFIELD("CallBRCL_BRC_BRCAsm_BRCL_BRCLAsm") 1, false, false, 14, 1,  1, 3,  0, 0}, // #2
  {DBGFIELD("CallJG_J_JAsmE_JAsmH_JAsmHE_JAsmL_JAsmLE_JAsmLH_JAsmM_JAsmNE_JAsmNH_JAsmNHE_JAsmNL_JAsmNLE_JAsmNLH_JAsmNM_JAsmNO_JAsmNP_JAsmNZ_JAsmO_JAsmP_JAsmZ_JG_JGAsmE_JGAsmH_JGAsmHE_JGAsmL_JGAsmLE_JGAsmLH_JGAsmM_JGAsmNE_JGAsmNH_JGAsmNHE_JGAsmNL_JGAsmNLE_JGAsmNLH_JGAsmNM_JGAsmNO_JGAsmNP_JGAsmNZ_JGAsmO_JGAsmP_JGAsmZ") 1, false, false, 14, 1,  1, 3,  0, 0}, // #3
  {DBGFIELD("CallBCR_BC_BCAsm_BCR_BCRAsm") 1, false, false, 60, 1,  1, 3,  0, 0}, // #4
  {DBGFIELD("CallBR_B_BAsmE_BAsmH_BAsmHE_BAsmL_BAsmLE_BAsmLH_BAsmM_BAsmNE_BAsmNH_BAsmNHE_BAsmNL_BAsmNLE_BAsmNLH_BAsmNM_BAsmNO_BAsmNP_BAsmNZ_BAsmO_BAsmP_BAsmZ_BR_BRAsmE_BRAsmH_BRAsmHE_BRAsmL_BRAsmLE_BRAsmLH_BRAsmM_BRAsmNE_BRAsmNH_BRAsmNHE_BRAsmNL_BRAsmNLE_BRAsmNLH_BRAsmNM_BRAsmNO_BRAsmNP_BRAsmNZ_BRAsmO_BRAsmP_BRAsmZ") 1, false, false, 60, 1,  1, 3,  0, 0}, // #5
  {DBGFIELD("BI_BIAsmE_BIAsmH_BIAsmHE_BIAsmL_BIAsmLE_BIAsmLH_BIAsmM_BIAsmNE_BIAsmNH_BIAsmNHE_BIAsmNL_BIAsmNLE_BIAsmNLH_BIAsmNM_BIAsmNO_BIAsmNP_BIAsmNZ_BIAsmO_BIAsmP_BIAsmZ_BIC_BICAsm") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #6
  {DBGFIELD("BRCT_BRCTG")         1, false, true, 39, 1,  1, 3,  0, 0}, // #7
  {DBGFIELD("BRCTH")              3, true, true, 85, 2,  1, 4,  0, 0}, // #8
  {DBGFIELD("BCT_BCTG_BCTGR_BCTR") 3, true, true, 85, 2,  1, 4,  0, 0}, // #9
  {DBGFIELD("BRXH_BRXHG_BRXLE_BRXLG_BXH_BXHG_BXLE_BXLEG") 6, true, true, 87, 2,  1, 4,  0, 0}, // #10
  {DBGFIELD("CGIJ_CGIJAsm_CGIJAsmE_CGIJAsmH_CGIJAsmHE_CGIJAsmL_CGIJAsmLE_CGIJAsmLH_CGIJAsmNE_CGIJAsmNH_CGIJAsmNHE_CGIJAsmNL_CGIJAsmNLE_CGIJAsmNLH_CGRJ_CGRJAsm_CGRJAsmE_CGRJAsmH_CGRJAsmHE_CGRJAsmL_CGRJAsmLE_CGRJAsmLH_CGRJAsmNE_CGRJAsmNH_CGRJAsmNHE_CGRJAsmNL_CGRJAsmNLE_CGRJAsmNLH_CIJ_CIJAsm_CIJAsmE_CIJAsmH_CIJAsmHE_CIJAsmL_CIJAsmLE_CIJAsmLH_CIJAsmNE_CIJAsmNH_CIJAsmNHE_CIJAsmNL_CIJAsmNLE_CIJAsmNLH_CLGIJ_CLGIJAsm_CLGIJAsmE_CLGIJAsmH_CLGIJAsmHE_CLGIJAsmL_CLGIJAsmLE_CLGIJAsmLH_CLGIJAsmNE_CLGIJAsmNH_CLGIJAsmNHE_CLGIJAsmNL_CLGIJAsmNLE_CLGIJAsmNLH_CLGRJ_CLGRJAsm_CLGRJAsmE_CLGRJAsmH_CLGRJAsmHE_CLGRJAsmL_CLGRJAsmLE_CLGRJAsmLH_CLGRJAsmNE_CLGRJAsmNH_CLGRJAsmNHE_CLGRJAsmNL_CLGRJAsmNLE_CLGRJAsmNLH_CLIJ_CLIJAsm_CLIJAsmE_CLIJAsmH_CLIJAsmHE_CLIJAsmL_CLIJAsmLE_CLIJAsmLH_CLIJAsmNE_CLIJAsmNH_CLIJAsmNHE_CLIJAsmNL_CLIJAsmNLE_CLIJAsmNLH_CLRJ_CLRJAsm_CLRJAsmE_CLRJAsmH_CLRJAsmHE_CLRJAsmL_CLRJAsmLE_CLRJAsmLH_CLRJAsmNE_CLRJAsmNH_CLRJAsmNHE_CLRJAsmNL_CLRJAsmNLE_CLRJAsmNLH_CRJ_CRJAsm_CRJAsmE_CRJAsmH_CRJAsmHE_CRJAsmL_CRJAsmLE_CRJAsmLH_CRJAsmNE_CRJAsmNH_CRJAsmNHE_CRJAsmNL_CRJAsmNLE_CRJAsmNLH") 1, false, false, 60, 1,  1, 3,  0, 0}, // #11
  {DBGFIELD("CGIBCall_CGIBReturn_CGRBCall_CGRBReturn_CIBCall_CIBReturn_CLGIBCall_CLGIBReturn_CLGRBCall_CLGRBReturn_CLIBCall_CLIBReturn_CLRBCall_CLRBReturn_CRBCall_CRBReturn_CGIB_CGIBAsm_CGIBAsmE_CGIBAsmH_CGIBAsmHE_CGIBAsmL_CGIBAsmLE_CGIBAsmLH_CGIBAsmNE_CGIBAsmNH_CGIBAsmNHE_CGIBAsmNL_CGIBAsmNLE_CGIBAsmNLH_CGRB_CGRBAsm_CGRBAsmE_CGRBAsmH_CGRBAsmHE_CGRBAsmL_CGRBAsmLE_CGRBAsmLH_CGRBAsmNE_CGRBAsmNH_CGRBAsmNHE_CGRBAsmNL_CGRBAsmNLE_CGRBAsmNLH_CIB_CIBAsm_CIBAsmE_CIBAsmH_CIBAsmHE_CIBAsmL_CIBAsmLE_CIBAsmLH_CIBAsmNE_CIBAsmNH_CIBAsmNHE_CIBAsmNL_CIBAsmNLE_CIBAsmNLH_CLGIB_CLGIBAsm_CLGIBAsmE_CLGIBAsmH_CLGIBAsmHE_CLGIBAsmL_CLGIBAsmLE_CLGIBAsmLH_CLGIBAsmNE_CLGIBAsmNH_CLGIBAsmNHE_CLGIBAsmNL_CLGIBAsmNLE_CLGIBAsmNLH_CLGRB_CLGRBAsm_CLGRBAsmE_CLGRBAsmH_CLGRBAsmHE_CLGRBAsmL_CLGRBAsmLE_CLGRBAsmLH_CLGRBAsmNE_CLGRBAsmNH_CLGRBAsmNHE_CLGRBAsmNL_CLGRBAsmNLE_CLGRBAsmNLH_CLIB_CLIBAsm_CLIBAsmE_CLIBAsmH_CLIBAsmHE_CLIBAsmL_CLIBAsmLE_CLIBAsmLH_CLIBAsmNE_CLIBAsmNH_CLIBAsmNHE_CLIBAsmNL_CLIBAsmNLE_CLIBAsmNLH_CLRB_CLRBAsm_CLRBAsmE_CLRBAsmH_CLRBAsmHE_CLRBAsmL_CLRBAsmLE_CLRBAsmLH_CLRBAsmNE_CLRBAsmNH_CLRBAsmNHE_CLRBAsmNL_CLRBAsmNLE_CLRBAsmNLH_CRB_CRBAsm_CRBAsmE_CRBAsmH_CRBAsmHE_CRBAsmL_CRBAsmLE_CRBAsmLH_CRBAsmNE_CRBAsmNH_CRBAsmNHE_CRBAsmNL_CRBAsmNLE_CRBAsmNLH") 3, true, true, 61, 1,  1, 3,  0, 0}, // #12
  {DBGFIELD("CondTrap_Trap")      1, false, false, 14, 1,  1, 3,  0, 0}, // #13
  {DBGFIELD("CGIT_CGITAsm_CGITAsmE_CGITAsmH_CGITAsmHE_CGITAsmL_CGITAsmLE_CGITAsmLH_CGITAsmNE_CGITAsmNH_CGITAsmNHE_CGITAsmNL_CGITAsmNLE_CGITAsmNLH_CGRT_CGRTAsm_CGRTAsmE_CGRTAsmH_CGRTAsmHE_CGRTAsmL_CGRTAsmLE_CGRTAsmLH_CGRTAsmNE_CGRTAsmNH_CGRTAsmNHE_CGRTAsmNL_CGRTAsmNLE_CGRTAsmNLH_CIT_CITAsm_CITAsmE_CITAsmH_CITAsmHE_CITAsmL_CITAsmLE_CITAsmLH_CITAsmNE_CITAsmNH_CITAsmNHE_CITAsmNL_CITAsmNLE_CITAsmNLH_CRT_CRTAsm_CRTAsmE_CRTAsmH_CRTAsmHE_CRTAsmL_CRTAsmLE_CRTAsmLH_CRTAsmNE_CRTAsmNH_CRTAsmNHE_CRTAsmNL_CRTAsmNLE_CRTAsmNLH") 1, false, false, 60, 1,  1, 3,  0, 0}, // #14
  {DBGFIELD("CLGRT_CLGRTAsm_CLGRTAsmE_CLGRTAsmH_CLGRTAsmHE_CLGRTAsmL_CLGRTAsmLE_CLGRTAsmLH_CLGRTAsmNE_CLGRTAsmNH_CLGRTAsmNHE_CLGRTAsmNL_CLGRTAsmNLE_CLGRTAsmNLH_CLRT_CLRTAsm_CLRTAsmE_CLRTAsmH_CLRTAsmHE_CLRTAsmL_CLRTAsmLE_CLRTAsmLH_CLRTAsmNE_CLRTAsmNH_CLRTAsmNHE_CLRTAsmNL_CLRTAsmNLE_CLRTAsmNLH") 1, false, false, 60, 1,  1, 3,  0, 0}, // #15
  {DBGFIELD("CLFIT_CLFITAsm_CLFITAsmE_CLFITAsmH_CLFITAsmHE_CLFITAsmL_CLFITAsmLE_CLFITAsmLH_CLFITAsmNE_CLFITAsmNH_CLFITAsmNHE_CLFITAsmNL_CLFITAsmNLE_CLFITAsmNLH_CLGIT_CLGITAsm_CLGITAsmE_CLGITAsmH_CLGITAsmHE_CLGITAsmL_CLGITAsmLE_CLGITAsmLH_CLGITAsmNE_CLGITAsmNH_CLGITAsmNHE_CLGITAsmNL_CLGITAsmNLE_CLGITAsmNLH") 1, false, false, 60, 1,  1, 3,  0, 0}, // #16
  {DBGFIELD("CLGT_CLGTAsm_CLGTAsmE_CLGTAsmH_CLGTAsmHE_CLGTAsmL_CLGTAsmLE_CLGTAsmLH_CLGTAsmNE_CLGTAsmNH_CLGTAsmNHE_CLGTAsmNL_CLGTAsmNLE_CLGTAsmNLH_CLT_CLTAsm_CLTAsmE_CLTAsmH_CLTAsmHE_CLTAsmL_CLTAsmLE_CLTAsmLH_CLTAsmNE_CLTAsmNH_CLTAsmNHE_CLTAsmNL_CLTAsmNLE_CLTAsmNLH") 1, false, false, 66, 2,  1, 4,  0, 0}, // #17
  {DBGFIELD("BRAS")               3, true, true, 89, 2,  1, 4,  0, 0}, // #18
  {DBGFIELD("CallBRASL_BRASL")    3, true, true, 91, 2,  1, 4,  0, 0}, // #19
  {DBGFIELD("CallBASR_BAS_BASR")  3, true, true, 91, 2,  1, 4,  0, 0}, // #20
  {DBGFIELD("TLS_GDCALL_TLS_LDCALL") 3, true, true, 91, 2,  1, 4,  0, 0}, // #21
  {DBGFIELD("Return")             1, false, true, 60, 1,  1, 3,  0, 0}, // #22
  {DBGFIELD("CondReturn")         1, false, false, 60, 1,  1, 3,  0, 0}, // #23
  {DBGFIELD("MVGHI_MVHHI_MVHI")   1, false, false, 66, 2,  1, 4,  0, 0}, // #24
  {DBGFIELD("MVI_MVIY")           1, false, false, 66, 2,  1, 4,  0, 0}, // #25
  {DBGFIELD("MVC")                3, true, true, 93, 2,  1, 4,  0, 0}, // #26
  {DBGFIELD("MVCL_MVCLE_MVCLU")   3, true, true,  3, 1,  8, 4,  0, 0}, // #27
  {DBGFIELD("MVCRL")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #28
  {DBGFIELD("COPY_TO_REGCLASS_COPY") 1, false, false, 39, 1,  1, 3,  0, 0}, // #29
  {DBGFIELD("EXTRACT_SUBREG")     1, false, false, 39, 1,  1, 3,  0, 0}, // #30
  {DBGFIELD("INSERT_SUBREG")      1, false, false, 39, 1,  1, 3,  0, 0}, // #31
  {DBGFIELD("REG_SEQUENCE")       1, false, false, 39, 1,  1, 3,  0, 0}, // #32
  {DBGFIELD("LMux_L_LFH_LRL_LY")  1, false, false,  1, 1, 12, 3,  0, 0}, // #33
  {DBGFIELD("LCBB")               1, false, false,  1, 1, 139, 4,  0, 0}, // #34
  {DBGFIELD("LG_LGRL")            1, false, false,  1, 1, 12, 3,  0, 0}, // #35
  {DBGFIELD("L128")               1, false, false,  1, 1, 12, 3,  0, 0}, // #36
  {DBGFIELD("LLIHF_LLIHH_LLIHL")  1, false, false, 39, 1,  1, 3,  0, 0}, // #37
  {DBGFIELD("LLILF_LLILH_LLILL")  1, false, false, 39, 1,  1, 3,  0, 0}, // #38
  {DBGFIELD("LGFI_LGHI")          1, false, false, 39, 1,  1, 3,  0, 0}, // #39
  {DBGFIELD("LHIMux_LHI")         1, false, false, 39, 1,  1, 3,  0, 0}, // #40
  {DBGFIELD("LR")                 1, false, false, 39, 1,  1, 3,  0, 0}, // #41
  {DBGFIELD("LZRF_LZRG")          1, false, false,  1, 1, 12, 3,  0, 0}, // #42
  {DBGFIELD("LAT_LFHAT_LGAT")     1, false, false, 66, 2, 15, 4,  0, 0}, // #43
  {DBGFIELD("LT_LTG")             1, false, false, 39, 2, 19, 5,  0, 0}, // #44
  {DBGFIELD("LTGR_LTR")           1, false, false, 39, 1,  1, 3,  0, 0}, // #45
  {DBGFIELD("STG_STGRL")          1, false, false, 66, 2,  1, 4,  0, 0}, // #46
  {DBGFIELD("ST128")              1, false, false, 66, 2,  1, 4,  0, 0}, // #47
  {DBGFIELD("STMux_ST_STFH_STRL_STY") 1, false, false, 66, 2,  1, 4,  0, 0}, // #48
  {DBGFIELD("MVST")               3, true, true,  3, 1,  8, 4,  0, 0}, // #49
  {DBGFIELD("LOCRMux")            1, false, false, 39, 1, 29, 3,  0, 0}, // #50
  {DBGFIELD("LOCFHR_LOCFHRAsm_LOCFHRAsmE_LOCFHRAsmH_LOCFHRAsmHE_LOCFHRAsmL_LOCFHRAsmLE_LOCFHRAsmLH_LOCFHRAsmM_LOCFHRAsmNE_LOCFHRAsmNH_LOCFHRAsmNHE_LOCFHRAsmNL_LOCFHRAsmNLE_LOCFHRAsmNLH_LOCFHRAsmNM_LOCFHRAsmNO_LOCFHRAsmNP_LOCFHRAsmNZ_LOCFHRAsmO_LOCFHRAsmP_LOCFHRAsmZ_LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, false, 39, 1, 29, 3,  0, 0}, // #51
  {DBGFIELD("LOCHIMux_LOCGHI_LOCGHIAsm_LOCGHIAsmE_LOCGHIAsmH_LOCGHIAsmHE_LOCGHIAsmL_LOCGHIAsmLE_LOCGHIAsmLH_LOCGHIAsmM_LOCGHIAsmNE_LOCGHIAsmNH_LOCGHIAsmNHE_LOCGHIAsmNL_LOCGHIAsmNLE_LOCGHIAsmNLH_LOCGHIAsmNM_LOCGHIAsmNO_LOCGHIAsmNP_LOCGHIAsmNZ_LOCGHIAsmO_LOCGHIAsmP_LOCGHIAsmZ_LOCHHI_LOCHHIAsm_LOCHHIAsmE_LOCHHIAsmH_LOCHHIAsmHE_LOCHHIAsmL_LOCHHIAsmLE_LOCHHIAsmLH_LOCHHIAsmM_LOCHHIAsmNE_LOCHHIAsmNH_LOCHHIAsmNHE_LOCHHIAsmNL_LOCHHIAsmNLE_LOCHHIAsmNLH_LOCHHIAsmNM_LOCHHIAsmNO_LOCHHIAsmNP_LOCHHIAsmNZ_LOCHHIAsmO_LOCHHIAsmP_LOCHHIAsmZ_LOCHI_LOCHIAsm_LOCHIAsmE_LOCHIAsmH_LOCHIAsmHE_LOCHIAsmL_LOCHIAsmLE_LOCHIAsmLH_LOCHIAsmM_LOCHIAsmNE_LOCHIAsmNH_LOCHIAsmNHE_LOCHIAsmNL_LOCHIAsmNLE_LOCHIAsmNLH_LOCHIAsmNM_LOCHIAsmNO_LOCHIAsmNP_LOCHIAsmNZ_LOCHIAsmO_LOCHIAsmP_LOCHIAsmZ") 1, false, false, 39, 1, 29, 3,  0, 0}, // #52
  {DBGFIELD("LOCMux_LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCFH_LOCFHAsm_LOCFHAsmE_LOCFHAsmH_LOCFHAsmHE_LOCFHAsmL_LOCFHAsmLE_LOCFHAsmLH_LOCFHAsmM_LOCFHAsmNE_LOCFHAsmNH_LOCFHAsmNHE_LOCFHAsmNL_LOCFHAsmNLE_LOCFHAsmNLH_LOCFHAsmNM_LOCFHAsmNO_LOCFHAsmNP_LOCFHAsmNZ_LOCFHAsmO_LOCFHAsmP_LOCFHAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ") 1, false, false, 39, 2, 37, 4,  1, 1}, // #53
  {DBGFIELD("STOCMux_STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCFH_STOCFHAsm_STOCFHAsmE_STOCFHAsmH_STOCFHAsmHE_STOCFHAsmL_STOCFHAsmLE_STOCFHAsmLH_STOCFHAsmM_STOCFHAsmNE_STOCFHAsmNH_STOCFHAsmNHE_STOCFHAsmNL_STOCFHAsmNLE_STOCFHAsmNLH_STOCFHAsmNM_STOCFHAsmNO_STOCFHAsmNP_STOCFHAsmNZ_STOCFHAsmO_STOCFHAsmP_STOCFHAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ") 1, false, false, 66, 2,  1, 4,  0, 0}, // #54
  {DBGFIELD("SELRMux")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #55
  {DBGFIELD("SELFHR_SELFHRAsm_SELFHRAsmE_SELFHRAsmH_SELFHRAsmHE_SELFHRAsmL_SELFHRAsmLE_SELFHRAsmLH_SELFHRAsmM_SELFHRAsmNE_SELFHRAsmNH_SELFHRAsmNHE_SELFHRAsmNL_SELFHRAsmNLE_SELFHRAsmNLH_SELFHRAsmNM_SELFHRAsmNO_SELFHRAsmNP_SELFHRAsmNZ_SELFHRAsmO_SELFHRAsmP_SELFHRAsmZ_SELGR_SELGRAsm_SELGRAsmE_SELGRAsmH_SELGRAsmHE_SELGRAsmL_SELGRAsmLE_SELGRAsmLH_SELGRAsmM_SELGRAsmNE_SELGRAsmNH_SELGRAsmNHE_SELGRAsmNL_SELGRAsmNLE_SELGRAsmNLH_SELGRAsmNM_SELGRAsmNO_SELGRAsmNP_SELGRAsmNZ_SELGRAsmO_SELGRAsmP_SELGRAsmZ_SELR_SELRAsm_SELRAsmE_SELRAsmH_SELRAsmHE_SELRAsmL_SELRAsmLE_SELRAsmLH_SELRAsmM_SELRAsmNE_SELRAsmNH_SELRAsmNHE_SELRAsmNL_SELRAsmNLE_SELRAsmNLH_SELRAsmNM_SELRAsmNO_SELRAsmNP_SELRAsmNZ_SELRAsmO_SELRAsmP_SELRAsmZ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #56
  {DBGFIELD("LBR_LGR_LHR")        1, false, false, 39, 1,  1, 3,  0, 0}, // #57
  {DBGFIELD("LGBR_LGFR_LGHR")     1, false, false, 39, 1,  1, 3,  0, 0}, // #58
  {DBGFIELD("LTGF")               1, false, false, 39, 2, 19, 5,  0, 0}, // #59
  {DBGFIELD("LTGFR")              1, false, false, 39, 1,  1, 3,  0, 0}, // #60
  {DBGFIELD("LBMux_LB_LBH")       1, false, false, 39, 2, 15, 4,  0, 0}, // #61
  {DBGFIELD("LH_LHY")             1, false, false, 39, 2, 15, 4,  0, 0}, // #62
  {DBGFIELD("LHMux_LHH_LHRL")     1, false, false, 39, 2, 15, 4,  0, 0}, // #63
  {DBGFIELD("LGB_LGF_LGH")        1, false, false, 39, 2, 15, 4,  0, 0}, // #64
  {DBGFIELD("LGFRL_LGHRL")        1, false, false, 39, 2, 15, 4,  0, 0}, // #65
  {DBGFIELD("LLCRMux_LLCR")       1, false, false, 39, 1,  1, 3,  0, 0}, // #66
  {DBGFIELD("LLHRMux_LLHR")       1, false, false, 39, 1,  1, 3,  0, 0}, // #67
  {DBGFIELD("LLGCR_LLGFR_LLGHR_LLGTR") 1, false, false, 39, 1,  1, 3,  0, 0}, // #68
  {DBGFIELD("LLCMux_LLC")         1, false, false,  1, 1, 12, 3,  0, 0}, // #69
  {DBGFIELD("LLHMux_LLH")         1, false, false,  1, 1, 12, 3,  0, 0}, // #70
  {DBGFIELD("LLCH_LLHH")          1, false, false, 39, 2, 15, 4,  0, 0}, // #71
  {DBGFIELD("LLHRL")              1, false, false,  1, 1, 12, 3,  0, 0}, // #72
  {DBGFIELD("LLGC_LLGF_LLGFRL_LLGH_LLGHRL_LLGT") 1, false, false,  1, 1, 12, 3,  0, 0}, // #73
  {DBGFIELD("LLZRGF")             1, false, false,  1, 1, 12, 3,  0, 0}, // #74
  {DBGFIELD("LLGFAT_LLGTAT")      1, false, false, 66, 2, 15, 4,  0, 0}, // #75
  {DBGFIELD("STCMux_STC_STCH_STCY") 1, false, false, 66, 2,  1, 4,  0, 0}, // #76
  {DBGFIELD("STHMux_STH_STHH_STHRL_STHY") 1, false, false, 66, 2,  1, 4,  0, 0}, // #77
  {DBGFIELD("STCM_STCMH_STCMY")   1, false, false, 66, 2,  1, 4,  0, 0}, // #78
  {DBGFIELD("LM_LMG_LMH_LMY")     3, true, true, 16, 1, 24, 4,  0, 0}, // #79
  {DBGFIELD("LMD")                3, true, true,  3, 1,  9, 3,  0, 0}, // #80
  {DBGFIELD("STM_STMG_STMH_STMY") 3, true, true, 95, 2,  1, 4,  0, 0}, // #81
  {DBGFIELD("LRVGR_LRVR")         1, false, false, 39, 1,  1, 3,  0, 0}, // #82
  {DBGFIELD("LRV_LRVG_LRVH")      1, false, false, 39, 2, 15, 4,  0, 0}, // #83
  {DBGFIELD("STRV_STRVG_STRVH")   1, false, false, 66, 2,  1, 4,  0, 0}, // #84
  {DBGFIELD("MVCIN")              3, true, true,  3, 1, 10, 2,  0, 0}, // #85
  {DBGFIELD("LA_LARL_LAY")        1, false, false, 39, 1,  1, 3,  0, 0}, // #86
  {DBGFIELD("GOT")                1, false, false, 39, 1,  1, 3,  0, 0}, // #87
  {DBGFIELD("LPGR_LPR")           1, false, false, 39, 1, 28, 4,  0, 0}, // #88
  {DBGFIELD("LNGFR_LPGFR")        2, true, false, 36, 1, 32, 4,  0, 0}, // #89
  {DBGFIELD("LNGR_LNR")           1, false, false, 39, 1, 28, 4,  0, 0}, // #90
  {DBGFIELD("LCGR_LCR")           1, false, false, 39, 1,  1, 3,  0, 0}, // #91
  {DBGFIELD("LCGFR")              2, true, false, 36, 1, 28, 4,  0, 0}, // #92
  {DBGFIELD("IC_ICY")             1, false, false, 39, 2, 15, 4,  1, 1}, // #93
  {DBGFIELD("IC32_IC32Y")         1, false, false, 39, 2, 15, 4,  1, 1}, // #94
  {DBGFIELD("ICM_ICMH_ICMY")      1, false, false, 39, 2, 19, 5,  1, 1}, // #95
  {DBGFIELD("IIFMux_IIHMux_IILMux") 1, false, false, 39, 1,  1, 3,  0, 0}, // #96
  {DBGFIELD("IIHF64_IIHF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #97
  {DBGFIELD("IIHH64_IIHH")        1, false, false, 39, 1,  1, 3,  0, 0}, // #98
  {DBGFIELD("IIHL64_IIHL")        1, false, false, 39, 1,  1, 3,  0, 0}, // #99
  {DBGFIELD("IILF64_IILF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #100
  {DBGFIELD("IILH64_IILH")        1, false, false, 39, 1,  1, 3,  0, 0}, // #101
  {DBGFIELD("IILL64_IILL")        1, false, false, 39, 1,  1, 3,  0, 0}, // #102
  {DBGFIELD("A_AY")               1, false, false, 39, 2, 19, 5,  1, 1}, // #103
  {DBGFIELD("AH_AHY")             1, false, false, 39, 2, 36, 5,  1, 1}, // #104
  {DBGFIELD("AIH")                1, false, false, 39, 1,  1, 3,  0, 0}, // #105
  {DBGFIELD("AFIMux_AFI")         1, false, false, 39, 1,  1, 3,  0, 0}, // #106
  {DBGFIELD("AG")                 1, false, false, 39, 2, 19, 5,  1, 1}, // #107
  {DBGFIELD("AGFI")               1, false, false, 39, 1,  1, 3,  0, 0}, // #108
  {DBGFIELD("AGHI_AGHIK")         1, false, false, 39, 1,  1, 3,  0, 0}, // #109
  {DBGFIELD("AGR_AGRK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #110
  {DBGFIELD("AHI_AHIK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #111
  {DBGFIELD("AHIMux_AHIMuxK")     1, false, false, 39, 1,  1, 3,  0, 0}, // #112
  {DBGFIELD("AL_ALY")             1, false, false, 39, 2, 19, 5,  1, 1}, // #113
  {DBGFIELD("ALFI_ALHSIK")        1, false, false, 39, 1,  1, 3,  0, 0}, // #114
  {DBGFIELD("ALG_ALGF")           1, false, false, 39, 2, 19, 5,  1, 1}, // #115
  {DBGFIELD("ALGHSIK")            1, false, false, 39, 1,  1, 3,  0, 0}, // #116
  {DBGFIELD("ALGFI_ALGFR")        1, false, false, 39, 1,  1, 3,  0, 0}, // #117
  {DBGFIELD("ALGR_ALGRK")         1, false, false, 39, 1,  1, 3,  0, 0}, // #118
  {DBGFIELD("ALR_ALRK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #119
  {DBGFIELD("AR_ARK")             1, false, false, 39, 1,  1, 3,  0, 0}, // #120
  {DBGFIELD("AHHHR_ALHHHR")       1, false, false, 39, 1,  1, 3,  0, 0}, // #121
  {DBGFIELD("AHHLR_ALHHLR")       1, false, false, 39, 1, 28, 4,  0, 0}, // #122
  {DBGFIELD("ALSIH_ALSIHN")       1, false, false, 39, 1,  1, 3,  0, 0}, // #123
  {DBGFIELD("AGSI_ALGSI_ALSI_ASI") 1, false, false, 66, 2, 37, 4,  0, 0}, // #124
  {DBGFIELD("ALC_ALCG")           3, true, true, 39, 2, 36, 5,  1, 1}, // #125
  {DBGFIELD("ALCGR_ALCR")         3, true, true, 39, 1, 28, 4,  0, 0}, // #126
  {DBGFIELD("AGF_AGH")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #127
  {DBGFIELD("AGFR")               1, false, false, 39, 1, 28, 4,  0, 0}, // #128
  {DBGFIELD("S_SG_SY")            1, false, false, 39, 2, 19, 5,  1, 1}, // #129
  {DBGFIELD("SH_SHY")             1, false, false, 39, 2, 36, 5,  1, 1}, // #130
  {DBGFIELD("SGR_SGRK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #131
  {DBGFIELD("SLFI")               1, false, false, 39, 1,  1, 3,  0, 0}, // #132
  {DBGFIELD("SL_SLG_SLGF_SLY")    1, false, false, 39, 2, 19, 5,  1, 1}, // #133
  {DBGFIELD("SLGFI_SLGFR")        1, false, false, 39, 1,  1, 3,  0, 0}, // #134
  {DBGFIELD("SLGR_SLGRK")         1, false, false, 39, 1,  1, 3,  0, 0}, // #135
  {DBGFIELD("SLR_SLRK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #136
  {DBGFIELD("SR_SRK")             1, false, false, 39, 1,  1, 3,  0, 0}, // #137
  {DBGFIELD("SHHHR_SLHHHR")       1, false, false, 39, 1,  1, 3,  0, 0}, // #138
  {DBGFIELD("SHHLR_SLHHLR")       1, false, false, 39, 1, 28, 4,  0, 0}, // #139
  {DBGFIELD("SLB_SLBG")           3, true, true, 39, 2, 36, 5,  1, 1}, // #140
  {DBGFIELD("SLBGR_SLBR")         3, true, true, 39, 1, 28, 4,  0, 0}, // #141
  {DBGFIELD("SGF_SGH")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #142
  {DBGFIELD("SGFR")               1, false, false, 39, 1, 28, 4,  0, 0}, // #143
  {DBGFIELD("N_NG_NY")            1, false, false, 39, 2, 19, 5,  1, 1}, // #144
  {DBGFIELD("NGR_NGRK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #145
  {DBGFIELD("NIFMux_NIHMux_NILMux") 1, false, false, 39, 1,  1, 3,  0, 0}, // #146
  {DBGFIELD("NI_NIY")             1, false, false, 66, 2, 37, 4,  0, 0}, // #147
  {DBGFIELD("NIHF64_NIHF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #148
  {DBGFIELD("NIHH64_NIHH")        1, false, false, 39, 1,  1, 3,  0, 0}, // #149
  {DBGFIELD("NIHL64_NIHL")        1, false, false, 39, 1,  1, 3,  0, 0}, // #150
  {DBGFIELD("NILF64_NILF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #151
  {DBGFIELD("NILH64_NILH")        1, false, false, 39, 1,  1, 3,  0, 0}, // #152
  {DBGFIELD("NILL64_NILL")        1, false, false, 39, 1,  1, 3,  0, 0}, // #153
  {DBGFIELD("NR_NRK")             1, false, false, 39, 1,  1, 3,  0, 0}, // #154
  {DBGFIELD("NC")                 2, true, false, 97, 2, 144, 4,  0, 0}, // #155
  {DBGFIELD("O_OG_OY")            1, false, false, 39, 2, 19, 5,  1, 1}, // #156
  {DBGFIELD("OGR_OGRK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #157
  {DBGFIELD("OI_OIY")             1, false, false, 66, 2, 37, 4,  0, 0}, // #158
  {DBGFIELD("OIFMux_OIHMux_OILMux") 1, false, false, 39, 1,  1, 3,  0, 0}, // #159
  {DBGFIELD("OIHF64_OIHF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #160
  {DBGFIELD("OIHH64_OIHH")        1, false, false, 39, 1,  1, 3,  0, 0}, // #161
  {DBGFIELD("OIHL64_OIHL")        1, false, false, 39, 1,  1, 3,  0, 0}, // #162
  {DBGFIELD("OILF64_OILF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #163
  {DBGFIELD("OILH64_OILH")        1, false, false, 39, 1,  1, 3,  0, 0}, // #164
  {DBGFIELD("OILL64_OILL")        1, false, false, 39, 1,  1, 3,  0, 0}, // #165
  {DBGFIELD("OR_ORK")             1, false, false, 39, 1,  1, 3,  0, 0}, // #166
  {DBGFIELD("OC")                 2, true, false, 97, 2, 144, 4,  0, 0}, // #167
  {DBGFIELD("X_XG_XY")            1, false, false, 39, 2, 19, 5,  1, 1}, // #168
  {DBGFIELD("XI_XIY")             1, false, false, 66, 2, 37, 4,  0, 0}, // #169
  {DBGFIELD("XIFMux")             1, false, false, 39, 1,  1, 3,  0, 0}, // #170
  {DBGFIELD("XGR_XGRK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #171
  {DBGFIELD("XIHF64_XIHF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #172
  {DBGFIELD("XILF64_XILF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #173
  {DBGFIELD("XR_XRK")             1, false, false, 39, 1,  1, 3,  0, 0}, // #174
  {DBGFIELD("XC")                 2, true, false, 97, 2, 144, 4,  0, 0}, // #175
  {DBGFIELD("NCGRK_NCRK")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #176
  {DBGFIELD("OCGRK_OCRK")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #177
  {DBGFIELD("NNGRK_NNRK")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #178
  {DBGFIELD("NOGRK_NORK")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #179
  {DBGFIELD("NXGRK_NXRK")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #180
  {DBGFIELD("MS_MSGF_MSY")        1, false, false, 39, 2, 45, 4,  1, 1}, // #181
  {DBGFIELD("MSFI_MSR")           1, false, false, 39, 1, 37, 3,  0, 0}, // #182
  {DBGFIELD("MSG")                1, false, false, 39, 2, 49, 4,  1, 1}, // #183
  {DBGFIELD("MSGR")               1, false, false, 39, 1, 53, 3,  0, 0}, // #184
  {DBGFIELD("MSGFI_MSGFR")        1, false, false, 39, 1, 37, 3,  0, 0}, // #185
  {DBGFIELD("MLG")                3, true, true, 36, 2, 56, 4,  1, 1}, // #186
  {DBGFIELD("MLGR")               3, true, true, 36, 1, 41, 3,  0, 0}, // #187
  {DBGFIELD("MGHI")               1, false, false, 39, 1, 15, 3,  0, 0}, // #188
  {DBGFIELD("MHI")                1, false, false, 39, 1, 15, 3,  0, 0}, // #189
  {DBGFIELD("MH_MHY")             1, false, false, 39, 2, 41, 4,  1, 1}, // #190
  {DBGFIELD("MLR_MR")             3, true, true, 36, 1, 60, 3,  0, 0}, // #191
  {DBGFIELD("M_MFY_ML")           3, true, true, 36, 2, 63, 4,  1, 1}, // #192
  {DBGFIELD("MGH")                16383, false, false,  0, 0,  0, 0,  0, 0}, // #193
  {DBGFIELD("MG")                 16383, false, false,  0, 0,  0, 0,  0, 0}, // #194
  {DBGFIELD("MGRK")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #195
  {DBGFIELD("MSC")                16383, false, false,  0, 0,  0, 0,  0, 0}, // #196
  {DBGFIELD("MSGC")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #197
  {DBGFIELD("MSRKC")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #198
  {DBGFIELD("MSGRKC")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #199
  {DBGFIELD("DR")                 3, true, true, 42, 1, 92, 3,  0, 0}, // #200
  {DBGFIELD("D")                  6, true, true, 48, 2, 67, 4,  1, 1}, // #201
  {DBGFIELD("DSGFR_DSGR")         3, true, true, 36, 1, 67, 3,  0, 0}, // #202
  {DBGFIELD("DSG_DSGF")           6, true, true, 36, 2, 67, 4,  1, 1}, // #203
  {DBGFIELD("DLR")                3, true, true, 42, 1, 92, 3,  0, 0}, // #204
  {DBGFIELD("DLGR")               3, true, true, 42, 1, 67, 3,  0, 0}, // #205
  {DBGFIELD("DL_DLG")             6, true, true, 48, 2, 67, 4,  1, 1}, // #206
  {DBGFIELD("SLL_SLLG_SLLK")      1, false, false, 39, 1,  1, 3,  0, 0}, // #207
  {DBGFIELD("SRL_SRLG_SRLK")      1, false, false, 39, 1,  1, 3,  0, 0}, // #208
  {DBGFIELD("SRA_SRAG_SRAK")      1, false, false, 39, 1,  1, 3,  0, 0}, // #209
  {DBGFIELD("SLA_SLAG_SLAK")      1, false, false, 39, 1,  1, 3,  0, 0}, // #210
  {DBGFIELD("SLDA_SLDL_SRDA_SRDL") 6, true, true, 48, 2, 76, 5,  0, 0}, // #211
  {DBGFIELD("RLL_RLLG")           1, false, false, 39, 2, 37, 4,  0, 0}, // #212
  {DBGFIELD("RISBG_RISBG32_RISBGN") 1, false, false, 39, 1,  1, 3,  0, 0}, // #213
  {DBGFIELD("RISBHH_RISBHL_RISBHG") 1, false, false, 39, 1,  1, 3,  0, 0}, // #214
  {DBGFIELD("RISBLH_RISBLL_RISBLG") 1, false, false, 39, 1,  1, 3,  0, 0}, // #215
  {DBGFIELD("RISBMux")            1, false, false, 39, 1,  1, 3,  0, 0}, // #216
  {DBGFIELD("RNSBG_ROSBG_RXSBG")  2, true, false, 36, 1, 32, 4,  0, 0}, // #217
  {DBGFIELD("CMux_C_CG_CY")       1, false, false, 66, 2, 15, 4,  1, 1}, // #218
  {DBGFIELD("CRL")                1, false, false, 66, 2, 15, 4,  0, 0}, // #219
  {DBGFIELD("CFIMux_CHIMux_CFI_CHI") 1, false, false, 60, 1,  1, 3,  0, 0}, // #220
  {DBGFIELD("CGFI_CGHI")          1, false, false, 60, 1,  1, 3,  0, 0}, // #221
  {DBGFIELD("CGHSI_CGRL")         1, false, false, 66, 2, 15, 4,  0, 0}, // #222
  {DBGFIELD("CGR_CR")             1, false, false, 60, 1,  1, 3,  0, 0}, // #223
  {DBGFIELD("CIH")                1, false, false, 60, 1,  1, 3,  0, 0}, // #224
  {DBGFIELD("CHF")                1, false, false, 66, 2, 15, 4,  1, 1}, // #225
  {DBGFIELD("CHSI")               1, false, false, 66, 2, 15, 4,  0, 0}, // #226
  {DBGFIELD("CLMux_CL_CLY")       1, false, false, 66, 2, 15, 4,  1, 1}, // #227
  {DBGFIELD("CLFHSI")             1, false, false, 66, 2, 15, 4,  0, 0}, // #228
  {DBGFIELD("CLFIMux_CLFI")       1, false, false, 60, 1,  1, 3,  0, 0}, // #229
  {DBGFIELD("CLG")                1, false, false, 66, 2, 15, 4,  1, 1}, // #230
  {DBGFIELD("CLGHRL_CLGHSI")      1, false, false, 66, 2, 15, 4,  0, 0}, // #231
  {DBGFIELD("CLGF")               1, false, false, 66, 2, 15, 4,  1, 1}, // #232
  {DBGFIELD("CLGFRL")             1, false, false, 66, 2, 15, 4,  0, 0}, // #233
  {DBGFIELD("CLGFI_CLGFR")        1, false, false, 60, 1,  1, 3,  0, 0}, // #234
  {DBGFIELD("CLGR")               1, false, false, 60, 1,  1, 3,  0, 0}, // #235
  {DBGFIELD("CLGRL")              1, false, false, 66, 2, 15, 4,  0, 0}, // #236
  {DBGFIELD("CLHF")               1, false, false, 66, 2, 15, 4,  1, 1}, // #237
  {DBGFIELD("CLHHSI_CLHRL")       1, false, false, 66, 2, 15, 4,  0, 0}, // #238
  {DBGFIELD("CLIH")               1, false, false, 60, 1,  1, 3,  0, 0}, // #239
  {DBGFIELD("CLI_CLIY")           1, false, false, 66, 2, 15, 4,  0, 0}, // #240
  {DBGFIELD("CLR")                1, false, false, 60, 1,  1, 3,  0, 0}, // #241
  {DBGFIELD("CLRL")               1, false, false, 66, 2, 15, 4,  0, 0}, // #242
  {DBGFIELD("CHHR_CLHHR")         1, false, false, 60, 1,  1, 3,  0, 0}, // #243
  {DBGFIELD("CHLR_CLHLR")         1, false, false, 60, 1, 29, 3,  0, 0}, // #244
  {DBGFIELD("CH_CHY")             1, false, false, 66, 2, 37, 4,  1, 1}, // #245
  {DBGFIELD("CHRL")               1, false, false, 66, 2, 37, 4,  0, 0}, // #246
  {DBGFIELD("CGH")                1, false, false, 66, 2, 37, 4,  1, 1}, // #247
  {DBGFIELD("CGHRL")              1, false, false, 66, 2, 37, 4,  0, 0}, // #248
  {DBGFIELD("CHHSI")              2, true, false, 99, 3, 157, 5,  0, 0}, // #249
  {DBGFIELD("CGF")                1, false, false, 66, 2, 37, 4,  1, 1}, // #250
  {DBGFIELD("CGFRL")              1, false, false, 66, 2, 37, 4,  0, 0}, // #251
  {DBGFIELD("CGFR")               1, false, false, 60, 1, 29, 3,  0, 0}, // #252
  {DBGFIELD("CLC")                2, true, false, 97, 2, 37, 4,  0, 0}, // #253
  {DBGFIELD("CLCL_CLCLE_CLCLU")   3, true, true,  3, 1,  8, 4,  0, 0}, // #254
  {DBGFIELD("CLST")               3, true, true,  3, 1,  8, 4,  0, 0}, // #255
  {DBGFIELD("TM_TMY")             1, false, false, 66, 2, 15, 4,  0, 0}, // #256
  {DBGFIELD("TMHMux_TMLMux")      1, false, false, 60, 1,  1, 3,  0, 0}, // #257
  {DBGFIELD("TMHH64_TMHH")        1, false, false, 60, 1,  1, 3,  0, 0}, // #258
  {DBGFIELD("TMHL64_TMHL")        1, false, false, 60, 1,  1, 3,  0, 0}, // #259
  {DBGFIELD("TMLH64_TMLH")        1, false, false, 60, 1,  1, 3,  0, 0}, // #260
  {DBGFIELD("TMLL64_TMLL")        1, false, false, 60, 1,  1, 3,  0, 0}, // #261
  {DBGFIELD("CLM_CLMH_CLMY")      1, false, false, 66, 2, 37, 4,  1, 1}, // #262
  {DBGFIELD("PFD_PFDRL")          1, false, false,  1, 1,  1, 3,  0, 0}, // #263
  {DBGFIELD("BPP")                1, false, false, 60, 1,  1, 3,  0, 0}, // #264
  {DBGFIELD("BPRP")               1, false, true, 60, 1,  1, 2,  0, 0}, // #265
  {DBGFIELD("NIAI")               1, false, false, 60, 1,  1, 3,  0, 0}, // #266
  {DBGFIELD("Serialize")          1, false, true, 60, 1,  1, 3,  0, 0}, // #267
  {DBGFIELD("LAA_LAAG")           1, false, false, 66, 2, 36, 5,  0, 0}, // #268
  {DBGFIELD("LAAL_LAALG")         1, false, false, 66, 2, 36, 5,  0, 0}, // #269
  {DBGFIELD("LAN_LANG")           1, false, false, 66, 2, 36, 5,  0, 0}, // #270
  {DBGFIELD("LAO_LAOG")           1, false, false, 66, 2, 36, 5,  0, 0}, // #271
  {DBGFIELD("LAX_LAXG")           1, false, false, 66, 2, 36, 5,  0, 0}, // #272
  {DBGFIELD("TS")                 1, false, true, 66, 2, 37, 4,  0, 0}, // #273
  {DBGFIELD("CS_CSG_CSY")         3, true, true, 99, 3, 162, 6,  0, 0}, // #274
  {DBGFIELD("CDS_CDSY")           6, true, true, 102, 3, 168, 6,  0, 0}, // #275
  {DBGFIELD("CDSG")               9, true, true, 105, 3, 174, 6,  0, 0}, // #276
  {DBGFIELD("CSST")               3, true, true,  3, 1, 10, 2,  0, 0}, // #277
  {DBGFIELD("PLO")                3, true, true,  3, 1, 10, 2,  0, 0}, // #278
  {DBGFIELD("LPQ")                3, true, true,  8, 1, 53, 3,  0, 0}, // #279
  {DBGFIELD("STPQ")               3, true, true, 70, 2,  1, 4,  0, 0}, // #280
  {DBGFIELD("LPD_LPDG")           3, true, true,  8, 1, 19, 4,  0, 0}, // #281
  {DBGFIELD("TR")                 3, true, true, 16, 1,  1, 3,  0, 0}, // #282
  {DBGFIELD("TRT")                6, true, true, 108, 2, 86, 6,  0, 0}, // #283
  {DBGFIELD("TRTR")               3, true, true,  3, 1,  8, 4,  0, 0}, // #284
  {DBGFIELD("TRE")                3, true, true,  3, 1,  9, 3,  0, 0}, // #285
  {DBGFIELD("TRTE_TRTEOpt_TRTRE_TRTREOpt") 3, true, true,  3, 1,  8, 4,  0, 0}, // #286
  {DBGFIELD("TROO_TROOOpt_TROT_TROTOpt_TRTO_TRTOOpt_TRTT_TRTTOpt") 3, true, true,  3, 1,  8, 4,  0, 0}, // #287
  {DBGFIELD("CU12_CU12Opt_CU14_CU14Opt_CU21_CU21Opt_CU24_CU24Opt_CU41_CU42") 3, true, true,  3, 1,  8, 4,  0, 0}, // #288
  {DBGFIELD("CUTFU_CUTFUOpt_CUUTF_CUUTFOpt") 3, true, true,  3, 1,  8, 4,  0, 0}, // #289
  {DBGFIELD("KM_KMA_KMC_KMCTR_KMF_KMO") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #290
  {DBGFIELD("KDSA_KIMD_KLMD_KMAC") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #291
  {DBGFIELD("PCC_PPNO_PRNO")      16383, false, false,  0, 0,  0, 0,  0, 0}, // #292
  {DBGFIELD("LGG")                16383, false, false,  0, 0,  0, 0,  0, 0}, // #293
  {DBGFIELD("LLGFSG")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #294
  {DBGFIELD("LGSC_STGSC")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #295
  {DBGFIELD("CVBG")               6, true, true, 110, 3, 71, 5,  1, 1}, // #296
  {DBGFIELD("CVB_CVBY")           6, true, true, 113, 3, 71, 5,  1, 1}, // #297
  {DBGFIELD("CVDG")               9, true, true, 116, 3,  1, 5,  0, 0}, // #298
  {DBGFIELD("CVD_CVDY")           6, true, true, 119, 3,  1, 5,  0, 0}, // #299
  {DBGFIELD("MVN_MVO_MVZ")        3, true, true, 16, 1,  1, 3,  0, 0}, // #300
  {DBGFIELD("PACK_PKA_PKU")       3, true, true, 16, 1,  1, 3,  0, 0}, // #301
  {DBGFIELD("UNPKA_UNPKU")        3, true, true, 16, 1, 49, 3,  0, 0}, // #302
  {DBGFIELD("UNPK")               2, true, false, 97, 2,  1, 4,  0, 0}, // #303
  {DBGFIELD("AP_SP_ZAP")          6, true, true, 122, 3, 180, 5,  0, 0}, // #304
  {DBGFIELD("MP")                 6, true, true, 125, 3,  1, 5,  0, 0}, // #305
  {DBGFIELD("DP")                 6, true, true, 125, 3,  1, 5,  0, 0}, // #306
  {DBGFIELD("SRP")                9, true, true, 110, 3, 97, 5,  0, 0}, // #307
  {DBGFIELD("CP")                 3, true, true, 128, 2, 185, 5,  0, 0}, // #308
  {DBGFIELD("TP")                 2, true, false, 114, 2, 144, 4,  0, 0}, // #309
  {DBGFIELD("ED_EDMK")            3, true, true,  3, 1, 10, 2,  0, 0}, // #310
  {DBGFIELD("CPYA_EAR_SAR")       1, false, false,  1, 1, 33, 3,  0, 0}, // #311
  {DBGFIELD("LAE_LAEY")           2, true, false, 39, 2, 15, 4,  0, 0}, // #312
  {DBGFIELD("LAM_LAMY")           3, true, true, 16, 1, 127, 4,  0, 0}, // #313
  {DBGFIELD("STAM_STAMY")         6, true, true, 130, 2,  1, 4,  0, 0}, // #314
  {DBGFIELD("IPM")                1, false, true, 39, 1, 33, 3,  0, 0}, // #315
  {DBGFIELD("SPM")                1, false, true,  1, 1, 33, 3,  0, 0}, // #316
  {DBGFIELD("BAL_BALR")           3, true, true, 91, 2,  1, 4,  0, 0}, // #317
  {DBGFIELD("TAM")                1, false, false, 60, 1,  1, 3,  0, 0}, // #318
  {DBGFIELD("SAM24_SAM31_SAM64")  1, false, true, 60, 1,  1, 3,  0, 0}, // #319
  {DBGFIELD("BSM")                3, true, true, 85, 2,  1, 4,  0, 0}, // #320
  {DBGFIELD("BASSM")              3, true, true, 91, 2,  1, 4,  0, 0}, // #321
  {DBGFIELD("TBEGIN_TBEGINC")     6, true, true, 132, 2, 41, 4,  0, 0}, // #322
  {DBGFIELD("TEND")               3, true, true, 60, 1,  1, 3,  0, 0}, // #323
  {DBGFIELD("TABORT")             3, true, true,  3, 1, 10, 2,  0, 0}, // #324
  {DBGFIELD("ETND")               1, false, false, 39, 1,  1, 3,  0, 0}, // #325
  {DBGFIELD("NTSTG")              1, false, false, 66, 2,  1, 4,  0, 0}, // #326
  {DBGFIELD("PPA")                3, true, true,  3, 1, 10, 2,  0, 0}, // #327
  {DBGFIELD("FLOGR")              3, true, true, 36, 1, 102, 4,  0, 0}, // #328
  {DBGFIELD("POPCNT_POPCNTOpt")   16383, false, false,  0, 0,  0, 0,  0, 0}, // #329
  {DBGFIELD("SRST_SRSTU")         3, true, true,  3, 1,  8, 4,  0, 0}, // #330
  {DBGFIELD("CUSE")               3, true, true,  3, 1,  8, 4,  0, 0}, // #331
  {DBGFIELD("CFC")                3, true, true,  3, 1, 106, 5,  0, 0}, // #332
  {DBGFIELD("UPT")                3, true, true,  3, 1, 111, 7,  0, 0}, // #333
  {DBGFIELD("CKSM")               3, true, true,  3, 1,  8, 4,  0, 0}, // #334
  {DBGFIELD("CMPSC")              3, true, true,  3, 1, 106, 5,  0, 0}, // #335
  {DBGFIELD("SORTL")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #336
  {DBGFIELD("DFLTCC")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #337
  {DBGFIELD("EX_EXRL")            3, true, true, 60, 1,  1, 3,  0, 0}, // #338
  {DBGFIELD("InsnE_InsnRI_InsnRIE_InsnRIL_InsnRILU_InsnRIS_InsnRR_InsnRRE_InsnRRF_InsnRRS_InsnRS_InsnRSE_InsnRSI_InsnRSY_InsnRX_InsnRXE_InsnRXF_InsnRXY_InsnS_InsnSI_InsnSIL_InsnSIY_InsnSS_InsnSSE_InsnSSF") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #339
  {DBGFIELD("LZDR_LZER")          1, false, false, 60, 1,  1, 3,  0, 0}, // #340
  {DBGFIELD("LZXR")               2, true, false, 61, 1, 29, 3,  0, 0}, // #341
  {DBGFIELD("LER")                1, false, false, 115, 1, 29, 3,  0, 0}, // #342
  {DBGFIELD("LDGR_LDR_LDR32")     1, false, false, 60, 1,  1, 3,  0, 0}, // #343
  {DBGFIELD("LGDR")               1, false, false, 60, 1, 33, 3,  0, 0}, // #344
  {DBGFIELD("LXR")                3, true, true, 61, 1, 29, 3,  0, 0}, // #345
  {DBGFIELD("LTDBR_LTEBR")        1, false, false, 115, 1, 32, 4,  0, 0}, // #346
  {DBGFIELD("LTDBRCompare_LTEBRCompare") 1, false, false, 115, 1, 33, 3,  0, 0}, // #347
  {DBGFIELD("LTXBR_LTXBRCompare") 3, true, true, 118, 1, 24, 4,  0, 0}, // #348
  {DBGFIELD("CPSDRdd_CPSDRds_CPSDRsd_CPSDRss") 1, false, false, 115, 1, 29, 3,  0, 0}, // #349
  {DBGFIELD("LE_LEY")             1, false, false, 114, 2, 37, 4,  0, 0}, // #350
  {DBGFIELD("LD_LDE32_LDY")       1, false, false,  1, 1, 12, 3,  0, 0}, // #351
  {DBGFIELD("LX")                 1, false, false,  1, 1, 12, 3,  0, 0}, // #352
  {DBGFIELD("STD_STDY_STE_STEY")  1, false, false, 66, 2,  1, 4,  0, 0}, // #353
  {DBGFIELD("STX")                1, false, false, 66, 2,  1, 4,  0, 0}, // #354
  {DBGFIELD("LEDBR_LEDBRA")       1, false, false, 115, 1, 60, 3,  0, 0}, // #355
  {DBGFIELD("LDXBR_LDXBRA_LEXBR_LEXBRA") 1, false, false, 112, 1, 41, 3,  0, 0}, // #356
  {DBGFIELD("LDEB")               1, false, false, 114, 2, 63, 4,  0, 0}, // #357
  {DBGFIELD("LDEBR")              1, false, false, 115, 1, 60, 3,  0, 0}, // #358
  {DBGFIELD("LXDB_LXEB")          3, true, true, 117, 2, 49, 4,  0, 0}, // #359
  {DBGFIELD("LXDBR_LXEBR")        3, true, true, 118, 1, 53, 3,  0, 0}, // #360
  {DBGFIELD("CDFBR_CDFBRA_CDGBR_CDGBRA_CEFBR_CEFBRA_CEGBR_CEGBRA") 2, true, false, 134, 2, 118, 4,  0, 0}, // #361
  {DBGFIELD("CXFBR_CXFBRA_CXGBR_CXGBRA") 6, true, true, 136, 2, 63, 4,  0, 0}, // #362
  {DBGFIELD("CDLFBR_CDLGBR_CELFBR_CELGBR") 2, true, false, 134, 2, 118, 4,  0, 0}, // #363
  {DBGFIELD("CXLFBR_CXLGBR")      6, true, true, 136, 2, 63, 4,  0, 0}, // #364
  {DBGFIELD("CFDBR_CFDBRA_CFEBR_CFEBRA_CGDBR_CGDBRA_CGEBR_CGEBRA") 2, true, false, 134, 2, 152, 5,  0, 0}, // #365
  {DBGFIELD("CFXBR_CFXBRA_CGXBR_CGXBRA") 2, true, false, 138, 2, 81, 5,  0, 0}, // #366
  {DBGFIELD("CLFEBR")             3, true, true, 134, 2, 152, 5,  0, 0}, // #367
  {DBGFIELD("CLFDBR")             2, true, false, 134, 2, 152, 5,  0, 0}, // #368
  {DBGFIELD("CLGDBR_CLGEBR")      2, true, false, 134, 2, 152, 5,  0, 0}, // #369
  {DBGFIELD("CLFXBR_CLGXBR")      2, true, false, 138, 2, 81, 5,  0, 0}, // #370
  {DBGFIELD("LCDBR_LCEBR_LNDBR_LNEBR_LPDBR_LPEBR") 1, false, false, 115, 1, 32, 4,  0, 0}, // #371
  {DBGFIELD("LCDFR_LCDFR_32_LNDFR_LNDFR_32_LPDFR_LPDFR_32") 1, false, false, 60, 1,  1, 3,  0, 0}, // #372
  {DBGFIELD("LCXBR_LNXBR_LPXBR")  3, true, true, 118, 1, 24, 4,  0, 0}, // #373
  {DBGFIELD("SQDB_SQEB")          1, false, false, 140, 2, 67, 4,  0, 0}, // #374
  {DBGFIELD("SQDBR_SQEBR")        1, false, false, 141, 1, 67, 3,  0, 0}, // #375
  {DBGFIELD("SQXBR")              3, true, true, 141, 1, 67, 3,  0, 0}, // #376
  {DBGFIELD("FIDBR_FIDBRA_FIEBR_FIEBRA") 1, false, false, 115, 1, 60, 3,  0, 0}, // #377
  {DBGFIELD("FIXBR_FIXBRA")       3, true, true, 118, 1, 25, 3,  0, 0}, // #378
  {DBGFIELD("ADB_AEB")            1, false, false, 114, 2, 122, 5,  1, 1}, // #379
  {DBGFIELD("ADBR_AEBR")          1, false, false, 115, 1, 102, 4,  0, 0}, // #380
  {DBGFIELD("AXBR")               3, true, true, 118, 1, 24, 4,  0, 0}, // #381
  {DBGFIELD("SDB_SEB")            1, false, false, 114, 2, 122, 5,  1, 1}, // #382
  {DBGFIELD("SDBR_SEBR")          1, false, false, 115, 1, 102, 4,  0, 0}, // #383
  {DBGFIELD("SXBR")               3, true, true, 118, 1, 24, 4,  0, 0}, // #384
  {DBGFIELD("MDB_MDEB_MEEB")      1, false, false, 114, 2, 63, 4,  1, 1}, // #385
  {DBGFIELD("MDBR_MDEBR_MEEBR")   1, false, false, 115, 1, 60, 3,  0, 0}, // #386
  {DBGFIELD("MXDB")               3, true, true, 117, 2, 49, 4,  1, 1}, // #387
  {DBGFIELD("MXDBR")              3, true, true, 118, 1, 53, 3,  0, 0}, // #388
  {DBGFIELD("MXBR")               3, true, true, 118, 1, 92, 3,  0, 0}, // #389
  {DBGFIELD("MAEB_MSEB")          3, true, true, 142, 2, 63, 4,  2, 2}, // #390
  {DBGFIELD("MAEBR_MSEBR")        3, true, true, 115, 1, 60, 3,  0, 0}, // #391
  {DBGFIELD("MADB_MSDB")          3, true, true, 142, 2, 63, 4,  2, 2}, // #392
  {DBGFIELD("MADBR_MSDBR")        1, false, false, 115, 1, 60, 3,  0, 0}, // #393
  {DBGFIELD("DDB_DEB")            1, false, false, 140, 2, 67, 4,  1, 1}, // #394
  {DBGFIELD("DDBR_DEBR")          1, false, false, 141, 1, 67, 3,  0, 0}, // #395
  {DBGFIELD("DXBR")               3, true, true, 141, 1, 67, 3,  0, 0}, // #396
  {DBGFIELD("DIDBR_DIEBR")        3, true, true,  3, 1,  8, 4,  0, 0}, // #397
  {DBGFIELD("CDB_CEB_KDB_KEB")    1, false, false, 114, 2, 144, 4,  1, 1}, // #398
  {DBGFIELD("CDBR_CEBR_KDBR_KEBR") 1, false, false, 115, 1, 33, 3,  0, 0}, // #399
  {DBGFIELD("CXBR_KXBR")          3, true, true, 112, 1, 41, 3,  0, 0}, // #400
  {DBGFIELD("TCDB_TCEB")          1, false, false, 114, 2, 15, 4,  0, 0}, // #401
  {DBGFIELD("TCXB")               3, true, true, 117, 2, 45, 4,  0, 0}, // #402
  {DBGFIELD("EFPC")               3, true, true, 39, 2, 131, 4,  0, 0}, // #403
  {DBGFIELD("STFPC")              3, true, true, 66, 2,  1, 4,  0, 0}, // #404
  {DBGFIELD("SFPC")               3, true, true,  1, 1, 33, 3,  0, 0}, // #405
  {DBGFIELD("LFPC")               3, true, true,  8, 1, 60, 3,  0, 0}, // #406
  {DBGFIELD("SFASR")              3, true, true,  3, 1, 10, 2,  0, 0}, // #407
  {DBGFIELD("LFAS")               3, true, true,  3, 1, 10, 2,  0, 0}, // #408
  {DBGFIELD("SRNM_SRNMB_SRNMT")   3, true, true, 60, 1, 33, 3,  0, 0}, // #409
  {DBGFIELD("LTDR_LTER")          1, false, false, 115, 1, 32, 4,  0, 0}, // #410
  {DBGFIELD("LTXR")               3, true, true, 118, 1, 24, 4,  0, 0}, // #411
  {DBGFIELD("LEDR_LRER")          1, false, false, 115, 1, 60, 3,  0, 0}, // #412
  {DBGFIELD("LEXR")               1, false, false, 115, 1, 60, 3,  0, 0}, // #413
  {DBGFIELD("LDXR_LRDR")          1, false, false, 112, 1, 41, 3,  0, 0}, // #414
  {DBGFIELD("LDE")                1, false, false,  1, 1, 12, 3,  0, 0}, // #415
  {DBGFIELD("LDER")               1, false, false, 60, 1,  1, 3,  0, 0}, // #416
  {DBGFIELD("LXD_LXE")            3, true, true, 117, 2, 49, 4,  0, 0}, // #417
  {DBGFIELD("LXDR_LXER")          3, true, true, 118, 1, 53, 3,  0, 0}, // #418
  {DBGFIELD("CDFR_CDGR_CEFR_CEGR") 2, true, false, 134, 2, 118, 4,  0, 0}, // #419
  {DBGFIELD("CXFR_CXGR")          6, true, true, 136, 2, 63, 4,  0, 0}, // #420
  {DBGFIELD("CFDR_CFER_CGDR_CGER") 2, true, false, 134, 2, 152, 5,  0, 0}, // #421
  {DBGFIELD("CFXR_CGXR")          2, true, false, 138, 2, 81, 5,  0, 0}, // #422
  {DBGFIELD("THDER_THDR")         1, false, false, 115, 1, 102, 4,  0, 0}, // #423
  {DBGFIELD("TBDR_TBEDR")         1, false, false, 115, 1, 102, 4,  0, 0}, // #424
  {DBGFIELD("LCDR_LCER_LNDR_LNER_LPDR_LPER") 1, false, false, 115, 1, 32, 4,  0, 0}, // #425
  {DBGFIELD("LCXR_LNXR_LPXR")     3, true, true, 118, 1, 24, 4,  0, 0}, // #426
  {DBGFIELD("HDR_HER")            1, false, false, 115, 1, 60, 3,  0, 0}, // #427
  {DBGFIELD("SQD_SQE")            1, false, false, 140, 2, 67, 4,  0, 0}, // #428
  {DBGFIELD("SQDR_SQER")          1, false, false, 141, 1, 67, 3,  0, 0}, // #429
  {DBGFIELD("SQXR")               3, true, true, 141, 1, 67, 3,  0, 0}, // #430
  {DBGFIELD("FIDR_FIER")          1, false, false, 115, 1, 60, 3,  0, 0}, // #431
  {DBGFIELD("FIXR")               3, true, true, 118, 1, 25, 3,  0, 0}, // #432
  {DBGFIELD("AD_AE_AU_AW")        1, false, false, 114, 2, 122, 5,  1, 1}, // #433
  {DBGFIELD("ADR_AER_AUR_AWR")    1, false, false, 115, 1, 102, 4,  0, 0}, // #434
  {DBGFIELD("AXR")                3, true, true, 118, 1, 24, 4,  0, 0}, // #435
  {DBGFIELD("SD_SE_SU_SW")        1, false, false, 114, 2, 122, 5,  1, 1}, // #436
  {DBGFIELD("SDR_SER_SUR_SWR")    1, false, false, 115, 1, 102, 4,  0, 0}, // #437
  {DBGFIELD("SXR")                3, true, true, 118, 1, 24, 4,  0, 0}, // #438
  {DBGFIELD("MD_MDE_ME_MEE")      1, false, false, 114, 2, 63, 4,  1, 1}, // #439
  {DBGFIELD("MDER_MDR_MEER_MER")  1, false, false, 115, 1, 60, 3,  0, 0}, // #440
  {DBGFIELD("MXD")                3, true, true, 117, 2, 49, 4,  1, 1}, // #441
  {DBGFIELD("MXDR")               3, true, true, 118, 1, 53, 3,  0, 0}, // #442
  {DBGFIELD("MXR")                3, true, true, 118, 1, 67, 3,  0, 0}, // #443
  {DBGFIELD("MY")                 3, true, true, 117, 2, 49, 4,  1, 1}, // #444
  {DBGFIELD("MYH_MYL")            3, true, true, 142, 2, 63, 4,  1, 1}, // #445
  {DBGFIELD("MYR")                3, true, true, 118, 1, 53, 3,  0, 0}, // #446
  {DBGFIELD("MYHR_MYLR")          3, true, true, 115, 1, 60, 3,  0, 0}, // #447
  {DBGFIELD("MAD_MAE_MSD_MSE")    3, true, true, 142, 2, 63, 4,  2, 2}, // #448
  {DBGFIELD("MADR_MAER_MSDR_MSER") 3, true, true, 115, 1, 60, 3,  0, 0}, // #449
  {DBGFIELD("MAY")                3, true, true, 117, 2, 49, 4,  2, 2}, // #450
  {DBGFIELD("MAYH_MAYL")          3, true, true, 142, 2, 63, 4,  2, 2}, // #451
  {DBGFIELD("MAYR")               3, true, true, 118, 1, 53, 3,  0, 0}, // #452
  {DBGFIELD("MAYHR_MAYLR")        3, true, true, 115, 1, 60, 3,  0, 0}, // #453
  {DBGFIELD("DD_DE")              1, false, false, 140, 2, 67, 4,  1, 1}, // #454
  {DBGFIELD("DDR_DER")            1, false, false, 141, 1, 67, 3,  0, 0}, // #455
  {DBGFIELD("DXR")                3, true, true, 141, 1, 67, 3,  0, 0}, // #456
  {DBGFIELD("CD_CE")              1, false, false, 114, 2, 63, 4,  1, 1}, // #457
  {DBGFIELD("CDR_CER")            1, false, false, 115, 1, 60, 3,  0, 0}, // #458
  {DBGFIELD("CXR")                3, true, true, 112, 1, 25, 3,  0, 0}, // #459
  {DBGFIELD("LTDTR")              1, false, false, 115, 1, 148, 4,  0, 0}, // #460
  {DBGFIELD("LTXTR")              3, true, true, 118, 1, 24, 4,  0, 0}, // #461
  {DBGFIELD("LEDTR")              1, false, false, 115, 1, 56, 3,  0, 0}, // #462
  {DBGFIELD("LDXTR")              1, false, false, 112, 1, 56, 3,  0, 0}, // #463
  {DBGFIELD("LDETR")              1, false, false, 115, 1, 53, 3,  0, 0}, // #464
  {DBGFIELD("LXDTR")              3, true, true, 118, 1, 25, 3,  0, 0}, // #465
  {DBGFIELD("CDFTR")              2, true, false, 134, 2, 67, 4,  0, 0}, // #466
  {DBGFIELD("CDGTR_CDGTRA")       2, true, false, 134, 2, 67, 4,  0, 0}, // #467
  {DBGFIELD("CXFTR")              6, true, true, 136, 2, 67, 4,  0, 0}, // #468
  {DBGFIELD("CXGTR_CXGTRA")       6, true, true, 136, 2, 67, 4,  0, 0}, // #469
  {DBGFIELD("CDLFTR")             2, true, false, 134, 2, 67, 4,  0, 0}, // #470
  {DBGFIELD("CDLGTR")             2, true, false, 134, 2, 67, 4,  0, 0}, // #471
  {DBGFIELD("CXLFTR")             6, true, true, 136, 2, 67, 4,  0, 0}, // #472
  {DBGFIELD("CXLGTR")             6, true, true, 136, 2, 67, 4,  0, 0}, // #473
  {DBGFIELD("CFDTR_CGDTR_CGDTRA") 2, true, false, 134, 2, 87, 5,  0, 0}, // #474
  {DBGFIELD("CFXTR_CGXTR_CGXTRA") 2, true, false, 138, 2, 87, 5,  0, 0}, // #475
  {DBGFIELD("CLFDTR_CLGDTR")      2, true, false, 134, 2, 87, 5,  0, 0}, // #476
  {DBGFIELD("CLFXTR_CLGXTR")      2, true, false, 138, 2, 87, 5,  0, 0}, // #477
  {DBGFIELD("CDSTR_CDUTR")        2, true, false, 134, 2, 41, 4,  0, 0}, // #478
  {DBGFIELD("CXSTR_CXUTR")        6, true, true, 144, 2, 49, 4,  0, 0}, // #479
  {DBGFIELD("CSDTR_CUDTR")        2, true, false, 134, 2, 63, 4,  0, 0}, // #480
  {DBGFIELD("CSXTR_CUXTR")        6, true, true, 144, 2, 56, 4,  0, 0}, // #481
  {DBGFIELD("CDZT")               2, true, false, 114, 2, 49, 4,  0, 0}, // #482
  {DBGFIELD("CXZT")               9, true, true, 146, 2, 92, 4,  0, 0}, // #483
  {DBGFIELD("CZDT")               2, true, false, 113, 3,  1, 5,  0, 0}, // #484
  {DBGFIELD("CZXT")               3, true, true, 148, 3,  1, 5,  0, 0}, // #485
  {DBGFIELD("CDPT")               2, true, false, 114, 2, 49, 4,  0, 0}, // #486
  {DBGFIELD("CXPT")               9, true, true, 146, 2, 92, 4,  0, 0}, // #487
  {DBGFIELD("CPDT")               2, true, false, 113, 3,  1, 5,  0, 0}, // #488
  {DBGFIELD("CPXT")               3, true, true, 148, 3,  1, 5,  0, 0}, // #489
  {DBGFIELD("PFPO")               3, true, true,  3, 1,  8, 4,  0, 0}, // #490
  {DBGFIELD("FIDTR")              1, false, false, 115, 1, 53, 3,  0, 0}, // #491
  {DBGFIELD("FIXTR")              3, true, true, 118, 1, 25, 3,  0, 0}, // #492
  {DBGFIELD("EEDTR")              2, true, false, 134, 2, 63, 4,  0, 0}, // #493
  {DBGFIELD("EEXTR")              2, true, false, 134, 2, 63, 4,  0, 0}, // #494
  {DBGFIELD("ESDTR")              2, true, false, 134, 2, 63, 4,  0, 0}, // #495
  {DBGFIELD("ESXTR")              2, true, false, 138, 2, 49, 4,  0, 0}, // #496
  {DBGFIELD("ADTR_ADTRA")         1, false, false, 115, 1, 148, 4,  0, 0}, // #497
  {DBGFIELD("AXTR_AXTRA")         3, true, true, 118, 1, 24, 4,  0, 0}, // #498
  {DBGFIELD("SDTR_SDTRA")         1, false, false, 115, 1, 148, 4,  0, 0}, // #499
  {DBGFIELD("SXTR_SXTRA")         3, true, true, 118, 1, 24, 4,  0, 0}, // #500
  {DBGFIELD("MDTR_MDTRA")         1, false, false, 115, 1, 67, 3,  0, 0}, // #501
  {DBGFIELD("MXTR_MXTRA")         3, true, true, 118, 1, 67, 3,  0, 0}, // #502
  {DBGFIELD("DDTR_DDTRA")         1, false, false, 115, 1, 67, 3,  0, 0}, // #503
  {DBGFIELD("DXTR_DXTRA")         3, true, true, 118, 1, 67, 3,  0, 0}, // #504
  {DBGFIELD("QADTR")              1, false, false, 115, 1, 148, 4,  0, 0}, // #505
  {DBGFIELD("QAXTR")              3, true, true, 118, 1, 24, 4,  0, 0}, // #506
  {DBGFIELD("RRDTR")              2, true, false, 134, 2, 76, 5,  0, 0}, // #507
  {DBGFIELD("RRXTR")              6, true, true, 136, 2, 122, 5,  0, 0}, // #508
  {DBGFIELD("SLDT_SRDT")          3, true, true, 114, 2, 56, 4,  0, 0}, // #509
  {DBGFIELD("SLXT_SRXT")          3, true, true, 117, 2, 56, 4,  0, 0}, // #510
  {DBGFIELD("IEDTR")              2, true, false, 134, 2, 41, 4,  0, 0}, // #511
  {DBGFIELD("IEXTR")              6, true, true, 136, 2, 63, 4,  0, 0}, // #512
  {DBGFIELD("CDTR_KDTR")          1, false, false, 115, 1, 53, 3,  0, 0}, // #513
  {DBGFIELD("CXTR_KXTR")          3, true, true, 112, 1, 41, 3,  0, 0}, // #514
  {DBGFIELD("CEDTR")              1, false, false, 115, 1, 53, 3,  0, 0}, // #515
  {DBGFIELD("CEXTR")              1, false, false, 115, 1, 53, 3,  0, 0}, // #516
  {DBGFIELD("TDCDT_TDCET_TDGDT_TDGET") 1, false, false, 114, 2, 56, 4,  0, 0}, // #517
  {DBGFIELD("TDCXT_TDGXT")        3, true, true, 142, 2, 56, 4,  0, 0}, // #518
  {DBGFIELD("VLR32_VLR64_VLR")    1, false, false, 60, 1,  1, 3,  0, 0}, // #519
  {DBGFIELD("VLGV_VLGVB_VLGVF_VLGVG_VLGVH") 1, false, false, 60, 1, 12, 3,  0, 0}, // #520
  {DBGFIELD("VLVG_VLVGB_VLVGF_VLVGG_VLVGH") 1, false, false, 60, 1,  1, 3,  0, 0}, // #521
  {DBGFIELD("VLVGP32_VLVGP")      1, false, false, 60, 1, 33, 3,  0, 0}, // #522
  {DBGFIELD("VZERO")              1, false, false, 115, 1, 29, 3,  0, 0}, // #523
  {DBGFIELD("VONE")               1, false, false, 115, 1, 29, 3,  0, 0}, // #524
  {DBGFIELD("VGBM")               1, false, false, 115, 1, 29, 3,  0, 0}, // #525
  {DBGFIELD("VGM_VGMB_VGMF_VGMG_VGMH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #526
  {DBGFIELD("VREPI_VREPIB_VREPIF_VREPIG_VREPIH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #527
  {DBGFIELD("VLEIB_VLEIF_VLEIG_VLEIH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #528
  {DBGFIELD("VL_VLAlign")         1, false, false,  1, 1, 12, 3,  0, 0}, // #529
  {DBGFIELD("VLBB_VLL")           1, false, false,  1, 1, 12, 3,  0, 0}, // #530
  {DBGFIELD("VL32_VL64")          1, false, false,  1, 1, 12, 3,  0, 0}, // #531
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH_VLLEZLF") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #532
  {DBGFIELD("VLREP_VLREPB_VLREPF_VLREPG_VLREPH") 1, false, false,  1, 1, 12, 3,  0, 0}, // #533
  {DBGFIELD("VLEB_VLEF_VLEG_VLEH") 1, false, false, 114, 2, 37, 4,  1, 1}, // #534
  {DBGFIELD("VGEF_VGEG")          2, true, false, 113, 3, 169, 5,  1, 1}, // #535
  {DBGFIELD("VLM_VLMAlign")       3, true, true, 16, 1, 148, 4,  0, 0}, // #536
  {DBGFIELD("VLRL_VLRLR")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #537
  {DBGFIELD("VST32_VST64_VST_VSTAlign_VSTL") 1, false, false, 66, 2,  1, 4,  0, 0}, // #538
  {DBGFIELD("VSTEF_VSTEG")        1, false, false, 66, 2,  1, 4,  0, 0}, // #539
  {DBGFIELD("VSTEB_VSTEH")        2, true, false, 113, 3,  1, 5,  0, 0}, // #540
  {DBGFIELD("VSTM_VSTMAlign")     6, true, true, 95, 2,  1, 4,  0, 0}, // #541
  {DBGFIELD("VSCEF_VSCEG")        2, true, false, 70, 2,  1, 4,  0, 0}, // #542
  {DBGFIELD("VSTRL_VSTRLR")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #543
  {DBGFIELD("VLBR_VLBRF_VLBRG_VLBRH_VLBRQ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #544
  {DBGFIELD("VLER_VLERF_VLERG_VLERH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #545
  {DBGFIELD("VLEBRF_VLEBRG_VLEBRH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #546
  {DBGFIELD("VLLEBRZ_VLLEBRZE_VLLEBRZF_VLLEBRZG_VLLEBRZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #547
  {DBGFIELD("VLBRREP_VLBRREPF_VLBRREPG_VLBRREPH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #548
  {DBGFIELD("VSTBR_VSTBRF_VSTBRG_VSTBRH_VSTBRQ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #549
  {DBGFIELD("VSTER_VSTERF_VSTERG_VSTERH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #550
  {DBGFIELD("VSTEBRH")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #551
  {DBGFIELD("VSTEBRF_VSTEBRG")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #552
  {DBGFIELD("VMRH_VMRHB_VMRHF_VMRHG_VMRHH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #553
  {DBGFIELD("VMRL_VMRLB_VMRLF_VMRLG_VMRLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #554
  {DBGFIELD("VPERM")              1, false, false, 115, 1, 29, 3,  0, 0}, // #555
  {DBGFIELD("VPDI")               1, false, false, 115, 1, 29, 3,  0, 0}, // #556
  {DBGFIELD("VBPERM")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #557
  {DBGFIELD("VREP_VREPB_VREPF_VREPG_VREPH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #558
  {DBGFIELD("VSEL")               1, false, false, 115, 1, 29, 3,  0, 0}, // #559
  {DBGFIELD("VPK_VPKF_VPKG_VPKH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #560
  {DBGFIELD("VPKS_VPKSF_VPKSG_VPKSH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #561
  {DBGFIELD("VPKSFS_VPKSGS_VPKSHS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #562
  {DBGFIELD("VPKLS_VPKLSF_VPKLSG_VPKLSH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #563
  {DBGFIELD("VPKLSFS_VPKLSGS_VPKLSHS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #564
  {DBGFIELD("VSEG_VSEGB_VSEGF_VSEGH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #565
  {DBGFIELD("VUPH_VUPHB_VUPHF_VUPHH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #566
  {DBGFIELD("VUPL_VUPLB_VUPLF")   1, false, false, 115, 1, 29, 3,  0, 0}, // #567
  {DBGFIELD("VUPLH_VUPLHB_VUPLHF_VUPLHH_VUPLHW") 1, false, false, 115, 1, 29, 3,  0, 0}, // #568
  {DBGFIELD("VUPLL_VUPLLB_VUPLLF_VUPLLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #569
  {DBGFIELD("VA_VAB_VAC_VACQ_VAF_VAG_VAH_VAQ") 1, false, false, 115, 1, 29, 3,  0, 0}, // #570
  {DBGFIELD("VACC_VACCB_VACCC_VACCCQ_VACCF_VACCG_VACCH_VACCQ") 1, false, false, 115, 1, 29, 3,  0, 0}, // #571
  {DBGFIELD("VAVG_VAVGB_VAVGF_VAVGG_VAVGH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #572
  {DBGFIELD("VAVGL_VAVGLB_VAVGLF_VAVGLG_VAVGLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #573
  {DBGFIELD("VN_VNC_VNN_VNO_VNX") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #574
  {DBGFIELD("VO_VOC")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #575
  {DBGFIELD("VCKSM")              1, false, false, 115, 1, 12, 3,  0, 0}, // #576
  {DBGFIELD("VCLZ_VCLZB_VCLZF_VCLZG_VCLZH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #577
  {DBGFIELD("VCTZ_VCTZB_VCTZF_VCTZG_VCTZH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #578
  {DBGFIELD("VX")                 1, false, false, 115, 1, 29, 3,  0, 0}, // #579
  {DBGFIELD("VGFM")               1, false, false, 115, 1, 12, 3,  0, 0}, // #580
  {DBGFIELD("VGFMA_VGFMAB_VGFMAF_VGFMAG_VGFMAH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #581
  {DBGFIELD("VGFMB_VGFMF_VGFMG_VGFMH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #582
  {DBGFIELD("VLC_VLCB_VLCF_VLCG_VLCH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #583
  {DBGFIELD("VLP_VLPB_VLPF_VLPG_VLPH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #584
  {DBGFIELD("VMX_VMXB_VMXF_VMXG_VMXH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #585
  {DBGFIELD("VMXL_VMXLB_VMXLF_VMXLG_VMXLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #586
  {DBGFIELD("VMN_VMNB_VMNF_VMNG_VMNH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #587
  {DBGFIELD("VMNL_VMNLB_VMNLF_VMNLG_VMNLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #588
  {DBGFIELD("VMAL_VMALB_VMALF")   1, false, false, 115, 1, 12, 3,  0, 0}, // #589
  {DBGFIELD("VMALE_VMALEB_VMALEF_VMALEH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #590
  {DBGFIELD("VMALH_VMALHB_VMALHF_VMALHH_VMALHW") 1, false, false, 115, 1, 12, 3,  0, 0}, // #591
  {DBGFIELD("VMALO_VMALOB_VMALOF_VMALOH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #592
  {DBGFIELD("VMAO_VMAOB_VMAOF_VMAOH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #593
  {DBGFIELD("VMAE_VMAEB_VMAEF_VMAEH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #594
  {DBGFIELD("VMAH_VMAHB_VMAHF_VMAHH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #595
  {DBGFIELD("VME_VMEB_VMEF_VMEH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #596
  {DBGFIELD("VMH_VMHB_VMHF_VMHH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #597
  {DBGFIELD("VML_VMLB_VMLF")      1, false, false, 115, 1, 12, 3,  0, 0}, // #598
  {DBGFIELD("VMLE_VMLEB_VMLEF_VMLEH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #599
  {DBGFIELD("VMLH_VMLHB_VMLHF_VMLHH_VMLHW") 1, false, false, 115, 1, 12, 3,  0, 0}, // #600
  {DBGFIELD("VMLO_VMLOB_VMLOF_VMLOH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #601
  {DBGFIELD("VMO_VMOB_VMOF_VMOH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #602
  {DBGFIELD("VMSL_VMSLG")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #603
  {DBGFIELD("VPOPCT_VPOPCTB_VPOPCTF_VPOPCTG_VPOPCTH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #604
  {DBGFIELD("VERLL_VERLLB_VERLLF_VERLLG_VERLLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #605
  {DBGFIELD("VERLLV_VERLLVB_VERLLVF_VERLLVG_VERLLVH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #606
  {DBGFIELD("VERIM_VERIMB_VERIMF_VERIMG_VERIMH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #607
  {DBGFIELD("VESL_VESLB_VESLF_VESLG_VESLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #608
  {DBGFIELD("VESLV_VESLVB_VESLVF_VESLVG_VESLVH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #609
  {DBGFIELD("VESRA_VESRAB_VESRAF_VESRAG_VESRAH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #610
  {DBGFIELD("VESRAV_VESRAVB_VESRAVF_VESRAVG_VESRAVH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #611
  {DBGFIELD("VESRL_VESRLB_VESRLF_VESRLG_VESRLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #612
  {DBGFIELD("VESRLV_VESRLVB_VESRLVF_VESRLVG_VESRLVH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #613
  {DBGFIELD("VSL_VSLDB")          1, false, false, 115, 1, 29, 3,  0, 0}, // #614
  {DBGFIELD("VSLB")               1, false, false, 112, 1, 33, 3,  0, 0}, // #615
  {DBGFIELD("VSRA_VSRL")          1, false, false, 115, 1, 29, 3,  0, 0}, // #616
  {DBGFIELD("VSRAB_VSRLB")        1, false, false, 112, 1, 33, 3,  0, 0}, // #617
  {DBGFIELD("VSLD")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #618
  {DBGFIELD("VSRD")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #619
  {DBGFIELD("VSB_VSBCBI_VSBCBIQ_VSBI_VSBIQ") 1, false, false, 115, 1, 29, 3,  0, 0}, // #620
  {DBGFIELD("VSCBI_VSCBIB_VSCBIF_VSCBIG_VSCBIH_VSCBIQ") 1, false, false, 115, 1, 29, 3,  0, 0}, // #621
  {DBGFIELD("VS_VSF_VSG_VSH_VSQ") 1, false, false, 115, 1, 29, 3,  0, 0}, // #622
  {DBGFIELD("VSUM_VSUMB_VSUMH")   1, false, false, 115, 1, 12, 3,  0, 0}, // #623
  {DBGFIELD("VSUMG_VSUMGF_VSUMGH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #624
  {DBGFIELD("VSUMQ_VSUMQF_VSUMQG") 1, false, false, 115, 1, 12, 3,  0, 0}, // #625
  {DBGFIELD("VEC_VECB_VECF_VECG_VECH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #626
  {DBGFIELD("VECL_VECLB_VECLF_VECLG_VECLH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #627
  {DBGFIELD("VCEQ_VCEQB_VCEQF_VCEQG_VCEQH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #628
  {DBGFIELD("VCEQBS_VCEQFS_VCEQGS_VCEQHS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #629
  {DBGFIELD("VCH_VCHB_VCHF_VCHG_VCHH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #630
  {DBGFIELD("VCHBS_VCHFS_VCHGS_VCHHS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #631
  {DBGFIELD("VCHL_VCHLB_VCHLF_VCHLG_VCHLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #632
  {DBGFIELD("VCHLBS_VCHLFS_VCHLGS_VCHLHS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #633
  {DBGFIELD("VTM")                1, false, false, 115, 1, 12, 3,  0, 0}, // #634
  {DBGFIELD("VCFPL_VCFPS")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #635
  {DBGFIELD("VCDG_VCDLG")         1, false, false, 112, 1, 53, 3,  0, 0}, // #636
  {DBGFIELD("VCDGB_VCDLGB")       1, false, false, 112, 1, 53, 3,  0, 0}, // #637
  {DBGFIELD("WCDGB_WCDLGB")       1, false, false, 115, 1, 60, 3,  0, 0}, // #638
  {DBGFIELD("VCEFB_VCELFB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #639
  {DBGFIELD("WCEFB_WCELFB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #640
  {DBGFIELD("VCLFP_VCSFP")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #641
  {DBGFIELD("VCGD_VCLGD")         1, false, false, 112, 1, 53, 3,  0, 0}, // #642
  {DBGFIELD("VCGDB_VCLGDB")       1, false, false, 112, 1, 53, 3,  0, 0}, // #643
  {DBGFIELD("WCGDB_WCLGDB")       1, false, false, 115, 1, 60, 3,  0, 0}, // #644
  {DBGFIELD("VCFEB_VCLFEB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #645
  {DBGFIELD("WCFEB_WCLFEB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #646
  {DBGFIELD("VLDE_VLED")          1, false, false, 112, 1, 53, 3,  0, 0}, // #647
  {DBGFIELD("VLDEB_VLEDB")        1, false, false, 112, 1, 53, 3,  0, 0}, // #648
  {DBGFIELD("WLDEB_WLEDB")        1, false, false, 115, 1, 60, 3,  0, 0}, // #649
  {DBGFIELD("VFLL_VFLR")          16383, false, false,  0, 0,  0, 0,  0, 0}, // #650
  {DBGFIELD("VFLLS_VFLRD")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #651
  {DBGFIELD("WFLLS_WFLRD")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #652
  {DBGFIELD("WFLLD")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #653
  {DBGFIELD("WFLRX")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #654
  {DBGFIELD("VFI_VFIDB")          1, false, false, 112, 1, 53, 3,  0, 0}, // #655
  {DBGFIELD("WFIDB")              1, false, false, 115, 1, 60, 3,  0, 0}, // #656
  {DBGFIELD("VFISB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #657
  {DBGFIELD("WFISB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #658
  {DBGFIELD("WFIXB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #659
  {DBGFIELD("VFPSO")              1, false, false, 115, 1, 29, 3,  0, 0}, // #660
  {DBGFIELD("VFPSODB_WFPSODB")    1, false, false, 115, 1, 29, 3,  0, 0}, // #661
  {DBGFIELD("VFPSOSB_WFPSOSB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #662
  {DBGFIELD("WFPSOXB")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #663
  {DBGFIELD("VFLCDB_VFLNDB_VFLPDB_WFLCDB_WFLNDB_WFLPDB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #664
  {DBGFIELD("VFLCSB_VFLNSB_VFLPSB_WFLCSB_WFLNSB_WFLPSB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #665
  {DBGFIELD("WFLCXB_WFLNXB_WFLPXB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #666
  {DBGFIELD("VFMAX_VFMIN")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #667
  {DBGFIELD("VFMAXDB_VFMINDB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #668
  {DBGFIELD("WFMAXDB_WFMINDB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #669
  {DBGFIELD("VFMAXSB_VFMINSB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #670
  {DBGFIELD("WFMAXSB_WFMINSB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #671
  {DBGFIELD("WFMAXXB_WFMINXB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #672
  {DBGFIELD("VFTCI")              1, false, false, 115, 1, 32, 4,  0, 0}, // #673
  {DBGFIELD("VFTCIDB_WFTCIDB")    1, false, false, 115, 1, 32, 4,  0, 0}, // #674
  {DBGFIELD("VFTCISB_WFTCISB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #675
  {DBGFIELD("WFTCIXB")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #676
  {DBGFIELD("VFA_VFS")            1, false, false, 112, 1, 53, 3,  0, 0}, // #677
  {DBGFIELD("VFADB_VFSDB")        1, false, false, 112, 1, 53, 3,  0, 0}, // #678
  {DBGFIELD("WFADB_WFSDB")        1, false, false, 115, 1, 60, 3,  0, 0}, // #679
  {DBGFIELD("VFASB_VFSSB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #680
  {DBGFIELD("WFASB_WFSSB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #681
  {DBGFIELD("WFAXB_WFSXB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #682
  {DBGFIELD("VFM_VFMDB")          1, false, false, 112, 1, 53, 3,  0, 0}, // #683
  {DBGFIELD("WFMDB_WFMSB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #684
  {DBGFIELD("VFMSB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #685
  {DBGFIELD("WFMXB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #686
  {DBGFIELD("VFMA_VFMS_VFNMA_VFNMS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #687
  {DBGFIELD("VFMADB_VFMSDB_VFNMADB_VFNMSDB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #688
  {DBGFIELD("WFMADB_WFMSDB_WFNMADB_WFNMSDB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #689
  {DBGFIELD("VFMASB_VFMSSB_VFNMASB_VFNMSSB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #690
  {DBGFIELD("WFMASB_WFMSSB_WFNMASB_WFNMSSB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #691
  {DBGFIELD("WFMAXB_WFMSXB_WFNMAXB_WFNMSXB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #692
  {DBGFIELD("VFD")                1, false, false, 141, 1, 67, 3,  0, 0}, // #693
  {DBGFIELD("VFDDB_WFDDB")        1, false, false, 141, 1, 67, 3,  0, 0}, // #694
  {DBGFIELD("VFDSB_WFDSB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #695
  {DBGFIELD("WFDXB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #696
  {DBGFIELD("VFSQ")               1, false, false, 141, 1, 67, 3,  0, 0}, // #697
  {DBGFIELD("VFSQDB_WFSQDB")      1, false, false, 141, 1, 67, 3,  0, 0}, // #698
  {DBGFIELD("VFSQSB_WFSQSB")      16383, false, false,  0, 0,  0, 0,  0, 0}, // #699
  {DBGFIELD("WFSQXB")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #700
  {DBGFIELD("VFCE_VFCH_VFCHE")    1, false, false, 115, 1, 28, 4,  0, 0}, // #701
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB_VFKEDB_VFKHDB_VFKHEDB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #702
  {DBGFIELD("WFCEDB_WFCHDB_WFCHEDB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #703
  {DBGFIELD("WFKEDB_WFKHDB_WFKHEDB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #704
  {DBGFIELD("VFCESB_VFCHESB_VFCHSB_VFKESB_VFKHESB_VFKHSB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #705
  {DBGFIELD("WFCESB_WFCHESB_WFCHSB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #706
  {DBGFIELD("WFKESB_WFKHESB_WFKHSB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #707
  {DBGFIELD("WFCEXB_WFCHEXB_WFCHXB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #708
  {DBGFIELD("WFKEXB_WFKHEXB_WFKHXB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #709
  {DBGFIELD("VFCEDBS_VFCHDBS_VFCHEDBS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #710
  {DBGFIELD("VFKEDBS_VFKHDBS_VFKHEDBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #711
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS_WFKEDBS_WFKHDBS_WFKHEDBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #712
  {DBGFIELD("VFCESBS_VFCHESBS_VFCHSBS_VFKESBS_VFKHESBS_VFKHSBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #713
  {DBGFIELD("WFCESBS_WFCHESBS_WFCHSBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #714
  {DBGFIELD("WFKESBS_WFKHESBS_WFKHSBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #715
  {DBGFIELD("WFCEXBS_WFCHEXBS_WFCHXBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #716
  {DBGFIELD("WFKEXBS_WFKHEXBS_WFKHXBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #717
  {DBGFIELD("WFC_WFK")            1, false, false, 115, 1, 33, 3,  0, 0}, // #718
  {DBGFIELD("WFCDB_WFKDB")        1, false, false, 115, 1, 33, 3,  0, 0}, // #719
  {DBGFIELD("WFCSB_WFKSB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #720
  {DBGFIELD("WFCXB_WFKXB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #721
  {DBGFIELD("LEFR")               1, false, false, 60, 1,  1, 3,  0, 0}, // #722
  {DBGFIELD("LFER")               1, false, false, 60, 1, 12, 3,  0, 0}, // #723
  {DBGFIELD("VFAE_VFAEB")         1, false, false, 115, 1, 33, 3,  0, 0}, // #724
  {DBGFIELD("VFAEF_VFAEH")        1, false, false, 115, 1, 33, 3,  0, 0}, // #725
  {DBGFIELD("VFAEBS_VFAEFS_VFAEHS") 1, false, false, 115, 1, 139, 4,  0, 0}, // #726
  {DBGFIELD("VFAEZB_VFAEZF_VFAEZH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #727
  {DBGFIELD("VFAEZBS_VFAEZFS_VFAEZHS") 1, false, false, 115, 1, 139, 4,  0, 0}, // #728
  {DBGFIELD("VFEE_VFEEB_VFEEF_VFEEH_VFEEZB_VFEEZF_VFEEZH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #729
  {DBGFIELD("VFEEBS_VFEEFS_VFEEHS_VFEEZBS_VFEEZFS_VFEEZHS") 1, false, false, 115, 1, 139, 4,  0, 0}, // #730
  {DBGFIELD("VFENE_VFENEB_VFENEF_VFENEH_VFENEZB_VFENEZF_VFENEZH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #731
  {DBGFIELD("VFENEBS_VFENEFS_VFENEHS_VFENEZBS_VFENEZFS_VFENEZHS") 1, false, false, 115, 1, 139, 4,  0, 0}, // #732
  {DBGFIELD("VISTR_VISTRB_VISTRF_VISTRH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #733
  {DBGFIELD("VISTRBS_VISTRFS_VISTRHS") 1, false, false, 115, 1, 139, 4,  0, 0}, // #734
  {DBGFIELD("VSTRC_VSTRCB_VSTRCF_VSTRCH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #735
  {DBGFIELD("VSTRCBS_VSTRCFS_VSTRCHS") 1, false, false, 115, 1, 139, 4,  0, 0}, // #736
  {DBGFIELD("VSTRCZB_VSTRCZF_VSTRCZH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #737
  {DBGFIELD("VSTRCZBS_VSTRCZFS_VSTRCZHS") 1, false, false, 115, 1, 139, 4,  0, 0}, // #738
  {DBGFIELD("VSTRS_VSTRSB_VSTRSF_VSTRSH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #739
  {DBGFIELD("VSTRSZB_VSTRSZF_VSTRSZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #740
  {DBGFIELD("VLIP")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #741
  {DBGFIELD("VPKZ")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #742
  {DBGFIELD("VUPKZ")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #743
  {DBGFIELD("VCVB_VCVBG_VCVBGOpt_VCVBOpt") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #744
  {DBGFIELD("VCVD_VCVDG")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #745
  {DBGFIELD("VAP_VSP")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #746
  {DBGFIELD("VMP_VMSP")           16383, false, false,  0, 0,  0, 0,  0, 0}, // #747
  {DBGFIELD("VDP_VRP")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #748
  {DBGFIELD("VSDP")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #749
  {DBGFIELD("VSRP")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #750
  {DBGFIELD("VPSOP")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #751
  {DBGFIELD("VCP_VTP")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #752
  {DBGFIELD("EPSW")               3, true, true,  3, 1,  9, 3,  0, 0}, // #753
  {DBGFIELD("LPSW_LPSWE")         3, true, true,  3, 1, 10, 2,  0, 0}, // #754
  {DBGFIELD("IPK")                3, true, true, 39, 1, 33, 3,  0, 0}, // #755
  {DBGFIELD("SPKA")               1, false, true,  1, 1,  1, 3,  0, 0}, // #756
  {DBGFIELD("SSM")                1, false, true,  1, 1,  1, 3,  0, 0}, // #757
  {DBGFIELD("STNSM_STOSM")        3, true, true, 66, 2,  1, 4,  0, 0}, // #758
  {DBGFIELD("IAC")                1, false, false, 39, 1, 33, 3,  0, 0}, // #759
  {DBGFIELD("SAC_SACF")           1, false, true,  1, 1,  1, 3,  0, 0}, // #760
  {DBGFIELD("LCTL_LCTLG")         3, true, true,  8, 1, 148, 4,  0, 0}, // #761
  {DBGFIELD("STCTG_STCTL")        6, true, true, 130, 2,  1, 4,  0, 0}, // #762
  {DBGFIELD("EPAIR_EPAR_ESAIR_ESAR") 1, false, false,  1, 1, 12, 3,  0, 0}, // #763
  {DBGFIELD("SSAIR_SSAR")         3, true, true,  3, 1, 10, 2,  0, 0}, // #764
  {DBGFIELD("ESEA")               3, true, true,  3, 1, 10, 2,  0, 0}, // #765
  {DBGFIELD("SPX_STPX")           3, true, true,  3, 1, 10, 2,  0, 0}, // #766
  {DBGFIELD("ISKE")               3, true, true,  3, 1, 10, 2,  0, 0}, // #767
  {DBGFIELD("IVSK")               3, true, true,  3, 1, 10, 2,  0, 0}, // #768
  {DBGFIELD("SSKE_SSKEOpt")       3, true, true,  3, 1, 10, 2,  0, 0}, // #769
  {DBGFIELD("RRBE_RRBM")          3, true, true,  3, 1, 10, 2,  0, 0}, // #770
  {DBGFIELD("IRBM")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #771
  {DBGFIELD("PFMF")               3, true, true,  3, 1, 10, 2,  0, 0}, // #772
  {DBGFIELD("TB")                 3, true, true,  3, 1,  9, 3,  0, 0}, // #773
  {DBGFIELD("PGIN")               3, true, true,  3, 1, 10, 2,  0, 0}, // #774
  {DBGFIELD("PGOUT")              3, true, true,  3, 1, 10, 2,  0, 0}, // #775
  {DBGFIELD("IPTE_IPTEOpt_IPTEOptOpt") 3, true, true,  3, 1, 10, 2,  0, 0}, // #776
  {DBGFIELD("IDTE_IDTEOpt")       3, true, true,  3, 1, 10, 2,  0, 0}, // #777
  {DBGFIELD("CRDTE_CRDTEOpt")     3, true, true,  3, 1, 10, 2,  0, 0}, // #778
  {DBGFIELD("PTLB")               3, true, true,  3, 1, 10, 2,  0, 0}, // #779
  {DBGFIELD("CSP_CSPG")           3, true, true,  3, 1,  9, 3,  0, 0}, // #780
  {DBGFIELD("LPTEA")              3, true, true,  3, 1,  8, 4,  0, 0}, // #781
  {DBGFIELD("LRA_LRAG_LRAY")      3, true, true,  3, 1,  9, 3,  0, 0}, // #782
  {DBGFIELD("STRAG")              3, true, true,  3, 1, 10, 2,  0, 0}, // #783
  {DBGFIELD("LURA_LURAG")         3, true, true,  3, 1, 10, 2,  0, 0}, // #784
  {DBGFIELD("STURA_STURG")        3, true, true,  3, 1, 10, 2,  0, 0}, // #785
  {DBGFIELD("TPROT")              3, true, true,  3, 1, 10, 2,  0, 0}, // #786
  {DBGFIELD("MVCK_MVCP_MVCS")     6, true, true, 151, 3, 185, 5,  0, 0}, // #787
  {DBGFIELD("MVCDK_MVCSK")        6, true, true, 154, 2,  1, 4,  0, 0}, // #788
  {DBGFIELD("MVCOS")              3, true, true,  3, 1, 10, 2,  0, 0}, // #789
  {DBGFIELD("MVPG")               3, true, true,  3, 1, 10, 2,  0, 0}, // #790
  {DBGFIELD("LASP")               3, true, true,  3, 1, 10, 2,  0, 0}, // #791
  {DBGFIELD("PALB")               3, true, true,  1, 1,  1, 3,  0, 0}, // #792
  {DBGFIELD("PC")                 3, true, true,  3, 1, 10, 2,  0, 0}, // #793
  {DBGFIELD("PR")                 3, true, true,  3, 1, 10, 2,  0, 0}, // #794
  {DBGFIELD("PT_PTI")             3, true, true,  3, 1, 10, 2,  0, 0}, // #795
  {DBGFIELD("RP")                 3, true, true,  3, 1, 10, 2,  0, 0}, // #796
  {DBGFIELD("BSA_BSG")            3, true, true,  3, 1, 10, 2,  0, 0}, // #797
  {DBGFIELD("TAR")                3, true, true,  3, 1, 10, 2,  0, 0}, // #798
  {DBGFIELD("BAKR")               3, true, true,  3, 1, 10, 2,  0, 0}, // #799
  {DBGFIELD("EREG_EREGG")         3, true, true,  3, 1, 10, 2,  0, 0}, // #800
  {DBGFIELD("ESTA_MSTA")          3, true, true,  3, 1,  9, 3,  0, 0}, // #801
  {DBGFIELD("PTFF")               3, true, true,  3, 1, 10, 2,  0, 0}, // #802
  {DBGFIELD("SCK_SCKC_SCKPF")     3, true, true,  3, 1, 10, 2,  0, 0}, // #803
  {DBGFIELD("SPT")                3, true, true,  8, 1,  1, 3,  0, 0}, // #804
  {DBGFIELD("STCK_STCKF")         6, true, true, 156, 3, 97, 5,  0, 0}, // #805
  {DBGFIELD("STCKE")              9, true, true, 159, 3, 92, 5,  0, 0}, // #806
  {DBGFIELD("STCKC")              3, true, true,  3, 1, 10, 2,  0, 0}, // #807
  {DBGFIELD("STPT")               2, true, false, 97, 2,  1, 4,  0, 0}, // #808
  {DBGFIELD("STAP")               3, true, true,  3, 1, 10, 2,  0, 0}, // #809
  {DBGFIELD("STIDP")              3, true, true,  3, 1, 10, 2,  0, 0}, // #810
  {DBGFIELD("STSI")               3, true, true,  3, 1,  9, 3,  0, 0}, // #811
  {DBGFIELD("STFL_STFLE")         3, true, true,  3, 1,  9, 3,  0, 0}, // #812
  {DBGFIELD("ECAG")               3, true, true,  3, 1, 10, 2,  0, 0}, // #813
  {DBGFIELD("ECTG")               3, true, true,  3, 1,  9, 3,  0, 0}, // #814
  {DBGFIELD("PTF")                3, true, true,  3, 1, 10, 2,  0, 0}, // #815
  {DBGFIELD("PCKMO")              3, true, true,  3, 1, 10, 2,  0, 0}, // #816
  {DBGFIELD("SVC")                3, true, true,  3, 1, 10, 2,  0, 0}, // #817
  {DBGFIELD("MC")                 3, true, true, 60, 1,  1, 3,  0, 0}, // #818
  {DBGFIELD("DIAG")               3, true, true,  3, 1, 10, 2,  0, 0}, // #819
  {DBGFIELD("TRACE_TRACG")        1, false, false, 60, 1,  1, 3,  0, 0}, // #820
  {DBGFIELD("TRAP2_TRAP4")        3, true, true,  3, 1, 10, 2,  0, 0}, // #821
  {DBGFIELD("SIGA_SIGP")          3, true, true,  3, 1, 10, 2,  0, 0}, // #822
  {DBGFIELD("SIE")                3, true, true,  3, 1, 10, 2,  0, 0}, // #823
  {DBGFIELD("LPP")                1, false, false, 60, 1,  1, 3,  0, 0}, // #824
  {DBGFIELD("ECPGA")              3, true, true,  3, 1,  9, 3,  0, 0}, // #825
  {DBGFIELD("ECCTR_EPCTR")        3, true, true,  3, 1,  9, 3,  0, 0}, // #826
  {DBGFIELD("LCCTL")              3, true, true,  3, 1, 10, 2,  0, 0}, // #827
  {DBGFIELD("LPCTL_LSCTL")        3, true, true,  3, 1, 10, 2,  0, 0}, // #828
  {DBGFIELD("QCTRI_QSI")          3, true, true,  3, 1, 10, 2,  0, 0}, // #829
  {DBGFIELD("SCCTR_SPCTR")        3, true, true,  3, 1, 10, 2,  0, 0}, // #830
  {DBGFIELD("CSCH_HSCH_RSCH_XSCH") 3, true, true,  3, 1, 10, 2,  0, 0}, // #831
  {DBGFIELD("MSCH_SSCH_STSCH_TSCH") 3, true, true,  3, 1, 10, 2,  0, 0}, // #832
  {DBGFIELD("RCHP")               3, true, true,  3, 1, 10, 2,  0, 0}, // #833
  {DBGFIELD("SCHM")               3, true, true,  3, 1, 10, 2,  0, 0}, // #834
  {DBGFIELD("STCPS_STCRW")        3, true, true,  3, 1, 10, 2,  0, 0}, // #835
  {DBGFIELD("TPI")                3, true, true,  3, 1, 10, 2,  0, 0}, // #836
  {DBGFIELD("SAL")                3, true, true,  3, 1, 10, 2,  0, 0}, // #837
  {DBGFIELD("KIMD_KLMD_KMAC")     3, true, true,  3, 1,  8, 4,  0, 0}, // #838
  {DBGFIELD("POPCNT")             1, false, false, 39, 1, 32, 4,  0, 0}, // #839
  {DBGFIELD("VFI")                1, false, false, 112, 1, 53, 3,  0, 0}, // #840
  {DBGFIELD("VFM")                1, false, false, 112, 1, 53, 3,  0, 0}, // #841
  {DBGFIELD("VCVB_VCVBG")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #842
  {DBGFIELD("AGF")                1, false, false, 39, 2, 36, 5,  1, 1}, // #843
  {DBGFIELD("SGF")                1, false, false, 39, 2, 36, 5,  1, 1}, // #844
  {DBGFIELD("KM_KMC_KMCTR_KMF_KMO") 3, true, true,  3, 1, 106, 5,  0, 0}, // #845
  {DBGFIELD("PCC_PPNO")           3, true, true,  3, 1,  8, 4,  0, 0}, // #846
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH") 1, false, false,  1, 1, 12, 3,  0, 0}, // #847
  {DBGFIELD("VN_VNC_VNO")         1, false, false, 115, 1, 29, 3,  0, 0}, // #848
  {DBGFIELD("VO")                 1, false, false, 115, 1, 29, 3,  0, 0}, // #849
  {DBGFIELD("VPOPCT")             1, false, false, 115, 1, 29, 3,  0, 0}, // #850
  {DBGFIELD("WFMDB")              1, false, false, 115, 1, 60, 3,  0, 0}, // #851
  {DBGFIELD("VFMA_VFMS")          1, false, false, 112, 1, 53, 3,  0, 0}, // #852
  {DBGFIELD("VFMADB_VFMSDB")      1, false, false, 112, 1, 53, 3,  0, 0}, // #853
  {DBGFIELD("WFMADB_WFMSDB")      1, false, false, 115, 1, 60, 3,  0, 0}, // #854
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB") 1, false, false, 115, 1, 28, 4,  0, 0}, // #855
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #856
  {DBGFIELD("LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, false, 39, 1, 29, 3,  0, 0}, // #857
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ") 1, false, false, 39, 2, 37, 4,  1, 1}, // #858
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ") 1, false, false, 66, 2,  1, 4,  0, 0}, // #859
  {DBGFIELD("ALSI_ASI")           1, false, false, 66, 2, 37, 4,  0, 0}, // #860
  {DBGFIELD("ALGF")               1, false, false, 39, 2, 19, 5,  1, 1}, // #861
  {DBGFIELD("PCC")                3, true, true,  3, 1,  8, 4,  0, 0}, // #862
  {DBGFIELD("CELFBR_CELGBR")      2, true, false, 134, 2, 118, 4,  0, 0}, // #863
  {DBGFIELD("MD_MEE")             1, false, false, 114, 2, 63, 4,  1, 1}, // #864
  {DBGFIELD("MDR_MEER")           1, false, false, 115, 1, 60, 3,  0, 0}, // #865
  {DBGFIELD("CFDTR")              2, true, false, 134, 2, 87, 5,  0, 0}, // #866
  {DBGFIELD("CFXTR")              2, true, false, 138, 2, 87, 5,  0, 0}, // #867
  {DBGFIELD("TDCDT_TDGDT")        1, false, false, 114, 2, 56, 4,  0, 0}, // #868
  {DBGFIELD("SCK")                3, true, true,  3, 1, 10, 2,  0, 0}, // #869
  {DBGFIELD("SCKPF")              3, true, true,  3, 1, 10, 2,  0, 0}, // #870
  {DBGFIELD("RISBG_RISBG32")      1, false, false, 39, 1,  1, 3,  0, 0}, // #871
}; // Z13ModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc Z14ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  16383, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("ADJDYNALLOC")        1, false, false, 39, 1,  1, 3,  0, 0}, // #1
  {DBGFIELD("CallBRCL_BRC_BRCAsm_BRCL_BRCLAsm") 1, false, false, 14, 1,  1, 3,  0, 0}, // #2
  {DBGFIELD("CallJG_J_JAsmE_JAsmH_JAsmHE_JAsmL_JAsmLE_JAsmLH_JAsmM_JAsmNE_JAsmNH_JAsmNHE_JAsmNL_JAsmNLE_JAsmNLH_JAsmNM_JAsmNO_JAsmNP_JAsmNZ_JAsmO_JAsmP_JAsmZ_JG_JGAsmE_JGAsmH_JGAsmHE_JGAsmL_JGAsmLE_JGAsmLH_JGAsmM_JGAsmNE_JGAsmNH_JGAsmNHE_JGAsmNL_JGAsmNLE_JGAsmNLH_JGAsmNM_JGAsmNO_JGAsmNP_JGAsmNZ_JGAsmO_JGAsmP_JGAsmZ") 1, false, false, 14, 1,  1, 3,  0, 0}, // #3
  {DBGFIELD("CallBCR_BC_BCAsm_BCR_BCRAsm") 1, false, false, 60, 1,  1, 3,  0, 0}, // #4
  {DBGFIELD("CallBR_B_BAsmE_BAsmH_BAsmHE_BAsmL_BAsmLE_BAsmLH_BAsmM_BAsmNE_BAsmNH_BAsmNHE_BAsmNL_BAsmNLE_BAsmNLH_BAsmNM_BAsmNO_BAsmNP_BAsmNZ_BAsmO_BAsmP_BAsmZ_BR_BRAsmE_BRAsmH_BRAsmHE_BRAsmL_BRAsmLE_BRAsmLH_BRAsmM_BRAsmNE_BRAsmNH_BRAsmNHE_BRAsmNL_BRAsmNLE_BRAsmNLH_BRAsmNM_BRAsmNO_BRAsmNP_BRAsmNZ_BRAsmO_BRAsmP_BRAsmZ") 1, false, false, 60, 1,  1, 3,  0, 0}, // #5
  {DBGFIELD("BI_BIAsmE_BIAsmH_BIAsmHE_BIAsmL_BIAsmLE_BIAsmLH_BIAsmM_BIAsmNE_BIAsmNH_BIAsmNHE_BIAsmNL_BIAsmNLE_BIAsmNLH_BIAsmNM_BIAsmNO_BIAsmNP_BIAsmNZ_BIAsmO_BIAsmP_BIAsmZ_BIC_BICAsm") 1, false, false, 66, 2,  1, 4,  0, 0}, // #6
  {DBGFIELD("BRCT_BRCTG")         1, false, true, 39, 1,  1, 3,  0, 0}, // #7
  {DBGFIELD("BRCTH")              3, true, true, 85, 2,  1, 4,  0, 0}, // #8
  {DBGFIELD("BCT_BCTG_BCTGR_BCTR") 3, true, true, 85, 2,  1, 4,  0, 0}, // #9
  {DBGFIELD("BRXH_BRXHG_BRXLE_BRXLG_BXH_BXHG_BXLE_BXLEG") 6, true, true, 87, 2,  1, 4,  0, 0}, // #10
  {DBGFIELD("CGIJ_CGIJAsm_CGIJAsmE_CGIJAsmH_CGIJAsmHE_CGIJAsmL_CGIJAsmLE_CGIJAsmLH_CGIJAsmNE_CGIJAsmNH_CGIJAsmNHE_CGIJAsmNL_CGIJAsmNLE_CGIJAsmNLH_CGRJ_CGRJAsm_CGRJAsmE_CGRJAsmH_CGRJAsmHE_CGRJAsmL_CGRJAsmLE_CGRJAsmLH_CGRJAsmNE_CGRJAsmNH_CGRJAsmNHE_CGRJAsmNL_CGRJAsmNLE_CGRJAsmNLH_CIJ_CIJAsm_CIJAsmE_CIJAsmH_CIJAsmHE_CIJAsmL_CIJAsmLE_CIJAsmLH_CIJAsmNE_CIJAsmNH_CIJAsmNHE_CIJAsmNL_CIJAsmNLE_CIJAsmNLH_CLGIJ_CLGIJAsm_CLGIJAsmE_CLGIJAsmH_CLGIJAsmHE_CLGIJAsmL_CLGIJAsmLE_CLGIJAsmLH_CLGIJAsmNE_CLGIJAsmNH_CLGIJAsmNHE_CLGIJAsmNL_CLGIJAsmNLE_CLGIJAsmNLH_CLGRJ_CLGRJAsm_CLGRJAsmE_CLGRJAsmH_CLGRJAsmHE_CLGRJAsmL_CLGRJAsmLE_CLGRJAsmLH_CLGRJAsmNE_CLGRJAsmNH_CLGRJAsmNHE_CLGRJAsmNL_CLGRJAsmNLE_CLGRJAsmNLH_CLIJ_CLIJAsm_CLIJAsmE_CLIJAsmH_CLIJAsmHE_CLIJAsmL_CLIJAsmLE_CLIJAsmLH_CLIJAsmNE_CLIJAsmNH_CLIJAsmNHE_CLIJAsmNL_CLIJAsmNLE_CLIJAsmNLH_CLRJ_CLRJAsm_CLRJAsmE_CLRJAsmH_CLRJAsmHE_CLRJAsmL_CLRJAsmLE_CLRJAsmLH_CLRJAsmNE_CLRJAsmNH_CLRJAsmNHE_CLRJAsmNL_CLRJAsmNLE_CLRJAsmNLH_CRJ_CRJAsm_CRJAsmE_CRJAsmH_CRJAsmHE_CRJAsmL_CRJAsmLE_CRJAsmLH_CRJAsmNE_CRJAsmNH_CRJAsmNHE_CRJAsmNL_CRJAsmNLE_CRJAsmNLH") 1, false, false, 60, 1,  1, 3,  0, 0}, // #11
  {DBGFIELD("CGIBCall_CGIBReturn_CGRBCall_CGRBReturn_CIBCall_CIBReturn_CLGIBCall_CLGIBReturn_CLGRBCall_CLGRBReturn_CLIBCall_CLIBReturn_CLRBCall_CLRBReturn_CRBCall_CRBReturn_CGIB_CGIBAsm_CGIBAsmE_CGIBAsmH_CGIBAsmHE_CGIBAsmL_CGIBAsmLE_CGIBAsmLH_CGIBAsmNE_CGIBAsmNH_CGIBAsmNHE_CGIBAsmNL_CGIBAsmNLE_CGIBAsmNLH_CGRB_CGRBAsm_CGRBAsmE_CGRBAsmH_CGRBAsmHE_CGRBAsmL_CGRBAsmLE_CGRBAsmLH_CGRBAsmNE_CGRBAsmNH_CGRBAsmNHE_CGRBAsmNL_CGRBAsmNLE_CGRBAsmNLH_CIB_CIBAsm_CIBAsmE_CIBAsmH_CIBAsmHE_CIBAsmL_CIBAsmLE_CIBAsmLH_CIBAsmNE_CIBAsmNH_CIBAsmNHE_CIBAsmNL_CIBAsmNLE_CIBAsmNLH_CLGIB_CLGIBAsm_CLGIBAsmE_CLGIBAsmH_CLGIBAsmHE_CLGIBAsmL_CLGIBAsmLE_CLGIBAsmLH_CLGIBAsmNE_CLGIBAsmNH_CLGIBAsmNHE_CLGIBAsmNL_CLGIBAsmNLE_CLGIBAsmNLH_CLGRB_CLGRBAsm_CLGRBAsmE_CLGRBAsmH_CLGRBAsmHE_CLGRBAsmL_CLGRBAsmLE_CLGRBAsmLH_CLGRBAsmNE_CLGRBAsmNH_CLGRBAsmNHE_CLGRBAsmNL_CLGRBAsmNLE_CLGRBAsmNLH_CLIB_CLIBAsm_CLIBAsmE_CLIBAsmH_CLIBAsmHE_CLIBAsmL_CLIBAsmLE_CLIBAsmLH_CLIBAsmNE_CLIBAsmNH_CLIBAsmNHE_CLIBAsmNL_CLIBAsmNLE_CLIBAsmNLH_CLRB_CLRBAsm_CLRBAsmE_CLRBAsmH_CLRBAsmHE_CLRBAsmL_CLRBAsmLE_CLRBAsmLH_CLRBAsmNE_CLRBAsmNH_CLRBAsmNHE_CLRBAsmNL_CLRBAsmNLE_CLRBAsmNLH_CRB_CRBAsm_CRBAsmE_CRBAsmH_CRBAsmHE_CRBAsmL_CRBAsmLE_CRBAsmLH_CRBAsmNE_CRBAsmNH_CRBAsmNHE_CRBAsmNL_CRBAsmNLE_CRBAsmNLH") 3, true, true, 61, 1,  1, 3,  0, 0}, // #12
  {DBGFIELD("CondTrap_Trap")      1, false, false, 14, 1,  1, 3,  0, 0}, // #13
  {DBGFIELD("CGIT_CGITAsm_CGITAsmE_CGITAsmH_CGITAsmHE_CGITAsmL_CGITAsmLE_CGITAsmLH_CGITAsmNE_CGITAsmNH_CGITAsmNHE_CGITAsmNL_CGITAsmNLE_CGITAsmNLH_CGRT_CGRTAsm_CGRTAsmE_CGRTAsmH_CGRTAsmHE_CGRTAsmL_CGRTAsmLE_CGRTAsmLH_CGRTAsmNE_CGRTAsmNH_CGRTAsmNHE_CGRTAsmNL_CGRTAsmNLE_CGRTAsmNLH_CIT_CITAsm_CITAsmE_CITAsmH_CITAsmHE_CITAsmL_CITAsmLE_CITAsmLH_CITAsmNE_CITAsmNH_CITAsmNHE_CITAsmNL_CITAsmNLE_CITAsmNLH_CRT_CRTAsm_CRTAsmE_CRTAsmH_CRTAsmHE_CRTAsmL_CRTAsmLE_CRTAsmLH_CRTAsmNE_CRTAsmNH_CRTAsmNHE_CRTAsmNL_CRTAsmNLE_CRTAsmNLH") 1, false, false, 60, 1,  1, 3,  0, 0}, // #14
  {DBGFIELD("CLGRT_CLGRTAsm_CLGRTAsmE_CLGRTAsmH_CLGRTAsmHE_CLGRTAsmL_CLGRTAsmLE_CLGRTAsmLH_CLGRTAsmNE_CLGRTAsmNH_CLGRTAsmNHE_CLGRTAsmNL_CLGRTAsmNLE_CLGRTAsmNLH_CLRT_CLRTAsm_CLRTAsmE_CLRTAsmH_CLRTAsmHE_CLRTAsmL_CLRTAsmLE_CLRTAsmLH_CLRTAsmNE_CLRTAsmNH_CLRTAsmNHE_CLRTAsmNL_CLRTAsmNLE_CLRTAsmNLH") 1, false, false, 60, 1,  1, 3,  0, 0}, // #15
  {DBGFIELD("CLFIT_CLFITAsm_CLFITAsmE_CLFITAsmH_CLFITAsmHE_CLFITAsmL_CLFITAsmLE_CLFITAsmLH_CLFITAsmNE_CLFITAsmNH_CLFITAsmNHE_CLFITAsmNL_CLFITAsmNLE_CLFITAsmNLH_CLGIT_CLGITAsm_CLGITAsmE_CLGITAsmH_CLGITAsmHE_CLGITAsmL_CLGITAsmLE_CLGITAsmLH_CLGITAsmNE_CLGITAsmNH_CLGITAsmNHE_CLGITAsmNL_CLGITAsmNLE_CLGITAsmNLH") 1, false, false, 60, 1,  1, 3,  0, 0}, // #16
  {DBGFIELD("CLGT_CLGTAsm_CLGTAsmE_CLGTAsmH_CLGTAsmHE_CLGTAsmL_CLGTAsmLE_CLGTAsmLH_CLGTAsmNE_CLGTAsmNH_CLGTAsmNHE_CLGTAsmNL_CLGTAsmNLE_CLGTAsmNLH_CLT_CLTAsm_CLTAsmE_CLTAsmH_CLTAsmHE_CLTAsmL_CLTAsmLE_CLTAsmLH_CLTAsmNE_CLTAsmNH_CLTAsmNHE_CLTAsmNL_CLTAsmNLE_CLTAsmNLH") 1, false, false, 66, 2,  1, 4,  0, 0}, // #17
  {DBGFIELD("BRAS")               3, true, true, 89, 2,  1, 4,  0, 0}, // #18
  {DBGFIELD("CallBRASL_BRASL")    3, true, true, 91, 2,  1, 4,  0, 0}, // #19
  {DBGFIELD("CallBASR_BAS_BASR")  3, true, true, 91, 2,  1, 4,  0, 0}, // #20
  {DBGFIELD("TLS_GDCALL_TLS_LDCALL") 3, true, true, 91, 2,  1, 4,  0, 0}, // #21
  {DBGFIELD("Return")             1, false, true, 60, 1,  1, 3,  0, 0}, // #22
  {DBGFIELD("CondReturn")         1, false, false, 60, 1,  1, 3,  0, 0}, // #23
  {DBGFIELD("MVGHI_MVHHI_MVHI")   1, false, false, 66, 2,  1, 4,  0, 0}, // #24
  {DBGFIELD("MVI_MVIY")           1, false, false, 66, 2,  1, 4,  0, 0}, // #25
  {DBGFIELD("MVC")                3, true, true, 93, 2,  1, 4,  0, 0}, // #26
  {DBGFIELD("MVCL_MVCLE_MVCLU")   3, true, true,  3, 1,  8, 4,  0, 0}, // #27
  {DBGFIELD("MVCRL")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #28
  {DBGFIELD("COPY_TO_REGCLASS_COPY") 1, false, false, 39, 1,  1, 3,  0, 0}, // #29
  {DBGFIELD("EXTRACT_SUBREG")     1, false, false, 39, 1,  1, 3,  0, 0}, // #30
  {DBGFIELD("INSERT_SUBREG")      1, false, false, 39, 1,  1, 3,  0, 0}, // #31
  {DBGFIELD("REG_SEQUENCE")       1, false, false, 39, 1,  1, 3,  0, 0}, // #32
  {DBGFIELD("LMux_L_LFH_LRL_LY")  1, false, false,  1, 1, 12, 3,  0, 0}, // #33
  {DBGFIELD("LCBB")               1, false, false,  1, 1, 139, 4,  0, 0}, // #34
  {DBGFIELD("LG_LGRL")            1, false, false,  1, 1, 12, 3,  0, 0}, // #35
  {DBGFIELD("L128")               1, false, false,  1, 1, 12, 3,  0, 0}, // #36
  {DBGFIELD("LLIHF_LLIHH_LLIHL")  1, false, false, 39, 1,  1, 3,  0, 0}, // #37
  {DBGFIELD("LLILF_LLILH_LLILL")  1, false, false, 39, 1,  1, 3,  0, 0}, // #38
  {DBGFIELD("LGFI_LGHI")          1, false, false, 39, 1,  1, 3,  0, 0}, // #39
  {DBGFIELD("LHIMux_LHI")         1, false, false, 39, 1,  1, 3,  0, 0}, // #40
  {DBGFIELD("LR")                 1, false, false, 39, 1,  1, 3,  0, 0}, // #41
  {DBGFIELD("LZRF_LZRG")          1, false, false,  1, 1, 12, 3,  0, 0}, // #42
  {DBGFIELD("LAT_LFHAT_LGAT")     1, false, false, 66, 2, 15, 4,  0, 0}, // #43
  {DBGFIELD("LT_LTG")             1, false, false, 39, 2, 19, 5,  0, 0}, // #44
  {DBGFIELD("LTGR_LTR")           1, false, false, 39, 1,  1, 3,  0, 0}, // #45
  {DBGFIELD("STG_STGRL")          1, false, false, 66, 2,  1, 4,  0, 0}, // #46
  {DBGFIELD("ST128")              1, false, false, 66, 2,  1, 4,  0, 0}, // #47
  {DBGFIELD("STMux_ST_STFH_STRL_STY") 1, false, false, 66, 2,  1, 4,  0, 0}, // #48
  {DBGFIELD("MVST")               3, true, true,  3, 1,  8, 4,  0, 0}, // #49
  {DBGFIELD("LOCRMux")            1, false, false, 39, 1, 29, 3,  0, 0}, // #50
  {DBGFIELD("LOCFHR_LOCFHRAsm_LOCFHRAsmE_LOCFHRAsmH_LOCFHRAsmHE_LOCFHRAsmL_LOCFHRAsmLE_LOCFHRAsmLH_LOCFHRAsmM_LOCFHRAsmNE_LOCFHRAsmNH_LOCFHRAsmNHE_LOCFHRAsmNL_LOCFHRAsmNLE_LOCFHRAsmNLH_LOCFHRAsmNM_LOCFHRAsmNO_LOCFHRAsmNP_LOCFHRAsmNZ_LOCFHRAsmO_LOCFHRAsmP_LOCFHRAsmZ_LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, false, 39, 1, 29, 3,  0, 0}, // #51
  {DBGFIELD("LOCHIMux_LOCGHI_LOCGHIAsm_LOCGHIAsmE_LOCGHIAsmH_LOCGHIAsmHE_LOCGHIAsmL_LOCGHIAsmLE_LOCGHIAsmLH_LOCGHIAsmM_LOCGHIAsmNE_LOCGHIAsmNH_LOCGHIAsmNHE_LOCGHIAsmNL_LOCGHIAsmNLE_LOCGHIAsmNLH_LOCGHIAsmNM_LOCGHIAsmNO_LOCGHIAsmNP_LOCGHIAsmNZ_LOCGHIAsmO_LOCGHIAsmP_LOCGHIAsmZ_LOCHHI_LOCHHIAsm_LOCHHIAsmE_LOCHHIAsmH_LOCHHIAsmHE_LOCHHIAsmL_LOCHHIAsmLE_LOCHHIAsmLH_LOCHHIAsmM_LOCHHIAsmNE_LOCHHIAsmNH_LOCHHIAsmNHE_LOCHHIAsmNL_LOCHHIAsmNLE_LOCHHIAsmNLH_LOCHHIAsmNM_LOCHHIAsmNO_LOCHHIAsmNP_LOCHHIAsmNZ_LOCHHIAsmO_LOCHHIAsmP_LOCHHIAsmZ_LOCHI_LOCHIAsm_LOCHIAsmE_LOCHIAsmH_LOCHIAsmHE_LOCHIAsmL_LOCHIAsmLE_LOCHIAsmLH_LOCHIAsmM_LOCHIAsmNE_LOCHIAsmNH_LOCHIAsmNHE_LOCHIAsmNL_LOCHIAsmNLE_LOCHIAsmNLH_LOCHIAsmNM_LOCHIAsmNO_LOCHIAsmNP_LOCHIAsmNZ_LOCHIAsmO_LOCHIAsmP_LOCHIAsmZ") 1, false, false, 39, 1, 29, 3,  0, 0}, // #52
  {DBGFIELD("LOCMux_LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCFH_LOCFHAsm_LOCFHAsmE_LOCFHAsmH_LOCFHAsmHE_LOCFHAsmL_LOCFHAsmLE_LOCFHAsmLH_LOCFHAsmM_LOCFHAsmNE_LOCFHAsmNH_LOCFHAsmNHE_LOCFHAsmNL_LOCFHAsmNLE_LOCFHAsmNLH_LOCFHAsmNM_LOCFHAsmNO_LOCFHAsmNP_LOCFHAsmNZ_LOCFHAsmO_LOCFHAsmP_LOCFHAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ") 1, false, false, 39, 2, 37, 4,  1, 1}, // #53
  {DBGFIELD("STOCMux_STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCFH_STOCFHAsm_STOCFHAsmE_STOCFHAsmH_STOCFHAsmHE_STOCFHAsmL_STOCFHAsmLE_STOCFHAsmLH_STOCFHAsmM_STOCFHAsmNE_STOCFHAsmNH_STOCFHAsmNHE_STOCFHAsmNL_STOCFHAsmNLE_STOCFHAsmNLH_STOCFHAsmNM_STOCFHAsmNO_STOCFHAsmNP_STOCFHAsmNZ_STOCFHAsmO_STOCFHAsmP_STOCFHAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ") 1, false, false, 66, 2,  1, 4,  0, 0}, // #54
  {DBGFIELD("SELRMux")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #55
  {DBGFIELD("SELFHR_SELFHRAsm_SELFHRAsmE_SELFHRAsmH_SELFHRAsmHE_SELFHRAsmL_SELFHRAsmLE_SELFHRAsmLH_SELFHRAsmM_SELFHRAsmNE_SELFHRAsmNH_SELFHRAsmNHE_SELFHRAsmNL_SELFHRAsmNLE_SELFHRAsmNLH_SELFHRAsmNM_SELFHRAsmNO_SELFHRAsmNP_SELFHRAsmNZ_SELFHRAsmO_SELFHRAsmP_SELFHRAsmZ_SELGR_SELGRAsm_SELGRAsmE_SELGRAsmH_SELGRAsmHE_SELGRAsmL_SELGRAsmLE_SELGRAsmLH_SELGRAsmM_SELGRAsmNE_SELGRAsmNH_SELGRAsmNHE_SELGRAsmNL_SELGRAsmNLE_SELGRAsmNLH_SELGRAsmNM_SELGRAsmNO_SELGRAsmNP_SELGRAsmNZ_SELGRAsmO_SELGRAsmP_SELGRAsmZ_SELR_SELRAsm_SELRAsmE_SELRAsmH_SELRAsmHE_SELRAsmL_SELRAsmLE_SELRAsmLH_SELRAsmM_SELRAsmNE_SELRAsmNH_SELRAsmNHE_SELRAsmNL_SELRAsmNLE_SELRAsmNLH_SELRAsmNM_SELRAsmNO_SELRAsmNP_SELRAsmNZ_SELRAsmO_SELRAsmP_SELRAsmZ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #56
  {DBGFIELD("LBR_LGR_LHR")        1, false, false, 39, 1,  1, 3,  0, 0}, // #57
  {DBGFIELD("LGBR_LGFR_LGHR")     1, false, false, 39, 1,  1, 3,  0, 0}, // #58
  {DBGFIELD("LTGF")               1, false, false, 39, 2, 19, 5,  0, 0}, // #59
  {DBGFIELD("LTGFR")              1, false, false, 39, 1,  1, 3,  0, 0}, // #60
  {DBGFIELD("LBMux_LB_LBH")       1, false, false, 39, 2, 15, 4,  0, 0}, // #61
  {DBGFIELD("LH_LHY")             1, false, false, 39, 2, 15, 4,  0, 0}, // #62
  {DBGFIELD("LHMux_LHH_LHRL")     1, false, false, 39, 2, 15, 4,  0, 0}, // #63
  {DBGFIELD("LGB_LGF_LGH")        1, false, false, 39, 2, 15, 4,  0, 0}, // #64
  {DBGFIELD("LGFRL_LGHRL")        1, false, false, 39, 2, 15, 4,  0, 0}, // #65
  {DBGFIELD("LLCRMux_LLCR")       1, false, false, 39, 1,  1, 3,  0, 0}, // #66
  {DBGFIELD("LLHRMux_LLHR")       1, false, false, 39, 1,  1, 3,  0, 0}, // #67
  {DBGFIELD("LLGCR_LLGFR_LLGHR_LLGTR") 1, false, false, 39, 1,  1, 3,  0, 0}, // #68
  {DBGFIELD("LLCMux_LLC")         1, false, false,  1, 1, 12, 3,  0, 0}, // #69
  {DBGFIELD("LLHMux_LLH")         1, false, false,  1, 1, 12, 3,  0, 0}, // #70
  {DBGFIELD("LLCH_LLHH")          1, false, false, 39, 2, 15, 4,  0, 0}, // #71
  {DBGFIELD("LLHRL")              1, false, false,  1, 1, 12, 3,  0, 0}, // #72
  {DBGFIELD("LLGC_LLGF_LLGFRL_LLGH_LLGHRL_LLGT") 1, false, false,  1, 1, 12, 3,  0, 0}, // #73
  {DBGFIELD("LLZRGF")             1, false, false,  1, 1, 12, 3,  0, 0}, // #74
  {DBGFIELD("LLGFAT_LLGTAT")      1, false, false, 66, 2, 15, 4,  0, 0}, // #75
  {DBGFIELD("STCMux_STC_STCH_STCY") 1, false, false, 66, 2,  1, 4,  0, 0}, // #76
  {DBGFIELD("STHMux_STH_STHH_STHRL_STHY") 1, false, false, 66, 2,  1, 4,  0, 0}, // #77
  {DBGFIELD("STCM_STCMH_STCMY")   1, false, false, 66, 2,  1, 4,  0, 0}, // #78
  {DBGFIELD("LM_LMG_LMH_LMY")     3, true, true, 16, 1, 24, 4,  0, 0}, // #79
  {DBGFIELD("LMD")                3, true, true,  3, 1,  9, 3,  0, 0}, // #80
  {DBGFIELD("STM_STMG_STMH_STMY") 3, true, true, 95, 2,  1, 4,  0, 0}, // #81
  {DBGFIELD("LRVGR_LRVR")         1, false, false, 39, 1,  1, 3,  0, 0}, // #82
  {DBGFIELD("LRV_LRVG_LRVH")      1, false, false, 39, 2, 15, 4,  0, 0}, // #83
  {DBGFIELD("STRV_STRVG_STRVH")   1, false, false, 66, 2,  1, 4,  0, 0}, // #84
  {DBGFIELD("MVCIN")              3, true, true,  3, 1, 10, 2,  0, 0}, // #85
  {DBGFIELD("LA_LARL_LAY")        1, false, false, 39, 1,  1, 3,  0, 0}, // #86
  {DBGFIELD("GOT")                1, false, false, 39, 1,  1, 3,  0, 0}, // #87
  {DBGFIELD("LPGR_LPR")           1, false, false, 39, 1,  1, 4,  0, 0}, // #88
  {DBGFIELD("LNGFR_LPGFR")        2, true, false, 36, 1, 28, 4,  0, 0}, // #89
  {DBGFIELD("LNGR_LNR")           1, false, false, 39, 1,  1, 4,  0, 0}, // #90
  {DBGFIELD("LCGR_LCR")           1, false, false, 39, 1,  1, 3,  0, 0}, // #91
  {DBGFIELD("LCGFR")              2, true, false, 36, 1, 28, 4,  0, 0}, // #92
  {DBGFIELD("IC_ICY")             1, false, false, 39, 2, 15, 4,  1, 1}, // #93
  {DBGFIELD("IC32_IC32Y")         1, false, false, 39, 2, 15, 4,  1, 1}, // #94
  {DBGFIELD("ICM_ICMH_ICMY")      1, false, false, 39, 2, 19, 5,  1, 1}, // #95
  {DBGFIELD("IIFMux_IIHMux_IILMux") 1, false, false, 39, 1,  1, 3,  0, 0}, // #96
  {DBGFIELD("IIHF64_IIHF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #97
  {DBGFIELD("IIHH64_IIHH")        1, false, false, 39, 1,  1, 3,  0, 0}, // #98
  {DBGFIELD("IIHL64_IIHL")        1, false, false, 39, 1,  1, 3,  0, 0}, // #99
  {DBGFIELD("IILF64_IILF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #100
  {DBGFIELD("IILH64_IILH")        1, false, false, 39, 1,  1, 3,  0, 0}, // #101
  {DBGFIELD("IILL64_IILL")        1, false, false, 39, 1,  1, 3,  0, 0}, // #102
  {DBGFIELD("A_AY")               1, false, false, 39, 2, 19, 5,  1, 1}, // #103
  {DBGFIELD("AH_AHY")             1, false, false, 39, 2, 36, 5,  1, 1}, // #104
  {DBGFIELD("AIH")                1, false, false, 39, 1,  1, 3,  0, 0}, // #105
  {DBGFIELD("AFIMux_AFI")         1, false, false, 39, 1,  1, 3,  0, 0}, // #106
  {DBGFIELD("AG")                 1, false, false, 39, 2, 19, 5,  1, 1}, // #107
  {DBGFIELD("AGFI")               1, false, false, 39, 1,  1, 3,  0, 0}, // #108
  {DBGFIELD("AGHI_AGHIK")         1, false, false, 39, 1,  1, 3,  0, 0}, // #109
  {DBGFIELD("AGR_AGRK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #110
  {DBGFIELD("AHI_AHIK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #111
  {DBGFIELD("AHIMux_AHIMuxK")     1, false, false, 39, 1,  1, 3,  0, 0}, // #112
  {DBGFIELD("AL_ALY")             1, false, false, 39, 2, 19, 5,  1, 1}, // #113
  {DBGFIELD("ALFI_ALHSIK")        1, false, false, 39, 1,  1, 3,  0, 0}, // #114
  {DBGFIELD("ALG_ALGF")           1, false, false, 39, 2, 19, 5,  1, 1}, // #115
  {DBGFIELD("ALGHSIK")            1, false, false, 39, 1,  1, 3,  0, 0}, // #116
  {DBGFIELD("ALGFI_ALGFR")        1, false, false, 39, 1,  1, 3,  0, 0}, // #117
  {DBGFIELD("ALGR_ALGRK")         1, false, false, 39, 1,  1, 3,  0, 0}, // #118
  {DBGFIELD("ALR_ALRK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #119
  {DBGFIELD("AR_ARK")             1, false, false, 39, 1,  1, 3,  0, 0}, // #120
  {DBGFIELD("AHHHR_ALHHHR")       1, false, false, 39, 1,  1, 3,  0, 0}, // #121
  {DBGFIELD("AHHLR_ALHHLR")       1, false, false, 39, 1, 28, 4,  0, 0}, // #122
  {DBGFIELD("ALSIH_ALSIHN")       1, false, false, 39, 1,  1, 3,  0, 0}, // #123
  {DBGFIELD("AGSI_ALGSI_ALSI_ASI") 1, false, false, 66, 2, 37, 4,  0, 0}, // #124
  {DBGFIELD("ALC_ALCG")           3, true, true, 39, 2, 36, 5,  1, 1}, // #125
  {DBGFIELD("ALCGR_ALCR")         3, true, true, 39, 1, 28, 4,  0, 0}, // #126
  {DBGFIELD("AGF_AGH")            1, false, false, 39, 2, 36, 5,  1, 1}, // #127
  {DBGFIELD("AGFR")               1, false, false, 39, 1, 28, 4,  0, 0}, // #128
  {DBGFIELD("S_SG_SY")            1, false, false, 39, 2, 19, 5,  1, 1}, // #129
  {DBGFIELD("SH_SHY")             1, false, false, 39, 2, 36, 5,  1, 1}, // #130
  {DBGFIELD("SGR_SGRK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #131
  {DBGFIELD("SLFI")               1, false, false, 39, 1,  1, 3,  0, 0}, // #132
  {DBGFIELD("SL_SLG_SLGF_SLY")    1, false, false, 39, 2, 19, 5,  1, 1}, // #133
  {DBGFIELD("SLGFI_SLGFR")        1, false, false, 39, 1,  1, 3,  0, 0}, // #134
  {DBGFIELD("SLGR_SLGRK")         1, false, false, 39, 1,  1, 3,  0, 0}, // #135
  {DBGFIELD("SLR_SLRK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #136
  {DBGFIELD("SR_SRK")             1, false, false, 39, 1,  1, 3,  0, 0}, // #137
  {DBGFIELD("SHHHR_SLHHHR")       1, false, false, 39, 1,  1, 3,  0, 0}, // #138
  {DBGFIELD("SHHLR_SLHHLR")       1, false, false, 39, 1, 28, 4,  0, 0}, // #139
  {DBGFIELD("SLB_SLBG")           3, true, true, 39, 2, 36, 5,  1, 1}, // #140
  {DBGFIELD("SLBGR_SLBR")         3, true, true, 39, 1, 28, 4,  0, 0}, // #141
  {DBGFIELD("SGF_SGH")            1, false, false, 39, 2, 36, 5,  1, 1}, // #142
  {DBGFIELD("SGFR")               1, false, false, 39, 1, 28, 4,  0, 0}, // #143
  {DBGFIELD("N_NG_NY")            1, false, false, 39, 2, 19, 5,  1, 1}, // #144
  {DBGFIELD("NGR_NGRK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #145
  {DBGFIELD("NIFMux_NIHMux_NILMux") 1, false, false, 39, 1,  1, 3,  0, 0}, // #146
  {DBGFIELD("NI_NIY")             1, false, false, 66, 2, 37, 4,  0, 0}, // #147
  {DBGFIELD("NIHF64_NIHF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #148
  {DBGFIELD("NIHH64_NIHH")        1, false, false, 39, 1,  1, 3,  0, 0}, // #149
  {DBGFIELD("NIHL64_NIHL")        1, false, false, 39, 1,  1, 3,  0, 0}, // #150
  {DBGFIELD("NILF64_NILF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #151
  {DBGFIELD("NILH64_NILH")        1, false, false, 39, 1,  1, 3,  0, 0}, // #152
  {DBGFIELD("NILL64_NILL")        1, false, false, 39, 1,  1, 3,  0, 0}, // #153
  {DBGFIELD("NR_NRK")             1, false, false, 39, 1,  1, 3,  0, 0}, // #154
  {DBGFIELD("NC")                 2, true, false, 97, 2, 144, 4,  0, 0}, // #155
  {DBGFIELD("O_OG_OY")            1, false, false, 39, 2, 19, 5,  1, 1}, // #156
  {DBGFIELD("OGR_OGRK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #157
  {DBGFIELD("OI_OIY")             1, false, false, 66, 2, 37, 4,  0, 0}, // #158
  {DBGFIELD("OIFMux_OIHMux_OILMux") 1, false, false, 39, 1,  1, 3,  0, 0}, // #159
  {DBGFIELD("OIHF64_OIHF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #160
  {DBGFIELD("OIHH64_OIHH")        1, false, false, 39, 1,  1, 3,  0, 0}, // #161
  {DBGFIELD("OIHL64_OIHL")        1, false, false, 39, 1,  1, 3,  0, 0}, // #162
  {DBGFIELD("OILF64_OILF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #163
  {DBGFIELD("OILH64_OILH")        1, false, false, 39, 1,  1, 3,  0, 0}, // #164
  {DBGFIELD("OILL64_OILL")        1, false, false, 39, 1,  1, 3,  0, 0}, // #165
  {DBGFIELD("OR_ORK")             1, false, false, 39, 1,  1, 3,  0, 0}, // #166
  {DBGFIELD("OC")                 2, true, false, 97, 2, 144, 4,  0, 0}, // #167
  {DBGFIELD("X_XG_XY")            1, false, false, 39, 2, 19, 5,  1, 1}, // #168
  {DBGFIELD("XI_XIY")             1, false, false, 66, 2, 37, 4,  0, 0}, // #169
  {DBGFIELD("XIFMux")             1, false, false, 39, 1,  1, 3,  0, 0}, // #170
  {DBGFIELD("XGR_XGRK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #171
  {DBGFIELD("XIHF64_XIHF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #172
  {DBGFIELD("XILF64_XILF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #173
  {DBGFIELD("XR_XRK")             1, false, false, 39, 1,  1, 3,  0, 0}, // #174
  {DBGFIELD("XC")                 2, true, false, 97, 2, 144, 4,  0, 0}, // #175
  {DBGFIELD("NCGRK_NCRK")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #176
  {DBGFIELD("OCGRK_OCRK")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #177
  {DBGFIELD("NNGRK_NNRK")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #178
  {DBGFIELD("NOGRK_NORK")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #179
  {DBGFIELD("NXGRK_NXRK")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #180
  {DBGFIELD("MS_MSGF_MSY")        1, false, false, 39, 2, 41, 4,  1, 1}, // #181
  {DBGFIELD("MSFI_MSR")           1, false, false, 39, 1, 15, 3,  0, 0}, // #182
  {DBGFIELD("MSG")                1, false, false, 39, 2, 63, 4,  1, 1}, // #183
  {DBGFIELD("MSGR")               1, false, false, 39, 1, 60, 3,  0, 0}, // #184
  {DBGFIELD("MSGFI_MSGFR")        1, false, false, 39, 1, 15, 3,  0, 0}, // #185
  {DBGFIELD("MLG")                3, true, true, 36, 2, 49, 4,  1, 1}, // #186
  {DBGFIELD("MLGR")               3, true, true, 36, 1, 53, 3,  0, 0}, // #187
  {DBGFIELD("MGHI")               1, false, false, 39, 1, 12, 3,  0, 0}, // #188
  {DBGFIELD("MHI")                1, false, false, 39, 1, 12, 3,  0, 0}, // #189
  {DBGFIELD("MH_MHY")             1, false, false, 39, 2, 118, 4,  1, 1}, // #190
  {DBGFIELD("MLR_MR")             3, true, true, 36, 1, 37, 3,  0, 0}, // #191
  {DBGFIELD("M_MFY_ML")           3, true, true, 36, 2, 45, 4,  1, 1}, // #192
  {DBGFIELD("MGH")                1, false, false, 39, 2, 118, 4,  1, 1}, // #193
  {DBGFIELD("MG")                 3, true, true, 36, 2, 49, 4,  1, 1}, // #194
  {DBGFIELD("MGRK")               3, true, true, 36, 1, 53, 3,  0, 0}, // #195
  {DBGFIELD("MSC")                1, false, false, 39, 2, 152, 5,  1, 1}, // #196
  {DBGFIELD("MSGC")               1, false, false, 39, 2, 81, 5,  1, 1}, // #197
  {DBGFIELD("MSRKC")              1, false, false, 39, 1, 36, 4,  0, 0}, // #198
  {DBGFIELD("MSGRKC")             1, false, false, 39, 1, 148, 4,  0, 0}, // #199
  {DBGFIELD("DR")                 3, true, true, 42, 1, 92, 3,  0, 0}, // #200
  {DBGFIELD("D")                  6, true, true, 48, 2, 67, 4,  1, 1}, // #201
  {DBGFIELD("DSGFR_DSGR")         3, true, true, 36, 1, 67, 3,  0, 0}, // #202
  {DBGFIELD("DSG_DSGF")           6, true, true, 36, 2, 67, 4,  1, 1}, // #203
  {DBGFIELD("DLR")                3, true, true, 42, 1, 92, 3,  0, 0}, // #204
  {DBGFIELD("DLGR")               3, true, true, 42, 1, 67, 3,  0, 0}, // #205
  {DBGFIELD("DL_DLG")             6, true, true, 48, 2, 67, 4,  1, 1}, // #206
  {DBGFIELD("SLL_SLLG_SLLK")      1, false, false, 39, 1,  1, 3,  0, 0}, // #207
  {DBGFIELD("SRL_SRLG_SRLK")      1, false, false, 39, 1,  1, 3,  0, 0}, // #208
  {DBGFIELD("SRA_SRAG_SRAK")      1, false, false, 39, 1,  1, 3,  0, 0}, // #209
  {DBGFIELD("SLA_SLAG_SLAK")      1, false, false, 39, 1,  1, 3,  0, 0}, // #210
  {DBGFIELD("SLDA_SLDL_SRDA_SRDL") 6, true, true, 48, 2, 76, 5,  0, 0}, // #211
  {DBGFIELD("RLL_RLLG")           1, false, false, 39, 2, 37, 4,  0, 0}, // #212
  {DBGFIELD("RISBG_RISBG32_RISBGN") 1, false, false, 39, 1,  1, 3,  0, 0}, // #213
  {DBGFIELD("RISBHH_RISBHL_RISBHG") 1, false, false, 39, 1,  1, 3,  0, 0}, // #214
  {DBGFIELD("RISBLH_RISBLL_RISBLG") 1, false, false, 39, 1,  1, 3,  0, 0}, // #215
  {DBGFIELD("RISBMux")            1, false, false, 39, 1,  1, 3,  0, 0}, // #216
  {DBGFIELD("RNSBG_ROSBG_RXSBG")  2, true, false, 36, 1, 28, 4,  0, 0}, // #217
  {DBGFIELD("CMux_C_CG_CY")       1, false, false, 66, 2, 15, 4,  1, 1}, // #218
  {DBGFIELD("CRL")                1, false, false, 66, 2, 15, 4,  0, 0}, // #219
  {DBGFIELD("CFIMux_CHIMux_CFI_CHI") 1, false, false, 60, 1,  1, 3,  0, 0}, // #220
  {DBGFIELD("CGFI_CGHI")          1, false, false, 60, 1,  1, 3,  0, 0}, // #221
  {DBGFIELD("CGHSI_CGRL")         1, false, false, 66, 2, 15, 4,  0, 0}, // #222
  {DBGFIELD("CGR_CR")             1, false, false, 60, 1,  1, 3,  0, 0}, // #223
  {DBGFIELD("CIH")                1, false, false, 60, 1,  1, 3,  0, 0}, // #224
  {DBGFIELD("CHF")                1, false, false, 66, 2, 15, 4,  1, 1}, // #225
  {DBGFIELD("CHSI")               1, false, false, 66, 2, 15, 4,  0, 0}, // #226
  {DBGFIELD("CLMux_CL_CLY")       1, false, false, 66, 2, 15, 4,  1, 1}, // #227
  {DBGFIELD("CLFHSI")             1, false, false, 66, 2, 15, 4,  0, 0}, // #228
  {DBGFIELD("CLFIMux_CLFI")       1, false, false, 60, 1,  1, 3,  0, 0}, // #229
  {DBGFIELD("CLG")                1, false, false, 66, 2, 15, 4,  1, 1}, // #230
  {DBGFIELD("CLGHRL_CLGHSI")      1, false, false, 66, 2, 15, 4,  0, 0}, // #231
  {DBGFIELD("CLGF")               1, false, false, 66, 2, 15, 4,  1, 1}, // #232
  {DBGFIELD("CLGFRL")             1, false, false, 66, 2, 15, 4,  0, 0}, // #233
  {DBGFIELD("CLGFI_CLGFR")        1, false, false, 60, 1,  1, 3,  0, 0}, // #234
  {DBGFIELD("CLGR")               1, false, false, 60, 1,  1, 3,  0, 0}, // #235
  {DBGFIELD("CLGRL")              1, false, false, 66, 2, 15, 4,  0, 0}, // #236
  {DBGFIELD("CLHF")               1, false, false, 66, 2, 15, 4,  1, 1}, // #237
  {DBGFIELD("CLHHSI_CLHRL")       1, false, false, 66, 2, 15, 4,  0, 0}, // #238
  {DBGFIELD("CLIH")               1, false, false, 60, 1,  1, 3,  0, 0}, // #239
  {DBGFIELD("CLI_CLIY")           1, false, false, 66, 2, 15, 4,  0, 0}, // #240
  {DBGFIELD("CLR")                1, false, false, 60, 1,  1, 3,  0, 0}, // #241
  {DBGFIELD("CLRL")               1, false, false, 66, 2, 15, 4,  0, 0}, // #242
  {DBGFIELD("CHHR_CLHHR")         1, false, false, 60, 1,  1, 3,  0, 0}, // #243
  {DBGFIELD("CHLR_CLHLR")         1, false, false, 60, 1, 29, 3,  0, 0}, // #244
  {DBGFIELD("CH_CHY")             1, false, false, 66, 2, 37, 4,  1, 1}, // #245
  {DBGFIELD("CHRL")               1, false, false, 66, 2, 37, 4,  0, 0}, // #246
  {DBGFIELD("CGH")                1, false, false, 66, 2, 37, 4,  1, 1}, // #247
  {DBGFIELD("CGHRL")              1, false, false, 66, 2, 37, 4,  0, 0}, // #248
  {DBGFIELD("CHHSI")              2, true, false, 99, 3, 157, 5,  0, 0}, // #249
  {DBGFIELD("CGF")                1, false, false, 66, 2, 37, 4,  1, 1}, // #250
  {DBGFIELD("CGFRL")              1, false, false, 66, 2, 37, 4,  0, 0}, // #251
  {DBGFIELD("CGFR")               1, false, false, 60, 1, 29, 3,  0, 0}, // #252
  {DBGFIELD("CLC")                2, true, false, 97, 2, 37, 4,  0, 0}, // #253
  {DBGFIELD("CLCL_CLCLE_CLCLU")   3, true, true,  3, 1,  8, 4,  0, 0}, // #254
  {DBGFIELD("CLST")               3, true, true,  3, 1,  8, 4,  0, 0}, // #255
  {DBGFIELD("TM_TMY")             1, false, false, 66, 2, 15, 4,  0, 0}, // #256
  {DBGFIELD("TMHMux_TMLMux")      1, false, false, 60, 1,  1, 3,  0, 0}, // #257
  {DBGFIELD("TMHH64_TMHH")        1, false, false, 60, 1,  1, 3,  0, 0}, // #258
  {DBGFIELD("TMHL64_TMHL")        1, false, false, 60, 1,  1, 3,  0, 0}, // #259
  {DBGFIELD("TMLH64_TMLH")        1, false, false, 60, 1,  1, 3,  0, 0}, // #260
  {DBGFIELD("TMLL64_TMLL")        1, false, false, 60, 1,  1, 3,  0, 0}, // #261
  {DBGFIELD("CLM_CLMH_CLMY")      1, false, false, 66, 2, 37, 4,  1, 1}, // #262
  {DBGFIELD("PFD_PFDRL")          1, false, false,  1, 1,  1, 3,  0, 0}, // #263
  {DBGFIELD("BPP")                1, false, false, 60, 1,  1, 3,  0, 0}, // #264
  {DBGFIELD("BPRP")               1, false, true, 60, 1,  1, 2,  0, 0}, // #265
  {DBGFIELD("NIAI")               1, false, false, 60, 1,  1, 3,  0, 0}, // #266
  {DBGFIELD("Serialize")          1, false, true, 60, 1,  1, 3,  0, 0}, // #267
  {DBGFIELD("LAA_LAAG")           1, false, false, 66, 2, 36, 5,  0, 0}, // #268
  {DBGFIELD("LAAL_LAALG")         1, false, false, 66, 2, 36, 5,  0, 0}, // #269
  {DBGFIELD("LAN_LANG")           1, false, false, 66, 2, 36, 5,  0, 0}, // #270
  {DBGFIELD("LAO_LAOG")           1, false, false, 66, 2, 36, 5,  0, 0}, // #271
  {DBGFIELD("LAX_LAXG")           1, false, false, 66, 2, 36, 5,  0, 0}, // #272
  {DBGFIELD("TS")                 1, false, true, 66, 2, 37, 4,  0, 0}, // #273
  {DBGFIELD("CS_CSG_CSY")         3, true, true, 99, 3, 162, 6,  0, 0}, // #274
  {DBGFIELD("CDS_CDSY")           6, true, true, 102, 3, 168, 6,  0, 0}, // #275
  {DBGFIELD("CDSG")               9, true, true, 105, 3, 174, 6,  0, 0}, // #276
  {DBGFIELD("CSST")               3, true, true,  3, 1, 10, 2,  0, 0}, // #277
  {DBGFIELD("PLO")                3, true, true,  3, 1, 10, 2,  0, 0}, // #278
  {DBGFIELD("LPQ")                3, true, true,  8, 1, 53, 3,  0, 0}, // #279
  {DBGFIELD("STPQ")               3, true, true, 70, 2,  1, 4,  0, 0}, // #280
  {DBGFIELD("LPD_LPDG")           3, true, true,  8, 1, 19, 4,  0, 0}, // #281
  {DBGFIELD("TR")                 3, true, true, 16, 1,  1, 3,  0, 0}, // #282
  {DBGFIELD("TRT")                6, true, true, 108, 2, 86, 6,  0, 0}, // #283
  {DBGFIELD("TRTR")               3, true, true,  3, 1,  8, 4,  0, 0}, // #284
  {DBGFIELD("TRE")                3, true, true,  3, 1,  9, 3,  0, 0}, // #285
  {DBGFIELD("TRTE_TRTEOpt_TRTRE_TRTREOpt") 3, true, true,  3, 1,  8, 4,  0, 0}, // #286
  {DBGFIELD("TROO_TROOOpt_TROT_TROTOpt_TRTO_TRTOOpt_TRTT_TRTTOpt") 3, true, true,  3, 1,  8, 4,  0, 0}, // #287
  {DBGFIELD("CU12_CU12Opt_CU14_CU14Opt_CU21_CU21Opt_CU24_CU24Opt_CU41_CU42") 3, true, true,  3, 1,  8, 4,  0, 0}, // #288
  {DBGFIELD("CUTFU_CUTFUOpt_CUUTF_CUUTFOpt") 3, true, true,  3, 1,  8, 4,  0, 0}, // #289
  {DBGFIELD("KM_KMA_KMC_KMCTR_KMF_KMO") 3, true, true,  3, 1, 106, 5,  0, 0}, // #290
  {DBGFIELD("KDSA_KIMD_KLMD_KMAC") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #291
  {DBGFIELD("PCC_PPNO_PRNO")      3, true, true,  3, 1,  8, 4,  0, 0}, // #292
  {DBGFIELD("LGG")                1, false, false,  1, 1, 12, 3,  0, 0}, // #293
  {DBGFIELD("LLGFSG")             1, false, false,  1, 1, 12, 3,  0, 0}, // #294
  {DBGFIELD("LGSC_STGSC")         3, true, true,  3, 1, 10, 2,  0, 0}, // #295
  {DBGFIELD("CVBG")               6, true, true, 110, 3, 71, 5,  1, 1}, // #296
  {DBGFIELD("CVB_CVBY")           6, true, true, 113, 3, 71, 5,  1, 1}, // #297
  {DBGFIELD("CVDG")               9, true, true, 116, 3,  1, 5,  0, 0}, // #298
  {DBGFIELD("CVD_CVDY")           6, true, true, 119, 3,  1, 5,  0, 0}, // #299
  {DBGFIELD("MVN_MVO_MVZ")        3, true, true, 16, 1,  1, 3,  0, 0}, // #300
  {DBGFIELD("PACK_PKA_PKU")       3, true, true, 16, 1,  1, 3,  0, 0}, // #301
  {DBGFIELD("UNPKA_UNPKU")        3, true, true, 16, 1, 49, 3,  0, 0}, // #302
  {DBGFIELD("UNPK")               2, true, false, 97, 2,  1, 4,  0, 0}, // #303
  {DBGFIELD("AP_SP_ZAP")          6, true, true, 122, 3, 180, 5,  0, 0}, // #304
  {DBGFIELD("MP")                 6, true, true, 125, 3,  1, 5,  0, 0}, // #305
  {DBGFIELD("DP")                 6, true, true, 125, 3,  1, 5,  0, 0}, // #306
  {DBGFIELD("SRP")                9, true, true, 110, 3, 97, 5,  0, 0}, // #307
  {DBGFIELD("CP")                 3, true, true, 128, 2, 185, 5,  0, 0}, // #308
  {DBGFIELD("TP")                 2, true, false, 114, 2, 144, 4,  0, 0}, // #309
  {DBGFIELD("ED_EDMK")            3, true, true,  3, 1, 10, 2,  0, 0}, // #310
  {DBGFIELD("CPYA_EAR_SAR")       1, false, false,  1, 1, 33, 3,  0, 0}, // #311
  {DBGFIELD("LAE_LAEY")           2, true, false, 39, 2, 15, 4,  0, 0}, // #312
  {DBGFIELD("LAM_LAMY")           3, true, true, 16, 1, 127, 4,  0, 0}, // #313
  {DBGFIELD("STAM_STAMY")         6, true, true, 130, 2,  1, 4,  0, 0}, // #314
  {DBGFIELD("IPM")                1, false, true, 39, 1, 33, 3,  0, 0}, // #315
  {DBGFIELD("SPM")                1, false, true,  1, 1, 33, 3,  0, 0}, // #316
  {DBGFIELD("BAL_BALR")           3, true, true, 91, 2,  1, 4,  0, 0}, // #317
  {DBGFIELD("TAM")                1, false, false, 60, 1,  1, 3,  0, 0}, // #318
  {DBGFIELD("SAM24_SAM31_SAM64")  1, false, true, 60, 1,  1, 3,  0, 0}, // #319
  {DBGFIELD("BSM")                3, true, true, 85, 2,  1, 4,  0, 0}, // #320
  {DBGFIELD("BASSM")              3, true, true, 91, 2,  1, 4,  0, 0}, // #321
  {DBGFIELD("TBEGIN_TBEGINC")     6, true, true, 132, 2, 41, 4,  0, 0}, // #322
  {DBGFIELD("TEND")               3, true, true, 60, 1,  1, 3,  0, 0}, // #323
  {DBGFIELD("TABORT")             3, true, true,  3, 1, 10, 2,  0, 0}, // #324
  {DBGFIELD("ETND")               1, false, false, 39, 1,  1, 3,  0, 0}, // #325
  {DBGFIELD("NTSTG")              1, false, false, 66, 2,  1, 4,  0, 0}, // #326
  {DBGFIELD("PPA")                3, true, true, 60, 1,  1, 3,  0, 0}, // #327
  {DBGFIELD("FLOGR")              3, true, true, 36, 1, 19, 4,  0, 0}, // #328
  {DBGFIELD("POPCNT_POPCNTOpt")   16383, false, false,  0, 0,  0, 0,  0, 0}, // #329
  {DBGFIELD("SRST_SRSTU")         3, true, true,  3, 1,  8, 4,  0, 0}, // #330
  {DBGFIELD("CUSE")               3, true, true,  3, 1,  8, 4,  0, 0}, // #331
  {DBGFIELD("CFC")                3, true, true,  3, 1, 106, 5,  0, 0}, // #332
  {DBGFIELD("UPT")                3, true, true,  3, 1, 111, 7,  0, 0}, // #333
  {DBGFIELD("CKSM")               3, true, true,  3, 1,  8, 4,  0, 0}, // #334
  {DBGFIELD("CMPSC")              3, true, true,  3, 1, 106, 5,  0, 0}, // #335
  {DBGFIELD("SORTL")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #336
  {DBGFIELD("DFLTCC")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #337
  {DBGFIELD("EX_EXRL")            3, true, true, 60, 1,  1, 3,  0, 0}, // #338
  {DBGFIELD("InsnE_InsnRI_InsnRIE_InsnRIL_InsnRILU_InsnRIS_InsnRR_InsnRRE_InsnRRF_InsnRRS_InsnRS_InsnRSE_InsnRSI_InsnRSY_InsnRX_InsnRXE_InsnRXF_InsnRXY_InsnS_InsnSI_InsnSIL_InsnSIY_InsnSS_InsnSSE_InsnSSF") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #339
  {DBGFIELD("LZDR_LZER")          1, false, false, 60, 1,  1, 3,  0, 0}, // #340
  {DBGFIELD("LZXR")               2, true, false, 61, 1, 29, 3,  0, 0}, // #341
  {DBGFIELD("LER")                1, false, false, 115, 1, 29, 3,  0, 0}, // #342
  {DBGFIELD("LDGR_LDR_LDR32")     1, false, false, 60, 1,  1, 3,  0, 0}, // #343
  {DBGFIELD("LGDR")               1, false, false, 60, 1, 33, 3,  0, 0}, // #344
  {DBGFIELD("LXR")                3, true, true, 61, 1, 29, 3,  0, 0}, // #345
  {DBGFIELD("LTDBR_LTEBR")        1, false, false, 115, 1, 32, 4,  0, 0}, // #346
  {DBGFIELD("LTDBRCompare_LTEBRCompare") 1, false, false, 115, 1, 33, 3,  0, 0}, // #347
  {DBGFIELD("LTXBR_LTXBRCompare") 3, true, true, 118, 1, 24, 4,  0, 0}, // #348
  {DBGFIELD("CPSDRdd_CPSDRds_CPSDRsd_CPSDRss") 1, false, false, 115, 1, 29, 3,  0, 0}, // #349
  {DBGFIELD("LE_LEY")             1, false, false, 114, 2, 37, 4,  0, 0}, // #350
  {DBGFIELD("LD_LDE32_LDY")       1, false, false,  1, 1, 12, 3,  0, 0}, // #351
  {DBGFIELD("LX")                 1, false, false,  1, 1, 12, 3,  0, 0}, // #352
  {DBGFIELD("STD_STDY_STE_STEY")  1, false, false, 66, 2,  1, 4,  0, 0}, // #353
  {DBGFIELD("STX")                1, false, false, 66, 2,  1, 4,  0, 0}, // #354
  {DBGFIELD("LEDBR_LEDBRA")       1, false, false, 115, 1, 60, 3,  0, 0}, // #355
  {DBGFIELD("LDXBR_LDXBRA_LEXBR_LEXBRA") 1, false, false, 112, 1, 41, 3,  0, 0}, // #356
  {DBGFIELD("LDEB")               1, false, false, 114, 2, 63, 4,  0, 0}, // #357
  {DBGFIELD("LDEBR")              1, false, false, 115, 1, 60, 3,  0, 0}, // #358
  {DBGFIELD("LXDB_LXEB")          3, true, true, 117, 2, 49, 4,  0, 0}, // #359
  {DBGFIELD("LXDBR_LXEBR")        3, true, true, 118, 1, 53, 3,  0, 0}, // #360
  {DBGFIELD("CDFBR_CDFBRA_CDGBR_CDGBRA_CEFBR_CEFBRA_CEGBR_CEGBRA") 2, true, false, 134, 2, 118, 4,  0, 0}, // #361
  {DBGFIELD("CXFBR_CXFBRA_CXGBR_CXGBRA") 6, true, true, 136, 2, 63, 4,  0, 0}, // #362
  {DBGFIELD("CDLFBR_CDLGBR_CELFBR_CELGBR") 2, true, false, 134, 2, 118, 4,  0, 0}, // #363
  {DBGFIELD("CXLFBR_CXLGBR")      6, true, true, 136, 2, 63, 4,  0, 0}, // #364
  {DBGFIELD("CFDBR_CFDBRA_CFEBR_CFEBRA_CGDBR_CGDBRA_CGEBR_CGEBRA") 2, true, false, 134, 2, 152, 5,  0, 0}, // #365
  {DBGFIELD("CFXBR_CFXBRA_CGXBR_CGXBRA") 2, true, false, 138, 2, 81, 5,  0, 0}, // #366
  {DBGFIELD("CLFEBR")             3, true, true, 134, 2, 152, 5,  0, 0}, // #367
  {DBGFIELD("CLFDBR")             2, true, false, 134, 2, 152, 5,  0, 0}, // #368
  {DBGFIELD("CLGDBR_CLGEBR")      2, true, false, 134, 2, 152, 5,  0, 0}, // #369
  {DBGFIELD("CLFXBR_CLGXBR")      2, true, false, 138, 2, 81, 5,  0, 0}, // #370
  {DBGFIELD("LCDBR_LCEBR_LNDBR_LNEBR_LPDBR_LPEBR") 1, false, false, 115, 1, 32, 4,  0, 0}, // #371
  {DBGFIELD("LCDFR_LCDFR_32_LNDFR_LNDFR_32_LPDFR_LPDFR_32") 1, false, false, 60, 1,  1, 3,  0, 0}, // #372
  {DBGFIELD("LCXBR_LNXBR_LPXBR")  3, true, true, 118, 1, 24, 4,  0, 0}, // #373
  {DBGFIELD("SQDB_SQEB")          1, false, false, 140, 2, 67, 4,  0, 0}, // #374
  {DBGFIELD("SQDBR_SQEBR")        1, false, false, 141, 1, 67, 3,  0, 0}, // #375
  {DBGFIELD("SQXBR")              3, true, true, 141, 1, 67, 3,  0, 0}, // #376
  {DBGFIELD("FIDBR_FIDBRA_FIEBR_FIEBRA") 1, false, false, 115, 1, 60, 3,  0, 0}, // #377
  {DBGFIELD("FIXBR_FIXBRA")       3, true, true, 118, 1, 25, 3,  0, 0}, // #378
  {DBGFIELD("ADB_AEB")            1, false, false, 114, 2, 122, 5,  1, 1}, // #379
  {DBGFIELD("ADBR_AEBR")          1, false, false, 115, 1, 102, 4,  0, 0}, // #380
  {DBGFIELD("AXBR")               3, true, true, 118, 1, 24, 4,  0, 0}, // #381
  {DBGFIELD("SDB_SEB")            1, false, false, 114, 2, 122, 5,  1, 1}, // #382
  {DBGFIELD("SDBR_SEBR")          1, false, false, 115, 1, 102, 4,  0, 0}, // #383
  {DBGFIELD("SXBR")               3, true, true, 118, 1, 24, 4,  0, 0}, // #384
  {DBGFIELD("MDB_MDEB_MEEB")      1, false, false, 114, 2, 63, 4,  1, 1}, // #385
  {DBGFIELD("MDBR_MDEBR_MEEBR")   1, false, false, 115, 1, 60, 3,  0, 0}, // #386
  {DBGFIELD("MXDB")               3, true, true, 117, 2, 49, 4,  1, 1}, // #387
  {DBGFIELD("MXDBR")              3, true, true, 118, 1, 53, 3,  0, 0}, // #388
  {DBGFIELD("MXBR")               3, true, true, 118, 1, 92, 3,  0, 0}, // #389
  {DBGFIELD("MAEB_MSEB")          3, true, true, 142, 2, 63, 4,  2, 2}, // #390
  {DBGFIELD("MAEBR_MSEBR")        3, true, true, 115, 1, 60, 3,  0, 0}, // #391
  {DBGFIELD("MADB_MSDB")          3, true, true, 142, 2, 63, 4,  2, 2}, // #392
  {DBGFIELD("MADBR_MSDBR")        1, false, false, 115, 1, 60, 3,  0, 0}, // #393
  {DBGFIELD("DDB_DEB")            1, false, false, 140, 2, 67, 4,  1, 1}, // #394
  {DBGFIELD("DDBR_DEBR")          1, false, false, 141, 1, 67, 3,  0, 0}, // #395
  {DBGFIELD("DXBR")               3, true, true, 141, 1, 67, 3,  0, 0}, // #396
  {DBGFIELD("DIDBR_DIEBR")        3, true, true,  3, 1,  8, 4,  0, 0}, // #397
  {DBGFIELD("CDB_CEB_KDB_KEB")    1, false, false, 114, 2, 144, 4,  1, 1}, // #398
  {DBGFIELD("CDBR_CEBR_KDBR_KEBR") 1, false, false, 115, 1, 33, 3,  0, 0}, // #399
  {DBGFIELD("CXBR_KXBR")          3, true, true, 112, 1, 41, 3,  0, 0}, // #400
  {DBGFIELD("TCDB_TCEB")          1, false, false, 114, 2, 15, 4,  0, 0}, // #401
  {DBGFIELD("TCXB")               3, true, true, 117, 2, 45, 4,  0, 0}, // #402
  {DBGFIELD("EFPC")               3, true, true, 39, 2, 131, 4,  0, 0}, // #403
  {DBGFIELD("STFPC")              3, true, true, 66, 2,  1, 4,  0, 0}, // #404
  {DBGFIELD("SFPC")               3, true, true,  1, 1, 33, 3,  0, 0}, // #405
  {DBGFIELD("LFPC")               3, true, true,  8, 1, 60, 3,  0, 0}, // #406
  {DBGFIELD("SFASR")              3, true, true,  3, 1, 10, 2,  0, 0}, // #407
  {DBGFIELD("LFAS")               3, true, true,  3, 1, 10, 2,  0, 0}, // #408
  {DBGFIELD("SRNM_SRNMB_SRNMT")   3, true, true, 60, 1, 33, 3,  0, 0}, // #409
  {DBGFIELD("LTDR_LTER")          1, false, false, 115, 1, 32, 4,  0, 0}, // #410
  {DBGFIELD("LTXR")               3, true, true, 118, 1, 24, 4,  0, 0}, // #411
  {DBGFIELD("LEDR_LRER")          1, false, false, 115, 1, 60, 3,  0, 0}, // #412
  {DBGFIELD("LEXR")               1, false, false, 115, 1, 60, 3,  0, 0}, // #413
  {DBGFIELD("LDXR_LRDR")          1, false, false, 112, 1, 41, 3,  0, 0}, // #414
  {DBGFIELD("LDE")                1, false, false,  1, 1, 12, 3,  0, 0}, // #415
  {DBGFIELD("LDER")               1, false, false, 60, 1,  1, 3,  0, 0}, // #416
  {DBGFIELD("LXD_LXE")            3, true, true, 117, 2, 49, 4,  0, 0}, // #417
  {DBGFIELD("LXDR_LXER")          3, true, true, 118, 1, 53, 3,  0, 0}, // #418
  {DBGFIELD("CDFR_CDGR_CEFR_CEGR") 2, true, false, 134, 2, 118, 4,  0, 0}, // #419
  {DBGFIELD("CXFR_CXGR")          6, true, true, 136, 2, 63, 4,  0, 0}, // #420
  {DBGFIELD("CFDR_CFER_CGDR_CGER") 2, true, false, 134, 2, 152, 5,  0, 0}, // #421
  {DBGFIELD("CFXR_CGXR")          2, true, false, 138, 2, 81, 5,  0, 0}, // #422
  {DBGFIELD("THDER_THDR")         1, false, false, 115, 1, 102, 4,  0, 0}, // #423
  {DBGFIELD("TBDR_TBEDR")         1, false, false, 115, 1, 102, 4,  0, 0}, // #424
  {DBGFIELD("LCDR_LCER_LNDR_LNER_LPDR_LPER") 1, false, false, 115, 1, 32, 4,  0, 0}, // #425
  {DBGFIELD("LCXR_LNXR_LPXR")     3, true, true, 118, 1, 24, 4,  0, 0}, // #426
  {DBGFIELD("HDR_HER")            1, false, false, 115, 1, 60, 3,  0, 0}, // #427
  {DBGFIELD("SQD_SQE")            1, false, false, 140, 2, 67, 4,  0, 0}, // #428
  {DBGFIELD("SQDR_SQER")          1, false, false, 141, 1, 67, 3,  0, 0}, // #429
  {DBGFIELD("SQXR")               3, true, true, 141, 1, 67, 3,  0, 0}, // #430
  {DBGFIELD("FIDR_FIER")          1, false, false, 115, 1, 60, 3,  0, 0}, // #431
  {DBGFIELD("FIXR")               3, true, true, 118, 1, 25, 3,  0, 0}, // #432
  {DBGFIELD("AD_AE_AU_AW")        1, false, false, 114, 2, 122, 5,  1, 1}, // #433
  {DBGFIELD("ADR_AER_AUR_AWR")    1, false, false, 115, 1, 102, 4,  0, 0}, // #434
  {DBGFIELD("AXR")                3, true, true, 118, 1, 24, 4,  0, 0}, // #435
  {DBGFIELD("SD_SE_SU_SW")        1, false, false, 114, 2, 122, 5,  1, 1}, // #436
  {DBGFIELD("SDR_SER_SUR_SWR")    1, false, false, 115, 1, 102, 4,  0, 0}, // #437
  {DBGFIELD("SXR")                3, true, true, 118, 1, 24, 4,  0, 0}, // #438
  {DBGFIELD("MD_MDE_ME_MEE")      1, false, false, 114, 2, 63, 4,  1, 1}, // #439
  {DBGFIELD("MDER_MDR_MEER_MER")  1, false, false, 115, 1, 60, 3,  0, 0}, // #440
  {DBGFIELD("MXD")                3, true, true, 117, 2, 49, 4,  1, 1}, // #441
  {DBGFIELD("MXDR")               3, true, true, 118, 1, 53, 3,  0, 0}, // #442
  {DBGFIELD("MXR")                3, true, true, 118, 1, 67, 3,  0, 0}, // #443
  {DBGFIELD("MY")                 3, true, true, 117, 2, 49, 4,  1, 1}, // #444
  {DBGFIELD("MYH_MYL")            3, true, true, 142, 2, 63, 4,  1, 1}, // #445
  {DBGFIELD("MYR")                3, true, true, 118, 1, 53, 3,  0, 0}, // #446
  {DBGFIELD("MYHR_MYLR")          3, true, true, 115, 1, 60, 3,  0, 0}, // #447
  {DBGFIELD("MAD_MAE_MSD_MSE")    3, true, true, 142, 2, 63, 4,  2, 2}, // #448
  {DBGFIELD("MADR_MAER_MSDR_MSER") 3, true, true, 115, 1, 60, 3,  0, 0}, // #449
  {DBGFIELD("MAY")                3, true, true, 117, 2, 49, 4,  2, 2}, // #450
  {DBGFIELD("MAYH_MAYL")          3, true, true, 142, 2, 63, 4,  2, 2}, // #451
  {DBGFIELD("MAYR")               3, true, true, 118, 1, 53, 3,  0, 0}, // #452
  {DBGFIELD("MAYHR_MAYLR")        3, true, true, 115, 1, 60, 3,  0, 0}, // #453
  {DBGFIELD("DD_DE")              1, false, false, 140, 2, 67, 4,  1, 1}, // #454
  {DBGFIELD("DDR_DER")            1, false, false, 141, 1, 67, 3,  0, 0}, // #455
  {DBGFIELD("DXR")                3, true, true, 141, 1, 67, 3,  0, 0}, // #456
  {DBGFIELD("CD_CE")              1, false, false, 114, 2, 63, 4,  1, 1}, // #457
  {DBGFIELD("CDR_CER")            1, false, false, 115, 1, 60, 3,  0, 0}, // #458
  {DBGFIELD("CXR")                3, true, true, 112, 1, 25, 3,  0, 0}, // #459
  {DBGFIELD("LTDTR")              1, false, false, 115, 1, 148, 4,  0, 0}, // #460
  {DBGFIELD("LTXTR")              3, true, true, 118, 1, 24, 4,  0, 0}, // #461
  {DBGFIELD("LEDTR")              1, false, false, 115, 1, 56, 3,  0, 0}, // #462
  {DBGFIELD("LDXTR")              1, false, false, 112, 1, 56, 3,  0, 0}, // #463
  {DBGFIELD("LDETR")              1, false, false, 115, 1, 53, 3,  0, 0}, // #464
  {DBGFIELD("LXDTR")              3, true, true, 118, 1, 25, 3,  0, 0}, // #465
  {DBGFIELD("CDFTR")              2, true, false, 134, 2, 67, 4,  0, 0}, // #466
  {DBGFIELD("CDGTR_CDGTRA")       2, true, false, 134, 2, 67, 4,  0, 0}, // #467
  {DBGFIELD("CXFTR")              6, true, true, 136, 2, 67, 4,  0, 0}, // #468
  {DBGFIELD("CXGTR_CXGTRA")       6, true, true, 136, 2, 67, 4,  0, 0}, // #469
  {DBGFIELD("CDLFTR")             2, true, false, 134, 2, 67, 4,  0, 0}, // #470
  {DBGFIELD("CDLGTR")             2, true, false, 134, 2, 67, 4,  0, 0}, // #471
  {DBGFIELD("CXLFTR")             6, true, true, 136, 2, 67, 4,  0, 0}, // #472
  {DBGFIELD("CXLGTR")             6, true, true, 136, 2, 67, 4,  0, 0}, // #473
  {DBGFIELD("CFDTR_CGDTR_CGDTRA") 2, true, false, 134, 2, 87, 5,  0, 0}, // #474
  {DBGFIELD("CFXTR_CGXTR_CGXTRA") 2, true, false, 138, 2, 87, 5,  0, 0}, // #475
  {DBGFIELD("CLFDTR_CLGDTR")      2, true, false, 134, 2, 87, 5,  0, 0}, // #476
  {DBGFIELD("CLFXTR_CLGXTR")      2, true, false, 138, 2, 87, 5,  0, 0}, // #477
  {DBGFIELD("CDSTR_CDUTR")        2, true, false, 134, 2, 41, 4,  0, 0}, // #478
  {DBGFIELD("CXSTR_CXUTR")        6, true, true, 144, 2, 49, 4,  0, 0}, // #479
  {DBGFIELD("CSDTR_CUDTR")        2, true, false, 134, 2, 63, 4,  0, 0}, // #480
  {DBGFIELD("CSXTR_CUXTR")        6, true, true, 144, 2, 56, 4,  0, 0}, // #481
  {DBGFIELD("CDZT")               2, true, false, 114, 2, 49, 4,  0, 0}, // #482
  {DBGFIELD("CXZT")               9, true, true, 146, 2, 92, 4,  0, 0}, // #483
  {DBGFIELD("CZDT")               2, true, false, 113, 3,  1, 5,  0, 0}, // #484
  {DBGFIELD("CZXT")               3, true, true, 148, 3,  1, 5,  0, 0}, // #485
  {DBGFIELD("CDPT")               2, true, false, 114, 2, 49, 4,  0, 0}, // #486
  {DBGFIELD("CXPT")               9, true, true, 146, 2, 92, 4,  0, 0}, // #487
  {DBGFIELD("CPDT")               2, true, false, 113, 3,  1, 5,  0, 0}, // #488
  {DBGFIELD("CPXT")               3, true, true, 148, 3,  1, 5,  0, 0}, // #489
  {DBGFIELD("PFPO")               3, true, true,  3, 1,  8, 4,  0, 0}, // #490
  {DBGFIELD("FIDTR")              1, false, false, 115, 1, 53, 3,  0, 0}, // #491
  {DBGFIELD("FIXTR")              3, true, true, 118, 1, 25, 3,  0, 0}, // #492
  {DBGFIELD("EEDTR")              2, true, false, 134, 2, 63, 4,  0, 0}, // #493
  {DBGFIELD("EEXTR")              2, true, false, 134, 2, 63, 4,  0, 0}, // #494
  {DBGFIELD("ESDTR")              2, true, false, 134, 2, 63, 4,  0, 0}, // #495
  {DBGFIELD("ESXTR")              2, true, false, 138, 2, 49, 4,  0, 0}, // #496
  {DBGFIELD("ADTR_ADTRA")         1, false, false, 115, 1, 148, 4,  0, 0}, // #497
  {DBGFIELD("AXTR_AXTRA")         3, true, true, 118, 1, 24, 4,  0, 0}, // #498
  {DBGFIELD("SDTR_SDTRA")         1, false, false, 115, 1, 148, 4,  0, 0}, // #499
  {DBGFIELD("SXTR_SXTRA")         3, true, true, 118, 1, 24, 4,  0, 0}, // #500
  {DBGFIELD("MDTR_MDTRA")         1, false, false, 115, 1, 67, 3,  0, 0}, // #501
  {DBGFIELD("MXTR_MXTRA")         3, true, true, 118, 1, 67, 3,  0, 0}, // #502
  {DBGFIELD("DDTR_DDTRA")         1, false, false, 115, 1, 67, 3,  0, 0}, // #503
  {DBGFIELD("DXTR_DXTRA")         3, true, true, 118, 1, 67, 3,  0, 0}, // #504
  {DBGFIELD("QADTR")              1, false, false, 115, 1, 148, 4,  0, 0}, // #505
  {DBGFIELD("QAXTR")              3, true, true, 118, 1, 24, 4,  0, 0}, // #506
  {DBGFIELD("RRDTR")              2, true, false, 134, 2, 76, 5,  0, 0}, // #507
  {DBGFIELD("RRXTR")              6, true, true, 136, 2, 122, 5,  0, 0}, // #508
  {DBGFIELD("SLDT_SRDT")          3, true, true, 114, 2, 56, 4,  0, 0}, // #509
  {DBGFIELD("SLXT_SRXT")          3, true, true, 117, 2, 56, 4,  0, 0}, // #510
  {DBGFIELD("IEDTR")              2, true, false, 134, 2, 41, 4,  0, 0}, // #511
  {DBGFIELD("IEXTR")              6, true, true, 136, 2, 63, 4,  0, 0}, // #512
  {DBGFIELD("CDTR_KDTR")          1, false, false, 115, 1, 53, 3,  0, 0}, // #513
  {DBGFIELD("CXTR_KXTR")          3, true, true, 112, 1, 41, 3,  0, 0}, // #514
  {DBGFIELD("CEDTR")              1, false, false, 115, 1, 53, 3,  0, 0}, // #515
  {DBGFIELD("CEXTR")              1, false, false, 115, 1, 53, 3,  0, 0}, // #516
  {DBGFIELD("TDCDT_TDCET_TDGDT_TDGET") 1, false, false, 114, 2, 56, 4,  0, 0}, // #517
  {DBGFIELD("TDCXT_TDGXT")        3, true, true, 142, 2, 56, 4,  0, 0}, // #518
  {DBGFIELD("VLR32_VLR64_VLR")    1, false, false, 60, 1,  1, 3,  0, 0}, // #519
  {DBGFIELD("VLGV_VLGVB_VLGVF_VLGVG_VLGVH") 1, false, false, 60, 1, 33, 3,  0, 0}, // #520
  {DBGFIELD("VLVG_VLVGB_VLVGF_VLVGG_VLVGH") 1, false, false, 60, 1,  1, 3,  0, 0}, // #521
  {DBGFIELD("VLVGP32_VLVGP")      1, false, false, 60, 1, 33, 3,  0, 0}, // #522
  {DBGFIELD("VZERO")              1, false, false, 115, 1, 29, 3,  0, 0}, // #523
  {DBGFIELD("VONE")               1, false, false, 115, 1, 29, 3,  0, 0}, // #524
  {DBGFIELD("VGBM")               1, false, false, 115, 1, 29, 3,  0, 0}, // #525
  {DBGFIELD("VGM_VGMB_VGMF_VGMG_VGMH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #526
  {DBGFIELD("VREPI_VREPIB_VREPIF_VREPIG_VREPIH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #527
  {DBGFIELD("VLEIB_VLEIF_VLEIG_VLEIH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #528
  {DBGFIELD("VL_VLAlign")         1, false, false,  1, 1, 12, 3,  0, 0}, // #529
  {DBGFIELD("VLBB_VLL")           1, false, false,  1, 1, 12, 3,  0, 0}, // #530
  {DBGFIELD("VL32_VL64")          1, false, false,  1, 1, 12, 3,  0, 0}, // #531
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH_VLLEZLF") 1, false, false,  1, 1, 12, 3,  0, 0}, // #532
  {DBGFIELD("VLREP_VLREPB_VLREPF_VLREPG_VLREPH") 1, false, false,  1, 1, 12, 3,  0, 0}, // #533
  {DBGFIELD("VLEB_VLEF_VLEG_VLEH") 1, false, false, 114, 2, 37, 4,  1, 1}, // #534
  {DBGFIELD("VGEF_VGEG")          2, true, false, 113, 3, 180, 5,  1, 1}, // #535
  {DBGFIELD("VLM_VLMAlign")       3, true, true, 16, 1, 148, 4,  0, 0}, // #536
  {DBGFIELD("VLRL_VLRLR")         1, false, false,  1, 1, 12, 3,  0, 0}, // #537
  {DBGFIELD("VST32_VST64_VST_VSTAlign_VSTL") 1, false, false, 66, 2,  1, 4,  0, 0}, // #538
  {DBGFIELD("VSTEF_VSTEG")        1, false, false, 66, 2,  1, 4,  0, 0}, // #539
  {DBGFIELD("VSTEB_VSTEH")        2, true, false, 113, 3,  1, 5,  0, 0}, // #540
  {DBGFIELD("VSTM_VSTMAlign")     6, true, true, 95, 2,  1, 4,  0, 0}, // #541
  {DBGFIELD("VSCEF_VSCEG")        2, true, false, 70, 2,  1, 4,  0, 0}, // #542
  {DBGFIELD("VSTRL_VSTRLR")       1, false, false, 66, 2,  1, 4,  0, 0}, // #543
  {DBGFIELD("VLBR_VLBRF_VLBRG_VLBRH_VLBRQ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #544
  {DBGFIELD("VLER_VLERF_VLERG_VLERH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #545
  {DBGFIELD("VLEBRF_VLEBRG_VLEBRH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #546
  {DBGFIELD("VLLEBRZ_VLLEBRZE_VLLEBRZF_VLLEBRZG_VLLEBRZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #547
  {DBGFIELD("VLBRREP_VLBRREPF_VLBRREPG_VLBRREPH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #548
  {DBGFIELD("VSTBR_VSTBRF_VSTBRG_VSTBRH_VSTBRQ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #549
  {DBGFIELD("VSTER_VSTERF_VSTERG_VSTERH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #550
  {DBGFIELD("VSTEBRH")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #551
  {DBGFIELD("VSTEBRF_VSTEBRG")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #552
  {DBGFIELD("VMRH_VMRHB_VMRHF_VMRHG_VMRHH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #553
  {DBGFIELD("VMRL_VMRLB_VMRLF_VMRLG_VMRLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #554
  {DBGFIELD("VPERM")              1, false, false, 115, 1, 29, 3,  0, 0}, // #555
  {DBGFIELD("VPDI")               1, false, false, 115, 1, 29, 3,  0, 0}, // #556
  {DBGFIELD("VBPERM")             1, false, false, 115, 1, 29, 3,  0, 0}, // #557
  {DBGFIELD("VREP_VREPB_VREPF_VREPG_VREPH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #558
  {DBGFIELD("VSEL")               1, false, false, 115, 1, 29, 3,  0, 0}, // #559
  {DBGFIELD("VPK_VPKF_VPKG_VPKH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #560
  {DBGFIELD("VPKS_VPKSF_VPKSG_VPKSH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #561
  {DBGFIELD("VPKSFS_VPKSGS_VPKSHS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #562
  {DBGFIELD("VPKLS_VPKLSF_VPKLSG_VPKLSH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #563
  {DBGFIELD("VPKLSFS_VPKLSGS_VPKLSHS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #564
  {DBGFIELD("VSEG_VSEGB_VSEGF_VSEGH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #565
  {DBGFIELD("VUPH_VUPHB_VUPHF_VUPHH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #566
  {DBGFIELD("VUPL_VUPLB_VUPLF")   1, false, false, 115, 1, 29, 3,  0, 0}, // #567
  {DBGFIELD("VUPLH_VUPLHB_VUPLHF_VUPLHH_VUPLHW") 1, false, false, 115, 1, 29, 3,  0, 0}, // #568
  {DBGFIELD("VUPLL_VUPLLB_VUPLLF_VUPLLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #569
  {DBGFIELD("VA_VAB_VAC_VACQ_VAF_VAG_VAH_VAQ") 1, false, false, 115, 1, 29, 3,  0, 0}, // #570
  {DBGFIELD("VACC_VACCB_VACCC_VACCCQ_VACCF_VACCG_VACCH_VACCQ") 1, false, false, 115, 1, 29, 3,  0, 0}, // #571
  {DBGFIELD("VAVG_VAVGB_VAVGF_VAVGG_VAVGH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #572
  {DBGFIELD("VAVGL_VAVGLB_VAVGLF_VAVGLG_VAVGLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #573
  {DBGFIELD("VN_VNC_VNN_VNO_VNX") 1, false, false, 115, 1, 29, 3,  0, 0}, // #574
  {DBGFIELD("VO_VOC")             1, false, false, 115, 1, 29, 3,  0, 0}, // #575
  {DBGFIELD("VCKSM")              1, false, false, 115, 1, 12, 3,  0, 0}, // #576
  {DBGFIELD("VCLZ_VCLZB_VCLZF_VCLZG_VCLZH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #577
  {DBGFIELD("VCTZ_VCTZB_VCTZF_VCTZG_VCTZH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #578
  {DBGFIELD("VX")                 1, false, false, 115, 1, 29, 3,  0, 0}, // #579
  {DBGFIELD("VGFM")               1, false, false, 115, 1, 12, 3,  0, 0}, // #580
  {DBGFIELD("VGFMA_VGFMAB_VGFMAF_VGFMAG_VGFMAH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #581
  {DBGFIELD("VGFMB_VGFMF_VGFMG_VGFMH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #582
  {DBGFIELD("VLC_VLCB_VLCF_VLCG_VLCH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #583
  {DBGFIELD("VLP_VLPB_VLPF_VLPG_VLPH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #584
  {DBGFIELD("VMX_VMXB_VMXF_VMXG_VMXH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #585
  {DBGFIELD("VMXL_VMXLB_VMXLF_VMXLG_VMXLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #586
  {DBGFIELD("VMN_VMNB_VMNF_VMNG_VMNH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #587
  {DBGFIELD("VMNL_VMNLB_VMNLF_VMNLG_VMNLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #588
  {DBGFIELD("VMAL_VMALB_VMALF")   1, false, false, 115, 1, 12, 3,  0, 0}, // #589
  {DBGFIELD("VMALE_VMALEB_VMALEF_VMALEH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #590
  {DBGFIELD("VMALH_VMALHB_VMALHF_VMALHH_VMALHW") 1, false, false, 115, 1, 12, 3,  0, 0}, // #591
  {DBGFIELD("VMALO_VMALOB_VMALOF_VMALOH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #592
  {DBGFIELD("VMAO_VMAOB_VMAOF_VMAOH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #593
  {DBGFIELD("VMAE_VMAEB_VMAEF_VMAEH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #594
  {DBGFIELD("VMAH_VMAHB_VMAHF_VMAHH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #595
  {DBGFIELD("VME_VMEB_VMEF_VMEH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #596
  {DBGFIELD("VMH_VMHB_VMHF_VMHH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #597
  {DBGFIELD("VML_VMLB_VMLF")      1, false, false, 115, 1, 12, 3,  0, 0}, // #598
  {DBGFIELD("VMLE_VMLEB_VMLEF_VMLEH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #599
  {DBGFIELD("VMLH_VMLHB_VMLHF_VMLHH_VMLHW") 1, false, false, 115, 1, 12, 3,  0, 0}, // #600
  {DBGFIELD("VMLO_VMLOB_VMLOF_VMLOH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #601
  {DBGFIELD("VMO_VMOB_VMOF_VMOH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #602
  {DBGFIELD("VMSL_VMSLG")         1, false, false, 112, 1, 53, 3,  0, 0}, // #603
  {DBGFIELD("VPOPCT_VPOPCTB_VPOPCTF_VPOPCTG_VPOPCTH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #604
  {DBGFIELD("VERLL_VERLLB_VERLLF_VERLLG_VERLLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #605
  {DBGFIELD("VERLLV_VERLLVB_VERLLVF_VERLLVG_VERLLVH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #606
  {DBGFIELD("VERIM_VERIMB_VERIMF_VERIMG_VERIMH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #607
  {DBGFIELD("VESL_VESLB_VESLF_VESLG_VESLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #608
  {DBGFIELD("VESLV_VESLVB_VESLVF_VESLVG_VESLVH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #609
  {DBGFIELD("VESRA_VESRAB_VESRAF_VESRAG_VESRAH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #610
  {DBGFIELD("VESRAV_VESRAVB_VESRAVF_VESRAVG_VESRAVH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #611
  {DBGFIELD("VESRL_VESRLB_VESRLF_VESRLG_VESRLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #612
  {DBGFIELD("VESRLV_VESRLVB_VESRLVF_VESRLVG_VESRLVH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #613
  {DBGFIELD("VSL_VSLDB")          1, false, false, 115, 1, 29, 3,  0, 0}, // #614
  {DBGFIELD("VSLB")               1, false, false, 115, 1, 29, 3,  0, 0}, // #615
  {DBGFIELD("VSRA_VSRL")          1, false, false, 115, 1, 29, 3,  0, 0}, // #616
  {DBGFIELD("VSRAB_VSRLB")        1, false, false, 115, 1, 29, 3,  0, 0}, // #617
  {DBGFIELD("VSLD")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #618
  {DBGFIELD("VSRD")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #619
  {DBGFIELD("VSB_VSBCBI_VSBCBIQ_VSBI_VSBIQ") 1, false, false, 115, 1, 29, 3,  0, 0}, // #620
  {DBGFIELD("VSCBI_VSCBIB_VSCBIF_VSCBIG_VSCBIH_VSCBIQ") 1, false, false, 115, 1, 29, 3,  0, 0}, // #621
  {DBGFIELD("VS_VSF_VSG_VSH_VSQ") 1, false, false, 115, 1, 29, 3,  0, 0}, // #622
  {DBGFIELD("VSUM_VSUMB_VSUMH")   1, false, false, 115, 1, 12, 3,  0, 0}, // #623
  {DBGFIELD("VSUMG_VSUMGF_VSUMGH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #624
  {DBGFIELD("VSUMQ_VSUMQF_VSUMQG") 1, false, false, 115, 1, 12, 3,  0, 0}, // #625
  {DBGFIELD("VEC_VECB_VECF_VECG_VECH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #626
  {DBGFIELD("VECL_VECLB_VECLF_VECLG_VECLH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #627
  {DBGFIELD("VCEQ_VCEQB_VCEQF_VCEQG_VCEQH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #628
  {DBGFIELD("VCEQBS_VCEQFS_VCEQGS_VCEQHS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #629
  {DBGFIELD("VCH_VCHB_VCHF_VCHG_VCHH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #630
  {DBGFIELD("VCHBS_VCHFS_VCHGS_VCHHS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #631
  {DBGFIELD("VCHL_VCHLB_VCHLF_VCHLG_VCHLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #632
  {DBGFIELD("VCHLBS_VCHLFS_VCHLGS_VCHLHS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #633
  {DBGFIELD("VTM")                1, false, false, 115, 1, 12, 3,  0, 0}, // #634
  {DBGFIELD("VCFPL_VCFPS")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #635
  {DBGFIELD("VCDG_VCDLG")         1, false, false, 115, 1, 60, 3,  0, 0}, // #636
  {DBGFIELD("VCDGB_VCDLGB")       1, false, false, 115, 1, 60, 3,  0, 0}, // #637
  {DBGFIELD("WCDGB_WCDLGB")       1, false, false, 115, 1, 60, 3,  0, 0}, // #638
  {DBGFIELD("VCEFB_VCELFB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #639
  {DBGFIELD("WCEFB_WCELFB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #640
  {DBGFIELD("VCLFP_VCSFP")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #641
  {DBGFIELD("VCGD_VCLGD")         1, false, false, 115, 1, 60, 3,  0, 0}, // #642
  {DBGFIELD("VCGDB_VCLGDB")       1, false, false, 115, 1, 60, 3,  0, 0}, // #643
  {DBGFIELD("WCGDB_WCLGDB")       1, false, false, 115, 1, 60, 3,  0, 0}, // #644
  {DBGFIELD("VCFEB_VCLFEB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #645
  {DBGFIELD("WCFEB_WCLFEB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #646
  {DBGFIELD("VLDE_VLED")          1, false, false, 115, 1, 60, 3,  0, 0}, // #647
  {DBGFIELD("VLDEB_VLEDB")        1, false, false, 115, 1, 60, 3,  0, 0}, // #648
  {DBGFIELD("WLDEB_WLEDB")        1, false, false, 115, 1, 60, 3,  0, 0}, // #649
  {DBGFIELD("VFLL_VFLR")          1, false, false, 115, 1, 60, 3,  0, 0}, // #650
  {DBGFIELD("VFLLS_VFLRD")        1, false, false, 115, 1, 60, 3,  0, 0}, // #651
  {DBGFIELD("WFLLS_WFLRD")        1, false, false, 115, 1, 60, 3,  0, 0}, // #652
  {DBGFIELD("WFLLD")              1, false, false, 112, 1, 53, 3,  0, 0}, // #653
  {DBGFIELD("WFLRX")              1, false, false, 112, 1, 25, 3,  0, 0}, // #654
  {DBGFIELD("VFI_VFIDB")          1, false, false, 115, 1, 60, 3,  0, 0}, // #655
  {DBGFIELD("WFIDB")              1, false, false, 115, 1, 60, 3,  0, 0}, // #656
  {DBGFIELD("VFISB")              1, false, false, 112, 1, 53, 3,  0, 0}, // #657
  {DBGFIELD("WFISB")              1, false, false, 115, 1, 60, 3,  0, 0}, // #658
  {DBGFIELD("WFIXB")              1, false, false, 112, 1, 25, 3,  0, 0}, // #659
  {DBGFIELD("VFPSO")              1, false, false, 115, 1, 29, 3,  0, 0}, // #660
  {DBGFIELD("VFPSODB_WFPSODB")    1, false, false, 115, 1, 29, 3,  0, 0}, // #661
  {DBGFIELD("VFPSOSB_WFPSOSB")    1, false, false, 115, 1, 29, 3,  0, 0}, // #662
  {DBGFIELD("WFPSOXB")            1, false, false, 115, 1, 29, 3,  0, 0}, // #663
  {DBGFIELD("VFLCDB_VFLNDB_VFLPDB_WFLCDB_WFLNDB_WFLPDB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #664
  {DBGFIELD("VFLCSB_VFLNSB_VFLPSB_WFLCSB_WFLNSB_WFLPSB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #665
  {DBGFIELD("WFLCXB_WFLNXB_WFLPXB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #666
  {DBGFIELD("VFMAX_VFMIN")        1, false, false, 115, 1, 29, 3,  0, 0}, // #667
  {DBGFIELD("VFMAXDB_VFMINDB")    1, false, false, 115, 1, 29, 3,  0, 0}, // #668
  {DBGFIELD("WFMAXDB_WFMINDB")    1, false, false, 115, 1, 29, 3,  0, 0}, // #669
  {DBGFIELD("VFMAXSB_VFMINSB")    1, false, false, 115, 1, 29, 3,  0, 0}, // #670
  {DBGFIELD("WFMAXSB_WFMINSB")    1, false, false, 115, 1, 29, 3,  0, 0}, // #671
  {DBGFIELD("WFMAXXB_WFMINXB")    1, false, false, 115, 1, 29, 3,  0, 0}, // #672
  {DBGFIELD("VFTCI")              1, false, false, 115, 1, 32, 4,  0, 0}, // #673
  {DBGFIELD("VFTCIDB_WFTCIDB")    1, false, false, 115, 1, 32, 4,  0, 0}, // #674
  {DBGFIELD("VFTCISB_WFTCISB")    1, false, false, 115, 1, 32, 4,  0, 0}, // #675
  {DBGFIELD("WFTCIXB")            1, false, false, 115, 1, 32, 4,  0, 0}, // #676
  {DBGFIELD("VFA_VFS")            1, false, false, 112, 1, 53, 3,  0, 0}, // #677
  {DBGFIELD("VFADB_VFSDB")        1, false, false, 115, 1, 60, 3,  0, 0}, // #678
  {DBGFIELD("WFADB_WFSDB")        1, false, false, 115, 1, 60, 3,  0, 0}, // #679
  {DBGFIELD("VFASB_VFSSB")        1, false, false, 112, 1, 53, 3,  0, 0}, // #680
  {DBGFIELD("WFASB_WFSSB")        1, false, false, 115, 1, 60, 3,  0, 0}, // #681
  {DBGFIELD("WFAXB_WFSXB")        1, false, false, 112, 1, 25, 3,  0, 0}, // #682
  {DBGFIELD("VFM_VFMDB")          1, false, false, 115, 1, 60, 3,  0, 0}, // #683
  {DBGFIELD("WFMDB_WFMSB")        1, false, false, 115, 1, 60, 3,  0, 0}, // #684
  {DBGFIELD("VFMSB")              1, false, false, 112, 1, 53, 3,  0, 0}, // #685
  {DBGFIELD("WFMXB")              1, false, false, 112, 1, 92, 3,  0, 0}, // #686
  {DBGFIELD("VFMA_VFMS_VFNMA_VFNMS") 1, false, false, 112, 1, 53, 3,  0, 0}, // #687
  {DBGFIELD("VFMADB_VFMSDB_VFNMADB_VFNMSDB") 1, false, false, 115, 1, 60, 3,  0, 0}, // #688
  {DBGFIELD("WFMADB_WFMSDB_WFNMADB_WFNMSDB") 1, false, false, 115, 1, 60, 3,  0, 0}, // #689
  {DBGFIELD("VFMASB_VFMSSB_VFNMASB_VFNMSSB") 1, false, false, 112, 1, 53, 3,  0, 0}, // #690
  {DBGFIELD("WFMASB_WFMSSB_WFNMASB_WFNMSSB") 1, false, false, 115, 1, 60, 3,  0, 0}, // #691
  {DBGFIELD("WFMAXB_WFMSXB_WFNMAXB_WFNMSXB") 1, false, false, 112, 1, 67, 3,  0, 0}, // #692
  {DBGFIELD("VFD")                1, false, false, 141, 1, 67, 3,  0, 0}, // #693
  {DBGFIELD("VFDDB_WFDDB")        1, false, false, 141, 1, 67, 3,  0, 0}, // #694
  {DBGFIELD("VFDSB_WFDSB")        1, false, false, 141, 1, 67, 3,  0, 0}, // #695
  {DBGFIELD("WFDXB")              1, false, false, 141, 1, 67, 3,  0, 0}, // #696
  {DBGFIELD("VFSQ")               1, false, false, 141, 1, 67, 3,  0, 0}, // #697
  {DBGFIELD("VFSQDB_WFSQDB")      1, false, false, 141, 1, 67, 3,  0, 0}, // #698
  {DBGFIELD("VFSQSB_WFSQSB")      1, false, false, 141, 1, 67, 3,  0, 0}, // #699
  {DBGFIELD("WFSQXB")             1, false, false, 141, 1, 67, 3,  0, 0}, // #700
  {DBGFIELD("VFCE_VFCH_VFCHE")    1, false, false, 115, 1, 29, 3,  0, 0}, // #701
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB_VFKEDB_VFKHDB_VFKHEDB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #702
  {DBGFIELD("WFCEDB_WFCHDB_WFCHEDB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #703
  {DBGFIELD("WFKEDB_WFKHDB_WFKHEDB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #704
  {DBGFIELD("VFCESB_VFCHESB_VFCHSB_VFKESB_VFKHESB_VFKHSB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #705
  {DBGFIELD("WFCESB_WFCHESB_WFCHSB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #706
  {DBGFIELD("WFKESB_WFKHESB_WFKHSB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #707
  {DBGFIELD("WFCEXB_WFCHEXB_WFCHXB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #708
  {DBGFIELD("WFKEXB_WFKHEXB_WFKHXB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #709
  {DBGFIELD("VFCEDBS_VFCHDBS_VFCHEDBS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #710
  {DBGFIELD("VFKEDBS_VFKHDBS_VFKHEDBS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #711
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS_WFKEDBS_WFKHDBS_WFKHEDBS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #712
  {DBGFIELD("VFCESBS_VFCHESBS_VFCHSBS_VFKESBS_VFKHESBS_VFKHSBS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #713
  {DBGFIELD("WFCESBS_WFCHESBS_WFCHSBS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #714
  {DBGFIELD("WFKESBS_WFKHESBS_WFKHSBS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #715
  {DBGFIELD("WFCEXBS_WFCHEXBS_WFCHXBS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #716
  {DBGFIELD("WFKEXBS_WFKHEXBS_WFKHXBS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #717
  {DBGFIELD("WFC_WFK")            1, false, false, 115, 1, 33, 3,  0, 0}, // #718
  {DBGFIELD("WFCDB_WFKDB")        1, false, false, 115, 1, 33, 3,  0, 0}, // #719
  {DBGFIELD("WFCSB_WFKSB")        1, false, false, 115, 1, 33, 3,  0, 0}, // #720
  {DBGFIELD("WFCXB_WFKXB")        1, false, false, 115, 1, 33, 3,  0, 0}, // #721
  {DBGFIELD("LEFR")               1, false, false, 60, 1,  1, 3,  0, 0}, // #722
  {DBGFIELD("LFER")               1, false, false, 60, 1, 33, 3,  0, 0}, // #723
  {DBGFIELD("VFAE_VFAEB")         1, false, false, 115, 1, 33, 3,  0, 0}, // #724
  {DBGFIELD("VFAEF_VFAEH")        1, false, false, 115, 1, 33, 3,  0, 0}, // #725
  {DBGFIELD("VFAEBS_VFAEFS_VFAEHS") 1, false, false, 115, 1, 139, 4,  0, 0}, // #726
  {DBGFIELD("VFAEZB_VFAEZF_VFAEZH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #727
  {DBGFIELD("VFAEZBS_VFAEZFS_VFAEZHS") 1, false, false, 115, 1, 139, 4,  0, 0}, // #728
  {DBGFIELD("VFEE_VFEEB_VFEEF_VFEEH_VFEEZB_VFEEZF_VFEEZH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #729
  {DBGFIELD("VFEEBS_VFEEFS_VFEEHS_VFEEZBS_VFEEZFS_VFEEZHS") 1, false, false, 115, 1, 139, 4,  0, 0}, // #730
  {DBGFIELD("VFENE_VFENEB_VFENEF_VFENEH_VFENEZB_VFENEZF_VFENEZH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #731
  {DBGFIELD("VFENEBS_VFENEFS_VFENEHS_VFENEZBS_VFENEZFS_VFENEZHS") 1, false, false, 115, 1, 139, 4,  0, 0}, // #732
  {DBGFIELD("VISTR_VISTRB_VISTRF_VISTRH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #733
  {DBGFIELD("VISTRBS_VISTRFS_VISTRHS") 1, false, false, 115, 1, 139, 4,  0, 0}, // #734
  {DBGFIELD("VSTRC_VSTRCB_VSTRCF_VSTRCH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #735
  {DBGFIELD("VSTRCBS_VSTRCFS_VSTRCHS") 1, false, false, 115, 1, 139, 4,  0, 0}, // #736
  {DBGFIELD("VSTRCZB_VSTRCZF_VSTRCZH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #737
  {DBGFIELD("VSTRCZBS_VSTRCZFS_VSTRCZHS") 1, false, false, 115, 1, 139, 4,  0, 0}, // #738
  {DBGFIELD("VSTRS_VSTRSB_VSTRSF_VSTRSH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #739
  {DBGFIELD("VSTRSZB_VSTRSZF_VSTRSZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #740
  {DBGFIELD("VLIP")               1, false, false, 112, 1, 25, 3,  0, 0}, // #741
  {DBGFIELD("VPKZ")               6, true, true, 114, 2, 37, 4,  0, 0}, // #742
  {DBGFIELD("VUPKZ")              2, true, false, 113, 3,  1, 5,  0, 0}, // #743
  {DBGFIELD("VCVB_VCVBG_VCVBGOpt_VCVBOpt") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #744
  {DBGFIELD("VCVD_VCVDG")         3, true, true, 138, 2, 190, 5,  0, 0}, // #745
  {DBGFIELD("VAP_VSP")            1, false, false, 115, 1, 139, 4,  0, 0}, // #746
  {DBGFIELD("VMP_VMSP")           3, true, true, 112, 1, 87, 4,  0, 0}, // #747
  {DBGFIELD("VDP_VRP")            3, true, true, 112, 1, 87, 4,  0, 0}, // #748
  {DBGFIELD("VSDP")               3, true, true,  3, 1,  9, 3,  0, 0}, // #749
  {DBGFIELD("VSRP")               1, false, false, 112, 1, 24, 4,  0, 0}, // #750
  {DBGFIELD("VPSOP")              1, false, false, 115, 1, 139, 4,  0, 0}, // #751
  {DBGFIELD("VCP_VTP")            1, false, false, 115, 1, 29, 3,  0, 0}, // #752
  {DBGFIELD("EPSW")               3, true, true,  3, 1,  9, 3,  0, 0}, // #753
  {DBGFIELD("LPSW_LPSWE")         9, true, true,  0, 0, 92, 2,  0, 0}, // #754
  {DBGFIELD("IPK")                3, true, true, 39, 1, 33, 3,  0, 0}, // #755
  {DBGFIELD("SPKA")               1, false, true,  1, 1,  1, 3,  0, 0}, // #756
  {DBGFIELD("SSM")                1, false, true,  1, 1,  1, 3,  0, 0}, // #757
  {DBGFIELD("STNSM_STOSM")        3, true, true, 66, 2,  1, 4,  0, 0}, // #758
  {DBGFIELD("IAC")                1, false, false, 39, 1, 33, 3,  0, 0}, // #759
  {DBGFIELD("SAC_SACF")           1, false, true,  1, 1,  1, 3,  0, 0}, // #760
  {DBGFIELD("LCTL_LCTLG")         3, true, true,  8, 1, 148, 4,  0, 0}, // #761
  {DBGFIELD("STCTG_STCTL")        6, true, true, 130, 2,  1, 4,  0, 0}, // #762
  {DBGFIELD("EPAIR_EPAR_ESAIR_ESAR") 1, false, false,  1, 1, 12, 3,  0, 0}, // #763
  {DBGFIELD("SSAIR_SSAR")         3, true, true,  3, 1, 10, 2,  0, 0}, // #764
  {DBGFIELD("ESEA")               3, true, true,  3, 1, 10, 2,  0, 0}, // #765
  {DBGFIELD("SPX_STPX")           3, true, true,  3, 1, 10, 2,  0, 0}, // #766
  {DBGFIELD("ISKE")               3, true, true,  3, 1, 10, 2,  0, 0}, // #767
  {DBGFIELD("IVSK")               3, true, true,  3, 1, 10, 2,  0, 0}, // #768
  {DBGFIELD("SSKE_SSKEOpt")       3, true, true,  3, 1, 10, 2,  0, 0}, // #769
  {DBGFIELD("RRBE_RRBM")          3, true, true,  3, 1, 10, 2,  0, 0}, // #770
  {DBGFIELD("IRBM")               3, true, true,  3, 1, 10, 2,  0, 0}, // #771
  {DBGFIELD("PFMF")               3, true, true,  3, 1, 10, 2,  0, 0}, // #772
  {DBGFIELD("TB")                 3, true, true,  3, 1,  9, 3,  0, 0}, // #773
  {DBGFIELD("PGIN")               3, true, true,  3, 1, 10, 2,  0, 0}, // #774
  {DBGFIELD("PGOUT")              3, true, true,  3, 1, 10, 2,  0, 0}, // #775
  {DBGFIELD("IPTE_IPTEOpt_IPTEOptOpt") 3, true, true,  3, 1, 10, 2,  0, 0}, // #776
  {DBGFIELD("IDTE_IDTEOpt")       3, true, true,  3, 1, 10, 2,  0, 0}, // #777
  {DBGFIELD("CRDTE_CRDTEOpt")     3, true, true,  3, 1, 10, 2,  0, 0}, // #778
  {DBGFIELD("PTLB")               3, true, true,  3, 1, 10, 2,  0, 0}, // #779
  {DBGFIELD("CSP_CSPG")           3, true, true,  3, 1,  9, 3,  0, 0}, // #780
  {DBGFIELD("LPTEA")              3, true, true,  3, 1,  8, 4,  0, 0}, // #781
  {DBGFIELD("LRA_LRAG_LRAY")      3, true, true,  3, 1,  9, 3,  0, 0}, // #782
  {DBGFIELD("STRAG")              3, true, true,  3, 1, 10, 2,  0, 0}, // #783
  {DBGFIELD("LURA_LURAG")         3, true, true,  3, 1, 10, 2,  0, 0}, // #784
  {DBGFIELD("STURA_STURG")        3, true, true,  3, 1, 10, 2,  0, 0}, // #785
  {DBGFIELD("TPROT")              3, true, true,  3, 1, 10, 2,  0, 0}, // #786
  {DBGFIELD("MVCK_MVCP_MVCS")     6, true, true, 151, 3, 185, 5,  0, 0}, // #787
  {DBGFIELD("MVCDK_MVCSK")        6, true, true, 154, 2,  1, 4,  0, 0}, // #788
  {DBGFIELD("MVCOS")              3, true, true,  3, 1, 10, 2,  0, 0}, // #789
  {DBGFIELD("MVPG")               3, true, true,  3, 1, 10, 2,  0, 0}, // #790
  {DBGFIELD("LASP")               3, true, true,  3, 1, 10, 2,  0, 0}, // #791
  {DBGFIELD("PALB")               3, true, true,  1, 1,  1, 3,  0, 0}, // #792
  {DBGFIELD("PC")                 3, true, true,  3, 1, 10, 2,  0, 0}, // #793
  {DBGFIELD("PR")                 3, true, true,  3, 1, 10, 2,  0, 0}, // #794
  {DBGFIELD("PT_PTI")             3, true, true,  3, 1, 10, 2,  0, 0}, // #795
  {DBGFIELD("RP")                 3, true, true,  3, 1, 10, 2,  0, 0}, // #796
  {DBGFIELD("BSA_BSG")            3, true, true,  3, 1, 10, 2,  0, 0}, // #797
  {DBGFIELD("TAR")                3, true, true,  3, 1, 10, 2,  0, 0}, // #798
  {DBGFIELD("BAKR")               3, true, true,  3, 1, 10, 2,  0, 0}, // #799
  {DBGFIELD("EREG_EREGG")         3, true, true,  3, 1, 10, 2,  0, 0}, // #800
  {DBGFIELD("ESTA_MSTA")          3, true, true,  3, 1,  9, 3,  0, 0}, // #801
  {DBGFIELD("PTFF")               3, true, true,  3, 1, 10, 2,  0, 0}, // #802
  {DBGFIELD("SCK_SCKC_SCKPF")     3, true, true,  3, 1, 10, 2,  0, 0}, // #803
  {DBGFIELD("SPT")                3, true, true,  8, 1,  1, 3,  0, 0}, // #804
  {DBGFIELD("STCK_STCKF")         6, true, true, 156, 3, 97, 5,  0, 0}, // #805
  {DBGFIELD("STCKE")              9, true, true, 159, 3, 92, 5,  0, 0}, // #806
  {DBGFIELD("STCKC")              3, true, true,  3, 1, 10, 2,  0, 0}, // #807
  {DBGFIELD("STPT")               2, true, false, 97, 2,  1, 4,  0, 0}, // #808
  {DBGFIELD("STAP")               3, true, true,  3, 1, 10, 2,  0, 0}, // #809
  {DBGFIELD("STIDP")              3, true, true,  3, 1, 10, 2,  0, 0}, // #810
  {DBGFIELD("STSI")               3, true, true,  3, 1,  9, 3,  0, 0}, // #811
  {DBGFIELD("STFL_STFLE")         3, true, true,  3, 1,  9, 3,  0, 0}, // #812
  {DBGFIELD("ECAG")               3, true, true,  3, 1, 10, 2,  0, 0}, // #813
  {DBGFIELD("ECTG")               3, true, true,  3, 1,  9, 3,  0, 0}, // #814
  {DBGFIELD("PTF")                3, true, true,  3, 1, 10, 2,  0, 0}, // #815
  {DBGFIELD("PCKMO")              3, true, true,  3, 1, 10, 2,  0, 0}, // #816
  {DBGFIELD("SVC")                3, true, true,  3, 1, 10, 2,  0, 0}, // #817
  {DBGFIELD("MC")                 3, true, true, 60, 1,  1, 3,  0, 0}, // #818
  {DBGFIELD("DIAG")               3, true, true,  3, 1, 10, 2,  0, 0}, // #819
  {DBGFIELD("TRACE_TRACG")        1, false, false, 60, 1,  1, 3,  0, 0}, // #820
  {DBGFIELD("TRAP2_TRAP4")        3, true, true,  3, 1, 10, 2,  0, 0}, // #821
  {DBGFIELD("SIGA_SIGP")          3, true, true,  3, 1, 10, 2,  0, 0}, // #822
  {DBGFIELD("SIE")                3, true, true,  3, 1, 10, 2,  0, 0}, // #823
  {DBGFIELD("LPP")                1, false, false, 60, 1,  1, 3,  0, 0}, // #824
  {DBGFIELD("ECPGA")              3, true, true,  3, 1,  9, 3,  0, 0}, // #825
  {DBGFIELD("ECCTR_EPCTR")        3, true, true,  3, 1,  9, 3,  0, 0}, // #826
  {DBGFIELD("LCCTL")              3, true, true,  3, 1, 10, 2,  0, 0}, // #827
  {DBGFIELD("LPCTL_LSCTL")        3, true, true,  3, 1, 10, 2,  0, 0}, // #828
  {DBGFIELD("QCTRI_QSI")          3, true, true,  3, 1, 10, 2,  0, 0}, // #829
  {DBGFIELD("SCCTR_SPCTR")        3, true, true,  3, 1, 10, 2,  0, 0}, // #830
  {DBGFIELD("CSCH_HSCH_RSCH_XSCH") 3, true, true,  3, 1, 10, 2,  0, 0}, // #831
  {DBGFIELD("MSCH_SSCH_STSCH_TSCH") 3, true, true,  3, 1, 10, 2,  0, 0}, // #832
  {DBGFIELD("RCHP")               3, true, true,  3, 1, 10, 2,  0, 0}, // #833
  {DBGFIELD("SCHM")               3, true, true,  3, 1, 10, 2,  0, 0}, // #834
  {DBGFIELD("STCPS_STCRW")        3, true, true,  3, 1, 10, 2,  0, 0}, // #835
  {DBGFIELD("TPI")                3, true, true,  3, 1, 10, 2,  0, 0}, // #836
  {DBGFIELD("SAL")                3, true, true,  3, 1, 10, 2,  0, 0}, // #837
  {DBGFIELD("KIMD_KLMD_KMAC")     3, true, true,  3, 1,  8, 4,  0, 0}, // #838
  {DBGFIELD("POPCNT")             1, false, false, 39, 1, 32, 4,  0, 0}, // #839
  {DBGFIELD("VFI")                1, false, false, 112, 1, 53, 3,  0, 0}, // #840
  {DBGFIELD("VFM")                1, false, false, 112, 1, 53, 3,  0, 0}, // #841
  {DBGFIELD("VCVB_VCVBG")         3, true, true, 138, 2, 190, 5,  0, 0}, // #842
  {DBGFIELD("AGF")                1, false, false, 39, 2, 36, 5,  1, 1}, // #843
  {DBGFIELD("SGF")                1, false, false, 39, 2, 36, 5,  1, 1}, // #844
  {DBGFIELD("KM_KMC_KMCTR_KMF_KMO") 3, true, true,  3, 1, 106, 5,  0, 0}, // #845
  {DBGFIELD("PCC_PPNO")           3, true, true,  3, 1,  8, 4,  0, 0}, // #846
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH") 1, false, false,  1, 1, 12, 3,  0, 0}, // #847
  {DBGFIELD("VN_VNC_VNO")         1, false, false, 115, 1, 29, 3,  0, 0}, // #848
  {DBGFIELD("VO")                 1, false, false, 115, 1, 29, 3,  0, 0}, // #849
  {DBGFIELD("VPOPCT")             1, false, false, 115, 1, 29, 3,  0, 0}, // #850
  {DBGFIELD("WFMDB")              1, false, false, 115, 1, 60, 3,  0, 0}, // #851
  {DBGFIELD("VFMA_VFMS")          1, false, false, 112, 1, 53, 3,  0, 0}, // #852
  {DBGFIELD("VFMADB_VFMSDB")      1, false, false, 115, 1, 60, 3,  0, 0}, // #853
  {DBGFIELD("WFMADB_WFMSDB")      1, false, false, 115, 1, 60, 3,  0, 0}, // #854
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #855
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #856
  {DBGFIELD("LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, false, 39, 1, 29, 3,  0, 0}, // #857
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ") 1, false, false, 39, 2, 37, 4,  1, 1}, // #858
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ") 1, false, false, 66, 2,  1, 4,  0, 0}, // #859
  {DBGFIELD("ALSI_ASI")           1, false, false, 66, 2, 37, 4,  0, 0}, // #860
  {DBGFIELD("ALGF")               1, false, false, 39, 2, 19, 5,  1, 1}, // #861
  {DBGFIELD("PCC")                3, true, true,  3, 1,  8, 4,  0, 0}, // #862
  {DBGFIELD("CELFBR_CELGBR")      2, true, false, 134, 2, 118, 4,  0, 0}, // #863
  {DBGFIELD("MD_MEE")             1, false, false, 114, 2, 63, 4,  1, 1}, // #864
  {DBGFIELD("MDR_MEER")           1, false, false, 115, 1, 60, 3,  0, 0}, // #865
  {DBGFIELD("CFDTR")              2, true, false, 134, 2, 87, 5,  0, 0}, // #866
  {DBGFIELD("CFXTR")              2, true, false, 138, 2, 87, 5,  0, 0}, // #867
  {DBGFIELD("TDCDT_TDGDT")        1, false, false, 114, 2, 56, 4,  0, 0}, // #868
  {DBGFIELD("SCK")                3, true, true,  3, 1, 10, 2,  0, 0}, // #869
  {DBGFIELD("SCKPF")              3, true, true,  3, 1, 10, 2,  0, 0}, // #870
  {DBGFIELD("RISBG_RISBG32")      1, false, false, 39, 1,  1, 3,  0, 0}, // #871
}; // Z14ModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc Z15ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  16383, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("ADJDYNALLOC")        1, false, false, 39, 1,  1, 3,  0, 0}, // #1
  {DBGFIELD("CallBRCL_BRC_BRCAsm_BRCL_BRCLAsm") 1, false, false, 14, 1,  1, 3,  0, 0}, // #2
  {DBGFIELD("CallJG_J_JAsmE_JAsmH_JAsmHE_JAsmL_JAsmLE_JAsmLH_JAsmM_JAsmNE_JAsmNH_JAsmNHE_JAsmNL_JAsmNLE_JAsmNLH_JAsmNM_JAsmNO_JAsmNP_JAsmNZ_JAsmO_JAsmP_JAsmZ_JG_JGAsmE_JGAsmH_JGAsmHE_JGAsmL_JGAsmLE_JGAsmLH_JGAsmM_JGAsmNE_JGAsmNH_JGAsmNHE_JGAsmNL_JGAsmNLE_JGAsmNLH_JGAsmNM_JGAsmNO_JGAsmNP_JGAsmNZ_JGAsmO_JGAsmP_JGAsmZ") 1, false, false, 14, 1,  1, 3,  0, 0}, // #3
  {DBGFIELD("CallBCR_BC_BCAsm_BCR_BCRAsm") 1, false, false, 60, 1,  1, 3,  0, 0}, // #4
  {DBGFIELD("CallBR_B_BAsmE_BAsmH_BAsmHE_BAsmL_BAsmLE_BAsmLH_BAsmM_BAsmNE_BAsmNH_BAsmNHE_BAsmNL_BAsmNLE_BAsmNLH_BAsmNM_BAsmNO_BAsmNP_BAsmNZ_BAsmO_BAsmP_BAsmZ_BR_BRAsmE_BRAsmH_BRAsmHE_BRAsmL_BRAsmLE_BRAsmLH_BRAsmM_BRAsmNE_BRAsmNH_BRAsmNHE_BRAsmNL_BRAsmNLE_BRAsmNLH_BRAsmNM_BRAsmNO_BRAsmNP_BRAsmNZ_BRAsmO_BRAsmP_BRAsmZ") 1, false, false, 60, 1,  1, 3,  0, 0}, // #5
  {DBGFIELD("BI_BIAsmE_BIAsmH_BIAsmHE_BIAsmL_BIAsmLE_BIAsmLH_BIAsmM_BIAsmNE_BIAsmNH_BIAsmNHE_BIAsmNL_BIAsmNLE_BIAsmNLH_BIAsmNM_BIAsmNO_BIAsmNP_BIAsmNZ_BIAsmO_BIAsmP_BIAsmZ_BIC_BICAsm") 1, false, false, 66, 2,  1, 4,  0, 0}, // #6
  {DBGFIELD("BRCT_BRCTG")         1, false, true, 39, 1,  1, 3,  0, 0}, // #7
  {DBGFIELD("BRCTH")              3, true, true, 85, 2,  1, 4,  0, 0}, // #8
  {DBGFIELD("BCT_BCTG_BCTGR_BCTR") 3, true, true, 85, 2,  1, 4,  0, 0}, // #9
  {DBGFIELD("BRXH_BRXHG_BRXLE_BRXLG_BXH_BXHG_BXLE_BXLEG") 6, true, true, 87, 2,  1, 4,  0, 0}, // #10
  {DBGFIELD("CGIJ_CGIJAsm_CGIJAsmE_CGIJAsmH_CGIJAsmHE_CGIJAsmL_CGIJAsmLE_CGIJAsmLH_CGIJAsmNE_CGIJAsmNH_CGIJAsmNHE_CGIJAsmNL_CGIJAsmNLE_CGIJAsmNLH_CGRJ_CGRJAsm_CGRJAsmE_CGRJAsmH_CGRJAsmHE_CGRJAsmL_CGRJAsmLE_CGRJAsmLH_CGRJAsmNE_CGRJAsmNH_CGRJAsmNHE_CGRJAsmNL_CGRJAsmNLE_CGRJAsmNLH_CIJ_CIJAsm_CIJAsmE_CIJAsmH_CIJAsmHE_CIJAsmL_CIJAsmLE_CIJAsmLH_CIJAsmNE_CIJAsmNH_CIJAsmNHE_CIJAsmNL_CIJAsmNLE_CIJAsmNLH_CLGIJ_CLGIJAsm_CLGIJAsmE_CLGIJAsmH_CLGIJAsmHE_CLGIJAsmL_CLGIJAsmLE_CLGIJAsmLH_CLGIJAsmNE_CLGIJAsmNH_CLGIJAsmNHE_CLGIJAsmNL_CLGIJAsmNLE_CLGIJAsmNLH_CLGRJ_CLGRJAsm_CLGRJAsmE_CLGRJAsmH_CLGRJAsmHE_CLGRJAsmL_CLGRJAsmLE_CLGRJAsmLH_CLGRJAsmNE_CLGRJAsmNH_CLGRJAsmNHE_CLGRJAsmNL_CLGRJAsmNLE_CLGRJAsmNLH_CLIJ_CLIJAsm_CLIJAsmE_CLIJAsmH_CLIJAsmHE_CLIJAsmL_CLIJAsmLE_CLIJAsmLH_CLIJAsmNE_CLIJAsmNH_CLIJAsmNHE_CLIJAsmNL_CLIJAsmNLE_CLIJAsmNLH_CLRJ_CLRJAsm_CLRJAsmE_CLRJAsmH_CLRJAsmHE_CLRJAsmL_CLRJAsmLE_CLRJAsmLH_CLRJAsmNE_CLRJAsmNH_CLRJAsmNHE_CLRJAsmNL_CLRJAsmNLE_CLRJAsmNLH_CRJ_CRJAsm_CRJAsmE_CRJAsmH_CRJAsmHE_CRJAsmL_CRJAsmLE_CRJAsmLH_CRJAsmNE_CRJAsmNH_CRJAsmNHE_CRJAsmNL_CRJAsmNLE_CRJAsmNLH") 1, false, false, 60, 1,  1, 3,  0, 0}, // #11
  {DBGFIELD("CGIBCall_CGIBReturn_CGRBCall_CGRBReturn_CIBCall_CIBReturn_CLGIBCall_CLGIBReturn_CLGRBCall_CLGRBReturn_CLIBCall_CLIBReturn_CLRBCall_CLRBReturn_CRBCall_CRBReturn_CGIB_CGIBAsm_CGIBAsmE_CGIBAsmH_CGIBAsmHE_CGIBAsmL_CGIBAsmLE_CGIBAsmLH_CGIBAsmNE_CGIBAsmNH_CGIBAsmNHE_CGIBAsmNL_CGIBAsmNLE_CGIBAsmNLH_CGRB_CGRBAsm_CGRBAsmE_CGRBAsmH_CGRBAsmHE_CGRBAsmL_CGRBAsmLE_CGRBAsmLH_CGRBAsmNE_CGRBAsmNH_CGRBAsmNHE_CGRBAsmNL_CGRBAsmNLE_CGRBAsmNLH_CIB_CIBAsm_CIBAsmE_CIBAsmH_CIBAsmHE_CIBAsmL_CIBAsmLE_CIBAsmLH_CIBAsmNE_CIBAsmNH_CIBAsmNHE_CIBAsmNL_CIBAsmNLE_CIBAsmNLH_CLGIB_CLGIBAsm_CLGIBAsmE_CLGIBAsmH_CLGIBAsmHE_CLGIBAsmL_CLGIBAsmLE_CLGIBAsmLH_CLGIBAsmNE_CLGIBAsmNH_CLGIBAsmNHE_CLGIBAsmNL_CLGIBAsmNLE_CLGIBAsmNLH_CLGRB_CLGRBAsm_CLGRBAsmE_CLGRBAsmH_CLGRBAsmHE_CLGRBAsmL_CLGRBAsmLE_CLGRBAsmLH_CLGRBAsmNE_CLGRBAsmNH_CLGRBAsmNHE_CLGRBAsmNL_CLGRBAsmNLE_CLGRBAsmNLH_CLIB_CLIBAsm_CLIBAsmE_CLIBAsmH_CLIBAsmHE_CLIBAsmL_CLIBAsmLE_CLIBAsmLH_CLIBAsmNE_CLIBAsmNH_CLIBAsmNHE_CLIBAsmNL_CLIBAsmNLE_CLIBAsmNLH_CLRB_CLRBAsm_CLRBAsmE_CLRBAsmH_CLRBAsmHE_CLRBAsmL_CLRBAsmLE_CLRBAsmLH_CLRBAsmNE_CLRBAsmNH_CLRBAsmNHE_CLRBAsmNL_CLRBAsmNLE_CLRBAsmNLH_CRB_CRBAsm_CRBAsmE_CRBAsmH_CRBAsmHE_CRBAsmL_CRBAsmLE_CRBAsmLH_CRBAsmNE_CRBAsmNH_CRBAsmNHE_CRBAsmNL_CRBAsmNLE_CRBAsmNLH") 3, true, true, 61, 1,  1, 3,  0, 0}, // #12
  {DBGFIELD("CondTrap_Trap")      1, false, false, 14, 1,  1, 3,  0, 0}, // #13
  {DBGFIELD("CGIT_CGITAsm_CGITAsmE_CGITAsmH_CGITAsmHE_CGITAsmL_CGITAsmLE_CGITAsmLH_CGITAsmNE_CGITAsmNH_CGITAsmNHE_CGITAsmNL_CGITAsmNLE_CGITAsmNLH_CGRT_CGRTAsm_CGRTAsmE_CGRTAsmH_CGRTAsmHE_CGRTAsmL_CGRTAsmLE_CGRTAsmLH_CGRTAsmNE_CGRTAsmNH_CGRTAsmNHE_CGRTAsmNL_CGRTAsmNLE_CGRTAsmNLH_CIT_CITAsm_CITAsmE_CITAsmH_CITAsmHE_CITAsmL_CITAsmLE_CITAsmLH_CITAsmNE_CITAsmNH_CITAsmNHE_CITAsmNL_CITAsmNLE_CITAsmNLH_CRT_CRTAsm_CRTAsmE_CRTAsmH_CRTAsmHE_CRTAsmL_CRTAsmLE_CRTAsmLH_CRTAsmNE_CRTAsmNH_CRTAsmNHE_CRTAsmNL_CRTAsmNLE_CRTAsmNLH") 1, false, false, 60, 1,  1, 3,  0, 0}, // #14
  {DBGFIELD("CLGRT_CLGRTAsm_CLGRTAsmE_CLGRTAsmH_CLGRTAsmHE_CLGRTAsmL_CLGRTAsmLE_CLGRTAsmLH_CLGRTAsmNE_CLGRTAsmNH_CLGRTAsmNHE_CLGRTAsmNL_CLGRTAsmNLE_CLGRTAsmNLH_CLRT_CLRTAsm_CLRTAsmE_CLRTAsmH_CLRTAsmHE_CLRTAsmL_CLRTAsmLE_CLRTAsmLH_CLRTAsmNE_CLRTAsmNH_CLRTAsmNHE_CLRTAsmNL_CLRTAsmNLE_CLRTAsmNLH") 1, false, false, 60, 1,  1, 3,  0, 0}, // #15
  {DBGFIELD("CLFIT_CLFITAsm_CLFITAsmE_CLFITAsmH_CLFITAsmHE_CLFITAsmL_CLFITAsmLE_CLFITAsmLH_CLFITAsmNE_CLFITAsmNH_CLFITAsmNHE_CLFITAsmNL_CLFITAsmNLE_CLFITAsmNLH_CLGIT_CLGITAsm_CLGITAsmE_CLGITAsmH_CLGITAsmHE_CLGITAsmL_CLGITAsmLE_CLGITAsmLH_CLGITAsmNE_CLGITAsmNH_CLGITAsmNHE_CLGITAsmNL_CLGITAsmNLE_CLGITAsmNLH") 1, false, false, 60, 1,  1, 3,  0, 0}, // #16
  {DBGFIELD("CLGT_CLGTAsm_CLGTAsmE_CLGTAsmH_CLGTAsmHE_CLGTAsmL_CLGTAsmLE_CLGTAsmLH_CLGTAsmNE_CLGTAsmNH_CLGTAsmNHE_CLGTAsmNL_CLGTAsmNLE_CLGTAsmNLH_CLT_CLTAsm_CLTAsmE_CLTAsmH_CLTAsmHE_CLTAsmL_CLTAsmLE_CLTAsmLH_CLTAsmNE_CLTAsmNH_CLTAsmNHE_CLTAsmNL_CLTAsmNLE_CLTAsmNLH") 1, false, false, 66, 2,  1, 4,  0, 0}, // #17
  {DBGFIELD("BRAS")               3, true, true, 89, 2,  1, 4,  0, 0}, // #18
  {DBGFIELD("CallBRASL_BRASL")    3, true, true, 91, 2,  1, 4,  0, 0}, // #19
  {DBGFIELD("CallBASR_BAS_BASR")  3, true, true, 91, 2,  1, 4,  0, 0}, // #20
  {DBGFIELD("TLS_GDCALL_TLS_LDCALL") 3, true, true, 91, 2,  1, 4,  0, 0}, // #21
  {DBGFIELD("Return")             1, false, true, 60, 1,  1, 3,  0, 0}, // #22
  {DBGFIELD("CondReturn")         1, false, false, 60, 1,  1, 3,  0, 0}, // #23
  {DBGFIELD("MVGHI_MVHHI_MVHI")   1, false, false, 66, 2,  1, 4,  0, 0}, // #24
  {DBGFIELD("MVI_MVIY")           1, false, false, 66, 2,  1, 4,  0, 0}, // #25
  {DBGFIELD("MVC")                3, true, true, 93, 2,  1, 4,  0, 0}, // #26
  {DBGFIELD("MVCL_MVCLE_MVCLU")   3, true, true,  3, 1,  8, 4,  0, 0}, // #27
  {DBGFIELD("MVCRL")              3, true, true,  8, 1,  1, 3,  0, 0}, // #28
  {DBGFIELD("COPY_TO_REGCLASS_COPY") 1, false, false, 39, 1,  1, 3,  0, 0}, // #29
  {DBGFIELD("EXTRACT_SUBREG")     1, false, false, 39, 1,  1, 3,  0, 0}, // #30
  {DBGFIELD("INSERT_SUBREG")      1, false, false, 39, 1,  1, 3,  0, 0}, // #31
  {DBGFIELD("REG_SEQUENCE")       1, false, false, 39, 1,  1, 3,  0, 0}, // #32
  {DBGFIELD("LMux_L_LFH_LRL_LY")  1, false, false,  1, 1, 12, 3,  0, 0}, // #33
  {DBGFIELD("LCBB")               1, false, false,  1, 1, 139, 4,  0, 0}, // #34
  {DBGFIELD("LG_LGRL")            1, false, false,  1, 1, 12, 3,  0, 0}, // #35
  {DBGFIELD("L128")               1, false, false,  1, 1, 12, 3,  0, 0}, // #36
  {DBGFIELD("LLIHF_LLIHH_LLIHL")  1, false, false, 39, 1,  1, 3,  0, 0}, // #37
  {DBGFIELD("LLILF_LLILH_LLILL")  1, false, false, 39, 1,  1, 3,  0, 0}, // #38
  {DBGFIELD("LGFI_LGHI")          1, false, false, 39, 1,  1, 3,  0, 0}, // #39
  {DBGFIELD("LHIMux_LHI")         1, false, false, 39, 1,  1, 3,  0, 0}, // #40
  {DBGFIELD("LR")                 1, false, false, 39, 1,  1, 3,  0, 0}, // #41
  {DBGFIELD("LZRF_LZRG")          1, false, false,  1, 1, 12, 3,  0, 0}, // #42
  {DBGFIELD("LAT_LFHAT_LGAT")     1, false, false, 66, 2, 15, 4,  0, 0}, // #43
  {DBGFIELD("LT_LTG")             1, false, false, 39, 2, 19, 5,  0, 0}, // #44
  {DBGFIELD("LTGR_LTR")           1, false, false, 39, 1,  1, 3,  0, 0}, // #45
  {DBGFIELD("STG_STGRL")          1, false, false, 66, 2,  1, 4,  0, 0}, // #46
  {DBGFIELD("ST128")              1, false, false, 66, 2,  1, 4,  0, 0}, // #47
  {DBGFIELD("STMux_ST_STFH_STRL_STY") 1, false, false, 66, 2,  1, 4,  0, 0}, // #48
  {DBGFIELD("MVST")               3, true, true,  3, 1,  8, 4,  0, 0}, // #49
  {DBGFIELD("LOCRMux")            1, false, false, 39, 1, 29, 3,  0, 0}, // #50
  {DBGFIELD("LOCFHR_LOCFHRAsm_LOCFHRAsmE_LOCFHRAsmH_LOCFHRAsmHE_LOCFHRAsmL_LOCFHRAsmLE_LOCFHRAsmLH_LOCFHRAsmM_LOCFHRAsmNE_LOCFHRAsmNH_LOCFHRAsmNHE_LOCFHRAsmNL_LOCFHRAsmNLE_LOCFHRAsmNLH_LOCFHRAsmNM_LOCFHRAsmNO_LOCFHRAsmNP_LOCFHRAsmNZ_LOCFHRAsmO_LOCFHRAsmP_LOCFHRAsmZ_LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, false, 39, 1, 29, 3,  0, 0}, // #51
  {DBGFIELD("LOCHIMux_LOCGHI_LOCGHIAsm_LOCGHIAsmE_LOCGHIAsmH_LOCGHIAsmHE_LOCGHIAsmL_LOCGHIAsmLE_LOCGHIAsmLH_LOCGHIAsmM_LOCGHIAsmNE_LOCGHIAsmNH_LOCGHIAsmNHE_LOCGHIAsmNL_LOCGHIAsmNLE_LOCGHIAsmNLH_LOCGHIAsmNM_LOCGHIAsmNO_LOCGHIAsmNP_LOCGHIAsmNZ_LOCGHIAsmO_LOCGHIAsmP_LOCGHIAsmZ_LOCHHI_LOCHHIAsm_LOCHHIAsmE_LOCHHIAsmH_LOCHHIAsmHE_LOCHHIAsmL_LOCHHIAsmLE_LOCHHIAsmLH_LOCHHIAsmM_LOCHHIAsmNE_LOCHHIAsmNH_LOCHHIAsmNHE_LOCHHIAsmNL_LOCHHIAsmNLE_LOCHHIAsmNLH_LOCHHIAsmNM_LOCHHIAsmNO_LOCHHIAsmNP_LOCHHIAsmNZ_LOCHHIAsmO_LOCHHIAsmP_LOCHHIAsmZ_LOCHI_LOCHIAsm_LOCHIAsmE_LOCHIAsmH_LOCHIAsmHE_LOCHIAsmL_LOCHIAsmLE_LOCHIAsmLH_LOCHIAsmM_LOCHIAsmNE_LOCHIAsmNH_LOCHIAsmNHE_LOCHIAsmNL_LOCHIAsmNLE_LOCHIAsmNLH_LOCHIAsmNM_LOCHIAsmNO_LOCHIAsmNP_LOCHIAsmNZ_LOCHIAsmO_LOCHIAsmP_LOCHIAsmZ") 1, false, false, 39, 1, 29, 3,  0, 0}, // #52
  {DBGFIELD("LOCMux_LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCFH_LOCFHAsm_LOCFHAsmE_LOCFHAsmH_LOCFHAsmHE_LOCFHAsmL_LOCFHAsmLE_LOCFHAsmLH_LOCFHAsmM_LOCFHAsmNE_LOCFHAsmNH_LOCFHAsmNHE_LOCFHAsmNL_LOCFHAsmNLE_LOCFHAsmNLH_LOCFHAsmNM_LOCFHAsmNO_LOCFHAsmNP_LOCFHAsmNZ_LOCFHAsmO_LOCFHAsmP_LOCFHAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ") 1, false, false, 39, 2, 37, 4,  1, 1}, // #53
  {DBGFIELD("STOCMux_STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCFH_STOCFHAsm_STOCFHAsmE_STOCFHAsmH_STOCFHAsmHE_STOCFHAsmL_STOCFHAsmLE_STOCFHAsmLH_STOCFHAsmM_STOCFHAsmNE_STOCFHAsmNH_STOCFHAsmNHE_STOCFHAsmNL_STOCFHAsmNLE_STOCFHAsmNLH_STOCFHAsmNM_STOCFHAsmNO_STOCFHAsmNP_STOCFHAsmNZ_STOCFHAsmO_STOCFHAsmP_STOCFHAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ") 1, false, false, 66, 2,  1, 4,  0, 0}, // #54
  {DBGFIELD("SELRMux")            1, false, false, 39, 1, 29, 3,  0, 0}, // #55
  {DBGFIELD("SELFHR_SELFHRAsm_SELFHRAsmE_SELFHRAsmH_SELFHRAsmHE_SELFHRAsmL_SELFHRAsmLE_SELFHRAsmLH_SELFHRAsmM_SELFHRAsmNE_SELFHRAsmNH_SELFHRAsmNHE_SELFHRAsmNL_SELFHRAsmNLE_SELFHRAsmNLH_SELFHRAsmNM_SELFHRAsmNO_SELFHRAsmNP_SELFHRAsmNZ_SELFHRAsmO_SELFHRAsmP_SELFHRAsmZ_SELGR_SELGRAsm_SELGRAsmE_SELGRAsmH_SELGRAsmHE_SELGRAsmL_SELGRAsmLE_SELGRAsmLH_SELGRAsmM_SELGRAsmNE_SELGRAsmNH_SELGRAsmNHE_SELGRAsmNL_SELGRAsmNLE_SELGRAsmNLH_SELGRAsmNM_SELGRAsmNO_SELGRAsmNP_SELGRAsmNZ_SELGRAsmO_SELGRAsmP_SELGRAsmZ_SELR_SELRAsm_SELRAsmE_SELRAsmH_SELRAsmHE_SELRAsmL_SELRAsmLE_SELRAsmLH_SELRAsmM_SELRAsmNE_SELRAsmNH_SELRAsmNHE_SELRAsmNL_SELRAsmNLE_SELRAsmNLH_SELRAsmNM_SELRAsmNO_SELRAsmNP_SELRAsmNZ_SELRAsmO_SELRAsmP_SELRAsmZ") 1, false, false, 39, 1, 29, 3,  0, 0}, // #56
  {DBGFIELD("LBR_LGR_LHR")        1, false, false, 39, 1,  1, 3,  0, 0}, // #57
  {DBGFIELD("LGBR_LGFR_LGHR")     1, false, false, 39, 1,  1, 3,  0, 0}, // #58
  {DBGFIELD("LTGF")               1, false, false, 39, 2, 19, 5,  0, 0}, // #59
  {DBGFIELD("LTGFR")              1, false, false, 39, 1,  1, 3,  0, 0}, // #60
  {DBGFIELD("LBMux_LB_LBH")       1, false, false, 39, 2, 15, 4,  0, 0}, // #61
  {DBGFIELD("LH_LHY")             1, false, false, 39, 2, 15, 4,  0, 0}, // #62
  {DBGFIELD("LHMux_LHH_LHRL")     1, false, false, 39, 2, 15, 4,  0, 0}, // #63
  {DBGFIELD("LGB_LGF_LGH")        1, false, false, 39, 2, 15, 4,  0, 0}, // #64
  {DBGFIELD("LGFRL_LGHRL")        1, false, false, 39, 2, 15, 4,  0, 0}, // #65
  {DBGFIELD("LLCRMux_LLCR")       1, false, false, 39, 1,  1, 3,  0, 0}, // #66
  {DBGFIELD("LLHRMux_LLHR")       1, false, false, 39, 1,  1, 3,  0, 0}, // #67
  {DBGFIELD("LLGCR_LLGFR_LLGHR_LLGTR") 1, false, false, 39, 1,  1, 3,  0, 0}, // #68
  {DBGFIELD("LLCMux_LLC")         1, false, false,  1, 1, 12, 3,  0, 0}, // #69
  {DBGFIELD("LLHMux_LLH")         1, false, false,  1, 1, 12, 3,  0, 0}, // #70
  {DBGFIELD("LLCH_LLHH")          1, false, false, 39, 2, 15, 4,  0, 0}, // #71
  {DBGFIELD("LLHRL")              1, false, false,  1, 1, 12, 3,  0, 0}, // #72
  {DBGFIELD("LLGC_LLGF_LLGFRL_LLGH_LLGHRL_LLGT") 1, false, false,  1, 1, 12, 3,  0, 0}, // #73
  {DBGFIELD("LLZRGF")             1, false, false,  1, 1, 12, 3,  0, 0}, // #74
  {DBGFIELD("LLGFAT_LLGTAT")      1, false, false, 66, 2, 15, 4,  0, 0}, // #75
  {DBGFIELD("STCMux_STC_STCH_STCY") 1, false, false, 66, 2,  1, 4,  0, 0}, // #76
  {DBGFIELD("STHMux_STH_STHH_STHRL_STHY") 1, false, false, 66, 2,  1, 4,  0, 0}, // #77
  {DBGFIELD("STCM_STCMH_STCMY")   1, false, false, 66, 2,  1, 4,  0, 0}, // #78
  {DBGFIELD("LM_LMG_LMH_LMY")     3, true, true, 16, 1, 24, 4,  0, 0}, // #79
  {DBGFIELD("LMD")                3, true, true,  3, 1,  9, 3,  0, 0}, // #80
  {DBGFIELD("STM_STMG_STMH_STMY") 3, true, true, 95, 2,  1, 4,  0, 0}, // #81
  {DBGFIELD("LRVGR_LRVR")         1, false, false, 39, 1,  1, 3,  0, 0}, // #82
  {DBGFIELD("LRV_LRVG_LRVH")      1, false, false, 39, 2, 15, 4,  0, 0}, // #83
  {DBGFIELD("STRV_STRVG_STRVH")   1, false, false, 66, 2,  1, 4,  0, 0}, // #84
  {DBGFIELD("MVCIN")              3, true, true,  3, 1, 10, 2,  0, 0}, // #85
  {DBGFIELD("LA_LARL_LAY")        1, false, false, 39, 1,  1, 3,  0, 0}, // #86
  {DBGFIELD("GOT")                1, false, false, 39, 1,  1, 3,  0, 0}, // #87
  {DBGFIELD("LPGR_LPR")           1, false, false, 39, 1,  1, 4,  0, 0}, // #88
  {DBGFIELD("LNGFR_LPGFR")        2, true, false, 36, 1, 28, 4,  0, 0}, // #89
  {DBGFIELD("LNGR_LNR")           1, false, false, 39, 1,  1, 4,  0, 0}, // #90
  {DBGFIELD("LCGR_LCR")           1, false, false, 39, 1,  1, 3,  0, 0}, // #91
  {DBGFIELD("LCGFR")              2, true, false, 36, 1, 28, 4,  0, 0}, // #92
  {DBGFIELD("IC_ICY")             1, false, false, 39, 2, 15, 4,  1, 1}, // #93
  {DBGFIELD("IC32_IC32Y")         1, false, false, 39, 2, 15, 4,  1, 1}, // #94
  {DBGFIELD("ICM_ICMH_ICMY")      1, false, false, 39, 2, 19, 5,  1, 1}, // #95
  {DBGFIELD("IIFMux_IIHMux_IILMux") 1, false, false, 39, 1,  1, 3,  0, 0}, // #96
  {DBGFIELD("IIHF64_IIHF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #97
  {DBGFIELD("IIHH64_IIHH")        1, false, false, 39, 1,  1, 3,  0, 0}, // #98
  {DBGFIELD("IIHL64_IIHL")        1, false, false, 39, 1,  1, 3,  0, 0}, // #99
  {DBGFIELD("IILF64_IILF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #100
  {DBGFIELD("IILH64_IILH")        1, false, false, 39, 1,  1, 3,  0, 0}, // #101
  {DBGFIELD("IILL64_IILL")        1, false, false, 39, 1,  1, 3,  0, 0}, // #102
  {DBGFIELD("A_AY")               1, false, false, 39, 2, 19, 5,  1, 1}, // #103
  {DBGFIELD("AH_AHY")             1, false, false, 39, 2, 36, 5,  1, 1}, // #104
  {DBGFIELD("AIH")                1, false, false, 39, 1,  1, 3,  0, 0}, // #105
  {DBGFIELD("AFIMux_AFI")         1, false, false, 39, 1,  1, 3,  0, 0}, // #106
  {DBGFIELD("AG")                 1, false, false, 39, 2, 19, 5,  1, 1}, // #107
  {DBGFIELD("AGFI")               1, false, false, 39, 1,  1, 3,  0, 0}, // #108
  {DBGFIELD("AGHI_AGHIK")         1, false, false, 39, 1,  1, 3,  0, 0}, // #109
  {DBGFIELD("AGR_AGRK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #110
  {DBGFIELD("AHI_AHIK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #111
  {DBGFIELD("AHIMux_AHIMuxK")     1, false, false, 39, 1,  1, 3,  0, 0}, // #112
  {DBGFIELD("AL_ALY")             1, false, false, 39, 2, 19, 5,  1, 1}, // #113
  {DBGFIELD("ALFI_ALHSIK")        1, false, false, 39, 1,  1, 3,  0, 0}, // #114
  {DBGFIELD("ALG_ALGF")           1, false, false, 39, 2, 19, 5,  1, 1}, // #115
  {DBGFIELD("ALGHSIK")            1, false, false, 39, 1,  1, 3,  0, 0}, // #116
  {DBGFIELD("ALGFI_ALGFR")        1, false, false, 39, 1,  1, 3,  0, 0}, // #117
  {DBGFIELD("ALGR_ALGRK")         1, false, false, 39, 1,  1, 3,  0, 0}, // #118
  {DBGFIELD("ALR_ALRK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #119
  {DBGFIELD("AR_ARK")             1, false, false, 39, 1,  1, 3,  0, 0}, // #120
  {DBGFIELD("AHHHR_ALHHHR")       1, false, false, 39, 1,  1, 3,  0, 0}, // #121
  {DBGFIELD("AHHLR_ALHHLR")       1, false, false, 39, 1, 28, 4,  0, 0}, // #122
  {DBGFIELD("ALSIH_ALSIHN")       1, false, false, 39, 1,  1, 3,  0, 0}, // #123
  {DBGFIELD("AGSI_ALGSI_ALSI_ASI") 1, false, false, 66, 2, 37, 4,  0, 0}, // #124
  {DBGFIELD("ALC_ALCG")           3, true, true, 39, 2, 36, 5,  1, 1}, // #125
  {DBGFIELD("ALCGR_ALCR")         3, true, true, 39, 1, 28, 4,  0, 0}, // #126
  {DBGFIELD("AGF_AGH")            1, false, false, 39, 2, 36, 5,  1, 1}, // #127
  {DBGFIELD("AGFR")               1, false, false, 39, 1, 28, 4,  0, 0}, // #128
  {DBGFIELD("S_SG_SY")            1, false, false, 39, 2, 19, 5,  1, 1}, // #129
  {DBGFIELD("SH_SHY")             1, false, false, 39, 2, 36, 5,  1, 1}, // #130
  {DBGFIELD("SGR_SGRK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #131
  {DBGFIELD("SLFI")               1, false, false, 39, 1,  1, 3,  0, 0}, // #132
  {DBGFIELD("SL_SLG_SLGF_SLY")    1, false, false, 39, 2, 19, 5,  1, 1}, // #133
  {DBGFIELD("SLGFI_SLGFR")        1, false, false, 39, 1,  1, 3,  0, 0}, // #134
  {DBGFIELD("SLGR_SLGRK")         1, false, false, 39, 1,  1, 3,  0, 0}, // #135
  {DBGFIELD("SLR_SLRK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #136
  {DBGFIELD("SR_SRK")             1, false, false, 39, 1,  1, 3,  0, 0}, // #137
  {DBGFIELD("SHHHR_SLHHHR")       1, false, false, 39, 1,  1, 3,  0, 0}, // #138
  {DBGFIELD("SHHLR_SLHHLR")       1, false, false, 39, 1, 28, 4,  0, 0}, // #139
  {DBGFIELD("SLB_SLBG")           3, true, true, 39, 2, 36, 5,  1, 1}, // #140
  {DBGFIELD("SLBGR_SLBR")         3, true, true, 39, 1, 28, 4,  0, 0}, // #141
  {DBGFIELD("SGF_SGH")            1, false, false, 39, 2, 36, 5,  1, 1}, // #142
  {DBGFIELD("SGFR")               1, false, false, 39, 1, 28, 4,  0, 0}, // #143
  {DBGFIELD("N_NG_NY")            1, false, false, 39, 2, 19, 5,  1, 1}, // #144
  {DBGFIELD("NGR_NGRK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #145
  {DBGFIELD("NIFMux_NIHMux_NILMux") 1, false, false, 39, 1,  1, 3,  0, 0}, // #146
  {DBGFIELD("NI_NIY")             1, false, false, 66, 2, 37, 4,  0, 0}, // #147
  {DBGFIELD("NIHF64_NIHF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #148
  {DBGFIELD("NIHH64_NIHH")        1, false, false, 39, 1,  1, 3,  0, 0}, // #149
  {DBGFIELD("NIHL64_NIHL")        1, false, false, 39, 1,  1, 3,  0, 0}, // #150
  {DBGFIELD("NILF64_NILF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #151
  {DBGFIELD("NILH64_NILH")        1, false, false, 39, 1,  1, 3,  0, 0}, // #152
  {DBGFIELD("NILL64_NILL")        1, false, false, 39, 1,  1, 3,  0, 0}, // #153
  {DBGFIELD("NR_NRK")             1, false, false, 39, 1,  1, 3,  0, 0}, // #154
  {DBGFIELD("NC")                 2, true, false, 97, 2, 144, 4,  0, 0}, // #155
  {DBGFIELD("O_OG_OY")            1, false, false, 39, 2, 19, 5,  1, 1}, // #156
  {DBGFIELD("OGR_OGRK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #157
  {DBGFIELD("OI_OIY")             1, false, false, 66, 2, 37, 4,  0, 0}, // #158
  {DBGFIELD("OIFMux_OIHMux_OILMux") 1, false, false, 39, 1,  1, 3,  0, 0}, // #159
  {DBGFIELD("OIHF64_OIHF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #160
  {DBGFIELD("OIHH64_OIHH")        1, false, false, 39, 1,  1, 3,  0, 0}, // #161
  {DBGFIELD("OIHL64_OIHL")        1, false, false, 39, 1,  1, 3,  0, 0}, // #162
  {DBGFIELD("OILF64_OILF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #163
  {DBGFIELD("OILH64_OILH")        1, false, false, 39, 1,  1, 3,  0, 0}, // #164
  {DBGFIELD("OILL64_OILL")        1, false, false, 39, 1,  1, 3,  0, 0}, // #165
  {DBGFIELD("OR_ORK")             1, false, false, 39, 1,  1, 3,  0, 0}, // #166
  {DBGFIELD("OC")                 2, true, false, 97, 2, 144, 4,  0, 0}, // #167
  {DBGFIELD("X_XG_XY")            1, false, false, 39, 2, 19, 5,  1, 1}, // #168
  {DBGFIELD("XI_XIY")             1, false, false, 66, 2, 37, 4,  0, 0}, // #169
  {DBGFIELD("XIFMux")             1, false, false, 39, 1,  1, 3,  0, 0}, // #170
  {DBGFIELD("XGR_XGRK")           1, false, false, 39, 1,  1, 3,  0, 0}, // #171
  {DBGFIELD("XIHF64_XIHF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #172
  {DBGFIELD("XILF64_XILF")        1, false, false, 39, 1,  1, 3,  0, 0}, // #173
  {DBGFIELD("XR_XRK")             1, false, false, 39, 1,  1, 3,  0, 0}, // #174
  {DBGFIELD("XC")                 2, true, false, 97, 2, 144, 4,  0, 0}, // #175
  {DBGFIELD("NCGRK_NCRK")         1, false, false, 39, 1,  1, 3,  0, 0}, // #176
  {DBGFIELD("OCGRK_OCRK")         1, false, false, 39, 1,  1, 3,  0, 0}, // #177
  {DBGFIELD("NNGRK_NNRK")         1, false, false, 39, 1,  1, 3,  0, 0}, // #178
  {DBGFIELD("NOGRK_NORK")         1, false, false, 39, 1,  1, 3,  0, 0}, // #179
  {DBGFIELD("NXGRK_NXRK")         1, false, false, 39, 1,  1, 3,  0, 0}, // #180
  {DBGFIELD("MS_MSGF_MSY")        1, false, false, 39, 2, 41, 4,  1, 1}, // #181
  {DBGFIELD("MSFI_MSR")           1, false, false, 39, 1, 15, 3,  0, 0}, // #182
  {DBGFIELD("MSG")                1, false, false, 39, 2, 63, 4,  1, 1}, // #183
  {DBGFIELD("MSGR")               1, false, false, 39, 1, 60, 3,  0, 0}, // #184
  {DBGFIELD("MSGFI_MSGFR")        1, false, false, 39, 1, 15, 3,  0, 0}, // #185
  {DBGFIELD("MLG")                3, true, true, 36, 2, 49, 4,  1, 1}, // #186
  {DBGFIELD("MLGR")               3, true, true, 36, 1, 53, 3,  0, 0}, // #187
  {DBGFIELD("MGHI")               1, false, false, 39, 1, 12, 3,  0, 0}, // #188
  {DBGFIELD("MHI")                1, false, false, 39, 1, 12, 3,  0, 0}, // #189
  {DBGFIELD("MH_MHY")             1, false, false, 39, 2, 118, 4,  1, 1}, // #190
  {DBGFIELD("MLR_MR")             3, true, true, 36, 1, 37, 3,  0, 0}, // #191
  {DBGFIELD("M_MFY_ML")           3, true, true, 36, 2, 45, 4,  1, 1}, // #192
  {DBGFIELD("MGH")                1, false, false, 39, 2, 118, 4,  1, 1}, // #193
  {DBGFIELD("MG")                 3, true, true, 36, 2, 49, 4,  1, 1}, // #194
  {DBGFIELD("MGRK")               3, true, true, 36, 1, 53, 3,  0, 0}, // #195
  {DBGFIELD("MSC")                1, false, false, 39, 2, 152, 5,  1, 1}, // #196
  {DBGFIELD("MSGC")               1, false, false, 39, 2, 81, 5,  1, 1}, // #197
  {DBGFIELD("MSRKC")              1, false, false, 39, 1, 36, 4,  0, 0}, // #198
  {DBGFIELD("MSGRKC")             1, false, false, 39, 1, 148, 4,  0, 0}, // #199
  {DBGFIELD("DR")                 3, true, true, 42, 1, 92, 3,  0, 0}, // #200
  {DBGFIELD("D")                  6, true, true, 48, 2, 67, 4,  1, 1}, // #201
  {DBGFIELD("DSGFR_DSGR")         3, true, true, 36, 1, 67, 3,  0, 0}, // #202
  {DBGFIELD("DSG_DSGF")           6, true, true, 36, 2, 67, 4,  1, 1}, // #203
  {DBGFIELD("DLR")                3, true, true, 42, 1, 92, 3,  0, 0}, // #204
  {DBGFIELD("DLGR")               3, true, true, 42, 1, 67, 3,  0, 0}, // #205
  {DBGFIELD("DL_DLG")             6, true, true, 48, 2, 67, 4,  1, 1}, // #206
  {DBGFIELD("SLL_SLLG_SLLK")      1, false, false, 39, 1,  1, 3,  0, 0}, // #207
  {DBGFIELD("SRL_SRLG_SRLK")      1, false, false, 39, 1,  1, 3,  0, 0}, // #208
  {DBGFIELD("SRA_SRAG_SRAK")      1, false, false, 39, 1,  1, 3,  0, 0}, // #209
  {DBGFIELD("SLA_SLAG_SLAK")      1, false, false, 39, 1,  1, 3,  0, 0}, // #210
  {DBGFIELD("SLDA_SLDL_SRDA_SRDL") 6, true, true, 48, 2, 76, 5,  0, 0}, // #211
  {DBGFIELD("RLL_RLLG")           1, false, false, 39, 2, 37, 4,  0, 0}, // #212
  {DBGFIELD("RISBG_RISBG32_RISBGN") 1, false, false, 39, 1,  1, 3,  0, 0}, // #213
  {DBGFIELD("RISBHH_RISBHL_RISBHG") 1, false, false, 39, 1,  1, 3,  0, 0}, // #214
  {DBGFIELD("RISBLH_RISBLL_RISBLG") 1, false, false, 39, 1,  1, 3,  0, 0}, // #215
  {DBGFIELD("RISBMux")            1, false, false, 39, 1,  1, 3,  0, 0}, // #216
  {DBGFIELD("RNSBG_ROSBG_RXSBG")  2, true, false, 36, 1, 28, 4,  0, 0}, // #217
  {DBGFIELD("CMux_C_CG_CY")       1, false, false, 66, 2, 15, 4,  1, 1}, // #218
  {DBGFIELD("CRL")                1, false, false, 66, 2, 15, 4,  0, 0}, // #219
  {DBGFIELD("CFIMux_CHIMux_CFI_CHI") 1, false, false, 60, 1,  1, 3,  0, 0}, // #220
  {DBGFIELD("CGFI_CGHI")          1, false, false, 60, 1,  1, 3,  0, 0}, // #221
  {DBGFIELD("CGHSI_CGRL")         1, false, false, 66, 2, 15, 4,  0, 0}, // #222
  {DBGFIELD("CGR_CR")             1, false, false, 60, 1,  1, 3,  0, 0}, // #223
  {DBGFIELD("CIH")                1, false, false, 60, 1,  1, 3,  0, 0}, // #224
  {DBGFIELD("CHF")                1, false, false, 66, 2, 15, 4,  1, 1}, // #225
  {DBGFIELD("CHSI")               1, false, false, 66, 2, 15, 4,  0, 0}, // #226
  {DBGFIELD("CLMux_CL_CLY")       1, false, false, 66, 2, 15, 4,  1, 1}, // #227
  {DBGFIELD("CLFHSI")             1, false, false, 66, 2, 15, 4,  0, 0}, // #228
  {DBGFIELD("CLFIMux_CLFI")       1, false, false, 60, 1,  1, 3,  0, 0}, // #229
  {DBGFIELD("CLG")                1, false, false, 66, 2, 15, 4,  1, 1}, // #230
  {DBGFIELD("CLGHRL_CLGHSI")      1, false, false, 66, 2, 15, 4,  0, 0}, // #231
  {DBGFIELD("CLGF")               1, false, false, 66, 2, 15, 4,  1, 1}, // #232
  {DBGFIELD("CLGFRL")             1, false, false, 66, 2, 15, 4,  0, 0}, // #233
  {DBGFIELD("CLGFI_CLGFR")        1, false, false, 60, 1,  1, 3,  0, 0}, // #234
  {DBGFIELD("CLGR")               1, false, false, 60, 1,  1, 3,  0, 0}, // #235
  {DBGFIELD("CLGRL")              1, false, false, 66, 2, 15, 4,  0, 0}, // #236
  {DBGFIELD("CLHF")               1, false, false, 66, 2, 15, 4,  1, 1}, // #237
  {DBGFIELD("CLHHSI_CLHRL")       1, false, false, 66, 2, 15, 4,  0, 0}, // #238
  {DBGFIELD("CLIH")               1, false, false, 60, 1,  1, 3,  0, 0}, // #239
  {DBGFIELD("CLI_CLIY")           1, false, false, 66, 2, 15, 4,  0, 0}, // #240
  {DBGFIELD("CLR")                1, false, false, 60, 1,  1, 3,  0, 0}, // #241
  {DBGFIELD("CLRL")               1, false, false, 66, 2, 15, 4,  0, 0}, // #242
  {DBGFIELD("CHHR_CLHHR")         1, false, false, 60, 1,  1, 3,  0, 0}, // #243
  {DBGFIELD("CHLR_CLHLR")         1, false, false, 60, 1, 29, 3,  0, 0}, // #244
  {DBGFIELD("CH_CHY")             1, false, false, 66, 2, 37, 4,  1, 1}, // #245
  {DBGFIELD("CHRL")               1, false, false, 66, 2, 37, 4,  0, 0}, // #246
  {DBGFIELD("CGH")                1, false, false, 66, 2, 37, 4,  1, 1}, // #247
  {DBGFIELD("CGHRL")              1, false, false, 66, 2, 37, 4,  0, 0}, // #248
  {DBGFIELD("CHHSI")              2, true, false, 99, 3, 157, 5,  0, 0}, // #249
  {DBGFIELD("CGF")                1, false, false, 66, 2, 37, 4,  1, 1}, // #250
  {DBGFIELD("CGFRL")              1, false, false, 66, 2, 37, 4,  0, 0}, // #251
  {DBGFIELD("CGFR")               1, false, false, 60, 1, 29, 3,  0, 0}, // #252
  {DBGFIELD("CLC")                2, true, false, 97, 2, 37, 4,  0, 0}, // #253
  {DBGFIELD("CLCL_CLCLE_CLCLU")   3, true, true,  3, 1,  8, 4,  0, 0}, // #254
  {DBGFIELD("CLST")               3, true, true,  3, 1,  8, 4,  0, 0}, // #255
  {DBGFIELD("TM_TMY")             1, false, false, 66, 2, 15, 4,  0, 0}, // #256
  {DBGFIELD("TMHMux_TMLMux")      1, false, false, 60, 1,  1, 3,  0, 0}, // #257
  {DBGFIELD("TMHH64_TMHH")        1, false, false, 60, 1,  1, 3,  0, 0}, // #258
  {DBGFIELD("TMHL64_TMHL")        1, false, false, 60, 1,  1, 3,  0, 0}, // #259
  {DBGFIELD("TMLH64_TMLH")        1, false, false, 60, 1,  1, 3,  0, 0}, // #260
  {DBGFIELD("TMLL64_TMLL")        1, false, false, 60, 1,  1, 3,  0, 0}, // #261
  {DBGFIELD("CLM_CLMH_CLMY")      1, false, false, 66, 2, 37, 4,  1, 1}, // #262
  {DBGFIELD("PFD_PFDRL")          1, false, false,  1, 1,  1, 3,  0, 0}, // #263
  {DBGFIELD("BPP")                1, false, false, 60, 1,  1, 3,  0, 0}, // #264
  {DBGFIELD("BPRP")               1, false, true, 60, 1,  1, 2,  0, 0}, // #265
  {DBGFIELD("NIAI")               1, false, false, 60, 1,  1, 3,  0, 0}, // #266
  {DBGFIELD("Serialize")          1, false, true, 60, 1,  1, 3,  0, 0}, // #267
  {DBGFIELD("LAA_LAAG")           1, false, false, 66, 2, 36, 5,  0, 0}, // #268
  {DBGFIELD("LAAL_LAALG")         1, false, false, 66, 2, 36, 5,  0, 0}, // #269
  {DBGFIELD("LAN_LANG")           1, false, false, 66, 2, 36, 5,  0, 0}, // #270
  {DBGFIELD("LAO_LAOG")           1, false, false, 66, 2, 36, 5,  0, 0}, // #271
  {DBGFIELD("LAX_LAXG")           1, false, false, 66, 2, 36, 5,  0, 0}, // #272
  {DBGFIELD("TS")                 1, false, true, 66, 2, 37, 4,  0, 0}, // #273
  {DBGFIELD("CS_CSG_CSY")         3, true, true, 99, 3, 162, 6,  0, 0}, // #274
  {DBGFIELD("CDS_CDSY")           6, true, true, 102, 3, 168, 6,  0, 0}, // #275
  {DBGFIELD("CDSG")               9, true, true, 105, 3, 174, 6,  0, 0}, // #276
  {DBGFIELD("CSST")               3, true, true,  3, 1, 10, 2,  0, 0}, // #277
  {DBGFIELD("PLO")                3, true, true,  3, 1, 10, 2,  0, 0}, // #278
  {DBGFIELD("LPQ")                3, true, true,  8, 1, 53, 3,  0, 0}, // #279
  {DBGFIELD("STPQ")               3, true, true, 70, 2,  1, 4,  0, 0}, // #280
  {DBGFIELD("LPD_LPDG")           3, true, true,  8, 1, 19, 4,  0, 0}, // #281
  {DBGFIELD("TR")                 3, true, true, 16, 1,  1, 3,  0, 0}, // #282
  {DBGFIELD("TRT")                6, true, true, 108, 2, 86, 6,  0, 0}, // #283
  {DBGFIELD("TRTR")               3, true, true,  3, 1,  8, 4,  0, 0}, // #284
  {DBGFIELD("TRE")                3, true, true,  3, 1,  9, 3,  0, 0}, // #285
  {DBGFIELD("TRTE_TRTEOpt_TRTRE_TRTREOpt") 3, true, true,  3, 1,  8, 4,  0, 0}, // #286
  {DBGFIELD("TROO_TROOOpt_TROT_TROTOpt_TRTO_TRTOOpt_TRTT_TRTTOpt") 3, true, true,  3, 1,  8, 4,  0, 0}, // #287
  {DBGFIELD("CU12_CU12Opt_CU14_CU14Opt_CU21_CU21Opt_CU24_CU24Opt_CU41_CU42") 3, true, true,  3, 1,  8, 4,  0, 0}, // #288
  {DBGFIELD("CUTFU_CUTFUOpt_CUUTF_CUUTFOpt") 3, true, true,  3, 1,  8, 4,  0, 0}, // #289
  {DBGFIELD("KM_KMA_KMC_KMCTR_KMF_KMO") 3, true, true,  3, 1, 106, 5,  0, 0}, // #290
  {DBGFIELD("KDSA_KIMD_KLMD_KMAC") 3, true, true,  3, 1,  8, 4,  0, 0}, // #291
  {DBGFIELD("PCC_PPNO_PRNO")      3, true, true,  3, 1,  8, 4,  0, 0}, // #292
  {DBGFIELD("LGG")                1, false, false,  1, 1, 12, 3,  0, 0}, // #293
  {DBGFIELD("LLGFSG")             1, false, false,  1, 1, 12, 3,  0, 0}, // #294
  {DBGFIELD("LGSC_STGSC")         3, true, true,  3, 1, 10, 2,  0, 0}, // #295
  {DBGFIELD("CVBG")               6, true, true, 110, 3, 92, 5,  1, 1}, // #296
  {DBGFIELD("CVB_CVBY")           6, true, true, 113, 3, 92, 5,  1, 1}, // #297
  {DBGFIELD("CVDG")               9, true, true, 116, 3,  1, 5,  0, 0}, // #298
  {DBGFIELD("CVD_CVDY")           6, true, true, 119, 3,  1, 5,  0, 0}, // #299
  {DBGFIELD("MVN_MVO_MVZ")        3, true, true, 16, 1,  1, 3,  0, 0}, // #300
  {DBGFIELD("PACK_PKA_PKU")       3, true, true, 16, 1,  1, 3,  0, 0}, // #301
  {DBGFIELD("UNPKA_UNPKU")        3, true, true, 16, 1, 49, 3,  0, 0}, // #302
  {DBGFIELD("UNPK")               2, true, false, 97, 2,  1, 4,  0, 0}, // #303
  {DBGFIELD("AP_SP_ZAP")          6, true, true, 122, 3, 180, 5,  0, 0}, // #304
  {DBGFIELD("MP")                 6, true, true, 162, 3,  1, 5,  0, 0}, // #305
  {DBGFIELD("DP")                 6, true, true, 125, 3,  1, 5,  0, 0}, // #306
  {DBGFIELD("SRP")                9, true, true, 110, 3, 97, 5,  0, 0}, // #307
  {DBGFIELD("CP")                 3, true, true, 128, 2, 185, 5,  0, 0}, // #308
  {DBGFIELD("TP")                 2, true, false, 114, 2, 144, 4,  0, 0}, // #309
  {DBGFIELD("ED_EDMK")            3, true, true,  3, 1, 10, 2,  0, 0}, // #310
  {DBGFIELD("CPYA_EAR_SAR")       1, false, false,  1, 1, 33, 3,  0, 0}, // #311
  {DBGFIELD("LAE_LAEY")           2, true, false, 39, 2, 15, 4,  0, 0}, // #312
  {DBGFIELD("LAM_LAMY")           3, true, true, 16, 1, 127, 4,  0, 0}, // #313
  {DBGFIELD("STAM_STAMY")         6, true, true, 130, 2,  1, 4,  0, 0}, // #314
  {DBGFIELD("IPM")                1, false, true, 39, 1, 33, 3,  0, 0}, // #315
  {DBGFIELD("SPM")                1, false, true,  1, 1, 33, 3,  0, 0}, // #316
  {DBGFIELD("BAL_BALR")           3, true, true, 91, 2,  1, 4,  0, 0}, // #317
  {DBGFIELD("TAM")                1, false, false, 60, 1,  1, 3,  0, 0}, // #318
  {DBGFIELD("SAM24_SAM31_SAM64")  1, false, true, 60, 1,  1, 3,  0, 0}, // #319
  {DBGFIELD("BSM")                3, true, true, 85, 2,  1, 4,  0, 0}, // #320
  {DBGFIELD("BASSM")              3, true, true, 91, 2,  1, 4,  0, 0}, // #321
  {DBGFIELD("TBEGIN_TBEGINC")     6, true, true, 132, 2, 41, 4,  0, 0}, // #322
  {DBGFIELD("TEND")               3, true, true, 60, 1,  1, 3,  0, 0}, // #323
  {DBGFIELD("TABORT")             3, true, true,  3, 1, 10, 2,  0, 0}, // #324
  {DBGFIELD("ETND")               1, false, false, 39, 1,  1, 3,  0, 0}, // #325
  {DBGFIELD("NTSTG")              1, false, false, 66, 2,  1, 4,  0, 0}, // #326
  {DBGFIELD("PPA")                3, true, true, 60, 1,  1, 3,  0, 0}, // #327
  {DBGFIELD("FLOGR")              3, true, true, 36, 1, 19, 4,  0, 0}, // #328
  {DBGFIELD("POPCNT_POPCNTOpt")   1, false, false, 39, 1, 32, 4,  0, 0}, // #329
  {DBGFIELD("SRST_SRSTU")         3, true, true,  3, 1,  8, 4,  0, 0}, // #330
  {DBGFIELD("CUSE")               3, true, true,  3, 1,  8, 4,  0, 0}, // #331
  {DBGFIELD("CFC")                3, true, true,  3, 1, 106, 5,  0, 0}, // #332
  {DBGFIELD("UPT")                3, true, true,  3, 1, 111, 7,  0, 0}, // #333
  {DBGFIELD("CKSM")               3, true, true,  3, 1,  8, 4,  0, 0}, // #334
  {DBGFIELD("CMPSC")              3, true, true,  3, 1, 106, 5,  0, 0}, // #335
  {DBGFIELD("SORTL")              3, true, true,  3, 1, 106, 5,  0, 0}, // #336
  {DBGFIELD("DFLTCC")             3, true, true,  3, 1, 106, 5,  0, 0}, // #337
  {DBGFIELD("EX_EXRL")            3, true, true, 60, 1,  1, 3,  0, 0}, // #338
  {DBGFIELD("InsnE_InsnRI_InsnRIE_InsnRIL_InsnRILU_InsnRIS_InsnRR_InsnRRE_InsnRRF_InsnRRS_InsnRS_InsnRSE_InsnRSI_InsnRSY_InsnRX_InsnRXE_InsnRXF_InsnRXY_InsnS_InsnSI_InsnSIL_InsnSIY_InsnSS_InsnSSE_InsnSSF") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #339
  {DBGFIELD("LZDR_LZER")          1, false, false, 60, 1,  1, 3,  0, 0}, // #340
  {DBGFIELD("LZXR")               2, true, false, 61, 1, 29, 3,  0, 0}, // #341
  {DBGFIELD("LER")                1, false, false, 115, 1, 29, 3,  0, 0}, // #342
  {DBGFIELD("LDGR_LDR_LDR32")     1, false, false, 60, 1,  1, 3,  0, 0}, // #343
  {DBGFIELD("LGDR")               1, false, false, 60, 1, 33, 3,  0, 0}, // #344
  {DBGFIELD("LXR")                3, true, true, 61, 1, 29, 3,  0, 0}, // #345
  {DBGFIELD("LTDBR_LTEBR")        1, false, false, 115, 1, 32, 4,  0, 0}, // #346
  {DBGFIELD("LTDBRCompare_LTEBRCompare") 1, false, false, 115, 1, 33, 3,  0, 0}, // #347
  {DBGFIELD("LTXBR_LTXBRCompare") 3, true, true, 118, 1, 24, 4,  0, 0}, // #348
  {DBGFIELD("CPSDRdd_CPSDRds_CPSDRsd_CPSDRss") 1, false, false, 115, 1, 29, 3,  0, 0}, // #349
  {DBGFIELD("LE_LEY")             1, false, false, 114, 2, 37, 4,  0, 0}, // #350
  {DBGFIELD("LD_LDE32_LDY")       1, false, false,  1, 1, 12, 3,  0, 0}, // #351
  {DBGFIELD("LX")                 1, false, false,  1, 1, 12, 3,  0, 0}, // #352
  {DBGFIELD("STD_STDY_STE_STEY")  1, false, false, 66, 2,  1, 4,  0, 0}, // #353
  {DBGFIELD("STX")                1, false, false, 66, 2,  1, 4,  0, 0}, // #354
  {DBGFIELD("LEDBR_LEDBRA")       1, false, false, 115, 1, 37, 3,  0, 0}, // #355
  {DBGFIELD("LDXBR_LDXBRA_LEXBR_LEXBRA") 1, false, false, 112, 1, 41, 3,  0, 0}, // #356
  {DBGFIELD("LDEB")               1, false, false, 114, 2, 45, 4,  0, 0}, // #357
  {DBGFIELD("LDEBR")              1, false, false, 115, 1, 37, 3,  0, 0}, // #358
  {DBGFIELD("LXDB_LXEB")          3, true, true, 117, 2, 63, 4,  0, 0}, // #359
  {DBGFIELD("LXDBR_LXEBR")        3, true, true, 118, 1, 60, 3,  0, 0}, // #360
  {DBGFIELD("CDFBR_CDFBRA_CDGBR_CDGBRA_CEFBR_CEFBRA_CEGBR_CEGBRA") 2, true, false, 134, 2, 144, 4,  0, 0}, // #361
  {DBGFIELD("CXFBR_CXFBRA_CXGBR_CXGBRA") 6, true, true, 136, 2, 63, 4,  0, 0}, // #362
  {DBGFIELD("CDLFBR_CDLGBR_CELFBR_CELGBR") 2, true, false, 134, 2, 144, 4,  0, 0}, // #363
  {DBGFIELD("CXLFBR_CXLGBR")      6, true, true, 136, 2, 63, 4,  0, 0}, // #364
  {DBGFIELD("CFDBR_CFDBRA_CFEBR_CFEBRA_CGDBR_CGDBRA_CGEBR_CGEBRA") 2, true, false, 134, 2, 76, 5,  0, 0}, // #365
  {DBGFIELD("CFXBR_CFXBRA_CGXBR_CGXBRA") 2, true, false, 138, 2, 81, 5,  0, 0}, // #366
  {DBGFIELD("CLFEBR")             3, true, true, 134, 2, 76, 5,  0, 0}, // #367
  {DBGFIELD("CLFDBR")             2, true, false, 134, 2, 76, 5,  0, 0}, // #368
  {DBGFIELD("CLGDBR_CLGEBR")      2, true, false, 134, 2, 76, 5,  0, 0}, // #369
  {DBGFIELD("CLFXBR_CLGXBR")      2, true, false, 138, 2, 81, 5,  0, 0}, // #370
  {DBGFIELD("LCDBR_LCEBR_LNDBR_LNEBR_LPDBR_LPEBR") 1, false, false, 115, 1, 32, 4,  0, 0}, // #371
  {DBGFIELD("LCDFR_LCDFR_32_LNDFR_LNDFR_32_LPDFR_LPDFR_32") 1, false, false, 60, 1,  1, 3,  0, 0}, // #372
  {DBGFIELD("LCXBR_LNXBR_LPXBR")  3, true, true, 118, 1, 24, 4,  0, 0}, // #373
  {DBGFIELD("SQDB_SQEB")          1, false, false, 140, 2, 67, 4,  0, 0}, // #374
  {DBGFIELD("SQDBR_SQEBR")        1, false, false, 141, 1, 67, 3,  0, 0}, // #375
  {DBGFIELD("SQXBR")              3, true, true, 141, 1, 67, 3,  0, 0}, // #376
  {DBGFIELD("FIDBR_FIDBRA_FIEBR_FIEBRA") 1, false, false, 115, 1, 37, 3,  0, 0}, // #377
  {DBGFIELD("FIXBR_FIXBRA")       3, true, true, 118, 1, 25, 3,  0, 0}, // #378
  {DBGFIELD("ADB_AEB")            1, false, false, 114, 2, 152, 5,  1, 1}, // #379
  {DBGFIELD("ADBR_AEBR")          1, false, false, 115, 1, 36, 4,  0, 0}, // #380
  {DBGFIELD("AXBR")               3, true, true, 118, 1, 24, 4,  0, 0}, // #381
  {DBGFIELD("SDB_SEB")            1, false, false, 114, 2, 152, 5,  1, 1}, // #382
  {DBGFIELD("SDBR_SEBR")          1, false, false, 115, 1, 36, 4,  0, 0}, // #383
  {DBGFIELD("SXBR")               3, true, true, 118, 1, 24, 4,  0, 0}, // #384
  {DBGFIELD("MDB_MDEB_MEEB")      1, false, false, 114, 2, 45, 4,  1, 1}, // #385
  {DBGFIELD("MDBR_MDEBR_MEEBR")   1, false, false, 115, 1, 37, 3,  0, 0}, // #386
  {DBGFIELD("MXDB")               3, true, true, 117, 2, 63, 4,  1, 1}, // #387
  {DBGFIELD("MXDBR")              3, true, true, 118, 1, 60, 3,  0, 0}, // #388
  {DBGFIELD("MXBR")               3, true, true, 118, 1, 56, 3,  0, 0}, // #389
  {DBGFIELD("MAEB_MSEB")          3, true, true, 142, 2, 45, 4,  2, 2}, // #390
  {DBGFIELD("MAEBR_MSEBR")        3, true, true, 115, 1, 37, 3,  0, 0}, // #391
  {DBGFIELD("MADB_MSDB")          3, true, true, 142, 2, 45, 4,  2, 2}, // #392
  {DBGFIELD("MADBR_MSDBR")        1, false, false, 115, 1, 37, 3,  0, 0}, // #393
  {DBGFIELD("DDB_DEB")            1, false, false, 140, 2, 67, 4,  1, 1}, // #394
  {DBGFIELD("DDBR_DEBR")          1, false, false, 141, 1, 67, 3,  0, 0}, // #395
  {DBGFIELD("DXBR")               3, true, true, 141, 1, 67, 3,  0, 0}, // #396
  {DBGFIELD("DIDBR_DIEBR")        3, true, true,  3, 1,  8, 4,  0, 0}, // #397
  {DBGFIELD("CDB_CEB_KDB_KEB")    1, false, false, 114, 2, 144, 4,  1, 1}, // #398
  {DBGFIELD("CDBR_CEBR_KDBR_KEBR") 1, false, false, 115, 1, 33, 3,  0, 0}, // #399
  {DBGFIELD("CXBR_KXBR")          3, true, true, 112, 1, 41, 3,  0, 0}, // #400
  {DBGFIELD("TCDB_TCEB")          1, false, false, 114, 2, 15, 4,  0, 0}, // #401
  {DBGFIELD("TCXB")               3, true, true, 117, 2, 45, 4,  0, 0}, // #402
  {DBGFIELD("EFPC")               3, true, true, 39, 2, 131, 4,  0, 0}, // #403
  {DBGFIELD("STFPC")              3, true, true, 66, 2,  1, 4,  0, 0}, // #404
  {DBGFIELD("SFPC")               3, true, true,  1, 1, 33, 3,  0, 0}, // #405
  {DBGFIELD("LFPC")               3, true, true,  8, 1, 60, 3,  0, 0}, // #406
  {DBGFIELD("SFASR")              3, true, true,  3, 1, 10, 2,  0, 0}, // #407
  {DBGFIELD("LFAS")               3, true, true,  3, 1, 10, 2,  0, 0}, // #408
  {DBGFIELD("SRNM_SRNMB_SRNMT")   3, true, true, 60, 1, 33, 3,  0, 0}, // #409
  {DBGFIELD("LTDR_LTER")          1, false, false, 115, 1, 32, 4,  0, 0}, // #410
  {DBGFIELD("LTXR")               3, true, true, 118, 1, 24, 4,  0, 0}, // #411
  {DBGFIELD("LEDR_LRER")          1, false, false, 115, 1, 37, 3,  0, 0}, // #412
  {DBGFIELD("LEXR")               1, false, false, 115, 1, 37, 3,  0, 0}, // #413
  {DBGFIELD("LDXR_LRDR")          1, false, false, 112, 1, 41, 3,  0, 0}, // #414
  {DBGFIELD("LDE")                1, false, false,  1, 1, 12, 3,  0, 0}, // #415
  {DBGFIELD("LDER")               1, false, false, 60, 1,  1, 3,  0, 0}, // #416
  {DBGFIELD("LXD_LXE")            3, true, true, 117, 2, 63, 4,  0, 0}, // #417
  {DBGFIELD("LXDR_LXER")          3, true, true, 118, 1, 60, 3,  0, 0}, // #418
  {DBGFIELD("CDFR_CDGR_CEFR_CEGR") 2, true, false, 134, 2, 144, 4,  0, 0}, // #419
  {DBGFIELD("CXFR_CXGR")          6, true, true, 136, 2, 63, 4,  0, 0}, // #420
  {DBGFIELD("CFDR_CFER_CGDR_CGER") 2, true, false, 134, 2, 76, 5,  0, 0}, // #421
  {DBGFIELD("CFXR_CGXR")          2, true, false, 138, 2, 81, 5,  0, 0}, // #422
  {DBGFIELD("THDER_THDR")         1, false, false, 115, 1, 36, 4,  0, 0}, // #423
  {DBGFIELD("TBDR_TBEDR")         1, false, false, 115, 1, 36, 4,  0, 0}, // #424
  {DBGFIELD("LCDR_LCER_LNDR_LNER_LPDR_LPER") 1, false, false, 115, 1, 32, 4,  0, 0}, // #425
  {DBGFIELD("LCXR_LNXR_LPXR")     3, true, true, 118, 1, 24, 4,  0, 0}, // #426
  {DBGFIELD("HDR_HER")            1, false, false, 115, 1, 37, 3,  0, 0}, // #427
  {DBGFIELD("SQD_SQE")            1, false, false, 140, 2, 67, 4,  0, 0}, // #428
  {DBGFIELD("SQDR_SQER")          1, false, false, 141, 1, 67, 3,  0, 0}, // #429
  {DBGFIELD("SQXR")               3, true, true, 141, 1, 67, 3,  0, 0}, // #430
  {DBGFIELD("FIDR_FIER")          1, false, false, 115, 1, 37, 3,  0, 0}, // #431
  {DBGFIELD("FIXR")               3, true, true, 118, 1, 25, 3,  0, 0}, // #432
  {DBGFIELD("AD_AE_AU_AW")        1, false, false, 114, 2, 152, 5,  1, 1}, // #433
  {DBGFIELD("ADR_AER_AUR_AWR")    1, false, false, 115, 1, 36, 4,  0, 0}, // #434
  {DBGFIELD("AXR")                3, true, true, 118, 1, 24, 4,  0, 0}, // #435
  {DBGFIELD("SD_SE_SU_SW")        1, false, false, 114, 2, 152, 5,  1, 1}, // #436
  {DBGFIELD("SDR_SER_SUR_SWR")    1, false, false, 115, 1, 36, 4,  0, 0}, // #437
  {DBGFIELD("SXR")                3, true, true, 118, 1, 24, 4,  0, 0}, // #438
  {DBGFIELD("MD_MDE_ME_MEE")      1, false, false, 114, 2, 45, 4,  1, 1}, // #439
  {DBGFIELD("MDER_MDR_MEER_MER")  1, false, false, 115, 1, 37, 3,  0, 0}, // #440
  {DBGFIELD("MXD")                3, true, true, 117, 2, 63, 4,  1, 1}, // #441
  {DBGFIELD("MXDR")               3, true, true, 118, 1, 60, 3,  0, 0}, // #442
  {DBGFIELD("MXR")                3, true, true, 118, 1, 67, 3,  0, 0}, // #443
  {DBGFIELD("MY")                 3, true, true, 117, 2, 63, 4,  1, 1}, // #444
  {DBGFIELD("MYH_MYL")            3, true, true, 142, 2, 45, 4,  1, 1}, // #445
  {DBGFIELD("MYR")                3, true, true, 118, 1, 60, 3,  0, 0}, // #446
  {DBGFIELD("MYHR_MYLR")          3, true, true, 115, 1, 37, 3,  0, 0}, // #447
  {DBGFIELD("MAD_MAE_MSD_MSE")    3, true, true, 142, 2, 45, 4,  2, 2}, // #448
  {DBGFIELD("MADR_MAER_MSDR_MSER") 3, true, true, 115, 1, 37, 3,  0, 0}, // #449
  {DBGFIELD("MAY")                3, true, true, 117, 2, 63, 4,  2, 2}, // #450
  {DBGFIELD("MAYH_MAYL")          3, true, true, 142, 2, 45, 4,  2, 2}, // #451
  {DBGFIELD("MAYR")               3, true, true, 118, 1, 60, 3,  0, 0}, // #452
  {DBGFIELD("MAYHR_MAYLR")        3, true, true, 115, 1, 37, 3,  0, 0}, // #453
  {DBGFIELD("DD_DE")              1, false, false, 140, 2, 67, 4,  1, 1}, // #454
  {DBGFIELD("DDR_DER")            1, false, false, 141, 1, 67, 3,  0, 0}, // #455
  {DBGFIELD("DXR")                3, true, true, 141, 1, 67, 3,  0, 0}, // #456
  {DBGFIELD("CD_CE")              1, false, false, 114, 2, 45, 4,  1, 1}, // #457
  {DBGFIELD("CDR_CER")            1, false, false, 115, 1, 37, 3,  0, 0}, // #458
  {DBGFIELD("CXR")                3, true, true, 112, 1, 25, 3,  0, 0}, // #459
  {DBGFIELD("LTDTR")              1, false, false, 115, 1, 148, 4,  0, 0}, // #460
  {DBGFIELD("LTXTR")              3, true, true, 118, 1, 24, 4,  0, 0}, // #461
  {DBGFIELD("LEDTR")              1, false, false, 115, 1, 56, 3,  0, 0}, // #462
  {DBGFIELD("LDXTR")              1, false, false, 112, 1, 56, 3,  0, 0}, // #463
  {DBGFIELD("LDETR")              1, false, false, 115, 1, 53, 3,  0, 0}, // #464
  {DBGFIELD("LXDTR")              3, true, true, 118, 1, 25, 3,  0, 0}, // #465
  {DBGFIELD("CDFTR")              2, true, false, 134, 2, 56, 4,  0, 0}, // #466
  {DBGFIELD("CDGTR_CDGTRA")       2, true, false, 134, 2, 67, 4,  0, 0}, // #467
  {DBGFIELD("CXFTR")              6, true, true, 136, 2, 56, 4,  0, 0}, // #468
  {DBGFIELD("CXGTR_CXGTRA")       6, true, true, 136, 2, 67, 4,  0, 0}, // #469
  {DBGFIELD("CDLFTR")             2, true, false, 134, 2, 56, 4,  0, 0}, // #470
  {DBGFIELD("CDLGTR")             2, true, false, 134, 2, 67, 4,  0, 0}, // #471
  {DBGFIELD("CXLFTR")             6, true, true, 136, 2, 56, 4,  0, 0}, // #472
  {DBGFIELD("CXLGTR")             6, true, true, 136, 2, 67, 4,  0, 0}, // #473
  {DBGFIELD("CFDTR_CGDTR_CGDTRA") 2, true, false, 134, 2, 87, 5,  0, 0}, // #474
  {DBGFIELD("CFXTR_CGXTR_CGXTRA") 2, true, false, 138, 2, 87, 5,  0, 0}, // #475
  {DBGFIELD("CLFDTR_CLGDTR")      2, true, false, 134, 2, 87, 5,  0, 0}, // #476
  {DBGFIELD("CLFXTR_CLGXTR")      2, true, false, 138, 2, 87, 5,  0, 0}, // #477
  {DBGFIELD("CDSTR_CDUTR")        2, true, false, 134, 2, 41, 4,  0, 0}, // #478
  {DBGFIELD("CXSTR_CXUTR")        6, true, true, 144, 2, 49, 4,  0, 0}, // #479
  {DBGFIELD("CSDTR_CUDTR")        2, true, false, 134, 2, 63, 4,  0, 0}, // #480
  {DBGFIELD("CSXTR_CUXTR")        6, true, true, 144, 2, 56, 4,  0, 0}, // #481
  {DBGFIELD("CDZT")               2, true, false, 114, 2, 49, 4,  0, 0}, // #482
  {DBGFIELD("CXZT")               9, true, true, 146, 2, 92, 4,  0, 0}, // #483
  {DBGFIELD("CZDT")               2, true, false, 113, 3,  1, 5,  0, 0}, // #484
  {DBGFIELD("CZXT")               3, true, true, 148, 3,  1, 5,  0, 0}, // #485
  {DBGFIELD("CDPT")               2, true, false, 114, 2, 49, 4,  0, 0}, // #486
  {DBGFIELD("CXPT")               9, true, true, 146, 2, 92, 4,  0, 0}, // #487
  {DBGFIELD("CPDT")               2, true, false, 113, 3,  1, 5,  0, 0}, // #488
  {DBGFIELD("CPXT")               3, true, true, 148, 3,  1, 5,  0, 0}, // #489
  {DBGFIELD("PFPO")               3, true, true,  3, 1,  8, 4,  0, 0}, // #490
  {DBGFIELD("FIDTR")              1, false, false, 115, 1, 53, 3,  0, 0}, // #491
  {DBGFIELD("FIXTR")              3, true, true, 118, 1, 25, 3,  0, 0}, // #492
  {DBGFIELD("EEDTR")              2, true, false, 134, 2, 63, 4,  0, 0}, // #493
  {DBGFIELD("EEXTR")              2, true, false, 134, 2, 63, 4,  0, 0}, // #494
  {DBGFIELD("ESDTR")              2, true, false, 134, 2, 63, 4,  0, 0}, // #495
  {DBGFIELD("ESXTR")              2, true, false, 138, 2, 49, 4,  0, 0}, // #496
  {DBGFIELD("ADTR_ADTRA")         1, false, false, 115, 1, 148, 4,  0, 0}, // #497
  {DBGFIELD("AXTR_AXTRA")         3, true, true, 118, 1, 24, 4,  0, 0}, // #498
  {DBGFIELD("SDTR_SDTRA")         1, false, false, 115, 1, 148, 4,  0, 0}, // #499
  {DBGFIELD("SXTR_SXTRA")         3, true, true, 118, 1, 24, 4,  0, 0}, // #500
  {DBGFIELD("MDTR_MDTRA")         1, false, false, 115, 1, 67, 3,  0, 0}, // #501
  {DBGFIELD("MXTR_MXTRA")         3, true, true, 118, 1, 67, 3,  0, 0}, // #502
  {DBGFIELD("DDTR_DDTRA")         1, false, false, 115, 1, 67, 3,  0, 0}, // #503
  {DBGFIELD("DXTR_DXTRA")         3, true, true, 118, 1, 67, 3,  0, 0}, // #504
  {DBGFIELD("QADTR")              1, false, false, 115, 1, 148, 4,  0, 0}, // #505
  {DBGFIELD("QAXTR")              3, true, true, 118, 1, 24, 4,  0, 0}, // #506
  {DBGFIELD("RRDTR")              2, true, false, 134, 2, 76, 5,  0, 0}, // #507
  {DBGFIELD("RRXTR")              6, true, true, 136, 2, 122, 5,  0, 0}, // #508
  {DBGFIELD("SLDT_SRDT")          3, true, true, 114, 2, 56, 4,  0, 0}, // #509
  {DBGFIELD("SLXT_SRXT")          3, true, true, 117, 2, 56, 4,  0, 0}, // #510
  {DBGFIELD("IEDTR")              2, true, false, 134, 2, 41, 4,  0, 0}, // #511
  {DBGFIELD("IEXTR")              6, true, true, 136, 2, 63, 4,  0, 0}, // #512
  {DBGFIELD("CDTR_KDTR")          1, false, false, 115, 1, 53, 3,  0, 0}, // #513
  {DBGFIELD("CXTR_KXTR")          3, true, true, 112, 1, 41, 3,  0, 0}, // #514
  {DBGFIELD("CEDTR")              1, false, false, 115, 1, 53, 3,  0, 0}, // #515
  {DBGFIELD("CEXTR")              1, false, false, 115, 1, 53, 3,  0, 0}, // #516
  {DBGFIELD("TDCDT_TDCET_TDGDT_TDGET") 1, false, false, 114, 2, 56, 4,  0, 0}, // #517
  {DBGFIELD("TDCXT_TDGXT")        3, true, true, 142, 2, 56, 4,  0, 0}, // #518
  {DBGFIELD("VLR32_VLR64_VLR")    1, false, false, 60, 1,  1, 3,  0, 0}, // #519
  {DBGFIELD("VLGV_VLGVB_VLGVF_VLGVG_VLGVH") 1, false, false, 60, 1, 33, 3,  0, 0}, // #520
  {DBGFIELD("VLVG_VLVGB_VLVGF_VLVGG_VLVGH") 1, false, false, 60, 1,  1, 3,  0, 0}, // #521
  {DBGFIELD("VLVGP32_VLVGP")      1, false, false, 60, 1, 33, 3,  0, 0}, // #522
  {DBGFIELD("VZERO")              1, false, false, 115, 1, 29, 3,  0, 0}, // #523
  {DBGFIELD("VONE")               1, false, false, 115, 1, 29, 3,  0, 0}, // #524
  {DBGFIELD("VGBM")               1, false, false, 115, 1, 29, 3,  0, 0}, // #525
  {DBGFIELD("VGM_VGMB_VGMF_VGMG_VGMH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #526
  {DBGFIELD("VREPI_VREPIB_VREPIF_VREPIG_VREPIH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #527
  {DBGFIELD("VLEIB_VLEIF_VLEIG_VLEIH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #528
  {DBGFIELD("VL_VLAlign")         1, false, false,  1, 1, 12, 3,  0, 0}, // #529
  {DBGFIELD("VLBB_VLL")           1, false, false,  1, 1, 12, 3,  0, 0}, // #530
  {DBGFIELD("VL32_VL64")          1, false, false,  1, 1, 12, 3,  0, 0}, // #531
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH_VLLEZLF") 1, false, false,  1, 1, 12, 3,  0, 0}, // #532
  {DBGFIELD("VLREP_VLREPB_VLREPF_VLREPG_VLREPH") 1, false, false,  1, 1, 12, 3,  0, 0}, // #533
  {DBGFIELD("VLEB_VLEF_VLEG_VLEH") 1, false, false, 114, 2, 37, 4,  1, 1}, // #534
  {DBGFIELD("VGEF_VGEG")          2, true, false, 113, 3, 180, 5,  1, 1}, // #535
  {DBGFIELD("VLM_VLMAlign")       3, true, true, 16, 1, 148, 4,  0, 0}, // #536
  {DBGFIELD("VLRL_VLRLR")         1, false, false,  1, 1, 12, 3,  0, 0}, // #537
  {DBGFIELD("VST32_VST64_VST_VSTAlign_VSTL") 1, false, false, 66, 2,  1, 4,  0, 0}, // #538
  {DBGFIELD("VSTEF_VSTEG")        1, false, false, 66, 2,  1, 4,  0, 0}, // #539
  {DBGFIELD("VSTEB_VSTEH")        2, true, false, 113, 3,  1, 5,  0, 0}, // #540
  {DBGFIELD("VSTM_VSTMAlign")     6, true, true, 95, 2,  1, 4,  0, 0}, // #541
  {DBGFIELD("VSCEF_VSCEG")        2, true, false, 70, 2,  1, 4,  0, 0}, // #542
  {DBGFIELD("VSTRL_VSTRLR")       1, false, false, 66, 2,  1, 4,  0, 0}, // #543
  {DBGFIELD("VLBR_VLBRF_VLBRG_VLBRH_VLBRQ") 1, false, false,  1, 1, 12, 3,  0, 0}, // #544
  {DBGFIELD("VLER_VLERF_VLERG_VLERH") 1, false, false,  1, 1, 12, 3,  0, 0}, // #545
  {DBGFIELD("VLEBRF_VLEBRG_VLEBRH") 1, false, false, 114, 2, 37, 4,  1, 1}, // #546
  {DBGFIELD("VLLEBRZ_VLLEBRZE_VLLEBRZF_VLLEBRZG_VLLEBRZH") 1, false, false,  1, 1, 12, 3,  0, 0}, // #547
  {DBGFIELD("VLBRREP_VLBRREPF_VLBRREPG_VLBRREPH") 1, false, false,  1, 1, 12, 3,  0, 0}, // #548
  {DBGFIELD("VSTBR_VSTBRF_VSTBRG_VSTBRH_VSTBRQ") 1, false, false, 66, 2,  1, 4,  0, 0}, // #549
  {DBGFIELD("VSTER_VSTERF_VSTERG_VSTERH") 1, false, false, 66, 2,  1, 4,  0, 0}, // #550
  {DBGFIELD("VSTEBRH")            2, true, false, 113, 3,  1, 5,  0, 0}, // #551
  {DBGFIELD("VSTEBRF_VSTEBRG")    1, false, false, 66, 2,  1, 4,  0, 0}, // #552
  {DBGFIELD("VMRH_VMRHB_VMRHF_VMRHG_VMRHH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #553
  {DBGFIELD("VMRL_VMRLB_VMRLF_VMRLG_VMRLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #554
  {DBGFIELD("VPERM")              1, false, false, 115, 1, 29, 3,  0, 0}, // #555
  {DBGFIELD("VPDI")               1, false, false, 115, 1, 29, 3,  0, 0}, // #556
  {DBGFIELD("VBPERM")             1, false, false, 115, 1, 29, 3,  0, 0}, // #557
  {DBGFIELD("VREP_VREPB_VREPF_VREPG_VREPH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #558
  {DBGFIELD("VSEL")               1, false, false, 115, 1, 29, 3,  0, 0}, // #559
  {DBGFIELD("VPK_VPKF_VPKG_VPKH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #560
  {DBGFIELD("VPKS_VPKSF_VPKSG_VPKSH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #561
  {DBGFIELD("VPKSFS_VPKSGS_VPKSHS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #562
  {DBGFIELD("VPKLS_VPKLSF_VPKLSG_VPKLSH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #563
  {DBGFIELD("VPKLSFS_VPKLSGS_VPKLSHS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #564
  {DBGFIELD("VSEG_VSEGB_VSEGF_VSEGH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #565
  {DBGFIELD("VUPH_VUPHB_VUPHF_VUPHH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #566
  {DBGFIELD("VUPL_VUPLB_VUPLF")   1, false, false, 115, 1, 29, 3,  0, 0}, // #567
  {DBGFIELD("VUPLH_VUPLHB_VUPLHF_VUPLHH_VUPLHW") 1, false, false, 115, 1, 29, 3,  0, 0}, // #568
  {DBGFIELD("VUPLL_VUPLLB_VUPLLF_VUPLLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #569
  {DBGFIELD("VA_VAB_VAC_VACQ_VAF_VAG_VAH_VAQ") 1, false, false, 115, 1, 29, 3,  0, 0}, // #570
  {DBGFIELD("VACC_VACCB_VACCC_VACCCQ_VACCF_VACCG_VACCH_VACCQ") 1, false, false, 115, 1, 29, 3,  0, 0}, // #571
  {DBGFIELD("VAVG_VAVGB_VAVGF_VAVGG_VAVGH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #572
  {DBGFIELD("VAVGL_VAVGLB_VAVGLF_VAVGLG_VAVGLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #573
  {DBGFIELD("VN_VNC_VNN_VNO_VNX") 1, false, false, 115, 1, 29, 3,  0, 0}, // #574
  {DBGFIELD("VO_VOC")             1, false, false, 115, 1, 29, 3,  0, 0}, // #575
  {DBGFIELD("VCKSM")              1, false, false, 115, 1, 12, 3,  0, 0}, // #576
  {DBGFIELD("VCLZ_VCLZB_VCLZF_VCLZG_VCLZH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #577
  {DBGFIELD("VCTZ_VCTZB_VCTZF_VCTZG_VCTZH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #578
  {DBGFIELD("VX")                 1, false, false, 115, 1, 29, 3,  0, 0}, // #579
  {DBGFIELD("VGFM")               1, false, false, 115, 1, 12, 3,  0, 0}, // #580
  {DBGFIELD("VGFMA_VGFMAB_VGFMAF_VGFMAG_VGFMAH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #581
  {DBGFIELD("VGFMB_VGFMF_VGFMG_VGFMH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #582
  {DBGFIELD("VLC_VLCB_VLCF_VLCG_VLCH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #583
  {DBGFIELD("VLP_VLPB_VLPF_VLPG_VLPH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #584
  {DBGFIELD("VMX_VMXB_VMXF_VMXG_VMXH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #585
  {DBGFIELD("VMXL_VMXLB_VMXLF_VMXLG_VMXLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #586
  {DBGFIELD("VMN_VMNB_VMNF_VMNG_VMNH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #587
  {DBGFIELD("VMNL_VMNLB_VMNLF_VMNLG_VMNLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #588
  {DBGFIELD("VMAL_VMALB_VMALF")   1, false, false, 115, 1, 12, 3,  0, 0}, // #589
  {DBGFIELD("VMALE_VMALEB_VMALEF_VMALEH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #590
  {DBGFIELD("VMALH_VMALHB_VMALHF_VMALHH_VMALHW") 1, false, false, 115, 1, 12, 3,  0, 0}, // #591
  {DBGFIELD("VMALO_VMALOB_VMALOF_VMALOH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #592
  {DBGFIELD("VMAO_VMAOB_VMAOF_VMAOH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #593
  {DBGFIELD("VMAE_VMAEB_VMAEF_VMAEH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #594
  {DBGFIELD("VMAH_VMAHB_VMAHF_VMAHH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #595
  {DBGFIELD("VME_VMEB_VMEF_VMEH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #596
  {DBGFIELD("VMH_VMHB_VMHF_VMHH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #597
  {DBGFIELD("VML_VMLB_VMLF")      1, false, false, 115, 1, 12, 3,  0, 0}, // #598
  {DBGFIELD("VMLE_VMLEB_VMLEF_VMLEH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #599
  {DBGFIELD("VMLH_VMLHB_VMLHF_VMLHH_VMLHW") 1, false, false, 115, 1, 12, 3,  0, 0}, // #600
  {DBGFIELD("VMLO_VMLOB_VMLOF_VMLOH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #601
  {DBGFIELD("VMO_VMOB_VMOF_VMOH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #602
  {DBGFIELD("VMSL_VMSLG")         1, false, false, 115, 1, 37, 3,  0, 0}, // #603
  {DBGFIELD("VPOPCT_VPOPCTB_VPOPCTF_VPOPCTG_VPOPCTH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #604
  {DBGFIELD("VERLL_VERLLB_VERLLF_VERLLG_VERLLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #605
  {DBGFIELD("VERLLV_VERLLVB_VERLLVF_VERLLVG_VERLLVH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #606
  {DBGFIELD("VERIM_VERIMB_VERIMF_VERIMG_VERIMH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #607
  {DBGFIELD("VESL_VESLB_VESLF_VESLG_VESLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #608
  {DBGFIELD("VESLV_VESLVB_VESLVF_VESLVG_VESLVH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #609
  {DBGFIELD("VESRA_VESRAB_VESRAF_VESRAG_VESRAH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #610
  {DBGFIELD("VESRAV_VESRAVB_VESRAVF_VESRAVG_VESRAVH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #611
  {DBGFIELD("VESRL_VESRLB_VESRLF_VESRLG_VESRLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #612
  {DBGFIELD("VESRLV_VESRLVB_VESRLVF_VESRLVG_VESRLVH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #613
  {DBGFIELD("VSL_VSLDB")          1, false, false, 115, 1, 29, 3,  0, 0}, // #614
  {DBGFIELD("VSLB")               1, false, false, 115, 1, 29, 3,  0, 0}, // #615
  {DBGFIELD("VSRA_VSRL")          1, false, false, 115, 1, 29, 3,  0, 0}, // #616
  {DBGFIELD("VSRAB_VSRLB")        1, false, false, 115, 1, 29, 3,  0, 0}, // #617
  {DBGFIELD("VSLD")               1, false, false, 115, 1, 29, 3,  0, 0}, // #618
  {DBGFIELD("VSRD")               1, false, false, 115, 1, 29, 3,  0, 0}, // #619
  {DBGFIELD("VSB_VSBCBI_VSBCBIQ_VSBI_VSBIQ") 1, false, false, 115, 1, 29, 3,  0, 0}, // #620
  {DBGFIELD("VSCBI_VSCBIB_VSCBIF_VSCBIG_VSCBIH_VSCBIQ") 1, false, false, 115, 1, 29, 3,  0, 0}, // #621
  {DBGFIELD("VS_VSF_VSG_VSH_VSQ") 1, false, false, 115, 1, 29, 3,  0, 0}, // #622
  {DBGFIELD("VSUM_VSUMB_VSUMH")   1, false, false, 115, 1, 12, 3,  0, 0}, // #623
  {DBGFIELD("VSUMG_VSUMGF_VSUMGH") 1, false, false, 115, 1, 12, 3,  0, 0}, // #624
  {DBGFIELD("VSUMQ_VSUMQF_VSUMQG") 1, false, false, 115, 1, 12, 3,  0, 0}, // #625
  {DBGFIELD("VEC_VECB_VECF_VECG_VECH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #626
  {DBGFIELD("VECL_VECLB_VECLF_VECLG_VECLH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #627
  {DBGFIELD("VCEQ_VCEQB_VCEQF_VCEQG_VCEQH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #628
  {DBGFIELD("VCEQBS_VCEQFS_VCEQGS_VCEQHS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #629
  {DBGFIELD("VCH_VCHB_VCHF_VCHG_VCHH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #630
  {DBGFIELD("VCHBS_VCHFS_VCHGS_VCHHS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #631
  {DBGFIELD("VCHL_VCHLB_VCHLF_VCHLG_VCHLH") 1, false, false, 115, 1, 29, 3,  0, 0}, // #632
  {DBGFIELD("VCHLBS_VCHLFS_VCHLGS_VCHLHS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #633
  {DBGFIELD("VTM")                1, false, false, 115, 1, 12, 3,  0, 0}, // #634
  {DBGFIELD("VCFPL_VCFPS")        1, false, false, 115, 1, 37, 3,  0, 0}, // #635
  {DBGFIELD("VCDG_VCDLG")         1, false, false, 115, 1, 37, 3,  0, 0}, // #636
  {DBGFIELD("VCDGB_VCDLGB")       1, false, false, 115, 1, 37, 3,  0, 0}, // #637
  {DBGFIELD("WCDGB_WCDLGB")       1, false, false, 115, 1, 37, 3,  0, 0}, // #638
  {DBGFIELD("VCEFB_VCELFB")       1, false, false, 115, 1, 37, 3,  0, 0}, // #639
  {DBGFIELD("WCEFB_WCELFB")       1, false, false, 115, 1, 37, 3,  0, 0}, // #640
  {DBGFIELD("VCLFP_VCSFP")        1, false, false, 115, 1, 37, 3,  0, 0}, // #641
  {DBGFIELD("VCGD_VCLGD")         1, false, false, 115, 1, 37, 3,  0, 0}, // #642
  {DBGFIELD("VCGDB_VCLGDB")       1, false, false, 115, 1, 37, 3,  0, 0}, // #643
  {DBGFIELD("WCGDB_WCLGDB")       1, false, false, 115, 1, 37, 3,  0, 0}, // #644
  {DBGFIELD("VCFEB_VCLFEB")       1, false, false, 115, 1, 37, 3,  0, 0}, // #645
  {DBGFIELD("WCFEB_WCLFEB")       1, false, false, 115, 1, 37, 3,  0, 0}, // #646
  {DBGFIELD("VLDE_VLED")          1, false, false, 115, 1, 37, 3,  0, 0}, // #647
  {DBGFIELD("VLDEB_VLEDB")        1, false, false, 115, 1, 37, 3,  0, 0}, // #648
  {DBGFIELD("WLDEB_WLEDB")        1, false, false, 115, 1, 37, 3,  0, 0}, // #649
  {DBGFIELD("VFLL_VFLR")          1, false, false, 115, 1, 37, 3,  0, 0}, // #650
  {DBGFIELD("VFLLS_VFLRD")        1, false, false, 115, 1, 37, 3,  0, 0}, // #651
  {DBGFIELD("WFLLS_WFLRD")        1, false, false, 115, 1, 37, 3,  0, 0}, // #652
  {DBGFIELD("WFLLD")              1, false, false, 115, 1, 37, 3,  0, 0}, // #653
  {DBGFIELD("WFLRX")              1, false, false, 112, 1, 25, 3,  0, 0}, // #654
  {DBGFIELD("VFI_VFIDB")          1, false, false, 115, 1, 37, 3,  0, 0}, // #655
  {DBGFIELD("WFIDB")              1, false, false, 115, 1, 37, 3,  0, 0}, // #656
  {DBGFIELD("VFISB")              1, false, false, 115, 1, 37, 3,  0, 0}, // #657
  {DBGFIELD("WFISB")              1, false, false, 115, 1, 37, 3,  0, 0}, // #658
  {DBGFIELD("WFIXB")              1, false, false, 112, 1, 25, 3,  0, 0}, // #659
  {DBGFIELD("VFPSO")              1, false, false, 115, 1, 29, 3,  0, 0}, // #660
  {DBGFIELD("VFPSODB_WFPSODB")    1, false, false, 115, 1, 29, 3,  0, 0}, // #661
  {DBGFIELD("VFPSOSB_WFPSOSB")    1, false, false, 115, 1, 29, 3,  0, 0}, // #662
  {DBGFIELD("WFPSOXB")            1, false, false, 115, 1, 29, 3,  0, 0}, // #663
  {DBGFIELD("VFLCDB_VFLNDB_VFLPDB_WFLCDB_WFLNDB_WFLPDB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #664
  {DBGFIELD("VFLCSB_VFLNSB_VFLPSB_WFLCSB_WFLNSB_WFLPSB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #665
  {DBGFIELD("WFLCXB_WFLNXB_WFLPXB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #666
  {DBGFIELD("VFMAX_VFMIN")        1, false, false, 115, 1, 29, 3,  0, 0}, // #667
  {DBGFIELD("VFMAXDB_VFMINDB")    1, false, false, 115, 1, 29, 3,  0, 0}, // #668
  {DBGFIELD("WFMAXDB_WFMINDB")    1, false, false, 115, 1, 29, 3,  0, 0}, // #669
  {DBGFIELD("VFMAXSB_VFMINSB")    1, false, false, 115, 1, 29, 3,  0, 0}, // #670
  {DBGFIELD("WFMAXSB_WFMINSB")    1, false, false, 115, 1, 29, 3,  0, 0}, // #671
  {DBGFIELD("WFMAXXB_WFMINXB")    1, false, false, 115, 1, 29, 3,  0, 0}, // #672
  {DBGFIELD("VFTCI")              1, false, false, 115, 1, 32, 4,  0, 0}, // #673
  {DBGFIELD("VFTCIDB_WFTCIDB")    1, false, false, 115, 1, 32, 4,  0, 0}, // #674
  {DBGFIELD("VFTCISB_WFTCISB")    1, false, false, 115, 1, 32, 4,  0, 0}, // #675
  {DBGFIELD("WFTCIXB")            1, false, false, 115, 1, 32, 4,  0, 0}, // #676
  {DBGFIELD("VFA_VFS")            1, false, false, 115, 1, 37, 3,  0, 0}, // #677
  {DBGFIELD("VFADB_VFSDB")        1, false, false, 115, 1, 37, 3,  0, 0}, // #678
  {DBGFIELD("WFADB_WFSDB")        1, false, false, 115, 1, 37, 3,  0, 0}, // #679
  {DBGFIELD("VFASB_VFSSB")        1, false, false, 115, 1, 37, 3,  0, 0}, // #680
  {DBGFIELD("WFASB_WFSSB")        1, false, false, 115, 1, 37, 3,  0, 0}, // #681
  {DBGFIELD("WFAXB_WFSXB")        1, false, false, 112, 1, 25, 3,  0, 0}, // #682
  {DBGFIELD("VFM_VFMDB")          1, false, false, 115, 1, 37, 3,  0, 0}, // #683
  {DBGFIELD("WFMDB_WFMSB")        1, false, false, 115, 1, 37, 3,  0, 0}, // #684
  {DBGFIELD("VFMSB")              1, false, false, 115, 1, 37, 3,  0, 0}, // #685
  {DBGFIELD("WFMXB")              1, false, false, 112, 1, 92, 3,  0, 0}, // #686
  {DBGFIELD("VFMA_VFMS_VFNMA_VFNMS") 1, false, false, 115, 1, 37, 3,  0, 0}, // #687
  {DBGFIELD("VFMADB_VFMSDB_VFNMADB_VFNMSDB") 1, false, false, 115, 1, 37, 3,  0, 0}, // #688
  {DBGFIELD("WFMADB_WFMSDB_WFNMADB_WFNMSDB") 1, false, false, 115, 1, 37, 3,  0, 0}, // #689
  {DBGFIELD("VFMASB_VFMSSB_VFNMASB_VFNMSSB") 1, false, false, 115, 1, 37, 3,  0, 0}, // #690
  {DBGFIELD("WFMASB_WFMSSB_WFNMASB_WFNMSSB") 1, false, false, 115, 1, 37, 3,  0, 0}, // #691
  {DBGFIELD("WFMAXB_WFMSXB_WFNMAXB_WFNMSXB") 1, false, false, 112, 1, 67, 3,  0, 0}, // #692
  {DBGFIELD("VFD")                1, false, false, 141, 1, 67, 3,  0, 0}, // #693
  {DBGFIELD("VFDDB_WFDDB")        1, false, false, 141, 1, 67, 3,  0, 0}, // #694
  {DBGFIELD("VFDSB_WFDSB")        1, false, false, 141, 1, 67, 3,  0, 0}, // #695
  {DBGFIELD("WFDXB")              1, false, false, 141, 1, 67, 3,  0, 0}, // #696
  {DBGFIELD("VFSQ")               1, false, false, 141, 1, 67, 3,  0, 0}, // #697
  {DBGFIELD("VFSQDB_WFSQDB")      1, false, false, 141, 1, 67, 3,  0, 0}, // #698
  {DBGFIELD("VFSQSB_WFSQSB")      1, false, false, 141, 1, 67, 3,  0, 0}, // #699
  {DBGFIELD("WFSQXB")             1, false, false, 141, 1, 67, 3,  0, 0}, // #700
  {DBGFIELD("VFCE_VFCH_VFCHE")    1, false, false, 115, 1, 29, 3,  0, 0}, // #701
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB_VFKEDB_VFKHDB_VFKHEDB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #702
  {DBGFIELD("WFCEDB_WFCHDB_WFCHEDB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #703
  {DBGFIELD("WFKEDB_WFKHDB_WFKHEDB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #704
  {DBGFIELD("VFCESB_VFCHESB_VFCHSB_VFKESB_VFKHESB_VFKHSB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #705
  {DBGFIELD("WFCESB_WFCHESB_WFCHSB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #706
  {DBGFIELD("WFKESB_WFKHESB_WFKHSB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #707
  {DBGFIELD("WFCEXB_WFCHEXB_WFCHXB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #708
  {DBGFIELD("WFKEXB_WFKHEXB_WFKHXB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #709
  {DBGFIELD("VFCEDBS_VFCHDBS_VFCHEDBS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #710
  {DBGFIELD("VFKEDBS_VFKHDBS_VFKHEDBS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #711
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS_WFKEDBS_WFKHDBS_WFKHEDBS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #712
  {DBGFIELD("VFCESBS_VFCHESBS_VFCHSBS_VFKESBS_VFKHESBS_VFKHSBS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #713
  {DBGFIELD("WFCESBS_WFCHESBS_WFCHSBS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #714
  {DBGFIELD("WFKESBS_WFKHESBS_WFKHSBS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #715
  {DBGFIELD("WFCEXBS_WFCHEXBS_WFCHXBS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #716
  {DBGFIELD("WFKEXBS_WFKHEXBS_WFKHXBS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #717
  {DBGFIELD("WFC_WFK")            1, false, false, 115, 1, 33, 3,  0, 0}, // #718
  {DBGFIELD("WFCDB_WFKDB")        1, false, false, 115, 1, 33, 3,  0, 0}, // #719
  {DBGFIELD("WFCSB_WFKSB")        1, false, false, 115, 1, 33, 3,  0, 0}, // #720
  {DBGFIELD("WFCXB_WFKXB")        1, false, false, 115, 1, 33, 3,  0, 0}, // #721
  {DBGFIELD("LEFR")               1, false, false, 60, 1,  1, 3,  0, 0}, // #722
  {DBGFIELD("LFER")               1, false, false, 60, 1, 33, 3,  0, 0}, // #723
  {DBGFIELD("VFAE_VFAEB")         1, false, false, 115, 1, 33, 3,  0, 0}, // #724
  {DBGFIELD("VFAEF_VFAEH")        1, false, false, 115, 1, 33, 3,  0, 0}, // #725
  {DBGFIELD("VFAEBS_VFAEFS_VFAEHS") 1, false, false, 115, 1, 139, 4,  0, 0}, // #726
  {DBGFIELD("VFAEZB_VFAEZF_VFAEZH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #727
  {DBGFIELD("VFAEZBS_VFAEZFS_VFAEZHS") 1, false, false, 115, 1, 139, 4,  0, 0}, // #728
  {DBGFIELD("VFEE_VFEEB_VFEEF_VFEEH_VFEEZB_VFEEZF_VFEEZH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #729
  {DBGFIELD("VFEEBS_VFEEFS_VFEEHS_VFEEZBS_VFEEZFS_VFEEZHS") 1, false, false, 115, 1, 139, 4,  0, 0}, // #730
  {DBGFIELD("VFENE_VFENEB_VFENEF_VFENEH_VFENEZB_VFENEZF_VFENEZH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #731
  {DBGFIELD("VFENEBS_VFENEFS_VFENEHS_VFENEZBS_VFENEZFS_VFENEZHS") 1, false, false, 115, 1, 139, 4,  0, 0}, // #732
  {DBGFIELD("VISTR_VISTRB_VISTRF_VISTRH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #733
  {DBGFIELD("VISTRBS_VISTRFS_VISTRHS") 1, false, false, 115, 1, 139, 4,  0, 0}, // #734
  {DBGFIELD("VSTRC_VSTRCB_VSTRCF_VSTRCH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #735
  {DBGFIELD("VSTRCBS_VSTRCFS_VSTRCHS") 1, false, false, 115, 1, 139, 4,  0, 0}, // #736
  {DBGFIELD("VSTRCZB_VSTRCZF_VSTRCZH") 1, false, false, 115, 1, 33, 3,  0, 0}, // #737
  {DBGFIELD("VSTRCZBS_VSTRCZFS_VSTRCZHS") 1, false, false, 115, 1, 139, 4,  0, 0}, // #738
  {DBGFIELD("VSTRS_VSTRSB_VSTRSF_VSTRSH") 1, false, false, 115, 1, 139, 4,  0, 0}, // #739
  {DBGFIELD("VSTRSZB_VSTRSZF_VSTRSZH") 1, false, false, 115, 1, 139, 4,  0, 0}, // #740
  {DBGFIELD("VLIP")               1, false, false, 115, 1, 29, 3,  0, 0}, // #741
  {DBGFIELD("VPKZ")               6, true, true, 114, 2, 37, 4,  0, 0}, // #742
  {DBGFIELD("VUPKZ")              6, true, true, 165, 3,  1, 5,  0, 0}, // #743
  {DBGFIELD("VCVB_VCVBG_VCVBGOpt_VCVBOpt") 3, true, true, 138, 2, 190, 5,  0, 0}, // #744
  {DBGFIELD("VCVD_VCVDG")         3, true, true, 138, 2, 174, 5,  0, 0}, // #745
  {DBGFIELD("VAP_VSP")            1, false, false, 115, 1, 139, 4,  0, 0}, // #746
  {DBGFIELD("VMP_VMSP")           3, true, true, 112, 1, 87, 4,  0, 0}, // #747
  {DBGFIELD("VDP_VRP")            3, true, true, 112, 1, 87, 4,  0, 0}, // #748
  {DBGFIELD("VSDP")               3, true, true, 112, 1, 87, 4,  0, 0}, // #749
  {DBGFIELD("VSRP")               1, false, false, 112, 1, 24, 4,  0, 0}, // #750
  {DBGFIELD("VPSOP")              1, false, false, 115, 1, 139, 4,  0, 0}, // #751
  {DBGFIELD("VCP_VTP")            1, false, false, 115, 1, 29, 3,  0, 0}, // #752
  {DBGFIELD("EPSW")               3, true, true,  3, 1,  9, 3,  0, 0}, // #753
  {DBGFIELD("LPSW_LPSWE")         9, true, true,  0, 0, 92, 2,  0, 0}, // #754
  {DBGFIELD("IPK")                3, true, true, 39, 1, 33, 3,  0, 0}, // #755
  {DBGFIELD("SPKA")               1, false, true,  1, 1,  1, 3,  0, 0}, // #756
  {DBGFIELD("SSM")                1, false, true,  1, 1,  1, 3,  0, 0}, // #757
  {DBGFIELD("STNSM_STOSM")        3, true, true, 66, 2,  1, 4,  0, 0}, // #758
  {DBGFIELD("IAC")                1, false, false, 39, 1, 33, 3,  0, 0}, // #759
  {DBGFIELD("SAC_SACF")           1, false, true,  1, 1,  1, 3,  0, 0}, // #760
  {DBGFIELD("LCTL_LCTLG")         3, true, true,  8, 1, 148, 4,  0, 0}, // #761
  {DBGFIELD("STCTG_STCTL")        6, true, true, 130, 2,  1, 4,  0, 0}, // #762
  {DBGFIELD("EPAIR_EPAR_ESAIR_ESAR") 1, false, false,  1, 1, 12, 3,  0, 0}, // #763
  {DBGFIELD("SSAIR_SSAR")         3, true, true,  3, 1, 10, 2,  0, 0}, // #764
  {DBGFIELD("ESEA")               3, true, true,  3, 1, 10, 2,  0, 0}, // #765
  {DBGFIELD("SPX_STPX")           3, true, true,  3, 1, 10, 2,  0, 0}, // #766
  {DBGFIELD("ISKE")               3, true, true,  3, 1, 10, 2,  0, 0}, // #767
  {DBGFIELD("IVSK")               3, true, true,  3, 1, 10, 2,  0, 0}, // #768
  {DBGFIELD("SSKE_SSKEOpt")       3, true, true,  3, 1, 10, 2,  0, 0}, // #769
  {DBGFIELD("RRBE_RRBM")          3, true, true,  3, 1, 10, 2,  0, 0}, // #770
  {DBGFIELD("IRBM")               3, true, true,  3, 1, 10, 2,  0, 0}, // #771
  {DBGFIELD("PFMF")               3, true, true,  3, 1, 10, 2,  0, 0}, // #772
  {DBGFIELD("TB")                 3, true, true,  3, 1,  9, 3,  0, 0}, // #773
  {DBGFIELD("PGIN")               3, true, true,  3, 1, 10, 2,  0, 0}, // #774
  {DBGFIELD("PGOUT")              3, true, true,  3, 1, 10, 2,  0, 0}, // #775
  {DBGFIELD("IPTE_IPTEOpt_IPTEOptOpt") 3, true, true,  3, 1, 10, 2,  0, 0}, // #776
  {DBGFIELD("IDTE_IDTEOpt")       3, true, true,  3, 1, 10, 2,  0, 0}, // #777
  {DBGFIELD("CRDTE_CRDTEOpt")     3, true, true,  3, 1, 10, 2,  0, 0}, // #778
  {DBGFIELD("PTLB")               3, true, true,  3, 1, 10, 2,  0, 0}, // #779
  {DBGFIELD("CSP_CSPG")           3, true, true,  3, 1,  9, 3,  0, 0}, // #780
  {DBGFIELD("LPTEA")              3, true, true,  3, 1,  8, 4,  0, 0}, // #781
  {DBGFIELD("LRA_LRAG_LRAY")      3, true, true,  3, 1,  9, 3,  0, 0}, // #782
  {DBGFIELD("STRAG")              3, true, true,  3, 1, 10, 2,  0, 0}, // #783
  {DBGFIELD("LURA_LURAG")         3, true, true,  3, 1, 10, 2,  0, 0}, // #784
  {DBGFIELD("STURA_STURG")        3, true, true,  3, 1, 10, 2,  0, 0}, // #785
  {DBGFIELD("TPROT")              3, true, true,  3, 1, 10, 2,  0, 0}, // #786
  {DBGFIELD("MVCK_MVCP_MVCS")     6, true, true, 151, 3, 185, 5,  0, 0}, // #787
  {DBGFIELD("MVCDK_MVCSK")        6, true, true, 154, 2,  1, 4,  0, 0}, // #788
  {DBGFIELD("MVCOS")              3, true, true,  3, 1, 10, 2,  0, 0}, // #789
  {DBGFIELD("MVPG")               3, true, true,  3, 1, 10, 2,  0, 0}, // #790
  {DBGFIELD("LASP")               3, true, true,  3, 1, 10, 2,  0, 0}, // #791
  {DBGFIELD("PALB")               3, true, true,  1, 1,  1, 3,  0, 0}, // #792
  {DBGFIELD("PC")                 3, true, true,  3, 1, 10, 2,  0, 0}, // #793
  {DBGFIELD("PR")                 3, true, true,  3, 1, 10, 2,  0, 0}, // #794
  {DBGFIELD("PT_PTI")             3, true, true,  3, 1, 10, 2,  0, 0}, // #795
  {DBGFIELD("RP")                 3, true, true,  3, 1, 10, 2,  0, 0}, // #796
  {DBGFIELD("BSA_BSG")            3, true, true,  3, 1, 10, 2,  0, 0}, // #797
  {DBGFIELD("TAR")                3, true, true,  3, 1, 10, 2,  0, 0}, // #798
  {DBGFIELD("BAKR")               3, true, true,  3, 1, 10, 2,  0, 0}, // #799
  {DBGFIELD("EREG_EREGG")         3, true, true,  3, 1, 10, 2,  0, 0}, // #800
  {DBGFIELD("ESTA_MSTA")          3, true, true,  3, 1,  9, 3,  0, 0}, // #801
  {DBGFIELD("PTFF")               3, true, true,  3, 1, 10, 2,  0, 0}, // #802
  {DBGFIELD("SCK_SCKC_SCKPF")     3, true, true,  3, 1, 10, 2,  0, 0}, // #803
  {DBGFIELD("SPT")                3, true, true,  8, 1,  1, 3,  0, 0}, // #804
  {DBGFIELD("STCK_STCKF")         6, true, true, 156, 3, 97, 5,  0, 0}, // #805
  {DBGFIELD("STCKE")              9, true, true, 159, 3, 92, 5,  0, 0}, // #806
  {DBGFIELD("STCKC")              3, true, true,  3, 1, 10, 2,  0, 0}, // #807
  {DBGFIELD("STPT")               2, true, false, 97, 2,  1, 4,  0, 0}, // #808
  {DBGFIELD("STAP")               3, true, true,  3, 1, 10, 2,  0, 0}, // #809
  {DBGFIELD("STIDP")              3, true, true,  3, 1, 10, 2,  0, 0}, // #810
  {DBGFIELD("STSI")               3, true, true,  3, 1,  9, 3,  0, 0}, // #811
  {DBGFIELD("STFL_STFLE")         3, true, true,  3, 1,  9, 3,  0, 0}, // #812
  {DBGFIELD("ECAG")               3, true, true,  3, 1, 10, 2,  0, 0}, // #813
  {DBGFIELD("ECTG")               3, true, true,  3, 1,  9, 3,  0, 0}, // #814
  {DBGFIELD("PTF")                3, true, true,  3, 1, 10, 2,  0, 0}, // #815
  {DBGFIELD("PCKMO")              3, true, true,  3, 1, 10, 2,  0, 0}, // #816
  {DBGFIELD("SVC")                3, true, true,  3, 1, 10, 2,  0, 0}, // #817
  {DBGFIELD("MC")                 3, true, true, 60, 1,  1, 3,  0, 0}, // #818
  {DBGFIELD("DIAG")               3, true, true,  3, 1, 10, 2,  0, 0}, // #819
  {DBGFIELD("TRACE_TRACG")        1, false, false, 60, 1,  1, 3,  0, 0}, // #820
  {DBGFIELD("TRAP2_TRAP4")        3, true, true,  3, 1, 10, 2,  0, 0}, // #821
  {DBGFIELD("SIGA_SIGP")          3, true, true,  3, 1, 10, 2,  0, 0}, // #822
  {DBGFIELD("SIE")                3, true, true,  3, 1, 10, 2,  0, 0}, // #823
  {DBGFIELD("LPP")                1, false, false, 60, 1,  1, 3,  0, 0}, // #824
  {DBGFIELD("ECPGA")              3, true, true,  3, 1,  9, 3,  0, 0}, // #825
  {DBGFIELD("ECCTR_EPCTR")        3, true, true,  3, 1,  9, 3,  0, 0}, // #826
  {DBGFIELD("LCCTL")              3, true, true,  3, 1, 10, 2,  0, 0}, // #827
  {DBGFIELD("LPCTL_LSCTL")        3, true, true,  3, 1, 10, 2,  0, 0}, // #828
  {DBGFIELD("QCTRI_QSI")          3, true, true,  3, 1, 10, 2,  0, 0}, // #829
  {DBGFIELD("SCCTR_SPCTR")        3, true, true,  3, 1, 10, 2,  0, 0}, // #830
  {DBGFIELD("CSCH_HSCH_RSCH_XSCH") 3, true, true,  3, 1, 10, 2,  0, 0}, // #831
  {DBGFIELD("MSCH_SSCH_STSCH_TSCH") 3, true, true,  3, 1, 10, 2,  0, 0}, // #832
  {DBGFIELD("RCHP")               3, true, true,  3, 1, 10, 2,  0, 0}, // #833
  {DBGFIELD("SCHM")               3, true, true,  3, 1, 10, 2,  0, 0}, // #834
  {DBGFIELD("STCPS_STCRW")        3, true, true,  3, 1, 10, 2,  0, 0}, // #835
  {DBGFIELD("TPI")                3, true, true,  3, 1, 10, 2,  0, 0}, // #836
  {DBGFIELD("SAL")                3, true, true,  3, 1, 10, 2,  0, 0}, // #837
  {DBGFIELD("KIMD_KLMD_KMAC")     3, true, true,  3, 1,  8, 4,  0, 0}, // #838
  {DBGFIELD("POPCNT")             1, false, false, 39, 1, 32, 4,  0, 0}, // #839
  {DBGFIELD("VFI")                1, false, false, 115, 1, 37, 3,  0, 0}, // #840
  {DBGFIELD("VFM")                1, false, false, 115, 1, 37, 3,  0, 0}, // #841
  {DBGFIELD("VCVB_VCVBG")         3, true, true, 138, 2, 190, 5,  0, 0}, // #842
  {DBGFIELD("AGF")                1, false, false, 39, 2, 36, 5,  1, 1}, // #843
  {DBGFIELD("SGF")                1, false, false, 39, 2, 36, 5,  1, 1}, // #844
  {DBGFIELD("KM_KMC_KMCTR_KMF_KMO") 3, true, true,  3, 1, 106, 5,  0, 0}, // #845
  {DBGFIELD("PCC_PPNO")           3, true, true,  3, 1,  8, 4,  0, 0}, // #846
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH") 1, false, false,  1, 1, 12, 3,  0, 0}, // #847
  {DBGFIELD("VN_VNC_VNO")         1, false, false, 115, 1, 29, 3,  0, 0}, // #848
  {DBGFIELD("VO")                 1, false, false, 115, 1, 29, 3,  0, 0}, // #849
  {DBGFIELD("VPOPCT")             1, false, false, 115, 1, 29, 3,  0, 0}, // #850
  {DBGFIELD("WFMDB")              1, false, false, 115, 1, 37, 3,  0, 0}, // #851
  {DBGFIELD("VFMA_VFMS")          1, false, false, 115, 1, 37, 3,  0, 0}, // #852
  {DBGFIELD("VFMADB_VFMSDB")      1, false, false, 115, 1, 37, 3,  0, 0}, // #853
  {DBGFIELD("WFMADB_WFMSDB")      1, false, false, 115, 1, 37, 3,  0, 0}, // #854
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB") 1, false, false, 115, 1, 29, 3,  0, 0}, // #855
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS") 1, false, false, 115, 1, 32, 4,  0, 0}, // #856
  {DBGFIELD("LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, false, 39, 1, 29, 3,  0, 0}, // #857
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ") 1, false, false, 39, 2, 37, 4,  1, 1}, // #858
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ") 1, false, false, 66, 2,  1, 4,  0, 0}, // #859
  {DBGFIELD("ALSI_ASI")           1, false, false, 66, 2, 37, 4,  0, 0}, // #860
  {DBGFIELD("ALGF")               1, false, false, 39, 2, 19, 5,  1, 1}, // #861
  {DBGFIELD("PCC")                3, true, true,  3, 1,  8, 4,  0, 0}, // #862
  {DBGFIELD("CELFBR_CELGBR")      2, true, false, 134, 2, 144, 4,  0, 0}, // #863
  {DBGFIELD("MD_MEE")             1, false, false, 114, 2, 45, 4,  1, 1}, // #864
  {DBGFIELD("MDR_MEER")           1, false, false, 115, 1, 37, 3,  0, 0}, // #865
  {DBGFIELD("CFDTR")              2, true, false, 134, 2, 87, 5,  0, 0}, // #866
  {DBGFIELD("CFXTR")              2, true, false, 138, 2, 87, 5,  0, 0}, // #867
  {DBGFIELD("TDCDT_TDGDT")        1, false, false, 114, 2, 56, 4,  0, 0}, // #868
  {DBGFIELD("SCK")                3, true, true,  3, 1, 10, 2,  0, 0}, // #869
  {DBGFIELD("SCKPF")              3, true, true,  3, 1, 10, 2,  0, 0}, // #870
  {DBGFIELD("RISBG_RISBG32")      1, false, false, 39, 1,  1, 3,  0, 0}, // #871
}; // Z15ModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc Z196ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  16383, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("ADJDYNALLOC")        1, false, false,  1, 1,  1, 3,  0, 0}, // #1
  {DBGFIELD("CallBRCL_BRC_BRCAsm_BRCL_BRCLAsm") 1, false, true,  3, 1,  1, 3,  0, 0}, // #2
  {DBGFIELD("CallJG_J_JAsmE_JAsmH_JAsmHE_JAsmL_JAsmLE_JAsmLH_JAsmM_JAsmNE_JAsmNH_JAsmNHE_JAsmNL_JAsmNLE_JAsmNLH_JAsmNM_JAsmNO_JAsmNP_JAsmNZ_JAsmO_JAsmP_JAsmZ_JG_JGAsmE_JGAsmH_JGAsmHE_JGAsmL_JGAsmLE_JGAsmLH_JGAsmM_JGAsmNE_JGAsmNH_JGAsmNHE_JGAsmNL_JGAsmNLE_JGAsmNLH_JGAsmNM_JGAsmNO_JGAsmNP_JGAsmNZ_JGAsmO_JGAsmP_JGAsmZ") 1, false, true,  3, 1,  1, 3,  0, 0}, // #3
  {DBGFIELD("CallBCR_BC_BCAsm_BCR_BCRAsm") 1, false, true,  3, 1,  1, 3,  0, 0}, // #4
  {DBGFIELD("CallBR_B_BAsmE_BAsmH_BAsmHE_BAsmL_BAsmLE_BAsmLH_BAsmM_BAsmNE_BAsmNH_BAsmNHE_BAsmNL_BAsmNLE_BAsmNLH_BAsmNM_BAsmNO_BAsmNP_BAsmNZ_BAsmO_BAsmP_BAsmZ_BR_BRAsmE_BRAsmH_BRAsmHE_BRAsmL_BRAsmLE_BRAsmLH_BRAsmM_BRAsmNE_BRAsmNH_BRAsmNHE_BRAsmNL_BRAsmNLE_BRAsmNLH_BRAsmNM_BRAsmNO_BRAsmNP_BRAsmNZ_BRAsmO_BRAsmP_BRAsmZ") 1, false, true,  3, 1,  1, 3,  0, 0}, // #5
  {DBGFIELD("BI_BIAsmE_BIAsmH_BIAsmHE_BIAsmL_BIAsmLE_BIAsmLH_BIAsmM_BIAsmNE_BIAsmNH_BIAsmNHE_BIAsmNL_BIAsmNLE_BIAsmNLH_BIAsmNM_BIAsmNO_BIAsmNP_BIAsmNZ_BIAsmO_BIAsmP_BIAsmZ_BIC_BICAsm") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #6
  {DBGFIELD("BRCT_BRCTG")         3, true, true,  4, 2,  1, 4,  0, 0}, // #7
  {DBGFIELD("BRCTH")              3, true, true,  4, 2,  1, 4,  0, 0}, // #8
  {DBGFIELD("BCT_BCTG_BCTGR_BCTR") 3, true, true,  4, 2,  1, 4,  0, 0}, // #9
  {DBGFIELD("BRXH_BRXHG_BRXLE_BRXLG_BXH_BXHG_BXLE_BXLEG") 6, true, true,  6, 2,  1, 4,  0, 0}, // #10
  {DBGFIELD("CGIJ_CGIJAsm_CGIJAsmE_CGIJAsmH_CGIJAsmHE_CGIJAsmL_CGIJAsmLE_CGIJAsmLH_CGIJAsmNE_CGIJAsmNH_CGIJAsmNHE_CGIJAsmNL_CGIJAsmNLE_CGIJAsmNLH_CGRJ_CGRJAsm_CGRJAsmE_CGRJAsmH_CGRJAsmHE_CGRJAsmL_CGRJAsmLE_CGRJAsmLH_CGRJAsmNE_CGRJAsmNH_CGRJAsmNHE_CGRJAsmNL_CGRJAsmNLE_CGRJAsmNLH_CIJ_CIJAsm_CIJAsmE_CIJAsmH_CIJAsmHE_CIJAsmL_CIJAsmLE_CIJAsmLH_CIJAsmNE_CIJAsmNH_CIJAsmNHE_CIJAsmNL_CIJAsmNLE_CIJAsmNLH_CLGIJ_CLGIJAsm_CLGIJAsmE_CLGIJAsmH_CLGIJAsmHE_CLGIJAsmL_CLGIJAsmLE_CLGIJAsmLH_CLGIJAsmNE_CLGIJAsmNH_CLGIJAsmNHE_CLGIJAsmNL_CLGIJAsmNLE_CLGIJAsmNLH_CLGRJ_CLGRJAsm_CLGRJAsmE_CLGRJAsmH_CLGRJAsmHE_CLGRJAsmL_CLGRJAsmLE_CLGRJAsmLH_CLGRJAsmNE_CLGRJAsmNH_CLGRJAsmNHE_CLGRJAsmNL_CLGRJAsmNLE_CLGRJAsmNLH_CLIJ_CLIJAsm_CLIJAsmE_CLIJAsmH_CLIJAsmHE_CLIJAsmL_CLIJAsmLE_CLIJAsmLH_CLIJAsmNE_CLIJAsmNH_CLIJAsmNHE_CLIJAsmNL_CLIJAsmNLE_CLIJAsmNLH_CLRJ_CLRJAsm_CLRJAsmE_CLRJAsmH_CLRJAsmHE_CLRJAsmL_CLRJAsmLE_CLRJAsmLH_CLRJAsmNE_CLRJAsmNH_CLRJAsmNHE_CLRJAsmNL_CLRJAsmNLE_CLRJAsmNLH_CRJ_CRJAsm_CRJAsmE_CRJAsmH_CRJAsmHE_CRJAsmL_CRJAsmLE_CRJAsmLH_CRJAsmNE_CRJAsmNH_CRJAsmNHE_CRJAsmNL_CRJAsmNLE_CRJAsmNLH") 3, true, true,  4, 2,  1, 4,  0, 0}, // #11
  {DBGFIELD("CGIBCall_CGIBReturn_CGRBCall_CGRBReturn_CIBCall_CIBReturn_CLGIBCall_CLGIBReturn_CLGRBCall_CLGRBReturn_CLIBCall_CLIBReturn_CLRBCall_CLRBReturn_CRBCall_CRBReturn_CGIB_CGIBAsm_CGIBAsmE_CGIBAsmH_CGIBAsmHE_CGIBAsmL_CGIBAsmLE_CGIBAsmLH_CGIBAsmNE_CGIBAsmNH_CGIBAsmNHE_CGIBAsmNL_CGIBAsmNLE_CGIBAsmNLH_CGRB_CGRBAsm_CGRBAsmE_CGRBAsmH_CGRBAsmHE_CGRBAsmL_CGRBAsmLE_CGRBAsmLH_CGRBAsmNE_CGRBAsmNH_CGRBAsmNHE_CGRBAsmNL_CGRBAsmNLE_CGRBAsmNLH_CIB_CIBAsm_CIBAsmE_CIBAsmH_CIBAsmHE_CIBAsmL_CIBAsmLE_CIBAsmLH_CIBAsmNE_CIBAsmNH_CIBAsmNHE_CIBAsmNL_CIBAsmNLE_CIBAsmNLH_CLGIB_CLGIBAsm_CLGIBAsmE_CLGIBAsmH_CLGIBAsmHE_CLGIBAsmL_CLGIBAsmLE_CLGIBAsmLH_CLGIBAsmNE_CLGIBAsmNH_CLGIBAsmNHE_CLGIBAsmNL_CLGIBAsmNLE_CLGIBAsmNLH_CLGRB_CLGRBAsm_CLGRBAsmE_CLGRBAsmH_CLGRBAsmHE_CLGRBAsmL_CLGRBAsmLE_CLGRBAsmLH_CLGRBAsmNE_CLGRBAsmNH_CLGRBAsmNHE_CLGRBAsmNL_CLGRBAsmNLE_CLGRBAsmNLH_CLIB_CLIBAsm_CLIBAsmE_CLIBAsmH_CLIBAsmHE_CLIBAsmL_CLIBAsmLE_CLIBAsmLH_CLIBAsmNE_CLIBAsmNH_CLIBAsmNHE_CLIBAsmNL_CLIBAsmNLE_CLIBAsmNLH_CLRB_CLRBAsm_CLRBAsmE_CLRBAsmH_CLRBAsmHE_CLRBAsmL_CLRBAsmLE_CLRBAsmLH_CLRBAsmNE_CLRBAsmNH_CLRBAsmNHE_CLRBAsmNL_CLRBAsmNLE_CLRBAsmNLH_CRB_CRBAsm_CRBAsmE_CRBAsmH_CRBAsmHE_CRBAsmL_CRBAsmLE_CRBAsmLH_CRBAsmNE_CRBAsmNH_CRBAsmNHE_CRBAsmNL_CRBAsmNLE_CRBAsmNLH") 3, true, true,  4, 2,  1, 4,  0, 0}, // #12
  {DBGFIELD("CondTrap_Trap")      1, false, true,  3, 1,  1, 3,  0, 0}, // #13
  {DBGFIELD("CGIT_CGITAsm_CGITAsmE_CGITAsmH_CGITAsmHE_CGITAsmL_CGITAsmLE_CGITAsmLH_CGITAsmNE_CGITAsmNH_CGITAsmNHE_CGITAsmNL_CGITAsmNLE_CGITAsmNLH_CGRT_CGRTAsm_CGRTAsmE_CGRTAsmH_CGRTAsmHE_CGRTAsmL_CGRTAsmLE_CGRTAsmLH_CGRTAsmNE_CGRTAsmNH_CGRTAsmNHE_CGRTAsmNL_CGRTAsmNLE_CGRTAsmNLH_CIT_CITAsm_CITAsmE_CITAsmH_CITAsmHE_CITAsmL_CITAsmLE_CITAsmLH_CITAsmNE_CITAsmNH_CITAsmNHE_CITAsmNL_CITAsmNLE_CITAsmNLH_CRT_CRTAsm_CRTAsmE_CRTAsmH_CRTAsmHE_CRTAsmL_CRTAsmLE_CRTAsmLH_CRTAsmNE_CRTAsmNH_CRTAsmNHE_CRTAsmNL_CRTAsmNLE_CRTAsmNLH") 1, false, false,  1, 1,  1, 3,  0, 0}, // #14
  {DBGFIELD("CLGRT_CLGRTAsm_CLGRTAsmE_CLGRTAsmH_CLGRTAsmHE_CLGRTAsmL_CLGRTAsmLE_CLGRTAsmLH_CLGRTAsmNE_CLGRTAsmNH_CLGRTAsmNHE_CLGRTAsmNL_CLGRTAsmNLE_CLGRTAsmNLH_CLRT_CLRTAsm_CLRTAsmE_CLRTAsmH_CLRTAsmHE_CLRTAsmL_CLRTAsmLE_CLRTAsmLH_CLRTAsmNE_CLRTAsmNH_CLRTAsmNHE_CLRTAsmNL_CLRTAsmNLE_CLRTAsmNLH") 1, false, false,  1, 1,  1, 3,  0, 0}, // #15
  {DBGFIELD("CLFIT_CLFITAsm_CLFITAsmE_CLFITAsmH_CLFITAsmHE_CLFITAsmL_CLFITAsmLE_CLFITAsmLH_CLFITAsmNE_CLFITAsmNH_CLFITAsmNHE_CLFITAsmNL_CLFITAsmNLE_CLFITAsmNLH_CLGIT_CLGITAsm_CLGITAsmE_CLGITAsmH_CLGITAsmHE_CLGITAsmL_CLGITAsmLE_CLGITAsmLH_CLGITAsmNE_CLGITAsmNH_CLGITAsmNHE_CLGITAsmNL_CLGITAsmNLE_CLGITAsmNLH") 1, false, false,  1, 1,  1, 3,  0, 0}, // #16
  {DBGFIELD("CLGT_CLGTAsm_CLGTAsmE_CLGTAsmH_CLGTAsmHE_CLGTAsmL_CLGTAsmLE_CLGTAsmLH_CLGTAsmNE_CLGTAsmNH_CLGTAsmNHE_CLGTAsmNL_CLGTAsmNLE_CLGTAsmNLH_CLT_CLTAsm_CLTAsmE_CLTAsmH_CLTAsmHE_CLTAsmL_CLTAsmLE_CLTAsmLH_CLTAsmNE_CLTAsmNH_CLTAsmNHE_CLTAsmNL_CLTAsmNLE_CLTAsmNLH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #17
  {DBGFIELD("BRAS")               3, true, true, 10, 2,  1, 4,  0, 0}, // #18
  {DBGFIELD("CallBRASL_BRASL")    3, true, true, 10, 2,  1, 4,  0, 0}, // #19
  {DBGFIELD("CallBASR_BAS_BASR")  3, true, true, 10, 2,  1, 4,  0, 0}, // #20
  {DBGFIELD("TLS_GDCALL_TLS_LDCALL") 3, true, true, 10, 2,  1, 4,  0, 0}, // #21
  {DBGFIELD("Return")             1, false, true,  3, 1,  1, 3,  0, 0}, // #22
  {DBGFIELD("CondReturn")         1, false, true,  3, 1,  1, 3,  0, 0}, // #23
  {DBGFIELD("MVGHI_MVHHI_MVHI")   1, false, false,  4, 2,  1, 4,  0, 0}, // #24
  {DBGFIELD("MVI_MVIY")           1, false, false,  4, 2,  1, 4,  0, 0}, // #25
  {DBGFIELD("MVC")                3, true, true, 12, 2,  1, 4,  0, 0}, // #26
  {DBGFIELD("MVCL_MVCLE_MVCLU")   3, true, true, 14, 1,  8, 4,  0, 0}, // #27
  {DBGFIELD("MVCRL")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #28
  {DBGFIELD("COPY_TO_REGCLASS_COPY") 1, false, false,  1, 1,  1, 3,  0, 0}, // #29
  {DBGFIELD("EXTRACT_SUBREG")     1, false, false,  1, 1,  1, 3,  0, 0}, // #30
  {DBGFIELD("INSERT_SUBREG")      1, false, false,  1, 1,  1, 3,  0, 0}, // #31
  {DBGFIELD("REG_SEQUENCE")       1, false, false,  1, 1,  1, 3,  0, 0}, // #32
  {DBGFIELD("LMux_L_LFH_LRL_LY")  1, false, false,  3, 1, 12, 3,  0, 0}, // #33
  {DBGFIELD("LCBB")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #34
  {DBGFIELD("LG_LGRL")            1, false, false,  3, 1, 12, 3,  0, 0}, // #35
  {DBGFIELD("L128")               1, false, false,  3, 1, 12, 3,  0, 0}, // #36
  {DBGFIELD("LLIHF_LLIHH_LLIHL")  1, false, false,  1, 1,  1, 3,  0, 0}, // #37
  {DBGFIELD("LLILF_LLILH_LLILL")  1, false, false,  1, 1,  1, 3,  0, 0}, // #38
  {DBGFIELD("LGFI_LGHI")          1, false, false,  1, 1,  1, 3,  0, 0}, // #39
  {DBGFIELD("LHIMux_LHI")         1, false, false,  1, 1,  1, 3,  0, 0}, // #40
  {DBGFIELD("LR")                 1, false, false,  1, 1,  1, 3,  0, 0}, // #41
  {DBGFIELD("LZRF_LZRG")          16383, false, false,  0, 0,  0, 0,  0, 0}, // #42
  {DBGFIELD("LAT_LFHAT_LGAT")     16383, false, false,  0, 0,  0, 0,  0, 0}, // #43
  {DBGFIELD("LT_LTG")             1, false, false,  4, 2, 19, 5,  0, 0}, // #44
  {DBGFIELD("LTGR_LTR")           1, false, false,  1, 1,  1, 3,  0, 0}, // #45
  {DBGFIELD("STG_STGRL")          1, false, false,  4, 2,  1, 4,  0, 0}, // #46
  {DBGFIELD("ST128")              1, false, false,  4, 2,  1, 4,  0, 0}, // #47
  {DBGFIELD("STMux_ST_STFH_STRL_STY") 1, false, false,  4, 2,  1, 4,  0, 0}, // #48
  {DBGFIELD("MVST")               3, true, true, 14, 1,  8, 4,  0, 0}, // #49
  {DBGFIELD("LOCRMux")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #50
  {DBGFIELD("LOCFHR_LOCFHRAsm_LOCFHRAsmE_LOCFHRAsmH_LOCFHRAsmHE_LOCFHRAsmL_LOCFHRAsmLE_LOCFHRAsmLH_LOCFHRAsmM_LOCFHRAsmNE_LOCFHRAsmNH_LOCFHRAsmNHE_LOCFHRAsmNL_LOCFHRAsmNLE_LOCFHRAsmNLH_LOCFHRAsmNM_LOCFHRAsmNO_LOCFHRAsmNP_LOCFHRAsmNZ_LOCFHRAsmO_LOCFHRAsmP_LOCFHRAsmZ_LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #51
  {DBGFIELD("LOCHIMux_LOCGHI_LOCGHIAsm_LOCGHIAsmE_LOCGHIAsmH_LOCGHIAsmHE_LOCGHIAsmL_LOCGHIAsmLE_LOCGHIAsmLH_LOCGHIAsmM_LOCGHIAsmNE_LOCGHIAsmNH_LOCGHIAsmNHE_LOCGHIAsmNL_LOCGHIAsmNLE_LOCGHIAsmNLH_LOCGHIAsmNM_LOCGHIAsmNO_LOCGHIAsmNP_LOCGHIAsmNZ_LOCGHIAsmO_LOCGHIAsmP_LOCGHIAsmZ_LOCHHI_LOCHHIAsm_LOCHHIAsmE_LOCHHIAsmH_LOCHHIAsmHE_LOCHHIAsmL_LOCHHIAsmLE_LOCHHIAsmLH_LOCHHIAsmM_LOCHHIAsmNE_LOCHHIAsmNH_LOCHHIAsmNHE_LOCHHIAsmNL_LOCHHIAsmNLE_LOCHHIAsmNLH_LOCHHIAsmNM_LOCHHIAsmNO_LOCHHIAsmNP_LOCHHIAsmNZ_LOCHHIAsmO_LOCHHIAsmP_LOCHHIAsmZ_LOCHI_LOCHIAsm_LOCHIAsmE_LOCHIAsmH_LOCHIAsmHE_LOCHIAsmL_LOCHIAsmLE_LOCHIAsmLH_LOCHIAsmM_LOCHIAsmNE_LOCHIAsmNH_LOCHIAsmNHE_LOCHIAsmNL_LOCHIAsmNLE_LOCHIAsmNLH_LOCHIAsmNM_LOCHIAsmNO_LOCHIAsmNP_LOCHIAsmNZ_LOCHIAsmO_LOCHIAsmP_LOCHIAsmZ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #52
  {DBGFIELD("LOCMux_LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCFH_LOCFHAsm_LOCFHAsmE_LOCFHAsmH_LOCFHAsmHE_LOCFHAsmL_LOCFHAsmLE_LOCFHAsmLH_LOCFHAsmM_LOCFHAsmNE_LOCFHAsmNH_LOCFHAsmNHE_LOCFHAsmNL_LOCFHAsmNLE_LOCFHAsmNLH_LOCFHAsmNM_LOCFHAsmNO_LOCFHAsmNP_LOCFHAsmNZ_LOCFHAsmO_LOCFHAsmP_LOCFHAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #53
  {DBGFIELD("STOCMux_STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCFH_STOCFHAsm_STOCFHAsmE_STOCFHAsmH_STOCFHAsmHE_STOCFHAsmL_STOCFHAsmLE_STOCFHAsmLH_STOCFHAsmM_STOCFHAsmNE_STOCFHAsmNH_STOCFHAsmNHE_STOCFHAsmNL_STOCFHAsmNLE_STOCFHAsmNLH_STOCFHAsmNM_STOCFHAsmNO_STOCFHAsmNP_STOCFHAsmNZ_STOCFHAsmO_STOCFHAsmP_STOCFHAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #54
  {DBGFIELD("SELRMux")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #55
  {DBGFIELD("SELFHR_SELFHRAsm_SELFHRAsmE_SELFHRAsmH_SELFHRAsmHE_SELFHRAsmL_SELFHRAsmLE_SELFHRAsmLH_SELFHRAsmM_SELFHRAsmNE_SELFHRAsmNH_SELFHRAsmNHE_SELFHRAsmNL_SELFHRAsmNLE_SELFHRAsmNLH_SELFHRAsmNM_SELFHRAsmNO_SELFHRAsmNP_SELFHRAsmNZ_SELFHRAsmO_SELFHRAsmP_SELFHRAsmZ_SELGR_SELGRAsm_SELGRAsmE_SELGRAsmH_SELGRAsmHE_SELGRAsmL_SELGRAsmLE_SELGRAsmLH_SELGRAsmM_SELGRAsmNE_SELGRAsmNH_SELGRAsmNHE_SELGRAsmNL_SELGRAsmNLE_SELGRAsmNLH_SELGRAsmNM_SELGRAsmNO_SELGRAsmNP_SELGRAsmNZ_SELGRAsmO_SELGRAsmP_SELGRAsmZ_SELR_SELRAsm_SELRAsmE_SELRAsmH_SELRAsmHE_SELRAsmL_SELRAsmLE_SELRAsmLH_SELRAsmM_SELRAsmNE_SELRAsmNH_SELRAsmNHE_SELRAsmNL_SELRAsmNLE_SELRAsmNLH_SELRAsmNM_SELRAsmNO_SELRAsmNP_SELRAsmNZ_SELRAsmO_SELRAsmP_SELRAsmZ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #56
  {DBGFIELD("LBR_LGR_LHR")        1, false, false,  1, 1,  1, 3,  0, 0}, // #57
  {DBGFIELD("LGBR_LGFR_LGHR")     1, false, false,  1, 1,  1, 3,  0, 0}, // #58
  {DBGFIELD("LTGF")               1, false, false,  4, 2, 19, 5,  0, 0}, // #59
  {DBGFIELD("LTGFR")              1, false, false,  1, 1,  1, 3,  0, 0}, // #60
  {DBGFIELD("LBMux_LB_LBH")       1, false, false,  4, 2, 15, 4,  0, 0}, // #61
  {DBGFIELD("LH_LHY")             1, false, false,  4, 2, 15, 4,  0, 0}, // #62
  {DBGFIELD("LHMux_LHH_LHRL")     1, false, false,  4, 2, 15, 4,  0, 0}, // #63
  {DBGFIELD("LGB_LGF_LGH")        1, false, false,  4, 2, 15, 4,  0, 0}, // #64
  {DBGFIELD("LGFRL_LGHRL")        1, false, false,  4, 2, 15, 4,  0, 0}, // #65
  {DBGFIELD("LLCRMux_LLCR")       1, false, false,  1, 1,  1, 3,  0, 0}, // #66
  {DBGFIELD("LLHRMux_LLHR")       1, false, false,  1, 1,  1, 3,  0, 0}, // #67
  {DBGFIELD("LLGCR_LLGFR_LLGHR_LLGTR") 1, false, false,  1, 1,  1, 3,  0, 0}, // #68
  {DBGFIELD("LLCMux_LLC")         1, false, false,  3, 1, 12, 3,  0, 0}, // #69
  {DBGFIELD("LLHMux_LLH")         1, false, false,  3, 1, 12, 3,  0, 0}, // #70
  {DBGFIELD("LLCH_LLHH")          1, false, false,  4, 2, 15, 4,  0, 0}, // #71
  {DBGFIELD("LLHRL")              1, false, false,  3, 1, 12, 3,  0, 0}, // #72
  {DBGFIELD("LLGC_LLGF_LLGFRL_LLGH_LLGHRL_LLGT") 1, false, false,  3, 1, 12, 3,  0, 0}, // #73
  {DBGFIELD("LLZRGF")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #74
  {DBGFIELD("LLGFAT_LLGTAT")      16383, false, false,  0, 0,  0, 0,  0, 0}, // #75
  {DBGFIELD("STCMux_STC_STCH_STCY") 1, false, false,  4, 2,  1, 4,  0, 0}, // #76
  {DBGFIELD("STHMux_STH_STHH_STHRL_STHY") 1, false, false,  4, 2,  1, 4,  0, 0}, // #77
  {DBGFIELD("STCM_STCMH_STCMY")   1, false, false,  4, 2,  1, 4,  0, 0}, // #78
  {DBGFIELD("LM_LMG_LMH_LMY")     3, true, true, 15, 1, 24, 4,  0, 0}, // #79
  {DBGFIELD("LMD")                3, true, true, 14, 1,  9, 3,  0, 0}, // #80
  {DBGFIELD("STM_STMG_STMH_STMY") 3, true, true, 16, 2,  1, 4,  0, 0}, // #81
  {DBGFIELD("LRVGR_LRVR")         1, false, false,  1, 1,  1, 3,  0, 0}, // #82
  {DBGFIELD("LRV_LRVG_LRVH")      1, false, false,  4, 2, 15, 4,  0, 0}, // #83
  {DBGFIELD("STRV_STRVG_STRVH")   1, false, false,  4, 2,  1, 4,  0, 0}, // #84
  {DBGFIELD("MVCIN")              3, true, true, 14, 1, 10, 2,  0, 0}, // #85
  {DBGFIELD("LA_LARL_LAY")        1, false, false,  1, 1,  1, 3,  0, 0}, // #86
  {DBGFIELD("GOT")                1, false, false,  1, 1,  1, 3,  0, 0}, // #87
  {DBGFIELD("LPGR_LPR")           1, false, false,  1, 1, 28, 4,  0, 0}, // #88
  {DBGFIELD("LNGFR_LPGFR")        3, true, true,  8, 1, 32, 4,  0, 0}, // #89
  {DBGFIELD("LNGR_LNR")           1, false, false,  1, 1, 28, 4,  0, 0}, // #90
  {DBGFIELD("LCGR_LCR")           1, false, false,  1, 1,  1, 3,  0, 0}, // #91
  {DBGFIELD("LCGFR")              3, true, true,  8, 1, 28, 4,  0, 0}, // #92
  {DBGFIELD("IC_ICY")             1, false, false,  4, 2, 15, 4,  1, 1}, // #93
  {DBGFIELD("IC32_IC32Y")         1, false, false,  4, 2, 15, 4,  1, 1}, // #94
  {DBGFIELD("ICM_ICMH_ICMY")      1, false, false,  4, 2, 19, 5,  1, 1}, // #95
  {DBGFIELD("IIFMux_IIHMux_IILMux") 1, false, false,  1, 1,  1, 3,  0, 0}, // #96
  {DBGFIELD("IIHF64_IIHF")        1, false, false,  1, 1,  1, 3,  0, 0}, // #97
  {DBGFIELD("IIHH64_IIHH")        1, false, false,  1, 1,  1, 3,  0, 0}, // #98
  {DBGFIELD("IIHL64_IIHL")        1, false, false,  1, 1,  1, 3,  0, 0}, // #99
  {DBGFIELD("IILF64_IILF")        1, false, false,  1, 1,  1, 3,  0, 0}, // #100
  {DBGFIELD("IILH64_IILH")        1, false, false,  1, 1,  1, 3,  0, 0}, // #101
  {DBGFIELD("IILL64_IILL")        1, false, false,  1, 1,  1, 3,  0, 0}, // #102
  {DBGFIELD("A_AY")               1, false, false,  4, 2, 19, 5,  1, 1}, // #103
  {DBGFIELD("AH_AHY")             3, true, true, 10, 2, 36, 5,  1, 1}, // #104
  {DBGFIELD("AIH")                1, false, false,  1, 1,  1, 3,  0, 0}, // #105
  {DBGFIELD("AFIMux_AFI")         1, false, false,  1, 1,  1, 3,  0, 0}, // #106
  {DBGFIELD("AG")                 1, false, false,  4, 2, 19, 5,  1, 1}, // #107
  {DBGFIELD("AGFI")               1, false, false,  1, 1,  1, 3,  0, 0}, // #108
  {DBGFIELD("AGHI_AGHIK")         1, false, false,  1, 1,  1, 3,  0, 0}, // #109
  {DBGFIELD("AGR_AGRK")           1, false, false,  1, 1,  1, 3,  0, 0}, // #110
  {DBGFIELD("AHI_AHIK")           1, false, false,  1, 1,  1, 3,  0, 0}, // #111
  {DBGFIELD("AHIMux_AHIMuxK")     1, false, false,  1, 1,  1, 3,  0, 0}, // #112
  {DBGFIELD("AL_ALY")             1, false, false,  4, 2, 19, 5,  1, 1}, // #113
  {DBGFIELD("ALFI_ALHSIK")        1, false, false,  1, 1,  1, 3,  0, 0}, // #114
  {DBGFIELD("ALG_ALGF")           1, false, false,  4, 2, 19, 5,  1, 1}, // #115
  {DBGFIELD("ALGHSIK")            1, false, false,  1, 1,  1, 3,  0, 0}, // #116
  {DBGFIELD("ALGFI_ALGFR")        1, false, false,  1, 1,  1, 3,  0, 0}, // #117
  {DBGFIELD("ALGR_ALGRK")         1, false, false,  1, 1,  1, 3,  0, 0}, // #118
  {DBGFIELD("ALR_ALRK")           1, false, false,  1, 1,  1, 3,  0, 0}, // #119
  {DBGFIELD("AR_ARK")             1, false, false,  1, 1,  1, 3,  0, 0}, // #120
  {DBGFIELD("AHHHR_ALHHHR")       1, false, false,  1, 1,  1, 3,  0, 0}, // #121
  {DBGFIELD("AHHLR_ALHHLR")       3, true, true,  8, 1, 28, 4,  0, 0}, // #122
  {DBGFIELD("ALSIH_ALSIHN")       1, false, false,  1, 1,  1, 3,  0, 0}, // #123
  {DBGFIELD("AGSI_ALGSI_ALSI_ASI") 1, false, false,  4, 2, 15, 4,  0, 0}, // #124
  {DBGFIELD("ALC_ALCG")           3, true, true,  4, 2, 36, 5,  1, 1}, // #125
  {DBGFIELD("ALCGR_ALCR")         3, true, true,  1, 1, 28, 4,  0, 0}, // #126
  {DBGFIELD("AGF_AGH")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #127
  {DBGFIELD("AGFR")               3, true, true,  8, 1, 28, 4,  0, 0}, // #128
  {DBGFIELD("S_SG_SY")            1, false, false,  4, 2, 19, 5,  1, 1}, // #129
  {DBGFIELD("SH_SHY")             3, true, true, 10, 2, 36, 5,  1, 1}, // #130
  {DBGFIELD("SGR_SGRK")           1, false, false,  1, 1,  1, 3,  0, 0}, // #131
  {DBGFIELD("SLFI")               1, false, false,  1, 1,  1, 3,  0, 0}, // #132
  {DBGFIELD("SL_SLG_SLGF_SLY")    1, false, false,  4, 2, 19, 5,  1, 1}, // #133
  {DBGFIELD("SLGFI_SLGFR")        1, false, false,  1, 1,  1, 3,  0, 0}, // #134
  {DBGFIELD("SLGR_SLGRK")         1, false, false,  1, 1,  1, 3,  0, 0}, // #135
  {DBGFIELD("SLR_SLRK")           1, false, false,  1, 1,  1, 3,  0, 0}, // #136
  {DBGFIELD("SR_SRK")             1, false, false,  1, 1,  1, 3,  0, 0}, // #137
  {DBGFIELD("SHHHR_SLHHHR")       1, false, false,  1, 1,  1, 3,  0, 0}, // #138
  {DBGFIELD("SHHLR_SLHHLR")       3, true, true,  8, 1, 28, 4,  0, 0}, // #139
  {DBGFIELD("SLB_SLBG")           3, true, true,  4, 2, 36, 5,  1, 1}, // #140
  {DBGFIELD("SLBGR_SLBR")         3, true, true,  1, 1, 28, 4,  0, 0}, // #141
  {DBGFIELD("SGF_SGH")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #142
  {DBGFIELD("SGFR")               3, true, true,  8, 1, 28, 4,  0, 0}, // #143
  {DBGFIELD("N_NG_NY")            1, false, false,  4, 2, 19, 5,  1, 1}, // #144
  {DBGFIELD("NGR_NGRK")           1, false, false,  1, 1,  1, 3,  0, 0}, // #145
  {DBGFIELD("NIFMux_NIHMux_NILMux") 1, false, false,  1, 1,  1, 3,  0, 0}, // #146
  {DBGFIELD("NI_NIY")             1, false, false,  4, 2, 15, 4,  0, 0}, // #147
  {DBGFIELD("NIHF64_NIHF")        1, false, false,  1, 1,  1, 3,  0, 0}, // #148
  {DBGFIELD("NIHH64_NIHH")        1, false, false,  1, 1,  1, 3,  0, 0}, // #149
  {DBGFIELD("NIHL64_NIHL")        1, false, false,  1, 1,  1, 3,  0, 0}, // #150
  {DBGFIELD("NILF64_NILF")        1, false, false,  1, 1,  1, 3,  0, 0}, // #151
  {DBGFIELD("NILH64_NILH")        1, false, false,  1, 1,  1, 3,  0, 0}, // #152
  {DBGFIELD("NILL64_NILL")        1, false, false,  1, 1,  1, 3,  0, 0}, // #153
  {DBGFIELD("NR_NRK")             1, false, false,  1, 1,  1, 3,  0, 0}, // #154
  {DBGFIELD("NC")                 3, true, true, 18, 2, 41, 4,  0, 0}, // #155
  {DBGFIELD("O_OG_OY")            1, false, false,  4, 2, 19, 5,  1, 1}, // #156
  {DBGFIELD("OGR_OGRK")           1, false, false,  1, 1,  1, 3,  0, 0}, // #157
  {DBGFIELD("OI_OIY")             1, false, false,  4, 2, 15, 4,  0, 0}, // #158
  {DBGFIELD("OIFMux_OIHMux_OILMux") 1, false, false,  1, 1,  1, 3,  0, 0}, // #159
  {DBGFIELD("OIHF64_OIHF")        1, false, false,  1, 1,  1, 3,  0, 0}, // #160
  {DBGFIELD("OIHH64_OIHH")        1, false, false,  1, 1,  1, 3,  0, 0}, // #161
  {DBGFIELD("OIHL64_OIHL")        1, false, false,  1, 1,  1, 3,  0, 0}, // #162
  {DBGFIELD("OILF64_OILF")        1, false, false,  1, 1,  1, 3,  0, 0}, // #163
  {DBGFIELD("OILH64_OILH")        1, false, false,  1, 1,  1, 3,  0, 0}, // #164
  {DBGFIELD("OILL64_OILL")        1, false, false,  1, 1,  1, 3,  0, 0}, // #165
  {DBGFIELD("OR_ORK")             1, false, false,  1, 1,  1, 3,  0, 0}, // #166
  {DBGFIELD("OC")                 3, true, true, 18, 2, 41, 4,  0, 0}, // #167
  {DBGFIELD("X_XG_XY")            1, false, false,  4, 2, 19, 5,  1, 1}, // #168
  {DBGFIELD("XI_XIY")             1, false, false,  4, 2, 15, 4,  0, 0}, // #169
  {DBGFIELD("XIFMux")             1, false, false,  1, 1,  1, 3,  0, 0}, // #170
  {DBGFIELD("XGR_XGRK")           1, false, false,  1, 1,  1, 3,  0, 0}, // #171
  {DBGFIELD("XIHF64_XIHF")        1, false, false,  1, 1,  1, 3,  0, 0}, // #172
  {DBGFIELD("XILF64_XILF")        1, false, false,  1, 1,  1, 3,  0, 0}, // #173
  {DBGFIELD("XR_XRK")             1, false, false,  1, 1,  1, 3,  0, 0}, // #174
  {DBGFIELD("XC")                 3, true, true, 18, 2, 41, 4,  0, 0}, // #175
  {DBGFIELD("NCGRK_NCRK")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #176
  {DBGFIELD("OCGRK_OCRK")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #177
  {DBGFIELD("NNGRK_NNRK")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #178
  {DBGFIELD("NOGRK_NORK")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #179
  {DBGFIELD("NXGRK_NXRK")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #180
  {DBGFIELD("MS_MSGF_MSY")        1, false, false,  4, 2, 45, 4,  1, 1}, // #181
  {DBGFIELD("MSFI_MSR")           1, false, false,  1, 1, 37, 3,  0, 0}, // #182
  {DBGFIELD("MSG")                1, false, false,  4, 2, 49, 4,  1, 1}, // #183
  {DBGFIELD("MSGR")               1, false, false,  1, 1, 53, 3,  0, 0}, // #184
  {DBGFIELD("MSGFI_MSGFR")        1, false, false,  1, 1, 37, 3,  0, 0}, // #185
  {DBGFIELD("MLG")                3, true, true, 10, 2, 56, 4,  1, 1}, // #186
  {DBGFIELD("MLGR")               3, true, true,  8, 1, 41, 3,  0, 0}, // #187
  {DBGFIELD("MGHI")               1, false, false,  1, 1, 15, 3,  0, 0}, // #188
  {DBGFIELD("MHI")                1, false, false,  1, 1, 15, 3,  0, 0}, // #189
  {DBGFIELD("MH_MHY")             1, false, false,  4, 2, 41, 4,  1, 1}, // #190
  {DBGFIELD("MLR_MR")             3, true, true,  8, 1, 60, 3,  0, 0}, // #191
  {DBGFIELD("M_MFY_ML")           3, true, true, 10, 2, 63, 4,  1, 1}, // #192
  {DBGFIELD("MGH")                16383, false, false,  0, 0,  0, 0,  0, 0}, // #193
  {DBGFIELD("MG")                 16383, false, false,  0, 0,  0, 0,  0, 0}, // #194
  {DBGFIELD("MGRK")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #195
  {DBGFIELD("MSC")                16383, false, false,  0, 0,  0, 0,  0, 0}, // #196
  {DBGFIELD("MSGC")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #197
  {DBGFIELD("MSRKC")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #198
  {DBGFIELD("MSGRKC")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #199
  {DBGFIELD("DR")                 9, true, true, 20, 2, 67, 4,  0, 0}, // #200
  {DBGFIELD("D")                  9, true, true, 22, 3, 71, 5,  1, 1}, // #201
  {DBGFIELD("DSGFR_DSGR")         9, true, true, 22, 2, 67, 4,  0, 0}, // #202
  {DBGFIELD("DSG_DSGF")           9, true, true, 25, 3, 71, 5,  1, 1}, // #203
  {DBGFIELD("DLR")                9, true, true, 20, 2, 67, 4,  0, 0}, // #204
  {DBGFIELD("DLGR")               9, true, true, 20, 2, 67, 4,  0, 0}, // #205
  {DBGFIELD("DL_DLG")             9, true, true, 22, 3, 71, 5,  1, 1}, // #206
  {DBGFIELD("SLL_SLLG_SLLK")      1, false, false,  1, 1,  1, 3,  0, 0}, // #207
  {DBGFIELD("SRL_SRLG_SRLK")      1, false, false,  1, 1,  1, 3,  0, 0}, // #208
  {DBGFIELD("SRA_SRAG_SRAK")      1, false, false,  1, 1,  1, 3,  0, 0}, // #209
  {DBGFIELD("SLA_SLAG_SLAK")      1, false, false,  1, 1, 28, 4,  0, 0}, // #210
  {DBGFIELD("SLDA_SLDL_SRDA_SRDL") 6, true, true, 23, 2, 76, 5,  0, 0}, // #211
  {DBGFIELD("RLL_RLLG")           1, false, false,  4, 2, 37, 4,  0, 0}, // #212
  {DBGFIELD("RISBG_RISBG32_RISBGN") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #213
  {DBGFIELD("RISBHH_RISBHL_RISBHG") 1, false, false,  1, 1,  1, 3,  0, 0}, // #214
  {DBGFIELD("RISBLH_RISBLL_RISBLG") 1, false, false,  1, 1,  1, 3,  0, 0}, // #215
  {DBGFIELD("RISBMux")            1, false, false,  1, 1,  1, 3,  0, 0}, // #216
  {DBGFIELD("RNSBG_ROSBG_RXSBG")  3, true, true,  8, 1, 32, 4,  0, 0}, // #217
  {DBGFIELD("CMux_C_CG_CY")       1, false, false,  4, 2, 15, 4,  1, 1}, // #218
  {DBGFIELD("CRL")                1, false, false,  4, 2, 15, 4,  1, 1}, // #219
  {DBGFIELD("CFIMux_CHIMux_CFI_CHI") 1, false, false,  1, 1,  1, 3,  0, 0}, // #220
  {DBGFIELD("CGFI_CGHI")          1, false, false,  1, 1,  1, 3,  0, 0}, // #221
  {DBGFIELD("CGHSI_CGRL")         1, false, false,  4, 2, 15, 4,  0, 0}, // #222
  {DBGFIELD("CGR_CR")             1, false, false,  1, 1,  1, 3,  0, 0}, // #223
  {DBGFIELD("CIH")                1, false, false,  1, 1,  1, 3,  0, 0}, // #224
  {DBGFIELD("CHF")                1, false, false,  4, 2, 15, 4,  1, 1}, // #225
  {DBGFIELD("CHSI")               1, false, false,  4, 2, 15, 4,  0, 0}, // #226
  {DBGFIELD("CLMux_CL_CLY")       1, false, false,  4, 2, 15, 4,  1, 1}, // #227
  {DBGFIELD("CLFHSI")             1, false, false,  4, 2, 15, 4,  0, 0}, // #228
  {DBGFIELD("CLFIMux_CLFI")       1, false, false,  1, 1,  1, 3,  0, 0}, // #229
  {DBGFIELD("CLG")                1, false, false,  4, 2, 15, 4,  1, 1}, // #230
  {DBGFIELD("CLGHRL_CLGHSI")      1, false, false,  4, 2, 15, 4,  0, 0}, // #231
  {DBGFIELD("CLGF")               1, false, false,  4, 2, 15, 4,  1, 1}, // #232
  {DBGFIELD("CLGFRL")             1, false, false,  4, 2, 15, 4,  0, 0}, // #233
  {DBGFIELD("CLGFI_CLGFR")        1, false, false,  1, 1,  1, 3,  0, 0}, // #234
  {DBGFIELD("CLGR")               1, false, false,  1, 1,  1, 3,  0, 0}, // #235
  {DBGFIELD("CLGRL")              1, false, false,  4, 2, 15, 4,  0, 0}, // #236
  {DBGFIELD("CLHF")               1, false, false,  4, 2, 15, 4,  1, 1}, // #237
  {DBGFIELD("CLHHSI_CLHRL")       1, false, false,  4, 2, 15, 4,  0, 0}, // #238
  {DBGFIELD("CLIH")               1, false, false,  1, 1,  1, 3,  0, 0}, // #239
  {DBGFIELD("CLI_CLIY")           1, false, false,  4, 2, 15, 4,  0, 0}, // #240
  {DBGFIELD("CLR")                1, false, false,  1, 1,  1, 3,  0, 0}, // #241
  {DBGFIELD("CLRL")               1, false, false,  4, 2, 15, 4,  0, 0}, // #242
  {DBGFIELD("CHHR_CLHHR")         1, false, false,  1, 1,  1, 3,  0, 0}, // #243
  {DBGFIELD("CHLR_CLHLR")         3, true, true,  8, 1, 29, 3,  0, 0}, // #244
  {DBGFIELD("CH_CHY")             3, true, true, 10, 2, 37, 4,  1, 1}, // #245
  {DBGFIELD("CHRL")               3, true, true, 10, 2, 37, 4,  0, 0}, // #246
  {DBGFIELD("CGH")                3, true, true, 10, 2, 37, 4,  1, 1}, // #247
  {DBGFIELD("CGHRL")              3, true, true, 10, 2, 37, 4,  0, 0}, // #248
  {DBGFIELD("CHHSI")              3, true, true, 10, 2, 37, 4,  0, 0}, // #249
  {DBGFIELD("CGF")                3, true, true, 10, 2, 37, 4,  1, 1}, // #250
  {DBGFIELD("CGFRL")              3, true, true, 10, 2, 37, 4,  0, 0}, // #251
  {DBGFIELD("CGFR")               3, true, true,  8, 1, 29, 3,  0, 0}, // #252
  {DBGFIELD("CLC")                3, true, true, 18, 2, 41, 4,  0, 0}, // #253
  {DBGFIELD("CLCL_CLCLE_CLCLU")   3, true, true, 14, 1,  8, 4,  0, 0}, // #254
  {DBGFIELD("CLST")               3, true, true, 14, 1,  8, 4,  0, 0}, // #255
  {DBGFIELD("TM_TMY")             1, false, false,  4, 2, 15, 4,  0, 0}, // #256
  {DBGFIELD("TMHMux_TMLMux")      1, false, false,  1, 1,  1, 3,  0, 0}, // #257
  {DBGFIELD("TMHH64_TMHH")        1, false, false,  1, 1,  1, 3,  0, 0}, // #258
  {DBGFIELD("TMHL64_TMHL")        1, false, false,  1, 1,  1, 3,  0, 0}, // #259
  {DBGFIELD("TMLH64_TMLH")        1, false, false,  1, 1,  1, 3,  0, 0}, // #260
  {DBGFIELD("TMLL64_TMLL")        1, false, false,  1, 1,  1, 3,  0, 0}, // #261
  {DBGFIELD("CLM_CLMH_CLMY")      3, true, true, 10, 2, 37, 4,  1, 1}, // #262
  {DBGFIELD("PFD_PFDRL")          3, true, true,  3, 1,  1, 3,  0, 0}, // #263
  {DBGFIELD("BPP")                16383, false, false,  0, 0,  0, 0,  0, 0}, // #264
  {DBGFIELD("BPRP")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #265
  {DBGFIELD("NIAI")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #266
  {DBGFIELD("Serialize")          1, false, true,  3, 1,  1, 3,  0, 0}, // #267
  {DBGFIELD("LAA_LAAG")           1, false, false,  4, 2, 19, 5,  0, 0}, // #268
  {DBGFIELD("LAAL_LAALG")         1, false, false,  4, 2, 19, 5,  0, 0}, // #269
  {DBGFIELD("LAN_LANG")           1, false, false,  4, 2, 19, 5,  0, 0}, // #270
  {DBGFIELD("LAO_LAOG")           1, false, false,  4, 2, 19, 5,  0, 0}, // #271
  {DBGFIELD("LAX_LAXG")           1, false, false,  4, 2, 19, 5,  0, 0}, // #272
  {DBGFIELD("TS")                 1, false, true,  4, 2, 15, 4,  0, 0}, // #273
  {DBGFIELD("CS_CSG_CSY")         3, true, true, 10, 2, 36, 5,  0, 0}, // #274
  {DBGFIELD("CDS_CDSY")           6, true, true, 28, 2, 76, 5,  0, 0}, // #275
  {DBGFIELD("CDSG")               3, true, true, 30, 2, 81, 5,  0, 0}, // #276
  {DBGFIELD("CSST")               3, true, true, 14, 1, 10, 2,  0, 0}, // #277
  {DBGFIELD("PLO")                3, true, true, 14, 1, 10, 2,  0, 0}, // #278
  {DBGFIELD("LPQ")                3, true, true, 17, 1, 53, 3,  0, 0}, // #279
  {DBGFIELD("STPQ")               3, true, true, 32, 2,  1, 4,  0, 0}, // #280
  {DBGFIELD("LPD_LPDG")           3, true, true, 17, 1, 36, 4,  0, 0}, // #281
  {DBGFIELD("TR")                 3, true, true, 14, 1, 10, 2,  0, 0}, // #282
  {DBGFIELD("TRT")                3, true, true, 14, 1,  8, 4,  0, 0}, // #283
  {DBGFIELD("TRTR")               3, true, true, 14, 1,  8, 4,  0, 0}, // #284
  {DBGFIELD("TRE")                3, true, true, 14, 1,  9, 3,  0, 0}, // #285
  {DBGFIELD("TRTE_TRTEOpt_TRTRE_TRTREOpt") 3, true, true, 14, 1,  8, 4,  0, 0}, // #286
  {DBGFIELD("TROO_TROOOpt_TROT_TROTOpt_TRTO_TRTOOpt_TRTT_TRTTOpt") 3, true, true, 14, 1,  8, 4,  0, 0}, // #287
  {DBGFIELD("CU12_CU12Opt_CU14_CU14Opt_CU21_CU21Opt_CU24_CU24Opt_CU41_CU42") 3, true, true, 14, 1,  8, 4,  0, 0}, // #288
  {DBGFIELD("CUTFU_CUTFUOpt_CUUTF_CUUTFOpt") 3, true, true, 14, 1,  8, 4,  0, 0}, // #289
  {DBGFIELD("KM_KMA_KMC_KMCTR_KMF_KMO") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #290
  {DBGFIELD("KDSA_KIMD_KLMD_KMAC") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #291
  {DBGFIELD("PCC_PPNO_PRNO")      16383, false, false,  0, 0,  0, 0,  0, 0}, // #292
  {DBGFIELD("LGG")                16383, false, false,  0, 0,  0, 0,  0, 0}, // #293
  {DBGFIELD("LLGFSG")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #294
  {DBGFIELD("LGSC_STGSC")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #295
  {DBGFIELD("CVBG")               6, true, true, 36, 3, 71, 5,  1, 1}, // #296
  {DBGFIELD("CVB_CVBY")           6, true, true, 39, 3, 92, 5,  1, 1}, // #297
  {DBGFIELD("CVDG")               9, true, true, 42, 3,  1, 5,  0, 0}, // #298
  {DBGFIELD("CVD_CVDY")           9, true, true, 45, 3,  1, 5,  0, 0}, // #299
  {DBGFIELD("MVN_MVO_MVZ")        3, true, true, 15, 1,  1, 3,  0, 0}, // #300
  {DBGFIELD("PACK_PKA_PKU")       3, true, true, 15, 1,  1, 3,  0, 0}, // #301
  {DBGFIELD("UNPKA_UNPKU")        3, true, true, 15, 1, 25, 3,  0, 0}, // #302
  {DBGFIELD("UNPK")               3, true, true, 15, 1,  1, 3,  0, 0}, // #303
  {DBGFIELD("AP_SP_ZAP")          3, true, true, 48, 3, 97, 5,  0, 0}, // #304
  {DBGFIELD("MP")                 3, true, true, 48, 3,  1, 5,  0, 0}, // #305
  {DBGFIELD("DP")                 3, true, true, 48, 3,  1, 5,  0, 0}, // #306
  {DBGFIELD("SRP")                3, true, true, 51, 3, 97, 5,  0, 0}, // #307
  {DBGFIELD("CP")                 3, true, true, 54, 2, 63, 4,  0, 0}, // #308
  {DBGFIELD("TP")                 3, true, true, 56, 2, 41, 4,  0, 0}, // #309
  {DBGFIELD("ED_EDMK")            3, true, true, 14, 1, 10, 2,  0, 0}, // #310
  {DBGFIELD("CPYA_EAR_SAR")       1, false, false,  3, 1, 33, 3,  0, 0}, // #311
  {DBGFIELD("LAE_LAEY")           3, true, true,  4, 2, 15, 4,  0, 0}, // #312
  {DBGFIELD("LAM_LAMY")           3, true, true, 15, 1, 24, 4,  0, 0}, // #313
  {DBGFIELD("STAM_STAMY")         3, true, true, 58, 2,  1, 4,  0, 0}, // #314
  {DBGFIELD("IPM")                1, false, true,  1, 1, 33, 3,  0, 0}, // #315
  {DBGFIELD("SPM")                1, false, true,  3, 1, 33, 3,  0, 0}, // #316
  {DBGFIELD("BAL_BALR")           3, true, true, 10, 2,  1, 4,  0, 0}, // #317
  {DBGFIELD("TAM")                1, false, false,  1, 1,  1, 3,  0, 0}, // #318
  {DBGFIELD("SAM24_SAM31_SAM64")  1, false, true,  3, 1,  1, 3,  0, 0}, // #319
  {DBGFIELD("BSM")                3, true, true,  4, 2,  1, 4,  0, 0}, // #320
  {DBGFIELD("BASSM")              3, true, true, 10, 2,  1, 4,  0, 0}, // #321
  {DBGFIELD("TBEGIN_TBEGINC")     16383, false, false,  0, 0,  0, 0,  0, 0}, // #322
  {DBGFIELD("TEND")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #323
  {DBGFIELD("TABORT")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #324
  {DBGFIELD("ETND")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #325
  {DBGFIELD("NTSTG")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #326
  {DBGFIELD("PPA")                16383, false, false,  0, 0,  0, 0,  0, 0}, // #327
  {DBGFIELD("FLOGR")              3, true, true,  8, 1, 102, 4,  0, 0}, // #328
  {DBGFIELD("POPCNT_POPCNTOpt")   16383, false, false,  0, 0,  0, 0,  0, 0}, // #329
  {DBGFIELD("SRST_SRSTU")         3, true, true, 14, 1,  8, 4,  0, 0}, // #330
  {DBGFIELD("CUSE")               3, true, true, 14, 1,  8, 4,  0, 0}, // #331
  {DBGFIELD("CFC")                3, true, true, 14, 1, 106, 5,  0, 0}, // #332
  {DBGFIELD("UPT")                3, true, true, 14, 1, 111, 7,  0, 0}, // #333
  {DBGFIELD("CKSM")               3, true, true, 14, 1,  8, 4,  0, 0}, // #334
  {DBGFIELD("CMPSC")              3, true, true, 14, 1, 106, 5,  0, 0}, // #335
  {DBGFIELD("SORTL")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #336
  {DBGFIELD("DFLTCC")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #337
  {DBGFIELD("EX_EXRL")            3, true, true,  3, 1,  1, 2,  0, 0}, // #338
  {DBGFIELD("InsnE_InsnRI_InsnRIE_InsnRIL_InsnRILU_InsnRIS_InsnRR_InsnRRE_InsnRRF_InsnRRS_InsnRS_InsnRSE_InsnRSI_InsnRSY_InsnRX_InsnRXE_InsnRXF_InsnRXY_InsnS_InsnSI_InsnSIL_InsnSIY_InsnSS_InsnSSE_InsnSSF") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #339
  {DBGFIELD("LZDR_LZER")          1, false, false,  1, 1,  1, 3,  0, 0}, // #340
  {DBGFIELD("LZXR")               6, true, true,  8, 1, 29, 3,  0, 0}, // #341
  {DBGFIELD("LER")                1, false, false,  1, 1,  1, 3,  0, 0}, // #342
  {DBGFIELD("LDGR_LDR_LDR32")     1, false, false,  1, 1,  1, 3,  0, 0}, // #343
  {DBGFIELD("LGDR")               1, false, false,  1, 1, 33, 3,  0, 0}, // #344
  {DBGFIELD("LXR")                6, true, true,  8, 1, 29, 3,  0, 0}, // #345
  {DBGFIELD("LTDBR_LTEBR")        1, false, false, 60, 1, 76, 4,  0, 0}, // #346
  {DBGFIELD("LTDBRCompare_LTEBRCompare") 1, false, false, 60, 1, 41, 3,  0, 0}, // #347
  {DBGFIELD("LTXBR_LTXBRCompare") 3, true, true, 20, 1, 24, 4,  0, 0}, // #348
  {DBGFIELD("CPSDRdd_CPSDRds_CPSDRsd_CPSDRss") 3, true, true,  8, 1, 15, 3,  0, 0}, // #349
  {DBGFIELD("LE_LEY")             1, false, false,  3, 1, 12, 3,  0, 0}, // #350
  {DBGFIELD("LD_LDE32_LDY")       1, false, false,  3, 1, 12, 3,  0, 0}, // #351
  {DBGFIELD("LX")                 1, false, false,  3, 1, 12, 3,  0, 0}, // #352
  {DBGFIELD("STD_STDY_STE_STEY")  1, false, false,  4, 2,  1, 4,  0, 0}, // #353
  {DBGFIELD("STX")                1, false, false,  4, 2,  1, 4,  0, 0}, // #354
  {DBGFIELD("LEDBR_LEDBRA")       1, false, false, 60, 1, 60, 3,  0, 0}, // #355
  {DBGFIELD("LDXBR_LDXBRA_LEXBR_LEXBRA") 1, false, false, 61, 1, 41, 3,  0, 0}, // #356
  {DBGFIELD("LDEB")               1, false, false, 62, 2, 63, 4,  0, 0}, // #357
  {DBGFIELD("LDEBR")              1, false, false, 60, 1, 60, 3,  0, 0}, // #358
  {DBGFIELD("LXDB_LXEB")          3, true, true, 64, 2, 56, 4,  0, 0}, // #359
  {DBGFIELD("LXDBR_LXEBR")        3, true, true, 20, 1, 25, 3,  0, 0}, // #360
  {DBGFIELD("CDFBR_CDFBRA_CDGBR_CDGBRA_CEFBR_CEFBRA_CEGBR_CEGBRA") 3, true, true, 66, 2, 118, 4,  0, 0}, // #361
  {DBGFIELD("CXFBR_CXFBRA_CXGBR_CXGBRA") 6, true, true, 68, 2, 63, 4,  0, 0}, // #362
  {DBGFIELD("CDLFBR_CDLGBR_CELFBR_CELGBR") 3, true, true, 66, 2, 118, 4,  0, 0}, // #363
  {DBGFIELD("CXLFBR_CXLGBR")      6, true, true, 68, 2, 63, 4,  0, 0}, // #364
  {DBGFIELD("CFDBR_CFDBRA_CFEBR_CFEBRA_CGDBR_CGDBRA_CGEBR_CGEBRA") 3, true, true, 66, 2, 81, 5,  0, 0}, // #365
  {DBGFIELD("CFXBR_CFXBRA_CGXBR_CGXBRA") 3, true, true, 70, 2, 81, 5,  0, 0}, // #366
  {DBGFIELD("CLFEBR")             3, true, true, 66, 2, 81, 5,  0, 0}, // #367
  {DBGFIELD("CLFDBR")             3, true, true, 66, 2, 81, 5,  0, 0}, // #368
  {DBGFIELD("CLGDBR_CLGEBR")      3, true, true, 66, 2, 81, 5,  0, 0}, // #369
  {DBGFIELD("CLFXBR_CLGXBR")      3, true, true, 70, 2, 81, 5,  0, 0}, // #370
  {DBGFIELD("LCDBR_LCEBR_LNDBR_LNEBR_LPDBR_LPEBR") 1, false, false, 60, 1, 102, 4,  0, 0}, // #371
  {DBGFIELD("LCDFR_LCDFR_32_LNDFR_LNDFR_32_LPDFR_LPDFR_32") 1, false, false,  1, 1,  1, 3,  0, 0}, // #372
  {DBGFIELD("LCXBR_LNXBR_LPXBR")  3, true, true, 20, 1, 24, 4,  0, 0}, // #373
  {DBGFIELD("SQDB_SQEB")          1, false, false, 62, 2, 67, 4,  0, 0}, // #374
  {DBGFIELD("SQDBR_SQEBR")        1, false, false, 60, 1, 67, 3,  0, 0}, // #375
  {DBGFIELD("SQXBR")              3, true, true, 20, 1, 67, 3,  0, 0}, // #376
  {DBGFIELD("FIDBR_FIDBRA_FIEBR_FIEBRA") 1, false, false, 60, 1, 60, 3,  0, 0}, // #377
  {DBGFIELD("FIXBR_FIXBRA")       3, true, true, 20, 1, 56, 3,  0, 0}, // #378
  {DBGFIELD("ADB_AEB")            1, false, false, 62, 2, 122, 5,  1, 1}, // #379
  {DBGFIELD("ADBR_AEBR")          1, false, false, 60, 1, 102, 4,  0, 0}, // #380
  {DBGFIELD("AXBR")               3, true, true, 20, 1, 127, 4,  0, 0}, // #381
  {DBGFIELD("SDB_SEB")            1, false, false, 62, 2, 122, 5,  1, 1}, // #382
  {DBGFIELD("SDBR_SEBR")          1, false, false, 60, 1, 102, 4,  0, 0}, // #383
  {DBGFIELD("SXBR")               3, true, true, 20, 1, 127, 4,  0, 0}, // #384
  {DBGFIELD("MDB_MDEB_MEEB")      1, false, false, 62, 2, 63, 4,  1, 1}, // #385
  {DBGFIELD("MDBR_MDEBR_MEEBR")   1, false, false, 60, 1, 60, 3,  0, 0}, // #386
  {DBGFIELD("MXDB")               3, true, true, 64, 2, 56, 4,  1, 1}, // #387
  {DBGFIELD("MXDBR")              3, true, true, 20, 1, 25, 3,  0, 0}, // #388
  {DBGFIELD("MXBR")               3, true, true, 20, 1, 67, 3,  0, 0}, // #389
  {DBGFIELD("MAEB_MSEB")          3, true, true, 72, 2, 63, 4,  2, 2}, // #390
  {DBGFIELD("MAEBR_MSEBR")        3, true, true, 60, 1, 60, 3,  0, 0}, // #391
  {DBGFIELD("MADB_MSDB")          3, true, true, 72, 2, 63, 4,  2, 2}, // #392
  {DBGFIELD("MADBR_MSDBR")        3, true, true, 60, 1, 60, 3,  0, 0}, // #393
  {DBGFIELD("DDB_DEB")            1, false, false, 62, 2, 67, 4,  1, 1}, // #394
  {DBGFIELD("DDBR_DEBR")          1, false, false, 60, 1, 67, 3,  0, 0}, // #395
  {DBGFIELD("DXBR")               3, true, true, 20, 1, 67, 3,  0, 0}, // #396
  {DBGFIELD("DIDBR_DIEBR")        3, true, true, 14, 1,  8, 4,  0, 0}, // #397
  {DBGFIELD("CDB_CEB_KDB_KEB")    1, false, false, 62, 2, 56, 4,  1, 1}, // #398
  {DBGFIELD("CDBR_CEBR_KDBR_KEBR") 1, false, false, 60, 1, 41, 3,  0, 0}, // #399
  {DBGFIELD("CXBR_KXBR")          1, false, false, 61, 1, 67, 3,  0, 0}, // #400
  {DBGFIELD("TCDB_TCEB")          1, false, false, 62, 2, 56, 4,  0, 0}, // #401
  {DBGFIELD("TCXB")               3, true, true, 64, 2, 56, 4,  0, 0}, // #402
  {DBGFIELD("EFPC")               3, true, true,  4, 2, 131, 4,  0, 0}, // #403
  {DBGFIELD("STFPC")              3, true, true,  4, 2,  1, 4,  0, 0}, // #404
  {DBGFIELD("SFPC")               3, true, true,  3, 1,  1, 3,  0, 0}, // #405
  {DBGFIELD("LFPC")               3, true, true, 17, 1,  1, 3,  0, 0}, // #406
  {DBGFIELD("SFASR")              3, true, true, 14, 1, 10, 2,  0, 0}, // #407
  {DBGFIELD("LFAS")               3, true, true, 14, 1, 10, 2,  0, 0}, // #408
  {DBGFIELD("SRNM_SRNMB_SRNMT")   3, true, true,  1, 1, 29, 3,  0, 0}, // #409
  {DBGFIELD("LTDR_LTER")          1, false, false, 60, 1, 76, 4,  0, 0}, // #410
  {DBGFIELD("LTXR")               3, true, true, 20, 1, 76, 4,  0, 0}, // #411
  {DBGFIELD("LEDR_LRER")          1, false, false, 60, 1, 60, 3,  0, 0}, // #412
  {DBGFIELD("LEXR")               1, false, false, 60, 1, 60, 3,  0, 0}, // #413
  {DBGFIELD("LDXR_LRDR")          1, false, false, 60, 1, 41, 3,  0, 0}, // #414
  {DBGFIELD("LDE")                1, false, false,  3, 1, 12, 3,  0, 0}, // #415
  {DBGFIELD("LDER")               1, false, false,  1, 1,  1, 3,  0, 0}, // #416
  {DBGFIELD("LXD_LXE")            3, true, true, 64, 2, 56, 4,  0, 0}, // #417
  {DBGFIELD("LXDR_LXER")          3, true, true, 20, 1, 41, 3,  0, 0}, // #418
  {DBGFIELD("CDFR_CDGR_CEFR_CEGR") 3, true, true, 66, 2, 118, 4,  0, 0}, // #419
  {DBGFIELD("CXFR_CXGR")          6, true, true, 68, 2, 45, 4,  0, 0}, // #420
  {DBGFIELD("CFDR_CFER_CGDR_CGER") 3, true, true, 66, 2, 81, 5,  0, 0}, // #421
  {DBGFIELD("CFXR_CGXR")          3, true, true, 70, 2, 87, 5,  0, 0}, // #422
  {DBGFIELD("THDER_THDR")         1, false, false, 60, 1, 102, 4,  0, 0}, // #423
  {DBGFIELD("TBDR_TBEDR")         1, false, false, 60, 1, 102, 4,  0, 0}, // #424
  {DBGFIELD("LCDR_LCER_LNDR_LNER_LPDR_LPER") 1, false, false, 60, 1, 102, 4,  0, 0}, // #425
  {DBGFIELD("LCXR_LNXR_LPXR")     3, true, true, 20, 1, 76, 4,  0, 0}, // #426
  {DBGFIELD("HDR_HER")            1, false, false, 60, 1, 60, 3,  0, 0}, // #427
  {DBGFIELD("SQD_SQE")            1, false, false, 62, 2, 67, 4,  0, 0}, // #428
  {DBGFIELD("SQDR_SQER")          1, false, false, 60, 1, 67, 3,  0, 0}, // #429
  {DBGFIELD("SQXR")               3, true, true, 20, 1, 67, 3,  0, 0}, // #430
  {DBGFIELD("FIDR_FIER")          1, false, false, 60, 1, 60, 3,  0, 0}, // #431
  {DBGFIELD("FIXR")               3, true, true, 20, 1, 56, 3,  0, 0}, // #432
  {DBGFIELD("AD_AE_AU_AW")        1, false, false, 62, 2, 122, 5,  1, 1}, // #433
  {DBGFIELD("ADR_AER_AUR_AWR")    1, false, false, 60, 1, 102, 4,  0, 0}, // #434
  {DBGFIELD("AXR")                3, true, true, 20, 1, 135, 4,  0, 0}, // #435
  {DBGFIELD("SD_SE_SU_SW")        1, false, false, 62, 2, 122, 5,  1, 1}, // #436
  {DBGFIELD("SDR_SER_SUR_SWR")    1, false, false, 60, 1, 102, 4,  0, 0}, // #437
  {DBGFIELD("SXR")                3, true, true, 20, 1, 135, 4,  0, 0}, // #438
  {DBGFIELD("MD_MDE_ME_MEE")      1, false, false, 62, 2, 49, 4,  1, 1}, // #439
  {DBGFIELD("MDER_MDR_MEER_MER")  1, false, false, 60, 1, 53, 3,  0, 0}, // #440
  {DBGFIELD("MXD")                3, true, true, 64, 2, 56, 4,  1, 1}, // #441
  {DBGFIELD("MXDR")               3, true, true, 20, 1, 25, 3,  0, 0}, // #442
  {DBGFIELD("MXR")                3, true, true, 20, 1, 67, 3,  0, 0}, // #443
  {DBGFIELD("MY")                 3, true, true, 64, 2, 56, 4,  1, 1}, // #444
  {DBGFIELD("MYH_MYL")            3, true, true, 72, 2, 63, 4,  1, 1}, // #445
  {DBGFIELD("MYR")                3, true, true, 20, 1, 25, 3,  0, 0}, // #446
  {DBGFIELD("MYHR_MYLR")          3, true, true, 60, 1, 60, 3,  0, 0}, // #447
  {DBGFIELD("MAD_MAE_MSD_MSE")    3, true, true, 72, 2, 63, 4,  2, 2}, // #448
  {DBGFIELD("MADR_MAER_MSDR_MSER") 3, true, true, 60, 1, 60, 3,  0, 0}, // #449
  {DBGFIELD("MAY")                3, true, true, 64, 2, 56, 4,  2, 2}, // #450
  {DBGFIELD("MAYH_MAYL")          3, true, true, 72, 2, 63, 4,  2, 2}, // #451
  {DBGFIELD("MAYR")               3, true, true, 20, 1, 25, 3,  0, 0}, // #452
  {DBGFIELD("MAYHR_MAYLR")        3, true, true, 60, 1, 60, 3,  0, 0}, // #453
  {DBGFIELD("DD_DE")              1, false, false, 62, 2, 67, 4,  1, 1}, // #454
  {DBGFIELD("DDR_DER")            1, false, false, 60, 1, 67, 3,  0, 0}, // #455
  {DBGFIELD("DXR")                3, true, true, 20, 1, 67, 3,  0, 0}, // #456
  {DBGFIELD("CD_CE")              1, false, false, 62, 2, 56, 4,  1, 1}, // #457
  {DBGFIELD("CDR_CER")            1, false, false, 60, 1, 41, 3,  0, 0}, // #458
  {DBGFIELD("CXR")                1, false, false, 61, 1, 56, 3,  0, 0}, // #459
  {DBGFIELD("LTDTR")              1, false, false, 39, 1, 139, 4,  0, 0}, // #460
  {DBGFIELD("LTXTR")              3, true, true, 42, 1, 36, 4,  0, 0}, // #461
  {DBGFIELD("LEDTR")              1, false, false, 39, 1, 67, 3,  0, 0}, // #462
  {DBGFIELD("LDXTR")              1, false, false, 36, 1, 67, 3,  0, 0}, // #463
  {DBGFIELD("LDETR")              1, false, false, 39, 1, 60, 3,  0, 0}, // #464
  {DBGFIELD("LXDTR")              3, true, true, 42, 1, 37, 3,  0, 0}, // #465
  {DBGFIELD("CDFTR")              3, true, true, 39, 2, 41, 4,  0, 0}, // #466
  {DBGFIELD("CDGTR_CDGTRA")       3, true, true, 39, 2, 67, 4,  0, 0}, // #467
  {DBGFIELD("CXFTR")              6, true, true, 48, 2, 15, 4,  0, 0}, // #468
  {DBGFIELD("CXGTR_CXGTRA")       6, true, true, 48, 2, 67, 4,  0, 0}, // #469
  {DBGFIELD("CDLFTR")             3, true, true, 39, 2, 41, 4,  0, 0}, // #470
  {DBGFIELD("CDLGTR")             3, true, true, 39, 2, 41, 4,  0, 0}, // #471
  {DBGFIELD("CXLFTR")             6, true, true, 48, 2, 41, 4,  0, 0}, // #472
  {DBGFIELD("CXLGTR")             6, true, true, 48, 2, 15, 4,  0, 0}, // #473
  {DBGFIELD("CFDTR_CGDTR_CGDTRA") 3, true, true, 39, 2, 87, 5,  0, 0}, // #474
  {DBGFIELD("CFXTR_CGXTR_CGXTRA") 3, true, true, 36, 2, 87, 5,  0, 0}, // #475
  {DBGFIELD("CLFDTR_CLGDTR")      3, true, true, 39, 2, 122, 5,  0, 0}, // #476
  {DBGFIELD("CLFXTR_CLGXTR")      3, true, true, 36, 2, 143, 5,  0, 0}, // #477
  {DBGFIELD("CDSTR_CDUTR")        3, true, true, 39, 2, 15, 4,  0, 0}, // #478
  {DBGFIELD("CXSTR_CXUTR")        6, true, true, 51, 2, 118, 4,  0, 0}, // #479
  {DBGFIELD("CSDTR_CUDTR")        3, true, true, 39, 2, 144, 4,  0, 0}, // #480
  {DBGFIELD("CSXTR_CUXTR")        6, true, true, 51, 2, 49, 4,  0, 0}, // #481
  {DBGFIELD("CDZT")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #482
  {DBGFIELD("CXZT")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #483
  {DBGFIELD("CZDT")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #484
  {DBGFIELD("CZXT")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #485
  {DBGFIELD("CDPT")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #486
  {DBGFIELD("CXPT")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #487
  {DBGFIELD("CPDT")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #488
  {DBGFIELD("CPXT")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #489
  {DBGFIELD("PFPO")               3, true, true, 14, 1,  8, 4,  0, 0}, // #490
  {DBGFIELD("FIDTR")              1, false, false, 39, 1, 53, 3,  0, 0}, // #491
  {DBGFIELD("FIXTR")              3, true, true, 42, 1, 25, 3,  0, 0}, // #492
  {DBGFIELD("EEDTR")              3, true, true, 39, 2, 144, 4,  0, 0}, // #493
  {DBGFIELD("EEXTR")              3, true, true, 36, 2, 118, 4,  0, 0}, // #494
  {DBGFIELD("ESDTR")              3, true, true, 39, 2, 144, 4,  0, 0}, // #495
  {DBGFIELD("ESXTR")              3, true, true, 36, 2, 118, 4,  0, 0}, // #496
  {DBGFIELD("ADTR_ADTRA")         1, false, false, 39, 1, 76, 4,  0, 0}, // #497
  {DBGFIELD("AXTR_AXTRA")         3, true, true, 42, 1, 87, 4,  0, 0}, // #498
  {DBGFIELD("SDTR_SDTRA")         1, false, false, 39, 1, 76, 4,  0, 0}, // #499
  {DBGFIELD("SXTR_SXTRA")         3, true, true, 42, 1, 87, 4,  0, 0}, // #500
  {DBGFIELD("MDTR_MDTRA")         1, false, false, 39, 1, 67, 3,  0, 0}, // #501
  {DBGFIELD("MXTR_MXTRA")         3, true, true, 42, 1, 67, 3,  0, 0}, // #502
  {DBGFIELD("DDTR_DDTRA")         1, false, false, 39, 1, 67, 3,  0, 0}, // #503
  {DBGFIELD("DXTR_DXTRA")         3, true, true, 42, 1, 67, 3,  0, 0}, // #504
  {DBGFIELD("QADTR")              1, false, false, 39, 1, 148, 4,  0, 0}, // #505
  {DBGFIELD("QAXTR")              3, true, true, 42, 1, 24, 4,  0, 0}, // #506
  {DBGFIELD("RRDTR")              3, true, true, 39, 2, 122, 5,  0, 0}, // #507
  {DBGFIELD("RRXTR")              6, true, true, 48, 2, 87, 5,  0, 0}, // #508
  {DBGFIELD("SLDT_SRDT")          3, true, true, 79, 2, 63, 4,  0, 0}, // #509
  {DBGFIELD("SLXT_SRXT")          3, true, true, 81, 2, 56, 4,  0, 0}, // #510
  {DBGFIELD("IEDTR")              3, true, true, 39, 2, 15, 4,  0, 0}, // #511
  {DBGFIELD("IEXTR")              6, true, true, 48, 2, 144, 4,  0, 0}, // #512
  {DBGFIELD("CDTR_KDTR")          1, false, false, 39, 1, 41, 3,  0, 0}, // #513
  {DBGFIELD("CXTR_KXTR")          1, false, false, 36, 1, 25, 3,  0, 0}, // #514
  {DBGFIELD("CEDTR")              1, false, false, 39, 1, 12, 3,  0, 0}, // #515
  {DBGFIELD("CEXTR")              1, false, false, 36, 1, 15, 3,  0, 0}, // #516
  {DBGFIELD("TDCDT_TDCET_TDGDT_TDGET") 1, false, false, 79, 2, 45, 4,  0, 0}, // #517
  {DBGFIELD("TDCXT_TDGXT")        1, false, false, 74, 2, 45, 4,  0, 0}, // #518
  {DBGFIELD("VLR32_VLR64_VLR")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #519
  {DBGFIELD("VLGV_VLGVB_VLGVF_VLGVG_VLGVH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #520
  {DBGFIELD("VLVG_VLVGB_VLVGF_VLVGG_VLVGH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #521
  {DBGFIELD("VLVGP32_VLVGP")      16383, false, false,  0, 0,  0, 0,  0, 0}, // #522
  {DBGFIELD("VZERO")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #523
  {DBGFIELD("VONE")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #524
  {DBGFIELD("VGBM")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #525
  {DBGFIELD("VGM_VGMB_VGMF_VGMG_VGMH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #526
  {DBGFIELD("VREPI_VREPIB_VREPIF_VREPIG_VREPIH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #527
  {DBGFIELD("VLEIB_VLEIF_VLEIG_VLEIH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #528
  {DBGFIELD("VL_VLAlign")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #529
  {DBGFIELD("VLBB_VLL")           16383, false, false,  0, 0,  0, 0,  0, 0}, // #530
  {DBGFIELD("VL32_VL64")          16383, false, false,  0, 0,  0, 0,  0, 0}, // #531
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH_VLLEZLF") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #532
  {DBGFIELD("VLREP_VLREPB_VLREPF_VLREPG_VLREPH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #533
  {DBGFIELD("VLEB_VLEF_VLEG_VLEH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #534
  {DBGFIELD("VGEF_VGEG")          16383, false, false,  0, 0,  0, 0,  0, 0}, // #535
  {DBGFIELD("VLM_VLMAlign")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #536
  {DBGFIELD("VLRL_VLRLR")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #537
  {DBGFIELD("VST32_VST64_VST_VSTAlign_VSTL") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #538
  {DBGFIELD("VSTEF_VSTEG")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #539
  {DBGFIELD("VSTEB_VSTEH")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #540
  {DBGFIELD("VSTM_VSTMAlign")     16383, false, false,  0, 0,  0, 0,  0, 0}, // #541
  {DBGFIELD("VSCEF_VSCEG")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #542
  {DBGFIELD("VSTRL_VSTRLR")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #543
  {DBGFIELD("VLBR_VLBRF_VLBRG_VLBRH_VLBRQ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #544
  {DBGFIELD("VLER_VLERF_VLERG_VLERH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #545
  {DBGFIELD("VLEBRF_VLEBRG_VLEBRH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #546
  {DBGFIELD("VLLEBRZ_VLLEBRZE_VLLEBRZF_VLLEBRZG_VLLEBRZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #547
  {DBGFIELD("VLBRREP_VLBRREPF_VLBRREPG_VLBRREPH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #548
  {DBGFIELD("VSTBR_VSTBRF_VSTBRG_VSTBRH_VSTBRQ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #549
  {DBGFIELD("VSTER_VSTERF_VSTERG_VSTERH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #550
  {DBGFIELD("VSTEBRH")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #551
  {DBGFIELD("VSTEBRF_VSTEBRG")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #552
  {DBGFIELD("VMRH_VMRHB_VMRHF_VMRHG_VMRHH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #553
  {DBGFIELD("VMRL_VMRLB_VMRLF_VMRLG_VMRLH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #554
  {DBGFIELD("VPERM")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #555
  {DBGFIELD("VPDI")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #556
  {DBGFIELD("VBPERM")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #557
  {DBGFIELD("VREP_VREPB_VREPF_VREPG_VREPH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #558
  {DBGFIELD("VSEL")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #559
  {DBGFIELD("VPK_VPKF_VPKG_VPKH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #560
  {DBGFIELD("VPKS_VPKSF_VPKSG_VPKSH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #561
  {DBGFIELD("VPKSFS_VPKSGS_VPKSHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #562
  {DBGFIELD("VPKLS_VPKLSF_VPKLSG_VPKLSH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #563
  {DBGFIELD("VPKLSFS_VPKLSGS_VPKLSHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #564
  {DBGFIELD("VSEG_VSEGB_VSEGF_VSEGH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #565
  {DBGFIELD("VUPH_VUPHB_VUPHF_VUPHH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #566
  {DBGFIELD("VUPL_VUPLB_VUPLF")   16383, false, false,  0, 0,  0, 0,  0, 0}, // #567
  {DBGFIELD("VUPLH_VUPLHB_VUPLHF_VUPLHH_VUPLHW") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #568
  {DBGFIELD("VUPLL_VUPLLB_VUPLLF_VUPLLH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #569
  {DBGFIELD("VA_VAB_VAC_VACQ_VAF_VAG_VAH_VAQ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #570
  {DBGFIELD("VACC_VACCB_VACCC_VACCCQ_VACCF_VACCG_VACCH_VACCQ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #571
  {DBGFIELD("VAVG_VAVGB_VAVGF_VAVGG_VAVGH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #572
  {DBGFIELD("VAVGL_VAVGLB_VAVGLF_VAVGLG_VAVGLH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #573
  {DBGFIELD("VN_VNC_VNN_VNO_VNX") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #574
  {DBGFIELD("VO_VOC")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #575
  {DBGFIELD("VCKSM")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #576
  {DBGFIELD("VCLZ_VCLZB_VCLZF_VCLZG_VCLZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #577
  {DBGFIELD("VCTZ_VCTZB_VCTZF_VCTZG_VCTZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #578
  {DBGFIELD("VX")                 16383, false, false,  0, 0,  0, 0,  0, 0}, // #579
  {DBGFIELD("VGFM")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #580
  {DBGFIELD("VGFMA_VGFMAB_VGFMAF_VGFMAG_VGFMAH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #581
  {DBGFIELD("VGFMB_VGFMF_VGFMG_VGFMH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #582
  {DBGFIELD("VLC_VLCB_VLCF_VLCG_VLCH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #583
  {DBGFIELD("VLP_VLPB_VLPF_VLPG_VLPH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #584
  {DBGFIELD("VMX_VMXB_VMXF_VMXG_VMXH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #585
  {DBGFIELD("VMXL_VMXLB_VMXLF_VMXLG_VMXLH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #586
  {DBGFIELD("VMN_VMNB_VMNF_VMNG_VMNH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #587
  {DBGFIELD("VMNL_VMNLB_VMNLF_VMNLG_VMNLH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #588
  {DBGFIELD("VMAL_VMALB_VMALF")   16383, false, false,  0, 0,  0, 0,  0, 0}, // #589
  {DBGFIELD("VMALE_VMALEB_VMALEF_VMALEH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #590
  {DBGFIELD("VMALH_VMALHB_VMALHF_VMALHH_VMALHW") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #591
  {DBGFIELD("VMALO_VMALOB_VMALOF_VMALOH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #592
  {DBGFIELD("VMAO_VMAOB_VMAOF_VMAOH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #593
  {DBGFIELD("VMAE_VMAEB_VMAEF_VMAEH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #594
  {DBGFIELD("VMAH_VMAHB_VMAHF_VMAHH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #595
  {DBGFIELD("VME_VMEB_VMEF_VMEH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #596
  {DBGFIELD("VMH_VMHB_VMHF_VMHH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #597
  {DBGFIELD("VML_VMLB_VMLF")      16383, false, false,  0, 0,  0, 0,  0, 0}, // #598
  {DBGFIELD("VMLE_VMLEB_VMLEF_VMLEH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #599
  {DBGFIELD("VMLH_VMLHB_VMLHF_VMLHH_VMLHW") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #600
  {DBGFIELD("VMLO_VMLOB_VMLOF_VMLOH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #601
  {DBGFIELD("VMO_VMOB_VMOF_VMOH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #602
  {DBGFIELD("VMSL_VMSLG")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #603
  {DBGFIELD("VPOPCT_VPOPCTB_VPOPCTF_VPOPCTG_VPOPCTH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #604
  {DBGFIELD("VERLL_VERLLB_VERLLF_VERLLG_VERLLH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #605
  {DBGFIELD("VERLLV_VERLLVB_VERLLVF_VERLLVG_VERLLVH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #606
  {DBGFIELD("VERIM_VERIMB_VERIMF_VERIMG_VERIMH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #607
  {DBGFIELD("VESL_VESLB_VESLF_VESLG_VESLH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #608
  {DBGFIELD("VESLV_VESLVB_VESLVF_VESLVG_VESLVH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #609
  {DBGFIELD("VESRA_VESRAB_VESRAF_VESRAG_VESRAH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #610
  {DBGFIELD("VESRAV_VESRAVB_VESRAVF_VESRAVG_VESRAVH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #611
  {DBGFIELD("VESRL_VESRLB_VESRLF_VESRLG_VESRLH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #612
  {DBGFIELD("VESRLV_VESRLVB_VESRLVF_VESRLVG_VESRLVH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #613
  {DBGFIELD("VSL_VSLDB")          16383, false, false,  0, 0,  0, 0,  0, 0}, // #614
  {DBGFIELD("VSLB")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #615
  {DBGFIELD("VSRA_VSRL")          16383, false, false,  0, 0,  0, 0,  0, 0}, // #616
  {DBGFIELD("VSRAB_VSRLB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #617
  {DBGFIELD("VSLD")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #618
  {DBGFIELD("VSRD")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #619
  {DBGFIELD("VSB_VSBCBI_VSBCBIQ_VSBI_VSBIQ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #620
  {DBGFIELD("VSCBI_VSCBIB_VSCBIF_VSCBIG_VSCBIH_VSCBIQ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #621
  {DBGFIELD("VS_VSF_VSG_VSH_VSQ") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #622
  {DBGFIELD("VSUM_VSUMB_VSUMH")   16383, false, false,  0, 0,  0, 0,  0, 0}, // #623
  {DBGFIELD("VSUMG_VSUMGF_VSUMGH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #624
  {DBGFIELD("VSUMQ_VSUMQF_VSUMQG") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #625
  {DBGFIELD("VEC_VECB_VECF_VECG_VECH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #626
  {DBGFIELD("VECL_VECLB_VECLF_VECLG_VECLH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #627
  {DBGFIELD("VCEQ_VCEQB_VCEQF_VCEQG_VCEQH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #628
  {DBGFIELD("VCEQBS_VCEQFS_VCEQGS_VCEQHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #629
  {DBGFIELD("VCH_VCHB_VCHF_VCHG_VCHH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #630
  {DBGFIELD("VCHBS_VCHFS_VCHGS_VCHHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #631
  {DBGFIELD("VCHL_VCHLB_VCHLF_VCHLG_VCHLH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #632
  {DBGFIELD("VCHLBS_VCHLFS_VCHLGS_VCHLHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #633
  {DBGFIELD("VTM")                16383, false, false,  0, 0,  0, 0,  0, 0}, // #634
  {DBGFIELD("VCFPL_VCFPS")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #635
  {DBGFIELD("VCDG_VCDLG")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #636
  {DBGFIELD("VCDGB_VCDLGB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #637
  {DBGFIELD("WCDGB_WCDLGB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #638
  {DBGFIELD("VCEFB_VCELFB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #639
  {DBGFIELD("WCEFB_WCELFB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #640
  {DBGFIELD("VCLFP_VCSFP")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #641
  {DBGFIELD("VCGD_VCLGD")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #642
  {DBGFIELD("VCGDB_VCLGDB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #643
  {DBGFIELD("WCGDB_WCLGDB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #644
  {DBGFIELD("VCFEB_VCLFEB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #645
  {DBGFIELD("WCFEB_WCLFEB")       16383, false, false,  0, 0,  0, 0,  0, 0}, // #646
  {DBGFIELD("VLDE_VLED")          16383, false, false,  0, 0,  0, 0,  0, 0}, // #647
  {DBGFIELD("VLDEB_VLEDB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #648
  {DBGFIELD("WLDEB_WLEDB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #649
  {DBGFIELD("VFLL_VFLR")          16383, false, false,  0, 0,  0, 0,  0, 0}, // #650
  {DBGFIELD("VFLLS_VFLRD")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #651
  {DBGFIELD("WFLLS_WFLRD")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #652
  {DBGFIELD("WFLLD")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #653
  {DBGFIELD("WFLRX")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #654
  {DBGFIELD("VFI_VFIDB")          16383, false, false,  0, 0,  0, 0,  0, 0}, // #655
  {DBGFIELD("WFIDB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #656
  {DBGFIELD("VFISB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #657
  {DBGFIELD("WFISB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #658
  {DBGFIELD("WFIXB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #659
  {DBGFIELD("VFPSO")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #660
  {DBGFIELD("VFPSODB_WFPSODB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #661
  {DBGFIELD("VFPSOSB_WFPSOSB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #662
  {DBGFIELD("WFPSOXB")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #663
  {DBGFIELD("VFLCDB_VFLNDB_VFLPDB_WFLCDB_WFLNDB_WFLPDB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #664
  {DBGFIELD("VFLCSB_VFLNSB_VFLPSB_WFLCSB_WFLNSB_WFLPSB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #665
  {DBGFIELD("WFLCXB_WFLNXB_WFLPXB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #666
  {DBGFIELD("VFMAX_VFMIN")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #667
  {DBGFIELD("VFMAXDB_VFMINDB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #668
  {DBGFIELD("WFMAXDB_WFMINDB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #669
  {DBGFIELD("VFMAXSB_VFMINSB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #670
  {DBGFIELD("WFMAXSB_WFMINSB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #671
  {DBGFIELD("WFMAXXB_WFMINXB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #672
  {DBGFIELD("VFTCI")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #673
  {DBGFIELD("VFTCIDB_WFTCIDB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #674
  {DBGFIELD("VFTCISB_WFTCISB")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #675
  {DBGFIELD("WFTCIXB")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #676
  {DBGFIELD("VFA_VFS")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #677
  {DBGFIELD("VFADB_VFSDB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #678
  {DBGFIELD("WFADB_WFSDB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #679
  {DBGFIELD("VFASB_VFSSB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #680
  {DBGFIELD("WFASB_WFSSB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #681
  {DBGFIELD("WFAXB_WFSXB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #682
  {DBGFIELD("VFM_VFMDB")          16383, false, false,  0, 0,  0, 0,  0, 0}, // #683
  {DBGFIELD("WFMDB_WFMSB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #684
  {DBGFIELD("VFMSB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #685
  {DBGFIELD("WFMXB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #686
  {DBGFIELD("VFMA_VFMS_VFNMA_VFNMS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #687
  {DBGFIELD("VFMADB_VFMSDB_VFNMADB_VFNMSDB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #688
  {DBGFIELD("WFMADB_WFMSDB_WFNMADB_WFNMSDB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #689
  {DBGFIELD("VFMASB_VFMSSB_VFNMASB_VFNMSSB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #690
  {DBGFIELD("WFMASB_WFMSSB_WFNMASB_WFNMSSB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #691
  {DBGFIELD("WFMAXB_WFMSXB_WFNMAXB_WFNMSXB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #692
  {DBGFIELD("VFD")                16383, false, false,  0, 0,  0, 0,  0, 0}, // #693
  {DBGFIELD("VFDDB_WFDDB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #694
  {DBGFIELD("VFDSB_WFDSB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #695
  {DBGFIELD("WFDXB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #696
  {DBGFIELD("VFSQ")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #697
  {DBGFIELD("VFSQDB_WFSQDB")      16383, false, false,  0, 0,  0, 0,  0, 0}, // #698
  {DBGFIELD("VFSQSB_WFSQSB")      16383, false, false,  0, 0,  0, 0,  0, 0}, // #699
  {DBGFIELD("WFSQXB")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #700
  {DBGFIELD("VFCE_VFCH_VFCHE")    16383, false, false,  0, 0,  0, 0,  0, 0}, // #701
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB_VFKEDB_VFKHDB_VFKHEDB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #702
  {DBGFIELD("WFCEDB_WFCHDB_WFCHEDB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #703
  {DBGFIELD("WFKEDB_WFKHDB_WFKHEDB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #704
  {DBGFIELD("VFCESB_VFCHESB_VFCHSB_VFKESB_VFKHESB_VFKHSB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #705
  {DBGFIELD("WFCESB_WFCHESB_WFCHSB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #706
  {DBGFIELD("WFKESB_WFKHESB_WFKHSB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #707
  {DBGFIELD("WFCEXB_WFCHEXB_WFCHXB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #708
  {DBGFIELD("WFKEXB_WFKHEXB_WFKHXB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #709
  {DBGFIELD("VFCEDBS_VFCHDBS_VFCHEDBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #710
  {DBGFIELD("VFKEDBS_VFKHDBS_VFKHEDBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #711
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS_WFKEDBS_WFKHDBS_WFKHEDBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #712
  {DBGFIELD("VFCESBS_VFCHESBS_VFCHSBS_VFKESBS_VFKHESBS_VFKHSBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #713
  {DBGFIELD("WFCESBS_WFCHESBS_WFCHSBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #714
  {DBGFIELD("WFKESBS_WFKHESBS_WFKHSBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #715
  {DBGFIELD("WFCEXBS_WFCHEXBS_WFCHXBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #716
  {DBGFIELD("WFKEXBS_WFKHEXBS_WFKHXBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #717
  {DBGFIELD("WFC_WFK")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #718
  {DBGFIELD("WFCDB_WFKDB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #719
  {DBGFIELD("WFCSB_WFKSB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #720
  {DBGFIELD("WFCXB_WFKXB")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #721
  {DBGFIELD("LEFR")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #722
  {DBGFIELD("LFER")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #723
  {DBGFIELD("VFAE_VFAEB")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #724
  {DBGFIELD("VFAEF_VFAEH")        16383, false, false,  0, 0,  0, 0,  0, 0}, // #725
  {DBGFIELD("VFAEBS_VFAEFS_VFAEHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #726
  {DBGFIELD("VFAEZB_VFAEZF_VFAEZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #727
  {DBGFIELD("VFAEZBS_VFAEZFS_VFAEZHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #728
  {DBGFIELD("VFEE_VFEEB_VFEEF_VFEEH_VFEEZB_VFEEZF_VFEEZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #729
  {DBGFIELD("VFEEBS_VFEEFS_VFEEHS_VFEEZBS_VFEEZFS_VFEEZHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #730
  {DBGFIELD("VFENE_VFENEB_VFENEF_VFENEH_VFENEZB_VFENEZF_VFENEZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #731
  {DBGFIELD("VFENEBS_VFENEFS_VFENEHS_VFENEZBS_VFENEZFS_VFENEZHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #732
  {DBGFIELD("VISTR_VISTRB_VISTRF_VISTRH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #733
  {DBGFIELD("VISTRBS_VISTRFS_VISTRHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #734
  {DBGFIELD("VSTRC_VSTRCB_VSTRCF_VSTRCH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #735
  {DBGFIELD("VSTRCBS_VSTRCFS_VSTRCHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #736
  {DBGFIELD("VSTRCZB_VSTRCZF_VSTRCZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #737
  {DBGFIELD("VSTRCZBS_VSTRCZFS_VSTRCZHS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #738
  {DBGFIELD("VSTRS_VSTRSB_VSTRSF_VSTRSH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #739
  {DBGFIELD("VSTRSZB_VSTRSZF_VSTRSZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #740
  {DBGFIELD("VLIP")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #741
  {DBGFIELD("VPKZ")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #742
  {DBGFIELD("VUPKZ")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #743
  {DBGFIELD("VCVB_VCVBG_VCVBGOpt_VCVBOpt") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #744
  {DBGFIELD("VCVD_VCVDG")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #745
  {DBGFIELD("VAP_VSP")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #746
  {DBGFIELD("VMP_VMSP")           16383, false, false,  0, 0,  0, 0,  0, 0}, // #747
  {DBGFIELD("VDP_VRP")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #748
  {DBGFIELD("VSDP")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #749
  {DBGFIELD("VSRP")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #750
  {DBGFIELD("VPSOP")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #751
  {DBGFIELD("VCP_VTP")            16383, false, false,  0, 0,  0, 0,  0, 0}, // #752
  {DBGFIELD("EPSW")               3, true, true, 14, 1,  9, 3,  0, 0}, // #753
  {DBGFIELD("LPSW_LPSWE")         3, true, true, 14, 1, 10, 2,  0, 0}, // #754
  {DBGFIELD("IPK")                3, true, true,  1, 1, 33, 3,  0, 0}, // #755
  {DBGFIELD("SPKA")               1, false, true,  3, 1,  1, 3,  0, 0}, // #756
  {DBGFIELD("SSM")                1, false, true,  3, 1,  1, 3,  0, 0}, // #757
  {DBGFIELD("STNSM_STOSM")        3, true, true,  4, 2,  1, 4,  0, 0}, // #758
  {DBGFIELD("IAC")                1, false, false,  1, 1, 33, 3,  0, 0}, // #759
  {DBGFIELD("SAC_SACF")           1, false, true,  3, 1,  1, 3,  0, 0}, // #760
  {DBGFIELD("LCTL_LCTLG")         3, true, true, 17, 1, 24, 4,  0, 0}, // #761
  {DBGFIELD("STCTG_STCTL")        3, true, true, 58, 2,  1, 4,  0, 0}, // #762
  {DBGFIELD("EPAIR_EPAR_ESAIR_ESAR") 1, false, false,  3, 1, 12, 3,  0, 0}, // #763
  {DBGFIELD("SSAIR_SSAR")         3, true, true, 14, 1, 10, 2,  0, 0}, // #764
  {DBGFIELD("ESEA")               3, true, true, 14, 1, 10, 2,  0, 0}, // #765
  {DBGFIELD("SPX_STPX")           3, true, true, 14, 1, 10, 2,  0, 0}, // #766
  {DBGFIELD("ISKE")               3, true, true, 14, 1, 10, 2,  0, 0}, // #767
  {DBGFIELD("IVSK")               3, true, true, 14, 1, 10, 2,  0, 0}, // #768
  {DBGFIELD("SSKE_SSKEOpt")       3, true, true, 14, 1, 10, 2,  0, 0}, // #769
  {DBGFIELD("RRBE_RRBM")          3, true, true, 14, 1, 10, 2,  0, 0}, // #770
  {DBGFIELD("IRBM")               16383, false, false,  0, 0,  0, 0,  0, 0}, // #771
  {DBGFIELD("PFMF")               3, true, true, 14, 1, 10, 2,  0, 0}, // #772
  {DBGFIELD("TB")                 3, true, true, 14, 1,  9, 3,  0, 0}, // #773
  {DBGFIELD("PGIN")               3, true, true, 14, 1, 10, 2,  0, 0}, // #774
  {DBGFIELD("PGOUT")              3, true, true, 14, 1, 10, 2,  0, 0}, // #775
  {DBGFIELD("IPTE_IPTEOpt_IPTEOptOpt") 3, true, true, 14, 1, 10, 2,  0, 0}, // #776
  {DBGFIELD("IDTE_IDTEOpt")       3, true, true, 14, 1, 10, 2,  0, 0}, // #777
  {DBGFIELD("CRDTE_CRDTEOpt")     16383, false, false,  0, 0,  0, 0,  0, 0}, // #778
  {DBGFIELD("PTLB")               3, true, true, 14, 1, 10, 2,  0, 0}, // #779
  {DBGFIELD("CSP_CSPG")           3, true, true, 14, 1,  9, 3,  0, 0}, // #780
  {DBGFIELD("LPTEA")              3, true, true, 14, 1,  8, 4,  0, 0}, // #781
  {DBGFIELD("LRA_LRAG_LRAY")      3, true, true, 14, 1,  9, 3,  0, 0}, // #782
  {DBGFIELD("STRAG")              3, true, true, 14, 1, 10, 2,  0, 0}, // #783
  {DBGFIELD("LURA_LURAG")         3, true, true, 14, 1, 10, 2,  0, 0}, // #784
  {DBGFIELD("STURA_STURG")        3, true, true, 14, 1, 10, 2,  0, 0}, // #785
  {DBGFIELD("TPROT")              3, true, true, 14, 1, 10, 2,  0, 0}, // #786
  {DBGFIELD("MVCK_MVCP_MVCS")     3, true, true, 14, 1, 10, 2,  0, 0}, // #787
  {DBGFIELD("MVCDK_MVCSK")        3, true, true, 14, 1, 10, 2,  0, 0}, // #788
  {DBGFIELD("MVCOS")              3, true, true, 14, 1, 10, 2,  0, 0}, // #789
  {DBGFIELD("MVPG")               3, true, true, 14, 1, 10, 2,  0, 0}, // #790
  {DBGFIELD("LASP")               3, true, true, 14, 1, 10, 2,  0, 0}, // #791
  {DBGFIELD("PALB")               3, true, true,  3, 1,  1, 3,  0, 0}, // #792
  {DBGFIELD("PC")                 3, true, true, 14, 1, 10, 2,  0, 0}, // #793
  {DBGFIELD("PR")                 3, true, true, 14, 1, 10, 2,  0, 0}, // #794
  {DBGFIELD("PT_PTI")             3, true, true, 14, 1, 10, 2,  0, 0}, // #795
  {DBGFIELD("RP")                 3, true, true, 14, 1, 10, 2,  0, 0}, // #796
  {DBGFIELD("BSA_BSG")            3, true, true, 14, 1, 10, 2,  0, 0}, // #797
  {DBGFIELD("TAR")                3, true, true, 14, 1, 10, 2,  0, 0}, // #798
  {DBGFIELD("BAKR")               3, true, true, 14, 1, 10, 2,  0, 0}, // #799
  {DBGFIELD("EREG_EREGG")         3, true, true, 14, 1, 10, 2,  0, 0}, // #800
  {DBGFIELD("ESTA_MSTA")          3, true, true, 14, 1,  9, 3,  0, 0}, // #801
  {DBGFIELD("PTFF")               3, true, true, 14, 1, 10, 2,  0, 0}, // #802
  {DBGFIELD("SCK_SCKC_SCKPF")     3, true, true, 14, 1, 10, 2,  0, 0}, // #803
  {DBGFIELD("SPT")                3, true, true, 14, 1, 10, 2,  0, 0}, // #804
  {DBGFIELD("STCK_STCKF")         3, true, true, 14, 1, 10, 2,  0, 0}, // #805
  {DBGFIELD("STCKE")              3, true, true, 14, 1, 10, 2,  0, 0}, // #806
  {DBGFIELD("STCKC")              3, true, true, 14, 1, 10, 2,  0, 0}, // #807
  {DBGFIELD("STPT")               3, true, true, 14, 1, 10, 2,  0, 0}, // #808
  {DBGFIELD("STAP")               3, true, true, 14, 1, 10, 2,  0, 0}, // #809
  {DBGFIELD("STIDP")              3, true, true, 14, 1, 10, 2,  0, 0}, // #810
  {DBGFIELD("STSI")               3, true, true, 14, 1,  9, 3,  0, 0}, // #811
  {DBGFIELD("STFL_STFLE")         3, true, true, 14, 1,  9, 3,  0, 0}, // #812
  {DBGFIELD("ECAG")               3, true, true, 14, 1, 10, 2,  0, 0}, // #813
  {DBGFIELD("ECTG")               3, true, true, 14, 1,  9, 3,  0, 0}, // #814
  {DBGFIELD("PTF")                3, true, true, 14, 1, 10, 2,  0, 0}, // #815
  {DBGFIELD("PCKMO")              3, true, true, 14, 1, 10, 2,  0, 0}, // #816
  {DBGFIELD("SVC")                3, true, true, 14, 1, 10, 2,  0, 0}, // #817
  {DBGFIELD("MC")                 3, true, true,  1, 1,  1, 3,  0, 0}, // #818
  {DBGFIELD("DIAG")               3, true, true, 14, 1, 10, 2,  0, 0}, // #819
  {DBGFIELD("TRACE_TRACG")        3, true, true, 14, 1, 10, 2,  0, 0}, // #820
  {DBGFIELD("TRAP2_TRAP4")        3, true, true, 14, 1, 10, 2,  0, 0}, // #821
  {DBGFIELD("SIGA_SIGP")          3, true, true, 14, 1, 10, 2,  0, 0}, // #822
  {DBGFIELD("SIE")                3, true, true, 14, 1, 10, 2,  0, 0}, // #823
  {DBGFIELD("LPP")                1, false, false,  1, 1,  1, 3,  0, 0}, // #824
  {DBGFIELD("ECPGA")              3, true, true, 14, 1,  9, 3,  0, 0}, // #825
  {DBGFIELD("ECCTR_EPCTR")        3, true, true, 14, 1,  9, 3,  0, 0}, // #826
  {DBGFIELD("LCCTL")              3, true, true, 14, 1, 10, 2,  0, 0}, // #827
  {DBGFIELD("LPCTL_LSCTL")        3, true, true, 14, 1, 10, 2,  0, 0}, // #828
  {DBGFIELD("QCTRI_QSI")          3, true, true, 14, 1, 10, 2,  0, 0}, // #829
  {DBGFIELD("SCCTR_SPCTR")        3, true, true, 14, 1, 10, 2,  0, 0}, // #830
  {DBGFIELD("CSCH_HSCH_RSCH_XSCH") 3, true, true, 14, 1, 10, 2,  0, 0}, // #831
  {DBGFIELD("MSCH_SSCH_STSCH_TSCH") 3, true, true, 14, 1, 10, 2,  0, 0}, // #832
  {DBGFIELD("RCHP")               3, true, true, 14, 1, 10, 2,  0, 0}, // #833
  {DBGFIELD("SCHM")               3, true, true, 14, 1, 10, 2,  0, 0}, // #834
  {DBGFIELD("STCPS_STCRW")        3, true, true, 14, 1, 10, 2,  0, 0}, // #835
  {DBGFIELD("TPI")                3, true, true, 14, 1, 10, 2,  0, 0}, // #836
  {DBGFIELD("SAL")                3, true, true, 14, 1, 10, 2,  0, 0}, // #837
  {DBGFIELD("KIMD_KLMD_KMAC")     3, true, true, 14, 1,  8, 4,  0, 0}, // #838
  {DBGFIELD("POPCNT")             1, false, false,  1, 1, 32, 4,  0, 0}, // #839
  {DBGFIELD("VFI")                16383, false, false,  0, 0,  0, 0,  0, 0}, // #840
  {DBGFIELD("VFM")                16383, false, false,  0, 0,  0, 0,  0, 0}, // #841
  {DBGFIELD("VCVB_VCVBG")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #842
  {DBGFIELD("AGF")                3, true, true, 10, 2, 36, 5,  1, 1}, // #843
  {DBGFIELD("SGF")                3, true, true, 10, 2, 36, 5,  1, 1}, // #844
  {DBGFIELD("KM_KMC_KMCTR_KMF_KMO") 3, true, true, 14, 1, 106, 5,  0, 0}, // #845
  {DBGFIELD("PCC_PPNO")           16383, false, false,  0, 0,  0, 0,  0, 0}, // #846
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #847
  {DBGFIELD("VN_VNC_VNO")         16383, false, false,  0, 0,  0, 0,  0, 0}, // #848
  {DBGFIELD("VO")                 16383, false, false,  0, 0,  0, 0,  0, 0}, // #849
  {DBGFIELD("VPOPCT")             16383, false, false,  0, 0,  0, 0,  0, 0}, // #850
  {DBGFIELD("WFMDB")              16383, false, false,  0, 0,  0, 0,  0, 0}, // #851
  {DBGFIELD("VFMA_VFMS")          16383, false, false,  0, 0,  0, 0,  0, 0}, // #852
  {DBGFIELD("VFMADB_VFMSDB")      16383, false, false,  0, 0,  0, 0,  0, 0}, // #853
  {DBGFIELD("WFMADB_WFMSDB")      16383, false, false,  0, 0,  0, 0,  0, 0}, // #854
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #855
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS") 16383, false, false,  0, 0,  0, 0,  0, 0}, // #856
  {DBGFIELD("LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, true,  1, 1, 29, 3,  0, 0}, // #857
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ") 1, false, true,  4, 2, 37, 4,  1, 1}, // #858
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ") 1, false, true,  4, 2,  1, 4,  0, 0}, // #859
  {DBGFIELD("ALSI_ASI")           1, false, false,  4, 2, 19, 5,  0, 0}, // #860
  {DBGFIELD("ALGF")               1, false, false,  4, 2, 19, 5,  1, 1}, // #861
  {DBGFIELD("PCC")                3, true, true, 14, 1,  8, 4,  0, 0}, // #862
  {DBGFIELD("CELFBR_CELGBR")      3, true, true, 66, 2, 118, 4,  0, 0}, // #863
  {DBGFIELD("MD_MEE")             1, false, false, 62, 2, 63, 4,  1, 1}, // #864
  {DBGFIELD("MDR_MEER")           1, false, false, 60, 1, 60, 3,  0, 0}, // #865
  {DBGFIELD("CFDTR")              3, true, true, 39, 2, 122, 5,  0, 0}, // #866
  {DBGFIELD("CFXTR")              3, true, true, 36, 2, 143, 5,  0, 0}, // #867
  {DBGFIELD("TDCDT_TDGDT")        1, false, false, 79, 2, 41, 4,  0, 0}, // #868
  {DBGFIELD("SCK")                3, true, true, 14, 1, 10, 2,  0, 0}, // #869
  {DBGFIELD("SCKPF")              3, true, true, 14, 1, 10, 2,  0, 0}, // #870
  {DBGFIELD("RISBG_RISBG32")      1, false, false,  1, 1,  1, 3,  0, 0}, // #871
}; // Z196ModelSchedClasses

#undef DBGFIELD

static const llvm::MCSchedModel NoSchedModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  0, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

static const unsigned ZEC12ModelProcResourceSubUnits[] = {
  0,  // Invalid
};

// {Name, NumUnits, SuperIdx, BufferSize, SubUnitsIdxBegin}
static const llvm::MCProcResourceDesc ZEC12ModelProcResources[] = {
  {"InvalidUnit", 0, 0, 0, 0},
  {"ZEC12_DFUnit",    1, 0, -1, nullptr}, // #1
  {"ZEC12_FPUnit",    1, 0, -1, nullptr}, // #2
  {"ZEC12_FXUnit",    2, 0, -1, nullptr}, // #3
  {"ZEC12_LSUnit",    2, 0, -1, nullptr}, // #4
  {"ZEC12_MCD",       1, 0, -1, nullptr}, // #5
  {"ZEC12_VBUnit",    1, 0, -1, nullptr}, // #6
};

static const llvm::MCSchedModel ZEC12Model = {
  3, // IssueWidth
  40, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  true, // PostRAScheduler
  true, // CompleteModel
  1, // Processor ID
  ZEC12ModelProcResources,
  ZEC12ModelSchedClasses,
  7,
  872,
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

static const unsigned Z13ModelProcResourceSubUnits[] = {
  0,  // Invalid
};

// {Name, NumUnits, SuperIdx, BufferSize, SubUnitsIdxBegin}
static const llvm::MCProcResourceDesc Z13ModelProcResources[] = {
  {"InvalidUnit", 0, 0, 0, 0},
  {"Z13_FXaUnit",     2, 0, -1, nullptr}, // #1
  {"Z13_FXbUnit",     2, 0, -1, nullptr}, // #2
  {"Z13_LSUnit",      2, 0, -1, nullptr}, // #3
  {"Z13_MCD",         1, 0, -1, nullptr}, // #4
  {"Z13_VBUnit",      2, 0, -1, nullptr}, // #5
  {"Z13_VecFPdUnit",  2, 0, 1, nullptr}, // #6
  {"Z13_VecUnit",     2, 0, -1, nullptr}, // #7
};

static const llvm::MCSchedModel Z13Model = {
  6, // IssueWidth
  60, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  20, // MispredictPenalty
  true, // PostRAScheduler
  true, // CompleteModel
  2, // Processor ID
  Z13ModelProcResources,
  Z13ModelSchedClasses,
  8,
  872,
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

static const unsigned Z14ModelProcResourceSubUnits[] = {
  0,  // Invalid
};

// {Name, NumUnits, SuperIdx, BufferSize, SubUnitsIdxBegin}
static const llvm::MCProcResourceDesc Z14ModelProcResources[] = {
  {"InvalidUnit", 0, 0, 0, 0},
  {"Z14_FXaUnit",     2, 0, -1, nullptr}, // #1
  {"Z14_FXbUnit",     2, 0, -1, nullptr}, // #2
  {"Z14_LSUnit",      2, 0, -1, nullptr}, // #3
  {"Z14_MCD",         1, 0, -1, nullptr}, // #4
  {"Z14_VBUnit",      2, 0, -1, nullptr}, // #5
  {"Z14_VecFPdUnit",  2, 0, 1, nullptr}, // #6
  {"Z14_VecUnit",     2, 0, -1, nullptr}, // #7
};

static const llvm::MCSchedModel Z14Model = {
  6, // IssueWidth
  60, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  20, // MispredictPenalty
  true, // PostRAScheduler
  true, // CompleteModel
  3, // Processor ID
  Z14ModelProcResources,
  Z14ModelSchedClasses,
  8,
  872,
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

static const unsigned Z15ModelProcResourceSubUnits[] = {
  0,  // Invalid
};

// {Name, NumUnits, SuperIdx, BufferSize, SubUnitsIdxBegin}
static const llvm::MCProcResourceDesc Z15ModelProcResources[] = {
  {"InvalidUnit", 0, 0, 0, 0},
  {"Z15_FXaUnit",     2, 0, -1, nullptr}, // #1
  {"Z15_FXbUnit",     2, 0, -1, nullptr}, // #2
  {"Z15_LSUnit",      2, 0, -1, nullptr}, // #3
  {"Z15_MCD",         1, 0, -1, nullptr}, // #4
  {"Z15_VBUnit",      2, 0, -1, nullptr}, // #5
  {"Z15_VecFPdUnit",  2, 0, 1, nullptr}, // #6
  {"Z15_VecUnit",     2, 0, -1, nullptr}, // #7
};

static const llvm::MCSchedModel Z15Model = {
  6, // IssueWidth
  60, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  20, // MispredictPenalty
  true, // PostRAScheduler
  true, // CompleteModel
  4, // Processor ID
  Z15ModelProcResources,
  Z15ModelSchedClasses,
  8,
  872,
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

static const unsigned Z196ModelProcResourceSubUnits[] = {
  0,  // Invalid
};

// {Name, NumUnits, SuperIdx, BufferSize, SubUnitsIdxBegin}
static const llvm::MCProcResourceDesc Z196ModelProcResources[] = {
  {"InvalidUnit", 0, 0, 0, 0},
  {"Z196_DFUnit",     1, 0, -1, nullptr}, // #1
  {"Z196_FPUnit",     1, 0, -1, nullptr}, // #2
  {"Z196_FXUnit",     2, 0, -1, nullptr}, // #3
  {"Z196_LSUnit",     2, 0, -1, nullptr}, // #4
  {"Z196_MCD",        1, 0, -1, nullptr}, // #5
};

static const llvm::MCSchedModel Z196Model = {
  3, // IssueWidth
  40, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  true, // PostRAScheduler
  true, // CompleteModel
  5, // Processor ID
  Z196ModelProcResources,
  Z196ModelSchedClasses,
  6,
  872,
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetSubTypeKV SystemZSubTypeKV[] = {
 { "arch10", { { { 0x3c86b5daULL, 0x0ULL, 0x0ULL, } } }, &ZEC12Model },
 { "arch11", { { { 0x7c8ff5dbULL, 0x0ULL, 0x0ULL, } } }, &Z13Model },
 { "arch12", { { { 0x2fdbfffdbULL, 0x0ULL, 0x0ULL, } } }, &Z14Model },
 { "arch13", { { { 0x7ffffffffULL, 0x0ULL, 0x0ULL, } } }, &Z15Model },
 { "arch8", { { { 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "arch9", { { { 0x14069588ULL, 0x0ULL, 0x0ULL, } } }, &Z196Model },
 { "generic", { { { 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "z10", { { { 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "z13", { { { 0x7c8ff5dbULL, 0x0ULL, 0x0ULL, } } }, &Z13Model },
 { "z14", { { { 0x2fdbfffdbULL, 0x0ULL, 0x0ULL, } } }, &Z14Model },
 { "z15", { { { 0x7ffffffffULL, 0x0ULL, 0x0ULL, } } }, &Z15Model },
 { "z196", { { { 0x14069588ULL, 0x0ULL, 0x0ULL, } } }, &Z196Model },
 { "zEC12", { { { 0x3c86b5daULL, 0x0ULL, 0x0ULL, } } }, &ZEC12Model },
};

namespace SystemZ_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass,
    const MCInst *MI, unsigned CPUID) {
  // Don't know how to resolve this scheduling class.
  return 0;
}
} // end namespace SystemZ_MC

struct SystemZGenMCSubtargetInfo : public MCSubtargetInfo {
  SystemZGenMCSubtargetInfo(const Triple &TT, 
    StringRef CPU, StringRef FS, ArrayRef<SubtargetFeatureKV> PF,
    ArrayRef<SubtargetSubTypeKV> PD,
    const MCWriteProcResEntry *WPR,
    const MCWriteLatencyEntry *WL,
    const MCReadAdvanceEntry *RA, const InstrStage *IS,
    const unsigned *OC, const unsigned *FP) :
      MCSubtargetInfo(TT, CPU, FS, PF, PD,
                      WPR, WL, RA, IS, OC, FP) { }

  unsigned resolveVariantSchedClass(unsigned SchedClass,
      const MCInst *MI, unsigned CPUID) const override {
    return SystemZ_MC::resolveVariantSchedClassImpl(SchedClass, MI, CPUID); 
  }
};

static inline MCSubtargetInfo *createSystemZMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new SystemZGenMCSubtargetInfo(TT, CPU, FS, SystemZFeatureKV, SystemZSubTypeKV, 
                      SystemZWriteProcResTable, SystemZWriteLatencyTable, SystemZReadAdvanceTable, 
                      nullptr, nullptr, nullptr);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::SystemZSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  LLVM_DEBUG(dbgs() << "\nFeatures:" << FS);
  LLVM_DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[SystemZ::FeatureDFPPackedConversion]) HasDFPPackedConversion = true;
  if (Bits[SystemZ::FeatureDFPZonedConversion]) HasDFPZonedConversion = true;
  if (Bits[SystemZ::FeatureDeflateConversion]) HasDeflateConversion = true;
  if (Bits[SystemZ::FeatureDistinctOps]) HasDistinctOps = true;
  if (Bits[SystemZ::FeatureEnhancedDAT2]) HasEnhancedDAT2 = true;
  if (Bits[SystemZ::FeatureEnhancedSort]) HasEnhancedSort = true;
  if (Bits[SystemZ::FeatureExecutionHint]) HasExecutionHint = true;
  if (Bits[SystemZ::FeatureFPExtension]) HasFPExtension = true;
  if (Bits[SystemZ::FeatureFastSerialization]) HasFastSerialization = true;
  if (Bits[SystemZ::FeatureGuardedStorage]) HasGuardedStorage = true;
  if (Bits[SystemZ::FeatureHighWord]) HasHighWord = true;
  if (Bits[SystemZ::FeatureInsertReferenceBitsMultiple]) HasInsertReferenceBitsMultiple = true;
  if (Bits[SystemZ::FeatureInterlockedAccess1]) HasInterlockedAccess1 = true;
  if (Bits[SystemZ::FeatureLoadAndTrap]) HasLoadAndTrap = true;
  if (Bits[SystemZ::FeatureLoadAndZeroRightmostByte]) HasLoadAndZeroRightmostByte = true;
  if (Bits[SystemZ::FeatureLoadStoreOnCond]) HasLoadStoreOnCond = true;
  if (Bits[SystemZ::FeatureLoadStoreOnCond2]) HasLoadStoreOnCond2 = true;
  if (Bits[SystemZ::FeatureMessageSecurityAssist3]) HasMessageSecurityAssist3 = true;
  if (Bits[SystemZ::FeatureMessageSecurityAssist4]) HasMessageSecurityAssist4 = true;
  if (Bits[SystemZ::FeatureMessageSecurityAssist5]) HasMessageSecurityAssist5 = true;
  if (Bits[SystemZ::FeatureMessageSecurityAssist7]) HasMessageSecurityAssist7 = true;
  if (Bits[SystemZ::FeatureMessageSecurityAssist8]) HasMessageSecurityAssist8 = true;
  if (Bits[SystemZ::FeatureMessageSecurityAssist9]) HasMessageSecurityAssist9 = true;
  if (Bits[SystemZ::FeatureMiscellaneousExtensions]) HasMiscellaneousExtensions = true;
  if (Bits[SystemZ::FeatureMiscellaneousExtensions2]) HasMiscellaneousExtensions2 = true;
  if (Bits[SystemZ::FeatureMiscellaneousExtensions3]) HasMiscellaneousExtensions3 = true;
  if (Bits[SystemZ::FeaturePopulationCount]) HasPopulationCount = true;
  if (Bits[SystemZ::FeatureProcessorAssist]) HasProcessorAssist = true;
  if (Bits[SystemZ::FeatureResetReferenceBitsMultiple]) HasResetReferenceBitsMultiple = true;
  if (Bits[SystemZ::FeatureTransactionalExecution]) HasTransactionalExecution = true;
  if (Bits[SystemZ::FeatureVector]) HasVector = true;
  if (Bits[SystemZ::FeatureVectorEnhancements1]) HasVectorEnhancements1 = true;
  if (Bits[SystemZ::FeatureVectorEnhancements2]) HasVectorEnhancements2 = true;
  if (Bits[SystemZ::FeatureVectorPackedDecimal]) HasVectorPackedDecimal = true;
  if (Bits[SystemZ::FeatureVectorPackedDecimalEnhancement]) HasVectorPackedDecimalEnhancement = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
namespace SystemZ_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass, const MCInst *MI, unsigned CPUID);
} // end namespace SystemZ_MC

struct SystemZGenSubtargetInfo : public TargetSubtargetInfo {
  explicit SystemZGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass,  const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  unsigned resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, unsigned CPUID) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // end namespace llvm

#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR

#include "llvm/CodeGen/TargetSchedule.h"

namespace llvm {
extern const llvm::SubtargetFeatureKV SystemZFeatureKV[];
extern const llvm::SubtargetSubTypeKV SystemZSubTypeKV[];
extern const llvm::MCWriteProcResEntry SystemZWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry SystemZWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry SystemZReadAdvanceTable[];
SystemZGenSubtargetInfo::SystemZGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(SystemZFeatureKV, 35), makeArrayRef(SystemZSubTypeKV, 13), 
                        SystemZWriteProcResTable, SystemZWriteLatencyTable, SystemZReadAdvanceTable, 
                        nullptr, nullptr, nullptr) {}

unsigned SystemZGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // SystemZGenSubtargetInfo::resolveSchedClass

unsigned SystemZGenSubtargetInfo
::resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, unsigned CPUID) const {
  return SystemZ_MC::resolveVariantSchedClassImpl(SchedClass, MI, CPUID);
} // SystemZGenSubtargetInfo::resolveVariantSchedClass

} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR


#ifdef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS


#ifdef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS


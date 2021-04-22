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
namespace Sparc {
enum {
  DetectRoundChange = 0,
  FeatureHardQuad = 1,
  FeatureLeon = 2,
  FeatureNoFMULS = 3,
  FeatureNoFSMULD = 4,
  FeaturePWRPSR = 5,
  FeatureSoftFloat = 6,
  FeatureSoftMulDiv = 7,
  FeatureV8Deprecated = 8,
  FeatureV9 = 9,
  FeatureVIS = 10,
  FeatureVIS2 = 11,
  FeatureVIS3 = 12,
  FixAllFDIVSQRT = 13,
  InsertNOPLoad = 14,
  LeonCASA = 15,
  LeonCycleCounter = 16,
  UMACSMACSupport = 17,
  UsePopc = 18,
  NumSubtargetFeatures = 19
};
} // end namespace Sparc
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV SparcFeatureKV[] = {
  { "deprecated-v8", "Enable deprecated V8 instructions in V9 mode", Sparc::FeatureV8Deprecated, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "detectroundchange", "LEON3 erratum detection: Detects any rounding mode change request: use only the round-to-nearest rounding mode", Sparc::DetectRoundChange, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "fixallfdivsqrt", "LEON erratum fix: Fix FDIVS/FDIVD/FSQRTS/FSQRTD instructions with NOPs and floating-point store", Sparc::FixAllFDIVSQRT, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hard-quad-float", "Enable quad-word floating point instructions", Sparc::FeatureHardQuad, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hasleoncasa", "Enable CASA instruction for LEON3 and LEON4 processors", Sparc::LeonCASA, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hasumacsmac", "Enable UMAC and SMAC for LEON3 and LEON4 processors", Sparc::UMACSMACSupport, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "insertnopload", "LEON3 erratum fix: Insert a NOP instruction after every single-cycle load instruction when the next instruction is another load/store instruction", Sparc::InsertNOPLoad, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "leon", "Enable LEON extensions", Sparc::FeatureLeon, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "leoncyclecounter", "Use the Leon cycle counter register", Sparc::LeonCycleCounter, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "leonpwrpsr", "Enable the PWRPSR instruction", Sparc::FeaturePWRPSR, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "no-fmuls", "Disable the fmuls instruction.", Sparc::FeatureNoFMULS, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "no-fsmuld", "Disable the fsmuld instruction.", Sparc::FeatureNoFSMULD, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "popc", "Use the popc (population count) instruction", Sparc::UsePopc, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "soft-float", "Use software emulation for floating point", Sparc::FeatureSoftFloat, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "soft-mul-div", "Use software emulation for integer multiply and divide", Sparc::FeatureSoftMulDiv, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v9", "Enable SPARC-V9 instructions", Sparc::FeatureV9, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "vis", "Enable UltraSPARC Visual Instruction Set extensions", Sparc::FeatureVIS, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "vis2", "Enable Visual Instruction Set extensions II", Sparc::FeatureVIS2, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "vis3", "Enable Visual Instruction Set extensions III", Sparc::FeatureVIS3, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#if !defined(NDEBUG) || defined(LLVM_ENABLE_DUMP)
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "LEON2Itineraries"
namespace LEON2ItinerariesFU {
  const unsigned LEONIU = 1 << 0;
  const unsigned LEONFPU = 1 << 1;
} // end namespace LEON2ItinerariesFU

// Functional units for "LEON3Itineraries"
namespace LEON3ItinerariesFU {
  const unsigned LEONIU = 1 << 0;
  const unsigned LEONFPU = 1 << 1;
} // end namespace LEON3ItinerariesFU

// Functional units for "LEON4Itineraries"
namespace LEON4ItinerariesFU {
  const unsigned LEONIU = 1 << 0;
  const unsigned LEONFPU = 1 << 1;
} // end namespace LEON4ItinerariesFU

extern const llvm::InstrStage SparcStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, LEON2ItinerariesFU::LEONIU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 1, LEON2ItinerariesFU::LEONFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 1, LEON2ItinerariesFU::LEONIU | LEON2ItinerariesFU::LEONFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, LEON3ItinerariesFU::LEONIU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 1, LEON3ItinerariesFU::LEONFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 1, LEON3ItinerariesFU::LEONIU | LEON3ItinerariesFU::LEONFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 1, LEON4ItinerariesFU::LEONIU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 1, LEON4ItinerariesFU::LEONFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8
  { 1, LEON4ItinerariesFU::LEONIU | LEON4ItinerariesFU::LEONFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 9
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned SparcOperandCycles[] = {
  0, // No itinerary
  1,   1, // 1-2
  7,   1, // 3-4
  2,   1, // 5-6
  2,   1, // 7-8
  7,   1, // 9-10
  36,   1, // 11-12
  20,   1, // 13-14
  21,   1, // 15-16
  16,   1, // 17-18
  2,   1, // 19-20
  65,   1, // 21-22
  37,   1, // 23-24
  2,   1, // 25-26
  2,   1, // 27-28
  1,   1, // 29-30
  35,   1, // 31-32
  5,   1, // 33-34
  2,   1, // 35-36
  3,   1, // 37-38
  5,   1, // 39-40
  1,   1, // 41-42
  7,   1, // 43-44
  3,   1, // 45-46
  2,   1, // 47-48
  4,   1, // 49-50
  17,   1, // 51-52
  16,   1, // 53-54
  4,   1, // 55-56
  4,   1, // 57-58
  2,   1, // 59-60
  25,   1, // 61-62
  24,   1, // 63-64
  4,   1, // 65-66
  2,   1, // 67-68
  1,   1, // 69-70
  35,   1, // 71-72
  2,   1, // 73-74
  1,   1, // 75-76
  4,   1, // 77-78
  5,   1, // 79-80
  4,   1, // 81-82
  1,   1, // 83-84
  7,   1, // 85-86
  3,   1, // 87-88
  2,   1, // 89-90
  4,   1, // 91-92
  17,   1, // 93-94
  16,   1, // 95-96
  4,   1, // 97-98
  4,   1, // 99-100
  2,   1, // 101-102
  25,   1, // 103-104
  24,   1, // 105-106
  4,   1, // 107-108
  1,   1, // 109-110
  1,   1, // 111-112
  35,   1, // 113-114
  2,   1, // 115-116
  1,   1, // 117-118
  1,   1, // 119-120
  1,   1, // 121-122
  4,   1, // 123-124
  0 // End operand cycles
};
extern const unsigned SparcForwardingPaths[] = {
 0, // No itinerary
 0,  0, // 1-2
 0,  0, // 3-4
 0,  0, // 5-6
 0,  0, // 7-8
 0,  0, // 9-10
 0,  0, // 11-12
 0,  0, // 13-14
 0,  0, // 15-16
 0,  0, // 17-18
 0,  0, // 19-20
 0,  0, // 21-22
 0,  0, // 23-24
 0,  0, // 25-26
 0,  0, // 27-28
 0,  0, // 29-30
 0,  0, // 31-32
 0,  0, // 33-34
 0,  0, // 35-36
 0,  0, // 37-38
 0,  0, // 39-40
 0,  0, // 41-42
 0,  0, // 43-44
 0,  0, // 45-46
 0,  0, // 47-48
 0,  0, // 49-50
 0,  0, // 51-52
 0,  0, // 53-54
 0,  0, // 55-56
 0,  0, // 57-58
 0,  0, // 59-60
 0,  0, // 61-62
 0,  0, // 63-64
 0,  0, // 65-66
 0,  0, // 67-68
 0,  0, // 69-70
 0,  0, // 71-72
 0,  0, // 73-74
 0,  0, // 75-76
 0,  0, // 77-78
 0,  0, // 79-80
 0,  0, // 81-82
 0,  0, // 83-84
 0,  0, // 85-86
 0,  0, // 87-88
 0,  0, // 89-90
 0,  0, // 91-92
 0,  0, // 93-94
 0,  0, // 95-96
 0,  0, // 97-98
 0,  0, // 99-100
 0,  0, // 101-102
 0,  0, // 103-104
 0,  0, // 105-106
 0,  0, // 107-108
 0,  0, // 109-110
 0,  0, // 111-112
 0,  0, // 113-114
 0,  0, // 115-116
 0,  0, // 117-118
 0,  0, // 119-120
 0,  0, // 121-122
 0,  0, // 123-124
 0 // End bypass tables
};

static const llvm::InstrItinerary LEON2Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 1, 3 }, // 1 IIC_iu_instr
  { 1, 2, 3, 3, 5 }, // 2 IIC_fpu_normal_instr
  { 1, 3, 4, 5, 7 }, // 3 IIC_jmp_or_call
  { 1, 2, 3, 7, 9 }, // 4 IIC_fpu_abs
  { 1, 2, 3, 9, 11 }, // 5 IIC_fpu_fast_instr
  { 1, 2, 3, 11, 13 }, // 6 IIC_fpu_divd
  { 1, 2, 3, 13, 15 }, // 7 IIC_fpu_divs
  { 1, 2, 3, 15, 17 }, // 8 IIC_fpu_muld
  { 1, 2, 3, 17, 19 }, // 9 IIC_fpu_muls
  { 1, 2, 3, 19, 21 }, // 10 IIC_fpu_negs
  { 1, 2, 3, 21, 23 }, // 11 IIC_fpu_sqrtd
  { 1, 2, 3, 23, 25 }, // 12 IIC_fpu_sqrts
  { 1, 2, 3, 25, 27 }, // 13 IIC_fpu_stod
  { 1, 3, 4, 27, 29 }, // 14 IIC_ldd
  { 1, 3, 4, 29, 31 }, // 15 IIC_iu_or_fpu_instr
  { 1, 1, 2, 31, 33 }, // 16 IIC_iu_div
  { 0, 0, 0, 0, 0 }, // 17 IIC_smac_umac
  { 1, 1, 2, 33, 35 }, // 18 IIC_iu_smul
  { 1, 3, 4, 35, 37 }, // 19 IIC_st
  { 1, 3, 4, 37, 39 }, // 20 IIC_std
  { 1, 1, 2, 39, 41 }, // 21 IIC_iu_umul
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary LEON3Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 4, 5, 41, 43 }, // 1 IIC_iu_instr
  { 1, 5, 6, 43, 45 }, // 2 IIC_fpu_normal_instr
  { 1, 6, 7, 45, 47 }, // 3 IIC_jmp_or_call
  { 1, 5, 6, 47, 49 }, // 4 IIC_fpu_abs
  { 1, 5, 6, 49, 51 }, // 5 IIC_fpu_fast_instr
  { 1, 5, 6, 51, 53 }, // 6 IIC_fpu_divd
  { 1, 5, 6, 53, 55 }, // 7 IIC_fpu_divs
  { 1, 5, 6, 55, 57 }, // 8 IIC_fpu_muld
  { 1, 5, 6, 57, 59 }, // 9 IIC_fpu_muls
  { 1, 5, 6, 59, 61 }, // 10 IIC_fpu_negs
  { 1, 5, 6, 61, 63 }, // 11 IIC_fpu_sqrtd
  { 1, 5, 6, 63, 65 }, // 12 IIC_fpu_sqrts
  { 1, 5, 6, 65, 67 }, // 13 IIC_fpu_stod
  { 1, 6, 7, 67, 69 }, // 14 IIC_ldd
  { 1, 6, 7, 69, 71 }, // 15 IIC_iu_or_fpu_instr
  { 1, 4, 5, 71, 73 }, // 16 IIC_iu_div
  { 1, 4, 5, 73, 75 }, // 17 IIC_smac_umac
  { 1, 4, 5, 75, 77 }, // 18 IIC_iu_smul
  { 1, 6, 7, 77, 79 }, // 19 IIC_st
  { 1, 6, 7, 79, 81 }, // 20 IIC_std
  { 1, 4, 5, 81, 83 }, // 21 IIC_iu_umul
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary LEON4Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 7, 8, 83, 85 }, // 1 IIC_iu_instr
  { 1, 8, 9, 85, 87 }, // 2 IIC_fpu_normal_instr
  { 1, 9, 10, 87, 89 }, // 3 IIC_jmp_or_call
  { 1, 8, 9, 89, 91 }, // 4 IIC_fpu_abs
  { 1, 8, 9, 91, 93 }, // 5 IIC_fpu_fast_instr
  { 1, 8, 9, 93, 95 }, // 6 IIC_fpu_divd
  { 1, 8, 9, 95, 97 }, // 7 IIC_fpu_divs
  { 1, 8, 9, 97, 99 }, // 8 IIC_fpu_muld
  { 1, 8, 9, 99, 101 }, // 9 IIC_fpu_muls
  { 1, 8, 9, 101, 103 }, // 10 IIC_fpu_negs
  { 1, 8, 9, 103, 105 }, // 11 IIC_fpu_sqrtd
  { 1, 8, 9, 105, 107 }, // 12 IIC_fpu_sqrts
  { 1, 8, 9, 107, 109 }, // 13 IIC_fpu_stod
  { 1, 9, 10, 109, 111 }, // 14 IIC_ldd
  { 1, 9, 10, 111, 113 }, // 15 IIC_iu_or_fpu_instr
  { 1, 7, 8, 113, 115 }, // 16 IIC_iu_div
  { 1, 7, 8, 115, 117 }, // 17 IIC_smac_umac
  { 1, 7, 8, 117, 119 }, // 18 IIC_iu_smul
  { 1, 9, 10, 119, 121 }, // 19 IIC_st
  { 1, 9, 10, 121, 123 }, // 20 IIC_std
  { 1, 7, 8, 123, 125 }, // 21 IIC_iu_umul
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry SparcWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // SparcWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry SparcWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // SparcWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry SparcReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // SparcReadAdvanceTable

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

static const llvm::MCSchedModel LEON2ItinerariesModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  1, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  LEON2Itineraries,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel LEON3ItinerariesModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  2, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  LEON3Itineraries,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel LEON4ItinerariesModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  3, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  LEON4Itineraries,
  nullptr // No extra processor descriptor
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetSubTypeKV SparcSubTypeKV[] = {
 { "at697e", { { { 0x4004ULL, 0x0ULL, 0x0ULL, } } }, &LEON2ItinerariesModel },
 { "at697f", { { { 0x4004ULL, 0x0ULL, 0x0ULL, } } }, &LEON2ItinerariesModel },
 { "f934", { { { 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "generic", { { { 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "gr712rc", { { { 0x8004ULL, 0x0ULL, 0x0ULL, } } }, &LEON3ItinerariesModel },
 { "gr740", { { { 0x38024ULL, 0x0ULL, 0x0ULL, } } }, &LEON4ItinerariesModel },
 { "hypersparc", { { { 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "leon2", { { { 0x4ULL, 0x0ULL, 0x0ULL, } } }, &LEON2ItinerariesModel },
 { "leon3", { { { 0x20004ULL, 0x0ULL, 0x0ULL, } } }, &LEON3ItinerariesModel },
 { "leon4", { { { 0x28004ULL, 0x0ULL, 0x0ULL, } } }, &LEON4ItinerariesModel },
 { "ma2080", { { { 0x8004ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "ma2085", { { { 0x8004ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "ma2100", { { { 0x8004ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "ma2150", { { { 0x8004ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "ma2155", { { { 0x8004ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "ma2450", { { { 0x8004ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "ma2455", { { { 0x8004ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "ma2480", { { { 0x8004ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "ma2485", { { { 0x8004ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "ma2x5x", { { { 0x8004ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "ma2x8x", { { { 0x8004ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "myriad2", { { { 0x8004ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "myriad2.1", { { { 0x8004ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "myriad2.2", { { { 0x8004ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "myriad2.3", { { { 0x8004ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "niagara", { { { 0xf00ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "niagara2", { { { 0x40f00ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "niagara3", { { { 0x40f00ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "niagara4", { { { 0x41f00ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "sparclet", { { { 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "sparclite", { { { 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "sparclite86x", { { { 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "supersparc", { { { 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "tsc701", { { { 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "ultrasparc", { { { 0x700ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "ultrasparc3", { { { 0xf00ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "ut699", { { { 0x601cULL, 0x0ULL, 0x0ULL, } } }, &LEON3ItinerariesModel },
 { "v7", { { { 0x90ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "v8", { { { 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "v9", { { { 0x200ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
};

namespace Sparc_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass,
    const MCInst *MI, unsigned CPUID) {
  // Don't know how to resolve this scheduling class.
  return 0;
}
} // end namespace Sparc_MC

struct SparcGenMCSubtargetInfo : public MCSubtargetInfo {
  SparcGenMCSubtargetInfo(const Triple &TT, 
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
    return Sparc_MC::resolveVariantSchedClassImpl(SchedClass, MI, CPUID); 
  }
};

static inline MCSubtargetInfo *createSparcMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new SparcGenMCSubtargetInfo(TT, CPU, FS, SparcFeatureKV, SparcSubTypeKV, 
                      SparcWriteProcResTable, SparcWriteLatencyTable, SparcReadAdvanceTable, 
                      SparcStages, SparcOperandCycles, SparcForwardingPaths);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::SparcSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  LLVM_DEBUG(dbgs() << "\nFeatures:" << FS);
  LLVM_DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[Sparc::DetectRoundChange]) DetectRoundChange = true;
  if (Bits[Sparc::FeatureHardQuad]) HasHardQuad = true;
  if (Bits[Sparc::FeatureLeon]) IsLeon = true;
  if (Bits[Sparc::FeatureNoFMULS]) HasNoFMULS = true;
  if (Bits[Sparc::FeatureNoFSMULD]) HasNoFSMULD = true;
  if (Bits[Sparc::FeaturePWRPSR]) HasPWRPSR = true;
  if (Bits[Sparc::FeatureSoftFloat]) UseSoftFloat = true;
  if (Bits[Sparc::FeatureSoftMulDiv]) UseSoftMulDiv = true;
  if (Bits[Sparc::FeatureV8Deprecated]) V8DeprecatedInsts = true;
  if (Bits[Sparc::FeatureV9]) IsV9 = true;
  if (Bits[Sparc::FeatureVIS]) IsVIS = true;
  if (Bits[Sparc::FeatureVIS2]) IsVIS2 = true;
  if (Bits[Sparc::FeatureVIS3]) IsVIS3 = true;
  if (Bits[Sparc::FixAllFDIVSQRT]) FixAllFDIVSQRT = true;
  if (Bits[Sparc::InsertNOPLoad]) InsertNOPLoad = true;
  if (Bits[Sparc::LeonCASA]) HasLeonCasa = true;
  if (Bits[Sparc::LeonCycleCounter]) HasLeonCycleCounter = true;
  if (Bits[Sparc::UMACSMACSupport]) HasUmacSmac = true;
  if (Bits[Sparc::UsePopc]) UsePopc = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
namespace Sparc_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass, const MCInst *MI, unsigned CPUID);
} // end namespace Sparc_MC

struct SparcGenSubtargetInfo : public TargetSubtargetInfo {
  explicit SparcGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV SparcFeatureKV[];
extern const llvm::SubtargetSubTypeKV SparcSubTypeKV[];
extern const llvm::MCWriteProcResEntry SparcWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry SparcWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry SparcReadAdvanceTable[];
extern const llvm::InstrStage SparcStages[];
extern const unsigned SparcOperandCycles[];
extern const unsigned SparcForwardingPaths[];
SparcGenSubtargetInfo::SparcGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(SparcFeatureKV, 19), makeArrayRef(SparcSubTypeKV, 40), 
                        SparcWriteProcResTable, SparcWriteLatencyTable, SparcReadAdvanceTable, 
                        SparcStages, SparcOperandCycles, SparcForwardingPaths) {}

unsigned SparcGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // SparcGenSubtargetInfo::resolveSchedClass

unsigned SparcGenSubtargetInfo
::resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, unsigned CPUID) const {
  return Sparc_MC::resolveVariantSchedClassImpl(SchedClass, MI, CPUID);
} // SparcGenSubtargetInfo::resolveVariantSchedClass

} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR


#ifdef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS


#ifdef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS


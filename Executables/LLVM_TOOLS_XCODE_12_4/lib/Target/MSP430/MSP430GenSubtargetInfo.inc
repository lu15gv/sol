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
namespace MSP430 {
enum {
  FeatureHWMult16 = 0,
  FeatureHWMult32 = 1,
  FeatureHWMultF5 = 2,
  FeatureX = 3,
  NumSubtargetFeatures = 4
};
} // end namespace MSP430
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV MSP430FeatureKV[] = {
  { "ext", "Enable MSP430-X extensions", MSP430::FeatureX, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hwmult16", "Enable 16-bit hardware multiplier", MSP430::FeatureHWMult16, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hwmult32", "Enable 32-bit hardware multiplier", MSP430::FeatureHWMult32, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hwmultf5", "Enable F5 series hardware multiplier", MSP430::FeatureHWMultF5, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
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
extern const llvm::MCWriteProcResEntry MSP430WriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // MSP430WriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry MSP430WriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // MSP430WriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry MSP430ReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // MSP430ReadAdvanceTable

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

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetSubTypeKV MSP430SubTypeKV[] = {
 { "generic", { { { 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "msp430", { { { 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "msp430x", { { { 0x8ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
};

namespace MSP430_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass,
    const MCInst *MI, unsigned CPUID) {
  // Don't know how to resolve this scheduling class.
  return 0;
}
} // end namespace MSP430_MC

struct MSP430GenMCSubtargetInfo : public MCSubtargetInfo {
  MSP430GenMCSubtargetInfo(const Triple &TT, 
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
    return MSP430_MC::resolveVariantSchedClassImpl(SchedClass, MI, CPUID); 
  }
};

static inline MCSubtargetInfo *createMSP430MCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new MSP430GenMCSubtargetInfo(TT, CPU, FS, MSP430FeatureKV, MSP430SubTypeKV, 
                      MSP430WriteProcResTable, MSP430WriteLatencyTable, MSP430ReadAdvanceTable, 
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
void llvm::MSP430Subtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  LLVM_DEBUG(dbgs() << "\nFeatures:" << FS);
  LLVM_DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[MSP430::FeatureHWMult16] && HWMultMode < HWMult16) HWMultMode = HWMult16;
  if (Bits[MSP430::FeatureHWMult32] && HWMultMode < HWMult32) HWMultMode = HWMult32;
  if (Bits[MSP430::FeatureHWMultF5] && HWMultMode < HWMultF5) HWMultMode = HWMultF5;
  if (Bits[MSP430::FeatureX]) ExtendedInsts = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
namespace MSP430_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass, const MCInst *MI, unsigned CPUID);
} // end namespace MSP430_MC

struct MSP430GenSubtargetInfo : public TargetSubtargetInfo {
  explicit MSP430GenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV MSP430FeatureKV[];
extern const llvm::SubtargetSubTypeKV MSP430SubTypeKV[];
extern const llvm::MCWriteProcResEntry MSP430WriteProcResTable[];
extern const llvm::MCWriteLatencyEntry MSP430WriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry MSP430ReadAdvanceTable[];
MSP430GenSubtargetInfo::MSP430GenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(MSP430FeatureKV, 4), makeArrayRef(MSP430SubTypeKV, 3), 
                        MSP430WriteProcResTable, MSP430WriteLatencyTable, MSP430ReadAdvanceTable, 
                        nullptr, nullptr, nullptr) {}

unsigned MSP430GenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // MSP430GenSubtargetInfo::resolveSchedClass

unsigned MSP430GenSubtargetInfo
::resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, unsigned CPUID) const {
  return MSP430_MC::resolveVariantSchedClassImpl(SchedClass, MI, CPUID);
} // MSP430GenSubtargetInfo::resolveVariantSchedClass

} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR


#ifdef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS


#ifdef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS


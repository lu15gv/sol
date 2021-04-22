/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register Enum Values                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM

namespace llvm {

class MCRegisterClass;
extern const MCRegisterClass WebAssemblyMCRegisterClasses[];

namespace WebAssembly {
enum {
  NoRegister,
  ARGUMENTS = 1,
  VALUE_STACK = 2,
  EXNREF_0 = 3,
  FP32 = 4,
  FP64 = 5,
  SP32 = 6,
  SP64 = 7,
  F32_0 = 8,
  F64_0 = 9,
  I32_0 = 10,
  I64_0 = 11,
  V128_0 = 12,
  NUM_TARGET_REGS 	// 13
};
} // end namespace WebAssembly

// Register classes

namespace WebAssembly {
enum {
  EXNREFRegClassID = 0,
  I32RegClassID = 1,
  F32RegClassID = 2,
  I64RegClassID = 3,
  F64RegClassID = 4,
  V128RegClassID = 5,

  };
} // end namespace WebAssembly

} // end namespace llvm

#endif // GET_REGINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* MC Register Information                                                    *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC

namespace llvm {

extern const MCPhysReg WebAssemblyRegDiffLists[] = {
  /* 0 */ 65535, 0,
};

extern const LaneBitmask WebAssemblyLaneMaskLists[] = {
  /* 0 */ LaneBitmask(0x00000000), LaneBitmask::getAll(),
};

extern const uint16_t WebAssemblySubRegIdxLists[] = {
  /* 0 */ 0,
};

extern const MCRegisterInfo::SubRegCoveredBits WebAssemblySubRegIdxRanges[] = {
  { 65535, 65535 },
};

extern const char WebAssemblyRegStrings[] = {
  /* 0 */ 'F', '3', '2', '_', '0', 0,
  /* 6 */ 'I', '3', '2', '_', '0', 0,
  /* 12 */ 'F', '6', '4', '_', '0', 0,
  /* 18 */ 'I', '6', '4', '_', '0', 0,
  /* 24 */ 'V', '1', '2', '8', '_', '0', 0,
  /* 31 */ 'E', 'X', 'N', 'R', 'E', 'F', '_', '0', 0,
  /* 40 */ 'F', 'P', '3', '2', 0,
  /* 45 */ 'S', 'P', '3', '2', 0,
  /* 50 */ 'F', 'P', '6', '4', 0,
  /* 55 */ 'S', 'P', '6', '4', 0,
  /* 60 */ 'V', 'A', 'L', 'U', 'E', '_', 'S', 'T', 'A', 'C', 'K', 0,
  /* 72 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', 'S', 0,
};

extern const MCRegisterDesc WebAssemblyRegDesc[] = { // Descriptors
  { 5, 0, 0, 0, 0, 0 },
  { 72, 1, 1, 0, 1, 0 },
  { 60, 1, 1, 0, 1, 0 },
  { 31, 1, 1, 0, 1, 0 },
  { 40, 1, 1, 0, 1, 0 },
  { 50, 1, 1, 0, 1, 0 },
  { 45, 1, 1, 0, 1, 0 },
  { 55, 1, 1, 0, 1, 0 },
  { 0, 1, 1, 0, 1, 0 },
  { 12, 1, 1, 0, 1, 0 },
  { 6, 1, 1, 0, 1, 0 },
  { 18, 1, 1, 0, 1, 0 },
  { 24, 1, 1, 0, 1, 0 },
};

extern const MCPhysReg WebAssemblyRegUnitRoots[][2] = {
  { WebAssembly::ARGUMENTS },
  { WebAssembly::VALUE_STACK },
  { WebAssembly::EXNREF_0 },
  { WebAssembly::FP32 },
  { WebAssembly::FP64 },
  { WebAssembly::SP32 },
  { WebAssembly::SP64 },
  { WebAssembly::F32_0 },
  { WebAssembly::F64_0 },
  { WebAssembly::I32_0 },
  { WebAssembly::I64_0 },
  { WebAssembly::V128_0 },
};

namespace {     // Register classes...
  // EXNREF Register Class...
  const MCPhysReg EXNREF[] = {
    WebAssembly::EXNREF_0, 
  };

  // EXNREF Bit set.
  const uint8_t EXNREFBits[] = {
    0x08, 
  };

  // I32 Register Class...
  const MCPhysReg I32[] = {
    WebAssembly::FP32, WebAssembly::SP32, WebAssembly::I32_0, 
  };

  // I32 Bit set.
  const uint8_t I32Bits[] = {
    0x50, 0x04, 
  };

  // F32 Register Class...
  const MCPhysReg F32[] = {
    WebAssembly::F32_0, 
  };

  // F32 Bit set.
  const uint8_t F32Bits[] = {
    0x00, 0x01, 
  };

  // I64 Register Class...
  const MCPhysReg I64[] = {
    WebAssembly::FP64, WebAssembly::SP64, WebAssembly::I64_0, 
  };

  // I64 Bit set.
  const uint8_t I64Bits[] = {
    0xa0, 0x08, 
  };

  // F64 Register Class...
  const MCPhysReg F64[] = {
    WebAssembly::F64_0, 
  };

  // F64 Bit set.
  const uint8_t F64Bits[] = {
    0x00, 0x02, 
  };

  // V128 Register Class...
  const MCPhysReg V128[] = {
    WebAssembly::V128_0, 
  };

  // V128 Bit set.
  const uint8_t V128Bits[] = {
    0x00, 0x10, 
  };

} // end anonymous namespace

extern const char WebAssemblyRegClassStrings[] = {
  /* 0 */ 'F', '3', '2', 0,
  /* 4 */ 'I', '3', '2', 0,
  /* 8 */ 'F', '6', '4', 0,
  /* 12 */ 'I', '6', '4', 0,
  /* 16 */ 'V', '1', '2', '8', 0,
  /* 21 */ 'E', 'X', 'N', 'R', 'E', 'F', 0,
};

extern const MCRegisterClass WebAssemblyMCRegisterClasses[] = {
  { EXNREF, EXNREFBits, 21, 1, sizeof(EXNREFBits), WebAssembly::EXNREFRegClassID, 1, true },
  { I32, I32Bits, 4, 3, sizeof(I32Bits), WebAssembly::I32RegClassID, 1, true },
  { F32, F32Bits, 0, 1, sizeof(F32Bits), WebAssembly::F32RegClassID, 1, true },
  { I64, I64Bits, 12, 3, sizeof(I64Bits), WebAssembly::I64RegClassID, 1, true },
  { F64, F64Bits, 8, 1, sizeof(F64Bits), WebAssembly::F64RegClassID, 1, true },
  { V128, V128Bits, 16, 1, sizeof(V128Bits), WebAssembly::V128RegClassID, 1, true },
};

extern const uint16_t WebAssemblyRegEncodingTable[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
};
static inline void InitWebAssemblyMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(WebAssemblyRegDesc, 13, RA, PC, WebAssemblyMCRegisterClasses, 6, WebAssemblyRegUnitRoots, 12, WebAssemblyRegDiffLists, WebAssemblyLaneMaskLists, WebAssemblyRegStrings, WebAssemblyRegClassStrings, WebAssemblySubRegIdxLists, 1,
WebAssemblySubRegIdxRanges, WebAssemblyRegEncodingTable);

}

} // end namespace llvm

#endif // GET_REGINFO_MC_DESC

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Register Information Header Fragment                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_HEADER
#undef GET_REGINFO_HEADER

#include "llvm/CodeGen/TargetRegisterInfo.h"

namespace llvm {

class WebAssemblyFrameLowering;

struct WebAssemblyGenRegisterInfo : public TargetRegisterInfo {
  explicit WebAssemblyGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0,
      unsigned PC = 0, unsigned HwMode = 0);
  const RegClassWeight &getRegClassWeight(const TargetRegisterClass *RC) const override;
  unsigned getRegUnitWeight(unsigned RegUnit) const override;
  unsigned getNumRegPressureSets() const override;
  const char *getRegPressureSetName(unsigned Idx) const override;
  unsigned getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const override;
  const int *getRegClassPressureSets(const TargetRegisterClass *RC) const override;
  const int *getRegUnitPressureSets(unsigned RegUnit) const override;
  ArrayRef<const char *> getRegMaskNames() const override;
  ArrayRef<const uint32_t *> getRegMasks() const override;
  /// Devirtualized TargetFrameLowering.
  static const WebAssemblyFrameLowering *getFrameLowering(
      const MachineFunction &MF);
};

namespace WebAssembly { // Register classes
  extern const TargetRegisterClass EXNREFRegClass;
  extern const TargetRegisterClass I32RegClass;
  extern const TargetRegisterClass F32RegClass;
  extern const TargetRegisterClass I64RegClass;
  extern const TargetRegisterClass F64RegClass;
  extern const TargetRegisterClass V128RegClass;
} // end namespace WebAssembly

} // end namespace llvm

#endif // GET_REGINFO_HEADER

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register and Register Classes Information                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_TARGET_DESC
#undef GET_REGINFO_TARGET_DESC

namespace llvm {

extern const MCRegisterClass WebAssemblyMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i32, MVT::Other,
  /* 2 */ MVT::i64, MVT::Other,
  /* 4 */ MVT::f32, MVT::Other,
  /* 6 */ MVT::f64, MVT::Other,
  /* 8 */ MVT::v4f32, MVT::v2f64, MVT::v2i64, MVT::v4i32, MVT::v16i8, MVT::v8i16, MVT::Other,
  /* 15 */ MVT::exnref, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "" };


static const LaneBitmask SubRegIndexLaneMaskTable[] = {
  LaneBitmask::getAll(),
 };



static const TargetRegisterInfo::RegClassInfo RegClassInfos[] = {
  // Mode = 0 (Default)
  { 0, 0, 0, VTLists+15 },    // EXNREF
  { 32, 32, 32, VTLists+0 },    // I32
  { 32, 32, 32, VTLists+4 },    // F32
  { 64, 64, 64, VTLists+2 },    // I64
  { 64, 64, 64, VTLists+6 },    // F64
  { 128, 128, 128, VTLists+8 },    // V128
};

static const TargetRegisterClass *const NullRegClasses[] = { nullptr };

static const uint32_t EXNREFSubClassMask[] = {
  0x00000001, 
};

static const uint32_t I32SubClassMask[] = {
  0x00000002, 
};

static const uint32_t F32SubClassMask[] = {
  0x00000004, 
};

static const uint32_t I64SubClassMask[] = {
  0x00000008, 
};

static const uint32_t F64SubClassMask[] = {
  0x00000010, 
};

static const uint32_t V128SubClassMask[] = {
  0x00000020, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 0,
};


namespace WebAssembly {   // Register class instances
  extern const TargetRegisterClass EXNREFRegClass = {
    &WebAssemblyMCRegisterClasses[EXNREFRegClassID],
    EXNREFSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass I32RegClass = {
    &WebAssemblyMCRegisterClasses[I32RegClassID],
    I32SubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass F32RegClass = {
    &WebAssemblyMCRegisterClasses[F32RegClassID],
    F32SubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass I64RegClass = {
    &WebAssemblyMCRegisterClasses[I64RegClassID],
    I64SubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass F64RegClass = {
    &WebAssemblyMCRegisterClasses[F64RegClassID],
    F64SubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass V128RegClass = {
    &WebAssemblyMCRegisterClasses[V128RegClassID],
    V128SubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

} // end namespace WebAssembly

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &WebAssembly::EXNREFRegClass,
    &WebAssembly::I32RegClass,
    &WebAssembly::F32RegClass,
    &WebAssembly::I64RegClass,
    &WebAssembly::F64RegClass,
    &WebAssembly::V128RegClass,
  };
} // end anonymous namespace

static const TargetRegisterInfoDesc WebAssemblyRegInfoDesc[] = { // Extra Descriptors
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
};
/// Get the weight in units of pressure for this register class.
const RegClassWeight &WebAssemblyGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 1},  	// EXNREF
    {1, 3},  	// I32
    {1, 1},  	// F32
    {1, 3},  	// I64
    {1, 1},  	// F64
    {1, 1},  	// V128
  };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned WebAssemblyGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 12 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned WebAssemblyGenRegisterInfo::getNumRegPressureSets() const {
  return 6;
}

// Get the name of this register unit pressure set.
const char *WebAssemblyGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *const PressureNameTable[] = {
    "EXNREF",
    "F32",
    "F64",
    "V128",
    "I32",
    "I64",
  };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned WebAssemblyGenRegisterInfo::
getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const {
  static const uint8_t PressureLimitTable[] = {
    1,  	// 0: EXNREF
    1,  	// 1: F32
    1,  	// 2: F64
    1,  	// 3: V128
    3,  	// 4: I32
    3,  	// 5: I64
  };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
  /* 0 */ 0, -1,
  /* 2 */ 1, -1,
  /* 4 */ 2, -1,
  /* 6 */ 3, -1,
  /* 8 */ 4, -1,
  /* 10 */ 5, -1,
};

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* WebAssemblyGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const uint8_t RCSetStartTable[] = {
    0,8,2,10,4,6,};
  return &RCSetsTable[RCSetStartTable[RC->getID()]];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* WebAssemblyGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 12 && "invalid register unit");
  static const uint8_t RUSetStartTable[] = {
    1,1,0,8,10,8,10,2,4,8,10,6,};
  return &RCSetsTable[RUSetStartTable[RegUnit]];
}

extern const MCRegisterDesc WebAssemblyRegDesc[];
extern const MCPhysReg WebAssemblyRegDiffLists[];
extern const LaneBitmask WebAssemblyLaneMaskLists[];
extern const char WebAssemblyRegStrings[];
extern const char WebAssemblyRegClassStrings[];
extern const MCPhysReg WebAssemblyRegUnitRoots[][2];
extern const uint16_t WebAssemblySubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits WebAssemblySubRegIdxRanges[];
extern const uint16_t WebAssemblyRegEncodingTable[];
WebAssemblyGenRegisterInfo::
WebAssemblyGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour,
      unsigned PC, unsigned HwMode)
  : TargetRegisterInfo(WebAssemblyRegInfoDesc, RegisterClasses, RegisterClasses+6,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable,
             LaneBitmask(0xFFFFFFFF), RegClassInfos, HwMode) {
  InitMCRegisterInfo(WebAssemblyRegDesc, 13, RA, PC,
                     WebAssemblyMCRegisterClasses, 6,
                     WebAssemblyRegUnitRoots,
                     12,
                     WebAssemblyRegDiffLists,
                     WebAssemblyLaneMaskLists,
                     WebAssemblyRegStrings,
                     WebAssemblyRegClassStrings,
                     WebAssemblySubRegIdxLists,
                     1,
                     WebAssemblySubRegIdxRanges,
                     WebAssemblyRegEncodingTable);

}



ArrayRef<const uint32_t *> WebAssemblyGenRegisterInfo::getRegMasks() const {
  return None;
}

ArrayRef<const char *> WebAssemblyGenRegisterInfo::getRegMaskNames() const {
  return None;
}

const WebAssemblyFrameLowering *
WebAssemblyGenRegisterInfo::getFrameLowering(const MachineFunction &MF) {
  return static_cast<const WebAssemblyFrameLowering *>(
      MF.getSubtarget().getFrameLowering());
}

} // end namespace llvm

#endif // GET_REGINFO_TARGET_DESC


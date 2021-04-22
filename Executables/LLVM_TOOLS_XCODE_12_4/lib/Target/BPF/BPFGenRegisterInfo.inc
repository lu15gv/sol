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
extern const MCRegisterClass BPFMCRegisterClasses[];

namespace BPF {
enum {
  NoRegister,
  R0 = 1,
  R1 = 2,
  R2 = 3,
  R3 = 4,
  R4 = 5,
  R5 = 6,
  R6 = 7,
  R7 = 8,
  R8 = 9,
  R9 = 10,
  R10 = 11,
  R11 = 12,
  W0 = 13,
  W1 = 14,
  W2 = 15,
  W3 = 16,
  W4 = 17,
  W5 = 18,
  W6 = 19,
  W7 = 20,
  W8 = 21,
  W9 = 22,
  W10 = 23,
  W11 = 24,
  NUM_TARGET_REGS 	// 25
};
} // end namespace BPF

// Register classes

namespace BPF {
enum {
  GPR32RegClassID = 0,
  GPRRegClassID = 1,

  };
} // end namespace BPF


// Subregister indices

namespace BPF {
enum {
  NoSubRegister,
  sub_32,	// 1
  NUM_TARGET_SUBREGS
};
} // end namespace BPF

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

extern const MCPhysReg BPFRegDiffLists[] = {
  /* 0 */ 12, 0,
  /* 2 */ 65523, 0,
  /* 4 */ 65524, 0,
  /* 6 */ 65535, 0,
};

extern const LaneBitmask BPFLaneMaskLists[] = {
  /* 0 */ LaneBitmask(0x00000000), LaneBitmask::getAll(),
  /* 2 */ LaneBitmask(0x00000001), LaneBitmask::getAll(),
};

extern const uint16_t BPFSubRegIdxLists[] = {
  /* 0 */ 1, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits BPFSubRegIdxRanges[] = {
  { 65535, 65535 },
  { 0, 32 },	// sub_32
};

extern const char BPFRegStrings[] = {
  /* 0 */ 'R', '1', '0', 0,
  /* 4 */ 'W', '1', '0', 0,
  /* 8 */ 'R', '0', 0,
  /* 11 */ 'W', '0', 0,
  /* 14 */ 'R', '1', '1', 0,
  /* 18 */ 'W', '1', '1', 0,
  /* 22 */ 'R', '1', 0,
  /* 25 */ 'W', '1', 0,
  /* 28 */ 'R', '2', 0,
  /* 31 */ 'W', '2', 0,
  /* 34 */ 'R', '3', 0,
  /* 37 */ 'W', '3', 0,
  /* 40 */ 'R', '4', 0,
  /* 43 */ 'W', '4', 0,
  /* 46 */ 'R', '5', 0,
  /* 49 */ 'W', '5', 0,
  /* 52 */ 'R', '6', 0,
  /* 55 */ 'W', '6', 0,
  /* 58 */ 'R', '7', 0,
  /* 61 */ 'W', '7', 0,
  /* 64 */ 'R', '8', 0,
  /* 67 */ 'W', '8', 0,
  /* 70 */ 'R', '9', 0,
  /* 73 */ 'W', '9', 0,
};

extern const MCRegisterDesc BPFRegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0, 0 },
  { 8, 0, 1, 0, 97, 2 },
  { 22, 0, 1, 0, 97, 2 },
  { 28, 0, 1, 0, 97, 2 },
  { 34, 0, 1, 0, 97, 2 },
  { 40, 0, 1, 0, 97, 2 },
  { 46, 0, 1, 0, 97, 2 },
  { 52, 0, 1, 0, 97, 2 },
  { 58, 0, 1, 0, 97, 2 },
  { 64, 0, 1, 0, 97, 2 },
  { 70, 0, 1, 0, 97, 2 },
  { 0, 0, 1, 0, 97, 2 },
  { 14, 0, 1, 0, 97, 2 },
  { 11, 1, 4, 1, 33, 0 },
  { 25, 1, 4, 1, 33, 0 },
  { 31, 1, 4, 1, 33, 0 },
  { 37, 1, 4, 1, 33, 0 },
  { 43, 1, 4, 1, 33, 0 },
  { 49, 1, 4, 1, 33, 0 },
  { 55, 1, 4, 1, 33, 0 },
  { 61, 1, 4, 1, 33, 0 },
  { 67, 1, 4, 1, 33, 0 },
  { 73, 1, 4, 1, 33, 0 },
  { 4, 1, 4, 1, 33, 0 },
  { 18, 1, 4, 1, 33, 0 },
};

extern const MCPhysReg BPFRegUnitRoots[][2] = {
  { BPF::W0 },
  { BPF::W1 },
  { BPF::W2 },
  { BPF::W3 },
  { BPF::W4 },
  { BPF::W5 },
  { BPF::W6 },
  { BPF::W7 },
  { BPF::W8 },
  { BPF::W9 },
  { BPF::W10 },
  { BPF::W11 },
};

namespace {     // Register classes...
  // GPR32 Register Class...
  const MCPhysReg GPR32[] = {
    BPF::W1, BPF::W2, BPF::W3, BPF::W4, BPF::W5, BPF::W6, BPF::W7, BPF::W8, BPF::W9, BPF::W0, BPF::W11, BPF::W10, 
  };

  // GPR32 Bit set.
  const uint8_t GPR32Bits[] = {
    0x00, 0xe0, 0xff, 0x01, 
  };

  // GPR Register Class...
  const MCPhysReg GPR[] = {
    BPF::R1, BPF::R2, BPF::R3, BPF::R4, BPF::R5, BPF::R6, BPF::R7, BPF::R8, BPF::R9, BPF::R0, BPF::R11, BPF::R10, 
  };

  // GPR Bit set.
  const uint8_t GPRBits[] = {
    0xfe, 0x1f, 
  };

} // end anonymous namespace

extern const char BPFRegClassStrings[] = {
  /* 0 */ 'G', 'P', 'R', '3', '2', 0,
  /* 6 */ 'G', 'P', 'R', 0,
};

extern const MCRegisterClass BPFMCRegisterClasses[] = {
  { GPR32, GPR32Bits, 0, 12, sizeof(GPR32Bits), BPF::GPR32RegClassID, 1, true },
  { GPR, GPRBits, 6, 12, sizeof(GPRBits), BPF::GPRRegClassID, 1, true },
};

// BPF Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair BPFDwarfFlavour0Dwarf2L[] = {
  { 0U, BPF::W0 },
  { 1U, BPF::W1 },
  { 2U, BPF::W2 },
  { 3U, BPF::W3 },
  { 4U, BPF::W4 },
  { 5U, BPF::W5 },
  { 6U, BPF::W6 },
  { 7U, BPF::W7 },
  { 8U, BPF::W8 },
  { 9U, BPF::W9 },
  { 10U, BPF::W10 },
  { 11U, BPF::W11 },
};
extern const unsigned BPFDwarfFlavour0Dwarf2LSize = array_lengthof(BPFDwarfFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair BPFEHFlavour0Dwarf2L[] = {
  { 0U, BPF::W0 },
  { 1U, BPF::W1 },
  { 2U, BPF::W2 },
  { 3U, BPF::W3 },
  { 4U, BPF::W4 },
  { 5U, BPF::W5 },
  { 6U, BPF::W6 },
  { 7U, BPF::W7 },
  { 8U, BPF::W8 },
  { 9U, BPF::W9 },
  { 10U, BPF::W10 },
  { 11U, BPF::W11 },
};
extern const unsigned BPFEHFlavour0Dwarf2LSize = array_lengthof(BPFEHFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair BPFDwarfFlavour0L2Dwarf[] = {
  { BPF::R0, 0U },
  { BPF::R1, 1U },
  { BPF::R2, 2U },
  { BPF::R3, 3U },
  { BPF::R4, 4U },
  { BPF::R5, 5U },
  { BPF::R6, 6U },
  { BPF::R7, 7U },
  { BPF::R8, 8U },
  { BPF::R9, 9U },
  { BPF::R10, 10U },
  { BPF::R11, 11U },
  { BPF::W0, 0U },
  { BPF::W1, 1U },
  { BPF::W2, 2U },
  { BPF::W3, 3U },
  { BPF::W4, 4U },
  { BPF::W5, 5U },
  { BPF::W6, 6U },
  { BPF::W7, 7U },
  { BPF::W8, 8U },
  { BPF::W9, 9U },
  { BPF::W10, 10U },
  { BPF::W11, 11U },
};
extern const unsigned BPFDwarfFlavour0L2DwarfSize = array_lengthof(BPFDwarfFlavour0L2Dwarf);

extern const MCRegisterInfo::DwarfLLVMRegPair BPFEHFlavour0L2Dwarf[] = {
  { BPF::R0, 0U },
  { BPF::R1, 1U },
  { BPF::R2, 2U },
  { BPF::R3, 3U },
  { BPF::R4, 4U },
  { BPF::R5, 5U },
  { BPF::R6, 6U },
  { BPF::R7, 7U },
  { BPF::R8, 8U },
  { BPF::R9, 9U },
  { BPF::R10, 10U },
  { BPF::R11, 11U },
  { BPF::W0, 0U },
  { BPF::W1, 1U },
  { BPF::W2, 2U },
  { BPF::W3, 3U },
  { BPF::W4, 4U },
  { BPF::W5, 5U },
  { BPF::W6, 6U },
  { BPF::W7, 7U },
  { BPF::W8, 8U },
  { BPF::W9, 9U },
  { BPF::W10, 10U },
  { BPF::W11, 11U },
};
extern const unsigned BPFEHFlavour0L2DwarfSize = array_lengthof(BPFEHFlavour0L2Dwarf);

extern const uint16_t BPFRegEncodingTable[] = {
  0,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
};
static inline void InitBPFMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(BPFRegDesc, 25, RA, PC, BPFMCRegisterClasses, 2, BPFRegUnitRoots, 12, BPFRegDiffLists, BPFLaneMaskLists, BPFRegStrings, BPFRegClassStrings, BPFSubRegIdxLists, 2,
BPFSubRegIdxRanges, BPFRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(BPFDwarfFlavour0Dwarf2L, BPFDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(BPFEHFlavour0Dwarf2L, BPFEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(BPFDwarfFlavour0L2Dwarf, BPFDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(BPFEHFlavour0L2Dwarf, BPFEHFlavour0L2DwarfSize, true);
    break;
  }
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

class BPFFrameLowering;

struct BPFGenRegisterInfo : public TargetRegisterInfo {
  explicit BPFGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0,
      unsigned PC = 0, unsigned HwMode = 0);
  unsigned composeSubRegIndicesImpl(unsigned, unsigned) const override;
  LaneBitmask composeSubRegIndexLaneMaskImpl(unsigned, LaneBitmask) const override;
  LaneBitmask reverseComposeSubRegIndexLaneMaskImpl(unsigned, LaneBitmask) const override;
  const TargetRegisterClass *getSubClassWithSubReg(const TargetRegisterClass*, unsigned) const override;
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
  static const BPFFrameLowering *getFrameLowering(
      const MachineFunction &MF);
};

namespace BPF { // Register classes
  extern const TargetRegisterClass GPR32RegClass;
  extern const TargetRegisterClass GPRRegClass;
} // end namespace BPF

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

extern const MCRegisterClass BPFMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i32, MVT::Other,
  /* 2 */ MVT::i64, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "sub_32", "" };


static const LaneBitmask SubRegIndexLaneMaskTable[] = {
  LaneBitmask::getAll(),
  LaneBitmask(0x00000001), // sub_32
 };



static const TargetRegisterInfo::RegClassInfo RegClassInfos[] = {
  // Mode = 0 (Default)
  { 32, 32, 32, VTLists+0 },    // GPR32
  { 64, 64, 64, VTLists+2 },    // GPR
};

static const TargetRegisterClass *const NullRegClasses[] = { nullptr };

static const uint32_t GPR32SubClassMask[] = {
  0x00000001, 
  0x00000002, // sub_32
};

static const uint32_t GPRSubClassMask[] = {
  0x00000002, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 0,
};


namespace BPF {   // Register class instances
  extern const TargetRegisterClass GPR32RegClass = {
    &BPFMCRegisterClasses[GPR32RegClassID],
    GPR32SubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GPRRegClass = {
    &BPFMCRegisterClasses[GPRRegClassID],
    GPRSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

} // end namespace BPF

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &BPF::GPR32RegClass,
    &BPF::GPRRegClass,
  };
} // end anonymous namespace

static const TargetRegisterInfoDesc BPFRegInfoDesc[] = { // Extra Descriptors
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
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
};
unsigned BPFGenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t Rows[1][1] = {
    { 0, },
  };

  --IdxA; assert(IdxA < 1);
  --IdxB; assert(IdxB < 1);
  return Rows[0][IdxB];
}

  struct MaskRolOp {
    LaneBitmask Mask;
    uint8_t  RotateLeft;
  };
  static const MaskRolOp LaneMaskComposeSequences[] = {
    { LaneBitmask(0xFFFFFFFF),  0 }, { LaneBitmask::getNone(), 0 }  // Sequence 0
  };
  static const MaskRolOp *const CompositeSequences[] = {
    &LaneMaskComposeSequences[0] // to sub_32
  };

LaneBitmask BPFGenRegisterInfo::composeSubRegIndexLaneMaskImpl(unsigned IdxA, LaneBitmask LaneMask) const {
  --IdxA; assert(IdxA < 1 && "Subregister index out of bounds");
  LaneBitmask Result;
  for (const MaskRolOp *Ops = CompositeSequences[IdxA]; Ops->Mask.any(); ++Ops) {
    LaneBitmask::Type M = LaneMask.getAsInteger() & Ops->Mask.getAsInteger();
    if (unsigned S = Ops->RotateLeft)
      Result |= LaneBitmask((M << S) | (M >> (LaneBitmask::BitWidth - S)));
    else
      Result |= LaneBitmask(M);
  }
  return Result;
}

LaneBitmask BPFGenRegisterInfo::reverseComposeSubRegIndexLaneMaskImpl(unsigned IdxA,  LaneBitmask LaneMask) const {
  LaneMask &= getSubRegIndexLaneMask(IdxA);
  --IdxA; assert(IdxA < 1 && "Subregister index out of bounds");
  LaneBitmask Result;
  for (const MaskRolOp *Ops = CompositeSequences[IdxA]; Ops->Mask.any(); ++Ops) {
    LaneBitmask::Type M = LaneMask.getAsInteger();
    if (unsigned S = Ops->RotateLeft)
      Result |= LaneBitmask((M >> S) | (M << (LaneBitmask::BitWidth - S)));
    else
      Result |= LaneBitmask(M);
  }
  return Result;
}

const TargetRegisterClass *BPFGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[2][1] = {
    {	// GPR32
      0,	// sub_32
    },
    {	// GPR
      2,	// sub_32 -> GPR
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 1 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : nullptr;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &BPFGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 12},  	// GPR32
    {1, 12},  	// GPR
  };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned BPFGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 12 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned BPFGenRegisterInfo::getNumRegPressureSets() const {
  return 1;
}

// Get the name of this register unit pressure set.
const char *BPFGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *const PressureNameTable[] = {
    "GPR32",
  };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned BPFGenRegisterInfo::
getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const {
  static const uint8_t PressureLimitTable[] = {
    12,  	// 0: GPR32
  };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
  /* 0 */ 0, -1,
};

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* BPFGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const uint8_t RCSetStartTable[] = {
    0,0,};
  return &RCSetsTable[RCSetStartTable[RC->getID()]];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* BPFGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 12 && "invalid register unit");
  static const uint8_t RUSetStartTable[] = {
    0,0,0,0,0,0,0,0,0,0,0,0,};
  return &RCSetsTable[RUSetStartTable[RegUnit]];
}

extern const MCRegisterDesc BPFRegDesc[];
extern const MCPhysReg BPFRegDiffLists[];
extern const LaneBitmask BPFLaneMaskLists[];
extern const char BPFRegStrings[];
extern const char BPFRegClassStrings[];
extern const MCPhysReg BPFRegUnitRoots[][2];
extern const uint16_t BPFSubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits BPFSubRegIdxRanges[];
extern const uint16_t BPFRegEncodingTable[];
// BPF Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair BPFDwarfFlavour0Dwarf2L[];
extern const unsigned BPFDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair BPFEHFlavour0Dwarf2L[];
extern const unsigned BPFEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair BPFDwarfFlavour0L2Dwarf[];
extern const unsigned BPFDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair BPFEHFlavour0L2Dwarf[];
extern const unsigned BPFEHFlavour0L2DwarfSize;

BPFGenRegisterInfo::
BPFGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour,
      unsigned PC, unsigned HwMode)
  : TargetRegisterInfo(BPFRegInfoDesc, RegisterClasses, RegisterClasses+2,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable,
             LaneBitmask(0xFFFFFFFE), RegClassInfos, HwMode) {
  InitMCRegisterInfo(BPFRegDesc, 25, RA, PC,
                     BPFMCRegisterClasses, 2,
                     BPFRegUnitRoots,
                     12,
                     BPFRegDiffLists,
                     BPFLaneMaskLists,
                     BPFRegStrings,
                     BPFRegClassStrings,
                     BPFSubRegIdxLists,
                     2,
                     BPFSubRegIdxRanges,
                     BPFRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(BPFDwarfFlavour0Dwarf2L, BPFDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(BPFEHFlavour0Dwarf2L, BPFEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(BPFDwarfFlavour0L2Dwarf, BPFDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(BPFEHFlavour0L2Dwarf, BPFEHFlavour0L2DwarfSize, true);
    break;
  }
}

static const MCPhysReg CSR_SaveList[] = { BPF::R6, BPF::R7, BPF::R8, BPF::R9, BPF::R10, 0 };
static const uint32_t CSR_RegMask[] = { 0x00f80f80, };


ArrayRef<const uint32_t *> BPFGenRegisterInfo::getRegMasks() const {
  static const uint32_t *const Masks[] = {
    CSR_RegMask,
  };
  return makeArrayRef(Masks);
}

ArrayRef<const char *> BPFGenRegisterInfo::getRegMaskNames() const {
  static const char *const Names[] = {
    "CSR",
  };
  return makeArrayRef(Names);
}

const BPFFrameLowering *
BPFGenRegisterInfo::getFrameLowering(const MachineFunction &MF) {
  return static_cast<const BPFFrameLowering *>(
      MF.getSubtarget().getFrameLowering());
}

} // end namespace llvm

#endif // GET_REGINFO_TARGET_DESC


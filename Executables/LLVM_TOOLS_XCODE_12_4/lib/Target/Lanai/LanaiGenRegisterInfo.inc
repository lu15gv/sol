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
extern const MCRegisterClass LanaiMCRegisterClasses[];

namespace Lanai {
enum {
  NoRegister,
  FP = 1,
  PC = 2,
  RCA = 3,
  RV = 4,
  SP = 5,
  SR = 6,
  R0 = 7,
  R1 = 8,
  R2 = 9,
  R3 = 10,
  R4 = 11,
  R5 = 12,
  R6 = 13,
  R7 = 14,
  R8 = 15,
  R9 = 16,
  R10 = 17,
  R11 = 18,
  R12 = 19,
  R13 = 20,
  R14 = 21,
  R15 = 22,
  R16 = 23,
  R17 = 24,
  R18 = 25,
  R19 = 26,
  R20 = 27,
  R21 = 28,
  R22 = 29,
  R23 = 30,
  R24 = 31,
  R25 = 32,
  R26 = 33,
  R27 = 34,
  R28 = 35,
  R29 = 36,
  R30 = 37,
  R31 = 38,
  RR1 = 39,
  RR2 = 40,
  NUM_TARGET_REGS 	// 41
};
} // end namespace Lanai

// Register classes

namespace Lanai {
enum {
  GPRRegClassID = 0,
  GPR_with_sub_32RegClassID = 1,
  CCRRegClassID = 2,

  };
} // end namespace Lanai


// Subregister indices

namespace Lanai {
enum {
  NoSubRegister,
  sub_32,	// 1
  NUM_TARGET_SUBREGS
};
} // end namespace Lanai

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

extern const MCPhysReg LanaiRegDiffLists[] = {
  /* 0 */ 4, 0,
  /* 2 */ 6, 0,
  /* 4 */ 7, 0,
  /* 6 */ 11, 0,
  /* 8 */ 19, 0,
  /* 10 */ 22, 0,
  /* 12 */ 65208, 0,
  /* 14 */ 65419, 0,
  /* 16 */ 65428, 0,
  /* 18 */ 65474, 0,
  /* 20 */ 65509, 0,
  /* 22 */ 65514, 0,
  /* 24 */ 65517, 0,
  /* 26 */ 65525, 0,
  /* 28 */ 65529, 0,
  /* 30 */ 65530, 0,
  /* 32 */ 65531, 0,
  /* 34 */ 65532, 0,
  /* 36 */ 65535, 0,
};

extern const LaneBitmask LanaiLaneMaskLists[] = {
  /* 0 */ LaneBitmask(0x00000000), LaneBitmask::getAll(),
  /* 2 */ LaneBitmask(0x00000001), LaneBitmask::getAll(),
};

extern const uint16_t LanaiSubRegIdxLists[] = {
  /* 0 */ 1, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits LanaiSubRegIdxRanges[] = {
  { 65535, 65535 },
  { 0, 32 },	// sub_32
};

extern const char LanaiRegStrings[] = {
  /* 0 */ 'R', '1', '0', 0,
  /* 4 */ 'R', '2', '0', 0,
  /* 8 */ 'R', '3', '0', 0,
  /* 12 */ 'R', '0', 0,
  /* 15 */ 'R', '1', '1', 0,
  /* 19 */ 'R', '2', '1', 0,
  /* 23 */ 'R', '3', '1', 0,
  /* 27 */ 'R', 'R', '1', 0,
  /* 31 */ 'R', '1', '2', 0,
  /* 35 */ 'R', '2', '2', 0,
  /* 39 */ 'R', 'R', '2', 0,
  /* 43 */ 'R', '1', '3', 0,
  /* 47 */ 'R', '2', '3', 0,
  /* 51 */ 'R', '3', 0,
  /* 54 */ 'R', '1', '4', 0,
  /* 58 */ 'R', '2', '4', 0,
  /* 62 */ 'R', '4', 0,
  /* 65 */ 'R', '1', '5', 0,
  /* 69 */ 'R', '2', '5', 0,
  /* 73 */ 'R', '5', 0,
  /* 76 */ 'R', '1', '6', 0,
  /* 80 */ 'R', '2', '6', 0,
  /* 84 */ 'R', '6', 0,
  /* 87 */ 'R', '1', '7', 0,
  /* 91 */ 'R', '2', '7', 0,
  /* 95 */ 'R', '7', 0,
  /* 98 */ 'R', '1', '8', 0,
  /* 102 */ 'R', '2', '8', 0,
  /* 106 */ 'R', '8', 0,
  /* 109 */ 'R', '1', '9', 0,
  /* 113 */ 'R', '2', '9', 0,
  /* 117 */ 'R', '9', 0,
  /* 120 */ 'R', 'C', 'A', 0,
  /* 124 */ 'P', 'C', 0,
  /* 127 */ 'F', 'P', 0,
  /* 130 */ 'S', 'P', 0,
  /* 133 */ 'S', 'R', 0,
  /* 136 */ 'R', 'V', 0,
};

extern const MCRegisterDesc LanaiRegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0, 0 },
  { 127, 6, 1, 0, 577, 2 },
  { 124, 4, 1, 0, 577, 2 },
  { 120, 8, 1, 0, 577, 2 },
  { 136, 6, 1, 0, 577, 2 },
  { 130, 2, 1, 0, 577, 2 },
  { 133, 1, 1, 1, 577, 0 },
  { 12, 1, 1, 1, 577, 0 },
  { 28, 1, 1, 1, 577, 0 },
  { 40, 1, 28, 1, 295, 0 },
  { 51, 1, 1, 1, 295, 0 },
  { 62, 1, 30, 1, 0, 0 },
  { 73, 1, 26, 1, 265, 0 },
  { 84, 1, 1, 1, 545, 0 },
  { 95, 1, 1, 1, 545, 0 },
  { 106, 1, 26, 1, 232, 0 },
  { 117, 1, 1, 1, 513, 0 },
  { 0, 1, 10, 1, 513, 0 },
  { 15, 1, 10, 1, 513, 0 },
  { 31, 1, 1, 1, 513, 0 },
  { 43, 1, 1, 1, 513, 0 },
  { 54, 1, 1, 1, 513, 0 },
  { 65, 1, 24, 1, 207, 0 },
  { 76, 1, 1, 1, 481, 0 },
  { 87, 1, 1, 1, 481, 0 },
  { 98, 1, 1, 1, 481, 0 },
  { 109, 1, 1, 1, 481, 0 },
  { 4, 1, 1, 1, 481, 0 },
  { 19, 1, 1, 1, 481, 0 },
  { 35, 1, 1, 1, 481, 0 },
  { 47, 1, 1, 1, 481, 0 },
  { 58, 1, 1, 1, 481, 0 },
  { 69, 1, 1, 1, 481, 0 },
  { 80, 1, 1, 1, 481, 0 },
  { 91, 1, 1, 1, 481, 0 },
  { 102, 1, 1, 1, 481, 0 },
  { 113, 1, 1, 1, 481, 0 },
  { 8, 1, 1, 1, 481, 0 },
  { 23, 1, 1, 1, 481, 0 },
  { 27, 22, 1, 0, 321, 2 },
  { 39, 22, 1, 0, 321, 2 },
};

extern const MCPhysReg LanaiRegUnitRoots[][2] = {
  { Lanai::R5 },
  { Lanai::R2 },
  { Lanai::R15 },
  { Lanai::R8 },
  { Lanai::R4 },
  { Lanai::SR },
  { Lanai::R0 },
  { Lanai::R1 },
  { Lanai::R3 },
  { Lanai::R6 },
  { Lanai::R7 },
  { Lanai::R9 },
  { Lanai::R10 },
  { Lanai::R11 },
  { Lanai::R12 },
  { Lanai::R13 },
  { Lanai::R14 },
  { Lanai::R16 },
  { Lanai::R17 },
  { Lanai::R18 },
  { Lanai::R19 },
  { Lanai::R20 },
  { Lanai::R21 },
  { Lanai::R22 },
  { Lanai::R23 },
  { Lanai::R24 },
  { Lanai::R25 },
  { Lanai::R26 },
  { Lanai::R27 },
  { Lanai::R28 },
  { Lanai::R29 },
  { Lanai::R30 },
  { Lanai::R31 },
};

namespace {     // Register classes...
  // GPR Register Class...
  const MCPhysReg GPR[] = {
    Lanai::R3, Lanai::R9, Lanai::R12, Lanai::R13, Lanai::R14, Lanai::R16, Lanai::R17, Lanai::R20, Lanai::R21, Lanai::R22, Lanai::R23, Lanai::R24, Lanai::R25, Lanai::R26, Lanai::R27, Lanai::R28, Lanai::R29, Lanai::R30, Lanai::R31, Lanai::R6, Lanai::R7, Lanai::R18, Lanai::R19, Lanai::R15, Lanai::RCA, Lanai::R10, Lanai::RR1, Lanai::R11, Lanai::RR2, Lanai::R8, Lanai::RV, Lanai::R5, Lanai::FP, Lanai::R4, Lanai::SP, Lanai::R2, Lanai::PC, Lanai::R1, Lanai::R0, 
  };

  // GPR Bit set.
  const uint8_t GPRBits[] = {
    0xbe, 0xff, 0xff, 0xff, 0xff, 0x01, 
  };

  // GPR_with_sub_32 Register Class...
  const MCPhysReg GPR_with_sub_32[] = {
    Lanai::RCA, Lanai::RR1, Lanai::RR2, Lanai::RV, Lanai::FP, Lanai::SP, Lanai::PC, 
  };

  // GPR_with_sub_32 Bit set.
  const uint8_t GPR_with_sub_32Bits[] = {
    0x3e, 0x00, 0x00, 0x00, 0x80, 0x01, 
  };

  // CCR Register Class...
  const MCPhysReg CCR[] = {
    Lanai::SR, 
  };

  // CCR Bit set.
  const uint8_t CCRBits[] = {
    0x40, 
  };

} // end anonymous namespace

extern const char LanaiRegClassStrings[] = {
  /* 0 */ 'G', 'P', 'R', '_', 'w', 'i', 't', 'h', '_', 's', 'u', 'b', '_', '3', '2', 0,
  /* 16 */ 'C', 'C', 'R', 0,
  /* 20 */ 'G', 'P', 'R', 0,
};

extern const MCRegisterClass LanaiMCRegisterClasses[] = {
  { GPR, GPRBits, 20, 39, sizeof(GPRBits), Lanai::GPRRegClassID, 1, true },
  { GPR_with_sub_32, GPR_with_sub_32Bits, 0, 7, sizeof(GPR_with_sub_32Bits), Lanai::GPR_with_sub_32RegClassID, 1, true },
  { CCR, CCRBits, 16, 1, sizeof(CCRBits), Lanai::CCRRegClassID, -1, false },
};

// Lanai Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair LanaiDwarfFlavour0Dwarf2L[] = {
  { 0U, Lanai::R0 },
  { 1U, Lanai::R1 },
  { 2U, Lanai::R2 },
  { 3U, Lanai::R3 },
  { 4U, Lanai::R4 },
  { 5U, Lanai::R5 },
  { 6U, Lanai::R6 },
  { 7U, Lanai::R7 },
  { 8U, Lanai::R8 },
  { 9U, Lanai::R9 },
  { 10U, Lanai::R10 },
  { 11U, Lanai::R11 },
  { 12U, Lanai::R12 },
  { 13U, Lanai::R13 },
  { 14U, Lanai::R14 },
  { 15U, Lanai::R15 },
  { 16U, Lanai::R16 },
  { 17U, Lanai::R17 },
  { 18U, Lanai::R18 },
  { 19U, Lanai::R19 },
  { 20U, Lanai::R20 },
  { 21U, Lanai::R21 },
  { 22U, Lanai::R22 },
  { 23U, Lanai::R23 },
  { 24U, Lanai::R24 },
  { 25U, Lanai::R25 },
  { 26U, Lanai::R26 },
  { 27U, Lanai::R27 },
  { 28U, Lanai::R28 },
  { 29U, Lanai::R29 },
  { 30U, Lanai::R30 },
  { 31U, Lanai::R31 },
};
extern const unsigned LanaiDwarfFlavour0Dwarf2LSize = array_lengthof(LanaiDwarfFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair LanaiEHFlavour0Dwarf2L[] = {
  { 0U, Lanai::R0 },
  { 1U, Lanai::R1 },
  { 2U, Lanai::R2 },
  { 3U, Lanai::R3 },
  { 4U, Lanai::R4 },
  { 5U, Lanai::R5 },
  { 6U, Lanai::R6 },
  { 7U, Lanai::R7 },
  { 8U, Lanai::R8 },
  { 9U, Lanai::R9 },
  { 10U, Lanai::R10 },
  { 11U, Lanai::R11 },
  { 12U, Lanai::R12 },
  { 13U, Lanai::R13 },
  { 14U, Lanai::R14 },
  { 15U, Lanai::R15 },
  { 16U, Lanai::R16 },
  { 17U, Lanai::R17 },
  { 18U, Lanai::R18 },
  { 19U, Lanai::R19 },
  { 20U, Lanai::R20 },
  { 21U, Lanai::R21 },
  { 22U, Lanai::R22 },
  { 23U, Lanai::R23 },
  { 24U, Lanai::R24 },
  { 25U, Lanai::R25 },
  { 26U, Lanai::R26 },
  { 27U, Lanai::R27 },
  { 28U, Lanai::R28 },
  { 29U, Lanai::R29 },
  { 30U, Lanai::R30 },
  { 31U, Lanai::R31 },
};
extern const unsigned LanaiEHFlavour0Dwarf2LSize = array_lengthof(LanaiEHFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair LanaiDwarfFlavour0L2Dwarf[] = {
  { Lanai::FP, 5U },
  { Lanai::PC, 2U },
  { Lanai::RCA, 15U },
  { Lanai::RV, 8U },
  { Lanai::SP, 4U },
  { Lanai::R0, 0U },
  { Lanai::R1, 1U },
  { Lanai::R2, 2U },
  { Lanai::R3, 3U },
  { Lanai::R4, 4U },
  { Lanai::R5, 5U },
  { Lanai::R6, 6U },
  { Lanai::R7, 7U },
  { Lanai::R8, 8U },
  { Lanai::R9, 9U },
  { Lanai::R10, 10U },
  { Lanai::R11, 11U },
  { Lanai::R12, 12U },
  { Lanai::R13, 13U },
  { Lanai::R14, 14U },
  { Lanai::R15, 15U },
  { Lanai::R16, 16U },
  { Lanai::R17, 17U },
  { Lanai::R18, 18U },
  { Lanai::R19, 19U },
  { Lanai::R20, 20U },
  { Lanai::R21, 21U },
  { Lanai::R22, 22U },
  { Lanai::R23, 23U },
  { Lanai::R24, 24U },
  { Lanai::R25, 25U },
  { Lanai::R26, 26U },
  { Lanai::R27, 27U },
  { Lanai::R28, 28U },
  { Lanai::R29, 29U },
  { Lanai::R30, 30U },
  { Lanai::R31, 31U },
  { Lanai::RR1, 10U },
  { Lanai::RR2, 11U },
};
extern const unsigned LanaiDwarfFlavour0L2DwarfSize = array_lengthof(LanaiDwarfFlavour0L2Dwarf);

extern const MCRegisterInfo::DwarfLLVMRegPair LanaiEHFlavour0L2Dwarf[] = {
  { Lanai::FP, 5U },
  { Lanai::PC, 2U },
  { Lanai::RCA, 15U },
  { Lanai::RV, 8U },
  { Lanai::SP, 4U },
  { Lanai::R0, 0U },
  { Lanai::R1, 1U },
  { Lanai::R2, 2U },
  { Lanai::R3, 3U },
  { Lanai::R4, 4U },
  { Lanai::R5, 5U },
  { Lanai::R6, 6U },
  { Lanai::R7, 7U },
  { Lanai::R8, 8U },
  { Lanai::R9, 9U },
  { Lanai::R10, 10U },
  { Lanai::R11, 11U },
  { Lanai::R12, 12U },
  { Lanai::R13, 13U },
  { Lanai::R14, 14U },
  { Lanai::R15, 15U },
  { Lanai::R16, 16U },
  { Lanai::R17, 17U },
  { Lanai::R18, 18U },
  { Lanai::R19, 19U },
  { Lanai::R20, 20U },
  { Lanai::R21, 21U },
  { Lanai::R22, 22U },
  { Lanai::R23, 23U },
  { Lanai::R24, 24U },
  { Lanai::R25, 25U },
  { Lanai::R26, 26U },
  { Lanai::R27, 27U },
  { Lanai::R28, 28U },
  { Lanai::R29, 29U },
  { Lanai::R30, 30U },
  { Lanai::R31, 31U },
  { Lanai::RR1, 10U },
  { Lanai::RR2, 11U },
};
extern const unsigned LanaiEHFlavour0L2DwarfSize = array_lengthof(LanaiEHFlavour0L2Dwarf);

extern const uint16_t LanaiRegEncodingTable[] = {
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
  0,
  0,
};
static inline void InitLanaiMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(LanaiRegDesc, 41, RA, PC, LanaiMCRegisterClasses, 3, LanaiRegUnitRoots, 33, LanaiRegDiffLists, LanaiLaneMaskLists, LanaiRegStrings, LanaiRegClassStrings, LanaiSubRegIdxLists, 2,
LanaiSubRegIdxRanges, LanaiRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(LanaiDwarfFlavour0Dwarf2L, LanaiDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(LanaiEHFlavour0Dwarf2L, LanaiEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(LanaiDwarfFlavour0L2Dwarf, LanaiDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(LanaiEHFlavour0L2Dwarf, LanaiEHFlavour0L2DwarfSize, true);
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

class LanaiFrameLowering;

struct LanaiGenRegisterInfo : public TargetRegisterInfo {
  explicit LanaiGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0,
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
  static const LanaiFrameLowering *getFrameLowering(
      const MachineFunction &MF);
};

namespace Lanai { // Register classes
  extern const TargetRegisterClass GPRRegClass;
  extern const TargetRegisterClass GPR_with_sub_32RegClass;
  extern const TargetRegisterClass CCRRegClass;
} // end namespace Lanai

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

extern const MCRegisterClass LanaiMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i32, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "sub_32", "" };


static const LaneBitmask SubRegIndexLaneMaskTable[] = {
  LaneBitmask::getAll(),
  LaneBitmask(0x00000001), // sub_32
 };



static const TargetRegisterInfo::RegClassInfo RegClassInfos[] = {
  // Mode = 0 (Default)
  { 32, 32, 32, VTLists+0 },    // GPR
  { 32, 32, 32, VTLists+0 },    // GPR_with_sub_32
  { 32, 32, 32, VTLists+0 },    // CCR
};

static const TargetRegisterClass *const NullRegClasses[] = { nullptr };

static const uint32_t GPRSubClassMask[] = {
  0x00000003, 
  0x00000002, // sub_32
};

static const uint32_t GPR_with_sub_32SubClassMask[] = {
  0x00000002, 
};

static const uint32_t CCRSubClassMask[] = {
  0x00000004, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 0,
};

static const TargetRegisterClass *const GPR_with_sub_32Superclasses[] = {
  &Lanai::GPRRegClass,
  nullptr
};


namespace Lanai {   // Register class instances
  extern const TargetRegisterClass GPRRegClass = {
    &LanaiMCRegisterClasses[GPRRegClassID],
    GPRSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GPR_with_sub_32RegClass = {
    &LanaiMCRegisterClasses[GPR_with_sub_32RegClassID],
    GPR_with_sub_32SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPR_with_sub_32Superclasses,
    nullptr
  };

  extern const TargetRegisterClass CCRRegClass = {
    &LanaiMCRegisterClasses[CCRRegClassID],
    CCRSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

} // end namespace Lanai

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &Lanai::GPRRegClass,
    &Lanai::GPR_with_sub_32RegClass,
    &Lanai::CCRRegClass,
  };
} // end anonymous namespace

static const TargetRegisterInfoDesc LanaiRegInfoDesc[] = { // Extra Descriptors
  { 0, false },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
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
unsigned LanaiGenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
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

LaneBitmask LanaiGenRegisterInfo::composeSubRegIndexLaneMaskImpl(unsigned IdxA, LaneBitmask LaneMask) const {
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

LaneBitmask LanaiGenRegisterInfo::reverseComposeSubRegIndexLaneMaskImpl(unsigned IdxA,  LaneBitmask LaneMask) const {
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

const TargetRegisterClass *LanaiGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[3][1] = {
    {	// GPR
      2,	// sub_32 -> GPR_with_sub_32
    },
    {	// GPR_with_sub_32
      2,	// sub_32 -> GPR_with_sub_32
    },
    {	// CCR
      0,	// sub_32
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
const RegClassWeight &LanaiGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 32},  	// GPR
    {1, 7},  	// GPR_with_sub_32
    {0, 0},  	// CCR
  };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned LanaiGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 33 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned LanaiGenRegisterInfo::getNumRegPressureSets() const {
  return 2;
}

// Get the name of this register unit pressure set.
const char *LanaiGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *const PressureNameTable[] = {
    "GPR_with_sub_32",
    "GPR",
  };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned LanaiGenRegisterInfo::
getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const {
  static const uint8_t PressureLimitTable[] = {
    7,  	// 0: GPR_with_sub_32
    32,  	// 1: GPR
  };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
  /* 0 */ 0, 1, -1,
};

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* LanaiGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const uint8_t RCSetStartTable[] = {
    1,0,2,};
  return &RCSetsTable[RCSetStartTable[RC->getID()]];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* LanaiGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 33 && "invalid register unit");
  static const uint8_t RUSetStartTable[] = {
    0,0,0,0,0,2,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
  return &RCSetsTable[RUSetStartTable[RegUnit]];
}

extern const MCRegisterDesc LanaiRegDesc[];
extern const MCPhysReg LanaiRegDiffLists[];
extern const LaneBitmask LanaiLaneMaskLists[];
extern const char LanaiRegStrings[];
extern const char LanaiRegClassStrings[];
extern const MCPhysReg LanaiRegUnitRoots[][2];
extern const uint16_t LanaiSubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits LanaiSubRegIdxRanges[];
extern const uint16_t LanaiRegEncodingTable[];
// Lanai Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair LanaiDwarfFlavour0Dwarf2L[];
extern const unsigned LanaiDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair LanaiEHFlavour0Dwarf2L[];
extern const unsigned LanaiEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair LanaiDwarfFlavour0L2Dwarf[];
extern const unsigned LanaiDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair LanaiEHFlavour0L2Dwarf[];
extern const unsigned LanaiEHFlavour0L2DwarfSize;

LanaiGenRegisterInfo::
LanaiGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour,
      unsigned PC, unsigned HwMode)
  : TargetRegisterInfo(LanaiRegInfoDesc, RegisterClasses, RegisterClasses+3,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable,
             LaneBitmask(0xFFFFFFFE), RegClassInfos, HwMode) {
  InitMCRegisterInfo(LanaiRegDesc, 41, RA, PC,
                     LanaiMCRegisterClasses, 3,
                     LanaiRegUnitRoots,
                     33,
                     LanaiRegDiffLists,
                     LanaiLaneMaskLists,
                     LanaiRegStrings,
                     LanaiRegClassStrings,
                     LanaiSubRegIdxLists,
                     2,
                     LanaiSubRegIdxRanges,
                     LanaiRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(LanaiDwarfFlavour0Dwarf2L, LanaiDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(LanaiEHFlavour0Dwarf2L, LanaiEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(LanaiDwarfFlavour0L2Dwarf, LanaiDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(LanaiEHFlavour0L2Dwarf, LanaiEHFlavour0L2DwarfSize, true);
    break;
  }
}

static const MCPhysReg CSR_SaveList[] = { 0 };
static const uint32_t CSR_RegMask[] = { 0x00000000, 0x00000000, };


ArrayRef<const uint32_t *> LanaiGenRegisterInfo::getRegMasks() const {
  static const uint32_t *const Masks[] = {
    CSR_RegMask,
  };
  return makeArrayRef(Masks);
}

ArrayRef<const char *> LanaiGenRegisterInfo::getRegMaskNames() const {
  static const char *const Names[] = {
    "CSR",
  };
  return makeArrayRef(Names);
}

const LanaiFrameLowering *
LanaiGenRegisterInfo::getFrameLowering(const MachineFunction &MF) {
  return static_cast<const LanaiFrameLowering *>(
      MF.getSubtarget().getFrameLowering());
}

} // end namespace llvm

#endif // GET_REGINFO_TARGET_DESC


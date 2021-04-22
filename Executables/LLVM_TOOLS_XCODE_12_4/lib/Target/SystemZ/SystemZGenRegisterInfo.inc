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
extern const MCRegisterClass SystemZMCRegisterClasses[];

namespace SystemZ {
enum {
  NoRegister,
  CC = 1,
  FPC = 2,
  A0 = 3,
  A1 = 4,
  A2 = 5,
  A3 = 6,
  A4 = 7,
  A5 = 8,
  A6 = 9,
  A7 = 10,
  A8 = 11,
  A9 = 12,
  A10 = 13,
  A11 = 14,
  A12 = 15,
  A13 = 16,
  A14 = 17,
  A15 = 18,
  C0 = 19,
  C1 = 20,
  C2 = 21,
  C3 = 22,
  C4 = 23,
  C5 = 24,
  C6 = 25,
  C7 = 26,
  C8 = 27,
  C9 = 28,
  C10 = 29,
  C11 = 30,
  C12 = 31,
  C13 = 32,
  C14 = 33,
  C15 = 34,
  V0 = 35,
  V1 = 36,
  V2 = 37,
  V3 = 38,
  V4 = 39,
  V5 = 40,
  V6 = 41,
  V7 = 42,
  V8 = 43,
  V9 = 44,
  V10 = 45,
  V11 = 46,
  V12 = 47,
  V13 = 48,
  V14 = 49,
  V15 = 50,
  V16 = 51,
  V17 = 52,
  V18 = 53,
  V19 = 54,
  V20 = 55,
  V21 = 56,
  V22 = 57,
  V23 = 58,
  V24 = 59,
  V25 = 60,
  V26 = 61,
  V27 = 62,
  V28 = 63,
  V29 = 64,
  V30 = 65,
  V31 = 66,
  F0D = 67,
  F1D = 68,
  F2D = 69,
  F3D = 70,
  F4D = 71,
  F5D = 72,
  F6D = 73,
  F7D = 74,
  F8D = 75,
  F9D = 76,
  F10D = 77,
  F11D = 78,
  F12D = 79,
  F13D = 80,
  F14D = 81,
  F15D = 82,
  F16D = 83,
  F17D = 84,
  F18D = 85,
  F19D = 86,
  F20D = 87,
  F21D = 88,
  F22D = 89,
  F23D = 90,
  F24D = 91,
  F25D = 92,
  F26D = 93,
  F27D = 94,
  F28D = 95,
  F29D = 96,
  F30D = 97,
  F31D = 98,
  F0Q = 99,
  F1Q = 100,
  F4Q = 101,
  F5Q = 102,
  F8Q = 103,
  F9Q = 104,
  F12Q = 105,
  F13Q = 106,
  F0S = 107,
  F1S = 108,
  F2S = 109,
  F3S = 110,
  F4S = 111,
  F5S = 112,
  F6S = 113,
  F7S = 114,
  F8S = 115,
  F9S = 116,
  F10S = 117,
  F11S = 118,
  F12S = 119,
  F13S = 120,
  F14S = 121,
  F15S = 122,
  F16S = 123,
  F17S = 124,
  F18S = 125,
  F19S = 126,
  F20S = 127,
  F21S = 128,
  F22S = 129,
  F23S = 130,
  F24S = 131,
  F25S = 132,
  F26S = 133,
  F27S = 134,
  F28S = 135,
  F29S = 136,
  F30S = 137,
  F31S = 138,
  R0D = 139,
  R1D = 140,
  R2D = 141,
  R3D = 142,
  R4D = 143,
  R5D = 144,
  R6D = 145,
  R7D = 146,
  R8D = 147,
  R9D = 148,
  R10D = 149,
  R11D = 150,
  R12D = 151,
  R13D = 152,
  R14D = 153,
  R15D = 154,
  R0H = 155,
  R1H = 156,
  R2H = 157,
  R3H = 158,
  R4H = 159,
  R5H = 160,
  R6H = 161,
  R7H = 162,
  R8H = 163,
  R9H = 164,
  R10H = 165,
  R11H = 166,
  R12H = 167,
  R13H = 168,
  R14H = 169,
  R15H = 170,
  R0L = 171,
  R1L = 172,
  R2L = 173,
  R3L = 174,
  R4L = 175,
  R5L = 176,
  R6L = 177,
  R7L = 178,
  R8L = 179,
  R9L = 180,
  R10L = 181,
  R11L = 182,
  R12L = 183,
  R13L = 184,
  R14L = 185,
  R15L = 186,
  R0Q = 187,
  R2Q = 188,
  R4Q = 189,
  R6Q = 190,
  R8Q = 191,
  R10Q = 192,
  R12Q = 193,
  R14Q = 194,
  NUM_TARGET_REGS 	// 195
};
} // end namespace SystemZ

// Register classes

namespace SystemZ {
enum {
  GRX32BitRegClassID = 0,
  VR32BitRegClassID = 1,
  AR32BitRegClassID = 2,
  FP32BitRegClassID = 3,
  GR32BitRegClassID = 4,
  GRH32BitRegClassID = 5,
  ADDR32BitRegClassID = 6,
  CCRRegClassID = 7,
  FPCRegsRegClassID = 8,
  AnyRegBitRegClassID = 9,
  AnyRegBit_with_subreg_h32_in_FP32BitRegClassID = 10,
  VR64BitRegClassID = 11,
  AnyRegBit_with_subreg_h64RegClassID = 12,
  CR64BitRegClassID = 13,
  FP64BitRegClassID = 14,
  GR64BitRegClassID = 15,
  ADDR64BitRegClassID = 16,
  VR128BitRegClassID = 17,
  VF128BitRegClassID = 18,
  FP128BitRegClassID = 19,
  GR128BitRegClassID = 20,
  ADDR128BitRegClassID = 21,

  };
} // end namespace SystemZ


// Subregister indices

namespace SystemZ {
enum {
  NoSubRegister,
  subreg_h32,	// 1
  subreg_h64,	// 2
  subreg_hh32,	// 3
  subreg_hl32,	// 4
  subreg_l32,	// 5
  subreg_l64,	// 6
  NUM_TARGET_SUBREGS
};
} // end namespace SystemZ

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

extern const MCPhysReg SystemZRegDiffLists[] = {
  /* 0 */ 64854, 1, 1, 1, 0,
  /* 5 */ 65324, 1, 0,
  /* 8 */ 65471, 2, 0,
  /* 11 */ 65473, 2, 0,
  /* 14 */ 65475, 2, 0,
  /* 17 */ 65477, 2, 0,
  /* 20 */ 32, 40, 0,
  /* 23 */ 65506, 40, 65494, 40, 0,
  /* 28 */ 65508, 40, 65494, 40, 0,
  /* 33 */ 65510, 40, 65494, 40, 0,
  /* 38 */ 65512, 40, 65494, 40, 0,
  /* 43 */ 65504, 40, 0,
  /* 46 */ 65520, 40, 0,
  /* 49 */ 65504, 41, 0,
  /* 52 */ 65520, 41, 0,
  /* 55 */ 65504, 42, 0,
  /* 58 */ 65520, 42, 0,
  /* 61 */ 65504, 43, 0,
  /* 64 */ 65520, 43, 0,
  /* 67 */ 65504, 44, 0,
  /* 70 */ 65520, 44, 0,
  /* 73 */ 65504, 45, 0,
  /* 76 */ 65520, 45, 0,
  /* 79 */ 65504, 46, 0,
  /* 82 */ 65520, 46, 0,
  /* 85 */ 65504, 47, 0,
  /* 88 */ 65520, 47, 0,
  /* 91 */ 65504, 48, 0,
  /* 94 */ 65520, 48, 0,
  /* 97 */ 65496, 65504, 56, 0,
  /* 101 */ 65496, 65504, 58, 0,
  /* 105 */ 65496, 65504, 60, 0,
  /* 109 */ 65496, 65504, 62, 0,
  /* 113 */ 65496, 65504, 64, 0,
  /* 117 */ 65260, 0,
  /* 119 */ 65293, 0,
  /* 121 */ 65463, 0,
  /* 123 */ 65503, 0,
  /* 125 */ 65496, 65504, 0,
  /* 128 */ 65489, 32, 65520, 65519, 32, 65520, 0,
  /* 135 */ 65490, 32, 65520, 65519, 32, 65520, 0,
  /* 142 */ 65491, 32, 65520, 65519, 32, 65520, 0,
  /* 149 */ 65492, 32, 65520, 65519, 32, 65520, 0,
  /* 156 */ 65493, 32, 65520, 65519, 32, 65520, 0,
  /* 163 */ 65494, 32, 65520, 65519, 32, 65520, 0,
  /* 170 */ 65495, 32, 65520, 65519, 32, 65520, 0,
  /* 177 */ 65496, 32, 65520, 65519, 32, 65520, 0,
  /* 184 */ 65535, 0,
};

extern const LaneBitmask SystemZLaneMaskLists[] = {
  /* 0 */ LaneBitmask(0x00000000), LaneBitmask::getAll(),
  /* 2 */ LaneBitmask(0x00000002), LaneBitmask(0x00000001), LaneBitmask::getAll(),
  /* 5 */ LaneBitmask(0x00000004), LaneBitmask(0x00000002), LaneBitmask(0x00000008), LaneBitmask(0x00000001), LaneBitmask::getAll(),
};

extern const uint16_t SystemZSubRegIdxLists[] = {
  /* 0 */ 2, 1, 0,
  /* 3 */ 5, 1, 0,
  /* 6 */ 6, 1, 2, 3, 0,
  /* 11 */ 6, 5, 1, 2, 4, 3, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits SystemZSubRegIdxRanges[] = {
  { 65535, 65535 },
  { 32, 32 },	// subreg_h32
  { 64, 64 },	// subreg_h64
  { 96, 32 },	// subreg_hh32
  { 64, 32 },	// subreg_hl32
  { 0, 32 },	// subreg_l32
  { 0, 64 },	// subreg_l64
};

extern const char SystemZRegStrings[] = {
  /* 0 */ 'A', '1', '0', 0,
  /* 4 */ 'C', '1', '0', 0,
  /* 8 */ 'V', '1', '0', 0,
  /* 12 */ 'V', '2', '0', 0,
  /* 16 */ 'V', '3', '0', 0,
  /* 20 */ 'A', '0', 0,
  /* 23 */ 'C', '0', 0,
  /* 26 */ 'V', '0', 0,
  /* 29 */ 'A', '1', '1', 0,
  /* 33 */ 'C', '1', '1', 0,
  /* 37 */ 'V', '1', '1', 0,
  /* 41 */ 'V', '2', '1', 0,
  /* 45 */ 'V', '3', '1', 0,
  /* 49 */ 'A', '1', 0,
  /* 52 */ 'C', '1', 0,
  /* 55 */ 'V', '1', 0,
  /* 58 */ 'A', '1', '2', 0,
  /* 62 */ 'C', '1', '2', 0,
  /* 66 */ 'V', '1', '2', 0,
  /* 70 */ 'V', '2', '2', 0,
  /* 74 */ 'A', '2', 0,
  /* 77 */ 'C', '2', 0,
  /* 80 */ 'V', '2', 0,
  /* 83 */ 'A', '1', '3', 0,
  /* 87 */ 'C', '1', '3', 0,
  /* 91 */ 'V', '1', '3', 0,
  /* 95 */ 'V', '2', '3', 0,
  /* 99 */ 'A', '3', 0,
  /* 102 */ 'C', '3', 0,
  /* 105 */ 'V', '3', 0,
  /* 108 */ 'A', '1', '4', 0,
  /* 112 */ 'C', '1', '4', 0,
  /* 116 */ 'V', '1', '4', 0,
  /* 120 */ 'V', '2', '4', 0,
  /* 124 */ 'A', '4', 0,
  /* 127 */ 'C', '4', 0,
  /* 130 */ 'V', '4', 0,
  /* 133 */ 'A', '1', '5', 0,
  /* 137 */ 'C', '1', '5', 0,
  /* 141 */ 'V', '1', '5', 0,
  /* 145 */ 'V', '2', '5', 0,
  /* 149 */ 'A', '5', 0,
  /* 152 */ 'C', '5', 0,
  /* 155 */ 'V', '5', 0,
  /* 158 */ 'V', '1', '6', 0,
  /* 162 */ 'V', '2', '6', 0,
  /* 166 */ 'A', '6', 0,
  /* 169 */ 'C', '6', 0,
  /* 172 */ 'V', '6', 0,
  /* 175 */ 'V', '1', '7', 0,
  /* 179 */ 'V', '2', '7', 0,
  /* 183 */ 'A', '7', 0,
  /* 186 */ 'C', '7', 0,
  /* 189 */ 'V', '7', 0,
  /* 192 */ 'V', '1', '8', 0,
  /* 196 */ 'V', '2', '8', 0,
  /* 200 */ 'A', '8', 0,
  /* 203 */ 'C', '8', 0,
  /* 206 */ 'V', '8', 0,
  /* 209 */ 'V', '1', '9', 0,
  /* 213 */ 'V', '2', '9', 0,
  /* 217 */ 'A', '9', 0,
  /* 220 */ 'C', '9', 0,
  /* 223 */ 'V', '9', 0,
  /* 226 */ 'C', 'C', 0,
  /* 229 */ 'F', 'P', 'C', 0,
  /* 233 */ 'F', '1', '0', 'D', 0,
  /* 238 */ 'R', '1', '0', 'D', 0,
  /* 243 */ 'F', '2', '0', 'D', 0,
  /* 248 */ 'F', '3', '0', 'D', 0,
  /* 253 */ 'F', '0', 'D', 0,
  /* 257 */ 'R', '0', 'D', 0,
  /* 261 */ 'F', '1', '1', 'D', 0,
  /* 266 */ 'R', '1', '1', 'D', 0,
  /* 271 */ 'F', '2', '1', 'D', 0,
  /* 276 */ 'F', '3', '1', 'D', 0,
  /* 281 */ 'F', '1', 'D', 0,
  /* 285 */ 'R', '1', 'D', 0,
  /* 289 */ 'F', '1', '2', 'D', 0,
  /* 294 */ 'R', '1', '2', 'D', 0,
  /* 299 */ 'F', '2', '2', 'D', 0,
  /* 304 */ 'F', '2', 'D', 0,
  /* 308 */ 'R', '2', 'D', 0,
  /* 312 */ 'F', '1', '3', 'D', 0,
  /* 317 */ 'R', '1', '3', 'D', 0,
  /* 322 */ 'F', '2', '3', 'D', 0,
  /* 327 */ 'F', '3', 'D', 0,
  /* 331 */ 'R', '3', 'D', 0,
  /* 335 */ 'F', '1', '4', 'D', 0,
  /* 340 */ 'R', '1', '4', 'D', 0,
  /* 345 */ 'F', '2', '4', 'D', 0,
  /* 350 */ 'F', '4', 'D', 0,
  /* 354 */ 'R', '4', 'D', 0,
  /* 358 */ 'F', '1', '5', 'D', 0,
  /* 363 */ 'R', '1', '5', 'D', 0,
  /* 368 */ 'F', '2', '5', 'D', 0,
  /* 373 */ 'F', '5', 'D', 0,
  /* 377 */ 'R', '5', 'D', 0,
  /* 381 */ 'F', '1', '6', 'D', 0,
  /* 386 */ 'F', '2', '6', 'D', 0,
  /* 391 */ 'F', '6', 'D', 0,
  /* 395 */ 'R', '6', 'D', 0,
  /* 399 */ 'F', '1', '7', 'D', 0,
  /* 404 */ 'F', '2', '7', 'D', 0,
  /* 409 */ 'F', '7', 'D', 0,
  /* 413 */ 'R', '7', 'D', 0,
  /* 417 */ 'F', '1', '8', 'D', 0,
  /* 422 */ 'F', '2', '8', 'D', 0,
  /* 427 */ 'F', '8', 'D', 0,
  /* 431 */ 'R', '8', 'D', 0,
  /* 435 */ 'F', '1', '9', 'D', 0,
  /* 440 */ 'F', '2', '9', 'D', 0,
  /* 445 */ 'F', '9', 'D', 0,
  /* 449 */ 'R', '9', 'D', 0,
  /* 453 */ 'R', '1', '0', 'H', 0,
  /* 458 */ 'R', '0', 'H', 0,
  /* 462 */ 'R', '1', '1', 'H', 0,
  /* 467 */ 'R', '1', 'H', 0,
  /* 471 */ 'R', '1', '2', 'H', 0,
  /* 476 */ 'R', '2', 'H', 0,
  /* 480 */ 'R', '1', '3', 'H', 0,
  /* 485 */ 'R', '3', 'H', 0,
  /* 489 */ 'R', '1', '4', 'H', 0,
  /* 494 */ 'R', '4', 'H', 0,
  /* 498 */ 'R', '1', '5', 'H', 0,
  /* 503 */ 'R', '5', 'H', 0,
  /* 507 */ 'R', '6', 'H', 0,
  /* 511 */ 'R', '7', 'H', 0,
  /* 515 */ 'R', '8', 'H', 0,
  /* 519 */ 'R', '9', 'H', 0,
  /* 523 */ 'R', '1', '0', 'L', 0,
  /* 528 */ 'R', '0', 'L', 0,
  /* 532 */ 'R', '1', '1', 'L', 0,
  /* 537 */ 'R', '1', 'L', 0,
  /* 541 */ 'R', '1', '2', 'L', 0,
  /* 546 */ 'R', '2', 'L', 0,
  /* 550 */ 'R', '1', '3', 'L', 0,
  /* 555 */ 'R', '3', 'L', 0,
  /* 559 */ 'R', '1', '4', 'L', 0,
  /* 564 */ 'R', '4', 'L', 0,
  /* 568 */ 'R', '1', '5', 'L', 0,
  /* 573 */ 'R', '5', 'L', 0,
  /* 577 */ 'R', '6', 'L', 0,
  /* 581 */ 'R', '7', 'L', 0,
  /* 585 */ 'R', '8', 'L', 0,
  /* 589 */ 'R', '9', 'L', 0,
  /* 593 */ 'R', '1', '0', 'Q', 0,
  /* 598 */ 'F', '0', 'Q', 0,
  /* 602 */ 'R', '0', 'Q', 0,
  /* 606 */ 'F', '1', 'Q', 0,
  /* 610 */ 'F', '1', '2', 'Q', 0,
  /* 615 */ 'R', '1', '2', 'Q', 0,
  /* 620 */ 'R', '2', 'Q', 0,
  /* 624 */ 'F', '1', '3', 'Q', 0,
  /* 629 */ 'R', '1', '4', 'Q', 0,
  /* 634 */ 'F', '4', 'Q', 0,
  /* 638 */ 'R', '4', 'Q', 0,
  /* 642 */ 'F', '5', 'Q', 0,
  /* 646 */ 'R', '6', 'Q', 0,
  /* 650 */ 'F', '8', 'Q', 0,
  /* 654 */ 'R', '8', 'Q', 0,
  /* 658 */ 'F', '9', 'Q', 0,
  /* 662 */ 'F', '1', '0', 'S', 0,
  /* 667 */ 'F', '2', '0', 'S', 0,
  /* 672 */ 'F', '3', '0', 'S', 0,
  /* 677 */ 'F', '0', 'S', 0,
  /* 681 */ 'F', '1', '1', 'S', 0,
  /* 686 */ 'F', '2', '1', 'S', 0,
  /* 691 */ 'F', '3', '1', 'S', 0,
  /* 696 */ 'F', '1', 'S', 0,
  /* 700 */ 'F', '1', '2', 'S', 0,
  /* 705 */ 'F', '2', '2', 'S', 0,
  /* 710 */ 'F', '2', 'S', 0,
  /* 714 */ 'F', '1', '3', 'S', 0,
  /* 719 */ 'F', '2', '3', 'S', 0,
  /* 724 */ 'F', '3', 'S', 0,
  /* 728 */ 'F', '1', '4', 'S', 0,
  /* 733 */ 'F', '2', '4', 'S', 0,
  /* 738 */ 'F', '4', 'S', 0,
  /* 742 */ 'F', '1', '5', 'S', 0,
  /* 747 */ 'F', '2', '5', 'S', 0,
  /* 752 */ 'F', '5', 'S', 0,
  /* 756 */ 'F', '1', '6', 'S', 0,
  /* 761 */ 'F', '2', '6', 'S', 0,
  /* 766 */ 'F', '6', 'S', 0,
  /* 770 */ 'F', '1', '7', 'S', 0,
  /* 775 */ 'F', '2', '7', 'S', 0,
  /* 780 */ 'F', '7', 'S', 0,
  /* 784 */ 'F', '1', '8', 'S', 0,
  /* 789 */ 'F', '2', '8', 'S', 0,
  /* 794 */ 'F', '8', 'S', 0,
  /* 798 */ 'F', '1', '9', 'S', 0,
  /* 803 */ 'F', '2', '9', 'S', 0,
  /* 808 */ 'F', '9', 'S', 0,
};

extern const MCRegisterDesc SystemZRegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0, 0 },
  { 226, 4, 4, 2, 2945, 0 },
  { 229, 4, 4, 2, 2945, 0 },
  { 20, 4, 4, 2, 2945, 0 },
  { 49, 4, 4, 2, 2945, 0 },
  { 74, 4, 4, 2, 2945, 0 },
  { 99, 4, 4, 2, 2945, 0 },
  { 124, 4, 4, 2, 2945, 0 },
  { 149, 4, 4, 2, 2945, 0 },
  { 166, 4, 4, 2, 2945, 0 },
  { 183, 4, 4, 2, 2945, 0 },
  { 200, 4, 4, 2, 2945, 0 },
  { 217, 4, 4, 2, 2945, 0 },
  { 0, 4, 4, 2, 2945, 0 },
  { 29, 4, 4, 2, 2945, 0 },
  { 58, 4, 4, 2, 2945, 0 },
  { 83, 4, 4, 2, 2945, 0 },
  { 108, 4, 4, 2, 2945, 0 },
  { 133, 4, 4, 2, 2945, 0 },
  { 23, 4, 4, 2, 2945, 0 },
  { 52, 4, 4, 2, 2945, 0 },
  { 77, 4, 4, 2, 2945, 0 },
  { 102, 4, 4, 2, 2945, 0 },
  { 127, 4, 4, 2, 2945, 0 },
  { 152, 4, 4, 2, 2945, 0 },
  { 169, 4, 4, 2, 2945, 0 },
  { 186, 4, 4, 2, 2945, 0 },
  { 203, 4, 4, 2, 2945, 0 },
  { 220, 4, 4, 2, 2945, 0 },
  { 4, 4, 4, 2, 2945, 0 },
  { 33, 4, 4, 2, 2945, 0 },
  { 62, 4, 4, 2, 2945, 0 },
  { 87, 4, 4, 2, 2945, 0 },
  { 112, 4, 4, 2, 2945, 0 },
  { 137, 4, 4, 2, 2945, 0 },
  { 26, 20, 4, 0, 2945, 3 },
  { 55, 20, 4, 0, 2945, 3 },
  { 80, 20, 4, 0, 2945, 3 },
  { 105, 20, 4, 0, 2945, 3 },
  { 130, 20, 4, 0, 2945, 3 },
  { 155, 20, 4, 0, 2945, 3 },
  { 172, 20, 4, 0, 2945, 3 },
  { 189, 20, 4, 0, 2945, 3 },
  { 206, 20, 4, 0, 2945, 3 },
  { 223, 20, 4, 0, 2945, 3 },
  { 8, 20, 4, 0, 2945, 3 },
  { 37, 20, 4, 0, 2945, 3 },
  { 66, 20, 4, 0, 2945, 3 },
  { 91, 20, 4, 0, 2945, 3 },
  { 116, 20, 4, 0, 2945, 3 },
  { 141, 20, 4, 0, 2945, 3 },
  { 158, 20, 4, 0, 2945, 3 },
  { 175, 20, 4, 0, 2945, 3 },
  { 192, 20, 4, 0, 2945, 3 },
  { 209, 20, 4, 0, 2945, 3 },
  { 12, 20, 4, 0, 2945, 3 },
  { 41, 20, 4, 0, 2945, 3 },
  { 70, 20, 4, 0, 2945, 3 },
  { 95, 20, 4, 0, 2945, 3 },
  { 120, 20, 4, 0, 2945, 3 },
  { 145, 20, 4, 0, 2945, 3 },
  { 162, 20, 4, 0, 2945, 3 },
  { 179, 20, 4, 0, 2945, 3 },
  { 196, 20, 4, 0, 2945, 3 },
  { 213, 20, 4, 0, 2945, 3 },
  { 16, 20, 4, 0, 2945, 3 },
  { 45, 20, 4, 0, 2945, 3 },
  { 253, 21, 114, 1, 1969, 3 },
  { 281, 21, 114, 1, 1969, 3 },
  { 304, 21, 110, 1, 1969, 3 },
  { 327, 21, 110, 1, 1969, 3 },
  { 350, 21, 110, 1, 1969, 3 },
  { 373, 21, 110, 1, 1969, 3 },
  { 391, 21, 106, 1, 1969, 3 },
  { 409, 21, 106, 1, 1969, 3 },
  { 427, 21, 106, 1, 1969, 3 },
  { 445, 21, 106, 1, 1969, 3 },
  { 233, 21, 102, 1, 1969, 3 },
  { 261, 21, 102, 1, 1969, 3 },
  { 289, 21, 102, 1, 1969, 3 },
  { 312, 21, 102, 1, 1969, 3 },
  { 335, 21, 98, 1, 1969, 3 },
  { 358, 21, 98, 1, 1969, 3 },
  { 381, 21, 126, 1, 1969, 3 },
  { 399, 21, 126, 1, 1969, 3 },
  { 417, 21, 126, 1, 1969, 3 },
  { 435, 21, 126, 1, 1969, 3 },
  { 243, 21, 126, 1, 1969, 3 },
  { 271, 21, 126, 1, 1969, 3 },
  { 299, 21, 126, 1, 1969, 3 },
  { 322, 21, 126, 1, 1969, 3 },
  { 345, 21, 126, 1, 1969, 3 },
  { 368, 21, 126, 1, 1969, 3 },
  { 386, 21, 126, 1, 1969, 3 },
  { 404, 21, 126, 1, 1969, 3 },
  { 422, 21, 126, 1, 1969, 3 },
  { 440, 21, 126, 1, 1969, 3 },
  { 248, 21, 126, 1, 1969, 3 },
  { 276, 21, 126, 1, 1969, 3 },
  { 598, 23, 4, 6, 129, 2 },
  { 606, 23, 4, 6, 129, 2 },
  { 634, 28, 4, 6, 177, 2 },
  { 642, 28, 4, 6, 177, 2 },
  { 650, 33, 4, 6, 225, 2 },
  { 658, 33, 4, 6, 225, 2 },
  { 610, 38, 4, 6, 273, 2 },
  { 624, 38, 4, 6, 273, 2 },
  { 677, 4, 113, 2, 1937, 0 },
  { 696, 4, 113, 2, 1937, 0 },
  { 710, 4, 109, 2, 1937, 0 },
  { 724, 4, 109, 2, 1937, 0 },
  { 738, 4, 109, 2, 1937, 0 },
  { 752, 4, 109, 2, 1937, 0 },
  { 766, 4, 105, 2, 1937, 0 },
  { 780, 4, 105, 2, 1937, 0 },
  { 794, 4, 105, 2, 1937, 0 },
  { 808, 4, 105, 2, 1937, 0 },
  { 662, 4, 101, 2, 1937, 0 },
  { 681, 4, 101, 2, 1937, 0 },
  { 700, 4, 101, 2, 1937, 0 },
  { 714, 4, 101, 2, 1937, 0 },
  { 728, 4, 97, 2, 1937, 0 },
  { 742, 4, 97, 2, 1937, 0 },
  { 756, 4, 125, 2, 1937, 0 },
  { 770, 4, 125, 2, 1937, 0 },
  { 784, 4, 125, 2, 1937, 0 },
  { 798, 4, 125, 2, 1937, 0 },
  { 667, 4, 125, 2, 1937, 0 },
  { 686, 4, 125, 2, 1937, 0 },
  { 705, 4, 125, 2, 1937, 0 },
  { 719, 4, 125, 2, 1937, 0 },
  { 733, 4, 125, 2, 1937, 0 },
  { 747, 4, 125, 2, 1937, 0 },
  { 761, 4, 125, 2, 1937, 0 },
  { 775, 4, 125, 2, 1937, 0 },
  { 789, 4, 125, 2, 1937, 0 },
  { 803, 4, 125, 2, 1937, 0 },
  { 672, 4, 125, 2, 1937, 0 },
  { 691, 4, 125, 2, 1937, 0 },
  { 257, 132, 92, 3, 82, 7 },
  { 285, 132, 86, 3, 82, 7 },
  { 308, 132, 86, 3, 82, 7 },
  { 331, 132, 80, 3, 82, 7 },
  { 354, 132, 80, 3, 82, 7 },
  { 377, 132, 74, 3, 82, 7 },
  { 395, 132, 74, 3, 82, 7 },
  { 413, 132, 68, 3, 82, 7 },
  { 431, 132, 68, 3, 82, 7 },
  { 449, 132, 62, 3, 82, 7 },
  { 238, 132, 62, 3, 82, 7 },
  { 266, 132, 56, 3, 82, 7 },
  { 294, 132, 56, 3, 82, 7 },
  { 317, 132, 50, 3, 82, 7 },
  { 340, 132, 50, 3, 82, 7 },
  { 363, 132, 21, 3, 82, 7 },
  { 458, 4, 94, 2, 1906, 0 },
  { 467, 4, 88, 2, 1906, 0 },
  { 476, 4, 88, 2, 1906, 0 },
  { 485, 4, 82, 2, 1906, 0 },
  { 494, 4, 82, 2, 1906, 0 },
  { 503, 4, 76, 2, 1906, 0 },
  { 507, 4, 76, 2, 1906, 0 },
  { 511, 4, 70, 2, 1906, 0 },
  { 515, 4, 70, 2, 1906, 0 },
  { 519, 4, 64, 2, 1906, 0 },
  { 453, 4, 64, 2, 1906, 0 },
  { 462, 4, 58, 2, 1906, 0 },
  { 471, 4, 58, 2, 1906, 0 },
  { 480, 4, 52, 2, 1906, 0 },
  { 489, 4, 52, 2, 1906, 0 },
  { 498, 4, 46, 2, 1906, 0 },
  { 528, 4, 91, 2, 1874, 0 },
  { 537, 4, 85, 2, 1874, 0 },
  { 546, 4, 85, 2, 1874, 0 },
  { 555, 4, 79, 2, 1874, 0 },
  { 564, 4, 79, 2, 1874, 0 },
  { 573, 4, 73, 2, 1874, 0 },
  { 577, 4, 73, 2, 1874, 0 },
  { 581, 4, 67, 2, 1874, 0 },
  { 585, 4, 67, 2, 1874, 0 },
  { 589, 4, 61, 2, 1874, 0 },
  { 523, 4, 61, 2, 1874, 0 },
  { 532, 4, 55, 2, 1874, 0 },
  { 541, 4, 55, 2, 1874, 0 },
  { 550, 4, 49, 2, 1874, 0 },
  { 559, 4, 49, 2, 1874, 0 },
  { 568, 4, 43, 2, 1874, 0 },
  { 602, 128, 4, 11, 4, 5 },
  { 620, 135, 4, 11, 4, 5 },
  { 638, 142, 4, 11, 4, 5 },
  { 646, 149, 4, 11, 4, 5 },
  { 654, 156, 4, 11, 4, 5 },
  { 593, 163, 4, 11, 4, 5 },
  { 615, 170, 4, 11, 4, 5 },
  { 629, 177, 4, 11, 4, 5 },
};

extern const MCPhysReg SystemZRegUnitRoots[][2] = {
  { SystemZ::CC },
  { SystemZ::FPC },
  { SystemZ::A0 },
  { SystemZ::A1 },
  { SystemZ::A2 },
  { SystemZ::A3 },
  { SystemZ::A4 },
  { SystemZ::A5 },
  { SystemZ::A6 },
  { SystemZ::A7 },
  { SystemZ::A8 },
  { SystemZ::A9 },
  { SystemZ::A10 },
  { SystemZ::A11 },
  { SystemZ::A12 },
  { SystemZ::A13 },
  { SystemZ::A14 },
  { SystemZ::A15 },
  { SystemZ::C0 },
  { SystemZ::C1 },
  { SystemZ::C2 },
  { SystemZ::C3 },
  { SystemZ::C4 },
  { SystemZ::C5 },
  { SystemZ::C6 },
  { SystemZ::C7 },
  { SystemZ::C8 },
  { SystemZ::C9 },
  { SystemZ::C10 },
  { SystemZ::C11 },
  { SystemZ::C12 },
  { SystemZ::C13 },
  { SystemZ::C14 },
  { SystemZ::C15 },
  { SystemZ::F0S },
  { SystemZ::F1S },
  { SystemZ::F2S },
  { SystemZ::F3S },
  { SystemZ::F4S },
  { SystemZ::F5S },
  { SystemZ::F6S },
  { SystemZ::F7S },
  { SystemZ::F8S },
  { SystemZ::F9S },
  { SystemZ::F10S },
  { SystemZ::F11S },
  { SystemZ::F12S },
  { SystemZ::F13S },
  { SystemZ::F14S },
  { SystemZ::F15S },
  { SystemZ::F16S },
  { SystemZ::F17S },
  { SystemZ::F18S },
  { SystemZ::F19S },
  { SystemZ::F20S },
  { SystemZ::F21S },
  { SystemZ::F22S },
  { SystemZ::F23S },
  { SystemZ::F24S },
  { SystemZ::F25S },
  { SystemZ::F26S },
  { SystemZ::F27S },
  { SystemZ::F28S },
  { SystemZ::F29S },
  { SystemZ::F30S },
  { SystemZ::F31S },
  { SystemZ::R0L },
  { SystemZ::R0H },
  { SystemZ::R1L },
  { SystemZ::R1H },
  { SystemZ::R2L },
  { SystemZ::R2H },
  { SystemZ::R3L },
  { SystemZ::R3H },
  { SystemZ::R4L },
  { SystemZ::R4H },
  { SystemZ::R5L },
  { SystemZ::R5H },
  { SystemZ::R6L },
  { SystemZ::R6H },
  { SystemZ::R7L },
  { SystemZ::R7H },
  { SystemZ::R8L },
  { SystemZ::R8H },
  { SystemZ::R9L },
  { SystemZ::R9H },
  { SystemZ::R10L },
  { SystemZ::R10H },
  { SystemZ::R11L },
  { SystemZ::R11H },
  { SystemZ::R12L },
  { SystemZ::R12H },
  { SystemZ::R13L },
  { SystemZ::R13H },
  { SystemZ::R14L },
  { SystemZ::R14H },
  { SystemZ::R15L },
  { SystemZ::R15H },
};

namespace {     // Register classes...
  // GRX32Bit Register Class...
  const MCPhysReg GRX32Bit[] = {
    SystemZ::R0L, SystemZ::R1L, SystemZ::R2L, SystemZ::R3L, SystemZ::R4L, SystemZ::R5L, SystemZ::R0H, SystemZ::R1H, SystemZ::R2H, SystemZ::R3H, SystemZ::R4H, SystemZ::R5H, SystemZ::R15L, SystemZ::R15H, SystemZ::R14L, SystemZ::R14H, SystemZ::R13L, SystemZ::R13H, SystemZ::R12L, SystemZ::R12H, SystemZ::R11L, SystemZ::R11H, SystemZ::R10L, SystemZ::R10H, SystemZ::R9L, SystemZ::R9H, SystemZ::R8L, SystemZ::R8H, SystemZ::R7L, SystemZ::R7H, SystemZ::R6L, SystemZ::R6H, 
  };

  // GRX32Bit Bit set.
  const uint8_t GRX32BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // VR32Bit Register Class...
  const MCPhysReg VR32Bit[] = {
    SystemZ::F0S, SystemZ::F1S, SystemZ::F2S, SystemZ::F3S, SystemZ::F4S, SystemZ::F5S, SystemZ::F6S, SystemZ::F7S, SystemZ::F16S, SystemZ::F17S, SystemZ::F18S, SystemZ::F19S, SystemZ::F20S, SystemZ::F21S, SystemZ::F22S, SystemZ::F23S, SystemZ::F24S, SystemZ::F25S, SystemZ::F26S, SystemZ::F27S, SystemZ::F28S, SystemZ::F29S, SystemZ::F30S, SystemZ::F31S, SystemZ::F8S, SystemZ::F9S, SystemZ::F10S, SystemZ::F11S, SystemZ::F12S, SystemZ::F13S, SystemZ::F14S, SystemZ::F15S, 
  };

  // VR32Bit Bit set.
  const uint8_t VR32BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // AR32Bit Register Class...
  const MCPhysReg AR32Bit[] = {
    SystemZ::A0, SystemZ::A1, SystemZ::A2, SystemZ::A3, SystemZ::A4, SystemZ::A5, SystemZ::A6, SystemZ::A7, SystemZ::A8, SystemZ::A9, SystemZ::A10, SystemZ::A11, SystemZ::A12, SystemZ::A13, SystemZ::A14, SystemZ::A15, 
  };

  // AR32Bit Bit set.
  const uint8_t AR32BitBits[] = {
    0xf8, 0xff, 0x07, 
  };

  // FP32Bit Register Class...
  const MCPhysReg FP32Bit[] = {
    SystemZ::F0S, SystemZ::F1S, SystemZ::F2S, SystemZ::F3S, SystemZ::F4S, SystemZ::F5S, SystemZ::F6S, SystemZ::F7S, SystemZ::F8S, SystemZ::F9S, SystemZ::F10S, SystemZ::F11S, SystemZ::F12S, SystemZ::F13S, SystemZ::F14S, SystemZ::F15S, 
  };

  // FP32Bit Bit set.
  const uint8_t FP32BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x07, 
  };

  // GR32Bit Register Class...
  const MCPhysReg GR32Bit[] = {
    SystemZ::R0L, SystemZ::R1L, SystemZ::R2L, SystemZ::R3L, SystemZ::R4L, SystemZ::R5L, SystemZ::R15L, SystemZ::R14L, SystemZ::R13L, SystemZ::R12L, SystemZ::R11L, SystemZ::R10L, SystemZ::R9L, SystemZ::R8L, SystemZ::R7L, SystemZ::R6L, 
  };

  // GR32Bit Bit set.
  const uint8_t GR32BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x07, 
  };

  // GRH32Bit Register Class...
  const MCPhysReg GRH32Bit[] = {
    SystemZ::R0H, SystemZ::R1H, SystemZ::R2H, SystemZ::R3H, SystemZ::R4H, SystemZ::R5H, SystemZ::R15H, SystemZ::R14H, SystemZ::R13H, SystemZ::R12H, SystemZ::R11H, SystemZ::R10H, SystemZ::R9H, SystemZ::R8H, SystemZ::R7H, SystemZ::R6H, 
  };

  // GRH32Bit Bit set.
  const uint8_t GRH32BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x07, 
  };

  // ADDR32Bit Register Class...
  const MCPhysReg ADDR32Bit[] = {
    SystemZ::R1L, SystemZ::R2L, SystemZ::R3L, SystemZ::R4L, SystemZ::R5L, SystemZ::R15L, SystemZ::R14L, SystemZ::R13L, SystemZ::R12L, SystemZ::R11L, SystemZ::R10L, SystemZ::R9L, SystemZ::R8L, SystemZ::R7L, SystemZ::R6L, 
  };

  // ADDR32Bit Bit set.
  const uint8_t ADDR32BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x07, 
  };

  // CCR Register Class...
  const MCPhysReg CCR[] = {
    SystemZ::CC, 
  };

  // CCR Bit set.
  const uint8_t CCRBits[] = {
    0x02, 
  };

  // FPCRegs Register Class...
  const MCPhysReg FPCRegs[] = {
    SystemZ::FPC, 
  };

  // FPCRegs Bit set.
  const uint8_t FPCRegsBits[] = {
    0x04, 
  };

  // AnyRegBit Register Class...
  const MCPhysReg AnyRegBit[] = {
    SystemZ::R0D, SystemZ::R1D, SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R6D, SystemZ::R7D, SystemZ::R8D, SystemZ::R9D, SystemZ::R10D, SystemZ::R11D, SystemZ::R12D, SystemZ::R13D, SystemZ::R14D, SystemZ::R15D, SystemZ::F0D, SystemZ::F1D, SystemZ::F2D, SystemZ::F3D, SystemZ::F4D, SystemZ::F5D, SystemZ::F6D, SystemZ::F7D, SystemZ::F8D, SystemZ::F9D, SystemZ::F10D, SystemZ::F11D, SystemZ::F12D, SystemZ::F13D, SystemZ::F14D, SystemZ::F15D, SystemZ::V0, SystemZ::V1, SystemZ::V2, SystemZ::V3, SystemZ::V4, SystemZ::V5, SystemZ::V6, SystemZ::V7, SystemZ::V8, SystemZ::V9, SystemZ::V10, SystemZ::V11, SystemZ::V12, SystemZ::V13, SystemZ::V14, SystemZ::V15, 
  };

  // AnyRegBit Bit set.
  const uint8_t AnyRegBitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x07, 0x00, 0xf8, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x07, 
  };

  // AnyRegBit_with_subreg_h32_in_FP32Bit Register Class...
  const MCPhysReg AnyRegBit_with_subreg_h32_in_FP32Bit[] = {
    SystemZ::F0D, SystemZ::F1D, SystemZ::F2D, SystemZ::F3D, SystemZ::F4D, SystemZ::F5D, SystemZ::F6D, SystemZ::F7D, SystemZ::F8D, SystemZ::F9D, SystemZ::F10D, SystemZ::F11D, SystemZ::F12D, SystemZ::F13D, SystemZ::F14D, SystemZ::F15D, SystemZ::V0, SystemZ::V1, SystemZ::V2, SystemZ::V3, SystemZ::V4, SystemZ::V5, SystemZ::V6, SystemZ::V7, SystemZ::V8, SystemZ::V9, SystemZ::V10, SystemZ::V11, SystemZ::V12, SystemZ::V13, SystemZ::V14, SystemZ::V15, 
  };

  // AnyRegBit_with_subreg_h32_in_FP32Bit Bit set.
  const uint8_t AnyRegBit_with_subreg_h32_in_FP32BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x07, 0x00, 0xf8, 0xff, 0x07, 
  };

  // VR64Bit Register Class...
  const MCPhysReg VR64Bit[] = {
    SystemZ::F0D, SystemZ::F1D, SystemZ::F2D, SystemZ::F3D, SystemZ::F4D, SystemZ::F5D, SystemZ::F6D, SystemZ::F7D, SystemZ::F16D, SystemZ::F17D, SystemZ::F18D, SystemZ::F19D, SystemZ::F20D, SystemZ::F21D, SystemZ::F22D, SystemZ::F23D, SystemZ::F24D, SystemZ::F25D, SystemZ::F26D, SystemZ::F27D, SystemZ::F28D, SystemZ::F29D, SystemZ::F30D, SystemZ::F31D, SystemZ::F8D, SystemZ::F9D, SystemZ::F10D, SystemZ::F11D, SystemZ::F12D, SystemZ::F13D, SystemZ::F14D, SystemZ::F15D, 
  };

  // VR64Bit Bit set.
  const uint8_t VR64BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // AnyRegBit_with_subreg_h64 Register Class...
  const MCPhysReg AnyRegBit_with_subreg_h64[] = {
    SystemZ::V0, SystemZ::V1, SystemZ::V2, SystemZ::V3, SystemZ::V4, SystemZ::V5, SystemZ::V6, SystemZ::V7, SystemZ::V8, SystemZ::V9, SystemZ::V10, SystemZ::V11, SystemZ::V12, SystemZ::V13, SystemZ::V14, SystemZ::V15, 
  };

  // AnyRegBit_with_subreg_h64 Bit set.
  const uint8_t AnyRegBit_with_subreg_h64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x07, 
  };

  // CR64Bit Register Class...
  const MCPhysReg CR64Bit[] = {
    SystemZ::C0, SystemZ::C1, SystemZ::C2, SystemZ::C3, SystemZ::C4, SystemZ::C5, SystemZ::C6, SystemZ::C7, SystemZ::C8, SystemZ::C9, SystemZ::C10, SystemZ::C11, SystemZ::C12, SystemZ::C13, SystemZ::C14, SystemZ::C15, 
  };

  // CR64Bit Bit set.
  const uint8_t CR64BitBits[] = {
    0x00, 0x00, 0xf8, 0xff, 0x07, 
  };

  // FP64Bit Register Class...
  const MCPhysReg FP64Bit[] = {
    SystemZ::F0D, SystemZ::F1D, SystemZ::F2D, SystemZ::F3D, SystemZ::F4D, SystemZ::F5D, SystemZ::F6D, SystemZ::F7D, SystemZ::F8D, SystemZ::F9D, SystemZ::F10D, SystemZ::F11D, SystemZ::F12D, SystemZ::F13D, SystemZ::F14D, SystemZ::F15D, 
  };

  // FP64Bit Bit set.
  const uint8_t FP64BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x07, 
  };

  // GR64Bit Register Class...
  const MCPhysReg GR64Bit[] = {
    SystemZ::R0D, SystemZ::R1D, SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R15D, SystemZ::R14D, SystemZ::R13D, SystemZ::R12D, SystemZ::R11D, SystemZ::R10D, SystemZ::R9D, SystemZ::R8D, SystemZ::R7D, SystemZ::R6D, 
  };

  // GR64Bit Bit set.
  const uint8_t GR64BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x07, 
  };

  // ADDR64Bit Register Class...
  const MCPhysReg ADDR64Bit[] = {
    SystemZ::R1D, SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R15D, SystemZ::R14D, SystemZ::R13D, SystemZ::R12D, SystemZ::R11D, SystemZ::R10D, SystemZ::R9D, SystemZ::R8D, SystemZ::R7D, SystemZ::R6D, 
  };

  // ADDR64Bit Bit set.
  const uint8_t ADDR64BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x07, 
  };

  // VR128Bit Register Class...
  const MCPhysReg VR128Bit[] = {
    SystemZ::V0, SystemZ::V1, SystemZ::V2, SystemZ::V3, SystemZ::V4, SystemZ::V5, SystemZ::V6, SystemZ::V7, SystemZ::V16, SystemZ::V17, SystemZ::V18, SystemZ::V19, SystemZ::V20, SystemZ::V21, SystemZ::V22, SystemZ::V23, SystemZ::V24, SystemZ::V25, SystemZ::V26, SystemZ::V27, SystemZ::V28, SystemZ::V29, SystemZ::V30, SystemZ::V31, SystemZ::V8, SystemZ::V9, SystemZ::V10, SystemZ::V11, SystemZ::V12, SystemZ::V13, SystemZ::V14, SystemZ::V15, 
  };

  // VR128Bit Bit set.
  const uint8_t VR128BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // VF128Bit Register Class...
  const MCPhysReg VF128Bit[] = {
    SystemZ::V0, SystemZ::V1, SystemZ::V2, SystemZ::V3, SystemZ::V4, SystemZ::V5, SystemZ::V6, SystemZ::V7, SystemZ::V8, SystemZ::V9, SystemZ::V10, SystemZ::V11, SystemZ::V12, SystemZ::V13, SystemZ::V14, SystemZ::V15, 
  };

  // VF128Bit Bit set.
  const uint8_t VF128BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x07, 
  };

  // FP128Bit Register Class...
  const MCPhysReg FP128Bit[] = {
    SystemZ::F0Q, SystemZ::F1Q, SystemZ::F4Q, SystemZ::F5Q, SystemZ::F8Q, SystemZ::F9Q, SystemZ::F12Q, SystemZ::F13Q, 
  };

  // FP128Bit Bit set.
  const uint8_t FP128BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07, 
  };

  // GR128Bit Register Class...
  const MCPhysReg GR128Bit[] = {
    SystemZ::R0Q, SystemZ::R2Q, SystemZ::R4Q, SystemZ::R12Q, SystemZ::R10Q, SystemZ::R8Q, SystemZ::R6Q, SystemZ::R14Q, 
  };

  // GR128Bit Bit set.
  const uint8_t GR128BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07, 
  };

  // ADDR128Bit Register Class...
  const MCPhysReg ADDR128Bit[] = {
    SystemZ::R2Q, SystemZ::R4Q, SystemZ::R12Q, SystemZ::R10Q, SystemZ::R8Q, SystemZ::R6Q, SystemZ::R14Q, 
  };

  // ADDR128Bit Bit set.
  const uint8_t ADDR128BitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x07, 
  };

} // end anonymous namespace

extern const char SystemZRegClassStrings[] = {
  /* 0 */ 'A', 'n', 'y', 'R', 'e', 'g', 'B', 'i', 't', '_', 'w', 'i', 't', 'h', '_', 's', 'u', 'b', 'r', 'e', 'g', '_', 'h', '6', '4', 0,
  /* 26 */ 'C', 'C', 'R', 0,
  /* 30 */ 'F', 'P', 'C', 'R', 'e', 'g', 's', 0,
  /* 38 */ 'G', 'R', 'H', '3', '2', 'B', 'i', 't', 0,
  /* 47 */ 'A', 'n', 'y', 'R', 'e', 'g', 'B', 'i', 't', '_', 'w', 'i', 't', 'h', '_', 's', 'u', 'b', 'r', 'e', 'g', '_', 'h', '3', '2', '_', 'i', 'n', '_', 'F', 'P', '3', '2', 'B', 'i', 't', 0,
  /* 84 */ 'A', 'R', '3', '2', 'B', 'i', 't', 0,
  /* 92 */ 'A', 'D', 'D', 'R', '3', '2', 'B', 'i', 't', 0,
  /* 102 */ 'G', 'R', '3', '2', 'B', 'i', 't', 0,
  /* 110 */ 'V', 'R', '3', '2', 'B', 'i', 't', 0,
  /* 118 */ 'G', 'R', 'X', '3', '2', 'B', 'i', 't', 0,
  /* 127 */ 'F', 'P', '6', '4', 'B', 'i', 't', 0,
  /* 135 */ 'C', 'R', '6', '4', 'B', 'i', 't', 0,
  /* 143 */ 'A', 'D', 'D', 'R', '6', '4', 'B', 'i', 't', 0,
  /* 153 */ 'G', 'R', '6', '4', 'B', 'i', 't', 0,
  /* 161 */ 'V', 'R', '6', '4', 'B', 'i', 't', 0,
  /* 169 */ 'V', 'F', '1', '2', '8', 'B', 'i', 't', 0,
  /* 178 */ 'F', 'P', '1', '2', '8', 'B', 'i', 't', 0,
  /* 187 */ 'A', 'D', 'D', 'R', '1', '2', '8', 'B', 'i', 't', 0,
  /* 198 */ 'G', 'R', '1', '2', '8', 'B', 'i', 't', 0,
  /* 207 */ 'V', 'R', '1', '2', '8', 'B', 'i', 't', 0,
  /* 216 */ 'A', 'n', 'y', 'R', 'e', 'g', 'B', 'i', 't', 0,
};

extern const MCRegisterClass SystemZMCRegisterClasses[] = {
  { GRX32Bit, GRX32BitBits, 118, 32, sizeof(GRX32BitBits), SystemZ::GRX32BitRegClassID, 1, true },
  { VR32Bit, VR32BitBits, 110, 32, sizeof(VR32BitBits), SystemZ::VR32BitRegClassID, 1, true },
  { AR32Bit, AR32BitBits, 84, 16, sizeof(AR32BitBits), SystemZ::AR32BitRegClassID, 1, false },
  { FP32Bit, FP32BitBits, 76, 16, sizeof(FP32BitBits), SystemZ::FP32BitRegClassID, 1, true },
  { GR32Bit, GR32BitBits, 102, 16, sizeof(GR32BitBits), SystemZ::GR32BitRegClassID, 1, true },
  { GRH32Bit, GRH32BitBits, 38, 16, sizeof(GRH32BitBits), SystemZ::GRH32BitRegClassID, 1, true },
  { ADDR32Bit, ADDR32BitBits, 92, 15, sizeof(ADDR32BitBits), SystemZ::ADDR32BitRegClassID, 1, true },
  { CCR, CCRBits, 26, 1, sizeof(CCRBits), SystemZ::CCRRegClassID, -1, false },
  { FPCRegs, FPCRegsBits, 30, 1, sizeof(FPCRegsBits), SystemZ::FPCRegsRegClassID, 1, false },
  { AnyRegBit, AnyRegBitBits, 216, 48, sizeof(AnyRegBitBits), SystemZ::AnyRegBitRegClassID, 1, false },
  { AnyRegBit_with_subreg_h32_in_FP32Bit, AnyRegBit_with_subreg_h32_in_FP32BitBits, 47, 32, sizeof(AnyRegBit_with_subreg_h32_in_FP32BitBits), SystemZ::AnyRegBit_with_subreg_h32_in_FP32BitRegClassID, 1, false },
  { VR64Bit, VR64BitBits, 161, 32, sizeof(VR64BitBits), SystemZ::VR64BitRegClassID, 1, true },
  { AnyRegBit_with_subreg_h64, AnyRegBit_with_subreg_h64Bits, 0, 16, sizeof(AnyRegBit_with_subreg_h64Bits), SystemZ::AnyRegBit_with_subreg_h64RegClassID, 1, false },
  { CR64Bit, CR64BitBits, 135, 16, sizeof(CR64BitBits), SystemZ::CR64BitRegClassID, 1, false },
  { FP64Bit, FP64BitBits, 127, 16, sizeof(FP64BitBits), SystemZ::FP64BitRegClassID, 1, true },
  { GR64Bit, GR64BitBits, 153, 16, sizeof(GR64BitBits), SystemZ::GR64BitRegClassID, 1, true },
  { ADDR64Bit, ADDR64BitBits, 143, 15, sizeof(ADDR64BitBits), SystemZ::ADDR64BitRegClassID, 1, true },
  { VR128Bit, VR128BitBits, 207, 32, sizeof(VR128BitBits), SystemZ::VR128BitRegClassID, 1, true },
  { VF128Bit, VF128BitBits, 169, 16, sizeof(VF128BitBits), SystemZ::VF128BitRegClassID, 1, true },
  { FP128Bit, FP128BitBits, 178, 8, sizeof(FP128BitBits), SystemZ::FP128BitRegClassID, 1, true },
  { GR128Bit, GR128BitBits, 198, 8, sizeof(GR128BitBits), SystemZ::GR128BitRegClassID, 1, true },
  { ADDR128Bit, ADDR128BitBits, 187, 7, sizeof(ADDR128BitBits), SystemZ::ADDR128BitRegClassID, 1, true },
};

// SystemZ Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair SystemZDwarfFlavour0Dwarf2L[] = {
  { 0U, SystemZ::R0D },
  { 1U, SystemZ::R1D },
  { 2U, SystemZ::R2D },
  { 3U, SystemZ::R3D },
  { 4U, SystemZ::R4D },
  { 5U, SystemZ::R5D },
  { 6U, SystemZ::R6D },
  { 7U, SystemZ::R7D },
  { 8U, SystemZ::R8D },
  { 9U, SystemZ::R9D },
  { 10U, SystemZ::R10D },
  { 11U, SystemZ::R11D },
  { 12U, SystemZ::R12D },
  { 13U, SystemZ::R13D },
  { 14U, SystemZ::R14D },
  { 15U, SystemZ::R15D },
  { 16U, SystemZ::F0D },
  { 17U, SystemZ::F2D },
  { 18U, SystemZ::F4D },
  { 19U, SystemZ::F6D },
  { 20U, SystemZ::F1D },
  { 21U, SystemZ::F3D },
  { 22U, SystemZ::F5D },
  { 23U, SystemZ::F7D },
  { 24U, SystemZ::F8D },
  { 25U, SystemZ::F10D },
  { 26U, SystemZ::F12D },
  { 27U, SystemZ::F14D },
  { 28U, SystemZ::F9D },
  { 29U, SystemZ::F11D },
  { 30U, SystemZ::F13D },
  { 31U, SystemZ::F15D },
  { 32U, SystemZ::C0 },
  { 33U, SystemZ::C1 },
  { 34U, SystemZ::C2 },
  { 35U, SystemZ::C3 },
  { 36U, SystemZ::C4 },
  { 37U, SystemZ::C5 },
  { 38U, SystemZ::C6 },
  { 39U, SystemZ::C7 },
  { 40U, SystemZ::C8 },
  { 41U, SystemZ::C9 },
  { 42U, SystemZ::C10 },
  { 43U, SystemZ::C11 },
  { 44U, SystemZ::C12 },
  { 45U, SystemZ::C13 },
  { 46U, SystemZ::C14 },
  { 47U, SystemZ::C15 },
  { 48U, SystemZ::A0 },
  { 49U, SystemZ::A1 },
  { 50U, SystemZ::A2 },
  { 51U, SystemZ::A3 },
  { 52U, SystemZ::A4 },
  { 53U, SystemZ::A5 },
  { 54U, SystemZ::A6 },
  { 55U, SystemZ::A7 },
  { 56U, SystemZ::A8 },
  { 57U, SystemZ::A9 },
  { 58U, SystemZ::A10 },
  { 59U, SystemZ::A11 },
  { 60U, SystemZ::A12 },
  { 61U, SystemZ::A13 },
  { 62U, SystemZ::A14 },
  { 63U, SystemZ::A15 },
  { 68U, SystemZ::F16D },
  { 69U, SystemZ::F18D },
  { 70U, SystemZ::F20D },
  { 71U, SystemZ::F22D },
  { 72U, SystemZ::F17D },
  { 73U, SystemZ::F19D },
  { 74U, SystemZ::F21D },
  { 75U, SystemZ::F23D },
  { 76U, SystemZ::F24D },
  { 77U, SystemZ::F26D },
  { 78U, SystemZ::F28D },
  { 79U, SystemZ::F30D },
  { 80U, SystemZ::F25D },
  { 81U, SystemZ::F27D },
  { 82U, SystemZ::F29D },
  { 83U, SystemZ::F31D },
};
extern const unsigned SystemZDwarfFlavour0Dwarf2LSize = array_lengthof(SystemZDwarfFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZEHFlavour0Dwarf2L[] = {
  { 0U, SystemZ::R0D },
  { 1U, SystemZ::R1D },
  { 2U, SystemZ::R2D },
  { 3U, SystemZ::R3D },
  { 4U, SystemZ::R4D },
  { 5U, SystemZ::R5D },
  { 6U, SystemZ::R6D },
  { 7U, SystemZ::R7D },
  { 8U, SystemZ::R8D },
  { 9U, SystemZ::R9D },
  { 10U, SystemZ::R10D },
  { 11U, SystemZ::R11D },
  { 12U, SystemZ::R12D },
  { 13U, SystemZ::R13D },
  { 14U, SystemZ::R14D },
  { 15U, SystemZ::R15D },
  { 16U, SystemZ::F0D },
  { 17U, SystemZ::F2D },
  { 18U, SystemZ::F4D },
  { 19U, SystemZ::F6D },
  { 20U, SystemZ::F1D },
  { 21U, SystemZ::F3D },
  { 22U, SystemZ::F5D },
  { 23U, SystemZ::F7D },
  { 24U, SystemZ::F8D },
  { 25U, SystemZ::F10D },
  { 26U, SystemZ::F12D },
  { 27U, SystemZ::F14D },
  { 28U, SystemZ::F9D },
  { 29U, SystemZ::F11D },
  { 30U, SystemZ::F13D },
  { 31U, SystemZ::F15D },
  { 32U, SystemZ::C0 },
  { 33U, SystemZ::C1 },
  { 34U, SystemZ::C2 },
  { 35U, SystemZ::C3 },
  { 36U, SystemZ::C4 },
  { 37U, SystemZ::C5 },
  { 38U, SystemZ::C6 },
  { 39U, SystemZ::C7 },
  { 40U, SystemZ::C8 },
  { 41U, SystemZ::C9 },
  { 42U, SystemZ::C10 },
  { 43U, SystemZ::C11 },
  { 44U, SystemZ::C12 },
  { 45U, SystemZ::C13 },
  { 46U, SystemZ::C14 },
  { 47U, SystemZ::C15 },
  { 48U, SystemZ::A0 },
  { 49U, SystemZ::A1 },
  { 50U, SystemZ::A2 },
  { 51U, SystemZ::A3 },
  { 52U, SystemZ::A4 },
  { 53U, SystemZ::A5 },
  { 54U, SystemZ::A6 },
  { 55U, SystemZ::A7 },
  { 56U, SystemZ::A8 },
  { 57U, SystemZ::A9 },
  { 58U, SystemZ::A10 },
  { 59U, SystemZ::A11 },
  { 60U, SystemZ::A12 },
  { 61U, SystemZ::A13 },
  { 62U, SystemZ::A14 },
  { 63U, SystemZ::A15 },
  { 68U, SystemZ::F16D },
  { 69U, SystemZ::F18D },
  { 70U, SystemZ::F20D },
  { 71U, SystemZ::F22D },
  { 72U, SystemZ::F17D },
  { 73U, SystemZ::F19D },
  { 74U, SystemZ::F21D },
  { 75U, SystemZ::F23D },
  { 76U, SystemZ::F24D },
  { 77U, SystemZ::F26D },
  { 78U, SystemZ::F28D },
  { 79U, SystemZ::F30D },
  { 80U, SystemZ::F25D },
  { 81U, SystemZ::F27D },
  { 82U, SystemZ::F29D },
  { 83U, SystemZ::F31D },
};
extern const unsigned SystemZEHFlavour0Dwarf2LSize = array_lengthof(SystemZEHFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZDwarfFlavour0L2Dwarf[] = {
  { SystemZ::A0, 48U },
  { SystemZ::A1, 49U },
  { SystemZ::A2, 50U },
  { SystemZ::A3, 51U },
  { SystemZ::A4, 52U },
  { SystemZ::A5, 53U },
  { SystemZ::A6, 54U },
  { SystemZ::A7, 55U },
  { SystemZ::A8, 56U },
  { SystemZ::A9, 57U },
  { SystemZ::A10, 58U },
  { SystemZ::A11, 59U },
  { SystemZ::A12, 60U },
  { SystemZ::A13, 61U },
  { SystemZ::A14, 62U },
  { SystemZ::A15, 63U },
  { SystemZ::C0, 32U },
  { SystemZ::C1, 33U },
  { SystemZ::C2, 34U },
  { SystemZ::C3, 35U },
  { SystemZ::C4, 36U },
  { SystemZ::C5, 37U },
  { SystemZ::C6, 38U },
  { SystemZ::C7, 39U },
  { SystemZ::C8, 40U },
  { SystemZ::C9, 41U },
  { SystemZ::C10, 42U },
  { SystemZ::C11, 43U },
  { SystemZ::C12, 44U },
  { SystemZ::C13, 45U },
  { SystemZ::C14, 46U },
  { SystemZ::C15, 47U },
  { SystemZ::V0, 16U },
  { SystemZ::V1, 20U },
  { SystemZ::V2, 17U },
  { SystemZ::V3, 21U },
  { SystemZ::V4, 18U },
  { SystemZ::V5, 22U },
  { SystemZ::V6, 19U },
  { SystemZ::V7, 23U },
  { SystemZ::V8, 24U },
  { SystemZ::V9, 28U },
  { SystemZ::V10, 25U },
  { SystemZ::V11, 29U },
  { SystemZ::V12, 26U },
  { SystemZ::V13, 30U },
  { SystemZ::V14, 27U },
  { SystemZ::V15, 31U },
  { SystemZ::V16, 68U },
  { SystemZ::V17, 72U },
  { SystemZ::V18, 69U },
  { SystemZ::V19, 73U },
  { SystemZ::V20, 70U },
  { SystemZ::V21, 74U },
  { SystemZ::V22, 71U },
  { SystemZ::V23, 75U },
  { SystemZ::V24, 76U },
  { SystemZ::V25, 80U },
  { SystemZ::V26, 77U },
  { SystemZ::V27, 81U },
  { SystemZ::V28, 78U },
  { SystemZ::V29, 82U },
  { SystemZ::V30, 79U },
  { SystemZ::V31, 83U },
  { SystemZ::F0D, 16U },
  { SystemZ::F1D, 20U },
  { SystemZ::F2D, 17U },
  { SystemZ::F3D, 21U },
  { SystemZ::F4D, 18U },
  { SystemZ::F5D, 22U },
  { SystemZ::F6D, 19U },
  { SystemZ::F7D, 23U },
  { SystemZ::F8D, 24U },
  { SystemZ::F9D, 28U },
  { SystemZ::F10D, 25U },
  { SystemZ::F11D, 29U },
  { SystemZ::F12D, 26U },
  { SystemZ::F13D, 30U },
  { SystemZ::F14D, 27U },
  { SystemZ::F15D, 31U },
  { SystemZ::F16D, 68U },
  { SystemZ::F17D, 72U },
  { SystemZ::F18D, 69U },
  { SystemZ::F19D, 73U },
  { SystemZ::F20D, 70U },
  { SystemZ::F21D, 74U },
  { SystemZ::F22D, 71U },
  { SystemZ::F23D, 75U },
  { SystemZ::F24D, 76U },
  { SystemZ::F25D, 80U },
  { SystemZ::F26D, 77U },
  { SystemZ::F27D, 81U },
  { SystemZ::F28D, 78U },
  { SystemZ::F29D, 82U },
  { SystemZ::F30D, 79U },
  { SystemZ::F31D, 83U },
  { SystemZ::R0D, 0U },
  { SystemZ::R1D, 1U },
  { SystemZ::R2D, 2U },
  { SystemZ::R3D, 3U },
  { SystemZ::R4D, 4U },
  { SystemZ::R5D, 5U },
  { SystemZ::R6D, 6U },
  { SystemZ::R7D, 7U },
  { SystemZ::R8D, 8U },
  { SystemZ::R9D, 9U },
  { SystemZ::R10D, 10U },
  { SystemZ::R11D, 11U },
  { SystemZ::R12D, 12U },
  { SystemZ::R13D, 13U },
  { SystemZ::R14D, 14U },
  { SystemZ::R15D, 15U },
};
extern const unsigned SystemZDwarfFlavour0L2DwarfSize = array_lengthof(SystemZDwarfFlavour0L2Dwarf);

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZEHFlavour0L2Dwarf[] = {
  { SystemZ::A0, 48U },
  { SystemZ::A1, 49U },
  { SystemZ::A2, 50U },
  { SystemZ::A3, 51U },
  { SystemZ::A4, 52U },
  { SystemZ::A5, 53U },
  { SystemZ::A6, 54U },
  { SystemZ::A7, 55U },
  { SystemZ::A8, 56U },
  { SystemZ::A9, 57U },
  { SystemZ::A10, 58U },
  { SystemZ::A11, 59U },
  { SystemZ::A12, 60U },
  { SystemZ::A13, 61U },
  { SystemZ::A14, 62U },
  { SystemZ::A15, 63U },
  { SystemZ::C0, 32U },
  { SystemZ::C1, 33U },
  { SystemZ::C2, 34U },
  { SystemZ::C3, 35U },
  { SystemZ::C4, 36U },
  { SystemZ::C5, 37U },
  { SystemZ::C6, 38U },
  { SystemZ::C7, 39U },
  { SystemZ::C8, 40U },
  { SystemZ::C9, 41U },
  { SystemZ::C10, 42U },
  { SystemZ::C11, 43U },
  { SystemZ::C12, 44U },
  { SystemZ::C13, 45U },
  { SystemZ::C14, 46U },
  { SystemZ::C15, 47U },
  { SystemZ::V0, 16U },
  { SystemZ::V1, 20U },
  { SystemZ::V2, 17U },
  { SystemZ::V3, 21U },
  { SystemZ::V4, 18U },
  { SystemZ::V5, 22U },
  { SystemZ::V6, 19U },
  { SystemZ::V7, 23U },
  { SystemZ::V8, 24U },
  { SystemZ::V9, 28U },
  { SystemZ::V10, 25U },
  { SystemZ::V11, 29U },
  { SystemZ::V12, 26U },
  { SystemZ::V13, 30U },
  { SystemZ::V14, 27U },
  { SystemZ::V15, 31U },
  { SystemZ::V16, 68U },
  { SystemZ::V17, 72U },
  { SystemZ::V18, 69U },
  { SystemZ::V19, 73U },
  { SystemZ::V20, 70U },
  { SystemZ::V21, 74U },
  { SystemZ::V22, 71U },
  { SystemZ::V23, 75U },
  { SystemZ::V24, 76U },
  { SystemZ::V25, 80U },
  { SystemZ::V26, 77U },
  { SystemZ::V27, 81U },
  { SystemZ::V28, 78U },
  { SystemZ::V29, 82U },
  { SystemZ::V30, 79U },
  { SystemZ::V31, 83U },
  { SystemZ::F0D, 16U },
  { SystemZ::F1D, 20U },
  { SystemZ::F2D, 17U },
  { SystemZ::F3D, 21U },
  { SystemZ::F4D, 18U },
  { SystemZ::F5D, 22U },
  { SystemZ::F6D, 19U },
  { SystemZ::F7D, 23U },
  { SystemZ::F8D, 24U },
  { SystemZ::F9D, 28U },
  { SystemZ::F10D, 25U },
  { SystemZ::F11D, 29U },
  { SystemZ::F12D, 26U },
  { SystemZ::F13D, 30U },
  { SystemZ::F14D, 27U },
  { SystemZ::F15D, 31U },
  { SystemZ::F16D, 68U },
  { SystemZ::F17D, 72U },
  { SystemZ::F18D, 69U },
  { SystemZ::F19D, 73U },
  { SystemZ::F20D, 70U },
  { SystemZ::F21D, 74U },
  { SystemZ::F22D, 71U },
  { SystemZ::F23D, 75U },
  { SystemZ::F24D, 76U },
  { SystemZ::F25D, 80U },
  { SystemZ::F26D, 77U },
  { SystemZ::F27D, 81U },
  { SystemZ::F28D, 78U },
  { SystemZ::F29D, 82U },
  { SystemZ::F30D, 79U },
  { SystemZ::F31D, 83U },
  { SystemZ::R0D, 0U },
  { SystemZ::R1D, 1U },
  { SystemZ::R2D, 2U },
  { SystemZ::R3D, 3U },
  { SystemZ::R4D, 4U },
  { SystemZ::R5D, 5U },
  { SystemZ::R6D, 6U },
  { SystemZ::R7D, 7U },
  { SystemZ::R8D, 8U },
  { SystemZ::R9D, 9U },
  { SystemZ::R10D, 10U },
  { SystemZ::R11D, 11U },
  { SystemZ::R12D, 12U },
  { SystemZ::R13D, 13U },
  { SystemZ::R14D, 14U },
  { SystemZ::R15D, 15U },
};
extern const unsigned SystemZEHFlavour0L2DwarfSize = array_lengthof(SystemZEHFlavour0L2Dwarf);

extern const uint16_t SystemZRegEncodingTable[] = {
  0,
  0,
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
  12,
  13,
  14,
  15,
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
  12,
  13,
  14,
  15,
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
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
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
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  1,
  4,
  5,
  8,
  9,
  12,
  13,
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
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
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
  12,
  13,
  14,
  15,
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
  12,
  13,
  14,
  15,
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
  12,
  13,
  14,
  15,
  0,
  2,
  4,
  6,
  8,
  10,
  12,
  14,
};
static inline void InitSystemZMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(SystemZRegDesc, 195, RA, PC, SystemZMCRegisterClasses, 22, SystemZRegUnitRoots, 98, SystemZRegDiffLists, SystemZLaneMaskLists, SystemZRegStrings, SystemZRegClassStrings, SystemZSubRegIdxLists, 7,
SystemZSubRegIdxRanges, SystemZRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(SystemZDwarfFlavour0Dwarf2L, SystemZDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(SystemZEHFlavour0Dwarf2L, SystemZEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(SystemZDwarfFlavour0L2Dwarf, SystemZDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(SystemZEHFlavour0L2Dwarf, SystemZEHFlavour0L2DwarfSize, true);
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

class SystemZFrameLowering;

struct SystemZGenRegisterInfo : public TargetRegisterInfo {
  explicit SystemZGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0,
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
  static const SystemZFrameLowering *getFrameLowering(
      const MachineFunction &MF);
};

namespace SystemZ { // Register classes
  extern const TargetRegisterClass GRX32BitRegClass;
  extern const TargetRegisterClass VR32BitRegClass;
  extern const TargetRegisterClass AR32BitRegClass;
  extern const TargetRegisterClass FP32BitRegClass;
  extern const TargetRegisterClass GR32BitRegClass;
  extern const TargetRegisterClass GRH32BitRegClass;
  extern const TargetRegisterClass ADDR32BitRegClass;
  extern const TargetRegisterClass CCRRegClass;
  extern const TargetRegisterClass FPCRegsRegClass;
  extern const TargetRegisterClass AnyRegBitRegClass;
  extern const TargetRegisterClass AnyRegBit_with_subreg_h32_in_FP32BitRegClass;
  extern const TargetRegisterClass VR64BitRegClass;
  extern const TargetRegisterClass AnyRegBit_with_subreg_h64RegClass;
  extern const TargetRegisterClass CR64BitRegClass;
  extern const TargetRegisterClass FP64BitRegClass;
  extern const TargetRegisterClass GR64BitRegClass;
  extern const TargetRegisterClass ADDR64BitRegClass;
  extern const TargetRegisterClass VR128BitRegClass;
  extern const TargetRegisterClass VF128BitRegClass;
  extern const TargetRegisterClass FP128BitRegClass;
  extern const TargetRegisterClass GR128BitRegClass;
  extern const TargetRegisterClass ADDR128BitRegClass;
} // end namespace SystemZ

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

extern const MCRegisterClass SystemZMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i32, MVT::Other,
  /* 2 */ MVT::i64, MVT::Other,
  /* 4 */ MVT::f32, MVT::Other,
  /* 6 */ MVT::f64, MVT::Other,
  /* 8 */ MVT::v16i8, MVT::v8i16, MVT::v4i32, MVT::v2i64, MVT::v4f32, MVT::v2f64, MVT::f128, MVT::Other,
  /* 16 */ MVT::f32, MVT::v4i8, MVT::v2i16, MVT::Other,
  /* 20 */ MVT::i64, MVT::f64, MVT::v8i8, MVT::v4i16, MVT::v2i32, MVT::v2f32, MVT::Other,
  /* 27 */ MVT::v16i8, MVT::v8i16, MVT::v4i32, MVT::v2i64, MVT::v4f32, MVT::v2f64, MVT::Other,
  /* 34 */ MVT::Untyped, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "subreg_h32", "subreg_h64", "subreg_hh32", "subreg_hl32", "subreg_l32", "subreg_l64", "" };


static const LaneBitmask SubRegIndexLaneMaskTable[] = {
  LaneBitmask::getAll(),
  LaneBitmask(0x00000001), // subreg_h32
  LaneBitmask(0x00000006), // subreg_h64
  LaneBitmask(0x00000002), // subreg_hh32
  LaneBitmask(0x00000004), // subreg_hl32
  LaneBitmask(0x00000008), // subreg_l32
  LaneBitmask(0x00000009), // subreg_l64
 };



static const TargetRegisterInfo::RegClassInfo RegClassInfos[] = {
  // Mode = 0 (Default)
  { 32, 32, 32, VTLists+0 },    // GRX32Bit
  { 32, 32, 32, VTLists+16 },    // VR32Bit
  { 32, 32, 32, VTLists+0 },    // AR32Bit
  { 32, 32, 32, VTLists+4 },    // FP32Bit
  { 32, 32, 32, VTLists+0 },    // GR32Bit
  { 32, 32, 32, VTLists+0 },    // GRH32Bit
  { 32, 32, 32, VTLists+0 },    // ADDR32Bit
  { 32, 32, 32, VTLists+0 },    // CCR
  { 32, 32, 32, VTLists+0 },    // FPCRegs
  { 64, 64, 64, VTLists+20 },    // AnyRegBit
  { 64, 64, 64, VTLists+20 },    // AnyRegBit_with_subreg_h32_in_FP32Bit
  { 64, 64, 64, VTLists+21 },    // VR64Bit
  { 64, 64, 64, VTLists+20 },    // AnyRegBit_with_subreg_h64
  { 64, 64, 64, VTLists+2 },    // CR64Bit
  { 64, 64, 64, VTLists+6 },    // FP64Bit
  { 64, 64, 64, VTLists+2 },    // GR64Bit
  { 64, 64, 64, VTLists+2 },    // ADDR64Bit
  { 128, 128, 128, VTLists+8 },    // VR128Bit
  { 128, 128, 128, VTLists+27 },    // VF128Bit
  { 128, 128, 128, VTLists+14 },    // FP128Bit
  { 128, 128, 128, VTLists+34 },    // GR128Bit
  { 128, 128, 128, VTLists+34 },    // ADDR128Bit
};

static const TargetRegisterClass *const NullRegClasses[] = { nullptr };

static const uint32_t GRX32BitSubClassMask[] = {
  0x00000071, 
  0x00318000, // subreg_h32
  0x00300000, // subreg_hh32
  0x00300000, // subreg_hl32
  0x00318000, // subreg_l32
};

static const uint32_t VR32BitSubClassMask[] = {
  0x0000000a, 
  0x000e5c00, // subreg_h32
  0x00080000, // subreg_hh32
};

static const uint32_t AR32BitSubClassMask[] = {
  0x00000004, 
};

static const uint32_t FP32BitSubClassMask[] = {
  0x00000008, 
  0x000c5400, // subreg_h32
  0x00080000, // subreg_hh32
};

static const uint32_t GR32BitSubClassMask[] = {
  0x00000050, 
  0x00300000, // subreg_hl32
  0x00318000, // subreg_l32
};

static const uint32_t GRH32BitSubClassMask[] = {
  0x00000020, 
  0x00318000, // subreg_h32
  0x00300000, // subreg_hh32
};

static const uint32_t ADDR32BitSubClassMask[] = {
  0x00000040, 
  0x00200000, // subreg_hl32
  0x00310000, // subreg_l32
};

static const uint32_t CCRSubClassMask[] = {
  0x00000080, 
};

static const uint32_t FPCRegsSubClassMask[] = {
  0x00000100, 
};

static const uint32_t AnyRegBitSubClassMask[] = {
  0x0005d600, 
  0x003c1000, // subreg_h64
  0x00380000, // subreg_l64
};

static const uint32_t AnyRegBit_with_subreg_h32_in_FP32BitSubClassMask[] = {
  0x00045400, 
  0x000c1000, // subreg_h64
  0x00080000, // subreg_l64
};

static const uint32_t VR64BitSubClassMask[] = {
  0x00004800, 
  0x000e1000, // subreg_h64
  0x00080000, // subreg_l64
};

static const uint32_t AnyRegBit_with_subreg_h64SubClassMask[] = {
  0x00041000, 
};

static const uint32_t CR64BitSubClassMask[] = {
  0x00002000, 
};

static const uint32_t FP64BitSubClassMask[] = {
  0x00004000, 
  0x000c1000, // subreg_h64
  0x00080000, // subreg_l64
};

static const uint32_t GR64BitSubClassMask[] = {
  0x00018000, 
  0x00300000, // subreg_h64
  0x00300000, // subreg_l64
};

static const uint32_t ADDR64BitSubClassMask[] = {
  0x00010000, 
  0x00200000, // subreg_h64
  0x00300000, // subreg_l64
};

static const uint32_t VR128BitSubClassMask[] = {
  0x00060000, 
};

static const uint32_t VF128BitSubClassMask[] = {
  0x00040000, 
};

static const uint32_t FP128BitSubClassMask[] = {
  0x00080000, 
};

static const uint32_t GR128BitSubClassMask[] = {
  0x00300000, 
};

static const uint32_t ADDR128BitSubClassMask[] = {
  0x00200000, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 3, 0,
  /* 3 */ 1, 3, 4, 5, 0,
  /* 8 */ 2, 6, 0,
};

static const TargetRegisterClass *const FP32BitSuperclasses[] = {
  &SystemZ::VR32BitRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32BitSuperclasses[] = {
  &SystemZ::GRX32BitRegClass,
  nullptr
};

static const TargetRegisterClass *const GRH32BitSuperclasses[] = {
  &SystemZ::GRX32BitRegClass,
  nullptr
};

static const TargetRegisterClass *const ADDR32BitSuperclasses[] = {
  &SystemZ::GRX32BitRegClass,
  &SystemZ::GR32BitRegClass,
  nullptr
};

static const TargetRegisterClass *const AnyRegBit_with_subreg_h32_in_FP32BitSuperclasses[] = {
  &SystemZ::AnyRegBitRegClass,
  nullptr
};

static const TargetRegisterClass *const AnyRegBit_with_subreg_h64Superclasses[] = {
  &SystemZ::AnyRegBitRegClass,
  &SystemZ::AnyRegBit_with_subreg_h32_in_FP32BitRegClass,
  nullptr
};

static const TargetRegisterClass *const FP64BitSuperclasses[] = {
  &SystemZ::AnyRegBitRegClass,
  &SystemZ::AnyRegBit_with_subreg_h32_in_FP32BitRegClass,
  &SystemZ::VR64BitRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64BitSuperclasses[] = {
  &SystemZ::AnyRegBitRegClass,
  nullptr
};

static const TargetRegisterClass *const ADDR64BitSuperclasses[] = {
  &SystemZ::AnyRegBitRegClass,
  &SystemZ::GR64BitRegClass,
  nullptr
};

static const TargetRegisterClass *const VF128BitSuperclasses[] = {
  &SystemZ::AnyRegBitRegClass,
  &SystemZ::AnyRegBit_with_subreg_h32_in_FP32BitRegClass,
  &SystemZ::AnyRegBit_with_subreg_h64RegClass,
  &SystemZ::VR128BitRegClass,
  nullptr
};

static const TargetRegisterClass *const ADDR128BitSuperclasses[] = {
  &SystemZ::GR128BitRegClass,
  nullptr
};


namespace SystemZ {   // Register class instances
  extern const TargetRegisterClass GRX32BitRegClass = {
    &SystemZMCRegisterClasses[GRX32BitRegClassID],
    GRX32BitSubClassMask,
    SuperRegIdxSeqs + 3,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VR32BitRegClass = {
    &SystemZMCRegisterClasses[VR32BitRegClassID],
    VR32BitSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass AR32BitRegClass = {
    &SystemZMCRegisterClasses[AR32BitRegClassID],
    AR32BitSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass FP32BitRegClass = {
    &SystemZMCRegisterClasses[FP32BitRegClassID],
    FP32BitSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    FP32BitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32BitRegClass = {
    &SystemZMCRegisterClasses[GR32BitRegClassID],
    GR32BitSubClassMask,
    SuperRegIdxSeqs + 5,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR32BitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GRH32BitRegClass = {
    &SystemZMCRegisterClasses[GRH32BitRegClassID],
    GRH32BitSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GRH32BitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ADDR32BitRegClass = {
    &SystemZMCRegisterClasses[ADDR32BitRegClassID],
    ADDR32BitSubClassMask,
    SuperRegIdxSeqs + 5,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    ADDR32BitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass CCRRegClass = {
    &SystemZMCRegisterClasses[CCRRegClassID],
    CCRSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass FPCRegsRegClass = {
    &SystemZMCRegisterClasses[FPCRegsRegClassID],
    FPCRegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass AnyRegBitRegClass = {
    &SystemZMCRegisterClasses[AnyRegBitRegClassID],
    AnyRegBitSubClassMask,
    SuperRegIdxSeqs + 8,
    LaneBitmask(0x0000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass AnyRegBit_with_subreg_h32_in_FP32BitRegClass = {
    &SystemZMCRegisterClasses[AnyRegBit_with_subreg_h32_in_FP32BitRegClassID],
    AnyRegBit_with_subreg_h32_in_FP32BitSubClassMask,
    SuperRegIdxSeqs + 8,
    LaneBitmask(0x00000007),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    AnyRegBit_with_subreg_h32_in_FP32BitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VR64BitRegClass = {
    &SystemZMCRegisterClasses[VR64BitRegClassID],
    VR64BitSubClassMask,
    SuperRegIdxSeqs + 8,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass AnyRegBit_with_subreg_h64RegClass = {
    &SystemZMCRegisterClasses[AnyRegBit_with_subreg_h64RegClassID],
    AnyRegBit_with_subreg_h64SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000007),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    AnyRegBit_with_subreg_h64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass CR64BitRegClass = {
    &SystemZMCRegisterClasses[CR64BitRegClassID],
    CR64BitSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass FP64BitRegClass = {
    &SystemZMCRegisterClasses[FP64BitRegClassID],
    FP64BitSubClassMask,
    SuperRegIdxSeqs + 8,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    FP64BitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64BitRegClass = {
    &SystemZMCRegisterClasses[GR64BitRegClassID],
    GR64BitSubClassMask,
    SuperRegIdxSeqs + 8,
    LaneBitmask(0x00000009),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR64BitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ADDR64BitRegClass = {
    &SystemZMCRegisterClasses[ADDR64BitRegClassID],
    ADDR64BitSubClassMask,
    SuperRegIdxSeqs + 8,
    LaneBitmask(0x00000009),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ADDR64BitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VR128BitRegClass = {
    &SystemZMCRegisterClasses[VR128BitRegClassID],
    VR128BitSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000007),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VF128BitRegClass = {
    &SystemZMCRegisterClasses[VF128BitRegClassID],
    VF128BitSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000007),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VF128BitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass FP128BitRegClass = {
    &SystemZMCRegisterClasses[FP128BitRegClassID],
    FP128BitSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000F),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GR128BitRegClass = {
    &SystemZMCRegisterClasses[GR128BitRegClassID],
    GR128BitSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000F),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass ADDR128BitRegClass = {
    &SystemZMCRegisterClasses[ADDR128BitRegClassID],
    ADDR128BitSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000F),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ADDR128BitSuperclasses,
    nullptr
  };

} // end namespace SystemZ

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &SystemZ::GRX32BitRegClass,
    &SystemZ::VR32BitRegClass,
    &SystemZ::AR32BitRegClass,
    &SystemZ::FP32BitRegClass,
    &SystemZ::GR32BitRegClass,
    &SystemZ::GRH32BitRegClass,
    &SystemZ::ADDR32BitRegClass,
    &SystemZ::CCRRegClass,
    &SystemZ::FPCRegsRegClass,
    &SystemZ::AnyRegBitRegClass,
    &SystemZ::AnyRegBit_with_subreg_h32_in_FP32BitRegClass,
    &SystemZ::VR64BitRegClass,
    &SystemZ::AnyRegBit_with_subreg_h64RegClass,
    &SystemZ::CR64BitRegClass,
    &SystemZ::FP64BitRegClass,
    &SystemZ::GR64BitRegClass,
    &SystemZ::ADDR64BitRegClass,
    &SystemZ::VR128BitRegClass,
    &SystemZ::VF128BitRegClass,
    &SystemZ::FP128BitRegClass,
    &SystemZ::GR128BitRegClass,
    &SystemZ::ADDR128BitRegClass,
  };
} // end anonymous namespace

static const TargetRegisterInfoDesc SystemZRegInfoDesc[] = { // Extra Descriptors
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
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
unsigned SystemZGenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t RowMap[6] = {
    0, 0, 0, 0, 0, 1, 
  };
  static const uint8_t Rows[2][6] = {
    { SystemZ::subreg_hh32, 0, 0, 0, SystemZ::subreg_hl32, 0, },
    { SystemZ::subreg_h32, 0, 0, 0, SystemZ::subreg_l32, 0, },
  };

  --IdxA; assert(IdxA < 6);
  --IdxB; assert(IdxB < 6);
  return Rows[RowMap[IdxA]][IdxB];
}

  struct MaskRolOp {
    LaneBitmask Mask;
    uint8_t  RotateLeft;
  };
  static const MaskRolOp LaneMaskComposeSequences[] = {
    { LaneBitmask(0xFFFFFFFF),  0 }, { LaneBitmask::getNone(), 0 },   // Sequence 0
    { LaneBitmask(0x00000001),  1 }, { LaneBitmask(0x00000008), 31 }, { LaneBitmask::getNone(), 0 },   // Sequence 2
    { LaneBitmask(0xFFFFFFFF),  1 }, { LaneBitmask::getNone(), 0 },   // Sequence 5
    { LaneBitmask(0xFFFFFFFF),  2 }, { LaneBitmask::getNone(), 0 },   // Sequence 7
    { LaneBitmask(0xFFFFFFFF),  3 }, { LaneBitmask::getNone(), 0 }  // Sequence 9
  };
  static const MaskRolOp *const CompositeSequences[] = {
    &LaneMaskComposeSequences[0], // to subreg_h32
    &LaneMaskComposeSequences[2], // to subreg_h64
    &LaneMaskComposeSequences[5], // to subreg_hh32
    &LaneMaskComposeSequences[7], // to subreg_hl32
    &LaneMaskComposeSequences[9], // to subreg_l32
    &LaneMaskComposeSequences[0] // to subreg_l64
  };

LaneBitmask SystemZGenRegisterInfo::composeSubRegIndexLaneMaskImpl(unsigned IdxA, LaneBitmask LaneMask) const {
  --IdxA; assert(IdxA < 6 && "Subregister index out of bounds");
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

LaneBitmask SystemZGenRegisterInfo::reverseComposeSubRegIndexLaneMaskImpl(unsigned IdxA,  LaneBitmask LaneMask) const {
  LaneMask &= getSubRegIndexLaneMask(IdxA);
  --IdxA; assert(IdxA < 6 && "Subregister index out of bounds");
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

const TargetRegisterClass *SystemZGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[22][6] = {
    {	// GRX32Bit
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_l32
      0,	// subreg_l64
    },
    {	// VR32Bit
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_l32
      0,	// subreg_l64
    },
    {	// AR32Bit
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_l32
      0,	// subreg_l64
    },
    {	// FP32Bit
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_l32
      0,	// subreg_l64
    },
    {	// GR32Bit
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_l32
      0,	// subreg_l64
    },
    {	// GRH32Bit
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_l32
      0,	// subreg_l64
    },
    {	// ADDR32Bit
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_l32
      0,	// subreg_l64
    },
    {	// CCR
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_l32
      0,	// subreg_l64
    },
    {	// FPCRegs
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_l32
      0,	// subreg_l64
    },
    {	// AnyRegBit
      10,	// subreg_h32 -> AnyRegBit
      13,	// subreg_h64 -> AnyRegBit_with_subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      16,	// subreg_l32 -> GR64Bit
      0,	// subreg_l64
    },
    {	// AnyRegBit_with_subreg_h32_in_FP32Bit
      11,	// subreg_h32 -> AnyRegBit_with_subreg_h32_in_FP32Bit
      13,	// subreg_h64 -> AnyRegBit_with_subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_l32
      0,	// subreg_l64
    },
    {	// VR64Bit
      12,	// subreg_h32 -> VR64Bit
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_l32
      0,	// subreg_l64
    },
    {	// AnyRegBit_with_subreg_h64
      13,	// subreg_h32 -> AnyRegBit_with_subreg_h64
      13,	// subreg_h64 -> AnyRegBit_with_subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_l32
      0,	// subreg_l64
    },
    {	// CR64Bit
      0,	// subreg_h32
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_l32
      0,	// subreg_l64
    },
    {	// FP64Bit
      15,	// subreg_h32 -> FP64Bit
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_l32
      0,	// subreg_l64
    },
    {	// GR64Bit
      16,	// subreg_h32 -> GR64Bit
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      16,	// subreg_l32 -> GR64Bit
      0,	// subreg_l64
    },
    {	// ADDR64Bit
      17,	// subreg_h32 -> ADDR64Bit
      0,	// subreg_h64
      0,	// subreg_hh32
      0,	// subreg_hl32
      17,	// subreg_l32 -> ADDR64Bit
      0,	// subreg_l64
    },
    {	// VR128Bit
      18,	// subreg_h32 -> VR128Bit
      18,	// subreg_h64 -> VR128Bit
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_l32
      0,	// subreg_l64
    },
    {	// VF128Bit
      19,	// subreg_h32 -> VF128Bit
      19,	// subreg_h64 -> VF128Bit
      0,	// subreg_hh32
      0,	// subreg_hl32
      0,	// subreg_l32
      0,	// subreg_l64
    },
    {	// FP128Bit
      20,	// subreg_h32 -> FP128Bit
      20,	// subreg_h64 -> FP128Bit
      20,	// subreg_hh32 -> FP128Bit
      0,	// subreg_hl32
      0,	// subreg_l32
      20,	// subreg_l64 -> FP128Bit
    },
    {	// GR128Bit
      21,	// subreg_h32 -> GR128Bit
      21,	// subreg_h64 -> GR128Bit
      21,	// subreg_hh32 -> GR128Bit
      21,	// subreg_hl32 -> GR128Bit
      21,	// subreg_l32 -> GR128Bit
      21,	// subreg_l64 -> GR128Bit
    },
    {	// ADDR128Bit
      22,	// subreg_h32 -> ADDR128Bit
      22,	// subreg_h64 -> ADDR128Bit
      22,	// subreg_hh32 -> ADDR128Bit
      22,	// subreg_hl32 -> ADDR128Bit
      22,	// subreg_l32 -> ADDR128Bit
      22,	// subreg_l64 -> ADDR128Bit
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 6 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : nullptr;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &SystemZGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 32},  	// GRX32Bit
    {1, 32},  	// VR32Bit
    {0, 0},  	// AR32Bit
    {1, 16},  	// FP32Bit
    {1, 16},  	// GR32Bit
    {1, 16},  	// GRH32Bit
    {1, 15},  	// ADDR32Bit
    {0, 0},  	// CCR
    {0, 0},  	// FPCRegs
    {1, 48},  	// AnyRegBit
    {1, 16},  	// AnyRegBit_with_subreg_h32_in_FP32Bit
    {1, 32},  	// VR64Bit
    {1, 16},  	// AnyRegBit_with_subreg_h64
    {0, 0},  	// CR64Bit
    {1, 16},  	// FP64Bit
    {2, 32},  	// GR64Bit
    {2, 30},  	// ADDR64Bit
    {1, 32},  	// VR128Bit
    {1, 16},  	// VF128Bit
    {2, 16},  	// FP128Bit
    {4, 32},  	// GR128Bit
    {4, 28},  	// ADDR128Bit
  };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned SystemZGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 98 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned SystemZGenRegisterInfo::getNumRegPressureSets() const {
  return 5;
}

// Get the name of this register unit pressure set.
const char *SystemZGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *const PressureNameTable[] = {
    "FP32Bit",
    "GR32Bit",
    "GRH32Bit",
    "GRX32Bit",
    "VR32Bit",
  };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned SystemZGenRegisterInfo::
getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const {
  static const uint8_t PressureLimitTable[] = {
    16,  	// 0: FP32Bit
    16,  	// 1: GR32Bit
    16,  	// 2: GRH32Bit
    32,  	// 3: GRX32Bit
    32,  	// 4: VR32Bit
  };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
  /* 0 */ 1, 3, -1,
  /* 3 */ 2, 3, -1,
  /* 6 */ 0, 4, -1,
};

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* SystemZGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const uint8_t RCSetStartTable[] = {
    1,7,2,6,0,3,0,2,2,2,2,7,2,2,6,1,1,7,6,6,1,1,};
  return &RCSetsTable[RCSetStartTable[RC->getID()]];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* SystemZGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 98 && "invalid register unit");
  static const uint8_t RUSetStartTable[] = {
    2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,};
  return &RCSetsTable[RUSetStartTable[RegUnit]];
}

extern const MCRegisterDesc SystemZRegDesc[];
extern const MCPhysReg SystemZRegDiffLists[];
extern const LaneBitmask SystemZLaneMaskLists[];
extern const char SystemZRegStrings[];
extern const char SystemZRegClassStrings[];
extern const MCPhysReg SystemZRegUnitRoots[][2];
extern const uint16_t SystemZSubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits SystemZSubRegIdxRanges[];
extern const uint16_t SystemZRegEncodingTable[];
// SystemZ Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair SystemZDwarfFlavour0Dwarf2L[];
extern const unsigned SystemZDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZEHFlavour0Dwarf2L[];
extern const unsigned SystemZEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZDwarfFlavour0L2Dwarf[];
extern const unsigned SystemZDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SystemZEHFlavour0L2Dwarf[];
extern const unsigned SystemZEHFlavour0L2DwarfSize;

SystemZGenRegisterInfo::
SystemZGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour,
      unsigned PC, unsigned HwMode)
  : TargetRegisterInfo(SystemZRegInfoDesc, RegisterClasses, RegisterClasses+22,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable,
             LaneBitmask(0xFFFFFFF8), RegClassInfos, HwMode) {
  InitMCRegisterInfo(SystemZRegDesc, 195, RA, PC,
                     SystemZMCRegisterClasses, 22,
                     SystemZRegUnitRoots,
                     98,
                     SystemZRegDiffLists,
                     SystemZLaneMaskLists,
                     SystemZRegStrings,
                     SystemZRegClassStrings,
                     SystemZSubRegIdxLists,
                     7,
                     SystemZSubRegIdxRanges,
                     SystemZRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(SystemZDwarfFlavour0Dwarf2L, SystemZDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(SystemZEHFlavour0Dwarf2L, SystemZEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(SystemZDwarfFlavour0L2Dwarf, SystemZDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(SystemZEHFlavour0L2Dwarf, SystemZEHFlavour0L2DwarfSize, true);
    break;
  }
}

static const MCPhysReg CSR_SystemZ_SaveList[] = { SystemZ::R6D, SystemZ::R7D, SystemZ::R8D, SystemZ::R9D, SystemZ::R10D, SystemZ::R11D, SystemZ::R12D, SystemZ::R13D, SystemZ::R14D, SystemZ::R15D, SystemZ::F8D, SystemZ::F9D, SystemZ::F10D, SystemZ::F11D, SystemZ::F12D, SystemZ::F13D, SystemZ::F14D, SystemZ::F15D, 0 };
static const uint32_t CSR_SystemZ_RegMask[] = { 0x00000000, 0x00000000, 0x0007f800, 0x07f80780, 0x07fe0000, 0xc7fe07fe, 0x00000007, };
static const MCPhysReg CSR_SystemZ_AllRegs_SaveList[] = { SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R6D, SystemZ::R7D, SystemZ::R8D, SystemZ::R9D, SystemZ::R10D, SystemZ::R11D, SystemZ::R12D, SystemZ::R13D, SystemZ::R14D, SystemZ::R15D, SystemZ::F0D, SystemZ::F1D, SystemZ::F2D, SystemZ::F3D, SystemZ::F4D, SystemZ::F5D, SystemZ::F6D, SystemZ::F7D, SystemZ::F8D, SystemZ::F9D, SystemZ::F10D, SystemZ::F11D, SystemZ::F12D, SystemZ::F13D, SystemZ::F14D, SystemZ::F15D, 0 };
static const uint32_t CSR_SystemZ_AllRegs_RegMask[] = { 0x00000000, 0x00000000, 0x0007fff8, 0x07fffff8, 0xe7ffe000, 0xf7ffe7ff, 0x00000007, };
static const MCPhysReg CSR_SystemZ_AllRegs_Vector_SaveList[] = { SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R6D, SystemZ::R7D, SystemZ::R8D, SystemZ::R9D, SystemZ::R10D, SystemZ::R11D, SystemZ::R12D, SystemZ::R13D, SystemZ::R14D, SystemZ::R15D, SystemZ::V0, SystemZ::V1, SystemZ::V2, SystemZ::V3, SystemZ::V4, SystemZ::V5, SystemZ::V6, SystemZ::V7, SystemZ::V8, SystemZ::V9, SystemZ::V10, SystemZ::V11, SystemZ::V12, SystemZ::V13, SystemZ::V14, SystemZ::V15, SystemZ::V16, SystemZ::V17, SystemZ::V18, SystemZ::V19, SystemZ::V20, SystemZ::V21, SystemZ::V22, SystemZ::V23, SystemZ::V24, SystemZ::V25, SystemZ::V26, SystemZ::V27, SystemZ::V28, SystemZ::V29, SystemZ::V30, SystemZ::V31, 0 };
static const uint32_t CSR_SystemZ_AllRegs_Vector_RegMask[] = { 0x00000000, 0xfffffff8, 0xffffffff, 0xffffffff, 0xe7ffe7ff, 0xf7ffe7ff, 0x00000007, };
static const MCPhysReg CSR_SystemZ_NoRegs_SaveList[] = { 0 };
static const uint32_t CSR_SystemZ_NoRegs_RegMask[] = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_SystemZ_SwiftError_SaveList[] = { SystemZ::R6D, SystemZ::R7D, SystemZ::R8D, SystemZ::R10D, SystemZ::R11D, SystemZ::R12D, SystemZ::R13D, SystemZ::R14D, SystemZ::R15D, SystemZ::F8D, SystemZ::F9D, SystemZ::F10D, SystemZ::F11D, SystemZ::F12D, SystemZ::F13D, SystemZ::F14D, SystemZ::F15D, 0 };
static const uint32_t CSR_SystemZ_SwiftError_RegMask[] = { 0x00000000, 0x00000000, 0x0007f800, 0x07f80780, 0x07ee0000, 0x47ee07ee, 0x00000007, };


ArrayRef<const uint32_t *> SystemZGenRegisterInfo::getRegMasks() const {
  static const uint32_t *const Masks[] = {
    CSR_SystemZ_RegMask,
    CSR_SystemZ_AllRegs_RegMask,
    CSR_SystemZ_AllRegs_Vector_RegMask,
    CSR_SystemZ_NoRegs_RegMask,
    CSR_SystemZ_SwiftError_RegMask,
  };
  return makeArrayRef(Masks);
}

ArrayRef<const char *> SystemZGenRegisterInfo::getRegMaskNames() const {
  static const char *const Names[] = {
    "CSR_SystemZ",
    "CSR_SystemZ_AllRegs",
    "CSR_SystemZ_AllRegs_Vector",
    "CSR_SystemZ_NoRegs",
    "CSR_SystemZ_SwiftError",
  };
  return makeArrayRef(Names);
}

const SystemZFrameLowering *
SystemZGenRegisterInfo::getFrameLowering(const MachineFunction &MF) {
  return static_cast<const SystemZFrameLowering *>(
      MF.getSubtarget().getFrameLowering());
}

} // end namespace llvm

#endif // GET_REGINFO_TARGET_DESC


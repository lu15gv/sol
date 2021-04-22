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
extern const MCRegisterClass HexagonMCRegisterClasses[];

namespace Hexagon {
enum {
  NoRegister,
  CS = 1,
  FRAMEKEY = 2,
  FRAMELIMIT = 3,
  GELR = 4,
  GOSP = 5,
  GP = 6,
  GPCYCLEHI = 7,
  GPCYCLELO = 8,
  GSR = 9,
  PC = 10,
  PKTCOUNT = 11,
  PKTCOUNTHI = 12,
  PKTCOUNTLO = 13,
  UGP = 14,
  UPCYCLE = 15,
  UPCYCLEHI = 16,
  UPCYCLELO = 17,
  USR = 18,
  USR_OVF = 19,
  UTIMER = 20,
  UTIMERHI = 21,
  UTIMERLO = 22,
  VTMP = 23,
  C5 = 24,
  C8 = 25,
  CS0 = 26,
  CS1 = 27,
  D0 = 28,
  D1 = 29,
  D2 = 30,
  D3 = 31,
  D4 = 32,
  D5 = 33,
  D6 = 34,
  D7 = 35,
  D8 = 36,
  D9 = 37,
  D10 = 38,
  D11 = 39,
  D12 = 40,
  D13 = 41,
  D14 = 42,
  D15 = 43,
  G3 = 44,
  G4 = 45,
  G5 = 46,
  G6 = 47,
  G7 = 48,
  G8 = 49,
  G9 = 50,
  G10 = 51,
  G11 = 52,
  G12 = 53,
  G13 = 54,
  G14 = 55,
  G15 = 56,
  G20 = 57,
  G21 = 58,
  G22 = 59,
  G23 = 60,
  G30 = 61,
  G31 = 62,
  GPMUCNT0 = 63,
  GPMUCNT1 = 64,
  GPMUCNT2 = 65,
  GPMUCNT3 = 66,
  GPMUCNT4 = 67,
  GPMUCNT5 = 68,
  GPMUCNT6 = 69,
  GPMUCNT7 = 70,
  LC0 = 71,
  LC1 = 72,
  M0 = 73,
  M1 = 74,
  P0 = 75,
  P1 = 76,
  P2 = 77,
  P3 = 78,
  Q0 = 79,
  Q1 = 80,
  Q2 = 81,
  Q3 = 82,
  R0 = 83,
  R1 = 84,
  R2 = 85,
  R3 = 86,
  R4 = 87,
  R5 = 88,
  R6 = 89,
  R7 = 90,
  R8 = 91,
  R9 = 92,
  R10 = 93,
  R11 = 94,
  R12 = 95,
  R13 = 96,
  R14 = 97,
  R15 = 98,
  R16 = 99,
  R17 = 100,
  R18 = 101,
  R19 = 102,
  R20 = 103,
  R21 = 104,
  R22 = 105,
  R23 = 106,
  R24 = 107,
  R25 = 108,
  R26 = 109,
  R27 = 110,
  R28 = 111,
  R29 = 112,
  R30 = 113,
  R31 = 114,
  SA0 = 115,
  SA1 = 116,
  V0 = 117,
  V1 = 118,
  V2 = 119,
  V3 = 120,
  V4 = 121,
  V5 = 122,
  V6 = 123,
  V7 = 124,
  V8 = 125,
  V9 = 126,
  V10 = 127,
  V11 = 128,
  V12 = 129,
  V13 = 130,
  V14 = 131,
  V15 = 132,
  V16 = 133,
  V17 = 134,
  V18 = 135,
  V19 = 136,
  V20 = 137,
  V21 = 138,
  V22 = 139,
  V23 = 140,
  V24 = 141,
  V25 = 142,
  V26 = 143,
  V27 = 144,
  V28 = 145,
  V29 = 146,
  V30 = 147,
  V31 = 148,
  VQ0 = 149,
  VQ1 = 150,
  VQ2 = 151,
  VQ3 = 152,
  VQ4 = 153,
  VQ5 = 154,
  VQ6 = 155,
  VQ7 = 156,
  W0 = 157,
  W1 = 158,
  W2 = 159,
  W3 = 160,
  W4 = 161,
  W5 = 162,
  W6 = 163,
  W7 = 164,
  W8 = 165,
  W9 = 166,
  W10 = 167,
  W11 = 168,
  W12 = 169,
  W13 = 170,
  W14 = 171,
  W15 = 172,
  C1_0 = 173,
  C3_2 = 174,
  C5_4 = 175,
  C7_6 = 176,
  C9_8 = 177,
  C11_10 = 178,
  C17_16 = 179,
  G1_0 = 180,
  G3_2 = 181,
  G5_4 = 182,
  G7_6 = 183,
  G9_8 = 184,
  G11_10 = 185,
  G13_12 = 186,
  G15_14 = 187,
  G17_16 = 188,
  G19_18 = 189,
  G21_20 = 190,
  G23_22 = 191,
  G25_24 = 192,
  G27_26 = 193,
  G29_28 = 194,
  G31_30 = 195,
  P3_0 = 196,
  NUM_TARGET_REGS 	// 197
};
} // end namespace Hexagon

// Register classes

namespace Hexagon {
enum {
  UsrBitsRegClassID = 0,
  GuestRegsRegClassID = 1,
  IntRegsRegClassID = 2,
  CtrRegsRegClassID = 3,
  GeneralSubRegsRegClassID = 4,
  V62RegsRegClassID = 5,
  IntRegsLow8RegClassID = 6,
  CtrRegs_and_V62RegsRegClassID = 7,
  PredRegsRegClassID = 8,
  V62Regs_with_isub_hiRegClassID = 9,
  ModRegsRegClassID = 10,
  CtrRegs_with_subreg_overflowRegClassID = 11,
  V65RegsRegClassID = 12,
  DoubleRegsRegClassID = 13,
  GuestRegs64RegClassID = 14,
  CtrRegs64RegClassID = 15,
  GeneralDoubleLow8RegsRegClassID = 16,
  DoubleRegs_with_isub_hi_in_IntRegsLow8RegClassID = 17,
  CtrRegs64_and_V62RegsRegClassID = 18,
  CtrRegs64_with_isub_hi_in_ModRegsRegClassID = 19,
  HvxVRRegClassID = 20,
  HvxQRRegClassID = 21,
  HvxVR_and_V65RegsRegClassID = 22,
  HvxWRRegClassID = 23,
  HvxVQRRegClassID = 24,

  };
} // end namespace Hexagon


// Subregister indices

namespace Hexagon {
enum {
  NoSubRegister,
  isub_hi,	// 1
  isub_lo,	// 2
  subreg_overflow,	// 3
  vsub_hi,	// 4
  vsub_lo,	// 5
  wsub_hi,	// 6
  wsub_lo,	// 7
  wsub_hi_then_vsub_hi,	// 8
  wsub_hi_then_vsub_lo,	// 9
  NUM_TARGET_SUBREGS
};
} // end namespace Hexagon

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

extern const MCPhysReg HexagonRegDiffLists[] = {
  /* 0 */ 0, 0,
  /* 2 */ 0, 1, 0,
  /* 5 */ 21, 64, 1, 1, 1, 0,
  /* 11 */ 85, 1, 1, 1, 0,
  /* 16 */ 65035, 1, 1, 1, 0,
  /* 21 */ 7, 1, 0,
  /* 24 */ 11, 1, 0,
  /* 27 */ 14, 1, 0,
  /* 30 */ 16, 1, 0,
  /* 33 */ 18, 1, 0,
  /* 36 */ 25, 1, 0,
  /* 39 */ 55, 1, 0,
  /* 42 */ 56, 1, 0,
  /* 45 */ 57, 1, 0,
  /* 48 */ 58, 1, 0,
  /* 51 */ 59, 1, 0,
  /* 54 */ 60, 1, 0,
  /* 57 */ 61, 1, 0,
  /* 60 */ 62, 1, 0,
  /* 63 */ 63, 1, 0,
  /* 66 */ 64, 1, 0,
  /* 69 */ 65, 1, 0,
  /* 72 */ 66, 1, 0,
  /* 75 */ 67, 1, 0,
  /* 78 */ 68, 1, 0,
  /* 81 */ 69, 1, 0,
  /* 84 */ 70, 1, 0,
  /* 87 */ 71, 1, 0,
  /* 90 */ 83, 1, 0,
  /* 93 */ 65180, 1, 0,
  /* 96 */ 65223, 1, 0,
  /* 99 */ 65227, 1, 0,
  /* 102 */ 65237, 1, 0,
  /* 105 */ 65317, 1, 0,
  /* 108 */ 65399, 1, 0,
  /* 111 */ 65400, 1, 0,
  /* 114 */ 65401, 1, 0,
  /* 117 */ 65402, 1, 0,
  /* 120 */ 65403, 1, 0,
  /* 123 */ 65404, 1, 0,
  /* 126 */ 65406, 1, 0,
  /* 129 */ 65407, 1, 0,
  /* 132 */ 65415, 1, 0,
  /* 135 */ 65416, 1, 0,
  /* 138 */ 65433, 1, 0,
  /* 141 */ 65496, 1, 0,
  /* 144 */ 8, 65496, 1, 40, 65497, 1, 0,
  /* 151 */ 65498, 1, 0,
  /* 154 */ 9, 65498, 1, 38, 65499, 1, 0,
  /* 161 */ 65500, 1, 0,
  /* 164 */ 10, 65500, 1, 36, 65501, 1, 0,
  /* 171 */ 65502, 1, 0,
  /* 174 */ 11, 65502, 1, 34, 65503, 1, 0,
  /* 181 */ 65504, 1, 0,
  /* 184 */ 12, 65504, 1, 32, 65505, 1, 0,
  /* 191 */ 65506, 1, 0,
  /* 194 */ 13, 65506, 1, 30, 65507, 1, 0,
  /* 201 */ 65508, 1, 0,
  /* 204 */ 14, 65508, 1, 28, 65509, 1, 0,
  /* 211 */ 65510, 1, 0,
  /* 214 */ 15, 65510, 1, 26, 65511, 1, 0,
  /* 221 */ 65360, 5, 0,
  /* 224 */ 6, 7, 0,
  /* 227 */ 10, 7, 0,
  /* 230 */ 10, 0,
  /* 232 */ 65444, 12, 0,
  /* 235 */ 14, 0,
  /* 237 */ 15, 0,
  /* 239 */ 16, 0,
  /* 241 */ 17, 0,
  /* 243 */ 19, 0,
  /* 245 */ 65360, 39, 0,
  /* 248 */ 65360, 49, 0,
  /* 251 */ 58, 0,
  /* 253 */ 102, 0,
  /* 255 */ 103, 0,
  /* 257 */ 119, 0,
  /* 259 */ 120, 0,
  /* 261 */ 121, 0,
  /* 263 */ 128, 0,
  /* 265 */ 129, 0,
  /* 267 */ 130, 0,
  /* 269 */ 131, 0,
  /* 271 */ 132, 0,
  /* 273 */ 133, 0,
  /* 275 */ 134, 0,
  /* 277 */ 135, 0,
  /* 279 */ 136, 0,
  /* 281 */ 137, 0,
  /* 283 */ 151, 0,
  /* 285 */ 152, 0,
  /* 287 */ 164, 0,
  /* 289 */ 167, 0,
  /* 291 */ 171, 0,
  /* 293 */ 172, 0,
  /* 295 */ 176, 0,
  /* 297 */ 177, 0,
  /* 299 */ 184, 0,
  /* 301 */ 185, 0,
  /* 303 */ 21, 65364, 0,
  /* 306 */ 65465, 0,
  /* 308 */ 65466, 0,
  /* 310 */ 65467, 0,
  /* 312 */ 65468, 0,
  /* 314 */ 65469, 0,
  /* 316 */ 65470, 0,
  /* 318 */ 65471, 0,
  /* 320 */ 65472, 0,
  /* 322 */ 65473, 0,
  /* 324 */ 65474, 0,
  /* 326 */ 65475, 0,
  /* 328 */ 65476, 0,
  /* 330 */ 65477, 0,
  /* 332 */ 65478, 0,
  /* 334 */ 65479, 0,
  /* 336 */ 65480, 0,
  /* 338 */ 65481, 0,
  /* 340 */ 65478, 65492, 0,
  /* 343 */ 65510, 0,
  /* 345 */ 65511, 0,
  /* 347 */ 65514, 0,
  /* 349 */ 65515, 0,
  /* 351 */ 24, 65520, 0,
  /* 354 */ 25, 65520, 0,
  /* 357 */ 25, 65521, 0,
  /* 360 */ 26, 65521, 0,
  /* 363 */ 27, 65521, 0,
  /* 366 */ 65384, 65521, 0,
  /* 369 */ 27, 65522, 0,
  /* 372 */ 28, 65522, 0,
  /* 375 */ 29, 65522, 0,
  /* 378 */ 29, 65523, 0,
  /* 381 */ 30, 65523, 0,
  /* 384 */ 31, 65523, 0,
  /* 387 */ 31, 65524, 0,
  /* 390 */ 32, 65524, 0,
  /* 393 */ 33, 65524, 0,
  /* 396 */ 33, 65525, 0,
  /* 399 */ 34, 65525, 0,
  /* 402 */ 35, 65525, 0,
  /* 405 */ 35, 65526, 0,
  /* 408 */ 36, 65526, 0,
  /* 411 */ 37, 65526, 0,
  /* 414 */ 37, 65527, 0,
  /* 417 */ 38, 65527, 0,
  /* 420 */ 39, 65527, 0,
  /* 423 */ 39, 65528, 0,
  /* 426 */ 40, 65528, 0,
  /* 429 */ 65372, 65528, 0,
  /* 432 */ 65533, 0,
  /* 434 */ 65534, 0,
  /* 436 */ 2, 65535, 0,
  /* 439 */ 65352, 65535, 0,
  /* 442 */ 65360, 65535, 0,
};

extern const LaneBitmask HexagonLaneMaskLists[] = {
  /* 0 */ LaneBitmask(0x00000000), LaneBitmask(0x00000000), LaneBitmask(0x00000000), LaneBitmask(0x00000000), LaneBitmask::getAll(),
  /* 5 */ LaneBitmask(0x00000004), LaneBitmask(0x00000000), LaneBitmask::getAll(),
  /* 8 */ LaneBitmask(0x00000002), LaneBitmask(0x00000001), LaneBitmask::getAll(),
  /* 11 */ LaneBitmask(0x00000001), LaneBitmask(0x00000002), LaneBitmask::getAll(),
  /* 14 */ LaneBitmask(0x00000001), LaneBitmask(0x00000002), LaneBitmask(0x00000002), LaneBitmask(0x00000002), LaneBitmask(0x00000002), LaneBitmask::getAll(),
  /* 20 */ LaneBitmask(0x00000010), LaneBitmask(0x00000008), LaneBitmask::getAll(),
  /* 23 */ LaneBitmask(0x00000010), LaneBitmask(0x00000008), LaneBitmask(0x00000040), LaneBitmask(0x00000020), LaneBitmask::getAll(),
};

extern const uint16_t HexagonSubRegIdxLists[] = {
  /* 0 */ 2, 1, 0,
  /* 3 */ 3, 0,
  /* 5 */ 5, 4, 0,
  /* 8 */ 7, 5, 4, 6, 9, 8, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits HexagonSubRegIdxRanges[] = {
  { 65535, 65535 },
  { 32, 32 },	// isub_hi
  { 0, 32 },	// isub_lo
  { 0, 1 },	// subreg_overflow
  { 512, 512 },	// vsub_hi
  { 0, 512 },	// vsub_lo
  { 1024, 1024 },	// wsub_hi
  { 0, 1024 },	// wsub_lo
  { 1536, 512 },	// wsub_hi_then_vsub_hi
  { 1024, 512 },	// wsub_hi_then_vsub_lo
};

extern const char HexagonRegStrings[] = {
  /* 0 */ 'D', '1', '0', 0,
  /* 4 */ 'G', '1', '0', 0,
  /* 8 */ 'R', '1', '0', 0,
  /* 12 */ 'V', '1', '0', 0,
  /* 16 */ 'W', '1', '0', 0,
  /* 20 */ 'C', '1', '1', '_', '1', '0', 0,
  /* 27 */ 'G', '1', '1', '_', '1', '0', 0,
  /* 34 */ 'G', '2', '0', 0,
  /* 38 */ 'R', '2', '0', 0,
  /* 42 */ 'V', '2', '0', 0,
  /* 46 */ 'G', '2', '1', '_', '2', '0', 0,
  /* 53 */ 'G', '3', '0', 0,
  /* 57 */ 'R', '3', '0', 0,
  /* 61 */ 'V', '3', '0', 0,
  /* 65 */ 'G', '3', '1', '_', '3', '0', 0,
  /* 72 */ 'S', 'A', '0', 0,
  /* 76 */ 'L', 'C', '0', 0,
  /* 80 */ 'D', '0', 0,
  /* 83 */ 'M', '0', 0,
  /* 86 */ 'P', '0', 0,
  /* 89 */ 'V', 'Q', '0', 0,
  /* 93 */ 'R', '0', 0,
  /* 96 */ 'C', 'S', '0', 0,
  /* 100 */ 'G', 'P', 'M', 'U', 'C', 'N', 'T', '0', 0,
  /* 109 */ 'V', '0', 0,
  /* 112 */ 'W', '0', 0,
  /* 115 */ 'C', '1', '_', '0', 0,
  /* 120 */ 'G', '1', '_', '0', 0,
  /* 125 */ 'P', '3', '_', '0', 0,
  /* 130 */ 'D', '1', '1', 0,
  /* 134 */ 'G', '1', '1', 0,
  /* 138 */ 'R', '1', '1', 0,
  /* 142 */ 'V', '1', '1', 0,
  /* 146 */ 'W', '1', '1', 0,
  /* 150 */ 'G', '2', '1', 0,
  /* 154 */ 'R', '2', '1', 0,
  /* 158 */ 'V', '2', '1', 0,
  /* 162 */ 'G', '3', '1', 0,
  /* 166 */ 'R', '3', '1', 0,
  /* 170 */ 'V', '3', '1', 0,
  /* 174 */ 'S', 'A', '1', 0,
  /* 178 */ 'L', 'C', '1', 0,
  /* 182 */ 'D', '1', 0,
  /* 185 */ 'M', '1', 0,
  /* 188 */ 'P', '1', 0,
  /* 191 */ 'V', 'Q', '1', 0,
  /* 195 */ 'R', '1', 0,
  /* 198 */ 'C', 'S', '1', 0,
  /* 202 */ 'G', 'P', 'M', 'U', 'C', 'N', 'T', '1', 0,
  /* 211 */ 'V', '1', 0,
  /* 214 */ 'W', '1', 0,
  /* 217 */ 'D', '1', '2', 0,
  /* 221 */ 'G', '1', '2', 0,
  /* 225 */ 'R', '1', '2', 0,
  /* 229 */ 'V', '1', '2', 0,
  /* 233 */ 'W', '1', '2', 0,
  /* 237 */ 'G', '1', '3', '_', '1', '2', 0,
  /* 244 */ 'G', '2', '2', 0,
  /* 248 */ 'R', '2', '2', 0,
  /* 252 */ 'V', '2', '2', 0,
  /* 256 */ 'G', '2', '3', '_', '2', '2', 0,
  /* 263 */ 'D', '2', 0,
  /* 266 */ 'P', '2', 0,
  /* 269 */ 'V', 'Q', '2', 0,
  /* 273 */ 'R', '2', 0,
  /* 276 */ 'G', 'P', 'M', 'U', 'C', 'N', 'T', '2', 0,
  /* 285 */ 'V', '2', 0,
  /* 288 */ 'W', '2', 0,
  /* 291 */ 'C', '3', '_', '2', 0,
  /* 296 */ 'G', '3', '_', '2', 0,
  /* 301 */ 'D', '1', '3', 0,
  /* 305 */ 'G', '1', '3', 0,
  /* 309 */ 'R', '1', '3', 0,
  /* 313 */ 'V', '1', '3', 0,
  /* 317 */ 'W', '1', '3', 0,
  /* 321 */ 'G', '2', '3', 0,
  /* 325 */ 'R', '2', '3', 0,
  /* 329 */ 'V', '2', '3', 0,
  /* 333 */ 'D', '3', 0,
  /* 336 */ 'G', '3', 0,
  /* 339 */ 'P', '3', 0,
  /* 342 */ 'V', 'Q', '3', 0,
  /* 346 */ 'R', '3', 0,
  /* 349 */ 'G', 'P', 'M', 'U', 'C', 'N', 'T', '3', 0,
  /* 358 */ 'V', '3', 0,
  /* 361 */ 'W', '3', 0,
  /* 364 */ 'D', '1', '4', 0,
  /* 368 */ 'G', '1', '4', 0,
  /* 372 */ 'R', '1', '4', 0,
  /* 376 */ 'V', '1', '4', 0,
  /* 380 */ 'W', '1', '4', 0,
  /* 384 */ 'G', '1', '5', '_', '1', '4', 0,
  /* 391 */ 'R', '2', '4', 0,
  /* 395 */ 'V', '2', '4', 0,
  /* 399 */ 'G', '2', '5', '_', '2', '4', 0,
  /* 406 */ 'D', '4', 0,
  /* 409 */ 'G', '4', 0,
  /* 412 */ 'V', 'Q', '4', 0,
  /* 416 */ 'R', '4', 0,
  /* 419 */ 'G', 'P', 'M', 'U', 'C', 'N', 'T', '4', 0,
  /* 428 */ 'V', '4', 0,
  /* 431 */ 'W', '4', 0,
  /* 434 */ 'C', '5', '_', '4', 0,
  /* 439 */ 'G', '5', '_', '4', 0,
  /* 444 */ 'D', '1', '5', 0,
  /* 448 */ 'G', '1', '5', 0,
  /* 452 */ 'R', '1', '5', 0,
  /* 456 */ 'V', '1', '5', 0,
  /* 460 */ 'W', '1', '5', 0,
  /* 464 */ 'R', '2', '5', 0,
  /* 468 */ 'V', '2', '5', 0,
  /* 472 */ 'C', '5', 0,
  /* 475 */ 'D', '5', 0,
  /* 478 */ 'G', '5', 0,
  /* 481 */ 'V', 'Q', '5', 0,
  /* 485 */ 'R', '5', 0,
  /* 488 */ 'G', 'P', 'M', 'U', 'C', 'N', 'T', '5', 0,
  /* 497 */ 'V', '5', 0,
  /* 500 */ 'W', '5', 0,
  /* 503 */ 'R', '1', '6', 0,
  /* 507 */ 'V', '1', '6', 0,
  /* 511 */ 'C', '1', '7', '_', '1', '6', 0,
  /* 518 */ 'G', '1', '7', '_', '1', '6', 0,
  /* 525 */ 'R', '2', '6', 0,
  /* 529 */ 'V', '2', '6', 0,
  /* 533 */ 'G', '2', '7', '_', '2', '6', 0,
  /* 540 */ 'D', '6', 0,
  /* 543 */ 'G', '6', 0,
  /* 546 */ 'V', 'Q', '6', 0,
  /* 550 */ 'R', '6', 0,
  /* 553 */ 'G', 'P', 'M', 'U', 'C', 'N', 'T', '6', 0,
  /* 562 */ 'V', '6', 0,
  /* 565 */ 'W', '6', 0,
  /* 568 */ 'C', '7', '_', '6', 0,
  /* 573 */ 'G', '7', '_', '6', 0,
  /* 578 */ 'R', '1', '7', 0,
  /* 582 */ 'V', '1', '7', 0,
  /* 586 */ 'R', '2', '7', 0,
  /* 590 */ 'V', '2', '7', 0,
  /* 594 */ 'D', '7', 0,
  /* 597 */ 'G', '7', 0,
  /* 600 */ 'V', 'Q', '7', 0,
  /* 604 */ 'R', '7', 0,
  /* 607 */ 'G', 'P', 'M', 'U', 'C', 'N', 'T', '7', 0,
  /* 616 */ 'V', '7', 0,
  /* 619 */ 'W', '7', 0,
  /* 622 */ 'R', '1', '8', 0,
  /* 626 */ 'V', '1', '8', 0,
  /* 630 */ 'G', '1', '9', '_', '1', '8', 0,
  /* 637 */ 'R', '2', '8', 0,
  /* 641 */ 'V', '2', '8', 0,
  /* 645 */ 'G', '2', '9', '_', '2', '8', 0,
  /* 652 */ 'C', '8', 0,
  /* 655 */ 'D', '8', 0,
  /* 658 */ 'G', '8', 0,
  /* 661 */ 'R', '8', 0,
  /* 664 */ 'V', '8', 0,
  /* 667 */ 'W', '8', 0,
  /* 670 */ 'C', '9', '_', '8', 0,
  /* 675 */ 'G', '9', '_', '8', 0,
  /* 680 */ 'R', '1', '9', 0,
  /* 684 */ 'V', '1', '9', 0,
  /* 688 */ 'R', '2', '9', 0,
  /* 692 */ 'V', '2', '9', 0,
  /* 696 */ 'D', '9', 0,
  /* 699 */ 'G', '9', 0,
  /* 702 */ 'R', '9', 0,
  /* 705 */ 'V', '9', 0,
  /* 708 */ 'W', '9', 0,
  /* 711 */ 'P', 'C', 0,
  /* 714 */ 'U', 'P', 'C', 'Y', 'C', 'L', 'E', 0,
  /* 722 */ 'U', 'S', 'R', '_', 'O', 'V', 'F', 0,
  /* 730 */ 'G', 'P', 'C', 'Y', 'C', 'L', 'E', 'H', 'I', 0,
  /* 740 */ 'U', 'P', 'C', 'Y', 'C', 'L', 'E', 'H', 'I', 0,
  /* 750 */ 'U', 'T', 'I', 'M', 'E', 'R', 'H', 'I', 0,
  /* 759 */ 'P', 'K', 'T', 'C', 'O', 'U', 'N', 'T', 'H', 'I', 0,
  /* 770 */ 'G', 'P', 'C', 'Y', 'C', 'L', 'E', 'L', 'O', 0,
  /* 780 */ 'U', 'P', 'C', 'Y', 'C', 'L', 'E', 'L', 'O', 0,
  /* 790 */ 'U', 'T', 'I', 'M', 'E', 'R', 'L', 'O', 0,
  /* 799 */ 'P', 'K', 'T', 'C', 'O', 'U', 'N', 'T', 'L', 'O', 0,
  /* 810 */ 'U', 'G', 'P', 0,
  /* 814 */ 'V', 'T', 'M', 'P', 0,
  /* 819 */ 'G', 'O', 'S', 'P', 0,
  /* 824 */ 'U', 'T', 'I', 'M', 'E', 'R', 0,
  /* 831 */ 'G', 'E', 'L', 'R', 0,
  /* 836 */ 'G', 'S', 'R', 0,
  /* 840 */ 'U', 'S', 'R', 0,
  /* 844 */ 'C', 'S', 0,
  /* 847 */ 'F', 'R', 'A', 'M', 'E', 'L', 'I', 'M', 'I', 'T', 0,
  /* 858 */ 'P', 'K', 'T', 'C', 'O', 'U', 'N', 'T', 0,
  /* 867 */ 'F', 'R', 'A', 'M', 'E', 'K', 'E', 'Y', 0,
};

extern const MCRegisterDesc HexagonRegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0, 0 },
  { 844, 36, 1, 0, 32, 8 },
  { 867, 1, 297, 2, 1, 3 },
  { 847, 1, 295, 2, 1, 3 },
  { 831, 1, 295, 2, 1, 3 },
  { 819, 1, 295, 2, 1, 3 },
  { 811, 1, 293, 2, 1, 3 },
  { 730, 1, 301, 2, 1, 3 },
  { 770, 1, 299, 2, 1, 3 },
  { 836, 1, 291, 2, 1, 3 },
  { 711, 1, 289, 2, 1, 3 },
  { 858, 436, 1, 0, 384, 8 },
  { 759, 1, 437, 2, 3728, 3 },
  { 799, 1, 434, 2, 5730, 3 },
  { 810, 1, 287, 2, 5730, 3 },
  { 714, 436, 1, 0, 432, 8 },
  { 740, 1, 437, 2, 3792, 3 },
  { 780, 1, 434, 2, 3760, 3 },
  { 840, 3, 1, 3, 480, 5 },
  { 722, 1, 437, 2, 3824, 3 },
  { 824, 436, 1, 0, 528, 8 },
  { 750, 1, 437, 2, 3888, 3 },
  { 790, 1, 434, 2, 5490, 3 },
  { 814, 1, 1, 2, 6913, 3 },
  { 472, 1, 283, 2, 6913, 3 },
  { 652, 1, 285, 2, 3856, 3 },
  { 96, 1, 345, 2, 5489, 3 },
  { 198, 1, 343, 2, 5489, 3 },
  { 80, 39, 1, 0, 2738, 8 },
  { 182, 42, 1, 0, 2738, 8 },
  { 263, 45, 1, 0, 2738, 8 },
  { 333, 48, 1, 0, 2738, 8 },
  { 406, 51, 1, 0, 2738, 8 },
  { 475, 54, 1, 0, 2738, 8 },
  { 540, 57, 1, 0, 2738, 8 },
  { 594, 60, 1, 0, 2738, 8 },
  { 655, 63, 1, 0, 2738, 8 },
  { 696, 66, 1, 0, 2738, 8 },
  { 0, 69, 1, 0, 2738, 8 },
  { 130, 72, 1, 0, 2738, 8 },
  { 217, 75, 1, 0, 2738, 8 },
  { 301, 78, 1, 0, 2738, 8 },
  { 364, 81, 1, 0, 2738, 8 },
  { 444, 84, 1, 0, 2738, 8 },
  { 336, 1, 281, 2, 3681, 3 },
  { 409, 1, 281, 2, 3681, 3 },
  { 478, 1, 279, 2, 3681, 3 },
  { 543, 1, 279, 2, 3681, 3 },
  { 597, 1, 277, 2, 3681, 3 },
  { 658, 1, 277, 2, 3681, 3 },
  { 699, 1, 275, 2, 3681, 3 },
  { 4, 1, 275, 2, 3681, 3 },
  { 134, 1, 273, 2, 3681, 3 },
  { 221, 1, 273, 2, 3681, 3 },
  { 305, 1, 271, 2, 3681, 3 },
  { 368, 1, 271, 2, 3681, 3 },
  { 448, 1, 269, 2, 3681, 3 },
  { 34, 1, 273, 2, 3681, 3 },
  { 150, 1, 271, 2, 3681, 3 },
  { 244, 1, 271, 2, 3681, 3 },
  { 321, 1, 269, 2, 3681, 3 },
  { 53, 1, 275, 2, 3681, 3 },
  { 162, 1, 273, 2, 3681, 3 },
  { 100, 1, 267, 2, 3681, 3 },
  { 202, 1, 265, 2, 3681, 3 },
  { 276, 1, 265, 2, 3681, 3 },
  { 349, 1, 263, 2, 3681, 3 },
  { 419, 1, 261, 2, 3681, 3 },
  { 488, 1, 259, 2, 3681, 3 },
  { 553, 1, 259, 2, 3681, 3 },
  { 607, 1, 257, 2, 3681, 3 },
  { 76, 1, 253, 2, 3681, 3 },
  { 178, 1, 253, 2, 3681, 3 },
  { 83, 1, 255, 2, 3681, 3 },
  { 185, 1, 253, 2, 3681, 3 },
  { 86, 1, 1, 2, 3681, 3 },
  { 188, 1, 1, 2, 3681, 3 },
  { 266, 1, 1, 2, 3681, 3 },
  { 339, 1, 1, 2, 3681, 3 },
  { 90, 1, 1, 2, 3681, 3 },
  { 192, 1, 1, 2, 3681, 3 },
  { 270, 1, 1, 2, 3681, 3 },
  { 343, 1, 1, 2, 3681, 3 },
  { 93, 1, 338, 2, 5217, 3 },
  { 195, 1, 336, 2, 5217, 3 },
  { 273, 1, 336, 2, 5217, 3 },
  { 346, 1, 334, 2, 5217, 3 },
  { 416, 1, 334, 2, 5217, 3 },
  { 485, 1, 332, 2, 5217, 3 },
  { 550, 1, 332, 2, 5217, 3 },
  { 604, 1, 330, 2, 5217, 3 },
  { 661, 1, 330, 2, 5217, 3 },
  { 702, 1, 328, 2, 5217, 3 },
  { 8, 1, 328, 2, 5217, 3 },
  { 138, 1, 326, 2, 5217, 3 },
  { 225, 1, 326, 2, 5217, 3 },
  { 309, 1, 324, 2, 5217, 3 },
  { 372, 1, 324, 2, 5217, 3 },
  { 452, 1, 322, 2, 5217, 3 },
  { 503, 1, 322, 2, 5217, 3 },
  { 578, 1, 320, 2, 5217, 3 },
  { 622, 1, 320, 2, 5217, 3 },
  { 680, 1, 318, 2, 5217, 3 },
  { 38, 1, 318, 2, 5217, 3 },
  { 154, 1, 316, 2, 5217, 3 },
  { 248, 1, 316, 2, 5217, 3 },
  { 325, 1, 314, 2, 5217, 3 },
  { 391, 1, 314, 2, 5217, 3 },
  { 464, 1, 312, 2, 5217, 3 },
  { 525, 1, 312, 2, 5217, 3 },
  { 586, 1, 310, 2, 5217, 3 },
  { 637, 1, 310, 2, 5217, 3 },
  { 688, 1, 308, 2, 5217, 3 },
  { 57, 1, 308, 2, 5217, 3 },
  { 166, 1, 306, 2, 5217, 3 },
  { 72, 1, 251, 2, 5553, 3 },
  { 174, 1, 251, 2, 5553, 3 },
  { 109, 1, 426, 2, 5553, 3 },
  { 211, 1, 423, 2, 5553, 3 },
  { 285, 1, 420, 2, 5553, 3 },
  { 358, 1, 417, 2, 5553, 3 },
  { 428, 1, 417, 2, 5553, 3 },
  { 497, 1, 414, 2, 5553, 3 },
  { 562, 1, 411, 2, 5553, 3 },
  { 616, 1, 408, 2, 5553, 3 },
  { 664, 1, 408, 2, 5553, 3 },
  { 705, 1, 405, 2, 5553, 3 },
  { 12, 1, 402, 2, 5553, 3 },
  { 142, 1, 399, 2, 5553, 3 },
  { 229, 1, 399, 2, 5553, 3 },
  { 313, 1, 396, 2, 5553, 3 },
  { 376, 1, 393, 2, 5553, 3 },
  { 456, 1, 390, 2, 5553, 3 },
  { 507, 1, 390, 2, 5553, 3 },
  { 582, 1, 387, 2, 5553, 3 },
  { 626, 1, 384, 2, 5553, 3 },
  { 684, 1, 381, 2, 5553, 3 },
  { 42, 1, 381, 2, 5553, 3 },
  { 158, 1, 378, 2, 5553, 3 },
  { 252, 1, 375, 2, 5553, 3 },
  { 329, 1, 372, 2, 5553, 3 },
  { 395, 1, 372, 2, 5553, 3 },
  { 468, 1, 369, 2, 5553, 3 },
  { 529, 1, 363, 2, 5553, 3 },
  { 590, 1, 360, 2, 5553, 3 },
  { 641, 1, 360, 2, 5553, 3 },
  { 692, 1, 357, 2, 5553, 3 },
  { 61, 1, 354, 2, 5553, 3 },
  { 170, 1, 351, 2, 5553, 3 },
  { 89, 144, 1, 8, 260, 23 },
  { 191, 154, 1, 8, 260, 23 },
  { 269, 164, 1, 8, 260, 23 },
  { 342, 174, 1, 8, 260, 23 },
  { 412, 184, 1, 8, 260, 23 },
  { 481, 194, 1, 8, 260, 23 },
  { 546, 204, 1, 8, 260, 23 },
  { 600, 214, 1, 8, 260, 23 },
  { 112, 141, 424, 5, 1682, 20 },
  { 214, 148, 415, 5, 1682, 20 },
  { 288, 151, 415, 5, 1682, 20 },
  { 361, 158, 406, 5, 1682, 20 },
  { 431, 161, 406, 5, 1682, 20 },
  { 500, 168, 397, 5, 1682, 20 },
  { 565, 171, 397, 5, 1682, 20 },
  { 619, 178, 388, 5, 1682, 20 },
  { 667, 181, 388, 5, 1682, 20 },
  { 708, 188, 379, 5, 1682, 20 },
  { 16, 191, 379, 5, 1682, 20 },
  { 146, 198, 370, 5, 1682, 20 },
  { 233, 201, 370, 5, 1682, 20 },
  { 317, 208, 358, 5, 1682, 20 },
  { 380, 211, 358, 5, 1682, 20 },
  { 460, 218, 352, 5, 1682, 20 },
  { 115, 340, 1, 0, 3713, 11 },
  { 291, 340, 1, 0, 3713, 11 },
  { 434, 303, 1, 0, 80, 14 },
  { 568, 138, 1, 0, 1440, 8 },
  { 670, 366, 1, 0, 3632, 11 },
  { 20, 429, 1, 0, 3584, 11 },
  { 511, 442, 1, 0, 1490, 11 },
  { 120, 221, 1, 0, 3537, 8 },
  { 296, 245, 1, 0, 3969, 8 },
  { 439, 108, 1, 0, 1586, 8 },
  { 573, 111, 1, 0, 1586, 8 },
  { 675, 114, 1, 0, 1586, 8 },
  { 27, 117, 1, 0, 1586, 8 },
  { 237, 120, 1, 0, 1586, 8 },
  { 384, 123, 1, 0, 1586, 8 },
  { 518, 132, 1, 0, 1634, 8 },
  { 630, 135, 1, 0, 1634, 8 },
  { 46, 120, 1, 0, 1538, 8 },
  { 256, 123, 1, 0, 1538, 8 },
  { 399, 439, 1, 0, 336, 11 },
  { 533, 126, 1, 0, 1538, 8 },
  { 645, 129, 1, 0, 1538, 8 },
  { 65, 117, 1, 0, 1392, 8 },
  { 125, 1, 349, 2, 176, 0 },
};

extern const MCPhysReg HexagonRegUnitRoots[][2] = {
  { Hexagon::CS0 },
  { Hexagon::CS1 },
  { Hexagon::FRAMEKEY },
  { Hexagon::FRAMELIMIT },
  { Hexagon::GELR },
  { Hexagon::GOSP },
  { Hexagon::GP },
  { Hexagon::GPCYCLEHI },
  { Hexagon::GPCYCLELO },
  { Hexagon::GSR },
  { Hexagon::PC },
  { Hexagon::PKTCOUNTLO },
  { Hexagon::PKTCOUNTHI },
  { Hexagon::UGP },
  { Hexagon::UPCYCLELO },
  { Hexagon::UPCYCLEHI },
  { Hexagon::USR_OVF },
  { Hexagon::USR, Hexagon::C8 },
  { Hexagon::UTIMERLO },
  { Hexagon::UTIMERHI },
  { Hexagon::VTMP },
  { Hexagon::C5 },
  { Hexagon::R0 },
  { Hexagon::R1 },
  { Hexagon::R2 },
  { Hexagon::R3 },
  { Hexagon::R4 },
  { Hexagon::R5 },
  { Hexagon::R6 },
  { Hexagon::R7 },
  { Hexagon::R8 },
  { Hexagon::R9 },
  { Hexagon::R10 },
  { Hexagon::R11 },
  { Hexagon::R12 },
  { Hexagon::R13 },
  { Hexagon::R14 },
  { Hexagon::R15 },
  { Hexagon::R16 },
  { Hexagon::R17 },
  { Hexagon::R18 },
  { Hexagon::R19 },
  { Hexagon::R20 },
  { Hexagon::R21 },
  { Hexagon::R22 },
  { Hexagon::R23 },
  { Hexagon::R24 },
  { Hexagon::R25 },
  { Hexagon::R26 },
  { Hexagon::R27 },
  { Hexagon::R28 },
  { Hexagon::R29 },
  { Hexagon::R30 },
  { Hexagon::R31 },
  { Hexagon::G3 },
  { Hexagon::G4 },
  { Hexagon::G5 },
  { Hexagon::G6 },
  { Hexagon::G7 },
  { Hexagon::G8 },
  { Hexagon::G9 },
  { Hexagon::G10 },
  { Hexagon::G11 },
  { Hexagon::G12 },
  { Hexagon::G13 },
  { Hexagon::G14 },
  { Hexagon::G15 },
  { Hexagon::G20 },
  { Hexagon::G21 },
  { Hexagon::G22 },
  { Hexagon::G23 },
  { Hexagon::G30 },
  { Hexagon::G31 },
  { Hexagon::GPMUCNT0 },
  { Hexagon::GPMUCNT1 },
  { Hexagon::GPMUCNT2 },
  { Hexagon::GPMUCNT3 },
  { Hexagon::GPMUCNT4 },
  { Hexagon::GPMUCNT5 },
  { Hexagon::GPMUCNT6 },
  { Hexagon::GPMUCNT7 },
  { Hexagon::LC0 },
  { Hexagon::LC1 },
  { Hexagon::M0 },
  { Hexagon::M1 },
  { Hexagon::P0, Hexagon::P3_0 },
  { Hexagon::P1, Hexagon::P3_0 },
  { Hexagon::P2, Hexagon::P3_0 },
  { Hexagon::P3, Hexagon::P3_0 },
  { Hexagon::Q0 },
  { Hexagon::Q1 },
  { Hexagon::Q2 },
  { Hexagon::Q3 },
  { Hexagon::SA0 },
  { Hexagon::SA1 },
  { Hexagon::V0 },
  { Hexagon::V1 },
  { Hexagon::V2 },
  { Hexagon::V3 },
  { Hexagon::V4 },
  { Hexagon::V5 },
  { Hexagon::V6 },
  { Hexagon::V7 },
  { Hexagon::V8 },
  { Hexagon::V9 },
  { Hexagon::V10 },
  { Hexagon::V11 },
  { Hexagon::V12 },
  { Hexagon::V13 },
  { Hexagon::V14 },
  { Hexagon::V15 },
  { Hexagon::V16 },
  { Hexagon::V17 },
  { Hexagon::V18 },
  { Hexagon::V19 },
  { Hexagon::V20 },
  { Hexagon::V21 },
  { Hexagon::V22 },
  { Hexagon::V23 },
  { Hexagon::V24 },
  { Hexagon::V25 },
  { Hexagon::V26 },
  { Hexagon::V27 },
  { Hexagon::V28 },
  { Hexagon::V29 },
  { Hexagon::V30 },
  { Hexagon::V31 },
};

namespace {     // Register classes...
  // UsrBits Register Class...
  const MCPhysReg UsrBits[] = {
    Hexagon::USR_OVF, 
  };

  // UsrBits Bit set.
  const uint8_t UsrBitsBits[] = {
    0x00, 0x00, 0x08, 
  };

  // GuestRegs Register Class...
  const MCPhysReg GuestRegs[] = {
    Hexagon::GELR, Hexagon::GSR, Hexagon::GOSP, Hexagon::G3, Hexagon::G4, Hexagon::G5, Hexagon::G6, Hexagon::G7, Hexagon::G8, Hexagon::G9, Hexagon::G10, Hexagon::G11, Hexagon::G12, Hexagon::G13, Hexagon::G14, Hexagon::G15, Hexagon::GPMUCNT4, Hexagon::GPMUCNT5, Hexagon::GPMUCNT6, Hexagon::GPMUCNT7, Hexagon::G20, Hexagon::G21, Hexagon::G22, Hexagon::G23, Hexagon::GPCYCLELO, Hexagon::GPCYCLEHI, Hexagon::GPMUCNT0, Hexagon::GPMUCNT1, Hexagon::GPMUCNT2, Hexagon::GPMUCNT3, Hexagon::G30, Hexagon::G31, 
  };

  // GuestRegs Bit set.
  const uint8_t GuestRegsBits[] = {
    0xb0, 0x03, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0x7f, 
  };

  // IntRegs Register Class...
  const MCPhysReg IntRegs[] = {
    Hexagon::R0, Hexagon::R1, Hexagon::R2, Hexagon::R3, Hexagon::R4, Hexagon::R5, Hexagon::R6, Hexagon::R7, Hexagon::R8, Hexagon::R9, Hexagon::R12, Hexagon::R13, Hexagon::R14, Hexagon::R15, Hexagon::R16, Hexagon::R17, Hexagon::R18, Hexagon::R19, Hexagon::R20, Hexagon::R21, Hexagon::R22, Hexagon::R23, Hexagon::R24, Hexagon::R25, Hexagon::R26, Hexagon::R27, Hexagon::R28, Hexagon::R10, Hexagon::R11, Hexagon::R29, Hexagon::R30, Hexagon::R31, 
  };

  // IntRegs Bit set.
  const uint8_t IntRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // CtrRegs Register Class...
  const MCPhysReg CtrRegs[] = {
    Hexagon::LC0, Hexagon::SA0, Hexagon::LC1, Hexagon::SA1, Hexagon::P3_0, Hexagon::C5, Hexagon::C8, Hexagon::PC, Hexagon::UGP, Hexagon::GP, Hexagon::CS0, Hexagon::CS1, Hexagon::UPCYCLELO, Hexagon::UPCYCLEHI, Hexagon::FRAMELIMIT, Hexagon::FRAMEKEY, Hexagon::PKTCOUNTLO, Hexagon::PKTCOUNTHI, Hexagon::UTIMERLO, Hexagon::UTIMERHI, Hexagon::M0, Hexagon::M1, Hexagon::USR, 
  };

  // CtrRegs Bit set.
  const uint8_t CtrRegsBits[] = {
    0x4c, 0x74, 0x67, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 
  };

  // GeneralSubRegs Register Class...
  const MCPhysReg GeneralSubRegs[] = {
    Hexagon::R23, Hexagon::R22, Hexagon::R21, Hexagon::R20, Hexagon::R19, Hexagon::R18, Hexagon::R17, Hexagon::R16, Hexagon::R7, Hexagon::R6, Hexagon::R5, Hexagon::R4, Hexagon::R3, Hexagon::R2, Hexagon::R1, Hexagon::R0, 
  };

  // GeneralSubRegs Bit set.
  const uint8_t GeneralSubRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07, 0xf8, 0x07, 
  };

  // V62Regs Register Class...
  const MCPhysReg V62Regs[] = {
    Hexagon::FRAMELIMIT, Hexagon::FRAMEKEY, Hexagon::C17_16, Hexagon::PKTCOUNTLO, Hexagon::PKTCOUNTHI, Hexagon::PKTCOUNT, Hexagon::UTIMERLO, Hexagon::UTIMERHI, Hexagon::UTIMER, 
  };

  // V62Regs Bit set.
  const uint8_t V62RegsBits[] = {
    0x0c, 0x38, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
  };

  // IntRegsLow8 Register Class...
  const MCPhysReg IntRegsLow8[] = {
    Hexagon::R7, Hexagon::R6, Hexagon::R5, Hexagon::R4, Hexagon::R3, Hexagon::R2, Hexagon::R1, Hexagon::R0, 
  };

  // IntRegsLow8 Bit set.
  const uint8_t IntRegsLow8Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07, 
  };

  // CtrRegs_and_V62Regs Register Class...
  const MCPhysReg CtrRegs_and_V62Regs[] = {
    Hexagon::FRAMELIMIT, Hexagon::FRAMEKEY, Hexagon::PKTCOUNTLO, Hexagon::PKTCOUNTHI, Hexagon::UTIMERLO, Hexagon::UTIMERHI, 
  };

  // CtrRegs_and_V62Regs Bit set.
  const uint8_t CtrRegs_and_V62RegsBits[] = {
    0x0c, 0x30, 0x60, 
  };

  // PredRegs Register Class...
  const MCPhysReg PredRegs[] = {
    Hexagon::P0, Hexagon::P1, Hexagon::P2, Hexagon::P3, 
  };

  // PredRegs Bit set.
  const uint8_t PredRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 
  };

  // V62Regs_with_isub_hi Register Class...
  const MCPhysReg V62Regs_with_isub_hi[] = {
    Hexagon::C17_16, Hexagon::PKTCOUNT, Hexagon::UTIMER, 
  };

  // V62Regs_with_isub_hi Bit set.
  const uint8_t V62Regs_with_isub_hiBits[] = {
    0x00, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
  };

  // ModRegs Register Class...
  const MCPhysReg ModRegs[] = {
    Hexagon::M0, Hexagon::M1, 
  };

  // ModRegs Bit set.
  const uint8_t ModRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 
  };

  // CtrRegs_with_subreg_overflow Register Class...
  const MCPhysReg CtrRegs_with_subreg_overflow[] = {
    Hexagon::USR, 
  };

  // CtrRegs_with_subreg_overflow Bit set.
  const uint8_t CtrRegs_with_subreg_overflowBits[] = {
    0x00, 0x00, 0x04, 
  };

  // V65Regs Register Class...
  const MCPhysReg V65Regs[] = {
    Hexagon::VTMP, 
  };

  // V65Regs Bit set.
  const uint8_t V65RegsBits[] = {
    0x00, 0x00, 0x80, 
  };

  // DoubleRegs Register Class...
  const MCPhysReg DoubleRegs[] = {
    Hexagon::D0, Hexagon::D1, Hexagon::D2, Hexagon::D3, Hexagon::D4, Hexagon::D6, Hexagon::D7, Hexagon::D8, Hexagon::D9, Hexagon::D10, Hexagon::D11, Hexagon::D12, Hexagon::D13, Hexagon::D5, Hexagon::D14, Hexagon::D15, 
  };

  // DoubleRegs Bit set.
  const uint8_t DoubleRegsBits[] = {
    0x00, 0x00, 0x00, 0xf0, 0xff, 0x0f, 
  };

  // GuestRegs64 Register Class...
  const MCPhysReg GuestRegs64[] = {
    Hexagon::G1_0, Hexagon::G3_2, Hexagon::G5_4, Hexagon::G7_6, Hexagon::G9_8, Hexagon::G11_10, Hexagon::G13_12, Hexagon::G15_14, Hexagon::G17_16, Hexagon::G19_18, Hexagon::G21_20, Hexagon::G23_22, Hexagon::G25_24, Hexagon::G27_26, Hexagon::G29_28, Hexagon::G31_30, 
  };

  // GuestRegs64 Bit set.
  const uint8_t GuestRegs64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x0f, 
  };

  // CtrRegs64 Register Class...
  const MCPhysReg CtrRegs64[] = {
    Hexagon::C1_0, Hexagon::C3_2, Hexagon::C5_4, Hexagon::C7_6, Hexagon::C9_8, Hexagon::C11_10, Hexagon::CS, Hexagon::UPCYCLE, Hexagon::C17_16, Hexagon::PKTCOUNT, Hexagon::UTIMER, 
  };

  // CtrRegs64 Bit set.
  const uint8_t CtrRegs64Bits[] = {
    0x02, 0x88, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x0f, 
  };

  // GeneralDoubleLow8Regs Register Class...
  const MCPhysReg GeneralDoubleLow8Regs[] = {
    Hexagon::D11, Hexagon::D10, Hexagon::D9, Hexagon::D8, Hexagon::D3, Hexagon::D2, Hexagon::D1, Hexagon::D0, 
  };

  // GeneralDoubleLow8Regs Bit set.
  const uint8_t GeneralDoubleLow8RegsBits[] = {
    0x00, 0x00, 0x00, 0xf0, 0xf0, 
  };

  // DoubleRegs_with_isub_hi_in_IntRegsLow8 Register Class...
  const MCPhysReg DoubleRegs_with_isub_hi_in_IntRegsLow8[] = {
    Hexagon::D3, Hexagon::D2, Hexagon::D1, Hexagon::D0, 
  };

  // DoubleRegs_with_isub_hi_in_IntRegsLow8 Bit set.
  const uint8_t DoubleRegs_with_isub_hi_in_IntRegsLow8Bits[] = {
    0x00, 0x00, 0x00, 0xf0, 
  };

  // CtrRegs64_and_V62Regs Register Class...
  const MCPhysReg CtrRegs64_and_V62Regs[] = {
    Hexagon::C17_16, Hexagon::PKTCOUNT, Hexagon::UTIMER, 
  };

  // CtrRegs64_and_V62Regs Bit set.
  const uint8_t CtrRegs64_and_V62RegsBits[] = {
    0x00, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
  };

  // CtrRegs64_with_isub_hi_in_ModRegs Register Class...
  const MCPhysReg CtrRegs64_with_isub_hi_in_ModRegs[] = {
    Hexagon::C7_6, 
  };

  // CtrRegs64_with_isub_hi_in_ModRegs Bit set.
  const uint8_t CtrRegs64_with_isub_hi_in_ModRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
  };

  // HvxVR Register Class...
  const MCPhysReg HvxVR[] = {
    Hexagon::V0, Hexagon::V1, Hexagon::V2, Hexagon::V3, Hexagon::V4, Hexagon::V5, Hexagon::V6, Hexagon::V7, Hexagon::V8, Hexagon::V9, Hexagon::V10, Hexagon::V11, Hexagon::V12, Hexagon::V13, Hexagon::V14, Hexagon::V15, Hexagon::V16, Hexagon::V17, Hexagon::V18, Hexagon::V19, Hexagon::V20, Hexagon::V21, Hexagon::V22, Hexagon::V23, Hexagon::V24, Hexagon::V25, Hexagon::V26, Hexagon::V27, Hexagon::V28, Hexagon::V29, Hexagon::V30, Hexagon::V31, Hexagon::VTMP, 
  };

  // HvxVR Bit set.
  const uint8_t HvxVRBits[] = {
    0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0x1f, 
  };

  // HvxQR Register Class...
  const MCPhysReg HvxQR[] = {
    Hexagon::Q0, Hexagon::Q1, Hexagon::Q2, Hexagon::Q3, 
  };

  // HvxQR Bit set.
  const uint8_t HvxQRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 
  };

  // HvxVR_and_V65Regs Register Class...
  const MCPhysReg HvxVR_and_V65Regs[] = {
    Hexagon::VTMP, 
  };

  // HvxVR_and_V65Regs Bit set.
  const uint8_t HvxVR_and_V65RegsBits[] = {
    0x00, 0x00, 0x80, 
  };

  // HvxWR Register Class...
  const MCPhysReg HvxWR[] = {
    Hexagon::W0, Hexagon::W1, Hexagon::W2, Hexagon::W3, Hexagon::W4, Hexagon::W5, Hexagon::W6, Hexagon::W7, Hexagon::W8, Hexagon::W9, Hexagon::W10, Hexagon::W11, Hexagon::W12, Hexagon::W13, Hexagon::W14, Hexagon::W15, 
  };

  // HvxWR Bit set.
  const uint8_t HvxWRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0x1f, 
  };

  // HvxVQR Register Class...
  const MCPhysReg HvxVQR[] = {
    Hexagon::VQ0, Hexagon::VQ1, Hexagon::VQ2, Hexagon::VQ3, Hexagon::VQ4, Hexagon::VQ5, Hexagon::VQ6, Hexagon::VQ7, 
  };

  // HvxVQR Bit set.
  const uint8_t HvxVQRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1f, 
  };

} // end anonymous namespace

extern const char HexagonRegClassStrings[] = {
  /* 0 */ 'C', 't', 'r', 'R', 'e', 'g', 's', '6', '4', 0,
  /* 10 */ 'G', 'u', 'e', 's', 't', 'R', 'e', 'g', 's', '6', '4', 0,
  /* 22 */ 'D', 'o', 'u', 'b', 'l', 'e', 'R', 'e', 'g', 's', '_', 'w', 'i', 't', 'h', '_', 'i', 's', 'u', 'b', '_', 'h', 'i', '_', 'i', 'n', '_', 'I', 'n', 't', 'R', 'e', 'g', 's', 'L', 'o', 'w', '8', 0,
  /* 61 */ 'H', 'v', 'x', 'V', 'Q', 'R', 0,
  /* 68 */ 'H', 'v', 'x', 'Q', 'R', 0,
  /* 74 */ 'H', 'v', 'x', 'V', 'R', 0,
  /* 80 */ 'H', 'v', 'x', 'W', 'R', 0,
  /* 86 */ 'V', '6', '2', 'R', 'e', 'g', 's', '_', 'w', 'i', 't', 'h', '_', 'i', 's', 'u', 'b', '_', 'h', 'i', 0,
  /* 107 */ 'C', 't', 'r', 'R', 'e', 'g', 's', '6', '4', '_', 'a', 'n', 'd', '_', 'V', '6', '2', 'R', 'e', 'g', 's', 0,
  /* 129 */ 'C', 't', 'r', 'R', 'e', 'g', 's', '_', 'a', 'n', 'd', '_', 'V', '6', '2', 'R', 'e', 'g', 's', 0,
  /* 149 */ 'H', 'v', 'x', 'V', 'R', '_', 'a', 'n', 'd', '_', 'V', '6', '5', 'R', 'e', 'g', 's', 0,
  /* 167 */ 'G', 'e', 'n', 'e', 'r', 'a', 'l', 'D', 'o', 'u', 'b', 'l', 'e', 'L', 'o', 'w', '8', 'R', 'e', 'g', 's', 0,
  /* 189 */ 'G', 'e', 'n', 'e', 'r', 'a', 'l', 'S', 'u', 'b', 'R', 'e', 'g', 's', 0,
  /* 204 */ 'P', 'r', 'e', 'd', 'R', 'e', 'g', 's', 0,
  /* 213 */ 'C', 't', 'r', 'R', 'e', 'g', 's', '6', '4', '_', 'w', 'i', 't', 'h', '_', 'i', 's', 'u', 'b', '_', 'h', 'i', '_', 'i', 'n', '_', 'M', 'o', 'd', 'R', 'e', 'g', 's', 0,
  /* 247 */ 'D', 'o', 'u', 'b', 'l', 'e', 'R', 'e', 'g', 's', 0,
  /* 258 */ 'C', 't', 'r', 'R', 'e', 'g', 's', 0,
  /* 266 */ 'I', 'n', 't', 'R', 'e', 'g', 's', 0,
  /* 274 */ 'G', 'u', 'e', 's', 't', 'R', 'e', 'g', 's', 0,
  /* 284 */ 'U', 's', 'r', 'B', 'i', 't', 's', 0,
  /* 292 */ 'C', 't', 'r', 'R', 'e', 'g', 's', '_', 'w', 'i', 't', 'h', '_', 's', 'u', 'b', 'r', 'e', 'g', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w', 0,
};

extern const MCRegisterClass HexagonMCRegisterClasses[] = {
  { UsrBits, UsrBitsBits, 284, 1, sizeof(UsrBitsBits), Hexagon::UsrBitsRegClassID, 1, false },
  { GuestRegs, GuestRegsBits, 274, 32, sizeof(GuestRegsBits), Hexagon::GuestRegsRegClassID, 1, false },
  { IntRegs, IntRegsBits, 266, 32, sizeof(IntRegsBits), Hexagon::IntRegsRegClassID, 1, true },
  { CtrRegs, CtrRegsBits, 258, 23, sizeof(CtrRegsBits), Hexagon::CtrRegsRegClassID, 1, false },
  { GeneralSubRegs, GeneralSubRegsBits, 189, 16, sizeof(GeneralSubRegsBits), Hexagon::GeneralSubRegsRegClassID, 1, true },
  { V62Regs, V62RegsBits, 121, 9, sizeof(V62RegsBits), Hexagon::V62RegsRegClassID, 1, false },
  { IntRegsLow8, IntRegsLow8Bits, 49, 8, sizeof(IntRegsLow8Bits), Hexagon::IntRegsLow8RegClassID, 1, true },
  { CtrRegs_and_V62Regs, CtrRegs_and_V62RegsBits, 129, 6, sizeof(CtrRegs_and_V62RegsBits), Hexagon::CtrRegs_and_V62RegsRegClassID, 1, false },
  { PredRegs, PredRegsBits, 204, 4, sizeof(PredRegsBits), Hexagon::PredRegsRegClassID, 1, true },
  { V62Regs_with_isub_hi, V62Regs_with_isub_hiBits, 86, 3, sizeof(V62Regs_with_isub_hiBits), Hexagon::V62Regs_with_isub_hiRegClassID, 1, false },
  { ModRegs, ModRegsBits, 239, 2, sizeof(ModRegsBits), Hexagon::ModRegsRegClassID, 1, true },
  { CtrRegs_with_subreg_overflow, CtrRegs_with_subreg_overflowBits, 292, 1, sizeof(CtrRegs_with_subreg_overflowBits), Hexagon::CtrRegs_with_subreg_overflowRegClassID, 1, false },
  { V65Regs, V65RegsBits, 159, 1, sizeof(V65RegsBits), Hexagon::V65RegsRegClassID, 1, false },
  { DoubleRegs, DoubleRegsBits, 247, 16, sizeof(DoubleRegsBits), Hexagon::DoubleRegsRegClassID, 1, true },
  { GuestRegs64, GuestRegs64Bits, 10, 16, sizeof(GuestRegs64Bits), Hexagon::GuestRegs64RegClassID, 1, false },
  { CtrRegs64, CtrRegs64Bits, 0, 11, sizeof(CtrRegs64Bits), Hexagon::CtrRegs64RegClassID, 1, false },
  { GeneralDoubleLow8Regs, GeneralDoubleLow8RegsBits, 167, 8, sizeof(GeneralDoubleLow8RegsBits), Hexagon::GeneralDoubleLow8RegsRegClassID, 1, true },
  { DoubleRegs_with_isub_hi_in_IntRegsLow8, DoubleRegs_with_isub_hi_in_IntRegsLow8Bits, 22, 4, sizeof(DoubleRegs_with_isub_hi_in_IntRegsLow8Bits), Hexagon::DoubleRegs_with_isub_hi_in_IntRegsLow8RegClassID, 1, true },
  { CtrRegs64_and_V62Regs, CtrRegs64_and_V62RegsBits, 107, 3, sizeof(CtrRegs64_and_V62RegsBits), Hexagon::CtrRegs64_and_V62RegsRegClassID, 1, false },
  { CtrRegs64_with_isub_hi_in_ModRegs, CtrRegs64_with_isub_hi_in_ModRegsBits, 213, 1, sizeof(CtrRegs64_with_isub_hi_in_ModRegsBits), Hexagon::CtrRegs64_with_isub_hi_in_ModRegsRegClassID, 1, false },
  { HvxVR, HvxVRBits, 74, 33, sizeof(HvxVRBits), Hexagon::HvxVRRegClassID, 1, true },
  { HvxQR, HvxQRBits, 68, 4, sizeof(HvxQRBits), Hexagon::HvxQRRegClassID, 1, true },
  { HvxVR_and_V65Regs, HvxVR_and_V65RegsBits, 149, 1, sizeof(HvxVR_and_V65RegsBits), Hexagon::HvxVR_and_V65RegsRegClassID, 1, true },
  { HvxWR, HvxWRBits, 80, 16, sizeof(HvxWRBits), Hexagon::HvxWRRegClassID, 1, true },
  { HvxVQR, HvxVQRBits, 61, 8, sizeof(HvxVQRBits), Hexagon::HvxVQRRegClassID, 1, true },
};

// Hexagon Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair HexagonDwarfFlavour0Dwarf2L[] = {
  { 0U, Hexagon::R0 },
  { 1U, Hexagon::R1 },
  { 2U, Hexagon::R2 },
  { 3U, Hexagon::R3 },
  { 4U, Hexagon::R4 },
  { 5U, Hexagon::R5 },
  { 6U, Hexagon::R6 },
  { 7U, Hexagon::R7 },
  { 8U, Hexagon::R8 },
  { 9U, Hexagon::R9 },
  { 10U, Hexagon::R10 },
  { 11U, Hexagon::R11 },
  { 12U, Hexagon::R12 },
  { 13U, Hexagon::R13 },
  { 14U, Hexagon::R14 },
  { 15U, Hexagon::R15 },
  { 16U, Hexagon::R16 },
  { 17U, Hexagon::R17 },
  { 18U, Hexagon::R18 },
  { 19U, Hexagon::R19 },
  { 20U, Hexagon::R20 },
  { 21U, Hexagon::R21 },
  { 22U, Hexagon::R22 },
  { 23U, Hexagon::R23 },
  { 24U, Hexagon::R24 },
  { 25U, Hexagon::R25 },
  { 26U, Hexagon::R26 },
  { 27U, Hexagon::R27 },
  { 28U, Hexagon::R28 },
  { 29U, Hexagon::R29 },
  { 30U, Hexagon::R30 },
  { 31U, Hexagon::R31 },
  { 32U, Hexagon::D0 },
  { 34U, Hexagon::D1 },
  { 36U, Hexagon::D2 },
  { 38U, Hexagon::D3 },
  { 40U, Hexagon::D4 },
  { 42U, Hexagon::D5 },
  { 44U, Hexagon::D6 },
  { 46U, Hexagon::D7 },
  { 48U, Hexagon::D8 },
  { 50U, Hexagon::D9 },
  { 52U, Hexagon::D10 },
  { 54U, Hexagon::D11 },
  { 56U, Hexagon::D12 },
  { 58U, Hexagon::D13 },
  { 60U, Hexagon::D14 },
  { 62U, Hexagon::D15 },
  { 63U, Hexagon::P0 },
  { 64U, Hexagon::P1 },
  { 65U, Hexagon::P2 },
  { 66U, Hexagon::P3 },
  { 67U, Hexagon::C1_0 },
  { 68U, Hexagon::LC0 },
  { 69U, Hexagon::C3_2 },
  { 70U, Hexagon::LC1 },
  { 71U, Hexagon::P3_0 },
  { 72U, Hexagon::C7_6 },
  { 73U, Hexagon::M0 },
  { 74U, Hexagon::C9_8 },
  { 75U, Hexagon::C8 },
  { 76U, Hexagon::C11_10 },
  { 77U, Hexagon::UGP },
  { 78U, Hexagon::GP },
  { 79U, Hexagon::CS0 },
  { 80U, Hexagon::CS1 },
  { 81U, Hexagon::UPCYCLELO },
  { 82U, Hexagon::UPCYCLEHI },
  { 83U, Hexagon::C17_16 },
  { 84U, Hexagon::FRAMEKEY },
  { 85U, Hexagon::PKTCOUNTLO },
  { 86U, Hexagon::PKTCOUNTHI },
  { 97U, Hexagon::UTIMERLO },
  { 98U, Hexagon::UTIMERHI },
  { 99U, Hexagon::W0 },
  { 100U, Hexagon::V1 },
  { 101U, Hexagon::W1 },
  { 102U, Hexagon::V3 },
  { 103U, Hexagon::W2 },
  { 104U, Hexagon::V5 },
  { 105U, Hexagon::W3 },
  { 106U, Hexagon::V7 },
  { 107U, Hexagon::W4 },
  { 108U, Hexagon::V9 },
  { 109U, Hexagon::W5 },
  { 110U, Hexagon::V11 },
  { 111U, Hexagon::W6 },
  { 112U, Hexagon::V13 },
  { 113U, Hexagon::W7 },
  { 114U, Hexagon::V15 },
  { 115U, Hexagon::W8 },
  { 116U, Hexagon::V17 },
  { 117U, Hexagon::W9 },
  { 118U, Hexagon::V19 },
  { 119U, Hexagon::W10 },
  { 120U, Hexagon::V21 },
  { 121U, Hexagon::W11 },
  { 122U, Hexagon::V23 },
  { 123U, Hexagon::W12 },
  { 124U, Hexagon::V25 },
  { 125U, Hexagon::W13 },
  { 126U, Hexagon::V27 },
  { 127U, Hexagon::W14 },
  { 128U, Hexagon::V29 },
  { 129U, Hexagon::W15 },
  { 130U, Hexagon::V31 },
  { 131U, Hexagon::Q0 },
  { 132U, Hexagon::Q1 },
  { 133U, Hexagon::Q2 },
  { 134U, Hexagon::Q3 },
  { 220U, Hexagon::G1_0 },
  { 221U, Hexagon::GSR },
  { 222U, Hexagon::G3_2 },
  { 223U, Hexagon::G3 },
  { 224U, Hexagon::G5_4 },
  { 225U, Hexagon::G5 },
  { 226U, Hexagon::G7_6 },
  { 227U, Hexagon::G7 },
  { 228U, Hexagon::G9_8 },
  { 229U, Hexagon::G9 },
  { 230U, Hexagon::G11_10 },
  { 231U, Hexagon::G11 },
  { 232U, Hexagon::G13_12 },
  { 233U, Hexagon::G13 },
  { 234U, Hexagon::G15_14 },
  { 235U, Hexagon::G15 },
  { 236U, Hexagon::G17_16 },
  { 237U, Hexagon::GPMUCNT5 },
  { 238U, Hexagon::G19_18 },
  { 239U, Hexagon::GPMUCNT7 },
  { 240U, Hexagon::G21_20 },
  { 241U, Hexagon::G21 },
  { 242U, Hexagon::G23_22 },
  { 243U, Hexagon::G23 },
  { 244U, Hexagon::G25_24 },
  { 245U, Hexagon::GPCYCLEHI },
  { 246U, Hexagon::G27_26 },
  { 247U, Hexagon::GPMUCNT1 },
  { 248U, Hexagon::G29_28 },
  { 249U, Hexagon::GPMUCNT3 },
  { 250U, Hexagon::G31_30 },
  { 251U, Hexagon::G31 },
  { 252U, Hexagon::VQ0 },
  { 253U, Hexagon::VQ1 },
  { 254U, Hexagon::VQ2 },
  { 255U, Hexagon::VQ3 },
  { 256U, Hexagon::VQ4 },
  { 257U, Hexagon::VQ5 },
  { 258U, Hexagon::VQ6 },
  { 259U, Hexagon::VQ7 },
};
extern const unsigned HexagonDwarfFlavour0Dwarf2LSize = array_lengthof(HexagonDwarfFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonEHFlavour0Dwarf2L[] = {
  { 0U, Hexagon::R0 },
  { 1U, Hexagon::R1 },
  { 2U, Hexagon::R2 },
  { 3U, Hexagon::R3 },
  { 4U, Hexagon::R4 },
  { 5U, Hexagon::R5 },
  { 6U, Hexagon::R6 },
  { 7U, Hexagon::R7 },
  { 8U, Hexagon::R8 },
  { 9U, Hexagon::R9 },
  { 10U, Hexagon::R10 },
  { 11U, Hexagon::R11 },
  { 12U, Hexagon::R12 },
  { 13U, Hexagon::R13 },
  { 14U, Hexagon::R14 },
  { 15U, Hexagon::R15 },
  { 16U, Hexagon::R16 },
  { 17U, Hexagon::R17 },
  { 18U, Hexagon::R18 },
  { 19U, Hexagon::R19 },
  { 20U, Hexagon::R20 },
  { 21U, Hexagon::R21 },
  { 22U, Hexagon::R22 },
  { 23U, Hexagon::R23 },
  { 24U, Hexagon::R24 },
  { 25U, Hexagon::R25 },
  { 26U, Hexagon::R26 },
  { 27U, Hexagon::R27 },
  { 28U, Hexagon::R28 },
  { 29U, Hexagon::R29 },
  { 30U, Hexagon::R30 },
  { 31U, Hexagon::R31 },
  { 32U, Hexagon::D0 },
  { 34U, Hexagon::D1 },
  { 36U, Hexagon::D2 },
  { 38U, Hexagon::D3 },
  { 40U, Hexagon::D4 },
  { 42U, Hexagon::D5 },
  { 44U, Hexagon::D6 },
  { 46U, Hexagon::D7 },
  { 48U, Hexagon::D8 },
  { 50U, Hexagon::D9 },
  { 52U, Hexagon::D10 },
  { 54U, Hexagon::D11 },
  { 56U, Hexagon::D12 },
  { 58U, Hexagon::D13 },
  { 60U, Hexagon::D14 },
  { 62U, Hexagon::D15 },
  { 63U, Hexagon::P0 },
  { 64U, Hexagon::P1 },
  { 65U, Hexagon::P2 },
  { 66U, Hexagon::P3 },
  { 67U, Hexagon::C1_0 },
  { 68U, Hexagon::LC0 },
  { 69U, Hexagon::C3_2 },
  { 70U, Hexagon::LC1 },
  { 71U, Hexagon::P3_0 },
  { 72U, Hexagon::C7_6 },
  { 73U, Hexagon::M0 },
  { 74U, Hexagon::C9_8 },
  { 75U, Hexagon::C8 },
  { 76U, Hexagon::C11_10 },
  { 77U, Hexagon::UGP },
  { 78U, Hexagon::GP },
  { 79U, Hexagon::CS0 },
  { 80U, Hexagon::CS1 },
  { 81U, Hexagon::UPCYCLELO },
  { 82U, Hexagon::UPCYCLEHI },
  { 83U, Hexagon::C17_16 },
  { 84U, Hexagon::FRAMEKEY },
  { 85U, Hexagon::PKTCOUNTLO },
  { 86U, Hexagon::PKTCOUNTHI },
  { 97U, Hexagon::UTIMERLO },
  { 98U, Hexagon::UTIMERHI },
  { 99U, Hexagon::W0 },
  { 100U, Hexagon::V1 },
  { 101U, Hexagon::W1 },
  { 102U, Hexagon::V3 },
  { 103U, Hexagon::W2 },
  { 104U, Hexagon::V5 },
  { 105U, Hexagon::W3 },
  { 106U, Hexagon::V7 },
  { 107U, Hexagon::W4 },
  { 108U, Hexagon::V9 },
  { 109U, Hexagon::W5 },
  { 110U, Hexagon::V11 },
  { 111U, Hexagon::W6 },
  { 112U, Hexagon::V13 },
  { 113U, Hexagon::W7 },
  { 114U, Hexagon::V15 },
  { 115U, Hexagon::W8 },
  { 116U, Hexagon::V17 },
  { 117U, Hexagon::W9 },
  { 118U, Hexagon::V19 },
  { 119U, Hexagon::W10 },
  { 120U, Hexagon::V21 },
  { 121U, Hexagon::W11 },
  { 122U, Hexagon::V23 },
  { 123U, Hexagon::W12 },
  { 124U, Hexagon::V25 },
  { 125U, Hexagon::W13 },
  { 126U, Hexagon::V27 },
  { 127U, Hexagon::W14 },
  { 128U, Hexagon::V29 },
  { 129U, Hexagon::W15 },
  { 130U, Hexagon::V31 },
  { 131U, Hexagon::Q0 },
  { 132U, Hexagon::Q1 },
  { 133U, Hexagon::Q2 },
  { 134U, Hexagon::Q3 },
  { 220U, Hexagon::G1_0 },
  { 221U, Hexagon::GSR },
  { 222U, Hexagon::G3_2 },
  { 223U, Hexagon::G3 },
  { 224U, Hexagon::G5_4 },
  { 225U, Hexagon::G5 },
  { 226U, Hexagon::G7_6 },
  { 227U, Hexagon::G7 },
  { 228U, Hexagon::G9_8 },
  { 229U, Hexagon::G9 },
  { 230U, Hexagon::G11_10 },
  { 231U, Hexagon::G11 },
  { 232U, Hexagon::G13_12 },
  { 233U, Hexagon::G13 },
  { 234U, Hexagon::G15_14 },
  { 235U, Hexagon::G15 },
  { 236U, Hexagon::G17_16 },
  { 237U, Hexagon::GPMUCNT5 },
  { 238U, Hexagon::G19_18 },
  { 239U, Hexagon::GPMUCNT7 },
  { 240U, Hexagon::G21_20 },
  { 241U, Hexagon::G21 },
  { 242U, Hexagon::G23_22 },
  { 243U, Hexagon::G23 },
  { 244U, Hexagon::G25_24 },
  { 245U, Hexagon::GPCYCLEHI },
  { 246U, Hexagon::G27_26 },
  { 247U, Hexagon::GPMUCNT1 },
  { 248U, Hexagon::G29_28 },
  { 249U, Hexagon::GPMUCNT3 },
  { 250U, Hexagon::G31_30 },
  { 251U, Hexagon::G31 },
  { 252U, Hexagon::VQ0 },
  { 253U, Hexagon::VQ1 },
  { 254U, Hexagon::VQ2 },
  { 255U, Hexagon::VQ3 },
  { 256U, Hexagon::VQ4 },
  { 257U, Hexagon::VQ5 },
  { 258U, Hexagon::VQ6 },
  { 259U, Hexagon::VQ7 },
};
extern const unsigned HexagonEHFlavour0Dwarf2LSize = array_lengthof(HexagonEHFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonDwarfFlavour0L2Dwarf[] = {
  { Hexagon::CS, 78U },
  { Hexagon::FRAMEKEY, 84U },
  { Hexagon::FRAMELIMIT, 83U },
  { Hexagon::GELR, 220U },
  { Hexagon::GOSP, 222U },
  { Hexagon::GP, 78U },
  { Hexagon::GPCYCLEHI, 245U },
  { Hexagon::GPCYCLELO, 244U },
  { Hexagon::GSR, 221U },
  { Hexagon::PC, 76U },
  { Hexagon::PKTCOUNT, 85U },
  { Hexagon::PKTCOUNTHI, 86U },
  { Hexagon::PKTCOUNTLO, 85U },
  { Hexagon::UGP, 77U },
  { Hexagon::UPCYCLE, 80U },
  { Hexagon::UPCYCLEHI, 82U },
  { Hexagon::UPCYCLELO, 81U },
  { Hexagon::USR, 75U },
  { Hexagon::UTIMER, 97U },
  { Hexagon::UTIMERHI, 98U },
  { Hexagon::UTIMERLO, 97U },
  { Hexagon::VTMP, 131U },
  { Hexagon::C5, 72U },
  { Hexagon::C8, 75U },
  { Hexagon::CS0, 79U },
  { Hexagon::CS1, 80U },
  { Hexagon::D0, 32U },
  { Hexagon::D1, 34U },
  { Hexagon::D2, 36U },
  { Hexagon::D3, 38U },
  { Hexagon::D4, 40U },
  { Hexagon::D5, 42U },
  { Hexagon::D6, 44U },
  { Hexagon::D7, 46U },
  { Hexagon::D8, 48U },
  { Hexagon::D9, 50U },
  { Hexagon::D10, 52U },
  { Hexagon::D11, 54U },
  { Hexagon::D12, 56U },
  { Hexagon::D13, 58U },
  { Hexagon::D14, 60U },
  { Hexagon::D15, 62U },
  { Hexagon::G3, 223U },
  { Hexagon::G4, 224U },
  { Hexagon::G5, 225U },
  { Hexagon::G6, 226U },
  { Hexagon::G7, 227U },
  { Hexagon::G8, 228U },
  { Hexagon::G9, 229U },
  { Hexagon::G10, 230U },
  { Hexagon::G11, 231U },
  { Hexagon::G12, 232U },
  { Hexagon::G13, 233U },
  { Hexagon::G14, 234U },
  { Hexagon::G15, 235U },
  { Hexagon::G20, 240U },
  { Hexagon::G21, 241U },
  { Hexagon::G22, 242U },
  { Hexagon::G23, 243U },
  { Hexagon::G30, 250U },
  { Hexagon::G31, 251U },
  { Hexagon::GPMUCNT0, 246U },
  { Hexagon::GPMUCNT1, 247U },
  { Hexagon::GPMUCNT2, 248U },
  { Hexagon::GPMUCNT3, 249U },
  { Hexagon::GPMUCNT4, 236U },
  { Hexagon::GPMUCNT5, 237U },
  { Hexagon::GPMUCNT6, 238U },
  { Hexagon::GPMUCNT7, 239U },
  { Hexagon::LC0, 68U },
  { Hexagon::LC1, 70U },
  { Hexagon::M0, 73U },
  { Hexagon::M1, 74U },
  { Hexagon::P0, 63U },
  { Hexagon::P1, 64U },
  { Hexagon::P2, 65U },
  { Hexagon::P3, 66U },
  { Hexagon::Q0, 131U },
  { Hexagon::Q1, 132U },
  { Hexagon::Q2, 133U },
  { Hexagon::Q3, 134U },
  { Hexagon::R0, 0U },
  { Hexagon::R1, 1U },
  { Hexagon::R2, 2U },
  { Hexagon::R3, 3U },
  { Hexagon::R4, 4U },
  { Hexagon::R5, 5U },
  { Hexagon::R6, 6U },
  { Hexagon::R7, 7U },
  { Hexagon::R8, 8U },
  { Hexagon::R9, 9U },
  { Hexagon::R10, 10U },
  { Hexagon::R11, 11U },
  { Hexagon::R12, 12U },
  { Hexagon::R13, 13U },
  { Hexagon::R14, 14U },
  { Hexagon::R15, 15U },
  { Hexagon::R16, 16U },
  { Hexagon::R17, 17U },
  { Hexagon::R18, 18U },
  { Hexagon::R19, 19U },
  { Hexagon::R20, 20U },
  { Hexagon::R21, 21U },
  { Hexagon::R22, 22U },
  { Hexagon::R23, 23U },
  { Hexagon::R24, 24U },
  { Hexagon::R25, 25U },
  { Hexagon::R26, 26U },
  { Hexagon::R27, 27U },
  { Hexagon::R28, 28U },
  { Hexagon::R29, 29U },
  { Hexagon::R30, 30U },
  { Hexagon::R31, 31U },
  { Hexagon::SA0, 67U },
  { Hexagon::SA1, 69U },
  { Hexagon::V0, 99U },
  { Hexagon::V1, 100U },
  { Hexagon::V2, 101U },
  { Hexagon::V3, 102U },
  { Hexagon::V4, 103U },
  { Hexagon::V5, 104U },
  { Hexagon::V6, 105U },
  { Hexagon::V7, 106U },
  { Hexagon::V8, 107U },
  { Hexagon::V9, 108U },
  { Hexagon::V10, 109U },
  { Hexagon::V11, 110U },
  { Hexagon::V12, 111U },
  { Hexagon::V13, 112U },
  { Hexagon::V14, 113U },
  { Hexagon::V15, 114U },
  { Hexagon::V16, 115U },
  { Hexagon::V17, 116U },
  { Hexagon::V18, 117U },
  { Hexagon::V19, 118U },
  { Hexagon::V20, 119U },
  { Hexagon::V21, 120U },
  { Hexagon::V22, 121U },
  { Hexagon::V23, 122U },
  { Hexagon::V24, 123U },
  { Hexagon::V25, 124U },
  { Hexagon::V26, 125U },
  { Hexagon::V27, 126U },
  { Hexagon::V28, 127U },
  { Hexagon::V29, 128U },
  { Hexagon::V30, 129U },
  { Hexagon::V31, 130U },
  { Hexagon::VQ0, 252U },
  { Hexagon::VQ1, 253U },
  { Hexagon::VQ2, 254U },
  { Hexagon::VQ3, 255U },
  { Hexagon::VQ4, 256U },
  { Hexagon::VQ5, 257U },
  { Hexagon::VQ6, 258U },
  { Hexagon::VQ7, 259U },
  { Hexagon::W0, 99U },
  { Hexagon::W1, 101U },
  { Hexagon::W2, 103U },
  { Hexagon::W3, 105U },
  { Hexagon::W4, 107U },
  { Hexagon::W5, 109U },
  { Hexagon::W6, 111U },
  { Hexagon::W7, 113U },
  { Hexagon::W8, 115U },
  { Hexagon::W9, 117U },
  { Hexagon::W10, 119U },
  { Hexagon::W11, 121U },
  { Hexagon::W12, 123U },
  { Hexagon::W13, 125U },
  { Hexagon::W14, 127U },
  { Hexagon::W15, 129U },
  { Hexagon::C1_0, 67U },
  { Hexagon::C3_2, 69U },
  { Hexagon::C5_4, 71U },
  { Hexagon::C7_6, 72U },
  { Hexagon::C9_8, 74U },
  { Hexagon::C11_10, 76U },
  { Hexagon::C17_16, 83U },
  { Hexagon::G1_0, 220U },
  { Hexagon::G3_2, 222U },
  { Hexagon::G5_4, 224U },
  { Hexagon::G7_6, 226U },
  { Hexagon::G9_8, 228U },
  { Hexagon::G11_10, 230U },
  { Hexagon::G13_12, 232U },
  { Hexagon::G15_14, 234U },
  { Hexagon::G17_16, 236U },
  { Hexagon::G19_18, 238U },
  { Hexagon::G21_20, 240U },
  { Hexagon::G23_22, 242U },
  { Hexagon::G25_24, 244U },
  { Hexagon::G27_26, 246U },
  { Hexagon::G29_28, 248U },
  { Hexagon::G31_30, 250U },
  { Hexagon::P3_0, 71U },
};
extern const unsigned HexagonDwarfFlavour0L2DwarfSize = array_lengthof(HexagonDwarfFlavour0L2Dwarf);

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonEHFlavour0L2Dwarf[] = {
  { Hexagon::CS, 78U },
  { Hexagon::FRAMEKEY, 84U },
  { Hexagon::FRAMELIMIT, 83U },
  { Hexagon::GELR, 220U },
  { Hexagon::GOSP, 222U },
  { Hexagon::GP, 78U },
  { Hexagon::GPCYCLEHI, 245U },
  { Hexagon::GPCYCLELO, 244U },
  { Hexagon::GSR, 221U },
  { Hexagon::PC, 76U },
  { Hexagon::PKTCOUNT, 85U },
  { Hexagon::PKTCOUNTHI, 86U },
  { Hexagon::PKTCOUNTLO, 85U },
  { Hexagon::UGP, 77U },
  { Hexagon::UPCYCLE, 80U },
  { Hexagon::UPCYCLEHI, 82U },
  { Hexagon::UPCYCLELO, 81U },
  { Hexagon::USR, 75U },
  { Hexagon::UTIMER, 97U },
  { Hexagon::UTIMERHI, 98U },
  { Hexagon::UTIMERLO, 97U },
  { Hexagon::VTMP, 131U },
  { Hexagon::C5, 72U },
  { Hexagon::C8, 75U },
  { Hexagon::CS0, 79U },
  { Hexagon::CS1, 80U },
  { Hexagon::D0, 32U },
  { Hexagon::D1, 34U },
  { Hexagon::D2, 36U },
  { Hexagon::D3, 38U },
  { Hexagon::D4, 40U },
  { Hexagon::D5, 42U },
  { Hexagon::D6, 44U },
  { Hexagon::D7, 46U },
  { Hexagon::D8, 48U },
  { Hexagon::D9, 50U },
  { Hexagon::D10, 52U },
  { Hexagon::D11, 54U },
  { Hexagon::D12, 56U },
  { Hexagon::D13, 58U },
  { Hexagon::D14, 60U },
  { Hexagon::D15, 62U },
  { Hexagon::G3, 223U },
  { Hexagon::G4, 224U },
  { Hexagon::G5, 225U },
  { Hexagon::G6, 226U },
  { Hexagon::G7, 227U },
  { Hexagon::G8, 228U },
  { Hexagon::G9, 229U },
  { Hexagon::G10, 230U },
  { Hexagon::G11, 231U },
  { Hexagon::G12, 232U },
  { Hexagon::G13, 233U },
  { Hexagon::G14, 234U },
  { Hexagon::G15, 235U },
  { Hexagon::G20, 240U },
  { Hexagon::G21, 241U },
  { Hexagon::G22, 242U },
  { Hexagon::G23, 243U },
  { Hexagon::G30, 250U },
  { Hexagon::G31, 251U },
  { Hexagon::GPMUCNT0, 246U },
  { Hexagon::GPMUCNT1, 247U },
  { Hexagon::GPMUCNT2, 248U },
  { Hexagon::GPMUCNT3, 249U },
  { Hexagon::GPMUCNT4, 236U },
  { Hexagon::GPMUCNT5, 237U },
  { Hexagon::GPMUCNT6, 238U },
  { Hexagon::GPMUCNT7, 239U },
  { Hexagon::LC0, 68U },
  { Hexagon::LC1, 70U },
  { Hexagon::M0, 73U },
  { Hexagon::M1, 74U },
  { Hexagon::P0, 63U },
  { Hexagon::P1, 64U },
  { Hexagon::P2, 65U },
  { Hexagon::P3, 66U },
  { Hexagon::Q0, 131U },
  { Hexagon::Q1, 132U },
  { Hexagon::Q2, 133U },
  { Hexagon::Q3, 134U },
  { Hexagon::R0, 0U },
  { Hexagon::R1, 1U },
  { Hexagon::R2, 2U },
  { Hexagon::R3, 3U },
  { Hexagon::R4, 4U },
  { Hexagon::R5, 5U },
  { Hexagon::R6, 6U },
  { Hexagon::R7, 7U },
  { Hexagon::R8, 8U },
  { Hexagon::R9, 9U },
  { Hexagon::R10, 10U },
  { Hexagon::R11, 11U },
  { Hexagon::R12, 12U },
  { Hexagon::R13, 13U },
  { Hexagon::R14, 14U },
  { Hexagon::R15, 15U },
  { Hexagon::R16, 16U },
  { Hexagon::R17, 17U },
  { Hexagon::R18, 18U },
  { Hexagon::R19, 19U },
  { Hexagon::R20, 20U },
  { Hexagon::R21, 21U },
  { Hexagon::R22, 22U },
  { Hexagon::R23, 23U },
  { Hexagon::R24, 24U },
  { Hexagon::R25, 25U },
  { Hexagon::R26, 26U },
  { Hexagon::R27, 27U },
  { Hexagon::R28, 28U },
  { Hexagon::R29, 29U },
  { Hexagon::R30, 30U },
  { Hexagon::R31, 31U },
  { Hexagon::SA0, 67U },
  { Hexagon::SA1, 69U },
  { Hexagon::V0, 99U },
  { Hexagon::V1, 100U },
  { Hexagon::V2, 101U },
  { Hexagon::V3, 102U },
  { Hexagon::V4, 103U },
  { Hexagon::V5, 104U },
  { Hexagon::V6, 105U },
  { Hexagon::V7, 106U },
  { Hexagon::V8, 107U },
  { Hexagon::V9, 108U },
  { Hexagon::V10, 109U },
  { Hexagon::V11, 110U },
  { Hexagon::V12, 111U },
  { Hexagon::V13, 112U },
  { Hexagon::V14, 113U },
  { Hexagon::V15, 114U },
  { Hexagon::V16, 115U },
  { Hexagon::V17, 116U },
  { Hexagon::V18, 117U },
  { Hexagon::V19, 118U },
  { Hexagon::V20, 119U },
  { Hexagon::V21, 120U },
  { Hexagon::V22, 121U },
  { Hexagon::V23, 122U },
  { Hexagon::V24, 123U },
  { Hexagon::V25, 124U },
  { Hexagon::V26, 125U },
  { Hexagon::V27, 126U },
  { Hexagon::V28, 127U },
  { Hexagon::V29, 128U },
  { Hexagon::V30, 129U },
  { Hexagon::V31, 130U },
  { Hexagon::VQ0, 252U },
  { Hexagon::VQ1, 253U },
  { Hexagon::VQ2, 254U },
  { Hexagon::VQ3, 255U },
  { Hexagon::VQ4, 256U },
  { Hexagon::VQ5, 257U },
  { Hexagon::VQ6, 258U },
  { Hexagon::VQ7, 259U },
  { Hexagon::W0, 99U },
  { Hexagon::W1, 101U },
  { Hexagon::W2, 103U },
  { Hexagon::W3, 105U },
  { Hexagon::W4, 107U },
  { Hexagon::W5, 109U },
  { Hexagon::W6, 111U },
  { Hexagon::W7, 113U },
  { Hexagon::W8, 115U },
  { Hexagon::W9, 117U },
  { Hexagon::W10, 119U },
  { Hexagon::W11, 121U },
  { Hexagon::W12, 123U },
  { Hexagon::W13, 125U },
  { Hexagon::W14, 127U },
  { Hexagon::W15, 129U },
  { Hexagon::C1_0, 67U },
  { Hexagon::C3_2, 69U },
  { Hexagon::C5_4, 71U },
  { Hexagon::C7_6, 72U },
  { Hexagon::C9_8, 74U },
  { Hexagon::C11_10, 76U },
  { Hexagon::C17_16, 83U },
  { Hexagon::G1_0, 220U },
  { Hexagon::G3_2, 222U },
  { Hexagon::G5_4, 224U },
  { Hexagon::G7_6, 226U },
  { Hexagon::G9_8, 228U },
  { Hexagon::G11_10, 230U },
  { Hexagon::G13_12, 232U },
  { Hexagon::G15_14, 234U },
  { Hexagon::G17_16, 236U },
  { Hexagon::G19_18, 238U },
  { Hexagon::G21_20, 240U },
  { Hexagon::G23_22, 242U },
  { Hexagon::G25_24, 244U },
  { Hexagon::G27_26, 246U },
  { Hexagon::G29_28, 248U },
  { Hexagon::G31_30, 250U },
  { Hexagon::P3_0, 71U },
};
extern const unsigned HexagonEHFlavour0L2DwarfSize = array_lengthof(HexagonEHFlavour0L2Dwarf);

extern const uint16_t HexagonRegEncodingTable[] = {
  0,
  12,
  17,
  16,
  0,
  2,
  11,
  25,
  24,
  1,
  9,
  18,
  19,
  18,
  10,
  14,
  15,
  14,
  8,
  0,
  30,
  31,
  30,
  0,
  5,
  8,
  12,
  13,
  0,
  2,
  4,
  6,
  8,
  10,
  12,
  14,
  16,
  18,
  20,
  22,
  24,
  26,
  28,
  30,
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
  20,
  21,
  22,
  23,
  30,
  31,
  26,
  27,
  28,
  29,
  16,
  17,
  18,
  19,
  1,
  3,
  6,
  7,
  0,
  1,
  2,
  3,
  0,
  1,
  2,
  3,
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
  2,
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
  4,
  8,
  12,
  16,
  20,
  24,
  28,
  0,
  2,
  4,
  6,
  8,
  10,
  12,
  14,
  16,
  18,
  20,
  22,
  24,
  26,
  28,
  30,
  0,
  2,
  4,
  6,
  8,
  10,
  16,
  0,
  2,
  4,
  6,
  8,
  10,
  12,
  14,
  16,
  18,
  20,
  22,
  24,
  26,
  28,
  30,
  4,
};
static inline void InitHexagonMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(HexagonRegDesc, 197, RA, PC, HexagonMCRegisterClasses, 25, HexagonRegUnitRoots, 127, HexagonRegDiffLists, HexagonLaneMaskLists, HexagonRegStrings, HexagonRegClassStrings, HexagonSubRegIdxLists, 10,
HexagonSubRegIdxRanges, HexagonRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(HexagonDwarfFlavour0Dwarf2L, HexagonDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(HexagonEHFlavour0Dwarf2L, HexagonEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(HexagonDwarfFlavour0L2Dwarf, HexagonDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(HexagonEHFlavour0L2Dwarf, HexagonEHFlavour0L2DwarfSize, true);
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

class HexagonFrameLowering;

struct HexagonGenRegisterInfo : public TargetRegisterInfo {
  explicit HexagonGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0,
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
  static const HexagonFrameLowering *getFrameLowering(
      const MachineFunction &MF);
};

namespace Hexagon { // Register classes
  extern const TargetRegisterClass UsrBitsRegClass;
  extern const TargetRegisterClass GuestRegsRegClass;
  extern const TargetRegisterClass IntRegsRegClass;
  extern const TargetRegisterClass CtrRegsRegClass;
  extern const TargetRegisterClass GeneralSubRegsRegClass;
  extern const TargetRegisterClass V62RegsRegClass;
  extern const TargetRegisterClass IntRegsLow8RegClass;
  extern const TargetRegisterClass CtrRegs_and_V62RegsRegClass;
  extern const TargetRegisterClass PredRegsRegClass;
  extern const TargetRegisterClass V62Regs_with_isub_hiRegClass;
  extern const TargetRegisterClass ModRegsRegClass;
  extern const TargetRegisterClass CtrRegs_with_subreg_overflowRegClass;
  extern const TargetRegisterClass V65RegsRegClass;
  extern const TargetRegisterClass DoubleRegsRegClass;
  extern const TargetRegisterClass GuestRegs64RegClass;
  extern const TargetRegisterClass CtrRegs64RegClass;
  extern const TargetRegisterClass GeneralDoubleLow8RegsRegClass;
  extern const TargetRegisterClass DoubleRegs_with_isub_hi_in_IntRegsLow8RegClass;
  extern const TargetRegisterClass CtrRegs64_and_V62RegsRegClass;
  extern const TargetRegisterClass CtrRegs64_with_isub_hi_in_ModRegsRegClass;
  extern const TargetRegisterClass HvxVRRegClass;
  extern const TargetRegisterClass HvxQRRegClass;
  extern const TargetRegisterClass HvxVR_and_V65RegsRegClass;
  extern const TargetRegisterClass HvxWRRegClass;
  extern const TargetRegisterClass HvxVQRRegClass;
} // end namespace Hexagon

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

extern const MCRegisterClass HexagonMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i1, MVT::Other,
  /* 2 */ MVT::i1, MVT::v2i1, MVT::v4i1, MVT::v8i1, MVT::v4i8, MVT::v2i16, MVT::i32, MVT::Other,
  /* 10 */ MVT::i64, MVT::Other,
  /* 12 */ MVT::v512i1, MVT::v64i1, MVT::v32i1, MVT::v16i1, MVT::Other,
  /* 17 */ MVT::v1024i1, MVT::v128i1, MVT::v64i1, MVT::v32i1, MVT::Other,
  /* 22 */ MVT::i32, MVT::f32, MVT::v4i8, MVT::v2i16, MVT::Other,
  /* 27 */ MVT::i64, MVT::f64, MVT::v8i8, MVT::v4i16, MVT::v2i32, MVT::Other,
  /* 33 */ MVT::v64i8, MVT::v32i16, MVT::v16i32, MVT::Other,
  /* 37 */ MVT::v128i8, MVT::v64i16, MVT::v32i32, MVT::Other,
  /* 41 */ MVT::v256i8, MVT::v128i16, MVT::v64i32, MVT::Other,
  /* 45 */ MVT::Untyped, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "isub_hi", "isub_lo", "subreg_overflow", "vsub_hi", "vsub_lo", "wsub_hi", "wsub_lo", "wsub_hi_then_vsub_hi", "wsub_hi_then_vsub_lo", "" };


static const LaneBitmask SubRegIndexLaneMaskTable[] = {
  LaneBitmask::getAll(),
  LaneBitmask(0x00000001), // isub_hi
  LaneBitmask(0x00000002), // isub_lo
  LaneBitmask(0x00000004), // subreg_overflow
  LaneBitmask(0x00000008), // vsub_hi
  LaneBitmask(0x00000010), // vsub_lo
  LaneBitmask(0x00000060), // wsub_hi
  LaneBitmask(0x00000018), // wsub_lo
  LaneBitmask(0x00000020), // wsub_hi_then_vsub_hi
  LaneBitmask(0x00000040), // wsub_hi_then_vsub_lo
 };



static const TargetRegisterInfo::RegClassInfo RegClassInfos[] = {
  // Mode = 0 (Default)
  { 1, 1, 0, VTLists+0 },    // UsrBits
  { 32, 32, 32, VTLists+8 },    // GuestRegs
  { 32, 32, 32, VTLists+22 },    // IntRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs
  { 32, 32, 32, VTLists+8 },    // GeneralSubRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs
  { 32, 32, 32, VTLists+8 },    // IntRegsLow8
  { 32, 32, 32, VTLists+8 },    // CtrRegs_and_V62Regs
  { 32, 32, 32, VTLists+2 },    // PredRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs_with_isub_hi
  { 32, 32, 32, VTLists+8 },    // ModRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs_with_subreg_overflow
  { 32, 32, 32, VTLists+8 },    // V65Regs
  { 64, 64, 64, VTLists+27 },    // DoubleRegs
  { 64, 64, 64, VTLists+10 },    // GuestRegs64
  { 64, 64, 64, VTLists+10 },    // CtrRegs64
  { 64, 64, 64, VTLists+10 },    // GeneralDoubleLow8Regs
  { 64, 64, 64, VTLists+10 },    // DoubleRegs_with_isub_hi_in_IntRegsLow8
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_and_V62Regs
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_with_isub_hi_in_ModRegs
  { 512, 512, 512, VTLists+33 },    // HvxVR
  { 512, 512, 512, VTLists+12 },    // HvxQR
  { 512, 512, 512, VTLists+33 },    // HvxVR_and_V65Regs
  { 1024, 1024, 1024, VTLists+37 },    // HvxWR
  { 2048, 2048, 2048, VTLists+45 },    // HvxVQR
  // Mode = 1 (Hvx128)
  { 1, 1, 0, VTLists+0 },    // UsrBits
  { 32, 32, 32, VTLists+8 },    // GuestRegs
  { 32, 32, 32, VTLists+22 },    // IntRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs
  { 32, 32, 32, VTLists+8 },    // GeneralSubRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs
  { 32, 32, 32, VTLists+8 },    // IntRegsLow8
  { 32, 32, 32, VTLists+8 },    // CtrRegs_and_V62Regs
  { 32, 32, 32, VTLists+2 },    // PredRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs_with_isub_hi
  { 32, 32, 32, VTLists+8 },    // ModRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs_with_subreg_overflow
  { 32, 32, 32, VTLists+8 },    // V65Regs
  { 64, 64, 64, VTLists+27 },    // DoubleRegs
  { 64, 64, 64, VTLists+10 },    // GuestRegs64
  { 64, 64, 64, VTLists+10 },    // CtrRegs64
  { 64, 64, 64, VTLists+10 },    // GeneralDoubleLow8Regs
  { 64, 64, 64, VTLists+10 },    // DoubleRegs_with_isub_hi_in_IntRegsLow8
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_and_V62Regs
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_with_isub_hi_in_ModRegs
  { 1024, 1024, 1024, VTLists+37 },    // HvxVR
  { 1024, 1024, 1024, VTLists+17 },    // HvxQR
  { 1024, 1024, 1024, VTLists+37 },    // HvxVR_and_V65Regs
  { 2048, 2048, 2048, VTLists+41 },    // HvxWR
  { 4096, 4096, 4096, VTLists+45 },    // HvxVQR
  // Mode = 2 (Hvx64)
  { 1, 1, 0, VTLists+0 },    // UsrBits
  { 32, 32, 32, VTLists+8 },    // GuestRegs
  { 32, 32, 32, VTLists+22 },    // IntRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs
  { 32, 32, 32, VTLists+8 },    // GeneralSubRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs
  { 32, 32, 32, VTLists+8 },    // IntRegsLow8
  { 32, 32, 32, VTLists+8 },    // CtrRegs_and_V62Regs
  { 32, 32, 32, VTLists+2 },    // PredRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs_with_isub_hi
  { 32, 32, 32, VTLists+8 },    // ModRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs_with_subreg_overflow
  { 32, 32, 32, VTLists+8 },    // V65Regs
  { 64, 64, 64, VTLists+27 },    // DoubleRegs
  { 64, 64, 64, VTLists+10 },    // GuestRegs64
  { 64, 64, 64, VTLists+10 },    // CtrRegs64
  { 64, 64, 64, VTLists+10 },    // GeneralDoubleLow8Regs
  { 64, 64, 64, VTLists+10 },    // DoubleRegs_with_isub_hi_in_IntRegsLow8
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_and_V62Regs
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_with_isub_hi_in_ModRegs
  { 512, 512, 512, VTLists+33 },    // HvxVR
  { 512, 512, 512, VTLists+12 },    // HvxQR
  { 512, 512, 512, VTLists+33 },    // HvxVR_and_V65Regs
  { 1024, 1024, 1024, VTLists+37 },    // HvxWR
  { 2048, 2048, 2048, VTLists+45 },    // HvxVQR
};

static const TargetRegisterClass *const NullRegClasses[] = { nullptr };

static const uint32_t UsrBitsSubClassMask[] = {
  0x00000001, 
  0x00000800, // subreg_overflow
};

static const uint32_t GuestRegsSubClassMask[] = {
  0x00000002, 
  0x00004000, // isub_hi
  0x00004000, // isub_lo
};

static const uint32_t IntRegsSubClassMask[] = {
  0x00000054, 
  0x00032000, // isub_hi
  0x00032000, // isub_lo
};

static const uint32_t CtrRegsSubClassMask[] = {
  0x00000c88, 
  0x000c8200, // isub_hi
  0x000c8200, // isub_lo
};

static const uint32_t GeneralSubRegsSubClassMask[] = {
  0x00000050, 
  0x00030000, // isub_hi
  0x00030000, // isub_lo
};

static const uint32_t V62RegsSubClassMask[] = {
  0x000402a0, 
  0x00040200, // isub_hi
  0x00040200, // isub_lo
};

static const uint32_t IntRegsLow8SubClassMask[] = {
  0x00000040, 
  0x00020000, // isub_hi
  0x00020000, // isub_lo
};

static const uint32_t CtrRegs_and_V62RegsSubClassMask[] = {
  0x00000080, 
  0x00040200, // isub_hi
  0x00040200, // isub_lo
};

static const uint32_t PredRegsSubClassMask[] = {
  0x00000100, 
};

static const uint32_t V62Regs_with_isub_hiSubClassMask[] = {
  0x00040200, 
};

static const uint32_t ModRegsSubClassMask[] = {
  0x00000400, 
  0x00080000, // isub_hi
  0x00080000, // isub_lo
};

static const uint32_t CtrRegs_with_subreg_overflowSubClassMask[] = {
  0x00000800, 
};

static const uint32_t V65RegsSubClassMask[] = {
  0x00401000, 
};

static const uint32_t DoubleRegsSubClassMask[] = {
  0x00032000, 
};

static const uint32_t GuestRegs64SubClassMask[] = {
  0x00004000, 
};

static const uint32_t CtrRegs64SubClassMask[] = {
  0x000c8000, 
};

static const uint32_t GeneralDoubleLow8RegsSubClassMask[] = {
  0x00030000, 
};

static const uint32_t DoubleRegs_with_isub_hi_in_IntRegsLow8SubClassMask[] = {
  0x00020000, 
};

static const uint32_t CtrRegs64_and_V62RegsSubClassMask[] = {
  0x00040000, 
};

static const uint32_t CtrRegs64_with_isub_hi_in_ModRegsSubClassMask[] = {
  0x00080000, 
};

static const uint32_t HvxVRSubClassMask[] = {
  0x00500000, 
  0x01800000, // vsub_hi
  0x01800000, // vsub_lo
  0x01000000, // wsub_hi_then_vsub_hi
  0x01000000, // wsub_hi_then_vsub_lo
};

static const uint32_t HvxQRSubClassMask[] = {
  0x00200000, 
};

static const uint32_t HvxVR_and_V65RegsSubClassMask[] = {
  0x00400000, 
};

static const uint32_t HvxWRSubClassMask[] = {
  0x00800000, 
  0x01000000, // wsub_hi
  0x01000000, // wsub_lo
};

static const uint32_t HvxVQRSubClassMask[] = {
  0x01000000, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 2, 0,
  /* 3 */ 3, 0,
  /* 5 */ 6, 7, 0,
  /* 8 */ 4, 5, 8, 9, 0,
};

static const TargetRegisterClass *const GeneralSubRegsSuperclasses[] = {
  &Hexagon::IntRegsRegClass,
  nullptr
};

static const TargetRegisterClass *const IntRegsLow8Superclasses[] = {
  &Hexagon::IntRegsRegClass,
  &Hexagon::GeneralSubRegsRegClass,
  nullptr
};

static const TargetRegisterClass *const CtrRegs_and_V62RegsSuperclasses[] = {
  &Hexagon::CtrRegsRegClass,
  &Hexagon::V62RegsRegClass,
  nullptr
};

static const TargetRegisterClass *const V62Regs_with_isub_hiSuperclasses[] = {
  &Hexagon::V62RegsRegClass,
  nullptr
};

static const TargetRegisterClass *const ModRegsSuperclasses[] = {
  &Hexagon::CtrRegsRegClass,
  nullptr
};

static const TargetRegisterClass *const CtrRegs_with_subreg_overflowSuperclasses[] = {
  &Hexagon::CtrRegsRegClass,
  nullptr
};

static const TargetRegisterClass *const GeneralDoubleLow8RegsSuperclasses[] = {
  &Hexagon::DoubleRegsRegClass,
  nullptr
};

static const TargetRegisterClass *const DoubleRegs_with_isub_hi_in_IntRegsLow8Superclasses[] = {
  &Hexagon::DoubleRegsRegClass,
  &Hexagon::GeneralDoubleLow8RegsRegClass,
  nullptr
};

static const TargetRegisterClass *const CtrRegs64_and_V62RegsSuperclasses[] = {
  &Hexagon::V62RegsRegClass,
  &Hexagon::V62Regs_with_isub_hiRegClass,
  &Hexagon::CtrRegs64RegClass,
  nullptr
};

static const TargetRegisterClass *const CtrRegs64_with_isub_hi_in_ModRegsSuperclasses[] = {
  &Hexagon::CtrRegs64RegClass,
  nullptr
};

static const TargetRegisterClass *const HvxVR_and_V65RegsSuperclasses[] = {
  &Hexagon::V65RegsRegClass,
  &Hexagon::HvxVRRegClass,
  nullptr
};


namespace Hexagon {   // Register class instances
  extern const TargetRegisterClass UsrBitsRegClass = {
    &HexagonMCRegisterClasses[UsrBitsRegClassID],
    UsrBitsSubClassMask,
    SuperRegIdxSeqs + 3,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GuestRegsRegClass = {
    &HexagonMCRegisterClasses[GuestRegsRegClassID],
    GuestRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass IntRegsRegClass = {
    &HexagonMCRegisterClasses[IntRegsRegClassID],
    IntRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass CtrRegsRegClass = {
    &HexagonMCRegisterClasses[CtrRegsRegClassID],
    CtrRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000004),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GeneralSubRegsRegClass = {
    &HexagonMCRegisterClasses[GeneralSubRegsRegClassID],
    GeneralSubRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GeneralSubRegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass V62RegsRegClass = {
    &HexagonMCRegisterClasses[V62RegsRegClassID],
    V62RegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000003),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass IntRegsLow8RegClass = {
    &HexagonMCRegisterClasses[IntRegsLow8RegClassID],
    IntRegsLow8SubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    IntRegsLow8Superclasses,
    nullptr
  };

  extern const TargetRegisterClass CtrRegs_and_V62RegsRegClass = {
    &HexagonMCRegisterClasses[CtrRegs_and_V62RegsRegClassID],
    CtrRegs_and_V62RegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    CtrRegs_and_V62RegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass PredRegsRegClass = {
    &HexagonMCRegisterClasses[PredRegsRegClassID],
    PredRegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass V62Regs_with_isub_hiRegClass = {
    &HexagonMCRegisterClasses[V62Regs_with_isub_hiRegClassID],
    V62Regs_with_isub_hiSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    V62Regs_with_isub_hiSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ModRegsRegClass = {
    &HexagonMCRegisterClasses[ModRegsRegClassID],
    ModRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    ModRegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass CtrRegs_with_subreg_overflowRegClass = {
    &HexagonMCRegisterClasses[CtrRegs_with_subreg_overflowRegClassID],
    CtrRegs_with_subreg_overflowSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000004),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    CtrRegs_with_subreg_overflowSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass V65RegsRegClass = {
    &HexagonMCRegisterClasses[V65RegsRegClassID],
    V65RegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass DoubleRegsRegClass = {
    &HexagonMCRegisterClasses[DoubleRegsRegClassID],
    DoubleRegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GuestRegs64RegClass = {
    &HexagonMCRegisterClasses[GuestRegs64RegClassID],
    GuestRegs64SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass CtrRegs64RegClass = {
    &HexagonMCRegisterClasses[CtrRegs64RegClassID],
    CtrRegs64SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GeneralDoubleLow8RegsRegClass = {
    &HexagonMCRegisterClasses[GeneralDoubleLow8RegsRegClassID],
    GeneralDoubleLow8RegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GeneralDoubleLow8RegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DoubleRegs_with_isub_hi_in_IntRegsLow8RegClass = {
    &HexagonMCRegisterClasses[DoubleRegs_with_isub_hi_in_IntRegsLow8RegClassID],
    DoubleRegs_with_isub_hi_in_IntRegsLow8SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DoubleRegs_with_isub_hi_in_IntRegsLow8Superclasses,
    nullptr
  };

  extern const TargetRegisterClass CtrRegs64_and_V62RegsRegClass = {
    &HexagonMCRegisterClasses[CtrRegs64_and_V62RegsRegClassID],
    CtrRegs64_and_V62RegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    CtrRegs64_and_V62RegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass CtrRegs64_with_isub_hi_in_ModRegsRegClass = {
    &HexagonMCRegisterClasses[CtrRegs64_with_isub_hi_in_ModRegsRegClassID],
    CtrRegs64_with_isub_hi_in_ModRegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    CtrRegs64_with_isub_hi_in_ModRegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass HvxVRRegClass = {
    &HexagonMCRegisterClasses[HvxVRRegClassID],
    HvxVRSubClassMask,
    SuperRegIdxSeqs + 8,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass HvxQRRegClass = {
    &HexagonMCRegisterClasses[HvxQRRegClassID],
    HvxQRSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass HvxVR_and_V65RegsRegClass = {
    &HexagonMCRegisterClasses[HvxVR_and_V65RegsRegClassID],
    HvxVR_and_V65RegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    HvxVR_and_V65RegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass HvxWRRegClass = {
    &HexagonMCRegisterClasses[HvxWRRegClassID],
    HvxWRSubClassMask,
    SuperRegIdxSeqs + 5,
    LaneBitmask(0x00000018),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass HvxVQRRegClass = {
    &HexagonMCRegisterClasses[HvxVQRRegClassID],
    HvxVQRSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000078),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

} // end namespace Hexagon

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &Hexagon::UsrBitsRegClass,
    &Hexagon::GuestRegsRegClass,
    &Hexagon::IntRegsRegClass,
    &Hexagon::CtrRegsRegClass,
    &Hexagon::GeneralSubRegsRegClass,
    &Hexagon::V62RegsRegClass,
    &Hexagon::IntRegsLow8RegClass,
    &Hexagon::CtrRegs_and_V62RegsRegClass,
    &Hexagon::PredRegsRegClass,
    &Hexagon::V62Regs_with_isub_hiRegClass,
    &Hexagon::ModRegsRegClass,
    &Hexagon::CtrRegs_with_subreg_overflowRegClass,
    &Hexagon::V65RegsRegClass,
    &Hexagon::DoubleRegsRegClass,
    &Hexagon::GuestRegs64RegClass,
    &Hexagon::CtrRegs64RegClass,
    &Hexagon::GeneralDoubleLow8RegsRegClass,
    &Hexagon::DoubleRegs_with_isub_hi_in_IntRegsLow8RegClass,
    &Hexagon::CtrRegs64_and_V62RegsRegClass,
    &Hexagon::CtrRegs64_with_isub_hi_in_ModRegsRegClass,
    &Hexagon::HvxVRRegClass,
    &Hexagon::HvxQRRegClass,
    &Hexagon::HvxVR_and_V65RegsRegClass,
    &Hexagon::HvxWRRegClass,
    &Hexagon::HvxVQRRegClass,
  };
} // end anonymous namespace

static const TargetRegisterInfoDesc HexagonRegInfoDesc[] = { // Extra Descriptors
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
};
unsigned HexagonGenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t RowMap[9] = {
    0, 0, 0, 0, 0, 0, 1, 0, 0, 
  };
  static const uint8_t Rows[2][9] = {
    { 0, 0, 0, Hexagon::wsub_hi_then_vsub_hi, Hexagon::wsub_hi_then_vsub_lo, 0, 0, 0, 0, },
    { 0, 0, 0, Hexagon::vsub_hi, Hexagon::vsub_lo, 0, 0, 0, 0, },
  };

  --IdxA; assert(IdxA < 9);
  --IdxB; assert(IdxB < 9);
  return Rows[RowMap[IdxA]][IdxB];
}

  struct MaskRolOp {
    LaneBitmask Mask;
    uint8_t  RotateLeft;
  };
  static const MaskRolOp LaneMaskComposeSequences[] = {
    { LaneBitmask(0xFFFFFFFF),  0 }, { LaneBitmask::getNone(), 0 },   // Sequence 0
    { LaneBitmask(0xFFFFFFFF),  1 }, { LaneBitmask::getNone(), 0 },   // Sequence 2
    { LaneBitmask(0xFFFFFFFF),  2 }, { LaneBitmask::getNone(), 0 },   // Sequence 4
    { LaneBitmask(0xFFFFFFFF),  3 }, { LaneBitmask::getNone(), 0 },   // Sequence 6
    { LaneBitmask(0xFFFFFFFF),  4 }, { LaneBitmask::getNone(), 0 },   // Sequence 8
    { LaneBitmask(0xFFFFFFFF),  5 }, { LaneBitmask::getNone(), 0 },   // Sequence 10
    { LaneBitmask(0xFFFFFFFF),  6 }, { LaneBitmask::getNone(), 0 }  // Sequence 12
  };
  static const MaskRolOp *const CompositeSequences[] = {
    &LaneMaskComposeSequences[0], // to isub_hi
    &LaneMaskComposeSequences[2], // to isub_lo
    &LaneMaskComposeSequences[4], // to subreg_overflow
    &LaneMaskComposeSequences[6], // to vsub_hi
    &LaneMaskComposeSequences[8], // to vsub_lo
    &LaneMaskComposeSequences[4], // to wsub_hi
    &LaneMaskComposeSequences[0], // to wsub_lo
    &LaneMaskComposeSequences[10], // to wsub_hi_then_vsub_hi
    &LaneMaskComposeSequences[12] // to wsub_hi_then_vsub_lo
  };

LaneBitmask HexagonGenRegisterInfo::composeSubRegIndexLaneMaskImpl(unsigned IdxA, LaneBitmask LaneMask) const {
  --IdxA; assert(IdxA < 9 && "Subregister index out of bounds");
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

LaneBitmask HexagonGenRegisterInfo::reverseComposeSubRegIndexLaneMaskImpl(unsigned IdxA,  LaneBitmask LaneMask) const {
  LaneMask &= getSubRegIndexLaneMask(IdxA);
  --IdxA; assert(IdxA < 9 && "Subregister index out of bounds");
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

const TargetRegisterClass *HexagonGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[25][9] = {
    {	// UsrBits
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// GuestRegs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// IntRegs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// CtrRegs
      0,	// isub_hi
      0,	// isub_lo
      12,	// subreg_overflow -> CtrRegs_with_subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// GeneralSubRegs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// V62Regs
      10,	// isub_hi -> V62Regs_with_isub_hi
      10,	// isub_lo -> V62Regs_with_isub_hi
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// IntRegsLow8
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// CtrRegs_and_V62Regs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// PredRegs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// V62Regs_with_isub_hi
      10,	// isub_hi -> V62Regs_with_isub_hi
      10,	// isub_lo -> V62Regs_with_isub_hi
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// ModRegs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// CtrRegs_with_subreg_overflow
      0,	// isub_hi
      0,	// isub_lo
      12,	// subreg_overflow -> CtrRegs_with_subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// V65Regs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// DoubleRegs
      14,	// isub_hi -> DoubleRegs
      14,	// isub_lo -> DoubleRegs
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// GuestRegs64
      15,	// isub_hi -> GuestRegs64
      15,	// isub_lo -> GuestRegs64
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// CtrRegs64
      16,	// isub_hi -> CtrRegs64
      16,	// isub_lo -> CtrRegs64
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// GeneralDoubleLow8Regs
      17,	// isub_hi -> GeneralDoubleLow8Regs
      17,	// isub_lo -> GeneralDoubleLow8Regs
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// DoubleRegs_with_isub_hi_in_IntRegsLow8
      18,	// isub_hi -> DoubleRegs_with_isub_hi_in_IntRegsLow8
      18,	// isub_lo -> DoubleRegs_with_isub_hi_in_IntRegsLow8
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// CtrRegs64_and_V62Regs
      19,	// isub_hi -> CtrRegs64_and_V62Regs
      19,	// isub_lo -> CtrRegs64_and_V62Regs
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// CtrRegs64_with_isub_hi_in_ModRegs
      20,	// isub_hi -> CtrRegs64_with_isub_hi_in_ModRegs
      20,	// isub_lo -> CtrRegs64_with_isub_hi_in_ModRegs
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// HvxVR
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// HvxQR
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// HvxVR_and_V65Regs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// HvxWR
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      24,	// vsub_hi -> HvxWR
      24,	// vsub_lo -> HvxWR
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// HvxVQR
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      25,	// vsub_hi -> HvxVQR
      25,	// vsub_lo -> HvxVQR
      25,	// wsub_hi -> HvxVQR
      25,	// wsub_lo -> HvxVQR
      25,	// wsub_hi_then_vsub_hi -> HvxVQR
      25,	// wsub_hi_then_vsub_lo -> HvxVQR
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 9 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : nullptr;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &HexagonGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {0, 0},  	// UsrBits
    {0, 0},  	// GuestRegs
    {1, 32},  	// IntRegs
    {0, 6},  	// CtrRegs
    {1, 16},  	// GeneralSubRegs
    {0, 0},  	// V62Regs
    {1, 8},  	// IntRegsLow8
    {0, 0},  	// CtrRegs_and_V62Regs
    {1, 4},  	// PredRegs
    {0, 0},  	// V62Regs_with_isub_hi
    {1, 2},  	// ModRegs
    {0, 0},  	// CtrRegs_with_subreg_overflow
    {1, 1},  	// V65Regs
    {2, 32},  	// DoubleRegs
    {0, 0},  	// GuestRegs64
    {0, 6},  	// CtrRegs64
    {2, 16},  	// GeneralDoubleLow8Regs
    {2, 8},  	// DoubleRegs_with_isub_hi_in_IntRegsLow8
    {0, 0},  	// CtrRegs64_and_V62Regs
    {2, 2},  	// CtrRegs64_with_isub_hi_in_ModRegs
    {1, 33},  	// HvxVR
    {1, 4},  	// HvxQR
    {1, 1},  	// HvxVR_and_V65Regs
    {2, 32},  	// HvxWR
    {4, 32},  	// HvxVQR
  };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned HexagonGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 127 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned HexagonGenRegisterInfo::getNumRegPressureSets() const {
  return 8;
}

// Get the name of this register unit pressure set.
const char *HexagonGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *const PressureNameTable[] = {
    "HvxVR_and_V65Regs",
    "ModRegs",
    "PredRegs",
    "HvxQR",
    "IntRegsLow8",
    "GeneralSubRegs",
    "IntRegs",
    "HvxVR",
  };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned HexagonGenRegisterInfo::
getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const {
  static const uint8_t PressureLimitTable[] = {
    1,  	// 0: HvxVR_and_V65Regs
    2,  	// 1: ModRegs
    4,  	// 2: PredRegs
    4,  	// 3: HvxQR
    8,  	// 4: IntRegsLow8
    16,  	// 5: GeneralSubRegs
    32,  	// 6: IntRegs
    33,  	// 7: HvxVR
  };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
  /* 0 */ 1, -1,
  /* 2 */ 2, -1,
  /* 4 */ 3, -1,
  /* 6 */ 4, 5, 6, -1,
  /* 10 */ 0, 7, -1,
};

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* HexagonGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const uint8_t RCSetStartTable[] = {
    1,1,8,1,7,1,6,1,2,1,0,1,1,8,1,1,7,6,1,1,11,4,10,11,11,};
  return &RCSetsTable[RCSetStartTable[RC->getID()]];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* HexagonGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 127 && "invalid register unit");
  static const uint8_t RUSetStartTable[] = {
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,10,1,6,6,6,6,6,6,6,6,8,8,8,8,8,8,8,8,7,7,7,7,7,7,7,7,8,8,8,8,8,8,8,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,2,2,2,2,4,4,4,4,1,1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,};
  return &RCSetsTable[RUSetStartTable[RegUnit]];
}

extern const MCRegisterDesc HexagonRegDesc[];
extern const MCPhysReg HexagonRegDiffLists[];
extern const LaneBitmask HexagonLaneMaskLists[];
extern const char HexagonRegStrings[];
extern const char HexagonRegClassStrings[];
extern const MCPhysReg HexagonRegUnitRoots[][2];
extern const uint16_t HexagonSubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits HexagonSubRegIdxRanges[];
extern const uint16_t HexagonRegEncodingTable[];
// Hexagon Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair HexagonDwarfFlavour0Dwarf2L[];
extern const unsigned HexagonDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonEHFlavour0Dwarf2L[];
extern const unsigned HexagonEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonDwarfFlavour0L2Dwarf[];
extern const unsigned HexagonDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonEHFlavour0L2Dwarf[];
extern const unsigned HexagonEHFlavour0L2DwarfSize;

HexagonGenRegisterInfo::
HexagonGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour,
      unsigned PC, unsigned HwMode)
  : TargetRegisterInfo(HexagonRegInfoDesc, RegisterClasses, RegisterClasses+25,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable,
             LaneBitmask(0xFFFFFFFB), RegClassInfos, HwMode) {
  InitMCRegisterInfo(HexagonRegDesc, 197, RA, PC,
                     HexagonMCRegisterClasses, 25,
                     HexagonRegUnitRoots,
                     127,
                     HexagonRegDiffLists,
                     HexagonLaneMaskLists,
                     HexagonRegStrings,
                     HexagonRegClassStrings,
                     HexagonSubRegIdxLists,
                     10,
                     HexagonSubRegIdxRanges,
                     HexagonRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(HexagonDwarfFlavour0Dwarf2L, HexagonDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(HexagonEHFlavour0Dwarf2L, HexagonEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(HexagonDwarfFlavour0L2Dwarf, HexagonDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(HexagonEHFlavour0L2Dwarf, HexagonEHFlavour0L2DwarfSize, true);
    break;
  }
}

static const MCPhysReg HexagonCSR_SaveList[] = { Hexagon::R16, Hexagon::R17, Hexagon::R18, Hexagon::R19, Hexagon::R20, Hexagon::R21, Hexagon::R22, Hexagon::R23, Hexagon::R24, Hexagon::R25, Hexagon::R26, Hexagon::R27, 0 };
static const uint32_t HexagonCSR_RegMask[] = { 0x00000000, 0x000003f0, 0x00000000, 0x00007ff8, 0x00000000, 0x00000000, 0x00000000, };


ArrayRef<const uint32_t *> HexagonGenRegisterInfo::getRegMasks() const {
  static const uint32_t *const Masks[] = {
    HexagonCSR_RegMask,
  };
  return makeArrayRef(Masks);
}

ArrayRef<const char *> HexagonGenRegisterInfo::getRegMaskNames() const {
  static const char *const Names[] = {
    "HexagonCSR",
  };
  return makeArrayRef(Names);
}

const HexagonFrameLowering *
HexagonGenRegisterInfo::getFrameLowering(const MachineFunction &MF) {
  return static_cast<const HexagonFrameLowering *>(
      MF.getSubtarget().getFrameLowering());
}

} // end namespace llvm

#endif // GET_REGINFO_TARGET_DESC


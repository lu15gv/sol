/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Lanai Disassembler                                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper functions for extracting fields from encoded instructions.
// InsnType must either be integral or an APInt-like object that must:
// * Have a static const max_size_in_bits equal to the number of bits in the
//   encoding.
// * be default-constructible and copy-constructible
// * be constructible from a uint64_t
// * be constructible from an APInt (this can be private)
// * Support getBitsSet(loBit, hiBit)
// * be convertible to uint64_t
// * Support the ~, &, ==, !=, and |= operators with other objects of the same type
// * Support shift (<<, >>) with signed and unsigned integers on the RHS
// * Support put (<<) to raw_ostream&
template<typename InsnType>
#if defined(_MSC_VER) && !defined(__clang__)
__declspec(noinline)
#endif
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits, std::true_type) {
  assert(startBit + numBits <= 64 && "Cannot support >64-bit extractions!");
  assert(startBit + numBits <= (sizeof(InsnType) * 8) &&
         "Instruction field out of bounds!");
  InsnType fieldMask;
  if (numBits == sizeof(InsnType) * 8)
    fieldMask = (InsnType)(-1LL);
  else
    fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
  return (insn & fieldMask) >> startBit;
}

template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits, std::false_type) {
  assert(startBit + numBits <= InsnType::max_size_in_bits && "Instruction field out of bounds!");
  InsnType fieldMask = InsnType::getBitsSet(0, numBits);
  return (insn >> startBit) & fieldMask;
}

template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
  return fieldFromInstruction(insn, startBit, numBits, std::is_integral<InsnType>());
}

static const uint8_t DecoderTableLanai32[] = {
/* 0 */       MCD::OPC_ExtractField, 28, 4,  // Inst{31-28} ...
/* 3 */       MCD::OPC_FilterValue, 0, 138, 0, 0, // Skip to: 146
/* 8 */       MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 11 */      MCD::OPC_FilterValue, 0, 103, 0, 0, // Skip to: 119
/* 16 */      MCD::OPC_ExtractField, 0, 16,  // Inst{15-0} ...
/* 19 */      MCD::OPC_FilterValue, 1, 11, 0, 0, // Skip to: 35
/* 24 */      MCD::OPC_CheckField, 18, 10, 0, 84, 0, 0, // Skip to: 115
/* 31 */      MCD::OPC_Decode, 223, 1, 0, // Opcode: NOP
/* 35 */      MCD::OPC_FilterValue, 2, 11, 0, 0, // Skip to: 51
/* 40 */      MCD::OPC_CheckField, 18, 10, 0, 68, 0, 0, // Skip to: 115
/* 47 */      MCD::OPC_Decode, 217, 1, 0, // Opcode: LOG0
/* 51 */      MCD::OPC_FilterValue, 3, 11, 0, 0, // Skip to: 67
/* 56 */      MCD::OPC_CheckField, 18, 10, 0, 52, 0, 0, // Skip to: 115
/* 63 */      MCD::OPC_Decode, 218, 1, 0, // Opcode: LOG1
/* 67 */      MCD::OPC_FilterValue, 4, 11, 0, 0, // Skip to: 83
/* 72 */      MCD::OPC_CheckField, 18, 10, 0, 36, 0, 0, // Skip to: 115
/* 79 */      MCD::OPC_Decode, 219, 1, 0, // Opcode: LOG2
/* 83 */      MCD::OPC_FilterValue, 5, 11, 0, 0, // Skip to: 99
/* 88 */      MCD::OPC_CheckField, 18, 10, 0, 20, 0, 0, // Skip to: 115
/* 95 */      MCD::OPC_Decode, 220, 1, 0, // Opcode: LOG3
/* 99 */      MCD::OPC_FilterValue, 6, 11, 0, 0, // Skip to: 115
/* 104 */     MCD::OPC_CheckField, 18, 10, 0, 4, 0, 0, // Skip to: 115
/* 111 */     MCD::OPC_Decode, 221, 1, 0, // Opcode: LOG4
/* 115 */     MCD::OPC_Decode, 190, 1, 1, // Opcode: ADD_I_LO
/* 119 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 128
/* 124 */     MCD::OPC_Decode, 189, 1, 1, // Opcode: ADD_I_HI
/* 128 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 137
/* 133 */     MCD::OPC_Decode, 187, 1, 1, // Opcode: ADD_F_I_LO
/* 137 */     MCD::OPC_FilterValue, 3, 198, 3, 0, // Skip to: 1108
/* 142 */     MCD::OPC_Decode, 186, 1, 1, // Opcode: ADD_F_I_HI
/* 146 */     MCD::OPC_FilterValue, 1, 39, 0, 0, // Skip to: 190
/* 151 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 154 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 163
/* 159 */     MCD::OPC_Decode, 184, 1, 1, // Opcode: ADDC_I_LO
/* 163 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 172
/* 168 */     MCD::OPC_Decode, 183, 1, 1, // Opcode: ADDC_I_HI
/* 172 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 181
/* 177 */     MCD::OPC_Decode, 181, 1, 1, // Opcode: ADDC_F_I_LO
/* 181 */     MCD::OPC_FilterValue, 3, 154, 3, 0, // Skip to: 1108
/* 186 */     MCD::OPC_Decode, 180, 1, 1, // Opcode: ADDC_F_I_HI
/* 190 */     MCD::OPC_FilterValue, 2, 39, 0, 0, // Skip to: 234
/* 195 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 198 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 207
/* 203 */     MCD::OPC_Decode, 135, 2, 1, // Opcode: SUB_I_LO
/* 207 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 216
/* 212 */     MCD::OPC_Decode, 134, 2, 1, // Opcode: SUB_I_HI
/* 216 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 225
/* 221 */     MCD::OPC_Decode, 132, 2, 1, // Opcode: SUB_F_I_LO
/* 225 */     MCD::OPC_FilterValue, 3, 110, 3, 0, // Skip to: 1108
/* 230 */     MCD::OPC_Decode, 131, 2, 1, // Opcode: SUB_F_I_HI
/* 234 */     MCD::OPC_FilterValue, 3, 39, 0, 0, // Skip to: 278
/* 239 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 242 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 251
/* 247 */     MCD::OPC_Decode, 129, 2, 1, // Opcode: SUBB_I_LO
/* 251 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 260
/* 256 */     MCD::OPC_Decode, 128, 2, 1, // Opcode: SUBB_I_HI
/* 260 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 269
/* 265 */     MCD::OPC_Decode, 254, 1, 1, // Opcode: SUBB_F_I_LO
/* 269 */     MCD::OPC_FilterValue, 3, 66, 3, 0, // Skip to: 1108
/* 274 */     MCD::OPC_Decode, 253, 1, 1, // Opcode: SUBB_F_I_HI
/* 278 */     MCD::OPC_FilterValue, 4, 39, 0, 0, // Skip to: 322
/* 283 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 286 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 295
/* 291 */     MCD::OPC_Decode, 196, 1, 1, // Opcode: AND_I_LO
/* 295 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 304
/* 300 */     MCD::OPC_Decode, 195, 1, 1, // Opcode: AND_I_HI
/* 304 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 313
/* 309 */     MCD::OPC_Decode, 193, 1, 1, // Opcode: AND_F_I_LO
/* 313 */     MCD::OPC_FilterValue, 3, 22, 3, 0, // Skip to: 1108
/* 318 */     MCD::OPC_Decode, 192, 1, 1, // Opcode: AND_F_I_HI
/* 322 */     MCD::OPC_FilterValue, 5, 39, 0, 0, // Skip to: 366
/* 327 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 330 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 339
/* 335 */     MCD::OPC_Decode, 228, 1, 1, // Opcode: OR_I_LO
/* 339 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 348
/* 344 */     MCD::OPC_Decode, 227, 1, 1, // Opcode: OR_I_HI
/* 348 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 357
/* 353 */     MCD::OPC_Decode, 225, 1, 1, // Opcode: OR_F_I_LO
/* 357 */     MCD::OPC_FilterValue, 3, 234, 2, 0, // Skip to: 1108
/* 362 */     MCD::OPC_Decode, 224, 1, 1, // Opcode: OR_F_I_HI
/* 366 */     MCD::OPC_FilterValue, 6, 39, 0, 0, // Skip to: 410
/* 371 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 374 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 383
/* 379 */     MCD::OPC_Decode, 144, 2, 1, // Opcode: XOR_I_LO
/* 383 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 392
/* 388 */     MCD::OPC_Decode, 143, 2, 1, // Opcode: XOR_I_HI
/* 392 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 401
/* 397 */     MCD::OPC_Decode, 141, 2, 1, // Opcode: XOR_F_I_LO
/* 401 */     MCD::OPC_FilterValue, 3, 190, 2, 0, // Skip to: 1108
/* 406 */     MCD::OPC_Decode, 140, 2, 1, // Opcode: XOR_F_I_HI
/* 410 */     MCD::OPC_FilterValue, 7, 39, 0, 0, // Skip to: 454
/* 415 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 418 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 427
/* 423 */     MCD::OPC_Decode, 243, 1, 2, // Opcode: SL_I
/* 427 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 436
/* 432 */     MCD::OPC_Decode, 233, 1, 2, // Opcode: SA_I
/* 436 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 445
/* 441 */     MCD::OPC_Decode, 242, 1, 2, // Opcode: SL_F_I
/* 445 */     MCD::OPC_FilterValue, 3, 146, 2, 0, // Skip to: 1108
/* 450 */     MCD::OPC_Decode, 232, 1, 2, // Opcode: SA_F_I
/* 454 */     MCD::OPC_FilterValue, 8, 18, 0, 0, // Skip to: 477
/* 459 */     MCD::OPC_CheckField, 0, 28, 252, 255, 219, 8, 4, 0, 0, // Skip to: 473
/* 469 */     MCD::OPC_Decode, 231, 1, 0, // Opcode: RET
/* 473 */     MCD::OPC_Decode, 213, 1, 3, // Opcode: LDW_RI
/* 477 */     MCD::OPC_FilterValue, 9, 4, 0, 0, // Skip to: 486
/* 482 */     MCD::OPC_Decode, 137, 2, 3, // Opcode: SW_RI
/* 486 */     MCD::OPC_FilterValue, 10, 57, 0, 0, // Skip to: 548
/* 491 */     MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 494 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 503
/* 499 */     MCD::OPC_Decode, 210, 1, 4, // Opcode: LDHs_RR
/* 503 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 512
/* 508 */     MCD::OPC_Decode, 212, 1, 4, // Opcode: LDHz_RR
/* 512 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 521
/* 517 */     MCD::OPC_Decode, 214, 1, 4, // Opcode: LDW_RR
/* 521 */     MCD::OPC_FilterValue, 3, 4, 0, 0, // Skip to: 530
/* 526 */     MCD::OPC_Decode, 215, 1, 4, // Opcode: LDWz_RR
/* 530 */     MCD::OPC_FilterValue, 4, 4, 0, 0, // Skip to: 539
/* 535 */     MCD::OPC_Decode, 206, 1, 4, // Opcode: LDBs_RR
/* 539 */     MCD::OPC_FilterValue, 5, 52, 2, 0, // Skip to: 1108
/* 544 */     MCD::OPC_Decode, 208, 1, 4, // Opcode: LDBz_RR
/* 548 */     MCD::OPC_FilterValue, 11, 30, 0, 0, // Skip to: 583
/* 553 */     MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 556 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 565
/* 561 */     MCD::OPC_Decode, 252, 1, 4, // Opcode: STH_RR
/* 565 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 574
/* 570 */     MCD::OPC_Decode, 138, 2, 4, // Opcode: SW_RR
/* 574 */     MCD::OPC_FilterValue, 4, 17, 2, 0, // Skip to: 1108
/* 579 */     MCD::OPC_Decode, 250, 1, 4, // Opcode: STB_RR
/* 583 */     MCD::OPC_FilterValue, 12, 57, 1, 0, // Skip to: 901
/* 588 */     MCD::OPC_ExtractField, 3, 8,  // Inst{10-3} ...
/* 591 */     MCD::OPC_FilterValue, 0, 21, 0, 0, // Skip to: 617
/* 596 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 599 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 608
/* 604 */     MCD::OPC_Decode, 191, 1, 5, // Opcode: ADD_R
/* 608 */     MCD::OPC_FilterValue, 1, 239, 1, 0, // Skip to: 1108
/* 613 */     MCD::OPC_Decode, 188, 1, 5, // Opcode: ADD_F_R
/* 617 */     MCD::OPC_FilterValue, 32, 21, 0, 0, // Skip to: 643
/* 622 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 625 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 634
/* 630 */     MCD::OPC_Decode, 185, 1, 5, // Opcode: ADDC_R
/* 634 */     MCD::OPC_FilterValue, 1, 213, 1, 0, // Skip to: 1108
/* 639 */     MCD::OPC_Decode, 182, 1, 5, // Opcode: ADDC_F_R
/* 643 */     MCD::OPC_FilterValue, 64, 21, 0, 0, // Skip to: 669
/* 648 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 651 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 660
/* 656 */     MCD::OPC_Decode, 136, 2, 5, // Opcode: SUB_R
/* 660 */     MCD::OPC_FilterValue, 1, 187, 1, 0, // Skip to: 1108
/* 665 */     MCD::OPC_Decode, 133, 2, 5, // Opcode: SUB_F_R
/* 669 */     MCD::OPC_FilterValue, 96, 21, 0, 0, // Skip to: 695
/* 674 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 677 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 686
/* 682 */     MCD::OPC_Decode, 130, 2, 5, // Opcode: SUBB_R
/* 686 */     MCD::OPC_FilterValue, 1, 161, 1, 0, // Skip to: 1108
/* 691 */     MCD::OPC_Decode, 255, 1, 5, // Opcode: SUBB_F_R
/* 695 */     MCD::OPC_FilterValue, 128, 1, 21, 0, 0, // Skip to: 722
/* 701 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 704 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 713
/* 709 */     MCD::OPC_Decode, 197, 1, 5, // Opcode: AND_R
/* 713 */     MCD::OPC_FilterValue, 1, 134, 1, 0, // Skip to: 1108
/* 718 */     MCD::OPC_Decode, 194, 1, 5, // Opcode: AND_F_R
/* 722 */     MCD::OPC_FilterValue, 160, 1, 75, 0, 0, // Skip to: 803
/* 728 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 731 */     MCD::OPC_FilterValue, 0, 58, 0, 0, // Skip to: 794
/* 736 */     MCD::OPC_CheckField, 18, 10, 64, 18, 0, 0, // Skip to: 761
/* 743 */     MCD::OPC_CheckField, 16, 1, 0, 11, 0, 0, // Skip to: 761
/* 750 */     MCD::OPC_CheckField, 0, 3, 0, 4, 0, 0, // Skip to: 761
/* 757 */     MCD::OPC_Decode, 203, 1, 6, // Opcode: JR
/* 761 */     MCD::OPC_CheckField, 23, 5, 2, 11, 0, 0, // Skip to: 779
/* 768 */     MCD::OPC_CheckField, 11, 5, 0, 4, 0, 0, // Skip to: 779
/* 775 */     MCD::OPC_Decode, 199, 1, 7, // Opcode: BRIND_CC
/* 779 */     MCD::OPC_CheckField, 23, 5, 2, 4, 0, 0, // Skip to: 790
/* 786 */     MCD::OPC_Decode, 200, 1, 8, // Opcode: BRIND_CCA
/* 790 */     MCD::OPC_Decode, 229, 1, 5, // Opcode: OR_R
/* 794 */     MCD::OPC_FilterValue, 1, 53, 1, 0, // Skip to: 1108
/* 799 */     MCD::OPC_Decode, 226, 1, 5, // Opcode: OR_F_R
/* 803 */     MCD::OPC_FilterValue, 192, 1, 21, 0, 0, // Skip to: 830
/* 809 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 812 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 821
/* 817 */     MCD::OPC_Decode, 145, 2, 5, // Opcode: XOR_R
/* 821 */     MCD::OPC_FilterValue, 1, 26, 1, 0, // Skip to: 1108
/* 826 */     MCD::OPC_Decode, 142, 2, 5, // Opcode: XOR_F_R
/* 830 */     MCD::OPC_FilterValue, 224, 1, 11, 0, 0, // Skip to: 847
/* 836 */     MCD::OPC_CheckField, 17, 1, 0, 9, 1, 0, // Skip to: 1108
/* 843 */     MCD::OPC_Decode, 235, 1, 9, // Opcode: SELECT
/* 847 */     MCD::OPC_FilterValue, 240, 1, 21, 0, 0, // Skip to: 874
/* 853 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 856 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 865
/* 861 */     MCD::OPC_Decode, 240, 1, 5, // Opcode: SHL_R
/* 865 */     MCD::OPC_FilterValue, 1, 238, 0, 0, // Skip to: 1108
/* 870 */     MCD::OPC_Decode, 239, 1, 5, // Opcode: SHL_F_R
/* 874 */     MCD::OPC_FilterValue, 248, 1, 228, 0, 0, // Skip to: 1108
/* 880 */     MCD::OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 883 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 892
/* 888 */     MCD::OPC_Decode, 245, 1, 5, // Opcode: SRA_R
/* 892 */     MCD::OPC_FilterValue, 1, 211, 0, 0, // Skip to: 1108
/* 897 */     MCD::OPC_Decode, 244, 1, 5, // Opcode: SRA_F_R
/* 901 */     MCD::OPC_FilterValue, 13, 30, 0, 0, // Skip to: 936
/* 906 */     MCD::OPC_ExtractField, 0, 18,  // Inst{17-0} ...
/* 909 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 918
/* 914 */     MCD::OPC_Decode, 230, 1, 10, // Opcode: POPC
/* 918 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 927
/* 923 */     MCD::OPC_Decode, 216, 1, 10, // Opcode: LEADZ
/* 927 */     MCD::OPC_FilterValue, 3, 176, 0, 0, // Skip to: 1108
/* 932 */     MCD::OPC_Decode, 139, 2, 10, // Opcode: TRAILZ
/* 936 */     MCD::OPC_FilterValue, 14, 70, 0, 0, // Skip to: 1011
/* 941 */     MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 944 */     MCD::OPC_FilterValue, 0, 22, 0, 0, // Skip to: 971
/* 949 */     MCD::OPC_CheckField, 25, 3, 0, 11, 0, 0, // Skip to: 967
/* 956 */     MCD::OPC_CheckField, 0, 1, 0, 4, 0, 0, // Skip to: 967
/* 963 */     MCD::OPC_Decode, 202, 1, 11, // Opcode: BT
/* 967 */     MCD::OPC_Decode, 198, 1, 12, // Opcode: BRCC
/* 971 */     MCD::OPC_FilterValue, 1, 132, 0, 0, // Skip to: 1108
/* 976 */     MCD::OPC_ExtractField, 23, 2,  // Inst{24-23} ...
/* 979 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 995
/* 984 */     MCD::OPC_CheckField, 2, 16, 0, 117, 0, 0, // Skip to: 1108
/* 991 */     MCD::OPC_Decode, 234, 1, 13, // Opcode: SCC
/* 995 */     MCD::OPC_FilterValue, 2, 108, 0, 0, // Skip to: 1108
/* 1000 */    MCD::OPC_CheckField, 16, 7, 0, 101, 0, 0, // Skip to: 1108
/* 1007 */    MCD::OPC_Decode, 201, 1, 14, // Opcode: BRR
/* 1011 */    MCD::OPC_FilterValue, 15, 92, 0, 0, // Skip to: 1108
/* 1016 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1019 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1028
/* 1024 */    MCD::OPC_Decode, 204, 1, 15, // Opcode: LDADDR
/* 1028 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1037
/* 1033 */    MCD::OPC_Decode, 248, 1, 15, // Opcode: STADDR
/* 1037 */    MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 1046
/* 1042 */    MCD::OPC_Decode, 241, 1, 15, // Opcode: SLI
/* 1046 */    MCD::OPC_FilterValue, 3, 57, 0, 0, // Skip to: 1108
/* 1051 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1054 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1063
/* 1059 */    MCD::OPC_Decode, 209, 1, 16, // Opcode: LDHs_RI
/* 1063 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1072
/* 1068 */    MCD::OPC_Decode, 211, 1, 16, // Opcode: LDHz_RI
/* 1072 */    MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 1081
/* 1077 */    MCD::OPC_Decode, 251, 1, 16, // Opcode: STH_RI
/* 1081 */    MCD::OPC_FilterValue, 4, 4, 0, 0, // Skip to: 1090
/* 1086 */    MCD::OPC_Decode, 205, 1, 16, // Opcode: LDBs_RI
/* 1090 */    MCD::OPC_FilterValue, 5, 4, 0, 0, // Skip to: 1099
/* 1095 */    MCD::OPC_Decode, 207, 1, 16, // Opcode: LDBz_RI
/* 1099 */    MCD::OPC_FilterValue, 6, 4, 0, 0, // Skip to: 1108
/* 1104 */    MCD::OPC_Decode, 249, 1, 16, // Opcode: STB_RI
/* 1108 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  llvm_unreachable("Invalid index!");
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder, bool &DecodeComplete) {
  DecodeComplete = true;
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeShiftImm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 16) << 0;
    tmp |= fieldFromInstruction(insn, 18, 5) << 18;
    if (decodeRiMemoryValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 3, 8) << 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 10;
    tmp |= fieldFromInstruction(insn, 18, 5) << 15;
    if (decodeRrMemoryValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 3) << 1;
    tmp |= fieldFromInstruction(insn, 16, 1) << 0;
    if (decodePredicateOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 3) << 1;
    tmp |= fieldFromInstruction(insn, 16, 1) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 3) << 1;
    tmp |= fieldFromInstruction(insn, 16, 1) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 3) << 1;
    tmp |= fieldFromInstruction(insn, 16, 1) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 2, 23) << 2;
    if (decodeBranch(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 2, 23) << 2;
    if (decodeBranch(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 0;
    tmp |= fieldFromInstruction(insn, 25, 3) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 18, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 0;
    tmp |= fieldFromInstruction(insn, 25, 3) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 2, 14) << 2;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 0;
    tmp |= fieldFromInstruction(insn, 25, 3) << 1;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 16) << 0;
    tmp |= fieldFromInstruction(insn, 18, 5) << 16;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 23, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 0;
    tmp |= fieldFromInstruction(insn, 18, 5) << 12;
    if (decodeSplsValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  const FeatureBitset& Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  InsnType CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  while (true) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      LLVM_DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      InsnType ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;

      MI.clear();
      MI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm, DecodeComplete);
      assert(DecodeComplete);

      LLVM_DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": "
                   << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
      return S;
    }
    case MCD::OPC_TryDecode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;

      // Perform the decode operation.
      MCInst TmpMI;
      TmpMI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, TmpMI, Address, DisAsm, DecodeComplete);
      LLVM_DEBUG(dbgs() << Loc << ": OPC_TryDecode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": ");

      if (DecodeComplete) {
        // Decoding complete.
        LLVM_DEBUG(dbgs() << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
        MI = TmpMI;
        return S;
      } else {
        assert(S == MCDisassembler::Fail);
        // If the decoding was incomplete, skip.
        Ptr += NumToSkip;
        LLVM_DEBUG(dbgs() << "FAIL: continuing at " << (Ptr - DecodeTable) << "\n");
        // Reset decode status. This also drops a SoftFail status that could be
        // set before the decode attempt.
        S = MCDisassembler::Success;
      }
      break;
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      LLVM_DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // end namespace llvm

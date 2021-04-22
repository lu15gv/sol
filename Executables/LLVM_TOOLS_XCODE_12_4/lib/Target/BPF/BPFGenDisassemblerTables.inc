/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * BPF Disassembler                                                        *|
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

static const uint8_t DecoderTableBPF64[] = {
/* 0 */       MCD::OPC_ExtractField, 56, 8,  // Inst{63-56} ...
/* 3 */       MCD::OPC_FilterValue, 4, 4, 0, 0, // Skip to: 12
/* 8 */       MCD::OPC_Decode, 187, 1, 0, // Opcode: ADD_ri_32
/* 12 */      MCD::OPC_FilterValue, 5, 4, 0, 0, // Skip to: 21
/* 17 */      MCD::OPC_Decode, 211, 1, 1, // Opcode: JMP
/* 21 */      MCD::OPC_FilterValue, 7, 4, 0, 0, // Skip to: 30
/* 26 */      MCD::OPC_Decode, 186, 1, 2, // Opcode: ADD_ri
/* 30 */      MCD::OPC_FilterValue, 12, 4, 0, 0, // Skip to: 39
/* 35 */      MCD::OPC_Decode, 189, 1, 3, // Opcode: ADD_rr_32
/* 39 */      MCD::OPC_FilterValue, 15, 4, 0, 0, // Skip to: 48
/* 44 */      MCD::OPC_Decode, 188, 1, 4, // Opcode: ADD_rr
/* 48 */      MCD::OPC_FilterValue, 20, 4, 0, 0, // Skip to: 57
/* 53 */      MCD::OPC_Decode, 175, 2, 0, // Opcode: SUB_ri_32
/* 57 */      MCD::OPC_FilterValue, 21, 4, 0, 0, // Skip to: 66
/* 62 */      MCD::OPC_Decode, 207, 1, 5, // Opcode: JEQ_ri
/* 66 */      MCD::OPC_FilterValue, 22, 4, 0, 0, // Skip to: 75
/* 71 */      MCD::OPC_Decode, 208, 1, 6, // Opcode: JEQ_ri_32
/* 75 */      MCD::OPC_FilterValue, 23, 4, 0, 0, // Skip to: 84
/* 80 */      MCD::OPC_Decode, 174, 2, 2, // Opcode: SUB_ri
/* 84 */      MCD::OPC_FilterValue, 24, 41, 0, 0, // Skip to: 130
/* 89 */      MCD::OPC_ExtractField, 32, 16,  // Inst{47-32} ...
/* 92 */      MCD::OPC_FilterValue, 0, 7, 4, 0, // Skip to: 1128
/* 97 */      MCD::OPC_CheckField, 48, 8, 32, 11, 0, 0, // Skip to: 115
/* 104 */     MCD::OPC_CheckField, 0, 32, 0, 4, 0, 0, // Skip to: 115
/* 111 */     MCD::OPC_Decode, 204, 1, 7, // Opcode: FI_ri
/* 115 */     MCD::OPC_CheckField, 52, 4, 0, 4, 0, 0, // Skip to: 126
/* 122 */     MCD::OPC_Decode, 133, 2, 8, // Opcode: LD_imm64
/* 126 */     MCD::OPC_Decode, 134, 2, 9, // Opcode: LD_pseudo
/* 130 */     MCD::OPC_FilterValue, 28, 4, 0, 0, // Skip to: 139
/* 135 */     MCD::OPC_Decode, 177, 2, 3, // Opcode: SUB_rr_32
/* 139 */     MCD::OPC_FilterValue, 29, 4, 0, 0, // Skip to: 148
/* 144 */     MCD::OPC_Decode, 209, 1, 10, // Opcode: JEQ_rr
/* 148 */     MCD::OPC_FilterValue, 30, 4, 0, 0, // Skip to: 157
/* 153 */     MCD::OPC_Decode, 210, 1, 11, // Opcode: JEQ_rr_32
/* 157 */     MCD::OPC_FilterValue, 31, 4, 0, 0, // Skip to: 166
/* 162 */     MCD::OPC_Decode, 176, 2, 4, // Opcode: SUB_rr
/* 166 */     MCD::OPC_FilterValue, 32, 4, 0, 0, // Skip to: 175
/* 171 */     MCD::OPC_Decode, 129, 2, 12, // Opcode: LD_ABS_W
/* 175 */     MCD::OPC_FilterValue, 36, 4, 0, 0, // Skip to: 184
/* 180 */     MCD::OPC_Decode, 144, 2, 0, // Opcode: MUL_ri_32
/* 184 */     MCD::OPC_FilterValue, 37, 4, 0, 0, // Skip to: 193
/* 189 */     MCD::OPC_Decode, 236, 1, 5, // Opcode: JUGT_ri
/* 193 */     MCD::OPC_FilterValue, 38, 4, 0, 0, // Skip to: 202
/* 198 */     MCD::OPC_Decode, 237, 1, 6, // Opcode: JUGT_ri_32
/* 202 */     MCD::OPC_FilterValue, 39, 4, 0, 0, // Skip to: 211
/* 207 */     MCD::OPC_Decode, 143, 2, 2, // Opcode: MUL_ri
/* 211 */     MCD::OPC_FilterValue, 40, 4, 0, 0, // Skip to: 220
/* 216 */     MCD::OPC_Decode, 128, 2, 12, // Opcode: LD_ABS_H
/* 220 */     MCD::OPC_FilterValue, 44, 4, 0, 0, // Skip to: 229
/* 225 */     MCD::OPC_Decode, 146, 2, 3, // Opcode: MUL_rr_32
/* 229 */     MCD::OPC_FilterValue, 45, 4, 0, 0, // Skip to: 238
/* 234 */     MCD::OPC_Decode, 238, 1, 10, // Opcode: JUGT_rr
/* 238 */     MCD::OPC_FilterValue, 46, 4, 0, 0, // Skip to: 247
/* 243 */     MCD::OPC_Decode, 239, 1, 11, // Opcode: JUGT_rr_32
/* 247 */     MCD::OPC_FilterValue, 47, 4, 0, 0, // Skip to: 256
/* 252 */     MCD::OPC_Decode, 145, 2, 4, // Opcode: MUL_rr
/* 256 */     MCD::OPC_FilterValue, 48, 4, 0, 0, // Skip to: 265
/* 261 */     MCD::OPC_Decode, 255, 1, 12, // Opcode: LD_ABS_B
/* 265 */     MCD::OPC_FilterValue, 52, 4, 0, 0, // Skip to: 274
/* 270 */     MCD::OPC_Decode, 201, 1, 0, // Opcode: DIV_ri_32
/* 274 */     MCD::OPC_FilterValue, 53, 4, 0, 0, // Skip to: 283
/* 279 */     MCD::OPC_Decode, 232, 1, 5, // Opcode: JUGE_ri
/* 283 */     MCD::OPC_FilterValue, 54, 4, 0, 0, // Skip to: 292
/* 288 */     MCD::OPC_Decode, 233, 1, 6, // Opcode: JUGE_ri_32
/* 292 */     MCD::OPC_FilterValue, 55, 4, 0, 0, // Skip to: 301
/* 297 */     MCD::OPC_Decode, 200, 1, 2, // Opcode: DIV_ri
/* 301 */     MCD::OPC_FilterValue, 60, 4, 0, 0, // Skip to: 310
/* 306 */     MCD::OPC_Decode, 203, 1, 3, // Opcode: DIV_rr_32
/* 310 */     MCD::OPC_FilterValue, 61, 4, 0, 0, // Skip to: 319
/* 315 */     MCD::OPC_Decode, 234, 1, 10, // Opcode: JUGE_rr
/* 319 */     MCD::OPC_FilterValue, 62, 4, 0, 0, // Skip to: 328
/* 324 */     MCD::OPC_Decode, 235, 1, 11, // Opcode: JUGE_rr_32
/* 328 */     MCD::OPC_FilterValue, 63, 4, 0, 0, // Skip to: 337
/* 333 */     MCD::OPC_Decode, 202, 1, 4, // Opcode: DIV_rr
/* 337 */     MCD::OPC_FilterValue, 64, 4, 0, 0, // Skip to: 346
/* 342 */     MCD::OPC_Decode, 132, 2, 13, // Opcode: LD_IND_W
/* 346 */     MCD::OPC_FilterValue, 68, 4, 0, 0, // Skip to: 355
/* 351 */     MCD::OPC_Decode, 151, 2, 0, // Opcode: OR_ri_32
/* 355 */     MCD::OPC_FilterValue, 71, 4, 0, 0, // Skip to: 364
/* 360 */     MCD::OPC_Decode, 150, 2, 2, // Opcode: OR_ri
/* 364 */     MCD::OPC_FilterValue, 72, 4, 0, 0, // Skip to: 373
/* 369 */     MCD::OPC_Decode, 131, 2, 13, // Opcode: LD_IND_H
/* 373 */     MCD::OPC_FilterValue, 76, 4, 0, 0, // Skip to: 382
/* 378 */     MCD::OPC_Decode, 153, 2, 3, // Opcode: OR_rr_32
/* 382 */     MCD::OPC_FilterValue, 79, 4, 0, 0, // Skip to: 391
/* 387 */     MCD::OPC_Decode, 152, 2, 4, // Opcode: OR_rr
/* 391 */     MCD::OPC_FilterValue, 80, 4, 0, 0, // Skip to: 400
/* 396 */     MCD::OPC_Decode, 130, 2, 13, // Opcode: LD_IND_B
/* 400 */     MCD::OPC_FilterValue, 84, 4, 0, 0, // Skip to: 409
/* 405 */     MCD::OPC_Decode, 191, 1, 0, // Opcode: AND_ri_32
/* 409 */     MCD::OPC_FilterValue, 85, 4, 0, 0, // Skip to: 418
/* 414 */     MCD::OPC_Decode, 212, 1, 5, // Opcode: JNE_ri
/* 418 */     MCD::OPC_FilterValue, 86, 4, 0, 0, // Skip to: 427
/* 423 */     MCD::OPC_Decode, 213, 1, 6, // Opcode: JNE_ri_32
/* 427 */     MCD::OPC_FilterValue, 87, 4, 0, 0, // Skip to: 436
/* 432 */     MCD::OPC_Decode, 190, 1, 2, // Opcode: AND_ri
/* 436 */     MCD::OPC_FilterValue, 92, 4, 0, 0, // Skip to: 445
/* 441 */     MCD::OPC_Decode, 193, 1, 3, // Opcode: AND_rr_32
/* 445 */     MCD::OPC_FilterValue, 93, 4, 0, 0, // Skip to: 454
/* 450 */     MCD::OPC_Decode, 214, 1, 10, // Opcode: JNE_rr
/* 454 */     MCD::OPC_FilterValue, 94, 4, 0, 0, // Skip to: 463
/* 459 */     MCD::OPC_Decode, 215, 1, 11, // Opcode: JNE_rr_32
/* 463 */     MCD::OPC_FilterValue, 95, 4, 0, 0, // Skip to: 472
/* 468 */     MCD::OPC_Decode, 192, 1, 4, // Opcode: AND_rr
/* 472 */     MCD::OPC_FilterValue, 97, 4, 0, 0, // Skip to: 481
/* 477 */     MCD::OPC_Decode, 253, 1, 14, // Opcode: LDW
/* 481 */     MCD::OPC_FilterValue, 99, 4, 0, 0, // Skip to: 490
/* 486 */     MCD::OPC_Decode, 172, 2, 15, // Opcode: STW
/* 490 */     MCD::OPC_FilterValue, 100, 4, 0, 0, // Skip to: 499
/* 495 */     MCD::OPC_Decode, 156, 2, 0, // Opcode: SLL_ri_32
/* 499 */     MCD::OPC_FilterValue, 101, 4, 0, 0, // Skip to: 508
/* 504 */     MCD::OPC_Decode, 220, 1, 5, // Opcode: JSGT_ri
/* 508 */     MCD::OPC_FilterValue, 102, 4, 0, 0, // Skip to: 517
/* 513 */     MCD::OPC_Decode, 221, 1, 6, // Opcode: JSGT_ri_32
/* 517 */     MCD::OPC_FilterValue, 103, 4, 0, 0, // Skip to: 526
/* 522 */     MCD::OPC_Decode, 155, 2, 2, // Opcode: SLL_ri
/* 526 */     MCD::OPC_FilterValue, 105, 4, 0, 0, // Skip to: 535
/* 531 */     MCD::OPC_Decode, 251, 1, 14, // Opcode: LDH
/* 535 */     MCD::OPC_FilterValue, 107, 4, 0, 0, // Skip to: 544
/* 540 */     MCD::OPC_Decode, 170, 2, 15, // Opcode: STH
/* 544 */     MCD::OPC_FilterValue, 108, 4, 0, 0, // Skip to: 553
/* 549 */     MCD::OPC_Decode, 158, 2, 3, // Opcode: SLL_rr_32
/* 553 */     MCD::OPC_FilterValue, 109, 4, 0, 0, // Skip to: 562
/* 558 */     MCD::OPC_Decode, 222, 1, 10, // Opcode: JSGT_rr
/* 562 */     MCD::OPC_FilterValue, 110, 4, 0, 0, // Skip to: 571
/* 567 */     MCD::OPC_Decode, 223, 1, 11, // Opcode: JSGT_rr_32
/* 571 */     MCD::OPC_FilterValue, 111, 4, 0, 0, // Skip to: 580
/* 576 */     MCD::OPC_Decode, 157, 2, 4, // Opcode: SLL_rr
/* 580 */     MCD::OPC_FilterValue, 113, 4, 0, 0, // Skip to: 589
/* 585 */     MCD::OPC_Decode, 248, 1, 14, // Opcode: LDB
/* 589 */     MCD::OPC_FilterValue, 115, 4, 0, 0, // Skip to: 598
/* 594 */     MCD::OPC_Decode, 167, 2, 15, // Opcode: STB
/* 598 */     MCD::OPC_FilterValue, 116, 4, 0, 0, // Skip to: 607
/* 603 */     MCD::OPC_Decode, 164, 2, 0, // Opcode: SRL_ri_32
/* 607 */     MCD::OPC_FilterValue, 117, 4, 0, 0, // Skip to: 616
/* 612 */     MCD::OPC_Decode, 216, 1, 5, // Opcode: JSGE_ri
/* 616 */     MCD::OPC_FilterValue, 118, 4, 0, 0, // Skip to: 625
/* 621 */     MCD::OPC_Decode, 217, 1, 6, // Opcode: JSGE_ri_32
/* 625 */     MCD::OPC_FilterValue, 119, 4, 0, 0, // Skip to: 634
/* 630 */     MCD::OPC_Decode, 163, 2, 2, // Opcode: SRL_ri
/* 634 */     MCD::OPC_FilterValue, 121, 4, 0, 0, // Skip to: 643
/* 639 */     MCD::OPC_Decode, 250, 1, 14, // Opcode: LDD
/* 643 */     MCD::OPC_FilterValue, 123, 4, 0, 0, // Skip to: 652
/* 648 */     MCD::OPC_Decode, 169, 2, 15, // Opcode: STD
/* 652 */     MCD::OPC_FilterValue, 124, 4, 0, 0, // Skip to: 661
/* 657 */     MCD::OPC_Decode, 166, 2, 3, // Opcode: SRL_rr_32
/* 661 */     MCD::OPC_FilterValue, 125, 4, 0, 0, // Skip to: 670
/* 666 */     MCD::OPC_Decode, 218, 1, 10, // Opcode: JSGE_rr
/* 670 */     MCD::OPC_FilterValue, 126, 4, 0, 0, // Skip to: 679
/* 675 */     MCD::OPC_Decode, 219, 1, 11, // Opcode: JSGE_rr_32
/* 679 */     MCD::OPC_FilterValue, 127, 4, 0, 0, // Skip to: 688
/* 684 */     MCD::OPC_Decode, 165, 2, 4, // Opcode: SRL_rr
/* 688 */     MCD::OPC_FilterValue, 132, 1, 4, 0, 0, // Skip to: 698
/* 694 */     MCD::OPC_Decode, 147, 2, 16, // Opcode: NEG_32
/* 698 */     MCD::OPC_FilterValue, 133, 1, 4, 0, 0, // Skip to: 708
/* 704 */     MCD::OPC_Decode, 205, 1, 12, // Opcode: JAL
/* 708 */     MCD::OPC_FilterValue, 135, 1, 4, 0, 0, // Skip to: 718
/* 714 */     MCD::OPC_Decode, 148, 2, 17, // Opcode: NEG_64
/* 718 */     MCD::OPC_FilterValue, 141, 1, 4, 0, 0, // Skip to: 728
/* 724 */     MCD::OPC_Decode, 206, 1, 18, // Opcode: JALX
/* 728 */     MCD::OPC_FilterValue, 149, 1, 11, 0, 0, // Skip to: 745
/* 734 */     MCD::OPC_CheckField, 0, 32, 0, 131, 1, 0, // Skip to: 1128
/* 741 */     MCD::OPC_Decode, 154, 2, 7, // Opcode: RET
/* 745 */     MCD::OPC_FilterValue, 164, 1, 4, 0, 0, // Skip to: 755
/* 751 */     MCD::OPC_Decode, 182, 2, 0, // Opcode: XOR_ri_32
/* 755 */     MCD::OPC_FilterValue, 165, 1, 4, 0, 0, // Skip to: 765
/* 761 */     MCD::OPC_Decode, 244, 1, 5, // Opcode: JULT_ri
/* 765 */     MCD::OPC_FilterValue, 166, 1, 4, 0, 0, // Skip to: 775
/* 771 */     MCD::OPC_Decode, 245, 1, 6, // Opcode: JULT_ri_32
/* 775 */     MCD::OPC_FilterValue, 167, 1, 4, 0, 0, // Skip to: 785
/* 781 */     MCD::OPC_Decode, 181, 2, 2, // Opcode: XOR_ri
/* 785 */     MCD::OPC_FilterValue, 172, 1, 4, 0, 0, // Skip to: 795
/* 791 */     MCD::OPC_Decode, 184, 2, 3, // Opcode: XOR_rr_32
/* 795 */     MCD::OPC_FilterValue, 173, 1, 4, 0, 0, // Skip to: 805
/* 801 */     MCD::OPC_Decode, 246, 1, 10, // Opcode: JULT_rr
/* 805 */     MCD::OPC_FilterValue, 174, 1, 4, 0, 0, // Skip to: 815
/* 811 */     MCD::OPC_Decode, 247, 1, 11, // Opcode: JULT_rr_32
/* 815 */     MCD::OPC_FilterValue, 175, 1, 4, 0, 0, // Skip to: 825
/* 821 */     MCD::OPC_Decode, 183, 2, 4, // Opcode: XOR_rr
/* 825 */     MCD::OPC_FilterValue, 180, 1, 4, 0, 0, // Skip to: 835
/* 831 */     MCD::OPC_Decode, 140, 2, 19, // Opcode: MOV_ri_32
/* 835 */     MCD::OPC_FilterValue, 181, 1, 4, 0, 0, // Skip to: 845
/* 841 */     MCD::OPC_Decode, 240, 1, 5, // Opcode: JULE_ri
/* 845 */     MCD::OPC_FilterValue, 182, 1, 4, 0, 0, // Skip to: 855
/* 851 */     MCD::OPC_Decode, 241, 1, 6, // Opcode: JULE_ri_32
/* 855 */     MCD::OPC_FilterValue, 183, 1, 4, 0, 0, // Skip to: 865
/* 861 */     MCD::OPC_Decode, 139, 2, 8, // Opcode: MOV_ri
/* 865 */     MCD::OPC_FilterValue, 188, 1, 4, 0, 0, // Skip to: 875
/* 871 */     MCD::OPC_Decode, 142, 2, 20, // Opcode: MOV_rr_32
/* 875 */     MCD::OPC_FilterValue, 189, 1, 4, 0, 0, // Skip to: 885
/* 881 */     MCD::OPC_Decode, 242, 1, 10, // Opcode: JULE_rr
/* 885 */     MCD::OPC_FilterValue, 190, 1, 4, 0, 0, // Skip to: 895
/* 891 */     MCD::OPC_Decode, 243, 1, 11, // Opcode: JULE_rr_32
/* 895 */     MCD::OPC_FilterValue, 191, 1, 15, 0, 0, // Skip to: 916
/* 901 */     MCD::OPC_CheckField, 48, 8, 0, 4, 0, 0, // Skip to: 912
/* 908 */     MCD::OPC_Decode, 149, 2, 7, // Opcode: NOP
/* 912 */     MCD::OPC_Decode, 141, 2, 21, // Opcode: MOV_rr
/* 916 */     MCD::OPC_FilterValue, 195, 1, 4, 0, 0, // Skip to: 926
/* 922 */     MCD::OPC_Decode, 179, 2, 22, // Opcode: XADDW
/* 926 */     MCD::OPC_FilterValue, 196, 1, 4, 0, 0, // Skip to: 936
/* 932 */     MCD::OPC_Decode, 160, 2, 0, // Opcode: SRA_ri_32
/* 936 */     MCD::OPC_FilterValue, 197, 1, 4, 0, 0, // Skip to: 946
/* 942 */     MCD::OPC_Decode, 228, 1, 5, // Opcode: JSLT_ri
/* 946 */     MCD::OPC_FilterValue, 198, 1, 4, 0, 0, // Skip to: 956
/* 952 */     MCD::OPC_Decode, 229, 1, 6, // Opcode: JSLT_ri_32
/* 956 */     MCD::OPC_FilterValue, 199, 1, 4, 0, 0, // Skip to: 966
/* 962 */     MCD::OPC_Decode, 159, 2, 2, // Opcode: SRA_ri
/* 966 */     MCD::OPC_FilterValue, 204, 1, 4, 0, 0, // Skip to: 976
/* 972 */     MCD::OPC_Decode, 162, 2, 3, // Opcode: SRA_rr_32
/* 976 */     MCD::OPC_FilterValue, 205, 1, 4, 0, 0, // Skip to: 986
/* 982 */     MCD::OPC_Decode, 230, 1, 10, // Opcode: JSLT_rr
/* 986 */     MCD::OPC_FilterValue, 206, 1, 4, 0, 0, // Skip to: 996
/* 992 */     MCD::OPC_Decode, 231, 1, 11, // Opcode: JSLT_rr_32
/* 996 */     MCD::OPC_FilterValue, 207, 1, 4, 0, 0, // Skip to: 1006
/* 1002 */    MCD::OPC_Decode, 161, 2, 4, // Opcode: SRA_rr
/* 1006 */    MCD::OPC_FilterValue, 212, 1, 30, 0, 0, // Skip to: 1042
/* 1012 */    MCD::OPC_ExtractField, 0, 32,  // Inst{31-0} ...
/* 1015 */    MCD::OPC_FilterValue, 16, 4, 0, 0, // Skip to: 1024
/* 1020 */    MCD::OPC_Decode, 135, 2, 17, // Opcode: LE16
/* 1024 */    MCD::OPC_FilterValue, 32, 4, 0, 0, // Skip to: 1033
/* 1029 */    MCD::OPC_Decode, 136, 2, 17, // Opcode: LE32
/* 1033 */    MCD::OPC_FilterValue, 64, 90, 0, 0, // Skip to: 1128
/* 1038 */    MCD::OPC_Decode, 137, 2, 17, // Opcode: LE64
/* 1042 */    MCD::OPC_FilterValue, 213, 1, 4, 0, 0, // Skip to: 1052
/* 1048 */    MCD::OPC_Decode, 224, 1, 5, // Opcode: JSLE_ri
/* 1052 */    MCD::OPC_FilterValue, 214, 1, 4, 0, 0, // Skip to: 1062
/* 1058 */    MCD::OPC_Decode, 225, 1, 6, // Opcode: JSLE_ri_32
/* 1062 */    MCD::OPC_FilterValue, 219, 1, 4, 0, 0, // Skip to: 1072
/* 1068 */    MCD::OPC_Decode, 178, 2, 22, // Opcode: XADDD
/* 1072 */    MCD::OPC_FilterValue, 220, 1, 30, 0, 0, // Skip to: 1108
/* 1078 */    MCD::OPC_ExtractField, 0, 32,  // Inst{31-0} ...
/* 1081 */    MCD::OPC_FilterValue, 16, 4, 0, 0, // Skip to: 1090
/* 1086 */    MCD::OPC_Decode, 194, 1, 17, // Opcode: BE16
/* 1090 */    MCD::OPC_FilterValue, 32, 4, 0, 0, // Skip to: 1099
/* 1095 */    MCD::OPC_Decode, 195, 1, 17, // Opcode: BE32
/* 1099 */    MCD::OPC_FilterValue, 64, 24, 0, 0, // Skip to: 1128
/* 1104 */    MCD::OPC_Decode, 196, 1, 17, // Opcode: BE64
/* 1108 */    MCD::OPC_FilterValue, 221, 1, 4, 0, 0, // Skip to: 1118
/* 1114 */    MCD::OPC_Decode, 226, 1, 10, // Opcode: JSLE_rr
/* 1118 */    MCD::OPC_FilterValue, 222, 1, 4, 0, 0, // Skip to: 1128
/* 1124 */    MCD::OPC_Decode, 227, 1, 11, // Opcode: JSLE_rr_32
/* 1128 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableBPFALU3264[] = {
/* 0 */       MCD::OPC_ExtractField, 56, 8,  // Inst{63-56} ...
/* 3 */       MCD::OPC_FilterValue, 97, 4, 0, 0, // Skip to: 12
/* 8 */       MCD::OPC_Decode, 254, 1, 23, // Opcode: LDW32
/* 12 */      MCD::OPC_FilterValue, 99, 4, 0, 0, // Skip to: 21
/* 17 */      MCD::OPC_Decode, 173, 2, 24, // Opcode: STW32
/* 21 */      MCD::OPC_FilterValue, 105, 4, 0, 0, // Skip to: 30
/* 26 */      MCD::OPC_Decode, 252, 1, 23, // Opcode: LDH32
/* 30 */      MCD::OPC_FilterValue, 107, 4, 0, 0, // Skip to: 39
/* 35 */      MCD::OPC_Decode, 171, 2, 24, // Opcode: STH32
/* 39 */      MCD::OPC_FilterValue, 113, 4, 0, 0, // Skip to: 48
/* 44 */      MCD::OPC_Decode, 249, 1, 23, // Opcode: LDB32
/* 48 */      MCD::OPC_FilterValue, 115, 4, 0, 0, // Skip to: 57
/* 53 */      MCD::OPC_Decode, 168, 2, 24, // Opcode: STB32
/* 57 */      MCD::OPC_FilterValue, 195, 1, 4, 0, 0, // Skip to: 67
/* 63 */      MCD::OPC_Decode, 180, 2, 25, // Opcode: XADDW32
/* 67 */      MCD::OPC_Fail,
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
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 32, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 32, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 32, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 7:
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 32, 16) << 0;
    tmp |= fieldFromInstruction(insn, 52, 4) << 16;
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 20);
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 0, 32);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 20);
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 32, 16) << 0;
    tmp |= fieldFromInstruction(insn, 52, 4) << 16;
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 20);
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 20);
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
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

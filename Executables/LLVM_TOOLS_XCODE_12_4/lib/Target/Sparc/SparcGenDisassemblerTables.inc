/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Sparc Disassembler                                                      *|
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

static const uint8_t DecoderTableSparc32[] = {
/* 0 */       MCD::OPC_ExtractField, 30, 2,  // Inst{31-30} ...
/* 3 */       MCD::OPC_FilterValue, 0, 155, 2, 0, // Skip to: 675
/* 8 */       MCD::OPC_ExtractField, 22, 3,  // Inst{24-22} ...
/* 11 */      MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 27
/* 16 */      MCD::OPC_CheckField, 25, 5, 0, 67, 31, 0, // Skip to: 8026
/* 23 */      MCD::OPC_Decode, 158, 5, 0, // Opcode: UNIMP
/* 27 */      MCD::OPC_FilterValue, 1, 127, 0, 0, // Skip to: 159
/* 32 */      MCD::OPC_ExtractField, 19, 3,  // Inst{21-19} ...
/* 35 */      MCD::OPC_FilterValue, 0, 31, 0, 0, // Skip to: 71
/* 40 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 43 */      MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 57
/* 48 */      MCD::OPC_CheckPredicate, 0, 37, 31, 0, // Skip to: 8026
/* 53 */      MCD::OPC_Decode, 236, 1, 1, // Opcode: BPICCNT
/* 57 */      MCD::OPC_FilterValue, 1, 28, 31, 0, // Skip to: 8026
/* 62 */      MCD::OPC_CheckPredicate, 0, 23, 31, 0, // Skip to: 8026
/* 67 */      MCD::OPC_Decode, 235, 1, 1, // Opcode: BPICCANT
/* 71 */      MCD::OPC_FilterValue, 1, 31, 0, 0, // Skip to: 107
/* 76 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 79 */      MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 93
/* 84 */      MCD::OPC_CheckPredicate, 0, 1, 31, 0, // Skip to: 8026
/* 89 */      MCD::OPC_Decode, 233, 1, 1, // Opcode: BPICC
/* 93 */      MCD::OPC_FilterValue, 1, 248, 30, 0, // Skip to: 8026
/* 98 */      MCD::OPC_CheckPredicate, 0, 243, 30, 0, // Skip to: 8026
/* 103 */     MCD::OPC_Decode, 234, 1, 1, // Opcode: BPICCA
/* 107 */     MCD::OPC_FilterValue, 4, 21, 0, 0, // Skip to: 133
/* 112 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 115 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 124
/* 120 */     MCD::OPC_Decode, 252, 1, 1, // Opcode: BPXCCNT
/* 124 */     MCD::OPC_FilterValue, 1, 217, 30, 0, // Skip to: 8026
/* 129 */     MCD::OPC_Decode, 251, 1, 1, // Opcode: BPXCCANT
/* 133 */     MCD::OPC_FilterValue, 5, 208, 30, 0, // Skip to: 8026
/* 138 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 141 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 150
/* 146 */     MCD::OPC_Decode, 249, 1, 1, // Opcode: BPXCC
/* 150 */     MCD::OPC_FilterValue, 1, 191, 30, 0, // Skip to: 8026
/* 155 */     MCD::OPC_Decode, 250, 1, 1, // Opcode: BPXCCA
/* 159 */     MCD::OPC_FilterValue, 2, 32, 0, 0, // Skip to: 196
/* 164 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 167 */     MCD::OPC_FilterValue, 0, 15, 0, 0, // Skip to: 187
/* 172 */     MCD::OPC_CheckField, 25, 4, 8, 4, 0, 0, // Skip to: 183
/* 179 */     MCD::OPC_Decode, 215, 1, 0, // Opcode: BA
/* 183 */     MCD::OPC_Decode, 216, 1, 2, // Opcode: BCOND
/* 187 */     MCD::OPC_FilterValue, 1, 154, 30, 0, // Skip to: 8026
/* 192 */     MCD::OPC_Decode, 217, 1, 2, // Opcode: BCONDA
/* 196 */     MCD::OPC_FilterValue, 3, 59, 1, 0, // Skip to: 516
/* 201 */     MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 204 */     MCD::OPC_FilterValue, 1, 21, 0, 0, // Skip to: 230
/* 209 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 212 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 221
/* 217 */     MCD::OPC_Decode, 255, 1, 3, // Opcode: BPZnapn
/* 221 */     MCD::OPC_FilterValue, 1, 120, 30, 0, // Skip to: 8026
/* 226 */     MCD::OPC_Decode, 128, 2, 3, // Opcode: BPZnapt
/* 230 */     MCD::OPC_FilterValue, 2, 21, 0, 0, // Skip to: 256
/* 235 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 238 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 247
/* 243 */     MCD::OPC_Decode, 239, 1, 3, // Opcode: BPLEZnapn
/* 247 */     MCD::OPC_FilterValue, 1, 94, 30, 0, // Skip to: 8026
/* 252 */     MCD::OPC_Decode, 240, 1, 3, // Opcode: BPLEZnapt
/* 256 */     MCD::OPC_FilterValue, 3, 21, 0, 0, // Skip to: 282
/* 261 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 264 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 273
/* 269 */     MCD::OPC_Decode, 243, 1, 3, // Opcode: BPLZnapn
/* 273 */     MCD::OPC_FilterValue, 1, 68, 30, 0, // Skip to: 8026
/* 278 */     MCD::OPC_Decode, 244, 1, 3, // Opcode: BPLZnapt
/* 282 */     MCD::OPC_FilterValue, 5, 21, 0, 0, // Skip to: 308
/* 287 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 290 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 299
/* 295 */     MCD::OPC_Decode, 247, 1, 3, // Opcode: BPNZnapn
/* 299 */     MCD::OPC_FilterValue, 1, 42, 30, 0, // Skip to: 8026
/* 304 */     MCD::OPC_Decode, 248, 1, 3, // Opcode: BPNZnapt
/* 308 */     MCD::OPC_FilterValue, 6, 21, 0, 0, // Skip to: 334
/* 313 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 316 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 325
/* 321 */     MCD::OPC_Decode, 231, 1, 3, // Opcode: BPGZnapn
/* 325 */     MCD::OPC_FilterValue, 1, 16, 30, 0, // Skip to: 8026
/* 330 */     MCD::OPC_Decode, 232, 1, 3, // Opcode: BPGZnapt
/* 334 */     MCD::OPC_FilterValue, 7, 21, 0, 0, // Skip to: 360
/* 339 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 342 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 351
/* 347 */     MCD::OPC_Decode, 227, 1, 3, // Opcode: BPGEZnapn
/* 351 */     MCD::OPC_FilterValue, 1, 246, 29, 0, // Skip to: 8026
/* 356 */     MCD::OPC_Decode, 228, 1, 3, // Opcode: BPGEZnapt
/* 360 */     MCD::OPC_FilterValue, 17, 21, 0, 0, // Skip to: 386
/* 365 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 368 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 377
/* 373 */     MCD::OPC_Decode, 253, 1, 3, // Opcode: BPZapn
/* 377 */     MCD::OPC_FilterValue, 1, 220, 29, 0, // Skip to: 8026
/* 382 */     MCD::OPC_Decode, 254, 1, 3, // Opcode: BPZapt
/* 386 */     MCD::OPC_FilterValue, 18, 21, 0, 0, // Skip to: 412
/* 391 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 394 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 403
/* 399 */     MCD::OPC_Decode, 237, 1, 3, // Opcode: BPLEZapn
/* 403 */     MCD::OPC_FilterValue, 1, 194, 29, 0, // Skip to: 8026
/* 408 */     MCD::OPC_Decode, 238, 1, 3, // Opcode: BPLEZapt
/* 412 */     MCD::OPC_FilterValue, 19, 21, 0, 0, // Skip to: 438
/* 417 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 420 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 429
/* 425 */     MCD::OPC_Decode, 241, 1, 3, // Opcode: BPLZapn
/* 429 */     MCD::OPC_FilterValue, 1, 168, 29, 0, // Skip to: 8026
/* 434 */     MCD::OPC_Decode, 242, 1, 3, // Opcode: BPLZapt
/* 438 */     MCD::OPC_FilterValue, 21, 21, 0, 0, // Skip to: 464
/* 443 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 446 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 455
/* 451 */     MCD::OPC_Decode, 245, 1, 3, // Opcode: BPNZapn
/* 455 */     MCD::OPC_FilterValue, 1, 142, 29, 0, // Skip to: 8026
/* 460 */     MCD::OPC_Decode, 246, 1, 3, // Opcode: BPNZapt
/* 464 */     MCD::OPC_FilterValue, 22, 21, 0, 0, // Skip to: 490
/* 469 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 472 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 481
/* 477 */     MCD::OPC_Decode, 229, 1, 3, // Opcode: BPGZapn
/* 481 */     MCD::OPC_FilterValue, 1, 116, 29, 0, // Skip to: 8026
/* 486 */     MCD::OPC_Decode, 230, 1, 3, // Opcode: BPGZapt
/* 490 */     MCD::OPC_FilterValue, 23, 107, 29, 0, // Skip to: 8026
/* 495 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 498 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 507
/* 503 */     MCD::OPC_Decode, 225, 1, 3, // Opcode: BPGEZapn
/* 507 */     MCD::OPC_FilterValue, 1, 90, 29, 0, // Skip to: 8026
/* 512 */     MCD::OPC_Decode, 226, 1, 3, // Opcode: BPGEZapt
/* 516 */     MCD::OPC_FilterValue, 4, 22, 0, 0, // Skip to: 543
/* 521 */     MCD::OPC_CheckField, 25, 5, 0, 11, 0, 0, // Skip to: 539
/* 528 */     MCD::OPC_CheckField, 0, 22, 0, 4, 0, 0, // Skip to: 539
/* 535 */     MCD::OPC_Decode, 142, 4, 4, // Opcode: NOP
/* 539 */     MCD::OPC_Decode, 179, 4, 5, // Opcode: SETHIi
/* 543 */     MCD::OPC_FilterValue, 5, 75, 0, 0, // Skip to: 623
/* 548 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 551 */     MCD::OPC_FilterValue, 0, 31, 0, 0, // Skip to: 587
/* 556 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 559 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 573
/* 564 */     MCD::OPC_CheckPredicate, 0, 33, 29, 0, // Skip to: 8026
/* 569 */     MCD::OPC_Decode, 224, 1, 6, // Opcode: BPFCCNT
/* 573 */     MCD::OPC_FilterValue, 1, 24, 29, 0, // Skip to: 8026
/* 578 */     MCD::OPC_CheckPredicate, 0, 19, 29, 0, // Skip to: 8026
/* 583 */     MCD::OPC_Decode, 223, 1, 6, // Opcode: BPFCCANT
/* 587 */     MCD::OPC_FilterValue, 1, 10, 29, 0, // Skip to: 8026
/* 592 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 595 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 609
/* 600 */     MCD::OPC_CheckPredicate, 0, 253, 28, 0, // Skip to: 8026
/* 605 */     MCD::OPC_Decode, 221, 1, 6, // Opcode: BPFCC
/* 609 */     MCD::OPC_FilterValue, 1, 244, 28, 0, // Skip to: 8026
/* 614 */     MCD::OPC_CheckPredicate, 0, 239, 28, 0, // Skip to: 8026
/* 619 */     MCD::OPC_Decode, 222, 1, 6, // Opcode: BPFCCA
/* 623 */     MCD::OPC_FilterValue, 6, 21, 0, 0, // Skip to: 649
/* 628 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 631 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 640
/* 636 */     MCD::OPC_Decode, 169, 2, 2, // Opcode: FBCOND
/* 640 */     MCD::OPC_FilterValue, 1, 213, 28, 0, // Skip to: 8026
/* 645 */     MCD::OPC_Decode, 170, 2, 2, // Opcode: FBCONDA
/* 649 */     MCD::OPC_FilterValue, 7, 204, 28, 0, // Skip to: 8026
/* 654 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 657 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 666
/* 662 */     MCD::OPC_Decode, 137, 2, 2, // Opcode: CBCOND
/* 666 */     MCD::OPC_FilterValue, 1, 187, 28, 0, // Skip to: 8026
/* 671 */     MCD::OPC_Decode, 138, 2, 2, // Opcode: CBCONDA
/* 675 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 684
/* 680 */     MCD::OPC_Decode, 130, 2, 7, // Opcode: CALL
/* 684 */     MCD::OPC_FilterValue, 2, 201, 22, 0, // Skip to: 6522
/* 689 */     MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 692 */     MCD::OPC_FilterValue, 0, 28, 0, 0, // Skip to: 725
/* 697 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 700 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 716
/* 705 */     MCD::OPC_CheckField, 5, 8, 0, 146, 28, 0, // Skip to: 8026
/* 712 */     MCD::OPC_Decode, 198, 1, 8, // Opcode: ADDrr
/* 716 */     MCD::OPC_FilterValue, 1, 137, 28, 0, // Skip to: 8026
/* 721 */     MCD::OPC_Decode, 197, 1, 9, // Opcode: ADDri
/* 725 */     MCD::OPC_FilterValue, 1, 28, 0, 0, // Skip to: 758
/* 730 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 733 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 749
/* 738 */     MCD::OPC_CheckField, 5, 8, 0, 113, 28, 0, // Skip to: 8026
/* 745 */     MCD::OPC_Decode, 211, 1, 8, // Opcode: ANDrr
/* 749 */     MCD::OPC_FilterValue, 1, 104, 28, 0, // Skip to: 8026
/* 754 */     MCD::OPC_Decode, 210, 1, 9, // Opcode: ANDri
/* 758 */     MCD::OPC_FilterValue, 2, 28, 0, 0, // Skip to: 791
/* 763 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 766 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 782
/* 771 */     MCD::OPC_CheckField, 5, 8, 0, 80, 28, 0, // Skip to: 8026
/* 778 */     MCD::OPC_Decode, 153, 4, 8, // Opcode: ORrr
/* 782 */     MCD::OPC_FilterValue, 1, 71, 28, 0, // Skip to: 8026
/* 787 */     MCD::OPC_Decode, 152, 4, 9, // Opcode: ORri
/* 791 */     MCD::OPC_FilterValue, 3, 28, 0, 0, // Skip to: 824
/* 796 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 799 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 815
/* 804 */     MCD::OPC_CheckField, 5, 8, 0, 47, 28, 0, // Skip to: 8026
/* 811 */     MCD::OPC_Decode, 192, 5, 8, // Opcode: XORrr
/* 815 */     MCD::OPC_FilterValue, 1, 38, 28, 0, // Skip to: 8026
/* 820 */     MCD::OPC_Decode, 191, 5, 9, // Opcode: XORri
/* 824 */     MCD::OPC_FilterValue, 4, 28, 0, 0, // Skip to: 857
/* 829 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 832 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 848
/* 837 */     MCD::OPC_CheckField, 5, 8, 0, 14, 28, 0, // Skip to: 8026
/* 844 */     MCD::OPC_Decode, 247, 4, 8, // Opcode: SUBrr
/* 848 */     MCD::OPC_FilterValue, 1, 5, 28, 0, // Skip to: 8026
/* 853 */     MCD::OPC_Decode, 246, 4, 9, // Opcode: SUBri
/* 857 */     MCD::OPC_FilterValue, 5, 28, 0, 0, // Skip to: 890
/* 862 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 865 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 881
/* 870 */     MCD::OPC_CheckField, 5, 8, 0, 237, 27, 0, // Skip to: 8026
/* 877 */     MCD::OPC_Decode, 206, 1, 8, // Opcode: ANDNrr
/* 881 */     MCD::OPC_FilterValue, 1, 228, 27, 0, // Skip to: 8026
/* 886 */     MCD::OPC_Decode, 205, 1, 9, // Opcode: ANDNri
/* 890 */     MCD::OPC_FilterValue, 6, 28, 0, 0, // Skip to: 923
/* 895 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 898 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 914
/* 903 */     MCD::OPC_CheckField, 5, 8, 0, 204, 27, 0, // Skip to: 8026
/* 910 */     MCD::OPC_Decode, 148, 4, 8, // Opcode: ORNrr
/* 914 */     MCD::OPC_FilterValue, 1, 195, 27, 0, // Skip to: 8026
/* 919 */     MCD::OPC_Decode, 147, 4, 9, // Opcode: ORNri
/* 923 */     MCD::OPC_FilterValue, 7, 28, 0, 0, // Skip to: 956
/* 928 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 931 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 947
/* 936 */     MCD::OPC_CheckField, 5, 8, 0, 171, 27, 0, // Skip to: 8026
/* 943 */     MCD::OPC_Decode, 186, 5, 8, // Opcode: XNORrr
/* 947 */     MCD::OPC_FilterValue, 1, 162, 27, 0, // Skip to: 8026
/* 952 */     MCD::OPC_Decode, 185, 5, 9, // Opcode: XNORri
/* 956 */     MCD::OPC_FilterValue, 8, 28, 0, 0, // Skip to: 989
/* 961 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 964 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 980
/* 969 */     MCD::OPC_CheckField, 5, 8, 0, 138, 27, 0, // Skip to: 8026
/* 976 */     MCD::OPC_Decode, 190, 1, 8, // Opcode: ADDCrr
/* 980 */     MCD::OPC_FilterValue, 1, 129, 27, 0, // Skip to: 8026
/* 985 */     MCD::OPC_Decode, 189, 1, 9, // Opcode: ADDCri
/* 989 */     MCD::OPC_FilterValue, 9, 28, 0, 0, // Skip to: 1022
/* 994 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 997 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1013
/* 1002 */    MCD::OPC_CheckField, 5, 8, 0, 105, 27, 0, // Skip to: 8026
/* 1009 */    MCD::OPC_Decode, 141, 4, 10, // Opcode: MULXrr
/* 1013 */    MCD::OPC_FilterValue, 1, 96, 27, 0, // Skip to: 8026
/* 1018 */    MCD::OPC_Decode, 140, 4, 11, // Opcode: MULXri
/* 1022 */    MCD::OPC_FilterValue, 10, 28, 0, 0, // Skip to: 1055
/* 1027 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1030 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1046
/* 1035 */    MCD::OPC_CheckField, 5, 8, 0, 72, 27, 0, // Skip to: 8026
/* 1042 */    MCD::OPC_Decode, 157, 5, 8, // Opcode: UMULrr
/* 1046 */    MCD::OPC_FilterValue, 1, 63, 27, 0, // Skip to: 8026
/* 1051 */    MCD::OPC_Decode, 156, 5, 9, // Opcode: UMULri
/* 1055 */    MCD::OPC_FilterValue, 11, 28, 0, 0, // Skip to: 1088
/* 1060 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1063 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1079
/* 1068 */    MCD::OPC_CheckField, 5, 8, 0, 39, 27, 0, // Skip to: 8026
/* 1075 */    MCD::OPC_Decode, 191, 4, 8, // Opcode: SMULrr
/* 1079 */    MCD::OPC_FilterValue, 1, 30, 27, 0, // Skip to: 8026
/* 1084 */    MCD::OPC_Decode, 190, 4, 9, // Opcode: SMULri
/* 1088 */    MCD::OPC_FilterValue, 12, 28, 0, 0, // Skip to: 1121
/* 1093 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1096 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1112
/* 1101 */    MCD::OPC_CheckField, 5, 8, 0, 6, 27, 0, // Skip to: 8026
/* 1108 */    MCD::OPC_Decode, 241, 4, 8, // Opcode: SUBCrr
/* 1112 */    MCD::OPC_FilterValue, 1, 253, 26, 0, // Skip to: 8026
/* 1117 */    MCD::OPC_Decode, 240, 4, 9, // Opcode: SUBCri
/* 1121 */    MCD::OPC_FilterValue, 13, 28, 0, 0, // Skip to: 1154
/* 1126 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1129 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1145
/* 1134 */    MCD::OPC_CheckField, 5, 8, 0, 229, 26, 0, // Skip to: 8026
/* 1141 */    MCD::OPC_Decode, 148, 5, 10, // Opcode: UDIVXrr
/* 1145 */    MCD::OPC_FilterValue, 1, 220, 26, 0, // Skip to: 8026
/* 1150 */    MCD::OPC_Decode, 147, 5, 11, // Opcode: UDIVXri
/* 1154 */    MCD::OPC_FilterValue, 14, 28, 0, 0, // Skip to: 1187
/* 1159 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1162 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1178
/* 1167 */    MCD::OPC_CheckField, 5, 8, 0, 196, 26, 0, // Skip to: 8026
/* 1174 */    MCD::OPC_Decode, 150, 5, 8, // Opcode: UDIVrr
/* 1178 */    MCD::OPC_FilterValue, 1, 187, 26, 0, // Skip to: 8026
/* 1183 */    MCD::OPC_Decode, 149, 5, 9, // Opcode: UDIVri
/* 1187 */    MCD::OPC_FilterValue, 15, 28, 0, 0, // Skip to: 1220
/* 1192 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1195 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1211
/* 1200 */    MCD::OPC_CheckField, 5, 8, 0, 163, 26, 0, // Skip to: 8026
/* 1207 */    MCD::OPC_Decode, 177, 4, 8, // Opcode: SDIVrr
/* 1211 */    MCD::OPC_FilterValue, 1, 154, 26, 0, // Skip to: 8026
/* 1216 */    MCD::OPC_Decode, 176, 4, 9, // Opcode: SDIVri
/* 1220 */    MCD::OPC_FilterValue, 16, 28, 0, 0, // Skip to: 1253
/* 1225 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1228 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1244
/* 1233 */    MCD::OPC_CheckField, 5, 8, 0, 130, 26, 0, // Skip to: 8026
/* 1240 */    MCD::OPC_Decode, 188, 1, 8, // Opcode: ADDCCrr
/* 1244 */    MCD::OPC_FilterValue, 1, 121, 26, 0, // Skip to: 8026
/* 1249 */    MCD::OPC_Decode, 187, 1, 9, // Opcode: ADDCCri
/* 1253 */    MCD::OPC_FilterValue, 17, 28, 0, 0, // Skip to: 1286
/* 1258 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1261 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1277
/* 1266 */    MCD::OPC_CheckField, 5, 8, 0, 97, 26, 0, // Skip to: 8026
/* 1273 */    MCD::OPC_Decode, 202, 1, 8, // Opcode: ANDCCrr
/* 1277 */    MCD::OPC_FilterValue, 1, 88, 26, 0, // Skip to: 8026
/* 1282 */    MCD::OPC_Decode, 201, 1, 9, // Opcode: ANDCCri
/* 1286 */    MCD::OPC_FilterValue, 18, 28, 0, 0, // Skip to: 1319
/* 1291 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1294 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1310
/* 1299 */    MCD::OPC_CheckField, 5, 8, 0, 64, 26, 0, // Skip to: 8026
/* 1306 */    MCD::OPC_Decode, 144, 4, 8, // Opcode: ORCCrr
/* 1310 */    MCD::OPC_FilterValue, 1, 55, 26, 0, // Skip to: 8026
/* 1315 */    MCD::OPC_Decode, 143, 4, 9, // Opcode: ORCCri
/* 1319 */    MCD::OPC_FilterValue, 19, 28, 0, 0, // Skip to: 1352
/* 1324 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1327 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1343
/* 1332 */    MCD::OPC_CheckField, 5, 8, 0, 31, 26, 0, // Skip to: 8026
/* 1339 */    MCD::OPC_Decode, 188, 5, 8, // Opcode: XORCCrr
/* 1343 */    MCD::OPC_FilterValue, 1, 22, 26, 0, // Skip to: 8026
/* 1348 */    MCD::OPC_Decode, 187, 5, 9, // Opcode: XORCCri
/* 1352 */    MCD::OPC_FilterValue, 20, 51, 0, 0, // Skip to: 1408
/* 1357 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1360 */    MCD::OPC_FilterValue, 0, 23, 0, 0, // Skip to: 1388
/* 1365 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 1368 */    MCD::OPC_FilterValue, 0, 253, 25, 0, // Skip to: 8026
/* 1373 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 1384
/* 1380 */    MCD::OPC_Decode, 143, 2, 12, // Opcode: CMPrr
/* 1384 */    MCD::OPC_Decode, 239, 4, 8, // Opcode: SUBCCrr
/* 1388 */    MCD::OPC_FilterValue, 1, 233, 25, 0, // Skip to: 8026
/* 1393 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 1404
/* 1400 */    MCD::OPC_Decode, 142, 2, 13, // Opcode: CMPri
/* 1404 */    MCD::OPC_Decode, 238, 4, 9, // Opcode: SUBCCri
/* 1408 */    MCD::OPC_FilterValue, 21, 28, 0, 0, // Skip to: 1441
/* 1413 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1416 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1432
/* 1421 */    MCD::OPC_CheckField, 5, 8, 0, 198, 25, 0, // Skip to: 8026
/* 1428 */    MCD::OPC_Decode, 204, 1, 8, // Opcode: ANDNCCrr
/* 1432 */    MCD::OPC_FilterValue, 1, 189, 25, 0, // Skip to: 8026
/* 1437 */    MCD::OPC_Decode, 203, 1, 9, // Opcode: ANDNCCri
/* 1441 */    MCD::OPC_FilterValue, 22, 28, 0, 0, // Skip to: 1474
/* 1446 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1449 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1465
/* 1454 */    MCD::OPC_CheckField, 5, 8, 0, 165, 25, 0, // Skip to: 8026
/* 1461 */    MCD::OPC_Decode, 146, 4, 8, // Opcode: ORNCCrr
/* 1465 */    MCD::OPC_FilterValue, 1, 156, 25, 0, // Skip to: 8026
/* 1470 */    MCD::OPC_Decode, 145, 4, 9, // Opcode: ORNCCri
/* 1474 */    MCD::OPC_FilterValue, 23, 28, 0, 0, // Skip to: 1507
/* 1479 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1482 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1498
/* 1487 */    MCD::OPC_CheckField, 5, 8, 0, 132, 25, 0, // Skip to: 8026
/* 1494 */    MCD::OPC_Decode, 183, 5, 8, // Opcode: XNORCCrr
/* 1498 */    MCD::OPC_FilterValue, 1, 123, 25, 0, // Skip to: 8026
/* 1503 */    MCD::OPC_Decode, 182, 5, 9, // Opcode: XNORCCri
/* 1507 */    MCD::OPC_FilterValue, 24, 28, 0, 0, // Skip to: 1540
/* 1512 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1515 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1531
/* 1520 */    MCD::OPC_CheckField, 5, 8, 0, 99, 25, 0, // Skip to: 8026
/* 1527 */    MCD::OPC_Decode, 192, 1, 8, // Opcode: ADDErr
/* 1531 */    MCD::OPC_FilterValue, 1, 90, 25, 0, // Skip to: 8026
/* 1536 */    MCD::OPC_Decode, 191, 1, 9, // Opcode: ADDEri
/* 1540 */    MCD::OPC_FilterValue, 26, 28, 0, 0, // Skip to: 1573
/* 1545 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1548 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1564
/* 1553 */    MCD::OPC_CheckField, 5, 8, 0, 66, 25, 0, // Skip to: 8026
/* 1560 */    MCD::OPC_Decode, 154, 5, 8, // Opcode: UMULCCrr
/* 1564 */    MCD::OPC_FilterValue, 1, 57, 25, 0, // Skip to: 8026
/* 1569 */    MCD::OPC_Decode, 153, 5, 9, // Opcode: UMULCCri
/* 1573 */    MCD::OPC_FilterValue, 27, 28, 0, 0, // Skip to: 1606
/* 1578 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1581 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1597
/* 1586 */    MCD::OPC_CheckField, 5, 8, 0, 33, 25, 0, // Skip to: 8026
/* 1593 */    MCD::OPC_Decode, 189, 4, 8, // Opcode: SMULCCrr
/* 1597 */    MCD::OPC_FilterValue, 1, 24, 25, 0, // Skip to: 8026
/* 1602 */    MCD::OPC_Decode, 188, 4, 9, // Opcode: SMULCCri
/* 1606 */    MCD::OPC_FilterValue, 28, 28, 0, 0, // Skip to: 1639
/* 1611 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1614 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1630
/* 1619 */    MCD::OPC_CheckField, 5, 8, 0, 0, 25, 0, // Skip to: 8026
/* 1626 */    MCD::OPC_Decode, 243, 4, 8, // Opcode: SUBErr
/* 1630 */    MCD::OPC_FilterValue, 1, 247, 24, 0, // Skip to: 8026
/* 1635 */    MCD::OPC_Decode, 242, 4, 9, // Opcode: SUBEri
/* 1639 */    MCD::OPC_FilterValue, 30, 28, 0, 0, // Skip to: 1672
/* 1644 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1647 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1663
/* 1652 */    MCD::OPC_CheckField, 5, 8, 0, 223, 24, 0, // Skip to: 8026
/* 1659 */    MCD::OPC_Decode, 146, 5, 8, // Opcode: UDIVCCrr
/* 1663 */    MCD::OPC_FilterValue, 1, 214, 24, 0, // Skip to: 8026
/* 1668 */    MCD::OPC_Decode, 145, 5, 9, // Opcode: UDIVCCri
/* 1672 */    MCD::OPC_FilterValue, 31, 28, 0, 0, // Skip to: 1705
/* 1677 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1680 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1696
/* 1685 */    MCD::OPC_CheckField, 5, 8, 0, 190, 24, 0, // Skip to: 8026
/* 1692 */    MCD::OPC_Decode, 173, 4, 8, // Opcode: SDIVCCrr
/* 1696 */    MCD::OPC_FilterValue, 1, 181, 24, 0, // Skip to: 8026
/* 1701 */    MCD::OPC_Decode, 172, 4, 9, // Opcode: SDIVCCri
/* 1705 */    MCD::OPC_FilterValue, 32, 28, 0, 0, // Skip to: 1738
/* 1710 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1713 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1729
/* 1718 */    MCD::OPC_CheckField, 5, 8, 0, 157, 24, 0, // Skip to: 8026
/* 1725 */    MCD::OPC_Decode, 129, 5, 8, // Opcode: TADDCCrr
/* 1729 */    MCD::OPC_FilterValue, 1, 148, 24, 0, // Skip to: 8026
/* 1734 */    MCD::OPC_Decode, 128, 5, 9, // Opcode: TADDCCri
/* 1738 */    MCD::OPC_FilterValue, 33, 28, 0, 0, // Skip to: 1771
/* 1743 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1746 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1762
/* 1751 */    MCD::OPC_CheckField, 5, 8, 0, 124, 24, 0, // Skip to: 8026
/* 1758 */    MCD::OPC_Decode, 142, 5, 8, // Opcode: TSUBCCrr
/* 1762 */    MCD::OPC_FilterValue, 1, 115, 24, 0, // Skip to: 8026
/* 1767 */    MCD::OPC_Decode, 141, 5, 9, // Opcode: TSUBCCri
/* 1771 */    MCD::OPC_FilterValue, 34, 28, 0, 0, // Skip to: 1804
/* 1776 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1779 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1795
/* 1784 */    MCD::OPC_CheckField, 5, 8, 0, 91, 24, 0, // Skip to: 8026
/* 1791 */    MCD::OPC_Decode, 255, 4, 8, // Opcode: TADDCCTVrr
/* 1795 */    MCD::OPC_FilterValue, 1, 82, 24, 0, // Skip to: 8026
/* 1800 */    MCD::OPC_Decode, 254, 4, 9, // Opcode: TADDCCTVri
/* 1804 */    MCD::OPC_FilterValue, 35, 28, 0, 0, // Skip to: 1837
/* 1809 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1812 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1828
/* 1817 */    MCD::OPC_CheckField, 5, 8, 0, 58, 24, 0, // Skip to: 8026
/* 1824 */    MCD::OPC_Decode, 140, 5, 8, // Opcode: TSUBCCTVrr
/* 1828 */    MCD::OPC_FilterValue, 1, 49, 24, 0, // Skip to: 8026
/* 1833 */    MCD::OPC_Decode, 139, 5, 9, // Opcode: TSUBCCTVri
/* 1837 */    MCD::OPC_FilterValue, 36, 28, 0, 0, // Skip to: 1870
/* 1842 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1845 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1861
/* 1850 */    MCD::OPC_CheckField, 5, 8, 0, 25, 24, 0, // Skip to: 8026
/* 1857 */    MCD::OPC_Decode, 139, 4, 8, // Opcode: MULSCCrr
/* 1861 */    MCD::OPC_FilterValue, 1, 16, 24, 0, // Skip to: 8026
/* 1866 */    MCD::OPC_Decode, 138, 4, 9, // Opcode: MULSCCri
/* 1870 */    MCD::OPC_FilterValue, 37, 56, 0, 0, // Skip to: 1931
/* 1875 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1878 */    MCD::OPC_FilterValue, 0, 28, 0, 0, // Skip to: 1911
/* 1883 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1886 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1902
/* 1891 */    MCD::OPC_CheckField, 5, 7, 0, 240, 23, 0, // Skip to: 8026
/* 1898 */    MCD::OPC_Decode, 185, 4, 8, // Opcode: SLLrr
/* 1902 */    MCD::OPC_FilterValue, 1, 231, 23, 0, // Skip to: 8026
/* 1907 */    MCD::OPC_Decode, 183, 4, 14, // Opcode: SLLXrr
/* 1911 */    MCD::OPC_FilterValue, 1, 222, 23, 0, // Skip to: 8026
/* 1916 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, 0, // Skip to: 1927
/* 1923 */    MCD::OPC_Decode, 182, 4, 15, // Opcode: SLLXri
/* 1927 */    MCD::OPC_Decode, 184, 4, 9, // Opcode: SLLri
/* 1931 */    MCD::OPC_FilterValue, 38, 56, 0, 0, // Skip to: 1992
/* 1936 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1939 */    MCD::OPC_FilterValue, 0, 28, 0, 0, // Skip to: 1972
/* 1944 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1947 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1963
/* 1952 */    MCD::OPC_CheckField, 5, 7, 0, 179, 23, 0, // Skip to: 8026
/* 1959 */    MCD::OPC_Decode, 199, 4, 8, // Opcode: SRLrr
/* 1963 */    MCD::OPC_FilterValue, 1, 170, 23, 0, // Skip to: 8026
/* 1968 */    MCD::OPC_Decode, 197, 4, 14, // Opcode: SRLXrr
/* 1972 */    MCD::OPC_FilterValue, 1, 161, 23, 0, // Skip to: 8026
/* 1977 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, 0, // Skip to: 1988
/* 1984 */    MCD::OPC_Decode, 196, 4, 15, // Opcode: SRLXri
/* 1988 */    MCD::OPC_Decode, 198, 4, 9, // Opcode: SRLri
/* 1992 */    MCD::OPC_FilterValue, 39, 56, 0, 0, // Skip to: 2053
/* 1997 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2000 */    MCD::OPC_FilterValue, 0, 28, 0, 0, // Skip to: 2033
/* 2005 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 2008 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 2024
/* 2013 */    MCD::OPC_CheckField, 5, 7, 0, 118, 23, 0, // Skip to: 8026
/* 2020 */    MCD::OPC_Decode, 195, 4, 8, // Opcode: SRArr
/* 2024 */    MCD::OPC_FilterValue, 1, 109, 23, 0, // Skip to: 8026
/* 2029 */    MCD::OPC_Decode, 193, 4, 14, // Opcode: SRAXrr
/* 2033 */    MCD::OPC_FilterValue, 1, 100, 23, 0, // Skip to: 8026
/* 2038 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, 0, // Skip to: 2049
/* 2045 */    MCD::OPC_Decode, 192, 4, 15, // Opcode: SRAXri
/* 2049 */    MCD::OPC_Decode, 194, 4, 9, // Opcode: SRAri
/* 2053 */    MCD::OPC_FilterValue, 40, 66, 0, 0, // Skip to: 2124
/* 2058 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2061 */    MCD::OPC_FilterValue, 0, 30, 0, 0, // Skip to: 2096
/* 2066 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 2069 */    MCD::OPC_FilterValue, 0, 64, 23, 0, // Skip to: 8026
/* 2074 */    MCD::OPC_CheckField, 25, 5, 0, 11, 0, 0, // Skip to: 2092
/* 2081 */    MCD::OPC_CheckField, 14, 5, 15, 4, 0, 0, // Skip to: 2092
/* 2088 */    MCD::OPC_Decode, 201, 4, 4, // Opcode: STBAR
/* 2092 */    MCD::OPC_Decode, 159, 4, 16, // Opcode: RDASR
/* 2096 */    MCD::OPC_FilterValue, 1, 37, 23, 0, // Skip to: 8026
/* 2101 */    MCD::OPC_CheckPredicate, 0, 32, 23, 0, // Skip to: 8026
/* 2106 */    MCD::OPC_CheckField, 25, 5, 0, 25, 23, 0, // Skip to: 8026
/* 2113 */    MCD::OPC_CheckField, 14, 5, 15, 18, 23, 0, // Skip to: 8026
/* 2120 */    MCD::OPC_Decode, 242, 3, 17, // Opcode: MEMBARi
/* 2124 */    MCD::OPC_FilterValue, 41, 11, 0, 0, // Skip to: 2140
/* 2129 */    MCD::OPC_CheckField, 0, 19, 0, 2, 23, 0, // Skip to: 8026
/* 2136 */    MCD::OPC_Decode, 161, 4, 18, // Opcode: RDPSR
/* 2140 */    MCD::OPC_FilterValue, 42, 28, 0, 0, // Skip to: 2173
/* 2145 */    MCD::OPC_ExtractField, 0, 14,  // Inst{13-0} ...
/* 2148 */    MCD::OPC_FilterValue, 0, 241, 22, 0, // Skip to: 8026
/* 2153 */    MCD::OPC_CheckField, 14, 5, 0, 4, 0, 0, // Skip to: 2164
/* 2160 */    MCD::OPC_Decode, 163, 4, 18, // Opcode: RDWIM
/* 2164 */    MCD::OPC_CheckPredicate, 0, 225, 22, 0, // Skip to: 8026
/* 2169 */    MCD::OPC_Decode, 160, 4, 19, // Opcode: RDPR
/* 2173 */    MCD::OPC_FilterValue, 43, 28, 0, 0, // Skip to: 2206
/* 2178 */    MCD::OPC_ExtractField, 0, 19,  // Inst{18-0} ...
/* 2181 */    MCD::OPC_FilterValue, 0, 208, 22, 0, // Skip to: 8026
/* 2186 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 2202
/* 2191 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 2202
/* 2198 */    MCD::OPC_Decode, 202, 2, 4, // Opcode: FLUSHW
/* 2202 */    MCD::OPC_Decode, 162, 4, 18, // Opcode: RDTBR
/* 2206 */    MCD::OPC_FilterValue, 44, 141, 0, 0, // Skip to: 2352
/* 2211 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2214 */    MCD::OPC_FilterValue, 0, 64, 0, 0, // Skip to: 2283
/* 2219 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 2222 */    MCD::OPC_FilterValue, 0, 25, 0, 0, // Skip to: 2252
/* 2227 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 2243
/* 2232 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, 0, // Skip to: 2243
/* 2239 */    MCD::OPC_Decode, 245, 3, 20, // Opcode: MOVFCCrr
/* 2243 */    MCD::OPC_CheckPredicate, 0, 146, 22, 0, // Skip to: 8026
/* 2248 */    MCD::OPC_Decode, 169, 5, 21, // Opcode: V9MOVFCCrr
/* 2252 */    MCD::OPC_FilterValue, 1, 137, 22, 0, // Skip to: 8026
/* 2257 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 2260 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 2274
/* 2265 */    MCD::OPC_CheckPredicate, 0, 124, 22, 0, // Skip to: 8026
/* 2270 */    MCD::OPC_Decode, 247, 3, 20, // Opcode: MOVICCrr
/* 2274 */    MCD::OPC_FilterValue, 2, 115, 22, 0, // Skip to: 8026
/* 2279 */    MCD::OPC_Decode, 136, 4, 20, // Opcode: MOVXCCrr
/* 2283 */    MCD::OPC_FilterValue, 1, 106, 22, 0, // Skip to: 8026
/* 2288 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 2291 */    MCD::OPC_FilterValue, 0, 25, 0, 0, // Skip to: 2321
/* 2296 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 2312
/* 2301 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, 0, // Skip to: 2312
/* 2308 */    MCD::OPC_Decode, 244, 3, 22, // Opcode: MOVFCCri
/* 2312 */    MCD::OPC_CheckPredicate, 0, 77, 22, 0, // Skip to: 8026
/* 2317 */    MCD::OPC_Decode, 168, 5, 23, // Opcode: V9MOVFCCri
/* 2321 */    MCD::OPC_FilterValue, 1, 68, 22, 0, // Skip to: 8026
/* 2326 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 2329 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 2343
/* 2334 */    MCD::OPC_CheckPredicate, 0, 55, 22, 0, // Skip to: 8026
/* 2339 */    MCD::OPC_Decode, 246, 3, 22, // Opcode: MOVICCri
/* 2343 */    MCD::OPC_FilterValue, 2, 46, 22, 0, // Skip to: 8026
/* 2348 */    MCD::OPC_Decode, 135, 4, 22, // Opcode: MOVXCCri
/* 2352 */    MCD::OPC_FilterValue, 45, 28, 0, 0, // Skip to: 2385
/* 2357 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2360 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 2376
/* 2365 */    MCD::OPC_CheckField, 5, 8, 0, 22, 22, 0, // Skip to: 8026
/* 2372 */    MCD::OPC_Decode, 175, 4, 10, // Opcode: SDIVXrr
/* 2376 */    MCD::OPC_FilterValue, 1, 13, 22, 0, // Skip to: 8026
/* 2381 */    MCD::OPC_Decode, 174, 4, 11, // Opcode: SDIVXri
/* 2385 */    MCD::OPC_FilterValue, 46, 16, 0, 0, // Skip to: 2406
/* 2390 */    MCD::OPC_CheckPredicate, 0, 255, 21, 0, // Skip to: 8026
/* 2395 */    MCD::OPC_CheckField, 5, 14, 0, 248, 21, 0, // Skip to: 8026
/* 2402 */    MCD::OPC_Decode, 156, 4, 24, // Opcode: POPCrr
/* 2406 */    MCD::OPC_FilterValue, 47, 153, 0, 0, // Skip to: 2564
/* 2411 */    MCD::OPC_ExtractField, 10, 4,  // Inst{13-10} ...
/* 2414 */    MCD::OPC_FilterValue, 1, 11, 0, 0, // Skip to: 2430
/* 2419 */    MCD::OPC_CheckField, 5, 5, 0, 224, 21, 0, // Skip to: 8026
/* 2426 */    MCD::OPC_Decode, 131, 4, 14, // Opcode: MOVRRZrr
/* 2430 */    MCD::OPC_FilterValue, 2, 11, 0, 0, // Skip to: 2446
/* 2435 */    MCD::OPC_CheckField, 5, 5, 0, 208, 21, 0, // Skip to: 8026
/* 2442 */    MCD::OPC_Decode, 253, 3, 14, // Opcode: MOVRLEZrr
/* 2446 */    MCD::OPC_FilterValue, 3, 11, 0, 0, // Skip to: 2462
/* 2451 */    MCD::OPC_CheckField, 5, 5, 0, 192, 21, 0, // Skip to: 8026
/* 2458 */    MCD::OPC_Decode, 255, 3, 14, // Opcode: MOVRLZrr
/* 2462 */    MCD::OPC_FilterValue, 5, 11, 0, 0, // Skip to: 2478
/* 2467 */    MCD::OPC_CheckField, 5, 5, 0, 176, 21, 0, // Skip to: 8026
/* 2474 */    MCD::OPC_Decode, 129, 4, 14, // Opcode: MOVRNZrr
/* 2478 */    MCD::OPC_FilterValue, 6, 11, 0, 0, // Skip to: 2494
/* 2483 */    MCD::OPC_CheckField, 5, 5, 0, 160, 21, 0, // Skip to: 8026
/* 2490 */    MCD::OPC_Decode, 251, 3, 14, // Opcode: MOVRGZrr
/* 2494 */    MCD::OPC_FilterValue, 7, 11, 0, 0, // Skip to: 2510
/* 2499 */    MCD::OPC_CheckField, 5, 5, 0, 144, 21, 0, // Skip to: 8026
/* 2506 */    MCD::OPC_Decode, 249, 3, 14, // Opcode: MOVRGEZrr
/* 2510 */    MCD::OPC_FilterValue, 9, 4, 0, 0, // Skip to: 2519
/* 2515 */    MCD::OPC_Decode, 130, 4, 25, // Opcode: MOVRRZri
/* 2519 */    MCD::OPC_FilterValue, 10, 4, 0, 0, // Skip to: 2528
/* 2524 */    MCD::OPC_Decode, 252, 3, 25, // Opcode: MOVRLEZri
/* 2528 */    MCD::OPC_FilterValue, 11, 4, 0, 0, // Skip to: 2537
/* 2533 */    MCD::OPC_Decode, 254, 3, 25, // Opcode: MOVRLZri
/* 2537 */    MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 2546
/* 2542 */    MCD::OPC_Decode, 128, 4, 25, // Opcode: MOVRNZri
/* 2546 */    MCD::OPC_FilterValue, 14, 4, 0, 0, // Skip to: 2555
/* 2551 */    MCD::OPC_Decode, 250, 3, 25, // Opcode: MOVRGZri
/* 2555 */    MCD::OPC_FilterValue, 15, 90, 21, 0, // Skip to: 8026
/* 2560 */    MCD::OPC_Decode, 248, 3, 25, // Opcode: MOVRGEZri
/* 2564 */    MCD::OPC_FilterValue, 48, 28, 0, 0, // Skip to: 2597
/* 2569 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2572 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 2588
/* 2577 */    MCD::OPC_CheckField, 5, 8, 0, 66, 21, 0, // Skip to: 8026
/* 2584 */    MCD::OPC_Decode, 171, 5, 26, // Opcode: WRASRrr
/* 2588 */    MCD::OPC_FilterValue, 1, 57, 21, 0, // Skip to: 8026
/* 2593 */    MCD::OPC_Decode, 170, 5, 27, // Opcode: WRASRri
/* 2597 */    MCD::OPC_FilterValue, 49, 79, 0, 0, // Skip to: 2681
/* 2602 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2605 */    MCD::OPC_FilterValue, 0, 40, 0, 0, // Skip to: 2650
/* 2610 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 2613 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 2629
/* 2618 */    MCD::OPC_CheckField, 5, 8, 0, 25, 21, 0, // Skip to: 8026
/* 2625 */    MCD::OPC_Decode, 175, 5, 12, // Opcode: WRPSRrr
/* 2629 */    MCD::OPC_FilterValue, 1, 16, 21, 0, // Skip to: 8026
/* 2634 */    MCD::OPC_CheckPredicate, 1, 11, 21, 0, // Skip to: 8026
/* 2639 */    MCD::OPC_CheckField, 5, 8, 0, 4, 21, 0, // Skip to: 8026
/* 2646 */    MCD::OPC_Decode, 158, 4, 12, // Opcode: PWRPSRrr
/* 2650 */    MCD::OPC_FilterValue, 1, 251, 20, 0, // Skip to: 8026
/* 2655 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 2658 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 2667
/* 2663 */    MCD::OPC_Decode, 174, 5, 13, // Opcode: WRPSRri
/* 2667 */    MCD::OPC_FilterValue, 1, 234, 20, 0, // Skip to: 8026
/* 2672 */    MCD::OPC_CheckPredicate, 1, 229, 20, 0, // Skip to: 8026
/* 2677 */    MCD::OPC_Decode, 157, 4, 13, // Opcode: PWRPSRri
/* 2681 */    MCD::OPC_FilterValue, 50, 61, 0, 0, // Skip to: 2747
/* 2686 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2689 */    MCD::OPC_FilterValue, 0, 28, 0, 0, // Skip to: 2722
/* 2694 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 2697 */    MCD::OPC_FilterValue, 0, 204, 20, 0, // Skip to: 8026
/* 2702 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 2713
/* 2709 */    MCD::OPC_Decode, 179, 5, 12, // Opcode: WRWIMrr
/* 2713 */    MCD::OPC_CheckPredicate, 0, 188, 20, 0, // Skip to: 8026
/* 2718 */    MCD::OPC_Decode, 173, 5, 28, // Opcode: WRPRrr
/* 2722 */    MCD::OPC_FilterValue, 1, 179, 20, 0, // Skip to: 8026
/* 2727 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 2738
/* 2734 */    MCD::OPC_Decode, 178, 5, 13, // Opcode: WRWIMri
/* 2738 */    MCD::OPC_CheckPredicate, 0, 163, 20, 0, // Skip to: 8026
/* 2743 */    MCD::OPC_Decode, 172, 5, 29, // Opcode: WRPRri
/* 2747 */    MCD::OPC_FilterValue, 51, 42, 0, 0, // Skip to: 2794
/* 2752 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2755 */    MCD::OPC_FilterValue, 0, 18, 0, 0, // Skip to: 2778
/* 2760 */    MCD::OPC_CheckField, 25, 5, 0, 139, 20, 0, // Skip to: 8026
/* 2767 */    MCD::OPC_CheckField, 5, 8, 0, 132, 20, 0, // Skip to: 8026
/* 2774 */    MCD::OPC_Decode, 177, 5, 12, // Opcode: WRTBRrr
/* 2778 */    MCD::OPC_FilterValue, 1, 123, 20, 0, // Skip to: 8026
/* 2783 */    MCD::OPC_CheckField, 25, 5, 0, 116, 20, 0, // Skip to: 8026
/* 2790 */    MCD::OPC_Decode, 176, 5, 13, // Opcode: WRTBRri
/* 2794 */    MCD::OPC_FilterValue, 52, 43, 3, 0, // Skip to: 3610
/* 2799 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 2802 */    MCD::OPC_FilterValue, 1, 11, 0, 0, // Skip to: 2818
/* 2807 */    MCD::OPC_CheckField, 14, 5, 0, 92, 20, 0, // Skip to: 8026
/* 2814 */    MCD::OPC_Decode, 232, 2, 30, // Opcode: FMOVS
/* 2818 */    MCD::OPC_FilterValue, 2, 16, 0, 0, // Skip to: 2839
/* 2823 */    MCD::OPC_CheckPredicate, 0, 78, 20, 0, // Skip to: 8026
/* 2828 */    MCD::OPC_CheckField, 14, 5, 0, 71, 20, 0, // Skip to: 8026
/* 2835 */    MCD::OPC_Decode, 206, 2, 31, // Opcode: FMOVD
/* 2839 */    MCD::OPC_FilterValue, 3, 16, 0, 0, // Skip to: 2860
/* 2844 */    MCD::OPC_CheckPredicate, 0, 57, 20, 0, // Skip to: 8026
/* 2849 */    MCD::OPC_CheckField, 14, 5, 0, 50, 20, 0, // Skip to: 8026
/* 2856 */    MCD::OPC_Decode, 210, 2, 32, // Opcode: FMOVQ
/* 2860 */    MCD::OPC_FilterValue, 5, 11, 0, 0, // Skip to: 2876
/* 2865 */    MCD::OPC_CheckField, 14, 5, 0, 34, 20, 0, // Skip to: 8026
/* 2872 */    MCD::OPC_Decode, 252, 2, 30, // Opcode: FNEGS
/* 2876 */    MCD::OPC_FilterValue, 6, 16, 0, 0, // Skip to: 2897
/* 2881 */    MCD::OPC_CheckPredicate, 0, 20, 20, 0, // Skip to: 8026
/* 2886 */    MCD::OPC_CheckField, 14, 5, 0, 13, 20, 0, // Skip to: 8026
/* 2893 */    MCD::OPC_Decode, 250, 2, 31, // Opcode: FNEGD
/* 2897 */    MCD::OPC_FilterValue, 7, 16, 0, 0, // Skip to: 2918
/* 2902 */    MCD::OPC_CheckPredicate, 0, 255, 19, 0, // Skip to: 8026
/* 2907 */    MCD::OPC_CheckField, 14, 5, 0, 248, 19, 0, // Skip to: 8026
/* 2914 */    MCD::OPC_Decode, 251, 2, 32, // Opcode: FNEGQ
/* 2918 */    MCD::OPC_FilterValue, 9, 11, 0, 0, // Skip to: 2934
/* 2923 */    MCD::OPC_CheckField, 14, 5, 0, 232, 19, 0, // Skip to: 8026
/* 2930 */    MCD::OPC_Decode, 158, 2, 30, // Opcode: FABSS
/* 2934 */    MCD::OPC_FilterValue, 10, 16, 0, 0, // Skip to: 2955
/* 2939 */    MCD::OPC_CheckPredicate, 0, 218, 19, 0, // Skip to: 8026
/* 2944 */    MCD::OPC_CheckField, 14, 5, 0, 211, 19, 0, // Skip to: 8026
/* 2951 */    MCD::OPC_Decode, 156, 2, 31, // Opcode: FABSD
/* 2955 */    MCD::OPC_FilterValue, 11, 16, 0, 0, // Skip to: 2976
/* 2960 */    MCD::OPC_CheckPredicate, 0, 197, 19, 0, // Skip to: 8026
/* 2965 */    MCD::OPC_CheckField, 14, 5, 0, 190, 19, 0, // Skip to: 8026
/* 2972 */    MCD::OPC_Decode, 157, 2, 32, // Opcode: FABSQ
/* 2976 */    MCD::OPC_FilterValue, 41, 11, 0, 0, // Skip to: 2992
/* 2981 */    MCD::OPC_CheckField, 14, 5, 0, 174, 19, 0, // Skip to: 8026
/* 2988 */    MCD::OPC_Decode, 168, 3, 30, // Opcode: FSQRTS
/* 2992 */    MCD::OPC_FilterValue, 42, 11, 0, 0, // Skip to: 3008
/* 2997 */    MCD::OPC_CheckField, 14, 5, 0, 158, 19, 0, // Skip to: 8026
/* 3004 */    MCD::OPC_Decode, 166, 3, 31, // Opcode: FSQRTD
/* 3008 */    MCD::OPC_FilterValue, 43, 11, 0, 0, // Skip to: 3024
/* 3013 */    MCD::OPC_CheckField, 14, 5, 0, 142, 19, 0, // Skip to: 8026
/* 3020 */    MCD::OPC_Decode, 167, 3, 32, // Opcode: FSQRTQ
/* 3024 */    MCD::OPC_FilterValue, 65, 4, 0, 0, // Skip to: 3033
/* 3029 */    MCD::OPC_Decode, 161, 2, 33, // Opcode: FADDS
/* 3033 */    MCD::OPC_FilterValue, 66, 4, 0, 0, // Skip to: 3042
/* 3038 */    MCD::OPC_Decode, 159, 2, 34, // Opcode: FADDD
/* 3042 */    MCD::OPC_FilterValue, 67, 4, 0, 0, // Skip to: 3051
/* 3047 */    MCD::OPC_Decode, 160, 2, 35, // Opcode: FADDQ
/* 3051 */    MCD::OPC_FilterValue, 69, 4, 0, 0, // Skip to: 3060
/* 3056 */    MCD::OPC_Decode, 183, 3, 33, // Opcode: FSUBS
/* 3060 */    MCD::OPC_FilterValue, 70, 4, 0, 0, // Skip to: 3069
/* 3065 */    MCD::OPC_Decode, 181, 3, 34, // Opcode: FSUBD
/* 3069 */    MCD::OPC_FilterValue, 71, 4, 0, 0, // Skip to: 3078
/* 3074 */    MCD::OPC_Decode, 182, 3, 35, // Opcode: FSUBQ
/* 3078 */    MCD::OPC_FilterValue, 73, 4, 0, 0, // Skip to: 3087
/* 3083 */    MCD::OPC_Decode, 245, 2, 33, // Opcode: FMULS
/* 3087 */    MCD::OPC_FilterValue, 74, 4, 0, 0, // Skip to: 3096
/* 3092 */    MCD::OPC_Decode, 241, 2, 34, // Opcode: FMULD
/* 3096 */    MCD::OPC_FilterValue, 75, 4, 0, 0, // Skip to: 3105
/* 3101 */    MCD::OPC_Decode, 244, 2, 35, // Opcode: FMULQ
/* 3105 */    MCD::OPC_FilterValue, 77, 4, 0, 0, // Skip to: 3114
/* 3110 */    MCD::OPC_Decode, 185, 2, 33, // Opcode: FDIVS
/* 3114 */    MCD::OPC_FilterValue, 78, 4, 0, 0, // Skip to: 3123
/* 3119 */    MCD::OPC_Decode, 183, 2, 34, // Opcode: FDIVD
/* 3123 */    MCD::OPC_FilterValue, 79, 4, 0, 0, // Skip to: 3132
/* 3128 */    MCD::OPC_Decode, 184, 2, 35, // Opcode: FDIVQ
/* 3132 */    MCD::OPC_FilterValue, 81, 9, 0, 0, // Skip to: 3146
/* 3137 */    MCD::OPC_CheckPredicate, 2, 20, 19, 0, // Skip to: 8026
/* 3142 */    MCD::OPC_Decode, 247, 2, 34, // Opcode: FNADDS
/* 3146 */    MCD::OPC_FilterValue, 82, 9, 0, 0, // Skip to: 3160
/* 3151 */    MCD::OPC_CheckPredicate, 2, 6, 19, 0, // Skip to: 8026
/* 3156 */    MCD::OPC_Decode, 246, 2, 34, // Opcode: FNADDD
/* 3160 */    MCD::OPC_FilterValue, 89, 9, 0, 0, // Skip to: 3174
/* 3165 */    MCD::OPC_CheckPredicate, 2, 248, 18, 0, // Skip to: 8026
/* 3170 */    MCD::OPC_Decode, 128, 3, 34, // Opcode: FNMULS
/* 3174 */    MCD::OPC_FilterValue, 90, 9, 0, 0, // Skip to: 3188
/* 3179 */    MCD::OPC_CheckPredicate, 2, 234, 18, 0, // Skip to: 8026
/* 3184 */    MCD::OPC_Decode, 255, 2, 34, // Opcode: FNMULD
/* 3188 */    MCD::OPC_FilterValue, 97, 9, 0, 0, // Skip to: 3202
/* 3193 */    MCD::OPC_CheckPredicate, 2, 220, 18, 0, // Skip to: 8026
/* 3198 */    MCD::OPC_Decode, 193, 2, 34, // Opcode: FHADDS
/* 3202 */    MCD::OPC_FilterValue, 98, 9, 0, 0, // Skip to: 3216
/* 3207 */    MCD::OPC_CheckPredicate, 2, 206, 18, 0, // Skip to: 8026
/* 3212 */    MCD::OPC_Decode, 192, 2, 34, // Opcode: FHADDD
/* 3216 */    MCD::OPC_FilterValue, 101, 9, 0, 0, // Skip to: 3230
/* 3221 */    MCD::OPC_CheckPredicate, 2, 192, 18, 0, // Skip to: 8026
/* 3226 */    MCD::OPC_Decode, 195, 2, 34, // Opcode: FHSUBS
/* 3230 */    MCD::OPC_FilterValue, 102, 9, 0, 0, // Skip to: 3244
/* 3235 */    MCD::OPC_CheckPredicate, 2, 178, 18, 0, // Skip to: 8026
/* 3240 */    MCD::OPC_Decode, 194, 2, 34, // Opcode: FHSUBD
/* 3244 */    MCD::OPC_FilterValue, 105, 4, 0, 0, // Skip to: 3253
/* 3249 */    MCD::OPC_Decode, 165, 3, 36, // Opcode: FSMULD
/* 3253 */    MCD::OPC_FilterValue, 110, 4, 0, 0, // Skip to: 3262
/* 3258 */    MCD::OPC_Decode, 186, 2, 37, // Opcode: FDMULQ
/* 3262 */    MCD::OPC_FilterValue, 113, 9, 0, 0, // Skip to: 3276
/* 3267 */    MCD::OPC_CheckPredicate, 2, 146, 18, 0, // Skip to: 8026
/* 3272 */    MCD::OPC_Decode, 254, 2, 34, // Opcode: FNHADDS
/* 3276 */    MCD::OPC_FilterValue, 114, 9, 0, 0, // Skip to: 3290
/* 3281 */    MCD::OPC_CheckPredicate, 2, 132, 18, 0, // Skip to: 8026
/* 3286 */    MCD::OPC_Decode, 253, 2, 34, // Opcode: FNHADDD
/* 3290 */    MCD::OPC_FilterValue, 121, 9, 0, 0, // Skip to: 3304
/* 3295 */    MCD::OPC_CheckPredicate, 2, 118, 18, 0, // Skip to: 8026
/* 3300 */    MCD::OPC_Decode, 135, 3, 34, // Opcode: FNSMULD
/* 3304 */    MCD::OPC_FilterValue, 129, 1, 11, 0, 0, // Skip to: 3321
/* 3310 */    MCD::OPC_CheckField, 14, 5, 0, 101, 18, 0, // Skip to: 8026
/* 3317 */    MCD::OPC_Decode, 180, 3, 38, // Opcode: FSTOX
/* 3321 */    MCD::OPC_FilterValue, 130, 1, 11, 0, 0, // Skip to: 3338
/* 3327 */    MCD::OPC_CheckField, 14, 5, 0, 84, 18, 0, // Skip to: 8026
/* 3334 */    MCD::OPC_Decode, 190, 2, 31, // Opcode: FDTOX
/* 3338 */    MCD::OPC_FilterValue, 131, 1, 11, 0, 0, // Skip to: 3355
/* 3344 */    MCD::OPC_CheckField, 14, 5, 0, 67, 18, 0, // Skip to: 8026
/* 3351 */    MCD::OPC_Decode, 160, 3, 39, // Opcode: FQTOX
/* 3355 */    MCD::OPC_FilterValue, 132, 1, 11, 0, 0, // Skip to: 3372
/* 3361 */    MCD::OPC_CheckField, 14, 5, 0, 50, 18, 0, // Skip to: 8026
/* 3368 */    MCD::OPC_Decode, 190, 3, 40, // Opcode: FXTOS
/* 3372 */    MCD::OPC_FilterValue, 136, 1, 11, 0, 0, // Skip to: 3389
/* 3378 */    MCD::OPC_CheckField, 14, 5, 0, 33, 18, 0, // Skip to: 8026
/* 3385 */    MCD::OPC_Decode, 188, 3, 31, // Opcode: FXTOD
/* 3389 */    MCD::OPC_FilterValue, 140, 1, 11, 0, 0, // Skip to: 3406
/* 3395 */    MCD::OPC_CheckField, 14, 5, 0, 16, 18, 0, // Skip to: 8026
/* 3402 */    MCD::OPC_Decode, 189, 3, 41, // Opcode: FXTOQ
/* 3406 */    MCD::OPC_FilterValue, 196, 1, 11, 0, 0, // Skip to: 3423
/* 3412 */    MCD::OPC_CheckField, 14, 5, 0, 255, 17, 0, // Skip to: 8026
/* 3419 */    MCD::OPC_Decode, 198, 2, 30, // Opcode: FITOS
/* 3423 */    MCD::OPC_FilterValue, 198, 1, 11, 0, 0, // Skip to: 3440
/* 3429 */    MCD::OPC_CheckField, 14, 5, 0, 238, 17, 0, // Skip to: 8026
/* 3436 */    MCD::OPC_Decode, 189, 2, 40, // Opcode: FDTOS
/* 3440 */    MCD::OPC_FilterValue, 199, 1, 11, 0, 0, // Skip to: 3457
/* 3446 */    MCD::OPC_CheckField, 14, 5, 0, 221, 17, 0, // Skip to: 8026
/* 3453 */    MCD::OPC_Decode, 159, 3, 42, // Opcode: FQTOS
/* 3457 */    MCD::OPC_FilterValue, 200, 1, 11, 0, 0, // Skip to: 3474
/* 3463 */    MCD::OPC_CheckField, 14, 5, 0, 204, 17, 0, // Skip to: 8026
/* 3470 */    MCD::OPC_Decode, 196, 2, 38, // Opcode: FITOD
/* 3474 */    MCD::OPC_FilterValue, 201, 1, 11, 0, 0, // Skip to: 3491
/* 3480 */    MCD::OPC_CheckField, 14, 5, 0, 187, 17, 0, // Skip to: 8026
/* 3487 */    MCD::OPC_Decode, 177, 3, 38, // Opcode: FSTOD
/* 3491 */    MCD::OPC_FilterValue, 203, 1, 11, 0, 0, // Skip to: 3508
/* 3497 */    MCD::OPC_CheckField, 14, 5, 0, 170, 17, 0, // Skip to: 8026
/* 3504 */    MCD::OPC_Decode, 157, 3, 39, // Opcode: FQTOD
/* 3508 */    MCD::OPC_FilterValue, 204, 1, 11, 0, 0, // Skip to: 3525
/* 3514 */    MCD::OPC_CheckField, 14, 5, 0, 153, 17, 0, // Skip to: 8026
/* 3521 */    MCD::OPC_Decode, 197, 2, 43, // Opcode: FITOQ
/* 3525 */    MCD::OPC_FilterValue, 205, 1, 11, 0, 0, // Skip to: 3542
/* 3531 */    MCD::OPC_CheckField, 14, 5, 0, 136, 17, 0, // Skip to: 8026
/* 3538 */    MCD::OPC_Decode, 179, 3, 43, // Opcode: FSTOQ
/* 3542 */    MCD::OPC_FilterValue, 206, 1, 11, 0, 0, // Skip to: 3559
/* 3548 */    MCD::OPC_CheckField, 14, 5, 0, 119, 17, 0, // Skip to: 8026
/* 3555 */    MCD::OPC_Decode, 188, 2, 41, // Opcode: FDTOQ
/* 3559 */    MCD::OPC_FilterValue, 209, 1, 11, 0, 0, // Skip to: 3576
/* 3565 */    MCD::OPC_CheckField, 14, 5, 0, 102, 17, 0, // Skip to: 8026
/* 3572 */    MCD::OPC_Decode, 178, 3, 30, // Opcode: FSTOI
/* 3576 */    MCD::OPC_FilterValue, 210, 1, 11, 0, 0, // Skip to: 3593
/* 3582 */    MCD::OPC_CheckField, 14, 5, 0, 85, 17, 0, // Skip to: 8026
/* 3589 */    MCD::OPC_Decode, 187, 2, 40, // Opcode: FDTOI
/* 3593 */    MCD::OPC_FilterValue, 211, 1, 75, 17, 0, // Skip to: 8026
/* 3599 */    MCD::OPC_CheckField, 14, 5, 0, 68, 17, 0, // Skip to: 8026
/* 3606 */    MCD::OPC_Decode, 158, 3, 42, // Opcode: FQTOI
/* 3610 */    MCD::OPC_FilterValue, 53, 160, 2, 0, // Skip to: 4287
/* 3615 */    MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 3618 */    MCD::OPC_FilterValue, 1, 86, 0, 0, // Skip to: 3709
/* 3623 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3626 */    MCD::OPC_FilterValue, 0, 33, 0, 0, // Skip to: 3664
/* 3631 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3634 */    MCD::OPC_FilterValue, 0, 35, 17, 0, // Skip to: 8026
/* 3639 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 3655
/* 3644 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, 0, // Skip to: 3655
/* 3651 */    MCD::OPC_Decode, 233, 2, 44, // Opcode: FMOVS_FCC
/* 3655 */    MCD::OPC_CheckPredicate, 0, 14, 17, 0, // Skip to: 8026
/* 3660 */    MCD::OPC_Decode, 167, 5, 45, // Opcode: V9FMOVS_FCC
/* 3664 */    MCD::OPC_FilterValue, 1, 5, 17, 0, // Skip to: 8026
/* 3669 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3672 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 3693
/* 3677 */    MCD::OPC_CheckPredicate, 0, 248, 16, 0, // Skip to: 8026
/* 3682 */    MCD::OPC_CheckField, 18, 1, 0, 241, 16, 0, // Skip to: 8026
/* 3689 */    MCD::OPC_Decode, 234, 2, 44, // Opcode: FMOVS_ICC
/* 3693 */    MCD::OPC_FilterValue, 2, 232, 16, 0, // Skip to: 8026
/* 3698 */    MCD::OPC_CheckField, 18, 1, 0, 225, 16, 0, // Skip to: 8026
/* 3705 */    MCD::OPC_Decode, 235, 2, 44, // Opcode: FMOVS_XCC
/* 3709 */    MCD::OPC_FilterValue, 2, 86, 0, 0, // Skip to: 3800
/* 3714 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3717 */    MCD::OPC_FilterValue, 0, 33, 0, 0, // Skip to: 3755
/* 3722 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3725 */    MCD::OPC_FilterValue, 0, 200, 16, 0, // Skip to: 8026
/* 3730 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 3746
/* 3735 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, 0, // Skip to: 3746
/* 3742 */    MCD::OPC_Decode, 207, 2, 46, // Opcode: FMOVD_FCC
/* 3746 */    MCD::OPC_CheckPredicate, 0, 179, 16, 0, // Skip to: 8026
/* 3751 */    MCD::OPC_Decode, 165, 5, 47, // Opcode: V9FMOVD_FCC
/* 3755 */    MCD::OPC_FilterValue, 1, 170, 16, 0, // Skip to: 8026
/* 3760 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3763 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 3784
/* 3768 */    MCD::OPC_CheckPredicate, 0, 157, 16, 0, // Skip to: 8026
/* 3773 */    MCD::OPC_CheckField, 18, 1, 0, 150, 16, 0, // Skip to: 8026
/* 3780 */    MCD::OPC_Decode, 208, 2, 46, // Opcode: FMOVD_ICC
/* 3784 */    MCD::OPC_FilterValue, 2, 141, 16, 0, // Skip to: 8026
/* 3789 */    MCD::OPC_CheckField, 18, 1, 0, 134, 16, 0, // Skip to: 8026
/* 3796 */    MCD::OPC_Decode, 209, 2, 46, // Opcode: FMOVD_XCC
/* 3800 */    MCD::OPC_FilterValue, 3, 86, 0, 0, // Skip to: 3891
/* 3805 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3808 */    MCD::OPC_FilterValue, 0, 33, 0, 0, // Skip to: 3846
/* 3813 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3816 */    MCD::OPC_FilterValue, 0, 109, 16, 0, // Skip to: 8026
/* 3821 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 3837
/* 3826 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, 0, // Skip to: 3837
/* 3833 */    MCD::OPC_Decode, 211, 2, 48, // Opcode: FMOVQ_FCC
/* 3837 */    MCD::OPC_CheckPredicate, 0, 88, 16, 0, // Skip to: 8026
/* 3842 */    MCD::OPC_Decode, 166, 5, 49, // Opcode: V9FMOVQ_FCC
/* 3846 */    MCD::OPC_FilterValue, 1, 79, 16, 0, // Skip to: 8026
/* 3851 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3854 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 3875
/* 3859 */    MCD::OPC_CheckPredicate, 0, 66, 16, 0, // Skip to: 8026
/* 3864 */    MCD::OPC_CheckField, 18, 1, 0, 59, 16, 0, // Skip to: 8026
/* 3871 */    MCD::OPC_Decode, 212, 2, 48, // Opcode: FMOVQ_ICC
/* 3875 */    MCD::OPC_FilterValue, 2, 50, 16, 0, // Skip to: 8026
/* 3880 */    MCD::OPC_CheckField, 18, 1, 0, 43, 16, 0, // Skip to: 8026
/* 3887 */    MCD::OPC_Decode, 213, 2, 48, // Opcode: FMOVQ_XCC
/* 3891 */    MCD::OPC_FilterValue, 5, 31, 0, 0, // Skip to: 3927
/* 3896 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3899 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 3913
/* 3904 */    MCD::OPC_CheckPredicate, 0, 21, 16, 0, // Skip to: 8026
/* 3909 */    MCD::OPC_Decode, 222, 2, 50, // Opcode: FMOVRLEZS
/* 3913 */    MCD::OPC_FilterValue, 3, 12, 16, 0, // Skip to: 8026
/* 3918 */    MCD::OPC_CheckPredicate, 0, 7, 16, 0, // Skip to: 8026
/* 3923 */    MCD::OPC_Decode, 219, 2, 50, // Opcode: FMOVRGZS
/* 3927 */    MCD::OPC_FilterValue, 6, 31, 0, 0, // Skip to: 3963
/* 3932 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3935 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 3949
/* 3940 */    MCD::OPC_CheckPredicate, 0, 241, 15, 0, // Skip to: 8026
/* 3945 */    MCD::OPC_Decode, 220, 2, 50, // Opcode: FMOVRLEZD
/* 3949 */    MCD::OPC_FilterValue, 3, 232, 15, 0, // Skip to: 8026
/* 3954 */    MCD::OPC_CheckPredicate, 0, 227, 15, 0, // Skip to: 8026
/* 3959 */    MCD::OPC_Decode, 217, 2, 50, // Opcode: FMOVRGZD
/* 3963 */    MCD::OPC_FilterValue, 7, 31, 0, 0, // Skip to: 3999
/* 3968 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3971 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 3985
/* 3976 */    MCD::OPC_CheckPredicate, 0, 205, 15, 0, // Skip to: 8026
/* 3981 */    MCD::OPC_Decode, 221, 2, 50, // Opcode: FMOVRLEZQ
/* 3985 */    MCD::OPC_FilterValue, 3, 196, 15, 0, // Skip to: 8026
/* 3990 */    MCD::OPC_CheckPredicate, 0, 191, 15, 0, // Skip to: 8026
/* 3995 */    MCD::OPC_Decode, 218, 2, 50, // Opcode: FMOVRGZQ
/* 3999 */    MCD::OPC_FilterValue, 17, 11, 0, 0, // Skip to: 4015
/* 4004 */    MCD::OPC_CheckField, 11, 3, 1, 175, 15, 0, // Skip to: 8026
/* 4011 */    MCD::OPC_Decode, 164, 5, 51, // Opcode: V9FCMPS
/* 4015 */    MCD::OPC_FilterValue, 18, 11, 0, 0, // Skip to: 4031
/* 4020 */    MCD::OPC_CheckField, 11, 3, 1, 159, 15, 0, // Skip to: 8026
/* 4027 */    MCD::OPC_Decode, 159, 5, 52, // Opcode: V9FCMPD
/* 4031 */    MCD::OPC_FilterValue, 19, 11, 0, 0, // Skip to: 4047
/* 4036 */    MCD::OPC_CheckField, 11, 3, 1, 143, 15, 0, // Skip to: 8026
/* 4043 */    MCD::OPC_Decode, 163, 5, 53, // Opcode: V9FCMPQ
/* 4047 */    MCD::OPC_FilterValue, 21, 11, 0, 0, // Skip to: 4063
/* 4052 */    MCD::OPC_CheckField, 11, 3, 1, 127, 15, 0, // Skip to: 8026
/* 4059 */    MCD::OPC_Decode, 162, 5, 51, // Opcode: V9FCMPES
/* 4063 */    MCD::OPC_FilterValue, 22, 11, 0, 0, // Skip to: 4079
/* 4068 */    MCD::OPC_CheckField, 11, 3, 1, 111, 15, 0, // Skip to: 8026
/* 4075 */    MCD::OPC_Decode, 160, 5, 52, // Opcode: V9FCMPED
/* 4079 */    MCD::OPC_FilterValue, 23, 11, 0, 0, // Skip to: 4095
/* 4084 */    MCD::OPC_CheckField, 11, 3, 1, 95, 15, 0, // Skip to: 8026
/* 4091 */    MCD::OPC_Decode, 161, 5, 53, // Opcode: V9FCMPEQ
/* 4095 */    MCD::OPC_FilterValue, 37, 59, 0, 0, // Skip to: 4159
/* 4100 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 4103 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 4117
/* 4108 */    MCD::OPC_CheckPredicate, 0, 73, 15, 0, // Skip to: 8026
/* 4113 */    MCD::OPC_Decode, 231, 2, 50, // Opcode: FMOVRZS
/* 4117 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4131
/* 4122 */    MCD::OPC_CheckPredicate, 0, 59, 15, 0, // Skip to: 8026
/* 4127 */    MCD::OPC_Decode, 225, 2, 50, // Opcode: FMOVRLZS
/* 4131 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 4145
/* 4136 */    MCD::OPC_CheckPredicate, 0, 45, 15, 0, // Skip to: 8026
/* 4141 */    MCD::OPC_Decode, 228, 2, 50, // Opcode: FMOVRNZS
/* 4145 */    MCD::OPC_FilterValue, 3, 36, 15, 0, // Skip to: 8026
/* 4150 */    MCD::OPC_CheckPredicate, 0, 31, 15, 0, // Skip to: 8026
/* 4155 */    MCD::OPC_Decode, 216, 2, 50, // Opcode: FMOVRGEZS
/* 4159 */    MCD::OPC_FilterValue, 38, 59, 0, 0, // Skip to: 4223
/* 4164 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 4167 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 4181
/* 4172 */    MCD::OPC_CheckPredicate, 0, 9, 15, 0, // Skip to: 8026
/* 4177 */    MCD::OPC_Decode, 229, 2, 50, // Opcode: FMOVRZD
/* 4181 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4195
/* 4186 */    MCD::OPC_CheckPredicate, 0, 251, 14, 0, // Skip to: 8026
/* 4191 */    MCD::OPC_Decode, 223, 2, 50, // Opcode: FMOVRLZD
/* 4195 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 4209
/* 4200 */    MCD::OPC_CheckPredicate, 0, 237, 14, 0, // Skip to: 8026
/* 4205 */    MCD::OPC_Decode, 226, 2, 50, // Opcode: FMOVRNZD
/* 4209 */    MCD::OPC_FilterValue, 3, 228, 14, 0, // Skip to: 8026
/* 4214 */    MCD::OPC_CheckPredicate, 0, 223, 14, 0, // Skip to: 8026
/* 4219 */    MCD::OPC_Decode, 214, 2, 50, // Opcode: FMOVRGEZD
/* 4223 */    MCD::OPC_FilterValue, 39, 214, 14, 0, // Skip to: 8026
/* 4228 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 4231 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 4245
/* 4236 */    MCD::OPC_CheckPredicate, 0, 201, 14, 0, // Skip to: 8026
/* 4241 */    MCD::OPC_Decode, 230, 2, 50, // Opcode: FMOVRZQ
/* 4245 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4259
/* 4250 */    MCD::OPC_CheckPredicate, 0, 187, 14, 0, // Skip to: 8026
/* 4255 */    MCD::OPC_Decode, 224, 2, 50, // Opcode: FMOVRLZQ
/* 4259 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 4273
/* 4264 */    MCD::OPC_CheckPredicate, 0, 173, 14, 0, // Skip to: 8026
/* 4269 */    MCD::OPC_Decode, 227, 2, 50, // Opcode: FMOVRNZQ
/* 4273 */    MCD::OPC_FilterValue, 3, 164, 14, 0, // Skip to: 8026
/* 4278 */    MCD::OPC_CheckPredicate, 0, 159, 14, 0, // Skip to: 8026
/* 4283 */    MCD::OPC_Decode, 215, 2, 50, // Opcode: FMOVRGEZQ
/* 4287 */    MCD::OPC_FilterValue, 54, 35, 7, 0, // Skip to: 6119
/* 4292 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 4295 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 4309
/* 4300 */    MCD::OPC_CheckPredicate, 3, 137, 14, 0, // Skip to: 8026
/* 4305 */    MCD::OPC_Decode, 152, 2, 10, // Opcode: EDGE8
/* 4309 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4323
/* 4314 */    MCD::OPC_CheckPredicate, 4, 123, 14, 0, // Skip to: 8026
/* 4319 */    MCD::OPC_Decode, 155, 2, 10, // Opcode: EDGE8N
/* 4323 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 4337
/* 4328 */    MCD::OPC_CheckPredicate, 3, 109, 14, 0, // Skip to: 8026
/* 4333 */    MCD::OPC_Decode, 153, 2, 10, // Opcode: EDGE8L
/* 4337 */    MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 4351
/* 4342 */    MCD::OPC_CheckPredicate, 4, 95, 14, 0, // Skip to: 8026
/* 4347 */    MCD::OPC_Decode, 154, 2, 10, // Opcode: EDGE8LN
/* 4351 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 4365
/* 4356 */    MCD::OPC_CheckPredicate, 3, 81, 14, 0, // Skip to: 8026
/* 4361 */    MCD::OPC_Decode, 144, 2, 10, // Opcode: EDGE16
/* 4365 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 4379
/* 4370 */    MCD::OPC_CheckPredicate, 4, 67, 14, 0, // Skip to: 8026
/* 4375 */    MCD::OPC_Decode, 147, 2, 10, // Opcode: EDGE16N
/* 4379 */    MCD::OPC_FilterValue, 6, 9, 0, 0, // Skip to: 4393
/* 4384 */    MCD::OPC_CheckPredicate, 3, 53, 14, 0, // Skip to: 8026
/* 4389 */    MCD::OPC_Decode, 145, 2, 10, // Opcode: EDGE16L
/* 4393 */    MCD::OPC_FilterValue, 7, 9, 0, 0, // Skip to: 4407
/* 4398 */    MCD::OPC_CheckPredicate, 4, 39, 14, 0, // Skip to: 8026
/* 4403 */    MCD::OPC_Decode, 146, 2, 10, // Opcode: EDGE16LN
/* 4407 */    MCD::OPC_FilterValue, 8, 9, 0, 0, // Skip to: 4421
/* 4412 */    MCD::OPC_CheckPredicate, 3, 25, 14, 0, // Skip to: 8026
/* 4417 */    MCD::OPC_Decode, 148, 2, 10, // Opcode: EDGE32
/* 4421 */    MCD::OPC_FilterValue, 9, 9, 0, 0, // Skip to: 4435
/* 4426 */    MCD::OPC_CheckPredicate, 4, 11, 14, 0, // Skip to: 8026
/* 4431 */    MCD::OPC_Decode, 151, 2, 10, // Opcode: EDGE32N
/* 4435 */    MCD::OPC_FilterValue, 10, 9, 0, 0, // Skip to: 4449
/* 4440 */    MCD::OPC_CheckPredicate, 3, 253, 13, 0, // Skip to: 8026
/* 4445 */    MCD::OPC_Decode, 149, 2, 10, // Opcode: EDGE32L
/* 4449 */    MCD::OPC_FilterValue, 11, 9, 0, 0, // Skip to: 4463
/* 4454 */    MCD::OPC_CheckPredicate, 4, 239, 13, 0, // Skip to: 8026
/* 4459 */    MCD::OPC_Decode, 150, 2, 10, // Opcode: EDGE32LN
/* 4463 */    MCD::OPC_FilterValue, 16, 9, 0, 0, // Skip to: 4477
/* 4468 */    MCD::OPC_CheckPredicate, 3, 225, 13, 0, // Skip to: 8026
/* 4473 */    MCD::OPC_Decode, 214, 1, 10, // Opcode: ARRAY8
/* 4477 */    MCD::OPC_FilterValue, 17, 9, 0, 0, // Skip to: 4491
/* 4482 */    MCD::OPC_CheckPredicate, 2, 211, 13, 0, // Skip to: 8026
/* 4487 */    MCD::OPC_Decode, 193, 1, 10, // Opcode: ADDXC
/* 4491 */    MCD::OPC_FilterValue, 18, 9, 0, 0, // Skip to: 4505
/* 4496 */    MCD::OPC_CheckPredicate, 3, 197, 13, 0, // Skip to: 8026
/* 4501 */    MCD::OPC_Decode, 212, 1, 10, // Opcode: ARRAY16
/* 4505 */    MCD::OPC_FilterValue, 19, 9, 0, 0, // Skip to: 4519
/* 4510 */    MCD::OPC_CheckPredicate, 2, 183, 13, 0, // Skip to: 8026
/* 4515 */    MCD::OPC_Decode, 194, 1, 10, // Opcode: ADDXCCC
/* 4519 */    MCD::OPC_FilterValue, 20, 9, 0, 0, // Skip to: 4533
/* 4524 */    MCD::OPC_CheckPredicate, 3, 169, 13, 0, // Skip to: 8026
/* 4529 */    MCD::OPC_Decode, 213, 1, 10, // Opcode: ARRAY32
/* 4533 */    MCD::OPC_FilterValue, 22, 9, 0, 0, // Skip to: 4547
/* 4538 */    MCD::OPC_CheckPredicate, 2, 155, 13, 0, // Skip to: 8026
/* 4543 */    MCD::OPC_Decode, 155, 5, 10, // Opcode: UMULXHI
/* 4547 */    MCD::OPC_FilterValue, 23, 16, 0, 0, // Skip to: 4568
/* 4552 */    MCD::OPC_CheckPredicate, 2, 141, 13, 0, // Skip to: 8026
/* 4557 */    MCD::OPC_CheckField, 14, 5, 0, 134, 13, 0, // Skip to: 8026
/* 4564 */    MCD::OPC_Decode, 241, 3, 54, // Opcode: LZCNT
/* 4568 */    MCD::OPC_FilterValue, 24, 9, 0, 0, // Skip to: 4582
/* 4573 */    MCD::OPC_CheckPredicate, 3, 120, 13, 0, // Skip to: 8026
/* 4578 */    MCD::OPC_Decode, 199, 1, 10, // Opcode: ALIGNADDR
/* 4582 */    MCD::OPC_FilterValue, 25, 9, 0, 0, // Skip to: 4596
/* 4587 */    MCD::OPC_CheckPredicate, 4, 106, 13, 0, // Skip to: 8026
/* 4592 */    MCD::OPC_Decode, 220, 1, 10, // Opcode: BMASK
/* 4596 */    MCD::OPC_FilterValue, 26, 9, 0, 0, // Skip to: 4610
/* 4601 */    MCD::OPC_CheckPredicate, 3, 92, 13, 0, // Skip to: 8026
/* 4606 */    MCD::OPC_Decode, 200, 1, 10, // Opcode: ALIGNADDRL
/* 4610 */    MCD::OPC_FilterValue, 27, 23, 0, 0, // Skip to: 4638
/* 4615 */    MCD::OPC_CheckPredicate, 2, 78, 13, 0, // Skip to: 8026
/* 4620 */    MCD::OPC_CheckField, 25, 5, 0, 71, 13, 0, // Skip to: 8026
/* 4627 */    MCD::OPC_CheckField, 14, 5, 0, 64, 13, 0, // Skip to: 8026
/* 4634 */    MCD::OPC_Decode, 141, 2, 55, // Opcode: CMASK8
/* 4638 */    MCD::OPC_FilterValue, 28, 9, 0, 0, // Skip to: 4652
/* 4643 */    MCD::OPC_CheckPredicate, 4, 50, 13, 0, // Skip to: 8026
/* 4648 */    MCD::OPC_Decode, 129, 2, 34, // Opcode: BSHUFFLE
/* 4652 */    MCD::OPC_FilterValue, 29, 23, 0, 0, // Skip to: 4680
/* 4657 */    MCD::OPC_CheckPredicate, 2, 36, 13, 0, // Skip to: 8026
/* 4662 */    MCD::OPC_CheckField, 25, 5, 0, 29, 13, 0, // Skip to: 8026
/* 4669 */    MCD::OPC_CheckField, 14, 5, 0, 22, 13, 0, // Skip to: 8026
/* 4676 */    MCD::OPC_Decode, 139, 2, 55, // Opcode: CMASK16
/* 4680 */    MCD::OPC_FilterValue, 31, 23, 0, 0, // Skip to: 4708
/* 4685 */    MCD::OPC_CheckPredicate, 2, 8, 13, 0, // Skip to: 8026
/* 4690 */    MCD::OPC_CheckField, 25, 5, 0, 1, 13, 0, // Skip to: 8026
/* 4697 */    MCD::OPC_CheckField, 14, 5, 0, 250, 12, 0, // Skip to: 8026
/* 4704 */    MCD::OPC_Decode, 140, 2, 55, // Opcode: CMASK32
/* 4708 */    MCD::OPC_FilterValue, 32, 9, 0, 0, // Skip to: 4722
/* 4713 */    MCD::OPC_CheckPredicate, 3, 236, 12, 0, // Skip to: 8026
/* 4718 */    MCD::OPC_Decode, 177, 2, 56, // Opcode: FCMPLE16
/* 4722 */    MCD::OPC_FilterValue, 33, 9, 0, 0, // Skip to: 4736
/* 4727 */    MCD::OPC_CheckPredicate, 2, 222, 12, 0, // Skip to: 8026
/* 4732 */    MCD::OPC_Decode, 163, 3, 34, // Opcode: FSLL16
/* 4736 */    MCD::OPC_FilterValue, 34, 9, 0, 0, // Skip to: 4750
/* 4741 */    MCD::OPC_CheckPredicate, 3, 208, 12, 0, // Skip to: 8026
/* 4746 */    MCD::OPC_Decode, 179, 2, 56, // Opcode: FCMPNE16
/* 4750 */    MCD::OPC_FilterValue, 35, 9, 0, 0, // Skip to: 4764
/* 4755 */    MCD::OPC_CheckPredicate, 2, 194, 12, 0, // Skip to: 8026
/* 4760 */    MCD::OPC_Decode, 175, 3, 34, // Opcode: FSRL16
/* 4764 */    MCD::OPC_FilterValue, 36, 9, 0, 0, // Skip to: 4778
/* 4769 */    MCD::OPC_CheckPredicate, 3, 180, 12, 0, // Skip to: 8026
/* 4774 */    MCD::OPC_Decode, 178, 2, 56, // Opcode: FCMPLE32
/* 4778 */    MCD::OPC_FilterValue, 37, 9, 0, 0, // Skip to: 4792
/* 4783 */    MCD::OPC_CheckPredicate, 2, 166, 12, 0, // Skip to: 8026
/* 4788 */    MCD::OPC_Decode, 164, 3, 34, // Opcode: FSLL32
/* 4792 */    MCD::OPC_FilterValue, 38, 9, 0, 0, // Skip to: 4806
/* 4797 */    MCD::OPC_CheckPredicate, 3, 152, 12, 0, // Skip to: 8026
/* 4802 */    MCD::OPC_Decode, 180, 2, 56, // Opcode: FCMPNE32
/* 4806 */    MCD::OPC_FilterValue, 39, 9, 0, 0, // Skip to: 4820
/* 4811 */    MCD::OPC_CheckPredicate, 2, 138, 12, 0, // Skip to: 8026
/* 4816 */    MCD::OPC_Decode, 176, 3, 34, // Opcode: FSRL32
/* 4820 */    MCD::OPC_FilterValue, 40, 9, 0, 0, // Skip to: 4834
/* 4825 */    MCD::OPC_CheckPredicate, 3, 124, 12, 0, // Skip to: 8026
/* 4830 */    MCD::OPC_Decode, 175, 2, 56, // Opcode: FCMPGT16
/* 4834 */    MCD::OPC_FilterValue, 41, 9, 0, 0, // Skip to: 4848
/* 4839 */    MCD::OPC_CheckPredicate, 2, 110, 12, 0, // Skip to: 8026
/* 4844 */    MCD::OPC_Decode, 161, 3, 34, // Opcode: FSLAS16
/* 4848 */    MCD::OPC_FilterValue, 42, 9, 0, 0, // Skip to: 4862
/* 4853 */    MCD::OPC_CheckPredicate, 3, 96, 12, 0, // Skip to: 8026
/* 4858 */    MCD::OPC_Decode, 173, 2, 56, // Opcode: FCMPEQ16
/* 4862 */    MCD::OPC_FilterValue, 43, 9, 0, 0, // Skip to: 4876
/* 4867 */    MCD::OPC_CheckPredicate, 2, 82, 12, 0, // Skip to: 8026
/* 4872 */    MCD::OPC_Decode, 169, 3, 34, // Opcode: FSRA16
/* 4876 */    MCD::OPC_FilterValue, 44, 9, 0, 0, // Skip to: 4890
/* 4881 */    MCD::OPC_CheckPredicate, 3, 68, 12, 0, // Skip to: 8026
/* 4886 */    MCD::OPC_Decode, 176, 2, 56, // Opcode: FCMPGT32
/* 4890 */    MCD::OPC_FilterValue, 45, 9, 0, 0, // Skip to: 4904
/* 4895 */    MCD::OPC_CheckPredicate, 2, 54, 12, 0, // Skip to: 8026
/* 4900 */    MCD::OPC_Decode, 162, 3, 34, // Opcode: FSLAS32
/* 4904 */    MCD::OPC_FilterValue, 46, 9, 0, 0, // Skip to: 4918
/* 4909 */    MCD::OPC_CheckPredicate, 3, 40, 12, 0, // Skip to: 8026
/* 4914 */    MCD::OPC_Decode, 174, 2, 56, // Opcode: FCMPEQ32
/* 4918 */    MCD::OPC_FilterValue, 47, 9, 0, 0, // Skip to: 4932
/* 4923 */    MCD::OPC_CheckPredicate, 2, 26, 12, 0, // Skip to: 8026
/* 4928 */    MCD::OPC_Decode, 170, 3, 34, // Opcode: FSRA32
/* 4932 */    MCD::OPC_FilterValue, 49, 9, 0, 0, // Skip to: 4946
/* 4937 */    MCD::OPC_CheckPredicate, 3, 12, 12, 0, // Skip to: 8026
/* 4942 */    MCD::OPC_Decode, 238, 2, 34, // Opcode: FMUL8X16
/* 4946 */    MCD::OPC_FilterValue, 51, 9, 0, 0, // Skip to: 4960
/* 4951 */    MCD::OPC_CheckPredicate, 3, 254, 11, 0, // Skip to: 8026
/* 4956 */    MCD::OPC_Decode, 240, 2, 34, // Opcode: FMUL8X16AU
/* 4960 */    MCD::OPC_FilterValue, 53, 9, 0, 0, // Skip to: 4974
/* 4965 */    MCD::OPC_CheckPredicate, 3, 240, 11, 0, // Skip to: 8026
/* 4970 */    MCD::OPC_Decode, 239, 2, 34, // Opcode: FMUL8X16AL
/* 4974 */    MCD::OPC_FilterValue, 54, 9, 0, 0, // Skip to: 4988
/* 4979 */    MCD::OPC_CheckPredicate, 3, 226, 11, 0, // Skip to: 8026
/* 4984 */    MCD::OPC_Decode, 236, 2, 34, // Opcode: FMUL8SUX16
/* 4988 */    MCD::OPC_FilterValue, 55, 9, 0, 0, // Skip to: 5002
/* 4993 */    MCD::OPC_CheckPredicate, 3, 212, 11, 0, // Skip to: 8026
/* 4998 */    MCD::OPC_Decode, 237, 2, 34, // Opcode: FMUL8ULX16
/* 5002 */    MCD::OPC_FilterValue, 56, 9, 0, 0, // Skip to: 5016
/* 5007 */    MCD::OPC_CheckPredicate, 3, 198, 11, 0, // Skip to: 8026
/* 5012 */    MCD::OPC_Decode, 242, 2, 34, // Opcode: FMULD8SUX16
/* 5016 */    MCD::OPC_FilterValue, 57, 9, 0, 0, // Skip to: 5030
/* 5021 */    MCD::OPC_CheckPredicate, 3, 184, 11, 0, // Skip to: 8026
/* 5026 */    MCD::OPC_Decode, 243, 2, 34, // Opcode: FMULD8ULX16
/* 5030 */    MCD::OPC_FilterValue, 58, 9, 0, 0, // Skip to: 5044
/* 5035 */    MCD::OPC_CheckPredicate, 3, 170, 11, 0, // Skip to: 8026
/* 5040 */    MCD::OPC_Decode, 145, 3, 34, // Opcode: FPACK32
/* 5044 */    MCD::OPC_FilterValue, 59, 16, 0, 0, // Skip to: 5065
/* 5049 */    MCD::OPC_CheckPredicate, 3, 156, 11, 0, // Skip to: 8026
/* 5054 */    MCD::OPC_CheckField, 14, 5, 0, 149, 11, 0, // Skip to: 8026
/* 5061 */    MCD::OPC_Decode, 144, 3, 31, // Opcode: FPACK16
/* 5065 */    MCD::OPC_FilterValue, 61, 16, 0, 0, // Skip to: 5086
/* 5070 */    MCD::OPC_CheckPredicate, 3, 135, 11, 0, // Skip to: 8026
/* 5075 */    MCD::OPC_CheckField, 14, 5, 0, 128, 11, 0, // Skip to: 8026
/* 5082 */    MCD::OPC_Decode, 146, 3, 31, // Opcode: FPACKFIX
/* 5086 */    MCD::OPC_FilterValue, 62, 9, 0, 0, // Skip to: 5100
/* 5091 */    MCD::OPC_CheckPredicate, 3, 114, 11, 0, // Skip to: 8026
/* 5096 */    MCD::OPC_Decode, 154, 4, 34, // Opcode: PDIST
/* 5100 */    MCD::OPC_FilterValue, 63, 9, 0, 0, // Skip to: 5114
/* 5105 */    MCD::OPC_CheckPredicate, 2, 100, 11, 0, // Skip to: 8026
/* 5110 */    MCD::OPC_Decode, 155, 4, 34, // Opcode: PDISTN
/* 5114 */    MCD::OPC_FilterValue, 64, 9, 0, 0, // Skip to: 5128
/* 5119 */    MCD::OPC_CheckPredicate, 2, 86, 11, 0, // Skip to: 8026
/* 5124 */    MCD::OPC_Decode, 205, 2, 34, // Opcode: FMEAN16
/* 5128 */    MCD::OPC_FilterValue, 66, 9, 0, 0, // Skip to: 5142
/* 5133 */    MCD::OPC_CheckPredicate, 2, 72, 11, 0, // Skip to: 8026
/* 5138 */    MCD::OPC_Decode, 151, 3, 34, // Opcode: FPADD64
/* 5142 */    MCD::OPC_FilterValue, 68, 9, 0, 0, // Skip to: 5156
/* 5147 */    MCD::OPC_CheckPredicate, 2, 58, 11, 0, // Skip to: 8026
/* 5152 */    MCD::OPC_Decode, 171, 2, 34, // Opcode: FCHKSM16
/* 5156 */    MCD::OPC_FilterValue, 72, 9, 0, 0, // Skip to: 5170
/* 5161 */    MCD::OPC_CheckPredicate, 3, 44, 11, 0, // Skip to: 8026
/* 5166 */    MCD::OPC_Decode, 162, 2, 34, // Opcode: FALIGNADATA
/* 5170 */    MCD::OPC_FilterValue, 75, 9, 0, 0, // Skip to: 5184
/* 5175 */    MCD::OPC_CheckPredicate, 3, 30, 11, 0, // Skip to: 8026
/* 5180 */    MCD::OPC_Decode, 152, 3, 34, // Opcode: FPMERGE
/* 5184 */    MCD::OPC_FilterValue, 77, 16, 0, 0, // Skip to: 5205
/* 5189 */    MCD::OPC_CheckPredicate, 3, 16, 11, 0, // Skip to: 8026
/* 5194 */    MCD::OPC_CheckField, 14, 5, 0, 9, 11, 0, // Skip to: 8026
/* 5201 */    MCD::OPC_Decode, 191, 2, 31, // Opcode: FEXPAND
/* 5205 */    MCD::OPC_FilterValue, 80, 9, 0, 0, // Skip to: 5219
/* 5210 */    MCD::OPC_CheckPredicate, 3, 251, 10, 0, // Skip to: 8026
/* 5215 */    MCD::OPC_Decode, 147, 3, 34, // Opcode: FPADD16
/* 5219 */    MCD::OPC_FilterValue, 81, 9, 0, 0, // Skip to: 5233
/* 5224 */    MCD::OPC_CheckPredicate, 3, 237, 10, 0, // Skip to: 8026
/* 5229 */    MCD::OPC_Decode, 148, 3, 34, // Opcode: FPADD16S
/* 5233 */    MCD::OPC_FilterValue, 82, 9, 0, 0, // Skip to: 5247
/* 5238 */    MCD::OPC_CheckPredicate, 3, 223, 10, 0, // Skip to: 8026
/* 5243 */    MCD::OPC_Decode, 149, 3, 34, // Opcode: FPADD32
/* 5247 */    MCD::OPC_FilterValue, 83, 9, 0, 0, // Skip to: 5261
/* 5252 */    MCD::OPC_CheckPredicate, 3, 209, 10, 0, // Skip to: 8026
/* 5257 */    MCD::OPC_Decode, 150, 3, 34, // Opcode: FPADD32S
/* 5261 */    MCD::OPC_FilterValue, 84, 9, 0, 0, // Skip to: 5275
/* 5266 */    MCD::OPC_CheckPredicate, 3, 195, 10, 0, // Skip to: 8026
/* 5271 */    MCD::OPC_Decode, 153, 3, 34, // Opcode: FPSUB16
/* 5275 */    MCD::OPC_FilterValue, 85, 9, 0, 0, // Skip to: 5289
/* 5280 */    MCD::OPC_CheckPredicate, 3, 181, 10, 0, // Skip to: 8026
/* 5285 */    MCD::OPC_Decode, 154, 3, 34, // Opcode: FPSUB16S
/* 5289 */    MCD::OPC_FilterValue, 86, 9, 0, 0, // Skip to: 5303
/* 5294 */    MCD::OPC_CheckPredicate, 3, 167, 10, 0, // Skip to: 8026
/* 5299 */    MCD::OPC_Decode, 155, 3, 34, // Opcode: FPSUB32
/* 5303 */    MCD::OPC_FilterValue, 87, 9, 0, 0, // Skip to: 5317
/* 5308 */    MCD::OPC_CheckPredicate, 3, 153, 10, 0, // Skip to: 8026
/* 5313 */    MCD::OPC_Decode, 156, 3, 34, // Opcode: FPSUB32S
/* 5317 */    MCD::OPC_FilterValue, 96, 23, 0, 0, // Skip to: 5345
/* 5322 */    MCD::OPC_CheckPredicate, 3, 139, 10, 0, // Skip to: 8026
/* 5327 */    MCD::OPC_CheckField, 14, 5, 0, 132, 10, 0, // Skip to: 8026
/* 5334 */    MCD::OPC_CheckField, 0, 5, 0, 125, 10, 0, // Skip to: 8026
/* 5341 */    MCD::OPC_Decode, 191, 3, 57, // Opcode: FZERO
/* 5345 */    MCD::OPC_FilterValue, 97, 23, 0, 0, // Skip to: 5373
/* 5350 */    MCD::OPC_CheckPredicate, 3, 111, 10, 0, // Skip to: 8026
/* 5355 */    MCD::OPC_CheckField, 14, 5, 0, 104, 10, 0, // Skip to: 8026
/* 5362 */    MCD::OPC_CheckField, 0, 5, 0, 97, 10, 0, // Skip to: 8026
/* 5369 */    MCD::OPC_Decode, 192, 3, 58, // Opcode: FZEROS
/* 5373 */    MCD::OPC_FilterValue, 98, 9, 0, 0, // Skip to: 5387
/* 5378 */    MCD::OPC_CheckPredicate, 3, 83, 10, 0, // Skip to: 8026
/* 5383 */    MCD::OPC_Decode, 129, 3, 34, // Opcode: FNOR
/* 5387 */    MCD::OPC_FilterValue, 99, 9, 0, 0, // Skip to: 5401
/* 5392 */    MCD::OPC_CheckPredicate, 3, 69, 10, 0, // Skip to: 8026
/* 5397 */    MCD::OPC_Decode, 130, 3, 33, // Opcode: FNORS
/* 5401 */    MCD::OPC_FilterValue, 100, 9, 0, 0, // Skip to: 5415
/* 5406 */    MCD::OPC_CheckPredicate, 3, 55, 10, 0, // Skip to: 8026
/* 5411 */    MCD::OPC_Decode, 166, 2, 34, // Opcode: FANDNOT2
/* 5415 */    MCD::OPC_FilterValue, 101, 9, 0, 0, // Skip to: 5429
/* 5420 */    MCD::OPC_CheckPredicate, 3, 41, 10, 0, // Skip to: 8026
/* 5425 */    MCD::OPC_Decode, 167, 2, 33, // Opcode: FANDNOT2S
/* 5429 */    MCD::OPC_FilterValue, 102, 16, 0, 0, // Skip to: 5450
/* 5434 */    MCD::OPC_CheckPredicate, 3, 27, 10, 0, // Skip to: 8026
/* 5439 */    MCD::OPC_CheckField, 14, 5, 0, 20, 10, 0, // Skip to: 8026
/* 5446 */    MCD::OPC_Decode, 133, 3, 31, // Opcode: FNOT2
/* 5450 */    MCD::OPC_FilterValue, 103, 16, 0, 0, // Skip to: 5471
/* 5455 */    MCD::OPC_CheckPredicate, 3, 6, 10, 0, // Skip to: 8026
/* 5460 */    MCD::OPC_CheckField, 14, 5, 0, 255, 9, 0, // Skip to: 8026
/* 5467 */    MCD::OPC_Decode, 134, 3, 30, // Opcode: FNOT2S
/* 5471 */    MCD::OPC_FilterValue, 104, 9, 0, 0, // Skip to: 5485
/* 5476 */    MCD::OPC_CheckPredicate, 3, 241, 9, 0, // Skip to: 8026
/* 5481 */    MCD::OPC_Decode, 164, 2, 34, // Opcode: FANDNOT1
/* 5485 */    MCD::OPC_FilterValue, 105, 9, 0, 0, // Skip to: 5499
/* 5490 */    MCD::OPC_CheckPredicate, 3, 227, 9, 0, // Skip to: 8026
/* 5495 */    MCD::OPC_Decode, 165, 2, 33, // Opcode: FANDNOT1S
/* 5499 */    MCD::OPC_FilterValue, 106, 16, 0, 0, // Skip to: 5520
/* 5504 */    MCD::OPC_CheckPredicate, 3, 213, 9, 0, // Skip to: 8026
/* 5509 */    MCD::OPC_CheckField, 0, 5, 0, 206, 9, 0, // Skip to: 8026
/* 5516 */    MCD::OPC_Decode, 131, 3, 59, // Opcode: FNOT1
/* 5520 */    MCD::OPC_FilterValue, 107, 16, 0, 0, // Skip to: 5541
/* 5525 */    MCD::OPC_CheckPredicate, 3, 192, 9, 0, // Skip to: 8026
/* 5530 */    MCD::OPC_CheckField, 0, 5, 0, 185, 9, 0, // Skip to: 8026
/* 5537 */    MCD::OPC_Decode, 132, 3, 60, // Opcode: FNOT1S
/* 5541 */    MCD::OPC_FilterValue, 108, 9, 0, 0, // Skip to: 5555
/* 5546 */    MCD::OPC_CheckPredicate, 3, 171, 9, 0, // Skip to: 8026
/* 5551 */    MCD::OPC_Decode, 186, 3, 34, // Opcode: FXOR
/* 5555 */    MCD::OPC_FilterValue, 109, 9, 0, 0, // Skip to: 5569
/* 5560 */    MCD::OPC_CheckPredicate, 3, 157, 9, 0, // Skip to: 8026
/* 5565 */    MCD::OPC_Decode, 187, 3, 33, // Opcode: FXORS
/* 5569 */    MCD::OPC_FilterValue, 110, 9, 0, 0, // Skip to: 5583
/* 5574 */    MCD::OPC_CheckPredicate, 3, 143, 9, 0, // Skip to: 8026
/* 5579 */    MCD::OPC_Decode, 248, 2, 34, // Opcode: FNAND
/* 5583 */    MCD::OPC_FilterValue, 111, 9, 0, 0, // Skip to: 5597
/* 5588 */    MCD::OPC_CheckPredicate, 3, 129, 9, 0, // Skip to: 8026
/* 5593 */    MCD::OPC_Decode, 249, 2, 33, // Opcode: FNANDS
/* 5597 */    MCD::OPC_FilterValue, 112, 9, 0, 0, // Skip to: 5611
/* 5602 */    MCD::OPC_CheckPredicate, 3, 115, 9, 0, // Skip to: 8026
/* 5607 */    MCD::OPC_Decode, 163, 2, 34, // Opcode: FAND
/* 5611 */    MCD::OPC_FilterValue, 113, 9, 0, 0, // Skip to: 5625
/* 5616 */    MCD::OPC_CheckPredicate, 3, 101, 9, 0, // Skip to: 8026
/* 5621 */    MCD::OPC_Decode, 168, 2, 33, // Opcode: FANDS
/* 5625 */    MCD::OPC_FilterValue, 114, 9, 0, 0, // Skip to: 5639
/* 5630 */    MCD::OPC_CheckPredicate, 3, 87, 9, 0, // Skip to: 8026
/* 5635 */    MCD::OPC_Decode, 184, 3, 34, // Opcode: FXNOR
/* 5639 */    MCD::OPC_FilterValue, 115, 9, 0, 0, // Skip to: 5653
/* 5644 */    MCD::OPC_CheckPredicate, 3, 73, 9, 0, // Skip to: 8026
/* 5649 */    MCD::OPC_Decode, 185, 3, 33, // Opcode: FXNORS
/* 5653 */    MCD::OPC_FilterValue, 116, 16, 0, 0, // Skip to: 5674
/* 5658 */    MCD::OPC_CheckPredicate, 3, 59, 9, 0, // Skip to: 8026
/* 5663 */    MCD::OPC_CheckField, 0, 5, 0, 52, 9, 0, // Skip to: 8026
/* 5670 */    MCD::OPC_Decode, 171, 3, 59, // Opcode: FSRC1
/* 5674 */    MCD::OPC_FilterValue, 117, 16, 0, 0, // Skip to: 5695
/* 5679 */    MCD::OPC_CheckPredicate, 3, 38, 9, 0, // Skip to: 8026
/* 5684 */    MCD::OPC_CheckField, 0, 5, 0, 31, 9, 0, // Skip to: 8026
/* 5691 */    MCD::OPC_Decode, 172, 3, 60, // Opcode: FSRC1S
/* 5695 */    MCD::OPC_FilterValue, 118, 9, 0, 0, // Skip to: 5709
/* 5700 */    MCD::OPC_CheckPredicate, 3, 17, 9, 0, // Skip to: 8026
/* 5705 */    MCD::OPC_Decode, 141, 3, 34, // Opcode: FORNOT2
/* 5709 */    MCD::OPC_FilterValue, 119, 9, 0, 0, // Skip to: 5723
/* 5714 */    MCD::OPC_CheckPredicate, 3, 3, 9, 0, // Skip to: 8026
/* 5719 */    MCD::OPC_Decode, 142, 3, 33, // Opcode: FORNOT2S
/* 5723 */    MCD::OPC_FilterValue, 120, 16, 0, 0, // Skip to: 5744
/* 5728 */    MCD::OPC_CheckPredicate, 3, 245, 8, 0, // Skip to: 8026
/* 5733 */    MCD::OPC_CheckField, 14, 5, 0, 238, 8, 0, // Skip to: 8026
/* 5740 */    MCD::OPC_Decode, 173, 3, 31, // Opcode: FSRC2
/* 5744 */    MCD::OPC_FilterValue, 121, 16, 0, 0, // Skip to: 5765
/* 5749 */    MCD::OPC_CheckPredicate, 3, 224, 8, 0, // Skip to: 8026
/* 5754 */    MCD::OPC_CheckField, 14, 5, 0, 217, 8, 0, // Skip to: 8026
/* 5761 */    MCD::OPC_Decode, 174, 3, 30, // Opcode: FSRC2S
/* 5765 */    MCD::OPC_FilterValue, 122, 9, 0, 0, // Skip to: 5779
/* 5770 */    MCD::OPC_CheckPredicate, 3, 203, 8, 0, // Skip to: 8026
/* 5775 */    MCD::OPC_Decode, 139, 3, 34, // Opcode: FORNOT1
/* 5779 */    MCD::OPC_FilterValue, 123, 9, 0, 0, // Skip to: 5793
/* 5784 */    MCD::OPC_CheckPredicate, 3, 189, 8, 0, // Skip to: 8026
/* 5789 */    MCD::OPC_Decode, 140, 3, 33, // Opcode: FORNOT1S
/* 5793 */    MCD::OPC_FilterValue, 124, 9, 0, 0, // Skip to: 5807
/* 5798 */    MCD::OPC_CheckPredicate, 3, 175, 8, 0, // Skip to: 8026
/* 5803 */    MCD::OPC_Decode, 138, 3, 34, // Opcode: FOR
/* 5807 */    MCD::OPC_FilterValue, 125, 9, 0, 0, // Skip to: 5821
/* 5812 */    MCD::OPC_CheckPredicate, 3, 161, 8, 0, // Skip to: 8026
/* 5817 */    MCD::OPC_Decode, 143, 3, 33, // Opcode: FORS
/* 5821 */    MCD::OPC_FilterValue, 126, 23, 0, 0, // Skip to: 5849
/* 5826 */    MCD::OPC_CheckPredicate, 3, 147, 8, 0, // Skip to: 8026
/* 5831 */    MCD::OPC_CheckField, 14, 5, 0, 140, 8, 0, // Skip to: 8026
/* 5838 */    MCD::OPC_CheckField, 0, 5, 0, 133, 8, 0, // Skip to: 8026
/* 5845 */    MCD::OPC_Decode, 136, 3, 57, // Opcode: FONE
/* 5849 */    MCD::OPC_FilterValue, 127, 23, 0, 0, // Skip to: 5877
/* 5854 */    MCD::OPC_CheckPredicate, 3, 119, 8, 0, // Skip to: 8026
/* 5859 */    MCD::OPC_CheckField, 14, 5, 0, 112, 8, 0, // Skip to: 8026
/* 5866 */    MCD::OPC_CheckField, 0, 5, 0, 105, 8, 0, // Skip to: 8026
/* 5873 */    MCD::OPC_Decode, 137, 3, 58, // Opcode: FONES
/* 5877 */    MCD::OPC_FilterValue, 128, 1, 30, 0, 0, // Skip to: 5913
/* 5883 */    MCD::OPC_CheckPredicate, 3, 90, 8, 0, // Skip to: 8026
/* 5888 */    MCD::OPC_CheckField, 25, 5, 0, 83, 8, 0, // Skip to: 8026
/* 5895 */    MCD::OPC_CheckField, 14, 5, 0, 76, 8, 0, // Skip to: 8026
/* 5902 */    MCD::OPC_CheckField, 0, 5, 0, 69, 8, 0, // Skip to: 8026
/* 5909 */    MCD::OPC_Decode, 180, 4, 4, // Opcode: SHUTDOWN
/* 5913 */    MCD::OPC_FilterValue, 129, 1, 30, 0, 0, // Skip to: 5949
/* 5919 */    MCD::OPC_CheckPredicate, 4, 54, 8, 0, // Skip to: 8026
/* 5924 */    MCD::OPC_CheckField, 25, 5, 0, 47, 8, 0, // Skip to: 8026
/* 5931 */    MCD::OPC_CheckField, 14, 5, 0, 40, 8, 0, // Skip to: 8026
/* 5938 */    MCD::OPC_CheckField, 0, 5, 0, 33, 8, 0, // Skip to: 8026
/* 5945 */    MCD::OPC_Decode, 181, 4, 4, // Opcode: SIAM
/* 5949 */    MCD::OPC_FilterValue, 144, 2, 16, 0, 0, // Skip to: 5971
/* 5955 */    MCD::OPC_CheckPredicate, 2, 18, 8, 0, // Skip to: 8026
/* 5960 */    MCD::OPC_CheckField, 14, 5, 0, 11, 8, 0, // Skip to: 8026
/* 5967 */    MCD::OPC_Decode, 243, 3, 61, // Opcode: MOVDTOX
/* 5971 */    MCD::OPC_FilterValue, 145, 2, 16, 0, 0, // Skip to: 5993
/* 5977 */    MCD::OPC_CheckPredicate, 2, 252, 7, 0, // Skip to: 8026
/* 5982 */    MCD::OPC_CheckField, 14, 5, 0, 245, 7, 0, // Skip to: 8026
/* 5989 */    MCD::OPC_Decode, 133, 4, 61, // Opcode: MOVSTOUW
/* 5993 */    MCD::OPC_FilterValue, 147, 2, 16, 0, 0, // Skip to: 6015
/* 5999 */    MCD::OPC_CheckPredicate, 2, 230, 7, 0, // Skip to: 8026
/* 6004 */    MCD::OPC_CheckField, 14, 5, 0, 223, 7, 0, // Skip to: 8026
/* 6011 */    MCD::OPC_Decode, 132, 4, 61, // Opcode: MOVSTOSW
/* 6015 */    MCD::OPC_FilterValue, 149, 2, 9, 0, 0, // Skip to: 6030
/* 6021 */    MCD::OPC_CheckPredicate, 2, 208, 7, 0, // Skip to: 8026
/* 6026 */    MCD::OPC_Decode, 180, 5, 10, // Opcode: XMULX
/* 6030 */    MCD::OPC_FilterValue, 151, 2, 9, 0, 0, // Skip to: 6045
/* 6036 */    MCD::OPC_CheckPredicate, 2, 193, 7, 0, // Skip to: 8026
/* 6041 */    MCD::OPC_Decode, 181, 5, 10, // Opcode: XMULXHI
/* 6045 */    MCD::OPC_FilterValue, 152, 2, 16, 0, 0, // Skip to: 6067
/* 6051 */    MCD::OPC_CheckPredicate, 2, 178, 7, 0, // Skip to: 8026
/* 6056 */    MCD::OPC_CheckField, 14, 5, 0, 171, 7, 0, // Skip to: 8026
/* 6063 */    MCD::OPC_Decode, 137, 4, 62, // Opcode: MOVXTOD
/* 6067 */    MCD::OPC_FilterValue, 153, 2, 16, 0, 0, // Skip to: 6089
/* 6073 */    MCD::OPC_CheckPredicate, 2, 156, 7, 0, // Skip to: 8026
/* 6078 */    MCD::OPC_CheckField, 14, 5, 0, 149, 7, 0, // Skip to: 8026
/* 6085 */    MCD::OPC_Decode, 134, 4, 62, // Opcode: MOVWTOS
/* 6089 */    MCD::OPC_FilterValue, 209, 2, 9, 0, 0, // Skip to: 6104
/* 6095 */    MCD::OPC_CheckPredicate, 2, 134, 7, 0, // Skip to: 8026
/* 6100 */    MCD::OPC_Decode, 200, 2, 52, // Opcode: FLCMPS
/* 6104 */    MCD::OPC_FilterValue, 210, 2, 124, 7, 0, // Skip to: 8026
/* 6110 */    MCD::OPC_CheckPredicate, 2, 119, 7, 0, // Skip to: 8026
/* 6115 */    MCD::OPC_Decode, 199, 2, 52, // Opcode: FLCMPD
/* 6119 */    MCD::OPC_FilterValue, 56, 28, 0, 0, // Skip to: 6152
/* 6124 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6127 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6143
/* 6132 */    MCD::OPC_CheckField, 5, 8, 0, 95, 7, 0, // Skip to: 8026
/* 6139 */    MCD::OPC_Decode, 194, 3, 63, // Opcode: JMPLrr
/* 6143 */    MCD::OPC_FilterValue, 1, 86, 7, 0, // Skip to: 8026
/* 6148 */    MCD::OPC_Decode, 193, 3, 63, // Opcode: JMPLri
/* 6152 */    MCD::OPC_FilterValue, 57, 42, 0, 0, // Skip to: 6199
/* 6157 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6160 */    MCD::OPC_FilterValue, 0, 18, 0, 0, // Skip to: 6183
/* 6165 */    MCD::OPC_CheckField, 25, 5, 0, 62, 7, 0, // Skip to: 8026
/* 6172 */    MCD::OPC_CheckField, 5, 8, 0, 55, 7, 0, // Skip to: 8026
/* 6179 */    MCD::OPC_Decode, 169, 4, 64, // Opcode: RETTrr
/* 6183 */    MCD::OPC_FilterValue, 1, 46, 7, 0, // Skip to: 8026
/* 6188 */    MCD::OPC_CheckField, 25, 5, 0, 39, 7, 0, // Skip to: 8026
/* 6195 */    MCD::OPC_Decode, 168, 4, 64, // Opcode: RETTri
/* 6199 */    MCD::OPC_FilterValue, 58, 119, 0, 0, // Skip to: 6323
/* 6204 */    MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 6207 */    MCD::OPC_FilterValue, 16, 18, 0, 0, // Skip to: 6230
/* 6212 */    MCD::OPC_CheckField, 29, 1, 0, 15, 7, 0, // Skip to: 8026
/* 6219 */    MCD::OPC_CheckField, 5, 3, 0, 8, 7, 0, // Skip to: 8026
/* 6226 */    MCD::OPC_Decode, 144, 5, 65, // Opcode: TXCCrr
/* 6230 */    MCD::OPC_FilterValue, 32, 72, 0, 0, // Skip to: 6307
/* 6235 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 6238 */    MCD::OPC_FilterValue, 1, 18, 0, 0, // Skip to: 6261
/* 6243 */    MCD::OPC_CheckField, 25, 5, 8, 240, 6, 0, // Skip to: 8026
/* 6250 */    MCD::OPC_CheckField, 14, 5, 0, 233, 6, 0, // Skip to: 8026
/* 6257 */    MCD::OPC_Decode, 251, 4, 4, // Opcode: TA1
/* 6261 */    MCD::OPC_FilterValue, 3, 18, 0, 0, // Skip to: 6284
/* 6266 */    MCD::OPC_CheckField, 25, 5, 8, 217, 6, 0, // Skip to: 8026
/* 6273 */    MCD::OPC_CheckField, 14, 5, 0, 210, 6, 0, // Skip to: 8026
/* 6280 */    MCD::OPC_Decode, 252, 4, 4, // Opcode: TA3
/* 6284 */    MCD::OPC_FilterValue, 5, 201, 6, 0, // Skip to: 8026
/* 6289 */    MCD::OPC_CheckField, 25, 5, 8, 194, 6, 0, // Skip to: 8026
/* 6296 */    MCD::OPC_CheckField, 14, 5, 0, 187, 6, 0, // Skip to: 8026
/* 6303 */    MCD::OPC_Decode, 253, 4, 4, // Opcode: TA5
/* 6307 */    MCD::OPC_FilterValue, 48, 178, 6, 0, // Skip to: 8026
/* 6312 */    MCD::OPC_CheckField, 29, 1, 0, 171, 6, 0, // Skip to: 8026
/* 6319 */    MCD::OPC_Decode, 143, 5, 66, // Opcode: TXCCri
/* 6323 */    MCD::OPC_FilterValue, 59, 62, 0, 0, // Skip to: 6390
/* 6328 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6331 */    MCD::OPC_FilterValue, 0, 38, 0, 0, // Skip to: 6374
/* 6336 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 6339 */    MCD::OPC_FilterValue, 0, 146, 6, 0, // Skip to: 8026
/* 6344 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6347 */    MCD::OPC_FilterValue, 0, 138, 6, 0, // Skip to: 8026
/* 6352 */    MCD::OPC_CheckField, 14, 5, 0, 11, 0, 0, // Skip to: 6370
/* 6359 */    MCD::OPC_CheckField, 0, 5, 0, 4, 0, 0, // Skip to: 6370
/* 6366 */    MCD::OPC_Decode, 201, 2, 4, // Opcode: FLUSH
/* 6370 */    MCD::OPC_Decode, 204, 2, 4, // Opcode: FLUSHrr
/* 6374 */    MCD::OPC_FilterValue, 1, 111, 6, 0, // Skip to: 8026
/* 6379 */    MCD::OPC_CheckField, 25, 5, 0, 104, 6, 0, // Skip to: 8026
/* 6386 */    MCD::OPC_Decode, 203, 2, 4, // Opcode: FLUSHri
/* 6390 */    MCD::OPC_FilterValue, 60, 28, 0, 0, // Skip to: 6423
/* 6395 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6398 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6414
/* 6403 */    MCD::OPC_CheckField, 5, 8, 0, 80, 6, 0, // Skip to: 8026
/* 6410 */    MCD::OPC_Decode, 171, 4, 8, // Opcode: SAVErr
/* 6414 */    MCD::OPC_FilterValue, 1, 71, 6, 0, // Skip to: 8026
/* 6419 */    MCD::OPC_Decode, 170, 4, 9, // Opcode: SAVEri
/* 6423 */    MCD::OPC_FilterValue, 61, 28, 0, 0, // Skip to: 6456
/* 6428 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6431 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6447
/* 6436 */    MCD::OPC_CheckField, 5, 8, 0, 47, 6, 0, // Skip to: 8026
/* 6443 */    MCD::OPC_Decode, 165, 4, 8, // Opcode: RESTORErr
/* 6447 */    MCD::OPC_FilterValue, 1, 38, 6, 0, // Skip to: 8026
/* 6452 */    MCD::OPC_Decode, 164, 4, 9, // Opcode: RESTOREri
/* 6456 */    MCD::OPC_FilterValue, 62, 28, 0, 0, // Skip to: 6489
/* 6461 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6464 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6480
/* 6469 */    MCD::OPC_CheckField, 5, 8, 0, 14, 6, 0, // Skip to: 8026
/* 6476 */    MCD::OPC_Decode, 152, 5, 8, // Opcode: UMACrr
/* 6480 */    MCD::OPC_FilterValue, 1, 5, 6, 0, // Skip to: 8026
/* 6485 */    MCD::OPC_Decode, 151, 5, 9, // Opcode: UMACri
/* 6489 */    MCD::OPC_FilterValue, 63, 252, 5, 0, // Skip to: 8026
/* 6494 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6497 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6513
/* 6502 */    MCD::OPC_CheckField, 5, 8, 0, 237, 5, 0, // Skip to: 8026
/* 6509 */    MCD::OPC_Decode, 187, 4, 8, // Opcode: SMACrr
/* 6513 */    MCD::OPC_FilterValue, 1, 228, 5, 0, // Skip to: 8026
/* 6518 */    MCD::OPC_Decode, 186, 4, 9, // Opcode: SMACri
/* 6522 */    MCD::OPC_FilterValue, 3, 219, 5, 0, // Skip to: 8026
/* 6527 */    MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 6530 */    MCD::OPC_FilterValue, 0, 28, 0, 0, // Skip to: 6563
/* 6535 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6538 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6554
/* 6543 */    MCD::OPC_CheckField, 5, 8, 0, 196, 5, 0, // Skip to: 8026
/* 6550 */    MCD::OPC_Decode, 238, 3, 67, // Opcode: LDrr
/* 6554 */    MCD::OPC_FilterValue, 1, 187, 5, 0, // Skip to: 8026
/* 6559 */    MCD::OPC_Decode, 237, 3, 67, // Opcode: LDri
/* 6563 */    MCD::OPC_FilterValue, 1, 28, 0, 0, // Skip to: 6596
/* 6568 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6571 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6587
/* 6576 */    MCD::OPC_CheckField, 5, 8, 0, 163, 5, 0, // Skip to: 8026
/* 6583 */    MCD::OPC_Decode, 229, 3, 67, // Opcode: LDUBrr
/* 6587 */    MCD::OPC_FilterValue, 1, 154, 5, 0, // Skip to: 8026
/* 6592 */    MCD::OPC_Decode, 228, 3, 67, // Opcode: LDUBri
/* 6596 */    MCD::OPC_FilterValue, 2, 28, 0, 0, // Skip to: 6629
/* 6601 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6604 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6620
/* 6609 */    MCD::OPC_CheckField, 5, 8, 0, 130, 5, 0, // Skip to: 8026
/* 6616 */    MCD::OPC_Decode, 232, 3, 67, // Opcode: LDUHrr
/* 6620 */    MCD::OPC_FilterValue, 1, 121, 5, 0, // Skip to: 8026
/* 6625 */    MCD::OPC_Decode, 231, 3, 67, // Opcode: LDUHri
/* 6629 */    MCD::OPC_FilterValue, 3, 28, 0, 0, // Skip to: 6662
/* 6634 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6637 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6653
/* 6642 */    MCD::OPC_CheckField, 5, 8, 0, 97, 5, 0, // Skip to: 8026
/* 6649 */    MCD::OPC_Decode, 207, 3, 68, // Opcode: LDDrr
/* 6653 */    MCD::OPC_FilterValue, 1, 88, 5, 0, // Skip to: 8026
/* 6658 */    MCD::OPC_Decode, 206, 3, 68, // Opcode: LDDri
/* 6662 */    MCD::OPC_FilterValue, 4, 28, 0, 0, // Skip to: 6695
/* 6667 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6670 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6686
/* 6675 */    MCD::OPC_CheckField, 5, 8, 0, 64, 5, 0, // Skip to: 8026
/* 6682 */    MCD::OPC_Decode, 237, 4, 69, // Opcode: STrr
/* 6686 */    MCD::OPC_FilterValue, 1, 55, 5, 0, // Skip to: 8026
/* 6691 */    MCD::OPC_Decode, 236, 4, 69, // Opcode: STri
/* 6695 */    MCD::OPC_FilterValue, 5, 28, 0, 0, // Skip to: 6728
/* 6700 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6703 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6719
/* 6708 */    MCD::OPC_CheckField, 5, 8, 0, 31, 5, 0, // Skip to: 8026
/* 6715 */    MCD::OPC_Decode, 204, 4, 69, // Opcode: STBrr
/* 6719 */    MCD::OPC_FilterValue, 1, 22, 5, 0, // Skip to: 8026
/* 6724 */    MCD::OPC_Decode, 203, 4, 69, // Opcode: STBri
/* 6728 */    MCD::OPC_FilterValue, 6, 28, 0, 0, // Skip to: 6761
/* 6733 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6736 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6752
/* 6741 */    MCD::OPC_CheckField, 5, 8, 0, 254, 4, 0, // Skip to: 8026
/* 6748 */    MCD::OPC_Decode, 228, 4, 69, // Opcode: STHrr
/* 6752 */    MCD::OPC_FilterValue, 1, 245, 4, 0, // Skip to: 8026
/* 6757 */    MCD::OPC_Decode, 227, 4, 69, // Opcode: STHri
/* 6761 */    MCD::OPC_FilterValue, 7, 28, 0, 0, // Skip to: 6794
/* 6766 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6769 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6785
/* 6774 */    MCD::OPC_CheckField, 5, 8, 0, 221, 4, 0, // Skip to: 8026
/* 6781 */    MCD::OPC_Decode, 220, 4, 70, // Opcode: STDrr
/* 6785 */    MCD::OPC_FilterValue, 1, 212, 4, 0, // Skip to: 8026
/* 6790 */    MCD::OPC_Decode, 219, 4, 70, // Opcode: STDri
/* 6794 */    MCD::OPC_FilterValue, 8, 28, 0, 0, // Skip to: 6827
/* 6799 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6802 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6818
/* 6807 */    MCD::OPC_CheckField, 5, 8, 0, 188, 4, 0, // Skip to: 8026
/* 6814 */    MCD::OPC_Decode, 226, 3, 67, // Opcode: LDSWrr
/* 6818 */    MCD::OPC_FilterValue, 1, 179, 4, 0, // Skip to: 8026
/* 6823 */    MCD::OPC_Decode, 225, 3, 67, // Opcode: LDSWri
/* 6827 */    MCD::OPC_FilterValue, 9, 28, 0, 0, // Skip to: 6860
/* 6832 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6835 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6851
/* 6840 */    MCD::OPC_CheckField, 5, 8, 0, 155, 4, 0, // Skip to: 8026
/* 6847 */    MCD::OPC_Decode, 218, 3, 67, // Opcode: LDSBrr
/* 6851 */    MCD::OPC_FilterValue, 1, 146, 4, 0, // Skip to: 8026
/* 6856 */    MCD::OPC_Decode, 217, 3, 67, // Opcode: LDSBri
/* 6860 */    MCD::OPC_FilterValue, 10, 28, 0, 0, // Skip to: 6893
/* 6865 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6868 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6884
/* 6873 */    MCD::OPC_CheckField, 5, 8, 0, 122, 4, 0, // Skip to: 8026
/* 6880 */    MCD::OPC_Decode, 221, 3, 67, // Opcode: LDSHrr
/* 6884 */    MCD::OPC_FilterValue, 1, 113, 4, 0, // Skip to: 8026
/* 6889 */    MCD::OPC_Decode, 220, 3, 67, // Opcode: LDSHri
/* 6893 */    MCD::OPC_FilterValue, 11, 28, 0, 0, // Skip to: 6926
/* 6898 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6901 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6917
/* 6906 */    MCD::OPC_CheckField, 5, 8, 0, 89, 4, 0, // Skip to: 8026
/* 6913 */    MCD::OPC_Decode, 236, 3, 67, // Opcode: LDXrr
/* 6917 */    MCD::OPC_FilterValue, 1, 80, 4, 0, // Skip to: 8026
/* 6922 */    MCD::OPC_Decode, 235, 3, 67, // Opcode: LDXri
/* 6926 */    MCD::OPC_FilterValue, 13, 28, 0, 0, // Skip to: 6959
/* 6931 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6934 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6950
/* 6939 */    MCD::OPC_CheckField, 5, 8, 0, 56, 4, 0, // Skip to: 8026
/* 6946 */    MCD::OPC_Decode, 224, 3, 4, // Opcode: LDSTUBrr
/* 6950 */    MCD::OPC_FilterValue, 1, 47, 4, 0, // Skip to: 8026
/* 6955 */    MCD::OPC_Decode, 223, 3, 4, // Opcode: LDSTUBri
/* 6959 */    MCD::OPC_FilterValue, 14, 28, 0, 0, // Skip to: 6992
/* 6964 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6967 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6983
/* 6972 */    MCD::OPC_CheckField, 5, 8, 0, 23, 4, 0, // Skip to: 8026
/* 6979 */    MCD::OPC_Decode, 235, 4, 69, // Opcode: STXrr
/* 6983 */    MCD::OPC_FilterValue, 1, 14, 4, 0, // Skip to: 8026
/* 6988 */    MCD::OPC_Decode, 234, 4, 69, // Opcode: STXri
/* 6992 */    MCD::OPC_FilterValue, 15, 28, 0, 0, // Skip to: 7025
/* 6997 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7000 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7016
/* 7005 */    MCD::OPC_CheckField, 5, 8, 0, 246, 3, 0, // Skip to: 8026
/* 7012 */    MCD::OPC_Decode, 250, 4, 71, // Opcode: SWAPrr
/* 7016 */    MCD::OPC_FilterValue, 1, 237, 3, 0, // Skip to: 8026
/* 7021 */    MCD::OPC_Decode, 249, 4, 71, // Opcode: SWAPri
/* 7025 */    MCD::OPC_FilterValue, 16, 11, 0, 0, // Skip to: 7041
/* 7030 */    MCD::OPC_CheckField, 13, 1, 0, 221, 3, 0, // Skip to: 8026
/* 7037 */    MCD::OPC_Decode, 195, 3, 67, // Opcode: LDArr
/* 7041 */    MCD::OPC_FilterValue, 17, 11, 0, 0, // Skip to: 7057
/* 7046 */    MCD::OPC_CheckField, 13, 1, 0, 205, 3, 0, // Skip to: 8026
/* 7053 */    MCD::OPC_Decode, 227, 3, 67, // Opcode: LDUBArr
/* 7057 */    MCD::OPC_FilterValue, 18, 11, 0, 0, // Skip to: 7073
/* 7062 */    MCD::OPC_CheckField, 13, 1, 0, 189, 3, 0, // Skip to: 8026
/* 7069 */    MCD::OPC_Decode, 230, 3, 67, // Opcode: LDUHArr
/* 7073 */    MCD::OPC_FilterValue, 19, 11, 0, 0, // Skip to: 7089
/* 7078 */    MCD::OPC_CheckField, 13, 1, 0, 173, 3, 0, // Skip to: 8026
/* 7085 */    MCD::OPC_Decode, 200, 3, 68, // Opcode: LDDArr
/* 7089 */    MCD::OPC_FilterValue, 20, 11, 0, 0, // Skip to: 7105
/* 7094 */    MCD::OPC_CheckField, 13, 1, 0, 157, 3, 0, // Skip to: 8026
/* 7101 */    MCD::OPC_Decode, 200, 4, 69, // Opcode: STArr
/* 7105 */    MCD::OPC_FilterValue, 21, 11, 0, 0, // Skip to: 7121
/* 7110 */    MCD::OPC_CheckField, 13, 1, 0, 141, 3, 0, // Skip to: 8026
/* 7117 */    MCD::OPC_Decode, 202, 4, 69, // Opcode: STBArr
/* 7121 */    MCD::OPC_FilterValue, 22, 11, 0, 0, // Skip to: 7137
/* 7126 */    MCD::OPC_CheckField, 13, 1, 0, 125, 3, 0, // Skip to: 8026
/* 7133 */    MCD::OPC_Decode, 226, 4, 69, // Opcode: STHArr
/* 7137 */    MCD::OPC_FilterValue, 23, 11, 0, 0, // Skip to: 7153
/* 7142 */    MCD::OPC_CheckField, 13, 1, 0, 109, 3, 0, // Skip to: 8026
/* 7149 */    MCD::OPC_Decode, 209, 4, 70, // Opcode: STDArr
/* 7153 */    MCD::OPC_FilterValue, 25, 11, 0, 0, // Skip to: 7169
/* 7158 */    MCD::OPC_CheckField, 13, 1, 0, 93, 3, 0, // Skip to: 8026
/* 7165 */    MCD::OPC_Decode, 216, 3, 67, // Opcode: LDSBArr
/* 7169 */    MCD::OPC_FilterValue, 26, 11, 0, 0, // Skip to: 7185
/* 7174 */    MCD::OPC_CheckField, 13, 1, 0, 77, 3, 0, // Skip to: 8026
/* 7181 */    MCD::OPC_Decode, 219, 3, 67, // Opcode: LDSHArr
/* 7185 */    MCD::OPC_FilterValue, 29, 11, 0, 0, // Skip to: 7201
/* 7190 */    MCD::OPC_CheckField, 13, 1, 0, 61, 3, 0, // Skip to: 8026
/* 7197 */    MCD::OPC_Decode, 222, 3, 72, // Opcode: LDSTUBArr
/* 7201 */    MCD::OPC_FilterValue, 31, 11, 0, 0, // Skip to: 7217
/* 7206 */    MCD::OPC_CheckField, 13, 1, 0, 45, 3, 0, // Skip to: 8026
/* 7213 */    MCD::OPC_Decode, 248, 4, 71, // Opcode: SWAPArr
/* 7217 */    MCD::OPC_FilterValue, 32, 28, 0, 0, // Skip to: 7250
/* 7222 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7225 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7241
/* 7230 */    MCD::OPC_CheckField, 5, 8, 0, 21, 3, 0, // Skip to: 8026
/* 7237 */    MCD::OPC_Decode, 212, 3, 73, // Opcode: LDFrr
/* 7241 */    MCD::OPC_FilterValue, 1, 12, 3, 0, // Skip to: 8026
/* 7246 */    MCD::OPC_Decode, 211, 3, 73, // Opcode: LDFri
/* 7250 */    MCD::OPC_FilterValue, 33, 79, 0, 0, // Skip to: 7334
/* 7255 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7258 */    MCD::OPC_FilterValue, 0, 40, 0, 0, // Skip to: 7303
/* 7263 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 7266 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7282
/* 7271 */    MCD::OPC_CheckField, 5, 8, 0, 236, 2, 0, // Skip to: 8026
/* 7278 */    MCD::OPC_Decode, 210, 3, 73, // Opcode: LDFSRrr
/* 7282 */    MCD::OPC_FilterValue, 1, 227, 2, 0, // Skip to: 8026
/* 7287 */    MCD::OPC_CheckPredicate, 0, 222, 2, 0, // Skip to: 8026
/* 7292 */    MCD::OPC_CheckField, 5, 8, 0, 215, 2, 0, // Skip to: 8026
/* 7299 */    MCD::OPC_Decode, 234, 3, 73, // Opcode: LDXFSRrr
/* 7303 */    MCD::OPC_FilterValue, 1, 206, 2, 0, // Skip to: 8026
/* 7308 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 7311 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 7320
/* 7316 */    MCD::OPC_Decode, 209, 3, 73, // Opcode: LDFSRri
/* 7320 */    MCD::OPC_FilterValue, 1, 189, 2, 0, // Skip to: 8026
/* 7325 */    MCD::OPC_CheckPredicate, 0, 184, 2, 0, // Skip to: 8026
/* 7330 */    MCD::OPC_Decode, 233, 3, 73, // Opcode: LDXFSRri
/* 7334 */    MCD::OPC_FilterValue, 34, 38, 0, 0, // Skip to: 7377
/* 7339 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7342 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 7363
/* 7347 */    MCD::OPC_CheckPredicate, 0, 162, 2, 0, // Skip to: 8026
/* 7352 */    MCD::OPC_CheckField, 5, 8, 0, 155, 2, 0, // Skip to: 8026
/* 7359 */    MCD::OPC_Decode, 215, 3, 74, // Opcode: LDQFrr
/* 7363 */    MCD::OPC_FilterValue, 1, 146, 2, 0, // Skip to: 8026
/* 7368 */    MCD::OPC_CheckPredicate, 0, 141, 2, 0, // Skip to: 8026
/* 7373 */    MCD::OPC_Decode, 214, 3, 74, // Opcode: LDQFri
/* 7377 */    MCD::OPC_FilterValue, 35, 28, 0, 0, // Skip to: 7410
/* 7382 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7385 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7401
/* 7390 */    MCD::OPC_CheckField, 5, 8, 0, 117, 2, 0, // Skip to: 8026
/* 7397 */    MCD::OPC_Decode, 205, 3, 75, // Opcode: LDDFrr
/* 7401 */    MCD::OPC_FilterValue, 1, 108, 2, 0, // Skip to: 8026
/* 7406 */    MCD::OPC_Decode, 204, 3, 75, // Opcode: LDDFri
/* 7410 */    MCD::OPC_FilterValue, 36, 28, 0, 0, // Skip to: 7443
/* 7415 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7418 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7434
/* 7423 */    MCD::OPC_CheckField, 5, 8, 0, 84, 2, 0, // Skip to: 8026
/* 7430 */    MCD::OPC_Decode, 225, 4, 76, // Opcode: STFrr
/* 7434 */    MCD::OPC_FilterValue, 1, 75, 2, 0, // Skip to: 8026
/* 7439 */    MCD::OPC_Decode, 224, 4, 76, // Opcode: STFri
/* 7443 */    MCD::OPC_FilterValue, 37, 79, 0, 0, // Skip to: 7527
/* 7448 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7451 */    MCD::OPC_FilterValue, 0, 40, 0, 0, // Skip to: 7496
/* 7456 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 7459 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7475
/* 7464 */    MCD::OPC_CheckField, 5, 8, 0, 43, 2, 0, // Skip to: 8026
/* 7471 */    MCD::OPC_Decode, 223, 4, 76, // Opcode: STFSRrr
/* 7475 */    MCD::OPC_FilterValue, 1, 34, 2, 0, // Skip to: 8026
/* 7480 */    MCD::OPC_CheckPredicate, 0, 29, 2, 0, // Skip to: 8026
/* 7485 */    MCD::OPC_CheckField, 5, 8, 0, 22, 2, 0, // Skip to: 8026
/* 7492 */    MCD::OPC_Decode, 233, 4, 76, // Opcode: STXFSRrr
/* 7496 */    MCD::OPC_FilterValue, 1, 13, 2, 0, // Skip to: 8026
/* 7501 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 7504 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 7513
/* 7509 */    MCD::OPC_Decode, 222, 4, 76, // Opcode: STFSRri
/* 7513 */    MCD::OPC_FilterValue, 1, 252, 1, 0, // Skip to: 8026
/* 7518 */    MCD::OPC_CheckPredicate, 0, 247, 1, 0, // Skip to: 8026
/* 7523 */    MCD::OPC_Decode, 232, 4, 76, // Opcode: STXFSRri
/* 7527 */    MCD::OPC_FilterValue, 38, 61, 0, 0, // Skip to: 7593
/* 7532 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7535 */    MCD::OPC_FilterValue, 0, 28, 0, 0, // Skip to: 7568
/* 7540 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 7543 */    MCD::OPC_FilterValue, 0, 222, 1, 0, // Skip to: 8026
/* 7548 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 7559
/* 7555 */    MCD::OPC_Decode, 216, 4, 76, // Opcode: STDFQrr
/* 7559 */    MCD::OPC_CheckPredicate, 0, 206, 1, 0, // Skip to: 8026
/* 7564 */    MCD::OPC_Decode, 231, 4, 77, // Opcode: STQFrr
/* 7568 */    MCD::OPC_FilterValue, 1, 197, 1, 0, // Skip to: 8026
/* 7573 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 7584
/* 7580 */    MCD::OPC_Decode, 215, 4, 76, // Opcode: STDFQri
/* 7584 */    MCD::OPC_CheckPredicate, 0, 181, 1, 0, // Skip to: 8026
/* 7589 */    MCD::OPC_Decode, 230, 4, 77, // Opcode: STQFri
/* 7593 */    MCD::OPC_FilterValue, 39, 28, 0, 0, // Skip to: 7626
/* 7598 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7601 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7617
/* 7606 */    MCD::OPC_CheckField, 5, 8, 0, 157, 1, 0, // Skip to: 8026
/* 7613 */    MCD::OPC_Decode, 218, 4, 78, // Opcode: STDFrr
/* 7617 */    MCD::OPC_FilterValue, 1, 148, 1, 0, // Skip to: 8026
/* 7622 */    MCD::OPC_Decode, 217, 4, 78, // Opcode: STDFri
/* 7626 */    MCD::OPC_FilterValue, 48, 37, 0, 0, // Skip to: 7668
/* 7631 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7634 */    MCD::OPC_FilterValue, 0, 20, 0, 0, // Skip to: 7659
/* 7639 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, 0, // Skip to: 7650
/* 7646 */    MCD::OPC_Decode, 199, 3, 79, // Opcode: LDCrr
/* 7650 */    MCD::OPC_CheckPredicate, 0, 115, 1, 0, // Skip to: 8026
/* 7655 */    MCD::OPC_Decode, 208, 3, 73, // Opcode: LDFArr
/* 7659 */    MCD::OPC_FilterValue, 1, 106, 1, 0, // Skip to: 8026
/* 7664 */    MCD::OPC_Decode, 198, 3, 79, // Opcode: LDCri
/* 7668 */    MCD::OPC_FilterValue, 49, 42, 0, 0, // Skip to: 7715
/* 7673 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7676 */    MCD::OPC_FilterValue, 0, 18, 0, 0, // Skip to: 7699
/* 7681 */    MCD::OPC_CheckField, 25, 5, 0, 82, 1, 0, // Skip to: 8026
/* 7688 */    MCD::OPC_CheckField, 5, 8, 0, 75, 1, 0, // Skip to: 8026
/* 7695 */    MCD::OPC_Decode, 197, 3, 79, // Opcode: LDCSRrr
/* 7699 */    MCD::OPC_FilterValue, 1, 66, 1, 0, // Skip to: 8026
/* 7704 */    MCD::OPC_CheckField, 25, 5, 0, 59, 1, 0, // Skip to: 8026
/* 7711 */    MCD::OPC_Decode, 196, 3, 79, // Opcode: LDCSRri
/* 7715 */    MCD::OPC_FilterValue, 50, 16, 0, 0, // Skip to: 7736
/* 7720 */    MCD::OPC_CheckPredicate, 0, 45, 1, 0, // Skip to: 8026
/* 7725 */    MCD::OPC_CheckField, 13, 1, 0, 38, 1, 0, // Skip to: 8026
/* 7732 */    MCD::OPC_Decode, 213, 3, 74, // Opcode: LDQFArr
/* 7736 */    MCD::OPC_FilterValue, 51, 37, 0, 0, // Skip to: 7778
/* 7741 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7744 */    MCD::OPC_FilterValue, 0, 20, 0, 0, // Skip to: 7769
/* 7749 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, 0, // Skip to: 7760
/* 7756 */    MCD::OPC_Decode, 202, 3, 80, // Opcode: LDDCrr
/* 7760 */    MCD::OPC_CheckPredicate, 0, 5, 1, 0, // Skip to: 8026
/* 7765 */    MCD::OPC_Decode, 203, 3, 75, // Opcode: LDDFArr
/* 7769 */    MCD::OPC_FilterValue, 1, 252, 0, 0, // Skip to: 8026
/* 7774 */    MCD::OPC_Decode, 201, 3, 80, // Opcode: LDDCri
/* 7778 */    MCD::OPC_FilterValue, 52, 37, 0, 0, // Skip to: 7820
/* 7783 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7786 */    MCD::OPC_FilterValue, 0, 20, 0, 0, // Skip to: 7811
/* 7791 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, 0, // Skip to: 7802
/* 7798 */    MCD::OPC_Decode, 208, 4, 81, // Opcode: STCrr
/* 7802 */    MCD::OPC_CheckPredicate, 0, 219, 0, 0, // Skip to: 8026
/* 7807 */    MCD::OPC_Decode, 221, 4, 76, // Opcode: STFArr
/* 7811 */    MCD::OPC_FilterValue, 1, 210, 0, 0, // Skip to: 8026
/* 7816 */    MCD::OPC_Decode, 207, 4, 81, // Opcode: STCri
/* 7820 */    MCD::OPC_FilterValue, 53, 42, 0, 0, // Skip to: 7867
/* 7825 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7828 */    MCD::OPC_FilterValue, 0, 18, 0, 0, // Skip to: 7851
/* 7833 */    MCD::OPC_CheckField, 25, 5, 0, 186, 0, 0, // Skip to: 8026
/* 7840 */    MCD::OPC_CheckField, 5, 8, 0, 179, 0, 0, // Skip to: 8026
/* 7847 */    MCD::OPC_Decode, 206, 4, 81, // Opcode: STCSRrr
/* 7851 */    MCD::OPC_FilterValue, 1, 170, 0, 0, // Skip to: 8026
/* 7856 */    MCD::OPC_CheckField, 25, 5, 0, 163, 0, 0, // Skip to: 8026
/* 7863 */    MCD::OPC_Decode, 205, 4, 81, // Opcode: STCSRri
/* 7867 */    MCD::OPC_FilterValue, 54, 51, 0, 0, // Skip to: 7923
/* 7872 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7875 */    MCD::OPC_FilterValue, 0, 27, 0, 0, // Skip to: 7907
/* 7880 */    MCD::OPC_CheckField, 25, 5, 0, 11, 0, 0, // Skip to: 7898
/* 7887 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, 0, // Skip to: 7898
/* 7894 */    MCD::OPC_Decode, 211, 4, 81, // Opcode: STDCQrr
/* 7898 */    MCD::OPC_CheckPredicate, 0, 123, 0, 0, // Skip to: 8026
/* 7903 */    MCD::OPC_Decode, 229, 4, 77, // Opcode: STQFArr
/* 7907 */    MCD::OPC_FilterValue, 1, 114, 0, 0, // Skip to: 8026
/* 7912 */    MCD::OPC_CheckField, 25, 5, 0, 107, 0, 0, // Skip to: 8026
/* 7919 */    MCD::OPC_Decode, 210, 4, 81, // Opcode: STDCQri
/* 7923 */    MCD::OPC_FilterValue, 55, 37, 0, 0, // Skip to: 7965
/* 7928 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7931 */    MCD::OPC_FilterValue, 0, 20, 0, 0, // Skip to: 7956
/* 7936 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, 0, // Skip to: 7947
/* 7943 */    MCD::OPC_Decode, 213, 4, 82, // Opcode: STDCrr
/* 7947 */    MCD::OPC_CheckPredicate, 0, 74, 0, 0, // Skip to: 8026
/* 7952 */    MCD::OPC_Decode, 214, 4, 78, // Opcode: STDFArr
/* 7956 */    MCD::OPC_FilterValue, 1, 65, 0, 0, // Skip to: 8026
/* 7961 */    MCD::OPC_Decode, 212, 4, 82, // Opcode: STDCri
/* 7965 */    MCD::OPC_FilterValue, 60, 39, 0, 0, // Skip to: 8009
/* 7970 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7973 */    MCD::OPC_FilterValue, 0, 48, 0, 0, // Skip to: 8026
/* 7978 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 7981 */    MCD::OPC_FilterValue, 10, 4, 0, 0, // Skip to: 7990
/* 7986 */    MCD::OPC_Decode, 133, 2, 83, // Opcode: CASAasi10
/* 7990 */    MCD::OPC_FilterValue, 128, 1, 9, 0, 0, // Skip to: 8005
/* 7996 */    MCD::OPC_CheckPredicate, 0, 4, 0, 0, // Skip to: 8005
/* 8001 */    MCD::OPC_Decode, 136, 2, 83, // Opcode: CASrr
/* 8005 */    MCD::OPC_Decode, 134, 2, 84, // Opcode: CASArr
/* 8009 */    MCD::OPC_FilterValue, 62, 12, 0, 0, // Skip to: 8026
/* 8014 */    MCD::OPC_CheckField, 5, 9, 128, 1, 4, 0, 0, // Skip to: 8026
/* 8022 */    MCD::OPC_Decode, 135, 2, 85, // Opcode: CASXrr
/* 8026 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableSparcV832[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 3 */       MCD::OPC_FilterValue, 0, 25, 0, 0, // Skip to: 33
/* 8 */       MCD::OPC_CheckField, 29, 3, 4, 41, 0, 0, // Skip to: 56
/* 15 */      MCD::OPC_CheckField, 19, 6, 58, 34, 0, 0, // Skip to: 56
/* 22 */      MCD::OPC_CheckField, 5, 3, 0, 27, 0, 0, // Skip to: 56
/* 29 */      MCD::OPC_Decode, 138, 5, 86, // Opcode: TRAPrr
/* 33 */      MCD::OPC_FilterValue, 32, 18, 0, 0, // Skip to: 56
/* 38 */      MCD::OPC_CheckField, 29, 3, 4, 11, 0, 0, // Skip to: 56
/* 45 */      MCD::OPC_CheckField, 19, 6, 58, 4, 0, 0, // Skip to: 56
/* 52 */      MCD::OPC_Decode, 137, 5, 86, // Opcode: TRAPri
/* 56 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableSparcV932[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 3 */       MCD::OPC_FilterValue, 0, 30, 0, 0, // Skip to: 38
/* 8 */       MCD::OPC_CheckPredicate, 0, 53, 0, 0, // Skip to: 66
/* 13 */      MCD::OPC_CheckField, 29, 3, 4, 46, 0, 0, // Skip to: 66
/* 20 */      MCD::OPC_CheckField, 19, 6, 58, 39, 0, 0, // Skip to: 66
/* 27 */      MCD::OPC_CheckField, 5, 3, 0, 32, 0, 0, // Skip to: 66
/* 34 */      MCD::OPC_Decode, 131, 5, 86, // Opcode: TICCrr
/* 38 */      MCD::OPC_FilterValue, 32, 23, 0, 0, // Skip to: 66
/* 43 */      MCD::OPC_CheckPredicate, 0, 18, 0, 0, // Skip to: 66
/* 48 */      MCD::OPC_CheckField, 29, 3, 4, 11, 0, 0, // Skip to: 66
/* 55 */      MCD::OPC_CheckField, 19, 6, 58, 4, 0, 0, // Skip to: 66
/* 62 */      MCD::OPC_Decode, 130, 5, 86, // Opcode: TICCri
/* 66 */      MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return (Bits[Sparc::FeatureV9]);
  case 1:
    return (Bits[Sparc::FeaturePWRPSR]);
  case 2:
    return (Bits[Sparc::FeatureVIS3]);
  case 3:
    return (Bits[Sparc::FeatureVIS]);
  case 4:
    return (Bits[Sparc::FeatureVIS2]);
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder, bool &DecodeComplete) {
  DecodeComplete = true;
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 14) << 0;
    tmp |= fieldFromInstruction(insn, 20, 2) << 14;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 4:
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 20, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 0, 30);
    if (DecodeCall(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodePRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodePRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodePRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 63:
    if (DecodeJMPL(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 64:
    if (DecodeReturn(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 67:
    if (DecodeLoadInt(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 68:
    if (DecodeLoadIntPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 69:
    if (DecodeStoreInt(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 70:
    if (DecodeStoreIntPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 71:
    if (DecodeSWAP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 73:
    if (DecodeLoadFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 74:
    if (DecodeLoadQFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 75:
    if (DecodeLoadDFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 76:
    if (DecodeStoreFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 77:
    if (DecodeStoreQFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 78:
    if (DecodeStoreDFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 79:
    if (DecodeLoadCP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 80:
    if (DecodeLoadCPPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 81:
    if (DecodeStoreCP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 82:
    if (DecodeStoreCPPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 86:
    if (DecodeTRAP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
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

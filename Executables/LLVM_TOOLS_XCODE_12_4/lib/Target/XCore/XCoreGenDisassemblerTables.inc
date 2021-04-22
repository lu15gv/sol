/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * XCore Disassembler                                                      *|
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

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 0, 129, 0, 0, // Skip to: 137
/* 8 */       MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 11 */      MCD::OPC_FilterValue, 236, 15, 4, 0, 0, // Skip to: 21
/* 17 */      MCD::OPC_Decode, 140, 3, 0, // Opcode: WAITEU_0R
/* 21 */      MCD::OPC_FilterValue, 237, 15, 4, 0, 0, // Skip to: 31
/* 27 */      MCD::OPC_Decode, 219, 1, 0, // Opcode: CLRE_0R
/* 31 */      MCD::OPC_FilterValue, 238, 15, 4, 0, 0, // Skip to: 41
/* 37 */      MCD::OPC_Decode, 244, 2, 0, // Opcode: SSYNC_0r
/* 41 */      MCD::OPC_FilterValue, 239, 15, 4, 0, 0, // Skip to: 51
/* 47 */      MCD::OPC_Decode, 251, 1, 0, // Opcode: FREET_0R
/* 51 */      MCD::OPC_FilterValue, 252, 15, 4, 0, 0, // Skip to: 61
/* 57 */      MCD::OPC_Decode, 228, 1, 0, // Opcode: DCALL_0R
/* 61 */      MCD::OPC_FilterValue, 253, 15, 4, 0, 0, // Skip to: 71
/* 67 */      MCD::OPC_Decode, 154, 2, 0, // Opcode: KRET_0R
/* 71 */      MCD::OPC_FilterValue, 254, 15, 4, 0, 0, // Skip to: 81
/* 77 */      MCD::OPC_Decode, 234, 1, 0, // Opcode: DRET_0R
/* 81 */      MCD::OPC_FilterValue, 255, 15, 4, 0, 0, // Skip to: 91
/* 87 */      MCD::OPC_Decode, 225, 2, 0, // Opcode: SETKEP_0R
/* 91 */      MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 94 */      MCD::OPC_FilterValue, 126, 4, 0, 0, // Skip to: 103
/* 99 */      MCD::OPC_Decode, 237, 1, 1, // Opcode: EDU_1r
/* 103 */     MCD::OPC_FilterValue, 127, 4, 0, 0, // Skip to: 112
/* 108 */     MCD::OPC_Decode, 240, 1, 1, // Opcode: EEU_1r
/* 112 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 115 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 124
/* 120 */     MCD::OPC_Decode, 141, 2, 2, // Opcode: INITPC_2r
/* 124 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 133
/* 129 */     MCD::OPC_Decode, 135, 2, 2, // Opcode: GETST_2r
/* 133 */     MCD::OPC_Decode, 255, 2, 3, // Opcode: STW_2rus
/* 137 */     MCD::OPC_FilterValue, 1, 129, 0, 0, // Skip to: 271
/* 142 */     MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 145 */     MCD::OPC_FilterValue, 236, 15, 4, 0, 0, // Skip to: 155
/* 151 */     MCD::OPC_Decode, 180, 2, 0, // Opcode: LDSPC_0R
/* 155 */     MCD::OPC_FilterValue, 237, 15, 4, 0, 0, // Skip to: 165
/* 161 */     MCD::OPC_Decode, 249, 2, 0, // Opcode: STSPC_0R
/* 165 */     MCD::OPC_FilterValue, 238, 15, 4, 0, 0, // Skip to: 175
/* 171 */     MCD::OPC_Decode, 181, 2, 0, // Opcode: LDSSR_0R
/* 175 */     MCD::OPC_FilterValue, 239, 15, 4, 0, 0, // Skip to: 185
/* 181 */     MCD::OPC_Decode, 250, 2, 0, // Opcode: STSSR_0R
/* 185 */     MCD::OPC_FilterValue, 252, 15, 4, 0, 0, // Skip to: 195
/* 191 */     MCD::OPC_Decode, 248, 2, 0, // Opcode: STSED_0R
/* 195 */     MCD::OPC_FilterValue, 253, 15, 4, 0, 0, // Skip to: 205
/* 201 */     MCD::OPC_Decode, 247, 2, 0, // Opcode: STET_0R
/* 205 */     MCD::OPC_FilterValue, 254, 15, 4, 0, 0, // Skip to: 215
/* 211 */     MCD::OPC_Decode, 253, 1, 0, // Opcode: GETED_0R
/* 215 */     MCD::OPC_FilterValue, 255, 15, 4, 0, 0, // Skip to: 225
/* 221 */     MCD::OPC_Decode, 254, 1, 0, // Opcode: GETET_0R
/* 225 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 228 */     MCD::OPC_FilterValue, 126, 4, 0, 0, // Skip to: 237
/* 233 */     MCD::OPC_Decode, 139, 3, 1, // Opcode: WAITET_1R
/* 237 */     MCD::OPC_FilterValue, 127, 4, 0, 0, // Skip to: 246
/* 242 */     MCD::OPC_Decode, 138, 3, 1, // Opcode: WAITEF_1R
/* 246 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 249 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 258
/* 254 */     MCD::OPC_Decode, 139, 2, 2, // Opcode: INITDP_2r
/* 258 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 267
/* 263 */     MCD::OPC_Decode, 210, 2, 4, // Opcode: OUTT_2r
/* 267 */     MCD::OPC_Decode, 190, 2, 3, // Opcode: LDW_2rus
/* 271 */     MCD::OPC_FilterValue, 2, 119, 0, 0, // Skip to: 395
/* 276 */     MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 279 */     MCD::OPC_FilterValue, 236, 15, 4, 0, 0, // Skip to: 289
/* 285 */     MCD::OPC_Decode, 229, 1, 0, // Opcode: DENTSP_0R
/* 289 */     MCD::OPC_FilterValue, 237, 15, 4, 0, 0, // Skip to: 299
/* 295 */     MCD::OPC_Decode, 233, 1, 0, // Opcode: DRESTSP_0R
/* 299 */     MCD::OPC_FilterValue, 238, 15, 4, 0, 0, // Skip to: 309
/* 305 */     MCD::OPC_Decode, 255, 1, 0, // Opcode: GETID_0R
/* 309 */     MCD::OPC_FilterValue, 239, 15, 4, 0, 0, // Skip to: 319
/* 315 */     MCD::OPC_Decode, 128, 2, 0, // Opcode: GETKEP_0R
/* 319 */     MCD::OPC_FilterValue, 252, 15, 4, 0, 0, // Skip to: 329
/* 325 */     MCD::OPC_Decode, 129, 2, 0, // Opcode: GETKSP_0R
/* 329 */     MCD::OPC_FilterValue, 253, 15, 4, 0, 0, // Skip to: 339
/* 335 */     MCD::OPC_Decode, 179, 2, 0, // Opcode: LDSED_0R
/* 339 */     MCD::OPC_FilterValue, 254, 15, 4, 0, 0, // Skip to: 349
/* 345 */     MCD::OPC_Decode, 177, 2, 0, // Opcode: LDET_0R
/* 349 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 352 */     MCD::OPC_FilterValue, 126, 4, 0, 0, // Skip to: 361
/* 357 */     MCD::OPC_Decode, 250, 1, 1, // Opcode: FREER_1r
/* 361 */     MCD::OPC_FilterValue, 127, 4, 0, 0, // Skip to: 370
/* 366 */     MCD::OPC_Decode, 198, 2, 1, // Opcode: MJOIN_1r
/* 370 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 373 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 382
/* 378 */     MCD::OPC_Decode, 142, 2, 2, // Opcode: INITSP_2r
/* 382 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 391
/* 387 */     MCD::OPC_Decode, 223, 2, 4, // Opcode: SETD_2r
/* 391 */     MCD::OPC_Decode, 187, 1, 5, // Opcode: ADD_3r
/* 395 */     MCD::OPC_FilterValue, 3, 46, 0, 0, // Skip to: 446
/* 400 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 403 */     MCD::OPC_FilterValue, 126, 4, 0, 0, // Skip to: 412
/* 408 */     MCD::OPC_Decode, 137, 3, 1, // Opcode: TSTART_1R
/* 412 */     MCD::OPC_FilterValue, 127, 4, 0, 0, // Skip to: 421
/* 417 */     MCD::OPC_Decode, 201, 2, 1, // Opcode: MSYNC_1r
/* 421 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 424 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 433
/* 429 */     MCD::OPC_Decode, 138, 2, 2, // Opcode: INITCP_2r
/* 433 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 442
/* 438 */     MCD::OPC_Decode, 135, 3, 6, // Opcode: TSETMR_2r
/* 442 */     MCD::OPC_Decode, 130, 3, 5, // Opcode: SUB_3r
/* 446 */     MCD::OPC_FilterValue, 4, 36, 0, 0, // Skip to: 487
/* 451 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 454 */     MCD::OPC_FilterValue, 126, 4, 0, 0, // Skip to: 463
/* 459 */     MCD::OPC_Decode, 198, 1, 1, // Opcode: BLA_1r
/* 463 */     MCD::OPC_FilterValue, 127, 4, 0, 0, // Skip to: 472
/* 468 */     MCD::OPC_Decode, 192, 1, 1, // Opcode: BAU_1r
/* 472 */     MCD::OPC_CheckField, 4, 1, 1, 4, 0, 0, // Skip to: 483
/* 479 */     MCD::OPC_Decode, 239, 1, 2, // Opcode: EET_2r
/* 483 */     MCD::OPC_Decode, 241, 2, 5, // Opcode: SHL_3r
/* 487 */     MCD::OPC_FilterValue, 5, 46, 0, 0, // Skip to: 538
/* 492 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 495 */     MCD::OPC_FilterValue, 126, 4, 0, 0, // Skip to: 504
/* 500 */     MCD::OPC_Decode, 215, 1, 1, // Opcode: BRU_1r
/* 504 */     MCD::OPC_FilterValue, 127, 4, 0, 0, // Skip to: 513
/* 509 */     MCD::OPC_Decode, 231, 2, 1, // Opcode: SETSP_1r
/* 513 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 516 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 525
/* 521 */     MCD::OPC_Decode, 188, 1, 7, // Opcode: ANDNOT_2r
/* 525 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 534
/* 530 */     MCD::OPC_Decode, 238, 1, 2, // Opcode: EEF_2r
/* 534 */     MCD::OPC_Decode, 243, 2, 5, // Opcode: SHR_3r
/* 538 */     MCD::OPC_FilterValue, 6, 46, 0, 0, // Skip to: 589
/* 543 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 546 */     MCD::OPC_FilterValue, 126, 4, 0, 0, // Skip to: 555
/* 551 */     MCD::OPC_Decode, 222, 2, 1, // Opcode: SETDP_1r
/* 555 */     MCD::OPC_FilterValue, 127, 4, 0, 0, // Skip to: 564
/* 560 */     MCD::OPC_Decode, 218, 2, 1, // Opcode: SETCP_1r
/* 564 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 567 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 576
/* 572 */     MCD::OPC_Decode, 238, 2, 7, // Opcode: SEXT_2r
/* 576 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 585
/* 581 */     MCD::OPC_Decode, 239, 2, 8, // Opcode: SEXT_rus
/* 585 */     MCD::OPC_Decode, 245, 1, 5, // Opcode: EQ_3r
/* 589 */     MCD::OPC_FilterValue, 7, 46, 0, 0, // Skip to: 640
/* 594 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 597 */     MCD::OPC_FilterValue, 126, 4, 0, 0, // Skip to: 606
/* 602 */     MCD::OPC_Decode, 230, 1, 1, // Opcode: DGETREG_1r
/* 606 */     MCD::OPC_FilterValue, 127, 4, 0, 0, // Skip to: 615
/* 611 */     MCD::OPC_Decode, 224, 2, 1, // Opcode: SETEV_1r
/* 615 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 618 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 627
/* 623 */     MCD::OPC_Decode, 136, 2, 2, // Opcode: GETTS_2r
/* 627 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 636
/* 632 */     MCD::OPC_Decode, 229, 2, 4, // Opcode: SETPT_2r
/* 636 */     MCD::OPC_Decode, 189, 1, 5, // Opcode: AND_3r
/* 640 */     MCD::OPC_FilterValue, 8, 46, 0, 0, // Skip to: 691
/* 645 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 648 */     MCD::OPC_FilterValue, 126, 4, 0, 0, // Skip to: 657
/* 653 */     MCD::OPC_Decode, 147, 2, 1, // Opcode: KCALL_1r
/* 657 */     MCD::OPC_FilterValue, 127, 4, 0, 0, // Skip to: 666
/* 662 */     MCD::OPC_Decode, 237, 2, 1, // Opcode: SETV_1r
/* 666 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 669 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 678
/* 674 */     MCD::OPC_Decode, 142, 3, 7, // Opcode: ZEXT_2r
/* 678 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 687
/* 683 */     MCD::OPC_Decode, 143, 3, 8, // Opcode: ZEXT_rus
/* 687 */     MCD::OPC_Decode, 205, 2, 5, // Opcode: OR_3r
/* 691 */     MCD::OPC_FilterValue, 9, 46, 0, 0, // Skip to: 742
/* 696 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 699 */     MCD::OPC_FilterValue, 126, 4, 0, 0, // Skip to: 708
/* 704 */     MCD::OPC_Decode, 235, 1, 1, // Opcode: ECALLF_1r
/* 708 */     MCD::OPC_FilterValue, 127, 4, 0, 0, // Skip to: 717
/* 713 */     MCD::OPC_Decode, 236, 1, 1, // Opcode: ECALLT_1r
/* 717 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 720 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 729
/* 725 */     MCD::OPC_Decode, 206, 2, 2, // Opcode: OUTCT_2r
/* 729 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 738
/* 734 */     MCD::OPC_Decode, 207, 2, 9, // Opcode: OUTCT_rus
/* 738 */     MCD::OPC_Decode, 191, 2, 5, // Opcode: LDW_3r
/* 742 */     MCD::OPC_FilterValue, 10, 21, 0, 0, // Skip to: 768
/* 747 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 750 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 759
/* 755 */     MCD::OPC_Decode, 252, 2, 10, // Opcode: STWDP_ru6
/* 759 */     MCD::OPC_FilterValue, 1, 154, 2, 0, // Skip to: 1430
/* 764 */     MCD::OPC_Decode, 254, 2, 10, // Opcode: STWSP_ru6
/* 768 */     MCD::OPC_FilterValue, 11, 21, 0, 0, // Skip to: 794
/* 773 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 776 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 785
/* 781 */     MCD::OPC_Decode, 187, 2, 10, // Opcode: LDWDP_ru6
/* 785 */     MCD::OPC_FilterValue, 1, 128, 2, 0, // Skip to: 1430
/* 790 */     MCD::OPC_Decode, 189, 2, 10, // Opcode: LDWSP_ru6
/* 794 */     MCD::OPC_FilterValue, 12, 21, 0, 0, // Skip to: 820
/* 799 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 802 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 811
/* 807 */     MCD::OPC_Decode, 170, 2, 10, // Opcode: LDAWDP_ru6
/* 811 */     MCD::OPC_FilterValue, 1, 102, 2, 0, // Skip to: 1430
/* 816 */     MCD::OPC_Decode, 174, 2, 10, // Opcode: LDAWSP_ru6
/* 820 */     MCD::OPC_FilterValue, 13, 21, 0, 0, // Skip to: 846
/* 825 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 828 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 837
/* 833 */     MCD::OPC_Decode, 176, 2, 10, // Opcode: LDC_ru6
/* 837 */     MCD::OPC_FilterValue, 1, 76, 2, 0, // Skip to: 1430
/* 842 */     MCD::OPC_Decode, 184, 2, 10, // Opcode: LDWCP_ru6
/* 846 */     MCD::OPC_FilterValue, 14, 99, 0, 0, // Skip to: 950
/* 851 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 854 */     MCD::OPC_FilterValue, 0, 43, 0, 0, // Skip to: 902
/* 859 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 862 */     MCD::OPC_FilterValue, 12, 4, 0, 0, // Skip to: 871
/* 867 */     MCD::OPC_Decode, 214, 1, 11, // Opcode: BRFU_u6
/* 871 */     MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 880
/* 876 */     MCD::OPC_Decode, 197, 1, 11, // Opcode: BLAT_u6
/* 880 */     MCD::OPC_FilterValue, 14, 4, 0, 0, // Skip to: 889
/* 885 */     MCD::OPC_Decode, 247, 1, 11, // Opcode: EXTDP_u6
/* 889 */     MCD::OPC_FilterValue, 15, 4, 0, 0, // Skip to: 898
/* 894 */     MCD::OPC_Decode, 149, 2, 11, // Opcode: KCALL_u6
/* 898 */     MCD::OPC_Decode, 212, 1, 12, // Opcode: BRFT_ru6
/* 902 */     MCD::OPC_FilterValue, 1, 11, 2, 0, // Skip to: 1430
/* 907 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 910 */     MCD::OPC_FilterValue, 12, 4, 0, 0, // Skip to: 919
/* 915 */     MCD::OPC_Decode, 208, 1, 13, // Opcode: BRBU_u6
/* 919 */     MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 928
/* 924 */     MCD::OPC_Decode, 243, 1, 11, // Opcode: ENTSP_u6
/* 928 */     MCD::OPC_FilterValue, 14, 4, 0, 0, // Skip to: 937
/* 933 */     MCD::OPC_Decode, 249, 1, 11, // Opcode: EXTSP_u6
/* 937 */     MCD::OPC_FilterValue, 15, 4, 0, 0, // Skip to: 946
/* 942 */     MCD::OPC_Decode, 216, 2, 11, // Opcode: RETSP_u6
/* 946 */     MCD::OPC_Decode, 206, 1, 14, // Opcode: BRBT_ru6
/* 950 */     MCD::OPC_FilterValue, 15, 81, 0, 0, // Skip to: 1036
/* 955 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 958 */     MCD::OPC_FilterValue, 0, 43, 0, 0, // Skip to: 1006
/* 963 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 966 */     MCD::OPC_FilterValue, 12, 4, 0, 0, // Skip to: 975
/* 971 */     MCD::OPC_Decode, 224, 1, 11, // Opcode: CLRSR_u6
/* 975 */     MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 984
/* 980 */     MCD::OPC_Decode, 235, 2, 11, // Opcode: SETSR_u6
/* 984 */     MCD::OPC_FilterValue, 14, 4, 0, 0, // Skip to: 993
/* 989 */     MCD::OPC_Decode, 151, 2, 11, // Opcode: KENTSP_u6
/* 993 */     MCD::OPC_FilterValue, 15, 4, 0, 0, // Skip to: 1002
/* 998 */     MCD::OPC_Decode, 153, 2, 11, // Opcode: KRESTSP_u6
/* 1002 */    MCD::OPC_Decode, 210, 1, 12, // Opcode: BRFF_ru6
/* 1006 */    MCD::OPC_FilterValue, 1, 163, 1, 0, // Skip to: 1430
/* 1011 */    MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 1014 */    MCD::OPC_FilterValue, 12, 4, 0, 0, // Skip to: 1023
/* 1019 */    MCD::OPC_Decode, 134, 2, 11, // Opcode: GETSR_u6
/* 1023 */    MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 1032
/* 1028 */    MCD::OPC_Decode, 168, 2, 11, // Opcode: LDAWCP_u6
/* 1032 */    MCD::OPC_Decode, 204, 1, 14, // Opcode: BRBF_ru6
/* 1036 */    MCD::OPC_FilterValue, 16, 46, 0, 0, // Skip to: 1087
/* 1041 */    MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 1044 */    MCD::OPC_FilterValue, 126, 4, 0, 0, // Skip to: 1053
/* 1049 */    MCD::OPC_Decode, 220, 1, 1, // Opcode: CLRPT_1R
/* 1053 */    MCD::OPC_FilterValue, 127, 4, 0, 0, // Skip to: 1062
/* 1058 */    MCD::OPC_Decode, 131, 3, 1, // Opcode: SYNCR_1r
/* 1062 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1065 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1074
/* 1070 */    MCD::OPC_Decode, 132, 2, 9, // Opcode: GETR_rus
/* 1074 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1083
/* 1079 */    MCD::OPC_Decode, 137, 2, 2, // Opcode: INCT_2r
/* 1083 */    MCD::OPC_Decode, 156, 2, 5, // Opcode: LD16S_3r
/* 1087 */    MCD::OPC_FilterValue, 17, 25, 0, 0, // Skip to: 1117
/* 1092 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1095 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1104
/* 1100 */    MCD::OPC_Decode, 204, 2, 2, // Opcode: NOT
/* 1104 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1113
/* 1109 */    MCD::OPC_Decode, 145, 2, 2, // Opcode: INT_2r
/* 1113 */    MCD::OPC_Decode, 157, 2, 5, // Opcode: LD8U_3r
/* 1117 */    MCD::OPC_FilterValue, 18, 25, 0, 0, // Skip to: 1147
/* 1122 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1125 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1134
/* 1130 */    MCD::OPC_Decode, 203, 2, 2, // Opcode: NEG
/* 1134 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1143
/* 1139 */    MCD::OPC_Decode, 241, 1, 2, // Opcode: ENDIN_2r
/* 1143 */    MCD::OPC_Decode, 186, 1, 3, // Opcode: ADD_2rus
/* 1147 */    MCD::OPC_FilterValue, 19, 4, 0, 0, // Skip to: 1156
/* 1152 */    MCD::OPC_Decode, 129, 3, 3, // Opcode: SUB_2rus
/* 1156 */    MCD::OPC_FilterValue, 20, 25, 0, 0, // Skip to: 1186
/* 1161 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1164 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1173
/* 1169 */    MCD::OPC_Decode, 199, 2, 2, // Opcode: MKMSK_2r
/* 1173 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1182
/* 1178 */    MCD::OPC_Decode, 200, 2, 15, // Opcode: MKMSK_rus
/* 1182 */    MCD::OPC_Decode, 240, 2, 16, // Opcode: SHL_2rus
/* 1186 */    MCD::OPC_FilterValue, 21, 25, 0, 0, // Skip to: 1216
/* 1191 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1194 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1203
/* 1199 */    MCD::OPC_Decode, 211, 2, 4, // Opcode: OUT_2r
/* 1203 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1212
/* 1208 */    MCD::OPC_Decode, 209, 2, 7, // Opcode: OUTSHR_2r
/* 1212 */    MCD::OPC_Decode, 242, 2, 16, // Opcode: SHR_2rus
/* 1216 */    MCD::OPC_FilterValue, 22, 25, 0, 0, // Skip to: 1246
/* 1221 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1224 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1233
/* 1229 */    MCD::OPC_Decode, 146, 2, 2, // Opcode: IN_2r
/* 1233 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1242
/* 1238 */    MCD::OPC_Decode, 144, 2, 7, // Opcode: INSHR_2r
/* 1242 */    MCD::OPC_Decode, 244, 1, 3, // Opcode: EQ_2rus
/* 1246 */    MCD::OPC_FilterValue, 23, 25, 0, 0, // Skip to: 1276
/* 1251 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1254 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1263
/* 1259 */    MCD::OPC_Decode, 212, 2, 2, // Opcode: PEEK_2r
/* 1263 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1272
/* 1268 */    MCD::OPC_Decode, 132, 3, 2, // Opcode: TESTCT_2r
/* 1272 */    MCD::OPC_Decode, 136, 3, 17, // Opcode: TSETR_3r
/* 1276 */    MCD::OPC_FilterValue, 24, 25, 0, 0, // Skip to: 1306
/* 1281 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1284 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1293
/* 1289 */    MCD::OPC_Decode, 227, 2, 4, // Opcode: SETPSC_2r
/* 1293 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1302
/* 1298 */    MCD::OPC_Decode, 134, 3, 2, // Opcode: TESTWCT_2r
/* 1302 */    MCD::OPC_Decode, 193, 2, 5, // Opcode: LSS_3r
/* 1306 */    MCD::OPC_FilterValue, 25, 25, 0, 0, // Skip to: 1336
/* 1311 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1314 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1323
/* 1319 */    MCD::OPC_Decode, 217, 1, 2, // Opcode: CHKCT_2r
/* 1323 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1332
/* 1328 */    MCD::OPC_Decode, 218, 1, 15, // Opcode: CHKCT_rus
/* 1332 */    MCD::OPC_Decode, 195, 2, 5, // Opcode: LSU_3r
/* 1336 */    MCD::OPC_FilterValue, 26, 21, 0, 0, // Skip to: 1362
/* 1341 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1344 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1353
/* 1349 */    MCD::OPC_Decode, 202, 1, 18, // Opcode: BLRF_u10
/* 1353 */    MCD::OPC_FilterValue, 1, 72, 0, 0, // Skip to: 1430
/* 1358 */    MCD::OPC_Decode, 200, 1, 19, // Opcode: BLRB_u10
/* 1362 */    MCD::OPC_FilterValue, 27, 21, 0, 0, // Skip to: 1388
/* 1367 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1370 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1379
/* 1375 */    MCD::OPC_Decode, 164, 2, 18, // Opcode: LDAPF_u10
/* 1379 */    MCD::OPC_FilterValue, 1, 46, 0, 0, // Skip to: 1430
/* 1384 */    MCD::OPC_Decode, 161, 2, 19, // Opcode: LDAPB_u10
/* 1388 */    MCD::OPC_FilterValue, 28, 21, 0, 0, // Skip to: 1414
/* 1393 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1396 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1405
/* 1401 */    MCD::OPC_Decode, 195, 1, 18, // Opcode: BLACP_u10
/* 1405 */    MCD::OPC_FilterValue, 1, 20, 0, 0, // Skip to: 1430
/* 1410 */    MCD::OPC_Decode, 185, 2, 18, // Opcode: LDWCP_u10
/* 1414 */    MCD::OPC_FilterValue, 29, 11, 0, 0, // Skip to: 1430
/* 1419 */    MCD::OPC_CheckField, 10, 1, 0, 4, 0, 0, // Skip to: 1430
/* 1426 */    MCD::OPC_Decode, 221, 2, 12, // Opcode: SETC_ru6
/* 1430 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 3 */       MCD::OPC_FilterValue, 0, 103, 0, 0, // Skip to: 111
/* 8 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 11 */      MCD::OPC_FilterValue, 31, 120, 4, 0, // Skip to: 1160
/* 16 */      MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 19 */      MCD::OPC_FilterValue, 0, 12, 0, 0, // Skip to: 36
/* 24 */      MCD::OPC_CheckField, 16, 11, 236, 15, 21, 0, 0, // Skip to: 53
/* 32 */      MCD::OPC_Decode, 193, 1, 20, // Opcode: BITREV_l2r
/* 36 */      MCD::OPC_FilterValue, 1, 12, 0, 0, // Skip to: 53
/* 41 */      MCD::OPC_CheckField, 16, 11, 236, 15, 4, 0, 0, // Skip to: 53
/* 49 */      MCD::OPC_Decode, 216, 1, 20, // Opcode: BYTEREV_l2r
/* 53 */      MCD::OPC_CheckField, 16, 11, 236, 15, 4, 0, 0, // Skip to: 65
/* 61 */      MCD::OPC_Decode, 128, 3, 21, // Opcode: STW_l3r
/* 65 */      MCD::OPC_ExtractField, 20, 7,  // Inst{26-20} ...
/* 68 */      MCD::OPC_FilterValue, 126, 4, 0, 0, // Skip to: 77
/* 73 */      MCD::OPC_Decode, 226, 1, 22, // Opcode: CRC8_l4r
/* 77 */      MCD::OPC_FilterValue, 127, 4, 0, 0, // Skip to: 86
/* 82 */      MCD::OPC_Decode, 197, 2, 23, // Opcode: MACCU_l4r
/* 86 */      MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 89 */      MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 98
/* 94 */      MCD::OPC_Decode, 178, 2, 24, // Opcode: LDIVU_l5r
/* 98 */      MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 107
/* 103 */     MCD::OPC_Decode, 155, 2, 24, // Opcode: LADD_l5r
/* 107 */     MCD::OPC_Decode, 192, 2, 25, // Opcode: LMUL_l6r
/* 111 */     MCD::OPC_FilterValue, 1, 98, 0, 0, // Skip to: 214
/* 116 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 119 */     MCD::OPC_FilterValue, 31, 12, 4, 0, // Skip to: 1160
/* 124 */     MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 127 */     MCD::OPC_FilterValue, 0, 4, 4, 0, // Skip to: 1160
/* 132 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 135 */     MCD::OPC_FilterValue, 0, 18, 0, 0, // Skip to: 158
/* 140 */     MCD::OPC_CheckField, 21, 6, 63, 34, 0, 0, // Skip to: 181
/* 147 */     MCD::OPC_CheckField, 16, 4, 12, 27, 0, 0, // Skip to: 181
/* 154 */     MCD::OPC_Decode, 225, 1, 20, // Opcode: CLZ_l2r
/* 158 */     MCD::OPC_FilterValue, 1, 18, 0, 0, // Skip to: 181
/* 163 */     MCD::OPC_CheckField, 21, 6, 63, 11, 0, 0, // Skip to: 181
/* 170 */     MCD::OPC_CheckField, 16, 4, 12, 4, 0, 0, // Skip to: 181
/* 177 */     MCD::OPC_Decode, 217, 2, 26, // Opcode: SETCLK_l2r
/* 181 */     MCD::OPC_CheckField, 21, 6, 63, 11, 0, 0, // Skip to: 199
/* 188 */     MCD::OPC_CheckField, 16, 4, 12, 4, 0, 0, // Skip to: 199
/* 195 */     MCD::OPC_Decode, 141, 3, 21, // Opcode: XOR_l3r
/* 199 */     MCD::OPC_CheckField, 21, 6, 63, 4, 0, 0, // Skip to: 210
/* 206 */     MCD::OPC_Decode, 196, 2, 23, // Opcode: MACCS_l4r
/* 210 */     MCD::OPC_Decode, 194, 2, 24, // Opcode: LSUB_l5r
/* 214 */     MCD::OPC_FilterValue, 2, 35, 0, 0, // Skip to: 254
/* 219 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 222 */     MCD::OPC_FilterValue, 159, 251, 3, 163, 3, 0, // Skip to: 1160
/* 229 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 232 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 241
/* 237 */     MCD::OPC_Decode, 140, 2, 20, // Opcode: INITLR_l2r
/* 241 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 250
/* 246 */     MCD::OPC_Decode, 131, 2, 20, // Opcode: GETPS_l2r
/* 250 */     MCD::OPC_Decode, 191, 1, 21, // Opcode: ASHR_l3r
/* 254 */     MCD::OPC_FilterValue, 3, 35, 0, 0, // Skip to: 294
/* 259 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 262 */     MCD::OPC_FilterValue, 159, 251, 3, 123, 3, 0, // Skip to: 1160
/* 269 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 272 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 281
/* 277 */     MCD::OPC_Decode, 228, 2, 26, // Opcode: SETPS_l2r
/* 281 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 290
/* 286 */     MCD::OPC_Decode, 252, 1, 20, // Opcode: GETD_l2r
/* 290 */     MCD::OPC_Decode, 172, 2, 21, // Opcode: LDAWF_l3r
/* 294 */     MCD::OPC_FilterValue, 4, 35, 0, 0, // Skip to: 334
/* 299 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 302 */     MCD::OPC_FilterValue, 159, 251, 3, 83, 3, 0, // Skip to: 1160
/* 309 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 312 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 321
/* 317 */     MCD::OPC_Decode, 133, 3, 20, // Opcode: TESTLCL_l2r
/* 321 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 330
/* 326 */     MCD::OPC_Decode, 236, 2, 26, // Opcode: SETTW_l2r
/* 330 */     MCD::OPC_Decode, 166, 2, 21, // Opcode: LDAWB_l3r
/* 334 */     MCD::OPC_FilterValue, 5, 35, 0, 0, // Skip to: 374
/* 339 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 342 */     MCD::OPC_FilterValue, 159, 251, 3, 43, 3, 0, // Skip to: 1160
/* 349 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 352 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 361
/* 357 */     MCD::OPC_Decode, 230, 2, 26, // Opcode: SETRDY_l2r
/* 361 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 370
/* 366 */     MCD::OPC_Decode, 219, 2, 20, // Opcode: SETC_l2r
/* 370 */     MCD::OPC_Decode, 159, 2, 21, // Opcode: LDA16F_l3r
/* 374 */     MCD::OPC_FilterValue, 6, 35, 0, 0, // Skip to: 414
/* 379 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 382 */     MCD::OPC_FilterValue, 159, 251, 3, 3, 3, 0, // Skip to: 1160
/* 389 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 392 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 401
/* 397 */     MCD::OPC_Decode, 226, 2, 26, // Opcode: SETN_l2r
/* 401 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 410
/* 406 */     MCD::OPC_Decode, 130, 2, 20, // Opcode: GETN_l2r
/* 410 */     MCD::OPC_Decode, 158, 2, 21, // Opcode: LDA16B_l3r
/* 414 */     MCD::OPC_FilterValue, 7, 13, 0, 0, // Skip to: 432
/* 419 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 220, 2, 0, // Skip to: 1160
/* 428 */     MCD::OPC_Decode, 202, 2, 21, // Opcode: MUL_l3r
/* 432 */     MCD::OPC_FilterValue, 8, 13, 0, 0, // Skip to: 450
/* 437 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 202, 2, 0, // Skip to: 1160
/* 446 */     MCD::OPC_Decode, 231, 1, 21, // Opcode: DIVS_l3r
/* 450 */     MCD::OPC_FilterValue, 9, 13, 0, 0, // Skip to: 468
/* 455 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 184, 2, 0, // Skip to: 1160
/* 464 */     MCD::OPC_Decode, 232, 1, 21, // Opcode: DIVU_l3r
/* 468 */     MCD::OPC_FilterValue, 10, 35, 0, 0, // Skip to: 508
/* 473 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 476 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 492
/* 481 */     MCD::OPC_CheckField, 10, 6, 60, 160, 2, 0, // Skip to: 1160
/* 488 */     MCD::OPC_Decode, 251, 2, 27, // Opcode: STWDP_lru6
/* 492 */     MCD::OPC_FilterValue, 1, 151, 2, 0, // Skip to: 1160
/* 497 */     MCD::OPC_CheckField, 10, 6, 60, 144, 2, 0, // Skip to: 1160
/* 504 */     MCD::OPC_Decode, 253, 2, 27, // Opcode: STWSP_lru6
/* 508 */     MCD::OPC_FilterValue, 11, 35, 0, 0, // Skip to: 548
/* 513 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 516 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 532
/* 521 */     MCD::OPC_CheckField, 10, 6, 60, 120, 2, 0, // Skip to: 1160
/* 528 */     MCD::OPC_Decode, 186, 2, 27, // Opcode: LDWDP_lru6
/* 532 */     MCD::OPC_FilterValue, 1, 111, 2, 0, // Skip to: 1160
/* 537 */     MCD::OPC_CheckField, 10, 6, 60, 104, 2, 0, // Skip to: 1160
/* 544 */     MCD::OPC_Decode, 188, 2, 27, // Opcode: LDWSP_lru6
/* 548 */     MCD::OPC_FilterValue, 12, 35, 0, 0, // Skip to: 588
/* 553 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 556 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 572
/* 561 */     MCD::OPC_CheckField, 10, 6, 60, 80, 2, 0, // Skip to: 1160
/* 568 */     MCD::OPC_Decode, 169, 2, 27, // Opcode: LDAWDP_lru6
/* 572 */     MCD::OPC_FilterValue, 1, 71, 2, 0, // Skip to: 1160
/* 577 */     MCD::OPC_CheckField, 10, 6, 60, 64, 2, 0, // Skip to: 1160
/* 584 */     MCD::OPC_Decode, 173, 2, 27, // Opcode: LDAWSP_lru6
/* 588 */     MCD::OPC_FilterValue, 13, 35, 0, 0, // Skip to: 628
/* 593 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 596 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 612
/* 601 */     MCD::OPC_CheckField, 10, 6, 60, 40, 2, 0, // Skip to: 1160
/* 608 */     MCD::OPC_Decode, 175, 2, 27, // Opcode: LDC_lru6
/* 612 */     MCD::OPC_FilterValue, 1, 31, 2, 0, // Skip to: 1160
/* 617 */     MCD::OPC_CheckField, 10, 6, 60, 24, 2, 0, // Skip to: 1160
/* 624 */     MCD::OPC_Decode, 182, 2, 27, // Opcode: LDWCP_lru6
/* 628 */     MCD::OPC_FilterValue, 14, 115, 0, 0, // Skip to: 748
/* 633 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 636 */     MCD::OPC_FilterValue, 0, 51, 0, 0, // Skip to: 692
/* 641 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 644 */     MCD::OPC_FilterValue, 60, 255, 1, 0, // Skip to: 1160
/* 649 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 652 */     MCD::OPC_FilterValue, 12, 4, 0, 0, // Skip to: 661
/* 657 */     MCD::OPC_Decode, 213, 1, 28, // Opcode: BRFU_lu6
/* 661 */     MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 670
/* 666 */     MCD::OPC_Decode, 196, 1, 28, // Opcode: BLAT_lu6
/* 670 */     MCD::OPC_FilterValue, 14, 4, 0, 0, // Skip to: 679
/* 675 */     MCD::OPC_Decode, 246, 1, 28, // Opcode: EXTDP_lu6
/* 679 */     MCD::OPC_FilterValue, 15, 4, 0, 0, // Skip to: 688
/* 684 */     MCD::OPC_Decode, 148, 2, 28, // Opcode: KCALL_lu6
/* 688 */     MCD::OPC_Decode, 211, 1, 29, // Opcode: BRFT_lru6
/* 692 */     MCD::OPC_FilterValue, 1, 207, 1, 0, // Skip to: 1160
/* 697 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 700 */     MCD::OPC_FilterValue, 60, 199, 1, 0, // Skip to: 1160
/* 705 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 708 */     MCD::OPC_FilterValue, 12, 4, 0, 0, // Skip to: 717
/* 713 */     MCD::OPC_Decode, 207, 1, 30, // Opcode: BRBU_lu6
/* 717 */     MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 726
/* 722 */     MCD::OPC_Decode, 242, 1, 28, // Opcode: ENTSP_lu6
/* 726 */     MCD::OPC_FilterValue, 14, 4, 0, 0, // Skip to: 735
/* 731 */     MCD::OPC_Decode, 248, 1, 28, // Opcode: EXTSP_lu6
/* 735 */     MCD::OPC_FilterValue, 15, 4, 0, 0, // Skip to: 744
/* 740 */     MCD::OPC_Decode, 215, 2, 28, // Opcode: RETSP_lu6
/* 744 */     MCD::OPC_Decode, 205, 1, 31, // Opcode: BRBT_lru6
/* 748 */     MCD::OPC_FilterValue, 15, 97, 0, 0, // Skip to: 850
/* 753 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 756 */     MCD::OPC_FilterValue, 0, 51, 0, 0, // Skip to: 812
/* 761 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 764 */     MCD::OPC_FilterValue, 60, 135, 1, 0, // Skip to: 1160
/* 769 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 772 */     MCD::OPC_FilterValue, 12, 4, 0, 0, // Skip to: 781
/* 777 */     MCD::OPC_Decode, 223, 1, 28, // Opcode: CLRSR_lu6
/* 781 */     MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 790
/* 786 */     MCD::OPC_Decode, 234, 2, 28, // Opcode: SETSR_lu6
/* 790 */     MCD::OPC_FilterValue, 14, 4, 0, 0, // Skip to: 799
/* 795 */     MCD::OPC_Decode, 150, 2, 28, // Opcode: KENTSP_lu6
/* 799 */     MCD::OPC_FilterValue, 15, 4, 0, 0, // Skip to: 808
/* 804 */     MCD::OPC_Decode, 152, 2, 28, // Opcode: KRESTSP_lu6
/* 808 */     MCD::OPC_Decode, 209, 1, 29, // Opcode: BRFF_lru6
/* 812 */     MCD::OPC_FilterValue, 1, 87, 1, 0, // Skip to: 1160
/* 817 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 820 */     MCD::OPC_FilterValue, 60, 79, 1, 0, // Skip to: 1160
/* 825 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 828 */     MCD::OPC_FilterValue, 12, 4, 0, 0, // Skip to: 837
/* 833 */     MCD::OPC_Decode, 133, 2, 28, // Opcode: GETSR_lu6
/* 837 */     MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 846
/* 842 */     MCD::OPC_Decode, 167, 2, 28, // Opcode: LDAWCP_lu6
/* 846 */     MCD::OPC_Decode, 203, 1, 31, // Opcode: BRBF_lru6
/* 850 */     MCD::OPC_FilterValue, 16, 13, 0, 0, // Skip to: 868
/* 855 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 40, 1, 0, // Skip to: 1160
/* 864 */     MCD::OPC_Decode, 245, 2, 21, // Opcode: ST16_l3r
/* 868 */     MCD::OPC_FilterValue, 17, 13, 0, 0, // Skip to: 886
/* 873 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 22, 1, 0, // Skip to: 1160
/* 882 */     MCD::OPC_Decode, 246, 2, 21, // Opcode: ST8_l3r
/* 886 */     MCD::OPC_FilterValue, 18, 36, 0, 0, // Skip to: 927
/* 891 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 894 */     MCD::OPC_FilterValue, 159, 251, 3, 4, 0, 0, // Skip to: 905
/* 901 */     MCD::OPC_Decode, 190, 1, 32, // Opcode: ASHR_l2rus
/* 905 */     MCD::OPC_FilterValue, 191, 251, 3, 4, 0, 0, // Skip to: 916
/* 912 */     MCD::OPC_Decode, 208, 2, 32, // Opcode: OUTPW_l2rus
/* 916 */     MCD::OPC_FilterValue, 223, 251, 3, 237, 0, 0, // Skip to: 1160
/* 923 */     MCD::OPC_Decode, 143, 2, 32, // Opcode: INPW_l2rus
/* 927 */     MCD::OPC_FilterValue, 19, 13, 0, 0, // Skip to: 945
/* 932 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 219, 0, 0, // Skip to: 1160
/* 941 */     MCD::OPC_Decode, 171, 2, 33, // Opcode: LDAWF_l2rus
/* 945 */     MCD::OPC_FilterValue, 20, 13, 0, 0, // Skip to: 963
/* 950 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 201, 0, 0, // Skip to: 1160
/* 959 */     MCD::OPC_Decode, 165, 2, 33, // Opcode: LDAWB_l2rus
/* 963 */     MCD::OPC_FilterValue, 21, 13, 0, 0, // Skip to: 981
/* 968 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 183, 0, 0, // Skip to: 1160
/* 977 */     MCD::OPC_Decode, 227, 1, 34, // Opcode: CRC_l3r
/* 981 */     MCD::OPC_FilterValue, 24, 13, 0, 0, // Skip to: 999
/* 986 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 165, 0, 0, // Skip to: 1160
/* 995 */     MCD::OPC_Decode, 213, 2, 21, // Opcode: REMS_l3r
/* 999 */     MCD::OPC_FilterValue, 25, 13, 0, 0, // Skip to: 1017
/* 1004 */    MCD::OPC_CheckField, 11, 16, 159, 251, 3, 147, 0, 0, // Skip to: 1160
/* 1013 */    MCD::OPC_Decode, 214, 2, 21, // Opcode: REMU_l3r
/* 1017 */    MCD::OPC_FilterValue, 26, 35, 0, 0, // Skip to: 1057
/* 1022 */    MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 1025 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1041
/* 1030 */    MCD::OPC_CheckField, 10, 6, 60, 123, 0, 0, // Skip to: 1160
/* 1037 */    MCD::OPC_Decode, 201, 1, 35, // Opcode: BLRF_lu10
/* 1041 */    MCD::OPC_FilterValue, 1, 114, 0, 0, // Skip to: 1160
/* 1046 */    MCD::OPC_CheckField, 10, 6, 60, 107, 0, 0, // Skip to: 1160
/* 1053 */    MCD::OPC_Decode, 199, 1, 36, // Opcode: BLRB_lu10
/* 1057 */    MCD::OPC_FilterValue, 27, 35, 0, 0, // Skip to: 1097
/* 1062 */    MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 1065 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1081
/* 1070 */    MCD::OPC_CheckField, 10, 6, 60, 83, 0, 0, // Skip to: 1160
/* 1077 */    MCD::OPC_Decode, 162, 2, 35, // Opcode: LDAPF_lu10
/* 1081 */    MCD::OPC_FilterValue, 1, 74, 0, 0, // Skip to: 1160
/* 1086 */    MCD::OPC_CheckField, 10, 6, 60, 67, 0, 0, // Skip to: 1160
/* 1093 */    MCD::OPC_Decode, 160, 2, 36, // Opcode: LDAPB_lu10
/* 1097 */    MCD::OPC_FilterValue, 28, 35, 0, 0, // Skip to: 1137
/* 1102 */    MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 1105 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1121
/* 1110 */    MCD::OPC_CheckField, 10, 6, 60, 43, 0, 0, // Skip to: 1160
/* 1117 */    MCD::OPC_Decode, 194, 1, 35, // Opcode: BLACP_lu10
/* 1121 */    MCD::OPC_FilterValue, 1, 34, 0, 0, // Skip to: 1160
/* 1126 */    MCD::OPC_CheckField, 10, 6, 60, 27, 0, 0, // Skip to: 1160
/* 1133 */    MCD::OPC_Decode, 183, 2, 35, // Opcode: LDWCP_lu10
/* 1137 */    MCD::OPC_FilterValue, 29, 18, 0, 0, // Skip to: 1160
/* 1142 */    MCD::OPC_CheckField, 26, 1, 0, 11, 0, 0, // Skip to: 1160
/* 1149 */    MCD::OPC_CheckField, 10, 6, 60, 4, 0, 0, // Skip to: 1160
/* 1156 */    MCD::OPC_Decode, 220, 2, 29, // Opcode: SETC_lru6
/* 1160 */    MCD::OPC_Fail,
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
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 2:
    if (Decode2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 3:
    if (Decode2RUSInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    if (DecodeR2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    if (Decode3RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 6:
    if (Decode2RImmInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    if (Decode2RSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 8:
    if (DecodeRUSSrcDstBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    if (DecodeRUSInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 6, 4);
    if (DecodeRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 6, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 0, 6);
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 6, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    if (DecodeRUSBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 16:
    if (Decode2RUSBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    if (Decode3RImmInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 0, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 0, 10);
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    if (DecodeL2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 21:
    if (DecodeL3RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 22:
    if (DecodeL4RSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 23:
    if (DecodeL4RSrcDstSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 24:
    if (DecodeL5RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    if (DecodeL6RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 26:
    if (DecodeLR2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 22, 4);
    if (DecodeRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 28:
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 22, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 30:
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 22, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    if (DecodeL2RUSBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 33:
    if (DecodeL2RUSInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    if (DecodeL3RSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 35:
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 10;
    tmp |= fieldFromInstruction(insn, 16, 10) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 36:
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 10;
    tmp |= fieldFromInstruction(insn, 16, 10) << 0;
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
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

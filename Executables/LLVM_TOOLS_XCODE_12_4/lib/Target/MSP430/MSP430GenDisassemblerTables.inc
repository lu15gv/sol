/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * MSP430 Disassembler                                                     *|
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
/* 0 */       MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3 */       MCD::OPC_FilterValue, 0, 44, 1, 0, // Skip to: 308
/* 8 */       MCD::OPC_ExtractField, 6, 7,  // Inst{12-6} ...
/* 11 */      MCD::OPC_FilterValue, 64, 30, 0, 0, // Skip to: 46
/* 16 */      MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 19 */      MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 28
/* 24 */      MCD::OPC_Decode, 166, 3, 0, // Opcode: RRC16r
/* 28 */      MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 37
/* 33 */      MCD::OPC_Decode, 164, 3, 1, // Opcode: RRC16n
/* 37 */      MCD::OPC_FilterValue, 3, 30, 1, 0, // Skip to: 328
/* 42 */      MCD::OPC_Decode, 165, 3, 1, // Opcode: RRC16p
/* 46 */      MCD::OPC_FilterValue, 65, 30, 0, 0, // Skip to: 81
/* 51 */      MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 54 */      MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 63
/* 59 */      MCD::OPC_Decode, 170, 3, 2, // Opcode: RRC8r
/* 63 */      MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 72
/* 68 */      MCD::OPC_Decode, 168, 3, 1, // Opcode: RRC8n
/* 72 */      MCD::OPC_FilterValue, 3, 251, 0, 0, // Skip to: 328
/* 77 */      MCD::OPC_Decode, 169, 3, 1, // Opcode: RRC8p
/* 81 */      MCD::OPC_FilterValue, 66, 30, 0, 0, // Skip to: 116
/* 86 */      MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 89 */      MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 98
/* 94 */      MCD::OPC_Decode, 228, 3, 0, // Opcode: SWPB16r
/* 98 */      MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 107
/* 103 */     MCD::OPC_Decode, 226, 3, 1, // Opcode: SWPB16n
/* 107 */     MCD::OPC_FilterValue, 3, 216, 0, 0, // Skip to: 328
/* 112 */     MCD::OPC_Decode, 227, 3, 1, // Opcode: SWPB16p
/* 116 */     MCD::OPC_FilterValue, 68, 30, 0, 0, // Skip to: 151
/* 121 */     MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 124 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 133
/* 129 */     MCD::OPC_Decode, 158, 3, 0, // Opcode: RRA16r
/* 133 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 142
/* 138 */     MCD::OPC_Decode, 156, 3, 1, // Opcode: RRA16n
/* 142 */     MCD::OPC_FilterValue, 3, 181, 0, 0, // Skip to: 328
/* 147 */     MCD::OPC_Decode, 157, 3, 1, // Opcode: RRA16p
/* 151 */     MCD::OPC_FilterValue, 69, 30, 0, 0, // Skip to: 186
/* 156 */     MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 159 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 168
/* 164 */     MCD::OPC_Decode, 162, 3, 2, // Opcode: RRA8r
/* 168 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 177
/* 173 */     MCD::OPC_Decode, 160, 3, 1, // Opcode: RRA8n
/* 177 */     MCD::OPC_FilterValue, 3, 146, 0, 0, // Skip to: 328
/* 182 */     MCD::OPC_Decode, 161, 3, 1, // Opcode: RRA8p
/* 186 */     MCD::OPC_FilterValue, 70, 30, 0, 0, // Skip to: 221
/* 191 */     MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 194 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 203
/* 199 */     MCD::OPC_Decode, 176, 3, 0, // Opcode: SEXT16r
/* 203 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 212
/* 208 */     MCD::OPC_Decode, 174, 3, 1, // Opcode: SEXT16n
/* 212 */     MCD::OPC_FilterValue, 3, 111, 0, 0, // Skip to: 328
/* 217 */     MCD::OPC_Decode, 175, 3, 1, // Opcode: SEXT16p
/* 221 */     MCD::OPC_FilterValue, 72, 15, 0, 0, // Skip to: 241
/* 226 */     MCD::OPC_CheckField, 4, 2, 0, 4, 0, 0, // Skip to: 237
/* 233 */     MCD::OPC_Decode, 151, 3, 1, // Opcode: PUSH16r
/* 237 */     MCD::OPC_Decode, 149, 3, 3, // Opcode: PUSH16c
/* 241 */     MCD::OPC_FilterValue, 73, 11, 0, 0, // Skip to: 257
/* 246 */     MCD::OPC_CheckField, 4, 2, 0, 75, 0, 0, // Skip to: 328
/* 253 */     MCD::OPC_Decode, 152, 3, 4, // Opcode: PUSH8r
/* 257 */     MCD::OPC_FilterValue, 74, 30, 0, 0, // Skip to: 292
/* 262 */     MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 265 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 274
/* 270 */     MCD::OPC_Decode, 201, 2, 1, // Opcode: CALLr
/* 274 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 283
/* 279 */     MCD::OPC_Decode, 199, 2, 1, // Opcode: CALLn
/* 283 */     MCD::OPC_FilterValue, 3, 40, 0, 0, // Skip to: 328
/* 288 */     MCD::OPC_Decode, 200, 2, 1, // Opcode: CALLp
/* 292 */     MCD::OPC_FilterValue, 76, 31, 0, 0, // Skip to: 328
/* 297 */     MCD::OPC_CheckField, 0, 6, 0, 24, 0, 0, // Skip to: 328
/* 304 */     MCD::OPC_Decode, 154, 3, 5, // Opcode: RETI
/* 308 */     MCD::OPC_FilterValue, 1, 15, 0, 0, // Skip to: 328
/* 313 */     MCD::OPC_CheckField, 10, 3, 7, 4, 0, 0, // Skip to: 324
/* 320 */     MCD::OPC_Decode, 251, 2, 6, // Opcode: JMP
/* 324 */     MCD::OPC_Decode, 250, 2, 7, // Opcode: JCC
/* 328 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 4, 12,  // Inst{15-4} ...
/* 3 */       MCD::OPC_FilterValue, 129, 2, 4, 0, 0, // Skip to: 13
/* 9 */       MCD::OPC_Decode, 163, 3, 8, // Opcode: RRC16m
/* 13 */      MCD::OPC_FilterValue, 133, 2, 4, 0, 0, // Skip to: 23
/* 19 */      MCD::OPC_Decode, 167, 3, 8, // Opcode: RRC8m
/* 23 */      MCD::OPC_FilterValue, 137, 2, 4, 0, 0, // Skip to: 33
/* 29 */      MCD::OPC_Decode, 225, 3, 8, // Opcode: SWPB16m
/* 33 */      MCD::OPC_FilterValue, 145, 2, 4, 0, 0, // Skip to: 43
/* 39 */      MCD::OPC_Decode, 155, 3, 8, // Opcode: RRA16m
/* 43 */      MCD::OPC_FilterValue, 149, 2, 4, 0, 0, // Skip to: 53
/* 49 */      MCD::OPC_Decode, 159, 3, 8, // Opcode: RRA8m
/* 53 */      MCD::OPC_FilterValue, 153, 2, 4, 0, 0, // Skip to: 63
/* 59 */      MCD::OPC_Decode, 173, 3, 8, // Opcode: SEXT16m
/* 63 */      MCD::OPC_FilterValue, 163, 2, 11, 0, 0, // Skip to: 80
/* 69 */      MCD::OPC_CheckField, 0, 4, 0, 31, 0, 0, // Skip to: 107
/* 76 */      MCD::OPC_Decode, 150, 3, 9, // Opcode: PUSH16i
/* 80 */      MCD::OPC_FilterValue, 169, 2, 4, 0, 0, // Skip to: 90
/* 86 */      MCD::OPC_Decode, 198, 2, 8, // Opcode: CALLm
/* 90 */      MCD::OPC_FilterValue, 171, 2, 11, 0, 0, // Skip to: 107
/* 96 */      MCD::OPC_CheckField, 0, 4, 0, 4, 0, 0, // Skip to: 107
/* 103 */     MCD::OPC_Decode, 197, 2, 9, // Opcode: CALLi
/* 107 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableAlpha16[] = {
/* 0 */       MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3 */       MCD::OPC_FilterValue, 4, 32, 0, 0, // Skip to: 40
/* 8 */       MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 11 */      MCD::OPC_FilterValue, 0, 15, 0, 0, // Skip to: 31
/* 16 */      MCD::OPC_CheckField, 0, 4, 0, 4, 0, 0, // Skip to: 27
/* 23 */      MCD::OPC_Decode, 196, 2, 10, // Opcode: Br
/* 27 */      MCD::OPC_Decode, 134, 3, 11, // Opcode: MOV16rr
/* 31 */      MCD::OPC_FilterValue, 4, 34, 1, 0, // Skip to: 326
/* 36 */      MCD::OPC_Decode, 145, 3, 12, // Opcode: MOV8rr
/* 40 */      MCD::OPC_FilterValue, 5, 21, 0, 0, // Skip to: 66
/* 45 */      MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 48 */      MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 57
/* 53 */      MCD::OPC_Decode, 186, 1, 13, // Opcode: ADD16rr
/* 57 */      MCD::OPC_FilterValue, 4, 8, 1, 0, // Skip to: 326
/* 62 */      MCD::OPC_Decode, 198, 1, 14, // Opcode: ADD8rr
/* 66 */      MCD::OPC_FilterValue, 6, 21, 0, 0, // Skip to: 92
/* 71 */      MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 74 */      MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 83
/* 79 */      MCD::OPC_Decode, 210, 1, 13, // Opcode: ADDC16rr
/* 83 */      MCD::OPC_FilterValue, 4, 238, 0, 0, // Skip to: 326
/* 88 */      MCD::OPC_Decode, 222, 1, 14, // Opcode: ADDC8rr
/* 92 */      MCD::OPC_FilterValue, 7, 21, 0, 0, // Skip to: 118
/* 97 */      MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 100 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 109
/* 105 */     MCD::OPC_Decode, 212, 3, 13, // Opcode: SUBC16rr
/* 109 */     MCD::OPC_FilterValue, 4, 212, 0, 0, // Skip to: 326
/* 114 */     MCD::OPC_Decode, 224, 3, 14, // Opcode: SUBC8rr
/* 118 */     MCD::OPC_FilterValue, 8, 21, 0, 0, // Skip to: 144
/* 123 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 126 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 135
/* 131 */     MCD::OPC_Decode, 188, 3, 13, // Opcode: SUB16rr
/* 135 */     MCD::OPC_FilterValue, 4, 186, 0, 0, // Skip to: 326
/* 140 */     MCD::OPC_Decode, 200, 3, 14, // Opcode: SUB8rr
/* 144 */     MCD::OPC_FilterValue, 9, 21, 0, 0, // Skip to: 170
/* 149 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 152 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 161
/* 157 */     MCD::OPC_Decode, 213, 2, 11, // Opcode: CMP16rr
/* 161 */     MCD::OPC_FilterValue, 4, 160, 0, 0, // Skip to: 326
/* 166 */     MCD::OPC_Decode, 225, 2, 12, // Opcode: CMP8rr
/* 170 */     MCD::OPC_FilterValue, 10, 21, 0, 0, // Skip to: 196
/* 175 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 178 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 187
/* 183 */     MCD::OPC_Decode, 237, 2, 13, // Opcode: DADD16rr
/* 187 */     MCD::OPC_FilterValue, 4, 134, 0, 0, // Skip to: 326
/* 192 */     MCD::OPC_Decode, 249, 2, 14, // Opcode: DADD8rr
/* 196 */     MCD::OPC_FilterValue, 11, 21, 0, 0, // Skip to: 222
/* 201 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 204 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 213
/* 209 */     MCD::OPC_Decode, 181, 2, 11, // Opcode: BIT16rr
/* 213 */     MCD::OPC_FilterValue, 4, 108, 0, 0, // Skip to: 326
/* 218 */     MCD::OPC_Decode, 193, 2, 12, // Opcode: BIT8rr
/* 222 */     MCD::OPC_FilterValue, 12, 21, 0, 0, // Skip to: 248
/* 227 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 230 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 239
/* 235 */     MCD::OPC_Decode, 133, 2, 13, // Opcode: BIC16rr
/* 239 */     MCD::OPC_FilterValue, 4, 82, 0, 0, // Skip to: 326
/* 244 */     MCD::OPC_Decode, 145, 2, 14, // Opcode: BIC8rr
/* 248 */     MCD::OPC_FilterValue, 13, 21, 0, 0, // Skip to: 274
/* 253 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 256 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 265
/* 261 */     MCD::OPC_Decode, 157, 2, 13, // Opcode: BIS16rr
/* 265 */     MCD::OPC_FilterValue, 4, 56, 0, 0, // Skip to: 326
/* 270 */     MCD::OPC_Decode, 169, 2, 14, // Opcode: BIS8rr
/* 274 */     MCD::OPC_FilterValue, 14, 21, 0, 0, // Skip to: 300
/* 279 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 282 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 291
/* 287 */     MCD::OPC_Decode, 248, 3, 13, // Opcode: XOR16rr
/* 291 */     MCD::OPC_FilterValue, 4, 30, 0, 0, // Skip to: 326
/* 296 */     MCD::OPC_Decode, 132, 4, 14, // Opcode: XOR8rr
/* 300 */     MCD::OPC_FilterValue, 15, 21, 0, 0, // Skip to: 326
/* 305 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 308 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 317
/* 313 */     MCD::OPC_Decode, 237, 1, 13, // Opcode: AND16rr
/* 317 */     MCD::OPC_FilterValue, 4, 4, 0, 0, // Skip to: 326
/* 322 */     MCD::OPC_Decode, 249, 1, 14, // Opcode: AND8rr
/* 326 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableAlpha32[] = {
/* 0 */       MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3 */       MCD::OPC_FilterValue, 4, 21, 0, 0, // Skip to: 29
/* 8 */       MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 11 */      MCD::OPC_FilterValue, 8, 4, 0, 0, // Skip to: 20
/* 16 */      MCD::OPC_Decode, 128, 3, 15, // Opcode: MOV16mr
/* 20 */      MCD::OPC_FilterValue, 12, 34, 1, 0, // Skip to: 315
/* 25 */      MCD::OPC_Decode, 139, 3, 16, // Opcode: MOV8mr
/* 29 */      MCD::OPC_FilterValue, 5, 21, 0, 0, // Skip to: 55
/* 34 */      MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 37 */      MCD::OPC_FilterValue, 8, 4, 0, 0, // Skip to: 46
/* 42 */      MCD::OPC_Decode, 180, 1, 15, // Opcode: ADD16mr
/* 46 */      MCD::OPC_FilterValue, 12, 8, 1, 0, // Skip to: 315
/* 51 */      MCD::OPC_Decode, 192, 1, 16, // Opcode: ADD8mr
/* 55 */      MCD::OPC_FilterValue, 6, 21, 0, 0, // Skip to: 81
/* 60 */      MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 63 */      MCD::OPC_FilterValue, 8, 4, 0, 0, // Skip to: 72
/* 68 */      MCD::OPC_Decode, 204, 1, 15, // Opcode: ADDC16mr
/* 72 */      MCD::OPC_FilterValue, 12, 238, 0, 0, // Skip to: 315
/* 77 */      MCD::OPC_Decode, 216, 1, 16, // Opcode: ADDC8mr
/* 81 */      MCD::OPC_FilterValue, 7, 21, 0, 0, // Skip to: 107
/* 86 */      MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 89 */      MCD::OPC_FilterValue, 8, 4, 0, 0, // Skip to: 98
/* 94 */      MCD::OPC_Decode, 206, 3, 15, // Opcode: SUBC16mr
/* 98 */      MCD::OPC_FilterValue, 12, 212, 0, 0, // Skip to: 315
/* 103 */     MCD::OPC_Decode, 218, 3, 16, // Opcode: SUBC8mr
/* 107 */     MCD::OPC_FilterValue, 8, 21, 0, 0, // Skip to: 133
/* 112 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 115 */     MCD::OPC_FilterValue, 8, 4, 0, 0, // Skip to: 124
/* 120 */     MCD::OPC_Decode, 182, 3, 15, // Opcode: SUB16mr
/* 124 */     MCD::OPC_FilterValue, 12, 186, 0, 0, // Skip to: 315
/* 129 */     MCD::OPC_Decode, 194, 3, 16, // Opcode: SUB8mr
/* 133 */     MCD::OPC_FilterValue, 9, 21, 0, 0, // Skip to: 159
/* 138 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 141 */     MCD::OPC_FilterValue, 8, 4, 0, 0, // Skip to: 150
/* 146 */     MCD::OPC_Decode, 207, 2, 15, // Opcode: CMP16mr
/* 150 */     MCD::OPC_FilterValue, 12, 160, 0, 0, // Skip to: 315
/* 155 */     MCD::OPC_Decode, 219, 2, 16, // Opcode: CMP8mr
/* 159 */     MCD::OPC_FilterValue, 10, 21, 0, 0, // Skip to: 185
/* 164 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 167 */     MCD::OPC_FilterValue, 8, 4, 0, 0, // Skip to: 176
/* 172 */     MCD::OPC_Decode, 231, 2, 15, // Opcode: DADD16mr
/* 176 */     MCD::OPC_FilterValue, 12, 134, 0, 0, // Skip to: 315
/* 181 */     MCD::OPC_Decode, 243, 2, 16, // Opcode: DADD8mr
/* 185 */     MCD::OPC_FilterValue, 11, 21, 0, 0, // Skip to: 211
/* 190 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 193 */     MCD::OPC_FilterValue, 8, 4, 0, 0, // Skip to: 202
/* 198 */     MCD::OPC_Decode, 175, 2, 15, // Opcode: BIT16mr
/* 202 */     MCD::OPC_FilterValue, 12, 108, 0, 0, // Skip to: 315
/* 207 */     MCD::OPC_Decode, 187, 2, 16, // Opcode: BIT8mr
/* 211 */     MCD::OPC_FilterValue, 12, 21, 0, 0, // Skip to: 237
/* 216 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 219 */     MCD::OPC_FilterValue, 8, 4, 0, 0, // Skip to: 228
/* 224 */     MCD::OPC_Decode, 255, 1, 15, // Opcode: BIC16mr
/* 228 */     MCD::OPC_FilterValue, 12, 82, 0, 0, // Skip to: 315
/* 233 */     MCD::OPC_Decode, 139, 2, 16, // Opcode: BIC8mr
/* 237 */     MCD::OPC_FilterValue, 13, 21, 0, 0, // Skip to: 263
/* 242 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 245 */     MCD::OPC_FilterValue, 8, 4, 0, 0, // Skip to: 254
/* 250 */     MCD::OPC_Decode, 151, 2, 15, // Opcode: BIS16mr
/* 254 */     MCD::OPC_FilterValue, 12, 56, 0, 0, // Skip to: 315
/* 259 */     MCD::OPC_Decode, 163, 2, 16, // Opcode: BIS8mr
/* 263 */     MCD::OPC_FilterValue, 14, 21, 0, 0, // Skip to: 289
/* 268 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 271 */     MCD::OPC_FilterValue, 8, 4, 0, 0, // Skip to: 280
/* 276 */     MCD::OPC_Decode, 242, 3, 15, // Opcode: XOR16mr
/* 280 */     MCD::OPC_FilterValue, 12, 30, 0, 0, // Skip to: 315
/* 285 */     MCD::OPC_Decode, 254, 3, 16, // Opcode: XOR8mr
/* 289 */     MCD::OPC_FilterValue, 15, 21, 0, 0, // Skip to: 315
/* 294 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 297 */     MCD::OPC_FilterValue, 8, 4, 0, 0, // Skip to: 306
/* 302 */     MCD::OPC_Decode, 231, 1, 15, // Opcode: AND16mr
/* 306 */     MCD::OPC_FilterValue, 12, 4, 0, 0, // Skip to: 315
/* 311 */     MCD::OPC_Decode, 243, 1, 16, // Opcode: AND8mr
/* 315 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableBeta16[] = {
/* 0 */       MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3 */       MCD::OPC_FilterValue, 4, 21, 0, 0, // Skip to: 29
/* 8 */       MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 11 */      MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 20
/* 16 */      MCD::OPC_Decode, 129, 3, 17, // Opcode: MOV16rc
/* 20 */      MCD::OPC_FilterValue, 1, 34, 1, 0, // Skip to: 315
/* 25 */      MCD::OPC_Decode, 140, 3, 18, // Opcode: MOV8rc
/* 29 */      MCD::OPC_FilterValue, 5, 21, 0, 0, // Skip to: 55
/* 34 */      MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 37 */      MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 46
/* 42 */      MCD::OPC_Decode, 181, 1, 19, // Opcode: ADD16rc
/* 46 */      MCD::OPC_FilterValue, 1, 8, 1, 0, // Skip to: 315
/* 51 */      MCD::OPC_Decode, 193, 1, 20, // Opcode: ADD8rc
/* 55 */      MCD::OPC_FilterValue, 6, 21, 0, 0, // Skip to: 81
/* 60 */      MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 63 */      MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 72
/* 68 */      MCD::OPC_Decode, 205, 1, 19, // Opcode: ADDC16rc
/* 72 */      MCD::OPC_FilterValue, 1, 238, 0, 0, // Skip to: 315
/* 77 */      MCD::OPC_Decode, 217, 1, 20, // Opcode: ADDC8rc
/* 81 */      MCD::OPC_FilterValue, 7, 21, 0, 0, // Skip to: 107
/* 86 */      MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 89 */      MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 98
/* 94 */      MCD::OPC_Decode, 207, 3, 19, // Opcode: SUBC16rc
/* 98 */      MCD::OPC_FilterValue, 1, 212, 0, 0, // Skip to: 315
/* 103 */     MCD::OPC_Decode, 219, 3, 20, // Opcode: SUBC8rc
/* 107 */     MCD::OPC_FilterValue, 8, 21, 0, 0, // Skip to: 133
/* 112 */     MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 115 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 124
/* 120 */     MCD::OPC_Decode, 183, 3, 19, // Opcode: SUB16rc
/* 124 */     MCD::OPC_FilterValue, 1, 186, 0, 0, // Skip to: 315
/* 129 */     MCD::OPC_Decode, 195, 3, 20, // Opcode: SUB8rc
/* 133 */     MCD::OPC_FilterValue, 9, 21, 0, 0, // Skip to: 159
/* 138 */     MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 141 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 150
/* 146 */     MCD::OPC_Decode, 208, 2, 17, // Opcode: CMP16rc
/* 150 */     MCD::OPC_FilterValue, 1, 160, 0, 0, // Skip to: 315
/* 155 */     MCD::OPC_Decode, 220, 2, 18, // Opcode: CMP8rc
/* 159 */     MCD::OPC_FilterValue, 10, 21, 0, 0, // Skip to: 185
/* 164 */     MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 167 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 176
/* 172 */     MCD::OPC_Decode, 232, 2, 19, // Opcode: DADD16rc
/* 176 */     MCD::OPC_FilterValue, 1, 134, 0, 0, // Skip to: 315
/* 181 */     MCD::OPC_Decode, 244, 2, 20, // Opcode: DADD8rc
/* 185 */     MCD::OPC_FilterValue, 11, 21, 0, 0, // Skip to: 211
/* 190 */     MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 193 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 202
/* 198 */     MCD::OPC_Decode, 176, 2, 17, // Opcode: BIT16rc
/* 202 */     MCD::OPC_FilterValue, 1, 108, 0, 0, // Skip to: 315
/* 207 */     MCD::OPC_Decode, 188, 2, 18, // Opcode: BIT8rc
/* 211 */     MCD::OPC_FilterValue, 12, 21, 0, 0, // Skip to: 237
/* 216 */     MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 219 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 228
/* 224 */     MCD::OPC_Decode, 128, 2, 19, // Opcode: BIC16rc
/* 228 */     MCD::OPC_FilterValue, 1, 82, 0, 0, // Skip to: 315
/* 233 */     MCD::OPC_Decode, 140, 2, 20, // Opcode: BIC8rc
/* 237 */     MCD::OPC_FilterValue, 13, 21, 0, 0, // Skip to: 263
/* 242 */     MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 245 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 254
/* 250 */     MCD::OPC_Decode, 152, 2, 19, // Opcode: BIS16rc
/* 254 */     MCD::OPC_FilterValue, 1, 56, 0, 0, // Skip to: 315
/* 259 */     MCD::OPC_Decode, 164, 2, 20, // Opcode: BIS8rc
/* 263 */     MCD::OPC_FilterValue, 14, 21, 0, 0, // Skip to: 289
/* 268 */     MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 271 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 280
/* 276 */     MCD::OPC_Decode, 243, 3, 19, // Opcode: XOR16rc
/* 280 */     MCD::OPC_FilterValue, 1, 30, 0, 0, // Skip to: 315
/* 285 */     MCD::OPC_Decode, 255, 3, 20, // Opcode: XOR8rc
/* 289 */     MCD::OPC_FilterValue, 15, 21, 0, 0, // Skip to: 315
/* 294 */     MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 297 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 306
/* 302 */     MCD::OPC_Decode, 232, 1, 19, // Opcode: AND16rc
/* 306 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 315
/* 311 */     MCD::OPC_Decode, 244, 1, 20, // Opcode: AND8rc
/* 315 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableBeta32[] = {
/* 0 */       MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3 */       MCD::OPC_FilterValue, 4, 21, 0, 0, // Skip to: 29
/* 8 */       MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 11 */      MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 20
/* 16 */      MCD::OPC_Decode, 252, 2, 21, // Opcode: MOV16mc
/* 20 */      MCD::OPC_FilterValue, 3, 34, 1, 0, // Skip to: 315
/* 25 */      MCD::OPC_Decode, 135, 3, 21, // Opcode: MOV8mc
/* 29 */      MCD::OPC_FilterValue, 5, 21, 0, 0, // Skip to: 55
/* 34 */      MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 37 */      MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 46
/* 42 */      MCD::OPC_Decode, 175, 1, 21, // Opcode: ADD16mc
/* 46 */      MCD::OPC_FilterValue, 3, 8, 1, 0, // Skip to: 315
/* 51 */      MCD::OPC_Decode, 187, 1, 21, // Opcode: ADD8mc
/* 55 */      MCD::OPC_FilterValue, 6, 21, 0, 0, // Skip to: 81
/* 60 */      MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 63 */      MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 72
/* 68 */      MCD::OPC_Decode, 199, 1, 21, // Opcode: ADDC16mc
/* 72 */      MCD::OPC_FilterValue, 3, 238, 0, 0, // Skip to: 315
/* 77 */      MCD::OPC_Decode, 211, 1, 21, // Opcode: ADDC8mc
/* 81 */      MCD::OPC_FilterValue, 7, 21, 0, 0, // Skip to: 107
/* 86 */      MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 89 */      MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 98
/* 94 */      MCD::OPC_Decode, 201, 3, 21, // Opcode: SUBC16mc
/* 98 */      MCD::OPC_FilterValue, 3, 212, 0, 0, // Skip to: 315
/* 103 */     MCD::OPC_Decode, 213, 3, 21, // Opcode: SUBC8mc
/* 107 */     MCD::OPC_FilterValue, 8, 21, 0, 0, // Skip to: 133
/* 112 */     MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 115 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 124
/* 120 */     MCD::OPC_Decode, 177, 3, 21, // Opcode: SUB16mc
/* 124 */     MCD::OPC_FilterValue, 3, 186, 0, 0, // Skip to: 315
/* 129 */     MCD::OPC_Decode, 189, 3, 21, // Opcode: SUB8mc
/* 133 */     MCD::OPC_FilterValue, 9, 21, 0, 0, // Skip to: 159
/* 138 */     MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 141 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 150
/* 146 */     MCD::OPC_Decode, 202, 2, 21, // Opcode: CMP16mc
/* 150 */     MCD::OPC_FilterValue, 3, 160, 0, 0, // Skip to: 315
/* 155 */     MCD::OPC_Decode, 214, 2, 21, // Opcode: CMP8mc
/* 159 */     MCD::OPC_FilterValue, 10, 21, 0, 0, // Skip to: 185
/* 164 */     MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 167 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 176
/* 172 */     MCD::OPC_Decode, 226, 2, 21, // Opcode: DADD16mc
/* 176 */     MCD::OPC_FilterValue, 3, 134, 0, 0, // Skip to: 315
/* 181 */     MCD::OPC_Decode, 238, 2, 21, // Opcode: DADD8mc
/* 185 */     MCD::OPC_FilterValue, 11, 21, 0, 0, // Skip to: 211
/* 190 */     MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 193 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 202
/* 198 */     MCD::OPC_Decode, 170, 2, 21, // Opcode: BIT16mc
/* 202 */     MCD::OPC_FilterValue, 3, 108, 0, 0, // Skip to: 315
/* 207 */     MCD::OPC_Decode, 182, 2, 21, // Opcode: BIT8mc
/* 211 */     MCD::OPC_FilterValue, 12, 21, 0, 0, // Skip to: 237
/* 216 */     MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 219 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 228
/* 224 */     MCD::OPC_Decode, 250, 1, 21, // Opcode: BIC16mc
/* 228 */     MCD::OPC_FilterValue, 3, 82, 0, 0, // Skip to: 315
/* 233 */     MCD::OPC_Decode, 134, 2, 21, // Opcode: BIC8mc
/* 237 */     MCD::OPC_FilterValue, 13, 21, 0, 0, // Skip to: 263
/* 242 */     MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 245 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 254
/* 250 */     MCD::OPC_Decode, 146, 2, 21, // Opcode: BIS16mc
/* 254 */     MCD::OPC_FilterValue, 3, 56, 0, 0, // Skip to: 315
/* 259 */     MCD::OPC_Decode, 158, 2, 21, // Opcode: BIS8mc
/* 263 */     MCD::OPC_FilterValue, 14, 21, 0, 0, // Skip to: 289
/* 268 */     MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 271 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 280
/* 276 */     MCD::OPC_Decode, 237, 3, 21, // Opcode: XOR16mc
/* 280 */     MCD::OPC_FilterValue, 3, 30, 0, 0, // Skip to: 315
/* 285 */     MCD::OPC_Decode, 249, 3, 21, // Opcode: XOR8mc
/* 289 */     MCD::OPC_FilterValue, 15, 21, 0, 0, // Skip to: 315
/* 294 */     MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 297 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 306
/* 302 */     MCD::OPC_Decode, 226, 1, 21, // Opcode: AND16mc
/* 306 */     MCD::OPC_FilterValue, 3, 4, 0, 0, // Skip to: 315
/* 311 */     MCD::OPC_Decode, 238, 1, 21, // Opcode: AND8mc
/* 315 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableDelta16[] = {
/* 0 */       MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3 */       MCD::OPC_FilterValue, 4, 68, 0, 0, // Skip to: 76
/* 8 */       MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 11 */      MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 20
/* 16 */      MCD::OPC_Decode, 132, 3, 11, // Opcode: MOV16rn
/* 20 */      MCD::OPC_FilterValue, 3, 33, 0, 0, // Skip to: 58
/* 25 */      MCD::OPC_CheckField, 8, 4, 1, 11, 0, 0, // Skip to: 43
/* 32 */      MCD::OPC_CheckField, 0, 4, 0, 4, 0, 0, // Skip to: 43
/* 39 */      MCD::OPC_Decode, 153, 3, 5, // Opcode: RET
/* 43 */      MCD::OPC_CheckField, 8, 4, 1, 4, 0, 0, // Skip to: 54
/* 50 */      MCD::OPC_Decode, 148, 3, 1, // Opcode: POP16r
/* 54 */      MCD::OPC_Decode, 133, 3, 22, // Opcode: MOV16rp
/* 58 */      MCD::OPC_FilterValue, 6, 4, 0, 0, // Skip to: 67
/* 63 */      MCD::OPC_Decode, 143, 3, 23, // Opcode: MOV8rn
/* 67 */      MCD::OPC_FilterValue, 7, 232, 1, 0, // Skip to: 560
/* 72 */      MCD::OPC_Decode, 144, 3, 24, // Opcode: MOV8rp
/* 76 */      MCD::OPC_FilterValue, 5, 39, 0, 0, // Skip to: 120
/* 81 */      MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 84 */      MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 93
/* 89 */      MCD::OPC_Decode, 184, 1, 13, // Opcode: ADD16rn
/* 93 */      MCD::OPC_FilterValue, 3, 4, 0, 0, // Skip to: 102
/* 98 */      MCD::OPC_Decode, 185, 1, 25, // Opcode: ADD16rp
/* 102 */     MCD::OPC_FilterValue, 6, 4, 0, 0, // Skip to: 111
/* 107 */     MCD::OPC_Decode, 196, 1, 26, // Opcode: ADD8rn
/* 111 */     MCD::OPC_FilterValue, 7, 188, 1, 0, // Skip to: 560
/* 116 */     MCD::OPC_Decode, 197, 1, 27, // Opcode: ADD8rp
/* 120 */     MCD::OPC_FilterValue, 6, 39, 0, 0, // Skip to: 164
/* 125 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 128 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 137
/* 133 */     MCD::OPC_Decode, 208, 1, 13, // Opcode: ADDC16rn
/* 137 */     MCD::OPC_FilterValue, 3, 4, 0, 0, // Skip to: 146
/* 142 */     MCD::OPC_Decode, 209, 1, 25, // Opcode: ADDC16rp
/* 146 */     MCD::OPC_FilterValue, 6, 4, 0, 0, // Skip to: 155
/* 151 */     MCD::OPC_Decode, 220, 1, 26, // Opcode: ADDC8rn
/* 155 */     MCD::OPC_FilterValue, 7, 144, 1, 0, // Skip to: 560
/* 160 */     MCD::OPC_Decode, 221, 1, 27, // Opcode: ADDC8rp
/* 164 */     MCD::OPC_FilterValue, 7, 39, 0, 0, // Skip to: 208
/* 169 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 172 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 181
/* 177 */     MCD::OPC_Decode, 210, 3, 13, // Opcode: SUBC16rn
/* 181 */     MCD::OPC_FilterValue, 3, 4, 0, 0, // Skip to: 190
/* 186 */     MCD::OPC_Decode, 211, 3, 25, // Opcode: SUBC16rp
/* 190 */     MCD::OPC_FilterValue, 6, 4, 0, 0, // Skip to: 199
/* 195 */     MCD::OPC_Decode, 222, 3, 26, // Opcode: SUBC8rn
/* 199 */     MCD::OPC_FilterValue, 7, 100, 1, 0, // Skip to: 560
/* 204 */     MCD::OPC_Decode, 223, 3, 27, // Opcode: SUBC8rp
/* 208 */     MCD::OPC_FilterValue, 8, 39, 0, 0, // Skip to: 252
/* 213 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 216 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 225
/* 221 */     MCD::OPC_Decode, 186, 3, 13, // Opcode: SUB16rn
/* 225 */     MCD::OPC_FilterValue, 3, 4, 0, 0, // Skip to: 234
/* 230 */     MCD::OPC_Decode, 187, 3, 25, // Opcode: SUB16rp
/* 234 */     MCD::OPC_FilterValue, 6, 4, 0, 0, // Skip to: 243
/* 239 */     MCD::OPC_Decode, 198, 3, 26, // Opcode: SUB8rn
/* 243 */     MCD::OPC_FilterValue, 7, 56, 1, 0, // Skip to: 560
/* 248 */     MCD::OPC_Decode, 199, 3, 27, // Opcode: SUB8rp
/* 252 */     MCD::OPC_FilterValue, 9, 39, 0, 0, // Skip to: 296
/* 257 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 260 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 269
/* 265 */     MCD::OPC_Decode, 211, 2, 11, // Opcode: CMP16rn
/* 269 */     MCD::OPC_FilterValue, 3, 4, 0, 0, // Skip to: 278
/* 274 */     MCD::OPC_Decode, 212, 2, 11, // Opcode: CMP16rp
/* 278 */     MCD::OPC_FilterValue, 6, 4, 0, 0, // Skip to: 287
/* 283 */     MCD::OPC_Decode, 223, 2, 23, // Opcode: CMP8rn
/* 287 */     MCD::OPC_FilterValue, 7, 12, 1, 0, // Skip to: 560
/* 292 */     MCD::OPC_Decode, 224, 2, 23, // Opcode: CMP8rp
/* 296 */     MCD::OPC_FilterValue, 10, 39, 0, 0, // Skip to: 340
/* 301 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 304 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 313
/* 309 */     MCD::OPC_Decode, 235, 2, 13, // Opcode: DADD16rn
/* 313 */     MCD::OPC_FilterValue, 3, 4, 0, 0, // Skip to: 322
/* 318 */     MCD::OPC_Decode, 236, 2, 25, // Opcode: DADD16rp
/* 322 */     MCD::OPC_FilterValue, 6, 4, 0, 0, // Skip to: 331
/* 327 */     MCD::OPC_Decode, 247, 2, 26, // Opcode: DADD8rn
/* 331 */     MCD::OPC_FilterValue, 7, 224, 0, 0, // Skip to: 560
/* 336 */     MCD::OPC_Decode, 248, 2, 27, // Opcode: DADD8rp
/* 340 */     MCD::OPC_FilterValue, 11, 39, 0, 0, // Skip to: 384
/* 345 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 348 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 357
/* 353 */     MCD::OPC_Decode, 179, 2, 11, // Opcode: BIT16rn
/* 357 */     MCD::OPC_FilterValue, 3, 4, 0, 0, // Skip to: 366
/* 362 */     MCD::OPC_Decode, 180, 2, 11, // Opcode: BIT16rp
/* 366 */     MCD::OPC_FilterValue, 6, 4, 0, 0, // Skip to: 375
/* 371 */     MCD::OPC_Decode, 191, 2, 23, // Opcode: BIT8rn
/* 375 */     MCD::OPC_FilterValue, 7, 180, 0, 0, // Skip to: 560
/* 380 */     MCD::OPC_Decode, 192, 2, 23, // Opcode: BIT8rp
/* 384 */     MCD::OPC_FilterValue, 12, 39, 0, 0, // Skip to: 428
/* 389 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 392 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 401
/* 397 */     MCD::OPC_Decode, 131, 2, 13, // Opcode: BIC16rn
/* 401 */     MCD::OPC_FilterValue, 3, 4, 0, 0, // Skip to: 410
/* 406 */     MCD::OPC_Decode, 132, 2, 25, // Opcode: BIC16rp
/* 410 */     MCD::OPC_FilterValue, 6, 4, 0, 0, // Skip to: 419
/* 415 */     MCD::OPC_Decode, 143, 2, 26, // Opcode: BIC8rn
/* 419 */     MCD::OPC_FilterValue, 7, 136, 0, 0, // Skip to: 560
/* 424 */     MCD::OPC_Decode, 144, 2, 27, // Opcode: BIC8rp
/* 428 */     MCD::OPC_FilterValue, 13, 39, 0, 0, // Skip to: 472
/* 433 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 436 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 445
/* 441 */     MCD::OPC_Decode, 155, 2, 13, // Opcode: BIS16rn
/* 445 */     MCD::OPC_FilterValue, 3, 4, 0, 0, // Skip to: 454
/* 450 */     MCD::OPC_Decode, 156, 2, 25, // Opcode: BIS16rp
/* 454 */     MCD::OPC_FilterValue, 6, 4, 0, 0, // Skip to: 463
/* 459 */     MCD::OPC_Decode, 167, 2, 26, // Opcode: BIS8rn
/* 463 */     MCD::OPC_FilterValue, 7, 92, 0, 0, // Skip to: 560
/* 468 */     MCD::OPC_Decode, 168, 2, 27, // Opcode: BIS8rp
/* 472 */     MCD::OPC_FilterValue, 14, 39, 0, 0, // Skip to: 516
/* 477 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 480 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 489
/* 485 */     MCD::OPC_Decode, 246, 3, 13, // Opcode: XOR16rn
/* 489 */     MCD::OPC_FilterValue, 3, 4, 0, 0, // Skip to: 498
/* 494 */     MCD::OPC_Decode, 247, 3, 25, // Opcode: XOR16rp
/* 498 */     MCD::OPC_FilterValue, 6, 4, 0, 0, // Skip to: 507
/* 503 */     MCD::OPC_Decode, 130, 4, 26, // Opcode: XOR8rn
/* 507 */     MCD::OPC_FilterValue, 7, 48, 0, 0, // Skip to: 560
/* 512 */     MCD::OPC_Decode, 131, 4, 27, // Opcode: XOR8rp
/* 516 */     MCD::OPC_FilterValue, 15, 39, 0, 0, // Skip to: 560
/* 521 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 524 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 533
/* 529 */     MCD::OPC_Decode, 235, 1, 13, // Opcode: AND16rn
/* 533 */     MCD::OPC_FilterValue, 3, 4, 0, 0, // Skip to: 542
/* 538 */     MCD::OPC_Decode, 236, 1, 25, // Opcode: AND16rp
/* 542 */     MCD::OPC_FilterValue, 6, 4, 0, 0, // Skip to: 551
/* 547 */     MCD::OPC_Decode, 247, 1, 26, // Opcode: AND8rn
/* 551 */     MCD::OPC_FilterValue, 7, 4, 0, 0, // Skip to: 560
/* 556 */     MCD::OPC_Decode, 248, 1, 27, // Opcode: AND8rp
/* 560 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableDelta32[] = {
/* 0 */       MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3 */       MCD::OPC_FilterValue, 4, 21, 0, 0, // Skip to: 29
/* 8 */       MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 11 */      MCD::OPC_FilterValue, 10, 4, 0, 0, // Skip to: 20
/* 16 */      MCD::OPC_Decode, 255, 2, 15, // Opcode: MOV16mn
/* 20 */      MCD::OPC_FilterValue, 14, 232, 1, 0, // Skip to: 513
/* 25 */      MCD::OPC_Decode, 138, 3, 15, // Opcode: MOV8mn
/* 29 */      MCD::OPC_FilterValue, 5, 39, 0, 0, // Skip to: 73
/* 34 */      MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 37 */      MCD::OPC_FilterValue, 10, 4, 0, 0, // Skip to: 46
/* 42 */      MCD::OPC_Decode, 178, 1, 15, // Opcode: ADD16mn
/* 46 */      MCD::OPC_FilterValue, 11, 4, 0, 0, // Skip to: 55
/* 51 */      MCD::OPC_Decode, 179, 1, 15, // Opcode: ADD16mp
/* 55 */      MCD::OPC_FilterValue, 14, 4, 0, 0, // Skip to: 64
/* 60 */      MCD::OPC_Decode, 190, 1, 15, // Opcode: ADD8mn
/* 64 */      MCD::OPC_FilterValue, 15, 188, 1, 0, // Skip to: 513
/* 69 */      MCD::OPC_Decode, 191, 1, 15, // Opcode: ADD8mp
/* 73 */      MCD::OPC_FilterValue, 6, 39, 0, 0, // Skip to: 117
/* 78 */      MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 81 */      MCD::OPC_FilterValue, 10, 4, 0, 0, // Skip to: 90
/* 86 */      MCD::OPC_Decode, 202, 1, 15, // Opcode: ADDC16mn
/* 90 */      MCD::OPC_FilterValue, 11, 4, 0, 0, // Skip to: 99
/* 95 */      MCD::OPC_Decode, 203, 1, 15, // Opcode: ADDC16mp
/* 99 */      MCD::OPC_FilterValue, 14, 4, 0, 0, // Skip to: 108
/* 104 */     MCD::OPC_Decode, 214, 1, 15, // Opcode: ADDC8mn
/* 108 */     MCD::OPC_FilterValue, 15, 144, 1, 0, // Skip to: 513
/* 113 */     MCD::OPC_Decode, 215, 1, 15, // Opcode: ADDC8mp
/* 117 */     MCD::OPC_FilterValue, 7, 39, 0, 0, // Skip to: 161
/* 122 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 125 */     MCD::OPC_FilterValue, 10, 4, 0, 0, // Skip to: 134
/* 130 */     MCD::OPC_Decode, 204, 3, 15, // Opcode: SUBC16mn
/* 134 */     MCD::OPC_FilterValue, 11, 4, 0, 0, // Skip to: 143
/* 139 */     MCD::OPC_Decode, 205, 3, 15, // Opcode: SUBC16mp
/* 143 */     MCD::OPC_FilterValue, 14, 4, 0, 0, // Skip to: 152
/* 148 */     MCD::OPC_Decode, 216, 3, 15, // Opcode: SUBC8mn
/* 152 */     MCD::OPC_FilterValue, 15, 100, 1, 0, // Skip to: 513
/* 157 */     MCD::OPC_Decode, 217, 3, 15, // Opcode: SUBC8mp
/* 161 */     MCD::OPC_FilterValue, 8, 39, 0, 0, // Skip to: 205
/* 166 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 169 */     MCD::OPC_FilterValue, 10, 4, 0, 0, // Skip to: 178
/* 174 */     MCD::OPC_Decode, 180, 3, 15, // Opcode: SUB16mn
/* 178 */     MCD::OPC_FilterValue, 11, 4, 0, 0, // Skip to: 187
/* 183 */     MCD::OPC_Decode, 181, 3, 15, // Opcode: SUB16mp
/* 187 */     MCD::OPC_FilterValue, 14, 4, 0, 0, // Skip to: 196
/* 192 */     MCD::OPC_Decode, 192, 3, 15, // Opcode: SUB8mn
/* 196 */     MCD::OPC_FilterValue, 15, 56, 1, 0, // Skip to: 513
/* 201 */     MCD::OPC_Decode, 193, 3, 15, // Opcode: SUB8mp
/* 205 */     MCD::OPC_FilterValue, 9, 39, 0, 0, // Skip to: 249
/* 210 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 213 */     MCD::OPC_FilterValue, 10, 4, 0, 0, // Skip to: 222
/* 218 */     MCD::OPC_Decode, 205, 2, 15, // Opcode: CMP16mn
/* 222 */     MCD::OPC_FilterValue, 11, 4, 0, 0, // Skip to: 231
/* 227 */     MCD::OPC_Decode, 206, 2, 15, // Opcode: CMP16mp
/* 231 */     MCD::OPC_FilterValue, 14, 4, 0, 0, // Skip to: 240
/* 236 */     MCD::OPC_Decode, 217, 2, 15, // Opcode: CMP8mn
/* 240 */     MCD::OPC_FilterValue, 15, 12, 1, 0, // Skip to: 513
/* 245 */     MCD::OPC_Decode, 218, 2, 15, // Opcode: CMP8mp
/* 249 */     MCD::OPC_FilterValue, 10, 39, 0, 0, // Skip to: 293
/* 254 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 257 */     MCD::OPC_FilterValue, 10, 4, 0, 0, // Skip to: 266
/* 262 */     MCD::OPC_Decode, 229, 2, 15, // Opcode: DADD16mn
/* 266 */     MCD::OPC_FilterValue, 11, 4, 0, 0, // Skip to: 275
/* 271 */     MCD::OPC_Decode, 230, 2, 15, // Opcode: DADD16mp
/* 275 */     MCD::OPC_FilterValue, 14, 4, 0, 0, // Skip to: 284
/* 280 */     MCD::OPC_Decode, 241, 2, 15, // Opcode: DADD8mn
/* 284 */     MCD::OPC_FilterValue, 15, 224, 0, 0, // Skip to: 513
/* 289 */     MCD::OPC_Decode, 242, 2, 15, // Opcode: DADD8mp
/* 293 */     MCD::OPC_FilterValue, 11, 39, 0, 0, // Skip to: 337
/* 298 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 301 */     MCD::OPC_FilterValue, 10, 4, 0, 0, // Skip to: 310
/* 306 */     MCD::OPC_Decode, 173, 2, 15, // Opcode: BIT16mn
/* 310 */     MCD::OPC_FilterValue, 11, 4, 0, 0, // Skip to: 319
/* 315 */     MCD::OPC_Decode, 174, 2, 15, // Opcode: BIT16mp
/* 319 */     MCD::OPC_FilterValue, 14, 4, 0, 0, // Skip to: 328
/* 324 */     MCD::OPC_Decode, 185, 2, 15, // Opcode: BIT8mn
/* 328 */     MCD::OPC_FilterValue, 15, 180, 0, 0, // Skip to: 513
/* 333 */     MCD::OPC_Decode, 186, 2, 15, // Opcode: BIT8mp
/* 337 */     MCD::OPC_FilterValue, 12, 39, 0, 0, // Skip to: 381
/* 342 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 345 */     MCD::OPC_FilterValue, 10, 4, 0, 0, // Skip to: 354
/* 350 */     MCD::OPC_Decode, 253, 1, 15, // Opcode: BIC16mn
/* 354 */     MCD::OPC_FilterValue, 11, 4, 0, 0, // Skip to: 363
/* 359 */     MCD::OPC_Decode, 254, 1, 15, // Opcode: BIC16mp
/* 363 */     MCD::OPC_FilterValue, 14, 4, 0, 0, // Skip to: 372
/* 368 */     MCD::OPC_Decode, 137, 2, 15, // Opcode: BIC8mn
/* 372 */     MCD::OPC_FilterValue, 15, 136, 0, 0, // Skip to: 513
/* 377 */     MCD::OPC_Decode, 138, 2, 15, // Opcode: BIC8mp
/* 381 */     MCD::OPC_FilterValue, 13, 39, 0, 0, // Skip to: 425
/* 386 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 389 */     MCD::OPC_FilterValue, 10, 4, 0, 0, // Skip to: 398
/* 394 */     MCD::OPC_Decode, 149, 2, 15, // Opcode: BIS16mn
/* 398 */     MCD::OPC_FilterValue, 11, 4, 0, 0, // Skip to: 407
/* 403 */     MCD::OPC_Decode, 150, 2, 15, // Opcode: BIS16mp
/* 407 */     MCD::OPC_FilterValue, 14, 4, 0, 0, // Skip to: 416
/* 412 */     MCD::OPC_Decode, 161, 2, 15, // Opcode: BIS8mn
/* 416 */     MCD::OPC_FilterValue, 15, 92, 0, 0, // Skip to: 513
/* 421 */     MCD::OPC_Decode, 162, 2, 15, // Opcode: BIS8mp
/* 425 */     MCD::OPC_FilterValue, 14, 39, 0, 0, // Skip to: 469
/* 430 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 433 */     MCD::OPC_FilterValue, 10, 4, 0, 0, // Skip to: 442
/* 438 */     MCD::OPC_Decode, 240, 3, 15, // Opcode: XOR16mn
/* 442 */     MCD::OPC_FilterValue, 11, 4, 0, 0, // Skip to: 451
/* 447 */     MCD::OPC_Decode, 241, 3, 15, // Opcode: XOR16mp
/* 451 */     MCD::OPC_FilterValue, 14, 4, 0, 0, // Skip to: 460
/* 456 */     MCD::OPC_Decode, 252, 3, 15, // Opcode: XOR8mn
/* 460 */     MCD::OPC_FilterValue, 15, 48, 0, 0, // Skip to: 513
/* 465 */     MCD::OPC_Decode, 253, 3, 15, // Opcode: XOR8mp
/* 469 */     MCD::OPC_FilterValue, 15, 39, 0, 0, // Skip to: 513
/* 474 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 477 */     MCD::OPC_FilterValue, 10, 4, 0, 0, // Skip to: 486
/* 482 */     MCD::OPC_Decode, 229, 1, 15, // Opcode: AND16mn
/* 486 */     MCD::OPC_FilterValue, 11, 4, 0, 0, // Skip to: 495
/* 491 */     MCD::OPC_Decode, 230, 1, 15, // Opcode: AND16mp
/* 495 */     MCD::OPC_FilterValue, 14, 4, 0, 0, // Skip to: 504
/* 500 */     MCD::OPC_Decode, 241, 1, 15, // Opcode: AND8mn
/* 504 */     MCD::OPC_FilterValue, 15, 4, 0, 0, // Skip to: 513
/* 509 */     MCD::OPC_Decode, 242, 1, 15, // Opcode: AND8mp
/* 513 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableGamma32[] = {
/* 0 */       MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3 */       MCD::OPC_FilterValue, 4, 76, 0, 0, // Skip to: 84
/* 8 */       MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 11 */      MCD::OPC_FilterValue, 1, 15, 0, 0, // Skip to: 31
/* 16 */      MCD::OPC_CheckField, 0, 4, 0, 4, 0, 0, // Skip to: 27
/* 23 */      MCD::OPC_Decode, 195, 2, 28, // Opcode: Bm
/* 27 */      MCD::OPC_Decode, 131, 3, 29, // Opcode: MOV16rm
/* 31 */      MCD::OPC_FilterValue, 3, 23, 0, 0, // Skip to: 59
/* 36 */      MCD::OPC_ExtractField, 8, 4,  // Inst{11-8} ...
/* 39 */      MCD::OPC_FilterValue, 0, 166, 2, 0, // Skip to: 722
/* 44 */      MCD::OPC_CheckField, 0, 4, 0, 4, 0, 0, // Skip to: 55
/* 51 */      MCD::OPC_Decode, 194, 2, 9, // Opcode: Bi
/* 55 */      MCD::OPC_Decode, 130, 3, 30, // Opcode: MOV16ri
/* 59 */      MCD::OPC_FilterValue, 5, 4, 0, 0, // Skip to: 68
/* 64 */      MCD::OPC_Decode, 142, 3, 31, // Opcode: MOV8rm
/* 68 */      MCD::OPC_FilterValue, 7, 137, 2, 0, // Skip to: 722
/* 73 */      MCD::OPC_CheckField, 8, 4, 0, 130, 2, 0, // Skip to: 722
/* 80 */      MCD::OPC_Decode, 141, 3, 32, // Opcode: MOV8ri
/* 84 */      MCD::OPC_FilterValue, 5, 53, 0, 0, // Skip to: 142
/* 89 */      MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 92 */      MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 101
/* 97 */      MCD::OPC_Decode, 183, 1, 33, // Opcode: ADD16rm
/* 101 */     MCD::OPC_FilterValue, 3, 11, 0, 0, // Skip to: 117
/* 106 */     MCD::OPC_CheckField, 8, 4, 0, 97, 2, 0, // Skip to: 722
/* 113 */     MCD::OPC_Decode, 182, 1, 34, // Opcode: ADD16ri
/* 117 */     MCD::OPC_FilterValue, 5, 4, 0, 0, // Skip to: 126
/* 122 */     MCD::OPC_Decode, 195, 1, 35, // Opcode: ADD8rm
/* 126 */     MCD::OPC_FilterValue, 7, 79, 2, 0, // Skip to: 722
/* 131 */     MCD::OPC_CheckField, 8, 4, 0, 72, 2, 0, // Skip to: 722
/* 138 */     MCD::OPC_Decode, 194, 1, 36, // Opcode: ADD8ri
/* 142 */     MCD::OPC_FilterValue, 6, 53, 0, 0, // Skip to: 200
/* 147 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 150 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 159
/* 155 */     MCD::OPC_Decode, 207, 1, 33, // Opcode: ADDC16rm
/* 159 */     MCD::OPC_FilterValue, 3, 11, 0, 0, // Skip to: 175
/* 164 */     MCD::OPC_CheckField, 8, 4, 0, 39, 2, 0, // Skip to: 722
/* 171 */     MCD::OPC_Decode, 206, 1, 34, // Opcode: ADDC16ri
/* 175 */     MCD::OPC_FilterValue, 5, 4, 0, 0, // Skip to: 184
/* 180 */     MCD::OPC_Decode, 219, 1, 35, // Opcode: ADDC8rm
/* 184 */     MCD::OPC_FilterValue, 7, 21, 2, 0, // Skip to: 722
/* 189 */     MCD::OPC_CheckField, 8, 4, 0, 14, 2, 0, // Skip to: 722
/* 196 */     MCD::OPC_Decode, 218, 1, 36, // Opcode: ADDC8ri
/* 200 */     MCD::OPC_FilterValue, 7, 53, 0, 0, // Skip to: 258
/* 205 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 208 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 217
/* 213 */     MCD::OPC_Decode, 209, 3, 33, // Opcode: SUBC16rm
/* 217 */     MCD::OPC_FilterValue, 3, 11, 0, 0, // Skip to: 233
/* 222 */     MCD::OPC_CheckField, 8, 4, 0, 237, 1, 0, // Skip to: 722
/* 229 */     MCD::OPC_Decode, 208, 3, 34, // Opcode: SUBC16ri
/* 233 */     MCD::OPC_FilterValue, 5, 4, 0, 0, // Skip to: 242
/* 238 */     MCD::OPC_Decode, 221, 3, 35, // Opcode: SUBC8rm
/* 242 */     MCD::OPC_FilterValue, 7, 219, 1, 0, // Skip to: 722
/* 247 */     MCD::OPC_CheckField, 8, 4, 0, 212, 1, 0, // Skip to: 722
/* 254 */     MCD::OPC_Decode, 220, 3, 36, // Opcode: SUBC8ri
/* 258 */     MCD::OPC_FilterValue, 8, 53, 0, 0, // Skip to: 316
/* 263 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 266 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 275
/* 271 */     MCD::OPC_Decode, 185, 3, 33, // Opcode: SUB16rm
/* 275 */     MCD::OPC_FilterValue, 3, 11, 0, 0, // Skip to: 291
/* 280 */     MCD::OPC_CheckField, 8, 4, 0, 179, 1, 0, // Skip to: 722
/* 287 */     MCD::OPC_Decode, 184, 3, 34, // Opcode: SUB16ri
/* 291 */     MCD::OPC_FilterValue, 5, 4, 0, 0, // Skip to: 300
/* 296 */     MCD::OPC_Decode, 197, 3, 35, // Opcode: SUB8rm
/* 300 */     MCD::OPC_FilterValue, 7, 161, 1, 0, // Skip to: 722
/* 305 */     MCD::OPC_CheckField, 8, 4, 0, 154, 1, 0, // Skip to: 722
/* 312 */     MCD::OPC_Decode, 196, 3, 36, // Opcode: SUB8ri
/* 316 */     MCD::OPC_FilterValue, 9, 53, 0, 0, // Skip to: 374
/* 321 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 324 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 333
/* 329 */     MCD::OPC_Decode, 210, 2, 29, // Opcode: CMP16rm
/* 333 */     MCD::OPC_FilterValue, 3, 11, 0, 0, // Skip to: 349
/* 338 */     MCD::OPC_CheckField, 8, 4, 0, 121, 1, 0, // Skip to: 722
/* 345 */     MCD::OPC_Decode, 209, 2, 30, // Opcode: CMP16ri
/* 349 */     MCD::OPC_FilterValue, 5, 4, 0, 0, // Skip to: 358
/* 354 */     MCD::OPC_Decode, 222, 2, 31, // Opcode: CMP8rm
/* 358 */     MCD::OPC_FilterValue, 7, 103, 1, 0, // Skip to: 722
/* 363 */     MCD::OPC_CheckField, 8, 4, 0, 96, 1, 0, // Skip to: 722
/* 370 */     MCD::OPC_Decode, 221, 2, 32, // Opcode: CMP8ri
/* 374 */     MCD::OPC_FilterValue, 10, 53, 0, 0, // Skip to: 432
/* 379 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 382 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 391
/* 387 */     MCD::OPC_Decode, 234, 2, 33, // Opcode: DADD16rm
/* 391 */     MCD::OPC_FilterValue, 3, 11, 0, 0, // Skip to: 407
/* 396 */     MCD::OPC_CheckField, 8, 4, 0, 63, 1, 0, // Skip to: 722
/* 403 */     MCD::OPC_Decode, 233, 2, 34, // Opcode: DADD16ri
/* 407 */     MCD::OPC_FilterValue, 5, 4, 0, 0, // Skip to: 416
/* 412 */     MCD::OPC_Decode, 246, 2, 35, // Opcode: DADD8rm
/* 416 */     MCD::OPC_FilterValue, 7, 45, 1, 0, // Skip to: 722
/* 421 */     MCD::OPC_CheckField, 8, 4, 0, 38, 1, 0, // Skip to: 722
/* 428 */     MCD::OPC_Decode, 245, 2, 36, // Opcode: DADD8ri
/* 432 */     MCD::OPC_FilterValue, 11, 53, 0, 0, // Skip to: 490
/* 437 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 440 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 449
/* 445 */     MCD::OPC_Decode, 178, 2, 29, // Opcode: BIT16rm
/* 449 */     MCD::OPC_FilterValue, 3, 11, 0, 0, // Skip to: 465
/* 454 */     MCD::OPC_CheckField, 8, 4, 0, 5, 1, 0, // Skip to: 722
/* 461 */     MCD::OPC_Decode, 177, 2, 30, // Opcode: BIT16ri
/* 465 */     MCD::OPC_FilterValue, 5, 4, 0, 0, // Skip to: 474
/* 470 */     MCD::OPC_Decode, 190, 2, 31, // Opcode: BIT8rm
/* 474 */     MCD::OPC_FilterValue, 7, 243, 0, 0, // Skip to: 722
/* 479 */     MCD::OPC_CheckField, 8, 4, 0, 236, 0, 0, // Skip to: 722
/* 486 */     MCD::OPC_Decode, 189, 2, 32, // Opcode: BIT8ri
/* 490 */     MCD::OPC_FilterValue, 12, 53, 0, 0, // Skip to: 548
/* 495 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 498 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 507
/* 503 */     MCD::OPC_Decode, 130, 2, 33, // Opcode: BIC16rm
/* 507 */     MCD::OPC_FilterValue, 3, 11, 0, 0, // Skip to: 523
/* 512 */     MCD::OPC_CheckField, 8, 4, 0, 203, 0, 0, // Skip to: 722
/* 519 */     MCD::OPC_Decode, 129, 2, 34, // Opcode: BIC16ri
/* 523 */     MCD::OPC_FilterValue, 5, 4, 0, 0, // Skip to: 532
/* 528 */     MCD::OPC_Decode, 142, 2, 35, // Opcode: BIC8rm
/* 532 */     MCD::OPC_FilterValue, 7, 185, 0, 0, // Skip to: 722
/* 537 */     MCD::OPC_CheckField, 8, 4, 0, 178, 0, 0, // Skip to: 722
/* 544 */     MCD::OPC_Decode, 141, 2, 36, // Opcode: BIC8ri
/* 548 */     MCD::OPC_FilterValue, 13, 53, 0, 0, // Skip to: 606
/* 553 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 556 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 565
/* 561 */     MCD::OPC_Decode, 154, 2, 33, // Opcode: BIS16rm
/* 565 */     MCD::OPC_FilterValue, 3, 11, 0, 0, // Skip to: 581
/* 570 */     MCD::OPC_CheckField, 8, 4, 0, 145, 0, 0, // Skip to: 722
/* 577 */     MCD::OPC_Decode, 153, 2, 34, // Opcode: BIS16ri
/* 581 */     MCD::OPC_FilterValue, 5, 4, 0, 0, // Skip to: 590
/* 586 */     MCD::OPC_Decode, 166, 2, 35, // Opcode: BIS8rm
/* 590 */     MCD::OPC_FilterValue, 7, 127, 0, 0, // Skip to: 722
/* 595 */     MCD::OPC_CheckField, 8, 4, 0, 120, 0, 0, // Skip to: 722
/* 602 */     MCD::OPC_Decode, 165, 2, 36, // Opcode: BIS8ri
/* 606 */     MCD::OPC_FilterValue, 14, 53, 0, 0, // Skip to: 664
/* 611 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 614 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 623
/* 619 */     MCD::OPC_Decode, 245, 3, 33, // Opcode: XOR16rm
/* 623 */     MCD::OPC_FilterValue, 3, 11, 0, 0, // Skip to: 639
/* 628 */     MCD::OPC_CheckField, 8, 4, 0, 87, 0, 0, // Skip to: 722
/* 635 */     MCD::OPC_Decode, 244, 3, 34, // Opcode: XOR16ri
/* 639 */     MCD::OPC_FilterValue, 5, 4, 0, 0, // Skip to: 648
/* 644 */     MCD::OPC_Decode, 129, 4, 35, // Opcode: XOR8rm
/* 648 */     MCD::OPC_FilterValue, 7, 69, 0, 0, // Skip to: 722
/* 653 */     MCD::OPC_CheckField, 8, 4, 0, 62, 0, 0, // Skip to: 722
/* 660 */     MCD::OPC_Decode, 128, 4, 36, // Opcode: XOR8ri
/* 664 */     MCD::OPC_FilterValue, 15, 53, 0, 0, // Skip to: 722
/* 669 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 672 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 681
/* 677 */     MCD::OPC_Decode, 234, 1, 33, // Opcode: AND16rm
/* 681 */     MCD::OPC_FilterValue, 3, 11, 0, 0, // Skip to: 697
/* 686 */     MCD::OPC_CheckField, 8, 4, 0, 29, 0, 0, // Skip to: 722
/* 693 */     MCD::OPC_Decode, 233, 1, 34, // Opcode: AND16ri
/* 697 */     MCD::OPC_FilterValue, 5, 4, 0, 0, // Skip to: 706
/* 702 */     MCD::OPC_Decode, 246, 1, 35, // Opcode: AND8rm
/* 706 */     MCD::OPC_FilterValue, 7, 11, 0, 0, // Skip to: 722
/* 711 */     MCD::OPC_CheckField, 8, 4, 0, 4, 0, 0, // Skip to: 722
/* 718 */     MCD::OPC_Decode, 245, 1, 36, // Opcode: AND8ri
/* 722 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableGamma48[] = {
/* 0 */       MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3 */       MCD::OPC_FilterValue, 4, 53, 0, 0, // Skip to: 61
/* 8 */       MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 11 */      MCD::OPC_FilterValue, 9, 4, 0, 0, // Skip to: 20
/* 16 */      MCD::OPC_Decode, 254, 2, 37, // Opcode: MOV16mm
/* 20 */      MCD::OPC_FilterValue, 11, 11, 0, 0, // Skip to: 36
/* 25 */      MCD::OPC_CheckField, 8, 4, 0, 155, 2, 0, // Skip to: 699
/* 32 */      MCD::OPC_Decode, 253, 2, 38, // Opcode: MOV16mi
/* 36 */      MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 45
/* 41 */      MCD::OPC_Decode, 137, 3, 37, // Opcode: MOV8mm
/* 45 */      MCD::OPC_FilterValue, 15, 137, 2, 0, // Skip to: 699
/* 50 */      MCD::OPC_CheckField, 8, 4, 0, 130, 2, 0, // Skip to: 699
/* 57 */      MCD::OPC_Decode, 136, 3, 38, // Opcode: MOV8mi
/* 61 */      MCD::OPC_FilterValue, 5, 53, 0, 0, // Skip to: 119
/* 66 */      MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 69 */      MCD::OPC_FilterValue, 9, 4, 0, 0, // Skip to: 78
/* 74 */      MCD::OPC_Decode, 177, 1, 37, // Opcode: ADD16mm
/* 78 */      MCD::OPC_FilterValue, 11, 11, 0, 0, // Skip to: 94
/* 83 */      MCD::OPC_CheckField, 8, 4, 0, 97, 2, 0, // Skip to: 699
/* 90 */      MCD::OPC_Decode, 176, 1, 38, // Opcode: ADD16mi
/* 94 */      MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 103
/* 99 */      MCD::OPC_Decode, 189, 1, 37, // Opcode: ADD8mm
/* 103 */     MCD::OPC_FilterValue, 15, 79, 2, 0, // Skip to: 699
/* 108 */     MCD::OPC_CheckField, 8, 4, 0, 72, 2, 0, // Skip to: 699
/* 115 */     MCD::OPC_Decode, 188, 1, 38, // Opcode: ADD8mi
/* 119 */     MCD::OPC_FilterValue, 6, 53, 0, 0, // Skip to: 177
/* 124 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 127 */     MCD::OPC_FilterValue, 9, 4, 0, 0, // Skip to: 136
/* 132 */     MCD::OPC_Decode, 201, 1, 37, // Opcode: ADDC16mm
/* 136 */     MCD::OPC_FilterValue, 11, 11, 0, 0, // Skip to: 152
/* 141 */     MCD::OPC_CheckField, 8, 4, 0, 39, 2, 0, // Skip to: 699
/* 148 */     MCD::OPC_Decode, 200, 1, 38, // Opcode: ADDC16mi
/* 152 */     MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 161
/* 157 */     MCD::OPC_Decode, 213, 1, 37, // Opcode: ADDC8mm
/* 161 */     MCD::OPC_FilterValue, 15, 21, 2, 0, // Skip to: 699
/* 166 */     MCD::OPC_CheckField, 8, 4, 0, 14, 2, 0, // Skip to: 699
/* 173 */     MCD::OPC_Decode, 212, 1, 38, // Opcode: ADDC8mi
/* 177 */     MCD::OPC_FilterValue, 7, 53, 0, 0, // Skip to: 235
/* 182 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 185 */     MCD::OPC_FilterValue, 9, 4, 0, 0, // Skip to: 194
/* 190 */     MCD::OPC_Decode, 203, 3, 37, // Opcode: SUBC16mm
/* 194 */     MCD::OPC_FilterValue, 11, 11, 0, 0, // Skip to: 210
/* 199 */     MCD::OPC_CheckField, 8, 4, 0, 237, 1, 0, // Skip to: 699
/* 206 */     MCD::OPC_Decode, 202, 3, 38, // Opcode: SUBC16mi
/* 210 */     MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 219
/* 215 */     MCD::OPC_Decode, 215, 3, 37, // Opcode: SUBC8mm
/* 219 */     MCD::OPC_FilterValue, 15, 219, 1, 0, // Skip to: 699
/* 224 */     MCD::OPC_CheckField, 8, 4, 0, 212, 1, 0, // Skip to: 699
/* 231 */     MCD::OPC_Decode, 214, 3, 38, // Opcode: SUBC8mi
/* 235 */     MCD::OPC_FilterValue, 8, 53, 0, 0, // Skip to: 293
/* 240 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 243 */     MCD::OPC_FilterValue, 9, 4, 0, 0, // Skip to: 252
/* 248 */     MCD::OPC_Decode, 179, 3, 37, // Opcode: SUB16mm
/* 252 */     MCD::OPC_FilterValue, 11, 11, 0, 0, // Skip to: 268
/* 257 */     MCD::OPC_CheckField, 8, 4, 0, 179, 1, 0, // Skip to: 699
/* 264 */     MCD::OPC_Decode, 178, 3, 38, // Opcode: SUB16mi
/* 268 */     MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 277
/* 273 */     MCD::OPC_Decode, 191, 3, 37, // Opcode: SUB8mm
/* 277 */     MCD::OPC_FilterValue, 15, 161, 1, 0, // Skip to: 699
/* 282 */     MCD::OPC_CheckField, 8, 4, 0, 154, 1, 0, // Skip to: 699
/* 289 */     MCD::OPC_Decode, 190, 3, 38, // Opcode: SUB8mi
/* 293 */     MCD::OPC_FilterValue, 9, 53, 0, 0, // Skip to: 351
/* 298 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 301 */     MCD::OPC_FilterValue, 9, 4, 0, 0, // Skip to: 310
/* 306 */     MCD::OPC_Decode, 204, 2, 37, // Opcode: CMP16mm
/* 310 */     MCD::OPC_FilterValue, 11, 11, 0, 0, // Skip to: 326
/* 315 */     MCD::OPC_CheckField, 8, 4, 0, 121, 1, 0, // Skip to: 699
/* 322 */     MCD::OPC_Decode, 203, 2, 38, // Opcode: CMP16mi
/* 326 */     MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 335
/* 331 */     MCD::OPC_Decode, 216, 2, 37, // Opcode: CMP8mm
/* 335 */     MCD::OPC_FilterValue, 15, 103, 1, 0, // Skip to: 699
/* 340 */     MCD::OPC_CheckField, 8, 4, 0, 96, 1, 0, // Skip to: 699
/* 347 */     MCD::OPC_Decode, 215, 2, 38, // Opcode: CMP8mi
/* 351 */     MCD::OPC_FilterValue, 10, 53, 0, 0, // Skip to: 409
/* 356 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 359 */     MCD::OPC_FilterValue, 9, 4, 0, 0, // Skip to: 368
/* 364 */     MCD::OPC_Decode, 228, 2, 37, // Opcode: DADD16mm
/* 368 */     MCD::OPC_FilterValue, 11, 11, 0, 0, // Skip to: 384
/* 373 */     MCD::OPC_CheckField, 8, 4, 0, 63, 1, 0, // Skip to: 699
/* 380 */     MCD::OPC_Decode, 227, 2, 38, // Opcode: DADD16mi
/* 384 */     MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 393
/* 389 */     MCD::OPC_Decode, 240, 2, 37, // Opcode: DADD8mm
/* 393 */     MCD::OPC_FilterValue, 15, 45, 1, 0, // Skip to: 699
/* 398 */     MCD::OPC_CheckField, 8, 4, 0, 38, 1, 0, // Skip to: 699
/* 405 */     MCD::OPC_Decode, 239, 2, 38, // Opcode: DADD8mi
/* 409 */     MCD::OPC_FilterValue, 11, 53, 0, 0, // Skip to: 467
/* 414 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 417 */     MCD::OPC_FilterValue, 9, 4, 0, 0, // Skip to: 426
/* 422 */     MCD::OPC_Decode, 172, 2, 37, // Opcode: BIT16mm
/* 426 */     MCD::OPC_FilterValue, 11, 11, 0, 0, // Skip to: 442
/* 431 */     MCD::OPC_CheckField, 8, 4, 0, 5, 1, 0, // Skip to: 699
/* 438 */     MCD::OPC_Decode, 171, 2, 38, // Opcode: BIT16mi
/* 442 */     MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 451
/* 447 */     MCD::OPC_Decode, 184, 2, 37, // Opcode: BIT8mm
/* 451 */     MCD::OPC_FilterValue, 15, 243, 0, 0, // Skip to: 699
/* 456 */     MCD::OPC_CheckField, 8, 4, 0, 236, 0, 0, // Skip to: 699
/* 463 */     MCD::OPC_Decode, 183, 2, 38, // Opcode: BIT8mi
/* 467 */     MCD::OPC_FilterValue, 12, 53, 0, 0, // Skip to: 525
/* 472 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 475 */     MCD::OPC_FilterValue, 9, 4, 0, 0, // Skip to: 484
/* 480 */     MCD::OPC_Decode, 252, 1, 37, // Opcode: BIC16mm
/* 484 */     MCD::OPC_FilterValue, 11, 11, 0, 0, // Skip to: 500
/* 489 */     MCD::OPC_CheckField, 8, 4, 0, 203, 0, 0, // Skip to: 699
/* 496 */     MCD::OPC_Decode, 251, 1, 38, // Opcode: BIC16mi
/* 500 */     MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 509
/* 505 */     MCD::OPC_Decode, 136, 2, 37, // Opcode: BIC8mm
/* 509 */     MCD::OPC_FilterValue, 15, 185, 0, 0, // Skip to: 699
/* 514 */     MCD::OPC_CheckField, 8, 4, 0, 178, 0, 0, // Skip to: 699
/* 521 */     MCD::OPC_Decode, 135, 2, 38, // Opcode: BIC8mi
/* 525 */     MCD::OPC_FilterValue, 13, 53, 0, 0, // Skip to: 583
/* 530 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 533 */     MCD::OPC_FilterValue, 9, 4, 0, 0, // Skip to: 542
/* 538 */     MCD::OPC_Decode, 148, 2, 37, // Opcode: BIS16mm
/* 542 */     MCD::OPC_FilterValue, 11, 11, 0, 0, // Skip to: 558
/* 547 */     MCD::OPC_CheckField, 8, 4, 0, 145, 0, 0, // Skip to: 699
/* 554 */     MCD::OPC_Decode, 147, 2, 38, // Opcode: BIS16mi
/* 558 */     MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 567
/* 563 */     MCD::OPC_Decode, 160, 2, 37, // Opcode: BIS8mm
/* 567 */     MCD::OPC_FilterValue, 15, 127, 0, 0, // Skip to: 699
/* 572 */     MCD::OPC_CheckField, 8, 4, 0, 120, 0, 0, // Skip to: 699
/* 579 */     MCD::OPC_Decode, 159, 2, 38, // Opcode: BIS8mi
/* 583 */     MCD::OPC_FilterValue, 14, 53, 0, 0, // Skip to: 641
/* 588 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 591 */     MCD::OPC_FilterValue, 9, 4, 0, 0, // Skip to: 600
/* 596 */     MCD::OPC_Decode, 239, 3, 37, // Opcode: XOR16mm
/* 600 */     MCD::OPC_FilterValue, 11, 11, 0, 0, // Skip to: 616
/* 605 */     MCD::OPC_CheckField, 8, 4, 0, 87, 0, 0, // Skip to: 699
/* 612 */     MCD::OPC_Decode, 238, 3, 38, // Opcode: XOR16mi
/* 616 */     MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 625
/* 621 */     MCD::OPC_Decode, 251, 3, 37, // Opcode: XOR8mm
/* 625 */     MCD::OPC_FilterValue, 15, 69, 0, 0, // Skip to: 699
/* 630 */     MCD::OPC_CheckField, 8, 4, 0, 62, 0, 0, // Skip to: 699
/* 637 */     MCD::OPC_Decode, 250, 3, 38, // Opcode: XOR8mi
/* 641 */     MCD::OPC_FilterValue, 15, 53, 0, 0, // Skip to: 699
/* 646 */     MCD::OPC_ExtractField, 4, 4,  // Inst{7-4} ...
/* 649 */     MCD::OPC_FilterValue, 9, 4, 0, 0, // Skip to: 658
/* 654 */     MCD::OPC_Decode, 228, 1, 37, // Opcode: AND16mm
/* 658 */     MCD::OPC_FilterValue, 11, 11, 0, 0, // Skip to: 674
/* 663 */     MCD::OPC_CheckField, 8, 4, 0, 29, 0, 0, // Skip to: 699
/* 670 */     MCD::OPC_Decode, 227, 1, 38, // Opcode: AND16mi
/* 674 */     MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 683
/* 679 */     MCD::OPC_Decode, 240, 1, 37, // Opcode: AND8mm
/* 683 */     MCD::OPC_FilterValue, 15, 11, 0, 0, // Skip to: 699
/* 688 */     MCD::OPC_CheckField, 8, 4, 0, 4, 0, 0, // Skip to: 699
/* 695 */     MCD::OPC_Decode, 239, 1, 38, // Opcode: AND8mi
/* 699 */     MCD::OPC_Fail,
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
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 0, 6);
    if (DecodeCGImm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 0, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 0, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 10, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 8:
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 4) << 0;
    tmp |= fieldFromInstruction(insn, 16, 16) << 4;
    if (DecodeMemOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 16, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 8, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 4) << 0;
    tmp |= fieldFromInstruction(insn, 16, 16) << 4;
    if (DecodeMemOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 16:
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 4) << 0;
    tmp |= fieldFromInstruction(insn, 16, 16) << 4;
    if (DecodeMemOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 4, 2) << 4;
    tmp |= fieldFromInstruction(insn, 8, 4) << 0;
    if (DecodeCGImm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 4, 2) << 4;
    tmp |= fieldFromInstruction(insn, 8, 4) << 0;
    if (DecodeCGImm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 4, 2) << 4;
    tmp |= fieldFromInstruction(insn, 8, 4) << 0;
    if (DecodeCGImm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 4, 2) << 4;
    tmp |= fieldFromInstruction(insn, 8, 4) << 0;
    if (DecodeCGImm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 21:
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 4) << 0;
    tmp |= fieldFromInstruction(insn, 16, 16) << 4;
    if (DecodeMemOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 4, 2) << 4;
    tmp |= fieldFromInstruction(insn, 8, 4) << 0;
    if (DecodeCGImm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 28:
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 8, 4) << 0;
    tmp |= fieldFromInstruction(insn, 16, 16) << 4;
    if (DecodeMemOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 8, 4) << 0;
    tmp |= fieldFromInstruction(insn, 16, 16) << 4;
    if (DecodeMemOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 8, 4) << 0;
    tmp |= fieldFromInstruction(insn, 16, 16) << 4;
    if (DecodeMemOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 8, 4) << 0;
    tmp |= fieldFromInstruction(insn, 16, 16) << 4;
    if (DecodeMemOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 8, 4) << 0;
    tmp |= fieldFromInstruction(insn, 16, 16) << 4;
    if (DecodeMemOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR8RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 37:
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 4) << 0;
    tmp |= fieldFromInstruction(insn, 32, 16) << 4;
    if (DecodeMemOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 8, 4) << 0;
    tmp |= fieldFromInstruction(insn, 16, 16) << 4;
    if (DecodeMemOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 38:
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 4) << 0;
    tmp |= fieldFromInstruction(insn, 32, 16) << 4;
    if (DecodeMemOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 16);
    MI.addOperand(MCOperand::createImm(tmp));
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

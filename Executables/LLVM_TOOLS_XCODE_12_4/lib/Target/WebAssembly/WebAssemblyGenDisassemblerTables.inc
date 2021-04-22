/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * WebAssembly Disassembler                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "MCTargetDesc/WebAssemblyMCTargetDesc.h"

namespace llvm {

static constexpr int WebAssemblyInstructionTableSize = 256;

enum EntryType : uint8_t { ET_Unused, ET_Prefix, ET_Instruction };

struct WebAssemblyInstruction {
  uint16_t Opcode;
  EntryType ET;
  uint8_t NumOperands;
  uint16_t OperandStart;
};

WebAssemblyInstruction InstructionTable0[] = {
  // 0x0: 
  { 660, ET_Instruction, 0, 0  },
  // 0x1: nop
  { 1068, ET_Instruction, 0, 0  },
  // 0x2: block   	$sig
  { 432, ET_Instruction, 1, 0  },
  // 0x3: loop    	$sig
  { 924, ET_Instruction, 1, 0  },
  // 0x4: if    	$sig
  { 808, ET_Instruction, 1, 0  },
  // 0x5: else
  { 576, ET_Instruction, 0, 0  },
  // 0x6: try     	$sig
  { 1300, ET_Instruction, 1, 0  },
  // 0x7: catch
  { 494, ET_Instruction, 0, 0  },
  // 0x8: throw   	$tag
  { 1294, ET_Instruction, 1, 1  },
  // 0x9: rethrow
  { 1148, ET_Instruction, 0, 0  },
  // 0xa: br_on_exn 	$dst, $tag
  { 437, ET_Instruction, 2, 2  },
  // 0xb: end
  { 586, ET_Instruction, 0, 0  },
  // 0xc: br      	$dst
  { 438, ET_Instruction, 1, 2  },
  // 0xd: br_if   	$dst
  { 435, ET_Instruction, 1, 2  },
  // 0xe: br_table 	$brl
  { 440, ET_Instruction, 1, 4  },
  // 0xf: return
  { 1150, ET_Instruction, 0, 0  },
  // 0x10: call	$callee
  { 470, ET_Instruction, 1, 5  },
  // 0x11: call_indirect	$type
  { 446, ET_Instruction, 2, 6  },
  // 0x12: return_call	$callee
  { 1154, ET_Instruction, 1, 5  },
  // 0x13: return_call_indirect	$type
  { 1153, ET_Instruction, 2, 6  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x1a: drop
  { 564, ET_Instruction, 0, 0  },
  // 0x1b: f32.select
  { 1166, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x20: local.get	$local
  { 888, ET_Instruction, 1, 8  },
  // 0x21: local.set	$local
  { 900, ET_Instruction, 1, 8  },
  // 0x22: local.tee	$local
  { 912, ET_Instruction, 1, 8  },
  // 0x23: global.get	$local
  { 704, ET_Instruction, 1, 9  },
  // 0x24: global.set	$local
  { 716, ET_Instruction, 1, 9  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x28: i32.load	${off}${p2align}
  { 874, ET_Instruction, 2, 10  },
  // 0x29: i64.load	${off}${p2align}
  { 876, ET_Instruction, 2, 10  },
  // 0x2a: f32.load	${off}${p2align}
  { 870, ET_Instruction, 2, 10  },
  // 0x2b: f64.load	${off}${p2align}
  { 872, ET_Instruction, 2, 10  },
  // 0x2c: i32.load8_s	${off}${p2align}
  { 850, ET_Instruction, 2, 10  },
  // 0x2d: i32.load8_u	${off}${p2align}
  { 854, ET_Instruction, 2, 10  },
  // 0x2e: i32.load16_s	${off}${p2align}
  { 838, ET_Instruction, 2, 10  },
  // 0x2f: i32.load16_u	${off}${p2align}
  { 842, ET_Instruction, 2, 10  },
  // 0x30: i64.load8_s	${off}${p2align}
  { 852, ET_Instruction, 2, 10  },
  // 0x31: i64.load8_u	${off}${p2align}
  { 856, ET_Instruction, 2, 10  },
  // 0x32: i64.load16_s	${off}${p2align}
  { 840, ET_Instruction, 2, 10  },
  // 0x33: i64.load16_u	${off}${p2align}
  { 844, ET_Instruction, 2, 10  },
  // 0x34: i64.load32_s	${off}${p2align}
  { 846, ET_Instruction, 2, 10  },
  // 0x35: i64.load32_u	${off}${p2align}
  { 848, ET_Instruction, 2, 10  },
  // 0x36: i32.store	${off}${p2align}
  { 1246, ET_Instruction, 2, 10  },
  // 0x37: i64.store	${off}${p2align}
  { 1248, ET_Instruction, 2, 10  },
  // 0x38: f32.store	${off}${p2align}
  { 1242, ET_Instruction, 2, 10  },
  // 0x39: f64.store	${off}${p2align}
  { 1244, ET_Instruction, 2, 10  },
  // 0x3a: i32.store8	${off}${p2align}
  { 1238, ET_Instruction, 2, 10  },
  // 0x3b: i32.store16	${off}${p2align}
  { 1232, ET_Instruction, 2, 10  },
  // 0x3c: i64.store8	${off}${p2align}
  { 1240, ET_Instruction, 2, 10  },
  // 0x3d: i64.store16	${off}${p2align}
  { 1234, ET_Instruction, 2, 10  },
  // 0x3e: i64.store32	${off}${p2align}
  { 1236, ET_Instruction, 2, 10  },
  // 0x3f: memory.size	$flags
  { 982, ET_Instruction, 1, 7  },
  // 0x40: memory.grow	$flags
  { 978, ET_Instruction, 1, 7  },
  // 0x41: i32.const	$imm
  { 508, ET_Instruction, 1, 12  },
  // 0x42: i64.const	$imm
  { 510, ET_Instruction, 1, 13  },
  // 0x43: f32.const	$imm
  { 504, ET_Instruction, 1, 14  },
  // 0x44: f64.const	$imm
  { 506, ET_Instruction, 1, 15  },
  // 0x45: i32.eqz
  { 590, ET_Instruction, 0, 0  },
  // 0x46: i32.eq  
  { 598, ET_Instruction, 0, 0  },
  // 0x47: i32.ne  
  { 1054, ET_Instruction, 0, 0  },
  // 0x48: i32.lt_s
  { 930, ET_Instruction, 0, 0  },
  // 0x49: i32.lt_u
  { 940, ET_Instruction, 0, 0  },
  // 0x4a: i32.gt_s
  { 732, ET_Instruction, 0, 0  },
  // 0x4b: i32.gt_u
  { 742, ET_Instruction, 0, 0  },
  // 0x4c: i32.le_s
  { 814, ET_Instruction, 0, 0  },
  // 0x4d: i32.le_u
  { 824, ET_Instruction, 0, 0  },
  // 0x4e: i32.ge_s
  { 680, ET_Instruction, 0, 0  },
  // 0x4f: i32.ge_u
  { 690, ET_Instruction, 0, 0  },
  // 0x50: i64.eqz
  { 592, ET_Instruction, 0, 0  },
  // 0x51: i64.eq  
  { 600, ET_Instruction, 0, 0  },
  // 0x52: i64.ne  
  { 1056, ET_Instruction, 0, 0  },
  // 0x53: i64.lt_s
  { 932, ET_Instruction, 0, 0  },
  // 0x54: i64.lt_u
  { 942, ET_Instruction, 0, 0  },
  // 0x55: i64.gt_s
  { 734, ET_Instruction, 0, 0  },
  // 0x56: i64.gt_u
  { 744, ET_Instruction, 0, 0  },
  // 0x57: i64.le_s
  { 816, ET_Instruction, 0, 0  },
  // 0x58: i64.le_u
  { 826, ET_Instruction, 0, 0  },
  // 0x59: i64.ge_s
  { 682, ET_Instruction, 0, 0  },
  // 0x5a: i64.ge_u
  { 692, ET_Instruction, 0, 0  },
  // 0x5b: f32.eq  
  { 594, ET_Instruction, 0, 0  },
  // 0x5c: f32.ne  
  { 1050, ET_Instruction, 0, 0  },
  // 0x5d: f32.lt  
  { 926, ET_Instruction, 0, 0  },
  // 0x5e: f32.gt  
  { 728, ET_Instruction, 0, 0  },
  // 0x5f: f32.le  
  { 810, ET_Instruction, 0, 0  },
  // 0x60: f32.ge  
  { 676, ET_Instruction, 0, 0  },
  // 0x61: f64.eq  
  { 596, ET_Instruction, 0, 0  },
  // 0x62: f64.ne  
  { 1052, ET_Instruction, 0, 0  },
  // 0x63: f64.lt  
  { 928, ET_Instruction, 0, 0  },
  // 0x64: f64.gt  
  { 730, ET_Instruction, 0, 0  },
  // 0x65: f64.le  
  { 812, ET_Instruction, 0, 0  },
  // 0x66: f64.ge  
  { 678, ET_Instruction, 0, 0  },
  // 0x67: i32.clz 
  { 500, ET_Instruction, 0, 0  },
  // 0x68: i32.ctz 
  { 540, ET_Instruction, 0, 0  },
  // 0x69: i32.popcnt
  { 1114, ET_Instruction, 0, 0  },
  // 0x6a: i32.add 
  { 196, ET_Instruction, 0, 0  },
  // 0x6b: i32.sub 
  { 1256, ET_Instruction, 0, 0  },
  // 0x6c: i32.mul 
  { 1008, ET_Instruction, 0, 0  },
  // 0x6d: i32.div_s
  { 550, ET_Instruction, 0, 0  },
  // 0x6e: i32.div_u
  { 554, ET_Instruction, 0, 0  },
  // 0x6f: i32.rem_s
  { 1128, ET_Instruction, 0, 0  },
  // 0x70: i32.rem_u
  { 1132, ET_Instruction, 0, 0  },
  // 0x71: i32.and 
  { 240, ET_Instruction, 0, 0  },
  // 0x72: i32.or  
  { 1078, ET_Instruction, 0, 0  },
  // 0x73: i32.xor 
  { 1304, ET_Instruction, 0, 0  },
  // 0x74: i32.shl 
  { 1174, ET_Instruction, 0, 0  },
  // 0x75: i32.shr_s
  { 1186, ET_Instruction, 0, 0  },
  // 0x76: i32.shr_u
  { 1198, ET_Instruction, 0, 0  },
  // 0x77: i32.rotl
  { 1156, ET_Instruction, 0, 0  },
  // 0x78: i32.rotr
  { 1160, ET_Instruction, 0, 0  },
  // 0x79: i64.clz 
  { 502, ET_Instruction, 0, 0  },
  // 0x7a: i64.ctz 
  { 542, ET_Instruction, 0, 0  },
  // 0x7b: i64.popcnt
  { 1116, ET_Instruction, 0, 0  },
  // 0x7c: i64.add 
  { 198, ET_Instruction, 0, 0  },
  // 0x7d: i64.sub 
  { 1258, ET_Instruction, 0, 0  },
  // 0x7e: i64.mul 
  { 1010, ET_Instruction, 0, 0  },
  // 0x7f: i64.div_s
  { 552, ET_Instruction, 0, 0  },
  // 0x80: i64.div_u
  { 556, ET_Instruction, 0, 0  },
  // 0x81: i64.rem_s
  { 1130, ET_Instruction, 0, 0  },
  // 0x82: i64.rem_u
  { 1134, ET_Instruction, 0, 0  },
  // 0x83: i64.and 
  { 242, ET_Instruction, 0, 0  },
  // 0x84: i64.or  
  { 1080, ET_Instruction, 0, 0  },
  // 0x85: i64.xor 
  { 1306, ET_Instruction, 0, 0  },
  // 0x86: i64.shl 
  { 1176, ET_Instruction, 0, 0  },
  // 0x87: i64.shr_s
  { 1188, ET_Instruction, 0, 0  },
  // 0x88: i64.shr_u
  { 1200, ET_Instruction, 0, 0  },
  // 0x89: i64.rotl
  { 1158, ET_Instruction, 0, 0  },
  // 0x8a: i64.rotr
  { 1162, ET_Instruction, 0, 0  },
  // 0x8b: f32.abs 
  { 184, ET_Instruction, 0, 0  },
  // 0x8c: f32.neg 
  { 1034, ET_Instruction, 0, 0  },
  // 0x8d: f32.ceil
  { 496, ET_Instruction, 0, 0  },
  // 0x8e: f32.floor
  { 656, ET_Instruction, 0, 0  },
  // 0x8f: f32.trunc
  { 1296, ET_Instruction, 0, 0  },
  // 0x90: f32.nearest
  { 1030, ET_Instruction, 0, 0  },
  // 0x91: f32.sqrt
  { 1224, ET_Instruction, 0, 0  },
  // 0x92: f32.add 
  { 192, ET_Instruction, 0, 0  },
  // 0x93: f32.sub 
  { 1252, ET_Instruction, 0, 0  },
  // 0x94: f32.mul 
  { 1004, ET_Instruction, 0, 0  },
  // 0x95: f32.div 
  { 546, ET_Instruction, 0, 0  },
  // 0x96: f32.min 
  { 984, ET_Instruction, 0, 0  },
  // 0x97: f32.max 
  { 954, ET_Instruction, 0, 0  },
  // 0x98: f32.copysign
  { 524, ET_Instruction, 0, 0  },
  // 0x99: f64.abs 
  { 186, ET_Instruction, 0, 0  },
  // 0x9a: f64.neg 
  { 1036, ET_Instruction, 0, 0  },
  // 0x9b: f64.ceil
  { 498, ET_Instruction, 0, 0  },
  // 0x9c: f64.floor
  { 658, ET_Instruction, 0, 0  },
  // 0x9d: f64.trunc
  { 1298, ET_Instruction, 0, 0  },
  // 0x9e: f64.nearest
  { 1032, ET_Instruction, 0, 0  },
  // 0x9f: f64.sqrt
  { 1226, ET_Instruction, 0, 0  },
  // 0xa0: f64.add 
  { 194, ET_Instruction, 0, 0  },
  // 0xa1: f64.sub 
  { 1254, ET_Instruction, 0, 0  },
  // 0xa2: f64.mul 
  { 1006, ET_Instruction, 0, 0  },
  // 0xa3: f64.div 
  { 548, ET_Instruction, 0, 0  },
  // 0xa4: f64.min 
  { 986, ET_Instruction, 0, 0  },
  // 0xa5: f64.max 
  { 956, ET_Instruction, 0, 0  },
  // 0xa6: f64.copysign
  { 526, ET_Instruction, 0, 0  },
  // 0xa7: i32.wrap_i64
  { 778, ET_Instruction, 0, 0  },
  // 0xa8: i32.trunc_f32_s
  { 762, ET_Instruction, 0, 0  },
  // 0xa9: i32.trunc_f32_u
  { 770, ET_Instruction, 0, 0  },
  // 0xaa: i32.trunc_f64_s
  { 764, ET_Instruction, 0, 0  },
  // 0xab: i32.trunc_f64_u
  { 772, ET_Instruction, 0, 0  },
  // 0xac: i64.extend_i32_s
  { 786, ET_Instruction, 0, 0  },
  // 0xad: i64.extend_i32_u
  { 788, ET_Instruction, 0, 0  },
  // 0xae: i64.trunc_f32_s
  { 792, ET_Instruction, 0, 0  },
  // 0xaf: i64.trunc_f32_u
  { 800, ET_Instruction, 0, 0  },
  // 0xb0: i64.trunc_f64_s
  { 794, ET_Instruction, 0, 0  },
  // 0xb1: i64.trunc_f64_u
  { 802, ET_Instruction, 0, 0  },
  // 0xb2: f32.convert_i32_s
  { 630, ET_Instruction, 0, 0  },
  // 0xb3: f32.convert_i32_u
  { 634, ET_Instruction, 0, 0  },
  // 0xb4: f32.convert_i64_s
  { 632, ET_Instruction, 0, 0  },
  // 0xb5: f32.convert_i64_u
  { 636, ET_Instruction, 0, 0  },
  // 0xb6: f32.demote_f64
  { 638, ET_Instruction, 0, 0  },
  // 0xb7: f64.convert_i32_s
  { 642, ET_Instruction, 0, 0  },
  // 0xb8: f64.convert_i32_u
  { 646, ET_Instruction, 0, 0  },
  // 0xb9: f64.convert_i64_s
  { 644, ET_Instruction, 0, 0  },
  // 0xba: f64.convert_i64_u
  { 648, ET_Instruction, 0, 0  },
  // 0xbb: f64.promote_f32
  { 650, ET_Instruction, 0, 0  },
  // 0xbc: i32.reinterpret_f32
  { 760, ET_Instruction, 0, 0  },
  // 0xbd: i64.reinterpret_f64
  { 790, ET_Instruction, 0, 0  },
  // 0xbe: f32.reinterpret_i32
  { 640, ET_Instruction, 0, 0  },
  // 0xbf: f64.reinterpret_i64
  { 652, ET_Instruction, 0, 0  },
  // 0xc0: i32.extend8_s
  { 758, ET_Instruction, 0, 0  },
  // 0xc1: i32.extend16_s
  { 756, ET_Instruction, 0, 0  },
  // 0xc2: i64.extend8_s
  { 784, ET_Instruction, 0, 0  },
  // 0xc3: i64.extend16_s
  { 780, ET_Instruction, 0, 0  },
  // 0xc4: i64.extend32_s
  { 782, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Prefix, 0, 0  },
  { 0, ET_Prefix, 0, 0  },
  { 0, ET_Prefix, 0, 0  },
  { 0, ET_Unused, 0, 0  },
};

WebAssemblyInstruction InstructionTable252[] = {
  // 0x0: i32.trunc_sat_f32_s
  { 766, ET_Instruction, 0, 0  },
  // 0x1: i32.trunc_sat_f32_u
  { 774, ET_Instruction, 0, 0  },
  // 0x2: i32.trunc_sat_f64_s
  { 768, ET_Instruction, 0, 0  },
  // 0x3: i32.trunc_sat_f64_u
  { 776, ET_Instruction, 0, 0  },
  // 0x4: i64.trunc_sat_f32_s
  { 796, ET_Instruction, 0, 0  },
  // 0x5: i64.trunc_sat_f32_u
  { 804, ET_Instruction, 0, 0  },
  // 0x6: i64.trunc_sat_f64_s
  { 798, ET_Instruction, 0, 0  },
  // 0x7: i64.trunc_sat_f64_u
  { 806, ET_Instruction, 0, 0  },
  // 0x8: memory.init	$seg, $idx
  { 980, ET_Instruction, 2, 16  },
  // 0x9: data.drop	$seg
  { 544, ET_Instruction, 1, 12  },
  // 0xa: memory.copy	$src_idx, $dst_idx
  { 974, ET_Instruction, 2, 16  },
  // 0xb: memory.fill	$idx
  { 976, ET_Instruction, 1, 12  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
};

WebAssemblyInstruction InstructionTable253[] = {
  // 0x0: v128.load	$off$p2align
  { 886, ET_Instruction, 2, 10  },
  // 0x1: v128.store	$off$p2align
  { 1250, ET_Instruction, 2, 10  },
  // 0x2: v128.const	$i0, $i1, $i2, $i3
  { 520, ET_Instruction, 4, 18  },
  // 0x3: v8x16.shuffle	$m0, $m1, $m2, $m3, $m4, $m5, $m6, $m7, $m8, $m9, $mA, $mB, $mC, $mD, $mE, $mF
  { 1210, ET_Instruction, 16, 22  },
  // 0x4: i8x16.splat
  { 1212, ET_Instruction, 0, 0  },
  // 0x5: i8x16.extract_lane_s	$idx
  { 614, ET_Instruction, 1, 22  },
  // 0x6: i8x16.extract_lane_u	$idx
  { 616, ET_Instruction, 1, 22  },
  // 0x7: i8x16.replace_lane	$idx
  { 1136, ET_Instruction, 1, 22  },
  // 0x8: i16x8.splat
  { 1222, ET_Instruction, 0, 0  },
  // 0x9: i16x8.extract_lane_s	$idx
  { 626, ET_Instruction, 1, 22  },
  // 0xa: i16x8.extract_lane_u	$idx
  { 628, ET_Instruction, 1, 22  },
  // 0xb: i16x8.replace_lane	$idx
  { 1146, ET_Instruction, 1, 22  },
  // 0xc: i32x4.splat
  { 1220, ET_Instruction, 0, 0  },
  // 0xd: i32x4.extract_lane	$idx
  { 624, ET_Instruction, 1, 22  },
  // 0xe: i32x4.replace_lane	$idx
  { 1144, ET_Instruction, 1, 22  },
  // 0xf: i64x2.splat
  { 1216, ET_Instruction, 0, 0  },
  // 0x10: i64x2.extract_lane	$idx
  { 620, ET_Instruction, 1, 22  },
  // 0x11: i64x2.replace_lane	$idx
  { 1140, ET_Instruction, 1, 22  },
  // 0x12: f32x4.splat
  { 1218, ET_Instruction, 0, 0  },
  // 0x13: f32x4.extract_lane	$idx
  { 622, ET_Instruction, 1, 22  },
  // 0x14: f32x4.replace_lane	$idx
  { 1142, ET_Instruction, 1, 22  },
  // 0x15: f64x2.splat
  { 1214, ET_Instruction, 0, 0  },
  // 0x16: f64x2.extract_lane	$idx
  { 618, ET_Instruction, 1, 22  },
  // 0x17: f64x2.replace_lane	$idx
  { 1138, ET_Instruction, 1, 22  },
  // 0x18: i8x16.eq
  { 602, ET_Instruction, 0, 0  },
  // 0x19: i8x16.ne
  { 1058, ET_Instruction, 0, 0  },
  // 0x1a: i8x16.lt_s
  { 934, ET_Instruction, 0, 0  },
  // 0x1b: i8x16.lt_u
  { 944, ET_Instruction, 0, 0  },
  // 0x1c: i8x16.gt_s
  { 736, ET_Instruction, 0, 0  },
  // 0x1d: i8x16.gt_u
  { 746, ET_Instruction, 0, 0  },
  // 0x1e: i8x16.le_s
  { 818, ET_Instruction, 0, 0  },
  // 0x1f: i8x16.le_u
  { 828, ET_Instruction, 0, 0  },
  // 0x20: i8x16.ge_s
  { 684, ET_Instruction, 0, 0  },
  // 0x21: i8x16.ge_u
  { 694, ET_Instruction, 0, 0  },
  // 0x22: i16x8.eq
  { 610, ET_Instruction, 0, 0  },
  // 0x23: i16x8.ne
  { 1066, ET_Instruction, 0, 0  },
  // 0x24: i16x8.lt_s
  { 938, ET_Instruction, 0, 0  },
  // 0x25: i16x8.lt_u
  { 948, ET_Instruction, 0, 0  },
  // 0x26: i16x8.gt_s
  { 740, ET_Instruction, 0, 0  },
  // 0x27: i16x8.gt_u
  { 750, ET_Instruction, 0, 0  },
  // 0x28: i16x8.le_s
  { 822, ET_Instruction, 0, 0  },
  // 0x29: i16x8.le_u
  { 832, ET_Instruction, 0, 0  },
  // 0x2a: i16x8.ge_s
  { 688, ET_Instruction, 0, 0  },
  // 0x2b: i16x8.ge_u
  { 698, ET_Instruction, 0, 0  },
  // 0x2c: i32x4.eq
  { 608, ET_Instruction, 0, 0  },
  // 0x2d: i32x4.ne
  { 1064, ET_Instruction, 0, 0  },
  // 0x2e: i32x4.lt_s
  { 936, ET_Instruction, 0, 0  },
  // 0x2f: i32x4.lt_u
  { 946, ET_Instruction, 0, 0  },
  // 0x30: i32x4.gt_s
  { 738, ET_Instruction, 0, 0  },
  // 0x31: i32x4.gt_u
  { 748, ET_Instruction, 0, 0  },
  // 0x32: i32x4.le_s
  { 820, ET_Instruction, 0, 0  },
  // 0x33: i32x4.le_u
  { 830, ET_Instruction, 0, 0  },
  // 0x34: i32x4.ge_s
  { 686, ET_Instruction, 0, 0  },
  // 0x35: i32x4.ge_u
  { 696, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x40: f32x4.eq
  { 606, ET_Instruction, 0, 0  },
  // 0x41: f32x4.ne
  { 1062, ET_Instruction, 0, 0  },
  // 0x42: f32x4.lt
  { 952, ET_Instruction, 0, 0  },
  // 0x43: f32x4.gt
  { 754, ET_Instruction, 0, 0  },
  // 0x44: f32x4.le
  { 836, ET_Instruction, 0, 0  },
  // 0x45: f32x4.ge
  { 702, ET_Instruction, 0, 0  },
  // 0x46: f64x2.eq
  { 604, ET_Instruction, 0, 0  },
  // 0x47: f64x2.ne
  { 1060, ET_Instruction, 0, 0  },
  // 0x48: f64x2.lt
  { 950, ET_Instruction, 0, 0  },
  // 0x49: f64x2.gt
  { 752, ET_Instruction, 0, 0  },
  // 0x4a: f64x2.le
  { 834, ET_Instruction, 0, 0  },
  // 0x4b: f64x2.ge
  { 700, ET_Instruction, 0, 0  },
  // 0x4c: v128.not
  { 1070, ET_Instruction, 0, 0  },
  // 0x4d: v128.and
  { 244, ET_Instruction, 0, 0  },
  // 0x4e: v128.or
  { 1082, ET_Instruction, 0, 0  },
  // 0x4f: v128.xor
  { 1308, ET_Instruction, 0, 0  },
  // 0x50: v128.bitselect
  { 420, ET_Instruction, 0, 0  },
  // 0x51: i8x16.neg
  { 1038, ET_Instruction, 0, 0  },
  // 0x52: i8x16.any_true
  { 252, ET_Instruction, 0, 0  },
  // 0x53: i8x16.all_true
  { 224, ET_Instruction, 0, 0  },
  // 0x54: i8x16.shl
  { 1178, ET_Instruction, 0, 0  },
  // 0x55: i8x16.shr_s
  { 1190, ET_Instruction, 0, 0  },
  // 0x56: i8x16.shr_u
  { 1202, ET_Instruction, 0, 0  },
  // 0x57: i8x16.add
  { 208, ET_Instruction, 0, 0  },
  // 0x58: i8x16.add_saturate_s
  { 200, ET_Instruction, 0, 0  },
  // 0x59: i8x16.add_saturate_u
  { 204, ET_Instruction, 0, 0  },
  // 0x5a: i8x16.sub
  { 1268, ET_Instruction, 0, 0  },
  // 0x5b: i8x16.sub_saturate_s
  { 1260, ET_Instruction, 0, 0  },
  // 0x5c: i8x16.sub_saturate_u
  { 1264, ET_Instruction, 0, 0  },
  // 0x5d: i8x16.mul
  { 1012, ET_Instruction, 0, 0  },
  // 0x5e: i8x16.min_s
  { 988, ET_Instruction, 0, 0  },
  // 0x5f: i8x16.min_u
  { 994, ET_Instruction, 0, 0  },
  // 0x60: i8x16.max_s
  { 958, ET_Instruction, 0, 0  },
  // 0x61: i8x16.max_u
  { 964, ET_Instruction, 0, 0  },
  // 0x62: i16x8.neg
  { 1048, ET_Instruction, 0, 0  },
  // 0x63: i16x8.any_true
  { 258, ET_Instruction, 0, 0  },
  // 0x64: i16x8.all_true
  { 230, ET_Instruction, 0, 0  },
  // 0x65: i16x8.shl
  { 1184, ET_Instruction, 0, 0  },
  // 0x66: i16x8.shr_s
  { 1196, ET_Instruction, 0, 0  },
  // 0x67: i16x8.shr_u
  { 1208, ET_Instruction, 0, 0  },
  // 0x68: i16x8.add
  { 218, ET_Instruction, 0, 0  },
  // 0x69: i16x8.add_saturate_s
  { 202, ET_Instruction, 0, 0  },
  // 0x6a: i16x8.add_saturate_u
  { 206, ET_Instruction, 0, 0  },
  // 0x6b: i16x8.sub
  { 1278, ET_Instruction, 0, 0  },
  // 0x6c: i16x8.sub_saturate_s
  { 1262, ET_Instruction, 0, 0  },
  // 0x6d: i16x8.sub_saturate_u
  { 1266, ET_Instruction, 0, 0  },
  // 0x6e: i16x8.mul
  { 1020, ET_Instruction, 0, 0  },
  // 0x6f: i16x8.min_s
  { 992, ET_Instruction, 0, 0  },
  // 0x70: i16x8.min_u
  { 998, ET_Instruction, 0, 0  },
  // 0x71: i16x8.max_s
  { 962, ET_Instruction, 0, 0  },
  // 0x72: i16x8.max_u
  { 968, ET_Instruction, 0, 0  },
  // 0x73: i32x4.neg
  { 1046, ET_Instruction, 0, 0  },
  // 0x74: i32x4.any_true
  { 256, ET_Instruction, 0, 0  },
  // 0x75: i32x4.all_true
  { 228, ET_Instruction, 0, 0  },
  // 0x76: i32x4.shl
  { 1182, ET_Instruction, 0, 0  },
  // 0x77: i32x4.shr_s
  { 1194, ET_Instruction, 0, 0  },
  // 0x78: i32x4.shr_u
  { 1206, ET_Instruction, 0, 0  },
  // 0x79: i32x4.add
  { 216, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x7c: i32x4.sub
  { 1276, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x7f: i32x4.mul
  { 1018, ET_Instruction, 0, 0  },
  // 0x80: i32x4.min_s
  { 990, ET_Instruction, 0, 0  },
  // 0x81: i32x4.min_u
  { 996, ET_Instruction, 0, 0  },
  // 0x82: i32x4.max_s
  { 960, ET_Instruction, 0, 0  },
  // 0x83: i32x4.max_u
  { 966, ET_Instruction, 0, 0  },
  // 0x84: i64x2.neg
  { 1042, ET_Instruction, 0, 0  },
  // 0x85: i64x2.any_true
  { 254, ET_Instruction, 0, 0  },
  // 0x86: i64x2.all_true
  { 226, ET_Instruction, 0, 0  },
  // 0x87: i64x2.shl
  { 1180, ET_Instruction, 0, 0  },
  // 0x88: i64x2.shr_s
  { 1192, ET_Instruction, 0, 0  },
  // 0x89: i64x2.shr_u
  { 1204, ET_Instruction, 0, 0  },
  // 0x8a: i64x2.add
  { 212, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x8d: i64x2.sub
  { 1272, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x95: f32x4.abs
  { 190, ET_Instruction, 0, 0  },
  // 0x96: f32x4.neg
  { 1044, ET_Instruction, 0, 0  },
  // 0x97: f32x4.sqrt
  { 1230, ET_Instruction, 0, 0  },
  // 0x98: f32x4.qfma
  { 1122, ET_Instruction, 0, 0  },
  // 0x99: f32x4.qfms
  { 1126, ET_Instruction, 0, 0  },
  // 0x9a: f32x4.add
  { 214, ET_Instruction, 0, 0  },
  // 0x9b: f32x4.sub
  { 1274, ET_Instruction, 0, 0  },
  // 0x9c: f32x4.mul
  { 1016, ET_Instruction, 0, 0  },
  // 0x9d: f32x4.div
  { 560, ET_Instruction, 0, 0  },
  // 0x9e: f32x4.min
  { 1002, ET_Instruction, 0, 0  },
  // 0x9f: f32x4.max
  { 972, ET_Instruction, 0, 0  },
  // 0xa0: f64x2.abs
  { 188, ET_Instruction, 0, 0  },
  // 0xa1: f64x2.neg
  { 1040, ET_Instruction, 0, 0  },
  // 0xa2: f64x2.sqrt
  { 1228, ET_Instruction, 0, 0  },
  // 0xa3: f64x2.qfma
  { 1120, ET_Instruction, 0, 0  },
  // 0xa4: f64x2.qfms
  { 1124, ET_Instruction, 0, 0  },
  // 0xa5: f64x2.add
  { 210, ET_Instruction, 0, 0  },
  // 0xa6: f64x2.sub
  { 1270, ET_Instruction, 0, 0  },
  // 0xa7: f64x2.mul
  { 1014, ET_Instruction, 0, 0  },
  // 0xa8: f64x2.div
  { 558, ET_Instruction, 0, 0  },
  // 0xa9: f64x2.min
  { 1000, ET_Instruction, 0, 0  },
  // 0xaa: f64x2.max
  { 970, ET_Instruction, 0, 0  },
  // 0xab: i32x4.trunc_sat_f32x4_s
  { 1318, ET_Instruction, 0, 0  },
  // 0xac: i32x4.trunc_sat_f32x4_u
  { 1322, ET_Instruction, 0, 0  },
  // 0xad: i64x2.trunc_sat_f64x2_s
  { 1316, ET_Instruction, 0, 0  },
  // 0xae: i64x2.trunc_sat_f64x2_u
  { 1320, ET_Instruction, 0, 0  },
  // 0xaf: f32x4.convert_i32x4_s
  { 1342, ET_Instruction, 0, 0  },
  // 0xb0: f32x4.convert_i32x4_u
  { 1346, ET_Instruction, 0, 0  },
  // 0xb1: f64x2.convert_i64x2_s
  { 1340, ET_Instruction, 0, 0  },
  // 0xb2: f64x2.convert_i64x2_u
  { 1344, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xc0: v8x16.swizzle
  { 1280, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xc2: v8x16.load_splat	$off$p2align
  { 884, ET_Instruction, 2, 10  },
  // 0xc3: v16x8.load_splat	$off$p2align
  { 878, ET_Instruction, 2, 10  },
  // 0xc4: v32x4.load_splat	$off$p2align
  { 880, ET_Instruction, 2, 10  },
  // 0xc5: v64x2.load_splat	$off$p2align
  { 882, ET_Instruction, 2, 10  },
  // 0xc6: i8x16.narrow_i16x8_s
  { 1022, ET_Instruction, 0, 0  },
  // 0xc7: i8x16.narrow_i16x8_u
  { 1026, ET_Instruction, 0, 0  },
  // 0xc8: i16x8.narrow_i32x4_s
  { 1024, ET_Instruction, 0, 0  },
  // 0xc9: i16x8.narrow_i32x4_u
  { 1028, ET_Instruction, 0, 0  },
  // 0xca: i16x8.widen_low_i8x16_s
  { 1334, ET_Instruction, 0, 0  },
  // 0xcb: i16x8.widen_high_i8x16_s
  { 1326, ET_Instruction, 0, 0  },
  // 0xcc: i16x8.widen_low_i8x16_u
  { 1338, ET_Instruction, 0, 0  },
  // 0xcd: i16x8.widen_high_i8x16_u
  { 1330, ET_Instruction, 0, 0  },
  // 0xce: i32x4.widen_low_i16x8_s
  { 1332, ET_Instruction, 0, 0  },
  // 0xcf: i32x4.widen_high_i16x8_s
  { 1324, ET_Instruction, 0, 0  },
  // 0xd0: i32x4.widen_low_i16x8_u
  { 1336, ET_Instruction, 0, 0  },
  // 0xd1: i32x4.widen_high_i16x8_u
  { 1328, ET_Instruction, 0, 0  },
  // 0xd2: i16x8.load8x8_s	$off$p2align
  { 862, ET_Instruction, 2, 10  },
  // 0xd3: i16x8.load8x8_u	$off$p2align
  { 868, ET_Instruction, 2, 10  },
  // 0xd4: i32x4.load16x4_s	$off$p2align
  { 860, ET_Instruction, 2, 10  },
  // 0xd5: i32x4.load16x4_u	$off$p2align
  { 866, ET_Instruction, 2, 10  },
  // 0xd6: i64x2.load32x2_s	$off$p2align
  { 858, ET_Instruction, 2, 10  },
  // 0xd7: i64x2.load32x2_u	$off$p2align
  { 864, ET_Instruction, 2, 10  },
  // 0xd8: v128.andnot
  { 232, ET_Instruction, 0, 0  },
  // 0xd9: i8x16.avgr_u
  { 416, ET_Instruction, 0, 0  },
  // 0xda: i16x8.avgr_u
  { 418, ET_Instruction, 0, 0  },
  // 0xdb: i32x4.dot_i16x8_s
  { 562, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
};

WebAssemblyInstruction InstructionTable254[] = {
  // 0x0: atomic.notify 	${off}${p2align}
  { 298, ET_Instruction, 2, 10  },
  // 0x1: i32.atomic.wait 	${off}${p2align}
  { 412, ET_Instruction, 2, 10  },
  // 0x2: i64.atomic.wait 	${off}${p2align}
  { 414, ET_Instruction, 2, 10  },
  // 0x3: atomic.fence
  { 282, ET_Instruction, 1, 7  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x10: i32.atomic.load	${off}${p2align}
  { 294, ET_Instruction, 2, 10  },
  // 0x11: i64.atomic.load	${off}${p2align}
  { 296, ET_Instruction, 2, 10  },
  // 0x12: i32.atomic.load8_u	${off}${p2align}
  { 290, ET_Instruction, 2, 10  },
  // 0x13: i32.atomic.load16_u	${off}${p2align}
  { 284, ET_Instruction, 2, 10  },
  // 0x14: i64.atomic.load8_u	${off}${p2align}
  { 292, ET_Instruction, 2, 10  },
  // 0x15: i64.atomic.load16_u	${off}${p2align}
  { 286, ET_Instruction, 2, 10  },
  // 0x16: i64.atomic.load32_u	${off}${p2align}
  { 288, ET_Instruction, 2, 10  },
  // 0x17: i32.atomic.store	${off}${p2align}
  { 408, ET_Instruction, 2, 10  },
  // 0x18: i64.atomic.store	${off}${p2align}
  { 410, ET_Instruction, 2, 10  },
  // 0x19: i32.atomic.store8	${off}${p2align}
  { 404, ET_Instruction, 2, 10  },
  // 0x1a: i32.atomic.store16	${off}${p2align}
  { 398, ET_Instruction, 2, 10  },
  // 0x1b: i64.atomic.store8	${off}${p2align}
  { 406, ET_Instruction, 2, 10  },
  // 0x1c: i64.atomic.store16	${off}${p2align}
  { 400, ET_Instruction, 2, 10  },
  // 0x1d: i64.atomic.store32	${off}${p2align}
  { 402, ET_Instruction, 2, 10  },
  // 0x1e: i32.atomic.rmw.add	${off}${p2align}
  { 370, ET_Instruction, 2, 10  },
  // 0x1f: i64.atomic.rmw.add	${off}${p2align}
  { 372, ET_Instruction, 2, 10  },
  // 0x20: i32.atomic.rmw8.add_u	${off}${p2align}
  { 342, ET_Instruction, 2, 10  },
  // 0x21: i32.atomic.rmw16.add_u	${off}${p2align}
  { 300, ET_Instruction, 2, 10  },
  // 0x22: i64.atomic.rmw8.add_u	${off}${p2align}
  { 344, ET_Instruction, 2, 10  },
  // 0x23: i64.atomic.rmw16.add_u	${off}${p2align}
  { 302, ET_Instruction, 2, 10  },
  // 0x24: i64.atomic.rmw32.add_u	${off}${p2align}
  { 328, ET_Instruction, 2, 10  },
  // 0x25: i32.atomic.rmw.sub	${off}${p2align}
  { 386, ET_Instruction, 2, 10  },
  // 0x26: i64.atomic.rmw.sub	${off}${p2align}
  { 388, ET_Instruction, 2, 10  },
  // 0x27: i32.atomic.rmw8.sub_u	${off}${p2align}
  { 358, ET_Instruction, 2, 10  },
  // 0x28: i32.atomic.rmw16.sub_u	${off}${p2align}
  { 316, ET_Instruction, 2, 10  },
  // 0x29: i64.atomic.rmw8.sub_u	${off}${p2align}
  { 360, ET_Instruction, 2, 10  },
  // 0x2a: i64.atomic.rmw16.sub_u	${off}${p2align}
  { 318, ET_Instruction, 2, 10  },
  // 0x2b: i64.atomic.rmw32.sub_u	${off}${p2align}
  { 336, ET_Instruction, 2, 10  },
  // 0x2c: i32.atomic.rmw.and	${off}${p2align}
  { 374, ET_Instruction, 2, 10  },
  // 0x2d: i64.atomic.rmw.and	${off}${p2align}
  { 376, ET_Instruction, 2, 10  },
  // 0x2e: i32.atomic.rmw8.and_u	${off}${p2align}
  { 346, ET_Instruction, 2, 10  },
  // 0x2f: i32.atomic.rmw16.and_u	${off}${p2align}
  { 304, ET_Instruction, 2, 10  },
  // 0x30: i64.atomic.rmw8.and_u	${off}${p2align}
  { 348, ET_Instruction, 2, 10  },
  // 0x31: i64.atomic.rmw16.and_u	${off}${p2align}
  { 306, ET_Instruction, 2, 10  },
  // 0x32: i64.atomic.rmw32.and_u	${off}${p2align}
  { 330, ET_Instruction, 2, 10  },
  // 0x33: i32.atomic.rmw.or	${off}${p2align}
  { 382, ET_Instruction, 2, 10  },
  // 0x34: i64.atomic.rmw.or	${off}${p2align}
  { 384, ET_Instruction, 2, 10  },
  // 0x35: i32.atomic.rmw8.or_u	${off}${p2align}
  { 354, ET_Instruction, 2, 10  },
  // 0x36: i32.atomic.rmw16.or_u	${off}${p2align}
  { 312, ET_Instruction, 2, 10  },
  // 0x37: i64.atomic.rmw8.or_u	${off}${p2align}
  { 356, ET_Instruction, 2, 10  },
  // 0x38: i64.atomic.rmw16.or_u	${off}${p2align}
  { 314, ET_Instruction, 2, 10  },
  // 0x39: i64.atomic.rmw32.or_u	${off}${p2align}
  { 334, ET_Instruction, 2, 10  },
  // 0x3a: i32.atomic.rmw.xor	${off}${p2align}
  { 394, ET_Instruction, 2, 10  },
  // 0x3b: i64.atomic.rmw.xor	${off}${p2align}
  { 396, ET_Instruction, 2, 10  },
  // 0x3c: i32.atomic.rmw8.xor_u	${off}${p2align}
  { 366, ET_Instruction, 2, 10  },
  // 0x3d: i32.atomic.rmw16.xor_u	${off}${p2align}
  { 324, ET_Instruction, 2, 10  },
  // 0x3e: i64.atomic.rmw8.xor_u	${off}${p2align}
  { 368, ET_Instruction, 2, 10  },
  // 0x3f: i64.atomic.rmw16.xor_u	${off}${p2align}
  { 326, ET_Instruction, 2, 10  },
  // 0x40: i64.atomic.rmw32.xor_u	${off}${p2align}
  { 340, ET_Instruction, 2, 10  },
  // 0x41: i32.atomic.rmw.xchg	${off}${p2align}
  { 390, ET_Instruction, 2, 10  },
  // 0x42: i64.atomic.rmw.xchg	${off}${p2align}
  { 392, ET_Instruction, 2, 10  },
  // 0x43: i32.atomic.rmw8.xchg_u	${off}${p2align}
  { 362, ET_Instruction, 2, 10  },
  // 0x44: i32.atomic.rmw16.xchg_u	${off}${p2align}
  { 320, ET_Instruction, 2, 10  },
  // 0x45: i64.atomic.rmw8.xchg_u	${off}${p2align}
  { 364, ET_Instruction, 2, 10  },
  // 0x46: i64.atomic.rmw16.xchg_u	${off}${p2align}
  { 322, ET_Instruction, 2, 10  },
  // 0x47: i64.atomic.rmw32.xchg_u	${off}${p2align}
  { 338, ET_Instruction, 2, 10  },
  // 0x48: i32.atomic.rmw.cmpxchg	${off}${p2align}
  { 378, ET_Instruction, 2, 10  },
  // 0x49: i64.atomic.rmw.cmpxchg	${off}${p2align}
  { 380, ET_Instruction, 2, 10  },
  // 0x4a: i32.atomic.rmw8.cmpxchg_u	${off}${p2align}
  { 350, ET_Instruction, 2, 10  },
  // 0x4b: i32.atomic.rmw16.cmpxchg_u	${off}${p2align}
  { 308, ET_Instruction, 2, 10  },
  // 0x4c: i64.atomic.rmw8.cmpxchg_u	${off}${p2align}
  { 352, ET_Instruction, 2, 10  },
  // 0x4d: i64.atomic.rmw16.cmpxchg_u	${off}${p2align}
  { 310, ET_Instruction, 2, 10  },
  // 0x4e: i64.atomic.rmw32.cmpxchg_u	${off}${p2align}
  { 332, ET_Instruction, 2, 10  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xff: compiler_fence
  { 180, ET_Instruction, 0, 0  },
};

const uint8_t OperandTable[] = {
  WebAssembly::OPERAND_SIGNATURE,
  WebAssembly::OPERAND_EVENT,
  WebAssembly::OPERAND_BASIC_BLOCK,
  WebAssembly::OPERAND_EVENT,
  WebAssembly::OPERAND_BRLIST,
  WebAssembly::OPERAND_FUNCTION32,
  WebAssembly::OPERAND_TYPEINDEX,
  MCOI::OPERAND_IMMEDIATE,
  WebAssembly::OPERAND_LOCAL,
  WebAssembly::OPERAND_GLOBAL,
  WebAssembly::OPERAND_P2ALIGN,
  WebAssembly::OPERAND_OFFSET32,
  WebAssembly::OPERAND_I32IMM,
  WebAssembly::OPERAND_I64IMM,
  WebAssembly::OPERAND_F32IMM,
  WebAssembly::OPERAND_F64IMM,
  WebAssembly::OPERAND_I32IMM,
  WebAssembly::OPERAND_I32IMM,
  WebAssembly::OPERAND_VEC_I32IMM,
  WebAssembly::OPERAND_VEC_I32IMM,
  WebAssembly::OPERAND_VEC_I32IMM,
  WebAssembly::OPERAND_VEC_I32IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
};

struct { uint8_t Prefix; const WebAssemblyInstruction *Table; }
PrefixTable[] = {
  { 252, InstructionTable252 },
  { 253, InstructionTable253 },
  { 254, InstructionTable254 },
  { 0, nullptr }
};

} // end namespace llvm

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values and Descriptors                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace WebAssembly {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    INLINEASM_BR	= 2,
    CFI_INSTRUCTION	= 3,
    EH_LABEL	= 4,
    GC_LABEL	= 5,
    ANNOTATION_LABEL	= 6,
    KILL	= 7,
    EXTRACT_SUBREG	= 8,
    INSERT_SUBREG	= 9,
    IMPLICIT_DEF	= 10,
    SUBREG_TO_REG	= 11,
    COPY_TO_REGCLASS	= 12,
    DBG_VALUE	= 13,
    DBG_LABEL	= 14,
    REG_SEQUENCE	= 15,
    COPY	= 16,
    BUNDLE	= 17,
    LIFETIME_START	= 18,
    LIFETIME_END	= 19,
    STACKMAP	= 20,
    FENTRY_CALL	= 21,
    PATCHPOINT	= 22,
    LOAD_STACK_GUARD	= 23,
    STATEPOINT	= 24,
    LOCAL_ESCAPE	= 25,
    FAULTING_OP	= 26,
    PATCHABLE_OP	= 27,
    PATCHABLE_FUNCTION_ENTER	= 28,
    PATCHABLE_RET	= 29,
    PATCHABLE_FUNCTION_EXIT	= 30,
    PATCHABLE_TAIL_CALL	= 31,
    PATCHABLE_EVENT_CALL	= 32,
    PATCHABLE_TYPED_EVENT_CALL	= 33,
    ICALL_BRANCH_FUNNEL	= 34,
    G_ADD	= 35,
    G_SUB	= 36,
    G_MUL	= 37,
    G_SDIV	= 38,
    G_UDIV	= 39,
    G_SREM	= 40,
    G_UREM	= 41,
    G_AND	= 42,
    G_OR	= 43,
    G_XOR	= 44,
    G_IMPLICIT_DEF	= 45,
    G_PHI	= 46,
    G_FRAME_INDEX	= 47,
    G_GLOBAL_VALUE	= 48,
    G_EXTRACT	= 49,
    G_UNMERGE_VALUES	= 50,
    G_INSERT	= 51,
    G_MERGE_VALUES	= 52,
    G_BUILD_VECTOR	= 53,
    G_BUILD_VECTOR_TRUNC	= 54,
    G_CONCAT_VECTORS	= 55,
    G_PTRTOINT	= 56,
    G_INTTOPTR	= 57,
    G_BITCAST	= 58,
    G_INTRINSIC_TRUNC	= 59,
    G_INTRINSIC_ROUND	= 60,
    G_READCYCLECOUNTER	= 61,
    G_LOAD	= 62,
    G_SEXTLOAD	= 63,
    G_ZEXTLOAD	= 64,
    G_INDEXED_LOAD	= 65,
    G_INDEXED_SEXTLOAD	= 66,
    G_INDEXED_ZEXTLOAD	= 67,
    G_STORE	= 68,
    G_INDEXED_STORE	= 69,
    G_ATOMIC_CMPXCHG_WITH_SUCCESS	= 70,
    G_ATOMIC_CMPXCHG	= 71,
    G_ATOMICRMW_XCHG	= 72,
    G_ATOMICRMW_ADD	= 73,
    G_ATOMICRMW_SUB	= 74,
    G_ATOMICRMW_AND	= 75,
    G_ATOMICRMW_NAND	= 76,
    G_ATOMICRMW_OR	= 77,
    G_ATOMICRMW_XOR	= 78,
    G_ATOMICRMW_MAX	= 79,
    G_ATOMICRMW_MIN	= 80,
    G_ATOMICRMW_UMAX	= 81,
    G_ATOMICRMW_UMIN	= 82,
    G_ATOMICRMW_FADD	= 83,
    G_ATOMICRMW_FSUB	= 84,
    G_FENCE	= 85,
    G_BRCOND	= 86,
    G_BRINDIRECT	= 87,
    G_INTRINSIC	= 88,
    G_INTRINSIC_W_SIDE_EFFECTS	= 89,
    G_ANYEXT	= 90,
    G_TRUNC	= 91,
    G_CONSTANT	= 92,
    G_FCONSTANT	= 93,
    G_VASTART	= 94,
    G_VAARG	= 95,
    G_SEXT	= 96,
    G_SEXT_INREG	= 97,
    G_ZEXT	= 98,
    G_SHL	= 99,
    G_LSHR	= 100,
    G_ASHR	= 101,
    G_ICMP	= 102,
    G_FCMP	= 103,
    G_SELECT	= 104,
    G_UADDO	= 105,
    G_UADDE	= 106,
    G_USUBO	= 107,
    G_USUBE	= 108,
    G_SADDO	= 109,
    G_SADDE	= 110,
    G_SSUBO	= 111,
    G_SSUBE	= 112,
    G_UMULO	= 113,
    G_SMULO	= 114,
    G_UMULH	= 115,
    G_SMULH	= 116,
    G_FADD	= 117,
    G_FSUB	= 118,
    G_FMUL	= 119,
    G_FMA	= 120,
    G_FMAD	= 121,
    G_FDIV	= 122,
    G_FREM	= 123,
    G_FPOW	= 124,
    G_FEXP	= 125,
    G_FEXP2	= 126,
    G_FLOG	= 127,
    G_FLOG2	= 128,
    G_FLOG10	= 129,
    G_FNEG	= 130,
    G_FPEXT	= 131,
    G_FPTRUNC	= 132,
    G_FPTOSI	= 133,
    G_FPTOUI	= 134,
    G_SITOFP	= 135,
    G_UITOFP	= 136,
    G_FABS	= 137,
    G_FCOPYSIGN	= 138,
    G_FCANONICALIZE	= 139,
    G_FMINNUM	= 140,
    G_FMAXNUM	= 141,
    G_FMINNUM_IEEE	= 142,
    G_FMAXNUM_IEEE	= 143,
    G_FMINIMUM	= 144,
    G_FMAXIMUM	= 145,
    G_PTR_ADD	= 146,
    G_PTR_MASK	= 147,
    G_SMIN	= 148,
    G_SMAX	= 149,
    G_UMIN	= 150,
    G_UMAX	= 151,
    G_BR	= 152,
    G_BRJT	= 153,
    G_INSERT_VECTOR_ELT	= 154,
    G_EXTRACT_VECTOR_ELT	= 155,
    G_SHUFFLE_VECTOR	= 156,
    G_CTTZ	= 157,
    G_CTTZ_ZERO_UNDEF	= 158,
    G_CTLZ	= 159,
    G_CTLZ_ZERO_UNDEF	= 160,
    G_CTPOP	= 161,
    G_BSWAP	= 162,
    G_BITREVERSE	= 163,
    G_FCEIL	= 164,
    G_FCOS	= 165,
    G_FSIN	= 166,
    G_FSQRT	= 167,
    G_FFLOOR	= 168,
    G_FRINT	= 169,
    G_FNEARBYINT	= 170,
    G_ADDRSPACE_CAST	= 171,
    G_BLOCK_ADDR	= 172,
    G_JUMP_TABLE	= 173,
    G_DYN_STACKALLOC	= 174,
    CATCHRET	= 175,
    CATCHRET_S	= 176,
    CLEANUPRET	= 177,
    CLEANUPRET_S	= 178,
    COMPILER_FENCE	= 179,
    COMPILER_FENCE_S	= 180,
    RETHROW_IN_CATCH	= 181,
    RETHROW_IN_CATCH_S	= 182,
    ABS_F32	= 183,
    ABS_F32_S	= 184,
    ABS_F64	= 185,
    ABS_F64_S	= 186,
    ABS_v2f64	= 187,
    ABS_v2f64_S	= 188,
    ABS_v4f32	= 189,
    ABS_v4f32_S	= 190,
    ADD_F32	= 191,
    ADD_F32_S	= 192,
    ADD_F64	= 193,
    ADD_F64_S	= 194,
    ADD_I32	= 195,
    ADD_I32_S	= 196,
    ADD_I64	= 197,
    ADD_I64_S	= 198,
    ADD_SAT_S_v16i8	= 199,
    ADD_SAT_S_v16i8_S	= 200,
    ADD_SAT_S_v8i16	= 201,
    ADD_SAT_S_v8i16_S	= 202,
    ADD_SAT_U_v16i8	= 203,
    ADD_SAT_U_v16i8_S	= 204,
    ADD_SAT_U_v8i16	= 205,
    ADD_SAT_U_v8i16_S	= 206,
    ADD_v16i8	= 207,
    ADD_v16i8_S	= 208,
    ADD_v2f64	= 209,
    ADD_v2f64_S	= 210,
    ADD_v2i64	= 211,
    ADD_v2i64_S	= 212,
    ADD_v4f32	= 213,
    ADD_v4f32_S	= 214,
    ADD_v4i32	= 215,
    ADD_v4i32_S	= 216,
    ADD_v8i16	= 217,
    ADD_v8i16_S	= 218,
    ADJCALLSTACKDOWN	= 219,
    ADJCALLSTACKDOWN_S	= 220,
    ADJCALLSTACKUP	= 221,
    ADJCALLSTACKUP_S	= 222,
    ALLTRUE_v16i8	= 223,
    ALLTRUE_v16i8_S	= 224,
    ALLTRUE_v2i64	= 225,
    ALLTRUE_v2i64_S	= 226,
    ALLTRUE_v4i32	= 227,
    ALLTRUE_v4i32_S	= 228,
    ALLTRUE_v8i16	= 229,
    ALLTRUE_v8i16_S	= 230,
    ANDNOT_v16i8	= 231,
    ANDNOT_v16i8_S	= 232,
    ANDNOT_v2i64	= 233,
    ANDNOT_v2i64_S	= 234,
    ANDNOT_v4i32	= 235,
    ANDNOT_v4i32_S	= 236,
    ANDNOT_v8i16	= 237,
    ANDNOT_v8i16_S	= 238,
    AND_I32	= 239,
    AND_I32_S	= 240,
    AND_I64	= 241,
    AND_I64_S	= 242,
    AND_v16i8	= 243,
    AND_v16i8_S	= 244,
    AND_v2i64	= 245,
    AND_v2i64_S	= 246,
    AND_v4i32	= 247,
    AND_v4i32_S	= 248,
    AND_v8i16	= 249,
    AND_v8i16_S	= 250,
    ANYTRUE_v16i8	= 251,
    ANYTRUE_v16i8_S	= 252,
    ANYTRUE_v2i64	= 253,
    ANYTRUE_v2i64_S	= 254,
    ANYTRUE_v4i32	= 255,
    ANYTRUE_v4i32_S	= 256,
    ANYTRUE_v8i16	= 257,
    ANYTRUE_v8i16_S	= 258,
    ARGUMENT_exnref	= 259,
    ARGUMENT_exnref_S	= 260,
    ARGUMENT_f32	= 261,
    ARGUMENT_f32_S	= 262,
    ARGUMENT_f64	= 263,
    ARGUMENT_f64_S	= 264,
    ARGUMENT_i32	= 265,
    ARGUMENT_i32_S	= 266,
    ARGUMENT_i64	= 267,
    ARGUMENT_i64_S	= 268,
    ARGUMENT_v16i8	= 269,
    ARGUMENT_v16i8_S	= 270,
    ARGUMENT_v2f64	= 271,
    ARGUMENT_v2f64_S	= 272,
    ARGUMENT_v2i64	= 273,
    ARGUMENT_v2i64_S	= 274,
    ARGUMENT_v4f32	= 275,
    ARGUMENT_v4f32_S	= 276,
    ARGUMENT_v4i32	= 277,
    ARGUMENT_v4i32_S	= 278,
    ARGUMENT_v8i16	= 279,
    ARGUMENT_v8i16_S	= 280,
    ATOMIC_FENCE	= 281,
    ATOMIC_FENCE_S	= 282,
    ATOMIC_LOAD16_U_I32	= 283,
    ATOMIC_LOAD16_U_I32_S	= 284,
    ATOMIC_LOAD16_U_I64	= 285,
    ATOMIC_LOAD16_U_I64_S	= 286,
    ATOMIC_LOAD32_U_I64	= 287,
    ATOMIC_LOAD32_U_I64_S	= 288,
    ATOMIC_LOAD8_U_I32	= 289,
    ATOMIC_LOAD8_U_I32_S	= 290,
    ATOMIC_LOAD8_U_I64	= 291,
    ATOMIC_LOAD8_U_I64_S	= 292,
    ATOMIC_LOAD_I32	= 293,
    ATOMIC_LOAD_I32_S	= 294,
    ATOMIC_LOAD_I64	= 295,
    ATOMIC_LOAD_I64_S	= 296,
    ATOMIC_NOTIFY	= 297,
    ATOMIC_NOTIFY_S	= 298,
    ATOMIC_RMW16_U_ADD_I32	= 299,
    ATOMIC_RMW16_U_ADD_I32_S	= 300,
    ATOMIC_RMW16_U_ADD_I64	= 301,
    ATOMIC_RMW16_U_ADD_I64_S	= 302,
    ATOMIC_RMW16_U_AND_I32	= 303,
    ATOMIC_RMW16_U_AND_I32_S	= 304,
    ATOMIC_RMW16_U_AND_I64	= 305,
    ATOMIC_RMW16_U_AND_I64_S	= 306,
    ATOMIC_RMW16_U_CMPXCHG_I32	= 307,
    ATOMIC_RMW16_U_CMPXCHG_I32_S	= 308,
    ATOMIC_RMW16_U_CMPXCHG_I64	= 309,
    ATOMIC_RMW16_U_CMPXCHG_I64_S	= 310,
    ATOMIC_RMW16_U_OR_I32	= 311,
    ATOMIC_RMW16_U_OR_I32_S	= 312,
    ATOMIC_RMW16_U_OR_I64	= 313,
    ATOMIC_RMW16_U_OR_I64_S	= 314,
    ATOMIC_RMW16_U_SUB_I32	= 315,
    ATOMIC_RMW16_U_SUB_I32_S	= 316,
    ATOMIC_RMW16_U_SUB_I64	= 317,
    ATOMIC_RMW16_U_SUB_I64_S	= 318,
    ATOMIC_RMW16_U_XCHG_I32	= 319,
    ATOMIC_RMW16_U_XCHG_I32_S	= 320,
    ATOMIC_RMW16_U_XCHG_I64	= 321,
    ATOMIC_RMW16_U_XCHG_I64_S	= 322,
    ATOMIC_RMW16_U_XOR_I32	= 323,
    ATOMIC_RMW16_U_XOR_I32_S	= 324,
    ATOMIC_RMW16_U_XOR_I64	= 325,
    ATOMIC_RMW16_U_XOR_I64_S	= 326,
    ATOMIC_RMW32_U_ADD_I64	= 327,
    ATOMIC_RMW32_U_ADD_I64_S	= 328,
    ATOMIC_RMW32_U_AND_I64	= 329,
    ATOMIC_RMW32_U_AND_I64_S	= 330,
    ATOMIC_RMW32_U_CMPXCHG_I64	= 331,
    ATOMIC_RMW32_U_CMPXCHG_I64_S	= 332,
    ATOMIC_RMW32_U_OR_I64	= 333,
    ATOMIC_RMW32_U_OR_I64_S	= 334,
    ATOMIC_RMW32_U_SUB_I64	= 335,
    ATOMIC_RMW32_U_SUB_I64_S	= 336,
    ATOMIC_RMW32_U_XCHG_I64	= 337,
    ATOMIC_RMW32_U_XCHG_I64_S	= 338,
    ATOMIC_RMW32_U_XOR_I64	= 339,
    ATOMIC_RMW32_U_XOR_I64_S	= 340,
    ATOMIC_RMW8_U_ADD_I32	= 341,
    ATOMIC_RMW8_U_ADD_I32_S	= 342,
    ATOMIC_RMW8_U_ADD_I64	= 343,
    ATOMIC_RMW8_U_ADD_I64_S	= 344,
    ATOMIC_RMW8_U_AND_I32	= 345,
    ATOMIC_RMW8_U_AND_I32_S	= 346,
    ATOMIC_RMW8_U_AND_I64	= 347,
    ATOMIC_RMW8_U_AND_I64_S	= 348,
    ATOMIC_RMW8_U_CMPXCHG_I32	= 349,
    ATOMIC_RMW8_U_CMPXCHG_I32_S	= 350,
    ATOMIC_RMW8_U_CMPXCHG_I64	= 351,
    ATOMIC_RMW8_U_CMPXCHG_I64_S	= 352,
    ATOMIC_RMW8_U_OR_I32	= 353,
    ATOMIC_RMW8_U_OR_I32_S	= 354,
    ATOMIC_RMW8_U_OR_I64	= 355,
    ATOMIC_RMW8_U_OR_I64_S	= 356,
    ATOMIC_RMW8_U_SUB_I32	= 357,
    ATOMIC_RMW8_U_SUB_I32_S	= 358,
    ATOMIC_RMW8_U_SUB_I64	= 359,
    ATOMIC_RMW8_U_SUB_I64_S	= 360,
    ATOMIC_RMW8_U_XCHG_I32	= 361,
    ATOMIC_RMW8_U_XCHG_I32_S	= 362,
    ATOMIC_RMW8_U_XCHG_I64	= 363,
    ATOMIC_RMW8_U_XCHG_I64_S	= 364,
    ATOMIC_RMW8_U_XOR_I32	= 365,
    ATOMIC_RMW8_U_XOR_I32_S	= 366,
    ATOMIC_RMW8_U_XOR_I64	= 367,
    ATOMIC_RMW8_U_XOR_I64_S	= 368,
    ATOMIC_RMW_ADD_I32	= 369,
    ATOMIC_RMW_ADD_I32_S	= 370,
    ATOMIC_RMW_ADD_I64	= 371,
    ATOMIC_RMW_ADD_I64_S	= 372,
    ATOMIC_RMW_AND_I32	= 373,
    ATOMIC_RMW_AND_I32_S	= 374,
    ATOMIC_RMW_AND_I64	= 375,
    ATOMIC_RMW_AND_I64_S	= 376,
    ATOMIC_RMW_CMPXCHG_I32	= 377,
    ATOMIC_RMW_CMPXCHG_I32_S	= 378,
    ATOMIC_RMW_CMPXCHG_I64	= 379,
    ATOMIC_RMW_CMPXCHG_I64_S	= 380,
    ATOMIC_RMW_OR_I32	= 381,
    ATOMIC_RMW_OR_I32_S	= 382,
    ATOMIC_RMW_OR_I64	= 383,
    ATOMIC_RMW_OR_I64_S	= 384,
    ATOMIC_RMW_SUB_I32	= 385,
    ATOMIC_RMW_SUB_I32_S	= 386,
    ATOMIC_RMW_SUB_I64	= 387,
    ATOMIC_RMW_SUB_I64_S	= 388,
    ATOMIC_RMW_XCHG_I32	= 389,
    ATOMIC_RMW_XCHG_I32_S	= 390,
    ATOMIC_RMW_XCHG_I64	= 391,
    ATOMIC_RMW_XCHG_I64_S	= 392,
    ATOMIC_RMW_XOR_I32	= 393,
    ATOMIC_RMW_XOR_I32_S	= 394,
    ATOMIC_RMW_XOR_I64	= 395,
    ATOMIC_RMW_XOR_I64_S	= 396,
    ATOMIC_STORE16_I32	= 397,
    ATOMIC_STORE16_I32_S	= 398,
    ATOMIC_STORE16_I64	= 399,
    ATOMIC_STORE16_I64_S	= 400,
    ATOMIC_STORE32_I64	= 401,
    ATOMIC_STORE32_I64_S	= 402,
    ATOMIC_STORE8_I32	= 403,
    ATOMIC_STORE8_I32_S	= 404,
    ATOMIC_STORE8_I64	= 405,
    ATOMIC_STORE8_I64_S	= 406,
    ATOMIC_STORE_I32	= 407,
    ATOMIC_STORE_I32_S	= 408,
    ATOMIC_STORE_I64	= 409,
    ATOMIC_STORE_I64_S	= 410,
    ATOMIC_WAIT_I32	= 411,
    ATOMIC_WAIT_I32_S	= 412,
    ATOMIC_WAIT_I64	= 413,
    ATOMIC_WAIT_I64_S	= 414,
    AVGR_U_v16i8	= 415,
    AVGR_U_v16i8_S	= 416,
    AVGR_U_v8i16	= 417,
    AVGR_U_v8i16_S	= 418,
    BITSELECT_v16i8	= 419,
    BITSELECT_v16i8_S	= 420,
    BITSELECT_v2f64	= 421,
    BITSELECT_v2f64_S	= 422,
    BITSELECT_v2i64	= 423,
    BITSELECT_v2i64_S	= 424,
    BITSELECT_v4f32	= 425,
    BITSELECT_v4f32_S	= 426,
    BITSELECT_v4i32	= 427,
    BITSELECT_v4i32_S	= 428,
    BITSELECT_v8i16	= 429,
    BITSELECT_v8i16_S	= 430,
    BLOCK	= 431,
    BLOCK_S	= 432,
    BR	= 433,
    BR_IF	= 434,
    BR_IF_S	= 435,
    BR_ON_EXN	= 436,
    BR_ON_EXN_S	= 437,
    BR_S	= 438,
    BR_TABLE_I32	= 439,
    BR_TABLE_I32_S	= 440,
    BR_TABLE_I64	= 441,
    BR_TABLE_I64_S	= 442,
    BR_UNLESS	= 443,
    BR_UNLESS_S	= 444,
    CALL_INDIRECT_VOID	= 445,
    CALL_INDIRECT_VOID_S	= 446,
    CALL_INDIRECT_exnref	= 447,
    CALL_INDIRECT_exnref_S	= 448,
    CALL_INDIRECT_f32	= 449,
    CALL_INDIRECT_f32_S	= 450,
    CALL_INDIRECT_f64	= 451,
    CALL_INDIRECT_f64_S	= 452,
    CALL_INDIRECT_i32	= 453,
    CALL_INDIRECT_i32_S	= 454,
    CALL_INDIRECT_i64	= 455,
    CALL_INDIRECT_i64_S	= 456,
    CALL_INDIRECT_v16i8	= 457,
    CALL_INDIRECT_v16i8_S	= 458,
    CALL_INDIRECT_v2f64	= 459,
    CALL_INDIRECT_v2f64_S	= 460,
    CALL_INDIRECT_v2i64	= 461,
    CALL_INDIRECT_v2i64_S	= 462,
    CALL_INDIRECT_v4f32	= 463,
    CALL_INDIRECT_v4f32_S	= 464,
    CALL_INDIRECT_v4i32	= 465,
    CALL_INDIRECT_v4i32_S	= 466,
    CALL_INDIRECT_v8i16	= 467,
    CALL_INDIRECT_v8i16_S	= 468,
    CALL_VOID	= 469,
    CALL_VOID_S	= 470,
    CALL_exnref	= 471,
    CALL_exnref_S	= 472,
    CALL_f32	= 473,
    CALL_f32_S	= 474,
    CALL_f64	= 475,
    CALL_f64_S	= 476,
    CALL_i32	= 477,
    CALL_i32_S	= 478,
    CALL_i64	= 479,
    CALL_i64_S	= 480,
    CALL_v16i8	= 481,
    CALL_v16i8_S	= 482,
    CALL_v2f64	= 483,
    CALL_v2f64_S	= 484,
    CALL_v2i64	= 485,
    CALL_v2i64_S	= 486,
    CALL_v4f32	= 487,
    CALL_v4f32_S	= 488,
    CALL_v4i32	= 489,
    CALL_v4i32_S	= 490,
    CALL_v8i16	= 491,
    CALL_v8i16_S	= 492,
    CATCH	= 493,
    CATCH_S	= 494,
    CEIL_F32	= 495,
    CEIL_F32_S	= 496,
    CEIL_F64	= 497,
    CEIL_F64_S	= 498,
    CLZ_I32	= 499,
    CLZ_I32_S	= 500,
    CLZ_I64	= 501,
    CLZ_I64_S	= 502,
    CONST_F32	= 503,
    CONST_F32_S	= 504,
    CONST_F64	= 505,
    CONST_F64_S	= 506,
    CONST_I32	= 507,
    CONST_I32_S	= 508,
    CONST_I64	= 509,
    CONST_I64_S	= 510,
    CONST_V128_v16i8	= 511,
    CONST_V128_v16i8_S	= 512,
    CONST_V128_v2f64	= 513,
    CONST_V128_v2f64_S	= 514,
    CONST_V128_v2i64	= 515,
    CONST_V128_v2i64_S	= 516,
    CONST_V128_v4f32	= 517,
    CONST_V128_v4f32_S	= 518,
    CONST_V128_v4i32	= 519,
    CONST_V128_v4i32_S	= 520,
    CONST_V128_v8i16	= 521,
    CONST_V128_v8i16_S	= 522,
    COPYSIGN_F32	= 523,
    COPYSIGN_F32_S	= 524,
    COPYSIGN_F64	= 525,
    COPYSIGN_F64_S	= 526,
    COPY_EXNREF	= 527,
    COPY_EXNREF_S	= 528,
    COPY_F32	= 529,
    COPY_F32_S	= 530,
    COPY_F64	= 531,
    COPY_F64_S	= 532,
    COPY_I32	= 533,
    COPY_I32_S	= 534,
    COPY_I64	= 535,
    COPY_I64_S	= 536,
    COPY_V128	= 537,
    COPY_V128_S	= 538,
    CTZ_I32	= 539,
    CTZ_I32_S	= 540,
    CTZ_I64	= 541,
    CTZ_I64_S	= 542,
    DATA_DROP	= 543,
    DATA_DROP_S	= 544,
    DIV_F32	= 545,
    DIV_F32_S	= 546,
    DIV_F64	= 547,
    DIV_F64_S	= 548,
    DIV_S_I32	= 549,
    DIV_S_I32_S	= 550,
    DIV_S_I64	= 551,
    DIV_S_I64_S	= 552,
    DIV_U_I32	= 553,
    DIV_U_I32_S	= 554,
    DIV_U_I64	= 555,
    DIV_U_I64_S	= 556,
    DIV_v2f64	= 557,
    DIV_v2f64_S	= 558,
    DIV_v4f32	= 559,
    DIV_v4f32_S	= 560,
    DOT	= 561,
    DOT_S	= 562,
    DROP_EXNREF	= 563,
    DROP_EXNREF_S	= 564,
    DROP_F32	= 565,
    DROP_F32_S	= 566,
    DROP_F64	= 567,
    DROP_F64_S	= 568,
    DROP_I32	= 569,
    DROP_I32_S	= 570,
    DROP_I64	= 571,
    DROP_I64_S	= 572,
    DROP_V128	= 573,
    DROP_V128_S	= 574,
    ELSE	= 575,
    ELSE_S	= 576,
    END	= 577,
    END_BLOCK	= 578,
    END_BLOCK_S	= 579,
    END_FUNCTION	= 580,
    END_FUNCTION_S	= 581,
    END_IF	= 582,
    END_IF_S	= 583,
    END_LOOP	= 584,
    END_LOOP_S	= 585,
    END_S	= 586,
    END_TRY	= 587,
    END_TRY_S	= 588,
    EQZ_I32	= 589,
    EQZ_I32_S	= 590,
    EQZ_I64	= 591,
    EQZ_I64_S	= 592,
    EQ_F32	= 593,
    EQ_F32_S	= 594,
    EQ_F64	= 595,
    EQ_F64_S	= 596,
    EQ_I32	= 597,
    EQ_I32_S	= 598,
    EQ_I64	= 599,
    EQ_I64_S	= 600,
    EQ_v16i8	= 601,
    EQ_v16i8_S	= 602,
    EQ_v2f64	= 603,
    EQ_v2f64_S	= 604,
    EQ_v4f32	= 605,
    EQ_v4f32_S	= 606,
    EQ_v4i32	= 607,
    EQ_v4i32_S	= 608,
    EQ_v8i16	= 609,
    EQ_v8i16_S	= 610,
    EXTRACT_EXCEPTION_I32	= 611,
    EXTRACT_EXCEPTION_I32_S	= 612,
    EXTRACT_LANE_v16i8_s	= 613,
    EXTRACT_LANE_v16i8_s_S	= 614,
    EXTRACT_LANE_v16i8_u	= 615,
    EXTRACT_LANE_v16i8_u_S	= 616,
    EXTRACT_LANE_v2f64	= 617,
    EXTRACT_LANE_v2f64_S	= 618,
    EXTRACT_LANE_v2i64	= 619,
    EXTRACT_LANE_v2i64_S	= 620,
    EXTRACT_LANE_v4f32	= 621,
    EXTRACT_LANE_v4f32_S	= 622,
    EXTRACT_LANE_v4i32	= 623,
    EXTRACT_LANE_v4i32_S	= 624,
    EXTRACT_LANE_v8i16_s	= 625,
    EXTRACT_LANE_v8i16_s_S	= 626,
    EXTRACT_LANE_v8i16_u	= 627,
    EXTRACT_LANE_v8i16_u_S	= 628,
    F32_CONVERT_S_I32	= 629,
    F32_CONVERT_S_I32_S	= 630,
    F32_CONVERT_S_I64	= 631,
    F32_CONVERT_S_I64_S	= 632,
    F32_CONVERT_U_I32	= 633,
    F32_CONVERT_U_I32_S	= 634,
    F32_CONVERT_U_I64	= 635,
    F32_CONVERT_U_I64_S	= 636,
    F32_DEMOTE_F64	= 637,
    F32_DEMOTE_F64_S	= 638,
    F32_REINTERPRET_I32	= 639,
    F32_REINTERPRET_I32_S	= 640,
    F64_CONVERT_S_I32	= 641,
    F64_CONVERT_S_I32_S	= 642,
    F64_CONVERT_S_I64	= 643,
    F64_CONVERT_S_I64_S	= 644,
    F64_CONVERT_U_I32	= 645,
    F64_CONVERT_U_I32_S	= 646,
    F64_CONVERT_U_I64	= 647,
    F64_CONVERT_U_I64_S	= 648,
    F64_PROMOTE_F32	= 649,
    F64_PROMOTE_F32_S	= 650,
    F64_REINTERPRET_I64	= 651,
    F64_REINTERPRET_I64_S	= 652,
    FALLTHROUGH_RETURN	= 653,
    FALLTHROUGH_RETURN_S	= 654,
    FLOOR_F32	= 655,
    FLOOR_F32_S	= 656,
    FLOOR_F64	= 657,
    FLOOR_F64_S	= 658,
    FP_TO_SINT_I32_F32	= 659,
    FP_TO_SINT_I32_F32_S	= 660,
    FP_TO_SINT_I32_F64	= 661,
    FP_TO_SINT_I32_F64_S	= 662,
    FP_TO_SINT_I64_F32	= 663,
    FP_TO_SINT_I64_F32_S	= 664,
    FP_TO_SINT_I64_F64	= 665,
    FP_TO_SINT_I64_F64_S	= 666,
    FP_TO_UINT_I32_F32	= 667,
    FP_TO_UINT_I32_F32_S	= 668,
    FP_TO_UINT_I32_F64	= 669,
    FP_TO_UINT_I32_F64_S	= 670,
    FP_TO_UINT_I64_F32	= 671,
    FP_TO_UINT_I64_F32_S	= 672,
    FP_TO_UINT_I64_F64	= 673,
    FP_TO_UINT_I64_F64_S	= 674,
    GE_F32	= 675,
    GE_F32_S	= 676,
    GE_F64	= 677,
    GE_F64_S	= 678,
    GE_S_I32	= 679,
    GE_S_I32_S	= 680,
    GE_S_I64	= 681,
    GE_S_I64_S	= 682,
    GE_S_v16i8	= 683,
    GE_S_v16i8_S	= 684,
    GE_S_v4i32	= 685,
    GE_S_v4i32_S	= 686,
    GE_S_v8i16	= 687,
    GE_S_v8i16_S	= 688,
    GE_U_I32	= 689,
    GE_U_I32_S	= 690,
    GE_U_I64	= 691,
    GE_U_I64_S	= 692,
    GE_U_v16i8	= 693,
    GE_U_v16i8_S	= 694,
    GE_U_v4i32	= 695,
    GE_U_v4i32_S	= 696,
    GE_U_v8i16	= 697,
    GE_U_v8i16_S	= 698,
    GE_v2f64	= 699,
    GE_v2f64_S	= 700,
    GE_v4f32	= 701,
    GE_v4f32_S	= 702,
    GLOBAL_GET_EXNREF	= 703,
    GLOBAL_GET_EXNREF_S	= 704,
    GLOBAL_GET_F32	= 705,
    GLOBAL_GET_F32_S	= 706,
    GLOBAL_GET_F64	= 707,
    GLOBAL_GET_F64_S	= 708,
    GLOBAL_GET_I32	= 709,
    GLOBAL_GET_I32_S	= 710,
    GLOBAL_GET_I64	= 711,
    GLOBAL_GET_I64_S	= 712,
    GLOBAL_GET_V128	= 713,
    GLOBAL_GET_V128_S	= 714,
    GLOBAL_SET_EXNREF	= 715,
    GLOBAL_SET_EXNREF_S	= 716,
    GLOBAL_SET_F32	= 717,
    GLOBAL_SET_F32_S	= 718,
    GLOBAL_SET_F64	= 719,
    GLOBAL_SET_F64_S	= 720,
    GLOBAL_SET_I32	= 721,
    GLOBAL_SET_I32_S	= 722,
    GLOBAL_SET_I64	= 723,
    GLOBAL_SET_I64_S	= 724,
    GLOBAL_SET_V128	= 725,
    GLOBAL_SET_V128_S	= 726,
    GT_F32	= 727,
    GT_F32_S	= 728,
    GT_F64	= 729,
    GT_F64_S	= 730,
    GT_S_I32	= 731,
    GT_S_I32_S	= 732,
    GT_S_I64	= 733,
    GT_S_I64_S	= 734,
    GT_S_v16i8	= 735,
    GT_S_v16i8_S	= 736,
    GT_S_v4i32	= 737,
    GT_S_v4i32_S	= 738,
    GT_S_v8i16	= 739,
    GT_S_v8i16_S	= 740,
    GT_U_I32	= 741,
    GT_U_I32_S	= 742,
    GT_U_I64	= 743,
    GT_U_I64_S	= 744,
    GT_U_v16i8	= 745,
    GT_U_v16i8_S	= 746,
    GT_U_v4i32	= 747,
    GT_U_v4i32_S	= 748,
    GT_U_v8i16	= 749,
    GT_U_v8i16_S	= 750,
    GT_v2f64	= 751,
    GT_v2f64_S	= 752,
    GT_v4f32	= 753,
    GT_v4f32_S	= 754,
    I32_EXTEND16_S_I32	= 755,
    I32_EXTEND16_S_I32_S	= 756,
    I32_EXTEND8_S_I32	= 757,
    I32_EXTEND8_S_I32_S	= 758,
    I32_REINTERPRET_F32	= 759,
    I32_REINTERPRET_F32_S	= 760,
    I32_TRUNC_S_F32	= 761,
    I32_TRUNC_S_F32_S	= 762,
    I32_TRUNC_S_F64	= 763,
    I32_TRUNC_S_F64_S	= 764,
    I32_TRUNC_S_SAT_F32	= 765,
    I32_TRUNC_S_SAT_F32_S	= 766,
    I32_TRUNC_S_SAT_F64	= 767,
    I32_TRUNC_S_SAT_F64_S	= 768,
    I32_TRUNC_U_F32	= 769,
    I32_TRUNC_U_F32_S	= 770,
    I32_TRUNC_U_F64	= 771,
    I32_TRUNC_U_F64_S	= 772,
    I32_TRUNC_U_SAT_F32	= 773,
    I32_TRUNC_U_SAT_F32_S	= 774,
    I32_TRUNC_U_SAT_F64	= 775,
    I32_TRUNC_U_SAT_F64_S	= 776,
    I32_WRAP_I64	= 777,
    I32_WRAP_I64_S	= 778,
    I64_EXTEND16_S_I64	= 779,
    I64_EXTEND16_S_I64_S	= 780,
    I64_EXTEND32_S_I64	= 781,
    I64_EXTEND32_S_I64_S	= 782,
    I64_EXTEND8_S_I64	= 783,
    I64_EXTEND8_S_I64_S	= 784,
    I64_EXTEND_S_I32	= 785,
    I64_EXTEND_S_I32_S	= 786,
    I64_EXTEND_U_I32	= 787,
    I64_EXTEND_U_I32_S	= 788,
    I64_REINTERPRET_F64	= 789,
    I64_REINTERPRET_F64_S	= 790,
    I64_TRUNC_S_F32	= 791,
    I64_TRUNC_S_F32_S	= 792,
    I64_TRUNC_S_F64	= 793,
    I64_TRUNC_S_F64_S	= 794,
    I64_TRUNC_S_SAT_F32	= 795,
    I64_TRUNC_S_SAT_F32_S	= 796,
    I64_TRUNC_S_SAT_F64	= 797,
    I64_TRUNC_S_SAT_F64_S	= 798,
    I64_TRUNC_U_F32	= 799,
    I64_TRUNC_U_F32_S	= 800,
    I64_TRUNC_U_F64	= 801,
    I64_TRUNC_U_F64_S	= 802,
    I64_TRUNC_U_SAT_F32	= 803,
    I64_TRUNC_U_SAT_F32_S	= 804,
    I64_TRUNC_U_SAT_F64	= 805,
    I64_TRUNC_U_SAT_F64_S	= 806,
    IF	= 807,
    IF_S	= 808,
    LE_F32	= 809,
    LE_F32_S	= 810,
    LE_F64	= 811,
    LE_F64_S	= 812,
    LE_S_I32	= 813,
    LE_S_I32_S	= 814,
    LE_S_I64	= 815,
    LE_S_I64_S	= 816,
    LE_S_v16i8	= 817,
    LE_S_v16i8_S	= 818,
    LE_S_v4i32	= 819,
    LE_S_v4i32_S	= 820,
    LE_S_v8i16	= 821,
    LE_S_v8i16_S	= 822,
    LE_U_I32	= 823,
    LE_U_I32_S	= 824,
    LE_U_I64	= 825,
    LE_U_I64_S	= 826,
    LE_U_v16i8	= 827,
    LE_U_v16i8_S	= 828,
    LE_U_v4i32	= 829,
    LE_U_v4i32_S	= 830,
    LE_U_v8i16	= 831,
    LE_U_v8i16_S	= 832,
    LE_v2f64	= 833,
    LE_v2f64_S	= 834,
    LE_v4f32	= 835,
    LE_v4f32_S	= 836,
    LOAD16_S_I32	= 837,
    LOAD16_S_I32_S	= 838,
    LOAD16_S_I64	= 839,
    LOAD16_S_I64_S	= 840,
    LOAD16_U_I32	= 841,
    LOAD16_U_I32_S	= 842,
    LOAD16_U_I64	= 843,
    LOAD16_U_I64_S	= 844,
    LOAD32_S_I64	= 845,
    LOAD32_S_I64_S	= 846,
    LOAD32_U_I64	= 847,
    LOAD32_U_I64_S	= 848,
    LOAD8_S_I32	= 849,
    LOAD8_S_I32_S	= 850,
    LOAD8_S_I64	= 851,
    LOAD8_S_I64_S	= 852,
    LOAD8_U_I32	= 853,
    LOAD8_U_I32_S	= 854,
    LOAD8_U_I64	= 855,
    LOAD8_U_I64_S	= 856,
    LOAD_EXTEND_S_v2i64	= 857,
    LOAD_EXTEND_S_v2i64_S	= 858,
    LOAD_EXTEND_S_v4i32	= 859,
    LOAD_EXTEND_S_v4i32_S	= 860,
    LOAD_EXTEND_S_v8i16	= 861,
    LOAD_EXTEND_S_v8i16_S	= 862,
    LOAD_EXTEND_U_v2i64	= 863,
    LOAD_EXTEND_U_v2i64_S	= 864,
    LOAD_EXTEND_U_v4i32	= 865,
    LOAD_EXTEND_U_v4i32_S	= 866,
    LOAD_EXTEND_U_v8i16	= 867,
    LOAD_EXTEND_U_v8i16_S	= 868,
    LOAD_F32	= 869,
    LOAD_F32_S	= 870,
    LOAD_F64	= 871,
    LOAD_F64_S	= 872,
    LOAD_I32	= 873,
    LOAD_I32_S	= 874,
    LOAD_I64	= 875,
    LOAD_I64_S	= 876,
    LOAD_SPLAT_v16x8	= 877,
    LOAD_SPLAT_v16x8_S	= 878,
    LOAD_SPLAT_v32x4	= 879,
    LOAD_SPLAT_v32x4_S	= 880,
    LOAD_SPLAT_v64x2	= 881,
    LOAD_SPLAT_v64x2_S	= 882,
    LOAD_SPLAT_v8x16	= 883,
    LOAD_SPLAT_v8x16_S	= 884,
    LOAD_V128	= 885,
    LOAD_V128_S	= 886,
    LOCAL_GET_EXNREF	= 887,
    LOCAL_GET_EXNREF_S	= 888,
    LOCAL_GET_F32	= 889,
    LOCAL_GET_F32_S	= 890,
    LOCAL_GET_F64	= 891,
    LOCAL_GET_F64_S	= 892,
    LOCAL_GET_I32	= 893,
    LOCAL_GET_I32_S	= 894,
    LOCAL_GET_I64	= 895,
    LOCAL_GET_I64_S	= 896,
    LOCAL_GET_V128	= 897,
    LOCAL_GET_V128_S	= 898,
    LOCAL_SET_EXNREF	= 899,
    LOCAL_SET_EXNREF_S	= 900,
    LOCAL_SET_F32	= 901,
    LOCAL_SET_F32_S	= 902,
    LOCAL_SET_F64	= 903,
    LOCAL_SET_F64_S	= 904,
    LOCAL_SET_I32	= 905,
    LOCAL_SET_I32_S	= 906,
    LOCAL_SET_I64	= 907,
    LOCAL_SET_I64_S	= 908,
    LOCAL_SET_V128	= 909,
    LOCAL_SET_V128_S	= 910,
    LOCAL_TEE_EXNREF	= 911,
    LOCAL_TEE_EXNREF_S	= 912,
    LOCAL_TEE_F32	= 913,
    LOCAL_TEE_F32_S	= 914,
    LOCAL_TEE_F64	= 915,
    LOCAL_TEE_F64_S	= 916,
    LOCAL_TEE_I32	= 917,
    LOCAL_TEE_I32_S	= 918,
    LOCAL_TEE_I64	= 919,
    LOCAL_TEE_I64_S	= 920,
    LOCAL_TEE_V128	= 921,
    LOCAL_TEE_V128_S	= 922,
    LOOP	= 923,
    LOOP_S	= 924,
    LT_F32	= 925,
    LT_F32_S	= 926,
    LT_F64	= 927,
    LT_F64_S	= 928,
    LT_S_I32	= 929,
    LT_S_I32_S	= 930,
    LT_S_I64	= 931,
    LT_S_I64_S	= 932,
    LT_S_v16i8	= 933,
    LT_S_v16i8_S	= 934,
    LT_S_v4i32	= 935,
    LT_S_v4i32_S	= 936,
    LT_S_v8i16	= 937,
    LT_S_v8i16_S	= 938,
    LT_U_I32	= 939,
    LT_U_I32_S	= 940,
    LT_U_I64	= 941,
    LT_U_I64_S	= 942,
    LT_U_v16i8	= 943,
    LT_U_v16i8_S	= 944,
    LT_U_v4i32	= 945,
    LT_U_v4i32_S	= 946,
    LT_U_v8i16	= 947,
    LT_U_v8i16_S	= 948,
    LT_v2f64	= 949,
    LT_v2f64_S	= 950,
    LT_v4f32	= 951,
    LT_v4f32_S	= 952,
    MAX_F32	= 953,
    MAX_F32_S	= 954,
    MAX_F64	= 955,
    MAX_F64_S	= 956,
    MAX_S_v16i8	= 957,
    MAX_S_v16i8_S	= 958,
    MAX_S_v4i32	= 959,
    MAX_S_v4i32_S	= 960,
    MAX_S_v8i16	= 961,
    MAX_S_v8i16_S	= 962,
    MAX_U_v16i8	= 963,
    MAX_U_v16i8_S	= 964,
    MAX_U_v4i32	= 965,
    MAX_U_v4i32_S	= 966,
    MAX_U_v8i16	= 967,
    MAX_U_v8i16_S	= 968,
    MAX_v2f64	= 969,
    MAX_v2f64_S	= 970,
    MAX_v4f32	= 971,
    MAX_v4f32_S	= 972,
    MEMORY_COPY	= 973,
    MEMORY_COPY_S	= 974,
    MEMORY_FILL	= 975,
    MEMORY_FILL_S	= 976,
    MEMORY_GROW_I32	= 977,
    MEMORY_GROW_I32_S	= 978,
    MEMORY_INIT	= 979,
    MEMORY_INIT_S	= 980,
    MEMORY_SIZE_I32	= 981,
    MEMORY_SIZE_I32_S	= 982,
    MIN_F32	= 983,
    MIN_F32_S	= 984,
    MIN_F64	= 985,
    MIN_F64_S	= 986,
    MIN_S_v16i8	= 987,
    MIN_S_v16i8_S	= 988,
    MIN_S_v4i32	= 989,
    MIN_S_v4i32_S	= 990,
    MIN_S_v8i16	= 991,
    MIN_S_v8i16_S	= 992,
    MIN_U_v16i8	= 993,
    MIN_U_v16i8_S	= 994,
    MIN_U_v4i32	= 995,
    MIN_U_v4i32_S	= 996,
    MIN_U_v8i16	= 997,
    MIN_U_v8i16_S	= 998,
    MIN_v2f64	= 999,
    MIN_v2f64_S	= 1000,
    MIN_v4f32	= 1001,
    MIN_v4f32_S	= 1002,
    MUL_F32	= 1003,
    MUL_F32_S	= 1004,
    MUL_F64	= 1005,
    MUL_F64_S	= 1006,
    MUL_I32	= 1007,
    MUL_I32_S	= 1008,
    MUL_I64	= 1009,
    MUL_I64_S	= 1010,
    MUL_v16i8	= 1011,
    MUL_v16i8_S	= 1012,
    MUL_v2f64	= 1013,
    MUL_v2f64_S	= 1014,
    MUL_v4f32	= 1015,
    MUL_v4f32_S	= 1016,
    MUL_v4i32	= 1017,
    MUL_v4i32_S	= 1018,
    MUL_v8i16	= 1019,
    MUL_v8i16_S	= 1020,
    NARROW_S_v16i8	= 1021,
    NARROW_S_v16i8_S	= 1022,
    NARROW_S_v8i16	= 1023,
    NARROW_S_v8i16_S	= 1024,
    NARROW_U_v16i8	= 1025,
    NARROW_U_v16i8_S	= 1026,
    NARROW_U_v8i16	= 1027,
    NARROW_U_v8i16_S	= 1028,
    NEAREST_F32	= 1029,
    NEAREST_F32_S	= 1030,
    NEAREST_F64	= 1031,
    NEAREST_F64_S	= 1032,
    NEG_F32	= 1033,
    NEG_F32_S	= 1034,
    NEG_F64	= 1035,
    NEG_F64_S	= 1036,
    NEG_v16i8	= 1037,
    NEG_v16i8_S	= 1038,
    NEG_v2f64	= 1039,
    NEG_v2f64_S	= 1040,
    NEG_v2i64	= 1041,
    NEG_v2i64_S	= 1042,
    NEG_v4f32	= 1043,
    NEG_v4f32_S	= 1044,
    NEG_v4i32	= 1045,
    NEG_v4i32_S	= 1046,
    NEG_v8i16	= 1047,
    NEG_v8i16_S	= 1048,
    NE_F32	= 1049,
    NE_F32_S	= 1050,
    NE_F64	= 1051,
    NE_F64_S	= 1052,
    NE_I32	= 1053,
    NE_I32_S	= 1054,
    NE_I64	= 1055,
    NE_I64_S	= 1056,
    NE_v16i8	= 1057,
    NE_v16i8_S	= 1058,
    NE_v2f64	= 1059,
    NE_v2f64_S	= 1060,
    NE_v4f32	= 1061,
    NE_v4f32_S	= 1062,
    NE_v4i32	= 1063,
    NE_v4i32_S	= 1064,
    NE_v8i16	= 1065,
    NE_v8i16_S	= 1066,
    NOP	= 1067,
    NOP_S	= 1068,
    NOT_v16i8	= 1069,
    NOT_v16i8_S	= 1070,
    NOT_v2i64	= 1071,
    NOT_v2i64_S	= 1072,
    NOT_v4i32	= 1073,
    NOT_v4i32_S	= 1074,
    NOT_v8i16	= 1075,
    NOT_v8i16_S	= 1076,
    OR_I32	= 1077,
    OR_I32_S	= 1078,
    OR_I64	= 1079,
    OR_I64_S	= 1080,
    OR_v16i8	= 1081,
    OR_v16i8_S	= 1082,
    OR_v2i64	= 1083,
    OR_v2i64_S	= 1084,
    OR_v4i32	= 1085,
    OR_v4i32_S	= 1086,
    OR_v8i16	= 1087,
    OR_v8i16_S	= 1088,
    PCALL_INDIRECT_VOID	= 1089,
    PCALL_INDIRECT_VOID_S	= 1090,
    PCALL_INDIRECT_exnref	= 1091,
    PCALL_INDIRECT_exnref_S	= 1092,
    PCALL_INDIRECT_f32	= 1093,
    PCALL_INDIRECT_f32_S	= 1094,
    PCALL_INDIRECT_f64	= 1095,
    PCALL_INDIRECT_f64_S	= 1096,
    PCALL_INDIRECT_i32	= 1097,
    PCALL_INDIRECT_i32_S	= 1098,
    PCALL_INDIRECT_i64	= 1099,
    PCALL_INDIRECT_i64_S	= 1100,
    PCALL_INDIRECT_v16i8	= 1101,
    PCALL_INDIRECT_v16i8_S	= 1102,
    PCALL_INDIRECT_v2f64	= 1103,
    PCALL_INDIRECT_v2f64_S	= 1104,
    PCALL_INDIRECT_v2i64	= 1105,
    PCALL_INDIRECT_v2i64_S	= 1106,
    PCALL_INDIRECT_v4f32	= 1107,
    PCALL_INDIRECT_v4f32_S	= 1108,
    PCALL_INDIRECT_v4i32	= 1109,
    PCALL_INDIRECT_v4i32_S	= 1110,
    PCALL_INDIRECT_v8i16	= 1111,
    PCALL_INDIRECT_v8i16_S	= 1112,
    POPCNT_I32	= 1113,
    POPCNT_I32_S	= 1114,
    POPCNT_I64	= 1115,
    POPCNT_I64_S	= 1116,
    PRET_CALL_INDIRECT	= 1117,
    PRET_CALL_INDIRECT_S	= 1118,
    QFMA_v2f64	= 1119,
    QFMA_v2f64_S	= 1120,
    QFMA_v4f32	= 1121,
    QFMA_v4f32_S	= 1122,
    QFMS_v2f64	= 1123,
    QFMS_v2f64_S	= 1124,
    QFMS_v4f32	= 1125,
    QFMS_v4f32_S	= 1126,
    REM_S_I32	= 1127,
    REM_S_I32_S	= 1128,
    REM_S_I64	= 1129,
    REM_S_I64_S	= 1130,
    REM_U_I32	= 1131,
    REM_U_I32_S	= 1132,
    REM_U_I64	= 1133,
    REM_U_I64_S	= 1134,
    REPLACE_LANE_v16i8	= 1135,
    REPLACE_LANE_v16i8_S	= 1136,
    REPLACE_LANE_v2f64	= 1137,
    REPLACE_LANE_v2f64_S	= 1138,
    REPLACE_LANE_v2i64	= 1139,
    REPLACE_LANE_v2i64_S	= 1140,
    REPLACE_LANE_v4f32	= 1141,
    REPLACE_LANE_v4f32_S	= 1142,
    REPLACE_LANE_v4i32	= 1143,
    REPLACE_LANE_v4i32_S	= 1144,
    REPLACE_LANE_v8i16	= 1145,
    REPLACE_LANE_v8i16_S	= 1146,
    RETHROW	= 1147,
    RETHROW_S	= 1148,
    RETURN	= 1149,
    RETURN_S	= 1150,
    RET_CALL	= 1151,
    RET_CALL_INDIRECT	= 1152,
    RET_CALL_INDIRECT_S	= 1153,
    RET_CALL_S	= 1154,
    ROTL_I32	= 1155,
    ROTL_I32_S	= 1156,
    ROTL_I64	= 1157,
    ROTL_I64_S	= 1158,
    ROTR_I32	= 1159,
    ROTR_I32_S	= 1160,
    ROTR_I64	= 1161,
    ROTR_I64_S	= 1162,
    SELECT_EXNREF	= 1163,
    SELECT_EXNREF_S	= 1164,
    SELECT_F32	= 1165,
    SELECT_F32_S	= 1166,
    SELECT_F64	= 1167,
    SELECT_F64_S	= 1168,
    SELECT_I32	= 1169,
    SELECT_I32_S	= 1170,
    SELECT_I64	= 1171,
    SELECT_I64_S	= 1172,
    SHL_I32	= 1173,
    SHL_I32_S	= 1174,
    SHL_I64	= 1175,
    SHL_I64_S	= 1176,
    SHL_v16i8	= 1177,
    SHL_v16i8_S	= 1178,
    SHL_v2i64	= 1179,
    SHL_v2i64_S	= 1180,
    SHL_v4i32	= 1181,
    SHL_v4i32_S	= 1182,
    SHL_v8i16	= 1183,
    SHL_v8i16_S	= 1184,
    SHR_S_I32	= 1185,
    SHR_S_I32_S	= 1186,
    SHR_S_I64	= 1187,
    SHR_S_I64_S	= 1188,
    SHR_S_v16i8	= 1189,
    SHR_S_v16i8_S	= 1190,
    SHR_S_v2i64	= 1191,
    SHR_S_v2i64_S	= 1192,
    SHR_S_v4i32	= 1193,
    SHR_S_v4i32_S	= 1194,
    SHR_S_v8i16	= 1195,
    SHR_S_v8i16_S	= 1196,
    SHR_U_I32	= 1197,
    SHR_U_I32_S	= 1198,
    SHR_U_I64	= 1199,
    SHR_U_I64_S	= 1200,
    SHR_U_v16i8	= 1201,
    SHR_U_v16i8_S	= 1202,
    SHR_U_v2i64	= 1203,
    SHR_U_v2i64_S	= 1204,
    SHR_U_v4i32	= 1205,
    SHR_U_v4i32_S	= 1206,
    SHR_U_v8i16	= 1207,
    SHR_U_v8i16_S	= 1208,
    SHUFFLE	= 1209,
    SHUFFLE_S	= 1210,
    SPLAT_v16i8	= 1211,
    SPLAT_v16i8_S	= 1212,
    SPLAT_v2f64	= 1213,
    SPLAT_v2f64_S	= 1214,
    SPLAT_v2i64	= 1215,
    SPLAT_v2i64_S	= 1216,
    SPLAT_v4f32	= 1217,
    SPLAT_v4f32_S	= 1218,
    SPLAT_v4i32	= 1219,
    SPLAT_v4i32_S	= 1220,
    SPLAT_v8i16	= 1221,
    SPLAT_v8i16_S	= 1222,
    SQRT_F32	= 1223,
    SQRT_F32_S	= 1224,
    SQRT_F64	= 1225,
    SQRT_F64_S	= 1226,
    SQRT_v2f64	= 1227,
    SQRT_v2f64_S	= 1228,
    SQRT_v4f32	= 1229,
    SQRT_v4f32_S	= 1230,
    STORE16_I32	= 1231,
    STORE16_I32_S	= 1232,
    STORE16_I64	= 1233,
    STORE16_I64_S	= 1234,
    STORE32_I64	= 1235,
    STORE32_I64_S	= 1236,
    STORE8_I32	= 1237,
    STORE8_I32_S	= 1238,
    STORE8_I64	= 1239,
    STORE8_I64_S	= 1240,
    STORE_F32	= 1241,
    STORE_F32_S	= 1242,
    STORE_F64	= 1243,
    STORE_F64_S	= 1244,
    STORE_I32	= 1245,
    STORE_I32_S	= 1246,
    STORE_I64	= 1247,
    STORE_I64_S	= 1248,
    STORE_V128	= 1249,
    STORE_V128_S	= 1250,
    SUB_F32	= 1251,
    SUB_F32_S	= 1252,
    SUB_F64	= 1253,
    SUB_F64_S	= 1254,
    SUB_I32	= 1255,
    SUB_I32_S	= 1256,
    SUB_I64	= 1257,
    SUB_I64_S	= 1258,
    SUB_SAT_S_v16i8	= 1259,
    SUB_SAT_S_v16i8_S	= 1260,
    SUB_SAT_S_v8i16	= 1261,
    SUB_SAT_S_v8i16_S	= 1262,
    SUB_SAT_U_v16i8	= 1263,
    SUB_SAT_U_v16i8_S	= 1264,
    SUB_SAT_U_v8i16	= 1265,
    SUB_SAT_U_v8i16_S	= 1266,
    SUB_v16i8	= 1267,
    SUB_v16i8_S	= 1268,
    SUB_v2f64	= 1269,
    SUB_v2f64_S	= 1270,
    SUB_v2i64	= 1271,
    SUB_v2i64_S	= 1272,
    SUB_v4f32	= 1273,
    SUB_v4f32_S	= 1274,
    SUB_v4i32	= 1275,
    SUB_v4i32_S	= 1276,
    SUB_v8i16	= 1277,
    SUB_v8i16_S	= 1278,
    SWIZZLE	= 1279,
    SWIZZLE_S	= 1280,
    TEE_EXNREF	= 1281,
    TEE_EXNREF_S	= 1282,
    TEE_F32	= 1283,
    TEE_F32_S	= 1284,
    TEE_F64	= 1285,
    TEE_F64_S	= 1286,
    TEE_I32	= 1287,
    TEE_I32_S	= 1288,
    TEE_I64	= 1289,
    TEE_I64_S	= 1290,
    TEE_V128	= 1291,
    TEE_V128_S	= 1292,
    THROW	= 1293,
    THROW_S	= 1294,
    TRUNC_F32	= 1295,
    TRUNC_F32_S	= 1296,
    TRUNC_F64	= 1297,
    TRUNC_F64_S	= 1298,
    TRY	= 1299,
    TRY_S	= 1300,
    UNREACHABLE	= 1301,
    UNREACHABLE_S	= 1302,
    XOR_I32	= 1303,
    XOR_I32_S	= 1304,
    XOR_I64	= 1305,
    XOR_I64_S	= 1306,
    XOR_v16i8	= 1307,
    XOR_v16i8_S	= 1308,
    XOR_v2i64	= 1309,
    XOR_v2i64_S	= 1310,
    XOR_v4i32	= 1311,
    XOR_v4i32_S	= 1312,
    XOR_v8i16	= 1313,
    XOR_v8i16_S	= 1314,
    fp_to_sint_v2i64_v2f64	= 1315,
    fp_to_sint_v2i64_v2f64_S	= 1316,
    fp_to_sint_v4i32_v4f32	= 1317,
    fp_to_sint_v4i32_v4f32_S	= 1318,
    fp_to_uint_v2i64_v2f64	= 1319,
    fp_to_uint_v2i64_v2f64_S	= 1320,
    fp_to_uint_v4i32_v4f32	= 1321,
    fp_to_uint_v4i32_v4f32_S	= 1322,
    int_wasm_widen_high_signed_v4i32_v8i16	= 1323,
    int_wasm_widen_high_signed_v4i32_v8i16_S	= 1324,
    int_wasm_widen_high_signed_v8i16_v16i8	= 1325,
    int_wasm_widen_high_signed_v8i16_v16i8_S	= 1326,
    int_wasm_widen_high_unsigned_v4i32_v8i16	= 1327,
    int_wasm_widen_high_unsigned_v4i32_v8i16_S	= 1328,
    int_wasm_widen_high_unsigned_v8i16_v16i8	= 1329,
    int_wasm_widen_high_unsigned_v8i16_v16i8_S	= 1330,
    int_wasm_widen_low_signed_v4i32_v8i16	= 1331,
    int_wasm_widen_low_signed_v4i32_v8i16_S	= 1332,
    int_wasm_widen_low_signed_v8i16_v16i8	= 1333,
    int_wasm_widen_low_signed_v8i16_v16i8_S	= 1334,
    int_wasm_widen_low_unsigned_v4i32_v8i16	= 1335,
    int_wasm_widen_low_unsigned_v4i32_v8i16_S	= 1336,
    int_wasm_widen_low_unsigned_v8i16_v16i8	= 1337,
    int_wasm_widen_low_unsigned_v8i16_v16i8_S	= 1338,
    sint_to_fp_v2f64_v2i64	= 1339,
    sint_to_fp_v2f64_v2i64_S	= 1340,
    sint_to_fp_v4f32_v4i32	= 1341,
    sint_to_fp_v4f32_v4i32_S	= 1342,
    uint_to_fp_v2f64_v2i64	= 1343,
    uint_to_fp_v2f64_v2i64_S	= 1344,
    uint_to_fp_v4f32_v4i32	= 1345,
    uint_to_fp_v4f32_v4i32_S	= 1346,
    INSTRUCTION_LIST_END = 1347
  };

} // end namespace WebAssembly
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace WebAssembly {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // end namespace Sched
} // end namespace WebAssembly
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { WebAssembly::ARGUMENTS, 0 };
static const MCPhysReg ImplicitList2[] = { WebAssembly::SP32, WebAssembly::SP64, 0 };
static const MCPhysReg ImplicitList3[] = { WebAssembly::VALUE_STACK, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { -1, 0, WebAssembly::OPERAND_BASIC_BLOCK, 0 }, { -1, 0, WebAssembly::OPERAND_BASIC_BLOCK, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { WebAssembly::EXNREFRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_P2ALIGN, 0 }, { -1, 0, WebAssembly::OPERAND_OFFSET32, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { -1, 0, WebAssembly::OPERAND_P2ALIGN, 0 }, { -1, 0, WebAssembly::OPERAND_OFFSET32, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_P2ALIGN, 0 }, { -1, 0, WebAssembly::OPERAND_OFFSET32, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_P2ALIGN, 0 }, { -1, 0, WebAssembly::OPERAND_OFFSET32, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_P2ALIGN, 0 }, { -1, 0, WebAssembly::OPERAND_OFFSET32, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_P2ALIGN, 0 }, { -1, 0, WebAssembly::OPERAND_OFFSET32, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_P2ALIGN, 0 }, { -1, 0, WebAssembly::OPERAND_OFFSET32, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { -1, 0, WebAssembly::OPERAND_P2ALIGN, 0 }, { -1, 0, WebAssembly::OPERAND_OFFSET32, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { -1, 0, WebAssembly::OPERAND_P2ALIGN, 0 }, { -1, 0, WebAssembly::OPERAND_OFFSET32, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_P2ALIGN, 0 }, { -1, 0, WebAssembly::OPERAND_OFFSET32, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_P2ALIGN, 0 }, { -1, 0, WebAssembly::OPERAND_OFFSET32, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { -1, 0, WebAssembly::OPERAND_SIGNATURE, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { -1, 0, WebAssembly::OPERAND_BASIC_BLOCK, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { -1, 0, WebAssembly::OPERAND_BASIC_BLOCK, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { -1, 0, WebAssembly::OPERAND_BASIC_BLOCK, 0 }, { -1, 0, WebAssembly::OPERAND_EVENT, 0 }, { WebAssembly::EXNREFRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { -1, 0, WebAssembly::OPERAND_BASIC_BLOCK, 0 }, { -1, 0, WebAssembly::OPERAND_EVENT, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { -1, 0, WebAssembly::OPERAND_BRLIST, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { -1, 0, WebAssembly::OPERAND_TYPEINDEX, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { WebAssembly::EXNREFRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_TYPEINDEX, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_TYPEINDEX, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_TYPEINDEX, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_TYPEINDEX, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_TYPEINDEX, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_TYPEINDEX, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { -1, 0, WebAssembly::OPERAND_FUNCTION32, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { WebAssembly::EXNREFRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_FUNCTION32, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_FUNCTION32, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_FUNCTION32, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_FUNCTION32, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_FUNCTION32, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_FUNCTION32, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { WebAssembly::EXNREFRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_F32IMM, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { -1, 0, WebAssembly::OPERAND_F32IMM, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_F64IMM, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { -1, 0, WebAssembly::OPERAND_F64IMM, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_I32IMM, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { -1, 0, WebAssembly::OPERAND_I32IMM, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_I64IMM, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { -1, 0, WebAssembly::OPERAND_I64IMM, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_F64IMM, 0 }, { -1, 0, WebAssembly::OPERAND_F64IMM, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { -1, 0, WebAssembly::OPERAND_F64IMM, 0 }, { -1, 0, WebAssembly::OPERAND_F64IMM, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I64IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I64IMM, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { -1, 0, WebAssembly::OPERAND_VEC_I64IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I64IMM, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_F32IMM, 0 }, { -1, 0, WebAssembly::OPERAND_F32IMM, 0 }, { -1, 0, WebAssembly::OPERAND_F32IMM, 0 }, { -1, 0, WebAssembly::OPERAND_F32IMM, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { -1, 0, WebAssembly::OPERAND_F32IMM, 0 }, { -1, 0, WebAssembly::OPERAND_F32IMM, 0 }, { -1, 0, WebAssembly::OPERAND_F32IMM, 0 }, { -1, 0, WebAssembly::OPERAND_F32IMM, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I32IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I32IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I32IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I32IMM, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { -1, 0, WebAssembly::OPERAND_VEC_I32IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I32IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I32IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I32IMM, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I16IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I16IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I16IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I16IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I16IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I16IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I16IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I16IMM, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { -1, 0, WebAssembly::OPERAND_VEC_I16IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I16IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I16IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I16IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I16IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I16IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I16IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I16IMM, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { WebAssembly::EXNREFRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::EXNREFRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { WebAssembly::EXNREFRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_GLOBAL, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { -1, 0, WebAssembly::OPERAND_GLOBAL, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_GLOBAL, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_GLOBAL, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_GLOBAL, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_GLOBAL, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_GLOBAL, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { -1, 0, WebAssembly::OPERAND_GLOBAL, 0 }, { WebAssembly::EXNREFRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { -1, 0, WebAssembly::OPERAND_GLOBAL, 0 }, { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { -1, 0, WebAssembly::OPERAND_GLOBAL, 0 }, { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { -1, 0, WebAssembly::OPERAND_GLOBAL, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { -1, 0, WebAssembly::OPERAND_GLOBAL, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { -1, 0, WebAssembly::OPERAND_GLOBAL, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo146[] = { { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { -1, 0, WebAssembly::OPERAND_SIGNATURE, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo148[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_P2ALIGN, 0 }, { -1, 0, WebAssembly::OPERAND_OFFSET32, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo149[] = { { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_P2ALIGN, 0 }, { -1, 0, WebAssembly::OPERAND_OFFSET32, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo150[] = { { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_P2ALIGN, 0 }, { -1, 0, WebAssembly::OPERAND_OFFSET32, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo151[] = { { WebAssembly::EXNREFRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_LOCAL, 0 }, };
static const MCOperandInfo OperandInfo152[] = { { -1, 0, WebAssembly::OPERAND_LOCAL, 0 }, };
static const MCOperandInfo OperandInfo153[] = { { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_LOCAL, 0 }, };
static const MCOperandInfo OperandInfo154[] = { { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_LOCAL, 0 }, };
static const MCOperandInfo OperandInfo155[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_LOCAL, 0 }, };
static const MCOperandInfo OperandInfo156[] = { { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_LOCAL, 0 }, };
static const MCOperandInfo OperandInfo157[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_LOCAL, 0 }, };
static const MCOperandInfo OperandInfo158[] = { { -1, 0, WebAssembly::OPERAND_LOCAL, 0 }, { WebAssembly::EXNREFRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo159[] = { { -1, 0, WebAssembly::OPERAND_LOCAL, 0 }, { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo160[] = { { -1, 0, WebAssembly::OPERAND_LOCAL, 0 }, { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo161[] = { { -1, 0, WebAssembly::OPERAND_LOCAL, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo162[] = { { -1, 0, WebAssembly::OPERAND_LOCAL, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo163[] = { { -1, 0, WebAssembly::OPERAND_LOCAL, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo164[] = { { WebAssembly::EXNREFRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_LOCAL, 0 }, { WebAssembly::EXNREFRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo165[] = { { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_LOCAL, 0 }, { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo166[] = { { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_LOCAL, 0 }, { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo167[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_LOCAL, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo168[] = { { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_LOCAL, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo169[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_LOCAL, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo170[] = { { -1, 0, WebAssembly::OPERAND_I32IMM, 0 }, { -1, 0, WebAssembly::OPERAND_I32IMM, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo171[] = { { -1, 0, WebAssembly::OPERAND_I32IMM, 0 }, { -1, 0, WebAssembly::OPERAND_I32IMM, 0 }, };
static const MCOperandInfo OperandInfo172[] = { { -1, 0, WebAssembly::OPERAND_I32IMM, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo173[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo174[] = { { WebAssembly::EXNREFRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo175[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo176[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo177[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo178[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo179[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo180[] = { { WebAssembly::EXNREFRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::EXNREFRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::EXNREFRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo181[] = { { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo182[] = { { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo183[] = { { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo184[] = { { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo185[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo186[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, { -1, 0, WebAssembly::OPERAND_VEC_I8IMM, 0 }, };
static const MCOperandInfo OperandInfo187[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo188[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::I64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo189[] = { { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo190[] = { { -1, 0, WebAssembly::OPERAND_P2ALIGN, 0 }, { -1, 0, WebAssembly::OPERAND_OFFSET32, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo191[] = { { -1, 0, WebAssembly::OPERAND_P2ALIGN, 0 }, { -1, 0, WebAssembly::OPERAND_OFFSET32, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::F64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo192[] = { { -1, 0, WebAssembly::OPERAND_P2ALIGN, 0 }, { -1, 0, WebAssembly::OPERAND_OFFSET32, 0 }, { WebAssembly::I32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::V128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo193[] = { { WebAssembly::EXNREFRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::EXNREFRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { WebAssembly::EXNREFRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo194[] = { { -1, 0, WebAssembly::OPERAND_EVENT, 0 }, };

extern const MCInstrDesc WebAssemblyInsts[] = {
  { 0,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1 = INLINEASM
  { 2,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2 = INLINEASM_BR
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #3 = CFI_INSTRUCTION
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #4 = EH_LABEL
  { 5,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #5 = GC_LABEL
  { 6,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #6 = ANNOTATION_LABEL
  { 7,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #7 = KILL
  { 8,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #8 = EXTRACT_SUBREG
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #9 = INSERT_SUBREG
  { 10,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #10 = IMPLICIT_DEF
  { 11,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo6, -1 ,nullptr },  // Inst #11 = SUBREG_TO_REG
  { 12,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #12 = COPY_TO_REGCLASS
  { 13,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #13 = DBG_VALUE
  { 14,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #14 = DBG_LABEL
  { 15,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #15 = REG_SEQUENCE
  { 16,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #16 = COPY
  { 17,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #17 = BUNDLE
  { 18,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #18 = LIFETIME_START
  { 19,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #19 = LIFETIME_END
  { 20,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #20 = STACKMAP
  { 21,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #21 = FENTRY_CALL
  { 22,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo9, -1 ,nullptr },  // Inst #22 = PATCHPOINT
  { 23,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #23 = LOAD_STACK_GUARD
  { 24,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #24 = STATEPOINT
  { 25,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #25 = LOCAL_ESCAPE
  { 26,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #26 = FAULTING_OP
  { 27,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #27 = PATCHABLE_OP
  { 28,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #28 = PATCHABLE_FUNCTION_ENTER
  { 29,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #29 = PATCHABLE_RET
  { 30,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #30 = PATCHABLE_FUNCTION_EXIT
  { 31,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #31 = PATCHABLE_TAIL_CALL
  { 32,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #32 = PATCHABLE_EVENT_CALL
  { 33,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #33 = PATCHABLE_TYPED_EVENT_CALL
  { 34,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #34 = ICALL_BRANCH_FUNNEL
  { 35,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #35 = G_ADD
  { 36,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #36 = G_SUB
  { 37,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #37 = G_MUL
  { 38,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #38 = G_SDIV
  { 39,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #39 = G_UDIV
  { 40,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #40 = G_SREM
  { 41,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #41 = G_UREM
  { 42,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #42 = G_AND
  { 43,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #43 = G_OR
  { 44,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #44 = G_XOR
  { 45,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #45 = G_IMPLICIT_DEF
  { 46,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #46 = G_PHI
  { 47,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #47 = G_FRAME_INDEX
  { 48,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #48 = G_GLOBAL_VALUE
  { 49,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #49 = G_EXTRACT
  { 50,	2,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #50 = G_UNMERGE_VALUES
  { 51,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #51 = G_INSERT
  { 52,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #52 = G_MERGE_VALUES
  { 53,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #53 = G_BUILD_VECTOR
  { 54,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #54 = G_BUILD_VECTOR_TRUNC
  { 55,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #55 = G_CONCAT_VECTORS
  { 56,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #56 = G_PTRTOINT
  { 57,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #57 = G_INTTOPTR
  { 58,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #58 = G_BITCAST
  { 59,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #59 = G_INTRINSIC_TRUNC
  { 60,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #60 = G_INTRINSIC_ROUND
  { 61,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #61 = G_READCYCLECOUNTER
  { 62,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #62 = G_LOAD
  { 63,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #63 = G_SEXTLOAD
  { 64,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #64 = G_ZEXTLOAD
  { 65,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #65 = G_INDEXED_LOAD
  { 66,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #66 = G_INDEXED_SEXTLOAD
  { 67,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #67 = G_INDEXED_ZEXTLOAD
  { 68,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #68 = G_STORE
  { 69,	5,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #69 = G_INDEXED_STORE
  { 70,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #70 = G_ATOMIC_CMPXCHG_WITH_SUCCESS
  { 71,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #71 = G_ATOMIC_CMPXCHG
  { 72,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #72 = G_ATOMICRMW_XCHG
  { 73,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #73 = G_ATOMICRMW_ADD
  { 74,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #74 = G_ATOMICRMW_SUB
  { 75,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #75 = G_ATOMICRMW_AND
  { 76,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #76 = G_ATOMICRMW_NAND
  { 77,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #77 = G_ATOMICRMW_OR
  { 78,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #78 = G_ATOMICRMW_XOR
  { 79,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #79 = G_ATOMICRMW_MAX
  { 80,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #80 = G_ATOMICRMW_MIN
  { 81,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #81 = G_ATOMICRMW_UMAX
  { 82,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #82 = G_ATOMICRMW_UMIN
  { 83,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #83 = G_ATOMICRMW_FADD
  { 84,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #84 = G_ATOMICRMW_FSUB
  { 85,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #85 = G_FENCE
  { 86,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #86 = G_BRCOND
  { 87,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #87 = G_BRINDIRECT
  { 88,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #88 = G_INTRINSIC
  { 89,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #89 = G_INTRINSIC_W_SIDE_EFFECTS
  { 90,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #90 = G_ANYEXT
  { 91,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #91 = G_TRUNC
  { 92,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #92 = G_CONSTANT
  { 93,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #93 = G_FCONSTANT
  { 94,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #94 = G_VASTART
  { 95,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #95 = G_VAARG
  { 96,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #96 = G_SEXT
  { 97,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #97 = G_SEXT_INREG
  { 98,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #98 = G_ZEXT
  { 99,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #99 = G_SHL
  { 100,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #100 = G_LSHR
  { 101,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #101 = G_ASHR
  { 102,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #102 = G_ICMP
  { 103,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #103 = G_FCMP
  { 104,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #104 = G_SELECT
  { 105,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #105 = G_UADDO
  { 106,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #106 = G_UADDE
  { 107,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #107 = G_USUBO
  { 108,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #108 = G_USUBE
  { 109,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #109 = G_SADDO
  { 110,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #110 = G_SADDE
  { 111,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #111 = G_SSUBO
  { 112,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #112 = G_SSUBE
  { 113,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #113 = G_UMULO
  { 114,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #114 = G_SMULO
  { 115,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #115 = G_UMULH
  { 116,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #116 = G_SMULH
  { 117,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #117 = G_FADD
  { 118,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #118 = G_FSUB
  { 119,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #119 = G_FMUL
  { 120,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #120 = G_FMA
  { 121,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #121 = G_FMAD
  { 122,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #122 = G_FDIV
  { 123,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #123 = G_FREM
  { 124,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #124 = G_FPOW
  { 125,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #125 = G_FEXP
  { 126,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #126 = G_FEXP2
  { 127,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #127 = G_FLOG
  { 128,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #128 = G_FLOG2
  { 129,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #129 = G_FLOG10
  { 130,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #130 = G_FNEG
  { 131,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #131 = G_FPEXT
  { 132,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #132 = G_FPTRUNC
  { 133,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #133 = G_FPTOSI
  { 134,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #134 = G_FPTOUI
  { 135,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #135 = G_SITOFP
  { 136,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #136 = G_UITOFP
  { 137,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #137 = G_FABS
  { 138,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #138 = G_FCOPYSIGN
  { 139,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #139 = G_FCANONICALIZE
  { 140,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #140 = G_FMINNUM
  { 141,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #141 = G_FMAXNUM
  { 142,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #142 = G_FMINNUM_IEEE
  { 143,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #143 = G_FMAXNUM_IEEE
  { 144,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #144 = G_FMINIMUM
  { 145,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #145 = G_FMAXIMUM
  { 146,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #146 = G_PTR_ADD
  { 147,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #147 = G_PTR_MASK
  { 148,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #148 = G_SMIN
  { 149,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #149 = G_SMAX
  { 150,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #150 = G_UMIN
  { 151,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #151 = G_UMAX
  { 152,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #152 = G_BR
  { 153,	3,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #153 = G_BRJT
  { 154,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #154 = G_INSERT_VECTOR_ELT
  { 155,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #155 = G_EXTRACT_VECTOR_ELT
  { 156,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #156 = G_SHUFFLE_VECTOR
  { 157,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #157 = G_CTTZ
  { 158,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #158 = G_CTTZ_ZERO_UNDEF
  { 159,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #159 = G_CTLZ
  { 160,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #160 = G_CTLZ_ZERO_UNDEF
  { 161,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #161 = G_CTPOP
  { 162,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #162 = G_BSWAP
  { 163,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #163 = G_BITREVERSE
  { 164,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #164 = G_FCEIL
  { 165,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #165 = G_FCOS
  { 166,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #166 = G_FSIN
  { 167,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #167 = G_FSQRT
  { 168,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #168 = G_FFLOOR
  { 169,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #169 = G_FRINT
  { 170,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #170 = G_FNEARBYINT
  { 171,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #171 = G_ADDRSPACE_CAST
  { 172,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #172 = G_BLOCK_ADDR
  { 173,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #173 = G_JUMP_TABLE
  { 174,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #174 = G_DYN_STACKALLOC
  { 175,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::EHScopeReturn)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #175 = CATCHRET
  { 176,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::EHScopeReturn)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #176 = CATCHRET_S
  { 177,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::EHScopeReturn)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #177 = CLEANUPRET
  { 178,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::EHScopeReturn)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #178 = CLEANUPRET_S
  { 179,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #179 = COMPILER_FENCE
  { 180,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #180 = COMPILER_FENCE_S
  { 181,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #181 = RETHROW_IN_CATCH
  { 182,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #182 = RETHROW_IN_CATCH_S
  { 183,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #183 = ABS_F32
  { 184,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #184 = ABS_F32_S
  { 185,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #185 = ABS_F64
  { 186,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #186 = ABS_F64_S
  { 187,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #187 = ABS_v2f64
  { 188,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #188 = ABS_v2f64_S
  { 189,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #189 = ABS_v4f32
  { 190,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #190 = ABS_v4f32_S
  { 191,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #191 = ADD_F32
  { 192,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #192 = ADD_F32_S
  { 193,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #193 = ADD_F64
  { 194,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #194 = ADD_F64_S
  { 195,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #195 = ADD_I32
  { 196,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #196 = ADD_I32_S
  { 197,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #197 = ADD_I64
  { 198,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #198 = ADD_I64_S
  { 199,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #199 = ADD_SAT_S_v16i8
  { 200,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #200 = ADD_SAT_S_v16i8_S
  { 201,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #201 = ADD_SAT_S_v8i16
  { 202,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #202 = ADD_SAT_S_v8i16_S
  { 203,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #203 = ADD_SAT_U_v16i8
  { 204,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #204 = ADD_SAT_U_v16i8_S
  { 205,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #205 = ADD_SAT_U_v8i16
  { 206,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #206 = ADD_SAT_U_v8i16_S
  { 207,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #207 = ADD_v16i8
  { 208,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #208 = ADD_v16i8_S
  { 209,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #209 = ADD_v2f64
  { 210,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #210 = ADD_v2f64_S
  { 211,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #211 = ADD_v2i64
  { 212,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #212 = ADD_v2i64_S
  { 213,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #213 = ADD_v4f32
  { 214,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #214 = ADD_v4f32_S
  { 215,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #215 = ADD_v4i32
  { 216,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #216 = ADD_v4i32_S
  { 217,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #217 = ADD_v8i16
  { 218,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #218 = ADD_v8i16_S
  { 219,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo8, -1 ,nullptr },  // Inst #219 = ADJCALLSTACKDOWN
  { 220,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo8, -1 ,nullptr },  // Inst #220 = ADJCALLSTACKDOWN_S
  { 221,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo8, -1 ,nullptr },  // Inst #221 = ADJCALLSTACKUP
  { 222,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo8, -1 ,nullptr },  // Inst #222 = ADJCALLSTACKUP_S
  { 223,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46, -1 ,nullptr },  // Inst #223 = ALLTRUE_v16i8
  { 224,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #224 = ALLTRUE_v16i8_S
  { 225,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46, -1 ,nullptr },  // Inst #225 = ALLTRUE_v2i64
  { 226,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #226 = ALLTRUE_v2i64_S
  { 227,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46, -1 ,nullptr },  // Inst #227 = ALLTRUE_v4i32
  { 228,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #228 = ALLTRUE_v4i32_S
  { 229,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46, -1 ,nullptr },  // Inst #229 = ALLTRUE_v8i16
  { 230,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #230 = ALLTRUE_v8i16_S
  { 231,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #231 = ANDNOT_v16i8
  { 232,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #232 = ANDNOT_v16i8_S
  { 233,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #233 = ANDNOT_v2i64
  { 234,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #234 = ANDNOT_v2i64_S
  { 235,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #235 = ANDNOT_v4i32
  { 236,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #236 = ANDNOT_v4i32_S
  { 237,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #237 = ANDNOT_v8i16
  { 238,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #238 = ANDNOT_v8i16_S
  { 239,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #239 = AND_I32
  { 240,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #240 = AND_I32_S
  { 241,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #241 = AND_I64
  { 242,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #242 = AND_I64_S
  { 243,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #243 = AND_v16i8
  { 244,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #244 = AND_v16i8_S
  { 245,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #245 = AND_v2i64
  { 246,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #246 = AND_v2i64_S
  { 247,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #247 = AND_v4i32
  { 248,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #248 = AND_v4i32_S
  { 249,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #249 = AND_v8i16
  { 250,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #250 = AND_v8i16_S
  { 251,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46, -1 ,nullptr },  // Inst #251 = ANYTRUE_v16i8
  { 252,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #252 = ANYTRUE_v16i8_S
  { 253,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46, -1 ,nullptr },  // Inst #253 = ANYTRUE_v2i64
  { 254,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #254 = ANYTRUE_v2i64_S
  { 255,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46, -1 ,nullptr },  // Inst #255 = ANYTRUE_v4i32
  { 256,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #256 = ANYTRUE_v4i32_S
  { 257,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46, -1 ,nullptr },  // Inst #257 = ANYTRUE_v8i16
  { 258,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #258 = ANYTRUE_v8i16_S
  { 259,	2,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #259 = ARGUMENT_exnref
  { 260,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #260 = ARGUMENT_exnref_S
  { 261,	2,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #261 = ARGUMENT_f32
  { 262,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #262 = ARGUMENT_f32_S
  { 263,	2,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #263 = ARGUMENT_f64
  { 264,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #264 = ARGUMENT_f64_S
  { 265,	2,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #265 = ARGUMENT_i32
  { 266,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #266 = ARGUMENT_i32_S
  { 267,	2,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #267 = ARGUMENT_i64
  { 268,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #268 = ARGUMENT_i64_S
  { 269,	2,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #269 = ARGUMENT_v16i8
  { 270,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #270 = ARGUMENT_v16i8_S
  { 271,	2,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #271 = ARGUMENT_v2f64
  { 272,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #272 = ARGUMENT_v2f64_S
  { 273,	2,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #273 = ARGUMENT_v2i64
  { 274,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #274 = ARGUMENT_v2i64_S
  { 275,	2,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #275 = ARGUMENT_v4f32
  { 276,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #276 = ARGUMENT_v4f32_S
  { 277,	2,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #277 = ARGUMENT_v4i32
  { 278,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #278 = ARGUMENT_v4i32_S
  { 279,	2,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #279 = ARGUMENT_v8i16
  { 280,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #280 = ARGUMENT_v8i16_S
  { 281,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo3, -1 ,nullptr },  // Inst #281 = ATOMIC_FENCE
  { 282,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo3, -1 ,nullptr },  // Inst #282 = ATOMIC_FENCE_S
  { 283,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53, -1 ,nullptr },  // Inst #283 = ATOMIC_LOAD16_U_I32
  { 284,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #284 = ATOMIC_LOAD16_U_I32_S
  { 285,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55, -1 ,nullptr },  // Inst #285 = ATOMIC_LOAD16_U_I64
  { 286,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #286 = ATOMIC_LOAD16_U_I64_S
  { 287,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55, -1 ,nullptr },  // Inst #287 = ATOMIC_LOAD32_U_I64
  { 288,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #288 = ATOMIC_LOAD32_U_I64_S
  { 289,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53, -1 ,nullptr },  // Inst #289 = ATOMIC_LOAD8_U_I32
  { 290,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #290 = ATOMIC_LOAD8_U_I32_S
  { 291,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55, -1 ,nullptr },  // Inst #291 = ATOMIC_LOAD8_U_I64
  { 292,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #292 = ATOMIC_LOAD8_U_I64_S
  { 293,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53, -1 ,nullptr },  // Inst #293 = ATOMIC_LOAD_I32
  { 294,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #294 = ATOMIC_LOAD_I32_S
  { 295,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55, -1 ,nullptr },  // Inst #295 = ATOMIC_LOAD_I64
  { 296,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #296 = ATOMIC_LOAD_I64_S
  { 297,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #297 = ATOMIC_NOTIFY
  { 298,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #298 = ATOMIC_NOTIFY_S
  { 299,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #299 = ATOMIC_RMW16_U_ADD_I32
  { 300,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #300 = ATOMIC_RMW16_U_ADD_I32_S
  { 301,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #301 = ATOMIC_RMW16_U_ADD_I64
  { 302,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #302 = ATOMIC_RMW16_U_ADD_I64_S
  { 303,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #303 = ATOMIC_RMW16_U_AND_I32
  { 304,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #304 = ATOMIC_RMW16_U_AND_I32_S
  { 305,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #305 = ATOMIC_RMW16_U_AND_I64
  { 306,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #306 = ATOMIC_RMW16_U_AND_I64_S
  { 307,	6,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo58, -1 ,nullptr },  // Inst #307 = ATOMIC_RMW16_U_CMPXCHG_I32
  { 308,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #308 = ATOMIC_RMW16_U_CMPXCHG_I32_S
  { 309,	6,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo59, -1 ,nullptr },  // Inst #309 = ATOMIC_RMW16_U_CMPXCHG_I64
  { 310,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #310 = ATOMIC_RMW16_U_CMPXCHG_I64_S
  { 311,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #311 = ATOMIC_RMW16_U_OR_I32
  { 312,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #312 = ATOMIC_RMW16_U_OR_I32_S
  { 313,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #313 = ATOMIC_RMW16_U_OR_I64
  { 314,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #314 = ATOMIC_RMW16_U_OR_I64_S
  { 315,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #315 = ATOMIC_RMW16_U_SUB_I32
  { 316,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #316 = ATOMIC_RMW16_U_SUB_I32_S
  { 317,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #317 = ATOMIC_RMW16_U_SUB_I64
  { 318,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #318 = ATOMIC_RMW16_U_SUB_I64_S
  { 319,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #319 = ATOMIC_RMW16_U_XCHG_I32
  { 320,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #320 = ATOMIC_RMW16_U_XCHG_I32_S
  { 321,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #321 = ATOMIC_RMW16_U_XCHG_I64
  { 322,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #322 = ATOMIC_RMW16_U_XCHG_I64_S
  { 323,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #323 = ATOMIC_RMW16_U_XOR_I32
  { 324,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #324 = ATOMIC_RMW16_U_XOR_I32_S
  { 325,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #325 = ATOMIC_RMW16_U_XOR_I64
  { 326,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #326 = ATOMIC_RMW16_U_XOR_I64_S
  { 327,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #327 = ATOMIC_RMW32_U_ADD_I64
  { 328,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #328 = ATOMIC_RMW32_U_ADD_I64_S
  { 329,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #329 = ATOMIC_RMW32_U_AND_I64
  { 330,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #330 = ATOMIC_RMW32_U_AND_I64_S
  { 331,	6,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo59, -1 ,nullptr },  // Inst #331 = ATOMIC_RMW32_U_CMPXCHG_I64
  { 332,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #332 = ATOMIC_RMW32_U_CMPXCHG_I64_S
  { 333,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #333 = ATOMIC_RMW32_U_OR_I64
  { 334,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #334 = ATOMIC_RMW32_U_OR_I64_S
  { 335,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #335 = ATOMIC_RMW32_U_SUB_I64
  { 336,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #336 = ATOMIC_RMW32_U_SUB_I64_S
  { 337,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #337 = ATOMIC_RMW32_U_XCHG_I64
  { 338,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #338 = ATOMIC_RMW32_U_XCHG_I64_S
  { 339,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #339 = ATOMIC_RMW32_U_XOR_I64
  { 340,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #340 = ATOMIC_RMW32_U_XOR_I64_S
  { 341,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #341 = ATOMIC_RMW8_U_ADD_I32
  { 342,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #342 = ATOMIC_RMW8_U_ADD_I32_S
  { 343,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #343 = ATOMIC_RMW8_U_ADD_I64
  { 344,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #344 = ATOMIC_RMW8_U_ADD_I64_S
  { 345,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #345 = ATOMIC_RMW8_U_AND_I32
  { 346,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #346 = ATOMIC_RMW8_U_AND_I32_S
  { 347,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #347 = ATOMIC_RMW8_U_AND_I64
  { 348,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #348 = ATOMIC_RMW8_U_AND_I64_S
  { 349,	6,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo58, -1 ,nullptr },  // Inst #349 = ATOMIC_RMW8_U_CMPXCHG_I32
  { 350,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #350 = ATOMIC_RMW8_U_CMPXCHG_I32_S
  { 351,	6,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo59, -1 ,nullptr },  // Inst #351 = ATOMIC_RMW8_U_CMPXCHG_I64
  { 352,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #352 = ATOMIC_RMW8_U_CMPXCHG_I64_S
  { 353,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #353 = ATOMIC_RMW8_U_OR_I32
  { 354,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #354 = ATOMIC_RMW8_U_OR_I32_S
  { 355,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #355 = ATOMIC_RMW8_U_OR_I64
  { 356,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #356 = ATOMIC_RMW8_U_OR_I64_S
  { 357,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #357 = ATOMIC_RMW8_U_SUB_I32
  { 358,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #358 = ATOMIC_RMW8_U_SUB_I32_S
  { 359,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #359 = ATOMIC_RMW8_U_SUB_I64
  { 360,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #360 = ATOMIC_RMW8_U_SUB_I64_S
  { 361,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #361 = ATOMIC_RMW8_U_XCHG_I32
  { 362,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #362 = ATOMIC_RMW8_U_XCHG_I32_S
  { 363,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #363 = ATOMIC_RMW8_U_XCHG_I64
  { 364,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #364 = ATOMIC_RMW8_U_XCHG_I64_S
  { 365,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #365 = ATOMIC_RMW8_U_XOR_I32
  { 366,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #366 = ATOMIC_RMW8_U_XOR_I32_S
  { 367,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #367 = ATOMIC_RMW8_U_XOR_I64
  { 368,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #368 = ATOMIC_RMW8_U_XOR_I64_S
  { 369,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #369 = ATOMIC_RMW_ADD_I32
  { 370,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #370 = ATOMIC_RMW_ADD_I32_S
  { 371,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #371 = ATOMIC_RMW_ADD_I64
  { 372,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #372 = ATOMIC_RMW_ADD_I64_S
  { 373,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #373 = ATOMIC_RMW_AND_I32
  { 374,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #374 = ATOMIC_RMW_AND_I32_S
  { 375,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #375 = ATOMIC_RMW_AND_I64
  { 376,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #376 = ATOMIC_RMW_AND_I64_S
  { 377,	6,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo58, -1 ,nullptr },  // Inst #377 = ATOMIC_RMW_CMPXCHG_I32
  { 378,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #378 = ATOMIC_RMW_CMPXCHG_I32_S
  { 379,	6,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo59, -1 ,nullptr },  // Inst #379 = ATOMIC_RMW_CMPXCHG_I64
  { 380,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #380 = ATOMIC_RMW_CMPXCHG_I64_S
  { 381,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #381 = ATOMIC_RMW_OR_I32
  { 382,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #382 = ATOMIC_RMW_OR_I32_S
  { 383,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #383 = ATOMIC_RMW_OR_I64
  { 384,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #384 = ATOMIC_RMW_OR_I64_S
  { 385,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #385 = ATOMIC_RMW_SUB_I32
  { 386,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #386 = ATOMIC_RMW_SUB_I32_S
  { 387,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #387 = ATOMIC_RMW_SUB_I64
  { 388,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #388 = ATOMIC_RMW_SUB_I64_S
  { 389,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #389 = ATOMIC_RMW_XCHG_I32
  { 390,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #390 = ATOMIC_RMW_XCHG_I32_S
  { 391,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #391 = ATOMIC_RMW_XCHG_I64
  { 392,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #392 = ATOMIC_RMW_XCHG_I64_S
  { 393,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #393 = ATOMIC_RMW_XOR_I32
  { 394,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #394 = ATOMIC_RMW_XOR_I32_S
  { 395,	5,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #395 = ATOMIC_RMW_XOR_I64
  { 396,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #396 = ATOMIC_RMW_XOR_I64_S
  { 397,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo60, -1 ,nullptr },  // Inst #397 = ATOMIC_STORE16_I32
  { 398,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #398 = ATOMIC_STORE16_I32_S
  { 399,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo61, -1 ,nullptr },  // Inst #399 = ATOMIC_STORE16_I64
  { 400,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #400 = ATOMIC_STORE16_I64_S
  { 401,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo61, -1 ,nullptr },  // Inst #401 = ATOMIC_STORE32_I64
  { 402,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #402 = ATOMIC_STORE32_I64_S
  { 403,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo60, -1 ,nullptr },  // Inst #403 = ATOMIC_STORE8_I32
  { 404,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #404 = ATOMIC_STORE8_I32_S
  { 405,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo61, -1 ,nullptr },  // Inst #405 = ATOMIC_STORE8_I64
  { 406,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #406 = ATOMIC_STORE8_I64_S
  { 407,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo60, -1 ,nullptr },  // Inst #407 = ATOMIC_STORE_I32
  { 408,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #408 = ATOMIC_STORE_I32_S
  { 409,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo61, -1 ,nullptr },  // Inst #409 = ATOMIC_STORE_I64
  { 410,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #410 = ATOMIC_STORE_I64_S
  { 411,	6,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo62, -1 ,nullptr },  // Inst #411 = ATOMIC_WAIT_I32
  { 412,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #412 = ATOMIC_WAIT_I32_S
  { 413,	6,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo63, -1 ,nullptr },  // Inst #413 = ATOMIC_WAIT_I64
  { 414,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #414 = ATOMIC_WAIT_I64_S
  { 415,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #415 = AVGR_U_v16i8
  { 416,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #416 = AVGR_U_v16i8_S
  { 417,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #417 = AVGR_U_v8i16
  { 418,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #418 = AVGR_U_v8i16_S
  { 419,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo64, -1 ,nullptr },  // Inst #419 = BITSELECT_v16i8
  { 420,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #420 = BITSELECT_v16i8_S
  { 421,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo64, -1 ,nullptr },  // Inst #421 = BITSELECT_v2f64
  { 422,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #422 = BITSELECT_v2f64_S
  { 423,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo64, -1 ,nullptr },  // Inst #423 = BITSELECT_v2i64
  { 424,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #424 = BITSELECT_v2i64_S
  { 425,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo64, -1 ,nullptr },  // Inst #425 = BITSELECT_v4f32
  { 426,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #426 = BITSELECT_v4f32_S
  { 427,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo64, -1 ,nullptr },  // Inst #427 = BITSELECT_v4i32
  { 428,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #428 = BITSELECT_v4i32_S
  { 429,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo64, -1 ,nullptr },  // Inst #429 = BITSELECT_v8i16
  { 430,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #430 = BITSELECT_v8i16_S
  { 431,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo65, -1 ,nullptr },  // Inst #431 = BLOCK
  { 432,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo65, -1 ,nullptr },  // Inst #432 = BLOCK_S
  { 433,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo66, -1 ,nullptr },  // Inst #433 = BR
  { 434,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo67, -1 ,nullptr },  // Inst #434 = BR_IF
  { 435,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo66, -1 ,nullptr },  // Inst #435 = BR_IF_S
  { 436,	3,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo68, -1 ,nullptr },  // Inst #436 = BR_ON_EXN
  { 437,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo69, -1 ,nullptr },  // Inst #437 = BR_ON_EXN_S
  { 438,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo66, -1 ,nullptr },  // Inst #438 = BR_S
  { 439,	1,	0,	0,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo70, -1 ,nullptr },  // Inst #439 = BR_TABLE_I32
  { 440,	1,	0,	0,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo71, -1 ,nullptr },  // Inst #440 = BR_TABLE_I32_S
  { 441,	1,	0,	0,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo72, -1 ,nullptr },  // Inst #441 = BR_TABLE_I64
  { 442,	1,	0,	0,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo71, -1 ,nullptr },  // Inst #442 = BR_TABLE_I64_S
  { 443,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo67, -1 ,nullptr },  // Inst #443 = BR_UNLESS
  { 444,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo66, -1 ,nullptr },  // Inst #444 = BR_UNLESS_S
  { 445,	2,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo73, -1 ,nullptr },  // Inst #445 = CALL_INDIRECT_VOID
  { 446,	2,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo73, -1 ,nullptr },  // Inst #446 = CALL_INDIRECT_VOID_S
  { 447,	3,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo74, -1 ,nullptr },  // Inst #447 = CALL_INDIRECT_exnref
  { 448,	2,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo73, -1 ,nullptr },  // Inst #448 = CALL_INDIRECT_exnref_S
  { 449,	3,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo75, -1 ,nullptr },  // Inst #449 = CALL_INDIRECT_f32
  { 450,	2,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo73, -1 ,nullptr },  // Inst #450 = CALL_INDIRECT_f32_S
  { 451,	3,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo76, -1 ,nullptr },  // Inst #451 = CALL_INDIRECT_f64
  { 452,	2,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo73, -1 ,nullptr },  // Inst #452 = CALL_INDIRECT_f64_S
  { 453,	3,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo77, -1 ,nullptr },  // Inst #453 = CALL_INDIRECT_i32
  { 454,	2,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo73, -1 ,nullptr },  // Inst #454 = CALL_INDIRECT_i32_S
  { 455,	3,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo78, -1 ,nullptr },  // Inst #455 = CALL_INDIRECT_i64
  { 456,	2,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo73, -1 ,nullptr },  // Inst #456 = CALL_INDIRECT_i64_S
  { 457,	3,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo79, -1 ,nullptr },  // Inst #457 = CALL_INDIRECT_v16i8
  { 458,	2,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo73, -1 ,nullptr },  // Inst #458 = CALL_INDIRECT_v16i8_S
  { 459,	3,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo79, -1 ,nullptr },  // Inst #459 = CALL_INDIRECT_v2f64
  { 460,	2,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo73, -1 ,nullptr },  // Inst #460 = CALL_INDIRECT_v2f64_S
  { 461,	3,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo79, -1 ,nullptr },  // Inst #461 = CALL_INDIRECT_v2i64
  { 462,	2,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo73, -1 ,nullptr },  // Inst #462 = CALL_INDIRECT_v2i64_S
  { 463,	3,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo79, -1 ,nullptr },  // Inst #463 = CALL_INDIRECT_v4f32
  { 464,	2,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo73, -1 ,nullptr },  // Inst #464 = CALL_INDIRECT_v4f32_S
  { 465,	3,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo79, -1 ,nullptr },  // Inst #465 = CALL_INDIRECT_v4i32
  { 466,	2,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo73, -1 ,nullptr },  // Inst #466 = CALL_INDIRECT_v4i32_S
  { 467,	3,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo79, -1 ,nullptr },  // Inst #467 = CALL_INDIRECT_v8i16
  { 468,	2,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo73, -1 ,nullptr },  // Inst #468 = CALL_INDIRECT_v8i16_S
  { 469,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo80, -1 ,nullptr },  // Inst #469 = CALL_VOID
  { 470,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo80, -1 ,nullptr },  // Inst #470 = CALL_VOID_S
  { 471,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo81, -1 ,nullptr },  // Inst #471 = CALL_exnref
  { 472,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo80, -1 ,nullptr },  // Inst #472 = CALL_exnref_S
  { 473,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo82, -1 ,nullptr },  // Inst #473 = CALL_f32
  { 474,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo80, -1 ,nullptr },  // Inst #474 = CALL_f32_S
  { 475,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo83, -1 ,nullptr },  // Inst #475 = CALL_f64
  { 476,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo80, -1 ,nullptr },  // Inst #476 = CALL_f64_S
  { 477,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo84, -1 ,nullptr },  // Inst #477 = CALL_i32
  { 478,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo80, -1 ,nullptr },  // Inst #478 = CALL_i32_S
  { 479,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo85, -1 ,nullptr },  // Inst #479 = CALL_i64
  { 480,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo80, -1 ,nullptr },  // Inst #480 = CALL_i64_S
  { 481,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo86, -1 ,nullptr },  // Inst #481 = CALL_v16i8
  { 482,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo80, -1 ,nullptr },  // Inst #482 = CALL_v16i8_S
  { 483,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo86, -1 ,nullptr },  // Inst #483 = CALL_v2f64
  { 484,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo80, -1 ,nullptr },  // Inst #484 = CALL_v2f64_S
  { 485,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo86, -1 ,nullptr },  // Inst #485 = CALL_v2i64
  { 486,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo80, -1 ,nullptr },  // Inst #486 = CALL_v2i64_S
  { 487,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo86, -1 ,nullptr },  // Inst #487 = CALL_v4f32
  { 488,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo80, -1 ,nullptr },  // Inst #488 = CALL_v4f32_S
  { 489,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo86, -1 ,nullptr },  // Inst #489 = CALL_v4i32
  { 490,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo80, -1 ,nullptr },  // Inst #490 = CALL_v4i32_S
  { 491,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo86, -1 ,nullptr },  // Inst #491 = CALL_v8i16
  { 492,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo80, -1 ,nullptr },  // Inst #492 = CALL_v8i16_S
  { 493,	1,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo87, -1 ,nullptr },  // Inst #493 = CATCH
  { 494,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #494 = CATCH_S
  { 495,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #495 = CEIL_F32
  { 496,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #496 = CEIL_F32_S
  { 497,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #497 = CEIL_F64
  { 498,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #498 = CEIL_F64_S
  { 499,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo88, -1 ,nullptr },  // Inst #499 = CLZ_I32
  { 500,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #500 = CLZ_I32_S
  { 501,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo89, -1 ,nullptr },  // Inst #501 = CLZ_I64
  { 502,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #502 = CLZ_I64_S
  { 503,	2,	1,	0,	0,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo90, -1 ,nullptr },  // Inst #503 = CONST_F32
  { 504,	1,	0,	0,	0,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo91, -1 ,nullptr },  // Inst #504 = CONST_F32_S
  { 505,	2,	1,	0,	0,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo92, -1 ,nullptr },  // Inst #505 = CONST_F64
  { 506,	1,	0,	0,	0,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo93, -1 ,nullptr },  // Inst #506 = CONST_F64_S
  { 507,	2,	1,	0,	0,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo94, -1 ,nullptr },  // Inst #507 = CONST_I32
  { 508,	1,	0,	0,	0,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo95, -1 ,nullptr },  // Inst #508 = CONST_I32_S
  { 509,	2,	1,	0,	0,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo96, -1 ,nullptr },  // Inst #509 = CONST_I64
  { 510,	1,	0,	0,	0,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo97, -1 ,nullptr },  // Inst #510 = CONST_I64_S
  { 511,	17,	1,	0,	0,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo98, -1 ,nullptr },  // Inst #511 = CONST_V128_v16i8
  { 512,	16,	0,	0,	0,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo99, -1 ,nullptr },  // Inst #512 = CONST_V128_v16i8_S
  { 513,	3,	1,	0,	0,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo100, -1 ,nullptr },  // Inst #513 = CONST_V128_v2f64
  { 514,	2,	0,	0,	0,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo101, -1 ,nullptr },  // Inst #514 = CONST_V128_v2f64_S
  { 515,	3,	1,	0,	0,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo102, -1 ,nullptr },  // Inst #515 = CONST_V128_v2i64
  { 516,	2,	0,	0,	0,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo103, -1 ,nullptr },  // Inst #516 = CONST_V128_v2i64_S
  { 517,	5,	1,	0,	0,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo104, -1 ,nullptr },  // Inst #517 = CONST_V128_v4f32
  { 518,	4,	0,	0,	0,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo105, -1 ,nullptr },  // Inst #518 = CONST_V128_v4f32_S
  { 519,	5,	1,	0,	0,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo106, -1 ,nullptr },  // Inst #519 = CONST_V128_v4i32
  { 520,	4,	0,	0,	0,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo107, -1 ,nullptr },  // Inst #520 = CONST_V128_v4i32_S
  { 521,	9,	1,	0,	0,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo108, -1 ,nullptr },  // Inst #521 = CONST_V128_v8i16
  { 522,	8,	0,	0,	0,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo109, -1 ,nullptr },  // Inst #522 = CONST_V128_v8i16_S
  { 523,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #523 = COPYSIGN_F32
  { 524,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #524 = COPYSIGN_F32_S
  { 525,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #525 = COPYSIGN_F64
  { 526,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #526 = COPYSIGN_F64_S
  { 527,	2,	1,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo110, -1 ,nullptr },  // Inst #527 = COPY_EXNREF
  { 528,	0,	0,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #528 = COPY_EXNREF_S
  { 529,	2,	1,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #529 = COPY_F32
  { 530,	0,	0,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #530 = COPY_F32_S
  { 531,	2,	1,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #531 = COPY_F64
  { 532,	0,	0,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #532 = COPY_F64_S
  { 533,	2,	1,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo88, -1 ,nullptr },  // Inst #533 = COPY_I32
  { 534,	0,	0,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #534 = COPY_I32_S
  { 535,	2,	1,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo89, -1 ,nullptr },  // Inst #535 = COPY_I64
  { 536,	0,	0,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #536 = COPY_I64_S
  { 537,	2,	1,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #537 = COPY_V128
  { 538,	0,	0,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #538 = COPY_V128_S
  { 539,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo88, -1 ,nullptr },  // Inst #539 = CTZ_I32
  { 540,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #540 = CTZ_I32_S
  { 541,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo89, -1 ,nullptr },  // Inst #541 = CTZ_I64
  { 542,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #542 = CTZ_I64_S
  { 543,	1,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo95, -1 ,nullptr },  // Inst #543 = DATA_DROP
  { 544,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo95, -1 ,nullptr },  // Inst #544 = DATA_DROP_S
  { 545,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #545 = DIV_F32
  { 546,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #546 = DIV_F32_S
  { 547,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #547 = DIV_F64
  { 548,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #548 = DIV_F64_S
  { 549,	3,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #549 = DIV_S_I32
  { 550,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #550 = DIV_S_I32_S
  { 551,	3,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #551 = DIV_S_I64
  { 552,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #552 = DIV_S_I64_S
  { 553,	3,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #553 = DIV_U_I32
  { 554,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #554 = DIV_U_I32_S
  { 555,	3,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #555 = DIV_U_I64
  { 556,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #556 = DIV_U_I64_S
  { 557,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #557 = DIV_v2f64
  { 558,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #558 = DIV_v2f64_S
  { 559,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #559 = DIV_v4f32
  { 560,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #560 = DIV_v4f32_S
  { 561,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #561 = DOT
  { 562,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #562 = DOT_S
  { 563,	1,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo87, -1 ,nullptr },  // Inst #563 = DROP_EXNREF
  { 564,	0,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #564 = DROP_EXNREF_S
  { 565,	1,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo111, -1 ,nullptr },  // Inst #565 = DROP_F32
  { 566,	0,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #566 = DROP_F32_S
  { 567,	1,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo112, -1 ,nullptr },  // Inst #567 = DROP_F64
  { 568,	0,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #568 = DROP_F64_S
  { 569,	1,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo70, -1 ,nullptr },  // Inst #569 = DROP_I32
  { 570,	0,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #570 = DROP_I32_S
  { 571,	1,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo72, -1 ,nullptr },  // Inst #571 = DROP_I64
  { 572,	0,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #572 = DROP_I64_S
  { 573,	1,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo113, -1 ,nullptr },  // Inst #573 = DROP_V128
  { 574,	0,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #574 = DROP_V128_S
  { 575,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #575 = ELSE
  { 576,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #576 = ELSE_S
  { 577,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #577 = END
  { 578,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #578 = END_BLOCK
  { 579,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #579 = END_BLOCK_S
  { 580,	0,	0,	0,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #580 = END_FUNCTION
  { 581,	0,	0,	0,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #581 = END_FUNCTION_S
  { 582,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #582 = END_IF
  { 583,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #583 = END_IF_S
  { 584,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #584 = END_LOOP
  { 585,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #585 = END_LOOP_S
  { 586,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #586 = END_S
  { 587,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #587 = END_TRY
  { 588,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #588 = END_TRY_S
  { 589,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo88, -1 ,nullptr },  // Inst #589 = EQZ_I32
  { 590,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #590 = EQZ_I32_S
  { 591,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo114, -1 ,nullptr },  // Inst #591 = EQZ_I64
  { 592,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #592 = EQZ_I64_S
  { 593,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo115, -1 ,nullptr },  // Inst #593 = EQ_F32
  { 594,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #594 = EQ_F32_S
  { 595,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo116, -1 ,nullptr },  // Inst #595 = EQ_F64
  { 596,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #596 = EQ_F64_S
  { 597,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #597 = EQ_I32
  { 598,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #598 = EQ_I32_S
  { 599,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo117, -1 ,nullptr },  // Inst #599 = EQ_I64
  { 600,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #600 = EQ_I64_S
  { 601,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #601 = EQ_v16i8
  { 602,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #602 = EQ_v16i8_S
  { 603,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #603 = EQ_v2f64
  { 604,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #604 = EQ_v2f64_S
  { 605,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #605 = EQ_v4f32
  { 606,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #606 = EQ_v4f32_S
  { 607,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #607 = EQ_v4i32
  { 608,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #608 = EQ_v4i32_S
  { 609,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #609 = EQ_v8i16
  { 610,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #610 = EQ_v8i16_S
  { 611,	1,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo70, -1 ,nullptr },  // Inst #611 = EXTRACT_EXCEPTION_I32
  { 612,	1,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo70, -1 ,nullptr },  // Inst #612 = EXTRACT_EXCEPTION_I32_S
  { 613,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo118, -1 ,nullptr },  // Inst #613 = EXTRACT_LANE_v16i8_s
  { 614,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo119, -1 ,nullptr },  // Inst #614 = EXTRACT_LANE_v16i8_s_S
  { 615,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo118, -1 ,nullptr },  // Inst #615 = EXTRACT_LANE_v16i8_u
  { 616,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo119, -1 ,nullptr },  // Inst #616 = EXTRACT_LANE_v16i8_u_S
  { 617,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo120, -1 ,nullptr },  // Inst #617 = EXTRACT_LANE_v2f64
  { 618,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo119, -1 ,nullptr },  // Inst #618 = EXTRACT_LANE_v2f64_S
  { 619,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo121, -1 ,nullptr },  // Inst #619 = EXTRACT_LANE_v2i64
  { 620,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo119, -1 ,nullptr },  // Inst #620 = EXTRACT_LANE_v2i64_S
  { 621,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo122, -1 ,nullptr },  // Inst #621 = EXTRACT_LANE_v4f32
  { 622,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo119, -1 ,nullptr },  // Inst #622 = EXTRACT_LANE_v4f32_S
  { 623,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo118, -1 ,nullptr },  // Inst #623 = EXTRACT_LANE_v4i32
  { 624,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo119, -1 ,nullptr },  // Inst #624 = EXTRACT_LANE_v4i32_S
  { 625,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo118, -1 ,nullptr },  // Inst #625 = EXTRACT_LANE_v8i16_s
  { 626,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo119, -1 ,nullptr },  // Inst #626 = EXTRACT_LANE_v8i16_s_S
  { 627,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo118, -1 ,nullptr },  // Inst #627 = EXTRACT_LANE_v8i16_u
  { 628,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo119, -1 ,nullptr },  // Inst #628 = EXTRACT_LANE_v8i16_u_S
  { 629,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo123, -1 ,nullptr },  // Inst #629 = F32_CONVERT_S_I32
  { 630,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #630 = F32_CONVERT_S_I32_S
  { 631,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo124, -1 ,nullptr },  // Inst #631 = F32_CONVERT_S_I64
  { 632,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #632 = F32_CONVERT_S_I64_S
  { 633,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo123, -1 ,nullptr },  // Inst #633 = F32_CONVERT_U_I32
  { 634,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #634 = F32_CONVERT_U_I32_S
  { 635,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo124, -1 ,nullptr },  // Inst #635 = F32_CONVERT_U_I64
  { 636,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #636 = F32_CONVERT_U_I64_S
  { 637,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo125, -1 ,nullptr },  // Inst #637 = F32_DEMOTE_F64
  { 638,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #638 = F32_DEMOTE_F64_S
  { 639,	2,	1,	0,	0,	0|(1ULL<<MCID::Bitcast)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo123, -1 ,nullptr },  // Inst #639 = F32_REINTERPRET_I32
  { 640,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #640 = F32_REINTERPRET_I32_S
  { 641,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo126, -1 ,nullptr },  // Inst #641 = F64_CONVERT_S_I32
  { 642,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #642 = F64_CONVERT_S_I32_S
  { 643,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo127, -1 ,nullptr },  // Inst #643 = F64_CONVERT_S_I64
  { 644,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #644 = F64_CONVERT_S_I64_S
  { 645,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo126, -1 ,nullptr },  // Inst #645 = F64_CONVERT_U_I32
  { 646,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #646 = F64_CONVERT_U_I32_S
  { 647,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo127, -1 ,nullptr },  // Inst #647 = F64_CONVERT_U_I64
  { 648,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #648 = F64_CONVERT_U_I64_S
  { 649,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo128, -1 ,nullptr },  // Inst #649 = F64_PROMOTE_F32
  { 650,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #650 = F64_PROMOTE_F32_S
  { 651,	2,	1,	0,	0,	0|(1ULL<<MCID::Bitcast)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo127, -1 ,nullptr },  // Inst #651 = F64_REINTERPRET_I64
  { 652,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #652 = F64_REINTERPRET_I64_S
  { 653,	0,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #653 = FALLTHROUGH_RETURN
  { 654,	0,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #654 = FALLTHROUGH_RETURN_S
  { 655,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #655 = FLOOR_F32
  { 656,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #656 = FLOOR_F32_S
  { 657,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #657 = FLOOR_F64
  { 658,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #658 = FLOOR_F64_S
  { 659,	2,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo129, -1 ,nullptr },  // Inst #659 = FP_TO_SINT_I32_F32
  { 660,	0,	0,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #660 = FP_TO_SINT_I32_F32_S
  { 661,	2,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo130, -1 ,nullptr },  // Inst #661 = FP_TO_SINT_I32_F64
  { 662,	0,	0,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #662 = FP_TO_SINT_I32_F64_S
  { 663,	2,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo131, -1 ,nullptr },  // Inst #663 = FP_TO_SINT_I64_F32
  { 664,	0,	0,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #664 = FP_TO_SINT_I64_F32_S
  { 665,	2,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo132, -1 ,nullptr },  // Inst #665 = FP_TO_SINT_I64_F64
  { 666,	0,	0,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #666 = FP_TO_SINT_I64_F64_S
  { 667,	2,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo129, -1 ,nullptr },  // Inst #667 = FP_TO_UINT_I32_F32
  { 668,	0,	0,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #668 = FP_TO_UINT_I32_F32_S
  { 669,	2,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo130, -1 ,nullptr },  // Inst #669 = FP_TO_UINT_I32_F64
  { 670,	0,	0,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #670 = FP_TO_UINT_I32_F64_S
  { 671,	2,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo131, -1 ,nullptr },  // Inst #671 = FP_TO_UINT_I64_F32
  { 672,	0,	0,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #672 = FP_TO_UINT_I64_F32_S
  { 673,	2,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo132, -1 ,nullptr },  // Inst #673 = FP_TO_UINT_I64_F64
  { 674,	0,	0,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #674 = FP_TO_UINT_I64_F64_S
  { 675,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo115, -1 ,nullptr },  // Inst #675 = GE_F32
  { 676,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #676 = GE_F32_S
  { 677,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo116, -1 ,nullptr },  // Inst #677 = GE_F64
  { 678,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #678 = GE_F64_S
  { 679,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #679 = GE_S_I32
  { 680,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #680 = GE_S_I32_S
  { 681,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo117, -1 ,nullptr },  // Inst #681 = GE_S_I64
  { 682,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #682 = GE_S_I64_S
  { 683,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #683 = GE_S_v16i8
  { 684,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #684 = GE_S_v16i8_S
  { 685,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #685 = GE_S_v4i32
  { 686,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #686 = GE_S_v4i32_S
  { 687,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #687 = GE_S_v8i16
  { 688,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #688 = GE_S_v8i16_S
  { 689,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #689 = GE_U_I32
  { 690,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #690 = GE_U_I32_S
  { 691,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo117, -1 ,nullptr },  // Inst #691 = GE_U_I64
  { 692,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #692 = GE_U_I64_S
  { 693,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #693 = GE_U_v16i8
  { 694,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #694 = GE_U_v16i8_S
  { 695,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #695 = GE_U_v4i32
  { 696,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #696 = GE_U_v4i32_S
  { 697,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #697 = GE_U_v8i16
  { 698,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #698 = GE_U_v8i16_S
  { 699,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #699 = GE_v2f64
  { 700,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #700 = GE_v2f64_S
  { 701,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #701 = GE_v4f32
  { 702,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #702 = GE_v4f32_S
  { 703,	2,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo133, -1 ,nullptr },  // Inst #703 = GLOBAL_GET_EXNREF
  { 704,	1,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo134, -1 ,nullptr },  // Inst #704 = GLOBAL_GET_EXNREF_S
  { 705,	2,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo135, -1 ,nullptr },  // Inst #705 = GLOBAL_GET_F32
  { 706,	1,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo134, -1 ,nullptr },  // Inst #706 = GLOBAL_GET_F32_S
  { 707,	2,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo136, -1 ,nullptr },  // Inst #707 = GLOBAL_GET_F64
  { 708,	1,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo134, -1 ,nullptr },  // Inst #708 = GLOBAL_GET_F64_S
  { 709,	2,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo137, -1 ,nullptr },  // Inst #709 = GLOBAL_GET_I32
  { 710,	1,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo134, -1 ,nullptr },  // Inst #710 = GLOBAL_GET_I32_S
  { 711,	2,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo138, -1 ,nullptr },  // Inst #711 = GLOBAL_GET_I64
  { 712,	1,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo134, -1 ,nullptr },  // Inst #712 = GLOBAL_GET_I64_S
  { 713,	2,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo139, -1 ,nullptr },  // Inst #713 = GLOBAL_GET_V128
  { 714,	1,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo134, -1 ,nullptr },  // Inst #714 = GLOBAL_GET_V128_S
  { 715,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo140, -1 ,nullptr },  // Inst #715 = GLOBAL_SET_EXNREF
  { 716,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo134, -1 ,nullptr },  // Inst #716 = GLOBAL_SET_EXNREF_S
  { 717,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo141, -1 ,nullptr },  // Inst #717 = GLOBAL_SET_F32
  { 718,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo134, -1 ,nullptr },  // Inst #718 = GLOBAL_SET_F32_S
  { 719,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo142, -1 ,nullptr },  // Inst #719 = GLOBAL_SET_F64
  { 720,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo134, -1 ,nullptr },  // Inst #720 = GLOBAL_SET_F64_S
  { 721,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo143, -1 ,nullptr },  // Inst #721 = GLOBAL_SET_I32
  { 722,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo134, -1 ,nullptr },  // Inst #722 = GLOBAL_SET_I32_S
  { 723,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo144, -1 ,nullptr },  // Inst #723 = GLOBAL_SET_I64
  { 724,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo134, -1 ,nullptr },  // Inst #724 = GLOBAL_SET_I64_S
  { 725,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo145, -1 ,nullptr },  // Inst #725 = GLOBAL_SET_V128
  { 726,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo134, -1 ,nullptr },  // Inst #726 = GLOBAL_SET_V128_S
  { 727,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo115, -1 ,nullptr },  // Inst #727 = GT_F32
  { 728,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #728 = GT_F32_S
  { 729,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo116, -1 ,nullptr },  // Inst #729 = GT_F64
  { 730,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #730 = GT_F64_S
  { 731,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #731 = GT_S_I32
  { 732,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #732 = GT_S_I32_S
  { 733,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo117, -1 ,nullptr },  // Inst #733 = GT_S_I64
  { 734,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #734 = GT_S_I64_S
  { 735,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #735 = GT_S_v16i8
  { 736,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #736 = GT_S_v16i8_S
  { 737,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #737 = GT_S_v4i32
  { 738,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #738 = GT_S_v4i32_S
  { 739,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #739 = GT_S_v8i16
  { 740,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #740 = GT_S_v8i16_S
  { 741,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #741 = GT_U_I32
  { 742,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #742 = GT_U_I32_S
  { 743,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo117, -1 ,nullptr },  // Inst #743 = GT_U_I64
  { 744,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #744 = GT_U_I64_S
  { 745,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #745 = GT_U_v16i8
  { 746,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #746 = GT_U_v16i8_S
  { 747,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #747 = GT_U_v4i32
  { 748,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #748 = GT_U_v4i32_S
  { 749,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #749 = GT_U_v8i16
  { 750,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #750 = GT_U_v8i16_S
  { 751,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #751 = GT_v2f64
  { 752,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #752 = GT_v2f64_S
  { 753,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #753 = GT_v4f32
  { 754,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #754 = GT_v4f32_S
  { 755,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo88, -1 ,nullptr },  // Inst #755 = I32_EXTEND16_S_I32
  { 756,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #756 = I32_EXTEND16_S_I32_S
  { 757,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo88, -1 ,nullptr },  // Inst #757 = I32_EXTEND8_S_I32
  { 758,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #758 = I32_EXTEND8_S_I32_S
  { 759,	2,	1,	0,	0,	0|(1ULL<<MCID::Bitcast)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo129, -1 ,nullptr },  // Inst #759 = I32_REINTERPRET_F32
  { 760,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #760 = I32_REINTERPRET_F32_S
  { 761,	2,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo129, -1 ,nullptr },  // Inst #761 = I32_TRUNC_S_F32
  { 762,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #762 = I32_TRUNC_S_F32_S
  { 763,	2,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo130, -1 ,nullptr },  // Inst #763 = I32_TRUNC_S_F64
  { 764,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #764 = I32_TRUNC_S_F64_S
  { 765,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo129, -1 ,nullptr },  // Inst #765 = I32_TRUNC_S_SAT_F32
  { 766,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #766 = I32_TRUNC_S_SAT_F32_S
  { 767,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo130, -1 ,nullptr },  // Inst #767 = I32_TRUNC_S_SAT_F64
  { 768,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #768 = I32_TRUNC_S_SAT_F64_S
  { 769,	2,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo129, -1 ,nullptr },  // Inst #769 = I32_TRUNC_U_F32
  { 770,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #770 = I32_TRUNC_U_F32_S
  { 771,	2,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo130, -1 ,nullptr },  // Inst #771 = I32_TRUNC_U_F64
  { 772,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #772 = I32_TRUNC_U_F64_S
  { 773,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo129, -1 ,nullptr },  // Inst #773 = I32_TRUNC_U_SAT_F32
  { 774,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #774 = I32_TRUNC_U_SAT_F32_S
  { 775,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo130, -1 ,nullptr },  // Inst #775 = I32_TRUNC_U_SAT_F64
  { 776,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #776 = I32_TRUNC_U_SAT_F64_S
  { 777,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo114, -1 ,nullptr },  // Inst #777 = I32_WRAP_I64
  { 778,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #778 = I32_WRAP_I64_S
  { 779,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo89, -1 ,nullptr },  // Inst #779 = I64_EXTEND16_S_I64
  { 780,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #780 = I64_EXTEND16_S_I64_S
  { 781,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo89, -1 ,nullptr },  // Inst #781 = I64_EXTEND32_S_I64
  { 782,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #782 = I64_EXTEND32_S_I64_S
  { 783,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo89, -1 ,nullptr },  // Inst #783 = I64_EXTEND8_S_I64
  { 784,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #784 = I64_EXTEND8_S_I64_S
  { 785,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo146, -1 ,nullptr },  // Inst #785 = I64_EXTEND_S_I32
  { 786,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #786 = I64_EXTEND_S_I32_S
  { 787,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo146, -1 ,nullptr },  // Inst #787 = I64_EXTEND_U_I32
  { 788,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #788 = I64_EXTEND_U_I32_S
  { 789,	2,	1,	0,	0,	0|(1ULL<<MCID::Bitcast)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo132, -1 ,nullptr },  // Inst #789 = I64_REINTERPRET_F64
  { 790,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #790 = I64_REINTERPRET_F64_S
  { 791,	2,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo131, -1 ,nullptr },  // Inst #791 = I64_TRUNC_S_F32
  { 792,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #792 = I64_TRUNC_S_F32_S
  { 793,	2,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo132, -1 ,nullptr },  // Inst #793 = I64_TRUNC_S_F64
  { 794,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #794 = I64_TRUNC_S_F64_S
  { 795,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo131, -1 ,nullptr },  // Inst #795 = I64_TRUNC_S_SAT_F32
  { 796,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #796 = I64_TRUNC_S_SAT_F32_S
  { 797,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo132, -1 ,nullptr },  // Inst #797 = I64_TRUNC_S_SAT_F64
  { 798,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #798 = I64_TRUNC_S_SAT_F64_S
  { 799,	2,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo131, -1 ,nullptr },  // Inst #799 = I64_TRUNC_U_F32
  { 800,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #800 = I64_TRUNC_U_F32_S
  { 801,	2,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo132, -1 ,nullptr },  // Inst #801 = I64_TRUNC_U_F64
  { 802,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #802 = I64_TRUNC_U_F64_S
  { 803,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo131, -1 ,nullptr },  // Inst #803 = I64_TRUNC_U_SAT_F32
  { 804,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #804 = I64_TRUNC_U_SAT_F32_S
  { 805,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo132, -1 ,nullptr },  // Inst #805 = I64_TRUNC_U_SAT_F64
  { 806,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #806 = I64_TRUNC_U_SAT_F64_S
  { 807,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo147, -1 ,nullptr },  // Inst #807 = IF
  { 808,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo65, -1 ,nullptr },  // Inst #808 = IF_S
  { 809,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo115, -1 ,nullptr },  // Inst #809 = LE_F32
  { 810,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #810 = LE_F32_S
  { 811,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo116, -1 ,nullptr },  // Inst #811 = LE_F64
  { 812,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #812 = LE_F64_S
  { 813,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #813 = LE_S_I32
  { 814,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #814 = LE_S_I32_S
  { 815,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo117, -1 ,nullptr },  // Inst #815 = LE_S_I64
  { 816,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #816 = LE_S_I64_S
  { 817,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #817 = LE_S_v16i8
  { 818,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #818 = LE_S_v16i8_S
  { 819,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #819 = LE_S_v4i32
  { 820,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #820 = LE_S_v4i32_S
  { 821,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #821 = LE_S_v8i16
  { 822,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #822 = LE_S_v8i16_S
  { 823,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #823 = LE_U_I32
  { 824,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #824 = LE_U_I32_S
  { 825,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo117, -1 ,nullptr },  // Inst #825 = LE_U_I64
  { 826,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #826 = LE_U_I64_S
  { 827,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #827 = LE_U_v16i8
  { 828,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #828 = LE_U_v16i8_S
  { 829,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #829 = LE_U_v4i32
  { 830,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #830 = LE_U_v4i32_S
  { 831,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #831 = LE_U_v8i16
  { 832,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #832 = LE_U_v8i16_S
  { 833,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #833 = LE_v2f64
  { 834,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #834 = LE_v2f64_S
  { 835,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #835 = LE_v4f32
  { 836,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #836 = LE_v4f32_S
  { 837,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53, -1 ,nullptr },  // Inst #837 = LOAD16_S_I32
  { 838,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #838 = LOAD16_S_I32_S
  { 839,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55, -1 ,nullptr },  // Inst #839 = LOAD16_S_I64
  { 840,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #840 = LOAD16_S_I64_S
  { 841,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53, -1 ,nullptr },  // Inst #841 = LOAD16_U_I32
  { 842,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #842 = LOAD16_U_I32_S
  { 843,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55, -1 ,nullptr },  // Inst #843 = LOAD16_U_I64
  { 844,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #844 = LOAD16_U_I64_S
  { 845,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55, -1 ,nullptr },  // Inst #845 = LOAD32_S_I64
  { 846,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #846 = LOAD32_S_I64_S
  { 847,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55, -1 ,nullptr },  // Inst #847 = LOAD32_U_I64
  { 848,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #848 = LOAD32_U_I64_S
  { 849,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53, -1 ,nullptr },  // Inst #849 = LOAD8_S_I32
  { 850,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #850 = LOAD8_S_I32_S
  { 851,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55, -1 ,nullptr },  // Inst #851 = LOAD8_S_I64
  { 852,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #852 = LOAD8_S_I64_S
  { 853,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53, -1 ,nullptr },  // Inst #853 = LOAD8_U_I32
  { 854,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #854 = LOAD8_U_I32_S
  { 855,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55, -1 ,nullptr },  // Inst #855 = LOAD8_U_I64
  { 856,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #856 = LOAD8_U_I64_S
  { 857,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo148, -1 ,nullptr },  // Inst #857 = LOAD_EXTEND_S_v2i64
  { 858,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #858 = LOAD_EXTEND_S_v2i64_S
  { 859,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo148, -1 ,nullptr },  // Inst #859 = LOAD_EXTEND_S_v4i32
  { 860,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #860 = LOAD_EXTEND_S_v4i32_S
  { 861,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo148, -1 ,nullptr },  // Inst #861 = LOAD_EXTEND_S_v8i16
  { 862,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #862 = LOAD_EXTEND_S_v8i16_S
  { 863,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo148, -1 ,nullptr },  // Inst #863 = LOAD_EXTEND_U_v2i64
  { 864,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #864 = LOAD_EXTEND_U_v2i64_S
  { 865,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo148, -1 ,nullptr },  // Inst #865 = LOAD_EXTEND_U_v4i32
  { 866,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #866 = LOAD_EXTEND_U_v4i32_S
  { 867,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo148, -1 ,nullptr },  // Inst #867 = LOAD_EXTEND_U_v8i16
  { 868,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #868 = LOAD_EXTEND_U_v8i16_S
  { 869,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo149, -1 ,nullptr },  // Inst #869 = LOAD_F32
  { 870,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #870 = LOAD_F32_S
  { 871,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo150, -1 ,nullptr },  // Inst #871 = LOAD_F64
  { 872,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #872 = LOAD_F64_S
  { 873,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53, -1 ,nullptr },  // Inst #873 = LOAD_I32
  { 874,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #874 = LOAD_I32_S
  { 875,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55, -1 ,nullptr },  // Inst #875 = LOAD_I64
  { 876,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #876 = LOAD_I64_S
  { 877,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo148, -1 ,nullptr },  // Inst #877 = LOAD_SPLAT_v16x8
  { 878,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #878 = LOAD_SPLAT_v16x8_S
  { 879,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo148, -1 ,nullptr },  // Inst #879 = LOAD_SPLAT_v32x4
  { 880,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #880 = LOAD_SPLAT_v32x4_S
  { 881,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo148, -1 ,nullptr },  // Inst #881 = LOAD_SPLAT_v64x2
  { 882,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #882 = LOAD_SPLAT_v64x2_S
  { 883,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo148, -1 ,nullptr },  // Inst #883 = LOAD_SPLAT_v8x16
  { 884,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #884 = LOAD_SPLAT_v8x16_S
  { 885,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo148, -1 ,nullptr },  // Inst #885 = LOAD_V128
  { 886,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #886 = LOAD_V128_S
  { 887,	2,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo151, -1 ,nullptr },  // Inst #887 = LOCAL_GET_EXNREF
  { 888,	1,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo152, -1 ,nullptr },  // Inst #888 = LOCAL_GET_EXNREF_S
  { 889,	2,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo153, -1 ,nullptr },  // Inst #889 = LOCAL_GET_F32
  { 890,	1,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo152, -1 ,nullptr },  // Inst #890 = LOCAL_GET_F32_S
  { 891,	2,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo154, -1 ,nullptr },  // Inst #891 = LOCAL_GET_F64
  { 892,	1,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo152, -1 ,nullptr },  // Inst #892 = LOCAL_GET_F64_S
  { 893,	2,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo155, -1 ,nullptr },  // Inst #893 = LOCAL_GET_I32
  { 894,	1,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo152, -1 ,nullptr },  // Inst #894 = LOCAL_GET_I32_S
  { 895,	2,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo156, -1 ,nullptr },  // Inst #895 = LOCAL_GET_I64
  { 896,	1,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo152, -1 ,nullptr },  // Inst #896 = LOCAL_GET_I64_S
  { 897,	2,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo157, -1 ,nullptr },  // Inst #897 = LOCAL_GET_V128
  { 898,	1,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo152, -1 ,nullptr },  // Inst #898 = LOCAL_GET_V128_S
  { 899,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo158, -1 ,nullptr },  // Inst #899 = LOCAL_SET_EXNREF
  { 900,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo152, -1 ,nullptr },  // Inst #900 = LOCAL_SET_EXNREF_S
  { 901,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo159, -1 ,nullptr },  // Inst #901 = LOCAL_SET_F32
  { 902,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo152, -1 ,nullptr },  // Inst #902 = LOCAL_SET_F32_S
  { 903,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo160, -1 ,nullptr },  // Inst #903 = LOCAL_SET_F64
  { 904,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo152, -1 ,nullptr },  // Inst #904 = LOCAL_SET_F64_S
  { 905,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo161, -1 ,nullptr },  // Inst #905 = LOCAL_SET_I32
  { 906,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo152, -1 ,nullptr },  // Inst #906 = LOCAL_SET_I32_S
  { 907,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo162, -1 ,nullptr },  // Inst #907 = LOCAL_SET_I64
  { 908,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo152, -1 ,nullptr },  // Inst #908 = LOCAL_SET_I64_S
  { 909,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo163, -1 ,nullptr },  // Inst #909 = LOCAL_SET_V128
  { 910,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo152, -1 ,nullptr },  // Inst #910 = LOCAL_SET_V128_S
  { 911,	3,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo164, -1 ,nullptr },  // Inst #911 = LOCAL_TEE_EXNREF
  { 912,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo152, -1 ,nullptr },  // Inst #912 = LOCAL_TEE_EXNREF_S
  { 913,	3,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo165, -1 ,nullptr },  // Inst #913 = LOCAL_TEE_F32
  { 914,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo152, -1 ,nullptr },  // Inst #914 = LOCAL_TEE_F32_S
  { 915,	3,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo166, -1 ,nullptr },  // Inst #915 = LOCAL_TEE_F64
  { 916,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo152, -1 ,nullptr },  // Inst #916 = LOCAL_TEE_F64_S
  { 917,	3,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo167, -1 ,nullptr },  // Inst #917 = LOCAL_TEE_I32
  { 918,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo152, -1 ,nullptr },  // Inst #918 = LOCAL_TEE_I32_S
  { 919,	3,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo168, -1 ,nullptr },  // Inst #919 = LOCAL_TEE_I64
  { 920,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo152, -1 ,nullptr },  // Inst #920 = LOCAL_TEE_I64_S
  { 921,	3,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo169, -1 ,nullptr },  // Inst #921 = LOCAL_TEE_V128
  { 922,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo152, -1 ,nullptr },  // Inst #922 = LOCAL_TEE_V128_S
  { 923,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo65, -1 ,nullptr },  // Inst #923 = LOOP
  { 924,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo65, -1 ,nullptr },  // Inst #924 = LOOP_S
  { 925,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo115, -1 ,nullptr },  // Inst #925 = LT_F32
  { 926,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #926 = LT_F32_S
  { 927,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo116, -1 ,nullptr },  // Inst #927 = LT_F64
  { 928,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #928 = LT_F64_S
  { 929,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #929 = LT_S_I32
  { 930,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #930 = LT_S_I32_S
  { 931,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo117, -1 ,nullptr },  // Inst #931 = LT_S_I64
  { 932,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #932 = LT_S_I64_S
  { 933,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #933 = LT_S_v16i8
  { 934,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #934 = LT_S_v16i8_S
  { 935,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #935 = LT_S_v4i32
  { 936,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #936 = LT_S_v4i32_S
  { 937,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #937 = LT_S_v8i16
  { 938,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #938 = LT_S_v8i16_S
  { 939,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #939 = LT_U_I32
  { 940,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #940 = LT_U_I32_S
  { 941,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo117, -1 ,nullptr },  // Inst #941 = LT_U_I64
  { 942,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #942 = LT_U_I64_S
  { 943,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #943 = LT_U_v16i8
  { 944,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #944 = LT_U_v16i8_S
  { 945,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #945 = LT_U_v4i32
  { 946,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #946 = LT_U_v4i32_S
  { 947,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #947 = LT_U_v8i16
  { 948,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #948 = LT_U_v8i16_S
  { 949,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #949 = LT_v2f64
  { 950,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #950 = LT_v2f64_S
  { 951,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #951 = LT_v4f32
  { 952,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #952 = LT_v4f32_S
  { 953,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #953 = MAX_F32
  { 954,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #954 = MAX_F32_S
  { 955,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #955 = MAX_F64
  { 956,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #956 = MAX_F64_S
  { 957,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #957 = MAX_S_v16i8
  { 958,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #958 = MAX_S_v16i8_S
  { 959,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #959 = MAX_S_v4i32
  { 960,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #960 = MAX_S_v4i32_S
  { 961,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #961 = MAX_S_v8i16
  { 962,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #962 = MAX_S_v8i16_S
  { 963,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #963 = MAX_U_v16i8
  { 964,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #964 = MAX_U_v16i8_S
  { 965,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #965 = MAX_U_v4i32
  { 966,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #966 = MAX_U_v4i32_S
  { 967,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #967 = MAX_U_v8i16
  { 968,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #968 = MAX_U_v8i16_S
  { 969,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #969 = MAX_v2f64
  { 970,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #970 = MAX_v2f64_S
  { 971,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #971 = MAX_v4f32
  { 972,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #972 = MAX_v4f32_S
  { 973,	5,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo170, -1 ,nullptr },  // Inst #973 = MEMORY_COPY
  { 974,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo171, -1 ,nullptr },  // Inst #974 = MEMORY_COPY_S
  { 975,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo172, -1 ,nullptr },  // Inst #975 = MEMORY_FILL
  { 976,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo95, -1 ,nullptr },  // Inst #976 = MEMORY_FILL_S
  { 977,	3,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo173, -1 ,nullptr },  // Inst #977 = MEMORY_GROW_I32
  { 978,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo3, -1 ,nullptr },  // Inst #978 = MEMORY_GROW_I32_S
  { 979,	5,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo170, -1 ,nullptr },  // Inst #979 = MEMORY_INIT
  { 980,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo171, -1 ,nullptr },  // Inst #980 = MEMORY_INIT_S
  { 981,	2,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50, -1 ,nullptr },  // Inst #981 = MEMORY_SIZE_I32
  { 982,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo3, -1 ,nullptr },  // Inst #982 = MEMORY_SIZE_I32_S
  { 983,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #983 = MIN_F32
  { 984,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #984 = MIN_F32_S
  { 985,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #985 = MIN_F64
  { 986,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #986 = MIN_F64_S
  { 987,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #987 = MIN_S_v16i8
  { 988,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #988 = MIN_S_v16i8_S
  { 989,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #989 = MIN_S_v4i32
  { 990,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #990 = MIN_S_v4i32_S
  { 991,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #991 = MIN_S_v8i16
  { 992,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #992 = MIN_S_v8i16_S
  { 993,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #993 = MIN_U_v16i8
  { 994,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #994 = MIN_U_v16i8_S
  { 995,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #995 = MIN_U_v4i32
  { 996,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #996 = MIN_U_v4i32_S
  { 997,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #997 = MIN_U_v8i16
  { 998,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #998 = MIN_U_v8i16_S
  { 999,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #999 = MIN_v2f64
  { 1000,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1000 = MIN_v2f64_S
  { 1001,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1001 = MIN_v4f32
  { 1002,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1002 = MIN_v4f32_S
  { 1003,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #1003 = MUL_F32
  { 1004,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1004 = MUL_F32_S
  { 1005,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #1005 = MUL_F64
  { 1006,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1006 = MUL_F64_S
  { 1007,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #1007 = MUL_I32
  { 1008,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1008 = MUL_I32_S
  { 1009,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #1009 = MUL_I64
  { 1010,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1010 = MUL_I64_S
  { 1011,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1011 = MUL_v16i8
  { 1012,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1012 = MUL_v16i8_S
  { 1013,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1013 = MUL_v2f64
  { 1014,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1014 = MUL_v2f64_S
  { 1015,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1015 = MUL_v4f32
  { 1016,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1016 = MUL_v4f32_S
  { 1017,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1017 = MUL_v4i32
  { 1018,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1018 = MUL_v4i32_S
  { 1019,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1019 = MUL_v8i16
  { 1020,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1020 = MUL_v8i16_S
  { 1021,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1021 = NARROW_S_v16i8
  { 1022,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1022 = NARROW_S_v16i8_S
  { 1023,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1023 = NARROW_S_v8i16
  { 1024,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1024 = NARROW_S_v8i16_S
  { 1025,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1025 = NARROW_U_v16i8
  { 1026,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1026 = NARROW_U_v16i8_S
  { 1027,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1027 = NARROW_U_v8i16
  { 1028,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1028 = NARROW_U_v8i16_S
  { 1029,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #1029 = NEAREST_F32
  { 1030,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1030 = NEAREST_F32_S
  { 1031,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #1031 = NEAREST_F64
  { 1032,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1032 = NEAREST_F64_S
  { 1033,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #1033 = NEG_F32
  { 1034,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1034 = NEG_F32_S
  { 1035,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #1035 = NEG_F64
  { 1036,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1036 = NEG_F64_S
  { 1037,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1037 = NEG_v16i8
  { 1038,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1038 = NEG_v16i8_S
  { 1039,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1039 = NEG_v2f64
  { 1040,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1040 = NEG_v2f64_S
  { 1041,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1041 = NEG_v2i64
  { 1042,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1042 = NEG_v2i64_S
  { 1043,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1043 = NEG_v4f32
  { 1044,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1044 = NEG_v4f32_S
  { 1045,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1045 = NEG_v4i32
  { 1046,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1046 = NEG_v4i32_S
  { 1047,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1047 = NEG_v8i16
  { 1048,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1048 = NEG_v8i16_S
  { 1049,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo115, -1 ,nullptr },  // Inst #1049 = NE_F32
  { 1050,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1050 = NE_F32_S
  { 1051,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo116, -1 ,nullptr },  // Inst #1051 = NE_F64
  { 1052,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1052 = NE_F64_S
  { 1053,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #1053 = NE_I32
  { 1054,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1054 = NE_I32_S
  { 1055,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo117, -1 ,nullptr },  // Inst #1055 = NE_I64
  { 1056,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1056 = NE_I64_S
  { 1057,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1057 = NE_v16i8
  { 1058,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1058 = NE_v16i8_S
  { 1059,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1059 = NE_v2f64
  { 1060,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1060 = NE_v2f64_S
  { 1061,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1061 = NE_v4f32
  { 1062,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1062 = NE_v4f32_S
  { 1063,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1063 = NE_v4i32
  { 1064,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1064 = NE_v4i32_S
  { 1065,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1065 = NE_v8i16
  { 1066,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1066 = NE_v8i16_S
  { 1067,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1067 = NOP
  { 1068,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1068 = NOP_S
  { 1069,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1069 = NOT_v16i8
  { 1070,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1070 = NOT_v16i8_S
  { 1071,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1071 = NOT_v2i64
  { 1072,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1072 = NOT_v2i64_S
  { 1073,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1073 = NOT_v4i32
  { 1074,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1074 = NOT_v4i32_S
  { 1075,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1075 = NOT_v8i16
  { 1076,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1076 = NOT_v8i16_S
  { 1077,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #1077 = OR_I32
  { 1078,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1078 = OR_I32_S
  { 1079,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #1079 = OR_I64
  { 1080,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1080 = OR_I64_S
  { 1081,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1081 = OR_v16i8
  { 1082,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1082 = OR_v16i8_S
  { 1083,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1083 = OR_v2i64
  { 1084,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1084 = OR_v2i64_S
  { 1085,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1085 = OR_v4i32
  { 1086,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1086 = OR_v4i32_S
  { 1087,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1087 = OR_v8i16
  { 1088,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1088 = OR_v8i16_S
  { 1089,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo70, -1 ,nullptr },  // Inst #1089 = PCALL_INDIRECT_VOID
  { 1090,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo70, -1 ,nullptr },  // Inst #1090 = PCALL_INDIRECT_VOID_S
  { 1091,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo174, -1 ,nullptr },  // Inst #1091 = PCALL_INDIRECT_exnref
  { 1092,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo70, -1 ,nullptr },  // Inst #1092 = PCALL_INDIRECT_exnref_S
  { 1093,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo123, -1 ,nullptr },  // Inst #1093 = PCALL_INDIRECT_f32
  { 1094,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo70, -1 ,nullptr },  // Inst #1094 = PCALL_INDIRECT_f32_S
  { 1095,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo126, -1 ,nullptr },  // Inst #1095 = PCALL_INDIRECT_f64
  { 1096,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo70, -1 ,nullptr },  // Inst #1096 = PCALL_INDIRECT_f64_S
  { 1097,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo88, -1 ,nullptr },  // Inst #1097 = PCALL_INDIRECT_i32
  { 1098,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo70, -1 ,nullptr },  // Inst #1098 = PCALL_INDIRECT_i32_S
  { 1099,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo146, -1 ,nullptr },  // Inst #1099 = PCALL_INDIRECT_i64
  { 1100,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo70, -1 ,nullptr },  // Inst #1100 = PCALL_INDIRECT_i64_S
  { 1101,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo175, -1 ,nullptr },  // Inst #1101 = PCALL_INDIRECT_v16i8
  { 1102,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo70, -1 ,nullptr },  // Inst #1102 = PCALL_INDIRECT_v16i8_S
  { 1103,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo175, -1 ,nullptr },  // Inst #1103 = PCALL_INDIRECT_v2f64
  { 1104,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo70, -1 ,nullptr },  // Inst #1104 = PCALL_INDIRECT_v2f64_S
  { 1105,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo175, -1 ,nullptr },  // Inst #1105 = PCALL_INDIRECT_v2i64
  { 1106,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo70, -1 ,nullptr },  // Inst #1106 = PCALL_INDIRECT_v2i64_S
  { 1107,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo175, -1 ,nullptr },  // Inst #1107 = PCALL_INDIRECT_v4f32
  { 1108,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo70, -1 ,nullptr },  // Inst #1108 = PCALL_INDIRECT_v4f32_S
  { 1109,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo175, -1 ,nullptr },  // Inst #1109 = PCALL_INDIRECT_v4i32
  { 1110,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo70, -1 ,nullptr },  // Inst #1110 = PCALL_INDIRECT_v4i32_S
  { 1111,	2,	1,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo175, -1 ,nullptr },  // Inst #1111 = PCALL_INDIRECT_v8i16
  { 1112,	1,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo70, -1 ,nullptr },  // Inst #1112 = PCALL_INDIRECT_v8i16_S
  { 1113,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo88, -1 ,nullptr },  // Inst #1113 = POPCNT_I32
  { 1114,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1114 = POPCNT_I32_S
  { 1115,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo89, -1 ,nullptr },  // Inst #1115 = POPCNT_I64
  { 1116,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1116 = POPCNT_I64_S
  { 1117,	1,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo70, -1 ,nullptr },  // Inst #1117 = PRET_CALL_INDIRECT
  { 1118,	1,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo70, -1 ,nullptr },  // Inst #1118 = PRET_CALL_INDIRECT_S
  { 1119,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo64, -1 ,nullptr },  // Inst #1119 = QFMA_v2f64
  { 1120,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1120 = QFMA_v2f64_S
  { 1121,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo64, -1 ,nullptr },  // Inst #1121 = QFMA_v4f32
  { 1122,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1122 = QFMA_v4f32_S
  { 1123,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo64, -1 ,nullptr },  // Inst #1123 = QFMS_v2f64
  { 1124,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1124 = QFMS_v2f64_S
  { 1125,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo64, -1 ,nullptr },  // Inst #1125 = QFMS_v4f32
  { 1126,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1126 = QFMS_v4f32_S
  { 1127,	3,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #1127 = REM_S_I32
  { 1128,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1128 = REM_S_I32_S
  { 1129,	3,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #1129 = REM_S_I64
  { 1130,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1130 = REM_S_I64_S
  { 1131,	3,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #1131 = REM_U_I32
  { 1132,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1132 = REM_U_I32_S
  { 1133,	3,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #1133 = REM_U_I64
  { 1134,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1134 = REM_U_I64_S
  { 1135,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo176, -1 ,nullptr },  // Inst #1135 = REPLACE_LANE_v16i8
  { 1136,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo119, -1 ,nullptr },  // Inst #1136 = REPLACE_LANE_v16i8_S
  { 1137,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo177, -1 ,nullptr },  // Inst #1137 = REPLACE_LANE_v2f64
  { 1138,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo119, -1 ,nullptr },  // Inst #1138 = REPLACE_LANE_v2f64_S
  { 1139,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo178, -1 ,nullptr },  // Inst #1139 = REPLACE_LANE_v2i64
  { 1140,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo119, -1 ,nullptr },  // Inst #1140 = REPLACE_LANE_v2i64_S
  { 1141,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo179, -1 ,nullptr },  // Inst #1141 = REPLACE_LANE_v4f32
  { 1142,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo119, -1 ,nullptr },  // Inst #1142 = REPLACE_LANE_v4f32_S
  { 1143,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo176, -1 ,nullptr },  // Inst #1143 = REPLACE_LANE_v4i32
  { 1144,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo119, -1 ,nullptr },  // Inst #1144 = REPLACE_LANE_v4i32_S
  { 1145,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo176, -1 ,nullptr },  // Inst #1145 = REPLACE_LANE_v8i16
  { 1146,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo119, -1 ,nullptr },  // Inst #1146 = REPLACE_LANE_v8i16_S
  { 1147,	1,	0,	0,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo87, -1 ,nullptr },  // Inst #1147 = RETHROW
  { 1148,	0,	0,	0,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1148 = RETHROW_S
  { 1149,	0,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1149 = RETURN
  { 1150,	0,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1150 = RETURN_S
  { 1151,	1,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo80, -1 ,nullptr },  // Inst #1151 = RET_CALL
  { 1152,	2,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo73, -1 ,nullptr },  // Inst #1152 = RET_CALL_INDIRECT
  { 1153,	2,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo73, -1 ,nullptr },  // Inst #1153 = RET_CALL_INDIRECT_S
  { 1154,	1,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo80, -1 ,nullptr },  // Inst #1154 = RET_CALL_S
  { 1155,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #1155 = ROTL_I32
  { 1156,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1156 = ROTL_I32_S
  { 1157,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #1157 = ROTL_I64
  { 1158,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1158 = ROTL_I64_S
  { 1159,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #1159 = ROTR_I32
  { 1160,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1160 = ROTR_I32_S
  { 1161,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #1161 = ROTR_I64
  { 1162,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1162 = ROTR_I64_S
  { 1163,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo180, -1 ,nullptr },  // Inst #1163 = SELECT_EXNREF
  { 1164,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1164 = SELECT_EXNREF_S
  { 1165,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo181, -1 ,nullptr },  // Inst #1165 = SELECT_F32
  { 1166,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1166 = SELECT_F32_S
  { 1167,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo182, -1 ,nullptr },  // Inst #1167 = SELECT_F64
  { 1168,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1168 = SELECT_F64_S
  { 1169,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo183, -1 ,nullptr },  // Inst #1169 = SELECT_I32
  { 1170,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1170 = SELECT_I32_S
  { 1171,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo184, -1 ,nullptr },  // Inst #1171 = SELECT_I64
  { 1172,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1172 = SELECT_I64_S
  { 1173,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #1173 = SHL_I32
  { 1174,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1174 = SHL_I32_S
  { 1175,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #1175 = SHL_I64
  { 1176,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1176 = SHL_I64_S
  { 1177,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo185, -1 ,nullptr },  // Inst #1177 = SHL_v16i8
  { 1178,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1178 = SHL_v16i8_S
  { 1179,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo185, -1 ,nullptr },  // Inst #1179 = SHL_v2i64
  { 1180,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1180 = SHL_v2i64_S
  { 1181,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo185, -1 ,nullptr },  // Inst #1181 = SHL_v4i32
  { 1182,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1182 = SHL_v4i32_S
  { 1183,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo185, -1 ,nullptr },  // Inst #1183 = SHL_v8i16
  { 1184,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1184 = SHL_v8i16_S
  { 1185,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #1185 = SHR_S_I32
  { 1186,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1186 = SHR_S_I32_S
  { 1187,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #1187 = SHR_S_I64
  { 1188,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1188 = SHR_S_I64_S
  { 1189,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo185, -1 ,nullptr },  // Inst #1189 = SHR_S_v16i8
  { 1190,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1190 = SHR_S_v16i8_S
  { 1191,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo185, -1 ,nullptr },  // Inst #1191 = SHR_S_v2i64
  { 1192,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1192 = SHR_S_v2i64_S
  { 1193,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo185, -1 ,nullptr },  // Inst #1193 = SHR_S_v4i32
  { 1194,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1194 = SHR_S_v4i32_S
  { 1195,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo185, -1 ,nullptr },  // Inst #1195 = SHR_S_v8i16
  { 1196,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1196 = SHR_S_v8i16_S
  { 1197,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #1197 = SHR_U_I32
  { 1198,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1198 = SHR_U_I32_S
  { 1199,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #1199 = SHR_U_I64
  { 1200,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1200 = SHR_U_I64_S
  { 1201,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo185, -1 ,nullptr },  // Inst #1201 = SHR_U_v16i8
  { 1202,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1202 = SHR_U_v16i8_S
  { 1203,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo185, -1 ,nullptr },  // Inst #1203 = SHR_U_v2i64
  { 1204,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1204 = SHR_U_v2i64_S
  { 1205,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo185, -1 ,nullptr },  // Inst #1205 = SHR_U_v4i32
  { 1206,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1206 = SHR_U_v4i32_S
  { 1207,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo185, -1 ,nullptr },  // Inst #1207 = SHR_U_v8i16
  { 1208,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1208 = SHR_U_v8i16_S
  { 1209,	19,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo186, -1 ,nullptr },  // Inst #1209 = SHUFFLE
  { 1210,	16,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo99, -1 ,nullptr },  // Inst #1210 = SHUFFLE_S
  { 1211,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo175, -1 ,nullptr },  // Inst #1211 = SPLAT_v16i8
  { 1212,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1212 = SPLAT_v16i8_S
  { 1213,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo187, -1 ,nullptr },  // Inst #1213 = SPLAT_v2f64
  { 1214,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1214 = SPLAT_v2f64_S
  { 1215,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo188, -1 ,nullptr },  // Inst #1215 = SPLAT_v2i64
  { 1216,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1216 = SPLAT_v2i64_S
  { 1217,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo189, -1 ,nullptr },  // Inst #1217 = SPLAT_v4f32
  { 1218,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1218 = SPLAT_v4f32_S
  { 1219,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo175, -1 ,nullptr },  // Inst #1219 = SPLAT_v4i32
  { 1220,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1220 = SPLAT_v4i32_S
  { 1221,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo175, -1 ,nullptr },  // Inst #1221 = SPLAT_v8i16
  { 1222,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1222 = SPLAT_v8i16_S
  { 1223,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #1223 = SQRT_F32
  { 1224,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1224 = SQRT_F32_S
  { 1225,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #1225 = SQRT_F64
  { 1226,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1226 = SQRT_F64_S
  { 1227,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1227 = SQRT_v2f64
  { 1228,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1228 = SQRT_v2f64_S
  { 1229,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1229 = SQRT_v4f32
  { 1230,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1230 = SQRT_v4f32_S
  { 1231,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo60, -1 ,nullptr },  // Inst #1231 = STORE16_I32
  { 1232,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #1232 = STORE16_I32_S
  { 1233,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo61, -1 ,nullptr },  // Inst #1233 = STORE16_I64
  { 1234,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #1234 = STORE16_I64_S
  { 1235,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo61, -1 ,nullptr },  // Inst #1235 = STORE32_I64
  { 1236,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #1236 = STORE32_I64_S
  { 1237,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo60, -1 ,nullptr },  // Inst #1237 = STORE8_I32
  { 1238,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #1238 = STORE8_I32_S
  { 1239,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo61, -1 ,nullptr },  // Inst #1239 = STORE8_I64
  { 1240,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #1240 = STORE8_I64_S
  { 1241,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo190, -1 ,nullptr },  // Inst #1241 = STORE_F32
  { 1242,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #1242 = STORE_F32_S
  { 1243,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo191, -1 ,nullptr },  // Inst #1243 = STORE_F64
  { 1244,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #1244 = STORE_F64_S
  { 1245,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo60, -1 ,nullptr },  // Inst #1245 = STORE_I32
  { 1246,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #1246 = STORE_I32_S
  { 1247,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo61, -1 ,nullptr },  // Inst #1247 = STORE_I64
  { 1248,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #1248 = STORE_I64_S
  { 1249,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo192, -1 ,nullptr },  // Inst #1249 = STORE_V128
  { 1250,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #1250 = STORE_V128_S
  { 1251,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #1251 = SUB_F32
  { 1252,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1252 = SUB_F32_S
  { 1253,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #1253 = SUB_F64
  { 1254,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1254 = SUB_F64_S
  { 1255,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #1255 = SUB_I32
  { 1256,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1256 = SUB_I32_S
  { 1257,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #1257 = SUB_I64
  { 1258,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1258 = SUB_I64_S
  { 1259,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1259 = SUB_SAT_S_v16i8
  { 1260,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1260 = SUB_SAT_S_v16i8_S
  { 1261,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1261 = SUB_SAT_S_v8i16
  { 1262,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1262 = SUB_SAT_S_v8i16_S
  { 1263,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1263 = SUB_SAT_U_v16i8
  { 1264,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1264 = SUB_SAT_U_v16i8_S
  { 1265,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1265 = SUB_SAT_U_v8i16
  { 1266,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1266 = SUB_SAT_U_v8i16_S
  { 1267,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1267 = SUB_v16i8
  { 1268,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1268 = SUB_v16i8_S
  { 1269,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1269 = SUB_v2f64
  { 1270,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1270 = SUB_v2f64_S
  { 1271,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1271 = SUB_v2i64
  { 1272,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1272 = SUB_v2i64_S
  { 1273,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1273 = SUB_v4f32
  { 1274,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1274 = SUB_v4f32_S
  { 1275,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1275 = SUB_v4i32
  { 1276,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1276 = SUB_v4i32_S
  { 1277,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1277 = SUB_v8i16
  { 1278,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1278 = SUB_v8i16_S
  { 1279,	3,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1279 = SWIZZLE
  { 1280,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1280 = SWIZZLE_S
  { 1281,	3,	2,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo193, -1 ,nullptr },  // Inst #1281 = TEE_EXNREF
  { 1282,	0,	0,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1282 = TEE_EXNREF_S
  { 1283,	3,	2,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #1283 = TEE_F32
  { 1284,	0,	0,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1284 = TEE_F32_S
  { 1285,	3,	2,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #1285 = TEE_F64
  { 1286,	0,	0,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1286 = TEE_F64_S
  { 1287,	3,	2,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #1287 = TEE_I32
  { 1288,	0,	0,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1288 = TEE_I32_S
  { 1289,	3,	2,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #1289 = TEE_I64
  { 1290,	0,	0,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1290 = TEE_I64_S
  { 1291,	3,	2,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1291 = TEE_V128
  { 1292,	0,	0,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1292 = TEE_V128_S
  { 1293,	1,	0,	0,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo194, -1 ,nullptr },  // Inst #1293 = THROW
  { 1294,	1,	0,	0,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo194, -1 ,nullptr },  // Inst #1294 = THROW_S
  { 1295,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #1295 = TRUNC_F32
  { 1296,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1296 = TRUNC_F32_S
  { 1297,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #1297 = TRUNC_F64
  { 1298,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1298 = TRUNC_F64_S
  { 1299,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo65, -1 ,nullptr },  // Inst #1299 = TRY
  { 1300,	1,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo65, -1 ,nullptr },  // Inst #1300 = TRY_S
  { 1301,	0,	0,	0,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1301 = UNREACHABLE
  { 1302,	0,	0,	0,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1302 = UNREACHABLE_S
  { 1303,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #1303 = XOR_I32
  { 1304,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1304 = XOR_I32_S
  { 1305,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #1305 = XOR_I64
  { 1306,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1306 = XOR_I64_S
  { 1307,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1307 = XOR_v16i8
  { 1308,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1308 = XOR_v16i8_S
  { 1309,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1309 = XOR_v2i64
  { 1310,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1310 = XOR_v2i64_S
  { 1311,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1311 = XOR_v4i32
  { 1312,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1312 = XOR_v4i32_S
  { 1313,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #1313 = XOR_v8i16
  { 1314,	0,	0,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1314 = XOR_v8i16_S
  { 1315,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1315 = fp_to_sint_v2i64_v2f64
  { 1316,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1316 = fp_to_sint_v2i64_v2f64_S
  { 1317,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1317 = fp_to_sint_v4i32_v4f32
  { 1318,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1318 = fp_to_sint_v4i32_v4f32_S
  { 1319,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1319 = fp_to_uint_v2i64_v2f64
  { 1320,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1320 = fp_to_uint_v2i64_v2f64_S
  { 1321,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1321 = fp_to_uint_v4i32_v4f32
  { 1322,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1322 = fp_to_uint_v4i32_v4f32_S
  { 1323,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1323 = int_wasm_widen_high_signed_v4i32_v8i16
  { 1324,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1324 = int_wasm_widen_high_signed_v4i32_v8i16_S
  { 1325,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1325 = int_wasm_widen_high_signed_v8i16_v16i8
  { 1326,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1326 = int_wasm_widen_high_signed_v8i16_v16i8_S
  { 1327,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1327 = int_wasm_widen_high_unsigned_v4i32_v8i16
  { 1328,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1328 = int_wasm_widen_high_unsigned_v4i32_v8i16_S
  { 1329,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1329 = int_wasm_widen_high_unsigned_v8i16_v16i8
  { 1330,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1330 = int_wasm_widen_high_unsigned_v8i16_v16i8_S
  { 1331,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1331 = int_wasm_widen_low_signed_v4i32_v8i16
  { 1332,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1332 = int_wasm_widen_low_signed_v4i32_v8i16_S
  { 1333,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1333 = int_wasm_widen_low_signed_v8i16_v16i8
  { 1334,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1334 = int_wasm_widen_low_signed_v8i16_v16i8_S
  { 1335,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1335 = int_wasm_widen_low_unsigned_v4i32_v8i16
  { 1336,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1336 = int_wasm_widen_low_unsigned_v4i32_v8i16_S
  { 1337,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1337 = int_wasm_widen_low_unsigned_v8i16_v16i8
  { 1338,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1338 = int_wasm_widen_low_unsigned_v8i16_v16i8_S
  { 1339,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1339 = sint_to_fp_v2f64_v2i64
  { 1340,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1340 = sint_to_fp_v2f64_v2i64_S
  { 1341,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1341 = sint_to_fp_v4f32_v4i32
  { 1342,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1342 = sint_to_fp_v4f32_v4i32_S
  { 1343,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1343 = uint_to_fp_v2f64_v2i64
  { 1344,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1344 = uint_to_fp_v2f64_v2i64_S
  { 1345,	2,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #1345 = uint_to_fp_v4f32_v4i32
  { 1346,	0,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr, -1 ,nullptr },  // Inst #1346 = uint_to_fp_v4f32_v4i32_S
};

extern const char WebAssemblyInstrNameData[] = {
  /* 0 */ 'G', '_', 'F', 'L', 'O', 'G', '1', '0', 0,
  /* 9 */ 'F', 'P', '_', 'T', 'O', '_', 'S', 'I', 'N', 'T', '_', 'I', '3', '2', '_', 'F', '3', '2', 0,
  /* 28 */ 'F', 'P', '_', 'T', 'O', '_', 'U', 'I', 'N', 'T', '_', 'I', '3', '2', '_', 'F', '3', '2', 0,
  /* 47 */ 'F', 'P', '_', 'T', 'O', '_', 'S', 'I', 'N', 'T', '_', 'I', '6', '4', '_', 'F', '3', '2', 0,
  /* 66 */ 'F', 'P', '_', 'T', 'O', '_', 'U', 'I', 'N', 'T', '_', 'I', '6', '4', '_', 'F', '3', '2', 0,
  /* 85 */ 'S', 'U', 'B', '_', 'F', '3', '2', 0,
  /* 93 */ 'T', 'R', 'U', 'N', 'C', '_', 'F', '3', '2', 0,
  /* 103 */ 'L', 'O', 'A', 'D', '_', 'F', '3', '2', 0,
  /* 112 */ 'A', 'D', 'D', '_', 'F', '3', '2', 0,
  /* 120 */ 'L', 'O', 'C', 'A', 'L', '_', 'T', 'E', 'E', '_', 'F', '3', '2', 0,
  /* 134 */ 'G', 'E', '_', 'F', '3', '2', 0,
  /* 141 */ 'L', 'E', '_', 'F', '3', '2', 0,
  /* 148 */ 'N', 'E', '_', 'F', '3', '2', 0,
  /* 155 */ 'S', 'T', 'O', 'R', 'E', '_', 'F', '3', '2', 0,
  /* 165 */ 'F', '6', '4', '_', 'P', 'R', 'O', 'M', 'O', 'T', 'E', '_', 'F', '3', '2', 0,
  /* 181 */ 'N', 'E', 'G', '_', 'F', '3', '2', 0,
  /* 189 */ 'C', 'E', 'I', 'L', '_', 'F', '3', '2', 0,
  /* 198 */ 'M', 'U', 'L', '_', 'F', '3', '2', 0,
  /* 206 */ 'C', 'O', 'P', 'Y', 'S', 'I', 'G', 'N', '_', 'F', '3', '2', 0,
  /* 219 */ 'M', 'I', 'N', '_', 'F', '3', '2', 0,
  /* 227 */ 'D', 'R', 'O', 'P', '_', 'F', '3', '2', 0,
  /* 236 */ 'E', 'Q', '_', 'F', '3', '2', 0,
  /* 243 */ 'F', 'L', 'O', 'O', 'R', '_', 'F', '3', '2', 0,
  /* 253 */ 'A', 'B', 'S', '_', 'F', '3', '2', 0,
  /* 261 */ 'I', '3', '2', '_', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'F', '3', '2', 0,
  /* 277 */ 'I', '6', '4', '_', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'F', '3', '2', 0,
  /* 293 */ 'I', '3', '2', '_', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'S', 'A', 'T', '_', 'F', '3', '2', 0,
  /* 313 */ 'I', '6', '4', '_', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'S', 'A', 'T', '_', 'F', '3', '2', 0,
  /* 333 */ 'I', '3', '2', '_', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'S', 'A', 'T', '_', 'F', '3', '2', 0,
  /* 353 */ 'I', '6', '4', '_', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'S', 'A', 'T', '_', 'F', '3', '2', 0,
  /* 373 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'F', '3', '2', 0,
  /* 384 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'G', 'E', 'T', '_', 'F', '3', '2', 0,
  /* 399 */ 'L', 'O', 'C', 'A', 'L', '_', 'G', 'E', 'T', '_', 'F', '3', '2', 0,
  /* 413 */ 'I', '3', '2', '_', 'R', 'E', 'I', 'N', 'T', 'E', 'R', 'P', 'R', 'E', 'T', '_', 'F', '3', '2', 0,
  /* 433 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'S', 'E', 'T', '_', 'F', '3', '2', 0,
  /* 448 */ 'L', 'O', 'C', 'A', 'L', '_', 'S', 'E', 'T', '_', 'F', '3', '2', 0,
  /* 462 */ 'G', 'T', '_', 'F', '3', '2', 0,
  /* 469 */ 'L', 'T', '_', 'F', '3', '2', 0,
  /* 476 */ 'S', 'Q', 'R', 'T', '_', 'F', '3', '2', 0,
  /* 485 */ 'N', 'E', 'A', 'R', 'E', 'S', 'T', '_', 'F', '3', '2', 0,
  /* 497 */ 'C', 'O', 'N', 'S', 'T', '_', 'F', '3', '2', 0,
  /* 507 */ 'I', '3', '2', '_', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'F', '3', '2', 0,
  /* 523 */ 'I', '6', '4', '_', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'F', '3', '2', 0,
  /* 539 */ 'D', 'I', 'V', '_', 'F', '3', '2', 0,
  /* 547 */ 'M', 'A', 'X', '_', 'F', '3', '2', 0,
  /* 555 */ 'C', 'O', 'P', 'Y', '_', 'F', '3', '2', 0,
  /* 564 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'T', 'O', 'R', 'E', '1', '6', '_', 'I', '3', '2', 0,
  /* 583 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'T', 'O', 'R', 'E', '8', '_', 'I', '3', '2', 0,
  /* 601 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 624 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 646 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 665 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'I', '3', '2', 0,
  /* 681 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 704 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 726 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 745 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 768 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 790 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 809 */ 'L', 'O', 'C', 'A', 'L', '_', 'T', 'E', 'E', '_', 'I', '3', '2', 0,
  /* 823 */ 'B', 'R', '_', 'T', 'A', 'B', 'L', 'E', '_', 'I', '3', '2', 0,
  /* 836 */ 'N', 'E', '_', 'I', '3', '2', 0,
  /* 843 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'T', 'O', 'R', 'E', '_', 'I', '3', '2', 0,
  /* 860 */ 'M', 'E', 'M', 'O', 'R', 'Y', '_', 'S', 'I', 'Z', 'E', '_', 'I', '3', '2', 0,
  /* 876 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', '3', '2', 0,
  /* 903 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', '3', '2', 0,
  /* 929 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', '3', '2', 0,
  /* 952 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'X', 'C', 'H', 'G', '_', 'I', '3', '2', 0,
  /* 976 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'X', 'C', 'H', 'G', '_', 'I', '3', '2', 0,
  /* 999 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', '_', 'I', '3', '2', 0,
  /* 1019 */ 'S', 'H', 'L', '_', 'I', '3', '2', 0,
  /* 1027 */ 'R', 'O', 'T', 'L', '_', 'I', '3', '2', 0,
  /* 1036 */ 'M', 'U', 'L', '_', 'I', '3', '2', 0,
  /* 1044 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'E', 'X', 'C', 'E', 'P', 'T', 'I', 'O', 'N', '_', 'I', '3', '2', 0,
  /* 1066 */ 'D', 'R', 'O', 'P', '_', 'I', '3', '2', 0,
  /* 1075 */ 'E', 'Q', '_', 'I', '3', '2', 0,
  /* 1082 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 1105 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 1127 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 1146 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 1168 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 1189 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 1207 */ 'R', 'O', 'T', 'R', '_', 'I', '3', '2', 0,
  /* 1216 */ 'L', 'O', 'A', 'D', '1', '6', '_', 'S', '_', 'I', '3', '2', 0,
  /* 1229 */ 'I', '3', '2', '_', 'E', 'X', 'T', 'E', 'N', 'D', '1', '6', '_', 'S', '_', 'I', '3', '2', 0,
  /* 1248 */ 'L', 'O', 'A', 'D', '8', '_', 'S', '_', 'I', '3', '2', 0,
  /* 1260 */ 'I', '3', '2', '_', 'E', 'X', 'T', 'E', 'N', 'D', '8', '_', 'S', '_', 'I', '3', '2', 0,
  /* 1278 */ 'I', '6', '4', '_', 'E', 'X', 'T', 'E', 'N', 'D', '_', 'S', '_', 'I', '3', '2', 0,
  /* 1295 */ 'G', 'E', '_', 'S', '_', 'I', '3', '2', 0,
  /* 1304 */ 'L', 'E', '_', 'S', '_', 'I', '3', '2', 0,
  /* 1313 */ 'R', 'E', 'M', '_', 'S', '_', 'I', '3', '2', 0,
  /* 1323 */ 'S', 'H', 'R', '_', 'S', '_', 'I', '3', '2', 0,
  /* 1333 */ 'G', 'T', '_', 'S', '_', 'I', '3', '2', 0,
  /* 1342 */ 'L', 'T', '_', 'S', '_', 'I', '3', '2', 0,
  /* 1351 */ 'F', '3', '2', '_', 'C', 'O', 'N', 'V', 'E', 'R', 'T', '_', 'S', '_', 'I', '3', '2', 0,
  /* 1369 */ 'F', '6', '4', '_', 'C', 'O', 'N', 'V', 'E', 'R', 'T', '_', 'S', '_', 'I', '3', '2', 0,
  /* 1387 */ 'D', 'I', 'V', '_', 'S', '_', 'I', '3', '2', 0,
  /* 1397 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', '3', '2', 0,
  /* 1408 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'G', 'E', 'T', '_', 'I', '3', '2', 0,
  /* 1423 */ 'L', 'O', 'C', 'A', 'L', '_', 'G', 'E', 'T', '_', 'I', '3', '2', 0,
  /* 1437 */ 'F', '3', '2', '_', 'R', 'E', 'I', 'N', 'T', 'E', 'R', 'P', 'R', 'E', 'T', '_', 'I', '3', '2', 0,
  /* 1457 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'S', 'E', 'T', '_', 'I', '3', '2', 0,
  /* 1472 */ 'L', 'O', 'C', 'A', 'L', '_', 'S', 'E', 'T', '_', 'I', '3', '2', 0,
  /* 1486 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'W', 'A', 'I', 'T', '_', 'I', '3', '2', 0,
  /* 1502 */ 'P', 'O', 'P', 'C', 'N', 'T', '_', 'I', '3', '2', 0,
  /* 1513 */ 'C', 'O', 'N', 'S', 'T', '_', 'I', '3', '2', 0,
  /* 1523 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '1', '6', '_', 'U', '_', 'I', '3', '2', 0,
  /* 1543 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '8', '_', 'U', '_', 'I', '3', '2', 0,
  /* 1562 */ 'I', '6', '4', '_', 'E', 'X', 'T', 'E', 'N', 'D', '_', 'U', '_', 'I', '3', '2', 0,
  /* 1579 */ 'G', 'E', '_', 'U', '_', 'I', '3', '2', 0,
  /* 1588 */ 'L', 'E', '_', 'U', '_', 'I', '3', '2', 0,
  /* 1597 */ 'R', 'E', 'M', '_', 'U', '_', 'I', '3', '2', 0,
  /* 1607 */ 'S', 'H', 'R', '_', 'U', '_', 'I', '3', '2', 0,
  /* 1617 */ 'G', 'T', '_', 'U', '_', 'I', '3', '2', 0,
  /* 1626 */ 'L', 'T', '_', 'U', '_', 'I', '3', '2', 0,
  /* 1635 */ 'F', '3', '2', '_', 'C', 'O', 'N', 'V', 'E', 'R', 'T', '_', 'U', '_', 'I', '3', '2', 0,
  /* 1653 */ 'F', '6', '4', '_', 'C', 'O', 'N', 'V', 'E', 'R', 'T', '_', 'U', '_', 'I', '3', '2', 0,
  /* 1671 */ 'D', 'I', 'V', '_', 'U', '_', 'I', '3', '2', 0,
  /* 1681 */ 'M', 'E', 'M', 'O', 'R', 'Y', '_', 'G', 'R', 'O', 'W', '_', 'I', '3', '2', 0,
  /* 1697 */ 'C', 'O', 'P', 'Y', '_', 'I', '3', '2', 0,
  /* 1706 */ 'C', 'L', 'Z', '_', 'I', '3', '2', 0,
  /* 1714 */ 'E', 'Q', 'Z', '_', 'I', '3', '2', 0,
  /* 1722 */ 'C', 'T', 'Z', '_', 'I', '3', '2', 0,
  /* 1730 */ 'f', 'p', '_', 't', 'o', '_', 's', 'i', 'n', 't', '_', 'v', '4', 'i', '3', '2', '_', 'v', '4', 'f', '3', '2', 0,
  /* 1753 */ 'f', 'p', '_', 't', 'o', '_', 'u', 'i', 'n', 't', '_', 'v', '4', 'i', '3', '2', '_', 'v', '4', 'f', '3', '2', 0,
  /* 1776 */ 'C', 'O', 'N', 'S', 'T', '_', 'V', '1', '2', '8', '_', 'v', '4', 'f', '3', '2', 0,
  /* 1793 */ 'Q', 'F', 'M', 'A', '_', 'v', '4', 'f', '3', '2', 0,
  /* 1804 */ 'S', 'U', 'B', '_', 'v', '4', 'f', '3', '2', 0,
  /* 1814 */ 'A', 'D', 'D', '_', 'v', '4', 'f', '3', '2', 0,
  /* 1824 */ 'G', 'E', '_', 'v', '4', 'f', '3', '2', 0,
  /* 1833 */ 'L', 'E', '_', 'v', '4', 'f', '3', '2', 0,
  /* 1842 */ 'R', 'E', 'P', 'L', 'A', 'C', 'E', '_', 'L', 'A', 'N', 'E', '_', 'v', '4', 'f', '3', '2', 0,
  /* 1861 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'L', 'A', 'N', 'E', '_', 'v', '4', 'f', '3', '2', 0,
  /* 1880 */ 'N', 'E', 'G', '_', 'v', '4', 'f', '3', '2', 0,
  /* 1890 */ 'C', 'A', 'L', 'L', '_', 'v', '4', 'f', '3', '2', 0,
  /* 1901 */ 'M', 'U', 'L', '_', 'v', '4', 'f', '3', '2', 0,
  /* 1911 */ 'M', 'I', 'N', '_', 'v', '4', 'f', '3', '2', 0,
  /* 1921 */ 'E', 'Q', '_', 'v', '4', 'f', '3', '2', 0,
  /* 1930 */ 'A', 'B', 'S', '_', 'v', '4', 'f', '3', '2', 0,
  /* 1940 */ 'Q', 'F', 'M', 'S', '_', 'v', '4', 'f', '3', '2', 0,
  /* 1951 */ 'S', 'P', 'L', 'A', 'T', '_', 'v', '4', 'f', '3', '2', 0,
  /* 1963 */ 'B', 'I', 'T', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'v', '4', 'f', '3', '2', 0,
  /* 1979 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'v', '4', 'f', '3', '2', 0,
  /* 2000 */ 'G', 'T', '_', 'v', '4', 'f', '3', '2', 0,
  /* 2009 */ 'L', 'T', '_', 'v', '4', 'f', '3', '2', 0,
  /* 2018 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'v', '4', 'f', '3', '2', 0,
  /* 2033 */ 'S', 'Q', 'R', 'T', '_', 'v', '4', 'f', '3', '2', 0,
  /* 2044 */ 'D', 'I', 'V', '_', 'v', '4', 'f', '3', '2', 0,
  /* 2054 */ 'M', 'A', 'X', '_', 'v', '4', 'f', '3', '2', 0,
  /* 2064 */ 'C', 'A', 'L', 'L', '_', 'f', '3', '2', 0,
  /* 2073 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'f', '3', '2', 0,
  /* 2092 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'f', '3', '2', 0,
  /* 2105 */ 's', 'i', 'n', 't', '_', 't', 'o', '_', 'f', 'p', '_', 'v', '4', 'f', '3', '2', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2128 */ 'u', 'i', 'n', 't', '_', 't', 'o', '_', 'f', 'p', '_', 'v', '4', 'f', '3', '2', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2151 */ 'C', 'O', 'N', 'S', 'T', '_', 'V', '1', '2', '8', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2168 */ 'S', 'U', 'B', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2178 */ 'A', 'D', 'D', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2188 */ 'A', 'N', 'D', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2198 */ 'R', 'E', 'P', 'L', 'A', 'C', 'E', '_', 'L', 'A', 'N', 'E', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2217 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'L', 'A', 'N', 'E', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2236 */ 'A', 'L', 'L', 'T', 'R', 'U', 'E', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2250 */ 'A', 'N', 'Y', 'T', 'R', 'U', 'E', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2264 */ 'N', 'E', 'G', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2274 */ 'S', 'H', 'L', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2284 */ 'C', 'A', 'L', 'L', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2295 */ 'M', 'U', 'L', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2305 */ 'E', 'Q', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2314 */ 'X', 'O', 'R', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2324 */ 'L', 'O', 'A', 'D', '_', 'E', 'X', 'T', 'E', 'N', 'D', '_', 'S', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2344 */ 'G', 'E', '_', 'S', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2355 */ 'L', 'E', '_', 'S', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2366 */ 'M', 'I', 'N', '_', 'S', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2378 */ 'S', 'H', 'R', '_', 'S', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2390 */ 'G', 'T', '_', 'S', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2401 */ 'L', 'T', '_', 'S', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2412 */ 'M', 'A', 'X', '_', 'S', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2424 */ 'S', 'P', 'L', 'A', 'T', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2436 */ 'B', 'I', 'T', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2452 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2473 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2488 */ 'A', 'N', 'D', 'N', 'O', 'T', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2501 */ 'L', 'O', 'A', 'D', '_', 'E', 'X', 'T', 'E', 'N', 'D', '_', 'U', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2521 */ 'G', 'E', '_', 'U', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2532 */ 'L', 'E', '_', 'U', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2543 */ 'M', 'I', 'N', '_', 'U', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2555 */ 'S', 'H', 'R', '_', 'U', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2567 */ 'G', 'T', '_', 'U', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2578 */ 'L', 'T', '_', 'U', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2589 */ 'M', 'A', 'X', '_', 'U', '_', 'v', '4', 'i', '3', '2', 0,
  /* 2601 */ 'C', 'A', 'L', 'L', '_', 'i', '3', '2', 0,
  /* 2610 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'i', '3', '2', 0,
  /* 2629 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'i', '3', '2', 0,
  /* 2642 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 2650 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 2658 */ 'L', 'O', 'A', 'D', '_', 'S', 'P', 'L', 'A', 'T', '_', 'v', '6', '4', 'x', '2', 0,
  /* 2675 */ 'F', 'P', '_', 'T', 'O', '_', 'S', 'I', 'N', 'T', '_', 'I', '3', '2', '_', 'F', '6', '4', 0,
  /* 2694 */ 'F', 'P', '_', 'T', 'O', '_', 'U', 'I', 'N', 'T', '_', 'I', '3', '2', '_', 'F', '6', '4', 0,
  /* 2713 */ 'F', 'P', '_', 'T', 'O', '_', 'S', 'I', 'N', 'T', '_', 'I', '6', '4', '_', 'F', '6', '4', 0,
  /* 2732 */ 'F', 'P', '_', 'T', 'O', '_', 'U', 'I', 'N', 'T', '_', 'I', '6', '4', '_', 'F', '6', '4', 0,
  /* 2751 */ 'S', 'U', 'B', '_', 'F', '6', '4', 0,
  /* 2759 */ 'T', 'R', 'U', 'N', 'C', '_', 'F', '6', '4', 0,
  /* 2769 */ 'L', 'O', 'A', 'D', '_', 'F', '6', '4', 0,
  /* 2778 */ 'A', 'D', 'D', '_', 'F', '6', '4', 0,
  /* 2786 */ 'L', 'O', 'C', 'A', 'L', '_', 'T', 'E', 'E', '_', 'F', '6', '4', 0,
  /* 2800 */ 'G', 'E', '_', 'F', '6', '4', 0,
  /* 2807 */ 'L', 'E', '_', 'F', '6', '4', 0,
  /* 2814 */ 'N', 'E', '_', 'F', '6', '4', 0,
  /* 2821 */ 'S', 'T', 'O', 'R', 'E', '_', 'F', '6', '4', 0,
  /* 2831 */ 'F', '3', '2', '_', 'D', 'E', 'M', 'O', 'T', 'E', '_', 'F', '6', '4', 0,
  /* 2846 */ 'N', 'E', 'G', '_', 'F', '6', '4', 0,
  /* 2854 */ 'C', 'E', 'I', 'L', '_', 'F', '6', '4', 0,
  /* 2863 */ 'M', 'U', 'L', '_', 'F', '6', '4', 0,
  /* 2871 */ 'C', 'O', 'P', 'Y', 'S', 'I', 'G', 'N', '_', 'F', '6', '4', 0,
  /* 2884 */ 'M', 'I', 'N', '_', 'F', '6', '4', 0,
  /* 2892 */ 'D', 'R', 'O', 'P', '_', 'F', '6', '4', 0,
  /* 2901 */ 'E', 'Q', '_', 'F', '6', '4', 0,
  /* 2908 */ 'F', 'L', 'O', 'O', 'R', '_', 'F', '6', '4', 0,
  /* 2918 */ 'A', 'B', 'S', '_', 'F', '6', '4', 0,
  /* 2926 */ 'I', '3', '2', '_', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'F', '6', '4', 0,
  /* 2942 */ 'I', '6', '4', '_', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'F', '6', '4', 0,
  /* 2958 */ 'I', '3', '2', '_', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'S', 'A', 'T', '_', 'F', '6', '4', 0,
  /* 2978 */ 'I', '6', '4', '_', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'S', 'A', 'T', '_', 'F', '6', '4', 0,
  /* 2998 */ 'I', '3', '2', '_', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'S', 'A', 'T', '_', 'F', '6', '4', 0,
  /* 3018 */ 'I', '6', '4', '_', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'S', 'A', 'T', '_', 'F', '6', '4', 0,
  /* 3038 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'F', '6', '4', 0,
  /* 3049 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'G', 'E', 'T', '_', 'F', '6', '4', 0,
  /* 3064 */ 'L', 'O', 'C', 'A', 'L', '_', 'G', 'E', 'T', '_', 'F', '6', '4', 0,
  /* 3078 */ 'I', '6', '4', '_', 'R', 'E', 'I', 'N', 'T', 'E', 'R', 'P', 'R', 'E', 'T', '_', 'F', '6', '4', 0,
  /* 3098 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'S', 'E', 'T', '_', 'F', '6', '4', 0,
  /* 3113 */ 'L', 'O', 'C', 'A', 'L', '_', 'S', 'E', 'T', '_', 'F', '6', '4', 0,
  /* 3127 */ 'G', 'T', '_', 'F', '6', '4', 0,
  /* 3134 */ 'L', 'T', '_', 'F', '6', '4', 0,
  /* 3141 */ 'S', 'Q', 'R', 'T', '_', 'F', '6', '4', 0,
  /* 3150 */ 'N', 'E', 'A', 'R', 'E', 'S', 'T', '_', 'F', '6', '4', 0,
  /* 3162 */ 'C', 'O', 'N', 'S', 'T', '_', 'F', '6', '4', 0,
  /* 3172 */ 'I', '3', '2', '_', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'F', '6', '4', 0,
  /* 3188 */ 'I', '6', '4', '_', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'F', '6', '4', 0,
  /* 3204 */ 'D', 'I', 'V', '_', 'F', '6', '4', 0,
  /* 3212 */ 'M', 'A', 'X', '_', 'F', '6', '4', 0,
  /* 3220 */ 'C', 'O', 'P', 'Y', '_', 'F', '6', '4', 0,
  /* 3229 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'T', 'O', 'R', 'E', '3', '2', '_', 'I', '6', '4', 0,
  /* 3248 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'T', 'O', 'R', 'E', '1', '6', '_', 'I', '6', '4', 0,
  /* 3267 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'T', 'O', 'R', 'E', '8', '_', 'I', '6', '4', 0,
  /* 3285 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '3', '2', '_', 'U', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 3308 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 3331 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 3353 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 3372 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'I', '6', '4', 0,
  /* 3388 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '3', '2', '_', 'U', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 3411 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 3434 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 3456 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 3475 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '3', '2', '_', 'U', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 3498 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 3521 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 3543 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 3562 */ 'L', 'O', 'C', 'A', 'L', '_', 'T', 'E', 'E', '_', 'I', '6', '4', 0,
  /* 3576 */ 'B', 'R', '_', 'T', 'A', 'B', 'L', 'E', '_', 'I', '6', '4', 0,
  /* 3589 */ 'N', 'E', '_', 'I', '6', '4', 0,
  /* 3596 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'T', 'O', 'R', 'E', '_', 'I', '6', '4', 0,
  /* 3613 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '3', '2', '_', 'U', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', '6', '4', 0,
  /* 3640 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', '6', '4', 0,
  /* 3667 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', '6', '4', 0,
  /* 3693 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', '6', '4', 0,
  /* 3716 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '3', '2', '_', 'U', '_', 'X', 'C', 'H', 'G', '_', 'I', '6', '4', 0,
  /* 3740 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'X', 'C', 'H', 'G', '_', 'I', '6', '4', 0,
  /* 3764 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'X', 'C', 'H', 'G', '_', 'I', '6', '4', 0,
  /* 3787 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', '_', 'I', '6', '4', 0,
  /* 3807 */ 'S', 'H', 'L', '_', 'I', '6', '4', 0,
  /* 3815 */ 'R', 'O', 'T', 'L', '_', 'I', '6', '4', 0,
  /* 3824 */ 'M', 'U', 'L', '_', 'I', '6', '4', 0,
  /* 3832 */ 'I', '3', '2', '_', 'W', 'R', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 3845 */ 'D', 'R', 'O', 'P', '_', 'I', '6', '4', 0,
  /* 3854 */ 'E', 'Q', '_', 'I', '6', '4', 0,
  /* 3861 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '3', '2', '_', 'U', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 3884 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 3907 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 3929 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 3948 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '3', '2', '_', 'U', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 3970 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 3992 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 4013 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 4031 */ 'R', 'O', 'T', 'R', '_', 'I', '6', '4', 0,
  /* 4040 */ 'L', 'O', 'A', 'D', '3', '2', '_', 'S', '_', 'I', '6', '4', 0,
  /* 4053 */ 'I', '6', '4', '_', 'E', 'X', 'T', 'E', 'N', 'D', '3', '2', '_', 'S', '_', 'I', '6', '4', 0,
  /* 4072 */ 'L', 'O', 'A', 'D', '1', '6', '_', 'S', '_', 'I', '6', '4', 0,
  /* 4085 */ 'I', '6', '4', '_', 'E', 'X', 'T', 'E', 'N', 'D', '1', '6', '_', 'S', '_', 'I', '6', '4', 0,
  /* 4104 */ 'L', 'O', 'A', 'D', '8', '_', 'S', '_', 'I', '6', '4', 0,
  /* 4116 */ 'I', '6', '4', '_', 'E', 'X', 'T', 'E', 'N', 'D', '8', '_', 'S', '_', 'I', '6', '4', 0,
  /* 4134 */ 'G', 'E', '_', 'S', '_', 'I', '6', '4', 0,
  /* 4143 */ 'L', 'E', '_', 'S', '_', 'I', '6', '4', 0,
  /* 4152 */ 'R', 'E', 'M', '_', 'S', '_', 'I', '6', '4', 0,
  /* 4162 */ 'S', 'H', 'R', '_', 'S', '_', 'I', '6', '4', 0,
  /* 4172 */ 'G', 'T', '_', 'S', '_', 'I', '6', '4', 0,
  /* 4181 */ 'L', 'T', '_', 'S', '_', 'I', '6', '4', 0,
  /* 4190 */ 'F', '3', '2', '_', 'C', 'O', 'N', 'V', 'E', 'R', 'T', '_', 'S', '_', 'I', '6', '4', 0,
  /* 4208 */ 'F', '6', '4', '_', 'C', 'O', 'N', 'V', 'E', 'R', 'T', '_', 'S', '_', 'I', '6', '4', 0,
  /* 4226 */ 'D', 'I', 'V', '_', 'S', '_', 'I', '6', '4', 0,
  /* 4236 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', '6', '4', 0,
  /* 4247 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'G', 'E', 'T', '_', 'I', '6', '4', 0,
  /* 4262 */ 'L', 'O', 'C', 'A', 'L', '_', 'G', 'E', 'T', '_', 'I', '6', '4', 0,
  /* 4276 */ 'F', '6', '4', '_', 'R', 'E', 'I', 'N', 'T', 'E', 'R', 'P', 'R', 'E', 'T', '_', 'I', '6', '4', 0,
  /* 4296 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'S', 'E', 'T', '_', 'I', '6', '4', 0,
  /* 4311 */ 'L', 'O', 'C', 'A', 'L', '_', 'S', 'E', 'T', '_', 'I', '6', '4', 0,
  /* 4325 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'W', 'A', 'I', 'T', '_', 'I', '6', '4', 0,
  /* 4341 */ 'P', 'O', 'P', 'C', 'N', 'T', '_', 'I', '6', '4', 0,
  /* 4352 */ 'C', 'O', 'N', 'S', 'T', '_', 'I', '6', '4', 0,
  /* 4362 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '3', '2', '_', 'U', '_', 'I', '6', '4', 0,
  /* 4382 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '1', '6', '_', 'U', '_', 'I', '6', '4', 0,
  /* 4402 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '8', '_', 'U', '_', 'I', '6', '4', 0,
  /* 4421 */ 'G', 'E', '_', 'U', '_', 'I', '6', '4', 0,
  /* 4430 */ 'L', 'E', '_', 'U', '_', 'I', '6', '4', 0,
  /* 4439 */ 'R', 'E', 'M', '_', 'U', '_', 'I', '6', '4', 0,
  /* 4449 */ 'S', 'H', 'R', '_', 'U', '_', 'I', '6', '4', 0,
  /* 4459 */ 'G', 'T', '_', 'U', '_', 'I', '6', '4', 0,
  /* 4468 */ 'L', 'T', '_', 'U', '_', 'I', '6', '4', 0,
  /* 4477 */ 'F', '3', '2', '_', 'C', 'O', 'N', 'V', 'E', 'R', 'T', '_', 'U', '_', 'I', '6', '4', 0,
  /* 4495 */ 'F', '6', '4', '_', 'C', 'O', 'N', 'V', 'E', 'R', 'T', '_', 'U', '_', 'I', '6', '4', 0,
  /* 4513 */ 'D', 'I', 'V', '_', 'U', '_', 'I', '6', '4', 0,
  /* 4523 */ 'C', 'O', 'P', 'Y', '_', 'I', '6', '4', 0,
  /* 4532 */ 'C', 'L', 'Z', '_', 'I', '6', '4', 0,
  /* 4540 */ 'E', 'Q', 'Z', '_', 'I', '6', '4', 0,
  /* 4548 */ 'C', 'T', 'Z', '_', 'I', '6', '4', 0,
  /* 4556 */ 'f', 'p', '_', 't', 'o', '_', 's', 'i', 'n', 't', '_', 'v', '2', 'i', '6', '4', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4579 */ 'f', 'p', '_', 't', 'o', '_', 'u', 'i', 'n', 't', '_', 'v', '2', 'i', '6', '4', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4602 */ 'C', 'O', 'N', 'S', 'T', '_', 'V', '1', '2', '8', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4619 */ 'Q', 'F', 'M', 'A', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4630 */ 'S', 'U', 'B', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4640 */ 'A', 'D', 'D', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4650 */ 'G', 'E', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4659 */ 'L', 'E', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4668 */ 'R', 'E', 'P', 'L', 'A', 'C', 'E', '_', 'L', 'A', 'N', 'E', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4687 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'L', 'A', 'N', 'E', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4706 */ 'N', 'E', 'G', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4716 */ 'C', 'A', 'L', 'L', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4727 */ 'M', 'U', 'L', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4737 */ 'M', 'I', 'N', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4747 */ 'E', 'Q', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4756 */ 'A', 'B', 'S', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4766 */ 'Q', 'F', 'M', 'S', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4777 */ 'S', 'P', 'L', 'A', 'T', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4789 */ 'B', 'I', 'T', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4805 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4826 */ 'G', 'T', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4835 */ 'L', 'T', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4844 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4859 */ 'S', 'Q', 'R', 'T', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4870 */ 'D', 'I', 'V', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4880 */ 'M', 'A', 'X', '_', 'v', '2', 'f', '6', '4', 0,
  /* 4890 */ 'C', 'A', 'L', 'L', '_', 'f', '6', '4', 0,
  /* 4899 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'f', '6', '4', 0,
  /* 4918 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'f', '6', '4', 0,
  /* 4931 */ 's', 'i', 'n', 't', '_', 't', 'o', '_', 'f', 'p', '_', 'v', '2', 'f', '6', '4', '_', 'v', '2', 'i', '6', '4', 0,
  /* 4954 */ 'u', 'i', 'n', 't', '_', 't', 'o', '_', 'f', 'p', '_', 'v', '2', 'f', '6', '4', '_', 'v', '2', 'i', '6', '4', 0,
  /* 4977 */ 'C', 'O', 'N', 'S', 'T', '_', 'V', '1', '2', '8', '_', 'v', '2', 'i', '6', '4', 0,
  /* 4994 */ 'S', 'U', 'B', '_', 'v', '2', 'i', '6', '4', 0,
  /* 5004 */ 'A', 'D', 'D', '_', 'v', '2', 'i', '6', '4', 0,
  /* 5014 */ 'A', 'N', 'D', '_', 'v', '2', 'i', '6', '4', 0,
  /* 5024 */ 'R', 'E', 'P', 'L', 'A', 'C', 'E', '_', 'L', 'A', 'N', 'E', '_', 'v', '2', 'i', '6', '4', 0,
  /* 5043 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'L', 'A', 'N', 'E', '_', 'v', '2', 'i', '6', '4', 0,
  /* 5062 */ 'A', 'L', 'L', 'T', 'R', 'U', 'E', '_', 'v', '2', 'i', '6', '4', 0,
  /* 5076 */ 'A', 'N', 'Y', 'T', 'R', 'U', 'E', '_', 'v', '2', 'i', '6', '4', 0,
  /* 5090 */ 'N', 'E', 'G', '_', 'v', '2', 'i', '6', '4', 0,
  /* 5100 */ 'S', 'H', 'L', '_', 'v', '2', 'i', '6', '4', 0,
  /* 5110 */ 'C', 'A', 'L', 'L', '_', 'v', '2', 'i', '6', '4', 0,
  /* 5121 */ 'X', 'O', 'R', '_', 'v', '2', 'i', '6', '4', 0,
  /* 5131 */ 'L', 'O', 'A', 'D', '_', 'E', 'X', 'T', 'E', 'N', 'D', '_', 'S', '_', 'v', '2', 'i', '6', '4', 0,
  /* 5151 */ 'S', 'H', 'R', '_', 'S', '_', 'v', '2', 'i', '6', '4', 0,
  /* 5163 */ 'S', 'P', 'L', 'A', 'T', '_', 'v', '2', 'i', '6', '4', 0,
  /* 5175 */ 'B', 'I', 'T', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'v', '2', 'i', '6', '4', 0,
  /* 5191 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'v', '2', 'i', '6', '4', 0,
  /* 5212 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'v', '2', 'i', '6', '4', 0,
  /* 5227 */ 'A', 'N', 'D', 'N', 'O', 'T', '_', 'v', '2', 'i', '6', '4', 0,
  /* 5240 */ 'L', 'O', 'A', 'D', '_', 'E', 'X', 'T', 'E', 'N', 'D', '_', 'U', '_', 'v', '2', 'i', '6', '4', 0,
  /* 5260 */ 'S', 'H', 'R', '_', 'U', '_', 'v', '2', 'i', '6', '4', 0,
  /* 5272 */ 'C', 'A', 'L', 'L', '_', 'i', '6', '4', 0,
  /* 5281 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'i', '6', '4', 0,
  /* 5300 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'i', '6', '4', 0,
  /* 5313 */ 'L', 'O', 'A', 'D', '_', 'S', 'P', 'L', 'A', 'T', '_', 'v', '3', '2', 'x', '4', 0,
  /* 5330 */ 'i', 'n', 't', '_', 'w', 'a', 's', 'm', '_', 'w', 'i', 'd', 'e', 'n', '_', 'h', 'i', 'g', 'h', '_', 's', 'i', 'g', 'n', 'e', 'd', '_', 'v', '4', 'i', '3', '2', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5369 */ 'i', 'n', 't', '_', 'w', 'a', 's', 'm', '_', 'w', 'i', 'd', 'e', 'n', '_', 'l', 'o', 'w', '_', 's', 'i', 'g', 'n', 'e', 'd', '_', 'v', '4', 'i', '3', '2', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5407 */ 'i', 'n', 't', '_', 'w', 'a', 's', 'm', '_', 'w', 'i', 'd', 'e', 'n', '_', 'h', 'i', 'g', 'h', '_', 'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', '_', 'v', '4', 'i', '3', '2', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5448 */ 'i', 'n', 't', '_', 'w', 'a', 's', 'm', '_', 'w', 'i', 'd', 'e', 'n', '_', 'l', 'o', 'w', '_', 'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', '_', 'v', '4', 'i', '3', '2', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5488 */ 'C', 'O', 'N', 'S', 'T', '_', 'V', '1', '2', '8', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5505 */ 'S', 'U', 'B', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5515 */ 'A', 'D', 'D', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5525 */ 'A', 'N', 'D', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5535 */ 'R', 'E', 'P', 'L', 'A', 'C', 'E', '_', 'L', 'A', 'N', 'E', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5554 */ 'A', 'L', 'L', 'T', 'R', 'U', 'E', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5568 */ 'A', 'N', 'Y', 'T', 'R', 'U', 'E', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5582 */ 'N', 'E', 'G', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5592 */ 'S', 'H', 'L', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5602 */ 'C', 'A', 'L', 'L', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5613 */ 'M', 'U', 'L', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5623 */ 'E', 'Q', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5632 */ 'X', 'O', 'R', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5642 */ 'L', 'O', 'A', 'D', '_', 'E', 'X', 'T', 'E', 'N', 'D', '_', 'S', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5662 */ 'G', 'E', '_', 'S', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5673 */ 'L', 'E', '_', 'S', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5684 */ 'M', 'I', 'N', '_', 'S', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5696 */ 'S', 'H', 'R', '_', 'S', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5708 */ 'S', 'U', 'B', '_', 'S', 'A', 'T', '_', 'S', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5724 */ 'A', 'D', 'D', '_', 'S', 'A', 'T', '_', 'S', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5740 */ 'G', 'T', '_', 'S', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5751 */ 'L', 'T', '_', 'S', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5762 */ 'N', 'A', 'R', 'R', 'O', 'W', '_', 'S', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5777 */ 'M', 'A', 'X', '_', 'S', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5789 */ 'S', 'P', 'L', 'A', 'T', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5801 */ 'B', 'I', 'T', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5817 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5838 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5853 */ 'A', 'N', 'D', 'N', 'O', 'T', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5866 */ 'L', 'O', 'A', 'D', '_', 'E', 'X', 'T', 'E', 'N', 'D', '_', 'U', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5886 */ 'G', 'E', '_', 'U', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5897 */ 'L', 'E', '_', 'U', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5908 */ 'M', 'I', 'N', '_', 'U', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5920 */ 'A', 'V', 'G', 'R', '_', 'U', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5933 */ 'S', 'H', 'R', '_', 'U', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5945 */ 'S', 'U', 'B', '_', 'S', 'A', 'T', '_', 'U', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5961 */ 'A', 'D', 'D', '_', 'S', 'A', 'T', '_', 'U', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5977 */ 'G', 'T', '_', 'U', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5988 */ 'L', 'T', '_', 'U', '_', 'v', '8', 'i', '1', '6', 0,
  /* 5999 */ 'N', 'A', 'R', 'R', 'O', 'W', '_', 'U', '_', 'v', '8', 'i', '1', '6', 0,
  /* 6014 */ 'M', 'A', 'X', '_', 'U', '_', 'v', '8', 'i', '1', '6', 0,
  /* 6026 */ 'L', 'O', 'A', 'D', '_', 'S', 'P', 'L', 'A', 'T', '_', 'v', '8', 'x', '1', '6', 0,
  /* 6043 */ 'L', 'O', 'A', 'D', '_', 'V', '1', '2', '8', 0,
  /* 6053 */ 'L', 'O', 'C', 'A', 'L', '_', 'T', 'E', 'E', '_', 'V', '1', '2', '8', 0,
  /* 6068 */ 'S', 'T', 'O', 'R', 'E', '_', 'V', '1', '2', '8', 0,
  /* 6079 */ 'D', 'R', 'O', 'P', '_', 'V', '1', '2', '8', 0,
  /* 6089 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'G', 'E', 'T', '_', 'V', '1', '2', '8', 0,
  /* 6105 */ 'L', 'O', 'C', 'A', 'L', '_', 'G', 'E', 'T', '_', 'V', '1', '2', '8', 0,
  /* 6120 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'S', 'E', 'T', '_', 'V', '1', '2', '8', 0,
  /* 6136 */ 'L', 'O', 'C', 'A', 'L', '_', 'S', 'E', 'T', '_', 'V', '1', '2', '8', 0,
  /* 6151 */ 'C', 'O', 'P', 'Y', '_', 'V', '1', '2', '8', 0,
  /* 6161 */ 'i', 'n', 't', '_', 'w', 'a', 's', 'm', '_', 'w', 'i', 'd', 'e', 'n', '_', 'h', 'i', 'g', 'h', '_', 's', 'i', 'g', 'n', 'e', 'd', '_', 'v', '8', 'i', '1', '6', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6200 */ 'i', 'n', 't', '_', 'w', 'a', 's', 'm', '_', 'w', 'i', 'd', 'e', 'n', '_', 'l', 'o', 'w', '_', 's', 'i', 'g', 'n', 'e', 'd', '_', 'v', '8', 'i', '1', '6', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6238 */ 'i', 'n', 't', '_', 'w', 'a', 's', 'm', '_', 'w', 'i', 'd', 'e', 'n', '_', 'h', 'i', 'g', 'h', '_', 'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', '_', 'v', '8', 'i', '1', '6', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6279 */ 'i', 'n', 't', '_', 'w', 'a', 's', 'm', '_', 'w', 'i', 'd', 'e', 'n', '_', 'l', 'o', 'w', '_', 'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', '_', 'v', '8', 'i', '1', '6', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6319 */ 'C', 'O', 'N', 'S', 'T', '_', 'V', '1', '2', '8', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6336 */ 'S', 'U', 'B', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6346 */ 'A', 'D', 'D', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6356 */ 'A', 'N', 'D', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6366 */ 'R', 'E', 'P', 'L', 'A', 'C', 'E', '_', 'L', 'A', 'N', 'E', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6385 */ 'A', 'L', 'L', 'T', 'R', 'U', 'E', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6399 */ 'A', 'N', 'Y', 'T', 'R', 'U', 'E', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6413 */ 'N', 'E', 'G', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6423 */ 'S', 'H', 'L', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6433 */ 'C', 'A', 'L', 'L', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6444 */ 'M', 'U', 'L', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6454 */ 'E', 'Q', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6463 */ 'X', 'O', 'R', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6473 */ 'G', 'E', '_', 'S', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6484 */ 'L', 'E', '_', 'S', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6495 */ 'M', 'I', 'N', '_', 'S', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6507 */ 'S', 'H', 'R', '_', 'S', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6519 */ 'S', 'U', 'B', '_', 'S', 'A', 'T', '_', 'S', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6535 */ 'A', 'D', 'D', '_', 'S', 'A', 'T', '_', 'S', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6551 */ 'G', 'T', '_', 'S', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6562 */ 'L', 'T', '_', 'S', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6573 */ 'N', 'A', 'R', 'R', 'O', 'W', '_', 'S', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6588 */ 'M', 'A', 'X', '_', 'S', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6600 */ 'S', 'P', 'L', 'A', 'T', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6612 */ 'B', 'I', 'T', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6628 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6649 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6664 */ 'A', 'N', 'D', 'N', 'O', 'T', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6677 */ 'G', 'E', '_', 'U', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6688 */ 'L', 'E', '_', 'U', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6699 */ 'M', 'I', 'N', '_', 'U', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6711 */ 'A', 'V', 'G', 'R', '_', 'U', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6724 */ 'S', 'H', 'R', '_', 'U', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6736 */ 'S', 'U', 'B', '_', 'S', 'A', 'T', '_', 'U', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6752 */ 'A', 'D', 'D', '_', 'S', 'A', 'T', '_', 'U', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6768 */ 'G', 'T', '_', 'U', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6779 */ 'L', 'T', '_', 'U', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6790 */ 'N', 'A', 'R', 'R', 'O', 'W', '_', 'U', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6805 */ 'M', 'A', 'X', '_', 'U', '_', 'v', '1', '6', 'i', '8', 0,
  /* 6817 */ 'L', 'O', 'A', 'D', '_', 'S', 'P', 'L', 'A', 'T', '_', 'v', '1', '6', 'x', '8', 0,
  /* 6834 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 6840 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 6847 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'S', 'U', 'B', 0,
  /* 6864 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 6870 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'S', 'U', 'B', 0,
  /* 6886 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 6898 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 6908 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 6926 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 6934 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 6955 */ 'G', '_', 'D', 'Y', 'N', '_', 'S', 'T', 'A', 'C', 'K', 'A', 'L', 'L', 'O', 'C', 0,
  /* 6972 */ 'G', '_', 'F', 'M', 'A', 'D', 0,
  /* 6979 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 6998 */ 'G', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 7009 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 7028 */ 'G', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 7039 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'L', 'O', 'A', 'D', 0,
  /* 7054 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 7061 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 7068 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'A', 'D', 'D', 0,
  /* 7085 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 7091 */ 'G', '_', 'P', 'T', 'R', '_', 'A', 'D', 'D', 0,
  /* 7101 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'D', 'D', 0,
  /* 7117 */ 'C', 'A', 'L', 'L', '_', 'V', 'O', 'I', 'D', 0,
  /* 7127 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'V', 'O', 'I', 'D', 0,
  /* 7147 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'N', 'A', 'N', 'D', 0,
  /* 7164 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 7170 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'N', 'D', 0,
  /* 7186 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 7199 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 7208 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'R', 'O', 'U', 'N', 'D', 0,
  /* 7226 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 7243 */ 'G', '_', 'S', 'S', 'U', 'B', 'E', 0,
  /* 7251 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 7259 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 7272 */ 'G', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 7280 */ 'C', 'O', 'M', 'P', 'I', 'L', 'E', 'R', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 7295 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 7308 */ 'G', '_', 'S', 'A', 'D', 'D', 'E', 0,
  /* 7316 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 7324 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 7339 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 7354 */ 'U', 'N', 'R', 'E', 'A', 'C', 'H', 'A', 'B', 'L', 'E', 0,
  /* 7366 */ 'G', '_', 'J', 'U', 'M', 'P', '_', 'T', 'A', 'B', 'L', 'E', 0,
  /* 7379 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 7386 */ 'S', 'H', 'U', 'F', 'F', 'L', 'E', 0,
  /* 7394 */ 'S', 'W', 'I', 'Z', 'Z', 'L', 'E', 0,
  /* 7402 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 7415 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 7431 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 7439 */ 'E', 'L', 'S', 'E', 0,
  /* 7444 */ 'G', '_', 'B', 'I', 'T', 'R', 'E', 'V', 'E', 'R', 'S', 'E', 0,
  /* 7457 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 7467 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 7482 */ 'G', '_', 'F', 'C', 'A', 'N', 'O', 'N', 'I', 'C', 'A', 'L', 'I', 'Z', 'E', 0,
  /* 7498 */ 'G', '_', 'C', 'T', 'L', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 7516 */ 'G', '_', 'C', 'T', 'T', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 7534 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 7549 */ 'L', 'O', 'C', 'A', 'L', '_', 'T', 'E', 'E', '_', 'E', 'X', 'N', 'R', 'E', 'F', 0,
  /* 7566 */ 'D', 'R', 'O', 'P', '_', 'E', 'X', 'N', 'R', 'E', 'F', 0,
  /* 7578 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'E', 'X', 'N', 'R', 'E', 'F', 0,
  /* 7592 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'G', 'E', 'T', '_', 'E', 'X', 'N', 'R', 'E', 'F', 0,
  /* 7610 */ 'L', 'O', 'C', 'A', 'L', '_', 'G', 'E', 'T', '_', 'E', 'X', 'N', 'R', 'E', 'F', 0,
  /* 7627 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'S', 'E', 'T', '_', 'E', 'X', 'N', 'R', 'E', 'F', 0,
  /* 7645 */ 'L', 'O', 'C', 'A', 'L', '_', 'S', 'E', 'T', '_', 'E', 'X', 'N', 'R', 'E', 'F', 0,
  /* 7662 */ 'C', 'O', 'P', 'Y', '_', 'E', 'X', 'N', 'R', 'E', 'F', 0,
  /* 7674 */ 'E', 'N', 'D', '_', 'I', 'F', 0,
  /* 7681 */ 'B', 'R', '_', 'I', 'F', 0,
  /* 7687 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 7694 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 7709 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 7723 */ 'G', '_', 'S', 'E', 'X', 'T', '_', 'I', 'N', 'R', 'E', 'G', 0,
  /* 7736 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 7750 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', 0,
  /* 7767 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', 0,
  /* 7784 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 7791 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 7799 */ 'R', 'E', 'T', 'H', 'R', 'O', 'W', '_', 'I', 'N', '_', 'C', 'A', 'T', 'C', 'H', 0,
  /* 7816 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 7824 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 7832 */ 'G', '_', 'P', 'H', 'I', 0,
  /* 7838 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 7847 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 7856 */ 'E', 'N', 'D', '_', 'B', 'L', 'O', 'C', 'K', 0,
  /* 7866 */ 'G', '_', 'P', 'T', 'R', '_', 'M', 'A', 'S', 'K', 0,
  /* 7877 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 7886 */ 'D', 'B', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 7896 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 7905 */ 'A', 'N', 'N', 'O', 'T', 'A', 'T', 'I', 'O', 'N', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 7922 */ 'I', 'C', 'A', 'L', 'L', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'F', 'U', 'N', 'N', 'E', 'L', 0,
  /* 7942 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 7948 */ 'G', '_', 'F', 'C', 'E', 'I', 'L', 0,
  /* 7956 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 7976 */ 'R', 'E', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 7985 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 8012 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 8033 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 8045 */ 'M', 'E', 'M', 'O', 'R', 'Y', '_', 'F', 'I', 'L', 'L', 0,
  /* 8057 */ 'K', 'I', 'L', 'L', 0,
  /* 8062 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 8069 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 8075 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 8082 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 8089 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 8096 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 8106 */ 'G', '_', 'F', 'M', 'I', 'N', 'I', 'M', 'U', 'M', 0,
  /* 8117 */ 'G', '_', 'F', 'M', 'A', 'X', 'I', 'M', 'U', 'M', 0,
  /* 8128 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', 0,
  /* 8138 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', 0,
  /* 8148 */ 'G', '_', 'F', 'C', 'O', 'P', 'Y', 'S', 'I', 'G', 'N', 0,
  /* 8160 */ 'G', '_', 'S', 'M', 'I', 'N', 0,
  /* 8167 */ 'G', '_', 'U', 'M', 'I', 'N', 0,
  /* 8174 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 8191 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'I', 'N', 0,
  /* 8207 */ 'G', '_', 'F', 'S', 'I', 'N', 0,
  /* 8214 */ 'E', 'N', 'D', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', 0,
  /* 8227 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 8243 */ 'F', 'A', 'L', 'L', 'T', 'H', 'R', 'O', 'U', 'G', 'H', '_', 'R', 'E', 'T', 'U', 'R', 'N', 0,
  /* 8262 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 8279 */ 'B', 'R', '_', 'O', 'N', '_', 'E', 'X', 'N', 0,
  /* 8289 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 8297 */ 'G', '_', 'U', 'S', 'U', 'B', 'O', 0,
  /* 8305 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 8313 */ 'G', '_', 'U', 'A', 'D', 'D', 'O', 0,
  /* 8321 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 8329 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 8337 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 8346 */ 'G', '_', 'B', 'S', 'W', 'A', 'P', 0,
  /* 8354 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 8363 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 8372 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 8379 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 8386 */ 'N', 'O', 'P', 0,
  /* 8390 */ 'E', 'N', 'D', '_', 'L', 'O', 'O', 'P', 0,
  /* 8399 */ 'G', '_', 'C', 'T', 'P', 'O', 'P', 0,
  /* 8407 */ 'D', 'A', 'T', 'A', '_', 'D', 'R', 'O', 'P', 0,
  /* 8417 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 8430 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 8442 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 8457 */ 'G', '_', 'F', 'E', 'X', 'P', 0,
  /* 8464 */ 'G', '_', 'B', 'R', 0,
  /* 8469 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', '_', 'B', 'R', 0,
  /* 8482 */ 'G', '_', 'B', 'L', 'O', 'C', 'K', '_', 'A', 'D', 'D', 'R', 0,
  /* 8495 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 8520 */ 'G', '_', 'R', 'E', 'A', 'D', 'C', 'Y', 'C', 'L', 'E', 'C', 'O', 'U', 'N', 'T', 'E', 'R', 0,
  /* 8539 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 8546 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 8553 */ 'G', '_', 'F', 'F', 'L', 'O', 'O', 'R', 0,
  /* 8562 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 8577 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 8594 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 8600 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'O', 'R', 0,
  /* 8616 */ 'G', '_', 'O', 'R', 0,
  /* 8621 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'O', 'R', 0,
  /* 8636 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 8647 */ 'G', '_', 'F', 'A', 'B', 'S', 0,
  /* 8654 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 8671 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 8686 */ 'G', '_', 'F', 'C', 'O', 'S', 0,
  /* 8693 */ 'G', '_', 'C', 'O', 'N', 'C', 'A', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', 'S', 0,
  /* 8710 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 8727 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'W', 'I', 'T', 'H', '_', 'S', 'U', 'C', 'C', 'E', 'S', 'S', 0,
  /* 8757 */ 'B', 'R', '_', 'U', 'N', 'L', 'E', 'S', 'S', 0,
  /* 8767 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 8794 */ 'F', 'P', '_', 'T', 'O', '_', 'S', 'I', 'N', 'T', '_', 'I', '3', '2', '_', 'F', '3', '2', '_', 'S', 0,
  /* 8815 */ 'F', 'P', '_', 'T', 'O', '_', 'U', 'I', 'N', 'T', '_', 'I', '3', '2', '_', 'F', '3', '2', '_', 'S', 0,
  /* 8836 */ 'F', 'P', '_', 'T', 'O', '_', 'S', 'I', 'N', 'T', '_', 'I', '6', '4', '_', 'F', '3', '2', '_', 'S', 0,
  /* 8857 */ 'F', 'P', '_', 'T', 'O', '_', 'U', 'I', 'N', 'T', '_', 'I', '6', '4', '_', 'F', '3', '2', '_', 'S', 0,
  /* 8878 */ 'S', 'U', 'B', '_', 'F', '3', '2', '_', 'S', 0,
  /* 8888 */ 'T', 'R', 'U', 'N', 'C', '_', 'F', '3', '2', '_', 'S', 0,
  /* 8900 */ 'L', 'O', 'A', 'D', '_', 'F', '3', '2', '_', 'S', 0,
  /* 8911 */ 'A', 'D', 'D', '_', 'F', '3', '2', '_', 'S', 0,
  /* 8921 */ 'L', 'O', 'C', 'A', 'L', '_', 'T', 'E', 'E', '_', 'F', '3', '2', '_', 'S', 0,
  /* 8937 */ 'G', 'E', '_', 'F', '3', '2', '_', 'S', 0,
  /* 8946 */ 'L', 'E', '_', 'F', '3', '2', '_', 'S', 0,
  /* 8955 */ 'N', 'E', '_', 'F', '3', '2', '_', 'S', 0,
  /* 8964 */ 'S', 'T', 'O', 'R', 'E', '_', 'F', '3', '2', '_', 'S', 0,
  /* 8976 */ 'F', '6', '4', '_', 'P', 'R', 'O', 'M', 'O', 'T', 'E', '_', 'F', '3', '2', '_', 'S', 0,
  /* 8994 */ 'N', 'E', 'G', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9004 */ 'C', 'E', 'I', 'L', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9015 */ 'M', 'U', 'L', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9025 */ 'C', 'O', 'P', 'Y', 'S', 'I', 'G', 'N', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9040 */ 'M', 'I', 'N', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9050 */ 'D', 'R', 'O', 'P', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9061 */ 'E', 'Q', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9070 */ 'F', 'L', 'O', 'O', 'R', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9082 */ 'A', 'B', 'S', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9092 */ 'I', '3', '2', '_', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9110 */ 'I', '6', '4', '_', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9128 */ 'I', '3', '2', '_', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'S', 'A', 'T', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9150 */ 'I', '6', '4', '_', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'S', 'A', 'T', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9172 */ 'I', '3', '2', '_', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'S', 'A', 'T', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9194 */ 'I', '6', '4', '_', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'S', 'A', 'T', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9216 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9229 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'G', 'E', 'T', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9246 */ 'L', 'O', 'C', 'A', 'L', '_', 'G', 'E', 'T', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9262 */ 'I', '3', '2', '_', 'R', 'E', 'I', 'N', 'T', 'E', 'R', 'P', 'R', 'E', 'T', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9284 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'S', 'E', 'T', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9301 */ 'L', 'O', 'C', 'A', 'L', '_', 'S', 'E', 'T', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9317 */ 'G', 'T', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9326 */ 'L', 'T', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9335 */ 'S', 'Q', 'R', 'T', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9346 */ 'N', 'E', 'A', 'R', 'E', 'S', 'T', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9360 */ 'C', 'O', 'N', 'S', 'T', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9372 */ 'I', '3', '2', '_', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9390 */ 'I', '6', '4', '_', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9408 */ 'D', 'I', 'V', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9418 */ 'M', 'A', 'X', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9428 */ 'C', 'O', 'P', 'Y', '_', 'F', '3', '2', '_', 'S', 0,
  /* 9439 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'T', 'O', 'R', 'E', '1', '6', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9460 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'T', 'O', 'R', 'E', '8', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9480 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'S', 'U', 'B', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9505 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'S', 'U', 'B', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9529 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'S', 'U', 'B', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9550 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9568 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'A', 'D', 'D', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9593 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'A', 'D', 'D', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9617 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'A', 'D', 'D', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9638 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'A', 'N', 'D', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9663 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'A', 'N', 'D', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9687 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'A', 'N', 'D', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9708 */ 'L', 'O', 'C', 'A', 'L', '_', 'T', 'E', 'E', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9724 */ 'B', 'R', '_', 'T', 'A', 'B', 'L', 'E', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9739 */ 'N', 'E', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9748 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'T', 'O', 'R', 'E', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9767 */ 'M', 'E', 'M', 'O', 'R', 'Y', '_', 'S', 'I', 'Z', 'E', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9785 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9814 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9842 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9867 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'X', 'C', 'H', 'G', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9893 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'X', 'C', 'H', 'G', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9918 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9940 */ 'S', 'H', 'L', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9950 */ 'R', 'O', 'T', 'L', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9961 */ 'M', 'U', 'L', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9971 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'E', 'X', 'C', 'E', 'P', 'T', 'I', 'O', 'N', '_', 'I', '3', '2', '_', 'S', 0,
  /* 9995 */ 'D', 'R', 'O', 'P', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10006 */ 'E', 'Q', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10015 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'X', 'O', 'R', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10040 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'X', 'O', 'R', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10064 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'X', 'O', 'R', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10085 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'O', 'R', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10109 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'O', 'R', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10132 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'O', 'R', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10152 */ 'R', 'O', 'T', 'R', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10163 */ 'L', 'O', 'A', 'D', '1', '6', '_', 'S', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10178 */ 'I', '3', '2', '_', 'E', 'X', 'T', 'E', 'N', 'D', '1', '6', '_', 'S', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10199 */ 'L', 'O', 'A', 'D', '8', '_', 'S', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10213 */ 'I', '3', '2', '_', 'E', 'X', 'T', 'E', 'N', 'D', '8', '_', 'S', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10233 */ 'I', '6', '4', '_', 'E', 'X', 'T', 'E', 'N', 'D', '_', 'S', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10252 */ 'G', 'E', '_', 'S', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10263 */ 'L', 'E', '_', 'S', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10274 */ 'R', 'E', 'M', '_', 'S', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10286 */ 'S', 'H', 'R', '_', 'S', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10298 */ 'G', 'T', '_', 'S', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10309 */ 'L', 'T', '_', 'S', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10320 */ 'F', '3', '2', '_', 'C', 'O', 'N', 'V', 'E', 'R', 'T', '_', 'S', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10340 */ 'F', '6', '4', '_', 'C', 'O', 'N', 'V', 'E', 'R', 'T', '_', 'S', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10360 */ 'D', 'I', 'V', '_', 'S', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10372 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10385 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'G', 'E', 'T', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10402 */ 'L', 'O', 'C', 'A', 'L', '_', 'G', 'E', 'T', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10418 */ 'F', '3', '2', '_', 'R', 'E', 'I', 'N', 'T', 'E', 'R', 'P', 'R', 'E', 'T', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10440 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'S', 'E', 'T', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10457 */ 'L', 'O', 'C', 'A', 'L', '_', 'S', 'E', 'T', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10473 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'W', 'A', 'I', 'T', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10491 */ 'P', 'O', 'P', 'C', 'N', 'T', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10504 */ 'C', 'O', 'N', 'S', 'T', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10516 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '1', '6', '_', 'U', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10538 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '8', '_', 'U', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10559 */ 'I', '6', '4', '_', 'E', 'X', 'T', 'E', 'N', 'D', '_', 'U', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10578 */ 'G', 'E', '_', 'U', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10589 */ 'L', 'E', '_', 'U', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10600 */ 'R', 'E', 'M', '_', 'U', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10612 */ 'S', 'H', 'R', '_', 'U', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10624 */ 'G', 'T', '_', 'U', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10635 */ 'L', 'T', '_', 'U', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10646 */ 'F', '3', '2', '_', 'C', 'O', 'N', 'V', 'E', 'R', 'T', '_', 'U', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10666 */ 'F', '6', '4', '_', 'C', 'O', 'N', 'V', 'E', 'R', 'T', '_', 'U', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10686 */ 'D', 'I', 'V', '_', 'U', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10698 */ 'M', 'E', 'M', 'O', 'R', 'Y', '_', 'G', 'R', 'O', 'W', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10716 */ 'C', 'O', 'P', 'Y', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10727 */ 'C', 'L', 'Z', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10737 */ 'E', 'Q', 'Z', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10747 */ 'C', 'T', 'Z', '_', 'I', '3', '2', '_', 'S', 0,
  /* 10757 */ 'f', 'p', '_', 't', 'o', '_', 's', 'i', 'n', 't', '_', 'v', '4', 'i', '3', '2', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 10782 */ 'f', 'p', '_', 't', 'o', '_', 'u', 'i', 'n', 't', '_', 'v', '4', 'i', '3', '2', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 10807 */ 'C', 'O', 'N', 'S', 'T', '_', 'V', '1', '2', '8', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 10826 */ 'Q', 'F', 'M', 'A', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 10839 */ 'S', 'U', 'B', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 10851 */ 'A', 'D', 'D', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 10863 */ 'G', 'E', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 10874 */ 'L', 'E', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 10885 */ 'R', 'E', 'P', 'L', 'A', 'C', 'E', '_', 'L', 'A', 'N', 'E', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 10906 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'L', 'A', 'N', 'E', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 10927 */ 'N', 'E', 'G', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 10939 */ 'C', 'A', 'L', 'L', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 10952 */ 'M', 'U', 'L', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 10964 */ 'M', 'I', 'N', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 10976 */ 'E', 'Q', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 10987 */ 'A', 'B', 'S', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 10999 */ 'Q', 'F', 'M', 'S', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 11012 */ 'S', 'P', 'L', 'A', 'T', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 11026 */ 'B', 'I', 'T', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 11044 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 11067 */ 'G', 'T', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 11078 */ 'L', 'T', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 11089 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 11106 */ 'S', 'Q', 'R', 'T', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 11119 */ 'D', 'I', 'V', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 11131 */ 'M', 'A', 'X', '_', 'v', '4', 'f', '3', '2', '_', 'S', 0,
  /* 11143 */ 'C', 'A', 'L', 'L', '_', 'f', '3', '2', '_', 'S', 0,
  /* 11154 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'f', '3', '2', '_', 'S', 0,
  /* 11175 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'f', '3', '2', '_', 'S', 0,
  /* 11190 */ 's', 'i', 'n', 't', '_', 't', 'o', '_', 'f', 'p', '_', 'v', '4', 'f', '3', '2', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11215 */ 'u', 'i', 'n', 't', '_', 't', 'o', '_', 'f', 'p', '_', 'v', '4', 'f', '3', '2', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11240 */ 'C', 'O', 'N', 'S', 'T', '_', 'V', '1', '2', '8', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11259 */ 'S', 'U', 'B', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11271 */ 'A', 'D', 'D', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11283 */ 'A', 'N', 'D', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11295 */ 'R', 'E', 'P', 'L', 'A', 'C', 'E', '_', 'L', 'A', 'N', 'E', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11316 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'L', 'A', 'N', 'E', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11337 */ 'A', 'L', 'L', 'T', 'R', 'U', 'E', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11353 */ 'A', 'N', 'Y', 'T', 'R', 'U', 'E', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11369 */ 'N', 'E', 'G', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11381 */ 'S', 'H', 'L', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11393 */ 'C', 'A', 'L', 'L', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11406 */ 'M', 'U', 'L', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11418 */ 'E', 'Q', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11429 */ 'X', 'O', 'R', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11441 */ 'L', 'O', 'A', 'D', '_', 'E', 'X', 'T', 'E', 'N', 'D', '_', 'S', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11463 */ 'G', 'E', '_', 'S', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11476 */ 'L', 'E', '_', 'S', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11489 */ 'M', 'I', 'N', '_', 'S', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11503 */ 'S', 'H', 'R', '_', 'S', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11517 */ 'G', 'T', '_', 'S', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11530 */ 'L', 'T', '_', 'S', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11543 */ 'M', 'A', 'X', '_', 'S', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11557 */ 'S', 'P', 'L', 'A', 'T', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11571 */ 'B', 'I', 'T', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11589 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11612 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11629 */ 'A', 'N', 'D', 'N', 'O', 'T', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11644 */ 'L', 'O', 'A', 'D', '_', 'E', 'X', 'T', 'E', 'N', 'D', '_', 'U', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11666 */ 'G', 'E', '_', 'U', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11679 */ 'L', 'E', '_', 'U', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11692 */ 'M', 'I', 'N', '_', 'U', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11706 */ 'S', 'H', 'R', '_', 'U', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11720 */ 'G', 'T', '_', 'U', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11733 */ 'L', 'T', '_', 'U', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11746 */ 'M', 'A', 'X', '_', 'U', '_', 'v', '4', 'i', '3', '2', '_', 'S', 0,
  /* 11760 */ 'C', 'A', 'L', 'L', '_', 'i', '3', '2', '_', 'S', 0,
  /* 11771 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'i', '3', '2', '_', 'S', 0,
  /* 11792 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'i', '3', '2', '_', 'S', 0,
  /* 11807 */ 'L', 'O', 'A', 'D', '_', 'S', 'P', 'L', 'A', 'T', '_', 'v', '6', '4', 'x', '2', '_', 'S', 0,
  /* 11826 */ 'F', 'P', '_', 'T', 'O', '_', 'S', 'I', 'N', 'T', '_', 'I', '3', '2', '_', 'F', '6', '4', '_', 'S', 0,
  /* 11847 */ 'F', 'P', '_', 'T', 'O', '_', 'U', 'I', 'N', 'T', '_', 'I', '3', '2', '_', 'F', '6', '4', '_', 'S', 0,
  /* 11868 */ 'F', 'P', '_', 'T', 'O', '_', 'S', 'I', 'N', 'T', '_', 'I', '6', '4', '_', 'F', '6', '4', '_', 'S', 0,
  /* 11889 */ 'F', 'P', '_', 'T', 'O', '_', 'U', 'I', 'N', 'T', '_', 'I', '6', '4', '_', 'F', '6', '4', '_', 'S', 0,
  /* 11910 */ 'S', 'U', 'B', '_', 'F', '6', '4', '_', 'S', 0,
  /* 11920 */ 'T', 'R', 'U', 'N', 'C', '_', 'F', '6', '4', '_', 'S', 0,
  /* 11932 */ 'L', 'O', 'A', 'D', '_', 'F', '6', '4', '_', 'S', 0,
  /* 11943 */ 'A', 'D', 'D', '_', 'F', '6', '4', '_', 'S', 0,
  /* 11953 */ 'L', 'O', 'C', 'A', 'L', '_', 'T', 'E', 'E', '_', 'F', '6', '4', '_', 'S', 0,
  /* 11969 */ 'G', 'E', '_', 'F', '6', '4', '_', 'S', 0,
  /* 11978 */ 'L', 'E', '_', 'F', '6', '4', '_', 'S', 0,
  /* 11987 */ 'N', 'E', '_', 'F', '6', '4', '_', 'S', 0,
  /* 11996 */ 'S', 'T', 'O', 'R', 'E', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12008 */ 'F', '3', '2', '_', 'D', 'E', 'M', 'O', 'T', 'E', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12025 */ 'N', 'E', 'G', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12035 */ 'C', 'E', 'I', 'L', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12046 */ 'M', 'U', 'L', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12056 */ 'C', 'O', 'P', 'Y', 'S', 'I', 'G', 'N', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12071 */ 'M', 'I', 'N', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12081 */ 'D', 'R', 'O', 'P', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12092 */ 'E', 'Q', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12101 */ 'F', 'L', 'O', 'O', 'R', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12113 */ 'A', 'B', 'S', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12123 */ 'I', '3', '2', '_', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12141 */ 'I', '6', '4', '_', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12159 */ 'I', '3', '2', '_', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'S', 'A', 'T', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12181 */ 'I', '6', '4', '_', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'S', 'A', 'T', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12203 */ 'I', '3', '2', '_', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'S', 'A', 'T', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12225 */ 'I', '6', '4', '_', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'S', 'A', 'T', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12247 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12260 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'G', 'E', 'T', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12277 */ 'L', 'O', 'C', 'A', 'L', '_', 'G', 'E', 'T', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12293 */ 'I', '6', '4', '_', 'R', 'E', 'I', 'N', 'T', 'E', 'R', 'P', 'R', 'E', 'T', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12315 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'S', 'E', 'T', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12332 */ 'L', 'O', 'C', 'A', 'L', '_', 'S', 'E', 'T', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12348 */ 'G', 'T', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12357 */ 'L', 'T', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12366 */ 'S', 'Q', 'R', 'T', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12377 */ 'N', 'E', 'A', 'R', 'E', 'S', 'T', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12391 */ 'C', 'O', 'N', 'S', 'T', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12403 */ 'I', '3', '2', '_', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12421 */ 'I', '6', '4', '_', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12439 */ 'D', 'I', 'V', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12449 */ 'M', 'A', 'X', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12459 */ 'C', 'O', 'P', 'Y', '_', 'F', '6', '4', '_', 'S', 0,
  /* 12470 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'T', 'O', 'R', 'E', '3', '2', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12491 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'T', 'O', 'R', 'E', '1', '6', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12512 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'T', 'O', 'R', 'E', '8', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12532 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '3', '2', '_', 'U', '_', 'S', 'U', 'B', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12557 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'S', 'U', 'B', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12582 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'S', 'U', 'B', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12606 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'S', 'U', 'B', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12627 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12645 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '3', '2', '_', 'U', '_', 'A', 'D', 'D', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12670 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'A', 'D', 'D', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12695 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'A', 'D', 'D', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12719 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'A', 'D', 'D', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12740 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '3', '2', '_', 'U', '_', 'A', 'N', 'D', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12765 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'A', 'N', 'D', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12790 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'A', 'N', 'D', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12814 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'A', 'N', 'D', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12835 */ 'L', 'O', 'C', 'A', 'L', '_', 'T', 'E', 'E', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12851 */ 'B', 'R', '_', 'T', 'A', 'B', 'L', 'E', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12866 */ 'N', 'E', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12875 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'T', 'O', 'R', 'E', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12894 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '3', '2', '_', 'U', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12923 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12952 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12980 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13005 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '3', '2', '_', 'U', '_', 'X', 'C', 'H', 'G', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13031 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'X', 'C', 'H', 'G', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13057 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'X', 'C', 'H', 'G', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13082 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13104 */ 'S', 'H', 'L', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13114 */ 'R', 'O', 'T', 'L', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13125 */ 'M', 'U', 'L', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13135 */ 'I', '3', '2', '_', 'W', 'R', 'A', 'P', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13150 */ 'D', 'R', 'O', 'P', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13161 */ 'E', 'Q', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13170 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '3', '2', '_', 'U', '_', 'X', 'O', 'R', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13195 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'X', 'O', 'R', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13220 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'X', 'O', 'R', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13244 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'X', 'O', 'R', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13265 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '3', '2', '_', 'U', '_', 'O', 'R', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13289 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '1', '6', '_', 'U', '_', 'O', 'R', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13313 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '8', '_', 'U', '_', 'O', 'R', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13336 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'M', 'W', '_', 'O', 'R', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13356 */ 'R', 'O', 'T', 'R', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13367 */ 'L', 'O', 'A', 'D', '3', '2', '_', 'S', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13382 */ 'I', '6', '4', '_', 'E', 'X', 'T', 'E', 'N', 'D', '3', '2', '_', 'S', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13403 */ 'L', 'O', 'A', 'D', '1', '6', '_', 'S', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13418 */ 'I', '6', '4', '_', 'E', 'X', 'T', 'E', 'N', 'D', '1', '6', '_', 'S', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13439 */ 'L', 'O', 'A', 'D', '8', '_', 'S', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13453 */ 'I', '6', '4', '_', 'E', 'X', 'T', 'E', 'N', 'D', '8', '_', 'S', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13473 */ 'G', 'E', '_', 'S', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13484 */ 'L', 'E', '_', 'S', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13495 */ 'R', 'E', 'M', '_', 'S', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13507 */ 'S', 'H', 'R', '_', 'S', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13519 */ 'G', 'T', '_', 'S', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13530 */ 'L', 'T', '_', 'S', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13541 */ 'F', '3', '2', '_', 'C', 'O', 'N', 'V', 'E', 'R', 'T', '_', 'S', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13561 */ 'F', '6', '4', '_', 'C', 'O', 'N', 'V', 'E', 'R', 'T', '_', 'S', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13581 */ 'D', 'I', 'V', '_', 'S', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13593 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13606 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'G', 'E', 'T', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13623 */ 'L', 'O', 'C', 'A', 'L', '_', 'G', 'E', 'T', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13639 */ 'F', '6', '4', '_', 'R', 'E', 'I', 'N', 'T', 'E', 'R', 'P', 'R', 'E', 'T', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13661 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'S', 'E', 'T', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13678 */ 'L', 'O', 'C', 'A', 'L', '_', 'S', 'E', 'T', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13694 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'W', 'A', 'I', 'T', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13712 */ 'P', 'O', 'P', 'C', 'N', 'T', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13725 */ 'C', 'O', 'N', 'S', 'T', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13737 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '3', '2', '_', 'U', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13759 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '1', '6', '_', 'U', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13781 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '8', '_', 'U', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13802 */ 'G', 'E', '_', 'U', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13813 */ 'L', 'E', '_', 'U', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13824 */ 'R', 'E', 'M', '_', 'U', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13836 */ 'S', 'H', 'R', '_', 'U', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13848 */ 'G', 'T', '_', 'U', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13859 */ 'L', 'T', '_', 'U', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13870 */ 'F', '3', '2', '_', 'C', 'O', 'N', 'V', 'E', 'R', 'T', '_', 'U', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13890 */ 'F', '6', '4', '_', 'C', 'O', 'N', 'V', 'E', 'R', 'T', '_', 'U', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13910 */ 'D', 'I', 'V', '_', 'U', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13922 */ 'C', 'O', 'P', 'Y', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13933 */ 'C', 'L', 'Z', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13943 */ 'E', 'Q', 'Z', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13953 */ 'C', 'T', 'Z', '_', 'I', '6', '4', '_', 'S', 0,
  /* 13963 */ 'f', 'p', '_', 't', 'o', '_', 's', 'i', 'n', 't', '_', 'v', '2', 'i', '6', '4', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 13988 */ 'f', 'p', '_', 't', 'o', '_', 'u', 'i', 'n', 't', '_', 'v', '2', 'i', '6', '4', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14013 */ 'C', 'O', 'N', 'S', 'T', '_', 'V', '1', '2', '8', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14032 */ 'Q', 'F', 'M', 'A', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14045 */ 'S', 'U', 'B', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14057 */ 'A', 'D', 'D', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14069 */ 'G', 'E', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14080 */ 'L', 'E', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14091 */ 'R', 'E', 'P', 'L', 'A', 'C', 'E', '_', 'L', 'A', 'N', 'E', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14112 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'L', 'A', 'N', 'E', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14133 */ 'N', 'E', 'G', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14145 */ 'C', 'A', 'L', 'L', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14158 */ 'M', 'U', 'L', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14170 */ 'M', 'I', 'N', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14182 */ 'E', 'Q', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14193 */ 'A', 'B', 'S', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14205 */ 'Q', 'F', 'M', 'S', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14218 */ 'S', 'P', 'L', 'A', 'T', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14232 */ 'B', 'I', 'T', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14250 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14273 */ 'G', 'T', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14284 */ 'L', 'T', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14295 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14312 */ 'S', 'Q', 'R', 'T', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14325 */ 'D', 'I', 'V', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14337 */ 'M', 'A', 'X', '_', 'v', '2', 'f', '6', '4', '_', 'S', 0,
  /* 14349 */ 'C', 'A', 'L', 'L', '_', 'f', '6', '4', '_', 'S', 0,
  /* 14360 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'f', '6', '4', '_', 'S', 0,
  /* 14381 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'f', '6', '4', '_', 'S', 0,
  /* 14396 */ 's', 'i', 'n', 't', '_', 't', 'o', '_', 'f', 'p', '_', 'v', '2', 'f', '6', '4', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14421 */ 'u', 'i', 'n', 't', '_', 't', 'o', '_', 'f', 'p', '_', 'v', '2', 'f', '6', '4', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14446 */ 'C', 'O', 'N', 'S', 'T', '_', 'V', '1', '2', '8', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14465 */ 'S', 'U', 'B', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14477 */ 'A', 'D', 'D', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14489 */ 'A', 'N', 'D', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14501 */ 'R', 'E', 'P', 'L', 'A', 'C', 'E', '_', 'L', 'A', 'N', 'E', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14522 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'L', 'A', 'N', 'E', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14543 */ 'A', 'L', 'L', 'T', 'R', 'U', 'E', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14559 */ 'A', 'N', 'Y', 'T', 'R', 'U', 'E', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14575 */ 'N', 'E', 'G', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14587 */ 'S', 'H', 'L', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14599 */ 'C', 'A', 'L', 'L', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14612 */ 'X', 'O', 'R', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14624 */ 'L', 'O', 'A', 'D', '_', 'E', 'X', 'T', 'E', 'N', 'D', '_', 'S', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14646 */ 'S', 'H', 'R', '_', 'S', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14660 */ 'S', 'P', 'L', 'A', 'T', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14674 */ 'B', 'I', 'T', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14692 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14715 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14732 */ 'A', 'N', 'D', 'N', 'O', 'T', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14747 */ 'L', 'O', 'A', 'D', '_', 'E', 'X', 'T', 'E', 'N', 'D', '_', 'U', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14769 */ 'S', 'H', 'R', '_', 'U', '_', 'v', '2', 'i', '6', '4', '_', 'S', 0,
  /* 14783 */ 'C', 'A', 'L', 'L', '_', 'i', '6', '4', '_', 'S', 0,
  /* 14794 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'i', '6', '4', '_', 'S', 0,
  /* 14815 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'i', '6', '4', '_', 'S', 0,
  /* 14830 */ 'L', 'O', 'A', 'D', '_', 'S', 'P', 'L', 'A', 'T', '_', 'v', '3', '2', 'x', '4', '_', 'S', 0,
  /* 14849 */ 'i', 'n', 't', '_', 'w', 'a', 's', 'm', '_', 'w', 'i', 'd', 'e', 'n', '_', 'h', 'i', 'g', 'h', '_', 's', 'i', 'g', 'n', 'e', 'd', '_', 'v', '4', 'i', '3', '2', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 14890 */ 'i', 'n', 't', '_', 'w', 'a', 's', 'm', '_', 'w', 'i', 'd', 'e', 'n', '_', 'l', 'o', 'w', '_', 's', 'i', 'g', 'n', 'e', 'd', '_', 'v', '4', 'i', '3', '2', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 14930 */ 'i', 'n', 't', '_', 'w', 'a', 's', 'm', '_', 'w', 'i', 'd', 'e', 'n', '_', 'h', 'i', 'g', 'h', '_', 'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', '_', 'v', '4', 'i', '3', '2', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 14973 */ 'i', 'n', 't', '_', 'w', 'a', 's', 'm', '_', 'w', 'i', 'd', 'e', 'n', '_', 'l', 'o', 'w', '_', 'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', '_', 'v', '4', 'i', '3', '2', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15015 */ 'C', 'O', 'N', 'S', 'T', '_', 'V', '1', '2', '8', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15034 */ 'S', 'U', 'B', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15046 */ 'A', 'D', 'D', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15058 */ 'A', 'N', 'D', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15070 */ 'R', 'E', 'P', 'L', 'A', 'C', 'E', '_', 'L', 'A', 'N', 'E', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15091 */ 'A', 'L', 'L', 'T', 'R', 'U', 'E', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15107 */ 'A', 'N', 'Y', 'T', 'R', 'U', 'E', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15123 */ 'N', 'E', 'G', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15135 */ 'S', 'H', 'L', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15147 */ 'C', 'A', 'L', 'L', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15160 */ 'M', 'U', 'L', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15172 */ 'E', 'Q', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15183 */ 'X', 'O', 'R', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15195 */ 'L', 'O', 'A', 'D', '_', 'E', 'X', 'T', 'E', 'N', 'D', '_', 'S', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15217 */ 'G', 'E', '_', 'S', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15230 */ 'L', 'E', '_', 'S', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15243 */ 'M', 'I', 'N', '_', 'S', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15257 */ 'S', 'H', 'R', '_', 'S', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15271 */ 'S', 'U', 'B', '_', 'S', 'A', 'T', '_', 'S', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15289 */ 'A', 'D', 'D', '_', 'S', 'A', 'T', '_', 'S', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15307 */ 'G', 'T', '_', 'S', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15320 */ 'L', 'T', '_', 'S', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15333 */ 'N', 'A', 'R', 'R', 'O', 'W', '_', 'S', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15350 */ 'M', 'A', 'X', '_', 'S', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15364 */ 'S', 'P', 'L', 'A', 'T', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15378 */ 'B', 'I', 'T', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15396 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15419 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15436 */ 'A', 'N', 'D', 'N', 'O', 'T', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15451 */ 'L', 'O', 'A', 'D', '_', 'E', 'X', 'T', 'E', 'N', 'D', '_', 'U', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15473 */ 'G', 'E', '_', 'U', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15486 */ 'L', 'E', '_', 'U', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15499 */ 'M', 'I', 'N', '_', 'U', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15513 */ 'A', 'V', 'G', 'R', '_', 'U', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15528 */ 'S', 'H', 'R', '_', 'U', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15542 */ 'S', 'U', 'B', '_', 'S', 'A', 'T', '_', 'U', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15560 */ 'A', 'D', 'D', '_', 'S', 'A', 'T', '_', 'U', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15578 */ 'G', 'T', '_', 'U', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15591 */ 'L', 'T', '_', 'U', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15604 */ 'N', 'A', 'R', 'R', 'O', 'W', '_', 'U', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15621 */ 'M', 'A', 'X', '_', 'U', '_', 'v', '8', 'i', '1', '6', '_', 'S', 0,
  /* 15635 */ 'L', 'O', 'A', 'D', '_', 'S', 'P', 'L', 'A', 'T', '_', 'v', '8', 'x', '1', '6', '_', 'S', 0,
  /* 15654 */ 'L', 'O', 'A', 'D', '_', 'V', '1', '2', '8', '_', 'S', 0,
  /* 15666 */ 'L', 'O', 'C', 'A', 'L', '_', 'T', 'E', 'E', '_', 'V', '1', '2', '8', '_', 'S', 0,
  /* 15683 */ 'S', 'T', 'O', 'R', 'E', '_', 'V', '1', '2', '8', '_', 'S', 0,
  /* 15696 */ 'D', 'R', 'O', 'P', '_', 'V', '1', '2', '8', '_', 'S', 0,
  /* 15708 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'G', 'E', 'T', '_', 'V', '1', '2', '8', '_', 'S', 0,
  /* 15726 */ 'L', 'O', 'C', 'A', 'L', '_', 'G', 'E', 'T', '_', 'V', '1', '2', '8', '_', 'S', 0,
  /* 15743 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'S', 'E', 'T', '_', 'V', '1', '2', '8', '_', 'S', 0,
  /* 15761 */ 'L', 'O', 'C', 'A', 'L', '_', 'S', 'E', 'T', '_', 'V', '1', '2', '8', '_', 'S', 0,
  /* 15778 */ 'C', 'O', 'P', 'Y', '_', 'V', '1', '2', '8', '_', 'S', 0,
  /* 15790 */ 'i', 'n', 't', '_', 'w', 'a', 's', 'm', '_', 'w', 'i', 'd', 'e', 'n', '_', 'h', 'i', 'g', 'h', '_', 's', 'i', 'g', 'n', 'e', 'd', '_', 'v', '8', 'i', '1', '6', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 15831 */ 'i', 'n', 't', '_', 'w', 'a', 's', 'm', '_', 'w', 'i', 'd', 'e', 'n', '_', 'l', 'o', 'w', '_', 's', 'i', 'g', 'n', 'e', 'd', '_', 'v', '8', 'i', '1', '6', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 15871 */ 'i', 'n', 't', '_', 'w', 'a', 's', 'm', '_', 'w', 'i', 'd', 'e', 'n', '_', 'h', 'i', 'g', 'h', '_', 'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', '_', 'v', '8', 'i', '1', '6', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 15914 */ 'i', 'n', 't', '_', 'w', 'a', 's', 'm', '_', 'w', 'i', 'd', 'e', 'n', '_', 'l', 'o', 'w', '_', 'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', '_', 'v', '8', 'i', '1', '6', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 15956 */ 'C', 'O', 'N', 'S', 'T', '_', 'V', '1', '2', '8', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 15975 */ 'S', 'U', 'B', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 15987 */ 'A', 'D', 'D', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 15999 */ 'A', 'N', 'D', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16011 */ 'R', 'E', 'P', 'L', 'A', 'C', 'E', '_', 'L', 'A', 'N', 'E', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16032 */ 'A', 'L', 'L', 'T', 'R', 'U', 'E', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16048 */ 'A', 'N', 'Y', 'T', 'R', 'U', 'E', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16064 */ 'N', 'E', 'G', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16076 */ 'S', 'H', 'L', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16088 */ 'C', 'A', 'L', 'L', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16101 */ 'M', 'U', 'L', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16113 */ 'E', 'Q', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16124 */ 'X', 'O', 'R', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16136 */ 'G', 'E', '_', 'S', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16149 */ 'L', 'E', '_', 'S', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16162 */ 'M', 'I', 'N', '_', 'S', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16176 */ 'S', 'H', 'R', '_', 'S', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16190 */ 'S', 'U', 'B', '_', 'S', 'A', 'T', '_', 'S', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16208 */ 'A', 'D', 'D', '_', 'S', 'A', 'T', '_', 'S', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16226 */ 'G', 'T', '_', 'S', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16239 */ 'L', 'T', '_', 'S', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16252 */ 'N', 'A', 'R', 'R', 'O', 'W', '_', 'S', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16269 */ 'M', 'A', 'X', '_', 'S', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16283 */ 'S', 'P', 'L', 'A', 'T', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16297 */ 'B', 'I', 'T', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16315 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16338 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16355 */ 'A', 'N', 'D', 'N', 'O', 'T', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16370 */ 'G', 'E', '_', 'U', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16383 */ 'L', 'E', '_', 'U', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16396 */ 'M', 'I', 'N', '_', 'U', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16410 */ 'A', 'V', 'G', 'R', '_', 'U', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16425 */ 'S', 'H', 'R', '_', 'U', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16439 */ 'S', 'U', 'B', '_', 'S', 'A', 'T', '_', 'U', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16457 */ 'A', 'D', 'D', '_', 'S', 'A', 'T', '_', 'U', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16475 */ 'G', 'T', '_', 'U', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16488 */ 'L', 'T', '_', 'U', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16501 */ 'N', 'A', 'R', 'R', 'O', 'W', '_', 'U', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16518 */ 'M', 'A', 'X', '_', 'U', '_', 'v', '1', '6', 'i', '8', '_', 'S', 0,
  /* 16532 */ 'L', 'O', 'A', 'D', '_', 'S', 'P', 'L', 'A', 'T', '_', 'v', '1', '6', 'x', '8', '_', 'S', 0,
  /* 16551 */ 'C', 'A', 'L', 'L', '_', 'V', 'O', 'I', 'D', '_', 'S', 0,
  /* 16563 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'V', 'O', 'I', 'D', '_', 'S', 0,
  /* 16585 */ 'E', 'N', 'D', '_', 'S', 0,
  /* 16591 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'F', 'E', 'N', 'C', 'E', '_', 'S', 0,
  /* 16606 */ 'C', 'O', 'M', 'P', 'I', 'L', 'E', 'R', '_', 'F', 'E', 'N', 'C', 'E', '_', 'S', 0,
  /* 16623 */ 'U', 'N', 'R', 'E', 'A', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'S', 0,
  /* 16637 */ 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'S', 0,
  /* 16647 */ 'S', 'W', 'I', 'Z', 'Z', 'L', 'E', '_', 'S', 0,
  /* 16657 */ 'E', 'L', 'S', 'E', '_', 'S', 0,
  /* 16664 */ 'L', 'O', 'C', 'A', 'L', '_', 'T', 'E', 'E', '_', 'E', 'X', 'N', 'R', 'E', 'F', '_', 'S', 0,
  /* 16683 */ 'D', 'R', 'O', 'P', '_', 'E', 'X', 'N', 'R', 'E', 'F', '_', 'S', 0,
  /* 16697 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'E', 'X', 'N', 'R', 'E', 'F', '_', 'S', 0,
  /* 16713 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'G', 'E', 'T', '_', 'E', 'X', 'N', 'R', 'E', 'F', '_', 'S', 0,
  /* 16733 */ 'L', 'O', 'C', 'A', 'L', '_', 'G', 'E', 'T', '_', 'E', 'X', 'N', 'R', 'E', 'F', '_', 'S', 0,
  /* 16752 */ 'G', 'L', 'O', 'B', 'A', 'L', '_', 'S', 'E', 'T', '_', 'E', 'X', 'N', 'R', 'E', 'F', '_', 'S', 0,
  /* 16772 */ 'L', 'O', 'C', 'A', 'L', '_', 'S', 'E', 'T', '_', 'E', 'X', 'N', 'R', 'E', 'F', '_', 'S', 0,
  /* 16791 */ 'C', 'O', 'P', 'Y', '_', 'E', 'X', 'N', 'R', 'E', 'F', '_', 'S', 0,
  /* 16805 */ 'E', 'N', 'D', '_', 'I', 'F', '_', 'S', 0,
  /* 16814 */ 'B', 'R', '_', 'I', 'F', '_', 'S', 0,
  /* 16822 */ 'R', 'E', 'T', 'H', 'R', 'O', 'W', '_', 'I', 'N', '_', 'C', 'A', 'T', 'C', 'H', '_', 'S', 0,
  /* 16841 */ 'E', 'N', 'D', '_', 'B', 'L', 'O', 'C', 'K', '_', 'S', 0,
  /* 16853 */ 'R', 'E', 'T', '_', 'C', 'A', 'L', 'L', '_', 'S', 0,
  /* 16864 */ 'M', 'E', 'M', 'O', 'R', 'Y', '_', 'F', 'I', 'L', 'L', '_', 'S', 0,
  /* 16878 */ 'E', 'N', 'D', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'S', 0,
  /* 16893 */ 'F', 'A', 'L', 'L', 'T', 'H', 'R', 'O', 'U', 'G', 'H', '_', 'R', 'E', 'T', 'U', 'R', 'N', '_', 'S', 0,
  /* 16914 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', '_', 'S', 0,
  /* 16933 */ 'B', 'R', '_', 'O', 'N', '_', 'E', 'X', 'N', '_', 'S', 0,
  /* 16945 */ 'N', 'O', 'P', '_', 'S', 0,
  /* 16951 */ 'E', 'N', 'D', '_', 'L', 'O', 'O', 'P', '_', 'S', 0,
  /* 16962 */ 'D', 'A', 'T', 'A', '_', 'D', 'R', 'O', 'P', '_', 'S', 0,
  /* 16974 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', '_', 'S', 0,
  /* 16991 */ 'B', 'R', '_', 'S', 0,
  /* 16996 */ 'B', 'R', '_', 'U', 'N', 'L', 'E', 'S', 'S', '_', 'S', 0,
  /* 17008 */ 'P', 'R', 'E', 'T', '_', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'S', 0,
  /* 17029 */ 'C', 'A', 'T', 'C', 'H', 'R', 'E', 'T', '_', 'S', 0,
  /* 17040 */ 'C', 'L', 'E', 'A', 'N', 'U', 'P', 'R', 'E', 'T', '_', 'S', 0,
  /* 17053 */ 'M', 'E', 'M', 'O', 'R', 'Y', '_', 'I', 'N', 'I', 'T', '_', 'S', 0,
  /* 17067 */ 'D', 'O', 'T', '_', 'S', 0,
  /* 17073 */ 'R', 'E', 'T', 'H', 'R', 'O', 'W', '_', 'S', 0,
  /* 17083 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'N', 'O', 'T', 'I', 'F', 'Y', '_', 'S', 0,
  /* 17099 */ 'M', 'E', 'M', 'O', 'R', 'Y', '_', 'C', 'O', 'P', 'Y', '_', 'S', 0,
  /* 17113 */ 'E', 'N', 'D', '_', 'T', 'R', 'Y', '_', 'S', 0,
  /* 17123 */ 'C', 'A', 'L', 'L', '_', 'e', 'x', 'n', 'r', 'e', 'f', '_', 'S', 0,
  /* 17137 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'e', 'x', 'n', 'r', 'e', 'f', '_', 'S', 0,
  /* 17161 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'e', 'x', 'n', 'r', 'e', 'f', '_', 'S', 0,
  /* 17179 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'L', 'A', 'N', 'E', '_', 'v', '8', 'i', '1', '6', '_', 's', '_', 'S', 0,
  /* 17202 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'L', 'A', 'N', 'E', '_', 'v', '1', '6', 'i', '8', '_', 's', '_', 'S', 0,
  /* 17225 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'L', 'A', 'N', 'E', '_', 'v', '8', 'i', '1', '6', '_', 'u', '_', 'S', 0,
  /* 17248 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'L', 'A', 'N', 'E', '_', 'v', '1', '6', 'i', '8', '_', 'u', '_', 'S', 0,
  /* 17271 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 17281 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 17290 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 17303 */ 'P', 'R', 'E', 'T', '_', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 17322 */ 'C', 'A', 'T', 'C', 'H', 'R', 'E', 'T', 0,
  /* 17331 */ 'C', 'L', 'E', 'A', 'N', 'U', 'P', 'R', 'E', 'T', 0,
  /* 17342 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 17356 */ 'M', 'E', 'M', 'O', 'R', 'Y', '_', 'I', 'N', 'I', 'T', 0,
  /* 17368 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 17392 */ 'G', '_', 'B', 'R', 'J', 'T', 0,
  /* 17399 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 17420 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 17440 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 17452 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 17463 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 17474 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 17485 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 17496 */ 'G', '_', 'F', 'R', 'I', 'N', 'T', 0,
  /* 17504 */ 'G', '_', 'F', 'N', 'E', 'A', 'R', 'B', 'Y', 'I', 'N', 'T', 0,
  /* 17517 */ 'D', 'O', 'T', 0,
  /* 17521 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 17531 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 17546 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 17555 */ 'G', '_', 'F', 'S', 'Q', 'R', 'T', 0,
  /* 17563 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 17573 */ 'G', '_', 'A', 'D', 'D', 'R', 'S', 'P', 'A', 'C', 'E', '_', 'C', 'A', 'S', 'T', 0,
  /* 17590 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 17598 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 17605 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 17614 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 17621 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 17628 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 17635 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 17642 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 17649 */ 'R', 'E', 'T', 'H', 'R', 'O', 'W', 0,
  /* 17657 */ 'G', '_', 'S', 'M', 'A', 'X', 0,
  /* 17664 */ 'G', '_', 'U', 'M', 'A', 'X', 0,
  /* 17671 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 17688 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'A', 'X', 0,
  /* 17704 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 17718 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'N', 'O', 'T', 'I', 'F', 'Y', 0,
  /* 17732 */ 'M', 'E', 'M', 'O', 'R', 'Y', '_', 'C', 'O', 'P', 'Y', 0,
  /* 17744 */ 'E', 'N', 'D', '_', 'T', 'R', 'Y', 0,
  /* 17752 */ 'G', '_', 'C', 'T', 'L', 'Z', 0,
  /* 17759 */ 'G', '_', 'C', 'T', 'T', 'Z', 0,
  /* 17766 */ 'C', 'A', 'L', 'L', '_', 'e', 'x', 'n', 'r', 'e', 'f', 0,
  /* 17778 */ 'P', 'C', 'A', 'L', 'L', '_', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', '_', 'e', 'x', 'n', 'r', 'e', 'f', 0,
  /* 17800 */ 'A', 'R', 'G', 'U', 'M', 'E', 'N', 'T', '_', 'e', 'x', 'n', 'r', 'e', 'f', 0,
  /* 17816 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'L', 'A', 'N', 'E', '_', 'v', '8', 'i', '1', '6', '_', 's', 0,
  /* 17837 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'L', 'A', 'N', 'E', '_', 'v', '1', '6', 'i', '8', '_', 's', 0,
  /* 17858 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'L', 'A', 'N', 'E', '_', 'v', '8', 'i', '1', '6', '_', 'u', 0,
  /* 17879 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'L', 'A', 'N', 'E', '_', 'v', '1', '6', 'i', '8', '_', 'u', 0,
};

extern const unsigned WebAssemblyInstrNameIndices[] = {
    7834U, 8096U, 8469U, 8227U, 7896U, 7877U, 7905U, 8057U, 
    7694U, 7709U, 7536U, 7736U, 8710U, 7457U, 7886U, 7295U, 
    17739U, 7379U, 17531U, 7186U, 8337U, 8033U, 17474U, 7226U, 
    17463U, 7402U, 8430U, 8417U, 8495U, 17342U, 17368U, 7956U, 
    8012U, 7985U, 7922U, 7085U, 6864U, 8069U, 17628U, 17635U, 
    8082U, 8089U, 7164U, 8616U, 8594U, 7534U, 7832U, 17704U, 
    7467U, 17271U, 8654U, 17546U, 8671U, 8562U, 6934U, 8693U, 
    17485U, 8636U, 17563U, 6908U, 7208U, 8520U, 7054U, 6998U, 
    7028U, 7039U, 6979U, 7009U, 7431U, 7415U, 8727U, 7750U, 
    7767U, 7101U, 6870U, 7170U, 7147U, 8621U, 8600U, 17688U, 
    8191U, 17671U, 8174U, 7068U, 6847U, 7272U, 7199U, 17290U, 
    6886U, 8767U, 17605U, 6926U, 17452U, 17440U, 17521U, 7791U, 
    17598U, 7723U, 17614U, 7942U, 8546U, 8539U, 8379U, 8372U, 
    17281U, 8313U, 7316U, 8297U, 7251U, 8305U, 7308U, 8289U, 
    7243U, 8329U, 8321U, 7824U, 7816U, 7061U, 6840U, 8062U, 
    6834U, 6972U, 17621U, 8075U, 17642U, 8457U, 2650U, 7784U, 
    2642U, 0U, 7687U, 17590U, 6898U, 7838U, 7847U, 8354U, 
    8363U, 8647U, 8148U, 7482U, 8128U, 8138U, 7324U, 7339U, 
    8106U, 8117U, 7091U, 7866U, 8160U, 17657U, 8167U, 17664U, 
    8464U, 17392U, 17420U, 17399U, 8577U, 17759U, 7516U, 17752U, 
    7498U, 8399U, 8346U, 7444U, 7948U, 8686U, 8207U, 17555U, 
    8553U, 17496U, 17504U, 17573U, 8482U, 7366U, 6955U, 17322U, 
    17029U, 17331U, 17040U, 7280U, 16606U, 7799U, 16822U, 253U, 
    9082U, 2918U, 12113U, 4756U, 14193U, 1930U, 10987U, 112U, 
    8911U, 2778U, 11943U, 696U, 9583U, 3403U, 12660U, 6535U, 
    16208U, 5724U, 15289U, 6752U, 16457U, 5961U, 15560U, 6346U, 
    15987U, 4640U, 14057U, 5004U, 14477U, 1814U, 10851U, 2178U, 
    11271U, 5515U, 15046U, 8262U, 16914U, 8442U, 16974U, 6385U, 
    16032U, 5062U, 14543U, 2236U, 11337U, 5554U, 15091U, 6664U, 
    16355U, 5227U, 14732U, 2488U, 11629U, 5853U, 15436U, 760U, 
    9653U, 3490U, 12755U, 6356U, 15999U, 5014U, 14489U, 2188U, 
    11283U, 5525U, 15058U, 6399U, 16048U, 5076U, 14559U, 2250U, 
    11353U, 5568U, 15107U, 17800U, 17161U, 2092U, 11175U, 4918U, 
    14381U, 2629U, 11792U, 5300U, 14815U, 6649U, 16338U, 4844U, 
    14295U, 5212U, 14715U, 2018U, 11089U, 2473U, 11612U, 5838U, 
    15419U, 7259U, 16591U, 1523U, 10516U, 4382U, 13759U, 4362U, 
    13737U, 1543U, 10538U, 4402U, 13781U, 665U, 9550U, 3372U, 
    12627U, 17718U, 17083U, 681U, 9568U, 3411U, 12670U, 745U, 
    9638U, 3498U, 12765U, 876U, 9785U, 3640U, 12923U, 1146U, 
    10085U, 3970U, 13289U, 601U, 9480U, 3308U, 12557U, 952U, 
    9867U, 3740U, 13031U, 1082U, 10015U, 3884U, 13195U, 3388U, 
    12645U, 3475U, 12740U, 3613U, 12894U, 3948U, 13265U, 3285U, 
    12532U, 3716U, 13005U, 3861U, 13170U, 704U, 9593U, 3434U, 
    12695U, 768U, 9663U, 3521U, 12790U, 903U, 9814U, 3667U, 
    12952U, 1168U, 10109U, 3992U, 13313U, 624U, 9505U, 3331U, 
    12582U, 976U, 9893U, 3764U, 13057U, 1105U, 10040U, 3907U, 
    13220U, 726U, 9617U, 3456U, 12719U, 790U, 9687U, 3543U, 
    12814U, 929U, 9842U, 3693U, 12980U, 1189U, 10132U, 4013U, 
    13336U, 646U, 9529U, 3353U, 12606U, 999U, 9918U, 3787U, 
    13082U, 1127U, 10064U, 3929U, 13244U, 564U, 9439U, 3248U, 
    12491U, 3229U, 12470U, 583U, 9460U, 3267U, 12512U, 843U, 
    9748U, 3596U, 12875U, 1486U, 10473U, 4325U, 13694U, 6711U, 
    16410U, 5920U, 15513U, 6612U, 16297U, 4789U, 14232U, 5175U, 
    14674U, 1963U, 11026U, 2436U, 11571U, 5801U, 15378U, 7860U, 
    16845U, 8466U, 7681U, 16814U, 8279U, 16933U, 16991U, 823U, 
    9724U, 3576U, 12851U, 8757U, 16996U, 7128U, 16564U, 17779U, 
    17138U, 2074U, 11155U, 4900U, 14361U, 2611U, 11772U, 5282U, 
    14795U, 6629U, 16316U, 4806U, 14251U, 5192U, 14693U, 1980U, 
    11045U, 2453U, 11590U, 5818U, 15397U, 7117U, 16551U, 17766U, 
    17123U, 2064U, 11143U, 4890U, 14349U, 2601U, 11760U, 5272U, 
    14783U, 6433U, 16088U, 4716U, 14145U, 5110U, 14599U, 1890U, 
    10939U, 2284U, 11393U, 5602U, 15147U, 7810U, 16833U, 189U, 
    9004U, 2854U, 12035U, 1706U, 10727U, 4532U, 13933U, 497U, 
    9360U, 3162U, 12391U, 1513U, 10504U, 4352U, 13725U, 6319U, 
    15956U, 4602U, 14013U, 4977U, 14446U, 1776U, 10807U, 2151U, 
    11240U, 5488U, 15015U, 206U, 9025U, 2871U, 12056U, 7662U, 
    16791U, 555U, 9428U, 3220U, 12459U, 1697U, 10716U, 4523U, 
    13922U, 6151U, 15778U, 1722U, 10747U, 4548U, 13953U, 8407U, 
    16962U, 539U, 9408U, 3204U, 12439U, 1387U, 10360U, 4226U, 
    13581U, 1671U, 10686U, 4513U, 13910U, 4870U, 14325U, 2044U, 
    11119U, 17517U, 17067U, 7566U, 16683U, 227U, 9050U, 2892U, 
    12081U, 1066U, 9995U, 3845U, 13150U, 6079U, 15696U, 7439U, 
    16657U, 7195U, 7856U, 16841U, 8214U, 16878U, 7674U, 16805U, 
    8390U, 16951U, 16585U, 17744U, 17113U, 1714U, 10737U, 4540U, 
    13943U, 236U, 9061U, 2901U, 12092U, 1075U, 10006U, 3854U, 
    13161U, 6454U, 16113U, 4747U, 14182U, 1921U, 10976U, 2305U, 
    11418U, 5623U, 15172U, 1044U, 9971U, 17837U, 17202U, 17879U, 
    17248U, 4687U, 14112U, 5043U, 14522U, 1861U, 10906U, 2217U, 
    11316U, 17816U, 17179U, 17858U, 17225U, 1351U, 10320U, 4190U, 
    13541U, 1635U, 10646U, 4477U, 13870U, 2831U, 12008U, 1437U, 
    10418U, 1369U, 10340U, 4208U, 13561U, 1653U, 10666U, 4495U, 
    13890U, 165U, 8976U, 4276U, 13639U, 8243U, 16893U, 243U, 
    9070U, 2908U, 12101U, 9U, 8794U, 2675U, 11826U, 47U, 
    8836U, 2713U, 11868U, 28U, 8815U, 2694U, 11847U, 66U, 
    8857U, 2732U, 11889U, 134U, 8937U, 2800U, 11969U, 1295U, 
    10252U, 4134U, 13473U, 6473U, 16136U, 2344U, 11463U, 5662U, 
    15217U, 1579U, 10578U, 4421U, 13802U, 6677U, 16370U, 2521U, 
    11666U, 5886U, 15473U, 4650U, 14069U, 1824U, 10863U, 7592U, 
    16713U, 384U, 9229U, 3049U, 12260U, 1408U, 10385U, 4247U, 
    13606U, 6089U, 15708U, 7627U, 16752U, 433U, 9284U, 3098U, 
    12315U, 1457U, 10440U, 4296U, 13661U, 6120U, 15743U, 462U, 
    9317U, 3127U, 12348U, 1333U, 10298U, 4172U, 13519U, 6551U, 
    16226U, 2390U, 11517U, 5740U, 15307U, 1617U, 10624U, 4459U, 
    13848U, 6768U, 16475U, 2567U, 11720U, 5977U, 15578U, 4826U, 
    14273U, 2000U, 11067U, 1229U, 10178U, 1260U, 10213U, 413U, 
    9262U, 261U, 9092U, 2926U, 12123U, 293U, 9128U, 2958U, 
    12159U, 507U, 9372U, 3172U, 12403U, 333U, 9172U, 2998U, 
    12203U, 3832U, 13135U, 4085U, 13418U, 4053U, 13382U, 4116U, 
    13453U, 1278U, 10233U, 1562U, 10559U, 3078U, 12293U, 277U, 
    9110U, 2942U, 12141U, 313U, 9150U, 2978U, 12181U, 523U, 
    9390U, 3188U, 12421U, 353U, 9194U, 3018U, 12225U, 7678U, 
    16809U, 141U, 8946U, 2807U, 11978U, 1304U, 10263U, 4143U, 
    13484U, 6484U, 16149U, 2355U, 11476U, 5673U, 15230U, 1588U, 
    10589U, 4430U, 13813U, 6688U, 16383U, 2532U, 11679U, 5897U, 
    15486U, 4659U, 14080U, 1833U, 10874U, 1216U, 10163U, 4072U, 
    13403U, 1530U, 10523U, 4389U, 13766U, 4040U, 13367U, 4369U, 
    13744U, 1248U, 10199U, 4104U, 13439U, 1550U, 10545U, 4409U, 
    13788U, 5131U, 14624U, 2324U, 11441U, 5642U, 15195U, 5240U, 
    14747U, 2501U, 11644U, 5866U, 15451U, 103U, 8900U, 2769U, 
    11932U, 672U, 9557U, 3379U, 12634U, 6817U, 16532U, 5313U, 
    14830U, 2658U, 11807U, 6026U, 15635U, 6043U, 15654U, 7610U, 
    16733U, 399U, 9246U, 3064U, 12277U, 1423U, 10402U, 4262U, 
    13623U, 6105U, 15726U, 7645U, 16772U, 448U, 9301U, 3113U, 
    12332U, 1472U, 10457U, 4311U, 13678U, 6136U, 15761U, 7549U, 
    16664U, 120U, 8921U, 2786U, 11953U, 809U, 9708U, 3562U, 
    12835U, 6053U, 15666U, 8394U, 16955U, 469U, 9326U, 3134U, 
    12357U, 1342U, 10309U, 4181U, 13530U, 6562U, 16239U, 2401U, 
    11530U, 5751U, 15320U, 1626U, 10635U, 4468U, 13859U, 6779U, 
    16488U, 2578U, 11733U, 5988U, 15591U, 4835U, 14284U, 2009U, 
    11078U, 547U, 9418U, 3212U, 12449U, 6588U, 16269U, 2412U, 
    11543U, 5777U, 15350U, 6805U, 16518U, 2589U, 11746U, 6014U, 
    15621U, 4880U, 14337U, 2054U, 11131U, 17732U, 17099U, 8045U, 
    16864U, 1681U, 10698U, 17356U, 17053U, 860U, 9767U, 219U, 
    9040U, 2884U, 12071U, 6495U, 16162U, 2366U, 11489U, 5684U, 
    15243U, 6699U, 16396U, 2543U, 11692U, 5908U, 15499U, 4737U, 
    14170U, 1911U, 10964U, 198U, 9015U, 2863U, 12046U, 1036U, 
    9961U, 3824U, 13125U, 6444U, 16101U, 4727U, 14158U, 1901U, 
    10952U, 2295U, 11406U, 5613U, 15160U, 6573U, 16252U, 5762U, 
    15333U, 6790U, 16501U, 5999U, 15604U, 485U, 9346U, 3150U, 
    12377U, 181U, 8994U, 2846U, 12025U, 6413U, 16064U, 4706U, 
    14133U, 5090U, 14575U, 1880U, 10927U, 2264U, 11369U, 5582U, 
    15123U, 148U, 8955U, 2814U, 11987U, 836U, 9739U, 3589U, 
    12866U, 6376U, 16021U, 4678U, 14101U, 1852U, 10895U, 2208U, 
    11305U, 5545U, 15080U, 8386U, 16945U, 6667U, 16358U, 5230U, 
    14735U, 2491U, 11632U, 5856U, 15439U, 1098U, 10031U, 3877U, 
    13186U, 6464U, 16125U, 5122U, 14613U, 2315U, 11430U, 5633U, 
    15184U, 7127U, 16563U, 17778U, 17137U, 2073U, 11154U, 4899U, 
    14360U, 2610U, 11771U, 5281U, 14794U, 6628U, 16315U, 4805U, 
    14250U, 5191U, 14692U, 1979U, 11044U, 2452U, 11589U, 5817U, 
    15396U, 1502U, 10491U, 4341U, 13712U, 17303U, 17008U, 4619U, 
    14032U, 1793U, 10826U, 4766U, 14205U, 1940U, 10999U, 1313U, 
    10274U, 4152U, 13495U, 1597U, 10600U, 4439U, 13824U, 6366U, 
    16011U, 4668U, 14091U, 5024U, 14501U, 1842U, 10885U, 2198U, 
    11295U, 5535U, 15070U, 17649U, 17073U, 8255U, 16905U, 7976U, 
    17304U, 17009U, 16853U, 1027U, 9950U, 3815U, 13114U, 1207U, 
    10152U, 4031U, 13356U, 7578U, 16697U, 373U, 9216U, 3038U, 
    12247U, 1397U, 10372U, 4236U, 13593U, 1019U, 9940U, 3807U, 
    13104U, 6423U, 16076U, 5100U, 14587U, 2274U, 11381U, 5592U, 
    15135U, 1323U, 10286U, 4162U, 13507U, 6507U, 16176U, 5151U, 
    14646U, 2378U, 11503U, 5696U, 15257U, 1607U, 10612U, 4449U, 
    13836U, 6724U, 16425U, 5260U, 14769U, 2555U, 11706U, 5933U, 
    15528U, 7386U, 16637U, 6600U, 16283U, 4777U, 14218U, 5163U, 
    14660U, 1951U, 11012U, 2424U, 11557U, 5789U, 15364U, 476U, 
    9335U, 3141U, 12366U, 4859U, 14312U, 2033U, 11106U, 571U, 
    9446U, 3255U, 12498U, 3236U, 12477U, 590U, 9467U, 3274U, 
    12519U, 155U, 8964U, 2821U, 11996U, 850U, 9755U, 3603U, 
    12882U, 6068U, 15683U, 85U, 8878U, 2751U, 11910U, 616U, 
    9495U, 3300U, 12547U, 6519U, 16190U, 5708U, 15271U, 6736U, 
    16439U, 5945U, 15542U, 6336U, 15975U, 4630U, 14045U, 4994U, 
    14465U, 1804U, 10839U, 2168U, 11259U, 5505U, 15034U, 7394U, 
    16647U, 7555U, 16670U, 126U, 8927U, 2792U, 11959U, 815U, 
    9714U, 3568U, 12841U, 6059U, 15672U, 17651U, 17075U, 93U, 
    8888U, 2759U, 11920U, 17748U, 17117U, 7354U, 16623U, 1097U, 
    10030U, 3876U, 13185U, 6463U, 16124U, 5121U, 14612U, 2314U, 
    11429U, 5632U, 15183U, 4556U, 13963U, 1730U, 10757U, 4579U, 
    13988U, 1753U, 10782U, 5330U, 14849U, 6161U, 15790U, 5407U, 
    14930U, 6238U, 15871U, 5369U, 14890U, 6200U, 15831U, 5448U, 
    14973U, 6279U, 15914U, 4931U, 14396U, 2105U, 11190U, 4954U, 
    14421U, 2128U, 11215U, 
};

static inline void InitWebAssemblyMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(WebAssemblyInsts, WebAssemblyInstrNameIndices, WebAssemblyInstrNameData, 1347);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct WebAssemblyGenInstrInfo : public TargetInstrInfo {
  explicit WebAssemblyGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~WebAssemblyGenInstrInfo() override = default;

};
} // end namespace llvm
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_HELPER_DECLS
#undef GET_INSTRINFO_HELPER_DECLS


#endif // GET_INSTRINFO_HELPER_DECLS

#ifdef GET_INSTRINFO_HELPERS
#undef GET_INSTRINFO_HELPERS

#endif // GET_INSTRINFO_HELPERS

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc WebAssemblyInsts[];
extern const unsigned WebAssemblyInstrNameIndices[];
extern const char WebAssemblyInstrNameData[];
WebAssemblyGenInstrInfo::WebAssemblyGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(WebAssemblyInsts, WebAssemblyInstrNameIndices, WebAssemblyInstrNameData, 1347);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace WebAssembly {
namespace OpName {
enum {
  addr = 3,
  count = 4,
  dst = 0,
  exp = 6,
  new_ = 7,
  off = 2,
  p2align = 1,
  timeout = 8,
  val = 5,
  vec = 9,
OPERAND_LAST
};
} // end namespace OpName
} // end namespace WebAssembly
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace WebAssembly {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  static const int16_t OperandMap [][10] = {
{0, 1, 2, 3, -1, -1, -1, -1, -1, -1, },
{0, 1, 2, 3, 4, -1, -1, -1, -1, -1, },
{0, 1, 2, 3, -1, 4, -1, -1, -1, -1, },
{0, 1, 2, 3, -1, -1, 4, 5, -1, -1, },
{0, 1, 2, 3, -1, -1, 4, -1, 5, -1, },
{-1, 0, 1, -1, -1, -1, -1, -1, -1, -1, },
{-1, 0, 1, 2, -1, 3, -1, -1, -1, -1, },
{-1, 0, 1, 2, -1, -1, -1, -1, -1, 3, },
};
  switch(Opcode) {
  case WebAssembly::ATOMIC_LOAD16_U_I32:
  case WebAssembly::ATOMIC_LOAD16_U_I64:
  case WebAssembly::ATOMIC_LOAD32_U_I64:
  case WebAssembly::ATOMIC_LOAD8_U_I32:
  case WebAssembly::ATOMIC_LOAD8_U_I64:
  case WebAssembly::ATOMIC_LOAD_I32:
  case WebAssembly::ATOMIC_LOAD_I64:
  case WebAssembly::LOAD16_S_I32:
  case WebAssembly::LOAD16_S_I64:
  case WebAssembly::LOAD16_U_I32:
  case WebAssembly::LOAD16_U_I64:
  case WebAssembly::LOAD32_S_I64:
  case WebAssembly::LOAD32_U_I64:
  case WebAssembly::LOAD8_S_I32:
  case WebAssembly::LOAD8_S_I64:
  case WebAssembly::LOAD8_U_I32:
  case WebAssembly::LOAD8_U_I64:
  case WebAssembly::LOAD_EXTEND_S_v2i64:
  case WebAssembly::LOAD_EXTEND_S_v4i32:
  case WebAssembly::LOAD_EXTEND_S_v8i16:
  case WebAssembly::LOAD_EXTEND_U_v2i64:
  case WebAssembly::LOAD_EXTEND_U_v4i32:
  case WebAssembly::LOAD_EXTEND_U_v8i16:
  case WebAssembly::LOAD_F32:
  case WebAssembly::LOAD_F64:
  case WebAssembly::LOAD_I32:
  case WebAssembly::LOAD_I64:
  case WebAssembly::LOAD_SPLAT_v16x8:
  case WebAssembly::LOAD_SPLAT_v32x4:
  case WebAssembly::LOAD_SPLAT_v64x2:
  case WebAssembly::LOAD_SPLAT_v8x16:
  case WebAssembly::LOAD_V128:
    return OperandMap[0][NamedIdx];
  case WebAssembly::ATOMIC_NOTIFY:
    return OperandMap[1][NamedIdx];
  case WebAssembly::ATOMIC_RMW16_U_ADD_I32:
  case WebAssembly::ATOMIC_RMW16_U_ADD_I64:
  case WebAssembly::ATOMIC_RMW16_U_AND_I32:
  case WebAssembly::ATOMIC_RMW16_U_AND_I64:
  case WebAssembly::ATOMIC_RMW16_U_OR_I32:
  case WebAssembly::ATOMIC_RMW16_U_OR_I64:
  case WebAssembly::ATOMIC_RMW16_U_SUB_I32:
  case WebAssembly::ATOMIC_RMW16_U_SUB_I64:
  case WebAssembly::ATOMIC_RMW16_U_XCHG_I32:
  case WebAssembly::ATOMIC_RMW16_U_XCHG_I64:
  case WebAssembly::ATOMIC_RMW16_U_XOR_I32:
  case WebAssembly::ATOMIC_RMW16_U_XOR_I64:
  case WebAssembly::ATOMIC_RMW32_U_ADD_I64:
  case WebAssembly::ATOMIC_RMW32_U_AND_I64:
  case WebAssembly::ATOMIC_RMW32_U_OR_I64:
  case WebAssembly::ATOMIC_RMW32_U_SUB_I64:
  case WebAssembly::ATOMIC_RMW32_U_XCHG_I64:
  case WebAssembly::ATOMIC_RMW32_U_XOR_I64:
  case WebAssembly::ATOMIC_RMW8_U_ADD_I32:
  case WebAssembly::ATOMIC_RMW8_U_ADD_I64:
  case WebAssembly::ATOMIC_RMW8_U_AND_I32:
  case WebAssembly::ATOMIC_RMW8_U_AND_I64:
  case WebAssembly::ATOMIC_RMW8_U_OR_I32:
  case WebAssembly::ATOMIC_RMW8_U_OR_I64:
  case WebAssembly::ATOMIC_RMW8_U_SUB_I32:
  case WebAssembly::ATOMIC_RMW8_U_SUB_I64:
  case WebAssembly::ATOMIC_RMW8_U_XCHG_I32:
  case WebAssembly::ATOMIC_RMW8_U_XCHG_I64:
  case WebAssembly::ATOMIC_RMW8_U_XOR_I32:
  case WebAssembly::ATOMIC_RMW8_U_XOR_I64:
  case WebAssembly::ATOMIC_RMW_ADD_I32:
  case WebAssembly::ATOMIC_RMW_ADD_I64:
  case WebAssembly::ATOMIC_RMW_AND_I32:
  case WebAssembly::ATOMIC_RMW_AND_I64:
  case WebAssembly::ATOMIC_RMW_OR_I32:
  case WebAssembly::ATOMIC_RMW_OR_I64:
  case WebAssembly::ATOMIC_RMW_SUB_I32:
  case WebAssembly::ATOMIC_RMW_SUB_I64:
  case WebAssembly::ATOMIC_RMW_XCHG_I32:
  case WebAssembly::ATOMIC_RMW_XCHG_I64:
  case WebAssembly::ATOMIC_RMW_XOR_I32:
  case WebAssembly::ATOMIC_RMW_XOR_I64:
    return OperandMap[2][NamedIdx];
  case WebAssembly::ATOMIC_RMW16_U_CMPXCHG_I32:
  case WebAssembly::ATOMIC_RMW16_U_CMPXCHG_I64:
  case WebAssembly::ATOMIC_RMW32_U_CMPXCHG_I64:
  case WebAssembly::ATOMIC_RMW8_U_CMPXCHG_I32:
  case WebAssembly::ATOMIC_RMW8_U_CMPXCHG_I64:
  case WebAssembly::ATOMIC_RMW_CMPXCHG_I32:
  case WebAssembly::ATOMIC_RMW_CMPXCHG_I64:
    return OperandMap[3][NamedIdx];
  case WebAssembly::ATOMIC_WAIT_I32:
  case WebAssembly::ATOMIC_WAIT_I64:
    return OperandMap[4][NamedIdx];
  case WebAssembly::ATOMIC_LOAD16_U_I32_S:
  case WebAssembly::ATOMIC_LOAD16_U_I64_S:
  case WebAssembly::ATOMIC_LOAD32_U_I64_S:
  case WebAssembly::ATOMIC_LOAD8_U_I32_S:
  case WebAssembly::ATOMIC_LOAD8_U_I64_S:
  case WebAssembly::ATOMIC_LOAD_I32_S:
  case WebAssembly::ATOMIC_LOAD_I64_S:
  case WebAssembly::ATOMIC_NOTIFY_S:
  case WebAssembly::ATOMIC_RMW16_U_ADD_I32_S:
  case WebAssembly::ATOMIC_RMW16_U_ADD_I64_S:
  case WebAssembly::ATOMIC_RMW16_U_AND_I32_S:
  case WebAssembly::ATOMIC_RMW16_U_AND_I64_S:
  case WebAssembly::ATOMIC_RMW16_U_CMPXCHG_I32_S:
  case WebAssembly::ATOMIC_RMW16_U_CMPXCHG_I64_S:
  case WebAssembly::ATOMIC_RMW16_U_OR_I32_S:
  case WebAssembly::ATOMIC_RMW16_U_OR_I64_S:
  case WebAssembly::ATOMIC_RMW16_U_SUB_I32_S:
  case WebAssembly::ATOMIC_RMW16_U_SUB_I64_S:
  case WebAssembly::ATOMIC_RMW16_U_XCHG_I32_S:
  case WebAssembly::ATOMIC_RMW16_U_XCHG_I64_S:
  case WebAssembly::ATOMIC_RMW16_U_XOR_I32_S:
  case WebAssembly::ATOMIC_RMW16_U_XOR_I64_S:
  case WebAssembly::ATOMIC_RMW32_U_ADD_I64_S:
  case WebAssembly::ATOMIC_RMW32_U_AND_I64_S:
  case WebAssembly::ATOMIC_RMW32_U_CMPXCHG_I64_S:
  case WebAssembly::ATOMIC_RMW32_U_OR_I64_S:
  case WebAssembly::ATOMIC_RMW32_U_SUB_I64_S:
  case WebAssembly::ATOMIC_RMW32_U_XCHG_I64_S:
  case WebAssembly::ATOMIC_RMW32_U_XOR_I64_S:
  case WebAssembly::ATOMIC_RMW8_U_ADD_I32_S:
  case WebAssembly::ATOMIC_RMW8_U_ADD_I64_S:
  case WebAssembly::ATOMIC_RMW8_U_AND_I32_S:
  case WebAssembly::ATOMIC_RMW8_U_AND_I64_S:
  case WebAssembly::ATOMIC_RMW8_U_CMPXCHG_I32_S:
  case WebAssembly::ATOMIC_RMW8_U_CMPXCHG_I64_S:
  case WebAssembly::ATOMIC_RMW8_U_OR_I32_S:
  case WebAssembly::ATOMIC_RMW8_U_OR_I64_S:
  case WebAssembly::ATOMIC_RMW8_U_SUB_I32_S:
  case WebAssembly::ATOMIC_RMW8_U_SUB_I64_S:
  case WebAssembly::ATOMIC_RMW8_U_XCHG_I32_S:
  case WebAssembly::ATOMIC_RMW8_U_XCHG_I64_S:
  case WebAssembly::ATOMIC_RMW8_U_XOR_I32_S:
  case WebAssembly::ATOMIC_RMW8_U_XOR_I64_S:
  case WebAssembly::ATOMIC_RMW_ADD_I32_S:
  case WebAssembly::ATOMIC_RMW_ADD_I64_S:
  case WebAssembly::ATOMIC_RMW_AND_I32_S:
  case WebAssembly::ATOMIC_RMW_AND_I64_S:
  case WebAssembly::ATOMIC_RMW_CMPXCHG_I32_S:
  case WebAssembly::ATOMIC_RMW_CMPXCHG_I64_S:
  case WebAssembly::ATOMIC_RMW_OR_I32_S:
  case WebAssembly::ATOMIC_RMW_OR_I64_S:
  case WebAssembly::ATOMIC_RMW_SUB_I32_S:
  case WebAssembly::ATOMIC_RMW_SUB_I64_S:
  case WebAssembly::ATOMIC_RMW_XCHG_I32_S:
  case WebAssembly::ATOMIC_RMW_XCHG_I64_S:
  case WebAssembly::ATOMIC_RMW_XOR_I32_S:
  case WebAssembly::ATOMIC_RMW_XOR_I64_S:
  case WebAssembly::ATOMIC_STORE16_I32_S:
  case WebAssembly::ATOMIC_STORE16_I64_S:
  case WebAssembly::ATOMIC_STORE32_I64_S:
  case WebAssembly::ATOMIC_STORE8_I32_S:
  case WebAssembly::ATOMIC_STORE8_I64_S:
  case WebAssembly::ATOMIC_STORE_I32_S:
  case WebAssembly::ATOMIC_STORE_I64_S:
  case WebAssembly::ATOMIC_WAIT_I32_S:
  case WebAssembly::ATOMIC_WAIT_I64_S:
  case WebAssembly::LOAD16_S_I32_S:
  case WebAssembly::LOAD16_S_I64_S:
  case WebAssembly::LOAD16_U_I32_S:
  case WebAssembly::LOAD16_U_I64_S:
  case WebAssembly::LOAD32_S_I64_S:
  case WebAssembly::LOAD32_U_I64_S:
  case WebAssembly::LOAD8_S_I32_S:
  case WebAssembly::LOAD8_S_I64_S:
  case WebAssembly::LOAD8_U_I32_S:
  case WebAssembly::LOAD8_U_I64_S:
  case WebAssembly::LOAD_EXTEND_S_v2i64_S:
  case WebAssembly::LOAD_EXTEND_S_v4i32_S:
  case WebAssembly::LOAD_EXTEND_S_v8i16_S:
  case WebAssembly::LOAD_EXTEND_U_v2i64_S:
  case WebAssembly::LOAD_EXTEND_U_v4i32_S:
  case WebAssembly::LOAD_EXTEND_U_v8i16_S:
  case WebAssembly::LOAD_F32_S:
  case WebAssembly::LOAD_F64_S:
  case WebAssembly::LOAD_I32_S:
  case WebAssembly::LOAD_I64_S:
  case WebAssembly::LOAD_SPLAT_v16x8_S:
  case WebAssembly::LOAD_SPLAT_v32x4_S:
  case WebAssembly::LOAD_SPLAT_v64x2_S:
  case WebAssembly::LOAD_SPLAT_v8x16_S:
  case WebAssembly::LOAD_V128_S:
  case WebAssembly::STORE16_I32_S:
  case WebAssembly::STORE16_I64_S:
  case WebAssembly::STORE32_I64_S:
  case WebAssembly::STORE8_I32_S:
  case WebAssembly::STORE8_I64_S:
  case WebAssembly::STORE_F32_S:
  case WebAssembly::STORE_F64_S:
  case WebAssembly::STORE_I32_S:
  case WebAssembly::STORE_I64_S:
  case WebAssembly::STORE_V128_S:
    return OperandMap[5][NamedIdx];
  case WebAssembly::ATOMIC_STORE16_I32:
  case WebAssembly::ATOMIC_STORE16_I64:
  case WebAssembly::ATOMIC_STORE32_I64:
  case WebAssembly::ATOMIC_STORE8_I32:
  case WebAssembly::ATOMIC_STORE8_I64:
  case WebAssembly::ATOMIC_STORE_I32:
  case WebAssembly::ATOMIC_STORE_I64:
  case WebAssembly::STORE16_I32:
  case WebAssembly::STORE16_I64:
  case WebAssembly::STORE32_I64:
  case WebAssembly::STORE8_I32:
  case WebAssembly::STORE8_I64:
  case WebAssembly::STORE_F32:
  case WebAssembly::STORE_F64:
  case WebAssembly::STORE_I32:
  case WebAssembly::STORE_I64:
    return OperandMap[6][NamedIdx];
  case WebAssembly::STORE_V128:
    return OperandMap[7][NamedIdx];
    default: return -1;
  }
}
} // end namespace WebAssembly
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace WebAssembly {
namespace OpTypes {
enum OperandType {
  P2Align = 0,
  Signature = 1,
  TypeIndex = 2,
  bb_op = 3,
  brlist = 4,
  event_op = 5,
  f32imm = 6,
  f32imm_op = 7,
  f64imm = 8,
  f64imm_op = 9,
  function32_op = 10,
  global_op = 11,
  i16imm = 12,
  i1imm = 13,
  i32imm = 14,
  i32imm_op = 15,
  i64imm = 16,
  i64imm_op = 17,
  i8imm = 18,
  local_op = 19,
  offset32_op = 20,
  ptype0 = 21,
  ptype1 = 22,
  ptype2 = 23,
  ptype3 = 24,
  ptype4 = 25,
  ptype5 = 26,
  type0 = 27,
  type1 = 28,
  type2 = 29,
  type3 = 30,
  type4 = 31,
  type5 = 32,
  untyped_imm_0 = 33,
  vec_i16imm_op = 34,
  vec_i32imm_op = 35,
  vec_i64imm_op = 36,
  vec_i8imm_op = 37,
  EXNREF = 38,
  F32 = 39,
  F64 = 40,
  I32 = 41,
  I64 = 42,
  V128 = 43,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace WebAssembly
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace WebAssembly {
LLVM_READONLY
static int getOperandType(uint16_t Opcode, uint16_t OpIdx) {
  const int Offsets[] = {
    0,
    1,
    1,
    1,
    2,
    3,
    4,
    5,
    5,
    8,
    12,
    13,
    17,
    20,
    20,
    21,
    23,
    25,
    25,
    26,
    27,
    29,
    29,
    35,
    36,
    36,
    38,
    39,
    39,
    39,
    39,
    39,
    39,
    41,
    44,
    44,
    47,
    50,
    53,
    56,
    59,
    62,
    65,
    68,
    71,
    74,
    75,
    76,
    78,
    80,
    83,
    85,
    89,
    91,
    93,
    95,
    97,
    99,
    101,
    103,
    105,
    107,
    108,
    110,
    112,
    114,
    119,
    124,
    129,
    131,
    136,
    141,
    145,
    148,
    151,
    154,
    157,
    160,
    163,
    166,
    169,
    172,
    175,
    178,
    181,
    184,
    186,
    188,
    189,
    190,
    191,
    193,
    195,
    197,
    199,
    200,
    203,
    205,
    208,
    210,
    213,
    216,
    219,
    223,
    227,
    231,
    235,
    240,
    244,
    249,
    253,
    258,
    262,
    267,
    271,
    275,
    278,
    281,
    284,
    287,
    290,
    294,
    298,
    301,
    304,
    307,
    309,
    311,
    313,
    315,
    317,
    319,
    321,
    323,
    325,
    327,
    329,
    331,
    333,
    336,
    338,
    341,
    344,
    347,
    350,
    353,
    356,
    359,
    362,
    365,
    368,
    371,
    374,
    375,
    378,
    382,
    385,
    389,
    391,
    393,
    395,
    397,
    399,
    401,
    403,
    405,
    407,
    409,
    411,
    413,
    415,
    417,
    419,
    421,
    423,
    426,
    428,
    430,
    430,
    430,
    430,
    430,
    430,
    430,
    432,
    432,
    434,
    434,
    436,
    436,
    438,
    438,
    441,
    441,
    444,
    444,
    447,
    447,
    450,
    450,
    453,
    453,
    456,
    456,
    459,
    459,
    462,
    462,
    465,
    465,
    468,
    468,
    471,
    471,
    474,
    474,
    477,
    477,
    480,
    480,
    482,
    484,
    486,
    488,
    490,
    490,
    492,
    492,
    494,
    494,
    496,
    496,
    499,
    499,
    502,
    502,
    505,
    505,
    508,
    508,
    511,
    511,
    514,
    514,
    517,
    517,
    520,
    520,
    523,
    523,
    526,
    526,
    528,
    528,
    530,
    530,
    532,
    532,
    534,
    534,
    536,
    537,
    539,
    540,
    542,
    543,
    545,
    546,
    548,
    549,
    551,
    552,
    554,
    555,
    557,
    558,
    560,
    561,
    563,
    564,
    566,
    567,
    568,
    569,
    573,
    575,
    579,
    581,
    585,
    587,
    591,
    593,
    597,
    599,
    603,
    605,
    609,
    611,
    616,
    618,
    623,
    625,
    630,
    632,
    637,
    639,
    644,
    646,
    652,
    654,
    660,
    662,
    667,
    669,
    674,
    676,
    681,
    683,
    688,
    690,
    695,
    697,
    702,
    704,
    709,
    711,
    716,
    718,
    723,
    725,
    730,
    732,
    738,
    740,
    745,
    747,
    752,
    754,
    759,
    761,
    766,
    768,
    773,
    775,
    780,
    782,
    787,
    789,
    794,
    796,
    802,
    804,
    810,
    812,
    817,
    819,
    824,
    826,
    831,
    833,
    838,
    840,
    845,
    847,
    852,
    854,
    859,
    861,
    866,
    868,
    873,
    875,
    880,
    882,
    887,
    889,
    894,
    896,
    902,
    904,
    910,
    912,
    917,
    919,
    924,
    926,
    931,
    933,
    938,
    940,
    945,
    947,
    952,
    954,
    959,
    961,
    966,
    968,
    972,
    974,
    978,
    980,
    984,
    986,
    990,
    992,
    996,
    998,
    1002,
    1004,
    1008,
    1010,
    1016,
    1018,
    1024,
    1026,
    1029,
    1029,
    1032,
    1032,
    1036,
    1036,
    1040,
    1040,
    1044,
    1044,
    1048,
    1048,
    1052,
    1052,
    1056,
    1056,
    1057,
    1058,
    1059,
    1061,
    1062,
    1065,
    1067,
    1068,
    1069,
    1070,
    1071,
    1072,
    1074,
    1075,
    1077,
    1079,
    1082,
    1084,
    1087,
    1089,
    1092,
    1094,
    1097,
    1099,
    1102,
    1104,
    1107,
    1109,
    1112,
    1114,
    1117,
    1119,
    1122,
    1124,
    1127,
    1129,
    1132,
    1134,
    1135,
    1136,
    1138,
    1139,
    1141,
    1142,
    1144,
    1145,
    1147,
    1148,
    1150,
    1151,
    1153,
    1154,
    1156,
    1157,
    1159,
    1160,
    1162,
    1163,
    1165,
    1166,
    1168,
    1169,
    1170,
    1170,
    1172,
    1172,
    1174,
    1174,
    1176,
    1176,
    1178,
    1178,
    1180,
    1181,
    1183,
    1184,
    1186,
    1187,
    1189,
    1190,
    1207,
    1223,
    1226,
    1228,
    1231,
    1233,
    1238,
    1242,
    1247,
    1251,
    1260,
    1268,
    1271,
    1271,
    1274,
    1274,
    1276,
    1276,
    1278,
    1278,
    1280,
    1280,
    1282,
    1282,
    1284,
    1284,
    1286,
    1286,
    1288,
    1288,
    1290,
    1290,
    1291,
    1292,
    1295,
    1295,
    1298,
    1298,
    1301,
    1301,
    1304,
    1304,
    1307,
    1307,
    1310,
    1310,
    1313,
    1313,
    1316,
    1316,
    1319,
    1319,
    1320,
    1320,
    1321,
    1321,
    1322,
    1322,
    1323,
    1323,
    1324,
    1324,
    1325,
    1325,
    1325,
    1325,
    1325,
    1325,
    1325,
    1325,
    1325,
    1325,
    1325,
    1325,
    1325,
    1325,
    1325,
    1325,
    1327,
    1327,
    1329,
    1329,
    1332,
    1332,
    1335,
    1335,
    1338,
    1338,
    1341,
    1341,
    1344,
    1344,
    1347,
    1347,
    1350,
    1350,
    1353,
    1353,
    1356,
    1356,
    1357,
    1358,
    1361,
    1362,
    1365,
    1366,
    1369,
    1370,
    1373,
    1374,
    1377,
    1378,
    1381,
    1382,
    1385,
    1386,
    1389,
    1390,
    1392,
    1392,
    1394,
    1394,
    1396,
    1396,
    1398,
    1398,
    1400,
    1400,
    1402,
    1402,
    1404,
    1404,
    1406,
    1406,
    1408,
    1408,
    1410,
    1410,
    1412,
    1412,
    1414,
    1414,
    1414,
    1414,
    1416,
    1416,
    1418,
    1418,
    1420,
    1420,
    1422,
    1422,
    1424,
    1424,
    1426,
    1426,
    1428,
    1428,
    1430,
    1430,
    1432,
    1432,
    1434,
    1434,
    1437,
    1437,
    1440,
    1440,
    1443,
    1443,
    1446,
    1446,
    1449,
    1449,
    1452,
    1452,
    1455,
    1455,
    1458,
    1458,
    1461,
    1461,
    1464,
    1464,
    1467,
    1467,
    1470,
    1470,
    1473,
    1473,
    1476,
    1476,
    1478,
    1479,
    1481,
    1482,
    1484,
    1485,
    1487,
    1488,
    1490,
    1491,
    1493,
    1494,
    1496,
    1497,
    1499,
    1500,
    1502,
    1503,
    1505,
    1506,
    1508,
    1509,
    1511,
    1512,
    1515,
    1515,
    1518,
    1518,
    1521,
    1521,
    1524,
    1524,
    1527,
    1527,
    1530,
    1530,
    1533,
    1533,
    1536,
    1536,
    1539,
    1539,
    1542,
    1542,
    1545,
    1545,
    1548,
    1548,
    1551,
    1551,
    1554,
    1554,
    1556,
    1556,
    1558,
    1558,
    1560,
    1560,
    1562,
    1562,
    1564,
    1564,
    1566,
    1566,
    1568,
    1568,
    1570,
    1570,
    1572,
    1572,
    1574,
    1574,
    1576,
    1576,
    1578,
    1578,
    1580,
    1580,
    1582,
    1582,
    1584,
    1584,
    1586,
    1586,
    1588,
    1588,
    1590,
    1590,
    1592,
    1592,
    1594,
    1594,
    1596,
    1596,
    1598,
    1598,
    1600,
    1600,
    1602,
    1602,
    1604,
    1604,
    1606,
    1606,
    1608,
    1609,
    1612,
    1612,
    1615,
    1615,
    1618,
    1618,
    1621,
    1621,
    1624,
    1624,
    1627,
    1627,
    1630,
    1630,
    1633,
    1633,
    1636,
    1636,
    1639,
    1639,
    1642,
    1642,
    1645,
    1645,
    1648,
    1648,
    1651,
    1651,
    1655,
    1657,
    1661,
    1663,
    1667,
    1669,
    1673,
    1675,
    1679,
    1681,
    1685,
    1687,
    1691,
    1693,
    1697,
    1699,
    1703,
    1705,
    1709,
    1711,
    1715,
    1717,
    1721,
    1723,
    1727,
    1729,
    1733,
    1735,
    1739,
    1741,
    1745,
    1747,
    1751,
    1753,
    1757,
    1759,
    1763,
    1765,
    1769,
    1771,
    1775,
    1777,
    1781,
    1783,
    1787,
    1789,
    1793,
    1795,
    1799,
    1801,
    1803,
    1804,
    1806,
    1807,
    1809,
    1810,
    1812,
    1813,
    1815,
    1816,
    1818,
    1819,
    1821,
    1822,
    1824,
    1825,
    1827,
    1828,
    1830,
    1831,
    1833,
    1834,
    1836,
    1837,
    1840,
    1841,
    1844,
    1845,
    1848,
    1849,
    1852,
    1853,
    1856,
    1857,
    1860,
    1861,
    1862,
    1863,
    1866,
    1866,
    1869,
    1869,
    1872,
    1872,
    1875,
    1875,
    1878,
    1878,
    1881,
    1881,
    1884,
    1884,
    1887,
    1887,
    1890,
    1890,
    1893,
    1893,
    1896,
    1896,
    1899,
    1899,
    1902,
    1902,
    1905,
    1905,
    1908,
    1908,
    1911,
    1911,
    1914,
    1914,
    1917,
    1917,
    1920,
    1920,
    1923,
    1923,
    1926,
    1926,
    1929,
    1929,
    1932,
    1932,
    1935,
    1935,
    1940,
    1942,
    1946,
    1947,
    1950,
    1951,
    1956,
    1958,
    1960,
    1961,
    1964,
    1964,
    1967,
    1967,
    1970,
    1970,
    1973,
    1973,
    1976,
    1976,
    1979,
    1979,
    1982,
    1982,
    1985,
    1985,
    1988,
    1988,
    1991,
    1991,
    1994,
    1994,
    1997,
    1997,
    2000,
    2000,
    2003,
    2003,
    2006,
    2006,
    2009,
    2009,
    2012,
    2012,
    2015,
    2015,
    2018,
    2018,
    2021,
    2021,
    2024,
    2024,
    2027,
    2027,
    2030,
    2030,
    2032,
    2032,
    2034,
    2034,
    2036,
    2036,
    2038,
    2038,
    2040,
    2040,
    2042,
    2042,
    2044,
    2044,
    2046,
    2046,
    2048,
    2048,
    2050,
    2050,
    2053,
    2053,
    2056,
    2056,
    2059,
    2059,
    2062,
    2062,
    2065,
    2065,
    2068,
    2068,
    2071,
    2071,
    2074,
    2074,
    2077,
    2077,
    2077,
    2077,
    2079,
    2079,
    2081,
    2081,
    2083,
    2083,
    2085,
    2085,
    2088,
    2088,
    2091,
    2091,
    2094,
    2094,
    2097,
    2097,
    2100,
    2100,
    2103,
    2103,
    2104,
    2105,
    2107,
    2108,
    2110,
    2111,
    2113,
    2114,
    2116,
    2117,
    2119,
    2120,
    2122,
    2123,
    2125,
    2126,
    2128,
    2129,
    2131,
    2132,
    2134,
    2135,
    2137,
    2138,
    2140,
    2140,
    2142,
    2142,
    2143,
    2144,
    2148,
    2148,
    2152,
    2152,
    2156,
    2156,
    2160,
    2160,
    2163,
    2163,
    2166,
    2166,
    2169,
    2169,
    2172,
    2172,
    2176,
    2177,
    2181,
    2182,
    2186,
    2187,
    2191,
    2192,
    2196,
    2197,
    2201,
    2202,
    2203,
    2203,
    2203,
    2203,
    2204,
    2206,
    2208,
    2209,
    2212,
    2212,
    2215,
    2215,
    2218,
    2218,
    2221,
    2221,
    2225,
    2225,
    2229,
    2229,
    2233,
    2233,
    2237,
    2237,
    2241,
    2241,
    2244,
    2244,
    2247,
    2247,
    2250,
    2250,
    2253,
    2253,
    2256,
    2256,
    2259,
    2259,
    2262,
    2262,
    2265,
    2265,
    2268,
    2268,
    2271,
    2271,
    2274,
    2274,
    2277,
    2277,
    2280,
    2280,
    2283,
    2283,
    2286,
    2286,
    2289,
    2289,
    2292,
    2292,
    2295,
    2295,
    2314,
    2330,
    2332,
    2332,
    2334,
    2334,
    2336,
    2336,
    2338,
    2338,
    2340,
    2340,
    2342,
    2342,
    2344,
    2344,
    2346,
    2346,
    2348,
    2348,
    2350,
    2350,
    2354,
    2356,
    2360,
    2362,
    2366,
    2368,
    2372,
    2374,
    2378,
    2380,
    2384,
    2386,
    2390,
    2392,
    2396,
    2398,
    2402,
    2404,
    2408,
    2410,
    2413,
    2413,
    2416,
    2416,
    2419,
    2419,
    2422,
    2422,
    2425,
    2425,
    2428,
    2428,
    2431,
    2431,
    2434,
    2434,
    2437,
    2437,
    2440,
    2440,
    2443,
    2443,
    2446,
    2446,
    2449,
    2449,
    2452,
    2452,
    2455,
    2455,
    2458,
    2458,
    2461,
    2461,
    2464,
    2464,
    2467,
    2467,
    2470,
    2470,
    2473,
    2473,
    2474,
    2475,
    2477,
    2477,
    2479,
    2479,
    2480,
    2481,
    2481,
    2481,
    2484,
    2484,
    2487,
    2487,
    2490,
    2490,
    2493,
    2493,
    2496,
    2496,
    2499,
    2499,
    2501,
    2501,
    2503,
    2503,
    2505,
    2505,
    2507,
    2507,
    2509,
    2509,
    2511,
    2511,
    2513,
    2513,
    2515,
    2515,
    2517,
    2517,
    2519,
    2519,
    2521,
    2521,
    2523,
    2523,
    2525,
    2525,
    2527,
    2527,
    2529,
    2529,
    2531,
  };
  const int OpcodeOperandTypes[] = {
    -1, 
    /**/
    /**/
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    /**/
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, -1, OpTypes::i32imm, 
    /**/
    -1, 
    -1, -1, 
    -1, -1, 
    /**/
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i64imm, OpTypes::i32imm, 
    /**/
    -1, OpTypes::i64imm, OpTypes::i32imm, -1, OpTypes::i32imm, OpTypes::i32imm, 
    -1, 
    /**/
    -1, OpTypes::i32imm, 
    -1, 
    /**/
    /**/
    /**/
    /**/
    /**/
    -1, -1, 
    -1, -1, -1, 
    /**/
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::type0, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::ptype1, OpTypes::type2, -1, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::ptype1, OpTypes::type2, -1, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::ptype1, OpTypes::type2, -1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::ptype0, OpTypes::type1, OpTypes::ptype0, OpTypes::ptype2, -1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type2, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::type0, -1, 
    OpTypes::type0, 
    -1, 
    -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, OpTypes::type1, OpTypes::type1, 
    OpTypes::type0, -1, OpTypes::type1, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, -1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    -1, 
    OpTypes::ptype0, -1, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::ptype0, OpTypes::type1, OpTypes::i32imm, 
    OpTypes::bb_op, OpTypes::bb_op, 
    OpTypes::bb_op, OpTypes::bb_op, 
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::F32, OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::F64, OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::I32, OpTypes::V128, 
    /**/
    OpTypes::I32, OpTypes::V128, 
    /**/
    OpTypes::I32, OpTypes::V128, 
    /**/
    OpTypes::I32, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::I32, OpTypes::V128, 
    /**/
    OpTypes::I32, OpTypes::V128, 
    /**/
    OpTypes::I32, OpTypes::V128, 
    /**/
    OpTypes::I32, OpTypes::V128, 
    /**/
    OpTypes::EXNREF, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::F32, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::F64, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::I32, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::I64, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::V128, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::V128, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::V128, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::V128, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::V128, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::V128, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i8imm, 
    OpTypes::i8imm, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::Signature, 
    OpTypes::Signature, 
    OpTypes::bb_op, 
    OpTypes::bb_op, OpTypes::I32, 
    OpTypes::bb_op, 
    OpTypes::bb_op, OpTypes::event_op, OpTypes::EXNREF, 
    OpTypes::bb_op, OpTypes::event_op, 
    OpTypes::bb_op, 
    OpTypes::I32, 
    OpTypes::brlist, 
    OpTypes::I64, 
    OpTypes::brlist, 
    OpTypes::bb_op, OpTypes::I32, 
    OpTypes::bb_op, 
    OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::EXNREF, OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::F32, OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::F64, OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::I32, OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::I64, OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::V128, OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::V128, OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::V128, OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::V128, OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::V128, OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::V128, OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::function32_op, 
    OpTypes::function32_op, 
    OpTypes::EXNREF, OpTypes::function32_op, 
    OpTypes::function32_op, 
    OpTypes::F32, OpTypes::function32_op, 
    OpTypes::function32_op, 
    OpTypes::F64, OpTypes::function32_op, 
    OpTypes::function32_op, 
    OpTypes::I32, OpTypes::function32_op, 
    OpTypes::function32_op, 
    OpTypes::I64, OpTypes::function32_op, 
    OpTypes::function32_op, 
    OpTypes::V128, OpTypes::function32_op, 
    OpTypes::function32_op, 
    OpTypes::V128, OpTypes::function32_op, 
    OpTypes::function32_op, 
    OpTypes::V128, OpTypes::function32_op, 
    OpTypes::function32_op, 
    OpTypes::V128, OpTypes::function32_op, 
    OpTypes::function32_op, 
    OpTypes::V128, OpTypes::function32_op, 
    OpTypes::function32_op, 
    OpTypes::V128, OpTypes::function32_op, 
    OpTypes::function32_op, 
    OpTypes::EXNREF, 
    /**/
    OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::F32, OpTypes::f32imm_op, 
    OpTypes::f32imm_op, 
    OpTypes::F64, OpTypes::f64imm_op, 
    OpTypes::f64imm_op, 
    OpTypes::I32, OpTypes::i32imm_op, 
    OpTypes::i32imm_op, 
    OpTypes::I64, OpTypes::i64imm_op, 
    OpTypes::i64imm_op, 
    OpTypes::V128, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, 
    OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, 
    OpTypes::V128, OpTypes::f64imm_op, OpTypes::f64imm_op, 
    OpTypes::f64imm_op, OpTypes::f64imm_op, 
    OpTypes::V128, OpTypes::vec_i64imm_op, OpTypes::vec_i64imm_op, 
    OpTypes::vec_i64imm_op, OpTypes::vec_i64imm_op, 
    OpTypes::V128, OpTypes::f32imm_op, OpTypes::f32imm_op, OpTypes::f32imm_op, OpTypes::f32imm_op, 
    OpTypes::f32imm_op, OpTypes::f32imm_op, OpTypes::f32imm_op, OpTypes::f32imm_op, 
    OpTypes::V128, OpTypes::vec_i32imm_op, OpTypes::vec_i32imm_op, OpTypes::vec_i32imm_op, OpTypes::vec_i32imm_op, 
    OpTypes::vec_i32imm_op, OpTypes::vec_i32imm_op, OpTypes::vec_i32imm_op, OpTypes::vec_i32imm_op, 
    OpTypes::V128, OpTypes::vec_i16imm_op, OpTypes::vec_i16imm_op, OpTypes::vec_i16imm_op, OpTypes::vec_i16imm_op, OpTypes::vec_i16imm_op, OpTypes::vec_i16imm_op, OpTypes::vec_i16imm_op, OpTypes::vec_i16imm_op, 
    OpTypes::vec_i16imm_op, OpTypes::vec_i16imm_op, OpTypes::vec_i16imm_op, OpTypes::vec_i16imm_op, OpTypes::vec_i16imm_op, OpTypes::vec_i16imm_op, OpTypes::vec_i16imm_op, OpTypes::vec_i16imm_op, 
    OpTypes::F32, OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::F64, OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::EXNREF, OpTypes::EXNREF, 
    /**/
    OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::i32imm_op, 
    OpTypes::i32imm_op, 
    OpTypes::F32, OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::F64, OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::EXNREF, 
    /**/
    OpTypes::F32, 
    /**/
    OpTypes::F64, 
    /**/
    OpTypes::I32, 
    /**/
    OpTypes::I64, 
    /**/
    OpTypes::V128, 
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I32, OpTypes::I64, 
    /**/
    OpTypes::I32, OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::I32, OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I32, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::I32, 
    OpTypes::I32, 
    OpTypes::I32, OpTypes::V128, OpTypes::vec_i8imm_op, 
    OpTypes::vec_i8imm_op, 
    OpTypes::I32, OpTypes::V128, OpTypes::vec_i8imm_op, 
    OpTypes::vec_i8imm_op, 
    OpTypes::F64, OpTypes::V128, OpTypes::vec_i8imm_op, 
    OpTypes::vec_i8imm_op, 
    OpTypes::I64, OpTypes::V128, OpTypes::vec_i8imm_op, 
    OpTypes::vec_i8imm_op, 
    OpTypes::F32, OpTypes::V128, OpTypes::vec_i8imm_op, 
    OpTypes::vec_i8imm_op, 
    OpTypes::I32, OpTypes::V128, OpTypes::vec_i8imm_op, 
    OpTypes::vec_i8imm_op, 
    OpTypes::I32, OpTypes::V128, OpTypes::vec_i8imm_op, 
    OpTypes::vec_i8imm_op, 
    OpTypes::I32, OpTypes::V128, OpTypes::vec_i8imm_op, 
    OpTypes::vec_i8imm_op, 
    OpTypes::F32, OpTypes::I32, 
    /**/
    OpTypes::F32, OpTypes::I64, 
    /**/
    OpTypes::F32, OpTypes::I32, 
    /**/
    OpTypes::F32, OpTypes::I64, 
    /**/
    OpTypes::F32, OpTypes::F64, 
    /**/
    OpTypes::F32, OpTypes::I32, 
    /**/
    OpTypes::F64, OpTypes::I32, 
    /**/
    OpTypes::F64, OpTypes::I64, 
    /**/
    OpTypes::F64, OpTypes::I32, 
    /**/
    OpTypes::F64, OpTypes::I64, 
    /**/
    OpTypes::F64, OpTypes::F32, 
    /**/
    OpTypes::F64, OpTypes::I64, 
    /**/
    /**/
    /**/
    OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::I32, OpTypes::F32, 
    /**/
    OpTypes::I32, OpTypes::F64, 
    /**/
    OpTypes::I64, OpTypes::F32, 
    /**/
    OpTypes::I64, OpTypes::F64, 
    /**/
    OpTypes::I32, OpTypes::F32, 
    /**/
    OpTypes::I32, OpTypes::F64, 
    /**/
    OpTypes::I64, OpTypes::F32, 
    /**/
    OpTypes::I64, OpTypes::F64, 
    /**/
    OpTypes::I32, OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::I32, OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I32, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I32, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::EXNREF, OpTypes::global_op, 
    OpTypes::global_op, 
    OpTypes::F32, OpTypes::global_op, 
    OpTypes::global_op, 
    OpTypes::F64, OpTypes::global_op, 
    OpTypes::global_op, 
    OpTypes::I32, OpTypes::global_op, 
    OpTypes::global_op, 
    OpTypes::I64, OpTypes::global_op, 
    OpTypes::global_op, 
    OpTypes::V128, OpTypes::global_op, 
    OpTypes::global_op, 
    OpTypes::global_op, OpTypes::EXNREF, 
    OpTypes::global_op, 
    OpTypes::global_op, OpTypes::F32, 
    OpTypes::global_op, 
    OpTypes::global_op, OpTypes::F64, 
    OpTypes::global_op, 
    OpTypes::global_op, OpTypes::I32, 
    OpTypes::global_op, 
    OpTypes::global_op, OpTypes::I64, 
    OpTypes::global_op, 
    OpTypes::global_op, OpTypes::V128, 
    OpTypes::global_op, 
    OpTypes::I32, OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::I32, OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I32, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I32, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I32, OpTypes::F32, 
    /**/
    OpTypes::I32, OpTypes::F32, 
    /**/
    OpTypes::I32, OpTypes::F64, 
    /**/
    OpTypes::I32, OpTypes::F32, 
    /**/
    OpTypes::I32, OpTypes::F64, 
    /**/
    OpTypes::I32, OpTypes::F32, 
    /**/
    OpTypes::I32, OpTypes::F64, 
    /**/
    OpTypes::I32, OpTypes::F32, 
    /**/
    OpTypes::I32, OpTypes::F64, 
    /**/
    OpTypes::I32, OpTypes::I64, 
    /**/
    OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::I64, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::F64, 
    /**/
    OpTypes::I64, OpTypes::F32, 
    /**/
    OpTypes::I64, OpTypes::F64, 
    /**/
    OpTypes::I64, OpTypes::F32, 
    /**/
    OpTypes::I64, OpTypes::F64, 
    /**/
    OpTypes::I64, OpTypes::F32, 
    /**/
    OpTypes::I64, OpTypes::F64, 
    /**/
    OpTypes::I64, OpTypes::F32, 
    /**/
    OpTypes::I64, OpTypes::F64, 
    /**/
    OpTypes::Signature, OpTypes::I32, 
    OpTypes::Signature, 
    OpTypes::I32, OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::I32, OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I32, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I32, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::V128, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::V128, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::V128, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::V128, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::V128, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::V128, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::F32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::F64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I32, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::I64, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::V128, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::V128, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::V128, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::V128, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::V128, OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::EXNREF, OpTypes::local_op, 
    OpTypes::local_op, 
    OpTypes::F32, OpTypes::local_op, 
    OpTypes::local_op, 
    OpTypes::F64, OpTypes::local_op, 
    OpTypes::local_op, 
    OpTypes::I32, OpTypes::local_op, 
    OpTypes::local_op, 
    OpTypes::I64, OpTypes::local_op, 
    OpTypes::local_op, 
    OpTypes::V128, OpTypes::local_op, 
    OpTypes::local_op, 
    OpTypes::local_op, OpTypes::EXNREF, 
    OpTypes::local_op, 
    OpTypes::local_op, OpTypes::F32, 
    OpTypes::local_op, 
    OpTypes::local_op, OpTypes::F64, 
    OpTypes::local_op, 
    OpTypes::local_op, OpTypes::I32, 
    OpTypes::local_op, 
    OpTypes::local_op, OpTypes::I64, 
    OpTypes::local_op, 
    OpTypes::local_op, OpTypes::V128, 
    OpTypes::local_op, 
    OpTypes::EXNREF, OpTypes::local_op, OpTypes::EXNREF, 
    OpTypes::local_op, 
    OpTypes::F32, OpTypes::local_op, OpTypes::F32, 
    OpTypes::local_op, 
    OpTypes::F64, OpTypes::local_op, OpTypes::F64, 
    OpTypes::local_op, 
    OpTypes::I32, OpTypes::local_op, OpTypes::I32, 
    OpTypes::local_op, 
    OpTypes::I64, OpTypes::local_op, OpTypes::I64, 
    OpTypes::local_op, 
    OpTypes::V128, OpTypes::local_op, OpTypes::V128, 
    OpTypes::local_op, 
    OpTypes::Signature, 
    OpTypes::Signature, 
    OpTypes::I32, OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::I32, OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I32, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I32, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::F32, OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::F64, OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::i32imm_op, OpTypes::i32imm_op, OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    OpTypes::i32imm_op, OpTypes::i32imm_op, 
    OpTypes::i32imm_op, OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    OpTypes::i32imm_op, 
    OpTypes::I32, OpTypes::i32imm, OpTypes::I32, 
    OpTypes::i32imm, 
    OpTypes::i32imm_op, OpTypes::i32imm_op, OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    OpTypes::i32imm_op, OpTypes::i32imm_op, 
    OpTypes::I32, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::F32, OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::F64, OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::F32, OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::F64, OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::I32, OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::I32, OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I32, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    /**/
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::I32, 
    OpTypes::I32, 
    OpTypes::EXNREF, OpTypes::I32, 
    OpTypes::I32, 
    OpTypes::F32, OpTypes::I32, 
    OpTypes::I32, 
    OpTypes::F64, OpTypes::I32, 
    OpTypes::I32, 
    OpTypes::I32, OpTypes::I32, 
    OpTypes::I32, 
    OpTypes::I64, OpTypes::I32, 
    OpTypes::I32, 
    OpTypes::V128, OpTypes::I32, 
    OpTypes::I32, 
    OpTypes::V128, OpTypes::I32, 
    OpTypes::I32, 
    OpTypes::V128, OpTypes::I32, 
    OpTypes::I32, 
    OpTypes::V128, OpTypes::I32, 
    OpTypes::I32, 
    OpTypes::V128, OpTypes::I32, 
    OpTypes::I32, 
    OpTypes::V128, OpTypes::I32, 
    OpTypes::I32, 
    OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::I32, 
    OpTypes::I32, 
    OpTypes::V128, OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::vec_i8imm_op, OpTypes::I32, 
    OpTypes::vec_i8imm_op, 
    OpTypes::V128, OpTypes::V128, OpTypes::vec_i8imm_op, OpTypes::F64, 
    OpTypes::vec_i8imm_op, 
    OpTypes::V128, OpTypes::V128, OpTypes::vec_i8imm_op, OpTypes::I64, 
    OpTypes::vec_i8imm_op, 
    OpTypes::V128, OpTypes::V128, OpTypes::vec_i8imm_op, OpTypes::F32, 
    OpTypes::vec_i8imm_op, 
    OpTypes::V128, OpTypes::V128, OpTypes::vec_i8imm_op, OpTypes::I32, 
    OpTypes::vec_i8imm_op, 
    OpTypes::V128, OpTypes::V128, OpTypes::vec_i8imm_op, OpTypes::I32, 
    OpTypes::vec_i8imm_op, 
    OpTypes::EXNREF, 
    /**/
    /**/
    /**/
    OpTypes::function32_op, 
    OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::TypeIndex, OpTypes::i32imm, 
    OpTypes::function32_op, 
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::EXNREF, OpTypes::EXNREF, OpTypes::EXNREF, OpTypes::I32, 
    /**/
    OpTypes::F32, OpTypes::F32, OpTypes::F32, OpTypes::I32, 
    /**/
    OpTypes::F64, OpTypes::F64, OpTypes::F64, OpTypes::I32, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I64, OpTypes::I64, OpTypes::I32, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::I32, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::I32, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::I32, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::I32, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::I32, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::I32, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::I32, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::I32, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::I32, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::I32, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::I32, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::I32, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, 
    OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, OpTypes::vec_i8imm_op, 
    OpTypes::V128, OpTypes::I32, 
    /**/
    OpTypes::V128, OpTypes::F64, 
    /**/
    OpTypes::V128, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::F32, 
    /**/
    OpTypes::V128, OpTypes::I32, 
    /**/
    OpTypes::V128, OpTypes::I32, 
    /**/
    OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::F32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::F64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I32, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::I64, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::P2Align, OpTypes::offset32_op, OpTypes::I32, OpTypes::V128, 
    OpTypes::P2Align, OpTypes::offset32_op, 
    OpTypes::F32, OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::F64, OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::EXNREF, OpTypes::EXNREF, OpTypes::EXNREF, 
    /**/
    OpTypes::F32, OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::F64, OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::event_op, 
    OpTypes::event_op, 
    OpTypes::F32, OpTypes::F32, 
    /**/
    OpTypes::F64, OpTypes::F64, 
    /**/
    OpTypes::Signature, 
    OpTypes::Signature, 
    /**/
    /**/
    OpTypes::I32, OpTypes::I32, OpTypes::I32, 
    /**/
    OpTypes::I64, OpTypes::I64, OpTypes::I64, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
    /**/
    OpTypes::V128, OpTypes::V128, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace WebAssembly
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace WebAssembly {

enum StackBased {
	StackBased_true
};

// getStackOpcode
LLVM_READONLY
int getStackOpcode(uint16_t Opcode) {
static const uint16_t getStackOpcodeTable[][2] = {
  { WebAssembly::CATCHRET, WebAssembly::CATCHRET_S },
  { WebAssembly::CLEANUPRET, WebAssembly::CLEANUPRET_S },
  { WebAssembly::COMPILER_FENCE, WebAssembly::COMPILER_FENCE_S },
  { WebAssembly::RETHROW_IN_CATCH, WebAssembly::RETHROW_IN_CATCH_S },
  { WebAssembly::ABS_F32, WebAssembly::ABS_F32_S },
  { WebAssembly::ABS_F64, WebAssembly::ABS_F64_S },
  { WebAssembly::ABS_v2f64, WebAssembly::ABS_v2f64_S },
  { WebAssembly::ABS_v4f32, WebAssembly::ABS_v4f32_S },
  { WebAssembly::ADD_F32, WebAssembly::ADD_F32_S },
  { WebAssembly::ADD_F64, WebAssembly::ADD_F64_S },
  { WebAssembly::ADD_I32, WebAssembly::ADD_I32_S },
  { WebAssembly::ADD_I64, WebAssembly::ADD_I64_S },
  { WebAssembly::ADD_SAT_S_v16i8, WebAssembly::ADD_SAT_S_v16i8_S },
  { WebAssembly::ADD_SAT_S_v8i16, WebAssembly::ADD_SAT_S_v8i16_S },
  { WebAssembly::ADD_SAT_U_v16i8, WebAssembly::ADD_SAT_U_v16i8_S },
  { WebAssembly::ADD_SAT_U_v8i16, WebAssembly::ADD_SAT_U_v8i16_S },
  { WebAssembly::ADD_v16i8, WebAssembly::ADD_v16i8_S },
  { WebAssembly::ADD_v2f64, WebAssembly::ADD_v2f64_S },
  { WebAssembly::ADD_v2i64, WebAssembly::ADD_v2i64_S },
  { WebAssembly::ADD_v4f32, WebAssembly::ADD_v4f32_S },
  { WebAssembly::ADD_v4i32, WebAssembly::ADD_v4i32_S },
  { WebAssembly::ADD_v8i16, WebAssembly::ADD_v8i16_S },
  { WebAssembly::ADJCALLSTACKDOWN, WebAssembly::ADJCALLSTACKDOWN_S },
  { WebAssembly::ADJCALLSTACKUP, WebAssembly::ADJCALLSTACKUP_S },
  { WebAssembly::ALLTRUE_v16i8, WebAssembly::ALLTRUE_v16i8_S },
  { WebAssembly::ALLTRUE_v2i64, WebAssembly::ALLTRUE_v2i64_S },
  { WebAssembly::ALLTRUE_v4i32, WebAssembly::ALLTRUE_v4i32_S },
  { WebAssembly::ALLTRUE_v8i16, WebAssembly::ALLTRUE_v8i16_S },
  { WebAssembly::ANDNOT_v16i8, WebAssembly::ANDNOT_v16i8_S },
  { WebAssembly::ANDNOT_v2i64, WebAssembly::ANDNOT_v2i64_S },
  { WebAssembly::ANDNOT_v4i32, WebAssembly::ANDNOT_v4i32_S },
  { WebAssembly::ANDNOT_v8i16, WebAssembly::ANDNOT_v8i16_S },
  { WebAssembly::AND_I32, WebAssembly::AND_I32_S },
  { WebAssembly::AND_I64, WebAssembly::AND_I64_S },
  { WebAssembly::AND_v16i8, WebAssembly::AND_v16i8_S },
  { WebAssembly::AND_v2i64, WebAssembly::AND_v2i64_S },
  { WebAssembly::AND_v4i32, WebAssembly::AND_v4i32_S },
  { WebAssembly::AND_v8i16, WebAssembly::AND_v8i16_S },
  { WebAssembly::ANYTRUE_v16i8, WebAssembly::ANYTRUE_v16i8_S },
  { WebAssembly::ANYTRUE_v2i64, WebAssembly::ANYTRUE_v2i64_S },
  { WebAssembly::ANYTRUE_v4i32, WebAssembly::ANYTRUE_v4i32_S },
  { WebAssembly::ANYTRUE_v8i16, WebAssembly::ANYTRUE_v8i16_S },
  { WebAssembly::ARGUMENT_exnref, WebAssembly::ARGUMENT_exnref_S },
  { WebAssembly::ARGUMENT_f32, WebAssembly::ARGUMENT_f32_S },
  { WebAssembly::ARGUMENT_f64, WebAssembly::ARGUMENT_f64_S },
  { WebAssembly::ARGUMENT_i32, WebAssembly::ARGUMENT_i32_S },
  { WebAssembly::ARGUMENT_i64, WebAssembly::ARGUMENT_i64_S },
  { WebAssembly::ARGUMENT_v16i8, WebAssembly::ARGUMENT_v16i8_S },
  { WebAssembly::ARGUMENT_v2f64, WebAssembly::ARGUMENT_v2f64_S },
  { WebAssembly::ARGUMENT_v2i64, WebAssembly::ARGUMENT_v2i64_S },
  { WebAssembly::ARGUMENT_v4f32, WebAssembly::ARGUMENT_v4f32_S },
  { WebAssembly::ARGUMENT_v4i32, WebAssembly::ARGUMENT_v4i32_S },
  { WebAssembly::ARGUMENT_v8i16, WebAssembly::ARGUMENT_v8i16_S },
  { WebAssembly::ATOMIC_FENCE, WebAssembly::ATOMIC_FENCE_S },
  { WebAssembly::ATOMIC_LOAD16_U_I32, WebAssembly::ATOMIC_LOAD16_U_I32_S },
  { WebAssembly::ATOMIC_LOAD16_U_I64, WebAssembly::ATOMIC_LOAD16_U_I64_S },
  { WebAssembly::ATOMIC_LOAD32_U_I64, WebAssembly::ATOMIC_LOAD32_U_I64_S },
  { WebAssembly::ATOMIC_LOAD8_U_I32, WebAssembly::ATOMIC_LOAD8_U_I32_S },
  { WebAssembly::ATOMIC_LOAD8_U_I64, WebAssembly::ATOMIC_LOAD8_U_I64_S },
  { WebAssembly::ATOMIC_LOAD_I32, WebAssembly::ATOMIC_LOAD_I32_S },
  { WebAssembly::ATOMIC_LOAD_I64, WebAssembly::ATOMIC_LOAD_I64_S },
  { WebAssembly::ATOMIC_NOTIFY, WebAssembly::ATOMIC_NOTIFY_S },
  { WebAssembly::ATOMIC_RMW16_U_ADD_I32, WebAssembly::ATOMIC_RMW16_U_ADD_I32_S },
  { WebAssembly::ATOMIC_RMW16_U_ADD_I64, WebAssembly::ATOMIC_RMW16_U_ADD_I64_S },
  { WebAssembly::ATOMIC_RMW16_U_AND_I32, WebAssembly::ATOMIC_RMW16_U_AND_I32_S },
  { WebAssembly::ATOMIC_RMW16_U_AND_I64, WebAssembly::ATOMIC_RMW16_U_AND_I64_S },
  { WebAssembly::ATOMIC_RMW16_U_CMPXCHG_I32, WebAssembly::ATOMIC_RMW16_U_CMPXCHG_I32_S },
  { WebAssembly::ATOMIC_RMW16_U_CMPXCHG_I64, WebAssembly::ATOMIC_RMW16_U_CMPXCHG_I64_S },
  { WebAssembly::ATOMIC_RMW16_U_OR_I32, WebAssembly::ATOMIC_RMW16_U_OR_I32_S },
  { WebAssembly::ATOMIC_RMW16_U_OR_I64, WebAssembly::ATOMIC_RMW16_U_OR_I64_S },
  { WebAssembly::ATOMIC_RMW16_U_SUB_I32, WebAssembly::ATOMIC_RMW16_U_SUB_I32_S },
  { WebAssembly::ATOMIC_RMW16_U_SUB_I64, WebAssembly::ATOMIC_RMW16_U_SUB_I64_S },
  { WebAssembly::ATOMIC_RMW16_U_XCHG_I32, WebAssembly::ATOMIC_RMW16_U_XCHG_I32_S },
  { WebAssembly::ATOMIC_RMW16_U_XCHG_I64, WebAssembly::ATOMIC_RMW16_U_XCHG_I64_S },
  { WebAssembly::ATOMIC_RMW16_U_XOR_I32, WebAssembly::ATOMIC_RMW16_U_XOR_I32_S },
  { WebAssembly::ATOMIC_RMW16_U_XOR_I64, WebAssembly::ATOMIC_RMW16_U_XOR_I64_S },
  { WebAssembly::ATOMIC_RMW32_U_ADD_I64, WebAssembly::ATOMIC_RMW32_U_ADD_I64_S },
  { WebAssembly::ATOMIC_RMW32_U_AND_I64, WebAssembly::ATOMIC_RMW32_U_AND_I64_S },
  { WebAssembly::ATOMIC_RMW32_U_CMPXCHG_I64, WebAssembly::ATOMIC_RMW32_U_CMPXCHG_I64_S },
  { WebAssembly::ATOMIC_RMW32_U_OR_I64, WebAssembly::ATOMIC_RMW32_U_OR_I64_S },
  { WebAssembly::ATOMIC_RMW32_U_SUB_I64, WebAssembly::ATOMIC_RMW32_U_SUB_I64_S },
  { WebAssembly::ATOMIC_RMW32_U_XCHG_I64, WebAssembly::ATOMIC_RMW32_U_XCHG_I64_S },
  { WebAssembly::ATOMIC_RMW32_U_XOR_I64, WebAssembly::ATOMIC_RMW32_U_XOR_I64_S },
  { WebAssembly::ATOMIC_RMW8_U_ADD_I32, WebAssembly::ATOMIC_RMW8_U_ADD_I32_S },
  { WebAssembly::ATOMIC_RMW8_U_ADD_I64, WebAssembly::ATOMIC_RMW8_U_ADD_I64_S },
  { WebAssembly::ATOMIC_RMW8_U_AND_I32, WebAssembly::ATOMIC_RMW8_U_AND_I32_S },
  { WebAssembly::ATOMIC_RMW8_U_AND_I64, WebAssembly::ATOMIC_RMW8_U_AND_I64_S },
  { WebAssembly::ATOMIC_RMW8_U_CMPXCHG_I32, WebAssembly::ATOMIC_RMW8_U_CMPXCHG_I32_S },
  { WebAssembly::ATOMIC_RMW8_U_CMPXCHG_I64, WebAssembly::ATOMIC_RMW8_U_CMPXCHG_I64_S },
  { WebAssembly::ATOMIC_RMW8_U_OR_I32, WebAssembly::ATOMIC_RMW8_U_OR_I32_S },
  { WebAssembly::ATOMIC_RMW8_U_OR_I64, WebAssembly::ATOMIC_RMW8_U_OR_I64_S },
  { WebAssembly::ATOMIC_RMW8_U_SUB_I32, WebAssembly::ATOMIC_RMW8_U_SUB_I32_S },
  { WebAssembly::ATOMIC_RMW8_U_SUB_I64, WebAssembly::ATOMIC_RMW8_U_SUB_I64_S },
  { WebAssembly::ATOMIC_RMW8_U_XCHG_I32, WebAssembly::ATOMIC_RMW8_U_XCHG_I32_S },
  { WebAssembly::ATOMIC_RMW8_U_XCHG_I64, WebAssembly::ATOMIC_RMW8_U_XCHG_I64_S },
  { WebAssembly::ATOMIC_RMW8_U_XOR_I32, WebAssembly::ATOMIC_RMW8_U_XOR_I32_S },
  { WebAssembly::ATOMIC_RMW8_U_XOR_I64, WebAssembly::ATOMIC_RMW8_U_XOR_I64_S },
  { WebAssembly::ATOMIC_RMW_ADD_I32, WebAssembly::ATOMIC_RMW_ADD_I32_S },
  { WebAssembly::ATOMIC_RMW_ADD_I64, WebAssembly::ATOMIC_RMW_ADD_I64_S },
  { WebAssembly::ATOMIC_RMW_AND_I32, WebAssembly::ATOMIC_RMW_AND_I32_S },
  { WebAssembly::ATOMIC_RMW_AND_I64, WebAssembly::ATOMIC_RMW_AND_I64_S },
  { WebAssembly::ATOMIC_RMW_CMPXCHG_I32, WebAssembly::ATOMIC_RMW_CMPXCHG_I32_S },
  { WebAssembly::ATOMIC_RMW_CMPXCHG_I64, WebAssembly::ATOMIC_RMW_CMPXCHG_I64_S },
  { WebAssembly::ATOMIC_RMW_OR_I32, WebAssembly::ATOMIC_RMW_OR_I32_S },
  { WebAssembly::ATOMIC_RMW_OR_I64, WebAssembly::ATOMIC_RMW_OR_I64_S },
  { WebAssembly::ATOMIC_RMW_SUB_I32, WebAssembly::ATOMIC_RMW_SUB_I32_S },
  { WebAssembly::ATOMIC_RMW_SUB_I64, WebAssembly::ATOMIC_RMW_SUB_I64_S },
  { WebAssembly::ATOMIC_RMW_XCHG_I32, WebAssembly::ATOMIC_RMW_XCHG_I32_S },
  { WebAssembly::ATOMIC_RMW_XCHG_I64, WebAssembly::ATOMIC_RMW_XCHG_I64_S },
  { WebAssembly::ATOMIC_RMW_XOR_I32, WebAssembly::ATOMIC_RMW_XOR_I32_S },
  { WebAssembly::ATOMIC_RMW_XOR_I64, WebAssembly::ATOMIC_RMW_XOR_I64_S },
  { WebAssembly::ATOMIC_STORE16_I32, WebAssembly::ATOMIC_STORE16_I32_S },
  { WebAssembly::ATOMIC_STORE16_I64, WebAssembly::ATOMIC_STORE16_I64_S },
  { WebAssembly::ATOMIC_STORE32_I64, WebAssembly::ATOMIC_STORE32_I64_S },
  { WebAssembly::ATOMIC_STORE8_I32, WebAssembly::ATOMIC_STORE8_I32_S },
  { WebAssembly::ATOMIC_STORE8_I64, WebAssembly::ATOMIC_STORE8_I64_S },
  { WebAssembly::ATOMIC_STORE_I32, WebAssembly::ATOMIC_STORE_I32_S },
  { WebAssembly::ATOMIC_STORE_I64, WebAssembly::ATOMIC_STORE_I64_S },
  { WebAssembly::ATOMIC_WAIT_I32, WebAssembly::ATOMIC_WAIT_I32_S },
  { WebAssembly::ATOMIC_WAIT_I64, WebAssembly::ATOMIC_WAIT_I64_S },
  { WebAssembly::AVGR_U_v16i8, WebAssembly::AVGR_U_v16i8_S },
  { WebAssembly::AVGR_U_v8i16, WebAssembly::AVGR_U_v8i16_S },
  { WebAssembly::BITSELECT_v16i8, WebAssembly::BITSELECT_v16i8_S },
  { WebAssembly::BITSELECT_v2f64, WebAssembly::BITSELECT_v2f64_S },
  { WebAssembly::BITSELECT_v2i64, WebAssembly::BITSELECT_v2i64_S },
  { WebAssembly::BITSELECT_v4f32, WebAssembly::BITSELECT_v4f32_S },
  { WebAssembly::BITSELECT_v4i32, WebAssembly::BITSELECT_v4i32_S },
  { WebAssembly::BITSELECT_v8i16, WebAssembly::BITSELECT_v8i16_S },
  { WebAssembly::BLOCK, WebAssembly::BLOCK_S },
  { WebAssembly::BR, WebAssembly::BR_S },
  { WebAssembly::BR_IF, WebAssembly::BR_IF_S },
  { WebAssembly::BR_ON_EXN, WebAssembly::BR_ON_EXN_S },
  { WebAssembly::BR_TABLE_I32, WebAssembly::BR_TABLE_I32_S },
  { WebAssembly::BR_TABLE_I64, WebAssembly::BR_TABLE_I64_S },
  { WebAssembly::BR_UNLESS, WebAssembly::BR_UNLESS_S },
  { WebAssembly::CALL_INDIRECT_VOID, WebAssembly::CALL_INDIRECT_VOID_S },
  { WebAssembly::CALL_INDIRECT_exnref, WebAssembly::CALL_INDIRECT_exnref_S },
  { WebAssembly::CALL_INDIRECT_f32, WebAssembly::CALL_INDIRECT_f32_S },
  { WebAssembly::CALL_INDIRECT_f64, WebAssembly::CALL_INDIRECT_f64_S },
  { WebAssembly::CALL_INDIRECT_i32, WebAssembly::CALL_INDIRECT_i32_S },
  { WebAssembly::CALL_INDIRECT_i64, WebAssembly::CALL_INDIRECT_i64_S },
  { WebAssembly::CALL_INDIRECT_v16i8, WebAssembly::CALL_INDIRECT_v16i8_S },
  { WebAssembly::CALL_INDIRECT_v2f64, WebAssembly::CALL_INDIRECT_v2f64_S },
  { WebAssembly::CALL_INDIRECT_v2i64, WebAssembly::CALL_INDIRECT_v2i64_S },
  { WebAssembly::CALL_INDIRECT_v4f32, WebAssembly::CALL_INDIRECT_v4f32_S },
  { WebAssembly::CALL_INDIRECT_v4i32, WebAssembly::CALL_INDIRECT_v4i32_S },
  { WebAssembly::CALL_INDIRECT_v8i16, WebAssembly::CALL_INDIRECT_v8i16_S },
  { WebAssembly::CALL_VOID, WebAssembly::CALL_VOID_S },
  { WebAssembly::CALL_exnref, WebAssembly::CALL_exnref_S },
  { WebAssembly::CALL_f32, WebAssembly::CALL_f32_S },
  { WebAssembly::CALL_f64, WebAssembly::CALL_f64_S },
  { WebAssembly::CALL_i32, WebAssembly::CALL_i32_S },
  { WebAssembly::CALL_i64, WebAssembly::CALL_i64_S },
  { WebAssembly::CALL_v16i8, WebAssembly::CALL_v16i8_S },
  { WebAssembly::CALL_v2f64, WebAssembly::CALL_v2f64_S },
  { WebAssembly::CALL_v2i64, WebAssembly::CALL_v2i64_S },
  { WebAssembly::CALL_v4f32, WebAssembly::CALL_v4f32_S },
  { WebAssembly::CALL_v4i32, WebAssembly::CALL_v4i32_S },
  { WebAssembly::CALL_v8i16, WebAssembly::CALL_v8i16_S },
  { WebAssembly::CATCH, WebAssembly::CATCH_S },
  { WebAssembly::CEIL_F32, WebAssembly::CEIL_F32_S },
  { WebAssembly::CEIL_F64, WebAssembly::CEIL_F64_S },
  { WebAssembly::CLZ_I32, WebAssembly::CLZ_I32_S },
  { WebAssembly::CLZ_I64, WebAssembly::CLZ_I64_S },
  { WebAssembly::CONST_F32, WebAssembly::CONST_F32_S },
  { WebAssembly::CONST_F64, WebAssembly::CONST_F64_S },
  { WebAssembly::CONST_I32, WebAssembly::CONST_I32_S },
  { WebAssembly::CONST_I64, WebAssembly::CONST_I64_S },
  { WebAssembly::CONST_V128_v16i8, WebAssembly::CONST_V128_v16i8_S },
  { WebAssembly::CONST_V128_v2f64, WebAssembly::CONST_V128_v2f64_S },
  { WebAssembly::CONST_V128_v2i64, WebAssembly::CONST_V128_v2i64_S },
  { WebAssembly::CONST_V128_v4f32, WebAssembly::CONST_V128_v4f32_S },
  { WebAssembly::CONST_V128_v4i32, WebAssembly::CONST_V128_v4i32_S },
  { WebAssembly::CONST_V128_v8i16, WebAssembly::CONST_V128_v8i16_S },
  { WebAssembly::COPYSIGN_F32, WebAssembly::COPYSIGN_F32_S },
  { WebAssembly::COPYSIGN_F64, WebAssembly::COPYSIGN_F64_S },
  { WebAssembly::COPY_EXNREF, WebAssembly::COPY_EXNREF_S },
  { WebAssembly::COPY_F32, WebAssembly::COPY_F32_S },
  { WebAssembly::COPY_F64, WebAssembly::COPY_F64_S },
  { WebAssembly::COPY_I32, WebAssembly::COPY_I32_S },
  { WebAssembly::COPY_I64, WebAssembly::COPY_I64_S },
  { WebAssembly::COPY_V128, WebAssembly::COPY_V128_S },
  { WebAssembly::CTZ_I32, WebAssembly::CTZ_I32_S },
  { WebAssembly::CTZ_I64, WebAssembly::CTZ_I64_S },
  { WebAssembly::DATA_DROP, WebAssembly::DATA_DROP_S },
  { WebAssembly::DIV_F32, WebAssembly::DIV_F32_S },
  { WebAssembly::DIV_F64, WebAssembly::DIV_F64_S },
  { WebAssembly::DIV_S_I32, WebAssembly::DIV_S_I32_S },
  { WebAssembly::DIV_S_I64, WebAssembly::DIV_S_I64_S },
  { WebAssembly::DIV_U_I32, WebAssembly::DIV_U_I32_S },
  { WebAssembly::DIV_U_I64, WebAssembly::DIV_U_I64_S },
  { WebAssembly::DIV_v2f64, WebAssembly::DIV_v2f64_S },
  { WebAssembly::DIV_v4f32, WebAssembly::DIV_v4f32_S },
  { WebAssembly::DOT, WebAssembly::DOT_S },
  { WebAssembly::DROP_EXNREF, WebAssembly::DROP_EXNREF_S },
  { WebAssembly::DROP_F32, WebAssembly::DROP_F32_S },
  { WebAssembly::DROP_F64, WebAssembly::DROP_F64_S },
  { WebAssembly::DROP_I32, WebAssembly::DROP_I32_S },
  { WebAssembly::DROP_I64, WebAssembly::DROP_I64_S },
  { WebAssembly::DROP_V128, WebAssembly::DROP_V128_S },
  { WebAssembly::ELSE, WebAssembly::ELSE_S },
  { WebAssembly::END, WebAssembly::END_S },
  { WebAssembly::END_BLOCK, WebAssembly::END_BLOCK_S },
  { WebAssembly::END_FUNCTION, WebAssembly::END_FUNCTION_S },
  { WebAssembly::END_IF, WebAssembly::END_IF_S },
  { WebAssembly::END_LOOP, WebAssembly::END_LOOP_S },
  { WebAssembly::END_TRY, WebAssembly::END_TRY_S },
  { WebAssembly::EQZ_I32, WebAssembly::EQZ_I32_S },
  { WebAssembly::EQZ_I64, WebAssembly::EQZ_I64_S },
  { WebAssembly::EQ_F32, WebAssembly::EQ_F32_S },
  { WebAssembly::EQ_F64, WebAssembly::EQ_F64_S },
  { WebAssembly::EQ_I32, WebAssembly::EQ_I32_S },
  { WebAssembly::EQ_I64, WebAssembly::EQ_I64_S },
  { WebAssembly::EQ_v16i8, WebAssembly::EQ_v16i8_S },
  { WebAssembly::EQ_v2f64, WebAssembly::EQ_v2f64_S },
  { WebAssembly::EQ_v4f32, WebAssembly::EQ_v4f32_S },
  { WebAssembly::EQ_v4i32, WebAssembly::EQ_v4i32_S },
  { WebAssembly::EQ_v8i16, WebAssembly::EQ_v8i16_S },
  { WebAssembly::EXTRACT_EXCEPTION_I32, WebAssembly::EXTRACT_EXCEPTION_I32_S },
  { WebAssembly::EXTRACT_LANE_v16i8_s, WebAssembly::EXTRACT_LANE_v16i8_s_S },
  { WebAssembly::EXTRACT_LANE_v16i8_u, WebAssembly::EXTRACT_LANE_v16i8_u_S },
  { WebAssembly::EXTRACT_LANE_v2f64, WebAssembly::EXTRACT_LANE_v2f64_S },
  { WebAssembly::EXTRACT_LANE_v2i64, WebAssembly::EXTRACT_LANE_v2i64_S },
  { WebAssembly::EXTRACT_LANE_v4f32, WebAssembly::EXTRACT_LANE_v4f32_S },
  { WebAssembly::EXTRACT_LANE_v4i32, WebAssembly::EXTRACT_LANE_v4i32_S },
  { WebAssembly::EXTRACT_LANE_v8i16_s, WebAssembly::EXTRACT_LANE_v8i16_s_S },
  { WebAssembly::EXTRACT_LANE_v8i16_u, WebAssembly::EXTRACT_LANE_v8i16_u_S },
  { WebAssembly::F32_CONVERT_S_I32, WebAssembly::F32_CONVERT_S_I32_S },
  { WebAssembly::F32_CONVERT_S_I64, WebAssembly::F32_CONVERT_S_I64_S },
  { WebAssembly::F32_CONVERT_U_I32, WebAssembly::F32_CONVERT_U_I32_S },
  { WebAssembly::F32_CONVERT_U_I64, WebAssembly::F32_CONVERT_U_I64_S },
  { WebAssembly::F32_DEMOTE_F64, WebAssembly::F32_DEMOTE_F64_S },
  { WebAssembly::F32_REINTERPRET_I32, WebAssembly::F32_REINTERPRET_I32_S },
  { WebAssembly::F64_CONVERT_S_I32, WebAssembly::F64_CONVERT_S_I32_S },
  { WebAssembly::F64_CONVERT_S_I64, WebAssembly::F64_CONVERT_S_I64_S },
  { WebAssembly::F64_CONVERT_U_I32, WebAssembly::F64_CONVERT_U_I32_S },
  { WebAssembly::F64_CONVERT_U_I64, WebAssembly::F64_CONVERT_U_I64_S },
  { WebAssembly::F64_PROMOTE_F32, WebAssembly::F64_PROMOTE_F32_S },
  { WebAssembly::F64_REINTERPRET_I64, WebAssembly::F64_REINTERPRET_I64_S },
  { WebAssembly::FALLTHROUGH_RETURN, WebAssembly::FALLTHROUGH_RETURN_S },
  { WebAssembly::FLOOR_F32, WebAssembly::FLOOR_F32_S },
  { WebAssembly::FLOOR_F64, WebAssembly::FLOOR_F64_S },
  { WebAssembly::FP_TO_SINT_I32_F32, WebAssembly::FP_TO_SINT_I32_F32_S },
  { WebAssembly::FP_TO_SINT_I32_F64, WebAssembly::FP_TO_SINT_I32_F64_S },
  { WebAssembly::FP_TO_SINT_I64_F32, WebAssembly::FP_TO_SINT_I64_F32_S },
  { WebAssembly::FP_TO_SINT_I64_F64, WebAssembly::FP_TO_SINT_I64_F64_S },
  { WebAssembly::FP_TO_UINT_I32_F32, WebAssembly::FP_TO_UINT_I32_F32_S },
  { WebAssembly::FP_TO_UINT_I32_F64, WebAssembly::FP_TO_UINT_I32_F64_S },
  { WebAssembly::FP_TO_UINT_I64_F32, WebAssembly::FP_TO_UINT_I64_F32_S },
  { WebAssembly::FP_TO_UINT_I64_F64, WebAssembly::FP_TO_UINT_I64_F64_S },
  { WebAssembly::GE_F32, WebAssembly::GE_F32_S },
  { WebAssembly::GE_F64, WebAssembly::GE_F64_S },
  { WebAssembly::GE_S_I32, WebAssembly::GE_S_I32_S },
  { WebAssembly::GE_S_I64, WebAssembly::GE_S_I64_S },
  { WebAssembly::GE_S_v16i8, WebAssembly::GE_S_v16i8_S },
  { WebAssembly::GE_S_v4i32, WebAssembly::GE_S_v4i32_S },
  { WebAssembly::GE_S_v8i16, WebAssembly::GE_S_v8i16_S },
  { WebAssembly::GE_U_I32, WebAssembly::GE_U_I32_S },
  { WebAssembly::GE_U_I64, WebAssembly::GE_U_I64_S },
  { WebAssembly::GE_U_v16i8, WebAssembly::GE_U_v16i8_S },
  { WebAssembly::GE_U_v4i32, WebAssembly::GE_U_v4i32_S },
  { WebAssembly::GE_U_v8i16, WebAssembly::GE_U_v8i16_S },
  { WebAssembly::GE_v2f64, WebAssembly::GE_v2f64_S },
  { WebAssembly::GE_v4f32, WebAssembly::GE_v4f32_S },
  { WebAssembly::GLOBAL_GET_EXNREF, WebAssembly::GLOBAL_GET_EXNREF_S },
  { WebAssembly::GLOBAL_GET_F32, WebAssembly::GLOBAL_GET_F32_S },
  { WebAssembly::GLOBAL_GET_F64, WebAssembly::GLOBAL_GET_F64_S },
  { WebAssembly::GLOBAL_GET_I32, WebAssembly::GLOBAL_GET_I32_S },
  { WebAssembly::GLOBAL_GET_I64, WebAssembly::GLOBAL_GET_I64_S },
  { WebAssembly::GLOBAL_GET_V128, WebAssembly::GLOBAL_GET_V128_S },
  { WebAssembly::GLOBAL_SET_EXNREF, WebAssembly::GLOBAL_SET_EXNREF_S },
  { WebAssembly::GLOBAL_SET_F32, WebAssembly::GLOBAL_SET_F32_S },
  { WebAssembly::GLOBAL_SET_F64, WebAssembly::GLOBAL_SET_F64_S },
  { WebAssembly::GLOBAL_SET_I32, WebAssembly::GLOBAL_SET_I32_S },
  { WebAssembly::GLOBAL_SET_I64, WebAssembly::GLOBAL_SET_I64_S },
  { WebAssembly::GLOBAL_SET_V128, WebAssembly::GLOBAL_SET_V128_S },
  { WebAssembly::GT_F32, WebAssembly::GT_F32_S },
  { WebAssembly::GT_F64, WebAssembly::GT_F64_S },
  { WebAssembly::GT_S_I32, WebAssembly::GT_S_I32_S },
  { WebAssembly::GT_S_I64, WebAssembly::GT_S_I64_S },
  { WebAssembly::GT_S_v16i8, WebAssembly::GT_S_v16i8_S },
  { WebAssembly::GT_S_v4i32, WebAssembly::GT_S_v4i32_S },
  { WebAssembly::GT_S_v8i16, WebAssembly::GT_S_v8i16_S },
  { WebAssembly::GT_U_I32, WebAssembly::GT_U_I32_S },
  { WebAssembly::GT_U_I64, WebAssembly::GT_U_I64_S },
  { WebAssembly::GT_U_v16i8, WebAssembly::GT_U_v16i8_S },
  { WebAssembly::GT_U_v4i32, WebAssembly::GT_U_v4i32_S },
  { WebAssembly::GT_U_v8i16, WebAssembly::GT_U_v8i16_S },
  { WebAssembly::GT_v2f64, WebAssembly::GT_v2f64_S },
  { WebAssembly::GT_v4f32, WebAssembly::GT_v4f32_S },
  { WebAssembly::I32_EXTEND16_S_I32, WebAssembly::I32_EXTEND16_S_I32_S },
  { WebAssembly::I32_EXTEND8_S_I32, WebAssembly::I32_EXTEND8_S_I32_S },
  { WebAssembly::I32_REINTERPRET_F32, WebAssembly::I32_REINTERPRET_F32_S },
  { WebAssembly::I32_TRUNC_S_F32, WebAssembly::I32_TRUNC_S_F32_S },
  { WebAssembly::I32_TRUNC_S_F64, WebAssembly::I32_TRUNC_S_F64_S },
  { WebAssembly::I32_TRUNC_S_SAT_F32, WebAssembly::I32_TRUNC_S_SAT_F32_S },
  { WebAssembly::I32_TRUNC_S_SAT_F64, WebAssembly::I32_TRUNC_S_SAT_F64_S },
  { WebAssembly::I32_TRUNC_U_F32, WebAssembly::I32_TRUNC_U_F32_S },
  { WebAssembly::I32_TRUNC_U_F64, WebAssembly::I32_TRUNC_U_F64_S },
  { WebAssembly::I32_TRUNC_U_SAT_F32, WebAssembly::I32_TRUNC_U_SAT_F32_S },
  { WebAssembly::I32_TRUNC_U_SAT_F64, WebAssembly::I32_TRUNC_U_SAT_F64_S },
  { WebAssembly::I32_WRAP_I64, WebAssembly::I32_WRAP_I64_S },
  { WebAssembly::I64_EXTEND16_S_I64, WebAssembly::I64_EXTEND16_S_I64_S },
  { WebAssembly::I64_EXTEND32_S_I64, WebAssembly::I64_EXTEND32_S_I64_S },
  { WebAssembly::I64_EXTEND8_S_I64, WebAssembly::I64_EXTEND8_S_I64_S },
  { WebAssembly::I64_EXTEND_S_I32, WebAssembly::I64_EXTEND_S_I32_S },
  { WebAssembly::I64_EXTEND_U_I32, WebAssembly::I64_EXTEND_U_I32_S },
  { WebAssembly::I64_REINTERPRET_F64, WebAssembly::I64_REINTERPRET_F64_S },
  { WebAssembly::I64_TRUNC_S_F32, WebAssembly::I64_TRUNC_S_F32_S },
  { WebAssembly::I64_TRUNC_S_F64, WebAssembly::I64_TRUNC_S_F64_S },
  { WebAssembly::I64_TRUNC_S_SAT_F32, WebAssembly::I64_TRUNC_S_SAT_F32_S },
  { WebAssembly::I64_TRUNC_S_SAT_F64, WebAssembly::I64_TRUNC_S_SAT_F64_S },
  { WebAssembly::I64_TRUNC_U_F32, WebAssembly::I64_TRUNC_U_F32_S },
  { WebAssembly::I64_TRUNC_U_F64, WebAssembly::I64_TRUNC_U_F64_S },
  { WebAssembly::I64_TRUNC_U_SAT_F32, WebAssembly::I64_TRUNC_U_SAT_F32_S },
  { WebAssembly::I64_TRUNC_U_SAT_F64, WebAssembly::I64_TRUNC_U_SAT_F64_S },
  { WebAssembly::IF, WebAssembly::IF_S },
  { WebAssembly::LE_F32, WebAssembly::LE_F32_S },
  { WebAssembly::LE_F64, WebAssembly::LE_F64_S },
  { WebAssembly::LE_S_I32, WebAssembly::LE_S_I32_S },
  { WebAssembly::LE_S_I64, WebAssembly::LE_S_I64_S },
  { WebAssembly::LE_S_v16i8, WebAssembly::LE_S_v16i8_S },
  { WebAssembly::LE_S_v4i32, WebAssembly::LE_S_v4i32_S },
  { WebAssembly::LE_S_v8i16, WebAssembly::LE_S_v8i16_S },
  { WebAssembly::LE_U_I32, WebAssembly::LE_U_I32_S },
  { WebAssembly::LE_U_I64, WebAssembly::LE_U_I64_S },
  { WebAssembly::LE_U_v16i8, WebAssembly::LE_U_v16i8_S },
  { WebAssembly::LE_U_v4i32, WebAssembly::LE_U_v4i32_S },
  { WebAssembly::LE_U_v8i16, WebAssembly::LE_U_v8i16_S },
  { WebAssembly::LE_v2f64, WebAssembly::LE_v2f64_S },
  { WebAssembly::LE_v4f32, WebAssembly::LE_v4f32_S },
  { WebAssembly::LOAD16_S_I32, WebAssembly::LOAD16_S_I32_S },
  { WebAssembly::LOAD16_S_I64, WebAssembly::LOAD16_S_I64_S },
  { WebAssembly::LOAD16_U_I32, WebAssembly::LOAD16_U_I32_S },
  { WebAssembly::LOAD16_U_I64, WebAssembly::LOAD16_U_I64_S },
  { WebAssembly::LOAD32_S_I64, WebAssembly::LOAD32_S_I64_S },
  { WebAssembly::LOAD32_U_I64, WebAssembly::LOAD32_U_I64_S },
  { WebAssembly::LOAD8_S_I32, WebAssembly::LOAD8_S_I32_S },
  { WebAssembly::LOAD8_S_I64, WebAssembly::LOAD8_S_I64_S },
  { WebAssembly::LOAD8_U_I32, WebAssembly::LOAD8_U_I32_S },
  { WebAssembly::LOAD8_U_I64, WebAssembly::LOAD8_U_I64_S },
  { WebAssembly::LOAD_EXTEND_S_v2i64, WebAssembly::LOAD_EXTEND_S_v2i64_S },
  { WebAssembly::LOAD_EXTEND_S_v4i32, WebAssembly::LOAD_EXTEND_S_v4i32_S },
  { WebAssembly::LOAD_EXTEND_S_v8i16, WebAssembly::LOAD_EXTEND_S_v8i16_S },
  { WebAssembly::LOAD_EXTEND_U_v2i64, WebAssembly::LOAD_EXTEND_U_v2i64_S },
  { WebAssembly::LOAD_EXTEND_U_v4i32, WebAssembly::LOAD_EXTEND_U_v4i32_S },
  { WebAssembly::LOAD_EXTEND_U_v8i16, WebAssembly::LOAD_EXTEND_U_v8i16_S },
  { WebAssembly::LOAD_F32, WebAssembly::LOAD_F32_S },
  { WebAssembly::LOAD_F64, WebAssembly::LOAD_F64_S },
  { WebAssembly::LOAD_I32, WebAssembly::LOAD_I32_S },
  { WebAssembly::LOAD_I64, WebAssembly::LOAD_I64_S },
  { WebAssembly::LOAD_SPLAT_v16x8, WebAssembly::LOAD_SPLAT_v16x8_S },
  { WebAssembly::LOAD_SPLAT_v32x4, WebAssembly::LOAD_SPLAT_v32x4_S },
  { WebAssembly::LOAD_SPLAT_v64x2, WebAssembly::LOAD_SPLAT_v64x2_S },
  { WebAssembly::LOAD_SPLAT_v8x16, WebAssembly::LOAD_SPLAT_v8x16_S },
  { WebAssembly::LOAD_V128, WebAssembly::LOAD_V128_S },
  { WebAssembly::LOCAL_GET_EXNREF, WebAssembly::LOCAL_GET_EXNREF_S },
  { WebAssembly::LOCAL_GET_F32, WebAssembly::LOCAL_GET_F32_S },
  { WebAssembly::LOCAL_GET_F64, WebAssembly::LOCAL_GET_F64_S },
  { WebAssembly::LOCAL_GET_I32, WebAssembly::LOCAL_GET_I32_S },
  { WebAssembly::LOCAL_GET_I64, WebAssembly::LOCAL_GET_I64_S },
  { WebAssembly::LOCAL_GET_V128, WebAssembly::LOCAL_GET_V128_S },
  { WebAssembly::LOCAL_SET_EXNREF, WebAssembly::LOCAL_SET_EXNREF_S },
  { WebAssembly::LOCAL_SET_F32, WebAssembly::LOCAL_SET_F32_S },
  { WebAssembly::LOCAL_SET_F64, WebAssembly::LOCAL_SET_F64_S },
  { WebAssembly::LOCAL_SET_I32, WebAssembly::LOCAL_SET_I32_S },
  { WebAssembly::LOCAL_SET_I64, WebAssembly::LOCAL_SET_I64_S },
  { WebAssembly::LOCAL_SET_V128, WebAssembly::LOCAL_SET_V128_S },
  { WebAssembly::LOCAL_TEE_EXNREF, WebAssembly::LOCAL_TEE_EXNREF_S },
  { WebAssembly::LOCAL_TEE_F32, WebAssembly::LOCAL_TEE_F32_S },
  { WebAssembly::LOCAL_TEE_F64, WebAssembly::LOCAL_TEE_F64_S },
  { WebAssembly::LOCAL_TEE_I32, WebAssembly::LOCAL_TEE_I32_S },
  { WebAssembly::LOCAL_TEE_I64, WebAssembly::LOCAL_TEE_I64_S },
  { WebAssembly::LOCAL_TEE_V128, WebAssembly::LOCAL_TEE_V128_S },
  { WebAssembly::LOOP, WebAssembly::LOOP_S },
  { WebAssembly::LT_F32, WebAssembly::LT_F32_S },
  { WebAssembly::LT_F64, WebAssembly::LT_F64_S },
  { WebAssembly::LT_S_I32, WebAssembly::LT_S_I32_S },
  { WebAssembly::LT_S_I64, WebAssembly::LT_S_I64_S },
  { WebAssembly::LT_S_v16i8, WebAssembly::LT_S_v16i8_S },
  { WebAssembly::LT_S_v4i32, WebAssembly::LT_S_v4i32_S },
  { WebAssembly::LT_S_v8i16, WebAssembly::LT_S_v8i16_S },
  { WebAssembly::LT_U_I32, WebAssembly::LT_U_I32_S },
  { WebAssembly::LT_U_I64, WebAssembly::LT_U_I64_S },
  { WebAssembly::LT_U_v16i8, WebAssembly::LT_U_v16i8_S },
  { WebAssembly::LT_U_v4i32, WebAssembly::LT_U_v4i32_S },
  { WebAssembly::LT_U_v8i16, WebAssembly::LT_U_v8i16_S },
  { WebAssembly::LT_v2f64, WebAssembly::LT_v2f64_S },
  { WebAssembly::LT_v4f32, WebAssembly::LT_v4f32_S },
  { WebAssembly::MAX_F32, WebAssembly::MAX_F32_S },
  { WebAssembly::MAX_F64, WebAssembly::MAX_F64_S },
  { WebAssembly::MAX_S_v16i8, WebAssembly::MAX_S_v16i8_S },
  { WebAssembly::MAX_S_v4i32, WebAssembly::MAX_S_v4i32_S },
  { WebAssembly::MAX_S_v8i16, WebAssembly::MAX_S_v8i16_S },
  { WebAssembly::MAX_U_v16i8, WebAssembly::MAX_U_v16i8_S },
  { WebAssembly::MAX_U_v4i32, WebAssembly::MAX_U_v4i32_S },
  { WebAssembly::MAX_U_v8i16, WebAssembly::MAX_U_v8i16_S },
  { WebAssembly::MAX_v2f64, WebAssembly::MAX_v2f64_S },
  { WebAssembly::MAX_v4f32, WebAssembly::MAX_v4f32_S },
  { WebAssembly::MEMORY_COPY, WebAssembly::MEMORY_COPY_S },
  { WebAssembly::MEMORY_FILL, WebAssembly::MEMORY_FILL_S },
  { WebAssembly::MEMORY_GROW_I32, WebAssembly::MEMORY_GROW_I32_S },
  { WebAssembly::MEMORY_INIT, WebAssembly::MEMORY_INIT_S },
  { WebAssembly::MEMORY_SIZE_I32, WebAssembly::MEMORY_SIZE_I32_S },
  { WebAssembly::MIN_F32, WebAssembly::MIN_F32_S },
  { WebAssembly::MIN_F64, WebAssembly::MIN_F64_S },
  { WebAssembly::MIN_S_v16i8, WebAssembly::MIN_S_v16i8_S },
  { WebAssembly::MIN_S_v4i32, WebAssembly::MIN_S_v4i32_S },
  { WebAssembly::MIN_S_v8i16, WebAssembly::MIN_S_v8i16_S },
  { WebAssembly::MIN_U_v16i8, WebAssembly::MIN_U_v16i8_S },
  { WebAssembly::MIN_U_v4i32, WebAssembly::MIN_U_v4i32_S },
  { WebAssembly::MIN_U_v8i16, WebAssembly::MIN_U_v8i16_S },
  { WebAssembly::MIN_v2f64, WebAssembly::MIN_v2f64_S },
  { WebAssembly::MIN_v4f32, WebAssembly::MIN_v4f32_S },
  { WebAssembly::MUL_F32, WebAssembly::MUL_F32_S },
  { WebAssembly::MUL_F64, WebAssembly::MUL_F64_S },
  { WebAssembly::MUL_I32, WebAssembly::MUL_I32_S },
  { WebAssembly::MUL_I64, WebAssembly::MUL_I64_S },
  { WebAssembly::MUL_v16i8, WebAssembly::MUL_v16i8_S },
  { WebAssembly::MUL_v2f64, WebAssembly::MUL_v2f64_S },
  { WebAssembly::MUL_v4f32, WebAssembly::MUL_v4f32_S },
  { WebAssembly::MUL_v4i32, WebAssembly::MUL_v4i32_S },
  { WebAssembly::MUL_v8i16, WebAssembly::MUL_v8i16_S },
  { WebAssembly::NARROW_S_v16i8, WebAssembly::NARROW_S_v16i8_S },
  { WebAssembly::NARROW_S_v8i16, WebAssembly::NARROW_S_v8i16_S },
  { WebAssembly::NARROW_U_v16i8, WebAssembly::NARROW_U_v16i8_S },
  { WebAssembly::NARROW_U_v8i16, WebAssembly::NARROW_U_v8i16_S },
  { WebAssembly::NEAREST_F32, WebAssembly::NEAREST_F32_S },
  { WebAssembly::NEAREST_F64, WebAssembly::NEAREST_F64_S },
  { WebAssembly::NEG_F32, WebAssembly::NEG_F32_S },
  { WebAssembly::NEG_F64, WebAssembly::NEG_F64_S },
  { WebAssembly::NEG_v16i8, WebAssembly::NEG_v16i8_S },
  { WebAssembly::NEG_v2f64, WebAssembly::NEG_v2f64_S },
  { WebAssembly::NEG_v2i64, WebAssembly::NEG_v2i64_S },
  { WebAssembly::NEG_v4f32, WebAssembly::NEG_v4f32_S },
  { WebAssembly::NEG_v4i32, WebAssembly::NEG_v4i32_S },
  { WebAssembly::NEG_v8i16, WebAssembly::NEG_v8i16_S },
  { WebAssembly::NE_F32, WebAssembly::NE_F32_S },
  { WebAssembly::NE_F64, WebAssembly::NE_F64_S },
  { WebAssembly::NE_I32, WebAssembly::NE_I32_S },
  { WebAssembly::NE_I64, WebAssembly::NE_I64_S },
  { WebAssembly::NE_v16i8, WebAssembly::NE_v16i8_S },
  { WebAssembly::NE_v2f64, WebAssembly::NE_v2f64_S },
  { WebAssembly::NE_v4f32, WebAssembly::NE_v4f32_S },
  { WebAssembly::NE_v4i32, WebAssembly::NE_v4i32_S },
  { WebAssembly::NE_v8i16, WebAssembly::NE_v8i16_S },
  { WebAssembly::NOP, WebAssembly::NOP_S },
  { WebAssembly::NOT_v16i8, WebAssembly::NOT_v16i8_S },
  { WebAssembly::NOT_v2i64, WebAssembly::NOT_v2i64_S },
  { WebAssembly::NOT_v4i32, WebAssembly::NOT_v4i32_S },
  { WebAssembly::NOT_v8i16, WebAssembly::NOT_v8i16_S },
  { WebAssembly::OR_I32, WebAssembly::OR_I32_S },
  { WebAssembly::OR_I64, WebAssembly::OR_I64_S },
  { WebAssembly::OR_v16i8, WebAssembly::OR_v16i8_S },
  { WebAssembly::OR_v2i64, WebAssembly::OR_v2i64_S },
  { WebAssembly::OR_v4i32, WebAssembly::OR_v4i32_S },
  { WebAssembly::OR_v8i16, WebAssembly::OR_v8i16_S },
  { WebAssembly::PCALL_INDIRECT_VOID, WebAssembly::PCALL_INDIRECT_VOID_S },
  { WebAssembly::PCALL_INDIRECT_exnref, WebAssembly::PCALL_INDIRECT_exnref_S },
  { WebAssembly::PCALL_INDIRECT_f32, WebAssembly::PCALL_INDIRECT_f32_S },
  { WebAssembly::PCALL_INDIRECT_f64, WebAssembly::PCALL_INDIRECT_f64_S },
  { WebAssembly::PCALL_INDIRECT_i32, WebAssembly::PCALL_INDIRECT_i32_S },
  { WebAssembly::PCALL_INDIRECT_i64, WebAssembly::PCALL_INDIRECT_i64_S },
  { WebAssembly::PCALL_INDIRECT_v16i8, WebAssembly::PCALL_INDIRECT_v16i8_S },
  { WebAssembly::PCALL_INDIRECT_v2f64, WebAssembly::PCALL_INDIRECT_v2f64_S },
  { WebAssembly::PCALL_INDIRECT_v2i64, WebAssembly::PCALL_INDIRECT_v2i64_S },
  { WebAssembly::PCALL_INDIRECT_v4f32, WebAssembly::PCALL_INDIRECT_v4f32_S },
  { WebAssembly::PCALL_INDIRECT_v4i32, WebAssembly::PCALL_INDIRECT_v4i32_S },
  { WebAssembly::PCALL_INDIRECT_v8i16, WebAssembly::PCALL_INDIRECT_v8i16_S },
  { WebAssembly::POPCNT_I32, WebAssembly::POPCNT_I32_S },
  { WebAssembly::POPCNT_I64, WebAssembly::POPCNT_I64_S },
  { WebAssembly::PRET_CALL_INDIRECT, WebAssembly::PRET_CALL_INDIRECT_S },
  { WebAssembly::QFMA_v2f64, WebAssembly::QFMA_v2f64_S },
  { WebAssembly::QFMA_v4f32, WebAssembly::QFMA_v4f32_S },
  { WebAssembly::QFMS_v2f64, WebAssembly::QFMS_v2f64_S },
  { WebAssembly::QFMS_v4f32, WebAssembly::QFMS_v4f32_S },
  { WebAssembly::REM_S_I32, WebAssembly::REM_S_I32_S },
  { WebAssembly::REM_S_I64, WebAssembly::REM_S_I64_S },
  { WebAssembly::REM_U_I32, WebAssembly::REM_U_I32_S },
  { WebAssembly::REM_U_I64, WebAssembly::REM_U_I64_S },
  { WebAssembly::REPLACE_LANE_v16i8, WebAssembly::REPLACE_LANE_v16i8_S },
  { WebAssembly::REPLACE_LANE_v2f64, WebAssembly::REPLACE_LANE_v2f64_S },
  { WebAssembly::REPLACE_LANE_v2i64, WebAssembly::REPLACE_LANE_v2i64_S },
  { WebAssembly::REPLACE_LANE_v4f32, WebAssembly::REPLACE_LANE_v4f32_S },
  { WebAssembly::REPLACE_LANE_v4i32, WebAssembly::REPLACE_LANE_v4i32_S },
  { WebAssembly::REPLACE_LANE_v8i16, WebAssembly::REPLACE_LANE_v8i16_S },
  { WebAssembly::RETHROW, WebAssembly::RETHROW_S },
  { WebAssembly::RETURN, WebAssembly::RETURN_S },
  { WebAssembly::RET_CALL, WebAssembly::RET_CALL_S },
  { WebAssembly::RET_CALL_INDIRECT, WebAssembly::RET_CALL_INDIRECT_S },
  { WebAssembly::ROTL_I32, WebAssembly::ROTL_I32_S },
  { WebAssembly::ROTL_I64, WebAssembly::ROTL_I64_S },
  { WebAssembly::ROTR_I32, WebAssembly::ROTR_I32_S },
  { WebAssembly::ROTR_I64, WebAssembly::ROTR_I64_S },
  { WebAssembly::SELECT_EXNREF, WebAssembly::SELECT_EXNREF_S },
  { WebAssembly::SELECT_F32, WebAssembly::SELECT_F32_S },
  { WebAssembly::SELECT_F64, WebAssembly::SELECT_F64_S },
  { WebAssembly::SELECT_I32, WebAssembly::SELECT_I32_S },
  { WebAssembly::SELECT_I64, WebAssembly::SELECT_I64_S },
  { WebAssembly::SHL_I32, WebAssembly::SHL_I32_S },
  { WebAssembly::SHL_I64, WebAssembly::SHL_I64_S },
  { WebAssembly::SHL_v16i8, WebAssembly::SHL_v16i8_S },
  { WebAssembly::SHL_v2i64, WebAssembly::SHL_v2i64_S },
  { WebAssembly::SHL_v4i32, WebAssembly::SHL_v4i32_S },
  { WebAssembly::SHL_v8i16, WebAssembly::SHL_v8i16_S },
  { WebAssembly::SHR_S_I32, WebAssembly::SHR_S_I32_S },
  { WebAssembly::SHR_S_I64, WebAssembly::SHR_S_I64_S },
  { WebAssembly::SHR_S_v16i8, WebAssembly::SHR_S_v16i8_S },
  { WebAssembly::SHR_S_v2i64, WebAssembly::SHR_S_v2i64_S },
  { WebAssembly::SHR_S_v4i32, WebAssembly::SHR_S_v4i32_S },
  { WebAssembly::SHR_S_v8i16, WebAssembly::SHR_S_v8i16_S },
  { WebAssembly::SHR_U_I32, WebAssembly::SHR_U_I32_S },
  { WebAssembly::SHR_U_I64, WebAssembly::SHR_U_I64_S },
  { WebAssembly::SHR_U_v16i8, WebAssembly::SHR_U_v16i8_S },
  { WebAssembly::SHR_U_v2i64, WebAssembly::SHR_U_v2i64_S },
  { WebAssembly::SHR_U_v4i32, WebAssembly::SHR_U_v4i32_S },
  { WebAssembly::SHR_U_v8i16, WebAssembly::SHR_U_v8i16_S },
  { WebAssembly::SHUFFLE, WebAssembly::SHUFFLE_S },
  { WebAssembly::SPLAT_v16i8, WebAssembly::SPLAT_v16i8_S },
  { WebAssembly::SPLAT_v2f64, WebAssembly::SPLAT_v2f64_S },
  { WebAssembly::SPLAT_v2i64, WebAssembly::SPLAT_v2i64_S },
  { WebAssembly::SPLAT_v4f32, WebAssembly::SPLAT_v4f32_S },
  { WebAssembly::SPLAT_v4i32, WebAssembly::SPLAT_v4i32_S },
  { WebAssembly::SPLAT_v8i16, WebAssembly::SPLAT_v8i16_S },
  { WebAssembly::SQRT_F32, WebAssembly::SQRT_F32_S },
  { WebAssembly::SQRT_F64, WebAssembly::SQRT_F64_S },
  { WebAssembly::SQRT_v2f64, WebAssembly::SQRT_v2f64_S },
  { WebAssembly::SQRT_v4f32, WebAssembly::SQRT_v4f32_S },
  { WebAssembly::STORE16_I32, WebAssembly::STORE16_I32_S },
  { WebAssembly::STORE16_I64, WebAssembly::STORE16_I64_S },
  { WebAssembly::STORE32_I64, WebAssembly::STORE32_I64_S },
  { WebAssembly::STORE8_I32, WebAssembly::STORE8_I32_S },
  { WebAssembly::STORE8_I64, WebAssembly::STORE8_I64_S },
  { WebAssembly::STORE_F32, WebAssembly::STORE_F32_S },
  { WebAssembly::STORE_F64, WebAssembly::STORE_F64_S },
  { WebAssembly::STORE_I32, WebAssembly::STORE_I32_S },
  { WebAssembly::STORE_I64, WebAssembly::STORE_I64_S },
  { WebAssembly::STORE_V128, WebAssembly::STORE_V128_S },
  { WebAssembly::SUB_F32, WebAssembly::SUB_F32_S },
  { WebAssembly::SUB_F64, WebAssembly::SUB_F64_S },
  { WebAssembly::SUB_I32, WebAssembly::SUB_I32_S },
  { WebAssembly::SUB_I64, WebAssembly::SUB_I64_S },
  { WebAssembly::SUB_SAT_S_v16i8, WebAssembly::SUB_SAT_S_v16i8_S },
  { WebAssembly::SUB_SAT_S_v8i16, WebAssembly::SUB_SAT_S_v8i16_S },
  { WebAssembly::SUB_SAT_U_v16i8, WebAssembly::SUB_SAT_U_v16i8_S },
  { WebAssembly::SUB_SAT_U_v8i16, WebAssembly::SUB_SAT_U_v8i16_S },
  { WebAssembly::SUB_v16i8, WebAssembly::SUB_v16i8_S },
  { WebAssembly::SUB_v2f64, WebAssembly::SUB_v2f64_S },
  { WebAssembly::SUB_v2i64, WebAssembly::SUB_v2i64_S },
  { WebAssembly::SUB_v4f32, WebAssembly::SUB_v4f32_S },
  { WebAssembly::SUB_v4i32, WebAssembly::SUB_v4i32_S },
  { WebAssembly::SUB_v8i16, WebAssembly::SUB_v8i16_S },
  { WebAssembly::SWIZZLE, WebAssembly::SWIZZLE_S },
  { WebAssembly::TEE_EXNREF, WebAssembly::TEE_EXNREF_S },
  { WebAssembly::TEE_F32, WebAssembly::TEE_F32_S },
  { WebAssembly::TEE_F64, WebAssembly::TEE_F64_S },
  { WebAssembly::TEE_I32, WebAssembly::TEE_I32_S },
  { WebAssembly::TEE_I64, WebAssembly::TEE_I64_S },
  { WebAssembly::TEE_V128, WebAssembly::TEE_V128_S },
  { WebAssembly::THROW, WebAssembly::THROW_S },
  { WebAssembly::TRUNC_F32, WebAssembly::TRUNC_F32_S },
  { WebAssembly::TRUNC_F64, WebAssembly::TRUNC_F64_S },
  { WebAssembly::TRY, WebAssembly::TRY_S },
  { WebAssembly::UNREACHABLE, WebAssembly::UNREACHABLE_S },
  { WebAssembly::XOR_I32, WebAssembly::XOR_I32_S },
  { WebAssembly::XOR_I64, WebAssembly::XOR_I64_S },
  { WebAssembly::XOR_v16i8, WebAssembly::XOR_v16i8_S },
  { WebAssembly::XOR_v2i64, WebAssembly::XOR_v2i64_S },
  { WebAssembly::XOR_v4i32, WebAssembly::XOR_v4i32_S },
  { WebAssembly::XOR_v8i16, WebAssembly::XOR_v8i16_S },
  { WebAssembly::fp_to_sint_v2i64_v2f64, WebAssembly::fp_to_sint_v2i64_v2f64_S },
  { WebAssembly::fp_to_sint_v4i32_v4f32, WebAssembly::fp_to_sint_v4i32_v4f32_S },
  { WebAssembly::fp_to_uint_v2i64_v2f64, WebAssembly::fp_to_uint_v2i64_v2f64_S },
  { WebAssembly::fp_to_uint_v4i32_v4f32, WebAssembly::fp_to_uint_v4i32_v4f32_S },
  { WebAssembly::int_wasm_widen_high_signed_v4i32_v8i16, WebAssembly::int_wasm_widen_high_signed_v4i32_v8i16_S },
  { WebAssembly::int_wasm_widen_high_signed_v8i16_v16i8, WebAssembly::int_wasm_widen_high_signed_v8i16_v16i8_S },
  { WebAssembly::int_wasm_widen_high_unsigned_v4i32_v8i16, WebAssembly::int_wasm_widen_high_unsigned_v4i32_v8i16_S },
  { WebAssembly::int_wasm_widen_high_unsigned_v8i16_v16i8, WebAssembly::int_wasm_widen_high_unsigned_v8i16_v16i8_S },
  { WebAssembly::int_wasm_widen_low_signed_v4i32_v8i16, WebAssembly::int_wasm_widen_low_signed_v4i32_v8i16_S },
  { WebAssembly::int_wasm_widen_low_signed_v8i16_v16i8, WebAssembly::int_wasm_widen_low_signed_v8i16_v16i8_S },
  { WebAssembly::int_wasm_widen_low_unsigned_v4i32_v8i16, WebAssembly::int_wasm_widen_low_unsigned_v4i32_v8i16_S },
  { WebAssembly::int_wasm_widen_low_unsigned_v8i16_v16i8, WebAssembly::int_wasm_widen_low_unsigned_v8i16_v16i8_S },
  { WebAssembly::sint_to_fp_v2f64_v2i64, WebAssembly::sint_to_fp_v2f64_v2i64_S },
  { WebAssembly::sint_to_fp_v4f32_v4i32, WebAssembly::sint_to_fp_v4f32_v4i32_S },
  { WebAssembly::uint_to_fp_v2f64_v2i64, WebAssembly::uint_to_fp_v2f64_v2i64_S },
  { WebAssembly::uint_to_fp_v4f32_v4i32, WebAssembly::uint_to_fp_v4f32_v4i32_S },
}; // End of getStackOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 586;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getStackOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getStackOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getStackOpcodeTable[mid][1];
}

} // end namespace WebAssembly
} // end namespace llvm
#endif // GET_INSTRMAP_INFO


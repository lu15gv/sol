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

namespace R600 {
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
    BRANCH	= 175,
    BRANCH_COND_f32	= 176,
    BRANCH_COND_i32	= 177,
    BREAK	= 178,
    BREAKC_f32	= 179,
    BREAKC_i32	= 180,
    BREAK_LOGICALNZ_f32	= 181,
    BREAK_LOGICALNZ_i32	= 182,
    BREAK_LOGICALZ_f32	= 183,
    BREAK_LOGICALZ_i32	= 184,
    CONST_COPY	= 185,
    CONTINUE	= 186,
    CONTINUEC_f32	= 187,
    CONTINUEC_i32	= 188,
    CONTINUE_LOGICALNZ_f32	= 189,
    CONTINUE_LOGICALNZ_i32	= 190,
    CONTINUE_LOGICALZ_f32	= 191,
    CONTINUE_LOGICALZ_i32	= 192,
    CUBE_eg_pseudo	= 193,
    CUBE_r600_pseudo	= 194,
    DEFAULT	= 195,
    DOT_4	= 196,
    DUMMY_CHAIN	= 197,
    ELSE	= 198,
    END	= 199,
    ENDFUNC	= 200,
    ENDIF	= 201,
    ENDLOOP	= 202,
    ENDMAIN	= 203,
    ENDSWITCH	= 204,
    FABS_R600	= 205,
    FNEG_R600	= 206,
    FUNC	= 207,
    IFC_f32	= 208,
    IFC_i32	= 209,
    IF_LOGICALNZ_f32	= 210,
    IF_LOGICALNZ_i32	= 211,
    IF_LOGICALZ_f32	= 212,
    IF_LOGICALZ_i32	= 213,
    IF_PREDICATE_SET	= 214,
    JUMP	= 215,
    JUMP_COND	= 216,
    MASK_WRITE	= 217,
    MOV_IMM_F32	= 218,
    MOV_IMM_GLOBAL_ADDR	= 219,
    MOV_IMM_I32	= 220,
    PRED_X	= 221,
    R600_EXTRACT_ELT_V2	= 222,
    R600_EXTRACT_ELT_V4	= 223,
    R600_INSERT_ELT_V2	= 224,
    R600_INSERT_ELT_V4	= 225,
    R600_RegisterLoad	= 226,
    R600_RegisterStore	= 227,
    RETDYN	= 228,
    RETURN	= 229,
    TXD	= 230,
    TXD_SHADOW	= 231,
    WHILELOOP	= 232,
    ADD	= 233,
    ADDC_UINT	= 234,
    ADD_INT	= 235,
    ALU_CLAUSE	= 236,
    AND_INT	= 237,
    ASHR_eg	= 238,
    ASHR_r600	= 239,
    BCNT_INT	= 240,
    BFE_INT_eg	= 241,
    BFE_UINT_eg	= 242,
    BFI_INT_eg	= 243,
    BFM_INT_eg	= 244,
    BIT_ALIGN_INT_eg	= 245,
    CEIL	= 246,
    CF_ALU	= 247,
    CF_ALU_BREAK	= 248,
    CF_ALU_CONTINUE	= 249,
    CF_ALU_ELSE_AFTER	= 250,
    CF_ALU_POP_AFTER	= 251,
    CF_ALU_PUSH_BEFORE	= 252,
    CF_CALL_FS_EG	= 253,
    CF_CALL_FS_R600	= 254,
    CF_CONTINUE_EG	= 255,
    CF_CONTINUE_R600	= 256,
    CF_ELSE_EG	= 257,
    CF_ELSE_R600	= 258,
    CF_END_CM	= 259,
    CF_END_EG	= 260,
    CF_END_R600	= 261,
    CF_JUMP_EG	= 262,
    CF_JUMP_R600	= 263,
    CF_PUSH_EG	= 264,
    CF_PUSH_ELSE_R600	= 265,
    CF_TC_EG	= 266,
    CF_TC_R600	= 267,
    CF_VC_EG	= 268,
    CF_VC_R600	= 269,
    CNDE_INT	= 270,
    CNDE_eg	= 271,
    CNDE_r600	= 272,
    CNDGE_INT	= 273,
    CNDGE_eg	= 274,
    CNDGE_r600	= 275,
    CNDGT_INT	= 276,
    CNDGT_eg	= 277,
    CNDGT_r600	= 278,
    COS_cm	= 279,
    COS_eg	= 280,
    COS_r600	= 281,
    COS_r700	= 282,
    CUBE_eg_real	= 283,
    CUBE_r600_real	= 284,
    DOT4_eg	= 285,
    DOT4_r600	= 286,
    EG_ExportBuf	= 287,
    EG_ExportSwz	= 288,
    END_LOOP_EG	= 289,
    END_LOOP_R600	= 290,
    EXP_IEEE_cm	= 291,
    EXP_IEEE_eg	= 292,
    EXP_IEEE_r600	= 293,
    FETCH_CLAUSE	= 294,
    FFBH_UINT	= 295,
    FFBL_INT	= 296,
    FLOOR	= 297,
    FLT16_TO_FLT32	= 298,
    FLT32_TO_FLT16	= 299,
    FLT_TO_INT_eg	= 300,
    FLT_TO_INT_r600	= 301,
    FLT_TO_UINT_eg	= 302,
    FLT_TO_UINT_r600	= 303,
    FMA_eg	= 304,
    FRACT	= 305,
    GROUP_BARRIER	= 306,
    INTERP_LOAD_P0	= 307,
    INTERP_PAIR_XY	= 308,
    INTERP_PAIR_ZW	= 309,
    INTERP_VEC_LOAD	= 310,
    INTERP_XY	= 311,
    INTERP_ZW	= 312,
    INT_TO_FLT_eg	= 313,
    INT_TO_FLT_r600	= 314,
    KILLGT	= 315,
    LDS_ADD	= 316,
    LDS_ADD_RET	= 317,
    LDS_AND	= 318,
    LDS_AND_RET	= 319,
    LDS_BYTE_READ_RET	= 320,
    LDS_BYTE_WRITE	= 321,
    LDS_CMPST	= 322,
    LDS_CMPST_RET	= 323,
    LDS_MAX_INT	= 324,
    LDS_MAX_INT_RET	= 325,
    LDS_MAX_UINT	= 326,
    LDS_MAX_UINT_RET	= 327,
    LDS_MIN_INT	= 328,
    LDS_MIN_INT_RET	= 329,
    LDS_MIN_UINT	= 330,
    LDS_MIN_UINT_RET	= 331,
    LDS_OR	= 332,
    LDS_OR_RET	= 333,
    LDS_READ_RET	= 334,
    LDS_SHORT_READ_RET	= 335,
    LDS_SHORT_WRITE	= 336,
    LDS_SUB	= 337,
    LDS_SUB_RET	= 338,
    LDS_UBYTE_READ_RET	= 339,
    LDS_USHORT_READ_RET	= 340,
    LDS_WRITE	= 341,
    LDS_WRXCHG	= 342,
    LDS_WRXCHG_RET	= 343,
    LDS_XOR	= 344,
    LDS_XOR_RET	= 345,
    LITERALS	= 346,
    LOG_CLAMPED_eg	= 347,
    LOG_CLAMPED_r600	= 348,
    LOG_IEEE_cm	= 349,
    LOG_IEEE_eg	= 350,
    LOG_IEEE_r600	= 351,
    LOOP_BREAK_EG	= 352,
    LOOP_BREAK_R600	= 353,
    LSHL_eg	= 354,
    LSHL_r600	= 355,
    LSHR_eg	= 356,
    LSHR_r600	= 357,
    MAX	= 358,
    MAX_DX10	= 359,
    MAX_INT	= 360,
    MAX_UINT	= 361,
    MIN	= 362,
    MIN_DX10	= 363,
    MIN_INT	= 364,
    MIN_UINT	= 365,
    MOV	= 366,
    MOVA_INT_eg	= 367,
    MUL	= 368,
    MULADD_IEEE_eg	= 369,
    MULADD_IEEE_r600	= 370,
    MULADD_INT24_cm	= 371,
    MULADD_UINT24_eg	= 372,
    MULADD_eg	= 373,
    MULADD_r600	= 374,
    MULHI_INT_cm	= 375,
    MULHI_INT_cm24	= 376,
    MULHI_INT_eg	= 377,
    MULHI_INT_r600	= 378,
    MULHI_UINT24_eg	= 379,
    MULHI_UINT_cm	= 380,
    MULHI_UINT_cm24	= 381,
    MULHI_UINT_eg	= 382,
    MULHI_UINT_r600	= 383,
    MULLO_INT_cm	= 384,
    MULLO_INT_eg	= 385,
    MULLO_INT_r600	= 386,
    MULLO_UINT_cm	= 387,
    MULLO_UINT_eg	= 388,
    MULLO_UINT_r600	= 389,
    MUL_IEEE	= 390,
    MUL_INT24_cm	= 391,
    MUL_LIT_eg	= 392,
    MUL_LIT_r600	= 393,
    MUL_UINT24_eg	= 394,
    NOT_INT	= 395,
    OR_INT	= 396,
    PAD	= 397,
    POP_EG	= 398,
    POP_R600	= 399,
    PRED_SETE	= 400,
    PRED_SETE_INT	= 401,
    PRED_SETGE	= 402,
    PRED_SETGE_INT	= 403,
    PRED_SETGT	= 404,
    PRED_SETGT_INT	= 405,
    PRED_SETNE	= 406,
    PRED_SETNE_INT	= 407,
    R600_ExportBuf	= 408,
    R600_ExportSwz	= 409,
    RAT_ATOMIC_ADD_NORET	= 410,
    RAT_ATOMIC_ADD_RTN	= 411,
    RAT_ATOMIC_AND_NORET	= 412,
    RAT_ATOMIC_AND_RTN	= 413,
    RAT_ATOMIC_CMPXCHG_INT_NORET	= 414,
    RAT_ATOMIC_CMPXCHG_INT_RTN	= 415,
    RAT_ATOMIC_DEC_UINT_NORET	= 416,
    RAT_ATOMIC_DEC_UINT_RTN	= 417,
    RAT_ATOMIC_INC_UINT_NORET	= 418,
    RAT_ATOMIC_INC_UINT_RTN	= 419,
    RAT_ATOMIC_MAX_INT_NORET	= 420,
    RAT_ATOMIC_MAX_INT_RTN	= 421,
    RAT_ATOMIC_MAX_UINT_NORET	= 422,
    RAT_ATOMIC_MAX_UINT_RTN	= 423,
    RAT_ATOMIC_MIN_INT_NORET	= 424,
    RAT_ATOMIC_MIN_INT_RTN	= 425,
    RAT_ATOMIC_MIN_UINT_NORET	= 426,
    RAT_ATOMIC_MIN_UINT_RTN	= 427,
    RAT_ATOMIC_OR_NORET	= 428,
    RAT_ATOMIC_OR_RTN	= 429,
    RAT_ATOMIC_RSUB_NORET	= 430,
    RAT_ATOMIC_RSUB_RTN	= 431,
    RAT_ATOMIC_SUB_NORET	= 432,
    RAT_ATOMIC_SUB_RTN	= 433,
    RAT_ATOMIC_XCHG_INT_NORET	= 434,
    RAT_ATOMIC_XCHG_INT_RTN	= 435,
    RAT_ATOMIC_XOR_NORET	= 436,
    RAT_ATOMIC_XOR_RTN	= 437,
    RAT_MSKOR	= 438,
    RAT_STORE_DWORD128	= 439,
    RAT_STORE_DWORD32	= 440,
    RAT_STORE_DWORD64	= 441,
    RAT_STORE_TYPED_cm	= 442,
    RAT_STORE_TYPED_eg	= 443,
    RAT_WRITE_CACHELESS_128_eg	= 444,
    RAT_WRITE_CACHELESS_32_eg	= 445,
    RAT_WRITE_CACHELESS_64_eg	= 446,
    RECIPSQRT_CLAMPED_cm	= 447,
    RECIPSQRT_CLAMPED_eg	= 448,
    RECIPSQRT_CLAMPED_r600	= 449,
    RECIPSQRT_IEEE_cm	= 450,
    RECIPSQRT_IEEE_eg	= 451,
    RECIPSQRT_IEEE_r600	= 452,
    RECIP_CLAMPED_cm	= 453,
    RECIP_CLAMPED_eg	= 454,
    RECIP_CLAMPED_r600	= 455,
    RECIP_IEEE_cm	= 456,
    RECIP_IEEE_eg	= 457,
    RECIP_IEEE_r600	= 458,
    RECIP_UINT_eg	= 459,
    RECIP_UINT_r600	= 460,
    RNDNE	= 461,
    SETE	= 462,
    SETE_DX10	= 463,
    SETE_INT	= 464,
    SETGE_DX10	= 465,
    SETGE_INT	= 466,
    SETGE_UINT	= 467,
    SETGT_DX10	= 468,
    SETGT_INT	= 469,
    SETGT_UINT	= 470,
    SETNE_DX10	= 471,
    SETNE_INT	= 472,
    SGE	= 473,
    SGT	= 474,
    SIN_cm	= 475,
    SIN_eg	= 476,
    SIN_r600	= 477,
    SIN_r700	= 478,
    SNE	= 479,
    SUBB_UINT	= 480,
    SUB_INT	= 481,
    TEX_GET_GRADIENTS_H	= 482,
    TEX_GET_GRADIENTS_V	= 483,
    TEX_GET_TEXTURE_RESINFO	= 484,
    TEX_LD	= 485,
    TEX_LDPTR	= 486,
    TEX_SAMPLE	= 487,
    TEX_SAMPLE_C	= 488,
    TEX_SAMPLE_C_G	= 489,
    TEX_SAMPLE_C_L	= 490,
    TEX_SAMPLE_C_LB	= 491,
    TEX_SAMPLE_G	= 492,
    TEX_SAMPLE_L	= 493,
    TEX_SAMPLE_LB	= 494,
    TEX_SET_GRADIENTS_H	= 495,
    TEX_SET_GRADIENTS_V	= 496,
    TEX_VTX_CONSTBUF	= 497,
    TEX_VTX_TEXBUF	= 498,
    TRUNC	= 499,
    UINT_TO_FLT_eg	= 500,
    UINT_TO_FLT_r600	= 501,
    VTX_READ_128_cm	= 502,
    VTX_READ_128_eg	= 503,
    VTX_READ_16_cm	= 504,
    VTX_READ_16_eg	= 505,
    VTX_READ_32_cm	= 506,
    VTX_READ_32_eg	= 507,
    VTX_READ_64_cm	= 508,
    VTX_READ_64_eg	= 509,
    VTX_READ_8_cm	= 510,
    VTX_READ_8_eg	= 511,
    WHILE_LOOP_EG	= 512,
    WHILE_LOOP_R600	= 513,
    XOR_INT	= 514,
    INSTRUCTION_LIST_END = 515
  };

} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace R600 {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    NullALU	= 1,
    VecALU	= 2,
    AnyALU	= 3,
    TransALU	= 4,
    XALU	= 5,
    SCHED_LIST_END = 6
  };
} // end namespace Sched
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {


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
static const MCOperandInfo OperandInfo37[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_ZRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_ZRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Predicate_BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { R600::R600_Predicate_BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg64VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { R600::R600_Reg64VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg64VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { R600::R600_Reg128VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { R600::R600_TReg32_ZRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { R600::R600_Reg64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { R600::R600_Reg64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { R600::R600_Reg64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };

extern const MCInstrDesc R600Insts[] = {
  { 0,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1 = INLINEASM
  { 2,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2 = INLINEASM_BR
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #3 = CFI_INSTRUCTION
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #4 = EH_LABEL
  { 5,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #5 = GC_LABEL
  { 6,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #6 = ANNOTATION_LABEL
  { 7,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #7 = KILL
  { 8,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #8 = EXTRACT_SUBREG
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #9 = INSERT_SUBREG
  { 10,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #10 = IMPLICIT_DEF
  { 11,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6, -1 ,nullptr },  // Inst #11 = SUBREG_TO_REG
  { 12,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #12 = COPY_TO_REGCLASS
  { 13,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #13 = DBG_VALUE
  { 14,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #14 = DBG_LABEL
  { 15,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #15 = REG_SEQUENCE
  { 16,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #16 = COPY
  { 17,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #17 = BUNDLE
  { 18,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #18 = LIFETIME_START
  { 19,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #19 = LIFETIME_END
  { 20,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #20 = STACKMAP
  { 21,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #21 = FENTRY_CALL
  { 22,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9, -1 ,nullptr },  // Inst #22 = PATCHPOINT
  { 23,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #23 = LOAD_STACK_GUARD
  { 24,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #24 = STATEPOINT
  { 25,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #25 = LOCAL_ESCAPE
  { 26,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #26 = FAULTING_OP
  { 27,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #27 = PATCHABLE_OP
  { 28,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #28 = PATCHABLE_FUNCTION_ENTER
  { 29,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #29 = PATCHABLE_RET
  { 30,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #30 = PATCHABLE_FUNCTION_EXIT
  { 31,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #31 = PATCHABLE_TAIL_CALL
  { 32,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #32 = PATCHABLE_EVENT_CALL
  { 33,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #33 = PATCHABLE_TYPED_EVENT_CALL
  { 34,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #34 = ICALL_BRANCH_FUNNEL
  { 35,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #35 = G_ADD
  { 36,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #36 = G_SUB
  { 37,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #37 = G_MUL
  { 38,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #38 = G_SDIV
  { 39,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #39 = G_UDIV
  { 40,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #40 = G_SREM
  { 41,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #41 = G_UREM
  { 42,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #42 = G_AND
  { 43,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #43 = G_OR
  { 44,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #44 = G_XOR
  { 45,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #45 = G_IMPLICIT_DEF
  { 46,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #46 = G_PHI
  { 47,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #47 = G_FRAME_INDEX
  { 48,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #48 = G_GLOBAL_VALUE
  { 49,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #49 = G_EXTRACT
  { 50,	2,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #50 = G_UNMERGE_VALUES
  { 51,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #51 = G_INSERT
  { 52,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #52 = G_MERGE_VALUES
  { 53,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #53 = G_BUILD_VECTOR
  { 54,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #54 = G_BUILD_VECTOR_TRUNC
  { 55,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #55 = G_CONCAT_VECTORS
  { 56,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #56 = G_PTRTOINT
  { 57,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #57 = G_INTTOPTR
  { 58,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #58 = G_BITCAST
  { 59,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #59 = G_INTRINSIC_TRUNC
  { 60,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #60 = G_INTRINSIC_ROUND
  { 61,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #61 = G_READCYCLECOUNTER
  { 62,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #62 = G_LOAD
  { 63,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #63 = G_SEXTLOAD
  { 64,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #64 = G_ZEXTLOAD
  { 65,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #65 = G_INDEXED_LOAD
  { 66,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #66 = G_INDEXED_SEXTLOAD
  { 67,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #67 = G_INDEXED_ZEXTLOAD
  { 68,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #68 = G_STORE
  { 69,	5,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #69 = G_INDEXED_STORE
  { 70,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #70 = G_ATOMIC_CMPXCHG_WITH_SUCCESS
  { 71,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #71 = G_ATOMIC_CMPXCHG
  { 72,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #72 = G_ATOMICRMW_XCHG
  { 73,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #73 = G_ATOMICRMW_ADD
  { 74,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #74 = G_ATOMICRMW_SUB
  { 75,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #75 = G_ATOMICRMW_AND
  { 76,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #76 = G_ATOMICRMW_NAND
  { 77,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #77 = G_ATOMICRMW_OR
  { 78,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #78 = G_ATOMICRMW_XOR
  { 79,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #79 = G_ATOMICRMW_MAX
  { 80,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #80 = G_ATOMICRMW_MIN
  { 81,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #81 = G_ATOMICRMW_UMAX
  { 82,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #82 = G_ATOMICRMW_UMIN
  { 83,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #83 = G_ATOMICRMW_FADD
  { 84,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #84 = G_ATOMICRMW_FSUB
  { 85,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #85 = G_FENCE
  { 86,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #86 = G_BRCOND
  { 87,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #87 = G_BRINDIRECT
  { 88,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #88 = G_INTRINSIC
  { 89,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #89 = G_INTRINSIC_W_SIDE_EFFECTS
  { 90,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #90 = G_ANYEXT
  { 91,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #91 = G_TRUNC
  { 92,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #92 = G_CONSTANT
  { 93,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #93 = G_FCONSTANT
  { 94,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #94 = G_VASTART
  { 95,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #95 = G_VAARG
  { 96,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #96 = G_SEXT
  { 97,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #97 = G_SEXT_INREG
  { 98,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #98 = G_ZEXT
  { 99,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #99 = G_SHL
  { 100,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #100 = G_LSHR
  { 101,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #101 = G_ASHR
  { 102,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #102 = G_ICMP
  { 103,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #103 = G_FCMP
  { 104,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #104 = G_SELECT
  { 105,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #105 = G_UADDO
  { 106,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #106 = G_UADDE
  { 107,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #107 = G_USUBO
  { 108,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #108 = G_USUBE
  { 109,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #109 = G_SADDO
  { 110,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #110 = G_SADDE
  { 111,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #111 = G_SSUBO
  { 112,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #112 = G_SSUBE
  { 113,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #113 = G_UMULO
  { 114,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #114 = G_SMULO
  { 115,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #115 = G_UMULH
  { 116,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #116 = G_SMULH
  { 117,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #117 = G_FADD
  { 118,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #118 = G_FSUB
  { 119,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #119 = G_FMUL
  { 120,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #120 = G_FMA
  { 121,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #121 = G_FMAD
  { 122,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #122 = G_FDIV
  { 123,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #123 = G_FREM
  { 124,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #124 = G_FPOW
  { 125,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #125 = G_FEXP
  { 126,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #126 = G_FEXP2
  { 127,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #127 = G_FLOG
  { 128,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #128 = G_FLOG2
  { 129,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #129 = G_FLOG10
  { 130,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #130 = G_FNEG
  { 131,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #131 = G_FPEXT
  { 132,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #132 = G_FPTRUNC
  { 133,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #133 = G_FPTOSI
  { 134,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #134 = G_FPTOUI
  { 135,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #135 = G_SITOFP
  { 136,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #136 = G_UITOFP
  { 137,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #137 = G_FABS
  { 138,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #138 = G_FCOPYSIGN
  { 139,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #139 = G_FCANONICALIZE
  { 140,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #140 = G_FMINNUM
  { 141,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #141 = G_FMAXNUM
  { 142,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #142 = G_FMINNUM_IEEE
  { 143,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #143 = G_FMAXNUM_IEEE
  { 144,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #144 = G_FMINIMUM
  { 145,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #145 = G_FMAXIMUM
  { 146,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #146 = G_PTR_ADD
  { 147,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #147 = G_PTR_MASK
  { 148,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #148 = G_SMIN
  { 149,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #149 = G_SMAX
  { 150,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #150 = G_UMIN
  { 151,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #151 = G_UMAX
  { 152,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #152 = G_BR
  { 153,	3,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #153 = G_BRJT
  { 154,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #154 = G_INSERT_VECTOR_ELT
  { 155,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #155 = G_EXTRACT_VECTOR_ELT
  { 156,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #156 = G_SHUFFLE_VECTOR
  { 157,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #157 = G_CTTZ
  { 158,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #158 = G_CTTZ_ZERO_UNDEF
  { 159,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #159 = G_CTLZ
  { 160,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #160 = G_CTLZ_ZERO_UNDEF
  { 161,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #161 = G_CTPOP
  { 162,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #162 = G_BSWAP
  { 163,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #163 = G_BITREVERSE
  { 164,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #164 = G_FCEIL
  { 165,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #165 = G_FCOS
  { 166,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #166 = G_FSIN
  { 167,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #167 = G_FSQRT
  { 168,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #168 = G_FFLOOR
  { 169,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #169 = G_FRINT
  { 170,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #170 = G_FNEARBYINT
  { 171,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #171 = G_ADDRSPACE_CAST
  { 172,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #172 = G_BLOCK_ADDR
  { 173,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #173 = G_JUMP_TABLE
  { 174,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #174 = G_DYN_STACKALLOC
  { 175,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #175 = BRANCH
  { 176,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #176 = BRANCH_COND_f32
  { 177,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #177 = BRANCH_COND_i32
  { 178,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #178 = BREAK
  { 179,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #179 = BREAKC_f32
  { 180,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #180 = BREAKC_i32
  { 181,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #181 = BREAK_LOGICALNZ_f32
  { 182,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #182 = BREAK_LOGICALNZ_i32
  { 183,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #183 = BREAK_LOGICALZ_f32
  { 184,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #184 = BREAK_LOGICALZ_i32
  { 185,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #185 = CONST_COPY
  { 186,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #186 = CONTINUE
  { 187,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #187 = CONTINUEC_f32
  { 188,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #188 = CONTINUEC_i32
  { 189,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #189 = CONTINUE_LOGICALNZ_f32
  { 190,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #190 = CONTINUE_LOGICALNZ_i32
  { 191,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #191 = CONTINUE_LOGICALZ_f32
  { 192,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #192 = CONTINUE_LOGICALZ_i32
  { 193,	2,	1,	0,	2,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #193 = CUBE_eg_pseudo
  { 194,	2,	1,	0,	2,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #194 = CUBE_r600_pseudo
  { 195,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #195 = DEFAULT
  { 196,	71,	1,	0,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Predicable), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #196 = DOT_4
  { 197,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #197 = DUMMY_CHAIN
  { 198,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #198 = ELSE
  { 199,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #199 = END
  { 200,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #200 = ENDFUNC
  { 201,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #201 = ENDIF
  { 202,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #202 = ENDLOOP
  { 203,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #203 = ENDMAIN
  { 204,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #204 = ENDSWITCH
  { 205,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #205 = FABS_R600
  { 206,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #206 = FNEG_R600
  { 207,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #207 = FUNC
  { 208,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #208 = IFC_f32
  { 209,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #209 = IFC_i32
  { 210,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #210 = IF_LOGICALNZ_f32
  { 211,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #211 = IF_LOGICALNZ_i32
  { 212,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #212 = IF_LOGICALZ_f32
  { 213,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #213 = IF_LOGICALZ_i32
  { 214,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #214 = IF_PREDICATE_SET
  { 215,	1,	0,	0,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #215 = JUMP
  { 216,	2,	0,	0,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #216 = JUMP_COND
  { 217,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #217 = MASK_WRITE
  { 218,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #218 = MOV_IMM_F32
  { 219,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #219 = MOV_IMM_GLOBAL_ADDR
  { 220,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #220 = MOV_IMM_I32
  { 221,	4,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x180ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #221 = PRED_X
  { 222,	3,	1,	0,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #222 = R600_EXTRACT_ELT_V2
  { 223,	3,	1,	0,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #223 = R600_EXTRACT_ELT_V4
  { 224,	4,	1,	0,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #224 = R600_INSERT_ELT_V2
  { 225,	4,	1,	0,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #225 = R600_INSERT_ELT_V4
  { 226,	4,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x8000000000000000ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #226 = R600_RegisterLoad
  { 227,	4,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x4000000000000000ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #227 = R600_RegisterStore
  { 228,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #228 = RETDYN
  { 229,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #229 = RETURN
  { 230,	7,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x2000ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #230 = TXD
  { 231,	7,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x2000ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #231 = TXD_SHADOW
  { 232,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #232 = WHILELOOP
  { 233,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #233 = ADD
  { 234,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #234 = ADDC_UINT
  { 235,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #235 = ADD_INT
  { 236,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #236 = ALU_CLAUSE
  { 237,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #237 = AND_INT
  { 238,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #238 = ASHR_eg
  { 239,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #239 = ASHR_r600
  { 240,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #240 = BCNT_INT
  { 241,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #241 = BFE_INT_eg
  { 242,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #242 = BFE_UINT_eg
  { 243,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #243 = BFI_INT_eg
  { 244,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #244 = BFM_INT_eg
  { 245,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #245 = BIT_ALIGN_INT_eg
  { 246,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #246 = CEIL
  { 247,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #247 = CF_ALU
  { 248,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #248 = CF_ALU_BREAK
  { 249,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #249 = CF_ALU_CONTINUE
  { 250,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #250 = CF_ALU_ELSE_AFTER
  { 251,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #251 = CF_ALU_POP_AFTER
  { 252,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #252 = CF_ALU_PUSH_BEFORE
  { 253,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #253 = CF_CALL_FS_EG
  { 254,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #254 = CF_CALL_FS_R600
  { 255,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #255 = CF_CONTINUE_EG
  { 256,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #256 = CF_CONTINUE_R600
  { 257,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #257 = CF_ELSE_EG
  { 258,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #258 = CF_ELSE_R600
  { 259,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #259 = CF_END_CM
  { 260,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #260 = CF_END_EG
  { 261,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #261 = CF_END_R600
  { 262,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #262 = CF_JUMP_EG
  { 263,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #263 = CF_JUMP_R600
  { 264,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #264 = CF_PUSH_EG
  { 265,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #265 = CF_PUSH_ELSE_R600
  { 266,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #266 = CF_TC_EG
  { 267,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #267 = CF_TC_R600
  { 268,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #268 = CF_VC_EG
  { 269,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #269 = CF_VC_R600
  { 270,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #270 = CNDE_INT
  { 271,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #271 = CNDE_eg
  { 272,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #272 = CNDE_r600
  { 273,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #273 = CNDGE_INT
  { 274,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #274 = CNDGE_eg
  { 275,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #275 = CNDGE_r600
  { 276,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #276 = CNDGT_INT
  { 277,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #277 = CNDGT_eg
  { 278,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #278 = CNDGT_r600
  { 279,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4650ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #279 = COS_cm
  { 280,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #280 = COS_eg
  { 281,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #281 = COS_r600
  { 282,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #282 = COS_r700
  { 283,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #283 = CUBE_eg_real
  { 284,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #284 = CUBE_r600_real
  { 285,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #285 = DOT4_eg
  { 286,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #286 = DOT4_r600
  { 287,	7,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #287 = EG_ExportBuf
  { 288,	9,	0,	0,	1,	0|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #288 = EG_ExportSwz
  { 289,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #289 = END_LOOP_EG
  { 290,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #290 = END_LOOP_R600
  { 291,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #291 = EXP_IEEE_cm
  { 292,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #292 = EXP_IEEE_eg
  { 293,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #293 = EXP_IEEE_r600
  { 294,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #294 = FETCH_CLAUSE
  { 295,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #295 = FFBH_UINT
  { 296,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #296 = FFBL_INT
  { 297,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #297 = FLOOR
  { 298,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #298 = FLT16_TO_FLT32
  { 299,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #299 = FLT32_TO_FLT16
  { 300,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #300 = FLT_TO_INT_eg
  { 301,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #301 = FLT_TO_INT_r600
  { 302,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #302 = FLT_TO_UINT_eg
  { 303,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #303 = FLT_TO_UINT_r600
  { 304,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #304 = FMA_eg
  { 305,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #305 = FRACT
  { 306,	0,	0,	0,	3,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x4000ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #306 = GROUP_BARRIER
  { 307,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #307 = INTERP_LOAD_P0
  { 308,	5,	2,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #308 = INTERP_PAIR_XY
  { 309,	5,	2,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #309 = INTERP_PAIR_ZW
  { 310,	2,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #310 = INTERP_VEC_LOAD
  { 311,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #311 = INTERP_XY
  { 312,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #312 = INTERP_ZW
  { 313,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #313 = INT_TO_FLT_eg
  { 314,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #314 = INT_TO_FLT_r600
  { 315,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #315 = KILLGT
  { 316,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #316 = LDS_ADD
  { 317,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #317 = LDS_ADD_RET
  { 318,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #318 = LDS_AND
  { 319,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #319 = LDS_AND_RET
  { 320,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #320 = LDS_BYTE_READ_RET
  { 321,	9,	0,	0,	5,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable), 0x14200ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #321 = LDS_BYTE_WRITE
  { 322,	12,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44200ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #322 = LDS_CMPST
  { 323,	13,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x44200ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #323 = LDS_CMPST_RET
  { 324,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #324 = LDS_MAX_INT
  { 325,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #325 = LDS_MAX_INT_RET
  { 326,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #326 = LDS_MAX_UINT
  { 327,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #327 = LDS_MAX_UINT_RET
  { 328,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #328 = LDS_MIN_INT
  { 329,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #329 = LDS_MIN_INT_RET
  { 330,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #330 = LDS_MIN_UINT
  { 331,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #331 = LDS_MIN_UINT_RET
  { 332,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #332 = LDS_OR
  { 333,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #333 = LDS_OR_RET
  { 334,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #334 = LDS_READ_RET
  { 335,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #335 = LDS_SHORT_READ_RET
  { 336,	9,	0,	0,	5,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable), 0x14200ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #336 = LDS_SHORT_WRITE
  { 337,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #337 = LDS_SUB
  { 338,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #338 = LDS_SUB_RET
  { 339,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #339 = LDS_UBYTE_READ_RET
  { 340,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #340 = LDS_USHORT_READ_RET
  { 341,	9,	0,	0,	5,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable), 0x14200ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #341 = LDS_WRITE
  { 342,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #342 = LDS_WRXCHG
  { 343,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #343 = LDS_WRXCHG_RET
  { 344,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #344 = LDS_XOR
  { 345,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #345 = LDS_XOR_RET
  { 346,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #346 = LITERALS
  { 347,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #347 = LOG_CLAMPED_eg
  { 348,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #348 = LOG_CLAMPED_r600
  { 349,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #349 = LOG_IEEE_cm
  { 350,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #350 = LOG_IEEE_eg
  { 351,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #351 = LOG_IEEE_r600
  { 352,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #352 = LOOP_BREAK_EG
  { 353,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #353 = LOOP_BREAK_R600
  { 354,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #354 = LSHL_eg
  { 355,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #355 = LSHL_r600
  { 356,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #356 = LSHR_eg
  { 357,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #357 = LSHR_r600
  { 358,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #358 = MAX
  { 359,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #359 = MAX_DX10
  { 360,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #360 = MAX_INT
  { 361,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #361 = MAX_UINT
  { 362,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #362 = MIN
  { 363,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #363 = MIN_DX10
  { 364,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #364 = MIN_INT
  { 365,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #365 = MIN_UINT
  { 366,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #366 = MOV
  { 367,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #367 = MOVA_INT_eg
  { 368,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #368 = MUL
  { 369,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #369 = MULADD_IEEE_eg
  { 370,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #370 = MULADD_IEEE_r600
  { 371,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #371 = MULADD_INT24_cm
  { 372,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #372 = MULADD_UINT24_eg
  { 373,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #373 = MULADD_eg
  { 374,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #374 = MULADD_r600
  { 375,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #375 = MULHI_INT_cm
  { 376,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #376 = MULHI_INT_cm24
  { 377,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #377 = MULHI_INT_eg
  { 378,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #378 = MULHI_INT_r600
  { 379,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #379 = MULHI_UINT24_eg
  { 380,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #380 = MULHI_UINT_cm
  { 381,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #381 = MULHI_UINT_cm24
  { 382,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #382 = MULHI_UINT_eg
  { 383,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #383 = MULHI_UINT_r600
  { 384,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #384 = MULLO_INT_cm
  { 385,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #385 = MULLO_INT_eg
  { 386,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #386 = MULLO_INT_r600
  { 387,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #387 = MULLO_UINT_cm
  { 388,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #388 = MULLO_UINT_eg
  { 389,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #389 = MULLO_UINT_r600
  { 390,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #390 = MUL_IEEE
  { 391,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #391 = MUL_INT24_cm
  { 392,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #392 = MUL_LIT_eg
  { 393,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #393 = MUL_LIT_r600
  { 394,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #394 = MUL_UINT24_eg
  { 395,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #395 = NOT_INT
  { 396,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #396 = OR_INT
  { 397,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #397 = PAD
  { 398,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #398 = POP_EG
  { 399,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #399 = POP_R600
  { 400,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #400 = PRED_SETE
  { 401,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #401 = PRED_SETE_INT
  { 402,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #402 = PRED_SETGE
  { 403,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #403 = PRED_SETGE_INT
  { 404,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #404 = PRED_SETGT
  { 405,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #405 = PRED_SETGT_INT
  { 406,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #406 = PRED_SETNE
  { 407,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #407 = PRED_SETNE_INT
  { 408,	7,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #408 = R600_ExportBuf
  { 409,	9,	0,	0,	1,	0|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #409 = R600_ExportSwz
  { 410,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #410 = RAT_ATOMIC_ADD_NORET
  { 411,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #411 = RAT_ATOMIC_ADD_RTN
  { 412,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #412 = RAT_ATOMIC_AND_NORET
  { 413,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #413 = RAT_ATOMIC_AND_RTN
  { 414,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #414 = RAT_ATOMIC_CMPXCHG_INT_NORET
  { 415,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #415 = RAT_ATOMIC_CMPXCHG_INT_RTN
  { 416,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #416 = RAT_ATOMIC_DEC_UINT_NORET
  { 417,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #417 = RAT_ATOMIC_DEC_UINT_RTN
  { 418,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #418 = RAT_ATOMIC_INC_UINT_NORET
  { 419,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #419 = RAT_ATOMIC_INC_UINT_RTN
  { 420,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #420 = RAT_ATOMIC_MAX_INT_NORET
  { 421,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #421 = RAT_ATOMIC_MAX_INT_RTN
  { 422,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #422 = RAT_ATOMIC_MAX_UINT_NORET
  { 423,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #423 = RAT_ATOMIC_MAX_UINT_RTN
  { 424,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #424 = RAT_ATOMIC_MIN_INT_NORET
  { 425,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #425 = RAT_ATOMIC_MIN_INT_RTN
  { 426,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #426 = RAT_ATOMIC_MIN_UINT_NORET
  { 427,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #427 = RAT_ATOMIC_MIN_UINT_RTN
  { 428,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #428 = RAT_ATOMIC_OR_NORET
  { 429,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #429 = RAT_ATOMIC_OR_RTN
  { 430,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #430 = RAT_ATOMIC_RSUB_NORET
  { 431,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #431 = RAT_ATOMIC_RSUB_RTN
  { 432,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #432 = RAT_ATOMIC_SUB_NORET
  { 433,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #433 = RAT_ATOMIC_SUB_RTN
  { 434,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #434 = RAT_ATOMIC_XCHG_INT_NORET
  { 435,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #435 = RAT_ATOMIC_XCHG_INT_RTN
  { 436,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #436 = RAT_ATOMIC_XOR_NORET
  { 437,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #437 = RAT_ATOMIC_XOR_RTN
  { 438,	2,	0,	0,	1,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #438 = RAT_MSKOR
  { 439,	2,	0,	0,	1,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #439 = RAT_STORE_DWORD128
  { 440,	2,	0,	0,	1,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #440 = RAT_STORE_DWORD32
  { 441,	2,	0,	0,	1,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #441 = RAT_STORE_DWORD64
  { 442,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #442 = RAT_STORE_TYPED_cm
  { 443,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #443 = RAT_STORE_TYPED_eg
  { 444,	3,	0,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x20000ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #444 = RAT_WRITE_CACHELESS_128_eg
  { 445,	3,	0,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x20000ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #445 = RAT_WRITE_CACHELESS_32_eg
  { 446,	3,	0,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x20000ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #446 = RAT_WRITE_CACHELESS_64_eg
  { 447,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #447 = RECIPSQRT_CLAMPED_cm
  { 448,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #448 = RECIPSQRT_CLAMPED_eg
  { 449,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #449 = RECIPSQRT_CLAMPED_r600
  { 450,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #450 = RECIPSQRT_IEEE_cm
  { 451,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #451 = RECIPSQRT_IEEE_eg
  { 452,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #452 = RECIPSQRT_IEEE_r600
  { 453,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #453 = RECIP_CLAMPED_cm
  { 454,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #454 = RECIP_CLAMPED_eg
  { 455,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #455 = RECIP_CLAMPED_r600
  { 456,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #456 = RECIP_IEEE_cm
  { 457,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #457 = RECIP_IEEE_eg
  { 458,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #458 = RECIP_IEEE_r600
  { 459,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #459 = RECIP_UINT_eg
  { 460,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #460 = RECIP_UINT_r600
  { 461,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #461 = RNDNE
  { 462,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #462 = SETE
  { 463,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #463 = SETE_DX10
  { 464,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #464 = SETE_INT
  { 465,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #465 = SETGE_DX10
  { 466,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #466 = SETGE_INT
  { 467,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #467 = SETGE_UINT
  { 468,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #468 = SETGT_DX10
  { 469,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #469 = SETGT_INT
  { 470,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #470 = SETGT_UINT
  { 471,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #471 = SETNE_DX10
  { 472,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #472 = SETNE_INT
  { 473,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #473 = SGE
  { 474,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #474 = SGT
  { 475,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4650ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #475 = SIN_cm
  { 476,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #476 = SIN_eg
  { 477,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #477 = SIN_r600
  { 478,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #478 = SIN_r700
  { 479,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #479 = SNE
  { 480,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #480 = SUBB_UINT
  { 481,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #481 = SUB_INT
  { 482,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #482 = TEX_GET_GRADIENTS_H
  { 483,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #483 = TEX_GET_GRADIENTS_V
  { 484,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #484 = TEX_GET_TEXTURE_RESINFO
  { 485,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #485 = TEX_LD
  { 486,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #486 = TEX_LDPTR
  { 487,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #487 = TEX_SAMPLE
  { 488,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #488 = TEX_SAMPLE_C
  { 489,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #489 = TEX_SAMPLE_C_G
  { 490,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #490 = TEX_SAMPLE_C_L
  { 491,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #491 = TEX_SAMPLE_C_LB
  { 492,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #492 = TEX_SAMPLE_G
  { 493,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #493 = TEX_SAMPLE_L
  { 494,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #494 = TEX_SAMPLE_LB
  { 495,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #495 = TEX_SET_GRADIENTS_H
  { 496,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #496 = TEX_SET_GRADIENTS_V
  { 497,	4,	1,	0,	1,	0, 0x1000ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #497 = TEX_VTX_CONSTBUF
  { 498,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1000ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #498 = TEX_VTX_TEXBUF
  { 499,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #499 = TRUNC
  { 500,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #500 = UINT_TO_FLT_eg
  { 501,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #501 = UINT_TO_FLT_r600
  { 502,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #502 = VTX_READ_128_cm
  { 503,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #503 = VTX_READ_128_eg
  { 504,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #504 = VTX_READ_16_cm
  { 505,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #505 = VTX_READ_16_eg
  { 506,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #506 = VTX_READ_32_cm
  { 507,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #507 = VTX_READ_32_eg
  { 508,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #508 = VTX_READ_64_cm
  { 509,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #509 = VTX_READ_64_eg
  { 510,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #510 = VTX_READ_8_cm
  { 511,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #511 = VTX_READ_8_eg
  { 512,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #512 = WHILE_LOOP_EG
  { 513,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #513 = WHILE_LOOP_R600
  { 514,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #514 = XOR_INT
};

extern const char R600InstrNameData[] = {
  /* 0 */ 'C', 'F', '_', 'T', 'C', '_', 'R', '6', '0', '0', 0,
  /* 11 */ 'C', 'F', '_', 'V', 'C', '_', 'R', '6', '0', '0', 0,
  /* 22 */ 'C', 'F', '_', 'E', 'N', 'D', '_', 'R', '6', '0', '0', 0,
  /* 34 */ 'C', 'F', '_', 'E', 'L', 'S', 'E', '_', 'R', '6', '0', '0', 0,
  /* 47 */ 'C', 'F', '_', 'P', 'U', 'S', 'H', '_', 'E', 'L', 'S', 'E', '_', 'R', '6', '0', '0', 0,
  /* 65 */ 'C', 'F', '_', 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'R', '6', '0', '0', 0,
  /* 82 */ 'F', 'N', 'E', 'G', '_', 'R', '6', '0', '0', 0,
  /* 92 */ 'L', 'O', 'O', 'P', '_', 'B', 'R', 'E', 'A', 'K', '_', 'R', '6', '0', '0', 0,
  /* 108 */ 'C', 'F', '_', 'J', 'U', 'M', 'P', '_', 'R', '6', '0', '0', 0,
  /* 121 */ 'E', 'N', 'D', '_', 'L', 'O', 'O', 'P', '_', 'R', '6', '0', '0', 0,
  /* 135 */ 'W', 'H', 'I', 'L', 'E', '_', 'L', 'O', 'O', 'P', '_', 'R', '6', '0', '0', 0,
  /* 151 */ 'P', 'O', 'P', '_', 'R', '6', '0', '0', 0,
  /* 160 */ 'F', 'A', 'B', 'S', '_', 'R', '6', '0', '0', 0,
  /* 170 */ 'C', 'F', '_', 'C', 'A', 'L', 'L', '_', 'F', 'S', '_', 'R', '6', '0', '0', 0,
  /* 186 */ 'D', 'O', 'T', '4', '_', 'r', '6', '0', '0', 0,
  /* 196 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'r', '6', '0', '0', 0,
  /* 208 */ 'L', 'O', 'G', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'r', '6', '0', '0', 0,
  /* 225 */ 'R', 'E', 'C', 'I', 'P', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'r', '6', '0', '0', 0,
  /* 244 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'r', '6', '0', '0', 0,
  /* 267 */ 'C', 'N', 'D', 'E', '_', 'r', '6', '0', '0', 0,
  /* 277 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'I', 'E', 'E', 'E', '_', 'r', '6', '0', '0', 0,
  /* 294 */ 'L', 'O', 'G', '_', 'I', 'E', 'E', 'E', '_', 'r', '6', '0', '0', 0,
  /* 308 */ 'R', 'E', 'C', 'I', 'P', '_', 'I', 'E', 'E', 'E', '_', 'r', '6', '0', '0', 0,
  /* 324 */ 'E', 'X', 'P', '_', 'I', 'E', 'E', 'E', '_', 'r', '6', '0', '0', 0,
  /* 338 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'I', 'E', 'E', 'E', '_', 'r', '6', '0', '0', 0,
  /* 358 */ 'C', 'N', 'D', 'G', 'E', '_', 'r', '6', '0', '0', 0,
  /* 369 */ 'L', 'S', 'H', 'L', '_', 'r', '6', '0', '0', 0,
  /* 379 */ 'S', 'I', 'N', '_', 'r', '6', '0', '0', 0,
  /* 388 */ 'A', 'S', 'H', 'R', '_', 'r', '6', '0', '0', 0,
  /* 398 */ 'L', 'S', 'H', 'R', '_', 'r', '6', '0', '0', 0,
  /* 408 */ 'C', 'O', 'S', '_', 'r', '6', '0', '0', 0,
  /* 417 */ 'C', 'N', 'D', 'G', 'T', '_', 'r', '6', '0', '0', 0,
  /* 428 */ 'M', 'U', 'L', '_', 'L', 'I', 'T', '_', 'r', '6', '0', '0', 0,
  /* 441 */ 'U', 'I', 'N', 'T', '_', 'T', 'O', '_', 'F', 'L', 'T', '_', 'r', '6', '0', '0', 0,
  /* 458 */ 'M', 'U', 'L', 'H', 'I', '_', 'U', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 474 */ 'M', 'U', 'L', 'L', 'O', '_', 'U', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 490 */ 'F', 'L', 'T', '_', 'T', 'O', '_', 'U', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 507 */ 'R', 'E', 'C', 'I', 'P', '_', 'U', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 523 */ 'M', 'U', 'L', 'H', 'I', '_', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 538 */ 'M', 'U', 'L', 'L', 'O', '_', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 553 */ 'F', 'L', 'T', '_', 'T', 'O', '_', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 569 */ 'S', 'I', 'N', '_', 'r', '7', '0', '0', 0,
  /* 578 */ 'C', 'O', 'S', '_', 'r', '7', '0', '0', 0,
  /* 587 */ 'G', '_', 'F', 'L', 'O', 'G', '1', '0', 0,
  /* 596 */ 'S', 'E', 'T', 'G', 'E', '_', 'D', 'X', '1', '0', 0,
  /* 607 */ 'S', 'E', 'T', 'N', 'E', '_', 'D', 'X', '1', '0', 0,
  /* 618 */ 'S', 'E', 'T', 'E', '_', 'D', 'X', '1', '0', 0,
  /* 628 */ 'M', 'I', 'N', '_', 'D', 'X', '1', '0', 0,
  /* 637 */ 'S', 'E', 'T', 'G', 'T', '_', 'D', 'X', '1', '0', 0,
  /* 648 */ 'M', 'A', 'X', '_', 'D', 'X', '1', '0', 0,
  /* 657 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'L', 'O', 'A', 'D', '_', 'P', '0', 0,
  /* 672 */ 'R', 'A', 'T', '_', 'S', 'T', 'O', 'R', 'E', '_', 'D', 'W', 'O', 'R', 'D', '3', '2', 0,
  /* 690 */ 'M', 'O', 'V', '_', 'I', 'M', 'M', '_', 'F', '3', '2', 0,
  /* 702 */ 'M', 'O', 'V', '_', 'I', 'M', 'M', '_', 'I', '3', '2', 0,
  /* 714 */ 'F', 'L', 'T', '1', '6', '_', 'T', 'O', '_', 'F', 'L', 'T', '3', '2', 0,
  /* 729 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', 'C', '_', 'f', '3', '2', 0,
  /* 743 */ 'I', 'F', 'C', '_', 'f', '3', '2', 0,
  /* 751 */ 'B', 'R', 'E', 'A', 'K', 'C', '_', 'f', '3', '2', 0,
  /* 762 */ 'B', 'R', 'A', 'N', 'C', 'H', '_', 'C', 'O', 'N', 'D', '_', 'f', '3', '2', 0,
  /* 778 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'f', '3', '2', 0,
  /* 800 */ 'I', 'F', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'f', '3', '2', 0,
  /* 816 */ 'B', 'R', 'E', 'A', 'K', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'f', '3', '2', 0,
  /* 835 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'f', '3', '2', 0,
  /* 858 */ 'I', 'F', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'f', '3', '2', 0,
  /* 875 */ 'B', 'R', 'E', 'A', 'K', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'f', '3', '2', 0,
  /* 895 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', 'C', '_', 'i', '3', '2', 0,
  /* 909 */ 'I', 'F', 'C', '_', 'i', '3', '2', 0,
  /* 917 */ 'B', 'R', 'E', 'A', 'K', 'C', '_', 'i', '3', '2', 0,
  /* 928 */ 'B', 'R', 'A', 'N', 'C', 'H', '_', 'C', 'O', 'N', 'D', '_', 'i', '3', '2', 0,
  /* 944 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'i', '3', '2', 0,
  /* 966 */ 'I', 'F', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'i', '3', '2', 0,
  /* 982 */ 'B', 'R', 'E', 'A', 'K', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'i', '3', '2', 0,
  /* 1001 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'i', '3', '2', 0,
  /* 1024 */ 'I', 'F', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'i', '3', '2', 0,
  /* 1041 */ 'B', 'R', 'E', 'A', 'K', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'i', '3', '2', 0,
  /* 1061 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 1069 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 1077 */ 'R', '6', '0', '0', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'E', 'L', 'T', '_', 'V', '2', 0,
  /* 1097 */ 'R', '6', '0', '0', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'E', 'L', 'T', '_', 'V', '2', 0,
  /* 1116 */ 'M', 'U', 'L', 'H', 'I', '_', 'U', 'I', 'N', 'T', '_', 'c', 'm', '2', '4', 0,
  /* 1132 */ 'M', 'U', 'L', 'H', 'I', '_', 'I', 'N', 'T', '_', 'c', 'm', '2', '4', 0,
  /* 1147 */ 'R', 'A', 'T', '_', 'S', 'T', 'O', 'R', 'E', '_', 'D', 'W', 'O', 'R', 'D', '6', '4', 0,
  /* 1165 */ 'R', '6', '0', '0', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'E', 'L', 'T', '_', 'V', '4', 0,
  /* 1185 */ 'R', '6', '0', '0', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'E', 'L', 'T', '_', 'V', '4', 0,
  /* 1204 */ 'D', 'O', 'T', '_', '4', 0,
  /* 1210 */ 'F', 'L', 'T', '3', '2', '_', 'T', 'O', '_', 'F', 'L', 'T', '1', '6', 0,
  /* 1225 */ 'R', 'A', 'T', '_', 'S', 'T', 'O', 'R', 'E', '_', 'D', 'W', 'O', 'R', 'D', '1', '2', '8', 0,
  /* 1244 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 1250 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'C', '_', 'L', 'B', 0,
  /* 1266 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'L', 'B', 0,
  /* 1280 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 1287 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'S', 'U', 'B', 0,
  /* 1304 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 1310 */ 'L', 'D', 'S', '_', 'S', 'U', 'B', 0,
  /* 1318 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'S', 'U', 'B', 0,
  /* 1334 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 1346 */ 'E', 'N', 'D', 'F', 'U', 'N', 'C', 0,
  /* 1354 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 1364 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 1382 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 1390 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 1411 */ 'G', '_', 'D', 'Y', 'N', '_', 'S', 'T', 'A', 'C', 'K', 'A', 'L', 'L', 'O', 'C', 0,
  /* 1428 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'C', 0,
  /* 1441 */ 'G', '_', 'F', 'M', 'A', 'D', 0,
  /* 1448 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 1467 */ 'G', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 1478 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 1497 */ 'G', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 1508 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'V', 'E', 'C', '_', 'L', 'O', 'A', 'D', 0,
  /* 1524 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'L', 'O', 'A', 'D', 0,
  /* 1539 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 1546 */ 'P', 'A', 'D', 0,
  /* 1550 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 1557 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'A', 'D', 'D', 0,
  /* 1574 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 1580 */ 'G', '_', 'P', 'T', 'R', '_', 'A', 'D', 'D', 0,
  /* 1590 */ 'L', 'D', 'S', '_', 'A', 'D', 'D', 0,
  /* 1598 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'D', 'D', 0,
  /* 1614 */ 'T', 'E', 'X', '_', 'L', 'D', 0,
  /* 1621 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'N', 'A', 'N', 'D', 0,
  /* 1638 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 1644 */ 'L', 'D', 'S', '_', 'A', 'N', 'D', 0,
  /* 1652 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'N', 'D', 0,
  /* 1668 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 1681 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 1690 */ 'J', 'U', 'M', 'P', '_', 'C', 'O', 'N', 'D', 0,
  /* 1700 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'R', 'O', 'U', 'N', 'D', 0,
  /* 1718 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 1735 */ 'T', 'X', 'D', 0,
  /* 1739 */ 'G', '_', 'S', 'S', 'U', 'B', 'E', 0,
  /* 1747 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 1755 */ 'G', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 1763 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 1776 */ 'G', '_', 'S', 'A', 'D', 'D', 'E', 0,
  /* 1784 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 1792 */ 'M', 'U', 'L', '_', 'I', 'E', 'E', 'E', 0,
  /* 1801 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 1816 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 1831 */ 'S', 'G', 'E', 0,
  /* 1835 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'G', 'E', 0,
  /* 1846 */ 'G', '_', 'J', 'U', 'M', 'P', '_', 'T', 'A', 'B', 'L', 'E', 0,
  /* 1859 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1866 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', 0,
  /* 1877 */ 'R', 'N', 'D', 'N', 'E', 0,
  /* 1883 */ 'S', 'N', 'E', 0,
  /* 1887 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'N', 'E', 0,
  /* 1898 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 1911 */ 'C', 'F', '_', 'A', 'L', 'U', '_', 'P', 'U', 'S', 'H', '_', 'B', 'E', 'F', 'O', 'R', 'E', 0,
  /* 1930 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 1946 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 1954 */ 'E', 'L', 'S', 'E', 0,
  /* 1959 */ 'G', '_', 'B', 'I', 'T', 'R', 'E', 'V', 'E', 'R', 'S', 'E', 0,
  /* 1972 */ 'F', 'E', 'T', 'C', 'H', '_', 'C', 'L', 'A', 'U', 'S', 'E', 0,
  /* 1985 */ 'A', 'L', 'U', '_', 'C', 'L', 'A', 'U', 'S', 'E', 0,
  /* 1996 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'E', 0,
  /* 2006 */ 'L', 'D', 'S', '_', 'B', 'Y', 'T', 'E', '_', 'W', 'R', 'I', 'T', 'E', 0,
  /* 2021 */ 'M', 'A', 'S', 'K', '_', 'W', 'R', 'I', 'T', 'E', 0,
  /* 2032 */ 'L', 'D', 'S', '_', 'W', 'R', 'I', 'T', 'E', 0,
  /* 2042 */ 'L', 'D', 'S', '_', 'S', 'H', 'O', 'R', 'T', '_', 'W', 'R', 'I', 'T', 'E', 0,
  /* 2058 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 2068 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 2083 */ 'C', 'F', '_', 'A', 'L', 'U', '_', 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', 0,
  /* 2099 */ 'G', '_', 'F', 'C', 'A', 'N', 'O', 'N', 'I', 'C', 'A', 'L', 'I', 'Z', 'E', 0,
  /* 2115 */ 'G', '_', 'C', 'T', 'L', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 2133 */ 'G', '_', 'C', 'T', 'T', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 2151 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 2166 */ 'E', 'N', 'D', 'I', 'F', 0,
  /* 2172 */ 'T', 'E', 'X', '_', 'V', 'T', 'X', '_', 'C', 'O', 'N', 'S', 'T', 'B', 'U', 'F', 0,
  /* 2189 */ 'T', 'E', 'X', '_', 'V', 'T', 'X', '_', 'T', 'E', 'X', 'B', 'U', 'F', 0,
  /* 2204 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 2211 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 2226 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 2240 */ 'G', '_', 'S', 'E', 'X', 'T', '_', 'I', 'N', 'R', 'E', 'G', 0,
  /* 2253 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 2267 */ 'C', 'F', '_', 'T', 'C', '_', 'E', 'G', 0,
  /* 2276 */ 'C', 'F', '_', 'V', 'C', '_', 'E', 'G', 0,
  /* 2285 */ 'C', 'F', '_', 'E', 'N', 'D', '_', 'E', 'G', 0,
  /* 2295 */ 'C', 'F', '_', 'E', 'L', 'S', 'E', '_', 'E', 'G', 0,
  /* 2306 */ 'C', 'F', '_', 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'E', 'G', 0,
  /* 2321 */ 'C', 'F', '_', 'P', 'U', 'S', 'H', '_', 'E', 'G', 0,
  /* 2332 */ 'L', 'O', 'O', 'P', '_', 'B', 'R', 'E', 'A', 'K', '_', 'E', 'G', 0,
  /* 2346 */ 'C', 'F', '_', 'J', 'U', 'M', 'P', '_', 'E', 'G', 0,
  /* 2357 */ 'E', 'N', 'D', '_', 'L', 'O', 'O', 'P', '_', 'E', 'G', 0,
  /* 2369 */ 'W', 'H', 'I', 'L', 'E', '_', 'L', 'O', 'O', 'P', '_', 'E', 'G', 0,
  /* 2383 */ 'P', 'O', 'P', '_', 'E', 'G', 0,
  /* 2390 */ 'C', 'F', '_', 'C', 'A', 'L', 'L', '_', 'F', 'S', '_', 'E', 'G', 0,
  /* 2404 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', 0,
  /* 2421 */ 'L', 'D', 'S', '_', 'W', 'R', 'X', 'C', 'H', 'G', 0,
  /* 2432 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', 0,
  /* 2449 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 2456 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 2464 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'C', '_', 'G', 0,
  /* 2479 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'G', 0,
  /* 2492 */ 'B', 'R', 'A', 'N', 'C', 'H', 0,
  /* 2499 */ 'E', 'N', 'D', 'S', 'W', 'I', 'T', 'C', 'H', 0,
  /* 2509 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 2517 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 2525 */ 'T', 'E', 'X', '_', 'G', 'E', 'T', '_', 'G', 'R', 'A', 'D', 'I', 'E', 'N', 'T', 'S', '_', 'H', 0,
  /* 2545 */ 'T', 'E', 'X', '_', 'S', 'E', 'T', '_', 'G', 'R', 'A', 'D', 'I', 'E', 'N', 'T', 'S', '_', 'H', 0,
  /* 2565 */ 'G', '_', 'P', 'H', 'I', 0,
  /* 2571 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 2580 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 2589 */ 'C', 'F', '_', 'A', 'L', 'U', '_', 'B', 'R', 'E', 'A', 'K', 0,
  /* 2602 */ 'G', '_', 'P', 'T', 'R', '_', 'M', 'A', 'S', 'K', 0,
  /* 2613 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2622 */ 'D', 'B', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2632 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2641 */ 'A', 'N', 'N', 'O', 'T', 'A', 'T', 'I', 'O', 'N', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2658 */ 'I', 'C', 'A', 'L', 'L', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'F', 'U', 'N', 'N', 'E', 'L', 0,
  /* 2678 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 2684 */ 'G', '_', 'F', 'C', 'E', 'I', 'L', 0,
  /* 2692 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 2712 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 2739 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 2760 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 2772 */ 'K', 'I', 'L', 'L', 0,
  /* 2777 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 2784 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 2790 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'C', '_', 'L', 0,
  /* 2805 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'L', 0,
  /* 2818 */ 'C', 'F', '_', 'E', 'N', 'D', '_', 'C', 'M', 0,
  /* 2828 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 2835 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 2842 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 2849 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 2859 */ 'G', '_', 'F', 'M', 'I', 'N', 'I', 'M', 'U', 'M', 0,
  /* 2870 */ 'G', '_', 'F', 'M', 'A', 'X', 'I', 'M', 'U', 'M', 0,
  /* 2881 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', 0,
  /* 2891 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', 0,
  /* 2901 */ 'G', '_', 'F', 'C', 'O', 'P', 'Y', 'S', 'I', 'G', 'N', 0,
  /* 2913 */ 'D', 'U', 'M', 'M', 'Y', '_', 'C', 'H', 'A', 'I', 'N', 0,
  /* 2925 */ 'E', 'N', 'D', 'M', 'A', 'I', 'N', 0,
  /* 2933 */ 'G', '_', 'S', 'M', 'I', 'N', 0,
  /* 2940 */ 'G', '_', 'U', 'M', 'I', 'N', 0,
  /* 2947 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 2964 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'I', 'N', 0,
  /* 2980 */ 'G', '_', 'F', 'S', 'I', 'N', 0,
  /* 2987 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 3003 */ 'R', 'E', 'T', 'U', 'R', 'N', 0,
  /* 3010 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'S', 'U', 'B', '_', 'R', 'T', 'N', 0,
  /* 3030 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'U', 'B', '_', 'R', 'T', 'N', 0,
  /* 3049 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'A', 'D', 'D', '_', 'R', 'T', 'N', 0,
  /* 3068 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'A', 'N', 'D', '_', 'R', 'T', 'N', 0,
  /* 3087 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'X', 'O', 'R', '_', 'R', 'T', 'N', 0,
  /* 3106 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'O', 'R', '_', 'R', 'T', 'N', 0,
  /* 3124 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'D', 'E', 'C', '_', 'U', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3148 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'I', 'N', 'C', '_', 'U', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3172 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'I', 'N', '_', 'U', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3196 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'A', 'X', '_', 'U', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3220 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3247 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'X', 'C', 'H', 'G', '_', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3271 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'I', 'N', '_', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3294 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'A', 'X', '_', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3317 */ 'R', 'E', 'T', 'D', 'Y', 'N', 0,
  /* 3324 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 3332 */ 'G', '_', 'U', 'S', 'U', 'B', 'O', 0,
  /* 3340 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 3348 */ 'G', '_', 'U', 'A', 'D', 'D', 'O', 0,
  /* 3356 */ 'T', 'E', 'X', '_', 'G', 'E', 'T', '_', 'T', 'E', 'X', 'T', 'U', 'R', 'E', '_', 'R', 'E', 'S', 'I', 'N', 'F', 'O', 0,
  /* 3380 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 3388 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 3396 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 3405 */ 'G', '_', 'B', 'S', 'W', 'A', 'P', 0,
  /* 3413 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 3422 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 3431 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 3438 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 3445 */ 'J', 'U', 'M', 'P', 0,
  /* 3450 */ 'E', 'N', 'D', 'L', 'O', 'O', 'P', 0,
  /* 3458 */ 'W', 'H', 'I', 'L', 'E', 'L', 'O', 'O', 'P', 0,
  /* 3468 */ 'G', '_', 'C', 'T', 'P', 'O', 'P', 0,
  /* 3476 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 3489 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 3501 */ 'G', '_', 'F', 'E', 'X', 'P', 0,
  /* 3508 */ 'G', '_', 'B', 'R', 0,
  /* 3513 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', '_', 'B', 'R', 0,
  /* 3526 */ 'G', '_', 'B', 'L', 'O', 'C', 'K', '_', 'A', 'D', 'D', 'R', 0,
  /* 3539 */ 'M', 'O', 'V', '_', 'I', 'M', 'M', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'A', 'D', 'D', 'R', 0,
  /* 3559 */ 'G', 'R', 'O', 'U', 'P', '_', 'B', 'A', 'R', 'R', 'I', 'E', 'R', 0,
  /* 3573 */ 'C', 'F', '_', 'A', 'L', 'U', '_', 'E', 'L', 'S', 'E', '_', 'A', 'F', 'T', 'E', 'R', 0,
  /* 3591 */ 'C', 'F', '_', 'A', 'L', 'U', '_', 'P', 'O', 'P', '_', 'A', 'F', 'T', 'E', 'R', 0,
  /* 3608 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 3633 */ 'G', '_', 'R', 'E', 'A', 'D', 'C', 'Y', 'C', 'L', 'E', 'C', 'O', 'U', 'N', 'T', 'E', 'R', 0,
  /* 3652 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 3659 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 3666 */ 'R', 'A', 'T', '_', 'M', 'S', 'K', 'O', 'R', 0,
  /* 3676 */ 'G', '_', 'F', 'F', 'L', 'O', 'O', 'R', 0,
  /* 3685 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 3700 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 3717 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 3723 */ 'L', 'D', 'S', '_', 'X', 'O', 'R', 0,
  /* 3731 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'O', 'R', 0,
  /* 3747 */ 'G', '_', 'O', 'R', 0,
  /* 3752 */ 'L', 'D', 'S', '_', 'O', 'R', 0,
  /* 3759 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'O', 'R', 0,
  /* 3774 */ 'T', 'E', 'X', '_', 'L', 'D', 'P', 'T', 'R', 0,
  /* 3784 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 3795 */ 'G', '_', 'F', 'A', 'B', 'S', 0,
  /* 3802 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 3819 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 3834 */ 'L', 'I', 'T', 'E', 'R', 'A', 'L', 'S', 0,
  /* 3843 */ 'G', '_', 'F', 'C', 'O', 'S', 0,
  /* 3850 */ 'G', '_', 'C', 'O', 'N', 'C', 'A', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', 'S', 0,
  /* 3867 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 3884 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'W', 'I', 'T', 'H', '_', 'S', 'U', 'C', 'C', 'E', 'S', 'S', 0,
  /* 3914 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 3941 */ 'F', 'R', 'A', 'C', 'T', 0,
  /* 3947 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 3957 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 3966 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 3979 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'S', 'U', 'B', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4001 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'U', 'B', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4022 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'A', 'D', 'D', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4043 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'A', 'N', 'D', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4064 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'X', 'O', 'R', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4085 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'O', 'R', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4105 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'D', 'E', 'C', '_', 'U', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4131 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'I', 'N', 'C', '_', 'U', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4157 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'I', 'N', '_', 'U', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4183 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'A', 'X', '_', 'U', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4209 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4238 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'X', 'C', 'H', 'G', '_', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4264 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'I', 'N', '_', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4289 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'A', 'X', '_', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4314 */ 'L', 'D', 'S', '_', 'S', 'U', 'B', '_', 'R', 'E', 'T', 0,
  /* 4326 */ 'L', 'D', 'S', '_', 'U', 'B', 'Y', 'T', 'E', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'T', 0,
  /* 4345 */ 'L', 'D', 'S', '_', 'B', 'Y', 'T', 'E', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'T', 0,
  /* 4363 */ 'L', 'D', 'S', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'T', 0,
  /* 4376 */ 'L', 'D', 'S', '_', 'U', 'S', 'H', 'O', 'R', 'T', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'T', 0,
  /* 4396 */ 'L', 'D', 'S', '_', 'S', 'H', 'O', 'R', 'T', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'T', 0,
  /* 4415 */ 'L', 'D', 'S', '_', 'A', 'D', 'D', '_', 'R', 'E', 'T', 0,
  /* 4427 */ 'L', 'D', 'S', '_', 'A', 'N', 'D', '_', 'R', 'E', 'T', 0,
  /* 4439 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 4453 */ 'L', 'D', 'S', '_', 'W', 'R', 'X', 'C', 'H', 'G', '_', 'R', 'E', 'T', 0,
  /* 4468 */ 'L', 'D', 'S', '_', 'X', 'O', 'R', '_', 'R', 'E', 'T', 0,
  /* 4480 */ 'L', 'D', 'S', '_', 'O', 'R', '_', 'R', 'E', 'T', 0,
  /* 4491 */ 'L', 'D', 'S', '_', 'M', 'I', 'N', '_', 'U', 'I', 'N', 'T', '_', 'R', 'E', 'T', 0,
  /* 4508 */ 'L', 'D', 'S', '_', 'M', 'A', 'X', '_', 'U', 'I', 'N', 'T', '_', 'R', 'E', 'T', 0,
  /* 4525 */ 'L', 'D', 'S', '_', 'M', 'I', 'N', '_', 'I', 'N', 'T', '_', 'R', 'E', 'T', 0,
  /* 4541 */ 'L', 'D', 'S', '_', 'M', 'A', 'X', '_', 'I', 'N', 'T', '_', 'R', 'E', 'T', 0,
  /* 4557 */ 'L', 'D', 'S', '_', 'C', 'M', 'P', 'S', 'T', '_', 'R', 'E', 'T', 0,
  /* 4571 */ 'I', 'F', '_', 'P', 'R', 'E', 'D', 'I', 'C', 'A', 'T', 'E', '_', 'S', 'E', 'T', 0,
  /* 4588 */ 'K', 'I', 'L', 'L', 'G', 'T', 0,
  /* 4595 */ 'S', 'G', 'T', 0,
  /* 4599 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'G', 'T', 0,
  /* 4610 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 4634 */ 'G', '_', 'B', 'R', 'J', 'T', 0,
  /* 4641 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 4662 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 4682 */ 'D', 'E', 'F', 'A', 'U', 'L', 'T', 0,
  /* 4690 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 4702 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 4713 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 4724 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 4735 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 4746 */ 'G', '_', 'F', 'R', 'I', 'N', 'T', 0,
  /* 4754 */ 'S', 'U', 'B', 'B', '_', 'U', 'I', 'N', 'T', 0,
  /* 4764 */ 'A', 'D', 'D', 'C', '_', 'U', 'I', 'N', 'T', 0,
  /* 4774 */ 'S', 'E', 'T', 'G', 'E', '_', 'U', 'I', 'N', 'T', 0,
  /* 4785 */ 'F', 'F', 'B', 'H', '_', 'U', 'I', 'N', 'T', 0,
  /* 4795 */ 'L', 'D', 'S', '_', 'M', 'I', 'N', '_', 'U', 'I', 'N', 'T', 0,
  /* 4808 */ 'S', 'E', 'T', 'G', 'T', '_', 'U', 'I', 'N', 'T', 0,
  /* 4819 */ 'L', 'D', 'S', '_', 'M', 'A', 'X', '_', 'U', 'I', 'N', 'T', 0,
  /* 4832 */ 'G', '_', 'F', 'N', 'E', 'A', 'R', 'B', 'Y', 'I', 'N', 'T', 0,
  /* 4845 */ 'S', 'U', 'B', '_', 'I', 'N', 'T', 0,
  /* 4853 */ 'A', 'D', 'D', '_', 'I', 'N', 'T', 0,
  /* 4861 */ 'A', 'N', 'D', '_', 'I', 'N', 'T', 0,
  /* 4869 */ 'C', 'N', 'D', 'E', '_', 'I', 'N', 'T', 0,
  /* 4878 */ 'C', 'N', 'D', 'G', 'E', '_', 'I', 'N', 'T', 0,
  /* 4888 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'G', 'E', '_', 'I', 'N', 'T', 0,
  /* 4903 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'N', 'E', '_', 'I', 'N', 'T', 0,
  /* 4918 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'E', '_', 'I', 'N', 'T', 0,
  /* 4932 */ 'F', 'F', 'B', 'L', '_', 'I', 'N', 'T', 0,
  /* 4941 */ 'L', 'D', 'S', '_', 'M', 'I', 'N', '_', 'I', 'N', 'T', 0,
  /* 4953 */ 'X', 'O', 'R', '_', 'I', 'N', 'T', 0,
  /* 4961 */ 'C', 'N', 'D', 'G', 'T', '_', 'I', 'N', 'T', 0,
  /* 4971 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'G', 'T', '_', 'I', 'N', 'T', 0,
  /* 4986 */ 'B', 'C', 'N', 'T', '_', 'I', 'N', 'T', 0,
  /* 4995 */ 'N', 'O', 'T', '_', 'I', 'N', 'T', 0,
  /* 5003 */ 'L', 'D', 'S', '_', 'M', 'A', 'X', '_', 'I', 'N', 'T', 0,
  /* 5015 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 5025 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 5040 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 5049 */ 'G', '_', 'F', 'S', 'Q', 'R', 'T', 0,
  /* 5057 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 5067 */ 'G', '_', 'A', 'D', 'D', 'R', 'S', 'P', 'A', 'C', 'E', '_', 'C', 'A', 'S', 'T', 0,
  /* 5084 */ 'L', 'D', 'S', '_', 'C', 'M', 'P', 'S', 'T', 0,
  /* 5094 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 5102 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 5109 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 5118 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 5125 */ 'C', 'F', '_', 'A', 'L', 'U', 0,
  /* 5132 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 5139 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 5146 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 5153 */ 'M', 'O', 'V', 0,
  /* 5157 */ 'T', 'E', 'X', '_', 'G', 'E', 'T', '_', 'G', 'R', 'A', 'D', 'I', 'E', 'N', 'T', 'S', '_', 'V', 0,
  /* 5177 */ 'T', 'E', 'X', '_', 'S', 'E', 'T', '_', 'G', 'R', 'A', 'D', 'I', 'E', 'N', 'T', 'S', '_', 'V', 0,
  /* 5197 */ 'T', 'X', 'D', '_', 'S', 'H', 'A', 'D', 'O', 'W', 0,
  /* 5208 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 5215 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'Z', 'W', 0,
  /* 5225 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'P', 'A', 'I', 'R', '_', 'Z', 'W', 0,
  /* 5240 */ 'G', '_', 'S', 'M', 'A', 'X', 0,
  /* 5247 */ 'G', '_', 'U', 'M', 'A', 'X', 0,
  /* 5254 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 5271 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'A', 'X', 0,
  /* 5287 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 5301 */ 'P', 'R', 'E', 'D', '_', 'X', 0,
  /* 5308 */ 'C', 'O', 'N', 'S', 'T', '_', 'C', 'O', 'P', 'Y', 0,
  /* 5319 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'X', 'Y', 0,
  /* 5329 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'P', 'A', 'I', 'R', '_', 'X', 'Y', 0,
  /* 5344 */ 'G', '_', 'C', 'T', 'L', 'Z', 0,
  /* 5351 */ 'G', '_', 'C', 'T', 'T', 'Z', 0,
  /* 5358 */ 'R', '6', '0', '0', '_', 'R', 'e', 'g', 'i', 's', 't', 'e', 'r', 'L', 'o', 'a', 'd', 0,
  /* 5376 */ 'R', '6', '0', '0', '_', 'R', 'e', 'g', 'i', 's', 't', 'e', 'r', 'S', 't', 'o', 'r', 'e', 0,
  /* 5395 */ 'R', '6', '0', '0', '_', 'E', 'x', 'p', 'o', 'r', 't', 'B', 'u', 'f', 0,
  /* 5410 */ 'E', 'G', '_', 'E', 'x', 'p', 'o', 'r', 't', 'B', 'u', 'f', 0,
  /* 5423 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '3', '2', '_', 'e', 'g', 0,
  /* 5438 */ 'R', 'A', 'T', '_', 'W', 'R', 'I', 'T', 'E', '_', 'C', 'A', 'C', 'H', 'E', 'L', 'E', 'S', 'S', '_', '3', '2', '_', 'e', 'g', 0,
  /* 5464 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'U', 'I', 'N', 'T', '2', '4', '_', 'e', 'g', 0,
  /* 5481 */ 'M', 'U', 'L', 'H', 'I', '_', 'U', 'I', 'N', 'T', '2', '4', '_', 'e', 'g', 0,
  /* 5497 */ 'M', 'U', 'L', '_', 'U', 'I', 'N', 'T', '2', '4', '_', 'e', 'g', 0,
  /* 5511 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '6', '4', '_', 'e', 'g', 0,
  /* 5526 */ 'R', 'A', 'T', '_', 'W', 'R', 'I', 'T', 'E', '_', 'C', 'A', 'C', 'H', 'E', 'L', 'E', 'S', 'S', '_', '6', '4', '_', 'e', 'g', 0,
  /* 5552 */ 'D', 'O', 'T', '4', '_', 'e', 'g', 0,
  /* 5560 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '1', '6', '_', 'e', 'g', 0,
  /* 5575 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '1', '2', '8', '_', 'e', 'g', 0,
  /* 5591 */ 'R', 'A', 'T', '_', 'W', 'R', 'I', 'T', 'E', '_', 'C', 'A', 'C', 'H', 'E', 'L', 'E', 'S', 'S', '_', '1', '2', '8', '_', 'e', 'g', 0,
  /* 5618 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '8', '_', 'e', 'g', 0,
  /* 5632 */ 'F', 'M', 'A', '_', 'e', 'g', 0,
  /* 5639 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'e', 'g', 0,
  /* 5649 */ 'L', 'O', 'G', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'e', 'g', 0,
  /* 5664 */ 'R', 'E', 'C', 'I', 'P', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'e', 'g', 0,
  /* 5681 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'e', 'g', 0,
  /* 5702 */ 'R', 'A', 'T', '_', 'S', 'T', 'O', 'R', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'e', 'g', 0,
  /* 5721 */ 'C', 'N', 'D', 'E', '_', 'e', 'g', 0,
  /* 5729 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'I', 'E', 'E', 'E', '_', 'e', 'g', 0,
  /* 5744 */ 'L', 'O', 'G', '_', 'I', 'E', 'E', 'E', '_', 'e', 'g', 0,
  /* 5756 */ 'R', 'E', 'C', 'I', 'P', '_', 'I', 'E', 'E', 'E', '_', 'e', 'g', 0,
  /* 5770 */ 'E', 'X', 'P', '_', 'I', 'E', 'E', 'E', '_', 'e', 'g', 0,
  /* 5782 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'I', 'E', 'E', 'E', '_', 'e', 'g', 0,
  /* 5800 */ 'C', 'N', 'D', 'G', 'E', '_', 'e', 'g', 0,
  /* 5809 */ 'L', 'S', 'H', 'L', '_', 'e', 'g', 0,
  /* 5817 */ 'S', 'I', 'N', '_', 'e', 'g', 0,
  /* 5824 */ 'A', 'S', 'H', 'R', '_', 'e', 'g', 0,
  /* 5832 */ 'L', 'S', 'H', 'R', '_', 'e', 'g', 0,
  /* 5840 */ 'C', 'O', 'S', '_', 'e', 'g', 0,
  /* 5847 */ 'C', 'N', 'D', 'G', 'T', '_', 'e', 'g', 0,
  /* 5856 */ 'M', 'U', 'L', '_', 'L', 'I', 'T', '_', 'e', 'g', 0,
  /* 5867 */ 'U', 'I', 'N', 'T', '_', 'T', 'O', '_', 'F', 'L', 'T', '_', 'e', 'g', 0,
  /* 5882 */ 'B', 'F', 'E', '_', 'U', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5894 */ 'M', 'U', 'L', 'H', 'I', '_', 'U', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5908 */ 'M', 'U', 'L', 'L', 'O', '_', 'U', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5922 */ 'F', 'L', 'T', '_', 'T', 'O', '_', 'U', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5937 */ 'R', 'E', 'C', 'I', 'P', '_', 'U', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5951 */ 'M', 'O', 'V', 'A', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5963 */ 'B', 'F', 'E', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5974 */ 'B', 'F', 'I', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5985 */ 'M', 'U', 'L', 'H', 'I', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5998 */ 'B', 'F', 'M', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6009 */ 'B', 'I', 'T', '_', 'A', 'L', 'I', 'G', 'N', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6026 */ 'M', 'U', 'L', 'L', 'O', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6039 */ 'F', 'L', 'T', '_', 'T', 'O', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 6053 */ 'C', 'U', 'B', 'E', '_', 'r', '6', '0', '0', '_', 'r', 'e', 'a', 'l', 0,
  /* 6068 */ 'C', 'U', 'B', 'E', '_', 'e', 'g', '_', 'r', 'e', 'a', 'l', 0,
  /* 6081 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '3', '2', '_', 'c', 'm', 0,
  /* 6096 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'I', 'N', 'T', '2', '4', '_', 'c', 'm', 0,
  /* 6112 */ 'M', 'U', 'L', '_', 'I', 'N', 'T', '2', '4', '_', 'c', 'm', 0,
  /* 6125 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '6', '4', '_', 'c', 'm', 0,
  /* 6140 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '1', '6', '_', 'c', 'm', 0,
  /* 6155 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '1', '2', '8', '_', 'c', 'm', 0,
  /* 6171 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '8', '_', 'c', 'm', 0,
  /* 6185 */ 'R', 'E', 'C', 'I', 'P', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'c', 'm', 0,
  /* 6202 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'c', 'm', 0,
  /* 6223 */ 'R', 'A', 'T', '_', 'S', 'T', 'O', 'R', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'c', 'm', 0,
  /* 6242 */ 'L', 'O', 'G', '_', 'I', 'E', 'E', 'E', '_', 'c', 'm', 0,
  /* 6254 */ 'R', 'E', 'C', 'I', 'P', '_', 'I', 'E', 'E', 'E', '_', 'c', 'm', 0,
  /* 6268 */ 'E', 'X', 'P', '_', 'I', 'E', 'E', 'E', '_', 'c', 'm', 0,
  /* 6280 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'I', 'E', 'E', 'E', '_', 'c', 'm', 0,
  /* 6298 */ 'S', 'I', 'N', '_', 'c', 'm', 0,
  /* 6305 */ 'C', 'O', 'S', '_', 'c', 'm', 0,
  /* 6312 */ 'M', 'U', 'L', 'H', 'I', '_', 'U', 'I', 'N', 'T', '_', 'c', 'm', 0,
  /* 6326 */ 'M', 'U', 'L', 'L', 'O', '_', 'U', 'I', 'N', 'T', '_', 'c', 'm', 0,
  /* 6340 */ 'M', 'U', 'L', 'H', 'I', '_', 'I', 'N', 'T', '_', 'c', 'm', 0,
  /* 6353 */ 'M', 'U', 'L', 'L', 'O', '_', 'I', 'N', 'T', '_', 'c', 'm', 0,
  /* 6366 */ 'C', 'U', 'B', 'E', '_', 'r', '6', '0', '0', '_', 'p', 's', 'e', 'u', 'd', 'o', 0,
  /* 6383 */ 'C', 'U', 'B', 'E', '_', 'e', 'g', '_', 'p', 's', 'e', 'u', 'd', 'o', 0,
  /* 6398 */ 'R', '6', '0', '0', '_', 'E', 'x', 'p', 'o', 'r', 't', 'S', 'w', 'z', 0,
  /* 6413 */ 'E', 'G', '_', 'E', 'x', 'p', 'o', 'r', 't', 'S', 'w', 'z', 0,
};

extern const unsigned R600InstrNameIndices[] = {
    2567U, 2849U, 3513U, 2987U, 2632U, 2613U, 2641U, 2772U, 
    2211U, 2226U, 2153U, 2253U, 3867U, 2058U, 2622U, 1763U, 
    5314U, 1859U, 5025U, 1668U, 3396U, 2760U, 4724U, 1718U, 
    4713U, 1898U, 3489U, 3476U, 3608U, 4439U, 4610U, 2692U, 
    2739U, 2712U, 2658U, 1574U, 1304U, 2784U, 5139U, 5146U, 
    2835U, 2842U, 1638U, 3747U, 3717U, 2151U, 2565U, 5287U, 
    2068U, 3947U, 3802U, 5040U, 3819U, 3685U, 1390U, 3850U, 
    4735U, 3784U, 5057U, 1364U, 1700U, 3633U, 1539U, 1467U, 
    1497U, 1524U, 1448U, 1478U, 1946U, 1930U, 3884U, 2404U, 
    2432U, 1598U, 1318U, 1652U, 1621U, 3759U, 3731U, 5271U, 
    2964U, 5254U, 2947U, 1557U, 1287U, 1755U, 1681U, 3966U, 
    1334U, 3914U, 5109U, 1382U, 4702U, 4690U, 5015U, 2456U, 
    5102U, 2240U, 5118U, 2678U, 3659U, 3652U, 3438U, 3431U, 
    3957U, 3348U, 1784U, 3332U, 1747U, 3340U, 1776U, 3324U, 
    1739U, 3388U, 3380U, 2517U, 2509U, 1550U, 1280U, 2777U, 
    1244U, 1441U, 5132U, 2828U, 5208U, 3501U, 1069U, 2449U, 
    1061U, 587U, 2204U, 5094U, 1354U, 2571U, 2580U, 3413U, 
    3422U, 3795U, 2901U, 2099U, 2881U, 2891U, 1801U, 1816U, 
    2859U, 2870U, 1580U, 2602U, 2933U, 5240U, 2940U, 5247U, 
    3508U, 4634U, 4662U, 4641U, 3700U, 5351U, 2133U, 5344U, 
    2115U, 3468U, 3405U, 1959U, 2684U, 3843U, 2980U, 5049U, 
    3676U, 4746U, 4832U, 5067U, 3526U, 1846U, 1411U, 2492U, 
    762U, 928U, 2596U, 751U, 917U, 875U, 1041U, 816U, 
    982U, 5308U, 2090U, 729U, 895U, 835U, 1001U, 778U, 
    944U, 6383U, 6366U, 4682U, 1204U, 2913U, 1954U, 1677U, 
    1346U, 2166U, 3450U, 2925U, 2499U, 160U, 82U, 1349U, 
    743U, 909U, 858U, 1024U, 800U, 966U, 4571U, 3445U, 
    1690U, 2021U, 690U, 3539U, 702U, 5301U, 1077U, 1165U, 
    1097U, 1185U, 5358U, 5376U, 3317U, 3003U, 1735U, 5197U, 
    3458U, 1553U, 4764U, 4853U, 1985U, 4861U, 5824U, 388U, 
    4986U, 5963U, 5882U, 5974U, 5998U, 6009U, 2687U, 5125U, 
    2589U, 2083U, 3573U, 3591U, 1911U, 2390U, 170U, 2306U, 
    65U, 2295U, 34U, 2818U, 2285U, 22U, 2346U, 108U, 
    2321U, 47U, 2267U, 0U, 2276U, 11U, 4869U, 5721U, 
    267U, 4878U, 5800U, 358U, 4961U, 5847U, 417U, 6305U, 
    5840U, 408U, 578U, 6068U, 6053U, 5552U, 186U, 5410U, 
    6413U, 2357U, 121U, 6268U, 5770U, 324U, 1972U, 4785U, 
    4932U, 3679U, 714U, 1210U, 6039U, 553U, 5922U, 490U, 
    5632U, 3941U, 3559U, 657U, 5329U, 5225U, 1508U, 5319U, 
    5215U, 5868U, 442U, 4588U, 1590U, 4415U, 1644U, 4427U, 
    4345U, 2006U, 5084U, 4557U, 5003U, 4541U, 4819U, 4508U, 
    4941U, 4525U, 4795U, 4491U, 3752U, 4480U, 4363U, 4396U, 
    2042U, 1310U, 4314U, 4326U, 4376U, 2032U, 2421U, 4453U, 
    3723U, 4468U, 3834U, 5649U, 208U, 6242U, 5744U, 294U, 
    2332U, 92U, 5809U, 369U, 5832U, 398U, 5243U, 648U, 
    5007U, 4823U, 2936U, 628U, 4945U, 4799U, 5153U, 5951U, 
    2780U, 5729U, 277U, 6096U, 5464U, 5639U, 196U, 6340U, 
    1132U, 5985U, 523U, 5481U, 6312U, 1116U, 5894U, 458U, 
    6353U, 6026U, 538U, 6326U, 5908U, 474U, 1792U, 6112U, 
    5856U, 428U, 5497U, 4995U, 4954U, 1546U, 2383U, 151U, 
    1996U, 4918U, 1835U, 4888U, 4599U, 4971U, 1887U, 4903U, 
    5395U, 6398U, 4022U, 3049U, 4043U, 3068U, 4209U, 3220U, 
    4105U, 3124U, 4131U, 3148U, 4289U, 3294U, 4183U, 3196U, 
    4264U, 3271U, 4157U, 3172U, 4085U, 3106U, 3979U, 3010U, 
    4001U, 3030U, 4238U, 3247U, 4064U, 3087U, 3666U, 1225U, 
    672U, 1147U, 6223U, 5702U, 5591U, 5438U, 5526U, 6202U, 
    5681U, 244U, 6280U, 5782U, 338U, 6185U, 5664U, 225U, 
    6254U, 5756U, 308U, 5937U, 507U, 1877U, 2001U, 618U, 
    4923U, 596U, 4893U, 4774U, 637U, 4976U, 4808U, 607U, 
    4908U, 1831U, 4595U, 6298U, 5817U, 379U, 569U, 1883U, 
    4754U, 4845U, 2525U, 5157U, 3356U, 1614U, 3774U, 1866U, 
    1428U, 2464U, 2790U, 1250U, 2479U, 2805U, 1266U, 2545U, 
    5177U, 2172U, 2189U, 1358U, 5867U, 441U, 6155U, 5575U, 
    6140U, 5560U, 6081U, 5423U, 6125U, 5511U, 6171U, 5618U, 
    2369U, 135U, 4953U, 
};

static inline void InitR600MCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(R600Insts, R600InstrNameIndices, R600InstrNameData, 515);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct R600GenInstrInfo : public TargetInstrInfo {
  explicit R600GenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~R600GenInstrInfo() override = default;

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
extern const MCInstrDesc R600Insts[];
extern const unsigned R600InstrNameIndices[];
extern const char R600InstrNameData[];
R600GenInstrInfo::R600GenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(R600Insts, R600InstrNameIndices, R600InstrNameData, 515);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace R600 {
namespace OpName {
enum {
  ADDR = 98,
  COUNT = 105,
  Enabled = 106,
  KCACHE_ADDR0 = 103,
  KCACHE_ADDR1 = 104,
  KCACHE_BANK0 = 99,
  KCACHE_BANK1 = 100,
  KCACHE_MODE0 = 101,
  KCACHE_MODE1 = 102,
  addr = 72,
  bank_swizzle = 93,
  chan = 73,
  clamp = 80,
  clamp_W = 58,
  clamp_X = 7,
  clamp_Y = 24,
  clamp_Z = 41,
  dst = 0,
  dst_rel = 79,
  dst_rel_W = 57,
  dst_rel_X = 6,
  dst_rel_Y = 23,
  dst_rel_Z = 40,
  last = 90,
  literal = 92,
  literal0 = 70,
  literal1 = 71,
  omod = 78,
  omod_W = 56,
  omod_X = 5,
  omod_Y = 22,
  omod_Z = 39,
  pred_sel = 91,
  pred_sel_W = 69,
  pred_sel_X = 18,
  pred_sel_Y = 35,
  pred_sel_Z = 52,
  src0 = 1,
  src0_W = 59,
  src0_X = 8,
  src0_Y = 25,
  src0_Z = 42,
  src0_abs = 83,
  src0_abs_W = 62,
  src0_abs_X = 11,
  src0_abs_Y = 28,
  src0_abs_Z = 45,
  src0_neg = 81,
  src0_neg_W = 60,
  src0_neg_X = 9,
  src0_neg_Y = 26,
  src0_neg_Z = 43,
  src0_rel = 82,
  src0_rel_W = 61,
  src0_rel_X = 10,
  src0_rel_Y = 27,
  src0_rel_Z = 44,
  src0_sel = 84,
  src0_sel_W = 63,
  src0_sel_X = 12,
  src0_sel_Y = 29,
  src0_sel_Z = 46,
  src1 = 85,
  src1_W = 64,
  src1_X = 13,
  src1_Y = 30,
  src1_Z = 47,
  src1_abs = 88,
  src1_abs_W = 67,
  src1_abs_X = 16,
  src1_abs_Y = 33,
  src1_abs_Z = 50,
  src1_neg = 86,
  src1_neg_W = 65,
  src1_neg_X = 14,
  src1_neg_Y = 31,
  src1_neg_Z = 48,
  src1_rel = 87,
  src1_rel_W = 66,
  src1_rel_X = 15,
  src1_rel_Y = 32,
  src1_rel_Z = 49,
  src1_sel = 89,
  src1_sel_W = 68,
  src1_sel_X = 17,
  src1_sel_Y = 34,
  src1_sel_Z = 51,
  src2 = 94,
  src2_neg = 95,
  src2_rel = 96,
  src2_sel = 97,
  update_exec_mask = 75,
  update_exec_mask_W = 53,
  update_exec_mask_X = 2,
  update_exec_mask_Y = 19,
  update_exec_mask_Z = 36,
  update_pred = 76,
  update_pred_W = 54,
  update_pred_X = 3,
  update_pred_Y = 20,
  update_pred_Z = 37,
  val = 74,
  write = 77,
  write_W = 55,
  write_X = 4,
  write_Y = 21,
  write_Z = 38,
OPERAND_LAST
};
} // end namespace OpName
} // end namespace R600
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace R600 {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  static const int16_t OperandMap [][107] = {
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, -1, 3, 4, -1, 5, -1, 6, 7, 8, -1, 9, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, -1, 3, 4, -1, 5, -1, 6, 10, 11, -1, 12, 7, -1, 8, 9, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, -1, 3, -1, -1, -1, -1, -1, 4, 5, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 4, 5, -1, 6, 7, 8, 9, -1, 10, 15, 16, 17, 18, 11, 12, 13, 14, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 3, 4, 6, 7, 8, 9, -1, -1, -1, -1, -1, 10, 11, 12, 13, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, -1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, -1, 2, 3, -1, 4, -1, 5, 6, 7, -1, 8, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, -1, 2, 3, -1, 4, -1, 5, 9, 10, -1, 11, 6, -1, 7, 8, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 3, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, },
};
  switch(Opcode) {
  case R600::CUBE_eg_pseudo:
  case R600::CUBE_r600_pseudo:
    return OperandMap[0][NamedIdx];
  case R600::LDS_ADD_RET:
  case R600::LDS_AND_RET:
  case R600::LDS_MAX_INT_RET:
  case R600::LDS_MAX_UINT_RET:
  case R600::LDS_MIN_INT_RET:
  case R600::LDS_MIN_UINT_RET:
  case R600::LDS_OR_RET:
  case R600::LDS_SUB_RET:
  case R600::LDS_WRXCHG_RET:
  case R600::LDS_XOR_RET:
    return OperandMap[1][NamedIdx];
  case R600::LDS_CMPST_RET:
    return OperandMap[2][NamedIdx];
  case R600::LDS_BYTE_READ_RET:
  case R600::LDS_READ_RET:
  case R600::LDS_SHORT_READ_RET:
  case R600::LDS_UBYTE_READ_RET:
  case R600::LDS_USHORT_READ_RET:
    return OperandMap[3][NamedIdx];
  case R600::BFE_INT_eg:
  case R600::BFE_UINT_eg:
  case R600::BFI_INT_eg:
  case R600::BIT_ALIGN_INT_eg:
  case R600::CNDE_INT:
  case R600::CNDE_eg:
  case R600::CNDE_r600:
  case R600::CNDGE_INT:
  case R600::CNDGE_eg:
  case R600::CNDGE_r600:
  case R600::CNDGT_INT:
  case R600::CNDGT_eg:
  case R600::CNDGT_r600:
  case R600::FMA_eg:
  case R600::MULADD_IEEE_eg:
  case R600::MULADD_IEEE_r600:
  case R600::MULADD_INT24_cm:
  case R600::MULADD_UINT24_eg:
  case R600::MULADD_eg:
  case R600::MULADD_r600:
  case R600::MUL_LIT_eg:
  case R600::MUL_LIT_r600:
    return OperandMap[4][NamedIdx];
  case R600::BCNT_INT:
  case R600::CEIL:
  case R600::COS_cm:
  case R600::COS_eg:
  case R600::COS_r600:
  case R600::COS_r700:
  case R600::EXP_IEEE_cm:
  case R600::EXP_IEEE_eg:
  case R600::EXP_IEEE_r600:
  case R600::FFBH_UINT:
  case R600::FFBL_INT:
  case R600::FLOOR:
  case R600::FLT16_TO_FLT32:
  case R600::FLT32_TO_FLT16:
  case R600::FLT_TO_INT_eg:
  case R600::FLT_TO_INT_r600:
  case R600::FLT_TO_UINT_eg:
  case R600::FLT_TO_UINT_r600:
  case R600::FRACT:
  case R600::INTERP_LOAD_P0:
  case R600::INT_TO_FLT_eg:
  case R600::INT_TO_FLT_r600:
  case R600::LOG_CLAMPED_eg:
  case R600::LOG_CLAMPED_r600:
  case R600::LOG_IEEE_cm:
  case R600::LOG_IEEE_eg:
  case R600::LOG_IEEE_r600:
  case R600::MOV:
  case R600::MOVA_INT_eg:
  case R600::NOT_INT:
  case R600::RECIPSQRT_CLAMPED_cm:
  case R600::RECIPSQRT_CLAMPED_eg:
  case R600::RECIPSQRT_CLAMPED_r600:
  case R600::RECIPSQRT_IEEE_cm:
  case R600::RECIPSQRT_IEEE_eg:
  case R600::RECIPSQRT_IEEE_r600:
  case R600::RECIP_CLAMPED_cm:
  case R600::RECIP_CLAMPED_eg:
  case R600::RECIP_CLAMPED_r600:
  case R600::RECIP_IEEE_cm:
  case R600::RECIP_IEEE_eg:
  case R600::RECIP_IEEE_r600:
  case R600::RECIP_UINT_eg:
  case R600::RECIP_UINT_r600:
  case R600::RNDNE:
  case R600::SIN_cm:
  case R600::SIN_eg:
  case R600::SIN_r600:
  case R600::SIN_r700:
  case R600::TRUNC:
  case R600::UINT_TO_FLT_eg:
  case R600::UINT_TO_FLT_r600:
    return OperandMap[5][NamedIdx];
  case R600::ADD:
  case R600::ADDC_UINT:
  case R600::ADD_INT:
  case R600::AND_INT:
  case R600::ASHR_eg:
  case R600::ASHR_r600:
  case R600::BFM_INT_eg:
  case R600::CUBE_eg_real:
  case R600::CUBE_r600_real:
  case R600::DOT4_eg:
  case R600::DOT4_r600:
  case R600::INTERP_XY:
  case R600::INTERP_ZW:
  case R600::KILLGT:
  case R600::LSHL_eg:
  case R600::LSHL_r600:
  case R600::LSHR_eg:
  case R600::LSHR_r600:
  case R600::MAX:
  case R600::MAX_DX10:
  case R600::MAX_INT:
  case R600::MAX_UINT:
  case R600::MIN:
  case R600::MIN_DX10:
  case R600::MIN_INT:
  case R600::MIN_UINT:
  case R600::MUL:
  case R600::MULHI_INT_cm:
  case R600::MULHI_INT_cm24:
  case R600::MULHI_INT_eg:
  case R600::MULHI_INT_r600:
  case R600::MULHI_UINT24_eg:
  case R600::MULHI_UINT_cm:
  case R600::MULHI_UINT_cm24:
  case R600::MULHI_UINT_eg:
  case R600::MULHI_UINT_r600:
  case R600::MULLO_INT_cm:
  case R600::MULLO_INT_eg:
  case R600::MULLO_INT_r600:
  case R600::MULLO_UINT_cm:
  case R600::MULLO_UINT_eg:
  case R600::MULLO_UINT_r600:
  case R600::MUL_IEEE:
  case R600::MUL_INT24_cm:
  case R600::MUL_UINT24_eg:
  case R600::OR_INT:
  case R600::PRED_SETE:
  case R600::PRED_SETE_INT:
  case R600::PRED_SETGE:
  case R600::PRED_SETGE_INT:
  case R600::PRED_SETGT:
  case R600::PRED_SETGT_INT:
  case R600::PRED_SETNE:
  case R600::PRED_SETNE_INT:
  case R600::SETE:
  case R600::SETE_DX10:
  case R600::SETE_INT:
  case R600::SETGE_DX10:
  case R600::SETGE_INT:
  case R600::SETGE_UINT:
  case R600::SETGT_DX10:
  case R600::SETGT_INT:
  case R600::SETGT_UINT:
  case R600::SETNE_DX10:
  case R600::SETNE_INT:
  case R600::SGE:
  case R600::SGT:
  case R600::SNE:
  case R600::SUBB_UINT:
  case R600::SUB_INT:
  case R600::XOR_INT:
    return OperandMap[6][NamedIdx];
  case R600::DOT_4:
    return OperandMap[7][NamedIdx];
  case R600::R600_RegisterLoad:
    return OperandMap[8][NamedIdx];
  case R600::LDS_ADD:
  case R600::LDS_AND:
  case R600::LDS_BYTE_WRITE:
  case R600::LDS_MAX_INT:
  case R600::LDS_MAX_UINT:
  case R600::LDS_MIN_INT:
  case R600::LDS_MIN_UINT:
  case R600::LDS_OR:
  case R600::LDS_SHORT_WRITE:
  case R600::LDS_SUB:
  case R600::LDS_WRITE:
  case R600::LDS_WRXCHG:
  case R600::LDS_XOR:
    return OperandMap[9][NamedIdx];
  case R600::LDS_CMPST:
    return OperandMap[10][NamedIdx];
  case R600::R600_RegisterStore:
    return OperandMap[11][NamedIdx];
  case R600::CF_ALU:
  case R600::CF_ALU_BREAK:
  case R600::CF_ALU_CONTINUE:
  case R600::CF_ALU_ELSE_AFTER:
  case R600::CF_ALU_POP_AFTER:
  case R600::CF_ALU_PUSH_BEFORE:
    return OperandMap[12][NamedIdx];
    default: return -1;
  }
}
} // end namespace R600
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace R600 {
namespace OpTypes {
enum OperandType {
  ABS = 0,
  BANK_SWIZZLE = 1,
  CLAMP = 2,
  CT = 3,
  FRAMEri = 4,
  InstFlag = 5,
  KCACHE = 6,
  LAST = 7,
  LITERAL = 8,
  MEMrr = 9,
  MEMxi = 10,
  NEG = 11,
  OMOD = 12,
  R600_Pred = 13,
  REL = 14,
  RSel = 15,
  SEL = 16,
  UEM = 17,
  UP = 18,
  WRITE = 19,
  brtarget = 20,
  f32imm = 21,
  f64imm = 22,
  i16imm = 23,
  i1imm = 24,
  i32imm = 25,
  i64imm = 26,
  i8imm = 27,
  ptype0 = 28,
  ptype1 = 29,
  ptype2 = 30,
  ptype3 = 31,
  ptype4 = 32,
  ptype5 = 33,
  s16imm = 34,
  type0 = 35,
  type1 = 36,
  type2 = 37,
  type3 = 38,
  type4 = 39,
  type5 = 40,
  u16imm = 41,
  u32imm = 42,
  u8imm = 43,
  untyped_imm_0 = 44,
  R600_Addr = 45,
  R600_Addr_W = 46,
  R600_Addr_Y = 47,
  R600_Addr_Z = 48,
  R600_ArrayBase = 49,
  R600_KC0 = 50,
  R600_KC0_W = 51,
  R600_KC0_X = 52,
  R600_KC0_Y = 53,
  R600_KC0_Z = 54,
  R600_KC1 = 55,
  R600_KC1_W = 56,
  R600_KC1_X = 57,
  R600_KC1_Y = 58,
  R600_KC1_Z = 59,
  R600_LDS_SRC_REG = 60,
  R600_Predicate = 61,
  R600_Predicate_Bit = 62,
  R600_Reg128 = 63,
  R600_Reg128Vertical = 64,
  R600_Reg32 = 65,
  R600_Reg64 = 66,
  R600_Reg64Vertical = 67,
  R600_TReg32 = 68,
  R600_TReg32_W = 69,
  R600_TReg32_X = 70,
  R600_TReg32_Y = 71,
  R600_TReg32_Z = 72,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace R600 {
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
    427,
    429,
    431,
    431,
    433,
    435,
    436,
    437,
    438,
    439,
    441,
    441,
    443,
    445,
    446,
    447,
    448,
    449,
    451,
    453,
    453,
    524,
    524,
    524,
    524,
    524,
    524,
    524,
    524,
    524,
    526,
    528,
    528,
    530,
    532,
    533,
    534,
    535,
    536,
    537,
    538,
    540,
    541,
    543,
    545,
    547,
    551,
    554,
    557,
    561,
    565,
    569,
    573,
    573,
    573,
    580,
    587,
    587,
    608,
    629,
    650,
    651,
    672,
    693,
    714,
    728,
    747,
    766,
    785,
    806,
    825,
    839,
    848,
    857,
    866,
    875,
    884,
    893,
    893,
    893,
    894,
    895,
    897,
    899,
    899,
    899,
    899,
    901,
    903,
    905,
    906,
    908,
    910,
    912,
    914,
    933,
    952,
    971,
    990,
    1009,
    1028,
    1047,
    1066,
    1085,
    1099,
    1113,
    1127,
    1141,
    1162,
    1183,
    1204,
    1225,
    1232,
    1241,
    1242,
    1243,
    1257,
    1271,
    1285,
    1286,
    1300,
    1314,
    1328,
    1342,
    1356,
    1370,
    1384,
    1398,
    1412,
    1431,
    1445,
    1445,
    1459,
    1464,
    1469,
    1471,
    1492,
    1513,
    1527,
    1541,
    1562,
    1571,
    1581,
    1590,
    1600,
    1607,
    1616,
    1628,
    1641,
    1650,
    1660,
    1669,
    1679,
    1688,
    1698,
    1707,
    1717,
    1726,
    1736,
    1743,
    1750,
    1759,
    1768,
    1778,
    1785,
    1792,
    1801,
    1810,
    1820,
    1829,
    1839,
    1841,
    1855,
    1869,
    1883,
    1897,
    1911,
    1912,
    1913,
    1934,
    1955,
    1976,
    1997,
    2018,
    2039,
    2060,
    2081,
    2102,
    2123,
    2144,
    2165,
    2179,
    2193,
    2214,
    2233,
    2252,
    2271,
    2290,
    2309,
    2328,
    2349,
    2370,
    2391,
    2412,
    2433,
    2454,
    2475,
    2496,
    2517,
    2538,
    2559,
    2580,
    2601,
    2622,
    2643,
    2664,
    2685,
    2704,
    2723,
    2744,
    2758,
    2779,
    2779,
    2781,
    2783,
    2804,
    2825,
    2846,
    2867,
    2888,
    2909,
    2930,
    2951,
    2958,
    2967,
    2970,
    2973,
    2976,
    2979,
    2982,
    2985,
    2988,
    2991,
    2994,
    2997,
    3000,
    3003,
    3006,
    3009,
    3012,
    3015,
    3018,
    3021,
    3024,
    3027,
    3030,
    3033,
    3036,
    3039,
    3042,
    3045,
    3048,
    3051,
    3053,
    3055,
    3057,
    3059,
    3063,
    3067,
    3070,
    3073,
    3076,
    3090,
    3104,
    3118,
    3132,
    3146,
    3160,
    3174,
    3188,
    3202,
    3216,
    3230,
    3244,
    3258,
    3272,
    3286,
    3307,
    3328,
    3349,
    3370,
    3391,
    3412,
    3433,
    3454,
    3475,
    3496,
    3517,
    3538,
    3559,
    3573,
    3587,
    3601,
    3615,
    3636,
    3657,
    3678,
    3697,
    3716,
    3735,
    3754,
    3773,
    3792,
    3811,
    3830,
    3849,
    3868,
    3887,
    3906,
    3925,
    3944,
    3963,
    3967,
    3971,
    3985,
    3999,
    4013,
    4017,
    4021,
    4025,
    4029,
    4033,
    4037,
    4041,
    4045,
    4049,
    4053,
    4054,
    4055,
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
    OpTypes::brtarget, 
    OpTypes::brtarget, OpTypes::R600_Reg32, 
    OpTypes::brtarget, OpTypes::R600_Reg32, 
    /**/
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::i32imm, 
    /**/
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, 
    /**/
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_TReg32_X, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_TReg32_X, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Predicate, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_TReg32_Y, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_TReg32_Y, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Predicate, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_TReg32_Z, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_TReg32_Z, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Predicate, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_TReg32_W, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_TReg32_W, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::LITERAL, 
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    /**/
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::brtarget, 
    OpTypes::brtarget, OpTypes::R600_Predicate_Bit, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::f32imm, 
    OpTypes::R600_Reg32, OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::i32imm, 
    OpTypes::R600_Predicate_Bit, OpTypes::R600_Reg32, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg64Vertical, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg128Vertical, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg64Vertical, OpTypes::R600_Reg64Vertical, OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg128Vertical, OpTypes::R600_Reg128Vertical, OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::i32imm, OpTypes::i32imm, 
    /**/
    /**/
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    /**/
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    /**/
    /**/
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    /**/
    /**/
    /**/
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    /**/
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_Y, OpTypes::i32imm, OpTypes::R600_TReg32_Y, OpTypes::R600_TReg32_X, 
    OpTypes::R600_TReg32_Z, OpTypes::R600_TReg32_W, OpTypes::i32imm, OpTypes::R600_TReg32_Y, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::LITERAL, OpTypes::LITERAL, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    /**/
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg64, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::InstFlag, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::InstFlag, 
    OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, OpTypes::InstFlag, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, OpTypes::InstFlag, 
    OpTypes::R600_Reg64, OpTypes::R600_TReg32_X, OpTypes::InstFlag, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_Reg64, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_Reg64, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace R600 {

enum DisableEncoding {
	DisableEncoding_
};

// getLDSNoRetOp
LLVM_READONLY
int getLDSNoRetOp(uint16_t Opcode) {
static const uint16_t getLDSNoRetOpTable[][2] = {
  { R600::LDS_ADD_RET, R600::LDS_ADD },
  { R600::LDS_AND_RET, R600::LDS_AND },
  { R600::LDS_MAX_INT_RET, R600::LDS_MAX_INT },
  { R600::LDS_MAX_UINT_RET, R600::LDS_MAX_UINT },
  { R600::LDS_MIN_INT_RET, R600::LDS_MIN_INT },
  { R600::LDS_MIN_UINT_RET, R600::LDS_MIN_UINT },
  { R600::LDS_OR_RET, R600::LDS_OR },
  { R600::LDS_SUB_RET, R600::LDS_SUB },
  { R600::LDS_WRXCHG_RET, R600::LDS_WRXCHG },
  { R600::LDS_XOR_RET, R600::LDS_XOR },
}; // End of getLDSNoRetOpTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 10;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getLDSNoRetOpTable[mid][0]) {
      break;
    }
    if (Opcode < getLDSNoRetOpTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getLDSNoRetOpTable[mid][1];
}

} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRMAP_INFO


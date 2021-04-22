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

namespace RISCV {
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
    ADJCALLSTACKDOWN	= 175,
    ADJCALLSTACKUP	= 176,
    BuildPairF64Pseudo	= 177,
    PseudoAddTPRel	= 178,
    PseudoAtomicLoadNand32	= 179,
    PseudoAtomicLoadNand64	= 180,
    PseudoBR	= 181,
    PseudoBRIND	= 182,
    PseudoCALL	= 183,
    PseudoCALLIndirect	= 184,
    PseudoCALLReg	= 185,
    PseudoCmpXchg32	= 186,
    PseudoCmpXchg64	= 187,
    PseudoFLD	= 188,
    PseudoFLW	= 189,
    PseudoFSD	= 190,
    PseudoFSW	= 191,
    PseudoLA	= 192,
    PseudoLA_TLS_GD	= 193,
    PseudoLA_TLS_IE	= 194,
    PseudoLB	= 195,
    PseudoLBU	= 196,
    PseudoLD	= 197,
    PseudoLH	= 198,
    PseudoLHU	= 199,
    PseudoLI	= 200,
    PseudoLLA	= 201,
    PseudoLW	= 202,
    PseudoLWU	= 203,
    PseudoMaskedAtomicLoadAdd32	= 204,
    PseudoMaskedAtomicLoadMax32	= 205,
    PseudoMaskedAtomicLoadMin32	= 206,
    PseudoMaskedAtomicLoadNand32	= 207,
    PseudoMaskedAtomicLoadSub32	= 208,
    PseudoMaskedAtomicLoadUMax32	= 209,
    PseudoMaskedAtomicLoadUMin32	= 210,
    PseudoMaskedAtomicSwap32	= 211,
    PseudoMaskedCmpXchg32	= 212,
    PseudoRET	= 213,
    PseudoSB	= 214,
    PseudoSD	= 215,
    PseudoSH	= 216,
    PseudoSW	= 217,
    PseudoTAIL	= 218,
    PseudoTAILIndirect	= 219,
    ReadCycleWide	= 220,
    Select_FPR32_Using_CC_GPR	= 221,
    Select_FPR64_Using_CC_GPR	= 222,
    Select_GPR_Using_CC_GPR	= 223,
    SplitF64Pseudo	= 224,
    ADD	= 225,
    ADDI	= 226,
    ADDIW	= 227,
    ADDW	= 228,
    AMOADD_D	= 229,
    AMOADD_D_AQ	= 230,
    AMOADD_D_AQ_RL	= 231,
    AMOADD_D_RL	= 232,
    AMOADD_W	= 233,
    AMOADD_W_AQ	= 234,
    AMOADD_W_AQ_RL	= 235,
    AMOADD_W_RL	= 236,
    AMOAND_D	= 237,
    AMOAND_D_AQ	= 238,
    AMOAND_D_AQ_RL	= 239,
    AMOAND_D_RL	= 240,
    AMOAND_W	= 241,
    AMOAND_W_AQ	= 242,
    AMOAND_W_AQ_RL	= 243,
    AMOAND_W_RL	= 244,
    AMOMAXU_D	= 245,
    AMOMAXU_D_AQ	= 246,
    AMOMAXU_D_AQ_RL	= 247,
    AMOMAXU_D_RL	= 248,
    AMOMAXU_W	= 249,
    AMOMAXU_W_AQ	= 250,
    AMOMAXU_W_AQ_RL	= 251,
    AMOMAXU_W_RL	= 252,
    AMOMAX_D	= 253,
    AMOMAX_D_AQ	= 254,
    AMOMAX_D_AQ_RL	= 255,
    AMOMAX_D_RL	= 256,
    AMOMAX_W	= 257,
    AMOMAX_W_AQ	= 258,
    AMOMAX_W_AQ_RL	= 259,
    AMOMAX_W_RL	= 260,
    AMOMINU_D	= 261,
    AMOMINU_D_AQ	= 262,
    AMOMINU_D_AQ_RL	= 263,
    AMOMINU_D_RL	= 264,
    AMOMINU_W	= 265,
    AMOMINU_W_AQ	= 266,
    AMOMINU_W_AQ_RL	= 267,
    AMOMINU_W_RL	= 268,
    AMOMIN_D	= 269,
    AMOMIN_D_AQ	= 270,
    AMOMIN_D_AQ_RL	= 271,
    AMOMIN_D_RL	= 272,
    AMOMIN_W	= 273,
    AMOMIN_W_AQ	= 274,
    AMOMIN_W_AQ_RL	= 275,
    AMOMIN_W_RL	= 276,
    AMOOR_D	= 277,
    AMOOR_D_AQ	= 278,
    AMOOR_D_AQ_RL	= 279,
    AMOOR_D_RL	= 280,
    AMOOR_W	= 281,
    AMOOR_W_AQ	= 282,
    AMOOR_W_AQ_RL	= 283,
    AMOOR_W_RL	= 284,
    AMOSWAP_D	= 285,
    AMOSWAP_D_AQ	= 286,
    AMOSWAP_D_AQ_RL	= 287,
    AMOSWAP_D_RL	= 288,
    AMOSWAP_W	= 289,
    AMOSWAP_W_AQ	= 290,
    AMOSWAP_W_AQ_RL	= 291,
    AMOSWAP_W_RL	= 292,
    AMOXOR_D	= 293,
    AMOXOR_D_AQ	= 294,
    AMOXOR_D_AQ_RL	= 295,
    AMOXOR_D_RL	= 296,
    AMOXOR_W	= 297,
    AMOXOR_W_AQ	= 298,
    AMOXOR_W_AQ_RL	= 299,
    AMOXOR_W_RL	= 300,
    AND	= 301,
    ANDI	= 302,
    AUIPC	= 303,
    BEQ	= 304,
    BGE	= 305,
    BGEU	= 306,
    BLT	= 307,
    BLTU	= 308,
    BNE	= 309,
    CSRRC	= 310,
    CSRRCI	= 311,
    CSRRS	= 312,
    CSRRSI	= 313,
    CSRRW	= 314,
    CSRRWI	= 315,
    C_ADD	= 316,
    C_ADDI	= 317,
    C_ADDI16SP	= 318,
    C_ADDI4SPN	= 319,
    C_ADDIW	= 320,
    C_ADDI_HINT_IMM_ZERO	= 321,
    C_ADDI_HINT_X0	= 322,
    C_ADDI_NOP	= 323,
    C_ADDW	= 324,
    C_ADD_HINT	= 325,
    C_AND	= 326,
    C_ANDI	= 327,
    C_BEQZ	= 328,
    C_BNEZ	= 329,
    C_EBREAK	= 330,
    C_FLD	= 331,
    C_FLDSP	= 332,
    C_FLW	= 333,
    C_FLWSP	= 334,
    C_FSD	= 335,
    C_FSDSP	= 336,
    C_FSW	= 337,
    C_FSWSP	= 338,
    C_J	= 339,
    C_JAL	= 340,
    C_JALR	= 341,
    C_JR	= 342,
    C_LD	= 343,
    C_LDSP	= 344,
    C_LI	= 345,
    C_LI_HINT	= 346,
    C_LUI	= 347,
    C_LUI_HINT	= 348,
    C_LW	= 349,
    C_LWSP	= 350,
    C_MV	= 351,
    C_MV_HINT	= 352,
    C_NOP	= 353,
    C_NOP_HINT	= 354,
    C_OR	= 355,
    C_SD	= 356,
    C_SDSP	= 357,
    C_SLLI	= 358,
    C_SLLI64_HINT	= 359,
    C_SLLI_HINT	= 360,
    C_SRAI	= 361,
    C_SRAI64_HINT	= 362,
    C_SRLI	= 363,
    C_SRLI64_HINT	= 364,
    C_SUB	= 365,
    C_SUBW	= 366,
    C_SW	= 367,
    C_SWSP	= 368,
    C_UNIMP	= 369,
    C_XOR	= 370,
    DIV	= 371,
    DIVU	= 372,
    DIVUW	= 373,
    DIVW	= 374,
    EBREAK	= 375,
    ECALL	= 376,
    FADD_D	= 377,
    FADD_S	= 378,
    FCLASS_D	= 379,
    FCLASS_S	= 380,
    FCVT_D_L	= 381,
    FCVT_D_LU	= 382,
    FCVT_D_S	= 383,
    FCVT_D_W	= 384,
    FCVT_D_WU	= 385,
    FCVT_LU_D	= 386,
    FCVT_LU_S	= 387,
    FCVT_L_D	= 388,
    FCVT_L_S	= 389,
    FCVT_S_D	= 390,
    FCVT_S_L	= 391,
    FCVT_S_LU	= 392,
    FCVT_S_W	= 393,
    FCVT_S_WU	= 394,
    FCVT_WU_D	= 395,
    FCVT_WU_S	= 396,
    FCVT_W_D	= 397,
    FCVT_W_S	= 398,
    FDIV_D	= 399,
    FDIV_S	= 400,
    FENCE	= 401,
    FENCE_I	= 402,
    FENCE_TSO	= 403,
    FEQ_D	= 404,
    FEQ_S	= 405,
    FLD	= 406,
    FLE_D	= 407,
    FLE_S	= 408,
    FLT_D	= 409,
    FLT_S	= 410,
    FLW	= 411,
    FMADD_D	= 412,
    FMADD_S	= 413,
    FMAX_D	= 414,
    FMAX_S	= 415,
    FMIN_D	= 416,
    FMIN_S	= 417,
    FMSUB_D	= 418,
    FMSUB_S	= 419,
    FMUL_D	= 420,
    FMUL_S	= 421,
    FMV_D_X	= 422,
    FMV_W_X	= 423,
    FMV_X_D	= 424,
    FMV_X_W	= 425,
    FNMADD_D	= 426,
    FNMADD_S	= 427,
    FNMSUB_D	= 428,
    FNMSUB_S	= 429,
    FSD	= 430,
    FSGNJN_D	= 431,
    FSGNJN_S	= 432,
    FSGNJX_D	= 433,
    FSGNJX_S	= 434,
    FSGNJ_D	= 435,
    FSGNJ_S	= 436,
    FSQRT_D	= 437,
    FSQRT_S	= 438,
    FSUB_D	= 439,
    FSUB_S	= 440,
    FSW	= 441,
    JAL	= 442,
    JALR	= 443,
    LB	= 444,
    LBU	= 445,
    LD	= 446,
    LH	= 447,
    LHU	= 448,
    LR_D	= 449,
    LR_D_AQ	= 450,
    LR_D_AQ_RL	= 451,
    LR_D_RL	= 452,
    LR_W	= 453,
    LR_W_AQ	= 454,
    LR_W_AQ_RL	= 455,
    LR_W_RL	= 456,
    LUI	= 457,
    LW	= 458,
    LWU	= 459,
    MRET	= 460,
    MUL	= 461,
    MULH	= 462,
    MULHSU	= 463,
    MULHU	= 464,
    MULW	= 465,
    OR	= 466,
    ORI	= 467,
    REM	= 468,
    REMU	= 469,
    REMUW	= 470,
    REMW	= 471,
    SB	= 472,
    SC_D	= 473,
    SC_D_AQ	= 474,
    SC_D_AQ_RL	= 475,
    SC_D_RL	= 476,
    SC_W	= 477,
    SC_W_AQ	= 478,
    SC_W_AQ_RL	= 479,
    SC_W_RL	= 480,
    SD	= 481,
    SFENCE_VMA	= 482,
    SH	= 483,
    SLL	= 484,
    SLLI	= 485,
    SLLIW	= 486,
    SLLW	= 487,
    SLT	= 488,
    SLTI	= 489,
    SLTIU	= 490,
    SLTU	= 491,
    SRA	= 492,
    SRAI	= 493,
    SRAIW	= 494,
    SRAW	= 495,
    SRET	= 496,
    SRL	= 497,
    SRLI	= 498,
    SRLIW	= 499,
    SRLW	= 500,
    SUB	= 501,
    SUBW	= 502,
    SW	= 503,
    UNIMP	= 504,
    URET	= 505,
    WFI	= 506,
    XOR	= 507,
    XORI	= 508,
    INSTRUCTION_LIST_END = 509
  };

} // end namespace RISCV
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace RISCV {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // end namespace Sched
} // end namespace RISCV
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { RISCV::X2, 0 };
static const MCPhysReg ImplicitList2[] = { RISCV::X1, 0 };

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
static const MCOperandInfo OperandInfo37[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { -1, 0, RISCVOp::OPERAND_SIMM21_LSB0, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_SIMM12, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { RISCV::GPRTCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_SIMM12, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_UIMM20, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_SIMM13_LSB0, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_UIMM12, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_UIMM12, 0 }, { -1, 0, RISCVOp::OPERAND_UIMM5, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { RISCV::SPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::SPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::SPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { RISCV::GPRX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRX0RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { RISCV::GPRX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRX0RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { RISCV::FPR64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::SPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { RISCV::FPR32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::SPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::SPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { RISCV::GPRX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { RISCV::GPRNoX0X2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { RISCV::GPRX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::SPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo86[] = { { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo87[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { -1, 0, RISCVOp::OPERAND_UIMM4, 0 }, { -1, 0, RISCVOp::OPERAND_UIMM4, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_SIMM12, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_SIMM12, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_SIMM21_LSB0, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_UIMMLOG2XLEN, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_UIMM5, 0 }, };

extern const MCInstrDesc RISCVInsts[] = {
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
  { 175,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8, -1 ,nullptr },  // Inst #175 = ADJCALLSTACKDOWN
  { 176,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8, -1 ,nullptr },  // Inst #176 = ADJCALLSTACKUP
  { 177,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #177 = BuildPairF64Pseudo
  { 178,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #178 = PseudoAddTPRel
  { 179,	5,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #179 = PseudoAtomicLoadNand32
  { 180,	5,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #180 = PseudoAtomicLoadNand64
  { 181,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #181 = PseudoBR
  { 182,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, ImplicitList2, OperandInfo41, -1 ,nullptr },  // Inst #182 = PseudoBRIND
  { 183,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList2, OperandInfo2, -1 ,nullptr },  // Inst #183 = PseudoCALL
  { 184,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList2, OperandInfo42, -1 ,nullptr },  // Inst #184 = PseudoCALLIndirect
  { 185,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #185 = PseudoCALLReg
  { 186,	6,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #186 = PseudoCmpXchg32
  { 187,	6,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #187 = PseudoCmpXchg64
  { 188,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #188 = PseudoFLD
  { 189,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #189 = PseudoFLW
  { 190,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #190 = PseudoFSD
  { 191,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #191 = PseudoFSW
  { 192,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #192 = PseudoLA
  { 193,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #193 = PseudoLA_TLS_GD
  { 194,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #194 = PseudoLA_TLS_IE
  { 195,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #195 = PseudoLB
  { 196,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #196 = PseudoLBU
  { 197,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #197 = PseudoLD
  { 198,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #198 = PseudoLH
  { 199,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #199 = PseudoLHU
  { 200,	2,	1,	32,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #200 = PseudoLI
  { 201,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #201 = PseudoLLA
  { 202,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #202 = PseudoLW
  { 203,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #203 = PseudoLWU
  { 204,	6,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #204 = PseudoMaskedAtomicLoadAdd32
  { 205,	8,	3,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #205 = PseudoMaskedAtomicLoadMax32
  { 206,	8,	3,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #206 = PseudoMaskedAtomicLoadMin32
  { 207,	6,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #207 = PseudoMaskedAtomicLoadNand32
  { 208,	6,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #208 = PseudoMaskedAtomicLoadSub32
  { 209,	7,	3,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #209 = PseudoMaskedAtomicLoadUMax32
  { 210,	7,	3,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #210 = PseudoMaskedAtomicLoadUMin32
  { 211,	6,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #211 = PseudoMaskedAtomicSwap32
  { 212,	7,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #212 = PseudoMaskedCmpXchg32
  { 213,	0,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #213 = PseudoRET
  { 214,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #214 = PseudoSB
  { 215,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #215 = PseudoSD
  { 216,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #216 = PseudoSH
  { 217,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #217 = PseudoSW
  { 218,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList1, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #218 = PseudoTAIL
  { 219,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList1, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #219 = PseudoTAILIndirect
  { 220,	2,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #220 = ReadCycleWide
  { 221,	6,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #221 = Select_FPR32_Using_CC_GPR
  { 222,	6,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #222 = Select_FPR64_Using_CC_GPR
  { 223,	6,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #223 = Select_GPR_Using_CC_GPR
  { 224,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #224 = SplitF64Pseudo
  { 225,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #225 = ADD
  { 226,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x3ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #226 = ADDI
  { 227,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #227 = ADDIW
  { 228,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #228 = ADDW
  { 229,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #229 = AMOADD_D
  { 230,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #230 = AMOADD_D_AQ
  { 231,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #231 = AMOADD_D_AQ_RL
  { 232,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #232 = AMOADD_D_RL
  { 233,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #233 = AMOADD_W
  { 234,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #234 = AMOADD_W_AQ
  { 235,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #235 = AMOADD_W_AQ_RL
  { 236,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #236 = AMOADD_W_RL
  { 237,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #237 = AMOAND_D
  { 238,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #238 = AMOAND_D_AQ
  { 239,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #239 = AMOAND_D_AQ_RL
  { 240,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #240 = AMOAND_D_RL
  { 241,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #241 = AMOAND_W
  { 242,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #242 = AMOAND_W_AQ
  { 243,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #243 = AMOAND_W_AQ_RL
  { 244,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #244 = AMOAND_W_RL
  { 245,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #245 = AMOMAXU_D
  { 246,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #246 = AMOMAXU_D_AQ
  { 247,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #247 = AMOMAXU_D_AQ_RL
  { 248,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #248 = AMOMAXU_D_RL
  { 249,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #249 = AMOMAXU_W
  { 250,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #250 = AMOMAXU_W_AQ
  { 251,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #251 = AMOMAXU_W_AQ_RL
  { 252,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #252 = AMOMAXU_W_RL
  { 253,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #253 = AMOMAX_D
  { 254,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #254 = AMOMAX_D_AQ
  { 255,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #255 = AMOMAX_D_AQ_RL
  { 256,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #256 = AMOMAX_D_RL
  { 257,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #257 = AMOMAX_W
  { 258,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #258 = AMOMAX_W_AQ
  { 259,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #259 = AMOMAX_W_AQ_RL
  { 260,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #260 = AMOMAX_W_RL
  { 261,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #261 = AMOMINU_D
  { 262,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #262 = AMOMINU_D_AQ
  { 263,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #263 = AMOMINU_D_AQ_RL
  { 264,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #264 = AMOMINU_D_RL
  { 265,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #265 = AMOMINU_W
  { 266,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #266 = AMOMINU_W_AQ
  { 267,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #267 = AMOMINU_W_AQ_RL
  { 268,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #268 = AMOMINU_W_RL
  { 269,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #269 = AMOMIN_D
  { 270,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #270 = AMOMIN_D_AQ
  { 271,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #271 = AMOMIN_D_AQ_RL
  { 272,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #272 = AMOMIN_D_RL
  { 273,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #273 = AMOMIN_W
  { 274,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #274 = AMOMIN_W_AQ
  { 275,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #275 = AMOMIN_W_AQ_RL
  { 276,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #276 = AMOMIN_W_RL
  { 277,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #277 = AMOOR_D
  { 278,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #278 = AMOOR_D_AQ
  { 279,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #279 = AMOOR_D_AQ_RL
  { 280,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #280 = AMOOR_D_RL
  { 281,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #281 = AMOOR_W
  { 282,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #282 = AMOOR_W_AQ
  { 283,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #283 = AMOOR_W_AQ_RL
  { 284,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #284 = AMOOR_W_RL
  { 285,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #285 = AMOSWAP_D
  { 286,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #286 = AMOSWAP_D_AQ
  { 287,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #287 = AMOSWAP_D_AQ_RL
  { 288,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #288 = AMOSWAP_D_RL
  { 289,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #289 = AMOSWAP_W
  { 290,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #290 = AMOSWAP_W_AQ
  { 291,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #291 = AMOSWAP_W_AQ_RL
  { 292,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #292 = AMOSWAP_W_RL
  { 293,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #293 = AMOXOR_D
  { 294,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #294 = AMOXOR_D_AQ
  { 295,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #295 = AMOXOR_D_AQ_RL
  { 296,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #296 = AMOXOR_D_RL
  { 297,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #297 = AMOXOR_W
  { 298,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #298 = AMOXOR_W_AQ
  { 299,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #299 = AMOXOR_W_AQ_RL
  { 300,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #300 = AMOXOR_W_RL
  { 301,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #301 = AND
  { 302,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #302 = ANDI
  { 303,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #303 = AUIPC
  { 304,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #304 = BEQ
  { 305,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #305 = BGE
  { 306,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #306 = BGEU
  { 307,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #307 = BLT
  { 308,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #308 = BLTU
  { 309,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #309 = BNE
  { 310,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #310 = CSRRC
  { 311,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #311 = CSRRCI
  { 312,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #312 = CSRRS
  { 313,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #313 = CSRRSI
  { 314,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #314 = CSRRW
  { 315,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #315 = CSRRWI
  { 316,	3,	1,	2,	0,	0, 0x8ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #316 = C_ADD
  { 317,	3,	1,	2,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #317 = C_ADDI
  { 318,	3,	1,	2,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #318 = C_ADDI16SP
  { 319,	3,	1,	2,	0,	0, 0xbULL, ImplicitList1, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #319 = C_ADDI4SPN
  { 320,	3,	1,	2,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #320 = C_ADDIW
  { 321,	3,	1,	2,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #321 = C_ADDI_HINT_IMM_ZERO
  { 322,	3,	1,	2,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #322 = C_ADDI_HINT_X0
  { 323,	3,	1,	2,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #323 = C_ADDI_NOP
  { 324,	3,	1,	2,	0,	0, 0xeULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #324 = C_ADDW
  { 325,	3,	1,	2,	0,	0, 0x8ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #325 = C_ADD_HINT
  { 326,	3,	1,	2,	0,	0, 0xeULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #326 = C_AND
  { 327,	3,	1,	2,	0,	0, 0xfULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #327 = C_ANDI
  { 328,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0xfULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #328 = C_BEQZ
  { 329,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0xfULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #329 = C_BNEZ
  { 330,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x8ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #330 = C_EBREAK
  { 331,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad), 0xcULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #331 = C_FLD
  { 332,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad), 0x9ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #332 = C_FLDSP
  { 333,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad), 0xcULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #333 = C_FLW
  { 334,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad), 0x9ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #334 = C_FLWSP
  { 335,	3,	0,	2,	0,	0|(1ULL<<MCID::MayStore), 0xdULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #335 = C_FSD
  { 336,	3,	0,	2,	0,	0|(1ULL<<MCID::MayStore), 0xaULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #336 = C_FSDSP
  { 337,	3,	0,	2,	0,	0|(1ULL<<MCID::MayStore), 0xdULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #337 = C_FSW
  { 338,	3,	0,	2,	0,	0|(1ULL<<MCID::MayStore), 0xaULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #338 = C_FSWSP
  { 339,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x10ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #339 = C_J
  { 340,	1,	0,	2,	0,	0|(1ULL<<MCID::Call), 0x10ULL, nullptr, ImplicitList2, OperandInfo2, -1 ,nullptr },  // Inst #340 = C_JAL
  { 341,	1,	0,	2,	0,	0|(1ULL<<MCID::Call), 0x8ULL, nullptr, ImplicitList2, OperandInfo76, -1 ,nullptr },  // Inst #341 = C_JALR
  { 342,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x8ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #342 = C_JR
  { 343,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad), 0xcULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #343 = C_LD
  { 344,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad), 0x9ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #344 = C_LDSP
  { 345,	2,	1,	2,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #345 = C_LI
  { 346,	2,	1,	2,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #346 = C_LI_HINT
  { 347,	2,	1,	2,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo81, -1 ,nullptr },  // Inst #347 = C_LUI
  { 348,	2,	1,	2,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #348 = C_LUI_HINT
  { 349,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad), 0xcULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #349 = C_LW
  { 350,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad), 0x9ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #350 = C_LWSP
  { 351,	2,	1,	2,	0,	0, 0x8ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #351 = C_MV
  { 352,	2,	1,	2,	0,	0, 0x8ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #352 = C_MV_HINT
  { 353,	0,	0,	2,	0,	0, 0x9ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #353 = C_NOP
  { 354,	1,	0,	2,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #354 = C_NOP_HINT
  { 355,	3,	1,	2,	0,	0, 0xeULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #355 = C_OR
  { 356,	3,	0,	2,	0,	0|(1ULL<<MCID::MayStore), 0xdULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #356 = C_SD
  { 357,	3,	0,	2,	0,	0|(1ULL<<MCID::MayStore), 0xaULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #357 = C_SDSP
  { 358,	3,	1,	2,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #358 = C_SLLI
  { 359,	2,	1,	2,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #359 = C_SLLI64_HINT
  { 360,	3,	1,	2,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #360 = C_SLLI_HINT
  { 361,	3,	1,	2,	0,	0, 0xfULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #361 = C_SRAI
  { 362,	2,	1,	2,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #362 = C_SRAI64_HINT
  { 363,	3,	1,	2,	0,	0, 0xfULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #363 = C_SRLI
  { 364,	2,	1,	2,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #364 = C_SRLI64_HINT
  { 365,	3,	1,	2,	0,	0, 0xeULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #365 = C_SUB
  { 366,	3,	1,	2,	0,	0, 0xeULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #366 = C_SUBW
  { 367,	3,	0,	2,	0,	0|(1ULL<<MCID::MayStore), 0xdULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #367 = C_SW
  { 368,	3,	0,	2,	0,	0|(1ULL<<MCID::MayStore), 0xaULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #368 = C_SWSP
  { 369,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x11ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #369 = C_UNIMP
  { 370,	3,	1,	2,	0,	0, 0xeULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #370 = C_XOR
  { 371,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #371 = DIV
  { 372,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #372 = DIVU
  { 373,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #373 = DIVUW
  { 374,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #374 = DIVW
  { 375,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #375 = EBREAK
  { 376,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #376 = ECALL
  { 377,	4,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #377 = FADD_D
  { 378,	4,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #378 = FADD_S
  { 379,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #379 = FCLASS_D
  { 380,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #380 = FCLASS_S
  { 381,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #381 = FCVT_D_L
  { 382,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #382 = FCVT_D_LU
  { 383,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #383 = FCVT_D_S
  { 384,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #384 = FCVT_D_W
  { 385,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #385 = FCVT_D_WU
  { 386,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #386 = FCVT_LU_D
  { 387,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #387 = FCVT_LU_S
  { 388,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #388 = FCVT_L_D
  { 389,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #389 = FCVT_L_S
  { 390,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #390 = FCVT_S_D
  { 391,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #391 = FCVT_S_L
  { 392,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #392 = FCVT_S_LU
  { 393,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #393 = FCVT_S_W
  { 394,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #394 = FCVT_S_WU
  { 395,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #395 = FCVT_WU_D
  { 396,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #396 = FCVT_WU_S
  { 397,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #397 = FCVT_W_D
  { 398,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #398 = FCVT_W_S
  { 399,	4,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #399 = FDIV_D
  { 400,	4,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #400 = FDIV_S
  { 401,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #401 = FENCE
  { 402,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #402 = FENCE_I
  { 403,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #403 = FENCE_TSO
  { 404,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #404 = FEQ_D
  { 405,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #405 = FEQ_S
  { 406,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #406 = FLD
  { 407,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #407 = FLE_D
  { 408,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #408 = FLE_S
  { 409,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #409 = FLT_D
  { 410,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #410 = FLT_S
  { 411,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #411 = FLW
  { 412,	5,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #412 = FMADD_D
  { 413,	5,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #413 = FMADD_S
  { 414,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #414 = FMAX_D
  { 415,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #415 = FMAX_S
  { 416,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #416 = FMIN_D
  { 417,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #417 = FMIN_S
  { 418,	5,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #418 = FMSUB_D
  { 419,	5,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #419 = FMSUB_S
  { 420,	4,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #420 = FMUL_D
  { 421,	4,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #421 = FMUL_S
  { 422,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #422 = FMV_D_X
  { 423,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #423 = FMV_W_X
  { 424,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #424 = FMV_X_D
  { 425,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #425 = FMV_X_W
  { 426,	5,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #426 = FNMADD_D
  { 427,	5,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #427 = FNMADD_S
  { 428,	5,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #428 = FNMSUB_D
  { 429,	5,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #429 = FNMSUB_S
  { 430,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x4ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #430 = FSD
  { 431,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #431 = FSGNJN_D
  { 432,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #432 = FSGNJN_S
  { 433,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #433 = FSGNJX_D
  { 434,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #434 = FSGNJX_S
  { 435,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #435 = FSGNJ_D
  { 436,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #436 = FSGNJ_S
  { 437,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #437 = FSQRT_D
  { 438,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #438 = FSQRT_S
  { 439,	4,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #439 = FSUB_D
  { 440,	4,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #440 = FSUB_S
  { 441,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x4ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #441 = FSW
  { 442,	2,	1,	4,	0,	0|(1ULL<<MCID::Call), 0x7ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #442 = JAL
  { 443,	3,	1,	4,	0,	0|(1ULL<<MCID::Call), 0x3ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #443 = JALR
  { 444,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #444 = LB
  { 445,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #445 = LBU
  { 446,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #446 = LD
  { 447,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #447 = LH
  { 448,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #448 = LHU
  { 449,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #449 = LR_D
  { 450,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #450 = LR_D_AQ
  { 451,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #451 = LR_D_AQ_RL
  { 452,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #452 = LR_D_RL
  { 453,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #453 = LR_W
  { 454,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #454 = LR_W_AQ
  { 455,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #455 = LR_W_AQ_RL
  { 456,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #456 = LR_W_RL
  { 457,	2,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #457 = LUI
  { 458,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #458 = LW
  { 459,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #459 = LWU
  { 460,	2,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #460 = MRET
  { 461,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #461 = MUL
  { 462,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #462 = MULH
  { 463,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #463 = MULHSU
  { 464,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #464 = MULHU
  { 465,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #465 = MULW
  { 466,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #466 = OR
  { 467,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x3ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #467 = ORI
  { 468,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #468 = REM
  { 469,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #469 = REMU
  { 470,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #470 = REMUW
  { 471,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #471 = REMW
  { 472,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x4ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #472 = SB
  { 473,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #473 = SC_D
  { 474,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #474 = SC_D_AQ
  { 475,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #475 = SC_D_AQ_RL
  { 476,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #476 = SC_D_RL
  { 477,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #477 = SC_W
  { 478,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #478 = SC_W_AQ
  { 479,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #479 = SC_W_AQ_RL
  { 480,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #480 = SC_W_RL
  { 481,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x4ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #481 = SD
  { 482,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #482 = SFENCE_VMA
  { 483,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x4ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #483 = SH
  { 484,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #484 = SLL
  { 485,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #485 = SLLI
  { 486,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #486 = SLLIW
  { 487,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #487 = SLLW
  { 488,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #488 = SLT
  { 489,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #489 = SLTI
  { 490,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #490 = SLTIU
  { 491,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #491 = SLTU
  { 492,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #492 = SRA
  { 493,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #493 = SRAI
  { 494,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #494 = SRAIW
  { 495,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #495 = SRAW
  { 496,	2,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #496 = SRET
  { 497,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #497 = SRL
  { 498,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #498 = SRLI
  { 499,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #499 = SRLIW
  { 500,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #500 = SRLW
  { 501,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #501 = SUB
  { 502,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #502 = SUBW
  { 503,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x4ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #503 = SW
  { 504,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #504 = UNIMP
  { 505,	2,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #505 = URET
  { 506,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #506 = WFI
  { 507,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #507 = XOR
  { 508,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x3ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #508 = XORI
};

extern const char RISCVInstrNameData[] = {
  /* 0 */ 'G', '_', 'F', 'L', 'O', 'G', '1', '0', 0,
  /* 9 */ 'C', '_', 'A', 'D', 'D', 'I', '_', 'H', 'I', 'N', 'T', '_', 'X', '0', 0,
  /* 24 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'a', 's', 'k', 'e', 'd', 'A', 't', 'o', 'm', 'i', 'c', 'L', 'o', 'a', 'd', 'S', 'u', 'b', '3', '2', 0,
  /* 52 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'a', 's', 'k', 'e', 'd', 'A', 't', 'o', 'm', 'i', 'c', 'L', 'o', 'a', 'd', 'A', 'd', 'd', '3', '2', 0,
  /* 80 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'a', 's', 'k', 'e', 'd', 'A', 't', 'o', 'm', 'i', 'c', 'L', 'o', 'a', 'd', 'N', 'a', 'n', 'd', '3', '2', 0,
  /* 109 */ 'P', 's', 'e', 'u', 'd', 'o', 'A', 't', 'o', 'm', 'i', 'c', 'L', 'o', 'a', 'd', 'N', 'a', 'n', 'd', '3', '2', 0,
  /* 132 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'a', 's', 'k', 'e', 'd', 'C', 'm', 'p', 'X', 'c', 'h', 'g', '3', '2', 0,
  /* 154 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'm', 'p', 'X', 'c', 'h', 'g', '3', '2', 0,
  /* 170 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'a', 's', 'k', 'e', 'd', 'A', 't', 'o', 'm', 'i', 'c', 'L', 'o', 'a', 'd', 'U', 'M', 'i', 'n', '3', '2', 0,
  /* 199 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'a', 's', 'k', 'e', 'd', 'A', 't', 'o', 'm', 'i', 'c', 'L', 'o', 'a', 'd', 'M', 'i', 'n', '3', '2', 0,
  /* 227 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'a', 's', 'k', 'e', 'd', 'A', 't', 'o', 'm', 'i', 'c', 'S', 'w', 'a', 'p', '3', '2', 0,
  /* 252 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'a', 's', 'k', 'e', 'd', 'A', 't', 'o', 'm', 'i', 'c', 'L', 'o', 'a', 'd', 'U', 'M', 'a', 'x', '3', '2', 0,
  /* 281 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'a', 's', 'k', 'e', 'd', 'A', 't', 'o', 'm', 'i', 'c', 'L', 'o', 'a', 'd', 'M', 'a', 'x', '3', '2', 0,
  /* 309 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 317 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 325 */ 'P', 's', 'e', 'u', 'd', 'o', 'A', 't', 'o', 'm', 'i', 'c', 'L', 'o', 'a', 'd', 'N', 'a', 'n', 'd', '6', '4', 0,
  /* 348 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'm', 'p', 'X', 'c', 'h', 'g', '6', '4', 0,
  /* 364 */ 'P', 's', 'e', 'u', 'd', 'o', 'L', 'L', 'A', 0,
  /* 374 */ 'P', 's', 'e', 'u', 'd', 'o', 'L', 'A', 0,
  /* 383 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 389 */ 'S', 'F', 'E', 'N', 'C', 'E', '_', 'V', 'M', 'A', 0,
  /* 400 */ 'S', 'R', 'A', 0,
  /* 404 */ 'P', 's', 'e', 'u', 'd', 'o', 'L', 'B', 0,
  /* 413 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'B', 0,
  /* 422 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 429 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'S', 'U', 'B', 0,
  /* 446 */ 'C', '_', 'S', 'U', 'B', 0,
  /* 452 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 458 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'S', 'U', 'B', 0,
  /* 474 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 486 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 496 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 514 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 522 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 543 */ 'G', '_', 'D', 'Y', 'N', '_', 'S', 'T', 'A', 'C', 'K', 'A', 'L', 'L', 'O', 'C', 0,
  /* 560 */ 'A', 'U', 'I', 'P', 'C', 0,
  /* 566 */ 'C', 'S', 'R', 'R', 'C', 0,
  /* 572 */ 'G', '_', 'F', 'M', 'A', 'D', 0,
  /* 579 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 598 */ 'G', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 609 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 628 */ 'G', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 639 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'L', 'O', 'A', 'D', 0,
  /* 654 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 661 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 668 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'A', 'D', 'D', 0,
  /* 685 */ 'C', '_', 'A', 'D', 'D', 0,
  /* 691 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 697 */ 'G', '_', 'P', 'T', 'R', '_', 'A', 'D', 'D', 0,
  /* 707 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'D', 'D', 0,
  /* 723 */ 'P', 's', 'e', 'u', 'd', 'o', 'L', 'A', '_', 'T', 'L', 'S', '_', 'G', 'D', 0,
  /* 739 */ 'C', '_', 'F', 'L', 'D', 0,
  /* 745 */ 'P', 's', 'e', 'u', 'd', 'o', 'F', 'L', 'D', 0,
  /* 755 */ 'C', '_', 'L', 'D', 0,
  /* 760 */ 'P', 's', 'e', 'u', 'd', 'o', 'L', 'D', 0,
  /* 769 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'N', 'A', 'N', 'D', 0,
  /* 786 */ 'C', '_', 'A', 'N', 'D', 0,
  /* 792 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 798 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'N', 'D', 0,
  /* 814 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 827 */ 'P', 's', 'e', 'u', 'd', 'o', 'B', 'R', 'I', 'N', 'D', 0,
  /* 839 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 848 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'R', 'O', 'U', 'N', 'D', 0,
  /* 866 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 883 */ 'C', '_', 'F', 'S', 'D', 0,
  /* 889 */ 'P', 's', 'e', 'u', 'd', 'o', 'F', 'S', 'D', 0,
  /* 899 */ 'C', '_', 'S', 'D', 0,
  /* 904 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'D', 0,
  /* 913 */ 'F', 'S', 'U', 'B', '_', 'D', 0,
  /* 920 */ 'F', 'M', 'S', 'U', 'B', '_', 'D', 0,
  /* 928 */ 'F', 'N', 'M', 'S', 'U', 'B', '_', 'D', 0,
  /* 937 */ 'S', 'C', '_', 'D', 0,
  /* 942 */ 'F', 'A', 'D', 'D', '_', 'D', 0,
  /* 949 */ 'F', 'M', 'A', 'D', 'D', '_', 'D', 0,
  /* 957 */ 'F', 'N', 'M', 'A', 'D', 'D', '_', 'D', 0,
  /* 966 */ 'A', 'M', 'O', 'A', 'D', 'D', '_', 'D', 0,
  /* 975 */ 'A', 'M', 'O', 'A', 'N', 'D', '_', 'D', 0,
  /* 984 */ 'F', 'L', 'E', '_', 'D', 0,
  /* 990 */ 'F', 'S', 'G', 'N', 'J', '_', 'D', 0,
  /* 998 */ 'F', 'M', 'U', 'L', '_', 'D', 0,
  /* 1005 */ 'F', 'C', 'V', 'T', '_', 'L', '_', 'D', 0,
  /* 1014 */ 'F', 'M', 'I', 'N', '_', 'D', 0,
  /* 1021 */ 'A', 'M', 'O', 'M', 'I', 'N', '_', 'D', 0,
  /* 1030 */ 'F', 'S', 'G', 'N', 'J', 'N', '_', 'D', 0,
  /* 1039 */ 'A', 'M', 'O', 'S', 'W', 'A', 'P', '_', 'D', 0,
  /* 1049 */ 'F', 'E', 'Q', '_', 'D', 0,
  /* 1055 */ 'L', 'R', '_', 'D', 0,
  /* 1060 */ 'A', 'M', 'O', 'O', 'R', '_', 'D', 0,
  /* 1068 */ 'A', 'M', 'O', 'X', 'O', 'R', '_', 'D', 0,
  /* 1077 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'D', 0,
  /* 1086 */ 'F', 'C', 'V', 'T', '_', 'S', '_', 'D', 0,
  /* 1095 */ 'F', 'L', 'T', '_', 'D', 0,
  /* 1101 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', 0,
  /* 1109 */ 'F', 'C', 'V', 'T', '_', 'L', 'U', '_', 'D', 0,
  /* 1119 */ 'A', 'M', 'O', 'M', 'I', 'N', 'U', '_', 'D', 0,
  /* 1129 */ 'F', 'C', 'V', 'T', '_', 'W', 'U', '_', 'D', 0,
  /* 1139 */ 'A', 'M', 'O', 'M', 'A', 'X', 'U', '_', 'D', 0,
  /* 1149 */ 'F', 'D', 'I', 'V', '_', 'D', 0,
  /* 1156 */ 'F', 'C', 'V', 'T', '_', 'W', '_', 'D', 0,
  /* 1165 */ 'F', 'M', 'A', 'X', '_', 'D', 0,
  /* 1172 */ 'A', 'M', 'O', 'M', 'A', 'X', '_', 'D', 0,
  /* 1181 */ 'F', 'S', 'G', 'N', 'J', 'X', '_', 'D', 0,
  /* 1190 */ 'F', 'M', 'V', '_', 'X', '_', 'D', 0,
  /* 1198 */ 'G', '_', 'S', 'S', 'U', 'B', 'E', 0,
  /* 1206 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 1214 */ 'G', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 1222 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 1235 */ 'G', '_', 'S', 'A', 'D', 'D', 'E', 0,
  /* 1243 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 1251 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 1266 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 1281 */ 'B', 'G', 'E', 0,
  /* 1285 */ 'P', 's', 'e', 'u', 'd', 'o', 'L', 'A', '_', 'T', 'L', 'S', '_', 'I', 'E', 0,
  /* 1301 */ 'G', '_', 'J', 'U', 'M', 'P', '_', 'T', 'A', 'B', 'L', 'E', 0,
  /* 1314 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1321 */ 'B', 'N', 'E', 0,
  /* 1325 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 1338 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 1354 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 1362 */ 'G', '_', 'B', 'I', 'T', 'R', 'E', 'V', 'E', 'R', 'S', 'E', 0,
  /* 1375 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1385 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1400 */ 'G', '_', 'F', 'C', 'A', 'N', 'O', 'N', 'I', 'C', 'A', 'L', 'I', 'Z', 'E', 0,
  /* 1416 */ 'G', '_', 'C', 'T', 'L', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 1434 */ 'G', '_', 'C', 'T', 'T', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 1452 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 1467 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 1474 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1489 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1503 */ 'G', '_', 'S', 'E', 'X', 'T', '_', 'I', 'N', 'R', 'E', 'G', 0,
  /* 1516 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 1530 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', 0,
  /* 1547 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', 0,
  /* 1564 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 1571 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 1579 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 1587 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 1595 */ 'P', 's', 'e', 'u', 'd', 'o', 'L', 'H', 0,
  /* 1604 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'H', 0,
  /* 1613 */ 'C', '_', 'S', 'R', 'A', 'I', 0,
  /* 1620 */ 'C', 'S', 'R', 'R', 'C', 'I', 0,
  /* 1627 */ 'C', '_', 'A', 'D', 'D', 'I', 0,
  /* 1634 */ 'C', '_', 'A', 'N', 'D', 'I', 0,
  /* 1641 */ 'W', 'F', 'I', 0,
  /* 1645 */ 'G', '_', 'P', 'H', 'I', 0,
  /* 1651 */ 'C', '_', 'S', 'L', 'L', 'I', 0,
  /* 1658 */ 'C', '_', 'S', 'R', 'L', 'I', 0,
  /* 1665 */ 'C', '_', 'L', 'I', 0,
  /* 1670 */ 'P', 's', 'e', 'u', 'd', 'o', 'L', 'I', 0,
  /* 1679 */ 'X', 'O', 'R', 'I', 0,
  /* 1684 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 1693 */ 'C', 'S', 'R', 'R', 'S', 'I', 0,
  /* 1700 */ 'S', 'L', 'T', 'I', 0,
  /* 1705 */ 'C', '_', 'L', 'U', 'I', 0,
  /* 1711 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 1720 */ 'C', 'S', 'R', 'R', 'W', 'I', 0,
  /* 1727 */ 'F', 'E', 'N', 'C', 'E', '_', 'I', 0,
  /* 1735 */ 'C', '_', 'J', 0,
  /* 1739 */ 'C', '_', 'E', 'B', 'R', 'E', 'A', 'K', 0,
  /* 1748 */ 'G', '_', 'P', 'T', 'R', '_', 'M', 'A', 'S', 'K', 0,
  /* 1759 */ 'C', '_', 'J', 'A', 'L', 0,
  /* 1765 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1774 */ 'D', 'B', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1784 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1793 */ 'A', 'N', 'N', 'O', 'T', 'A', 'T', 'I', 'O', 'N', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1810 */ 'I', 'C', 'A', 'L', 'L', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'F', 'U', 'N', 'N', 'E', 'L', 0,
  /* 1830 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 1836 */ 'P', 's', 'e', 'u', 'd', 'o', 'T', 'A', 'I', 'L', 0,
  /* 1847 */ 'G', '_', 'F', 'C', 'E', 'I', 'L', 0,
  /* 1855 */ 'E', 'C', 'A', 'L', 'L', 0,
  /* 1861 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 1881 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 1908 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 1929 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 1941 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'A', 'L', 'L', 0,
  /* 1952 */ 'K', 'I', 'L', 'L', 0,
  /* 1957 */ 'S', 'L', 'L', 0,
  /* 1961 */ 'S', 'R', 'L', 0,
  /* 1965 */ 'S', 'C', '_', 'D', '_', 'R', 'L', 0,
  /* 1973 */ 'A', 'M', 'O', 'A', 'D', 'D', '_', 'D', '_', 'R', 'L', 0,
  /* 1985 */ 'A', 'M', 'O', 'A', 'N', 'D', '_', 'D', '_', 'R', 'L', 0,
  /* 1997 */ 'A', 'M', 'O', 'M', 'I', 'N', '_', 'D', '_', 'R', 'L', 0,
  /* 2009 */ 'A', 'M', 'O', 'S', 'W', 'A', 'P', '_', 'D', '_', 'R', 'L', 0,
  /* 2022 */ 'L', 'R', '_', 'D', '_', 'R', 'L', 0,
  /* 2030 */ 'A', 'M', 'O', 'O', 'R', '_', 'D', '_', 'R', 'L', 0,
  /* 2041 */ 'A', 'M', 'O', 'X', 'O', 'R', '_', 'D', '_', 'R', 'L', 0,
  /* 2053 */ 'A', 'M', 'O', 'M', 'I', 'N', 'U', '_', 'D', '_', 'R', 'L', 0,
  /* 2066 */ 'A', 'M', 'O', 'M', 'A', 'X', 'U', '_', 'D', '_', 'R', 'L', 0,
  /* 2079 */ 'A', 'M', 'O', 'M', 'A', 'X', '_', 'D', '_', 'R', 'L', 0,
  /* 2091 */ 'S', 'C', '_', 'D', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2102 */ 'A', 'M', 'O', 'A', 'D', 'D', '_', 'D', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2117 */ 'A', 'M', 'O', 'A', 'N', 'D', '_', 'D', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2132 */ 'A', 'M', 'O', 'M', 'I', 'N', '_', 'D', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2147 */ 'A', 'M', 'O', 'S', 'W', 'A', 'P', '_', 'D', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2163 */ 'L', 'R', '_', 'D', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2174 */ 'A', 'M', 'O', 'O', 'R', '_', 'D', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2188 */ 'A', 'M', 'O', 'X', 'O', 'R', '_', 'D', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2203 */ 'A', 'M', 'O', 'M', 'I', 'N', 'U', '_', 'D', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2219 */ 'A', 'M', 'O', 'M', 'A', 'X', 'U', '_', 'D', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2235 */ 'A', 'M', 'O', 'M', 'A', 'X', '_', 'D', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2250 */ 'S', 'C', '_', 'W', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2261 */ 'A', 'M', 'O', 'A', 'D', 'D', '_', 'W', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2276 */ 'A', 'M', 'O', 'A', 'N', 'D', '_', 'W', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2291 */ 'A', 'M', 'O', 'M', 'I', 'N', '_', 'W', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2306 */ 'A', 'M', 'O', 'S', 'W', 'A', 'P', '_', 'W', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2322 */ 'L', 'R', '_', 'W', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2333 */ 'A', 'M', 'O', 'O', 'R', '_', 'W', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2347 */ 'A', 'M', 'O', 'X', 'O', 'R', '_', 'W', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2362 */ 'A', 'M', 'O', 'M', 'I', 'N', 'U', '_', 'W', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2378 */ 'A', 'M', 'O', 'M', 'A', 'X', 'U', '_', 'W', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2394 */ 'A', 'M', 'O', 'M', 'A', 'X', '_', 'W', '_', 'A', 'Q', '_', 'R', 'L', 0,
  /* 2409 */ 'S', 'C', '_', 'W', '_', 'R', 'L', 0,
  /* 2417 */ 'A', 'M', 'O', 'A', 'D', 'D', '_', 'W', '_', 'R', 'L', 0,
  /* 2429 */ 'A', 'M', 'O', 'A', 'N', 'D', '_', 'W', '_', 'R', 'L', 0,
  /* 2441 */ 'A', 'M', 'O', 'M', 'I', 'N', '_', 'W', '_', 'R', 'L', 0,
  /* 2453 */ 'A', 'M', 'O', 'S', 'W', 'A', 'P', '_', 'W', '_', 'R', 'L', 0,
  /* 2466 */ 'L', 'R', '_', 'W', '_', 'R', 'L', 0,
  /* 2474 */ 'A', 'M', 'O', 'O', 'R', '_', 'W', '_', 'R', 'L', 0,
  /* 2485 */ 'A', 'M', 'O', 'X', 'O', 'R', '_', 'W', '_', 'R', 'L', 0,
  /* 2497 */ 'A', 'M', 'O', 'M', 'I', 'N', 'U', '_', 'W', '_', 'R', 'L', 0,
  /* 2510 */ 'A', 'M', 'O', 'M', 'A', 'X', 'U', '_', 'W', '_', 'R', 'L', 0,
  /* 2523 */ 'A', 'M', 'O', 'M', 'A', 'X', '_', 'W', '_', 'R', 'L', 0,
  /* 2535 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 2542 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 2548 */ 'F', 'C', 'V', 'T', '_', 'D', '_', 'L', 0,
  /* 2557 */ 'F', 'C', 'V', 'T', '_', 'S', '_', 'L', 0,
  /* 2566 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 2573 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 2580 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 2587 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 2597 */ 'G', '_', 'F', 'M', 'I', 'N', 'I', 'M', 'U', 'M', 0,
  /* 2608 */ 'G', '_', 'F', 'M', 'A', 'X', 'I', 'M', 'U', 'M', 0,
  /* 2619 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', 0,
  /* 2629 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', 0,
  /* 2639 */ 'G', '_', 'F', 'C', 'O', 'P', 'Y', 'S', 'I', 'G', 'N', 0,
  /* 2651 */ 'G', '_', 'S', 'M', 'I', 'N', 0,
  /* 2658 */ 'G', '_', 'U', 'M', 'I', 'N', 0,
  /* 2665 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 2682 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'I', 'N', 0,
  /* 2698 */ 'G', '_', 'F', 'S', 'I', 'N', 0,
  /* 2705 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 2721 */ 'C', '_', 'A', 'D', 'D', 'I', '4', 'S', 'P', 'N', 0,
  /* 2732 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 2749 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 2757 */ 'G', '_', 'U', 'S', 'U', 'B', 'O', 0,
  /* 2765 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 2773 */ 'G', '_', 'U', 'A', 'D', 'D', 'O', 0,
  /* 2781 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 2789 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 2797 */ 'C', '_', 'A', 'D', 'D', 'I', '_', 'H', 'I', 'N', 'T', '_', 'I', 'M', 'M', '_', 'Z', 'E', 'R', 'O', 0,
  /* 2818 */ 'F', 'E', 'N', 'C', 'E', '_', 'T', 'S', 'O', 0,
  /* 2828 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 2837 */ 'G', '_', 'B', 'S', 'W', 'A', 'P', 0,
  /* 2845 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 2854 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 2863 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 2870 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 2877 */ 'C', '_', 'U', 'N', 'I', 'M', 'P', 0,
  /* 2885 */ 'C', '_', 'N', 'O', 'P', 0,
  /* 2891 */ 'C', '_', 'A', 'D', 'D', 'I', '_', 'N', 'O', 'P', 0,
  /* 2902 */ 'G', '_', 'C', 'T', 'P', 'O', 'P', 0,
  /* 2910 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 2923 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 2935 */ 'C', '_', 'A', 'D', 'D', 'I', '1', '6', 'S', 'P', 0,
  /* 2946 */ 'C', '_', 'F', 'L', 'D', 'S', 'P', 0,
  /* 2954 */ 'C', '_', 'L', 'D', 'S', 'P', 0,
  /* 2961 */ 'C', '_', 'F', 'S', 'D', 'S', 'P', 0,
  /* 2969 */ 'C', '_', 'S', 'D', 'S', 'P', 0,
  /* 2976 */ 'C', '_', 'F', 'L', 'W', 'S', 'P', 0,
  /* 2984 */ 'C', '_', 'L', 'W', 'S', 'P', 0,
  /* 2991 */ 'C', '_', 'F', 'S', 'W', 'S', 'P', 0,
  /* 2999 */ 'C', '_', 'S', 'W', 'S', 'P', 0,
  /* 3006 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 3021 */ 'G', '_', 'F', 'E', 'X', 'P', 0,
  /* 3028 */ 'S', 'C', '_', 'D', '_', 'A', 'Q', 0,
  /* 3036 */ 'A', 'M', 'O', 'A', 'D', 'D', '_', 'D', '_', 'A', 'Q', 0,
  /* 3048 */ 'A', 'M', 'O', 'A', 'N', 'D', '_', 'D', '_', 'A', 'Q', 0,
  /* 3060 */ 'A', 'M', 'O', 'M', 'I', 'N', '_', 'D', '_', 'A', 'Q', 0,
  /* 3072 */ 'A', 'M', 'O', 'S', 'W', 'A', 'P', '_', 'D', '_', 'A', 'Q', 0,
  /* 3085 */ 'L', 'R', '_', 'D', '_', 'A', 'Q', 0,
  /* 3093 */ 'A', 'M', 'O', 'O', 'R', '_', 'D', '_', 'A', 'Q', 0,
  /* 3104 */ 'A', 'M', 'O', 'X', 'O', 'R', '_', 'D', '_', 'A', 'Q', 0,
  /* 3116 */ 'A', 'M', 'O', 'M', 'I', 'N', 'U', '_', 'D', '_', 'A', 'Q', 0,
  /* 3129 */ 'A', 'M', 'O', 'M', 'A', 'X', 'U', '_', 'D', '_', 'A', 'Q', 0,
  /* 3142 */ 'A', 'M', 'O', 'M', 'A', 'X', '_', 'D', '_', 'A', 'Q', 0,
  /* 3154 */ 'S', 'C', '_', 'W', '_', 'A', 'Q', 0,
  /* 3162 */ 'A', 'M', 'O', 'A', 'D', 'D', '_', 'W', '_', 'A', 'Q', 0,
  /* 3174 */ 'A', 'M', 'O', 'A', 'N', 'D', '_', 'W', '_', 'A', 'Q', 0,
  /* 3186 */ 'A', 'M', 'O', 'M', 'I', 'N', '_', 'W', '_', 'A', 'Q', 0,
  /* 3198 */ 'A', 'M', 'O', 'S', 'W', 'A', 'P', '_', 'W', '_', 'A', 'Q', 0,
  /* 3211 */ 'L', 'R', '_', 'W', '_', 'A', 'Q', 0,
  /* 3219 */ 'A', 'M', 'O', 'O', 'R', '_', 'W', '_', 'A', 'Q', 0,
  /* 3230 */ 'A', 'M', 'O', 'X', 'O', 'R', '_', 'W', '_', 'A', 'Q', 0,
  /* 3242 */ 'A', 'M', 'O', 'M', 'I', 'N', 'U', '_', 'W', '_', 'A', 'Q', 0,
  /* 3255 */ 'A', 'M', 'O', 'M', 'A', 'X', 'U', '_', 'W', '_', 'A', 'Q', 0,
  /* 3268 */ 'A', 'M', 'O', 'M', 'A', 'X', '_', 'W', '_', 'A', 'Q', 0,
  /* 3280 */ 'B', 'E', 'Q', 0,
  /* 3284 */ 'G', '_', 'B', 'R', 0,
  /* 3289 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', '_', 'B', 'R', 0,
  /* 3302 */ 'P', 's', 'e', 'u', 'd', 'o', 'B', 'R', 0,
  /* 3311 */ 'G', '_', 'B', 'L', 'O', 'C', 'K', '_', 'A', 'D', 'D', 'R', 0,
  /* 3324 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 3349 */ 'G', '_', 'R', 'E', 'A', 'D', 'C', 'Y', 'C', 'L', 'E', 'C', 'O', 'U', 'N', 'T', 'E', 'R', 0,
  /* 3368 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 3375 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 3382 */ 'C', '_', 'J', 'R', 0,
  /* 3387 */ 'C', '_', 'J', 'A', 'L', 'R', 0,
  /* 3394 */ 'G', '_', 'F', 'F', 'L', 'O', 'O', 'R', 0,
  /* 3403 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 3418 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 3435 */ 'C', '_', 'X', 'O', 'R', 0,
  /* 3441 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 3447 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'O', 'R', 0,
  /* 3463 */ 'C', '_', 'O', 'R', 0,
  /* 3468 */ 'G', '_', 'O', 'R', 0,
  /* 3473 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'O', 'R', 0,
  /* 3488 */ 'S', 'e', 'l', 'e', 'c', 't', '_', 'F', 'P', 'R', '3', '2', '_', 'U', 's', 'i', 'n', 'g', '_', 'C', 'C', '_', 'G', 'P', 'R', 0,
  /* 3514 */ 'S', 'e', 'l', 'e', 'c', 't', '_', 'F', 'P', 'R', '6', '4', '_', 'U', 's', 'i', 'n', 'g', '_', 'C', 'C', '_', 'G', 'P', 'R', 0,
  /* 3540 */ 'S', 'e', 'l', 'e', 'c', 't', '_', 'G', 'P', 'R', '_', 'U', 's', 'i', 'n', 'g', '_', 'C', 'C', '_', 'G', 'P', 'R', 0,
  /* 3564 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 3575 */ 'G', '_', 'F', 'A', 'B', 'S', 0,
  /* 3582 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 3599 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 3614 */ 'G', '_', 'F', 'C', 'O', 'S', 0,
  /* 3621 */ 'G', '_', 'C', 'O', 'N', 'C', 'A', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', 'S', 0,
  /* 3638 */ 'C', 'S', 'R', 'R', 'S', 0,
  /* 3644 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 3661 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'W', 'I', 'T', 'H', '_', 'S', 'U', 'C', 'C', 'E', 'S', 'S', 0,
  /* 3691 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 3718 */ 'F', 'S', 'U', 'B', '_', 'S', 0,
  /* 3725 */ 'F', 'M', 'S', 'U', 'B', '_', 'S', 0,
  /* 3733 */ 'F', 'N', 'M', 'S', 'U', 'B', '_', 'S', 0,
  /* 3742 */ 'F', 'A', 'D', 'D', '_', 'S', 0,
  /* 3749 */ 'F', 'M', 'A', 'D', 'D', '_', 'S', 0,
  /* 3757 */ 'F', 'N', 'M', 'A', 'D', 'D', '_', 'S', 0,
  /* 3766 */ 'F', 'C', 'V', 'T', '_', 'D', '_', 'S', 0,
  /* 3775 */ 'F', 'L', 'E', '_', 'S', 0,
  /* 3781 */ 'F', 'S', 'G', 'N', 'J', '_', 'S', 0,
  /* 3789 */ 'F', 'M', 'U', 'L', '_', 'S', 0,
  /* 3796 */ 'F', 'C', 'V', 'T', '_', 'L', '_', 'S', 0,
  /* 3805 */ 'F', 'M', 'I', 'N', '_', 'S', 0,
  /* 3812 */ 'F', 'S', 'G', 'N', 'J', 'N', '_', 'S', 0,
  /* 3821 */ 'F', 'E', 'Q', '_', 'S', 0,
  /* 3827 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'S', 0,
  /* 3836 */ 'F', 'L', 'T', '_', 'S', 0,
  /* 3842 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', 0,
  /* 3850 */ 'F', 'C', 'V', 'T', '_', 'L', 'U', '_', 'S', 0,
  /* 3860 */ 'F', 'C', 'V', 'T', '_', 'W', 'U', '_', 'S', 0,
  /* 3870 */ 'F', 'D', 'I', 'V', '_', 'S', 0,
  /* 3877 */ 'F', 'C', 'V', 'T', '_', 'W', '_', 'S', 0,
  /* 3886 */ 'F', 'M', 'A', 'X', '_', 'S', 0,
  /* 3893 */ 'F', 'S', 'G', 'N', 'J', 'X', '_', 'S', 0,
  /* 3902 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 3912 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 3921 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 3934 */ 'M', 'R', 'E', 'T', 0,
  /* 3939 */ 'S', 'R', 'E', 'T', 0,
  /* 3944 */ 'U', 'R', 'E', 'T', 0,
  /* 3949 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 3963 */ 'P', 's', 'e', 'u', 'd', 'o', 'R', 'E', 'T', 0,
  /* 3973 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 3997 */ 'G', '_', 'B', 'R', 'J', 'T', 0,
  /* 4004 */ 'B', 'L', 'T', 0,
  /* 4008 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 4029 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 4049 */ 'S', 'L', 'T', 0,
  /* 4053 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 4065 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 4076 */ 'C', '_', 'S', 'R', 'A', 'I', '6', '4', '_', 'H', 'I', 'N', 'T', 0,
  /* 4090 */ 'C', '_', 'S', 'L', 'L', 'I', '6', '4', '_', 'H', 'I', 'N', 'T', 0,
  /* 4104 */ 'C', '_', 'S', 'R', 'L', 'I', '6', '4', '_', 'H', 'I', 'N', 'T', 0,
  /* 4118 */ 'C', '_', 'A', 'D', 'D', '_', 'H', 'I', 'N', 'T', 0,
  /* 4129 */ 'C', '_', 'S', 'L', 'L', 'I', '_', 'H', 'I', 'N', 'T', 0,
  /* 4141 */ 'C', '_', 'L', 'I', '_', 'H', 'I', 'N', 'T', 0,
  /* 4151 */ 'C', '_', 'L', 'U', 'I', '_', 'H', 'I', 'N', 'T', 0,
  /* 4162 */ 'C', '_', 'N', 'O', 'P', '_', 'H', 'I', 'N', 'T', 0,
  /* 4173 */ 'C', '_', 'M', 'V', '_', 'H', 'I', 'N', 'T', 0,
  /* 4183 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 4194 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 4205 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 4216 */ 'G', '_', 'F', 'R', 'I', 'N', 'T', 0,
  /* 4224 */ 'G', '_', 'F', 'N', 'E', 'A', 'R', 'B', 'Y', 'I', 'N', 'T', 0,
  /* 4237 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 4247 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 4262 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 4271 */ 'G', '_', 'F', 'S', 'Q', 'R', 'T', 0,
  /* 4279 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 4289 */ 'G', '_', 'A', 'D', 'D', 'R', 'S', 'P', 'A', 'C', 'E', '_', 'C', 'A', 'S', 'T', 0,
  /* 4306 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 4314 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 4321 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 4330 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 4337 */ 'P', 's', 'e', 'u', 'd', 'o', 'L', 'B', 'U', 0,
  /* 4347 */ 'B', 'G', 'E', 'U', 0,
  /* 4352 */ 'M', 'U', 'L', 'H', 'U', 0,
  /* 4358 */ 'P', 's', 'e', 'u', 'd', 'o', 'L', 'H', 'U', 0,
  /* 4368 */ 'S', 'L', 'T', 'I', 'U', 0,
  /* 4374 */ 'F', 'C', 'V', 'T', '_', 'D', '_', 'L', 'U', 0,
  /* 4384 */ 'F', 'C', 'V', 'T', '_', 'S', '_', 'L', 'U', 0,
  /* 4394 */ 'R', 'E', 'M', 'U', 0,
  /* 4399 */ 'M', 'U', 'L', 'H', 'S', 'U', 0,
  /* 4406 */ 'B', 'L', 'T', 'U', 0,
  /* 4411 */ 'S', 'L', 'T', 'U', 0,
  /* 4416 */ 'D', 'I', 'V', 'U', 0,
  /* 4421 */ 'P', 's', 'e', 'u', 'd', 'o', 'L', 'W', 'U', 0,
  /* 4431 */ 'F', 'C', 'V', 'T', '_', 'D', '_', 'W', 'U', 0,
  /* 4441 */ 'F', 'C', 'V', 'T', '_', 'S', '_', 'W', 'U', 0,
  /* 4451 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 4458 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 4465 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 4472 */ 'C', '_', 'M', 'V', 0,
  /* 4477 */ 'S', 'R', 'A', 'W', 0,
  /* 4482 */ 'C', '_', 'S', 'U', 'B', 'W', 0,
  /* 4489 */ 'C', '_', 'A', 'D', 'D', 'W', 0,
  /* 4496 */ 'S', 'R', 'A', 'I', 'W', 0,
  /* 4502 */ 'C', '_', 'A', 'D', 'D', 'I', 'W', 0,
  /* 4510 */ 'S', 'L', 'L', 'I', 'W', 0,
  /* 4516 */ 'S', 'R', 'L', 'I', 'W', 0,
  /* 4522 */ 'C', '_', 'F', 'L', 'W', 0,
  /* 4528 */ 'P', 's', 'e', 'u', 'd', 'o', 'F', 'L', 'W', 0,
  /* 4538 */ 'S', 'L', 'L', 'W', 0,
  /* 4543 */ 'S', 'R', 'L', 'W', 0,
  /* 4548 */ 'M', 'U', 'L', 'W', 0,
  /* 4553 */ 'C', '_', 'L', 'W', 0,
  /* 4558 */ 'P', 's', 'e', 'u', 'd', 'o', 'L', 'W', 0,
  /* 4567 */ 'R', 'E', 'M', 'W', 0,
  /* 4572 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 4579 */ 'C', 'S', 'R', 'R', 'W', 0,
  /* 4585 */ 'C', '_', 'F', 'S', 'W', 0,
  /* 4591 */ 'P', 's', 'e', 'u', 'd', 'o', 'F', 'S', 'W', 0,
  /* 4601 */ 'C', '_', 'S', 'W', 0,
  /* 4606 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'W', 0,
  /* 4615 */ 'R', 'E', 'M', 'U', 'W', 0,
  /* 4621 */ 'D', 'I', 'V', 'U', 'W', 0,
  /* 4627 */ 'D', 'I', 'V', 'W', 0,
  /* 4632 */ 'S', 'C', '_', 'W', 0,
  /* 4637 */ 'A', 'M', 'O', 'A', 'D', 'D', '_', 'W', 0,
  /* 4646 */ 'A', 'M', 'O', 'A', 'N', 'D', '_', 'W', 0,
  /* 4655 */ 'F', 'C', 'V', 'T', '_', 'D', '_', 'W', 0,
  /* 4664 */ 'A', 'M', 'O', 'M', 'I', 'N', '_', 'W', 0,
  /* 4673 */ 'A', 'M', 'O', 'S', 'W', 'A', 'P', '_', 'W', 0,
  /* 4683 */ 'L', 'R', '_', 'W', 0,
  /* 4688 */ 'A', 'M', 'O', 'O', 'R', '_', 'W', 0,
  /* 4696 */ 'A', 'M', 'O', 'X', 'O', 'R', '_', 'W', 0,
  /* 4705 */ 'F', 'C', 'V', 'T', '_', 'S', '_', 'W', 0,
  /* 4714 */ 'A', 'M', 'O', 'M', 'I', 'N', 'U', '_', 'W', 0,
  /* 4724 */ 'A', 'M', 'O', 'M', 'A', 'X', 'U', '_', 'W', 0,
  /* 4734 */ 'A', 'M', 'O', 'M', 'A', 'X', '_', 'W', 0,
  /* 4743 */ 'F', 'M', 'V', '_', 'X', '_', 'W', 0,
  /* 4751 */ 'G', '_', 'S', 'M', 'A', 'X', 0,
  /* 4758 */ 'G', '_', 'U', 'M', 'A', 'X', 0,
  /* 4765 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 4782 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'A', 'X', 0,
  /* 4798 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 4812 */ 'F', 'M', 'V', '_', 'D', '_', 'X', 0,
  /* 4820 */ 'F', 'M', 'V', '_', 'W', '_', 'X', 0,
  /* 4828 */ 'C', 'O', 'P', 'Y', 0,
  /* 4833 */ 'C', '_', 'B', 'N', 'E', 'Z', 0,
  /* 4840 */ 'G', '_', 'C', 'T', 'L', 'Z', 0,
  /* 4847 */ 'C', '_', 'B', 'E', 'Q', 'Z', 0,
  /* 4854 */ 'G', '_', 'C', 'T', 'T', 'Z', 0,
  /* 4861 */ 'R', 'e', 'a', 'd', 'C', 'y', 'c', 'l', 'e', 'W', 'i', 'd', 'e', 0,
  /* 4875 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'A', 'L', 'L', 'R', 'e', 'g', 0,
  /* 4889 */ 'P', 's', 'e', 'u', 'd', 'o', 'A', 'd', 'd', 'T', 'P', 'R', 'e', 'l', 0,
  /* 4904 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 4923 */ 'S', 'p', 'l', 'i', 't', 'F', '6', '4', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 4938 */ 'P', 's', 'e', 'u', 'd', 'o', 'T', 'A', 'I', 'L', 'I', 'n', 'd', 'i', 'r', 'e', 'c', 't', 0,
  /* 4957 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'A', 'L', 'L', 'I', 'n', 'd', 'i', 'r', 'e', 'c', 't', 0,
};

extern const unsigned RISCVInstrNameIndices[] = {
    1647U, 2587U, 3289U, 2705U, 1784U, 1765U, 1793U, 1952U, 
    1474U, 1489U, 1454U, 1516U, 3644U, 1375U, 1774U, 1222U, 
    4828U, 1314U, 4247U, 814U, 2828U, 1929U, 4194U, 866U, 
    4183U, 1325U, 2923U, 2910U, 3324U, 3949U, 3973U, 1861U, 
    1908U, 1881U, 1810U, 691U, 452U, 2542U, 4458U, 4465U, 
    2573U, 2580U, 792U, 3468U, 3441U, 1452U, 1645U, 4798U, 
    1385U, 3902U, 3582U, 4262U, 3599U, 3403U, 522U, 3621U, 
    4205U, 3564U, 4279U, 496U, 848U, 3349U, 654U, 598U, 
    628U, 639U, 579U, 609U, 1354U, 1338U, 3661U, 1530U, 
    1547U, 707U, 458U, 798U, 769U, 3473U, 3447U, 4782U, 
    2682U, 4765U, 2665U, 668U, 429U, 1214U, 839U, 3921U, 
    474U, 3691U, 4321U, 514U, 4065U, 4053U, 4237U, 1571U, 
    4314U, 1503U, 4330U, 1830U, 3375U, 3368U, 2870U, 2863U, 
    3912U, 2773U, 1243U, 2757U, 1206U, 2765U, 1235U, 2749U, 
    1198U, 2789U, 2781U, 1587U, 1579U, 661U, 422U, 2535U, 
    383U, 572U, 4451U, 2566U, 4572U, 3021U, 317U, 1564U, 
    309U, 0U, 1467U, 4306U, 486U, 1684U, 1711U, 2845U, 
    2854U, 3575U, 2639U, 1400U, 2619U, 2629U, 1251U, 1266U, 
    2597U, 2608U, 697U, 1748U, 2651U, 4751U, 2658U, 4758U, 
    3284U, 3997U, 4029U, 4008U, 3418U, 4854U, 1434U, 4840U, 
    1416U, 2902U, 2837U, 1362U, 1847U, 3614U, 2698U, 4271U, 
    3394U, 4216U, 4224U, 4289U, 3311U, 1301U, 543U, 2732U, 
    3006U, 4904U, 4889U, 109U, 325U, 3302U, 827U, 1941U, 
    4957U, 4875U, 154U, 348U, 745U, 4528U, 889U, 4591U, 
    374U, 723U, 1285U, 404U, 4337U, 760U, 1595U, 4358U, 
    1670U, 364U, 4558U, 4421U, 52U, 281U, 199U, 80U, 
    24U, 252U, 170U, 227U, 132U, 3963U, 413U, 904U, 
    1604U, 4606U, 1836U, 4938U, 4861U, 3488U, 3514U, 3540U, 
    4923U, 664U, 1629U, 4504U, 4491U, 966U, 3036U, 2102U, 
    1973U, 4637U, 3162U, 2261U, 2417U, 975U, 3048U, 2117U, 
    1985U, 4646U, 3174U, 2276U, 2429U, 1139U, 3129U, 2219U, 
    2066U, 4724U, 3255U, 2378U, 2510U, 1172U, 3142U, 2235U, 
    2079U, 4734U, 3268U, 2394U, 2523U, 1119U, 3116U, 2203U, 
    2053U, 4714U, 3242U, 2362U, 2497U, 1021U, 3060U, 2132U, 
    1997U, 4664U, 3186U, 2291U, 2441U, 1060U, 3093U, 2174U, 
    2030U, 4688U, 3219U, 2333U, 2474U, 1039U, 3072U, 2147U, 
    2009U, 4673U, 3198U, 2306U, 2453U, 1068U, 3104U, 2188U, 
    2041U, 4696U, 3230U, 2347U, 2485U, 782U, 1636U, 560U, 
    3280U, 1281U, 4347U, 4004U, 4406U, 1321U, 566U, 1620U, 
    3638U, 1693U, 4579U, 1720U, 685U, 1627U, 2935U, 2721U, 
    4502U, 2797U, 9U, 2891U, 4489U, 4118U, 786U, 1634U, 
    4847U, 4833U, 1739U, 739U, 2946U, 4522U, 2976U, 883U, 
    2961U, 4585U, 2991U, 1735U, 1759U, 3387U, 3382U, 755U, 
    2954U, 1665U, 4141U, 1705U, 4151U, 4553U, 2984U, 4472U, 
    4173U, 2885U, 4162U, 3463U, 899U, 2969U, 1651U, 4090U, 
    4129U, 1613U, 4076U, 1658U, 4104U, 446U, 4482U, 4601U, 
    2999U, 2877U, 3435U, 4454U, 4416U, 4621U, 4627U, 1741U, 
    1855U, 942U, 3742U, 1077U, 3827U, 2548U, 4374U, 3766U, 
    4655U, 4431U, 1109U, 3850U, 1005U, 3796U, 1086U, 2557U, 
    4384U, 4705U, 4441U, 1129U, 3860U, 1156U, 3877U, 1149U, 
    3870U, 1216U, 1727U, 2818U, 1049U, 3821U, 741U, 984U, 
    3775U, 1095U, 3836U, 4524U, 949U, 3749U, 1165U, 3886U, 
    1014U, 3805U, 920U, 3725U, 998U, 3789U, 4812U, 4820U, 
    1190U, 4743U, 957U, 3757U, 928U, 3733U, 885U, 1030U, 
    3812U, 1181U, 3893U, 990U, 3781U, 1101U, 3842U, 913U, 
    3718U, 4587U, 1761U, 3389U, 410U, 4343U, 742U, 1584U, 
    4354U, 1055U, 3085U, 2163U, 2022U, 4683U, 3211U, 2322U, 
    2466U, 1707U, 4525U, 4427U, 3934U, 2538U, 1582U, 4399U, 
    4352U, 4548U, 3400U, 1680U, 2569U, 4394U, 4615U, 4567U, 
    419U, 937U, 3028U, 2091U, 1965U, 4632U, 3154U, 2250U, 
    2409U, 886U, 389U, 1610U, 1957U, 1653U, 4510U, 4538U, 
    4049U, 1700U, 4368U, 4411U, 400U, 1615U, 4496U, 4477U, 
    3939U, 1961U, 1660U, 4516U, 4543U, 425U, 4484U, 4588U, 
    2879U, 3944U, 1641U, 3437U, 1679U, 
};

static inline void InitRISCVMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(RISCVInsts, RISCVInstrNameIndices, RISCVInstrNameData, 509);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct RISCVGenInstrInfo : public TargetInstrInfo {
  explicit RISCVGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~RISCVGenInstrInfo() override = default;

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
extern const MCInstrDesc RISCVInsts[];
extern const unsigned RISCVInstrNameIndices[];
extern const char RISCVInstrNameData[];
RISCVGenInstrInfo::RISCVGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(RISCVInsts, RISCVInstrNameIndices, RISCVInstrNameData, 509);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace RISCV {
namespace OpName {
enum {
OPERAND_LAST
};
} // end namespace OpName
} // end namespace RISCV
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace RISCV {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace RISCV
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace RISCV {
namespace OpTypes {
enum OperandType {
  bare_symbol = 0,
  c_lui_imm = 1,
  call_symbol = 2,
  csr_sysreg = 3,
  f32imm = 4,
  f64imm = 5,
  fencearg = 6,
  frmarg = 7,
  i16imm = 8,
  i1imm = 9,
  i32imm = 10,
  i64imm = 11,
  i8imm = 12,
  immzero = 13,
  ixlenimm = 14,
  ixlenimm_li = 15,
  ptype0 = 16,
  ptype1 = 17,
  ptype2 = 18,
  ptype3 = 19,
  ptype4 = 20,
  ptype5 = 21,
  simm10_lsb0000nonzero = 22,
  simm12 = 23,
  simm12_lsb0 = 24,
  simm13_lsb0 = 25,
  simm21_lsb0_jal = 26,
  simm6 = 27,
  simm6nonzero = 28,
  simm9_lsb0 = 29,
  tprel_add_symbol = 30,
  type0 = 31,
  type1 = 32,
  type2 = 33,
  type3 = 34,
  type4 = 35,
  type5 = 36,
  uimm10_lsb00nonzero = 37,
  uimm20_auipc = 38,
  uimm20_lui = 39,
  uimm5 = 40,
  uimm7_lsb00 = 41,
  uimm8_lsb00 = 42,
  uimm8_lsb000 = 43,
  uimm9_lsb000 = 44,
  uimmlog2xlen = 45,
  uimmlog2xlennonzero = 46,
  untyped_imm_0 = 47,
  GPRMemAtomic = 48,
  FPR32 = 49,
  FPR32C = 50,
  FPR64 = 51,
  FPR64C = 52,
  GPR = 53,
  GPRC = 54,
  GPRNoX0 = 55,
  GPRNoX0X2 = 56,
  GPRTC = 57,
  GPRX0 = 58,
  SP = 59,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace RISCV
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace RISCV {
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
    433,
    437,
    442,
    447,
    448,
    450,
    451,
    452,
    454,
    460,
    466,
    469,
    472,
    475,
    478,
    480,
    482,
    484,
    486,
    488,
    490,
    492,
    494,
    496,
    498,
    500,
    502,
    508,
    516,
    524,
    530,
    536,
    543,
    550,
    556,
    563,
    563,
    566,
    569,
    572,
    575,
    576,
    577,
    579,
    585,
    591,
    597,
    600,
    603,
    606,
    609,
    612,
    615,
    618,
    621,
    624,
    627,
    630,
    633,
    636,
    639,
    642,
    645,
    648,
    651,
    654,
    657,
    660,
    663,
    666,
    669,
    672,
    675,
    678,
    681,
    684,
    687,
    690,
    693,
    696,
    699,
    702,
    705,
    708,
    711,
    714,
    717,
    720,
    723,
    726,
    729,
    732,
    735,
    738,
    741,
    744,
    747,
    750,
    753,
    756,
    759,
    762,
    765,
    768,
    771,
    774,
    777,
    780,
    783,
    786,
    789,
    792,
    795,
    798,
    801,
    804,
    807,
    810,
    813,
    816,
    819,
    822,
    825,
    828,
    831,
    834,
    836,
    839,
    842,
    845,
    848,
    851,
    854,
    857,
    860,
    863,
    866,
    869,
    872,
    875,
    878,
    881,
    884,
    887,
    890,
    893,
    896,
    899,
    902,
    905,
    908,
    910,
    912,
    912,
    915,
    918,
    921,
    924,
    927,
    930,
    933,
    936,
    937,
    938,
    939,
    940,
    943,
    946,
    948,
    950,
    952,
    954,
    957,
    960,
    962,
    964,
    964,
    965,
    968,
    971,
    974,
    977,
    979,
    982,
    985,
    987,
    990,
    992,
    995,
    998,
    1001,
    1004,
    1004,
    1007,
    1010,
    1013,
    1016,
    1019,
    1019,
    1019,
    1023,
    1027,
    1029,
    1031,
    1034,
    1037,
    1039,
    1041,
    1043,
    1046,
    1049,
    1052,
    1055,
    1058,
    1061,
    1064,
    1067,
    1070,
    1073,
    1076,
    1079,
    1082,
    1086,
    1090,
    1092,
    1092,
    1092,
    1095,
    1098,
    1101,
    1104,
    1107,
    1110,
    1113,
    1116,
    1121,
    1126,
    1129,
    1132,
    1135,
    1138,
    1143,
    1148,
    1152,
    1156,
    1158,
    1160,
    1162,
    1164,
    1169,
    1174,
    1179,
    1184,
    1187,
    1190,
    1193,
    1196,
    1199,
    1202,
    1205,
    1208,
    1211,
    1215,
    1219,
    1222,
    1224,
    1227,
    1230,
    1233,
    1236,
    1239,
    1242,
    1244,
    1246,
    1248,
    1250,
    1252,
    1254,
    1256,
    1258,
    1260,
    1263,
    1266,
    1268,
    1271,
    1274,
    1277,
    1280,
    1283,
    1286,
    1289,
    1292,
    1295,
    1298,
    1301,
    1304,
    1307,
    1310,
    1313,
    1316,
    1319,
    1322,
    1325,
    1328,
    1331,
    1333,
    1336,
    1339,
    1342,
    1345,
    1348,
    1351,
    1354,
    1357,
    1360,
    1363,
    1366,
    1369,
    1372,
    1374,
    1377,
    1380,
    1383,
    1386,
    1389,
    1392,
    1395,
    1395,
    1397,
    1399,
    1402,
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
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::FPR64, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::tprel_add_symbol, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    OpTypes::simm21_lsb0_jal, 
    OpTypes::GPR, OpTypes::simm12, 
    OpTypes::call_symbol, 
    OpTypes::GPR, 
    OpTypes::GPR, OpTypes::call_symbol, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    OpTypes::FPR64, OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::FPR32, OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::FPR64, OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::FPR32, OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::ixlenimm_li, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, OpTypes::ixlenimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, OpTypes::ixlenimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    /**/
    OpTypes::GPR, OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::call_symbol, 
    OpTypes::GPRTC, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::FPR32, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, OpTypes::FPR32, OpTypes::FPR32, 
    OpTypes::FPR64, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, OpTypes::FPR64, OpTypes::FPR64, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::FPR64, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::uimm20_auipc, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm13_lsb0, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm13_lsb0, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm13_lsb0, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm13_lsb0, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm13_lsb0, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm13_lsb0, 
    OpTypes::GPR, OpTypes::csr_sysreg, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::csr_sysreg, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::csr_sysreg, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::csr_sysreg, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::csr_sysreg, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::csr_sysreg, OpTypes::uimm5, 
    OpTypes::GPRNoX0, OpTypes::GPRNoX0, OpTypes::GPRNoX0, 
    OpTypes::GPRNoX0, OpTypes::GPRNoX0, OpTypes::simm6nonzero, 
    OpTypes::SP, OpTypes::SP, OpTypes::simm10_lsb0000nonzero, 
    OpTypes::GPRC, OpTypes::SP, OpTypes::uimm10_lsb00nonzero, 
    OpTypes::GPRNoX0, OpTypes::GPRNoX0, OpTypes::simm6, 
    OpTypes::GPRNoX0, OpTypes::GPRNoX0, OpTypes::immzero, 
    OpTypes::GPRX0, OpTypes::GPRX0, OpTypes::simm6nonzero, 
    OpTypes::GPRX0, OpTypes::GPRX0, OpTypes::immzero, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::GPRC, 
    OpTypes::GPRX0, OpTypes::GPRX0, OpTypes::GPRNoX0, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::GPRC, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::simm6, 
    OpTypes::GPRC, OpTypes::simm9_lsb0, 
    OpTypes::GPRC, OpTypes::simm9_lsb0, 
    /**/
    OpTypes::FPR64C, OpTypes::GPRC, OpTypes::uimm8_lsb000, 
    OpTypes::FPR64, OpTypes::SP, OpTypes::uimm9_lsb000, 
    OpTypes::FPR32C, OpTypes::GPRC, OpTypes::uimm7_lsb00, 
    OpTypes::FPR32, OpTypes::SP, OpTypes::uimm8_lsb00, 
    OpTypes::FPR64C, OpTypes::GPRC, OpTypes::uimm8_lsb000, 
    OpTypes::FPR64, OpTypes::SP, OpTypes::uimm9_lsb000, 
    OpTypes::FPR32C, OpTypes::GPRC, OpTypes::uimm7_lsb00, 
    OpTypes::FPR32, OpTypes::SP, OpTypes::uimm8_lsb00, 
    OpTypes::simm12_lsb0, 
    OpTypes::simm12_lsb0, 
    OpTypes::GPRNoX0, 
    OpTypes::GPRNoX0, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::uimm8_lsb000, 
    OpTypes::GPRNoX0, OpTypes::SP, OpTypes::uimm9_lsb000, 
    OpTypes::GPRNoX0, OpTypes::simm6, 
    OpTypes::GPRX0, OpTypes::simm6, 
    OpTypes::GPRNoX0X2, OpTypes::c_lui_imm, 
    OpTypes::GPRX0, OpTypes::c_lui_imm, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::uimm7_lsb00, 
    OpTypes::GPRNoX0, OpTypes::SP, OpTypes::uimm8_lsb00, 
    OpTypes::GPRNoX0, OpTypes::GPRNoX0, 
    OpTypes::GPRX0, OpTypes::GPRNoX0, 
    /**/
    OpTypes::simm6nonzero, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::GPRC, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::uimm8_lsb000, 
    OpTypes::GPR, OpTypes::SP, OpTypes::uimm9_lsb000, 
    OpTypes::GPRNoX0, OpTypes::GPRNoX0, OpTypes::uimmlog2xlennonzero, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPRX0, OpTypes::GPRX0, OpTypes::uimmlog2xlennonzero, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::uimmlog2xlennonzero, 
    OpTypes::GPRC, OpTypes::GPRC, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::uimmlog2xlennonzero, 
    OpTypes::GPRC, OpTypes::GPRC, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::GPRC, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::GPRC, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::uimm7_lsb00, 
    OpTypes::GPR, OpTypes::SP, OpTypes::uimm8_lsb00, 
    /**/
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::GPRC, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    /**/
    /**/
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::GPR, OpTypes::FPR64, 
    OpTypes::GPR, OpTypes::FPR32, 
    OpTypes::FPR64, OpTypes::GPR, OpTypes::frmarg, 
    OpTypes::FPR64, OpTypes::GPR, OpTypes::frmarg, 
    OpTypes::FPR64, OpTypes::FPR32, 
    OpTypes::FPR64, OpTypes::GPR, 
    OpTypes::FPR64, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::GPR, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::GPR, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::GPR, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::GPR, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::GPR, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::GPR, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::GPR, OpTypes::frmarg, 
    OpTypes::GPR, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::GPR, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::GPR, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::GPR, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::fencearg, OpTypes::fencearg, 
    /**/
    /**/
    OpTypes::GPR, OpTypes::FPR64, OpTypes::FPR64, 
    OpTypes::GPR, OpTypes::FPR32, OpTypes::FPR32, 
    OpTypes::FPR64, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::FPR64, OpTypes::FPR64, 
    OpTypes::GPR, OpTypes::FPR32, OpTypes::FPR32, 
    OpTypes::GPR, OpTypes::FPR64, OpTypes::FPR64, 
    OpTypes::GPR, OpTypes::FPR32, OpTypes::FPR32, 
    OpTypes::FPR32, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::FPR64, OpTypes::GPR, 
    OpTypes::FPR32, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::FPR64, 
    OpTypes::GPR, OpTypes::FPR32, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::FPR64, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::simm21_lsb0_jal, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, 
    OpTypes::GPR, OpTypes::uimm20_lui, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimmlog2xlen, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimmlog2xlen, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimmlog2xlen, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    /**/
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace RISCV
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE


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

namespace MSP430 {
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
    ADD16mc	= 175,
    ADD16mi	= 176,
    ADD16mm	= 177,
    ADD16mn	= 178,
    ADD16mp	= 179,
    ADD16mr	= 180,
    ADD16rc	= 181,
    ADD16ri	= 182,
    ADD16rm	= 183,
    ADD16rn	= 184,
    ADD16rp	= 185,
    ADD16rr	= 186,
    ADD8mc	= 187,
    ADD8mi	= 188,
    ADD8mm	= 189,
    ADD8mn	= 190,
    ADD8mp	= 191,
    ADD8mr	= 192,
    ADD8rc	= 193,
    ADD8ri	= 194,
    ADD8rm	= 195,
    ADD8rn	= 196,
    ADD8rp	= 197,
    ADD8rr	= 198,
    ADDC16mc	= 199,
    ADDC16mi	= 200,
    ADDC16mm	= 201,
    ADDC16mn	= 202,
    ADDC16mp	= 203,
    ADDC16mr	= 204,
    ADDC16rc	= 205,
    ADDC16ri	= 206,
    ADDC16rm	= 207,
    ADDC16rn	= 208,
    ADDC16rp	= 209,
    ADDC16rr	= 210,
    ADDC8mc	= 211,
    ADDC8mi	= 212,
    ADDC8mm	= 213,
    ADDC8mn	= 214,
    ADDC8mp	= 215,
    ADDC8mr	= 216,
    ADDC8rc	= 217,
    ADDC8ri	= 218,
    ADDC8rm	= 219,
    ADDC8rn	= 220,
    ADDC8rp	= 221,
    ADDC8rr	= 222,
    ADDframe	= 223,
    ADJCALLSTACKDOWN	= 224,
    ADJCALLSTACKUP	= 225,
    AND16mc	= 226,
    AND16mi	= 227,
    AND16mm	= 228,
    AND16mn	= 229,
    AND16mp	= 230,
    AND16mr	= 231,
    AND16rc	= 232,
    AND16ri	= 233,
    AND16rm	= 234,
    AND16rn	= 235,
    AND16rp	= 236,
    AND16rr	= 237,
    AND8mc	= 238,
    AND8mi	= 239,
    AND8mm	= 240,
    AND8mn	= 241,
    AND8mp	= 242,
    AND8mr	= 243,
    AND8rc	= 244,
    AND8ri	= 245,
    AND8rm	= 246,
    AND8rn	= 247,
    AND8rp	= 248,
    AND8rr	= 249,
    BIC16mc	= 250,
    BIC16mi	= 251,
    BIC16mm	= 252,
    BIC16mn	= 253,
    BIC16mp	= 254,
    BIC16mr	= 255,
    BIC16rc	= 256,
    BIC16ri	= 257,
    BIC16rm	= 258,
    BIC16rn	= 259,
    BIC16rp	= 260,
    BIC16rr	= 261,
    BIC8mc	= 262,
    BIC8mi	= 263,
    BIC8mm	= 264,
    BIC8mn	= 265,
    BIC8mp	= 266,
    BIC8mr	= 267,
    BIC8rc	= 268,
    BIC8ri	= 269,
    BIC8rm	= 270,
    BIC8rn	= 271,
    BIC8rp	= 272,
    BIC8rr	= 273,
    BIS16mc	= 274,
    BIS16mi	= 275,
    BIS16mm	= 276,
    BIS16mn	= 277,
    BIS16mp	= 278,
    BIS16mr	= 279,
    BIS16rc	= 280,
    BIS16ri	= 281,
    BIS16rm	= 282,
    BIS16rn	= 283,
    BIS16rp	= 284,
    BIS16rr	= 285,
    BIS8mc	= 286,
    BIS8mi	= 287,
    BIS8mm	= 288,
    BIS8mn	= 289,
    BIS8mp	= 290,
    BIS8mr	= 291,
    BIS8rc	= 292,
    BIS8ri	= 293,
    BIS8rm	= 294,
    BIS8rn	= 295,
    BIS8rp	= 296,
    BIS8rr	= 297,
    BIT16mc	= 298,
    BIT16mi	= 299,
    BIT16mm	= 300,
    BIT16mn	= 301,
    BIT16mp	= 302,
    BIT16mr	= 303,
    BIT16rc	= 304,
    BIT16ri	= 305,
    BIT16rm	= 306,
    BIT16rn	= 307,
    BIT16rp	= 308,
    BIT16rr	= 309,
    BIT8mc	= 310,
    BIT8mi	= 311,
    BIT8mm	= 312,
    BIT8mn	= 313,
    BIT8mp	= 314,
    BIT8mr	= 315,
    BIT8rc	= 316,
    BIT8ri	= 317,
    BIT8rm	= 318,
    BIT8rn	= 319,
    BIT8rp	= 320,
    BIT8rr	= 321,
    Bi	= 322,
    Bm	= 323,
    Br	= 324,
    CALLi	= 325,
    CALLm	= 326,
    CALLn	= 327,
    CALLp	= 328,
    CALLr	= 329,
    CMP16mc	= 330,
    CMP16mi	= 331,
    CMP16mm	= 332,
    CMP16mn	= 333,
    CMP16mp	= 334,
    CMP16mr	= 335,
    CMP16rc	= 336,
    CMP16ri	= 337,
    CMP16rm	= 338,
    CMP16rn	= 339,
    CMP16rp	= 340,
    CMP16rr	= 341,
    CMP8mc	= 342,
    CMP8mi	= 343,
    CMP8mm	= 344,
    CMP8mn	= 345,
    CMP8mp	= 346,
    CMP8mr	= 347,
    CMP8rc	= 348,
    CMP8ri	= 349,
    CMP8rm	= 350,
    CMP8rn	= 351,
    CMP8rp	= 352,
    CMP8rr	= 353,
    DADD16mc	= 354,
    DADD16mi	= 355,
    DADD16mm	= 356,
    DADD16mn	= 357,
    DADD16mp	= 358,
    DADD16mr	= 359,
    DADD16rc	= 360,
    DADD16ri	= 361,
    DADD16rm	= 362,
    DADD16rn	= 363,
    DADD16rp	= 364,
    DADD16rr	= 365,
    DADD8mc	= 366,
    DADD8mi	= 367,
    DADD8mm	= 368,
    DADD8mn	= 369,
    DADD8mp	= 370,
    DADD8mr	= 371,
    DADD8rc	= 372,
    DADD8ri	= 373,
    DADD8rm	= 374,
    DADD8rn	= 375,
    DADD8rp	= 376,
    DADD8rr	= 377,
    JCC	= 378,
    JMP	= 379,
    MOV16mc	= 380,
    MOV16mi	= 381,
    MOV16mm	= 382,
    MOV16mn	= 383,
    MOV16mr	= 384,
    MOV16rc	= 385,
    MOV16ri	= 386,
    MOV16rm	= 387,
    MOV16rn	= 388,
    MOV16rp	= 389,
    MOV16rr	= 390,
    MOV8mc	= 391,
    MOV8mi	= 392,
    MOV8mm	= 393,
    MOV8mn	= 394,
    MOV8mr	= 395,
    MOV8rc	= 396,
    MOV8ri	= 397,
    MOV8rm	= 398,
    MOV8rn	= 399,
    MOV8rp	= 400,
    MOV8rr	= 401,
    MOVZX16rm8	= 402,
    MOVZX16rr8	= 403,
    POP16r	= 404,
    PUSH16c	= 405,
    PUSH16i	= 406,
    PUSH16r	= 407,
    PUSH8r	= 408,
    RET	= 409,
    RETI	= 410,
    RRA16m	= 411,
    RRA16n	= 412,
    RRA16p	= 413,
    RRA16r	= 414,
    RRA8m	= 415,
    RRA8n	= 416,
    RRA8p	= 417,
    RRA8r	= 418,
    RRC16m	= 419,
    RRC16n	= 420,
    RRC16p	= 421,
    RRC16r	= 422,
    RRC8m	= 423,
    RRC8n	= 424,
    RRC8p	= 425,
    RRC8r	= 426,
    Rrcl16	= 427,
    Rrcl8	= 428,
    SEXT16m	= 429,
    SEXT16n	= 430,
    SEXT16p	= 431,
    SEXT16r	= 432,
    SUB16mc	= 433,
    SUB16mi	= 434,
    SUB16mm	= 435,
    SUB16mn	= 436,
    SUB16mp	= 437,
    SUB16mr	= 438,
    SUB16rc	= 439,
    SUB16ri	= 440,
    SUB16rm	= 441,
    SUB16rn	= 442,
    SUB16rp	= 443,
    SUB16rr	= 444,
    SUB8mc	= 445,
    SUB8mi	= 446,
    SUB8mm	= 447,
    SUB8mn	= 448,
    SUB8mp	= 449,
    SUB8mr	= 450,
    SUB8rc	= 451,
    SUB8ri	= 452,
    SUB8rm	= 453,
    SUB8rn	= 454,
    SUB8rp	= 455,
    SUB8rr	= 456,
    SUBC16mc	= 457,
    SUBC16mi	= 458,
    SUBC16mm	= 459,
    SUBC16mn	= 460,
    SUBC16mp	= 461,
    SUBC16mr	= 462,
    SUBC16rc	= 463,
    SUBC16ri	= 464,
    SUBC16rm	= 465,
    SUBC16rn	= 466,
    SUBC16rp	= 467,
    SUBC16rr	= 468,
    SUBC8mc	= 469,
    SUBC8mi	= 470,
    SUBC8mm	= 471,
    SUBC8mn	= 472,
    SUBC8mp	= 473,
    SUBC8mr	= 474,
    SUBC8rc	= 475,
    SUBC8ri	= 476,
    SUBC8rm	= 477,
    SUBC8rn	= 478,
    SUBC8rp	= 479,
    SUBC8rr	= 480,
    SWPB16m	= 481,
    SWPB16n	= 482,
    SWPB16p	= 483,
    SWPB16r	= 484,
    Select16	= 485,
    Select8	= 486,
    Shl16	= 487,
    Shl8	= 488,
    Sra16	= 489,
    Sra8	= 490,
    Srl16	= 491,
    Srl8	= 492,
    XOR16mc	= 493,
    XOR16mi	= 494,
    XOR16mm	= 495,
    XOR16mn	= 496,
    XOR16mp	= 497,
    XOR16mr	= 498,
    XOR16rc	= 499,
    XOR16ri	= 500,
    XOR16rm	= 501,
    XOR16rn	= 502,
    XOR16rp	= 503,
    XOR16rr	= 504,
    XOR8mc	= 505,
    XOR8mi	= 506,
    XOR8mm	= 507,
    XOR8mn	= 508,
    XOR8mp	= 509,
    XOR8mr	= 510,
    XOR8rc	= 511,
    XOR8ri	= 512,
    XOR8rm	= 513,
    XOR8rn	= 514,
    XOR8rp	= 515,
    XOR8rr	= 516,
    ZEXT16r	= 517,
    INSTRUCTION_LIST_END = 518
  };

} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace MSP430 {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // end namespace Sched
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { MSP430::SR, 0 };
static const MCPhysReg ImplicitList2[] = { MSP430::SP, 0 };
static const MCPhysReg ImplicitList3[] = { MSP430::SP, MSP430::SR, 0 };
static const MCPhysReg ImplicitList4[] = { MSP430::R11, MSP430::R12, MSP430::R13, MSP430::R14, MSP430::R15, MSP430::SR, 0 };

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
static const MCOperandInfo OperandInfo37[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo47[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo54[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo70[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo71[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo74[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo75[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc MSP430Insts[] = {
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
  { 175,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #175 = ADD16mc
  { 176,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #176 = ADD16mi
  { 177,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #177 = ADD16mm
  { 178,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #178 = ADD16mn
  { 179,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #179 = ADD16mp
  { 180,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #180 = ADD16mr
  { 181,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #181 = ADD16rc
  { 182,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #182 = ADD16ri
  { 183,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #183 = ADD16rm
  { 184,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #184 = ADD16rn
  { 185,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46, -1 ,nullptr },  // Inst #185 = ADD16rp
  { 186,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47, -1 ,nullptr },  // Inst #186 = ADD16rr
  { 187,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #187 = ADD8mc
  { 188,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #188 = ADD8mi
  { 189,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #189 = ADD8mm
  { 190,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #190 = ADD8mn
  { 191,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #191 = ADD8mp
  { 192,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48, -1 ,nullptr },  // Inst #192 = ADD8mr
  { 193,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49, -1 ,nullptr },  // Inst #193 = ADD8rc
  { 194,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50, -1 ,nullptr },  // Inst #194 = ADD8ri
  { 195,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51, -1 ,nullptr },  // Inst #195 = ADD8rm
  { 196,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52, -1 ,nullptr },  // Inst #196 = ADD8rn
  { 197,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53, -1 ,nullptr },  // Inst #197 = ADD8rp
  { 198,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #198 = ADD8rr
  { 199,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #199 = ADDC16mc
  { 200,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #200 = ADDC16mi
  { 201,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #201 = ADDC16mm
  { 202,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #202 = ADDC16mn
  { 203,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #203 = ADDC16mp
  { 204,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #204 = ADDC16mr
  { 205,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #205 = ADDC16rc
  { 206,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #206 = ADDC16ri
  { 207,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #207 = ADDC16rm
  { 208,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #208 = ADDC16rn
  { 209,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46, -1 ,nullptr },  // Inst #209 = ADDC16rp
  { 210,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo47, -1 ,nullptr },  // Inst #210 = ADDC16rr
  { 211,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #211 = ADDC8mc
  { 212,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #212 = ADDC8mi
  { 213,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #213 = ADDC8mm
  { 214,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #214 = ADDC8mn
  { 215,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #215 = ADDC8mp
  { 216,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo48, -1 ,nullptr },  // Inst #216 = ADDC8mr
  { 217,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo49, -1 ,nullptr },  // Inst #217 = ADDC8rc
  { 218,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo50, -1 ,nullptr },  // Inst #218 = ADDC8ri
  { 219,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo51, -1 ,nullptr },  // Inst #219 = ADDC8rm
  { 220,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo52, -1 ,nullptr },  // Inst #220 = ADDC8rn
  { 221,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo53, -1 ,nullptr },  // Inst #221 = ADDC8rp
  { 222,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #222 = ADDC8rr
  { 223,	3,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo55, -1 ,nullptr },  // Inst #223 = ADDframe
  { 224,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo8, -1 ,nullptr },  // Inst #224 = ADJCALLSTACKDOWN
  { 225,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo8, -1 ,nullptr },  // Inst #225 = ADJCALLSTACKUP
  { 226,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #226 = AND16mc
  { 227,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #227 = AND16mi
  { 228,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #228 = AND16mm
  { 229,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #229 = AND16mn
  { 230,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #230 = AND16mp
  { 231,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #231 = AND16mr
  { 232,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #232 = AND16rc
  { 233,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #233 = AND16ri
  { 234,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #234 = AND16rm
  { 235,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #235 = AND16rn
  { 236,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46, -1 ,nullptr },  // Inst #236 = AND16rp
  { 237,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47, -1 ,nullptr },  // Inst #237 = AND16rr
  { 238,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #238 = AND8mc
  { 239,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #239 = AND8mi
  { 240,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #240 = AND8mm
  { 241,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #241 = AND8mn
  { 242,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #242 = AND8mp
  { 243,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48, -1 ,nullptr },  // Inst #243 = AND8mr
  { 244,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49, -1 ,nullptr },  // Inst #244 = AND8rc
  { 245,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50, -1 ,nullptr },  // Inst #245 = AND8ri
  { 246,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51, -1 ,nullptr },  // Inst #246 = AND8rm
  { 247,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52, -1 ,nullptr },  // Inst #247 = AND8rn
  { 248,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53, -1 ,nullptr },  // Inst #248 = AND8rp
  { 249,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #249 = AND8rr
  { 250,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #250 = BIC16mc
  { 251,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #251 = BIC16mi
  { 252,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #252 = BIC16mm
  { 253,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #253 = BIC16mn
  { 254,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #254 = BIC16mp
  { 255,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #255 = BIC16mr
  { 256,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #256 = BIC16rc
  { 257,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #257 = BIC16ri
  { 258,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #258 = BIC16rm
  { 259,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #259 = BIC16rn
  { 260,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46, -1 ,nullptr },  // Inst #260 = BIC16rp
  { 261,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47, -1 ,nullptr },  // Inst #261 = BIC16rr
  { 262,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #262 = BIC8mc
  { 263,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #263 = BIC8mi
  { 264,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #264 = BIC8mm
  { 265,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #265 = BIC8mn
  { 266,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #266 = BIC8mp
  { 267,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48, -1 ,nullptr },  // Inst #267 = BIC8mr
  { 268,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49, -1 ,nullptr },  // Inst #268 = BIC8rc
  { 269,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50, -1 ,nullptr },  // Inst #269 = BIC8ri
  { 270,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51, -1 ,nullptr },  // Inst #270 = BIC8rm
  { 271,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52, -1 ,nullptr },  // Inst #271 = BIC8rn
  { 272,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53, -1 ,nullptr },  // Inst #272 = BIC8rp
  { 273,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #273 = BIC8rr
  { 274,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #274 = BIS16mc
  { 275,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #275 = BIS16mi
  { 276,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #276 = BIS16mm
  { 277,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #277 = BIS16mn
  { 278,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #278 = BIS16mp
  { 279,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #279 = BIS16mr
  { 280,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #280 = BIS16rc
  { 281,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #281 = BIS16ri
  { 282,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #282 = BIS16rm
  { 283,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #283 = BIS16rn
  { 284,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46, -1 ,nullptr },  // Inst #284 = BIS16rp
  { 285,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47, -1 ,nullptr },  // Inst #285 = BIS16rr
  { 286,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #286 = BIS8mc
  { 287,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #287 = BIS8mi
  { 288,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #288 = BIS8mm
  { 289,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #289 = BIS8mn
  { 290,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #290 = BIS8mp
  { 291,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48, -1 ,nullptr },  // Inst #291 = BIS8mr
  { 292,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49, -1 ,nullptr },  // Inst #292 = BIS8rc
  { 293,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50, -1 ,nullptr },  // Inst #293 = BIS8ri
  { 294,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51, -1 ,nullptr },  // Inst #294 = BIS8rm
  { 295,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52, -1 ,nullptr },  // Inst #295 = BIS8rn
  { 296,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53, -1 ,nullptr },  // Inst #296 = BIS8rp
  { 297,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #297 = BIS8rr
  { 298,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #298 = BIT16mc
  { 299,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #299 = BIT16mi
  { 300,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #300 = BIT16mm
  { 301,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #301 = BIT16mn
  { 302,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #302 = BIT16mp
  { 303,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #303 = BIT16mr
  { 304,	2,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #304 = BIT16rc
  { 305,	2,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #305 = BIT16ri
  { 306,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo58, -1 ,nullptr },  // Inst #306 = BIT16rm
  { 307,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo59, -1 ,nullptr },  // Inst #307 = BIT16rn
  { 308,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo59, -1 ,nullptr },  // Inst #308 = BIT16rp
  { 309,	2,	0,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo60, -1 ,nullptr },  // Inst #309 = BIT16rr
  { 310,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #310 = BIT8mc
  { 311,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #311 = BIT8mi
  { 312,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #312 = BIT8mm
  { 313,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #313 = BIT8mn
  { 314,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #314 = BIT8mp
  { 315,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48, -1 ,nullptr },  // Inst #315 = BIT8mr
  { 316,	2,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo61, -1 ,nullptr },  // Inst #316 = BIT8rc
  { 317,	2,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo62, -1 ,nullptr },  // Inst #317 = BIT8ri
  { 318,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo63, -1 ,nullptr },  // Inst #318 = BIT8rm
  { 319,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo64, -1 ,nullptr },  // Inst #319 = BIT8rn
  { 320,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo64, -1 ,nullptr },  // Inst #320 = BIT8rp
  { 321,	2,	0,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo65, -1 ,nullptr },  // Inst #321 = BIT8rr
  { 322,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #322 = Bi
  { 323,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #323 = Bm
  { 324,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #324 = Br
  { 325,	1,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList4, OperandInfo3, -1 ,nullptr },  // Inst #325 = CALLi
  { 326,	2,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList4, OperandInfo66, -1 ,nullptr },  // Inst #326 = CALLm
  { 327,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList4, OperandInfo68, -1 ,nullptr },  // Inst #327 = CALLn
  { 328,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList4, OperandInfo68, -1 ,nullptr },  // Inst #328 = CALLp
  { 329,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList4, OperandInfo67, -1 ,nullptr },  // Inst #329 = CALLr
  { 330,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #330 = CMP16mc
  { 331,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #331 = CMP16mi
  { 332,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #332 = CMP16mm
  { 333,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #333 = CMP16mn
  { 334,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #334 = CMP16mp
  { 335,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #335 = CMP16mr
  { 336,	2,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56, -1 ,nullptr },  // Inst #336 = CMP16rc
  { 337,	2,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57, -1 ,nullptr },  // Inst #337 = CMP16ri
  { 338,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo58, -1 ,nullptr },  // Inst #338 = CMP16rm
  { 339,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo59, -1 ,nullptr },  // Inst #339 = CMP16rn
  { 340,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo59, -1 ,nullptr },  // Inst #340 = CMP16rp
  { 341,	2,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo60, -1 ,nullptr },  // Inst #341 = CMP16rr
  { 342,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #342 = CMP8mc
  { 343,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #343 = CMP8mi
  { 344,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #344 = CMP8mm
  { 345,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #345 = CMP8mn
  { 346,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #346 = CMP8mp
  { 347,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48, -1 ,nullptr },  // Inst #347 = CMP8mr
  { 348,	2,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo61, -1 ,nullptr },  // Inst #348 = CMP8rc
  { 349,	2,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo62, -1 ,nullptr },  // Inst #349 = CMP8ri
  { 350,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo63, -1 ,nullptr },  // Inst #350 = CMP8rm
  { 351,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo64, -1 ,nullptr },  // Inst #351 = CMP8rn
  { 352,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo64, -1 ,nullptr },  // Inst #352 = CMP8rp
  { 353,	2,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo65, -1 ,nullptr },  // Inst #353 = CMP8rr
  { 354,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #354 = DADD16mc
  { 355,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #355 = DADD16mi
  { 356,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #356 = DADD16mm
  { 357,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #357 = DADD16mn
  { 358,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #358 = DADD16mp
  { 359,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #359 = DADD16mr
  { 360,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #360 = DADD16rc
  { 361,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #361 = DADD16ri
  { 362,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #362 = DADD16rm
  { 363,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #363 = DADD16rn
  { 364,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46, -1 ,nullptr },  // Inst #364 = DADD16rp
  { 365,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo47, -1 ,nullptr },  // Inst #365 = DADD16rr
  { 366,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #366 = DADD8mc
  { 367,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #367 = DADD8mi
  { 368,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #368 = DADD8mm
  { 369,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #369 = DADD8mn
  { 370,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #370 = DADD8mp
  { 371,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo48, -1 ,nullptr },  // Inst #371 = DADD8mr
  { 372,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo49, -1 ,nullptr },  // Inst #372 = DADD8rc
  { 373,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo50, -1 ,nullptr },  // Inst #373 = DADD8ri
  { 374,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo51, -1 ,nullptr },  // Inst #374 = DADD8rm
  { 375,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo52, -1 ,nullptr },  // Inst #375 = DADD8rn
  { 376,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo53, -1 ,nullptr },  // Inst #376 = DADD8rp
  { 377,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #377 = DADD8rr
  { 378,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #378 = JCC
  { 379,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #379 = JMP
  { 380,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #380 = MOV16mc
  { 381,	3,	0,	6,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #381 = MOV16mi
  { 382,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #382 = MOV16mm
  { 383,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #383 = MOV16mn
  { 384,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #384 = MOV16mr
  { 385,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #385 = MOV16rc
  { 386,	2,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #386 = MOV16ri
  { 387,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #387 = MOV16rm
  { 388,	2,	1,	2,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #388 = MOV16rn
  { 389,	3,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #389 = MOV16rp
  { 390,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #390 = MOV16rr
  { 391,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #391 = MOV8mc
  { 392,	3,	0,	6,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #392 = MOV8mi
  { 393,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #393 = MOV8mm
  { 394,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #394 = MOV8mn
  { 395,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #395 = MOV8mr
  { 396,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #396 = MOV8rc
  { 397,	2,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #397 = MOV8ri
  { 398,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #398 = MOV8rm
  { 399,	2,	1,	2,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #399 = MOV8rn
  { 400,	3,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #400 = MOV8rp
  { 401,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #401 = MOV8rr
  { 402,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #402 = MOVZX16rm8
  { 403,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #403 = MOVZX16rr8
  { 404,	1,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo67, -1 ,nullptr },  // Inst #404 = POP16r
  { 405,	1,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo2, -1 ,nullptr },  // Inst #405 = PUSH16c
  { 406,	1,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo3, -1 ,nullptr },  // Inst #406 = PUSH16i
  { 407,	1,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo67, -1 ,nullptr },  // Inst #407 = PUSH16r
  { 408,	1,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo72, -1 ,nullptr },  // Inst #408 = PUSH8r
  { 409,	0,	0,	2,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #409 = RET
  { 410,	0,	0,	2,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #410 = RETI
  { 411,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo66, -1 ,nullptr },  // Inst #411 = RRA16m
  { 412,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo68, -1 ,nullptr },  // Inst #412 = RRA16n
  { 413,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo68, -1 ,nullptr },  // Inst #413 = RRA16p
  { 414,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo73, -1 ,nullptr },  // Inst #414 = RRA16r
  { 415,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo66, -1 ,nullptr },  // Inst #415 = RRA8m
  { 416,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo68, -1 ,nullptr },  // Inst #416 = RRA8n
  { 417,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo68, -1 ,nullptr },  // Inst #417 = RRA8p
  { 418,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo74, -1 ,nullptr },  // Inst #418 = RRA8r
  { 419,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo66, -1 ,nullptr },  // Inst #419 = RRC16m
  { 420,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo68, -1 ,nullptr },  // Inst #420 = RRC16n
  { 421,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo68, -1 ,nullptr },  // Inst #421 = RRC16p
  { 422,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo73, -1 ,nullptr },  // Inst #422 = RRC16r
  { 423,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo66, -1 ,nullptr },  // Inst #423 = RRC8m
  { 424,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo68, -1 ,nullptr },  // Inst #424 = RRC8n
  { 425,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo68, -1 ,nullptr },  // Inst #425 = RRC8p
  { 426,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo74, -1 ,nullptr },  // Inst #426 = RRC8r
  { 427,	2,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo60, -1 ,nullptr },  // Inst #427 = Rrcl16
  { 428,	2,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo65, -1 ,nullptr },  // Inst #428 = Rrcl8
  { 429,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo66, -1 ,nullptr },  // Inst #429 = SEXT16m
  { 430,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo68, -1 ,nullptr },  // Inst #430 = SEXT16n
  { 431,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo68, -1 ,nullptr },  // Inst #431 = SEXT16p
  { 432,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo73, -1 ,nullptr },  // Inst #432 = SEXT16r
  { 433,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #433 = SUB16mc
  { 434,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #434 = SUB16mi
  { 435,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #435 = SUB16mm
  { 436,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #436 = SUB16mn
  { 437,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #437 = SUB16mp
  { 438,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #438 = SUB16mr
  { 439,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #439 = SUB16rc
  { 440,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #440 = SUB16ri
  { 441,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #441 = SUB16rm
  { 442,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #442 = SUB16rn
  { 443,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46, -1 ,nullptr },  // Inst #443 = SUB16rp
  { 444,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47, -1 ,nullptr },  // Inst #444 = SUB16rr
  { 445,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #445 = SUB8mc
  { 446,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #446 = SUB8mi
  { 447,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #447 = SUB8mm
  { 448,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #448 = SUB8mn
  { 449,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #449 = SUB8mp
  { 450,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48, -1 ,nullptr },  // Inst #450 = SUB8mr
  { 451,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49, -1 ,nullptr },  // Inst #451 = SUB8rc
  { 452,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50, -1 ,nullptr },  // Inst #452 = SUB8ri
  { 453,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51, -1 ,nullptr },  // Inst #453 = SUB8rm
  { 454,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52, -1 ,nullptr },  // Inst #454 = SUB8rn
  { 455,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53, -1 ,nullptr },  // Inst #455 = SUB8rp
  { 456,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #456 = SUB8rr
  { 457,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #457 = SUBC16mc
  { 458,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #458 = SUBC16mi
  { 459,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #459 = SUBC16mm
  { 460,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #460 = SUBC16mn
  { 461,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #461 = SUBC16mp
  { 462,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #462 = SUBC16mr
  { 463,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #463 = SUBC16rc
  { 464,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #464 = SUBC16ri
  { 465,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #465 = SUBC16rm
  { 466,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #466 = SUBC16rn
  { 467,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46, -1 ,nullptr },  // Inst #467 = SUBC16rp
  { 468,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo47, -1 ,nullptr },  // Inst #468 = SUBC16rr
  { 469,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #469 = SUBC8mc
  { 470,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #470 = SUBC8mi
  { 471,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #471 = SUBC8mm
  { 472,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #472 = SUBC8mn
  { 473,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #473 = SUBC8mp
  { 474,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo48, -1 ,nullptr },  // Inst #474 = SUBC8mr
  { 475,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo49, -1 ,nullptr },  // Inst #475 = SUBC8rc
  { 476,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo50, -1 ,nullptr },  // Inst #476 = SUBC8ri
  { 477,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo51, -1 ,nullptr },  // Inst #477 = SUBC8rm
  { 478,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo52, -1 ,nullptr },  // Inst #478 = SUBC8rn
  { 479,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo53, -1 ,nullptr },  // Inst #479 = SUBC8rp
  { 480,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #480 = SUBC8rr
  { 481,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #481 = SWPB16m
  { 482,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #482 = SWPB16n
  { 483,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #483 = SWPB16p
  { 484,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #484 = SWPB16r
  { 485,	4,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #485 = Select16
  { 486,	4,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #486 = Select8
  { 487,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo77, -1 ,nullptr },  // Inst #487 = Shl16
  { 488,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo78, -1 ,nullptr },  // Inst #488 = Shl8
  { 489,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo77, -1 ,nullptr },  // Inst #489 = Sra16
  { 490,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo78, -1 ,nullptr },  // Inst #490 = Sra8
  { 491,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo77, -1 ,nullptr },  // Inst #491 = Srl16
  { 492,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo78, -1 ,nullptr },  // Inst #492 = Srl8
  { 493,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #493 = XOR16mc
  { 494,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #494 = XOR16mi
  { 495,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #495 = XOR16mm
  { 496,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #496 = XOR16mn
  { 497,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #497 = XOR16mp
  { 498,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #498 = XOR16mr
  { 499,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #499 = XOR16rc
  { 500,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #500 = XOR16ri
  { 501,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #501 = XOR16rm
  { 502,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #502 = XOR16rn
  { 503,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46, -1 ,nullptr },  // Inst #503 = XOR16rp
  { 504,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47, -1 ,nullptr },  // Inst #504 = XOR16rr
  { 505,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #505 = XOR8mc
  { 506,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #506 = XOR8mi
  { 507,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #507 = XOR8mm
  { 508,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #508 = XOR8mn
  { 509,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #509 = XOR8mp
  { 510,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48, -1 ,nullptr },  // Inst #510 = XOR8mr
  { 511,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49, -1 ,nullptr },  // Inst #511 = XOR8rc
  { 512,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50, -1 ,nullptr },  // Inst #512 = XOR8ri
  { 513,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51, -1 ,nullptr },  // Inst #513 = XOR8rm
  { 514,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52, -1 ,nullptr },  // Inst #514 = XOR8rn
  { 515,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53, -1 ,nullptr },  // Inst #515 = XOR8rp
  { 516,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #516 = XOR8rr
  { 517,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #517 = ZEXT16r
};

extern const char MSP430InstrNameData[] = {
  /* 0 */ 'G', '_', 'F', 'L', 'O', 'G', '1', '0', 0,
  /* 9 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 17 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 25 */ 'S', 'r', 'a', '1', '6', 0,
  /* 31 */ 'R', 'r', 'c', 'l', '1', '6', 0,
  /* 38 */ 'S', 'h', 'l', '1', '6', 0,
  /* 44 */ 'S', 'r', 'l', '1', '6', 0,
  /* 50 */ 'S', 'e', 'l', 'e', 'c', 't', '1', '6', 0,
  /* 59 */ 'S', 'r', 'a', '8', 0,
  /* 64 */ 'R', 'r', 'c', 'l', '8', 0,
  /* 70 */ 'S', 'h', 'l', '8', 0,
  /* 75 */ 'S', 'r', 'l', '8', 0,
  /* 80 */ 'M', 'O', 'V', 'Z', 'X', '1', '6', 'r', 'm', '8', 0,
  /* 91 */ 'M', 'O', 'V', 'Z', 'X', '1', '6', 'r', 'r', '8', 0,
  /* 102 */ 'S', 'e', 'l', 'e', 'c', 't', '8', 0,
  /* 110 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 116 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 123 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'S', 'U', 'B', 0,
  /* 140 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 146 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'S', 'U', 'B', 0,
  /* 162 */ 'J', 'C', 'C', 0,
  /* 166 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 178 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 188 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 206 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 214 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 235 */ 'G', '_', 'D', 'Y', 'N', '_', 'S', 'T', 'A', 'C', 'K', 'A', 'L', 'L', 'O', 'C', 0,
  /* 252 */ 'G', '_', 'F', 'M', 'A', 'D', 0,
  /* 259 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 278 */ 'G', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 289 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 308 */ 'G', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 319 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'L', 'O', 'A', 'D', 0,
  /* 334 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 341 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 348 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'A', 'D', 'D', 0,
  /* 365 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 371 */ 'G', '_', 'P', 'T', 'R', '_', 'A', 'D', 'D', 0,
  /* 381 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'D', 'D', 0,
  /* 397 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'N', 'A', 'N', 'D', 0,
  /* 414 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 420 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'N', 'D', 0,
  /* 436 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 449 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 458 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'R', 'O', 'U', 'N', 'D', 0,
  /* 476 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 493 */ 'G', '_', 'S', 'S', 'U', 'B', 'E', 0,
  /* 501 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 509 */ 'G', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 517 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 530 */ 'G', '_', 'S', 'A', 'D', 'D', 'E', 0,
  /* 538 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 546 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 561 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 576 */ 'G', '_', 'J', 'U', 'M', 'P', '_', 'T', 'A', 'B', 'L', 'E', 0,
  /* 589 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 596 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 609 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 625 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 633 */ 'G', '_', 'B', 'I', 'T', 'R', 'E', 'V', 'E', 'R', 'S', 'E', 0,
  /* 646 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 656 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 671 */ 'G', '_', 'F', 'C', 'A', 'N', 'O', 'N', 'I', 'C', 'A', 'L', 'I', 'Z', 'E', 0,
  /* 687 */ 'G', '_', 'C', 'T', 'L', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 705 */ 'G', '_', 'C', 'T', 'T', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 723 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 738 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 745 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 760 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 774 */ 'G', '_', 'S', 'E', 'X', 'T', '_', 'I', 'N', 'R', 'E', 'G', 0,
  /* 787 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 801 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', 0,
  /* 818 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', 0,
  /* 835 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 842 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 850 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 858 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 866 */ 'G', '_', 'P', 'H', 'I', 0,
  /* 872 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 881 */ 'R', 'E', 'T', 'I', 0,
  /* 886 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 895 */ 'G', '_', 'P', 'T', 'R', '_', 'M', 'A', 'S', 'K', 0,
  /* 906 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 915 */ 'D', 'B', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 925 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 934 */ 'A', 'N', 'N', 'O', 'T', 'A', 'T', 'I', 'O', 'N', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 951 */ 'I', 'C', 'A', 'L', 'L', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'F', 'U', 'N', 'N', 'E', 'L', 0,
  /* 971 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 977 */ 'G', '_', 'F', 'C', 'E', 'I', 'L', 0,
  /* 985 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 1005 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 1032 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 1053 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 1065 */ 'K', 'I', 'L', 'L', 0,
  /* 1070 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 1077 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 1083 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 1090 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 1097 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 1104 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 1114 */ 'G', '_', 'F', 'M', 'I', 'N', 'I', 'M', 'U', 'M', 0,
  /* 1125 */ 'G', '_', 'F', 'M', 'A', 'X', 'I', 'M', 'U', 'M', 0,
  /* 1136 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', 0,
  /* 1146 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', 0,
  /* 1156 */ 'G', '_', 'F', 'C', 'O', 'P', 'Y', 'S', 'I', 'G', 'N', 0,
  /* 1168 */ 'G', '_', 'S', 'M', 'I', 'N', 0,
  /* 1175 */ 'G', '_', 'U', 'M', 'I', 'N', 0,
  /* 1182 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 1199 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'I', 'N', 0,
  /* 1215 */ 'G', '_', 'F', 'S', 'I', 'N', 0,
  /* 1222 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 1238 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 1255 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 1263 */ 'G', '_', 'U', 'S', 'U', 'B', 'O', 0,
  /* 1271 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 1279 */ 'G', '_', 'U', 'A', 'D', 'D', 'O', 0,
  /* 1287 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 1295 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 1303 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 1312 */ 'G', '_', 'B', 'S', 'W', 'A', 'P', 0,
  /* 1320 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 1329 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 1338 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 1345 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 1352 */ 'J', 'M', 'P', 0,
  /* 1356 */ 'G', '_', 'C', 'T', 'P', 'O', 'P', 0,
  /* 1364 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 1377 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 1389 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 1404 */ 'G', '_', 'F', 'E', 'X', 'P', 0,
  /* 1411 */ 'G', '_', 'B', 'R', 0,
  /* 1416 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', '_', 'B', 'R', 0,
  /* 1429 */ 'G', '_', 'B', 'L', 'O', 'C', 'K', '_', 'A', 'D', 'D', 'R', 0,
  /* 1442 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 1467 */ 'G', '_', 'R', 'E', 'A', 'D', 'C', 'Y', 'C', 'L', 'E', 'C', 'O', 'U', 'N', 'T', 'E', 'R', 0,
  /* 1486 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 1493 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 1500 */ 'G', '_', 'F', 'F', 'L', 'O', 'O', 'R', 0,
  /* 1509 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 1524 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 1541 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 1547 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'O', 'R', 0,
  /* 1563 */ 'G', '_', 'O', 'R', 0,
  /* 1568 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'O', 'R', 0,
  /* 1583 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 1594 */ 'G', '_', 'F', 'A', 'B', 'S', 0,
  /* 1601 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 1618 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 1633 */ 'G', '_', 'F', 'C', 'O', 'S', 0,
  /* 1640 */ 'G', '_', 'C', 'O', 'N', 'C', 'A', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', 'S', 0,
  /* 1657 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 1674 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'W', 'I', 'T', 'H', '_', 'S', 'U', 'C', 'C', 'E', 'S', 'S', 0,
  /* 1704 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 1731 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 1741 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 1750 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 1763 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 1777 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 1801 */ 'G', '_', 'B', 'R', 'J', 'T', 0,
  /* 1808 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 1829 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 1849 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 1861 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 1872 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1883 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1894 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 1905 */ 'G', '_', 'F', 'R', 'I', 'N', 'T', 0,
  /* 1913 */ 'G', '_', 'F', 'N', 'E', 'A', 'R', 'B', 'Y', 'I', 'N', 'T', 0,
  /* 1926 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1936 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1951 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 1960 */ 'G', '_', 'F', 'S', 'Q', 'R', 'T', 0,
  /* 1968 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 1978 */ 'G', '_', 'A', 'D', 'D', 'R', 'S', 'P', 'A', 'C', 'E', '_', 'C', 'A', 'S', 'T', 0,
  /* 1995 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 2003 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 2010 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 2019 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 2026 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 2033 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 2040 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 2047 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 2054 */ 'G', '_', 'S', 'M', 'A', 'X', 0,
  /* 2061 */ 'G', '_', 'U', 'M', 'A', 'X', 0,
  /* 2068 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 2085 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'A', 'X', 0,
  /* 2101 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 2115 */ 'C', 'O', 'P', 'Y', 0,
  /* 2120 */ 'G', '_', 'C', 'T', 'L', 'Z', 0,
  /* 2127 */ 'G', '_', 'C', 'T', 'T', 'Z', 0,
  /* 2134 */ 'P', 'U', 'S', 'H', '1', '6', 'c', 0,
  /* 2142 */ 'S', 'U', 'B', '1', '6', 'm', 'c', 0,
  /* 2150 */ 'S', 'U', 'B', 'C', '1', '6', 'm', 'c', 0,
  /* 2159 */ 'A', 'D', 'D', 'C', '1', '6', 'm', 'c', 0,
  /* 2168 */ 'B', 'I', 'C', '1', '6', 'm', 'c', 0,
  /* 2176 */ 'D', 'A', 'D', 'D', '1', '6', 'm', 'c', 0,
  /* 2185 */ 'A', 'N', 'D', '1', '6', 'm', 'c', 0,
  /* 2193 */ 'C', 'M', 'P', '1', '6', 'm', 'c', 0,
  /* 2201 */ 'X', 'O', 'R', '1', '6', 'm', 'c', 0,
  /* 2209 */ 'B', 'I', 'S', '1', '6', 'm', 'c', 0,
  /* 2217 */ 'B', 'I', 'T', '1', '6', 'm', 'c', 0,
  /* 2225 */ 'M', 'O', 'V', '1', '6', 'm', 'c', 0,
  /* 2233 */ 'S', 'U', 'B', '8', 'm', 'c', 0,
  /* 2240 */ 'S', 'U', 'B', 'C', '8', 'm', 'c', 0,
  /* 2248 */ 'A', 'D', 'D', 'C', '8', 'm', 'c', 0,
  /* 2256 */ 'B', 'I', 'C', '8', 'm', 'c', 0,
  /* 2263 */ 'D', 'A', 'D', 'D', '8', 'm', 'c', 0,
  /* 2271 */ 'A', 'N', 'D', '8', 'm', 'c', 0,
  /* 2278 */ 'C', 'M', 'P', '8', 'm', 'c', 0,
  /* 2285 */ 'X', 'O', 'R', '8', 'm', 'c', 0,
  /* 2292 */ 'B', 'I', 'S', '8', 'm', 'c', 0,
  /* 2299 */ 'B', 'I', 'T', '8', 'm', 'c', 0,
  /* 2306 */ 'M', 'O', 'V', '8', 'm', 'c', 0,
  /* 2313 */ 'S', 'U', 'B', '1', '6', 'r', 'c', 0,
  /* 2321 */ 'S', 'U', 'B', 'C', '1', '6', 'r', 'c', 0,
  /* 2330 */ 'A', 'D', 'D', 'C', '1', '6', 'r', 'c', 0,
  /* 2339 */ 'B', 'I', 'C', '1', '6', 'r', 'c', 0,
  /* 2347 */ 'D', 'A', 'D', 'D', '1', '6', 'r', 'c', 0,
  /* 2356 */ 'A', 'N', 'D', '1', '6', 'r', 'c', 0,
  /* 2364 */ 'C', 'M', 'P', '1', '6', 'r', 'c', 0,
  /* 2372 */ 'X', 'O', 'R', '1', '6', 'r', 'c', 0,
  /* 2380 */ 'B', 'I', 'S', '1', '6', 'r', 'c', 0,
  /* 2388 */ 'B', 'I', 'T', '1', '6', 'r', 'c', 0,
  /* 2396 */ 'M', 'O', 'V', '1', '6', 'r', 'c', 0,
  /* 2404 */ 'S', 'U', 'B', '8', 'r', 'c', 0,
  /* 2411 */ 'S', 'U', 'B', 'C', '8', 'r', 'c', 0,
  /* 2419 */ 'A', 'D', 'D', 'C', '8', 'r', 'c', 0,
  /* 2427 */ 'B', 'I', 'C', '8', 'r', 'c', 0,
  /* 2434 */ 'D', 'A', 'D', 'D', '8', 'r', 'c', 0,
  /* 2442 */ 'A', 'N', 'D', '8', 'r', 'c', 0,
  /* 2449 */ 'C', 'M', 'P', '8', 'r', 'c', 0,
  /* 2456 */ 'X', 'O', 'R', '8', 'r', 'c', 0,
  /* 2463 */ 'B', 'I', 'S', '8', 'r', 'c', 0,
  /* 2470 */ 'B', 'I', 'T', '8', 'r', 'c', 0,
  /* 2477 */ 'M', 'O', 'V', '8', 'r', 'c', 0,
  /* 2484 */ 'A', 'D', 'D', 'f', 'r', 'a', 'm', 'e', 0,
  /* 2493 */ 'P', 'U', 'S', 'H', '1', '6', 'i', 0,
  /* 2501 */ 'B', 'i', 0,
  /* 2504 */ 'C', 'A', 'L', 'L', 'i', 0,
  /* 2510 */ 'S', 'U', 'B', '1', '6', 'm', 'i', 0,
  /* 2518 */ 'S', 'U', 'B', 'C', '1', '6', 'm', 'i', 0,
  /* 2527 */ 'A', 'D', 'D', 'C', '1', '6', 'm', 'i', 0,
  /* 2536 */ 'B', 'I', 'C', '1', '6', 'm', 'i', 0,
  /* 2544 */ 'D', 'A', 'D', 'D', '1', '6', 'm', 'i', 0,
  /* 2553 */ 'A', 'N', 'D', '1', '6', 'm', 'i', 0,
  /* 2561 */ 'C', 'M', 'P', '1', '6', 'm', 'i', 0,
  /* 2569 */ 'X', 'O', 'R', '1', '6', 'm', 'i', 0,
  /* 2577 */ 'B', 'I', 'S', '1', '6', 'm', 'i', 0,
  /* 2585 */ 'B', 'I', 'T', '1', '6', 'm', 'i', 0,
  /* 2593 */ 'M', 'O', 'V', '1', '6', 'm', 'i', 0,
  /* 2601 */ 'S', 'U', 'B', '8', 'm', 'i', 0,
  /* 2608 */ 'S', 'U', 'B', 'C', '8', 'm', 'i', 0,
  /* 2616 */ 'A', 'D', 'D', 'C', '8', 'm', 'i', 0,
  /* 2624 */ 'B', 'I', 'C', '8', 'm', 'i', 0,
  /* 2631 */ 'D', 'A', 'D', 'D', '8', 'm', 'i', 0,
  /* 2639 */ 'A', 'N', 'D', '8', 'm', 'i', 0,
  /* 2646 */ 'C', 'M', 'P', '8', 'm', 'i', 0,
  /* 2653 */ 'X', 'O', 'R', '8', 'm', 'i', 0,
  /* 2660 */ 'B', 'I', 'S', '8', 'm', 'i', 0,
  /* 2667 */ 'B', 'I', 'T', '8', 'm', 'i', 0,
  /* 2674 */ 'M', 'O', 'V', '8', 'm', 'i', 0,
  /* 2681 */ 'S', 'U', 'B', '1', '6', 'r', 'i', 0,
  /* 2689 */ 'S', 'U', 'B', 'C', '1', '6', 'r', 'i', 0,
  /* 2698 */ 'A', 'D', 'D', 'C', '1', '6', 'r', 'i', 0,
  /* 2707 */ 'B', 'I', 'C', '1', '6', 'r', 'i', 0,
  /* 2715 */ 'D', 'A', 'D', 'D', '1', '6', 'r', 'i', 0,
  /* 2724 */ 'A', 'N', 'D', '1', '6', 'r', 'i', 0,
  /* 2732 */ 'C', 'M', 'P', '1', '6', 'r', 'i', 0,
  /* 2740 */ 'X', 'O', 'R', '1', '6', 'r', 'i', 0,
  /* 2748 */ 'B', 'I', 'S', '1', '6', 'r', 'i', 0,
  /* 2756 */ 'B', 'I', 'T', '1', '6', 'r', 'i', 0,
  /* 2764 */ 'M', 'O', 'V', '1', '6', 'r', 'i', 0,
  /* 2772 */ 'S', 'U', 'B', '8', 'r', 'i', 0,
  /* 2779 */ 'S', 'U', 'B', 'C', '8', 'r', 'i', 0,
  /* 2787 */ 'A', 'D', 'D', 'C', '8', 'r', 'i', 0,
  /* 2795 */ 'B', 'I', 'C', '8', 'r', 'i', 0,
  /* 2802 */ 'D', 'A', 'D', 'D', '8', 'r', 'i', 0,
  /* 2810 */ 'A', 'N', 'D', '8', 'r', 'i', 0,
  /* 2817 */ 'C', 'M', 'P', '8', 'r', 'i', 0,
  /* 2824 */ 'X', 'O', 'R', '8', 'r', 'i', 0,
  /* 2831 */ 'B', 'I', 'S', '8', 'r', 'i', 0,
  /* 2838 */ 'B', 'I', 'T', '8', 'r', 'i', 0,
  /* 2845 */ 'M', 'O', 'V', '8', 'r', 'i', 0,
  /* 2852 */ 'R', 'R', 'A', '1', '6', 'm', 0,
  /* 2859 */ 'S', 'W', 'P', 'B', '1', '6', 'm', 0,
  /* 2867 */ 'R', 'R', 'C', '1', '6', 'm', 0,
  /* 2874 */ 'S', 'E', 'X', 'T', '1', '6', 'm', 0,
  /* 2882 */ 'R', 'R', 'A', '8', 'm', 0,
  /* 2888 */ 'R', 'R', 'C', '8', 'm', 0,
  /* 2894 */ 'B', 'm', 0,
  /* 2897 */ 'C', 'A', 'L', 'L', 'm', 0,
  /* 2903 */ 'S', 'U', 'B', '1', '6', 'm', 'm', 0,
  /* 2911 */ 'S', 'U', 'B', 'C', '1', '6', 'm', 'm', 0,
  /* 2920 */ 'A', 'D', 'D', 'C', '1', '6', 'm', 'm', 0,
  /* 2929 */ 'B', 'I', 'C', '1', '6', 'm', 'm', 0,
  /* 2937 */ 'D', 'A', 'D', 'D', '1', '6', 'm', 'm', 0,
  /* 2946 */ 'A', 'N', 'D', '1', '6', 'm', 'm', 0,
  /* 2954 */ 'C', 'M', 'P', '1', '6', 'm', 'm', 0,
  /* 2962 */ 'X', 'O', 'R', '1', '6', 'm', 'm', 0,
  /* 2970 */ 'B', 'I', 'S', '1', '6', 'm', 'm', 0,
  /* 2978 */ 'B', 'I', 'T', '1', '6', 'm', 'm', 0,
  /* 2986 */ 'M', 'O', 'V', '1', '6', 'm', 'm', 0,
  /* 2994 */ 'S', 'U', 'B', '8', 'm', 'm', 0,
  /* 3001 */ 'S', 'U', 'B', 'C', '8', 'm', 'm', 0,
  /* 3009 */ 'A', 'D', 'D', 'C', '8', 'm', 'm', 0,
  /* 3017 */ 'B', 'I', 'C', '8', 'm', 'm', 0,
  /* 3024 */ 'D', 'A', 'D', 'D', '8', 'm', 'm', 0,
  /* 3032 */ 'A', 'N', 'D', '8', 'm', 'm', 0,
  /* 3039 */ 'C', 'M', 'P', '8', 'm', 'm', 0,
  /* 3046 */ 'X', 'O', 'R', '8', 'm', 'm', 0,
  /* 3053 */ 'B', 'I', 'S', '8', 'm', 'm', 0,
  /* 3060 */ 'B', 'I', 'T', '8', 'm', 'm', 0,
  /* 3067 */ 'M', 'O', 'V', '8', 'm', 'm', 0,
  /* 3074 */ 'S', 'U', 'B', '1', '6', 'r', 'm', 0,
  /* 3082 */ 'S', 'U', 'B', 'C', '1', '6', 'r', 'm', 0,
  /* 3091 */ 'A', 'D', 'D', 'C', '1', '6', 'r', 'm', 0,
  /* 3100 */ 'B', 'I', 'C', '1', '6', 'r', 'm', 0,
  /* 3108 */ 'D', 'A', 'D', 'D', '1', '6', 'r', 'm', 0,
  /* 3117 */ 'A', 'N', 'D', '1', '6', 'r', 'm', 0,
  /* 3125 */ 'C', 'M', 'P', '1', '6', 'r', 'm', 0,
  /* 3133 */ 'X', 'O', 'R', '1', '6', 'r', 'm', 0,
  /* 3141 */ 'B', 'I', 'S', '1', '6', 'r', 'm', 0,
  /* 3149 */ 'B', 'I', 'T', '1', '6', 'r', 'm', 0,
  /* 3157 */ 'M', 'O', 'V', '1', '6', 'r', 'm', 0,
  /* 3165 */ 'S', 'U', 'B', '8', 'r', 'm', 0,
  /* 3172 */ 'S', 'U', 'B', 'C', '8', 'r', 'm', 0,
  /* 3180 */ 'A', 'D', 'D', 'C', '8', 'r', 'm', 0,
  /* 3188 */ 'B', 'I', 'C', '8', 'r', 'm', 0,
  /* 3195 */ 'D', 'A', 'D', 'D', '8', 'r', 'm', 0,
  /* 3203 */ 'A', 'N', 'D', '8', 'r', 'm', 0,
  /* 3210 */ 'C', 'M', 'P', '8', 'r', 'm', 0,
  /* 3217 */ 'X', 'O', 'R', '8', 'r', 'm', 0,
  /* 3224 */ 'B', 'I', 'S', '8', 'r', 'm', 0,
  /* 3231 */ 'B', 'I', 'T', '8', 'r', 'm', 0,
  /* 3238 */ 'M', 'O', 'V', '8', 'r', 'm', 0,
  /* 3245 */ 'R', 'R', 'A', '1', '6', 'n', 0,
  /* 3252 */ 'S', 'W', 'P', 'B', '1', '6', 'n', 0,
  /* 3260 */ 'R', 'R', 'C', '1', '6', 'n', 0,
  /* 3267 */ 'S', 'E', 'X', 'T', '1', '6', 'n', 0,
  /* 3275 */ 'R', 'R', 'A', '8', 'n', 0,
  /* 3281 */ 'R', 'R', 'C', '8', 'n', 0,
  /* 3287 */ 'C', 'A', 'L', 'L', 'n', 0,
  /* 3293 */ 'S', 'U', 'B', '1', '6', 'm', 'n', 0,
  /* 3301 */ 'S', 'U', 'B', 'C', '1', '6', 'm', 'n', 0,
  /* 3310 */ 'A', 'D', 'D', 'C', '1', '6', 'm', 'n', 0,
  /* 3319 */ 'B', 'I', 'C', '1', '6', 'm', 'n', 0,
  /* 3327 */ 'D', 'A', 'D', 'D', '1', '6', 'm', 'n', 0,
  /* 3336 */ 'A', 'N', 'D', '1', '6', 'm', 'n', 0,
  /* 3344 */ 'C', 'M', 'P', '1', '6', 'm', 'n', 0,
  /* 3352 */ 'X', 'O', 'R', '1', '6', 'm', 'n', 0,
  /* 3360 */ 'B', 'I', 'S', '1', '6', 'm', 'n', 0,
  /* 3368 */ 'B', 'I', 'T', '1', '6', 'm', 'n', 0,
  /* 3376 */ 'M', 'O', 'V', '1', '6', 'm', 'n', 0,
  /* 3384 */ 'S', 'U', 'B', '8', 'm', 'n', 0,
  /* 3391 */ 'S', 'U', 'B', 'C', '8', 'm', 'n', 0,
  /* 3399 */ 'A', 'D', 'D', 'C', '8', 'm', 'n', 0,
  /* 3407 */ 'B', 'I', 'C', '8', 'm', 'n', 0,
  /* 3414 */ 'D', 'A', 'D', 'D', '8', 'm', 'n', 0,
  /* 3422 */ 'A', 'N', 'D', '8', 'm', 'n', 0,
  /* 3429 */ 'C', 'M', 'P', '8', 'm', 'n', 0,
  /* 3436 */ 'X', 'O', 'R', '8', 'm', 'n', 0,
  /* 3443 */ 'B', 'I', 'S', '8', 'm', 'n', 0,
  /* 3450 */ 'B', 'I', 'T', '8', 'm', 'n', 0,
  /* 3457 */ 'M', 'O', 'V', '8', 'm', 'n', 0,
  /* 3464 */ 'S', 'U', 'B', '1', '6', 'r', 'n', 0,
  /* 3472 */ 'S', 'U', 'B', 'C', '1', '6', 'r', 'n', 0,
  /* 3481 */ 'A', 'D', 'D', 'C', '1', '6', 'r', 'n', 0,
  /* 3490 */ 'B', 'I', 'C', '1', '6', 'r', 'n', 0,
  /* 3498 */ 'D', 'A', 'D', 'D', '1', '6', 'r', 'n', 0,
  /* 3507 */ 'A', 'N', 'D', '1', '6', 'r', 'n', 0,
  /* 3515 */ 'C', 'M', 'P', '1', '6', 'r', 'n', 0,
  /* 3523 */ 'X', 'O', 'R', '1', '6', 'r', 'n', 0,
  /* 3531 */ 'B', 'I', 'S', '1', '6', 'r', 'n', 0,
  /* 3539 */ 'B', 'I', 'T', '1', '6', 'r', 'n', 0,
  /* 3547 */ 'M', 'O', 'V', '1', '6', 'r', 'n', 0,
  /* 3555 */ 'S', 'U', 'B', '8', 'r', 'n', 0,
  /* 3562 */ 'S', 'U', 'B', 'C', '8', 'r', 'n', 0,
  /* 3570 */ 'A', 'D', 'D', 'C', '8', 'r', 'n', 0,
  /* 3578 */ 'B', 'I', 'C', '8', 'r', 'n', 0,
  /* 3585 */ 'D', 'A', 'D', 'D', '8', 'r', 'n', 0,
  /* 3593 */ 'A', 'N', 'D', '8', 'r', 'n', 0,
  /* 3600 */ 'C', 'M', 'P', '8', 'r', 'n', 0,
  /* 3607 */ 'X', 'O', 'R', '8', 'r', 'n', 0,
  /* 3614 */ 'B', 'I', 'S', '8', 'r', 'n', 0,
  /* 3621 */ 'B', 'I', 'T', '8', 'r', 'n', 0,
  /* 3628 */ 'M', 'O', 'V', '8', 'r', 'n', 0,
  /* 3635 */ 'R', 'R', 'A', '1', '6', 'p', 0,
  /* 3642 */ 'S', 'W', 'P', 'B', '1', '6', 'p', 0,
  /* 3650 */ 'R', 'R', 'C', '1', '6', 'p', 0,
  /* 3657 */ 'S', 'E', 'X', 'T', '1', '6', 'p', 0,
  /* 3665 */ 'R', 'R', 'A', '8', 'p', 0,
  /* 3671 */ 'R', 'R', 'C', '8', 'p', 0,
  /* 3677 */ 'C', 'A', 'L', 'L', 'p', 0,
  /* 3683 */ 'S', 'U', 'B', '1', '6', 'm', 'p', 0,
  /* 3691 */ 'S', 'U', 'B', 'C', '1', '6', 'm', 'p', 0,
  /* 3700 */ 'A', 'D', 'D', 'C', '1', '6', 'm', 'p', 0,
  /* 3709 */ 'B', 'I', 'C', '1', '6', 'm', 'p', 0,
  /* 3717 */ 'D', 'A', 'D', 'D', '1', '6', 'm', 'p', 0,
  /* 3726 */ 'A', 'N', 'D', '1', '6', 'm', 'p', 0,
  /* 3734 */ 'C', 'M', 'P', '1', '6', 'm', 'p', 0,
  /* 3742 */ 'X', 'O', 'R', '1', '6', 'm', 'p', 0,
  /* 3750 */ 'B', 'I', 'S', '1', '6', 'm', 'p', 0,
  /* 3758 */ 'B', 'I', 'T', '1', '6', 'm', 'p', 0,
  /* 3766 */ 'S', 'U', 'B', '8', 'm', 'p', 0,
  /* 3773 */ 'S', 'U', 'B', 'C', '8', 'm', 'p', 0,
  /* 3781 */ 'A', 'D', 'D', 'C', '8', 'm', 'p', 0,
  /* 3789 */ 'B', 'I', 'C', '8', 'm', 'p', 0,
  /* 3796 */ 'D', 'A', 'D', 'D', '8', 'm', 'p', 0,
  /* 3804 */ 'A', 'N', 'D', '8', 'm', 'p', 0,
  /* 3811 */ 'C', 'M', 'P', '8', 'm', 'p', 0,
  /* 3818 */ 'X', 'O', 'R', '8', 'm', 'p', 0,
  /* 3825 */ 'B', 'I', 'S', '8', 'm', 'p', 0,
  /* 3832 */ 'B', 'I', 'T', '8', 'm', 'p', 0,
  /* 3839 */ 'S', 'U', 'B', '1', '6', 'r', 'p', 0,
  /* 3847 */ 'S', 'U', 'B', 'C', '1', '6', 'r', 'p', 0,
  /* 3856 */ 'A', 'D', 'D', 'C', '1', '6', 'r', 'p', 0,
  /* 3865 */ 'B', 'I', 'C', '1', '6', 'r', 'p', 0,
  /* 3873 */ 'D', 'A', 'D', 'D', '1', '6', 'r', 'p', 0,
  /* 3882 */ 'A', 'N', 'D', '1', '6', 'r', 'p', 0,
  /* 3890 */ 'C', 'M', 'P', '1', '6', 'r', 'p', 0,
  /* 3898 */ 'X', 'O', 'R', '1', '6', 'r', 'p', 0,
  /* 3906 */ 'B', 'I', 'S', '1', '6', 'r', 'p', 0,
  /* 3914 */ 'B', 'I', 'T', '1', '6', 'r', 'p', 0,
  /* 3922 */ 'M', 'O', 'V', '1', '6', 'r', 'p', 0,
  /* 3930 */ 'S', 'U', 'B', '8', 'r', 'p', 0,
  /* 3937 */ 'S', 'U', 'B', 'C', '8', 'r', 'p', 0,
  /* 3945 */ 'A', 'D', 'D', 'C', '8', 'r', 'p', 0,
  /* 3953 */ 'B', 'I', 'C', '8', 'r', 'p', 0,
  /* 3960 */ 'D', 'A', 'D', 'D', '8', 'r', 'p', 0,
  /* 3968 */ 'A', 'N', 'D', '8', 'r', 'p', 0,
  /* 3975 */ 'C', 'M', 'P', '8', 'r', 'p', 0,
  /* 3982 */ 'X', 'O', 'R', '8', 'r', 'p', 0,
  /* 3989 */ 'B', 'I', 'S', '8', 'r', 'p', 0,
  /* 3996 */ 'B', 'I', 'T', '8', 'r', 'p', 0,
  /* 4003 */ 'M', 'O', 'V', '8', 'r', 'p', 0,
  /* 4010 */ 'R', 'R', 'A', '1', '6', 'r', 0,
  /* 4017 */ 'S', 'W', 'P', 'B', '1', '6', 'r', 0,
  /* 4025 */ 'R', 'R', 'C', '1', '6', 'r', 0,
  /* 4032 */ 'P', 'U', 'S', 'H', '1', '6', 'r', 0,
  /* 4040 */ 'P', 'O', 'P', '1', '6', 'r', 0,
  /* 4047 */ 'S', 'E', 'X', 'T', '1', '6', 'r', 0,
  /* 4055 */ 'Z', 'E', 'X', 'T', '1', '6', 'r', 0,
  /* 4063 */ 'R', 'R', 'A', '8', 'r', 0,
  /* 4069 */ 'R', 'R', 'C', '8', 'r', 0,
  /* 4075 */ 'P', 'U', 'S', 'H', '8', 'r', 0,
  /* 4082 */ 'B', 'r', 0,
  /* 4085 */ 'C', 'A', 'L', 'L', 'r', 0,
  /* 4091 */ 'S', 'U', 'B', '1', '6', 'm', 'r', 0,
  /* 4099 */ 'S', 'U', 'B', 'C', '1', '6', 'm', 'r', 0,
  /* 4108 */ 'A', 'D', 'D', 'C', '1', '6', 'm', 'r', 0,
  /* 4117 */ 'B', 'I', 'C', '1', '6', 'm', 'r', 0,
  /* 4125 */ 'D', 'A', 'D', 'D', '1', '6', 'm', 'r', 0,
  /* 4134 */ 'A', 'N', 'D', '1', '6', 'm', 'r', 0,
  /* 4142 */ 'C', 'M', 'P', '1', '6', 'm', 'r', 0,
  /* 4150 */ 'X', 'O', 'R', '1', '6', 'm', 'r', 0,
  /* 4158 */ 'B', 'I', 'S', '1', '6', 'm', 'r', 0,
  /* 4166 */ 'B', 'I', 'T', '1', '6', 'm', 'r', 0,
  /* 4174 */ 'M', 'O', 'V', '1', '6', 'm', 'r', 0,
  /* 4182 */ 'S', 'U', 'B', '8', 'm', 'r', 0,
  /* 4189 */ 'S', 'U', 'B', 'C', '8', 'm', 'r', 0,
  /* 4197 */ 'A', 'D', 'D', 'C', '8', 'm', 'r', 0,
  /* 4205 */ 'B', 'I', 'C', '8', 'm', 'r', 0,
  /* 4212 */ 'D', 'A', 'D', 'D', '8', 'm', 'r', 0,
  /* 4220 */ 'A', 'N', 'D', '8', 'm', 'r', 0,
  /* 4227 */ 'C', 'M', 'P', '8', 'm', 'r', 0,
  /* 4234 */ 'X', 'O', 'R', '8', 'm', 'r', 0,
  /* 4241 */ 'B', 'I', 'S', '8', 'm', 'r', 0,
  /* 4248 */ 'B', 'I', 'T', '8', 'm', 'r', 0,
  /* 4255 */ 'M', 'O', 'V', '8', 'm', 'r', 0,
  /* 4262 */ 'S', 'U', 'B', '1', '6', 'r', 'r', 0,
  /* 4270 */ 'S', 'U', 'B', 'C', '1', '6', 'r', 'r', 0,
  /* 4279 */ 'A', 'D', 'D', 'C', '1', '6', 'r', 'r', 0,
  /* 4288 */ 'B', 'I', 'C', '1', '6', 'r', 'r', 0,
  /* 4296 */ 'D', 'A', 'D', 'D', '1', '6', 'r', 'r', 0,
  /* 4305 */ 'A', 'N', 'D', '1', '6', 'r', 'r', 0,
  /* 4313 */ 'C', 'M', 'P', '1', '6', 'r', 'r', 0,
  /* 4321 */ 'X', 'O', 'R', '1', '6', 'r', 'r', 0,
  /* 4329 */ 'B', 'I', 'S', '1', '6', 'r', 'r', 0,
  /* 4337 */ 'B', 'I', 'T', '1', '6', 'r', 'r', 0,
  /* 4345 */ 'M', 'O', 'V', '1', '6', 'r', 'r', 0,
  /* 4353 */ 'S', 'U', 'B', '8', 'r', 'r', 0,
  /* 4360 */ 'S', 'U', 'B', 'C', '8', 'r', 'r', 0,
  /* 4368 */ 'A', 'D', 'D', 'C', '8', 'r', 'r', 0,
  /* 4376 */ 'B', 'I', 'C', '8', 'r', 'r', 0,
  /* 4383 */ 'D', 'A', 'D', 'D', '8', 'r', 'r', 0,
  /* 4391 */ 'A', 'N', 'D', '8', 'r', 'r', 0,
  /* 4398 */ 'C', 'M', 'P', '8', 'r', 'r', 0,
  /* 4405 */ 'X', 'O', 'R', '8', 'r', 'r', 0,
  /* 4412 */ 'B', 'I', 'S', '8', 'r', 'r', 0,
  /* 4419 */ 'B', 'I', 'T', '8', 'r', 'r', 0,
  /* 4426 */ 'M', 'O', 'V', '8', 'r', 'r', 0,
};

extern const unsigned MSP430InstrNameIndices[] = {
    868U, 1104U, 1416U, 1222U, 925U, 906U, 934U, 1065U, 
    745U, 760U, 725U, 787U, 1657U, 646U, 915U, 517U, 
    2115U, 589U, 1936U, 436U, 1303U, 1053U, 1883U, 476U, 
    1872U, 596U, 1377U, 1364U, 1442U, 1763U, 1777U, 985U, 
    1032U, 1005U, 951U, 365U, 140U, 1077U, 2033U, 2040U, 
    1090U, 1097U, 414U, 1563U, 1541U, 723U, 866U, 2101U, 
    656U, 1731U, 1601U, 1951U, 1618U, 1509U, 214U, 1640U, 
    1894U, 1583U, 1968U, 188U, 458U, 1467U, 334U, 278U, 
    308U, 319U, 259U, 289U, 625U, 609U, 1674U, 801U, 
    818U, 381U, 146U, 420U, 397U, 1568U, 1547U, 2085U, 
    1199U, 2068U, 1182U, 348U, 123U, 509U, 449U, 1750U, 
    166U, 1704U, 2010U, 206U, 1861U, 1849U, 1926U, 842U, 
    2003U, 774U, 2019U, 971U, 1493U, 1486U, 1345U, 1338U, 
    1741U, 1279U, 538U, 1263U, 501U, 1271U, 530U, 1255U, 
    493U, 1295U, 1287U, 858U, 850U, 341U, 116U, 1070U, 
    110U, 252U, 2026U, 1083U, 2047U, 1404U, 17U, 835U, 
    9U, 0U, 738U, 1995U, 178U, 872U, 886U, 1320U, 
    1329U, 1594U, 1156U, 671U, 1136U, 1146U, 546U, 561U, 
    1114U, 1125U, 371U, 895U, 1168U, 2054U, 1175U, 2061U, 
    1411U, 1801U, 1829U, 1808U, 1524U, 2127U, 705U, 2120U, 
    687U, 1356U, 1312U, 633U, 977U, 1633U, 1215U, 1960U, 
    1500U, 1905U, 1913U, 1978U, 1429U, 576U, 235U, 2177U, 
    2545U, 2938U, 3328U, 3718U, 4126U, 2348U, 2716U, 3109U, 
    3499U, 3874U, 4297U, 2264U, 2632U, 3025U, 3415U, 3797U, 
    4213U, 2435U, 2803U, 3196U, 3586U, 3961U, 4384U, 2159U, 
    2527U, 2920U, 3310U, 3700U, 4108U, 2330U, 2698U, 3091U, 
    3481U, 3856U, 4279U, 2248U, 2616U, 3009U, 3399U, 3781U, 
    4197U, 2419U, 2787U, 3180U, 3570U, 3945U, 4368U, 2484U, 
    1238U, 1389U, 2185U, 2553U, 2946U, 3336U, 3726U, 4134U, 
    2356U, 2724U, 3117U, 3507U, 3882U, 4305U, 2271U, 2639U, 
    3032U, 3422U, 3804U, 4220U, 2442U, 2810U, 3203U, 3593U, 
    3968U, 4391U, 2168U, 2536U, 2929U, 3319U, 3709U, 4117U, 
    2339U, 2707U, 3100U, 3490U, 3865U, 4288U, 2256U, 2624U, 
    3017U, 3407U, 3789U, 4205U, 2427U, 2795U, 3188U, 3578U, 
    3953U, 4376U, 2209U, 2577U, 2970U, 3360U, 3750U, 4158U, 
    2380U, 2748U, 3141U, 3531U, 3906U, 4329U, 2292U, 2660U, 
    3053U, 3443U, 3825U, 4241U, 2463U, 2831U, 3224U, 3614U, 
    3989U, 4412U, 2217U, 2585U, 2978U, 3368U, 3758U, 4166U, 
    2388U, 2756U, 3149U, 3539U, 3914U, 4337U, 2299U, 2667U, 
    3060U, 3450U, 3832U, 4248U, 2470U, 2838U, 3231U, 3621U, 
    3996U, 4419U, 2501U, 2894U, 4082U, 2504U, 2897U, 3287U, 
    3677U, 4085U, 2193U, 2561U, 2954U, 3344U, 3734U, 4142U, 
    2364U, 2732U, 3125U, 3515U, 3890U, 4313U, 2278U, 2646U, 
    3039U, 3429U, 3811U, 4227U, 2449U, 2817U, 3210U, 3600U, 
    3975U, 4398U, 2176U, 2544U, 2937U, 3327U, 3717U, 4125U, 
    2347U, 2715U, 3108U, 3498U, 3873U, 4296U, 2263U, 2631U, 
    3024U, 3414U, 3796U, 4212U, 2434U, 2802U, 3195U, 3585U, 
    3960U, 4383U, 162U, 1352U, 2225U, 2593U, 2986U, 3376U, 
    4174U, 2396U, 2764U, 3157U, 3547U, 3922U, 4345U, 2306U, 
    2674U, 3067U, 3457U, 4255U, 2477U, 2845U, 3238U, 3628U, 
    4003U, 4426U, 80U, 91U, 4040U, 2134U, 2493U, 4032U, 
    4075U, 1773U, 881U, 2852U, 3245U, 3635U, 4010U, 2882U, 
    3275U, 3665U, 4063U, 2867U, 3260U, 3650U, 4025U, 2888U, 
    3281U, 3671U, 4069U, 31U, 64U, 2874U, 3267U, 3657U, 
    4047U, 2142U, 2510U, 2903U, 3293U, 3683U, 4091U, 2313U, 
    2681U, 3074U, 3464U, 3839U, 4262U, 2233U, 2601U, 2994U, 
    3384U, 3766U, 4182U, 2404U, 2772U, 3165U, 3555U, 3930U, 
    4353U, 2150U, 2518U, 2911U, 3301U, 3691U, 4099U, 2321U, 
    2689U, 3082U, 3472U, 3847U, 4270U, 2240U, 2608U, 3001U, 
    3391U, 3773U, 4189U, 2411U, 2779U, 3172U, 3562U, 3937U, 
    4360U, 2859U, 3252U, 3642U, 4017U, 50U, 102U, 38U, 
    70U, 25U, 59U, 44U, 75U, 2201U, 2569U, 2962U, 
    3352U, 3742U, 4150U, 2372U, 2740U, 3133U, 3523U, 3898U, 
    4321U, 2285U, 2653U, 3046U, 3436U, 3818U, 4234U, 2456U, 
    2824U, 3217U, 3607U, 3982U, 4405U, 4055U, 
};

static inline void InitMSP430MCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, 518);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MSP430GenInstrInfo : public TargetInstrInfo {
  explicit MSP430GenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~MSP430GenInstrInfo() override = default;

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
extern const MCInstrDesc MSP430Insts[];
extern const unsigned MSP430InstrNameIndices[];
extern const char MSP430InstrNameData[];
MSP430GenInstrInfo::MSP430GenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, 518);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace MSP430 {
namespace OpName {
enum {
OPERAND_LAST
};
} // end namespace OpName
} // end namespace MSP430
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace MSP430 {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace MSP430
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace MSP430 {
namespace OpTypes {
enum OperandType {
  cc = 0,
  cg16imm = 1,
  cg8imm = 2,
  f32imm = 3,
  f64imm = 4,
  i16imm = 5,
  i1imm = 6,
  i32imm = 7,
  i64imm = 8,
  i8imm = 9,
  indreg = 10,
  jmptarget = 11,
  memdst = 12,
  memsrc = 13,
  postreg = 14,
  ptype0 = 15,
  ptype1 = 16,
  ptype2 = 17,
  ptype3 = 18,
  ptype4 = 19,
  ptype5 = 20,
  type0 = 21,
  type1 = 22,
  type2 = 23,
  type3 = 24,
  type4 = 25,
  type5 = 26,
  untyped_imm_0 = 27,
  GR16 = 28,
  GR8 = 29,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace MSP430 {
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
    429,
    432,
    436,
    439,
    442,
    445,
    448,
    451,
    455,
    458,
    462,
    465,
    468,
    471,
    475,
    478,
    481,
    484,
    487,
    490,
    494,
    497,
    501,
    504,
    507,
    510,
    514,
    517,
    520,
    523,
    526,
    529,
    533,
    536,
    540,
    543,
    546,
    549,
    553,
    556,
    559,
    562,
    565,
    568,
    572,
    575,
    579,
    582,
    585,
    587,
    589,
    592,
    595,
    599,
    602,
    605,
    608,
    611,
    614,
    618,
    621,
    625,
    628,
    631,
    634,
    638,
    641,
    644,
    647,
    650,
    653,
    657,
    660,
    664,
    667,
    670,
    673,
    677,
    680,
    683,
    686,
    689,
    692,
    696,
    699,
    703,
    706,
    709,
    712,
    716,
    719,
    722,
    725,
    728,
    731,
    735,
    738,
    742,
    745,
    748,
    751,
    755,
    758,
    761,
    764,
    767,
    770,
    774,
    777,
    781,
    784,
    787,
    790,
    794,
    797,
    800,
    803,
    806,
    809,
    813,
    816,
    820,
    823,
    826,
    829,
    833,
    836,
    839,
    842,
    844,
    846,
    849,
    851,
    853,
    855,
    858,
    861,
    865,
    868,
    871,
    874,
    876,
    878,
    881,
    883,
    885,
    887,
    888,
    890,
    891,
    892,
    894,
    895,
    896,
    897,
    900,
    903,
    907,
    910,
    913,
    916,
    918,
    920,
    923,
    925,
    927,
    929,
    932,
    935,
    939,
    942,
    945,
    948,
    950,
    952,
    955,
    957,
    959,
    961,
    964,
    967,
    971,
    974,
    977,
    980,
    983,
    986,
    990,
    993,
    997,
    1000,
    1003,
    1006,
    1010,
    1013,
    1016,
    1019,
    1022,
    1025,
    1029,
    1032,
    1036,
    1039,
    1041,
    1042,
    1045,
    1048,
    1052,
    1055,
    1058,
    1060,
    1062,
    1065,
    1067,
    1070,
    1072,
    1075,
    1078,
    1082,
    1085,
    1088,
    1090,
    1092,
    1095,
    1097,
    1100,
    1102,
    1105,
    1107,
    1108,
    1109,
    1110,
    1111,
    1112,
    1112,
    1112,
    1114,
    1115,
    1116,
    1118,
    1120,
    1121,
    1122,
    1124,
    1126,
    1127,
    1128,
    1130,
    1132,
    1133,
    1134,
    1136,
    1138,
    1140,
    1142,
    1143,
    1144,
    1146,
    1149,
    1152,
    1156,
    1159,
    1162,
    1165,
    1168,
    1171,
    1175,
    1178,
    1182,
    1185,
    1188,
    1191,
    1195,
    1198,
    1201,
    1204,
    1207,
    1210,
    1214,
    1217,
    1221,
    1224,
    1227,
    1230,
    1234,
    1237,
    1240,
    1243,
    1246,
    1249,
    1253,
    1256,
    1260,
    1263,
    1266,
    1269,
    1273,
    1276,
    1279,
    1282,
    1285,
    1288,
    1292,
    1295,
    1299,
    1302,
    1304,
    1305,
    1306,
    1308,
    1312,
    1316,
    1319,
    1322,
    1325,
    1328,
    1331,
    1334,
    1337,
    1340,
    1344,
    1347,
    1350,
    1353,
    1356,
    1359,
    1363,
    1366,
    1370,
    1373,
    1376,
    1379,
    1383,
    1386,
    1389,
    1392,
    1395,
    1398,
    1402,
    1405,
    1409,
    1412,
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
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, 
    OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, 
    OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, 
    OpTypes::GR16, 
    OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::jmptarget, OpTypes::cc, 
    OpTypes::jmptarget, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR8, 
    OpTypes::GR16, 
    OpTypes::cg16imm, 
    OpTypes::i16imm, 
    OpTypes::GR16, 
    OpTypes::GR8, 
    /**/
    /**/
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, 
    OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, 
    OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, 
    OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, 
    OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, 
    OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, 
    OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::GR16, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE


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

namespace SP {
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
    GETPCX	= 177,
    SELECT_CC_DFP_FCC	= 178,
    SELECT_CC_DFP_ICC	= 179,
    SELECT_CC_FP_FCC	= 180,
    SELECT_CC_FP_ICC	= 181,
    SELECT_CC_Int_FCC	= 182,
    SELECT_CC_Int_ICC	= 183,
    SELECT_CC_QFP_FCC	= 184,
    SELECT_CC_QFP_ICC	= 185,
    SET	= 186,
    ADDCCri	= 187,
    ADDCCrr	= 188,
    ADDCri	= 189,
    ADDCrr	= 190,
    ADDEri	= 191,
    ADDErr	= 192,
    ADDXC	= 193,
    ADDXCCC	= 194,
    ADDXri	= 195,
    ADDXrr	= 196,
    ADDri	= 197,
    ADDrr	= 198,
    ALIGNADDR	= 199,
    ALIGNADDRL	= 200,
    ANDCCri	= 201,
    ANDCCrr	= 202,
    ANDNCCri	= 203,
    ANDNCCrr	= 204,
    ANDNri	= 205,
    ANDNrr	= 206,
    ANDXNrr	= 207,
    ANDXri	= 208,
    ANDXrr	= 209,
    ANDri	= 210,
    ANDrr	= 211,
    ARRAY16	= 212,
    ARRAY32	= 213,
    ARRAY8	= 214,
    BA	= 215,
    BCOND	= 216,
    BCONDA	= 217,
    BINDri	= 218,
    BINDrr	= 219,
    BMASK	= 220,
    BPFCC	= 221,
    BPFCCA	= 222,
    BPFCCANT	= 223,
    BPFCCNT	= 224,
    BPGEZapn	= 225,
    BPGEZapt	= 226,
    BPGEZnapn	= 227,
    BPGEZnapt	= 228,
    BPGZapn	= 229,
    BPGZapt	= 230,
    BPGZnapn	= 231,
    BPGZnapt	= 232,
    BPICC	= 233,
    BPICCA	= 234,
    BPICCANT	= 235,
    BPICCNT	= 236,
    BPLEZapn	= 237,
    BPLEZapt	= 238,
    BPLEZnapn	= 239,
    BPLEZnapt	= 240,
    BPLZapn	= 241,
    BPLZapt	= 242,
    BPLZnapn	= 243,
    BPLZnapt	= 244,
    BPNZapn	= 245,
    BPNZapt	= 246,
    BPNZnapn	= 247,
    BPNZnapt	= 248,
    BPXCC	= 249,
    BPXCCA	= 250,
    BPXCCANT	= 251,
    BPXCCNT	= 252,
    BPZapn	= 253,
    BPZapt	= 254,
    BPZnapn	= 255,
    BPZnapt	= 256,
    BSHUFFLE	= 257,
    CALL	= 258,
    CALLri	= 259,
    CALLrr	= 260,
    CASAasi10	= 261,
    CASArr	= 262,
    CASXrr	= 263,
    CASrr	= 264,
    CBCOND	= 265,
    CBCONDA	= 266,
    CMASK16	= 267,
    CMASK32	= 268,
    CMASK8	= 269,
    CMPri	= 270,
    CMPrr	= 271,
    EDGE16	= 272,
    EDGE16L	= 273,
    EDGE16LN	= 274,
    EDGE16N	= 275,
    EDGE32	= 276,
    EDGE32L	= 277,
    EDGE32LN	= 278,
    EDGE32N	= 279,
    EDGE8	= 280,
    EDGE8L	= 281,
    EDGE8LN	= 282,
    EDGE8N	= 283,
    FABSD	= 284,
    FABSQ	= 285,
    FABSS	= 286,
    FADDD	= 287,
    FADDQ	= 288,
    FADDS	= 289,
    FALIGNADATA	= 290,
    FAND	= 291,
    FANDNOT1	= 292,
    FANDNOT1S	= 293,
    FANDNOT2	= 294,
    FANDNOT2S	= 295,
    FANDS	= 296,
    FBCOND	= 297,
    FBCONDA	= 298,
    FCHKSM16	= 299,
    FCMPD	= 300,
    FCMPEQ16	= 301,
    FCMPEQ32	= 302,
    FCMPGT16	= 303,
    FCMPGT32	= 304,
    FCMPLE16	= 305,
    FCMPLE32	= 306,
    FCMPNE16	= 307,
    FCMPNE32	= 308,
    FCMPQ	= 309,
    FCMPS	= 310,
    FDIVD	= 311,
    FDIVQ	= 312,
    FDIVS	= 313,
    FDMULQ	= 314,
    FDTOI	= 315,
    FDTOQ	= 316,
    FDTOS	= 317,
    FDTOX	= 318,
    FEXPAND	= 319,
    FHADDD	= 320,
    FHADDS	= 321,
    FHSUBD	= 322,
    FHSUBS	= 323,
    FITOD	= 324,
    FITOQ	= 325,
    FITOS	= 326,
    FLCMPD	= 327,
    FLCMPS	= 328,
    FLUSH	= 329,
    FLUSHW	= 330,
    FLUSHri	= 331,
    FLUSHrr	= 332,
    FMEAN16	= 333,
    FMOVD	= 334,
    FMOVD_FCC	= 335,
    FMOVD_ICC	= 336,
    FMOVD_XCC	= 337,
    FMOVQ	= 338,
    FMOVQ_FCC	= 339,
    FMOVQ_ICC	= 340,
    FMOVQ_XCC	= 341,
    FMOVRGEZD	= 342,
    FMOVRGEZQ	= 343,
    FMOVRGEZS	= 344,
    FMOVRGZD	= 345,
    FMOVRGZQ	= 346,
    FMOVRGZS	= 347,
    FMOVRLEZD	= 348,
    FMOVRLEZQ	= 349,
    FMOVRLEZS	= 350,
    FMOVRLZD	= 351,
    FMOVRLZQ	= 352,
    FMOVRLZS	= 353,
    FMOVRNZD	= 354,
    FMOVRNZQ	= 355,
    FMOVRNZS	= 356,
    FMOVRZD	= 357,
    FMOVRZQ	= 358,
    FMOVRZS	= 359,
    FMOVS	= 360,
    FMOVS_FCC	= 361,
    FMOVS_ICC	= 362,
    FMOVS_XCC	= 363,
    FMUL8SUX16	= 364,
    FMUL8ULX16	= 365,
    FMUL8X16	= 366,
    FMUL8X16AL	= 367,
    FMUL8X16AU	= 368,
    FMULD	= 369,
    FMULD8SUX16	= 370,
    FMULD8ULX16	= 371,
    FMULQ	= 372,
    FMULS	= 373,
    FNADDD	= 374,
    FNADDS	= 375,
    FNAND	= 376,
    FNANDS	= 377,
    FNEGD	= 378,
    FNEGQ	= 379,
    FNEGS	= 380,
    FNHADDD	= 381,
    FNHADDS	= 382,
    FNMULD	= 383,
    FNMULS	= 384,
    FNOR	= 385,
    FNORS	= 386,
    FNOT1	= 387,
    FNOT1S	= 388,
    FNOT2	= 389,
    FNOT2S	= 390,
    FNSMULD	= 391,
    FONE	= 392,
    FONES	= 393,
    FOR	= 394,
    FORNOT1	= 395,
    FORNOT1S	= 396,
    FORNOT2	= 397,
    FORNOT2S	= 398,
    FORS	= 399,
    FPACK16	= 400,
    FPACK32	= 401,
    FPACKFIX	= 402,
    FPADD16	= 403,
    FPADD16S	= 404,
    FPADD32	= 405,
    FPADD32S	= 406,
    FPADD64	= 407,
    FPMERGE	= 408,
    FPSUB16	= 409,
    FPSUB16S	= 410,
    FPSUB32	= 411,
    FPSUB32S	= 412,
    FQTOD	= 413,
    FQTOI	= 414,
    FQTOS	= 415,
    FQTOX	= 416,
    FSLAS16	= 417,
    FSLAS32	= 418,
    FSLL16	= 419,
    FSLL32	= 420,
    FSMULD	= 421,
    FSQRTD	= 422,
    FSQRTQ	= 423,
    FSQRTS	= 424,
    FSRA16	= 425,
    FSRA32	= 426,
    FSRC1	= 427,
    FSRC1S	= 428,
    FSRC2	= 429,
    FSRC2S	= 430,
    FSRL16	= 431,
    FSRL32	= 432,
    FSTOD	= 433,
    FSTOI	= 434,
    FSTOQ	= 435,
    FSTOX	= 436,
    FSUBD	= 437,
    FSUBQ	= 438,
    FSUBS	= 439,
    FXNOR	= 440,
    FXNORS	= 441,
    FXOR	= 442,
    FXORS	= 443,
    FXTOD	= 444,
    FXTOQ	= 445,
    FXTOS	= 446,
    FZERO	= 447,
    FZEROS	= 448,
    JMPLri	= 449,
    JMPLrr	= 450,
    LDArr	= 451,
    LDCSRri	= 452,
    LDCSRrr	= 453,
    LDCri	= 454,
    LDCrr	= 455,
    LDDArr	= 456,
    LDDCri	= 457,
    LDDCrr	= 458,
    LDDFArr	= 459,
    LDDFri	= 460,
    LDDFrr	= 461,
    LDDri	= 462,
    LDDrr	= 463,
    LDFArr	= 464,
    LDFSRri	= 465,
    LDFSRrr	= 466,
    LDFri	= 467,
    LDFrr	= 468,
    LDQFArr	= 469,
    LDQFri	= 470,
    LDQFrr	= 471,
    LDSBArr	= 472,
    LDSBri	= 473,
    LDSBrr	= 474,
    LDSHArr	= 475,
    LDSHri	= 476,
    LDSHrr	= 477,
    LDSTUBArr	= 478,
    LDSTUBri	= 479,
    LDSTUBrr	= 480,
    LDSWri	= 481,
    LDSWrr	= 482,
    LDUBArr	= 483,
    LDUBri	= 484,
    LDUBrr	= 485,
    LDUHArr	= 486,
    LDUHri	= 487,
    LDUHrr	= 488,
    LDXFSRri	= 489,
    LDXFSRrr	= 490,
    LDXri	= 491,
    LDXrr	= 492,
    LDri	= 493,
    LDrr	= 494,
    LEAX_ADDri	= 495,
    LEA_ADDri	= 496,
    LZCNT	= 497,
    MEMBARi	= 498,
    MOVDTOX	= 499,
    MOVFCCri	= 500,
    MOVFCCrr	= 501,
    MOVICCri	= 502,
    MOVICCrr	= 503,
    MOVRGEZri	= 504,
    MOVRGEZrr	= 505,
    MOVRGZri	= 506,
    MOVRGZrr	= 507,
    MOVRLEZri	= 508,
    MOVRLEZrr	= 509,
    MOVRLZri	= 510,
    MOVRLZrr	= 511,
    MOVRNZri	= 512,
    MOVRNZrr	= 513,
    MOVRRZri	= 514,
    MOVRRZrr	= 515,
    MOVSTOSW	= 516,
    MOVSTOUW	= 517,
    MOVWTOS	= 518,
    MOVXCCri	= 519,
    MOVXCCrr	= 520,
    MOVXTOD	= 521,
    MULSCCri	= 522,
    MULSCCrr	= 523,
    MULXri	= 524,
    MULXrr	= 525,
    NOP	= 526,
    ORCCri	= 527,
    ORCCrr	= 528,
    ORNCCri	= 529,
    ORNCCrr	= 530,
    ORNri	= 531,
    ORNrr	= 532,
    ORXNrr	= 533,
    ORXri	= 534,
    ORXrr	= 535,
    ORri	= 536,
    ORrr	= 537,
    PDIST	= 538,
    PDISTN	= 539,
    POPCrr	= 540,
    PWRPSRri	= 541,
    PWRPSRrr	= 542,
    RDASR	= 543,
    RDPR	= 544,
    RDPSR	= 545,
    RDTBR	= 546,
    RDWIM	= 547,
    RESTOREri	= 548,
    RESTORErr	= 549,
    RET	= 550,
    RETL	= 551,
    RETTri	= 552,
    RETTrr	= 553,
    SAVEri	= 554,
    SAVErr	= 555,
    SDIVCCri	= 556,
    SDIVCCrr	= 557,
    SDIVXri	= 558,
    SDIVXrr	= 559,
    SDIVri	= 560,
    SDIVrr	= 561,
    SETHIXi	= 562,
    SETHIi	= 563,
    SHUTDOWN	= 564,
    SIAM	= 565,
    SLLXri	= 566,
    SLLXrr	= 567,
    SLLri	= 568,
    SLLrr	= 569,
    SMACri	= 570,
    SMACrr	= 571,
    SMULCCri	= 572,
    SMULCCrr	= 573,
    SMULri	= 574,
    SMULrr	= 575,
    SRAXri	= 576,
    SRAXrr	= 577,
    SRAri	= 578,
    SRArr	= 579,
    SRLXri	= 580,
    SRLXrr	= 581,
    SRLri	= 582,
    SRLrr	= 583,
    STArr	= 584,
    STBAR	= 585,
    STBArr	= 586,
    STBri	= 587,
    STBrr	= 588,
    STCSRri	= 589,
    STCSRrr	= 590,
    STCri	= 591,
    STCrr	= 592,
    STDArr	= 593,
    STDCQri	= 594,
    STDCQrr	= 595,
    STDCri	= 596,
    STDCrr	= 597,
    STDFArr	= 598,
    STDFQri	= 599,
    STDFQrr	= 600,
    STDFri	= 601,
    STDFrr	= 602,
    STDri	= 603,
    STDrr	= 604,
    STFArr	= 605,
    STFSRri	= 606,
    STFSRrr	= 607,
    STFri	= 608,
    STFrr	= 609,
    STHArr	= 610,
    STHri	= 611,
    STHrr	= 612,
    STQFArr	= 613,
    STQFri	= 614,
    STQFrr	= 615,
    STXFSRri	= 616,
    STXFSRrr	= 617,
    STXri	= 618,
    STXrr	= 619,
    STri	= 620,
    STrr	= 621,
    SUBCCri	= 622,
    SUBCCrr	= 623,
    SUBCri	= 624,
    SUBCrr	= 625,
    SUBEri	= 626,
    SUBErr	= 627,
    SUBXri	= 628,
    SUBXrr	= 629,
    SUBri	= 630,
    SUBrr	= 631,
    SWAPArr	= 632,
    SWAPri	= 633,
    SWAPrr	= 634,
    TA1	= 635,
    TA3	= 636,
    TA5	= 637,
    TADDCCTVri	= 638,
    TADDCCTVrr	= 639,
    TADDCCri	= 640,
    TADDCCrr	= 641,
    TICCri	= 642,
    TICCrr	= 643,
    TLS_ADDXrr	= 644,
    TLS_ADDrr	= 645,
    TLS_CALL	= 646,
    TLS_LDXrr	= 647,
    TLS_LDrr	= 648,
    TRAPri	= 649,
    TRAPrr	= 650,
    TSUBCCTVri	= 651,
    TSUBCCTVrr	= 652,
    TSUBCCri	= 653,
    TSUBCCrr	= 654,
    TXCCri	= 655,
    TXCCrr	= 656,
    UDIVCCri	= 657,
    UDIVCCrr	= 658,
    UDIVXri	= 659,
    UDIVXrr	= 660,
    UDIVri	= 661,
    UDIVrr	= 662,
    UMACri	= 663,
    UMACrr	= 664,
    UMULCCri	= 665,
    UMULCCrr	= 666,
    UMULXHI	= 667,
    UMULri	= 668,
    UMULrr	= 669,
    UNIMP	= 670,
    V9FCMPD	= 671,
    V9FCMPED	= 672,
    V9FCMPEQ	= 673,
    V9FCMPES	= 674,
    V9FCMPQ	= 675,
    V9FCMPS	= 676,
    V9FMOVD_FCC	= 677,
    V9FMOVQ_FCC	= 678,
    V9FMOVS_FCC	= 679,
    V9MOVFCCri	= 680,
    V9MOVFCCrr	= 681,
    WRASRri	= 682,
    WRASRrr	= 683,
    WRPRri	= 684,
    WRPRrr	= 685,
    WRPSRri	= 686,
    WRPSRrr	= 687,
    WRTBRri	= 688,
    WRTBRrr	= 689,
    WRWIMri	= 690,
    WRWIMrr	= 691,
    XMULX	= 692,
    XMULXHI	= 693,
    XNORCCri	= 694,
    XNORCCrr	= 695,
    XNORXrr	= 696,
    XNORri	= 697,
    XNORrr	= 698,
    XORCCri	= 699,
    XORCCrr	= 700,
    XORXri	= 701,
    XORXrr	= 702,
    XORri	= 703,
    XORrr	= 704,
    INSTRUCTION_LIST_END = 705
  };

} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace SP {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    IIC_iu_instr	= 1,
    IIC_fpu_normal_instr	= 2,
    IIC_jmp_or_call	= 3,
    IIC_fpu_abs	= 4,
    IIC_fpu_fast_instr	= 5,
    IIC_fpu_divd	= 6,
    IIC_fpu_divs	= 7,
    IIC_fpu_muld	= 8,
    IIC_fpu_muls	= 9,
    IIC_fpu_negs	= 10,
    IIC_fpu_sqrtd	= 11,
    IIC_fpu_sqrts	= 12,
    IIC_fpu_stod	= 13,
    IIC_ldd	= 14,
    IIC_iu_or_fpu_instr	= 15,
    IIC_iu_div	= 16,
    IIC_smac_umac	= 17,
    IIC_iu_smul	= 18,
    IIC_st	= 19,
    IIC_std	= 20,
    IIC_iu_umul	= 21,
    SCHED_LIST_END = 22
  };
} // end namespace Sched
} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { SP::O6, 0 };
static const MCPhysReg ImplicitList2[] = { SP::O7, 0 };
static const MCPhysReg ImplicitList3[] = { SP::FCC0, 0 };
static const MCPhysReg ImplicitList4[] = { SP::ICC, 0 };
static const MCPhysReg ImplicitList5[] = { SP::CPSR, 0 };
static const MCPhysReg ImplicitList6[] = { SP::FSR, 0 };
static const MCPhysReg ImplicitList7[] = { SP::Y, SP::ICC, 0 };
static const MCPhysReg ImplicitList8[] = { SP::PSR, 0 };
static const MCPhysReg ImplicitList9[] = { SP::TBR, 0 };
static const MCPhysReg ImplicitList10[] = { SP::WIM, 0 };
static const MCPhysReg ImplicitList11[] = { SP::Y, 0 };
static const MCPhysReg ImplicitList12[] = { SP::Y, SP::ASR18, 0 };
static const MCPhysReg ImplicitList13[] = { SP::CPQ, 0 };
static const MCPhysReg ImplicitList14[] = { SP::FQ, 0 };

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
static const MCOperandInfo OperandInfo37[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo51[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo53[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo73[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo74[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo132[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo133[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo134[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo146[] = { { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo148[] = { { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc SparcInsts[] = {
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
  { 177,	1,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList2, OperandInfo2, -1 ,nullptr },  // Inst #177 = GETPCX
  { 178,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #178 = SELECT_CC_DFP_FCC
  { 179,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #179 = SELECT_CC_DFP_ICC
  { 180,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #180 = SELECT_CC_FP_FCC
  { 181,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #181 = SELECT_CC_FP_ICC
  { 182,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #182 = SELECT_CC_Int_FCC
  { 183,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #183 = SELECT_CC_Int_ICC
  { 184,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #184 = SELECT_CC_QFP_FCC
  { 185,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #185 = SELECT_CC_QFP_ICC
  { 186,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #186 = SET
  { 187,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo42, -1 ,nullptr },  // Inst #187 = ADDCCri
  { 188,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo43, -1 ,nullptr },  // Inst #188 = ADDCCrr
  { 189,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #189 = ADDCri
  { 190,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #190 = ADDCrr
  { 191,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo42, -1 ,nullptr },  // Inst #191 = ADDEri
  { 192,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo43, -1 ,nullptr },  // Inst #192 = ADDErr
  { 193,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #193 = ADDXC
  { 194,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo44, -1 ,nullptr },  // Inst #194 = ADDXCCC
  { 195,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #195 = ADDXri
  { 196,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #196 = ADDXrr
  { 197,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #197 = ADDri
  { 198,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #198 = ADDrr
  { 199,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #199 = ALIGNADDR
  { 200,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #200 = ALIGNADDRL
  { 201,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo42, -1 ,nullptr },  // Inst #201 = ANDCCri
  { 202,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo43, -1 ,nullptr },  // Inst #202 = ANDCCrr
  { 203,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo42, -1 ,nullptr },  // Inst #203 = ANDNCCri
  { 204,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo43, -1 ,nullptr },  // Inst #204 = ANDNCCrr
  { 205,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #205 = ANDNri
  { 206,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #206 = ANDNrr
  { 207,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #207 = ANDXNrr
  { 208,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #208 = ANDXri
  { 209,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #209 = ANDXrr
  { 210,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #210 = ANDri
  { 211,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #211 = ANDrr
  { 212,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #212 = ARRAY16
  { 213,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #213 = ARRAY32
  { 214,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #214 = ARRAY8
  { 215,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #215 = BA
  { 216,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #216 = BCOND
  { 217,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #217 = BCONDA
  { 218,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #218 = BINDri
  { 219,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #219 = BINDrr
  { 220,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #220 = BMASK
  { 221,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #221 = BPFCC
  { 222,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #222 = BPFCCA
  { 223,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #223 = BPFCCANT
  { 224,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #224 = BPFCCNT
  { 225,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #225 = BPGEZapn
  { 226,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #226 = BPGEZapt
  { 227,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #227 = BPGEZnapn
  { 228,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #228 = BPGEZnapt
  { 229,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #229 = BPGZapn
  { 230,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #230 = BPGZapt
  { 231,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #231 = BPGZnapn
  { 232,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #232 = BPGZnapt
  { 233,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #233 = BPICC
  { 234,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #234 = BPICCA
  { 235,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #235 = BPICCANT
  { 236,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #236 = BPICCNT
  { 237,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #237 = BPLEZapn
  { 238,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #238 = BPLEZapt
  { 239,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #239 = BPLEZnapn
  { 240,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #240 = BPLEZnapt
  { 241,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #241 = BPLZapn
  { 242,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #242 = BPLZapt
  { 243,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #243 = BPLZnapn
  { 244,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #244 = BPLZnapt
  { 245,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #245 = BPNZapn
  { 246,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #246 = BPNZapt
  { 247,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #247 = BPNZnapn
  { 248,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #248 = BPNZnapt
  { 249,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #249 = BPXCC
  { 250,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #250 = BPXCCA
  { 251,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #251 = BPXCCANT
  { 252,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #252 = BPXCCNT
  { 253,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #253 = BPZapn
  { 254,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #254 = BPZapt
  { 255,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #255 = BPZnapn
  { 256,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #256 = BPZnapt
  { 257,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #257 = BSHUFFLE
  { 258,	1,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #258 = CALL
  { 259,	2,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #259 = CALLri
  { 260,	2,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #260 = CALLrr
  { 261,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #261 = CASAasi10
  { 262,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #262 = CASArr
  { 263,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #263 = CASXrr
  { 264,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #264 = CASrr
  { 265,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #265 = CBCOND
  { 266,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #266 = CBCONDA
  { 267,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #267 = CMASK16
  { 268,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #268 = CMASK32
  { 269,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #269 = CMASK8
  { 270,	2,	0,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #270 = CMPri
  { 271,	2,	0,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #271 = CMPrr
  { 272,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #272 = EDGE16
  { 273,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #273 = EDGE16L
  { 274,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #274 = EDGE16LN
  { 275,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #275 = EDGE16N
  { 276,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #276 = EDGE32
  { 277,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #277 = EDGE32L
  { 278,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #278 = EDGE32LN
  { 279,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #279 = EDGE32N
  { 280,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #280 = EDGE8
  { 281,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #281 = EDGE8L
  { 282,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #282 = EDGE8LN
  { 283,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #283 = EDGE8N
  { 284,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #284 = FABSD
  { 285,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #285 = FABSQ
  { 286,	2,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #286 = FABSS
  { 287,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #287 = FADDD
  { 288,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #288 = FADDQ
  { 289,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #289 = FADDS
  { 290,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #290 = FALIGNADATA
  { 291,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #291 = FAND
  { 292,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #292 = FANDNOT1
  { 293,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #293 = FANDNOT1S
  { 294,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #294 = FANDNOT2
  { 295,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #295 = FANDNOT2S
  { 296,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #296 = FANDS
  { 297,	2,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList3, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #297 = FBCOND
  { 298,	2,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #298 = FBCONDA
  { 299,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #299 = FCHKSM16
  { 300,	2,	0,	4,	5,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo56, -1 ,nullptr },  // Inst #300 = FCMPD
  { 301,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #301 = FCMPEQ16
  { 302,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #302 = FCMPEQ32
  { 303,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #303 = FCMPGT16
  { 304,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #304 = FCMPGT32
  { 305,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #305 = FCMPLE16
  { 306,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #306 = FCMPLE32
  { 307,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #307 = FCMPNE16
  { 308,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #308 = FCMPNE32
  { 309,	2,	0,	4,	0,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo57, -1 ,nullptr },  // Inst #309 = FCMPQ
  { 310,	2,	0,	4,	5,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo58, -1 ,nullptr },  // Inst #310 = FCMPS
  { 311,	3,	1,	4,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #311 = FDIVD
  { 312,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #312 = FDIVQ
  { 313,	3,	1,	4,	7,	0, 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #313 = FDIVS
  { 314,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #314 = FDMULQ
  { 315,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #315 = FDTOI
  { 316,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #316 = FDTOQ
  { 317,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #317 = FDTOS
  { 318,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #318 = FDTOX
  { 319,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #319 = FEXPAND
  { 320,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #320 = FHADDD
  { 321,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #321 = FHADDS
  { 322,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #322 = FHSUBD
  { 323,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #323 = FHSUBS
  { 324,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #324 = FITOD
  { 325,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #325 = FITOQ
  { 326,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #326 = FITOS
  { 327,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #327 = FLCMPD
  { 328,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #328 = FLCMPS
  { 329,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #329 = FLUSH
  { 330,	0,	0,	4,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #330 = FLUSHW
  { 331,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #331 = FLUSHri
  { 332,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #332 = FLUSHrr
  { 333,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #333 = FMEAN16
  { 334,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #334 = FMOVD
  { 335,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #335 = FMOVD_FCC
  { 336,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #336 = FMOVD_ICC
  { 337,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #337 = FMOVD_XCC
  { 338,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #338 = FMOVQ
  { 339,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #339 = FMOVQ_FCC
  { 340,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #340 = FMOVQ_ICC
  { 341,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #341 = FMOVQ_XCC
  { 342,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #342 = FMOVRGEZD
  { 343,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #343 = FMOVRGEZQ
  { 344,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #344 = FMOVRGEZS
  { 345,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #345 = FMOVRGZD
  { 346,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #346 = FMOVRGZQ
  { 347,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #347 = FMOVRGZS
  { 348,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #348 = FMOVRLEZD
  { 349,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #349 = FMOVRLEZQ
  { 350,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #350 = FMOVRLEZS
  { 351,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #351 = FMOVRLZD
  { 352,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #352 = FMOVRLZQ
  { 353,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #353 = FMOVRLZS
  { 354,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #354 = FMOVRNZD
  { 355,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #355 = FMOVRNZQ
  { 356,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #356 = FMOVRNZS
  { 357,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #357 = FMOVRZD
  { 358,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #358 = FMOVRZQ
  { 359,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #359 = FMOVRZS
  { 360,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #360 = FMOVS
  { 361,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #361 = FMOVS_FCC
  { 362,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #362 = FMOVS_ICC
  { 363,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #363 = FMOVS_XCC
  { 364,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #364 = FMUL8SUX16
  { 365,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #365 = FMUL8ULX16
  { 366,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #366 = FMUL8X16
  { 367,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #367 = FMUL8X16AL
  { 368,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #368 = FMUL8X16AU
  { 369,	3,	1,	4,	8,	0, 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #369 = FMULD
  { 370,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #370 = FMULD8SUX16
  { 371,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #371 = FMULD8ULX16
  { 372,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #372 = FMULQ
  { 373,	3,	1,	4,	9,	0, 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #373 = FMULS
  { 374,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #374 = FNADDD
  { 375,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #375 = FNADDS
  { 376,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #376 = FNAND
  { 377,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #377 = FNANDS
  { 378,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #378 = FNEGD
  { 379,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #379 = FNEGQ
  { 380,	2,	1,	4,	10,	0, 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #380 = FNEGS
  { 381,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #381 = FNHADDD
  { 382,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #382 = FNHADDS
  { 383,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #383 = FNMULD
  { 384,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #384 = FNMULS
  { 385,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #385 = FNOR
  { 386,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #386 = FNORS
  { 387,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #387 = FNOT1
  { 388,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #388 = FNOT1S
  { 389,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #389 = FNOT2
  { 390,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #390 = FNOT2S
  { 391,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #391 = FNSMULD
  { 392,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #392 = FONE
  { 393,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #393 = FONES
  { 394,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #394 = FOR
  { 395,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #395 = FORNOT1
  { 396,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #396 = FORNOT1S
  { 397,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #397 = FORNOT2
  { 398,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #398 = FORNOT2S
  { 399,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #399 = FORS
  { 400,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #400 = FPACK16
  { 401,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #401 = FPACK32
  { 402,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #402 = FPACKFIX
  { 403,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #403 = FPADD16
  { 404,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #404 = FPADD16S
  { 405,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #405 = FPADD32
  { 406,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #406 = FPADD32S
  { 407,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #407 = FPADD64
  { 408,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #408 = FPMERGE
  { 409,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #409 = FPSUB16
  { 410,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #410 = FPSUB16S
  { 411,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #411 = FPSUB32
  { 412,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #412 = FPSUB32S
  { 413,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #413 = FQTOD
  { 414,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #414 = FQTOI
  { 415,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #415 = FQTOS
  { 416,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #416 = FQTOX
  { 417,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #417 = FSLAS16
  { 418,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #418 = FSLAS32
  { 419,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #419 = FSLL16
  { 420,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #420 = FSLL32
  { 421,	3,	1,	4,	8,	0, 0x0ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #421 = FSMULD
  { 422,	2,	1,	4,	11,	0, 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #422 = FSQRTD
  { 423,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #423 = FSQRTQ
  { 424,	2,	1,	4,	12,	0, 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #424 = FSQRTS
  { 425,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #425 = FSRA16
  { 426,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #426 = FSRA32
  { 427,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #427 = FSRC1
  { 428,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #428 = FSRC1S
  { 429,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #429 = FSRC2
  { 430,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #430 = FSRC2S
  { 431,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #431 = FSRL16
  { 432,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #432 = FSRL32
  { 433,	2,	1,	4,	13,	0, 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #433 = FSTOD
  { 434,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #434 = FSTOI
  { 435,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #435 = FSTOQ
  { 436,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #436 = FSTOX
  { 437,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #437 = FSUBD
  { 438,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #438 = FSUBQ
  { 439,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #439 = FSUBS
  { 440,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #440 = FXNOR
  { 441,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #441 = FXNORS
  { 442,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #442 = FXOR
  { 443,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #443 = FXORS
  { 444,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #444 = FXTOD
  { 445,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #445 = FXTOQ
  { 446,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #446 = FXTOS
  { 447,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #447 = FZERO
  { 448,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #448 = FZEROS
  { 449,	3,	1,	4,	3,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #449 = JMPLri
  { 450,	3,	1,	4,	3,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #450 = JMPLrr
  { 451,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #451 = LDArr
  { 452,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo12, -1 ,nullptr },  // Inst #452 = LDCSRri
  { 453,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo46, -1 ,nullptr },  // Inst #453 = LDCSRrr
  { 454,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #454 = LDCri
  { 455,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo81, -1 ,nullptr },  // Inst #455 = LDCrr
  { 456,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #456 = LDDArr
  { 457,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #457 = LDDCri
  { 458,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #458 = LDDCrr
  { 459,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #459 = LDDFArr
  { 460,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #460 = LDDFri
  { 461,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #461 = LDDFrr
  { 462,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #462 = LDDri
  { 463,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #463 = LDDrr
  { 464,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #464 = LDFArr
  { 465,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo12, -1 ,nullptr },  // Inst #465 = LDFSRri
  { 466,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo46, -1 ,nullptr },  // Inst #466 = LDFSRrr
  { 467,	3,	1,	4,	15,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #467 = LDFri
  { 468,	3,	1,	4,	15,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #468 = LDFrr
  { 469,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #469 = LDQFArr
  { 470,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #470 = LDQFri
  { 471,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #471 = LDQFrr
  { 472,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #472 = LDSBArr
  { 473,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #473 = LDSBri
  { 474,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #474 = LDSBrr
  { 475,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #475 = LDSHArr
  { 476,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #476 = LDSHri
  { 477,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #477 = LDSHrr
  { 478,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #478 = LDSTUBArr
  { 479,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #479 = LDSTUBri
  { 480,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #480 = LDSTUBrr
  { 481,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #481 = LDSWri
  { 482,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #482 = LDSWrr
  { 483,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #483 = LDUBArr
  { 484,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #484 = LDUBri
  { 485,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #485 = LDUBrr
  { 486,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #486 = LDUHArr
  { 487,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #487 = LDUHri
  { 488,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #488 = LDUHrr
  { 489,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo12, -1 ,nullptr },  // Inst #489 = LDXFSRri
  { 490,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo46, -1 ,nullptr },  // Inst #490 = LDXFSRrr
  { 491,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #491 = LDXri
  { 492,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #492 = LDXrr
  { 493,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #493 = LDri
  { 494,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #494 = LDrr
  { 495,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #495 = LEAX_ADDri
  { 496,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #496 = LEA_ADDri
  { 497,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #497 = LZCNT
  { 498,	1,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #498 = MEMBARi
  { 499,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #499 = MOVDTOX
  { 500,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #500 = MOVFCCri
  { 501,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #501 = MOVFCCrr
  { 502,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #502 = MOVICCri
  { 503,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #503 = MOVICCrr
  { 504,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #504 = MOVRGEZri
  { 505,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #505 = MOVRGEZrr
  { 506,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #506 = MOVRGZri
  { 507,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #507 = MOVRGZrr
  { 508,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #508 = MOVRLEZri
  { 509,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #509 = MOVRLEZrr
  { 510,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #510 = MOVRLZri
  { 511,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #511 = MOVRLZrr
  { 512,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #512 = MOVRNZri
  { 513,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #513 = MOVRNZrr
  { 514,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #514 = MOVRRZri
  { 515,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #515 = MOVRRZrr
  { 516,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #516 = MOVSTOSW
  { 517,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #517 = MOVSTOUW
  { 518,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #518 = MOVWTOS
  { 519,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #519 = MOVXCCri
  { 520,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #520 = MOVXCCrr
  { 521,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #521 = MOVXTOD
  { 522,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList7, OperandInfo42, -1 ,nullptr },  // Inst #522 = MULSCCri
  { 523,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList7, OperandInfo43, -1 ,nullptr },  // Inst #523 = MULSCCrr
  { 524,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #524 = MULXri
  { 525,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #525 = MULXrr
  { 526,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #526 = NOP
  { 527,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo42, -1 ,nullptr },  // Inst #527 = ORCCri
  { 528,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo43, -1 ,nullptr },  // Inst #528 = ORCCrr
  { 529,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo42, -1 ,nullptr },  // Inst #529 = ORNCCri
  { 530,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo43, -1 ,nullptr },  // Inst #530 = ORNCCrr
  { 531,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #531 = ORNri
  { 532,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #532 = ORNrr
  { 533,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #533 = ORXNrr
  { 534,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #534 = ORXri
  { 535,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #535 = ORXrr
  { 536,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #536 = ORri
  { 537,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #537 = ORrr
  { 538,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #538 = PDIST
  { 539,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #539 = PDISTN
  { 540,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #540 = POPCrr
  { 541,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo54, -1 ,nullptr },  // Inst #541 = PWRPSRri
  { 542,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo55, -1 ,nullptr },  // Inst #542 = PWRPSRrr
  { 543,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #543 = RDASR
  { 544,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #544 = RDPR
  { 545,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList8, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #545 = RDPSR
  { 546,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList9, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #546 = RDTBR
  { 547,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList10, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #547 = RDWIM
  { 548,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #548 = RESTOREri
  { 549,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #549 = RESTORErr
  { 550,	1,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #550 = RET
  { 551,	1,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #551 = RETL
  { 552,	2,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #552 = RETTri
  { 553,	2,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #553 = RETTrr
  { 554,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #554 = SAVEri
  { 555,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #555 = SAVErr
  { 556,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo42, -1 ,nullptr },  // Inst #556 = SDIVCCri
  { 557,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo43, -1 ,nullptr },  // Inst #557 = SDIVCCrr
  { 558,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #558 = SDIVXri
  { 559,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #559 = SDIVXrr
  { 560,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo42, -1 ,nullptr },  // Inst #560 = SDIVri
  { 561,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo43, -1 ,nullptr },  // Inst #561 = SDIVrr
  { 562,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #562 = SETHIXi
  { 563,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #563 = SETHIi
  { 564,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #564 = SHUTDOWN
  { 565,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #565 = SIAM
  { 566,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #566 = SLLXri
  { 567,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #567 = SLLXrr
  { 568,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #568 = SLLri
  { 569,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #569 = SLLrr
  { 570,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo108, -1 ,nullptr },  // Inst #570 = SMACri
  { 571,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo109, -1 ,nullptr },  // Inst #571 = SMACrr
  { 572,	3,	1,	4,	18,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo42, -1 ,nullptr },  // Inst #572 = SMULCCri
  { 573,	3,	1,	4,	18,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo43, -1 ,nullptr },  // Inst #573 = SMULCCrr
  { 574,	3,	1,	4,	18,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo42, -1 ,nullptr },  // Inst #574 = SMULri
  { 575,	3,	1,	4,	18,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo43, -1 ,nullptr },  // Inst #575 = SMULrr
  { 576,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #576 = SRAXri
  { 577,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #577 = SRAXrr
  { 578,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #578 = SRAri
  { 579,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #579 = SRArr
  { 580,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #580 = SRLXri
  { 581,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #581 = SRLXrr
  { 582,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #582 = SRLri
  { 583,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #583 = SRLrr
  { 584,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #584 = STArr
  { 585,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #585 = STBAR
  { 586,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #586 = STBArr
  { 587,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #587 = STBri
  { 588,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #588 = STBrr
  { 589,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo12, -1 ,nullptr },  // Inst #589 = STCSRri
  { 590,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo46, -1 ,nullptr },  // Inst #590 = STCSRrr
  { 591,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo113, -1 ,nullptr },  // Inst #591 = STCri
  { 592,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #592 = STCrr
  { 593,	4,	0,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #593 = STDArr
  { 594,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList13, OperandInfo12, -1 ,nullptr },  // Inst #594 = STDCQri
  { 595,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList13, OperandInfo46, -1 ,nullptr },  // Inst #595 = STDCQrr
  { 596,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #596 = STDCri
  { 597,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #597 = STDCrr
  { 598,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo118, -1 ,nullptr },  // Inst #598 = STDFArr
  { 599,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList14, OperandInfo12, -1 ,nullptr },  // Inst #599 = STDFQri
  { 600,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList14, OperandInfo46, -1 ,nullptr },  // Inst #600 = STDFQrr
  { 601,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo119, -1 ,nullptr },  // Inst #601 = STDFri
  { 602,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo120, -1 ,nullptr },  // Inst #602 = STDFrr
  { 603,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #603 = STDri
  { 604,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #604 = STDrr
  { 605,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #605 = STFArr
  { 606,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo12, -1 ,nullptr },  // Inst #606 = STFSRri
  { 607,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo46, -1 ,nullptr },  // Inst #607 = STFSRrr
  { 608,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #608 = STFri
  { 609,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #609 = STFrr
  { 610,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #610 = STHArr
  { 611,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #611 = STHri
  { 612,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #612 = STHrr
  { 613,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #613 = STQFArr
  { 614,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo127, -1 ,nullptr },  // Inst #614 = STQFri
  { 615,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #615 = STQFrr
  { 616,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo12, -1 ,nullptr },  // Inst #616 = STXFSRri
  { 617,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo46, -1 ,nullptr },  // Inst #617 = STXFSRrr
  { 618,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #618 = STXri
  { 619,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo130, -1 ,nullptr },  // Inst #619 = STXrr
  { 620,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #620 = STri
  { 621,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #621 = STrr
  { 622,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo42, -1 ,nullptr },  // Inst #622 = SUBCCri
  { 623,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo43, -1 ,nullptr },  // Inst #623 = SUBCCrr
  { 624,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #624 = SUBCri
  { 625,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #625 = SUBCrr
  { 626,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo42, -1 ,nullptr },  // Inst #626 = SUBEri
  { 627,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo43, -1 ,nullptr },  // Inst #627 = SUBErr
  { 628,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #628 = SUBXri
  { 629,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #629 = SUBXrr
  { 630,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #630 = SUBri
  { 631,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #631 = SUBrr
  { 632,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo131, -1 ,nullptr },  // Inst #632 = SWAPArr
  { 633,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #633 = SWAPri
  { 634,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo133, -1 ,nullptr },  // Inst #634 = SWAPrr
  { 635,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #635 = TA1
  { 636,	0,	0,	4,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #636 = TA3
  { 637,	0,	0,	4,	1,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #637 = TA5
  { 638,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo42, -1 ,nullptr },  // Inst #638 = TADDCCTVri
  { 639,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo43, -1 ,nullptr },  // Inst #639 = TADDCCTVrr
  { 640,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo42, -1 ,nullptr },  // Inst #640 = TADDCCri
  { 641,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo43, -1 ,nullptr },  // Inst #641 = TADDCCrr
  { 642,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo134, -1 ,nullptr },  // Inst #642 = TICCri
  { 643,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #643 = TICCrr
  { 644,	4,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo135, -1 ,nullptr },  // Inst #644 = TLS_ADDXrr
  { 645,	4,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo136, -1 ,nullptr },  // Inst #645 = TLS_ADDrr
  { 646,	2,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #646 = TLS_CALL
  { 647,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo137, -1 ,nullptr },  // Inst #647 = TLS_LDXrr
  { 648,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo137, -1 ,nullptr },  // Inst #648 = TLS_LDrr
  { 649,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo134, -1 ,nullptr },  // Inst #649 = TRAPri
  { 650,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #650 = TRAPrr
  { 651,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo42, -1 ,nullptr },  // Inst #651 = TSUBCCTVri
  { 652,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo43, -1 ,nullptr },  // Inst #652 = TSUBCCTVrr
  { 653,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo42, -1 ,nullptr },  // Inst #653 = TSUBCCri
  { 654,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo43, -1 ,nullptr },  // Inst #654 = TSUBCCrr
  { 655,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo134, -1 ,nullptr },  // Inst #655 = TXCCri
  { 656,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #656 = TXCCrr
  { 657,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo42, -1 ,nullptr },  // Inst #657 = UDIVCCri
  { 658,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo43, -1 ,nullptr },  // Inst #658 = UDIVCCrr
  { 659,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #659 = UDIVXri
  { 660,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #660 = UDIVXrr
  { 661,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo42, -1 ,nullptr },  // Inst #661 = UDIVri
  { 662,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo43, -1 ,nullptr },  // Inst #662 = UDIVrr
  { 663,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo108, -1 ,nullptr },  // Inst #663 = UMACri
  { 664,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo109, -1 ,nullptr },  // Inst #664 = UMACrr
  { 665,	3,	1,	4,	21,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo42, -1 ,nullptr },  // Inst #665 = UMULCCri
  { 666,	3,	1,	4,	21,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo43, -1 ,nullptr },  // Inst #666 = UMULCCrr
  { 667,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #667 = UMULXHI
  { 668,	3,	1,	4,	21,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo42, -1 ,nullptr },  // Inst #668 = UMULri
  { 669,	3,	1,	4,	21,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo43, -1 ,nullptr },  // Inst #669 = UMULrr
  { 670,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #670 = UNIMP
  { 671,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #671 = V9FCMPD
  { 672,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #672 = V9FCMPED
  { 673,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo138, -1 ,nullptr },  // Inst #673 = V9FCMPEQ
  { 674,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo139, -1 ,nullptr },  // Inst #674 = V9FCMPES
  { 675,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo138, -1 ,nullptr },  // Inst #675 = V9FCMPQ
  { 676,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo139, -1 ,nullptr },  // Inst #676 = V9FCMPS
  { 677,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo140, -1 ,nullptr },  // Inst #677 = V9FMOVD_FCC
  { 678,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo141, -1 ,nullptr },  // Inst #678 = V9FMOVQ_FCC
  { 679,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo142, -1 ,nullptr },  // Inst #679 = V9FMOVS_FCC
  { 680,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo143, -1 ,nullptr },  // Inst #680 = V9MOVFCCri
  { 681,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo144, -1 ,nullptr },  // Inst #681 = V9MOVFCCrr
  { 682,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo145, -1 ,nullptr },  // Inst #682 = WRASRri
  { 683,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo146, -1 ,nullptr },  // Inst #683 = WRASRrr
  { 684,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo147, -1 ,nullptr },  // Inst #684 = WRPRri
  { 685,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo148, -1 ,nullptr },  // Inst #685 = WRPRrr
  { 686,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo54, -1 ,nullptr },  // Inst #686 = WRPSRri
  { 687,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo55, -1 ,nullptr },  // Inst #687 = WRPSRrr
  { 688,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo54, -1 ,nullptr },  // Inst #688 = WRTBRri
  { 689,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo55, -1 ,nullptr },  // Inst #689 = WRTBRrr
  { 690,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList10, OperandInfo54, -1 ,nullptr },  // Inst #690 = WRWIMri
  { 691,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList10, OperandInfo55, -1 ,nullptr },  // Inst #691 = WRWIMrr
  { 692,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #692 = XMULX
  { 693,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #693 = XMULXHI
  { 694,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo42, -1 ,nullptr },  // Inst #694 = XNORCCri
  { 695,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo43, -1 ,nullptr },  // Inst #695 = XNORCCrr
  { 696,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #696 = XNORXrr
  { 697,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #697 = XNORri
  { 698,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #698 = XNORrr
  { 699,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo42, -1 ,nullptr },  // Inst #699 = XORCCri
  { 700,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo43, -1 ,nullptr },  // Inst #700 = XORCCrr
  { 701,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #701 = XORXri
  { 702,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #702 = XORXrr
  { 703,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #703 = XORri
  { 704,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #704 = XORrr
};

extern const char SparcInstrNameData[] = {
  /* 0 */ 'G', '_', 'F', 'L', 'O', 'G', '1', '0', 0,
  /* 9 */ 'C', 'A', 'S', 'A', 'a', 's', 'i', '1', '0', 0,
  /* 19 */ 'T', 'A', '1', 0,
  /* 23 */ 'F', 'S', 'R', 'C', '1', 0,
  /* 29 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '1', 0,
  /* 38 */ 'F', 'N', 'O', 'T', '1', 0,
  /* 44 */ 'F', 'O', 'R', 'N', 'O', 'T', '1', 0,
  /* 52 */ 'F', 'S', 'R', 'A', '3', '2', 0,
  /* 59 */ 'F', 'P', 'S', 'U', 'B', '3', '2', 0,
  /* 67 */ 'F', 'P', 'A', 'D', 'D', '3', '2', 0,
  /* 75 */ 'E', 'D', 'G', 'E', '3', '2', 0,
  /* 82 */ 'F', 'C', 'M', 'P', 'L', 'E', '3', '2', 0,
  /* 91 */ 'F', 'C', 'M', 'P', 'N', 'E', '3', '2', 0,
  /* 100 */ 'F', 'P', 'A', 'C', 'K', '3', '2', 0,
  /* 108 */ 'C', 'M', 'A', 'S', 'K', '3', '2', 0,
  /* 116 */ 'F', 'S', 'L', 'L', '3', '2', 0,
  /* 123 */ 'F', 'S', 'R', 'L', '3', '2', 0,
  /* 130 */ 'F', 'C', 'M', 'P', 'E', 'Q', '3', '2', 0,
  /* 139 */ 'F', 'S', 'L', 'A', 'S', '3', '2', 0,
  /* 147 */ 'F', 'C', 'M', 'P', 'G', 'T', '3', '2', 0,
  /* 156 */ 'A', 'R', 'R', 'A', 'Y', '3', '2', 0,
  /* 164 */ 'F', 'S', 'R', 'C', '2', 0,
  /* 170 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 178 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 186 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '2', 0,
  /* 195 */ 'F', 'N', 'O', 'T', '2', 0,
  /* 201 */ 'F', 'O', 'R', 'N', 'O', 'T', '2', 0,
  /* 209 */ 'T', 'A', '3', 0,
  /* 213 */ 'F', 'P', 'A', 'D', 'D', '6', '4', 0,
  /* 221 */ 'T', 'A', '5', 0,
  /* 225 */ 'F', 'S', 'R', 'A', '1', '6', 0,
  /* 232 */ 'F', 'P', 'S', 'U', 'B', '1', '6', 0,
  /* 240 */ 'F', 'P', 'A', 'D', 'D', '1', '6', 0,
  /* 248 */ 'E', 'D', 'G', 'E', '1', '6', 0,
  /* 255 */ 'F', 'C', 'M', 'P', 'L', 'E', '1', '6', 0,
  /* 264 */ 'F', 'C', 'M', 'P', 'N', 'E', '1', '6', 0,
  /* 273 */ 'F', 'P', 'A', 'C', 'K', '1', '6', 0,
  /* 281 */ 'C', 'M', 'A', 'S', 'K', '1', '6', 0,
  /* 289 */ 'F', 'S', 'L', 'L', '1', '6', 0,
  /* 296 */ 'F', 'S', 'R', 'L', '1', '6', 0,
  /* 303 */ 'F', 'C', 'H', 'K', 'S', 'M', '1', '6', 0,
  /* 312 */ 'F', 'M', 'E', 'A', 'N', '1', '6', 0,
  /* 320 */ 'F', 'C', 'M', 'P', 'E', 'Q', '1', '6', 0,
  /* 329 */ 'F', 'S', 'L', 'A', 'S', '1', '6', 0,
  /* 337 */ 'F', 'C', 'M', 'P', 'G', 'T', '1', '6', 0,
  /* 346 */ 'F', 'M', 'U', 'L', '8', 'X', '1', '6', 0,
  /* 355 */ 'F', 'M', 'U', 'L', 'D', '8', 'U', 'L', 'X', '1', '6', 0,
  /* 367 */ 'F', 'M', 'U', 'L', '8', 'U', 'L', 'X', '1', '6', 0,
  /* 378 */ 'F', 'M', 'U', 'L', 'D', '8', 'S', 'U', 'X', '1', '6', 0,
  /* 390 */ 'F', 'M', 'U', 'L', '8', 'S', 'U', 'X', '1', '6', 0,
  /* 401 */ 'A', 'R', 'R', 'A', 'Y', '1', '6', 0,
  /* 409 */ 'E', 'D', 'G', 'E', '8', 0,
  /* 415 */ 'C', 'M', 'A', 'S', 'K', '8', 0,
  /* 422 */ 'A', 'R', 'R', 'A', 'Y', '8', 0,
  /* 429 */ 'B', 'A', 0,
  /* 432 */ 'B', 'P', 'F', 'C', 'C', 'A', 0,
  /* 439 */ 'B', 'P', 'I', 'C', 'C', 'A', 0,
  /* 446 */ 'B', 'P', 'X', 'C', 'C', 'A', 0,
  /* 453 */ 'C', 'B', 'C', 'O', 'N', 'D', 'A', 0,
  /* 461 */ 'F', 'B', 'C', 'O', 'N', 'D', 'A', 0,
  /* 469 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 475 */ 'F', 'A', 'L', 'I', 'G', 'N', 'A', 'D', 'A', 'T', 'A', 0,
  /* 487 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 494 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'S', 'U', 'B', 0,
  /* 511 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 517 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'S', 'U', 'B', 0,
  /* 533 */ 'A', 'D', 'D', 'X', 'C', 'C', 'C', 0,
  /* 541 */ 'B', 'P', 'F', 'C', 'C', 0,
  /* 547 */ 'V', '9', 'F', 'M', 'O', 'V', 'D', '_', 'F', 'C', 'C', 0,
  /* 559 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'D', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 577 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'Q', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 595 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 612 */ 'V', '9', 'F', 'M', 'O', 'V', 'Q', '_', 'F', 'C', 'C', 0,
  /* 624 */ 'V', '9', 'F', 'M', 'O', 'V', 'S', '_', 'F', 'C', 'C', 0,
  /* 636 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', 'n', 't', '_', 'F', 'C', 'C', 0,
  /* 654 */ 'B', 'P', 'I', 'C', 'C', 0,
  /* 660 */ 'F', 'M', 'O', 'V', 'D', '_', 'I', 'C', 'C', 0,
  /* 670 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'D', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 688 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'Q', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 706 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 723 */ 'F', 'M', 'O', 'V', 'Q', '_', 'I', 'C', 'C', 0,
  /* 733 */ 'F', 'M', 'O', 'V', 'S', '_', 'I', 'C', 'C', 0,
  /* 743 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', 'n', 't', '_', 'I', 'C', 'C', 0,
  /* 761 */ 'B', 'P', 'X', 'C', 'C', 0,
  /* 767 */ 'F', 'M', 'O', 'V', 'D', '_', 'X', 'C', 'C', 0,
  /* 777 */ 'F', 'M', 'O', 'V', 'Q', '_', 'X', 'C', 'C', 0,
  /* 787 */ 'F', 'M', 'O', 'V', 'S', '_', 'X', 'C', 'C', 0,
  /* 797 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 809 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 819 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 837 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 845 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 866 */ 'G', '_', 'D', 'Y', 'N', '_', 'S', 'T', 'A', 'C', 'K', 'A', 'L', 'L', 'O', 'C', 0,
  /* 883 */ 'A', 'D', 'D', 'X', 'C', 0,
  /* 889 */ 'G', '_', 'F', 'M', 'A', 'D', 0,
  /* 896 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 915 */ 'G', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 926 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 945 */ 'G', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 956 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'L', 'O', 'A', 'D', 0,
  /* 971 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 978 */ 'F', 'S', 'U', 'B', 'D', 0,
  /* 984 */ 'F', 'H', 'S', 'U', 'B', 'D', 0,
  /* 991 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 998 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'F', 'A', 'D', 'D', 0,
  /* 1015 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 1021 */ 'G', '_', 'P', 'T', 'R', '_', 'A', 'D', 'D', 0,
  /* 1031 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'D', 'D', 0,
  /* 1047 */ 'F', 'A', 'D', 'D', 'D', 0,
  /* 1053 */ 'F', 'H', 'A', 'D', 'D', 'D', 0,
  /* 1060 */ 'F', 'N', 'H', 'A', 'D', 'D', 'D', 0,
  /* 1068 */ 'F', 'N', 'A', 'D', 'D', 'D', 0,
  /* 1075 */ 'V', '9', 'F', 'C', 'M', 'P', 'E', 'D', 0,
  /* 1084 */ 'F', 'N', 'E', 'G', 'D', 0,
  /* 1090 */ 'F', 'M', 'U', 'L', 'D', 0,
  /* 1096 */ 'F', 'N', 'M', 'U', 'L', 'D', 0,
  /* 1103 */ 'F', 'S', 'M', 'U', 'L', 'D', 0,
  /* 1110 */ 'F', 'N', 'S', 'M', 'U', 'L', 'D', 0,
  /* 1118 */ 'F', 'A', 'N', 'D', 0,
  /* 1123 */ 'F', 'N', 'A', 'N', 'D', 0,
  /* 1129 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'N', 'A', 'N', 'D', 0,
  /* 1146 */ 'F', 'E', 'X', 'P', 'A', 'N', 'D', 0,
  /* 1154 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 1160 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'N', 'D', 0,
  /* 1176 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 1189 */ 'C', 'B', 'C', 'O', 'N', 'D', 0,
  /* 1196 */ 'F', 'B', 'C', 'O', 'N', 'D', 0,
  /* 1203 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 1212 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'R', 'O', 'U', 'N', 'D', 0,
  /* 1230 */ 'F', 'I', 'T', 'O', 'D', 0,
  /* 1236 */ 'F', 'Q', 'T', 'O', 'D', 0,
  /* 1242 */ 'F', 'S', 'T', 'O', 'D', 0,
  /* 1248 */ 'F', 'X', 'T', 'O', 'D', 0,
  /* 1254 */ 'M', 'O', 'V', 'X', 'T', 'O', 'D', 0,
  /* 1262 */ 'V', '9', 'F', 'C', 'M', 'P', 'D', 0,
  /* 1270 */ 'F', 'L', 'C', 'M', 'P', 'D', 0,
  /* 1277 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 1294 */ 'F', 'A', 'B', 'S', 'D', 0,
  /* 1300 */ 'F', 'S', 'Q', 'R', 'T', 'D', 0,
  /* 1307 */ 'F', 'D', 'I', 'V', 'D', 0,
  /* 1313 */ 'F', 'M', 'O', 'V', 'D', 0,
  /* 1319 */ 'F', 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'D', 0,
  /* 1329 */ 'F', 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'D', 0,
  /* 1339 */ 'F', 'M', 'O', 'V', 'R', 'G', 'Z', 'D', 0,
  /* 1348 */ 'F', 'M', 'O', 'V', 'R', 'L', 'Z', 'D', 0,
  /* 1357 */ 'F', 'M', 'O', 'V', 'R', 'N', 'Z', 'D', 0,
  /* 1366 */ 'F', 'M', 'O', 'V', 'R', 'Z', 'D', 0,
  /* 1374 */ 'G', '_', 'S', 'S', 'U', 'B', 'E', 0,
  /* 1382 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 1390 */ 'G', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 1398 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 1411 */ 'G', '_', 'S', 'A', 'D', 'D', 'E', 0,
  /* 1419 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 1427 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 1442 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 1457 */ 'F', 'P', 'M', 'E', 'R', 'G', 'E', 0,
  /* 1465 */ 'G', '_', 'J', 'U', 'M', 'P', '_', 'T', 'A', 'B', 'L', 'E', 0,
  /* 1478 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1485 */ 'B', 'S', 'H', 'U', 'F', 'F', 'L', 'E', 0,
  /* 1494 */ 'F', 'O', 'N', 'E', 0,
  /* 1499 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 1512 */ 'G', '_', 'I', 'N', 'D', 'E', 'X', 'E', 'D', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 1528 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 1536 */ 'G', '_', 'B', 'I', 'T', 'R', 'E', 'V', 'E', 'R', 'S', 'E', 0,
  /* 1549 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1559 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1574 */ 'G', '_', 'F', 'C', 'A', 'N', 'O', 'N', 'I', 'C', 'A', 'L', 'I', 'Z', 'E', 0,
  /* 1590 */ 'G', '_', 'C', 'T', 'L', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 1608 */ 'G', '_', 'C', 'T', 'T', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 1626 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 1641 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 1648 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1663 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1677 */ 'G', '_', 'S', 'E', 'X', 'T', '_', 'I', 'N', 'R', 'E', 'G', 0,
  /* 1690 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 1704 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', 0,
  /* 1721 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', 0,
  /* 1738 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 1745 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 1753 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 1761 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 1769 */ 'F', 'L', 'U', 'S', 'H', 0,
  /* 1775 */ 'G', '_', 'P', 'H', 'I', 0,
  /* 1781 */ 'U', 'M', 'U', 'L', 'X', 'H', 'I', 0,
  /* 1789 */ 'X', 'M', 'U', 'L', 'X', 'H', 'I', 0,
  /* 1797 */ 'F', 'D', 'T', 'O', 'I', 0,
  /* 1803 */ 'F', 'Q', 'T', 'O', 'I', 0,
  /* 1809 */ 'F', 'S', 'T', 'O', 'I', 0,
  /* 1815 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 1824 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 1833 */ 'B', 'M', 'A', 'S', 'K', 0,
  /* 1839 */ 'G', '_', 'P', 'T', 'R', '_', 'M', 'A', 'S', 'K', 0,
  /* 1850 */ 'E', 'D', 'G', 'E', '3', '2', 'L', 0,
  /* 1858 */ 'E', 'D', 'G', 'E', '1', '6', 'L', 0,
  /* 1866 */ 'E', 'D', 'G', 'E', '8', 'L', 0,
  /* 1873 */ 'F', 'M', 'U', 'L', '8', 'X', '1', '6', 'A', 'L', 0,
  /* 1884 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1893 */ 'D', 'B', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1903 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1912 */ 'A', 'N', 'N', 'O', 'T', 'A', 'T', 'I', 'O', 'N', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1929 */ 'I', 'C', 'A', 'L', 'L', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'F', 'U', 'N', 'N', 'E', 'L', 0,
  /* 1949 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 1955 */ 'G', '_', 'F', 'C', 'E', 'I', 'L', 0,
  /* 1963 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 1983 */ 'T', 'L', 'S', '_', 'C', 'A', 'L', 'L', 0,
  /* 1992 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 2019 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 2040 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 2052 */ 'K', 'I', 'L', 'L', 0,
  /* 2057 */ 'A', 'L', 'I', 'G', 'N', 'A', 'D', 'D', 'R', 'L', 0,
  /* 2068 */ 'R', 'E', 'T', 'L', 0,
  /* 2073 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 2080 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 2086 */ 'S', 'I', 'A', 'M', 0,
  /* 2091 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 2098 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 2105 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 2112 */ 'R', 'D', 'W', 'I', 'M', 0,
  /* 2118 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 2128 */ 'G', '_', 'F', 'M', 'I', 'N', 'I', 'M', 'U', 'M', 0,
  /* 2139 */ 'G', '_', 'F', 'M', 'A', 'X', 'I', 'M', 'U', 'M', 0,
  /* 2150 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', 0,
  /* 2160 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', 0,
  /* 2170 */ 'E', 'D', 'G', 'E', '3', '2', 'N', 0,
  /* 2178 */ 'E', 'D', 'G', 'E', '1', '6', 'N', 0,
  /* 2186 */ 'E', 'D', 'G', 'E', '8', 'N', 0,
  /* 2193 */ 'G', '_', 'F', 'C', 'O', 'P', 'Y', 'S', 'I', 'G', 'N', 0,
  /* 2205 */ 'G', '_', 'S', 'M', 'I', 'N', 0,
  /* 2212 */ 'G', '_', 'U', 'M', 'I', 'N', 0,
  /* 2219 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 2236 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'I', 'N', 0,
  /* 2252 */ 'G', '_', 'F', 'S', 'I', 'N', 0,
  /* 2259 */ 'E', 'D', 'G', 'E', '3', '2', 'L', 'N', 0,
  /* 2268 */ 'E', 'D', 'G', 'E', '1', '6', 'L', 'N', 0,
  /* 2277 */ 'E', 'D', 'G', 'E', '8', 'L', 'N', 0,
  /* 2285 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 2301 */ 'P', 'D', 'I', 'S', 'T', 'N', 0,
  /* 2308 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 2325 */ 'S', 'H', 'U', 'T', 'D', 'O', 'W', 'N', 0,
  /* 2334 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 2342 */ 'G', '_', 'U', 'S', 'U', 'B', 'O', 0,
  /* 2350 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 2358 */ 'G', '_', 'U', 'A', 'D', 'D', 'O', 0,
  /* 2366 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 2374 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 2382 */ 'F', 'Z', 'E', 'R', 'O', 0,
  /* 2388 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 2397 */ 'G', '_', 'B', 'S', 'W', 'A', 'P', 0,
  /* 2405 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 2414 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 2423 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 2430 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 2437 */ 'U', 'N', 'I', 'M', 'P', 0,
  /* 2443 */ 'N', 'O', 'P', 0,
  /* 2447 */ 'G', '_', 'C', 'T', 'P', 'O', 'P', 0,
  /* 2455 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 2468 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 2480 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 2495 */ 'G', '_', 'F', 'E', 'X', 'P', 0,
  /* 2502 */ 'F', 'S', 'U', 'B', 'Q', 0,
  /* 2508 */ 'F', 'A', 'D', 'D', 'Q', 0,
  /* 2514 */ 'V', '9', 'F', 'C', 'M', 'P', 'E', 'Q', 0,
  /* 2523 */ 'F', 'N', 'E', 'G', 'Q', 0,
  /* 2529 */ 'F', 'D', 'M', 'U', 'L', 'Q', 0,
  /* 2536 */ 'F', 'M', 'U', 'L', 'Q', 0,
  /* 2542 */ 'F', 'D', 'T', 'O', 'Q', 0,
  /* 2548 */ 'F', 'I', 'T', 'O', 'Q', 0,
  /* 2554 */ 'F', 'S', 'T', 'O', 'Q', 0,
  /* 2560 */ 'F', 'X', 'T', 'O', 'Q', 0,
  /* 2566 */ 'V', '9', 'F', 'C', 'M', 'P', 'Q', 0,
  /* 2574 */ 'F', 'A', 'B', 'S', 'Q', 0,
  /* 2580 */ 'F', 'S', 'Q', 'R', 'T', 'Q', 0,
  /* 2587 */ 'F', 'D', 'I', 'V', 'Q', 0,
  /* 2593 */ 'F', 'M', 'O', 'V', 'Q', 0,
  /* 2599 */ 'F', 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'Q', 0,
  /* 2609 */ 'F', 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'Q', 0,
  /* 2619 */ 'F', 'M', 'O', 'V', 'R', 'G', 'Z', 'Q', 0,
  /* 2628 */ 'F', 'M', 'O', 'V', 'R', 'L', 'Z', 'Q', 0,
  /* 2637 */ 'F', 'M', 'O', 'V', 'R', 'N', 'Z', 'Q', 0,
  /* 2646 */ 'F', 'M', 'O', 'V', 'R', 'Z', 'Q', 0,
  /* 2654 */ 'S', 'T', 'B', 'A', 'R', 0,
  /* 2660 */ 'R', 'D', 'T', 'B', 'R', 0,
  /* 2666 */ 'G', '_', 'B', 'R', 0,
  /* 2671 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', '_', 'B', 'R', 0,
  /* 2684 */ 'A', 'L', 'I', 'G', 'N', 'A', 'D', 'D', 'R', 0,
  /* 2694 */ 'G', '_', 'B', 'L', 'O', 'C', 'K', '_', 'A', 'D', 'D', 'R', 0,
  /* 2707 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 2732 */ 'G', '_', 'R', 'E', 'A', 'D', 'C', 'Y', 'C', 'L', 'E', 'C', 'O', 'U', 'N', 'T', 'E', 'R', 0,
  /* 2751 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 2758 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 2765 */ 'F', 'O', 'R', 0,
  /* 2769 */ 'F', 'N', 'O', 'R', 0,
  /* 2774 */ 'F', 'X', 'N', 'O', 'R', 0,
  /* 2780 */ 'G', '_', 'F', 'F', 'L', 'O', 'O', 'R', 0,
  /* 2789 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 2804 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 2821 */ 'F', 'X', 'O', 'R', 0,
  /* 2826 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 2832 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'O', 'R', 0,
  /* 2848 */ 'G', '_', 'O', 'R', 0,
  /* 2853 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'O', 'R', 0,
  /* 2868 */ 'R', 'D', 'P', 'R', 0,
  /* 2873 */ 'R', 'D', 'A', 'S', 'R', 0,
  /* 2879 */ 'R', 'D', 'P', 'S', 'R', 0,
  /* 2885 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 2896 */ 'F', 'S', 'R', 'C', '1', 'S', 0,
  /* 2903 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '1', 'S', 0,
  /* 2913 */ 'F', 'N', 'O', 'T', '1', 'S', 0,
  /* 2920 */ 'F', 'O', 'R', 'N', 'O', 'T', '1', 'S', 0,
  /* 2929 */ 'F', 'P', 'S', 'U', 'B', '3', '2', 'S', 0,
  /* 2938 */ 'F', 'P', 'A', 'D', 'D', '3', '2', 'S', 0,
  /* 2947 */ 'F', 'S', 'R', 'C', '2', 'S', 0,
  /* 2954 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '2', 'S', 0,
  /* 2964 */ 'F', 'N', 'O', 'T', '2', 'S', 0,
  /* 2971 */ 'F', 'O', 'R', 'N', 'O', 'T', '2', 'S', 0,
  /* 2980 */ 'F', 'P', 'S', 'U', 'B', '1', '6', 'S', 0,
  /* 2989 */ 'F', 'P', 'A', 'D', 'D', '1', '6', 'S', 0,
  /* 2998 */ 'G', '_', 'F', 'A', 'B', 'S', 0,
  /* 3005 */ 'F', 'S', 'U', 'B', 'S', 0,
  /* 3011 */ 'F', 'H', 'S', 'U', 'B', 'S', 0,
  /* 3018 */ 'F', 'A', 'D', 'D', 'S', 0,
  /* 3024 */ 'F', 'H', 'A', 'D', 'D', 'S', 0,
  /* 3031 */ 'F', 'N', 'H', 'A', 'D', 'D', 'S', 0,
  /* 3039 */ 'F', 'N', 'A', 'D', 'D', 'S', 0,
  /* 3046 */ 'F', 'A', 'N', 'D', 'S', 0,
  /* 3052 */ 'F', 'N', 'A', 'N', 'D', 'S', 0,
  /* 3059 */ 'F', 'O', 'N', 'E', 'S', 0,
  /* 3065 */ 'V', '9', 'F', 'C', 'M', 'P', 'E', 'S', 0,
  /* 3074 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 3091 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 3106 */ 'F', 'N', 'E', 'G', 'S', 0,
  /* 3112 */ 'F', 'M', 'U', 'L', 'S', 0,
  /* 3118 */ 'F', 'N', 'M', 'U', 'L', 'S', 0,
  /* 3125 */ 'G', '_', 'F', 'C', 'O', 'S', 0,
  /* 3132 */ 'F', 'Z', 'E', 'R', 'O', 'S', 0,
  /* 3139 */ 'F', 'D', 'T', 'O', 'S', 0,
  /* 3145 */ 'F', 'I', 'T', 'O', 'S', 0,
  /* 3151 */ 'F', 'Q', 'T', 'O', 'S', 0,
  /* 3157 */ 'M', 'O', 'V', 'W', 'T', 'O', 'S', 0,
  /* 3165 */ 'F', 'X', 'T', 'O', 'S', 0,
  /* 3171 */ 'V', '9', 'F', 'C', 'M', 'P', 'S', 0,
  /* 3179 */ 'F', 'L', 'C', 'M', 'P', 'S', 0,
  /* 3186 */ 'F', 'O', 'R', 'S', 0,
  /* 3191 */ 'F', 'N', 'O', 'R', 'S', 0,
  /* 3197 */ 'F', 'X', 'N', 'O', 'R', 'S', 0,
  /* 3204 */ 'G', '_', 'C', 'O', 'N', 'C', 'A', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', 'S', 0,
  /* 3221 */ 'F', 'X', 'O', 'R', 'S', 0,
  /* 3227 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 3244 */ 'F', 'A', 'B', 'S', 'S', 0,
  /* 3250 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'W', 'I', 'T', 'H', '_', 'S', 'U', 'C', 'C', 'E', 'S', 'S', 0,
  /* 3280 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 3307 */ 'F', 'S', 'Q', 'R', 'T', 'S', 0,
  /* 3314 */ 'F', 'D', 'I', 'V', 'S', 0,
  /* 3320 */ 'F', 'M', 'O', 'V', 'S', 0,
  /* 3326 */ 'F', 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'S', 0,
  /* 3336 */ 'F', 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'S', 0,
  /* 3346 */ 'F', 'M', 'O', 'V', 'R', 'G', 'Z', 'S', 0,
  /* 3355 */ 'F', 'M', 'O', 'V', 'R', 'L', 'Z', 'S', 0,
  /* 3364 */ 'F', 'M', 'O', 'V', 'R', 'N', 'Z', 'S', 0,
  /* 3373 */ 'F', 'M', 'O', 'V', 'R', 'Z', 'S', 0,
  /* 3381 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 3391 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 3400 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 3413 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 3427 */ 'S', 'E', 'T', 0,
  /* 3431 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 3455 */ 'G', '_', 'B', 'R', 'J', 'T', 0,
  /* 3462 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 3483 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 3503 */ 'B', 'P', 'F', 'C', 'C', 'A', 'N', 'T', 0,
  /* 3512 */ 'B', 'P', 'I', 'C', 'C', 'A', 'N', 'T', 0,
  /* 3521 */ 'B', 'P', 'X', 'C', 'C', 'A', 'N', 'T', 0,
  /* 3530 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 3542 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 3553 */ 'B', 'P', 'F', 'C', 'C', 'N', 'T', 0,
  /* 3561 */ 'B', 'P', 'I', 'C', 'C', 'N', 'T', 0,
  /* 3569 */ 'B', 'P', 'X', 'C', 'C', 'N', 'T', 0,
  /* 3577 */ 'L', 'Z', 'C', 'N', 'T', 0,
  /* 3583 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 3594 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 3605 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 3616 */ 'G', '_', 'F', 'R', 'I', 'N', 'T', 0,
  /* 3624 */ 'G', '_', 'F', 'N', 'E', 'A', 'R', 'B', 'Y', 'I', 'N', 'T', 0,
  /* 3637 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 3647 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 3662 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 3671 */ 'G', '_', 'F', 'S', 'Q', 'R', 'T', 0,
  /* 3679 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 3689 */ 'G', '_', 'A', 'D', 'D', 'R', 'S', 'P', 'A', 'C', 'E', '_', 'C', 'A', 'S', 'T', 0,
  /* 3706 */ 'P', 'D', 'I', 'S', 'T', 0,
  /* 3712 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 3720 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 3727 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 3736 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 3743 */ 'F', 'M', 'U', 'L', '8', 'X', '1', '6', 'A', 'U', 0,
  /* 3754 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 3761 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 3768 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 3775 */ 'F', 'L', 'U', 'S', 'H', 'W', 0,
  /* 3782 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 3789 */ 'M', 'O', 'V', 'S', 'T', 'O', 'S', 'W', 0,
  /* 3798 */ 'M', 'O', 'V', 'S', 'T', 'O', 'U', 'W', 0,
  /* 3807 */ 'G', '_', 'S', 'M', 'A', 'X', 0,
  /* 3814 */ 'G', '_', 'U', 'M', 'A', 'X', 0,
  /* 3821 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 3838 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'A', 'X', 0,
  /* 3854 */ 'G', 'E', 'T', 'P', 'C', 'X', 0,
  /* 3861 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 3875 */ 'F', 'P', 'A', 'C', 'K', 'F', 'I', 'X', 0,
  /* 3884 */ 'X', 'M', 'U', 'L', 'X', 0,
  /* 3890 */ 'F', 'D', 'T', 'O', 'X', 0,
  /* 3896 */ 'M', 'O', 'V', 'D', 'T', 'O', 'X', 0,
  /* 3904 */ 'F', 'Q', 'T', 'O', 'X', 0,
  /* 3910 */ 'F', 'S', 'T', 'O', 'X', 0,
  /* 3916 */ 'C', 'O', 'P', 'Y', 0,
  /* 3921 */ 'G', '_', 'C', 'T', 'L', 'Z', 0,
  /* 3928 */ 'G', '_', 'C', 'T', 'T', 'Z', 0,
  /* 3935 */ 'S', 'E', 'T', 'H', 'I', 'i', 0,
  /* 3942 */ 'M', 'E', 'M', 'B', 'A', 'R', 'i', 0,
  /* 3950 */ 'S', 'E', 'T', 'H', 'I', 'X', 'i', 0,
  /* 3958 */ 'S', 'R', 'A', 'r', 'i', 0,
  /* 3964 */ 'L', 'D', 'S', 'B', 'r', 'i', 0,
  /* 3971 */ 'S', 'T', 'B', 'r', 'i', 0,
  /* 3977 */ 'L', 'D', 'U', 'B', 'r', 'i', 0,
  /* 3984 */ 'S', 'U', 'B', 'r', 'i', 0,
  /* 3990 */ 'L', 'D', 'S', 'T', 'U', 'B', 'r', 'i', 0,
  /* 3999 */ 'S', 'M', 'A', 'C', 'r', 'i', 0,
  /* 4006 */ 'U', 'M', 'A', 'C', 'r', 'i', 0,
  /* 4013 */ 'S', 'U', 'B', 'C', 'r', 'i', 0,
  /* 4020 */ 'T', 'S', 'U', 'B', 'C', 'C', 'r', 'i', 0,
  /* 4029 */ 'T', 'A', 'D', 'D', 'C', 'C', 'r', 'i', 0,
  /* 4038 */ 'A', 'N', 'D', 'C', 'C', 'r', 'i', 0,
  /* 4046 */ 'V', '9', 'M', 'O', 'V', 'F', 'C', 'C', 'r', 'i', 0,
  /* 4057 */ 'T', 'I', 'C', 'C', 'r', 'i', 0,
  /* 4064 */ 'M', 'O', 'V', 'I', 'C', 'C', 'r', 'i', 0,
  /* 4073 */ 'S', 'M', 'U', 'L', 'C', 'C', 'r', 'i', 0,
  /* 4082 */ 'U', 'M', 'U', 'L', 'C', 'C', 'r', 'i', 0,
  /* 4091 */ 'A', 'N', 'D', 'N', 'C', 'C', 'r', 'i', 0,
  /* 4100 */ 'O', 'R', 'N', 'C', 'C', 'r', 'i', 0,
  /* 4108 */ 'X', 'N', 'O', 'R', 'C', 'C', 'r', 'i', 0,
  /* 4117 */ 'X', 'O', 'R', 'C', 'C', 'r', 'i', 0,
  /* 4125 */ 'M', 'U', 'L', 'S', 'C', 'C', 'r', 'i', 0,
  /* 4134 */ 'S', 'D', 'I', 'V', 'C', 'C', 'r', 'i', 0,
  /* 4143 */ 'U', 'D', 'I', 'V', 'C', 'C', 'r', 'i', 0,
  /* 4152 */ 'T', 'X', 'C', 'C', 'r', 'i', 0,
  /* 4159 */ 'M', 'O', 'V', 'X', 'C', 'C', 'r', 'i', 0,
  /* 4168 */ 'A', 'D', 'D', 'C', 'r', 'i', 0,
  /* 4175 */ 'L', 'D', 'D', 'C', 'r', 'i', 0,
  /* 4182 */ 'L', 'D', 'C', 'r', 'i', 0,
  /* 4188 */ 'S', 'T', 'D', 'C', 'r', 'i', 0,
  /* 4195 */ 'S', 'T', 'C', 'r', 'i', 0,
  /* 4201 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'r', 'i', 0,
  /* 4211 */ 'L', 'E', 'A', 'X', '_', 'A', 'D', 'D', 'r', 'i', 0,
  /* 4222 */ 'L', 'D', 'D', 'r', 'i', 0,
  /* 4228 */ 'L', 'D', 'r', 'i', 0,
  /* 4233 */ 'A', 'N', 'D', 'r', 'i', 0,
  /* 4239 */ 'B', 'I', 'N', 'D', 'r', 'i', 0,
  /* 4246 */ 'S', 'T', 'D', 'r', 'i', 0,
  /* 4252 */ 'S', 'U', 'B', 'E', 'r', 'i', 0,
  /* 4259 */ 'A', 'D', 'D', 'E', 'r', 'i', 0,
  /* 4266 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', 'r', 'i', 0,
  /* 4276 */ 'S', 'A', 'V', 'E', 'r', 'i', 0,
  /* 4283 */ 'L', 'D', 'D', 'F', 'r', 'i', 0,
  /* 4290 */ 'L', 'D', 'F', 'r', 'i', 0,
  /* 4296 */ 'S', 'T', 'D', 'F', 'r', 'i', 0,
  /* 4303 */ 'L', 'D', 'Q', 'F', 'r', 'i', 0,
  /* 4310 */ 'S', 'T', 'Q', 'F', 'r', 'i', 0,
  /* 4317 */ 'S', 'T', 'F', 'r', 'i', 0,
  /* 4323 */ 'L', 'D', 'S', 'H', 'r', 'i', 0,
  /* 4330 */ 'F', 'L', 'U', 'S', 'H', 'r', 'i', 0,
  /* 4338 */ 'S', 'T', 'H', 'r', 'i', 0,
  /* 4344 */ 'L', 'D', 'U', 'H', 'r', 'i', 0,
  /* 4351 */ 'C', 'A', 'L', 'L', 'r', 'i', 0,
  /* 4358 */ 'S', 'L', 'L', 'r', 'i', 0,
  /* 4364 */ 'J', 'M', 'P', 'L', 'r', 'i', 0,
  /* 4371 */ 'S', 'R', 'L', 'r', 'i', 0,
  /* 4377 */ 'S', 'M', 'U', 'L', 'r', 'i', 0,
  /* 4384 */ 'U', 'M', 'U', 'L', 'r', 'i', 0,
  /* 4391 */ 'W', 'R', 'W', 'I', 'M', 'r', 'i', 0,
  /* 4399 */ 'A', 'N', 'D', 'N', 'r', 'i', 0,
  /* 4406 */ 'O', 'R', 'N', 'r', 'i', 0,
  /* 4412 */ 'T', 'R', 'A', 'P', 'r', 'i', 0,
  /* 4419 */ 'S', 'W', 'A', 'P', 'r', 'i', 0,
  /* 4426 */ 'C', 'M', 'P', 'r', 'i', 0,
  /* 4432 */ 'S', 'T', 'D', 'C', 'Q', 'r', 'i', 0,
  /* 4440 */ 'S', 'T', 'D', 'F', 'Q', 'r', 'i', 0,
  /* 4448 */ 'W', 'R', 'T', 'B', 'R', 'r', 'i', 0,
  /* 4456 */ 'X', 'N', 'O', 'R', 'r', 'i', 0,
  /* 4463 */ 'X', 'O', 'R', 'r', 'i', 0,
  /* 4469 */ 'W', 'R', 'P', 'R', 'r', 'i', 0,
  /* 4476 */ 'W', 'R', 'A', 'S', 'R', 'r', 'i', 0,
  /* 4484 */ 'L', 'D', 'C', 'S', 'R', 'r', 'i', 0,
  /* 4492 */ 'S', 'T', 'C', 'S', 'R', 'r', 'i', 0,
  /* 4500 */ 'L', 'D', 'F', 'S', 'R', 'r', 'i', 0,
  /* 4508 */ 'S', 'T', 'F', 'S', 'R', 'r', 'i', 0,
  /* 4516 */ 'L', 'D', 'X', 'F', 'S', 'R', 'r', 'i', 0,
  /* 4525 */ 'S', 'T', 'X', 'F', 'S', 'R', 'r', 'i', 0,
  /* 4534 */ 'P', 'W', 'R', 'P', 'S', 'R', 'r', 'i', 0,
  /* 4543 */ 'S', 'T', 'r', 'i', 0,
  /* 4548 */ 'R', 'E', 'T', 'T', 'r', 'i', 0,
  /* 4555 */ 'S', 'D', 'I', 'V', 'r', 'i', 0,
  /* 4562 */ 'U', 'D', 'I', 'V', 'r', 'i', 0,
  /* 4569 */ 'T', 'S', 'U', 'B', 'C', 'C', 'T', 'V', 'r', 'i', 0,
  /* 4580 */ 'T', 'A', 'D', 'D', 'C', 'C', 'T', 'V', 'r', 'i', 0,
  /* 4591 */ 'L', 'D', 'S', 'W', 'r', 'i', 0,
  /* 4598 */ 'S', 'R', 'A', 'X', 'r', 'i', 0,
  /* 4605 */ 'S', 'U', 'B', 'X', 'r', 'i', 0,
  /* 4612 */ 'A', 'D', 'D', 'X', 'r', 'i', 0,
  /* 4619 */ 'L', 'D', 'X', 'r', 'i', 0,
  /* 4625 */ 'A', 'N', 'D', 'X', 'r', 'i', 0,
  /* 4632 */ 'S', 'L', 'L', 'X', 'r', 'i', 0,
  /* 4639 */ 'S', 'R', 'L', 'X', 'r', 'i', 0,
  /* 4646 */ 'M', 'U', 'L', 'X', 'r', 'i', 0,
  /* 4653 */ 'X', 'O', 'R', 'X', 'r', 'i', 0,
  /* 4660 */ 'S', 'T', 'X', 'r', 'i', 0,
  /* 4666 */ 'S', 'D', 'I', 'V', 'X', 'r', 'i', 0,
  /* 4674 */ 'U', 'D', 'I', 'V', 'X', 'r', 'i', 0,
  /* 4682 */ 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'r', 'i', 0,
  /* 4692 */ 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'r', 'i', 0,
  /* 4702 */ 'M', 'O', 'V', 'R', 'G', 'Z', 'r', 'i', 0,
  /* 4711 */ 'M', 'O', 'V', 'R', 'L', 'Z', 'r', 'i', 0,
  /* 4720 */ 'M', 'O', 'V', 'R', 'N', 'Z', 'r', 'i', 0,
  /* 4729 */ 'M', 'O', 'V', 'R', 'R', 'Z', 'r', 'i', 0,
  /* 4738 */ 'B', 'P', 'G', 'E', 'Z', 'a', 'p', 'n', 0,
  /* 4747 */ 'B', 'P', 'L', 'E', 'Z', 'a', 'p', 'n', 0,
  /* 4756 */ 'B', 'P', 'G', 'Z', 'a', 'p', 'n', 0,
  /* 4764 */ 'B', 'P', 'L', 'Z', 'a', 'p', 'n', 0,
  /* 4772 */ 'B', 'P', 'N', 'Z', 'a', 'p', 'n', 0,
  /* 4780 */ 'B', 'P', 'Z', 'a', 'p', 'n', 0,
  /* 4787 */ 'B', 'P', 'G', 'E', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 4797 */ 'B', 'P', 'L', 'E', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 4807 */ 'B', 'P', 'G', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 4816 */ 'B', 'P', 'L', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 4825 */ 'B', 'P', 'N', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 4834 */ 'B', 'P', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 4842 */ 'L', 'D', 'S', 'B', 'A', 'r', 'r', 0,
  /* 4850 */ 'S', 'T', 'B', 'A', 'r', 'r', 0,
  /* 4857 */ 'L', 'D', 'U', 'B', 'A', 'r', 'r', 0,
  /* 4865 */ 'L', 'D', 'S', 'T', 'U', 'B', 'A', 'r', 'r', 0,
  /* 4875 */ 'L', 'D', 'D', 'A', 'r', 'r', 0,
  /* 4882 */ 'L', 'D', 'A', 'r', 'r', 0,
  /* 4888 */ 'S', 'T', 'D', 'A', 'r', 'r', 0,
  /* 4895 */ 'L', 'D', 'D', 'F', 'A', 'r', 'r', 0,
  /* 4903 */ 'L', 'D', 'F', 'A', 'r', 'r', 0,
  /* 4910 */ 'S', 'T', 'D', 'F', 'A', 'r', 'r', 0,
  /* 4918 */ 'L', 'D', 'Q', 'F', 'A', 'r', 'r', 0,
  /* 4926 */ 'S', 'T', 'Q', 'F', 'A', 'r', 'r', 0,
  /* 4934 */ 'S', 'T', 'F', 'A', 'r', 'r', 0,
  /* 4941 */ 'L', 'D', 'S', 'H', 'A', 'r', 'r', 0,
  /* 4949 */ 'S', 'T', 'H', 'A', 'r', 'r', 0,
  /* 4956 */ 'L', 'D', 'U', 'H', 'A', 'r', 'r', 0,
  /* 4964 */ 'S', 'W', 'A', 'P', 'A', 'r', 'r', 0,
  /* 4972 */ 'S', 'R', 'A', 'r', 'r', 0,
  /* 4978 */ 'C', 'A', 'S', 'A', 'r', 'r', 0,
  /* 4985 */ 'S', 'T', 'A', 'r', 'r', 0,
  /* 4991 */ 'L', 'D', 'S', 'B', 'r', 'r', 0,
  /* 4998 */ 'S', 'T', 'B', 'r', 'r', 0,
  /* 5004 */ 'L', 'D', 'U', 'B', 'r', 'r', 0,
  /* 5011 */ 'S', 'U', 'B', 'r', 'r', 0,
  /* 5017 */ 'L', 'D', 'S', 'T', 'U', 'B', 'r', 'r', 0,
  /* 5026 */ 'S', 'M', 'A', 'C', 'r', 'r', 0,
  /* 5033 */ 'U', 'M', 'A', 'C', 'r', 'r', 0,
  /* 5040 */ 'S', 'U', 'B', 'C', 'r', 'r', 0,
  /* 5047 */ 'T', 'S', 'U', 'B', 'C', 'C', 'r', 'r', 0,
  /* 5056 */ 'T', 'A', 'D', 'D', 'C', 'C', 'r', 'r', 0,
  /* 5065 */ 'A', 'N', 'D', 'C', 'C', 'r', 'r', 0,
  /* 5073 */ 'V', '9', 'M', 'O', 'V', 'F', 'C', 'C', 'r', 'r', 0,
  /* 5084 */ 'T', 'I', 'C', 'C', 'r', 'r', 0,
  /* 5091 */ 'M', 'O', 'V', 'I', 'C', 'C', 'r', 'r', 0,
  /* 5100 */ 'S', 'M', 'U', 'L', 'C', 'C', 'r', 'r', 0,
  /* 5109 */ 'U', 'M', 'U', 'L', 'C', 'C', 'r', 'r', 0,
  /* 5118 */ 'A', 'N', 'D', 'N', 'C', 'C', 'r', 'r', 0,
  /* 5127 */ 'O', 'R', 'N', 'C', 'C', 'r', 'r', 0,
  /* 5135 */ 'X', 'N', 'O', 'R', 'C', 'C', 'r', 'r', 0,
  /* 5144 */ 'X', 'O', 'R', 'C', 'C', 'r', 'r', 0,
  /* 5152 */ 'M', 'U', 'L', 'S', 'C', 'C', 'r', 'r', 0,
  /* 5161 */ 'S', 'D', 'I', 'V', 'C', 'C', 'r', 'r', 0,
  /* 5170 */ 'U', 'D', 'I', 'V', 'C', 'C', 'r', 'r', 0,
  /* 5179 */ 'T', 'X', 'C', 'C', 'r', 'r', 0,
  /* 5186 */ 'M', 'O', 'V', 'X', 'C', 'C', 'r', 'r', 0,
  /* 5195 */ 'A', 'D', 'D', 'C', 'r', 'r', 0,
  /* 5202 */ 'L', 'D', 'D', 'C', 'r', 'r', 0,
  /* 5209 */ 'L', 'D', 'C', 'r', 'r', 0,
  /* 5215 */ 'S', 'T', 'D', 'C', 'r', 'r', 0,
  /* 5222 */ 'P', 'O', 'P', 'C', 'r', 'r', 0,
  /* 5229 */ 'S', 'T', 'C', 'r', 'r', 0,
  /* 5235 */ 'T', 'L', 'S', '_', 'A', 'D', 'D', 'r', 'r', 0,
  /* 5245 */ 'L', 'D', 'D', 'r', 'r', 0,
  /* 5251 */ 'T', 'L', 'S', '_', 'L', 'D', 'r', 'r', 0,
  /* 5260 */ 'A', 'N', 'D', 'r', 'r', 0,
  /* 5266 */ 'B', 'I', 'N', 'D', 'r', 'r', 0,
  /* 5273 */ 'S', 'T', 'D', 'r', 'r', 0,
  /* 5279 */ 'S', 'U', 'B', 'E', 'r', 'r', 0,
  /* 5286 */ 'A', 'D', 'D', 'E', 'r', 'r', 0,
  /* 5293 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', 'r', 'r', 0,
  /* 5303 */ 'S', 'A', 'V', 'E', 'r', 'r', 0,
  /* 5310 */ 'L', 'D', 'D', 'F', 'r', 'r', 0,
  /* 5317 */ 'L', 'D', 'F', 'r', 'r', 0,
  /* 5323 */ 'S', 'T', 'D', 'F', 'r', 'r', 0,
  /* 5330 */ 'L', 'D', 'Q', 'F', 'r', 'r', 0,
  /* 5337 */ 'S', 'T', 'Q', 'F', 'r', 'r', 0,
  /* 5344 */ 'S', 'T', 'F', 'r', 'r', 0,
  /* 5350 */ 'L', 'D', 'S', 'H', 'r', 'r', 0,
  /* 5357 */ 'F', 'L', 'U', 'S', 'H', 'r', 'r', 0,
  /* 5365 */ 'S', 'T', 'H', 'r', 'r', 0,
  /* 5371 */ 'L', 'D', 'U', 'H', 'r', 'r', 0,
  /* 5378 */ 'C', 'A', 'L', 'L', 'r', 'r', 0,
  /* 5385 */ 'S', 'L', 'L', 'r', 'r', 0,
  /* 5391 */ 'J', 'M', 'P', 'L', 'r', 'r', 0,
  /* 5398 */ 'S', 'R', 'L', 'r', 'r', 0,
  /* 5404 */ 'S', 'M', 'U', 'L', 'r', 'r', 0,
  /* 5411 */ 'U', 'M', 'U', 'L', 'r', 'r', 0,
  /* 5418 */ 'W', 'R', 'W', 'I', 'M', 'r', 'r', 0,
  /* 5426 */ 'A', 'N', 'D', 'N', 'r', 'r', 0,
  /* 5433 */ 'O', 'R', 'N', 'r', 'r', 0,
  /* 5439 */ 'A', 'N', 'D', 'X', 'N', 'r', 'r', 0,
  /* 5447 */ 'O', 'R', 'X', 'N', 'r', 'r', 0,
  /* 5454 */ 'T', 'R', 'A', 'P', 'r', 'r', 0,
  /* 5461 */ 'S', 'W', 'A', 'P', 'r', 'r', 0,
  /* 5468 */ 'C', 'M', 'P', 'r', 'r', 0,
  /* 5474 */ 'S', 'T', 'D', 'C', 'Q', 'r', 'r', 0,
  /* 5482 */ 'S', 'T', 'D', 'F', 'Q', 'r', 'r', 0,
  /* 5490 */ 'W', 'R', 'T', 'B', 'R', 'r', 'r', 0,
  /* 5498 */ 'X', 'N', 'O', 'R', 'r', 'r', 0,
  /* 5505 */ 'X', 'O', 'R', 'r', 'r', 0,
  /* 5511 */ 'W', 'R', 'P', 'R', 'r', 'r', 0,
  /* 5518 */ 'W', 'R', 'A', 'S', 'R', 'r', 'r', 0,
  /* 5526 */ 'L', 'D', 'C', 'S', 'R', 'r', 'r', 0,
  /* 5534 */ 'S', 'T', 'C', 'S', 'R', 'r', 'r', 0,
  /* 5542 */ 'L', 'D', 'F', 'S', 'R', 'r', 'r', 0,
  /* 5550 */ 'S', 'T', 'F', 'S', 'R', 'r', 'r', 0,
  /* 5558 */ 'L', 'D', 'X', 'F', 'S', 'R', 'r', 'r', 0,
  /* 5567 */ 'S', 'T', 'X', 'F', 'S', 'R', 'r', 'r', 0,
  /* 5576 */ 'P', 'W', 'R', 'P', 'S', 'R', 'r', 'r', 0,
  /* 5585 */ 'C', 'A', 'S', 'r', 'r', 0,
  /* 5591 */ 'S', 'T', 'r', 'r', 0,
  /* 5596 */ 'R', 'E', 'T', 'T', 'r', 'r', 0,
  /* 5603 */ 'S', 'D', 'I', 'V', 'r', 'r', 0,
  /* 5610 */ 'U', 'D', 'I', 'V', 'r', 'r', 0,
  /* 5617 */ 'T', 'S', 'U', 'B', 'C', 'C', 'T', 'V', 'r', 'r', 0,
  /* 5628 */ 'T', 'A', 'D', 'D', 'C', 'C', 'T', 'V', 'r', 'r', 0,
  /* 5639 */ 'L', 'D', 'S', 'W', 'r', 'r', 0,
  /* 5646 */ 'S', 'R', 'A', 'X', 'r', 'r', 0,
  /* 5653 */ 'S', 'U', 'B', 'X', 'r', 'r', 0,
  /* 5660 */ 'T', 'L', 'S', '_', 'A', 'D', 'D', 'X', 'r', 'r', 0,
  /* 5671 */ 'T', 'L', 'S', '_', 'L', 'D', 'X', 'r', 'r', 0,
  /* 5681 */ 'A', 'N', 'D', 'X', 'r', 'r', 0,
  /* 5688 */ 'S', 'L', 'L', 'X', 'r', 'r', 0,
  /* 5695 */ 'S', 'R', 'L', 'X', 'r', 'r', 0,
  /* 5702 */ 'M', 'U', 'L', 'X', 'r', 'r', 0,
  /* 5709 */ 'X', 'N', 'O', 'R', 'X', 'r', 'r', 0,
  /* 5717 */ 'X', 'O', 'R', 'X', 'r', 'r', 0,
  /* 5724 */ 'C', 'A', 'S', 'X', 'r', 'r', 0,
  /* 5731 */ 'S', 'T', 'X', 'r', 'r', 0,
  /* 5737 */ 'S', 'D', 'I', 'V', 'X', 'r', 'r', 0,
  /* 5745 */ 'U', 'D', 'I', 'V', 'X', 'r', 'r', 0,
  /* 5753 */ 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'r', 'r', 0,
  /* 5763 */ 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'r', 'r', 0,
  /* 5773 */ 'M', 'O', 'V', 'R', 'G', 'Z', 'r', 'r', 0,
  /* 5782 */ 'M', 'O', 'V', 'R', 'L', 'Z', 'r', 'r', 0,
  /* 5791 */ 'M', 'O', 'V', 'R', 'N', 'Z', 'r', 'r', 0,
  /* 5800 */ 'M', 'O', 'V', 'R', 'R', 'Z', 'r', 'r', 0,
  /* 5809 */ 'B', 'P', 'G', 'E', 'Z', 'a', 'p', 't', 0,
  /* 5818 */ 'B', 'P', 'L', 'E', 'Z', 'a', 'p', 't', 0,
  /* 5827 */ 'B', 'P', 'G', 'Z', 'a', 'p', 't', 0,
  /* 5835 */ 'B', 'P', 'L', 'Z', 'a', 'p', 't', 0,
  /* 5843 */ 'B', 'P', 'N', 'Z', 'a', 'p', 't', 0,
  /* 5851 */ 'B', 'P', 'Z', 'a', 'p', 't', 0,
  /* 5858 */ 'B', 'P', 'G', 'E', 'Z', 'n', 'a', 'p', 't', 0,
  /* 5868 */ 'B', 'P', 'L', 'E', 'Z', 'n', 'a', 'p', 't', 0,
  /* 5878 */ 'B', 'P', 'G', 'Z', 'n', 'a', 'p', 't', 0,
  /* 5887 */ 'B', 'P', 'L', 'Z', 'n', 'a', 'p', 't', 0,
  /* 5896 */ 'B', 'P', 'N', 'Z', 'n', 'a', 'p', 't', 0,
  /* 5905 */ 'B', 'P', 'Z', 'n', 'a', 'p', 't', 0,
};

extern const unsigned SparcInstrNameIndices[] = {
    1777U, 2118U, 2671U, 2285U, 1903U, 1884U, 1912U, 2052U, 
    1648U, 1663U, 1628U, 1690U, 3227U, 1549U, 1893U, 1398U, 
    3916U, 1478U, 3647U, 1176U, 2388U, 2040U, 3594U, 1277U, 
    3583U, 1499U, 2468U, 2455U, 2707U, 3413U, 3431U, 1963U, 
    2019U, 1992U, 1929U, 1015U, 511U, 2080U, 3761U, 3768U, 
    2098U, 2105U, 1154U, 2848U, 2826U, 1626U, 1775U, 3861U, 
    1559U, 3381U, 3074U, 3662U, 3091U, 2789U, 845U, 3204U, 
    3605U, 2885U, 3679U, 819U, 1212U, 2732U, 971U, 915U, 
    945U, 956U, 896U, 926U, 1528U, 1512U, 3250U, 1704U, 
    1721U, 1031U, 517U, 1160U, 1129U, 2853U, 2832U, 3838U, 
    2236U, 3821U, 2219U, 998U, 494U, 1390U, 1203U, 3400U, 
    797U, 3280U, 3727U, 837U, 3542U, 3530U, 3637U, 1745U, 
    3720U, 1677U, 3736U, 1949U, 2758U, 2751U, 2430U, 2423U, 
    3391U, 2358U, 1419U, 2342U, 1382U, 2350U, 1411U, 2334U, 
    1374U, 2374U, 2366U, 1761U, 1753U, 991U, 487U, 2073U, 
    469U, 889U, 3754U, 2091U, 3782U, 2495U, 178U, 1738U, 
    170U, 0U, 1641U, 3712U, 809U, 1815U, 1824U, 2405U, 
    2414U, 2998U, 2193U, 1574U, 2150U, 2160U, 1427U, 1442U, 
    2128U, 2139U, 1021U, 1839U, 2205U, 3807U, 2212U, 3814U, 
    2666U, 3455U, 3483U, 3462U, 2804U, 3928U, 1608U, 3921U, 
    1590U, 2447U, 2397U, 1536U, 1955U, 3125U, 2252U, 3671U, 
    2780U, 3616U, 3624U, 3689U, 2694U, 1465U, 866U, 2308U, 
    2480U, 3854U, 559U, 670U, 595U, 706U, 636U, 743U, 
    577U, 688U, 3427U, 4030U, 5057U, 4168U, 5195U, 4259U, 
    5286U, 883U, 533U, 4612U, 5664U, 4205U, 5239U, 2684U, 
    2057U, 4038U, 5065U, 4091U, 5118U, 4399U, 5426U, 5439U, 
    4625U, 5681U, 4233U, 5260U, 401U, 156U, 422U, 429U, 
    1190U, 454U, 4239U, 5266U, 1833U, 541U, 432U, 3503U, 
    3553U, 4738U, 5809U, 4787U, 5858U, 4756U, 5827U, 4807U, 
    5878U, 654U, 439U, 3512U, 3561U, 4747U, 5818U, 4797U, 
    5868U, 4764U, 5835U, 4816U, 5887U, 4772U, 5843U, 4825U, 
    5896U, 761U, 446U, 3521U, 3569U, 4780U, 5851U, 4834U, 
    5905U, 1485U, 1978U, 4351U, 5378U, 9U, 4978U, 5724U, 
    5585U, 1189U, 453U, 281U, 108U, 415U, 4426U, 5468U, 
    248U, 1858U, 2268U, 2178U, 75U, 1850U, 2259U, 2170U, 
    409U, 1866U, 2277U, 2186U, 1294U, 2574U, 3244U, 1047U, 
    2508U, 3018U, 475U, 1118U, 29U, 2903U, 186U, 2954U, 
    3046U, 1196U, 461U, 303U, 1264U, 320U, 130U, 337U, 
    147U, 255U, 82U, 264U, 91U, 2568U, 3173U, 1307U, 
    2587U, 3314U, 2529U, 1797U, 2542U, 3139U, 3890U, 1146U, 
    1053U, 3024U, 984U, 3011U, 1230U, 2548U, 3145U, 1270U, 
    3179U, 1769U, 3775U, 4330U, 5357U, 312U, 1313U, 549U, 
    660U, 767U, 2593U, 614U, 723U, 777U, 1319U, 2599U, 
    3326U, 1339U, 2619U, 3346U, 1329U, 2609U, 3336U, 1348U, 
    2628U, 3355U, 1357U, 2637U, 3364U, 1366U, 2646U, 3373U, 
    3320U, 626U, 733U, 787U, 390U, 367U, 346U, 1873U, 
    3743U, 1090U, 378U, 355U, 2536U, 3112U, 1068U, 3039U, 
    1123U, 3052U, 1084U, 2523U, 3106U, 1060U, 3031U, 1096U, 
    3118U, 2769U, 3191U, 38U, 2913U, 195U, 2964U, 1110U, 
    1494U, 3059U, 2765U, 44U, 2920U, 201U, 2971U, 3186U, 
    273U, 100U, 3875U, 240U, 2989U, 67U, 2938U, 213U, 
    1457U, 232U, 2980U, 59U, 2929U, 1236U, 1803U, 3151U, 
    3904U, 329U, 139U, 289U, 116U, 1103U, 1300U, 2580U, 
    3307U, 225U, 52U, 23U, 2896U, 164U, 2947U, 296U, 
    123U, 1242U, 1809U, 2554U, 3910U, 978U, 2502U, 3005U, 
    2774U, 3197U, 2821U, 3221U, 1248U, 2560U, 3165U, 2382U, 
    3132U, 4364U, 5391U, 4882U, 4484U, 5526U, 4182U, 5209U, 
    4875U, 4175U, 5202U, 4895U, 4283U, 5310U, 4222U, 5245U, 
    4903U, 4500U, 5542U, 4290U, 5317U, 4918U, 4303U, 5330U, 
    4842U, 3964U, 4991U, 4941U, 4323U, 5350U, 4865U, 3990U, 
    5017U, 4591U, 5639U, 4857U, 3977U, 5004U, 4956U, 4344U, 
    5371U, 4516U, 5558U, 4619U, 5675U, 4228U, 5255U, 4211U, 
    4201U, 3577U, 3942U, 3896U, 4048U, 5075U, 4064U, 5091U, 
    4682U, 5753U, 4702U, 5773U, 4692U, 5763U, 4711U, 5782U, 
    4720U, 5791U, 4729U, 5800U, 3789U, 3798U, 3157U, 4159U, 
    5186U, 1254U, 4125U, 5152U, 4646U, 5702U, 2443U, 4110U, 
    5137U, 4100U, 5127U, 4406U, 5433U, 5447U, 4654U, 5711U, 
    4458U, 5500U, 3706U, 2301U, 5222U, 4534U, 5576U, 2873U, 
    2868U, 2879U, 2660U, 2112U, 4266U, 5293U, 3423U, 2068U, 
    4548U, 5596U, 4276U, 5303U, 4134U, 5161U, 4666U, 5737U, 
    4555U, 5603U, 3950U, 3935U, 2325U, 2086U, 4632U, 5688U, 
    4358U, 5385U, 3999U, 5026U, 4073U, 5100U, 4377U, 5404U, 
    4598U, 5646U, 3958U, 4972U, 4639U, 5695U, 4371U, 5398U, 
    4985U, 2654U, 4850U, 3971U, 4998U, 4492U, 5534U, 4195U, 
    5229U, 4888U, 4432U, 5474U, 4188U, 5215U, 4910U, 4440U, 
    5482U, 4296U, 5323U, 4246U, 5273U, 4934U, 4508U, 5550U, 
    4317U, 5344U, 4949U, 4338U, 5365U, 4926U, 4310U, 5337U, 
    4525U, 5567U, 4660U, 5731U, 4543U, 5591U, 4021U, 5048U, 
    4013U, 5040U, 4252U, 5279U, 4605U, 5653U, 3984U, 5011U, 
    4964U, 4419U, 5461U, 19U, 209U, 221U, 4580U, 5628U, 
    4029U, 5056U, 4057U, 5084U, 5660U, 5235U, 1983U, 5671U, 
    5251U, 4412U, 5454U, 4569U, 5617U, 4020U, 5047U, 4152U, 
    5179U, 4143U, 5170U, 4674U, 5745U, 4562U, 5610U, 4006U, 
    5033U, 4082U, 5109U, 1781U, 4384U, 5411U, 2437U, 1262U, 
    1075U, 2514U, 3065U, 2566U, 3171U, 547U, 612U, 624U, 
    4046U, 5073U, 4476U, 5518U, 4469U, 5511U, 4535U, 5577U, 
    4448U, 5490U, 4391U, 5418U, 3884U, 1789U, 4108U, 5135U, 
    5709U, 4456U, 5498U, 4117U, 5144U, 4653U, 5717U, 4463U, 
    5505U, 
};

static inline void InitSparcMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, 705);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct SparcGenInstrInfo : public TargetInstrInfo {
  explicit SparcGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~SparcGenInstrInfo() override = default;

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
extern const MCInstrDesc SparcInsts[];
extern const unsigned SparcInstrNameIndices[];
extern const char SparcInstrNameData[];
SparcGenInstrInfo::SparcGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, 705);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace SP {
namespace OpName {
enum {
OPERAND_LAST
};
} // end namespace OpName
} // end namespace SP
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace SP {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace SP
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace SP {
namespace OpTypes {
enum OperandType {
  CCOp = 0,
  MEMri = 1,
  MEMrr = 2,
  MembarTag = 3,
  TLSSym = 4,
  bprtarget = 5,
  bprtarget16 = 6,
  brtarget = 7,
  calltarget = 8,
  f32imm = 9,
  f64imm = 10,
  getPCX = 11,
  i16imm = 12,
  i1imm = 13,
  i32imm = 14,
  i64imm = 15,
  i8imm = 16,
  ptype0 = 17,
  ptype1 = 18,
  ptype2 = 19,
  ptype3 = 20,
  ptype4 = 21,
  ptype5 = 22,
  simm13Op = 23,
  type0 = 24,
  type1 = 25,
  type2 = 26,
  type3 = 27,
  type4 = 28,
  type5 = 29,
  untyped_imm_0 = 30,
  ASRRegs = 31,
  CoprocPair = 32,
  CoprocRegs = 33,
  DFPRegs = 34,
  FCCRegs = 35,
  FPRegs = 36,
  I64Regs = 37,
  IntPair = 38,
  IntRegs = 39,
  LowDFPRegs = 40,
  LowQFPRegs = 41,
  PRRegs = 42,
  QFPRegs = 43,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace SP {
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
    431,
    435,
    439,
    443,
    447,
    451,
    455,
    459,
    463,
    465,
    468,
    471,
    474,
    477,
    480,
    483,
    486,
    489,
    492,
    495,
    498,
    501,
    504,
    507,
    510,
    513,
    516,
    519,
    522,
    525,
    528,
    531,
    534,
    537,
    540,
    543,
    546,
    549,
    550,
    552,
    554,
    556,
    558,
    561,
    564,
    567,
    570,
    573,
    575,
    577,
    579,
    581,
    583,
    585,
    587,
    589,
    591,
    593,
    595,
    597,
    599,
    601,
    603,
    605,
    607,
    609,
    611,
    613,
    615,
    617,
    619,
    621,
    623,
    625,
    627,
    629,
    631,
    633,
    635,
    637,
    640,
    641,
    643,
    645,
    649,
    654,
    658,
    662,
    664,
    666,
    667,
    668,
    669,
    671,
    673,
    676,
    679,
    682,
    685,
    688,
    691,
    694,
    697,
    700,
    703,
    706,
    709,
    711,
    713,
    715,
    718,
    721,
    724,
    727,
    730,
    733,
    736,
    739,
    742,
    745,
    747,
    749,
    752,
    754,
    757,
    760,
    763,
    766,
    769,
    772,
    775,
    778,
    780,
    782,
    785,
    788,
    791,
    794,
    796,
    798,
    800,
    802,
    804,
    807,
    810,
    813,
    816,
    818,
    820,
    822,
    825,
    828,
    828,
    828,
    830,
    832,
    835,
    837,
    841,
    845,
    849,
    851,
    855,
    859,
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
    911,
    914,
    917,
    919,
    923,
    927,
    931,
    934,
    937,
    940,
    943,
    946,
    949,
    952,
    955,
    958,
    961,
    964,
    967,
    970,
    973,
    975,
    977,
    979,
    982,
    985,
    988,
    991,
    994,
    997,
    999,
    1001,
    1003,
    1005,
    1008,
    1010,
    1012,
    1015,
    1018,
    1021,
    1024,
    1027,
    1030,
    1032,
    1035,
    1037,
    1040,
    1043,
    1046,
    1049,
    1052,
    1055,
    1058,
    1061,
    1064,
    1067,
    1069,
    1071,
    1073,
    1075,
    1078,
    1081,
    1084,
    1087,
    1090,
    1092,
    1094,
    1096,
    1099,
    1102,
    1104,
    1106,
    1108,
    1110,
    1113,
    1116,
    1118,
    1120,
    1122,
    1124,
    1127,
    1130,
    1133,
    1136,
    1139,
    1142,
    1145,
    1147,
    1149,
    1151,
    1153,
    1155,
    1158,
    1161,
    1165,
    1167,
    1169,
    1172,
    1175,
    1179,
    1182,
    1185,
    1189,
    1192,
    1195,
    1198,
    1201,
    1205,
    1207,
    1209,
    1212,
    1215,
    1219,
    1222,
    1225,
    1229,
    1232,
    1235,
    1239,
    1242,
    1245,
    1249,
    1252,
    1255,
    1258,
    1261,
    1265,
    1268,
    1271,
    1275,
    1278,
    1281,
    1283,
    1285,
    1288,
    1291,
    1294,
    1297,
    1300,
    1303,
    1305,
    1306,
    1308,
    1312,
    1316,
    1320,
    1324,
    1327,
    1330,
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
    1362,
    1364,
    1366,
    1370,
    1374,
    1376,
    1379,
    1382,
    1385,
    1388,
    1388,
    1391,
    1394,
    1397,
    1400,
    1403,
    1406,
    1409,
    1412,
    1415,
    1418,
    1421,
    1424,
    1427,
    1429,
    1431,
    1433,
    1435,
    1437,
    1438,
    1439,
    1440,
    1443,
    1446,
    1447,
    1448,
    1450,
    1452,
    1455,
    1458,
    1461,
    1464,
    1467,
    1470,
    1473,
    1476,
    1478,
    1480,
    1480,
    1480,
    1483,
    1486,
    1489,
    1492,
    1496,
    1500,
    1503,
    1506,
    1509,
    1512,
    1515,
    1518,
    1521,
    1524,
    1527,
    1530,
    1533,
    1536,
    1540,
    1540,
    1544,
    1547,
    1550,
    1552,
    1554,
    1557,
    1560,
    1564,
    1566,
    1568,
    1571,
    1574,
    1578,
    1580,
    1582,
    1585,
    1588,
    1591,
    1594,
    1598,
    1600,
    1602,
    1605,
    1608,
    1612,
    1615,
    1618,
    1622,
    1625,
    1628,
    1630,
    1632,
    1635,
    1638,
    1641,
    1644,
    1647,
    1650,
    1653,
    1656,
    1659,
    1662,
    1665,
    1668,
    1671,
    1674,
    1679,
    1683,
    1687,
    1687,
    1687,
    1687,
    1690,
    1693,
    1696,
    1699,
    1702,
    1705,
    1709,
    1713,
    1715,
    1719,
    1723,
    1726,
    1729,
    1732,
    1735,
    1738,
    1741,
    1744,
    1747,
    1750,
    1753,
    1756,
    1759,
    1762,
    1765,
    1769,
    1773,
    1776,
    1779,
    1782,
    1785,
    1788,
    1789,
    1792,
    1795,
    1798,
    1801,
    1804,
    1807,
    1812,
    1817,
    1822,
    1827,
    1832,
    1835,
    1838,
    1841,
    1844,
    1846,
    1848,
    1850,
    1852,
    1854,
    1856,
    1859,
    1862,
    1865,
    1868,
    1871,
    1874,
    1877,
    1880,
    1883,
    1886,
    1889,
    1892,
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
    OpTypes::getPCX, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::i32imm, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::i32imm, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::i32imm, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::i32imm, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::i32imm, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::i32imm, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::i32imm, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::i32imm, 
    OpTypes::IntRegs, OpTypes::i32imm, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::brtarget, 
    OpTypes::brtarget, OpTypes::CCOp, 
    OpTypes::brtarget, OpTypes::CCOp, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::bprtarget, OpTypes::CCOp, OpTypes::FCCRegs, 
    OpTypes::bprtarget, OpTypes::CCOp, OpTypes::FCCRegs, 
    OpTypes::bprtarget, OpTypes::CCOp, OpTypes::FCCRegs, 
    OpTypes::bprtarget, OpTypes::CCOp, OpTypes::FCCRegs, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::calltarget, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::i8imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::brtarget, OpTypes::CCOp, 
    OpTypes::brtarget, OpTypes::CCOp, 
    OpTypes::I64Regs, 
    OpTypes::I64Regs, 
    OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::brtarget, OpTypes::CCOp, 
    OpTypes::brtarget, OpTypes::CCOp, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::QFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::FPRegs, 
    OpTypes::QFPRegs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::FCCRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FCCRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    /**/
    /**/
    -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::CCOp, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::CCOp, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::CCOp, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::CCOp, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::CCOp, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::CCOp, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::CCOp, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::CCOp, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::CCOp, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::QFPRegs, 
    OpTypes::DFPRegs, OpTypes::QFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::QFPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, -1, 
    OpTypes::IntRegs, -1, -1, OpTypes::i8imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::CoprocRegs, -1, OpTypes::i32imm, 
    OpTypes::CoprocRegs, -1, -1, 
    OpTypes::IntPair, -1, -1, OpTypes::i8imm, 
    OpTypes::CoprocPair, -1, OpTypes::i32imm, 
    OpTypes::CoprocPair, -1, -1, 
    OpTypes::DFPRegs, -1, -1, OpTypes::i8imm, 
    OpTypes::DFPRegs, -1, OpTypes::i32imm, 
    OpTypes::DFPRegs, -1, -1, 
    OpTypes::IntPair, -1, OpTypes::i32imm, 
    OpTypes::IntPair, -1, -1, 
    OpTypes::FPRegs, -1, -1, OpTypes::i8imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::FPRegs, -1, OpTypes::i32imm, 
    OpTypes::FPRegs, -1, -1, 
    OpTypes::QFPRegs, -1, -1, OpTypes::i8imm, 
    OpTypes::QFPRegs, -1, OpTypes::i32imm, 
    OpTypes::QFPRegs, -1, -1, 
    OpTypes::IntRegs, -1, -1, OpTypes::i8imm, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, -1, 
    OpTypes::IntRegs, -1, -1, OpTypes::i8imm, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, -1, 
    OpTypes::IntRegs, -1, -1, OpTypes::i8imm, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, -1, 
    OpTypes::I64Regs, -1, OpTypes::i32imm, 
    OpTypes::I64Regs, -1, -1, 
    OpTypes::IntRegs, -1, -1, OpTypes::i8imm, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, -1, 
    OpTypes::IntRegs, -1, -1, OpTypes::i8imm, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, -1, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::I64Regs, -1, OpTypes::i32imm, 
    OpTypes::I64Regs, -1, -1, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, -1, 
    OpTypes::I64Regs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::MembarTag, 
    OpTypes::I64Regs, OpTypes::DFPRegs, 
    OpTypes::IntRegs, OpTypes::i32imm, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::i32imm, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::i32imm, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::DFPRegs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    /**/
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::ASRRegs, 
    OpTypes::IntRegs, OpTypes::PRRegs, 
    OpTypes::IntRegs, 
    OpTypes::IntRegs, 
    OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::i64imm, 
    OpTypes::IntRegs, OpTypes::i32imm, 
    /**/
    /**/
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i32imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, OpTypes::ASRRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::ASRRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i32imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i32imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    -1, -1, OpTypes::IntRegs, OpTypes::i8imm, 
    /**/
    -1, -1, OpTypes::IntRegs, OpTypes::i8imm, 
    -1, OpTypes::i32imm, OpTypes::IntRegs, 
    -1, -1, OpTypes::IntRegs, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, OpTypes::i32imm, OpTypes::CoprocRegs, 
    -1, -1, OpTypes::CoprocRegs, 
    -1, -1, OpTypes::IntPair, OpTypes::i8imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, OpTypes::i32imm, OpTypes::CoprocPair, 
    -1, -1, OpTypes::CoprocPair, 
    -1, -1, OpTypes::DFPRegs, OpTypes::i8imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, OpTypes::i32imm, OpTypes::DFPRegs, 
    -1, -1, OpTypes::DFPRegs, 
    -1, OpTypes::i32imm, OpTypes::IntPair, 
    -1, -1, OpTypes::IntPair, 
    -1, -1, OpTypes::FPRegs, OpTypes::i8imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, OpTypes::i32imm, OpTypes::FPRegs, 
    -1, -1, OpTypes::FPRegs, 
    -1, -1, OpTypes::IntRegs, OpTypes::i8imm, 
    -1, OpTypes::i32imm, OpTypes::IntRegs, 
    -1, -1, OpTypes::IntRegs, 
    -1, -1, OpTypes::QFPRegs, OpTypes::i8imm, 
    -1, OpTypes::i32imm, OpTypes::QFPRegs, 
    -1, -1, OpTypes::QFPRegs, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, OpTypes::i32imm, OpTypes::I64Regs, 
    -1, -1, OpTypes::I64Regs, 
    -1, OpTypes::i32imm, OpTypes::IntRegs, 
    -1, -1, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, -1, -1, OpTypes::i8imm, OpTypes::IntRegs, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, OpTypes::IntRegs, 
    OpTypes::IntRegs, -1, -1, OpTypes::IntRegs, 
    /**/
    /**/
    /**/
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::i32imm, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::TLSSym, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::TLSSym, 
    OpTypes::calltarget, OpTypes::TLSSym, 
    OpTypes::IntRegs, -1, -1, OpTypes::TLSSym, 
    OpTypes::IntRegs, -1, -1, OpTypes::TLSSym, 
    OpTypes::IntRegs, OpTypes::i32imm, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::i32imm, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, OpTypes::ASRRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::ASRRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::i32imm, 
    OpTypes::FCCRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FCCRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FCCRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FCCRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::FCCRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FCCRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::FCCRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::CCOp, 
    OpTypes::QFPRegs, OpTypes::FCCRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::CCOp, 
    OpTypes::FPRegs, OpTypes::FCCRegs, OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::FCCRegs, OpTypes::i32imm, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::FCCRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::ASRRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::ASRRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::PRRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::PRRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE


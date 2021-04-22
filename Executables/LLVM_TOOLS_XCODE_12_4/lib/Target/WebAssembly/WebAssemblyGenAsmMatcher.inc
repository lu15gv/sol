/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Assembly Matcher Source Fragment                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  FeatureBitset ComputeAvailableFeatures(const FeatureBitset& FB) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const OperandVector &Operands);
  void convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) override;
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo,
                                FeatureBitset &MissingFeatures,
                                bool matchingInlineAsm,
                                unsigned VariantID = 0);
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo,
                                bool matchingInlineAsm,
                                unsigned VariantID = 0) {
    FeatureBitset MissingFeatures;
    return MatchInstructionImpl(Operands, Inst, ErrorInfo, MissingFeatures,
                                matchingInlineAsm, VariantID);
  }

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_HasSIMD128Bit = 5,
  Feature_HasUnimplementedSIMD128Bit = 8,
  Feature_HasAtomicsBit = 0,
  Feature_HasMultivalueBit = 3,
  Feature_HasNontrappingFPToIntBit = 4,
  Feature_NotHasNontrappingFPToIntBit = 9,
  Feature_HasSignExtBit = 6,
  Feature_HasTailCallBit = 7,
  Feature_HasExceptionHandlingBit = 2,
  Feature_HasBulkMemoryBit = 1,
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_HasSIMD128Bit: return "simd128";
  case Feature_HasUnimplementedSIMD128Bit: return "unimplemented-simd128";
  case Feature_HasAtomicsBit: return "atomics";
  case Feature_HasMultivalueBit: return "multivalue";
  case Feature_HasNontrappingFPToIntBit: return "nontrapping-fptoint";
  case Feature_NotHasNontrappingFPToIntBit: return "nontrapping-fptoint";
  case Feature_HasSignExtBit: return "sign-ext";
  case Feature_HasTailCallBit: return "tail-call";
  case Feature_HasExceptionHandlingBit: return "exception-handling";
  case Feature_HasBulkMemoryBit: return "bulk-memory";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

static const uint8_t TiedAsmOperandTable[][3] = { /* empty  */ {0, 0, 0} };

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_imm_95_0,
  CVT_95_addImmOperands,
  CVT_95_addBrListOperands,
  CVT_95_addFPImmOperands,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__imm_95_0,
  Convert__Imm1_1__Imm1_0,
  Convert__Imm1_0,
  Convert__Imm1_0__Imm1_1,
  Convert__BrList1_0,
  Convert__Imm1_0__imm_95_0,
  Convert_NoOperands,
  Convert__imm_95_0__imm_95_0,
  Convert__FPImm1_0,
  Convert__FPImm1_0__FPImm1_1,
  Convert__FPImm1_0__FPImm1_1__FPImm1_2__FPImm1_3,
  Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3,
  Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7,
  Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7__Imm1_8__Imm1_9__Imm1_10__Imm1_11__Imm1_12__Imm1_13__Imm1_14__Imm1_15,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][33] = {
  // Convert__imm_95_0
  { CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_1__Imm1_0
  { CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0__Imm1_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BrList1_0
  { CVT_95_addBrListOperands, 1, CVT_Done },
  // Convert__Imm1_0__imm_95_0
  { CVT_95_addImmOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__imm_95_0__imm_95_0
  { CVT_imm_95_0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__FPImm1_0
  { CVT_95_addFPImmOperands, 1, CVT_Done },
  // Convert__FPImm1_0__FPImm1_1
  { CVT_95_addFPImmOperands, 1, CVT_95_addFPImmOperands, 2, CVT_Done },
  // Convert__FPImm1_0__FPImm1_1__FPImm1_2__FPImm1_3
  { CVT_95_addFPImmOperands, 1, CVT_95_addFPImmOperands, 2, CVT_95_addFPImmOperands, 3, CVT_95_addFPImmOperands, 4, CVT_Done },
  // Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_95_addImmOperands, 7, CVT_95_addImmOperands, 8, CVT_Done },
  // Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7__Imm1_8__Imm1_9__Imm1_10__Imm1_11__Imm1_12__Imm1_13__Imm1_14__Imm1_15
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_95_addImmOperands, 7, CVT_95_addImmOperands, 8, CVT_95_addImmOperands, 9, CVT_95_addImmOperands, 10, CVT_95_addImmOperands, 11, CVT_95_addImmOperands, 12, CVT_95_addImmOperands, 13, CVT_95_addImmOperands, 14, CVT_95_addImmOperands, 15, CVT_95_addImmOperands, 16, CVT_Done },
};

void WebAssemblyAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  unsigned OpIdx;
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    OpIdx = *(p + 1);
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<WebAssemblyOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied: {
      assert(OpIdx < (size_t)(std::end(TiedAsmOperandTable) -
                          std::begin(TiedAsmOperandTable)) &&
             "Tied operand not found");
      unsigned TiedResOpnd = TiedAsmOperandTable[OpIdx][0];
      if (TiedResOpnd != (uint8_t) -1)
        Inst.addOperand(Inst.getOperand(TiedResOpnd));
      break;
    }
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_95_addImmOperands:
      static_cast<WebAssemblyOperand&>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addBrListOperands:
      static_cast<WebAssemblyOperand&>(*Operands[OpIdx]).addBrListOperands(Inst, 1);
      break;
    case CVT_95_addFPImmOperands:
      static_cast<WebAssemblyOperand&>(*Operands[OpIdx]).addFPImmOperands(Inst, 1);
      break;
    }
  }
}

void WebAssemblyAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBrListOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addFPImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  OptionalMatchClass = 1,
  MCK_LAST_TOKEN = OptionalMatchClass,
  MCK_EXNREF, // register class 'EXNREF'
  MCK_F32, // register class 'F32'
  MCK_F64, // register class 'F64'
  MCK_V128, // register class 'V128'
  MCK_I32, // register class 'I32'
  MCK_I64, // register class 'I64'
  MCK_LAST_REGISTER = MCK_I64,
  MCK_BrList, // user defined class 'BrListAsmOperand'
  MCK_FPImm, // user defined class 'FPImmAsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  NumMatchClassKinds
};

} // end anonymous namespace

static unsigned getDiagKindFromRegisterClass(MatchClassKind RegisterClass) {
  return MCTargetAsmParser::Match_InvalidOperand;
}

static MatchClassKind matchTokenString(StringRef Name) {
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  return false;
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  WebAssemblyOperand &Operand = (WebAssemblyOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken() && Kind <= MCK_LAST_TOKEN)
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  switch (Kind) {
  default: break;
  // 'BrList' class
  case MCK_BrList: {
    DiagnosticPredicate DP(Operand.isBrList());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'FPImm' class
  case MCK_FPImm: {
    DiagnosticPredicate DP(Operand.isFPImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'Imm' class
  case MCK_Imm: {
    DiagnosticPredicate DP(Operand.isImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case WebAssembly::FP32: OpKind = MCK_I32; break;
    case WebAssembly::FP64: OpKind = MCK_I64; break;
    case WebAssembly::SP32: OpKind = MCK_I32; break;
    case WebAssembly::SP64: OpKind = MCK_I64; break;
    case WebAssembly::I32_0: OpKind = MCK_I32; break;
    case WebAssembly::I64_0: OpKind = MCK_I64; break;
    case WebAssembly::F32_0: OpKind = MCK_F32; break;
    case WebAssembly::F64_0: OpKind = MCK_F64; break;
    case WebAssembly::V128_0: OpKind = MCK_V128; break;
    case WebAssembly::EXNREF_0: OpKind = MCK_EXNREF; break;
    }
    return isSubclass(OpKind, Kind) ? (unsigned)MCTargetAsmParser::Match_Success :
                                      getDiagKindFromRegisterClass(Kind);
  }

  if (Kind > MCK_LAST_TOKEN && Kind <= MCK_LAST_REGISTER)
    return getDiagKindFromRegisterClass(Kind);

  return MCTargetAsmParser::Match_InvalidOperand;
}

#ifndef NDEBUG
const char *getMatchClassName(MatchClassKind Kind) {
  switch (Kind) {
  case InvalidMatchClass: return "InvalidMatchClass";
  case OptionalMatchClass: return "OptionalMatchClass";
  case MCK_EXNREF: return "MCK_EXNREF";
  case MCK_F32: return "MCK_F32";
  case MCK_F64: return "MCK_F64";
  case MCK_V128: return "MCK_V128";
  case MCK_I32: return "MCK_I32";
  case MCK_I64: return "MCK_I64";
  case MCK_BrList: return "MCK_BrList";
  case MCK_FPImm: return "MCK_FPImm";
  case MCK_Imm: return "MCK_Imm";
  case NumMatchClassKinds: return "NumMatchClassKinds";
  }
  llvm_unreachable("unhandled MatchClassKind!");
}

#endif // NDEBUG
FeatureBitset WebAssemblyAsmParser::
ComputeAvailableFeatures(const FeatureBitset& FB) const {
  FeatureBitset Features;
  if ((FB[WebAssembly::FeatureSIMD128]))
    Features.set(Feature_HasSIMD128Bit);
  if ((FB[WebAssembly::FeatureUnimplementedSIMD128]))
    Features.set(Feature_HasUnimplementedSIMD128Bit);
  if ((FB[WebAssembly::FeatureAtomics]))
    Features.set(Feature_HasAtomicsBit);
  if ((FB[WebAssembly::FeatureMultivalue]))
    Features.set(Feature_HasMultivalueBit);
  if ((FB[WebAssembly::FeatureNontrappingFPToInt]))
    Features.set(Feature_HasNontrappingFPToIntBit);
  if ((!FB[WebAssembly::FeatureNontrappingFPToInt]))
    Features.set(Feature_NotHasNontrappingFPToIntBit);
  if ((FB[WebAssembly::FeatureSignExt]))
    Features.set(Feature_HasSignExtBit);
  if ((FB[WebAssembly::FeatureTailCall]))
    Features.set(Feature_HasTailCallBit);
  if ((FB[WebAssembly::FeatureExceptionHandling]))
    Features.set(Feature_HasExceptionHandlingBit);
  if ((FB[WebAssembly::FeatureBulkMemory]))
    Features.set(Feature_HasBulkMemoryBit);
  return Features;
}

static bool checkAsmTiedOperandConstraints(const WebAssemblyAsmParser&AsmParser,
                               unsigned Kind,
                               const OperandVector &Operands,
                               uint64_t &ErrorInfo) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    case CVT_Tied: {
      unsigned OpIdx = *(p+1);
      assert(OpIdx < (size_t)(std::end(TiedAsmOperandTable) -
                              std::begin(TiedAsmOperandTable)) &&
             "Tied operand not found");
      unsigned OpndNum1 = TiedAsmOperandTable[OpIdx][1];
      unsigned OpndNum2 = TiedAsmOperandTable[OpIdx][2];
      if (OpndNum1 != OpndNum2) {
        auto &SrcOp1 = Operands[OpndNum1];
        auto &SrcOp2 = Operands[OpndNum2];
        if (SrcOp1->isReg() && SrcOp2->isReg()) {
          if (!AsmParser.regsEqual(*SrcOp1, *SrcOp2)) {
            ErrorInfo = OpndNum2;
            return false;
          }
        }
      }
      break;
    }
    default:
      break;
    }
  }
  return true;
}

static const char *const MnemonicTable =
    "\014atomic.fence\015atomic.notify\005block\002br\005br_if\tbr_on_exn\010"
    "br_table\004call\015call_indirect\005catch\010catchret\ncleanupret\016c"
    "ompiler_fence\tdata.drop\004drop\004else\003end\tend_block\014end_funct"
    "ion\006end_if\010end_loop\007end_try\013exnref.call\024exnref.call_indi"
    "rect\015exnref.select\007f32.abs\007f32.add\010f32.call\021f32.call_ind"
    "irect\010f32.ceil\tf32.const\021f32.convert_i32_s\021f32.convert_i32_u\021"
    "f32.convert_i64_s\021f32.convert_i64_u\014f32.copysign\016f32.demote_f6"
    "4\007f32.div\006f32.eq\tf32.floor\006f32.ge\006f32.gt\006f32.le\010f32."
    "load\006f32.lt\007f32.max\007f32.min\007f32.mul\006f32.ne\013f32.neares"
    "t\007f32.neg\023f32.reinterpret_i32\nf32.select\010f32.sqrt\tf32.store\007"
    "f32.sub\tf32.trunc\tf32x4.abs\tf32x4.add\025f32x4.convert_i32x4_s\025f3"
    "2x4.convert_i32x4_u\tf32x4.div\010f32x4.eq\022f32x4.extract_lane\010f32"
    "x4.ge\010f32x4.gt\010f32x4.le\010f32x4.lt\tf32x4.max\tf32x4.min\tf32x4."
    "mul\010f32x4.ne\tf32x4.neg\nf32x4.qfma\nf32x4.qfms\022f32x4.replace_lan"
    "e\013f32x4.splat\nf32x4.sqrt\tf32x4.sub\007f64.abs\007f64.add\010f64.ca"
    "ll\021f64.call_indirect\010f64.ceil\tf64.const\021f64.convert_i32_s\021"
    "f64.convert_i32_u\021f64.convert_i64_s\021f64.convert_i64_u\014f64.copy"
    "sign\007f64.div\006f64.eq\tf64.floor\006f64.ge\006f64.gt\006f64.le\010f"
    "64.load\006f64.lt\007f64.max\007f64.min\007f64.mul\006f64.ne\013f64.nea"
    "rest\007f64.neg\017f64.promote_f32\023f64.reinterpret_i64\nf64.select\010"
    "f64.sqrt\tf64.store\007f64.sub\tf64.trunc\tf64x2.abs\tf64x2.add\025f64x"
    "2.convert_i64x2_s\025f64x2.convert_i64x2_u\tf64x2.div\010f64x2.eq\022f6"
    "4x2.extract_lane\010f64x2.ge\010f64x2.gt\010f64x2.le\010f64x2.lt\tf64x2"
    ".max\tf64x2.min\tf64x2.mul\010f64x2.ne\tf64x2.neg\nf64x2.qfma\nf64x2.qf"
    "ms\022f64x2.replace_lane\013f64x2.splat\nf64x2.sqrt\tf64x2.sub\nglobal."
    "get\nglobal.set\ti16x8.add\024i16x8.add_saturate_s\024i16x8.add_saturat"
    "e_u\016i16x8.all_true\016i16x8.any_true\014i16x8.avgr_u\010i16x8.eq\024"
    "i16x8.extract_lane_s\024i16x8.extract_lane_u\ni16x8.ge_s\ni16x8.ge_u\ni"
    "16x8.gt_s\ni16x8.gt_u\ni16x8.le_s\ni16x8.le_u\017i16x8.load8x8_s\017i16"
    "x8.load8x8_u\ni16x8.lt_s\ni16x8.lt_u\013i16x8.max_s\013i16x8.max_u\013i"
    "16x8.min_s\013i16x8.min_u\ti16x8.mul\024i16x8.narrow_i32x4_s\024i16x8.n"
    "arrow_i32x4_u\010i16x8.ne\ti16x8.neg\022i16x8.replace_lane\ti16x8.shl\013"
    "i16x8.shr_s\013i16x8.shr_u\013i16x8.splat\ti16x8.sub\024i16x8.sub_satur"
    "ate_s\024i16x8.sub_saturate_u\030i16x8.widen_high_i8x16_s\030i16x8.wide"
    "n_high_i8x16_u\027i16x8.widen_low_i8x16_s\027i16x8.widen_low_i8x16_u\007"
    "i32.add\007i32.and\017i32.atomic.load\023i32.atomic.load16_u\022i32.ato"
    "mic.load8_u\022i32.atomic.rmw.add\022i32.atomic.rmw.and\026i32.atomic.r"
    "mw.cmpxchg\021i32.atomic.rmw.or\022i32.atomic.rmw.sub\023i32.atomic.rmw"
    ".xchg\022i32.atomic.rmw.xor\026i32.atomic.rmw16.add_u\026i32.atomic.rmw"
    "16.and_u\032i32.atomic.rmw16.cmpxchg_u\025i32.atomic.rmw16.or_u\026i32."
    "atomic.rmw16.sub_u\027i32.atomic.rmw16.xchg_u\026i32.atomic.rmw16.xor_u"
    "\025i32.atomic.rmw8.add_u\025i32.atomic.rmw8.and_u\031i32.atomic.rmw8.c"
    "mpxchg_u\024i32.atomic.rmw8.or_u\025i32.atomic.rmw8.sub_u\026i32.atomic"
    ".rmw8.xchg_u\025i32.atomic.rmw8.xor_u\020i32.atomic.store\022i32.atomic"
    ".store16\021i32.atomic.store8\017i32.atomic.wait\010i32.call\021i32.cal"
    "l_indirect\007i32.clz\ti32.const\007i32.ctz\ti32.div_s\ti32.div_u\006i3"
    "2.eq\007i32.eqz\016i32.extend16_s\015i32.extend8_s\010i32.ge_s\010i32.g"
    "e_u\010i32.gt_s\010i32.gt_u\010i32.le_s\010i32.le_u\010i32.load\014i32."
    "load16_s\014i32.load16_u\013i32.load8_s\013i32.load8_u\010i32.lt_s\010i"
    "32.lt_u\007i32.mul\006i32.ne\006i32.or\ni32.popcnt\023i32.reinterpret_f"
    "32\ti32.rem_s\ti32.rem_u\010i32.rotl\010i32.rotr\ni32.select\007i32.shl"
    "\ti32.shr_s\ti32.shr_u\ti32.store\013i32.store16\ni32.store8\007i32.sub"
    "\017i32.trunc_f32_s\017i32.trunc_f32_u\017i32.trunc_f64_s\017i32.trunc_"
    "f64_u\023i32.trunc_sat_f32_s\023i32.trunc_sat_f32_u\023i32.trunc_sat_f6"
    "4_s\023i32.trunc_sat_f64_u\014i32.wrap_i64\007i32.xor\ti32x4.add\016i32"
    "x4.all_true\016i32x4.any_true\021i32x4.dot_i16x8_s\010i32x4.eq\022i32x4"
    ".extract_lane\ni32x4.ge_s\ni32x4.ge_u\ni32x4.gt_s\ni32x4.gt_u\ni32x4.le"
    "_s\ni32x4.le_u\020i32x4.load16x4_s\020i32x4.load16x4_u\ni32x4.lt_s\ni32"
    "x4.lt_u\013i32x4.max_s\013i32x4.max_u\013i32x4.min_s\013i32x4.min_u\ti3"
    "2x4.mul\010i32x4.ne\ti32x4.neg\022i32x4.replace_lane\ti32x4.shl\013i32x"
    "4.shr_s\013i32x4.shr_u\013i32x4.splat\ti32x4.sub\027i32x4.trunc_sat_f32"
    "x4_s\027i32x4.trunc_sat_f32x4_u\030i32x4.widen_high_i16x8_s\030i32x4.wi"
    "den_high_i16x8_u\027i32x4.widen_low_i16x8_s\027i32x4.widen_low_i16x8_u\007"
    "i64.add\007i64.and\017i64.atomic.load\023i64.atomic.load16_u\023i64.ato"
    "mic.load32_u\022i64.atomic.load8_u\022i64.atomic.rmw.add\022i64.atomic."
    "rmw.and\026i64.atomic.rmw.cmpxchg\021i64.atomic.rmw.or\022i64.atomic.rm"
    "w.sub\023i64.atomic.rmw.xchg\022i64.atomic.rmw.xor\026i64.atomic.rmw16."
    "add_u\026i64.atomic.rmw16.and_u\032i64.atomic.rmw16.cmpxchg_u\025i64.at"
    "omic.rmw16.or_u\026i64.atomic.rmw16.sub_u\027i64.atomic.rmw16.xchg_u\026"
    "i64.atomic.rmw16.xor_u\026i64.atomic.rmw32.add_u\026i64.atomic.rmw32.an"
    "d_u\032i64.atomic.rmw32.cmpxchg_u\025i64.atomic.rmw32.or_u\026i64.atomi"
    "c.rmw32.sub_u\027i64.atomic.rmw32.xchg_u\026i64.atomic.rmw32.xor_u\025i"
    "64.atomic.rmw8.add_u\025i64.atomic.rmw8.and_u\031i64.atomic.rmw8.cmpxch"
    "g_u\024i64.atomic.rmw8.or_u\025i64.atomic.rmw8.sub_u\026i64.atomic.rmw8"
    ".xchg_u\025i64.atomic.rmw8.xor_u\020i64.atomic.store\022i64.atomic.stor"
    "e16\022i64.atomic.store32\021i64.atomic.store8\017i64.atomic.wait\010i6"
    "4.call\021i64.call_indirect\007i64.clz\ti64.const\007i64.ctz\ti64.div_s"
    "\ti64.div_u\006i64.eq\007i64.eqz\016i64.extend16_s\016i64.extend32_s\015"
    "i64.extend8_s\020i64.extend_i32_s\020i64.extend_i32_u\010i64.ge_s\010i6"
    "4.ge_u\010i64.gt_s\010i64.gt_u\010i64.le_s\010i64.le_u\010i64.load\014i"
    "64.load16_s\014i64.load16_u\014i64.load32_s\014i64.load32_u\013i64.load"
    "8_s\013i64.load8_u\010i64.lt_s\010i64.lt_u\007i64.mul\006i64.ne\006i64."
    "or\ni64.popcnt\023i64.reinterpret_f64\ti64.rem_s\ti64.rem_u\010i64.rotl"
    "\010i64.rotr\ni64.select\007i64.shl\ti64.shr_s\ti64.shr_u\ti64.store\013"
    "i64.store16\013i64.store32\ni64.store8\007i64.sub\017i64.trunc_f32_s\017"
    "i64.trunc_f32_u\017i64.trunc_f64_s\017i64.trunc_f64_u\023i64.trunc_sat_"
    "f32_s\023i64.trunc_sat_f32_u\023i64.trunc_sat_f64_s\023i64.trunc_sat_f6"
    "4_u\007i64.xor\ti64x2.add\016i64x2.all_true\016i64x2.any_true\022i64x2."
    "extract_lane\020i64x2.load32x2_s\020i64x2.load32x2_u\ti64x2.neg\022i64x"
    "2.replace_lane\ti64x2.shl\013i64x2.shr_s\013i64x2.shr_u\013i64x2.splat\t"
    "i64x2.sub\027i64x2.trunc_sat_f64x2_s\027i64x2.trunc_sat_f64x2_u\ti8x16."
    "add\024i8x16.add_saturate_s\024i8x16.add_saturate_u\016i8x16.all_true\016"
    "i8x16.any_true\014i8x16.avgr_u\010i8x16.eq\024i8x16.extract_lane_s\024i"
    "8x16.extract_lane_u\ni8x16.ge_s\ni8x16.ge_u\ni8x16.gt_s\ni8x16.gt_u\ni8"
    "x16.le_s\ni8x16.le_u\ni8x16.lt_s\ni8x16.lt_u\013i8x16.max_s\013i8x16.ma"
    "x_u\013i8x16.min_s\013i8x16.min_u\ti8x16.mul\024i8x16.narrow_i16x8_s\024"
    "i8x16.narrow_i16x8_u\010i8x16.ne\ti8x16.neg\022i8x16.replace_lane\ti8x1"
    "6.shl\013i8x16.shr_s\013i8x16.shr_u\013i8x16.splat\ti8x16.sub\024i8x16."
    "sub_saturate_s\024i8x16.sub_saturate_u\002if\tlocal.get\tlocal.set\tloc"
    "al.tee\004loop\013memory.copy\013memory.fill\013memory.grow\013memory.i"
    "nit\013memory.size\003nop\007rethrow\020rethrow_in_catch\006return\013r"
    "eturn_call\024return_call_indirect\005throw\003try\013unreachable\010v1"
    "28.and\013v128.andnot\016v128.bitselect\tv128.call\022v128.call_indirec"
    "t\nv128.const\tv128.load\010v128.not\007v128.or\nv128.store\010v128.xor"
    "\020v16x8.load_splat\020v32x4.load_splat\020v64x2.load_splat\020v8x16.l"
    "oad_splat\015v8x16.shuffle\015v8x16.swizzle";

// Feature bitsets.
enum : uint8_t {
  AMFBS_None,
  AMFBS_HasAtomics,
  AMFBS_HasBulkMemory,
  AMFBS_HasExceptionHandling,
  AMFBS_HasNontrappingFPToInt,
  AMFBS_HasSIMD128,
  AMFBS_HasSignExt,
  AMFBS_HasTailCall,
  AMFBS_HasUnimplementedSIMD128,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // AMFBS_None
  {Feature_HasAtomicsBit, },
  {Feature_HasBulkMemoryBit, },
  {Feature_HasExceptionHandlingBit, },
  {Feature_HasNontrappingFPToIntBit, },
  {Feature_HasSIMD128Bit, },
  {Feature_HasSignExtBit, },
  {Feature_HasTailCallBit, },
  {Feature_HasUnimplementedSIMD128Bit, },
};

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint8_t ConvertFn;
    uint8_t RequiredFeaturesIdx;
    uint8_t Classes[16];
    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace

static const MatchEntry MatchTable0[] = {
  { 0 /* atomic.fence */, WebAssembly::ATOMIC_FENCE_S, Convert__imm_95_0, AMFBS_HasAtomics, {  }, },
  { 13 /* atomic.notify */, WebAssembly::ATOMIC_NOTIFY_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 27 /* block */, WebAssembly::BLOCK_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 33 /* br */, WebAssembly::BR_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 36 /* br_if */, WebAssembly::BR_IF_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 42 /* br_on_exn */, WebAssembly::BR_ON_EXN_S, Convert__Imm1_0__Imm1_1, AMFBS_HasExceptionHandling, { MCK_Imm, MCK_Imm }, },
  { 52 /* br_table */, WebAssembly::BR_TABLE_I32_S, Convert__BrList1_0, AMFBS_None, { MCK_BrList }, },
  { 52 /* br_table */, WebAssembly::BR_TABLE_I64_S, Convert__BrList1_0, AMFBS_None, { MCK_BrList }, },
  { 61 /* call */, WebAssembly::CALL_VOID_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 66 /* call_indirect */, WebAssembly::CALL_INDIRECT_VOID_S, Convert__Imm1_0__imm_95_0, AMFBS_None, { MCK_Imm }, },
  { 80 /* catch */, WebAssembly::CATCH_S, Convert_NoOperands, AMFBS_HasExceptionHandling, {  }, },
  { 86 /* catchret */, WebAssembly::CATCHRET_S, Convert__imm_95_0__imm_95_0, AMFBS_HasExceptionHandling, {  }, },
  { 95 /* cleanupret */, WebAssembly::CLEANUPRET_S, Convert_NoOperands, AMFBS_HasExceptionHandling, {  }, },
  { 106 /* compiler_fence */, WebAssembly::COMPILER_FENCE_S, Convert_NoOperands, AMFBS_HasAtomics, {  }, },
  { 121 /* data.drop */, WebAssembly::DATA_DROP_S, Convert__Imm1_0, AMFBS_HasBulkMemory, { MCK_Imm }, },
  { 131 /* drop */, WebAssembly::DROP_EXNREF_S, Convert_NoOperands, AMFBS_HasExceptionHandling, {  }, },
  { 131 /* drop */, WebAssembly::DROP_V128_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 131 /* drop */, WebAssembly::DROP_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 131 /* drop */, WebAssembly::DROP_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 131 /* drop */, WebAssembly::DROP_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 131 /* drop */, WebAssembly::DROP_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 136 /* else */, WebAssembly::ELSE_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 141 /* end */, WebAssembly::END_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 145 /* end_block */, WebAssembly::END_BLOCK_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 155 /* end_function */, WebAssembly::END_FUNCTION_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 168 /* end_if */, WebAssembly::END_IF_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 175 /* end_loop */, WebAssembly::END_LOOP_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 184 /* end_try */, WebAssembly::END_TRY_S, Convert_NoOperands, AMFBS_HasExceptionHandling, {  }, },
  { 192 /* exnref.call */, WebAssembly::CALL_exnref_S, Convert__Imm1_0, AMFBS_HasExceptionHandling, { MCK_Imm }, },
  { 204 /* exnref.call_indirect */, WebAssembly::CALL_INDIRECT_exnref_S, Convert__Imm1_0__imm_95_0, AMFBS_HasExceptionHandling, { MCK_Imm }, },
  { 225 /* exnref.select */, WebAssembly::SELECT_EXNREF_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 239 /* f32.abs */, WebAssembly::ABS_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 247 /* f32.add */, WebAssembly::ADD_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 255 /* f32.call */, WebAssembly::CALL_f32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 264 /* f32.call_indirect */, WebAssembly::CALL_INDIRECT_f32_S, Convert__Imm1_0__imm_95_0, AMFBS_None, { MCK_Imm }, },
  { 282 /* f32.ceil */, WebAssembly::CEIL_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 291 /* f32.const */, WebAssembly::CONST_F32_S, Convert__FPImm1_0, AMFBS_None, { MCK_FPImm }, },
  { 301 /* f32.convert_i32_s */, WebAssembly::F32_CONVERT_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 319 /* f32.convert_i32_u */, WebAssembly::F32_CONVERT_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 337 /* f32.convert_i64_s */, WebAssembly::F32_CONVERT_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 355 /* f32.convert_i64_u */, WebAssembly::F32_CONVERT_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 373 /* f32.copysign */, WebAssembly::COPYSIGN_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 386 /* f32.demote_f64 */, WebAssembly::F32_DEMOTE_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 401 /* f32.div */, WebAssembly::DIV_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 409 /* f32.eq */, WebAssembly::EQ_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 416 /* f32.floor */, WebAssembly::FLOOR_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 426 /* f32.ge */, WebAssembly::GE_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 433 /* f32.gt */, WebAssembly::GT_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 440 /* f32.le */, WebAssembly::LE_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 447 /* f32.load */, WebAssembly::LOAD_F32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 456 /* f32.lt */, WebAssembly::LT_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 463 /* f32.max */, WebAssembly::MAX_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 471 /* f32.min */, WebAssembly::MIN_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 479 /* f32.mul */, WebAssembly::MUL_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 487 /* f32.ne */, WebAssembly::NE_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 494 /* f32.nearest */, WebAssembly::NEAREST_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 506 /* f32.neg */, WebAssembly::NEG_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 514 /* f32.reinterpret_i32 */, WebAssembly::F32_REINTERPRET_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 534 /* f32.select */, WebAssembly::SELECT_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 545 /* f32.sqrt */, WebAssembly::SQRT_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 554 /* f32.store */, WebAssembly::STORE_F32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 564 /* f32.sub */, WebAssembly::SUB_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 572 /* f32.trunc */, WebAssembly::TRUNC_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 582 /* f32x4.abs */, WebAssembly::ABS_v4f32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 592 /* f32x4.add */, WebAssembly::ADD_v4f32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 602 /* f32x4.convert_i32x4_s */, WebAssembly::sint_to_fp_v4f32_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 624 /* f32x4.convert_i32x4_u */, WebAssembly::uint_to_fp_v4f32_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 646 /* f32x4.div */, WebAssembly::DIV_v4f32_S, Convert_NoOperands, AMFBS_HasUnimplementedSIMD128, {  }, },
  { 656 /* f32x4.eq */, WebAssembly::EQ_v4f32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 665 /* f32x4.extract_lane */, WebAssembly::EXTRACT_LANE_v4f32_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 684 /* f32x4.ge */, WebAssembly::GE_v4f32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 693 /* f32x4.gt */, WebAssembly::GT_v4f32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 702 /* f32x4.le */, WebAssembly::LE_v4f32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 711 /* f32x4.lt */, WebAssembly::LT_v4f32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 720 /* f32x4.max */, WebAssembly::MAX_v4f32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 730 /* f32x4.min */, WebAssembly::MIN_v4f32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 740 /* f32x4.mul */, WebAssembly::MUL_v4f32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 750 /* f32x4.ne */, WebAssembly::NE_v4f32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 759 /* f32x4.neg */, WebAssembly::NEG_v4f32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 769 /* f32x4.qfma */, WebAssembly::QFMA_v4f32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 780 /* f32x4.qfms */, WebAssembly::QFMS_v4f32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 791 /* f32x4.replace_lane */, WebAssembly::REPLACE_LANE_v4f32_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 810 /* f32x4.splat */, WebAssembly::SPLAT_v4f32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 822 /* f32x4.sqrt */, WebAssembly::SQRT_v4f32_S, Convert_NoOperands, AMFBS_HasUnimplementedSIMD128, {  }, },
  { 833 /* f32x4.sub */, WebAssembly::SUB_v4f32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 843 /* f64.abs */, WebAssembly::ABS_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 851 /* f64.add */, WebAssembly::ADD_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 859 /* f64.call */, WebAssembly::CALL_f64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 868 /* f64.call_indirect */, WebAssembly::CALL_INDIRECT_f64_S, Convert__Imm1_0__imm_95_0, AMFBS_None, { MCK_Imm }, },
  { 886 /* f64.ceil */, WebAssembly::CEIL_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 895 /* f64.const */, WebAssembly::CONST_F64_S, Convert__FPImm1_0, AMFBS_None, { MCK_FPImm }, },
  { 905 /* f64.convert_i32_s */, WebAssembly::F64_CONVERT_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 923 /* f64.convert_i32_u */, WebAssembly::F64_CONVERT_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 941 /* f64.convert_i64_s */, WebAssembly::F64_CONVERT_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 959 /* f64.convert_i64_u */, WebAssembly::F64_CONVERT_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 977 /* f64.copysign */, WebAssembly::COPYSIGN_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 990 /* f64.div */, WebAssembly::DIV_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 998 /* f64.eq */, WebAssembly::EQ_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1005 /* f64.floor */, WebAssembly::FLOOR_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1015 /* f64.ge */, WebAssembly::GE_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1022 /* f64.gt */, WebAssembly::GT_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1029 /* f64.le */, WebAssembly::LE_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1036 /* f64.load */, WebAssembly::LOAD_F64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 1045 /* f64.lt */, WebAssembly::LT_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1052 /* f64.max */, WebAssembly::MAX_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1060 /* f64.min */, WebAssembly::MIN_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1068 /* f64.mul */, WebAssembly::MUL_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1076 /* f64.ne */, WebAssembly::NE_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1083 /* f64.nearest */, WebAssembly::NEAREST_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1095 /* f64.neg */, WebAssembly::NEG_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1103 /* f64.promote_f32 */, WebAssembly::F64_PROMOTE_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1119 /* f64.reinterpret_i64 */, WebAssembly::F64_REINTERPRET_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1139 /* f64.select */, WebAssembly::SELECT_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1150 /* f64.sqrt */, WebAssembly::SQRT_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1159 /* f64.store */, WebAssembly::STORE_F64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 1169 /* f64.sub */, WebAssembly::SUB_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1177 /* f64.trunc */, WebAssembly::TRUNC_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1187 /* f64x2.abs */, WebAssembly::ABS_v2f64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1197 /* f64x2.add */, WebAssembly::ADD_v2f64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1207 /* f64x2.convert_i64x2_s */, WebAssembly::sint_to_fp_v2f64_v2i64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1229 /* f64x2.convert_i64x2_u */, WebAssembly::uint_to_fp_v2f64_v2i64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1251 /* f64x2.div */, WebAssembly::DIV_v2f64_S, Convert_NoOperands, AMFBS_HasUnimplementedSIMD128, {  }, },
  { 1261 /* f64x2.eq */, WebAssembly::EQ_v2f64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1270 /* f64x2.extract_lane */, WebAssembly::EXTRACT_LANE_v2f64_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 1289 /* f64x2.ge */, WebAssembly::GE_v2f64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1298 /* f64x2.gt */, WebAssembly::GT_v2f64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1307 /* f64x2.le */, WebAssembly::LE_v2f64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1316 /* f64x2.lt */, WebAssembly::LT_v2f64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1325 /* f64x2.max */, WebAssembly::MAX_v2f64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1335 /* f64x2.min */, WebAssembly::MIN_v2f64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1345 /* f64x2.mul */, WebAssembly::MUL_v2f64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1355 /* f64x2.ne */, WebAssembly::NE_v2f64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1364 /* f64x2.neg */, WebAssembly::NEG_v2f64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1374 /* f64x2.qfma */, WebAssembly::QFMA_v2f64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1385 /* f64x2.qfms */, WebAssembly::QFMS_v2f64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1396 /* f64x2.replace_lane */, WebAssembly::REPLACE_LANE_v2f64_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 1415 /* f64x2.splat */, WebAssembly::SPLAT_v2f64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1427 /* f64x2.sqrt */, WebAssembly::SQRT_v2f64_S, Convert_NoOperands, AMFBS_HasUnimplementedSIMD128, {  }, },
  { 1438 /* f64x2.sub */, WebAssembly::SUB_v2f64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1448 /* global.get */, WebAssembly::GLOBAL_GET_EXNREF_S, Convert__Imm1_0, AMFBS_HasExceptionHandling, { MCK_Imm }, },
  { 1448 /* global.get */, WebAssembly::GLOBAL_GET_V128_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 1448 /* global.get */, WebAssembly::GLOBAL_GET_F32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1448 /* global.get */, WebAssembly::GLOBAL_GET_F64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1448 /* global.get */, WebAssembly::GLOBAL_GET_I32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1448 /* global.get */, WebAssembly::GLOBAL_GET_I64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1459 /* global.set */, WebAssembly::GLOBAL_SET_EXNREF_S, Convert__Imm1_0, AMFBS_HasExceptionHandling, { MCK_Imm }, },
  { 1459 /* global.set */, WebAssembly::GLOBAL_SET_V128_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 1459 /* global.set */, WebAssembly::GLOBAL_SET_F32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1459 /* global.set */, WebAssembly::GLOBAL_SET_F64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1459 /* global.set */, WebAssembly::GLOBAL_SET_I32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1459 /* global.set */, WebAssembly::GLOBAL_SET_I64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1470 /* i16x8.add */, WebAssembly::ADD_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1480 /* i16x8.add_saturate_s */, WebAssembly::ADD_SAT_S_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1501 /* i16x8.add_saturate_u */, WebAssembly::ADD_SAT_U_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1522 /* i16x8.all_true */, WebAssembly::ALLTRUE_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1537 /* i16x8.any_true */, WebAssembly::ANYTRUE_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1552 /* i16x8.avgr_u */, WebAssembly::AVGR_U_v8i16_S, Convert_NoOperands, AMFBS_HasUnimplementedSIMD128, {  }, },
  { 1565 /* i16x8.eq */, WebAssembly::EQ_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1574 /* i16x8.extract_lane_s */, WebAssembly::EXTRACT_LANE_v8i16_s_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 1595 /* i16x8.extract_lane_u */, WebAssembly::EXTRACT_LANE_v8i16_u_S, Convert__Imm1_0, AMFBS_HasUnimplementedSIMD128, { MCK_Imm }, },
  { 1616 /* i16x8.ge_s */, WebAssembly::GE_S_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1627 /* i16x8.ge_u */, WebAssembly::GE_U_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1638 /* i16x8.gt_s */, WebAssembly::GT_S_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1649 /* i16x8.gt_u */, WebAssembly::GT_U_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1660 /* i16x8.le_s */, WebAssembly::LE_S_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1671 /* i16x8.le_u */, WebAssembly::LE_U_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1682 /* i16x8.load8x8_s */, WebAssembly::LOAD_EXTEND_S_v8i16_S, Convert__Imm1_1__Imm1_0, AMFBS_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm }, },
  { 1698 /* i16x8.load8x8_u */, WebAssembly::LOAD_EXTEND_U_v8i16_S, Convert__Imm1_1__Imm1_0, AMFBS_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm }, },
  { 1714 /* i16x8.lt_s */, WebAssembly::LT_S_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1725 /* i16x8.lt_u */, WebAssembly::LT_U_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1736 /* i16x8.max_s */, WebAssembly::MAX_S_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1748 /* i16x8.max_u */, WebAssembly::MAX_U_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1760 /* i16x8.min_s */, WebAssembly::MIN_S_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1772 /* i16x8.min_u */, WebAssembly::MIN_U_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1784 /* i16x8.mul */, WebAssembly::MUL_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1794 /* i16x8.narrow_i32x4_s */, WebAssembly::NARROW_S_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1815 /* i16x8.narrow_i32x4_u */, WebAssembly::NARROW_U_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1836 /* i16x8.ne */, WebAssembly::NE_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1845 /* i16x8.neg */, WebAssembly::NEG_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1855 /* i16x8.replace_lane */, WebAssembly::REPLACE_LANE_v8i16_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 1874 /* i16x8.shl */, WebAssembly::SHL_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1884 /* i16x8.shr_s */, WebAssembly::SHR_S_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1896 /* i16x8.shr_u */, WebAssembly::SHR_U_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1908 /* i16x8.splat */, WebAssembly::SPLAT_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1920 /* i16x8.sub */, WebAssembly::SUB_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1930 /* i16x8.sub_saturate_s */, WebAssembly::SUB_SAT_S_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1951 /* i16x8.sub_saturate_u */, WebAssembly::SUB_SAT_U_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1972 /* i16x8.widen_high_i8x16_s */, WebAssembly::int_wasm_widen_high_signed_v8i16_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1997 /* i16x8.widen_high_i8x16_u */, WebAssembly::int_wasm_widen_high_unsigned_v8i16_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2022 /* i16x8.widen_low_i8x16_s */, WebAssembly::int_wasm_widen_low_signed_v8i16_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2046 /* i16x8.widen_low_i8x16_u */, WebAssembly::int_wasm_widen_low_unsigned_v8i16_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2070 /* i32.add */, WebAssembly::ADD_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2078 /* i32.and */, WebAssembly::AND_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2086 /* i32.atomic.load */, WebAssembly::ATOMIC_LOAD_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2102 /* i32.atomic.load16_u */, WebAssembly::ATOMIC_LOAD16_U_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2122 /* i32.atomic.load8_u */, WebAssembly::ATOMIC_LOAD8_U_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2141 /* i32.atomic.rmw.add */, WebAssembly::ATOMIC_RMW_ADD_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2160 /* i32.atomic.rmw.and */, WebAssembly::ATOMIC_RMW_AND_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2179 /* i32.atomic.rmw.cmpxchg */, WebAssembly::ATOMIC_RMW_CMPXCHG_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2202 /* i32.atomic.rmw.or */, WebAssembly::ATOMIC_RMW_OR_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2220 /* i32.atomic.rmw.sub */, WebAssembly::ATOMIC_RMW_SUB_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2239 /* i32.atomic.rmw.xchg */, WebAssembly::ATOMIC_RMW_XCHG_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2259 /* i32.atomic.rmw.xor */, WebAssembly::ATOMIC_RMW_XOR_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2278 /* i32.atomic.rmw16.add_u */, WebAssembly::ATOMIC_RMW16_U_ADD_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2301 /* i32.atomic.rmw16.and_u */, WebAssembly::ATOMIC_RMW16_U_AND_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2324 /* i32.atomic.rmw16.cmpxchg_u */, WebAssembly::ATOMIC_RMW16_U_CMPXCHG_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2351 /* i32.atomic.rmw16.or_u */, WebAssembly::ATOMIC_RMW16_U_OR_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2373 /* i32.atomic.rmw16.sub_u */, WebAssembly::ATOMIC_RMW16_U_SUB_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2396 /* i32.atomic.rmw16.xchg_u */, WebAssembly::ATOMIC_RMW16_U_XCHG_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2420 /* i32.atomic.rmw16.xor_u */, WebAssembly::ATOMIC_RMW16_U_XOR_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2443 /* i32.atomic.rmw8.add_u */, WebAssembly::ATOMIC_RMW8_U_ADD_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2465 /* i32.atomic.rmw8.and_u */, WebAssembly::ATOMIC_RMW8_U_AND_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2487 /* i32.atomic.rmw8.cmpxchg_u */, WebAssembly::ATOMIC_RMW8_U_CMPXCHG_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2513 /* i32.atomic.rmw8.or_u */, WebAssembly::ATOMIC_RMW8_U_OR_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2534 /* i32.atomic.rmw8.sub_u */, WebAssembly::ATOMIC_RMW8_U_SUB_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2556 /* i32.atomic.rmw8.xchg_u */, WebAssembly::ATOMIC_RMW8_U_XCHG_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2579 /* i32.atomic.rmw8.xor_u */, WebAssembly::ATOMIC_RMW8_U_XOR_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2601 /* i32.atomic.store */, WebAssembly::ATOMIC_STORE_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2618 /* i32.atomic.store16 */, WebAssembly::ATOMIC_STORE16_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2637 /* i32.atomic.store8 */, WebAssembly::ATOMIC_STORE8_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2655 /* i32.atomic.wait */, WebAssembly::ATOMIC_WAIT_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2671 /* i32.call */, WebAssembly::CALL_i32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 2680 /* i32.call_indirect */, WebAssembly::CALL_INDIRECT_i32_S, Convert__Imm1_0__imm_95_0, AMFBS_None, { MCK_Imm }, },
  { 2698 /* i32.clz */, WebAssembly::CLZ_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2706 /* i32.const */, WebAssembly::CONST_I32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 2716 /* i32.ctz */, WebAssembly::CTZ_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2724 /* i32.div_s */, WebAssembly::DIV_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2734 /* i32.div_u */, WebAssembly::DIV_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2744 /* i32.eq */, WebAssembly::EQ_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2751 /* i32.eqz */, WebAssembly::EQZ_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2759 /* i32.extend16_s */, WebAssembly::I32_EXTEND16_S_I32_S, Convert_NoOperands, AMFBS_HasSignExt, {  }, },
  { 2774 /* i32.extend8_s */, WebAssembly::I32_EXTEND8_S_I32_S, Convert_NoOperands, AMFBS_HasSignExt, {  }, },
  { 2788 /* i32.ge_s */, WebAssembly::GE_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2797 /* i32.ge_u */, WebAssembly::GE_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2806 /* i32.gt_s */, WebAssembly::GT_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2815 /* i32.gt_u */, WebAssembly::GT_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2824 /* i32.le_s */, WebAssembly::LE_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2833 /* i32.le_u */, WebAssembly::LE_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2842 /* i32.load */, WebAssembly::LOAD_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 2851 /* i32.load16_s */, WebAssembly::LOAD16_S_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 2864 /* i32.load16_u */, WebAssembly::LOAD16_U_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 2877 /* i32.load8_s */, WebAssembly::LOAD8_S_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 2889 /* i32.load8_u */, WebAssembly::LOAD8_U_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 2901 /* i32.lt_s */, WebAssembly::LT_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2910 /* i32.lt_u */, WebAssembly::LT_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2919 /* i32.mul */, WebAssembly::MUL_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2927 /* i32.ne */, WebAssembly::NE_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2934 /* i32.or */, WebAssembly::OR_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2941 /* i32.popcnt */, WebAssembly::POPCNT_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2952 /* i32.reinterpret_f32 */, WebAssembly::I32_REINTERPRET_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2972 /* i32.rem_s */, WebAssembly::REM_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2982 /* i32.rem_u */, WebAssembly::REM_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2992 /* i32.rotl */, WebAssembly::ROTL_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3001 /* i32.rotr */, WebAssembly::ROTR_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3010 /* i32.select */, WebAssembly::SELECT_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3021 /* i32.shl */, WebAssembly::SHL_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3029 /* i32.shr_s */, WebAssembly::SHR_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3039 /* i32.shr_u */, WebAssembly::SHR_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3049 /* i32.store */, WebAssembly::STORE_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3059 /* i32.store16 */, WebAssembly::STORE16_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3071 /* i32.store8 */, WebAssembly::STORE8_I32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3082 /* i32.sub */, WebAssembly::SUB_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3090 /* i32.trunc_f32_s */, WebAssembly::I32_TRUNC_S_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3106 /* i32.trunc_f32_u */, WebAssembly::I32_TRUNC_U_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3122 /* i32.trunc_f64_s */, WebAssembly::I32_TRUNC_S_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3138 /* i32.trunc_f64_u */, WebAssembly::I32_TRUNC_U_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3154 /* i32.trunc_sat_f32_s */, WebAssembly::I32_TRUNC_S_SAT_F32_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 3174 /* i32.trunc_sat_f32_u */, WebAssembly::I32_TRUNC_U_SAT_F32_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 3194 /* i32.trunc_sat_f64_s */, WebAssembly::I32_TRUNC_S_SAT_F64_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 3214 /* i32.trunc_sat_f64_u */, WebAssembly::I32_TRUNC_U_SAT_F64_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 3234 /* i32.wrap_i64 */, WebAssembly::I32_WRAP_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3247 /* i32.xor */, WebAssembly::XOR_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3255 /* i32x4.add */, WebAssembly::ADD_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3265 /* i32x4.all_true */, WebAssembly::ALLTRUE_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3280 /* i32x4.any_true */, WebAssembly::ANYTRUE_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3295 /* i32x4.dot_i16x8_s */, WebAssembly::DOT_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3313 /* i32x4.eq */, WebAssembly::EQ_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3322 /* i32x4.extract_lane */, WebAssembly::EXTRACT_LANE_v4i32_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 3341 /* i32x4.ge_s */, WebAssembly::GE_S_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3352 /* i32x4.ge_u */, WebAssembly::GE_U_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3363 /* i32x4.gt_s */, WebAssembly::GT_S_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3374 /* i32x4.gt_u */, WebAssembly::GT_U_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3385 /* i32x4.le_s */, WebAssembly::LE_S_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3396 /* i32x4.le_u */, WebAssembly::LE_U_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3407 /* i32x4.load16x4_s */, WebAssembly::LOAD_EXTEND_S_v4i32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm }, },
  { 3424 /* i32x4.load16x4_u */, WebAssembly::LOAD_EXTEND_U_v4i32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm }, },
  { 3441 /* i32x4.lt_s */, WebAssembly::LT_S_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3452 /* i32x4.lt_u */, WebAssembly::LT_U_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3463 /* i32x4.max_s */, WebAssembly::MAX_S_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3475 /* i32x4.max_u */, WebAssembly::MAX_U_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3487 /* i32x4.min_s */, WebAssembly::MIN_S_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3499 /* i32x4.min_u */, WebAssembly::MIN_U_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3511 /* i32x4.mul */, WebAssembly::MUL_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3521 /* i32x4.ne */, WebAssembly::NE_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3530 /* i32x4.neg */, WebAssembly::NEG_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3540 /* i32x4.replace_lane */, WebAssembly::REPLACE_LANE_v4i32_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 3559 /* i32x4.shl */, WebAssembly::SHL_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3569 /* i32x4.shr_s */, WebAssembly::SHR_S_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3581 /* i32x4.shr_u */, WebAssembly::SHR_U_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3593 /* i32x4.splat */, WebAssembly::SPLAT_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3605 /* i32x4.sub */, WebAssembly::SUB_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3615 /* i32x4.trunc_sat_f32x4_s */, WebAssembly::fp_to_sint_v4i32_v4f32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3639 /* i32x4.trunc_sat_f32x4_u */, WebAssembly::fp_to_uint_v4i32_v4f32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3663 /* i32x4.widen_high_i16x8_s */, WebAssembly::int_wasm_widen_high_signed_v4i32_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3688 /* i32x4.widen_high_i16x8_u */, WebAssembly::int_wasm_widen_high_unsigned_v4i32_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3713 /* i32x4.widen_low_i16x8_s */, WebAssembly::int_wasm_widen_low_signed_v4i32_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3737 /* i32x4.widen_low_i16x8_u */, WebAssembly::int_wasm_widen_low_unsigned_v4i32_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3761 /* i64.add */, WebAssembly::ADD_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3769 /* i64.and */, WebAssembly::AND_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3777 /* i64.atomic.load */, WebAssembly::ATOMIC_LOAD_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3793 /* i64.atomic.load16_u */, WebAssembly::ATOMIC_LOAD16_U_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3813 /* i64.atomic.load32_u */, WebAssembly::ATOMIC_LOAD32_U_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3833 /* i64.atomic.load8_u */, WebAssembly::ATOMIC_LOAD8_U_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3852 /* i64.atomic.rmw.add */, WebAssembly::ATOMIC_RMW_ADD_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3871 /* i64.atomic.rmw.and */, WebAssembly::ATOMIC_RMW_AND_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3890 /* i64.atomic.rmw.cmpxchg */, WebAssembly::ATOMIC_RMW_CMPXCHG_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3913 /* i64.atomic.rmw.or */, WebAssembly::ATOMIC_RMW_OR_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3931 /* i64.atomic.rmw.sub */, WebAssembly::ATOMIC_RMW_SUB_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3950 /* i64.atomic.rmw.xchg */, WebAssembly::ATOMIC_RMW_XCHG_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3970 /* i64.atomic.rmw.xor */, WebAssembly::ATOMIC_RMW_XOR_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3989 /* i64.atomic.rmw16.add_u */, WebAssembly::ATOMIC_RMW16_U_ADD_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4012 /* i64.atomic.rmw16.and_u */, WebAssembly::ATOMIC_RMW16_U_AND_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4035 /* i64.atomic.rmw16.cmpxchg_u */, WebAssembly::ATOMIC_RMW16_U_CMPXCHG_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4062 /* i64.atomic.rmw16.or_u */, WebAssembly::ATOMIC_RMW16_U_OR_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4084 /* i64.atomic.rmw16.sub_u */, WebAssembly::ATOMIC_RMW16_U_SUB_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4107 /* i64.atomic.rmw16.xchg_u */, WebAssembly::ATOMIC_RMW16_U_XCHG_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4131 /* i64.atomic.rmw16.xor_u */, WebAssembly::ATOMIC_RMW16_U_XOR_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4154 /* i64.atomic.rmw32.add_u */, WebAssembly::ATOMIC_RMW32_U_ADD_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4177 /* i64.atomic.rmw32.and_u */, WebAssembly::ATOMIC_RMW32_U_AND_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4200 /* i64.atomic.rmw32.cmpxchg_u */, WebAssembly::ATOMIC_RMW32_U_CMPXCHG_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4227 /* i64.atomic.rmw32.or_u */, WebAssembly::ATOMIC_RMW32_U_OR_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4249 /* i64.atomic.rmw32.sub_u */, WebAssembly::ATOMIC_RMW32_U_SUB_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4272 /* i64.atomic.rmw32.xchg_u */, WebAssembly::ATOMIC_RMW32_U_XCHG_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4296 /* i64.atomic.rmw32.xor_u */, WebAssembly::ATOMIC_RMW32_U_XOR_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4319 /* i64.atomic.rmw8.add_u */, WebAssembly::ATOMIC_RMW8_U_ADD_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4341 /* i64.atomic.rmw8.and_u */, WebAssembly::ATOMIC_RMW8_U_AND_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4363 /* i64.atomic.rmw8.cmpxchg_u */, WebAssembly::ATOMIC_RMW8_U_CMPXCHG_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4389 /* i64.atomic.rmw8.or_u */, WebAssembly::ATOMIC_RMW8_U_OR_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4410 /* i64.atomic.rmw8.sub_u */, WebAssembly::ATOMIC_RMW8_U_SUB_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4432 /* i64.atomic.rmw8.xchg_u */, WebAssembly::ATOMIC_RMW8_U_XCHG_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4455 /* i64.atomic.rmw8.xor_u */, WebAssembly::ATOMIC_RMW8_U_XOR_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4477 /* i64.atomic.store */, WebAssembly::ATOMIC_STORE_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4494 /* i64.atomic.store16 */, WebAssembly::ATOMIC_STORE16_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4513 /* i64.atomic.store32 */, WebAssembly::ATOMIC_STORE32_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4532 /* i64.atomic.store8 */, WebAssembly::ATOMIC_STORE8_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4550 /* i64.atomic.wait */, WebAssembly::ATOMIC_WAIT_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4566 /* i64.call */, WebAssembly::CALL_i64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 4575 /* i64.call_indirect */, WebAssembly::CALL_INDIRECT_i64_S, Convert__Imm1_0__imm_95_0, AMFBS_None, { MCK_Imm }, },
  { 4593 /* i64.clz */, WebAssembly::CLZ_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4601 /* i64.const */, WebAssembly::CONST_I64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 4611 /* i64.ctz */, WebAssembly::CTZ_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4619 /* i64.div_s */, WebAssembly::DIV_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4629 /* i64.div_u */, WebAssembly::DIV_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4639 /* i64.eq */, WebAssembly::EQ_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4646 /* i64.eqz */, WebAssembly::EQZ_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4654 /* i64.extend16_s */, WebAssembly::I64_EXTEND16_S_I64_S, Convert_NoOperands, AMFBS_HasSignExt, {  }, },
  { 4669 /* i64.extend32_s */, WebAssembly::I64_EXTEND32_S_I64_S, Convert_NoOperands, AMFBS_HasSignExt, {  }, },
  { 4684 /* i64.extend8_s */, WebAssembly::I64_EXTEND8_S_I64_S, Convert_NoOperands, AMFBS_HasSignExt, {  }, },
  { 4698 /* i64.extend_i32_s */, WebAssembly::I64_EXTEND_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4715 /* i64.extend_i32_u */, WebAssembly::I64_EXTEND_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4732 /* i64.ge_s */, WebAssembly::GE_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4741 /* i64.ge_u */, WebAssembly::GE_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4750 /* i64.gt_s */, WebAssembly::GT_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4759 /* i64.gt_u */, WebAssembly::GT_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4768 /* i64.le_s */, WebAssembly::LE_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4777 /* i64.le_u */, WebAssembly::LE_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4786 /* i64.load */, WebAssembly::LOAD_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 4795 /* i64.load16_s */, WebAssembly::LOAD16_S_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 4808 /* i64.load16_u */, WebAssembly::LOAD16_U_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 4821 /* i64.load32_s */, WebAssembly::LOAD32_S_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 4834 /* i64.load32_u */, WebAssembly::LOAD32_U_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 4847 /* i64.load8_s */, WebAssembly::LOAD8_S_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 4859 /* i64.load8_u */, WebAssembly::LOAD8_U_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 4871 /* i64.lt_s */, WebAssembly::LT_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4880 /* i64.lt_u */, WebAssembly::LT_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4889 /* i64.mul */, WebAssembly::MUL_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4897 /* i64.ne */, WebAssembly::NE_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4904 /* i64.or */, WebAssembly::OR_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4911 /* i64.popcnt */, WebAssembly::POPCNT_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4922 /* i64.reinterpret_f64 */, WebAssembly::I64_REINTERPRET_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4942 /* i64.rem_s */, WebAssembly::REM_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4952 /* i64.rem_u */, WebAssembly::REM_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4962 /* i64.rotl */, WebAssembly::ROTL_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4971 /* i64.rotr */, WebAssembly::ROTR_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4980 /* i64.select */, WebAssembly::SELECT_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4991 /* i64.shl */, WebAssembly::SHL_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4999 /* i64.shr_s */, WebAssembly::SHR_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5009 /* i64.shr_u */, WebAssembly::SHR_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5019 /* i64.store */, WebAssembly::STORE_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5029 /* i64.store16 */, WebAssembly::STORE16_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5041 /* i64.store32 */, WebAssembly::STORE32_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5053 /* i64.store8 */, WebAssembly::STORE8_I64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5064 /* i64.sub */, WebAssembly::SUB_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5072 /* i64.trunc_f32_s */, WebAssembly::I64_TRUNC_S_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5088 /* i64.trunc_f32_u */, WebAssembly::I64_TRUNC_U_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5104 /* i64.trunc_f64_s */, WebAssembly::I64_TRUNC_S_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5120 /* i64.trunc_f64_u */, WebAssembly::I64_TRUNC_U_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5136 /* i64.trunc_sat_f32_s */, WebAssembly::I64_TRUNC_S_SAT_F32_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 5156 /* i64.trunc_sat_f32_u */, WebAssembly::I64_TRUNC_U_SAT_F32_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 5176 /* i64.trunc_sat_f64_s */, WebAssembly::I64_TRUNC_S_SAT_F64_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 5196 /* i64.trunc_sat_f64_u */, WebAssembly::I64_TRUNC_U_SAT_F64_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 5216 /* i64.xor */, WebAssembly::XOR_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5224 /* i64x2.add */, WebAssembly::ADD_v2i64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5234 /* i64x2.all_true */, WebAssembly::ALLTRUE_v2i64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5249 /* i64x2.any_true */, WebAssembly::ANYTRUE_v2i64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5264 /* i64x2.extract_lane */, WebAssembly::EXTRACT_LANE_v2i64_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 5283 /* i64x2.load32x2_s */, WebAssembly::LOAD_EXTEND_S_v2i64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm }, },
  { 5300 /* i64x2.load32x2_u */, WebAssembly::LOAD_EXTEND_U_v2i64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm }, },
  { 5317 /* i64x2.neg */, WebAssembly::NEG_v2i64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5327 /* i64x2.replace_lane */, WebAssembly::REPLACE_LANE_v2i64_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 5346 /* i64x2.shl */, WebAssembly::SHL_v2i64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5356 /* i64x2.shr_s */, WebAssembly::SHR_S_v2i64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5368 /* i64x2.shr_u */, WebAssembly::SHR_U_v2i64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5380 /* i64x2.splat */, WebAssembly::SPLAT_v2i64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5392 /* i64x2.sub */, WebAssembly::SUB_v2i64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5402 /* i64x2.trunc_sat_f64x2_s */, WebAssembly::fp_to_sint_v2i64_v2f64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5426 /* i64x2.trunc_sat_f64x2_u */, WebAssembly::fp_to_uint_v2i64_v2f64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5450 /* i8x16.add */, WebAssembly::ADD_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5460 /* i8x16.add_saturate_s */, WebAssembly::ADD_SAT_S_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5481 /* i8x16.add_saturate_u */, WebAssembly::ADD_SAT_U_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5502 /* i8x16.all_true */, WebAssembly::ALLTRUE_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5517 /* i8x16.any_true */, WebAssembly::ANYTRUE_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5532 /* i8x16.avgr_u */, WebAssembly::AVGR_U_v16i8_S, Convert_NoOperands, AMFBS_HasUnimplementedSIMD128, {  }, },
  { 5545 /* i8x16.eq */, WebAssembly::EQ_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5554 /* i8x16.extract_lane_s */, WebAssembly::EXTRACT_LANE_v16i8_s_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 5575 /* i8x16.extract_lane_u */, WebAssembly::EXTRACT_LANE_v16i8_u_S, Convert__Imm1_0, AMFBS_HasUnimplementedSIMD128, { MCK_Imm }, },
  { 5596 /* i8x16.ge_s */, WebAssembly::GE_S_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5607 /* i8x16.ge_u */, WebAssembly::GE_U_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5618 /* i8x16.gt_s */, WebAssembly::GT_S_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5629 /* i8x16.gt_u */, WebAssembly::GT_U_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5640 /* i8x16.le_s */, WebAssembly::LE_S_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5651 /* i8x16.le_u */, WebAssembly::LE_U_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5662 /* i8x16.lt_s */, WebAssembly::LT_S_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5673 /* i8x16.lt_u */, WebAssembly::LT_U_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5684 /* i8x16.max_s */, WebAssembly::MAX_S_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5696 /* i8x16.max_u */, WebAssembly::MAX_U_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5708 /* i8x16.min_s */, WebAssembly::MIN_S_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5720 /* i8x16.min_u */, WebAssembly::MIN_U_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5732 /* i8x16.mul */, WebAssembly::MUL_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5742 /* i8x16.narrow_i16x8_s */, WebAssembly::NARROW_S_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5763 /* i8x16.narrow_i16x8_u */, WebAssembly::NARROW_U_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5784 /* i8x16.ne */, WebAssembly::NE_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5793 /* i8x16.neg */, WebAssembly::NEG_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5803 /* i8x16.replace_lane */, WebAssembly::REPLACE_LANE_v16i8_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 5822 /* i8x16.shl */, WebAssembly::SHL_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5832 /* i8x16.shr_s */, WebAssembly::SHR_S_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5844 /* i8x16.shr_u */, WebAssembly::SHR_U_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5856 /* i8x16.splat */, WebAssembly::SPLAT_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5868 /* i8x16.sub */, WebAssembly::SUB_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5878 /* i8x16.sub_saturate_s */, WebAssembly::SUB_SAT_S_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5899 /* i8x16.sub_saturate_u */, WebAssembly::SUB_SAT_U_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5920 /* if */, WebAssembly::IF_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 5923 /* local.get */, WebAssembly::LOCAL_GET_EXNREF_S, Convert__Imm1_0, AMFBS_HasExceptionHandling, { MCK_Imm }, },
  { 5923 /* local.get */, WebAssembly::LOCAL_GET_V128_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 5923 /* local.get */, WebAssembly::LOCAL_GET_F32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 5923 /* local.get */, WebAssembly::LOCAL_GET_F64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 5923 /* local.get */, WebAssembly::LOCAL_GET_I32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 5923 /* local.get */, WebAssembly::LOCAL_GET_I64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 5933 /* local.set */, WebAssembly::LOCAL_SET_EXNREF_S, Convert__Imm1_0, AMFBS_HasExceptionHandling, { MCK_Imm }, },
  { 5933 /* local.set */, WebAssembly::LOCAL_SET_V128_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 5933 /* local.set */, WebAssembly::LOCAL_SET_F32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 5933 /* local.set */, WebAssembly::LOCAL_SET_F64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 5933 /* local.set */, WebAssembly::LOCAL_SET_I32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 5933 /* local.set */, WebAssembly::LOCAL_SET_I64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 5943 /* local.tee */, WebAssembly::LOCAL_TEE_EXNREF_S, Convert__Imm1_0, AMFBS_HasExceptionHandling, { MCK_Imm }, },
  { 5943 /* local.tee */, WebAssembly::LOCAL_TEE_V128_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 5943 /* local.tee */, WebAssembly::LOCAL_TEE_F32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 5943 /* local.tee */, WebAssembly::LOCAL_TEE_F64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 5943 /* local.tee */, WebAssembly::LOCAL_TEE_I32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 5943 /* local.tee */, WebAssembly::LOCAL_TEE_I64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 5953 /* loop */, WebAssembly::LOOP_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 5958 /* memory.copy */, WebAssembly::MEMORY_COPY_S, Convert__Imm1_0__Imm1_1, AMFBS_HasBulkMemory, { MCK_Imm, MCK_Imm }, },
  { 5970 /* memory.fill */, WebAssembly::MEMORY_FILL_S, Convert__Imm1_0, AMFBS_HasBulkMemory, { MCK_Imm }, },
  { 5982 /* memory.grow */, WebAssembly::MEMORY_GROW_I32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 5994 /* memory.init */, WebAssembly::MEMORY_INIT_S, Convert__Imm1_0__Imm1_1, AMFBS_HasBulkMemory, { MCK_Imm, MCK_Imm }, },
  { 6006 /* memory.size */, WebAssembly::MEMORY_SIZE_I32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 6018 /* nop */, WebAssembly::NOP_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 6022 /* rethrow */, WebAssembly::RETHROW_S, Convert_NoOperands, AMFBS_HasExceptionHandling, {  }, },
  { 6030 /* rethrow_in_catch */, WebAssembly::RETHROW_IN_CATCH_S, Convert_NoOperands, AMFBS_HasExceptionHandling, {  }, },
  { 6047 /* return */, WebAssembly::RETURN_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 6054 /* return_call */, WebAssembly::RET_CALL_S, Convert__Imm1_0, AMFBS_HasTailCall, { MCK_Imm }, },
  { 6066 /* return_call_indirect */, WebAssembly::RET_CALL_INDIRECT_S, Convert__Imm1_0__imm_95_0, AMFBS_HasTailCall, { MCK_Imm }, },
  { 6087 /* throw */, WebAssembly::THROW_S, Convert__Imm1_0, AMFBS_HasExceptionHandling, { MCK_Imm }, },
  { 6093 /* try */, WebAssembly::TRY_S, Convert__Imm1_0, AMFBS_HasExceptionHandling, { MCK_Imm }, },
  { 6097 /* unreachable */, WebAssembly::UNREACHABLE_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 6109 /* v128.and */, WebAssembly::AND_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6109 /* v128.and */, WebAssembly::AND_v2i64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6109 /* v128.and */, WebAssembly::AND_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6109 /* v128.and */, WebAssembly::AND_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6118 /* v128.andnot */, WebAssembly::ANDNOT_v16i8_S, Convert_NoOperands, AMFBS_HasUnimplementedSIMD128, {  }, },
  { 6118 /* v128.andnot */, WebAssembly::ANDNOT_v2i64_S, Convert_NoOperands, AMFBS_HasUnimplementedSIMD128, {  }, },
  { 6118 /* v128.andnot */, WebAssembly::ANDNOT_v4i32_S, Convert_NoOperands, AMFBS_HasUnimplementedSIMD128, {  }, },
  { 6118 /* v128.andnot */, WebAssembly::ANDNOT_v8i16_S, Convert_NoOperands, AMFBS_HasUnimplementedSIMD128, {  }, },
  { 6130 /* v128.bitselect */, WebAssembly::BITSELECT_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6130 /* v128.bitselect */, WebAssembly::BITSELECT_v2f64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6130 /* v128.bitselect */, WebAssembly::BITSELECT_v2i64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6130 /* v128.bitselect */, WebAssembly::BITSELECT_v4f32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6130 /* v128.bitselect */, WebAssembly::BITSELECT_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6130 /* v128.bitselect */, WebAssembly::BITSELECT_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6145 /* v128.call */, WebAssembly::CALL_v16i8_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6145 /* v128.call */, WebAssembly::CALL_v2f64_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6145 /* v128.call */, WebAssembly::CALL_v2i64_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6145 /* v128.call */, WebAssembly::CALL_v4f32_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6145 /* v128.call */, WebAssembly::CALL_v4i32_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6145 /* v128.call */, WebAssembly::CALL_v8i16_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6155 /* v128.call_indirect */, WebAssembly::CALL_INDIRECT_v16i8_S, Convert__Imm1_0__imm_95_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6155 /* v128.call_indirect */, WebAssembly::CALL_INDIRECT_v2f64_S, Convert__Imm1_0__imm_95_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6155 /* v128.call_indirect */, WebAssembly::CALL_INDIRECT_v2i64_S, Convert__Imm1_0__imm_95_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6155 /* v128.call_indirect */, WebAssembly::CALL_INDIRECT_v4f32_S, Convert__Imm1_0__imm_95_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6155 /* v128.call_indirect */, WebAssembly::CALL_INDIRECT_v4i32_S, Convert__Imm1_0__imm_95_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6155 /* v128.call_indirect */, WebAssembly::CALL_INDIRECT_v8i16_S, Convert__Imm1_0__imm_95_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6174 /* v128.const */, WebAssembly::CONST_V128_v2f64_S, Convert__FPImm1_0__FPImm1_1, AMFBS_HasUnimplementedSIMD128, { MCK_FPImm, MCK_FPImm }, },
  { 6174 /* v128.const */, WebAssembly::CONST_V128_v2i64_S, Convert__Imm1_0__Imm1_1, AMFBS_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm }, },
  { 6174 /* v128.const */, WebAssembly::CONST_V128_v4f32_S, Convert__FPImm1_0__FPImm1_1__FPImm1_2__FPImm1_3, AMFBS_HasUnimplementedSIMD128, { MCK_FPImm, MCK_FPImm, MCK_FPImm, MCK_FPImm }, },
  { 6174 /* v128.const */, WebAssembly::CONST_V128_v4i32_S, Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3, AMFBS_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 6174 /* v128.const */, WebAssembly::CONST_V128_v8i16_S, Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7, AMFBS_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 6174 /* v128.const */, WebAssembly::CONST_V128_v16i8_S, Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7__Imm1_8__Imm1_9__Imm1_10__Imm1_11__Imm1_12__Imm1_13__Imm1_14__Imm1_15, AMFBS_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 6185 /* v128.load */, WebAssembly::LOAD_V128_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 6195 /* v128.not */, WebAssembly::NOT_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6195 /* v128.not */, WebAssembly::NOT_v2i64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6195 /* v128.not */, WebAssembly::NOT_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6195 /* v128.not */, WebAssembly::NOT_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6204 /* v128.or */, WebAssembly::OR_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6204 /* v128.or */, WebAssembly::OR_v2i64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6204 /* v128.or */, WebAssembly::OR_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6204 /* v128.or */, WebAssembly::OR_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6212 /* v128.store */, WebAssembly::STORE_V128_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 6223 /* v128.xor */, WebAssembly::XOR_v16i8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6223 /* v128.xor */, WebAssembly::XOR_v2i64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6223 /* v128.xor */, WebAssembly::XOR_v4i32_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6223 /* v128.xor */, WebAssembly::XOR_v8i16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6232 /* v16x8.load_splat */, WebAssembly::LOAD_SPLAT_v16x8_S, Convert__Imm1_1__Imm1_0, AMFBS_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm }, },
  { 6249 /* v32x4.load_splat */, WebAssembly::LOAD_SPLAT_v32x4_S, Convert__Imm1_1__Imm1_0, AMFBS_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm }, },
  { 6266 /* v64x2.load_splat */, WebAssembly::LOAD_SPLAT_v64x2_S, Convert__Imm1_1__Imm1_0, AMFBS_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm }, },
  { 6283 /* v8x16.load_splat */, WebAssembly::LOAD_SPLAT_v8x16_S, Convert__Imm1_1__Imm1_0, AMFBS_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm }, },
  { 6300 /* v8x16.shuffle */, WebAssembly::SHUFFLE_S, Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7__Imm1_8__Imm1_9__Imm1_10__Imm1_11__Imm1_12__Imm1_13__Imm1_14__Imm1_15, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 6314 /* v8x16.swizzle */, WebAssembly::SWIZZLE_S, Convert_NoOperands, AMFBS_HasUnimplementedSIMD128, {  }, },
};

#include "llvm/Support/Debug.h"
#include "llvm/Support/Format.h"

unsigned WebAssemblyAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst,
                     uint64_t &ErrorInfo,
                     FeatureBitset &MissingFeatures,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 17) {
    ErrorInfo = 17;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  const FeatureBitset &AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((WebAssemblyOperand&)*Operands[0]).getToken();

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  MissingFeatures.set();
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0ULL;
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  auto MnemonicRange = std::equal_range(Start, End, Mnemonic, LessOpcode());

  DEBUG_WITH_TYPE("asm-matcher", dbgs() << "AsmMatcher: found " <<
  std::distance(MnemonicRange.first, MnemonicRange.second) << 
  " encodings with mnemonic '" << Mnemonic << "'\n");

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    const FeatureBitset &RequiredFeatures = FeatureBitsets[it->RequiredFeaturesIdx];
    bool HasRequiredFeatures =
      (AvailableFeatures & RequiredFeatures) == RequiredFeatures;
    DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Trying to match opcode "
                                          << MII.getName(it->Opcode) << "\n");
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    bool OperandsValid = true;
    for (unsigned FormalIdx = 0, ActualIdx = 1; FormalIdx != 16; ++FormalIdx) {
      auto Formal = static_cast<MatchClassKind>(it->Classes[FormalIdx]);
      DEBUG_WITH_TYPE("asm-matcher",
                      dbgs() << "  Matching formal operand class " << getMatchClassName(Formal)
                             << " against actual operand at index " << ActualIdx);
      if (ActualIdx < Operands.size())
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << " (";
                        Operands[ActualIdx]->print(dbgs()); dbgs() << "): ");
      else
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << ": ");
      if (ActualIdx >= Operands.size()) {
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << "actual operand index out of range ");
        OperandsValid = (Formal == InvalidMatchClass) || isSubclass(Formal, OptionalMatchClass);
        if (!OperandsValid) ErrorInfo = ActualIdx;
        break;
      }
      MCParsedAsmOperand &Actual = *Operands[ActualIdx];
      unsigned Diag = validateOperandClass(Actual, Formal);
      if (Diag == Match_Success) {
        DEBUG_WITH_TYPE("asm-matcher",
                        dbgs() << "match success using generic matcher\n");
        ++ActualIdx;
        continue;
      }
      // If the generic handler indicates an invalid operand
      // failure, check for a special case.
      if (Diag != Match_Success) {
        unsigned TargetDiag = validateTargetOperandClass(Actual, Formal);
        if (TargetDiag == Match_Success) {
          DEBUG_WITH_TYPE("asm-matcher",
                          dbgs() << "match success using target matcher\n");
          ++ActualIdx;
          continue;
        }
        // If the target matcher returned a specific error code use
        // that, else use the one from the generic matcher.
        if (TargetDiag != Match_InvalidOperand && HasRequiredFeatures)
          Diag = TargetDiag;
      }
      // If current formal operand wasn't matched and it is optional
      // then try to match next formal operand
      if (Diag == Match_InvalidOperand && isSubclass(Formal, OptionalMatchClass)) {
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << "ignoring optional operand\n");
        continue;
      }
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= ActualIdx)) {
        if (HasRequiredFeatures && (ErrorInfo != ActualIdx || Diag != Match_InvalidOperand))
          RetCode = Diag;
        ErrorInfo = ActualIdx;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) {
      DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Opcode result: multiple "
                                               "operand mismatches, ignoring "
                                               "this opcode\n");
      continue;
    }
    if (!HasRequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      FeatureBitset NewMissingFeatures = RequiredFeatures & ~AvailableFeatures;
      DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Missing target features:";
                       for (unsigned I = 0, E = NewMissingFeatures.size(); I != E; ++I)
                         if (NewMissingFeatures[I])
                           dbgs() << ' ' << I;
                       dbgs() << "\n");
      if (NewMissingFeatures.count() <=
          MissingFeatures.count())
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    Inst.clear();

    Inst.setOpcode(it->Opcode);
    // We have a potential match but have not rendered the operands.
    // Check the target predicate to handle any context sensitive
    // constraints.
    // For example, Ties that are referenced multiple times must be
    // checked here to ensure the input is the same for each match
    // constraints. If we leave it any later the ties will have been
    // canonicalized
    unsigned MatchResult;
    if ((MatchResult = checkEarlyTargetMatchPredicate(Inst, Operands)) != Match_Success) {
      Inst.clear();
      DEBUG_WITH_TYPE(
          "asm-matcher",
          dbgs() << "Early target match predicate failed with diag code "
                 << MatchResult << "\n");
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    if (matchingInlineAsm) {
      convertToMapAndConstraints(it->ConvertFn, Operands);
      if (!checkAsmTiedOperandConstraints(*this, it->ConvertFn, Operands, ErrorInfo))
        return Match_InvalidTiedOperand;

      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      DEBUG_WITH_TYPE("asm-matcher",
                      dbgs() << "Target match predicate failed with diag code "
                             << MatchResult << "\n");
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    if (!checkAsmTiedOperandConstraints(*this, it->ConvertFn, Operands, ErrorInfo))
      return Match_InvalidTiedOperand;

    DEBUG_WITH_TYPE(
        "asm-matcher",
        dbgs() << "Opcode result: complete match, selecting this opcode\n");
    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  ErrorInfo = 0;
  return Match_MissingFeature;
}

#endif // GET_MATCHER_IMPLEMENTATION


#ifdef GET_MNEMONIC_SPELL_CHECKER
#undef GET_MNEMONIC_SPELL_CHECKER

static std::string WebAssemblyMnemonicSpellCheck(StringRef S, const FeatureBitset &FBS, unsigned VariantID) {
  const unsigned MaxEditDist = 2;
  std::vector<StringRef> Candidates;
  StringRef Prev = "";

  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }

  for (auto I = Start; I < End; I++) {
    // Ignore unsupported instructions.
    const FeatureBitset &RequiredFeatures = FeatureBitsets[I->RequiredFeaturesIdx];
    if ((FBS & RequiredFeatures) != RequiredFeatures)
      continue;

    StringRef T = I->getMnemonic();
    // Avoid recomputing the edit distance for the same string.
    if (T.equals(Prev))
      continue;

    Prev = T;
    unsigned Dist = S.edit_distance(T, false, MaxEditDist);
    if (Dist <= MaxEditDist)
      Candidates.push_back(T);
  }

  if (Candidates.empty())
    return "";

  std::string Res = ", did you mean: ";
  unsigned i = 0;
  for( ; i < Candidates.size() - 1; i++)
    Res += Candidates[i].str() + ", ";
  return Res + Candidates[i].str() + "?";
}

#endif // GET_MNEMONIC_SPELL_CHECKER


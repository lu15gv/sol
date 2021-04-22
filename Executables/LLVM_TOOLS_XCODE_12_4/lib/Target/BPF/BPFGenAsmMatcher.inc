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
};

static unsigned MatchRegisterName(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 2:	 // 20 strings to match.
    switch (Name[0]) {
    default: break;
    case 'r':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 1;	 // "r0"
      case '1':	 // 1 string to match.
        return 2;	 // "r1"
      case '2':	 // 1 string to match.
        return 3;	 // "r2"
      case '3':	 // 1 string to match.
        return 4;	 // "r3"
      case '4':	 // 1 string to match.
        return 5;	 // "r4"
      case '5':	 // 1 string to match.
        return 6;	 // "r5"
      case '6':	 // 1 string to match.
        return 7;	 // "r6"
      case '7':	 // 1 string to match.
        return 8;	 // "r7"
      case '8':	 // 1 string to match.
        return 9;	 // "r8"
      case '9':	 // 1 string to match.
        return 10;	 // "r9"
      }
      break;
    case 'w':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 13;	 // "w0"
      case '1':	 // 1 string to match.
        return 14;	 // "w1"
      case '2':	 // 1 string to match.
        return 15;	 // "w2"
      case '3':	 // 1 string to match.
        return 16;	 // "w3"
      case '4':	 // 1 string to match.
        return 17;	 // "w4"
      case '5':	 // 1 string to match.
        return 18;	 // "w5"
      case '6':	 // 1 string to match.
        return 19;	 // "w6"
      case '7':	 // 1 string to match.
        return 20;	 // "w7"
      case '8':	 // 1 string to match.
        return 21;	 // "w8"
      case '9':	 // 1 string to match.
        return 22;	 // "w9"
      }
      break;
    }
    break;
  case 3:	 // 4 strings to match.
    switch (Name[0]) {
    default: break;
    case 'r':	 // 2 strings to match.
      if (Name[1] != '1')
        break;
      switch (Name[2]) {
      default: break;
      case '0':	 // 1 string to match.
        return 11;	 // "r10"
      case '1':	 // 1 string to match.
        return 12;	 // "r11"
      }
      break;
    case 'w':	 // 2 strings to match.
      if (Name[1] != '1')
        break;
      switch (Name[2]) {
      default: break;
      case '0':	 // 1 string to match.
        return 23;	 // "w10"
      case '1':	 // 1 string to match.
        return 24;	 // "w11"
      }
      break;
    }
    break;
  }
  return 0;
}

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  return "(unknown)";
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

enum {
  Tie0_0_0,
  Tie0_0_3,
  Tie0_12_12,
};

static const uint8_t TiedAsmOperandTable[][3] = {
  /* Tie0_0_0 */ { 0, 0, 0 },
  /* Tie0_0_3 */ { 0, 0, 3 },
  /* Tie0_12_12 */ { 0, 12, 12 },
};

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_Reg,
  CVT_95_addImmOperands,
  CVT_imm_95_0,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__Reg1_0__Reg1_2,
  Convert__Reg1_0__Imm1_2,
  Convert__Reg1_0__Tie0_0_0__Reg1_3,
  Convert__Reg1_0__Tie0_0_0__Imm1_3,
  Convert__Reg1_0__Tie0_0_3,
  Convert__Reg1_0__Tie0_0_0__Reg1_4,
  Convert__Reg1_0__Tie0_0_0__Imm1_4,
  Convert__Reg1_0__Tie0_0_0__Reg1_5,
  Convert__Reg1_0__Tie0_0_0__Imm1_5,
  Convert__Reg1_0__Reg1_8__Imm1_9,
  Convert__Reg1_10__Reg1_6__Imm1_7,
  Convert__Imm1_1,
  Convert__Reg1_1,
  Convert_NoOperands,
  Convert__Reg1_1__Reg1_3__Imm1_5,
  Convert__Reg1_1__Imm1_3__Imm1_5,
  Convert__Reg1_1__Reg1_4__Imm1_6,
  Convert__Reg1_1__Imm1_4__Imm1_6,
  Convert__Reg1_1__Reg1_5__Imm1_7,
  Convert__Reg1_1__Imm1_5__Imm1_7,
  Convert__Reg1_1__Imm1_2__Imm1_3,
  Convert__Reg1_1__Reg1_2__Imm1_3,
  Convert__Reg1_12__Reg1_7__Imm1_8__Tie0_12_12,
  Convert__imm_95_0__Reg1_9,
  Convert__imm_95_0__Imm1_9,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][9] = {
  // Convert__Reg1_0__Reg1_2
  { CVT_95_Reg, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Imm1_2
  { CVT_95_Reg, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_0_0__Reg1_3
  { CVT_95_Reg, 0, CVT_Tied, Tie0_0_0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__Tie0_0_0__Imm1_3
  { CVT_95_Reg, 0, CVT_Tied, Tie0_0_0, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Tie0_0_3
  { CVT_95_Reg, 0, CVT_Tied, Tie0_0_3, CVT_Done },
  // Convert__Reg1_0__Tie0_0_0__Reg1_4
  { CVT_95_Reg, 0, CVT_Tied, Tie0_0_0, CVT_95_Reg, 4, CVT_Done },
  // Convert__Reg1_0__Tie0_0_0__Imm1_4
  { CVT_95_Reg, 0, CVT_Tied, Tie0_0_0, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Tie0_0_0__Reg1_5
  { CVT_95_Reg, 0, CVT_Tied, Tie0_0_0, CVT_95_Reg, 5, CVT_Done },
  // Convert__Reg1_0__Tie0_0_0__Imm1_5
  { CVT_95_Reg, 0, CVT_Tied, Tie0_0_0, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_8__Imm1_9
  { CVT_95_Reg, 0, CVT_95_Reg, 8, CVT_95_addImmOperands, 9, CVT_Done },
  // Convert__Reg1_10__Reg1_6__Imm1_7
  { CVT_95_Reg, 10, CVT_95_Reg, 6, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Imm1_1
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_1
  { CVT_95_Reg, 1, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__Reg1_1__Reg1_3__Imm1_5
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_1__Imm1_3__Imm1_5
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_1__Reg1_4__Imm1_6
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__Reg1_1__Imm1_4__Imm1_6
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__Reg1_1__Reg1_5__Imm1_7
  { CVT_95_Reg, 1, CVT_95_Reg, 5, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_1__Imm1_5__Imm1_7
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_1__Imm1_2__Imm1_3
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Imm1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_12__Reg1_7__Imm1_8__Tie0_12_12
  { CVT_95_Reg, 12, CVT_95_Reg, 7, CVT_95_addImmOperands, 8, CVT_Tied, Tie0_12_12, CVT_Done },
  // Convert__imm_95_0__Reg1_9
  { CVT_imm_95_0, 0, CVT_95_Reg, 9, CVT_Done },
  // Convert__imm_95_0__Imm1_9
  { CVT_imm_95_0, 0, CVT_95_addImmOperands, 9, CVT_Done },
};

void BPFAsmParser::
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
      static_cast<BPFOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
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
    case CVT_95_Reg:
      static_cast<BPFOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<BPFOperand&>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    }
  }
}

void BPFAsmParser::
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
    case CVT_95_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
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
  MCK__EXCLAIM_, // '!'
  MCK__38_, // '&'
  MCK__40_, // '('
  MCK__41_, // ')'
  MCK__STAR_, // '*'
  MCK__43_, // '+'
  MCK__MINUS_, // '-'
  MCK__47_, // '/'
  MCK__LT_, // '<'
  MCK__61_, // '='
  MCK__GT_, // '>'
  MCK__91_, // '['
  MCK__93_, // ']'
  MCK__94_, // '^'
  MCK_be16, // 'be16'
  MCK_be32, // 'be32'
  MCK_be64, // 'be64'
  MCK_call, // 'call'
  MCK_callx, // 'callx'
  MCK_exit, // 'exit'
  MCK_goto, // 'goto'
  MCK_if, // 'if'
  MCK_ld_95_pseudo, // 'ld_pseudo'
  MCK_le16, // 'le16'
  MCK_le32, // 'le32'
  MCK_le64, // 'le64'
  MCK_lea, // 'lea'
  MCK_ll, // 'll'
  MCK_lock, // 'lock'
  MCK_nop, // 'nop'
  MCK_s, // 's'
  MCK_skb, // 'skb'
  MCK_u16, // 'u16'
  MCK_u32, // 'u32'
  MCK_u64, // 'u64'
  MCK_u8, // 'u8'
  MCK__124_, // '|'
  MCK_LAST_TOKEN = MCK__124_,
  MCK_R0, // register class 'R0'
  MCK_GPR, // register class 'GPR'
  MCK_GPR32, // register class 'GPR32'
  MCK_LAST_REGISTER = MCK_GPR32,
  MCK_Imm, // user defined class 'ImmAsmOperand'
  NumMatchClassKinds
};

} // end anonymous namespace

static unsigned getDiagKindFromRegisterClass(MatchClassKind RegisterClass) {
  return MCTargetAsmParser::Match_InvalidOperand;
}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 16 strings to match.
    switch (Name[0]) {
    default: break;
    case '!':	 // 1 string to match.
      return MCK__EXCLAIM_;	 // "!"
    case '&':	 // 1 string to match.
      return MCK__38_;	 // "&"
    case '(':	 // 1 string to match.
      return MCK__40_;	 // "("
    case ')':	 // 1 string to match.
      return MCK__41_;	 // ")"
    case '*':	 // 1 string to match.
      return MCK__STAR_;	 // "*"
    case '+':	 // 1 string to match.
      return MCK__43_;	 // "+"
    case '-':	 // 1 string to match.
      return MCK__MINUS_;	 // "-"
    case '/':	 // 1 string to match.
      return MCK__47_;	 // "/"
    case '<':	 // 1 string to match.
      return MCK__LT_;	 // "<"
    case '=':	 // 1 string to match.
      return MCK__61_;	 // "="
    case '>':	 // 1 string to match.
      return MCK__GT_;	 // ">"
    case '[':	 // 1 string to match.
      return MCK__91_;	 // "["
    case ']':	 // 1 string to match.
      return MCK__93_;	 // "]"
    case '^':	 // 1 string to match.
      return MCK__94_;	 // "^"
    case 's':	 // 1 string to match.
      return MCK_s;	 // "s"
    case '|':	 // 1 string to match.
      return MCK__124_;	 // "|"
    }
    break;
  case 2:	 // 3 strings to match.
    switch (Name[0]) {
    default: break;
    case 'i':	 // 1 string to match.
      if (Name[1] != 'f')
        break;
      return MCK_if;	 // "if"
    case 'l':	 // 1 string to match.
      if (Name[1] != 'l')
        break;
      return MCK_ll;	 // "ll"
    case 'u':	 // 1 string to match.
      if (Name[1] != '8')
        break;
      return MCK_u8;	 // "u8"
    }
    break;
  case 3:	 // 6 strings to match.
    switch (Name[0]) {
    default: break;
    case 'l':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ea", 2) != 0)
        break;
      return MCK_lea;	 // "lea"
    case 'n':	 // 1 string to match.
      if (memcmp(Name.data()+1, "op", 2) != 0)
        break;
      return MCK_nop;	 // "nop"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "kb", 2) != 0)
        break;
      return MCK_skb;	 // "skb"
    case 'u':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 1 string to match.
        if (Name[2] != '6')
          break;
        return MCK_u16;	 // "u16"
      case '3':	 // 1 string to match.
        if (Name[2] != '2')
          break;
        return MCK_u32;	 // "u32"
      case '6':	 // 1 string to match.
        if (Name[2] != '4')
          break;
        return MCK_u64;	 // "u64"
      }
      break;
    }
    break;
  case 4:	 // 10 strings to match.
    switch (Name[0]) {
    default: break;
    case 'b':	 // 3 strings to match.
      if (Name[1] != 'e')
        break;
      switch (Name[2]) {
      default: break;
      case '1':	 // 1 string to match.
        if (Name[3] != '6')
          break;
        return MCK_be16;	 // "be16"
      case '3':	 // 1 string to match.
        if (Name[3] != '2')
          break;
        return MCK_be32;	 // "be32"
      case '6':	 // 1 string to match.
        if (Name[3] != '4')
          break;
        return MCK_be64;	 // "be64"
      }
      break;
    case 'c':	 // 1 string to match.
      if (memcmp(Name.data()+1, "all", 3) != 0)
        break;
      return MCK_call;	 // "call"
    case 'e':	 // 1 string to match.
      if (memcmp(Name.data()+1, "xit", 3) != 0)
        break;
      return MCK_exit;	 // "exit"
    case 'g':	 // 1 string to match.
      if (memcmp(Name.data()+1, "oto", 3) != 0)
        break;
      return MCK_goto;	 // "goto"
    case 'l':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 3 strings to match.
        switch (Name[2]) {
        default: break;
        case '1':	 // 1 string to match.
          if (Name[3] != '6')
            break;
          return MCK_le16;	 // "le16"
        case '3':	 // 1 string to match.
          if (Name[3] != '2')
            break;
          return MCK_le32;	 // "le32"
        case '6':	 // 1 string to match.
          if (Name[3] != '4')
            break;
          return MCK_le64;	 // "le64"
        }
        break;
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ck", 2) != 0)
          break;
        return MCK_lock;	 // "lock"
      }
      break;
    }
    break;
  case 5:	 // 1 string to match.
    if (memcmp(Name.data()+0, "callx", 5) != 0)
      break;
    return MCK_callx;	 // "callx"
  case 9:	 // 1 string to match.
    if (memcmp(Name.data()+0, "ld_pseudo", 9) != 0)
      break;
    return MCK_ld_95_pseudo;	 // "ld_pseudo"
  }
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_R0:
    return B == MCK_GPR;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  BPFOperand &Operand = (BPFOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken() && Kind <= MCK_LAST_TOKEN)
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  switch (Kind) {
  default: break;
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
    case BPF::W0: OpKind = MCK_GPR32; break;
    case BPF::R0: OpKind = MCK_R0; break;
    case BPF::W1: OpKind = MCK_GPR32; break;
    case BPF::R1: OpKind = MCK_GPR; break;
    case BPF::W2: OpKind = MCK_GPR32; break;
    case BPF::R2: OpKind = MCK_GPR; break;
    case BPF::W3: OpKind = MCK_GPR32; break;
    case BPF::R3: OpKind = MCK_GPR; break;
    case BPF::W4: OpKind = MCK_GPR32; break;
    case BPF::R4: OpKind = MCK_GPR; break;
    case BPF::W5: OpKind = MCK_GPR32; break;
    case BPF::R5: OpKind = MCK_GPR; break;
    case BPF::W6: OpKind = MCK_GPR32; break;
    case BPF::R6: OpKind = MCK_GPR; break;
    case BPF::W7: OpKind = MCK_GPR32; break;
    case BPF::R7: OpKind = MCK_GPR; break;
    case BPF::W8: OpKind = MCK_GPR32; break;
    case BPF::R8: OpKind = MCK_GPR; break;
    case BPF::W9: OpKind = MCK_GPR32; break;
    case BPF::R9: OpKind = MCK_GPR; break;
    case BPF::W10: OpKind = MCK_GPR32; break;
    case BPF::R10: OpKind = MCK_GPR; break;
    case BPF::W11: OpKind = MCK_GPR32; break;
    case BPF::R11: OpKind = MCK_GPR; break;
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
  case MCK__EXCLAIM_: return "MCK__EXCLAIM_";
  case MCK__38_: return "MCK__38_";
  case MCK__40_: return "MCK__40_";
  case MCK__41_: return "MCK__41_";
  case MCK__STAR_: return "MCK__STAR_";
  case MCK__43_: return "MCK__43_";
  case MCK__MINUS_: return "MCK__MINUS_";
  case MCK__47_: return "MCK__47_";
  case MCK__LT_: return "MCK__LT_";
  case MCK__61_: return "MCK__61_";
  case MCK__GT_: return "MCK__GT_";
  case MCK__91_: return "MCK__91_";
  case MCK__93_: return "MCK__93_";
  case MCK__94_: return "MCK__94_";
  case MCK_be16: return "MCK_be16";
  case MCK_be32: return "MCK_be32";
  case MCK_be64: return "MCK_be64";
  case MCK_call: return "MCK_call";
  case MCK_callx: return "MCK_callx";
  case MCK_exit: return "MCK_exit";
  case MCK_goto: return "MCK_goto";
  case MCK_if: return "MCK_if";
  case MCK_ld_95_pseudo: return "MCK_ld_95_pseudo";
  case MCK_le16: return "MCK_le16";
  case MCK_le32: return "MCK_le32";
  case MCK_le64: return "MCK_le64";
  case MCK_lea: return "MCK_lea";
  case MCK_ll: return "MCK_ll";
  case MCK_lock: return "MCK_lock";
  case MCK_nop: return "MCK_nop";
  case MCK_s: return "MCK_s";
  case MCK_skb: return "MCK_skb";
  case MCK_u16: return "MCK_u16";
  case MCK_u32: return "MCK_u32";
  case MCK_u64: return "MCK_u64";
  case MCK_u8: return "MCK_u8";
  case MCK__124_: return "MCK__124_";
  case MCK_R0: return "MCK_R0";
  case MCK_GPR: return "MCK_GPR";
  case MCK_GPR32: return "MCK_GPR32";
  case MCK_Imm: return "MCK_Imm";
  case NumMatchClassKinds: return "NumMatchClassKinds";
  }
  llvm_unreachable("unhandled MatchClassKind!");
}

#endif // NDEBUG
FeatureBitset BPFAsmParser::
ComputeAvailableFeatures(const FeatureBitset& FB) const {
  FeatureBitset Features;
  return Features;
}

static bool checkAsmTiedOperandConstraints(const BPFAsmParser&AsmParser,
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
    "\000\001*\004call\005callx\004exit\004goto\002if\tld_pseudo\003lea\004l"
    "ock\003nop\002r0";

// Feature bitsets.
enum : uint8_t {
  AMFBS_None,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // AMFBS_None
};

namespace {
  struct MatchEntry {
    uint8_t Mnemonic;
    uint16_t Opcode;
    uint8_t ConvertFn;
    uint8_t RequiredFeaturesIdx;
    uint8_t Classes[13];
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
  { 0 /*  */, BPF::MOV_rr, Convert__Reg1_0__Reg1_2, AMFBS_None, { MCK_GPR, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::MOV_ri, Convert__Reg1_0__Imm1_2, AMFBS_None, { MCK_GPR, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::MOV_rr_32, Convert__Reg1_0__Reg1_2, AMFBS_None, { MCK_GPR32, MCK__61_, MCK_GPR32 }, },
  { 0 /*  */, BPF::MOV_ri_32, Convert__Reg1_0__Imm1_2, AMFBS_None, { MCK_GPR32, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::AND_rr, Convert__Reg1_0__Tie0_0_0__Reg1_3, AMFBS_None, { MCK_GPR, MCK__38_, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::AND_ri, Convert__Reg1_0__Tie0_0_0__Imm1_3, AMFBS_None, { MCK_GPR, MCK__38_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::MUL_rr, Convert__Reg1_0__Tie0_0_0__Reg1_3, AMFBS_None, { MCK_GPR, MCK__STAR_, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::MUL_ri, Convert__Reg1_0__Tie0_0_0__Imm1_3, AMFBS_None, { MCK_GPR, MCK__STAR_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::ADD_rr, Convert__Reg1_0__Tie0_0_0__Reg1_3, AMFBS_None, { MCK_GPR, MCK__43_, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::ADD_ri, Convert__Reg1_0__Tie0_0_0__Imm1_3, AMFBS_None, { MCK_GPR, MCK__43_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::SUB_rr, Convert__Reg1_0__Tie0_0_0__Reg1_3, AMFBS_None, { MCK_GPR, MCK__MINUS_, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::SUB_ri, Convert__Reg1_0__Tie0_0_0__Imm1_3, AMFBS_None, { MCK_GPR, MCK__MINUS_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::DIV_rr, Convert__Reg1_0__Tie0_0_0__Reg1_3, AMFBS_None, { MCK_GPR, MCK__47_, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::DIV_ri, Convert__Reg1_0__Tie0_0_0__Imm1_3, AMFBS_None, { MCK_GPR, MCK__47_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::NEG_64, Convert__Reg1_0__Tie0_0_3, AMFBS_None, { MCK_GPR, MCK__61_, MCK__MINUS_, MCK_GPR }, },
  { 0 /*  */, BPF::BE16, Convert__Reg1_0__Tie0_0_3, AMFBS_None, { MCK_GPR, MCK__61_, MCK_be16, MCK_GPR }, },
  { 0 /*  */, BPF::BE32, Convert__Reg1_0__Tie0_0_3, AMFBS_None, { MCK_GPR, MCK__61_, MCK_be32, MCK_GPR }, },
  { 0 /*  */, BPF::BE64, Convert__Reg1_0__Tie0_0_3, AMFBS_None, { MCK_GPR, MCK__61_, MCK_be64, MCK_GPR }, },
  { 0 /*  */, BPF::LE16, Convert__Reg1_0__Tie0_0_3, AMFBS_None, { MCK_GPR, MCK__61_, MCK_le16, MCK_GPR }, },
  { 0 /*  */, BPF::LE32, Convert__Reg1_0__Tie0_0_3, AMFBS_None, { MCK_GPR, MCK__61_, MCK_le32, MCK_GPR }, },
  { 0 /*  */, BPF::LE64, Convert__Reg1_0__Tie0_0_3, AMFBS_None, { MCK_GPR, MCK__61_, MCK_le64, MCK_GPR }, },
  { 0 /*  */, BPF::LD_imm64, Convert__Reg1_0__Imm1_2, AMFBS_None, { MCK_GPR, MCK__61_, MCK_Imm, MCK_ll }, },
  { 0 /*  */, BPF::XOR_rr, Convert__Reg1_0__Tie0_0_0__Reg1_3, AMFBS_None, { MCK_GPR, MCK__94_, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::XOR_ri, Convert__Reg1_0__Tie0_0_0__Imm1_3, AMFBS_None, { MCK_GPR, MCK__94_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::OR_rr, Convert__Reg1_0__Tie0_0_0__Reg1_3, AMFBS_None, { MCK_GPR, MCK__124_, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::OR_ri, Convert__Reg1_0__Tie0_0_0__Imm1_3, AMFBS_None, { MCK_GPR, MCK__124_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::AND_rr_32, Convert__Reg1_0__Tie0_0_0__Reg1_3, AMFBS_None, { MCK_GPR32, MCK__38_, MCK__61_, MCK_GPR32 }, },
  { 0 /*  */, BPF::AND_ri_32, Convert__Reg1_0__Tie0_0_0__Imm1_3, AMFBS_None, { MCK_GPR32, MCK__38_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::MUL_rr_32, Convert__Reg1_0__Tie0_0_0__Reg1_3, AMFBS_None, { MCK_GPR32, MCK__STAR_, MCK__61_, MCK_GPR32 }, },
  { 0 /*  */, BPF::MUL_ri_32, Convert__Reg1_0__Tie0_0_0__Imm1_3, AMFBS_None, { MCK_GPR32, MCK__STAR_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::ADD_rr_32, Convert__Reg1_0__Tie0_0_0__Reg1_3, AMFBS_None, { MCK_GPR32, MCK__43_, MCK__61_, MCK_GPR32 }, },
  { 0 /*  */, BPF::ADD_ri_32, Convert__Reg1_0__Tie0_0_0__Imm1_3, AMFBS_None, { MCK_GPR32, MCK__43_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::SUB_rr_32, Convert__Reg1_0__Tie0_0_0__Reg1_3, AMFBS_None, { MCK_GPR32, MCK__MINUS_, MCK__61_, MCK_GPR32 }, },
  { 0 /*  */, BPF::SUB_ri_32, Convert__Reg1_0__Tie0_0_0__Imm1_3, AMFBS_None, { MCK_GPR32, MCK__MINUS_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::DIV_rr_32, Convert__Reg1_0__Tie0_0_0__Reg1_3, AMFBS_None, { MCK_GPR32, MCK__47_, MCK__61_, MCK_GPR32 }, },
  { 0 /*  */, BPF::DIV_ri_32, Convert__Reg1_0__Tie0_0_0__Imm1_3, AMFBS_None, { MCK_GPR32, MCK__47_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::NEG_32, Convert__Reg1_0__Tie0_0_3, AMFBS_None, { MCK_GPR32, MCK__61_, MCK__MINUS_, MCK_GPR32 }, },
  { 0 /*  */, BPF::XOR_rr_32, Convert__Reg1_0__Tie0_0_0__Reg1_3, AMFBS_None, { MCK_GPR32, MCK__94_, MCK__61_, MCK_GPR32 }, },
  { 0 /*  */, BPF::XOR_ri_32, Convert__Reg1_0__Tie0_0_0__Imm1_3, AMFBS_None, { MCK_GPR32, MCK__94_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::OR_rr_32, Convert__Reg1_0__Tie0_0_0__Reg1_3, AMFBS_None, { MCK_GPR32, MCK__124_, MCK__61_, MCK_GPR32 }, },
  { 0 /*  */, BPF::OR_ri_32, Convert__Reg1_0__Tie0_0_0__Imm1_3, AMFBS_None, { MCK_GPR32, MCK__124_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::SLL_rr, Convert__Reg1_0__Tie0_0_0__Reg1_4, AMFBS_None, { MCK_GPR, MCK__LT_, MCK__LT_, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::SLL_ri, Convert__Reg1_0__Tie0_0_0__Imm1_4, AMFBS_None, { MCK_GPR, MCK__LT_, MCK__LT_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::SRL_rr, Convert__Reg1_0__Tie0_0_0__Reg1_4, AMFBS_None, { MCK_GPR, MCK__GT_, MCK__GT_, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::SRL_ri, Convert__Reg1_0__Tie0_0_0__Imm1_4, AMFBS_None, { MCK_GPR, MCK__GT_, MCK__GT_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::SLL_rr_32, Convert__Reg1_0__Tie0_0_0__Reg1_4, AMFBS_None, { MCK_GPR32, MCK__LT_, MCK__LT_, MCK__61_, MCK_GPR32 }, },
  { 0 /*  */, BPF::SLL_ri_32, Convert__Reg1_0__Tie0_0_0__Imm1_4, AMFBS_None, { MCK_GPR32, MCK__LT_, MCK__LT_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::SRL_rr_32, Convert__Reg1_0__Tie0_0_0__Reg1_4, AMFBS_None, { MCK_GPR32, MCK__GT_, MCK__GT_, MCK__61_, MCK_GPR32 }, },
  { 0 /*  */, BPF::SRL_ri_32, Convert__Reg1_0__Tie0_0_0__Imm1_4, AMFBS_None, { MCK_GPR32, MCK__GT_, MCK__GT_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::SRA_rr, Convert__Reg1_0__Tie0_0_0__Reg1_5, AMFBS_None, { MCK_GPR, MCK_s, MCK__GT_, MCK__GT_, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::SRA_ri, Convert__Reg1_0__Tie0_0_0__Imm1_5, AMFBS_None, { MCK_GPR, MCK_s, MCK__GT_, MCK__GT_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::SRA_rr_32, Convert__Reg1_0__Tie0_0_0__Reg1_5, AMFBS_None, { MCK_GPR32, MCK_s, MCK__GT_, MCK__GT_, MCK__61_, MCK_GPR32 }, },
  { 0 /*  */, BPF::SRA_ri_32, Convert__Reg1_0__Tie0_0_0__Imm1_5, AMFBS_None, { MCK_GPR32, MCK_s, MCK__GT_, MCK__GT_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::LDH, Convert__Reg1_0__Reg1_8__Imm1_9, AMFBS_None, { MCK_GPR, MCK__61_, MCK__STAR_, MCK__40_, MCK_u16, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_ }, },
  { 0 /*  */, BPF::LDW, Convert__Reg1_0__Reg1_8__Imm1_9, AMFBS_None, { MCK_GPR, MCK__61_, MCK__STAR_, MCK__40_, MCK_u32, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_ }, },
  { 0 /*  */, BPF::LDD, Convert__Reg1_0__Reg1_8__Imm1_9, AMFBS_None, { MCK_GPR, MCK__61_, MCK__STAR_, MCK__40_, MCK_u64, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_ }, },
  { 0 /*  */, BPF::LDB, Convert__Reg1_0__Reg1_8__Imm1_9, AMFBS_None, { MCK_GPR, MCK__61_, MCK__STAR_, MCK__40_, MCK_u8, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_ }, },
  { 0 /*  */, BPF::LDH32, Convert__Reg1_0__Reg1_8__Imm1_9, AMFBS_None, { MCK_GPR32, MCK__61_, MCK__STAR_, MCK__40_, MCK_u16, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_ }, },
  { 0 /*  */, BPF::LDW32, Convert__Reg1_0__Reg1_8__Imm1_9, AMFBS_None, { MCK_GPR32, MCK__61_, MCK__STAR_, MCK__40_, MCK_u32, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_ }, },
  { 0 /*  */, BPF::LDB32, Convert__Reg1_0__Reg1_8__Imm1_9, AMFBS_None, { MCK_GPR32, MCK__61_, MCK__STAR_, MCK__40_, MCK_u8, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_ }, },
  { 1 /* * */, BPF::STH, Convert__Reg1_10__Reg1_6__Imm1_7, AMFBS_None, { MCK__STAR_, MCK__40_, MCK_u16, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_, MCK__61_, MCK_GPR }, },
  { 1 /* * */, BPF::STH32, Convert__Reg1_10__Reg1_6__Imm1_7, AMFBS_None, { MCK__STAR_, MCK__40_, MCK_u16, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_, MCK__61_, MCK_GPR32 }, },
  { 1 /* * */, BPF::STW, Convert__Reg1_10__Reg1_6__Imm1_7, AMFBS_None, { MCK__STAR_, MCK__40_, MCK_u32, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_, MCK__61_, MCK_GPR }, },
  { 1 /* * */, BPF::STW32, Convert__Reg1_10__Reg1_6__Imm1_7, AMFBS_None, { MCK__STAR_, MCK__40_, MCK_u32, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_, MCK__61_, MCK_GPR32 }, },
  { 1 /* * */, BPF::STD, Convert__Reg1_10__Reg1_6__Imm1_7, AMFBS_None, { MCK__STAR_, MCK__40_, MCK_u64, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_, MCK__61_, MCK_GPR }, },
  { 1 /* * */, BPF::STB, Convert__Reg1_10__Reg1_6__Imm1_7, AMFBS_None, { MCK__STAR_, MCK__40_, MCK_u8, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_, MCK__61_, MCK_GPR }, },
  { 1 /* * */, BPF::STB32, Convert__Reg1_10__Reg1_6__Imm1_7, AMFBS_None, { MCK__STAR_, MCK__40_, MCK_u8, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_, MCK__61_, MCK_GPR32 }, },
  { 3 /* call */, BPF::JAL, Convert__Imm1_1, AMFBS_None, { MCK_call, MCK_Imm }, },
  { 8 /* callx */, BPF::JALX, Convert__Reg1_1, AMFBS_None, { MCK_callx, MCK_GPR }, },
  { 14 /* exit */, BPF::RET, Convert_NoOperands, AMFBS_None, { MCK_exit }, },
  { 19 /* goto */, BPF::JMP, Convert__Imm1_1, AMFBS_None, { MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JULT_rr, Convert__Reg1_1__Reg1_3__Imm1_5, AMFBS_None, { MCK_if, MCK_GPR, MCK__LT_, MCK_GPR, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JULT_ri, Convert__Reg1_1__Imm1_3__Imm1_5, AMFBS_None, { MCK_if, MCK_GPR, MCK__LT_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JUGT_rr, Convert__Reg1_1__Reg1_3__Imm1_5, AMFBS_None, { MCK_if, MCK_GPR, MCK__GT_, MCK_GPR, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JUGT_ri, Convert__Reg1_1__Imm1_3__Imm1_5, AMFBS_None, { MCK_if, MCK_GPR, MCK__GT_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JULT_rr_32, Convert__Reg1_1__Reg1_3__Imm1_5, AMFBS_None, { MCK_if, MCK_GPR32, MCK__LT_, MCK_GPR32, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JULT_ri_32, Convert__Reg1_1__Imm1_3__Imm1_5, AMFBS_None, { MCK_if, MCK_GPR32, MCK__LT_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JUGT_rr_32, Convert__Reg1_1__Reg1_3__Imm1_5, AMFBS_None, { MCK_if, MCK_GPR32, MCK__GT_, MCK_GPR32, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JUGT_ri_32, Convert__Reg1_1__Imm1_3__Imm1_5, AMFBS_None, { MCK_if, MCK_GPR32, MCK__GT_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JNE_rr, Convert__Reg1_1__Reg1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR, MCK__EXCLAIM_, MCK__61_, MCK_GPR, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JNE_ri, Convert__Reg1_1__Imm1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR, MCK__EXCLAIM_, MCK__61_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JULE_rr, Convert__Reg1_1__Reg1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR, MCK__LT_, MCK__61_, MCK_GPR, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JULE_ri, Convert__Reg1_1__Imm1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR, MCK__LT_, MCK__61_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JEQ_rr, Convert__Reg1_1__Reg1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR, MCK__61_, MCK__61_, MCK_GPR, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JEQ_ri, Convert__Reg1_1__Imm1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR, MCK__61_, MCK__61_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JUGE_rr, Convert__Reg1_1__Reg1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR, MCK__GT_, MCK__61_, MCK_GPR, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JUGE_ri, Convert__Reg1_1__Imm1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR, MCK__GT_, MCK__61_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JSLT_rr, Convert__Reg1_1__Reg1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR, MCK_s, MCK__LT_, MCK_GPR, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JSLT_ri, Convert__Reg1_1__Imm1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR, MCK_s, MCK__LT_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JSGT_rr, Convert__Reg1_1__Reg1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR, MCK_s, MCK__GT_, MCK_GPR, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JSGT_ri, Convert__Reg1_1__Imm1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR, MCK_s, MCK__GT_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JNE_rr_32, Convert__Reg1_1__Reg1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR32, MCK__EXCLAIM_, MCK__61_, MCK_GPR32, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JNE_ri_32, Convert__Reg1_1__Imm1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR32, MCK__EXCLAIM_, MCK__61_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JULE_rr_32, Convert__Reg1_1__Reg1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR32, MCK__LT_, MCK__61_, MCK_GPR32, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JULE_ri_32, Convert__Reg1_1__Imm1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR32, MCK__LT_, MCK__61_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JEQ_rr_32, Convert__Reg1_1__Reg1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR32, MCK__61_, MCK__61_, MCK_GPR32, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JEQ_ri_32, Convert__Reg1_1__Imm1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR32, MCK__61_, MCK__61_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JUGE_rr_32, Convert__Reg1_1__Reg1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR32, MCK__GT_, MCK__61_, MCK_GPR32, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JUGE_ri_32, Convert__Reg1_1__Imm1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR32, MCK__GT_, MCK__61_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JSLT_rr_32, Convert__Reg1_1__Reg1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR32, MCK_s, MCK__LT_, MCK_GPR32, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JSLT_ri_32, Convert__Reg1_1__Imm1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR32, MCK_s, MCK__LT_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JSGT_rr_32, Convert__Reg1_1__Reg1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR32, MCK_s, MCK__GT_, MCK_GPR32, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JSGT_ri_32, Convert__Reg1_1__Imm1_4__Imm1_6, AMFBS_None, { MCK_if, MCK_GPR32, MCK_s, MCK__GT_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JSLE_rr, Convert__Reg1_1__Reg1_5__Imm1_7, AMFBS_None, { MCK_if, MCK_GPR, MCK_s, MCK__LT_, MCK__61_, MCK_GPR, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JSLE_ri, Convert__Reg1_1__Imm1_5__Imm1_7, AMFBS_None, { MCK_if, MCK_GPR, MCK_s, MCK__LT_, MCK__61_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JSGE_rr, Convert__Reg1_1__Reg1_5__Imm1_7, AMFBS_None, { MCK_if, MCK_GPR, MCK_s, MCK__GT_, MCK__61_, MCK_GPR, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JSGE_ri, Convert__Reg1_1__Imm1_5__Imm1_7, AMFBS_None, { MCK_if, MCK_GPR, MCK_s, MCK__GT_, MCK__61_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JSLE_rr_32, Convert__Reg1_1__Reg1_5__Imm1_7, AMFBS_None, { MCK_if, MCK_GPR32, MCK_s, MCK__LT_, MCK__61_, MCK_GPR32, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JSLE_ri_32, Convert__Reg1_1__Imm1_5__Imm1_7, AMFBS_None, { MCK_if, MCK_GPR32, MCK_s, MCK__LT_, MCK__61_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JSGE_rr_32, Convert__Reg1_1__Reg1_5__Imm1_7, AMFBS_None, { MCK_if, MCK_GPR32, MCK_s, MCK__GT_, MCK__61_, MCK_GPR32, MCK_goto, MCK_Imm }, },
  { 24 /* if */, BPF::JSGE_ri_32, Convert__Reg1_1__Imm1_5__Imm1_7, AMFBS_None, { MCK_if, MCK_GPR32, MCK_s, MCK__GT_, MCK__61_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 27 /* ld_pseudo */, BPF::LD_pseudo, Convert__Reg1_1__Imm1_2__Imm1_3, AMFBS_None, { MCK_ld_95_pseudo, MCK_GPR, MCK_Imm, MCK_Imm }, },
  { 37 /* lea */, BPF::FI_ri, Convert__Reg1_1__Reg1_2__Imm1_3, AMFBS_None, { MCK_lea, MCK_GPR, MCK_GPR, MCK_Imm }, },
  { 41 /* lock */, BPF::XADDW, Convert__Reg1_12__Reg1_7__Imm1_8__Tie0_12_12, AMFBS_None, { MCK_lock, MCK__STAR_, MCK__40_, MCK_u32, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_, MCK__43_, MCK__61_, MCK_GPR }, },
  { 41 /* lock */, BPF::XADDW32, Convert__Reg1_12__Reg1_7__Imm1_8__Tie0_12_12, AMFBS_None, { MCK_lock, MCK__STAR_, MCK__40_, MCK_u32, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_, MCK__43_, MCK__61_, MCK_GPR32 }, },
  { 41 /* lock */, BPF::XADDD, Convert__Reg1_12__Reg1_7__Imm1_8__Tie0_12_12, AMFBS_None, { MCK_lock, MCK__STAR_, MCK__40_, MCK_u64, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_, MCK__43_, MCK__61_, MCK_GPR }, },
  { 46 /* nop */, BPF::NOP, Convert__Imm1_1, AMFBS_None, { MCK_nop, MCK_Imm }, },
  { 50 /* r0 */, BPF::LD_IND_H, Convert__imm_95_0__Reg1_9, AMFBS_None, { MCK_R0, MCK__61_, MCK__STAR_, MCK__40_, MCK_u16, MCK__STAR_, MCK__41_, MCK_skb, MCK__91_, MCK_GPR, MCK__93_ }, },
  { 50 /* r0 */, BPF::LD_ABS_H, Convert__imm_95_0__Imm1_9, AMFBS_None, { MCK_R0, MCK__61_, MCK__STAR_, MCK__40_, MCK_u16, MCK__STAR_, MCK__41_, MCK_skb, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 50 /* r0 */, BPF::LD_IND_W, Convert__imm_95_0__Reg1_9, AMFBS_None, { MCK_R0, MCK__61_, MCK__STAR_, MCK__40_, MCK_u32, MCK__STAR_, MCK__41_, MCK_skb, MCK__91_, MCK_GPR, MCK__93_ }, },
  { 50 /* r0 */, BPF::LD_ABS_W, Convert__imm_95_0__Imm1_9, AMFBS_None, { MCK_R0, MCK__61_, MCK__STAR_, MCK__40_, MCK_u32, MCK__STAR_, MCK__41_, MCK_skb, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 50 /* r0 */, BPF::LD_IND_B, Convert__imm_95_0__Reg1_9, AMFBS_None, { MCK_R0, MCK__61_, MCK__STAR_, MCK__40_, MCK_u8, MCK__STAR_, MCK__41_, MCK_skb, MCK__91_, MCK_GPR, MCK__93_ }, },
  { 50 /* r0 */, BPF::LD_ABS_B, Convert__imm_95_0__Imm1_9, AMFBS_None, { MCK_R0, MCK__61_, MCK__STAR_, MCK__40_, MCK_u8, MCK__STAR_, MCK__41_, MCK_skb, MCK__91_, MCK_Imm, MCK__93_ }, },
};

#include "llvm/Support/Debug.h"
#include "llvm/Support/Format.h"

unsigned BPFAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst,
                     uint64_t &ErrorInfo,
                     FeatureBitset &MissingFeatures,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 13) {
    ErrorInfo = 13;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  const FeatureBitset &AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic;
  if (Operands[0]->isToken())
    Mnemonic = ((BPFOperand&)*Operands[0]).getToken();

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
  auto MnemonicRange = std::make_pair(Start, End);
  unsigned SIndex = Mnemonic.empty() ? 0 : 1;
  if (!Mnemonic.empty())
    MnemonicRange = std::equal_range(Start, End, Mnemonic.lower(), LessOpcode());

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
    bool OperandsValid = true;
    for (unsigned FormalIdx = SIndex, ActualIdx = SIndex; FormalIdx != 13; ++FormalIdx) {
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

static std::string BPFMnemonicSpellCheck(StringRef S, const FeatureBitset &FBS, unsigned VariantID) {
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


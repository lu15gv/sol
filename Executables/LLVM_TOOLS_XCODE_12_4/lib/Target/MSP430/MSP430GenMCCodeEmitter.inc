/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Machine Code Emitter                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t MSP430MCCodeEmitter::getBinaryCodeForInstr(const MCInst &MI,
    SmallVectorImpl<MCFixup> &Fixups,
    const MCSubtargetInfo &STI) const {
  static const uint64_t InstBits[] = {
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(20608),	// ADD16mc
    UINT64_C(20656),	// ADD16mi
    UINT64_C(20624),	// ADD16mm
    UINT64_C(20640),	// ADD16mn
    UINT64_C(20656),	// ADD16mp
    UINT64_C(20608),	// ADD16mr
    UINT64_C(20480),	// ADD16rc
    UINT64_C(20528),	// ADD16ri
    UINT64_C(20496),	// ADD16rm
    UINT64_C(20512),	// ADD16rn
    UINT64_C(20528),	// ADD16rp
    UINT64_C(20480),	// ADD16rr
    UINT64_C(20672),	// ADD8mc
    UINT64_C(20720),	// ADD8mi
    UINT64_C(20688),	// ADD8mm
    UINT64_C(20704),	// ADD8mn
    UINT64_C(20720),	// ADD8mp
    UINT64_C(20672),	// ADD8mr
    UINT64_C(20544),	// ADD8rc
    UINT64_C(20592),	// ADD8ri
    UINT64_C(20560),	// ADD8rm
    UINT64_C(20576),	// ADD8rn
    UINT64_C(20592),	// ADD8rp
    UINT64_C(20544),	// ADD8rr
    UINT64_C(24704),	// ADDC16mc
    UINT64_C(24752),	// ADDC16mi
    UINT64_C(24720),	// ADDC16mm
    UINT64_C(24736),	// ADDC16mn
    UINT64_C(24752),	// ADDC16mp
    UINT64_C(24704),	// ADDC16mr
    UINT64_C(24576),	// ADDC16rc
    UINT64_C(24624),	// ADDC16ri
    UINT64_C(24592),	// ADDC16rm
    UINT64_C(24608),	// ADDC16rn
    UINT64_C(24624),	// ADDC16rp
    UINT64_C(24576),	// ADDC16rr
    UINT64_C(24768),	// ADDC8mc
    UINT64_C(24816),	// ADDC8mi
    UINT64_C(24784),	// ADDC8mm
    UINT64_C(24800),	// ADDC8mn
    UINT64_C(24816),	// ADDC8mp
    UINT64_C(24768),	// ADDC8mr
    UINT64_C(24640),	// ADDC8rc
    UINT64_C(24688),	// ADDC8ri
    UINT64_C(24656),	// ADDC8rm
    UINT64_C(24672),	// ADDC8rn
    UINT64_C(24688),	// ADDC8rp
    UINT64_C(24640),	// ADDC8rr
    UINT64_C(0),	// ADDframe
    UINT64_C(0),	// ADJCALLSTACKDOWN
    UINT64_C(0),	// ADJCALLSTACKUP
    UINT64_C(61568),	// AND16mc
    UINT64_C(61616),	// AND16mi
    UINT64_C(61584),	// AND16mm
    UINT64_C(61600),	// AND16mn
    UINT64_C(61616),	// AND16mp
    UINT64_C(61568),	// AND16mr
    UINT64_C(61440),	// AND16rc
    UINT64_C(61488),	// AND16ri
    UINT64_C(61456),	// AND16rm
    UINT64_C(61472),	// AND16rn
    UINT64_C(61488),	// AND16rp
    UINT64_C(61440),	// AND16rr
    UINT64_C(61632),	// AND8mc
    UINT64_C(61680),	// AND8mi
    UINT64_C(61648),	// AND8mm
    UINT64_C(61664),	// AND8mn
    UINT64_C(61680),	// AND8mp
    UINT64_C(61632),	// AND8mr
    UINT64_C(61504),	// AND8rc
    UINT64_C(61552),	// AND8ri
    UINT64_C(61520),	// AND8rm
    UINT64_C(61536),	// AND8rn
    UINT64_C(61552),	// AND8rp
    UINT64_C(61504),	// AND8rr
    UINT64_C(49280),	// BIC16mc
    UINT64_C(49328),	// BIC16mi
    UINT64_C(49296),	// BIC16mm
    UINT64_C(49312),	// BIC16mn
    UINT64_C(49328),	// BIC16mp
    UINT64_C(49280),	// BIC16mr
    UINT64_C(49152),	// BIC16rc
    UINT64_C(49200),	// BIC16ri
    UINT64_C(49168),	// BIC16rm
    UINT64_C(49184),	// BIC16rn
    UINT64_C(49200),	// BIC16rp
    UINT64_C(49152),	// BIC16rr
    UINT64_C(49344),	// BIC8mc
    UINT64_C(49392),	// BIC8mi
    UINT64_C(49360),	// BIC8mm
    UINT64_C(49376),	// BIC8mn
    UINT64_C(49392),	// BIC8mp
    UINT64_C(49344),	// BIC8mr
    UINT64_C(49216),	// BIC8rc
    UINT64_C(49264),	// BIC8ri
    UINT64_C(49232),	// BIC8rm
    UINT64_C(49248),	// BIC8rn
    UINT64_C(49264),	// BIC8rp
    UINT64_C(49216),	// BIC8rr
    UINT64_C(53376),	// BIS16mc
    UINT64_C(53424),	// BIS16mi
    UINT64_C(53392),	// BIS16mm
    UINT64_C(53408),	// BIS16mn
    UINT64_C(53424),	// BIS16mp
    UINT64_C(53376),	// BIS16mr
    UINT64_C(53248),	// BIS16rc
    UINT64_C(53296),	// BIS16ri
    UINT64_C(53264),	// BIS16rm
    UINT64_C(53280),	// BIS16rn
    UINT64_C(53296),	// BIS16rp
    UINT64_C(53248),	// BIS16rr
    UINT64_C(53440),	// BIS8mc
    UINT64_C(53488),	// BIS8mi
    UINT64_C(53456),	// BIS8mm
    UINT64_C(53472),	// BIS8mn
    UINT64_C(53488),	// BIS8mp
    UINT64_C(53440),	// BIS8mr
    UINT64_C(53312),	// BIS8rc
    UINT64_C(53360),	// BIS8ri
    UINT64_C(53328),	// BIS8rm
    UINT64_C(53344),	// BIS8rn
    UINT64_C(53360),	// BIS8rp
    UINT64_C(53312),	// BIS8rr
    UINT64_C(45184),	// BIT16mc
    UINT64_C(45232),	// BIT16mi
    UINT64_C(45200),	// BIT16mm
    UINT64_C(45216),	// BIT16mn
    UINT64_C(45232),	// BIT16mp
    UINT64_C(45184),	// BIT16mr
    UINT64_C(45056),	// BIT16rc
    UINT64_C(45104),	// BIT16ri
    UINT64_C(45072),	// BIT16rm
    UINT64_C(45088),	// BIT16rn
    UINT64_C(45104),	// BIT16rp
    UINT64_C(45056),	// BIT16rr
    UINT64_C(45248),	// BIT8mc
    UINT64_C(45296),	// BIT8mi
    UINT64_C(45264),	// BIT8mm
    UINT64_C(45280),	// BIT8mn
    UINT64_C(45296),	// BIT8mp
    UINT64_C(45248),	// BIT8mr
    UINT64_C(45120),	// BIT8rc
    UINT64_C(45168),	// BIT8ri
    UINT64_C(45136),	// BIT8rm
    UINT64_C(45152),	// BIT8rn
    UINT64_C(45168),	// BIT8rp
    UINT64_C(45120),	// BIT8rr
    UINT64_C(16432),	// Bi
    UINT64_C(16400),	// Bm
    UINT64_C(16384),	// Br
    UINT64_C(4784),	// CALLi
    UINT64_C(4752),	// CALLm
    UINT64_C(4768),	// CALLn
    UINT64_C(4784),	// CALLp
    UINT64_C(4736),	// CALLr
    UINT64_C(36992),	// CMP16mc
    UINT64_C(37040),	// CMP16mi
    UINT64_C(37008),	// CMP16mm
    UINT64_C(37024),	// CMP16mn
    UINT64_C(37040),	// CMP16mp
    UINT64_C(36992),	// CMP16mr
    UINT64_C(36864),	// CMP16rc
    UINT64_C(36912),	// CMP16ri
    UINT64_C(36880),	// CMP16rm
    UINT64_C(36896),	// CMP16rn
    UINT64_C(36912),	// CMP16rp
    UINT64_C(36864),	// CMP16rr
    UINT64_C(37056),	// CMP8mc
    UINT64_C(37104),	// CMP8mi
    UINT64_C(37072),	// CMP8mm
    UINT64_C(37088),	// CMP8mn
    UINT64_C(37104),	// CMP8mp
    UINT64_C(37056),	// CMP8mr
    UINT64_C(36928),	// CMP8rc
    UINT64_C(36976),	// CMP8ri
    UINT64_C(36944),	// CMP8rm
    UINT64_C(36960),	// CMP8rn
    UINT64_C(36976),	// CMP8rp
    UINT64_C(36928),	// CMP8rr
    UINT64_C(41088),	// DADD16mc
    UINT64_C(41136),	// DADD16mi
    UINT64_C(41104),	// DADD16mm
    UINT64_C(41120),	// DADD16mn
    UINT64_C(41136),	// DADD16mp
    UINT64_C(41088),	// DADD16mr
    UINT64_C(40960),	// DADD16rc
    UINT64_C(41008),	// DADD16ri
    UINT64_C(40976),	// DADD16rm
    UINT64_C(40992),	// DADD16rn
    UINT64_C(41008),	// DADD16rp
    UINT64_C(40960),	// DADD16rr
    UINT64_C(41152),	// DADD8mc
    UINT64_C(41200),	// DADD8mi
    UINT64_C(41168),	// DADD8mm
    UINT64_C(41184),	// DADD8mn
    UINT64_C(41200),	// DADD8mp
    UINT64_C(41152),	// DADD8mr
    UINT64_C(41024),	// DADD8rc
    UINT64_C(41072),	// DADD8ri
    UINT64_C(41040),	// DADD8rm
    UINT64_C(41056),	// DADD8rn
    UINT64_C(41072),	// DADD8rp
    UINT64_C(41024),	// DADD8rr
    UINT64_C(8192),	// JCC
    UINT64_C(15360),	// JMP
    UINT64_C(16512),	// MOV16mc
    UINT64_C(16560),	// MOV16mi
    UINT64_C(16528),	// MOV16mm
    UINT64_C(16544),	// MOV16mn
    UINT64_C(16512),	// MOV16mr
    UINT64_C(16384),	// MOV16rc
    UINT64_C(16432),	// MOV16ri
    UINT64_C(16400),	// MOV16rm
    UINT64_C(16416),	// MOV16rn
    UINT64_C(16432),	// MOV16rp
    UINT64_C(16384),	// MOV16rr
    UINT64_C(16576),	// MOV8mc
    UINT64_C(16624),	// MOV8mi
    UINT64_C(16592),	// MOV8mm
    UINT64_C(16608),	// MOV8mn
    UINT64_C(16576),	// MOV8mr
    UINT64_C(16448),	// MOV8rc
    UINT64_C(16496),	// MOV8ri
    UINT64_C(16464),	// MOV8rm
    UINT64_C(16480),	// MOV8rn
    UINT64_C(16496),	// MOV8rp
    UINT64_C(16448),	// MOV8rr
    UINT64_C(16464),	// MOVZX16rm8
    UINT64_C(16448),	// MOVZX16rr8
    UINT64_C(16688),	// POP16r
    UINT64_C(4608),	// PUSH16c
    UINT64_C(4656),	// PUSH16i
    UINT64_C(4608),	// PUSH16r
    UINT64_C(4672),	// PUSH8r
    UINT64_C(16688),	// RET
    UINT64_C(4864),	// RETI
    UINT64_C(4368),	// RRA16m
    UINT64_C(4384),	// RRA16n
    UINT64_C(4400),	// RRA16p
    UINT64_C(4352),	// RRA16r
    UINT64_C(4432),	// RRA8m
    UINT64_C(4448),	// RRA8n
    UINT64_C(4464),	// RRA8p
    UINT64_C(4416),	// RRA8r
    UINT64_C(4112),	// RRC16m
    UINT64_C(4128),	// RRC16n
    UINT64_C(4144),	// RRC16p
    UINT64_C(4096),	// RRC16r
    UINT64_C(4176),	// RRC8m
    UINT64_C(4192),	// RRC8n
    UINT64_C(4208),	// RRC8p
    UINT64_C(4160),	// RRC8r
    UINT64_C(0),	// Rrcl16
    UINT64_C(0),	// Rrcl8
    UINT64_C(4496),	// SEXT16m
    UINT64_C(4512),	// SEXT16n
    UINT64_C(4528),	// SEXT16p
    UINT64_C(4480),	// SEXT16r
    UINT64_C(32896),	// SUB16mc
    UINT64_C(32944),	// SUB16mi
    UINT64_C(32912),	// SUB16mm
    UINT64_C(32928),	// SUB16mn
    UINT64_C(32944),	// SUB16mp
    UINT64_C(32896),	// SUB16mr
    UINT64_C(32768),	// SUB16rc
    UINT64_C(32816),	// SUB16ri
    UINT64_C(32784),	// SUB16rm
    UINT64_C(32800),	// SUB16rn
    UINT64_C(32816),	// SUB16rp
    UINT64_C(32768),	// SUB16rr
    UINT64_C(32960),	// SUB8mc
    UINT64_C(33008),	// SUB8mi
    UINT64_C(32976),	// SUB8mm
    UINT64_C(32992),	// SUB8mn
    UINT64_C(33008),	// SUB8mp
    UINT64_C(32960),	// SUB8mr
    UINT64_C(32832),	// SUB8rc
    UINT64_C(32880),	// SUB8ri
    UINT64_C(32848),	// SUB8rm
    UINT64_C(32864),	// SUB8rn
    UINT64_C(32880),	// SUB8rp
    UINT64_C(32832),	// SUB8rr
    UINT64_C(28800),	// SUBC16mc
    UINT64_C(28848),	// SUBC16mi
    UINT64_C(28816),	// SUBC16mm
    UINT64_C(28832),	// SUBC16mn
    UINT64_C(28848),	// SUBC16mp
    UINT64_C(28800),	// SUBC16mr
    UINT64_C(28672),	// SUBC16rc
    UINT64_C(28720),	// SUBC16ri
    UINT64_C(28688),	// SUBC16rm
    UINT64_C(28704),	// SUBC16rn
    UINT64_C(28720),	// SUBC16rp
    UINT64_C(28672),	// SUBC16rr
    UINT64_C(28864),	// SUBC8mc
    UINT64_C(28912),	// SUBC8mi
    UINT64_C(28880),	// SUBC8mm
    UINT64_C(28896),	// SUBC8mn
    UINT64_C(28912),	// SUBC8mp
    UINT64_C(28864),	// SUBC8mr
    UINT64_C(28736),	// SUBC8rc
    UINT64_C(28784),	// SUBC8ri
    UINT64_C(28752),	// SUBC8rm
    UINT64_C(28768),	// SUBC8rn
    UINT64_C(28784),	// SUBC8rp
    UINT64_C(28736),	// SUBC8rr
    UINT64_C(4240),	// SWPB16m
    UINT64_C(4256),	// SWPB16n
    UINT64_C(4272),	// SWPB16p
    UINT64_C(4224),	// SWPB16r
    UINT64_C(0),	// Select16
    UINT64_C(0),	// Select8
    UINT64_C(0),	// Shl16
    UINT64_C(0),	// Shl8
    UINT64_C(0),	// Sra16
    UINT64_C(0),	// Sra8
    UINT64_C(0),	// Srl16
    UINT64_C(0),	// Srl8
    UINT64_C(57472),	// XOR16mc
    UINT64_C(57520),	// XOR16mi
    UINT64_C(57488),	// XOR16mm
    UINT64_C(57504),	// XOR16mn
    UINT64_C(57520),	// XOR16mp
    UINT64_C(57472),	// XOR16mr
    UINT64_C(57344),	// XOR16rc
    UINT64_C(57392),	// XOR16ri
    UINT64_C(57360),	// XOR16rm
    UINT64_C(57376),	// XOR16rn
    UINT64_C(57392),	// XOR16rp
    UINT64_C(57344),	// XOR16rr
    UINT64_C(57536),	// XOR8mc
    UINT64_C(57584),	// XOR8mi
    UINT64_C(57552),	// XOR8mm
    UINT64_C(57568),	// XOR8mn
    UINT64_C(57584),	// XOR8mp
    UINT64_C(57536),	// XOR8mr
    UINT64_C(57408),	// XOR8rc
    UINT64_C(57456),	// XOR8ri
    UINT64_C(57424),	// XOR8rm
    UINT64_C(57440),	// XOR8rn
    UINT64_C(57456),	// XOR8rp
    UINT64_C(57408),	// XOR8rr
    UINT64_C(16448),	// ZEXT16r
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case MSP430::ADDframe:
    case MSP430::ADJCALLSTACKDOWN:
    case MSP430::ADJCALLSTACKUP:
    case MSP430::RET:
    case MSP430::RETI:
    case MSP430::Rrcl16:
    case MSP430::Rrcl8:
    case MSP430::Select16:
    case MSP430::Select8:
    case MSP430::Shl16:
    case MSP430::Shl8:
    case MSP430::Sra16:
    case MSP430::Sra8:
    case MSP430::Srl16:
    case MSP430::Srl8: {
      break;
    }
    case MSP430::JCC: {
      // op: cond
      op = getCCOpValue(MI, 1, Fixups, STI);
      op &= UINT64_C(7);
      op <<= 10;
      Value |= op;
      // op: dst
      op = getPCRelImmOpValue(MI, 0, Fixups, STI);
      op &= UINT64_C(1023);
      Value |= op;
      break;
    }
    case MSP430::JMP: {
      // op: dst
      op = getPCRelImmOpValue(MI, 0, Fixups, STI);
      op &= UINT64_C(1023);
      Value |= op;
      break;
    }
    case MSP430::PUSH16c: {
      // op: imm
      op = getCGImmOpValue(MI, 0, Fixups, STI);
      op &= UINT64_C(63);
      Value |= op;
      break;
    }
    case MSP430::BIT16rc:
    case MSP430::BIT8rc:
    case MSP430::CMP16rc:
    case MSP430::CMP8rc:
    case MSP430::MOV16rc:
    case MSP430::MOV8rc: {
      // op: imm
      op = getCGImmOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(15)) << 8;
      Value |= (op & UINT64_C(48));
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case MSP430::ADD16mc:
    case MSP430::ADD8mc:
    case MSP430::ADDC16mc:
    case MSP430::ADDC8mc:
    case MSP430::AND16mc:
    case MSP430::AND8mc:
    case MSP430::BIC16mc:
    case MSP430::BIC8mc:
    case MSP430::BIS16mc:
    case MSP430::BIS8mc:
    case MSP430::BIT16mc:
    case MSP430::BIT8mc:
    case MSP430::CMP16mc:
    case MSP430::CMP8mc:
    case MSP430::DADD16mc:
    case MSP430::DADD8mc:
    case MSP430::MOV16mc:
    case MSP430::MOV8mc:
    case MSP430::SUB16mc:
    case MSP430::SUB8mc:
    case MSP430::SUBC16mc:
    case MSP430::SUBC8mc:
    case MSP430::XOR16mc:
    case MSP430::XOR8mc: {
      // op: imm
      op = getCGImmOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(15)) << 8;
      Value |= (op & UINT64_C(48));
      // op: dst
      op = getMemOpValue(MI, 0, Fixups, STI);
      Value |= (op & UINT64_C(1048560)) << 12;
      Value |= (op & UINT64_C(15));
      break;
    }
    case MSP430::ADD16rc:
    case MSP430::ADD8rc:
    case MSP430::ADDC16rc:
    case MSP430::ADDC8rc:
    case MSP430::AND16rc:
    case MSP430::AND8rc:
    case MSP430::BIC16rc:
    case MSP430::BIC8rc:
    case MSP430::BIS16rc:
    case MSP430::BIS8rc:
    case MSP430::DADD16rc:
    case MSP430::DADD8rc:
    case MSP430::SUB16rc:
    case MSP430::SUB8rc:
    case MSP430::SUBC16rc:
    case MSP430::SUBC8rc:
    case MSP430::XOR16rc:
    case MSP430::XOR8rc: {
      // op: imm
      op = getCGImmOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(15)) << 8;
      Value |= (op & UINT64_C(48));
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case MSP430::Bi:
    case MSP430::CALLi:
    case MSP430::PUSH16i: {
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(65535);
      op <<= 16;
      Value |= op;
      break;
    }
    case MSP430::ADD16mi:
    case MSP430::ADD8mi:
    case MSP430::ADDC16mi:
    case MSP430::ADDC8mi:
    case MSP430::AND16mi:
    case MSP430::AND8mi:
    case MSP430::BIC16mi:
    case MSP430::BIC8mi:
    case MSP430::BIS16mi:
    case MSP430::BIS8mi:
    case MSP430::BIT16mi:
    case MSP430::BIT8mi:
    case MSP430::CMP16mi:
    case MSP430::CMP8mi:
    case MSP430::DADD16mi:
    case MSP430::DADD8mi:
    case MSP430::MOV16mi:
    case MSP430::MOV8mi:
    case MSP430::SUB16mi:
    case MSP430::SUB8mi:
    case MSP430::SUBC16mi:
    case MSP430::SUBC8mi:
    case MSP430::XOR16mi:
    case MSP430::XOR8mi: {
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(65535);
      op <<= 16;
      Value |= op;
      // op: dst
      op = getMemOpValue(MI, 0, Fixups, STI);
      Value |= (op & UINT64_C(1048560)) << 28;
      Value |= (op & UINT64_C(15));
      break;
    }
    case MSP430::POP16r: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case MSP430::BIT16ri:
    case MSP430::BIT8ri:
    case MSP430::CMP16ri:
    case MSP430::CMP8ri:
    case MSP430::MOV16ri:
    case MSP430::MOV8ri: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(65535);
      op <<= 16;
      Value |= op;
      break;
    }
    case MSP430::ADD16ri:
    case MSP430::ADD8ri:
    case MSP430::ADDC16ri:
    case MSP430::ADDC8ri:
    case MSP430::AND16ri:
    case MSP430::AND8ri:
    case MSP430::BIC16ri:
    case MSP430::BIC8ri:
    case MSP430::BIS16ri:
    case MSP430::BIS8ri:
    case MSP430::DADD16ri:
    case MSP430::DADD8ri:
    case MSP430::SUB16ri:
    case MSP430::SUB8ri:
    case MSP430::SUBC16ri:
    case MSP430::SUBC8ri:
    case MSP430::XOR16ri:
    case MSP430::XOR8ri: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(65535);
      op <<= 16;
      Value |= op;
      break;
    }
    case MSP430::BIT16rm:
    case MSP430::BIT8rm:
    case MSP430::CMP16rm:
    case MSP430::CMP8rm:
    case MSP430::MOV16rm:
    case MSP430::MOV8rm:
    case MSP430::MOVZX16rm8: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      // op: src
      op = getMemOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(1048560)) << 12;
      Value |= (op & UINT64_C(15)) << 8;
      break;
    }
    case MSP430::ADD16rm:
    case MSP430::ADD8rm:
    case MSP430::ADDC16rm:
    case MSP430::ADDC8rm:
    case MSP430::AND16rm:
    case MSP430::AND8rm:
    case MSP430::BIC16rm:
    case MSP430::BIC8rm:
    case MSP430::BIS16rm:
    case MSP430::BIS8rm:
    case MSP430::DADD16rm:
    case MSP430::DADD8rm:
    case MSP430::SUB16rm:
    case MSP430::SUB8rm:
    case MSP430::SUBC16rm:
    case MSP430::SUBC8rm:
    case MSP430::XOR16rm:
    case MSP430::XOR8rm: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      // op: src
      op = getMemOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(1048560)) << 12;
      Value |= (op & UINT64_C(15)) << 8;
      break;
    }
    case MSP430::CALLn:
    case MSP430::CALLp:
    case MSP430::CALLr:
    case MSP430::PUSH16r:
    case MSP430::PUSH8r:
    case MSP430::RRA16n:
    case MSP430::RRA16p:
    case MSP430::RRA8n:
    case MSP430::RRA8p:
    case MSP430::RRC16n:
    case MSP430::RRC16p:
    case MSP430::RRC8n:
    case MSP430::RRC8p:
    case MSP430::SEXT16n:
    case MSP430::SEXT16p:
    case MSP430::SWPB16n:
    case MSP430::SWPB16p: {
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case MSP430::Br: {
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 8;
      Value |= op;
      break;
    }
    case MSP430::RRA16r:
    case MSP430::RRA8r:
    case MSP430::RRC16r:
    case MSP430::RRC8r:
    case MSP430::SEXT16r:
    case MSP430::SWPB16r: {
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case MSP430::BIT16rn:
    case MSP430::BIT16rp:
    case MSP430::BIT16rr:
    case MSP430::BIT8rn:
    case MSP430::BIT8rp:
    case MSP430::BIT8rr:
    case MSP430::CMP16rn:
    case MSP430::CMP16rp:
    case MSP430::CMP16rr:
    case MSP430::CMP8rn:
    case MSP430::CMP8rp:
    case MSP430::CMP8rr:
    case MSP430::MOV16rn:
    case MSP430::MOV16rr:
    case MSP430::MOV8rn:
    case MSP430::MOV8rr:
    case MSP430::MOVZX16rr8:
    case MSP430::ZEXT16r: {
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 8;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case MSP430::ADD16mn:
    case MSP430::ADD16mp:
    case MSP430::ADD16mr:
    case MSP430::ADD8mn:
    case MSP430::ADD8mp:
    case MSP430::ADD8mr:
    case MSP430::ADDC16mn:
    case MSP430::ADDC16mp:
    case MSP430::ADDC16mr:
    case MSP430::ADDC8mn:
    case MSP430::ADDC8mp:
    case MSP430::ADDC8mr:
    case MSP430::AND16mn:
    case MSP430::AND16mp:
    case MSP430::AND16mr:
    case MSP430::AND8mn:
    case MSP430::AND8mp:
    case MSP430::AND8mr:
    case MSP430::BIC16mn:
    case MSP430::BIC16mp:
    case MSP430::BIC16mr:
    case MSP430::BIC8mn:
    case MSP430::BIC8mp:
    case MSP430::BIC8mr:
    case MSP430::BIS16mn:
    case MSP430::BIS16mp:
    case MSP430::BIS16mr:
    case MSP430::BIS8mn:
    case MSP430::BIS8mp:
    case MSP430::BIS8mr:
    case MSP430::BIT16mn:
    case MSP430::BIT16mp:
    case MSP430::BIT16mr:
    case MSP430::BIT8mn:
    case MSP430::BIT8mp:
    case MSP430::BIT8mr:
    case MSP430::CMP16mn:
    case MSP430::CMP16mp:
    case MSP430::CMP16mr:
    case MSP430::CMP8mn:
    case MSP430::CMP8mp:
    case MSP430::CMP8mr:
    case MSP430::DADD16mn:
    case MSP430::DADD16mp:
    case MSP430::DADD16mr:
    case MSP430::DADD8mn:
    case MSP430::DADD8mp:
    case MSP430::DADD8mr:
    case MSP430::MOV16mn:
    case MSP430::MOV16mr:
    case MSP430::MOV8mn:
    case MSP430::MOV8mr:
    case MSP430::SUB16mn:
    case MSP430::SUB16mp:
    case MSP430::SUB16mr:
    case MSP430::SUB8mn:
    case MSP430::SUB8mp:
    case MSP430::SUB8mr:
    case MSP430::SUBC16mn:
    case MSP430::SUBC16mp:
    case MSP430::SUBC16mr:
    case MSP430::SUBC8mn:
    case MSP430::SUBC8mp:
    case MSP430::SUBC8mr:
    case MSP430::XOR16mn:
    case MSP430::XOR16mp:
    case MSP430::XOR16mr:
    case MSP430::XOR8mn:
    case MSP430::XOR8mp:
    case MSP430::XOR8mr: {
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 8;
      Value |= op;
      // op: dst
      op = getMemOpValue(MI, 0, Fixups, STI);
      Value |= (op & UINT64_C(1048560)) << 12;
      Value |= (op & UINT64_C(15));
      break;
    }
    case MSP430::ADD16rn:
    case MSP430::ADD16rr:
    case MSP430::ADD8rn:
    case MSP430::ADD8rr:
    case MSP430::ADDC16rn:
    case MSP430::ADDC16rr:
    case MSP430::ADDC8rn:
    case MSP430::ADDC8rr:
    case MSP430::AND16rn:
    case MSP430::AND16rr:
    case MSP430::AND8rn:
    case MSP430::AND8rr:
    case MSP430::BIC16rn:
    case MSP430::BIC16rr:
    case MSP430::BIC8rn:
    case MSP430::BIC8rr:
    case MSP430::BIS16rn:
    case MSP430::BIS16rr:
    case MSP430::BIS8rn:
    case MSP430::BIS8rr:
    case MSP430::DADD16rn:
    case MSP430::DADD16rr:
    case MSP430::DADD8rn:
    case MSP430::DADD8rr:
    case MSP430::MOV16rp:
    case MSP430::MOV8rp:
    case MSP430::SUB16rn:
    case MSP430::SUB16rr:
    case MSP430::SUB8rn:
    case MSP430::SUB8rr:
    case MSP430::SUBC16rn:
    case MSP430::SUBC16rr:
    case MSP430::SUBC8rn:
    case MSP430::SUBC8rr:
    case MSP430::XOR16rn:
    case MSP430::XOR16rr:
    case MSP430::XOR8rn:
    case MSP430::XOR8rr: {
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 8;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case MSP430::ADD16rp:
    case MSP430::ADD8rp:
    case MSP430::ADDC16rp:
    case MSP430::ADDC8rp:
    case MSP430::AND16rp:
    case MSP430::AND8rp:
    case MSP430::BIC16rp:
    case MSP430::BIC8rp:
    case MSP430::BIS16rp:
    case MSP430::BIS8rp:
    case MSP430::DADD16rp:
    case MSP430::DADD8rp:
    case MSP430::SUB16rp:
    case MSP430::SUB8rp:
    case MSP430::SUBC16rp:
    case MSP430::SUBC8rp:
    case MSP430::XOR16rp:
    case MSP430::XOR8rp: {
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 8;
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case MSP430::Bm: {
      // op: src
      op = getMemOpValue(MI, 0, Fixups, STI);
      Value |= (op & UINT64_C(1048560)) << 12;
      Value |= (op & UINT64_C(15)) << 8;
      break;
    }
    case MSP430::CALLm:
    case MSP430::RRA16m:
    case MSP430::RRA8m:
    case MSP430::RRC16m:
    case MSP430::RRC8m:
    case MSP430::SEXT16m:
    case MSP430::SWPB16m: {
      // op: src
      op = getMemOpValue(MI, 0, Fixups, STI);
      Value |= (op & UINT64_C(1048560)) << 12;
      Value |= (op & UINT64_C(15));
      break;
    }
    case MSP430::ADD16mm:
    case MSP430::ADD8mm:
    case MSP430::ADDC16mm:
    case MSP430::ADDC8mm:
    case MSP430::AND16mm:
    case MSP430::AND8mm:
    case MSP430::BIC16mm:
    case MSP430::BIC8mm:
    case MSP430::BIS16mm:
    case MSP430::BIS8mm:
    case MSP430::BIT16mm:
    case MSP430::BIT8mm:
    case MSP430::CMP16mm:
    case MSP430::CMP8mm:
    case MSP430::DADD16mm:
    case MSP430::DADD8mm:
    case MSP430::MOV16mm:
    case MSP430::MOV8mm:
    case MSP430::SUB16mm:
    case MSP430::SUB8mm:
    case MSP430::SUBC16mm:
    case MSP430::SUBC8mm:
    case MSP430::XOR16mm:
    case MSP430::XOR8mm: {
      // op: src
      op = getMemOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(1048560)) << 12;
      Value |= (op & UINT64_C(15)) << 8;
      // op: dst
      op = getMemOpValue(MI, 0, Fixups, STI);
      Value |= (op & UINT64_C(1048560)) << 28;
      Value |= (op & UINT64_C(15));
      break;
    }
  default:
    std::string msg;
    raw_string_ostream Msg(msg);
    Msg << "Not supported instr: " << MI;
    report_fatal_error(Msg.str());
  }
  return Value;
}

#ifdef ENABLE_INSTR_PREDICATE_VERIFIER
#undef ENABLE_INSTR_PREDICATE_VERIFIER
#include <sstream>

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
};

#ifndef NDEBUG
static const char *SubtargetFeatureNames[] = {
  nullptr
};

#endif // NDEBUG
FeatureBitset MSP430MCCodeEmitter::
computeAvailableFeatures(const FeatureBitset& FB) const {
  FeatureBitset Features;
  return Features;
}

#ifndef NDEBUG
// Feature bitsets.
enum : uint8_t {
  CEFBS_None,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // CEFBS_None
};
#endif // NDEBUG

void MSP430MCCodeEmitter::verifyInstructionPredicates(
    const MCInst &Inst, const FeatureBitset &AvailableFeatures) const {
#ifndef NDEBUG
  static uint8_t RequiredFeaturesRefs[] = {
    CEFBS_None, // PHI = 0
    CEFBS_None, // INLINEASM = 1
    CEFBS_None, // INLINEASM_BR = 2
    CEFBS_None, // CFI_INSTRUCTION = 3
    CEFBS_None, // EH_LABEL = 4
    CEFBS_None, // GC_LABEL = 5
    CEFBS_None, // ANNOTATION_LABEL = 6
    CEFBS_None, // KILL = 7
    CEFBS_None, // EXTRACT_SUBREG = 8
    CEFBS_None, // INSERT_SUBREG = 9
    CEFBS_None, // IMPLICIT_DEF = 10
    CEFBS_None, // SUBREG_TO_REG = 11
    CEFBS_None, // COPY_TO_REGCLASS = 12
    CEFBS_None, // DBG_VALUE = 13
    CEFBS_None, // DBG_LABEL = 14
    CEFBS_None, // REG_SEQUENCE = 15
    CEFBS_None, // COPY = 16
    CEFBS_None, // BUNDLE = 17
    CEFBS_None, // LIFETIME_START = 18
    CEFBS_None, // LIFETIME_END = 19
    CEFBS_None, // STACKMAP = 20
    CEFBS_None, // FENTRY_CALL = 21
    CEFBS_None, // PATCHPOINT = 22
    CEFBS_None, // LOAD_STACK_GUARD = 23
    CEFBS_None, // STATEPOINT = 24
    CEFBS_None, // LOCAL_ESCAPE = 25
    CEFBS_None, // FAULTING_OP = 26
    CEFBS_None, // PATCHABLE_OP = 27
    CEFBS_None, // PATCHABLE_FUNCTION_ENTER = 28
    CEFBS_None, // PATCHABLE_RET = 29
    CEFBS_None, // PATCHABLE_FUNCTION_EXIT = 30
    CEFBS_None, // PATCHABLE_TAIL_CALL = 31
    CEFBS_None, // PATCHABLE_EVENT_CALL = 32
    CEFBS_None, // PATCHABLE_TYPED_EVENT_CALL = 33
    CEFBS_None, // ICALL_BRANCH_FUNNEL = 34
    CEFBS_None, // G_ADD = 35
    CEFBS_None, // G_SUB = 36
    CEFBS_None, // G_MUL = 37
    CEFBS_None, // G_SDIV = 38
    CEFBS_None, // G_UDIV = 39
    CEFBS_None, // G_SREM = 40
    CEFBS_None, // G_UREM = 41
    CEFBS_None, // G_AND = 42
    CEFBS_None, // G_OR = 43
    CEFBS_None, // G_XOR = 44
    CEFBS_None, // G_IMPLICIT_DEF = 45
    CEFBS_None, // G_PHI = 46
    CEFBS_None, // G_FRAME_INDEX = 47
    CEFBS_None, // G_GLOBAL_VALUE = 48
    CEFBS_None, // G_EXTRACT = 49
    CEFBS_None, // G_UNMERGE_VALUES = 50
    CEFBS_None, // G_INSERT = 51
    CEFBS_None, // G_MERGE_VALUES = 52
    CEFBS_None, // G_BUILD_VECTOR = 53
    CEFBS_None, // G_BUILD_VECTOR_TRUNC = 54
    CEFBS_None, // G_CONCAT_VECTORS = 55
    CEFBS_None, // G_PTRTOINT = 56
    CEFBS_None, // G_INTTOPTR = 57
    CEFBS_None, // G_BITCAST = 58
    CEFBS_None, // G_INTRINSIC_TRUNC = 59
    CEFBS_None, // G_INTRINSIC_ROUND = 60
    CEFBS_None, // G_READCYCLECOUNTER = 61
    CEFBS_None, // G_LOAD = 62
    CEFBS_None, // G_SEXTLOAD = 63
    CEFBS_None, // G_ZEXTLOAD = 64
    CEFBS_None, // G_INDEXED_LOAD = 65
    CEFBS_None, // G_INDEXED_SEXTLOAD = 66
    CEFBS_None, // G_INDEXED_ZEXTLOAD = 67
    CEFBS_None, // G_STORE = 68
    CEFBS_None, // G_INDEXED_STORE = 69
    CEFBS_None, // G_ATOMIC_CMPXCHG_WITH_SUCCESS = 70
    CEFBS_None, // G_ATOMIC_CMPXCHG = 71
    CEFBS_None, // G_ATOMICRMW_XCHG = 72
    CEFBS_None, // G_ATOMICRMW_ADD = 73
    CEFBS_None, // G_ATOMICRMW_SUB = 74
    CEFBS_None, // G_ATOMICRMW_AND = 75
    CEFBS_None, // G_ATOMICRMW_NAND = 76
    CEFBS_None, // G_ATOMICRMW_OR = 77
    CEFBS_None, // G_ATOMICRMW_XOR = 78
    CEFBS_None, // G_ATOMICRMW_MAX = 79
    CEFBS_None, // G_ATOMICRMW_MIN = 80
    CEFBS_None, // G_ATOMICRMW_UMAX = 81
    CEFBS_None, // G_ATOMICRMW_UMIN = 82
    CEFBS_None, // G_ATOMICRMW_FADD = 83
    CEFBS_None, // G_ATOMICRMW_FSUB = 84
    CEFBS_None, // G_FENCE = 85
    CEFBS_None, // G_BRCOND = 86
    CEFBS_None, // G_BRINDIRECT = 87
    CEFBS_None, // G_INTRINSIC = 88
    CEFBS_None, // G_INTRINSIC_W_SIDE_EFFECTS = 89
    CEFBS_None, // G_ANYEXT = 90
    CEFBS_None, // G_TRUNC = 91
    CEFBS_None, // G_CONSTANT = 92
    CEFBS_None, // G_FCONSTANT = 93
    CEFBS_None, // G_VASTART = 94
    CEFBS_None, // G_VAARG = 95
    CEFBS_None, // G_SEXT = 96
    CEFBS_None, // G_SEXT_INREG = 97
    CEFBS_None, // G_ZEXT = 98
    CEFBS_None, // G_SHL = 99
    CEFBS_None, // G_LSHR = 100
    CEFBS_None, // G_ASHR = 101
    CEFBS_None, // G_ICMP = 102
    CEFBS_None, // G_FCMP = 103
    CEFBS_None, // G_SELECT = 104
    CEFBS_None, // G_UADDO = 105
    CEFBS_None, // G_UADDE = 106
    CEFBS_None, // G_USUBO = 107
    CEFBS_None, // G_USUBE = 108
    CEFBS_None, // G_SADDO = 109
    CEFBS_None, // G_SADDE = 110
    CEFBS_None, // G_SSUBO = 111
    CEFBS_None, // G_SSUBE = 112
    CEFBS_None, // G_UMULO = 113
    CEFBS_None, // G_SMULO = 114
    CEFBS_None, // G_UMULH = 115
    CEFBS_None, // G_SMULH = 116
    CEFBS_None, // G_FADD = 117
    CEFBS_None, // G_FSUB = 118
    CEFBS_None, // G_FMUL = 119
    CEFBS_None, // G_FMA = 120
    CEFBS_None, // G_FMAD = 121
    CEFBS_None, // G_FDIV = 122
    CEFBS_None, // G_FREM = 123
    CEFBS_None, // G_FPOW = 124
    CEFBS_None, // G_FEXP = 125
    CEFBS_None, // G_FEXP2 = 126
    CEFBS_None, // G_FLOG = 127
    CEFBS_None, // G_FLOG2 = 128
    CEFBS_None, // G_FLOG10 = 129
    CEFBS_None, // G_FNEG = 130
    CEFBS_None, // G_FPEXT = 131
    CEFBS_None, // G_FPTRUNC = 132
    CEFBS_None, // G_FPTOSI = 133
    CEFBS_None, // G_FPTOUI = 134
    CEFBS_None, // G_SITOFP = 135
    CEFBS_None, // G_UITOFP = 136
    CEFBS_None, // G_FABS = 137
    CEFBS_None, // G_FCOPYSIGN = 138
    CEFBS_None, // G_FCANONICALIZE = 139
    CEFBS_None, // G_FMINNUM = 140
    CEFBS_None, // G_FMAXNUM = 141
    CEFBS_None, // G_FMINNUM_IEEE = 142
    CEFBS_None, // G_FMAXNUM_IEEE = 143
    CEFBS_None, // G_FMINIMUM = 144
    CEFBS_None, // G_FMAXIMUM = 145
    CEFBS_None, // G_PTR_ADD = 146
    CEFBS_None, // G_PTR_MASK = 147
    CEFBS_None, // G_SMIN = 148
    CEFBS_None, // G_SMAX = 149
    CEFBS_None, // G_UMIN = 150
    CEFBS_None, // G_UMAX = 151
    CEFBS_None, // G_BR = 152
    CEFBS_None, // G_BRJT = 153
    CEFBS_None, // G_INSERT_VECTOR_ELT = 154
    CEFBS_None, // G_EXTRACT_VECTOR_ELT = 155
    CEFBS_None, // G_SHUFFLE_VECTOR = 156
    CEFBS_None, // G_CTTZ = 157
    CEFBS_None, // G_CTTZ_ZERO_UNDEF = 158
    CEFBS_None, // G_CTLZ = 159
    CEFBS_None, // G_CTLZ_ZERO_UNDEF = 160
    CEFBS_None, // G_CTPOP = 161
    CEFBS_None, // G_BSWAP = 162
    CEFBS_None, // G_BITREVERSE = 163
    CEFBS_None, // G_FCEIL = 164
    CEFBS_None, // G_FCOS = 165
    CEFBS_None, // G_FSIN = 166
    CEFBS_None, // G_FSQRT = 167
    CEFBS_None, // G_FFLOOR = 168
    CEFBS_None, // G_FRINT = 169
    CEFBS_None, // G_FNEARBYINT = 170
    CEFBS_None, // G_ADDRSPACE_CAST = 171
    CEFBS_None, // G_BLOCK_ADDR = 172
    CEFBS_None, // G_JUMP_TABLE = 173
    CEFBS_None, // G_DYN_STACKALLOC = 174
    CEFBS_None, // ADD16mc = 175
    CEFBS_None, // ADD16mi = 176
    CEFBS_None, // ADD16mm = 177
    CEFBS_None, // ADD16mn = 178
    CEFBS_None, // ADD16mp = 179
    CEFBS_None, // ADD16mr = 180
    CEFBS_None, // ADD16rc = 181
    CEFBS_None, // ADD16ri = 182
    CEFBS_None, // ADD16rm = 183
    CEFBS_None, // ADD16rn = 184
    CEFBS_None, // ADD16rp = 185
    CEFBS_None, // ADD16rr = 186
    CEFBS_None, // ADD8mc = 187
    CEFBS_None, // ADD8mi = 188
    CEFBS_None, // ADD8mm = 189
    CEFBS_None, // ADD8mn = 190
    CEFBS_None, // ADD8mp = 191
    CEFBS_None, // ADD8mr = 192
    CEFBS_None, // ADD8rc = 193
    CEFBS_None, // ADD8ri = 194
    CEFBS_None, // ADD8rm = 195
    CEFBS_None, // ADD8rn = 196
    CEFBS_None, // ADD8rp = 197
    CEFBS_None, // ADD8rr = 198
    CEFBS_None, // ADDC16mc = 199
    CEFBS_None, // ADDC16mi = 200
    CEFBS_None, // ADDC16mm = 201
    CEFBS_None, // ADDC16mn = 202
    CEFBS_None, // ADDC16mp = 203
    CEFBS_None, // ADDC16mr = 204
    CEFBS_None, // ADDC16rc = 205
    CEFBS_None, // ADDC16ri = 206
    CEFBS_None, // ADDC16rm = 207
    CEFBS_None, // ADDC16rn = 208
    CEFBS_None, // ADDC16rp = 209
    CEFBS_None, // ADDC16rr = 210
    CEFBS_None, // ADDC8mc = 211
    CEFBS_None, // ADDC8mi = 212
    CEFBS_None, // ADDC8mm = 213
    CEFBS_None, // ADDC8mn = 214
    CEFBS_None, // ADDC8mp = 215
    CEFBS_None, // ADDC8mr = 216
    CEFBS_None, // ADDC8rc = 217
    CEFBS_None, // ADDC8ri = 218
    CEFBS_None, // ADDC8rm = 219
    CEFBS_None, // ADDC8rn = 220
    CEFBS_None, // ADDC8rp = 221
    CEFBS_None, // ADDC8rr = 222
    CEFBS_None, // ADDframe = 223
    CEFBS_None, // ADJCALLSTACKDOWN = 224
    CEFBS_None, // ADJCALLSTACKUP = 225
    CEFBS_None, // AND16mc = 226
    CEFBS_None, // AND16mi = 227
    CEFBS_None, // AND16mm = 228
    CEFBS_None, // AND16mn = 229
    CEFBS_None, // AND16mp = 230
    CEFBS_None, // AND16mr = 231
    CEFBS_None, // AND16rc = 232
    CEFBS_None, // AND16ri = 233
    CEFBS_None, // AND16rm = 234
    CEFBS_None, // AND16rn = 235
    CEFBS_None, // AND16rp = 236
    CEFBS_None, // AND16rr = 237
    CEFBS_None, // AND8mc = 238
    CEFBS_None, // AND8mi = 239
    CEFBS_None, // AND8mm = 240
    CEFBS_None, // AND8mn = 241
    CEFBS_None, // AND8mp = 242
    CEFBS_None, // AND8mr = 243
    CEFBS_None, // AND8rc = 244
    CEFBS_None, // AND8ri = 245
    CEFBS_None, // AND8rm = 246
    CEFBS_None, // AND8rn = 247
    CEFBS_None, // AND8rp = 248
    CEFBS_None, // AND8rr = 249
    CEFBS_None, // BIC16mc = 250
    CEFBS_None, // BIC16mi = 251
    CEFBS_None, // BIC16mm = 252
    CEFBS_None, // BIC16mn = 253
    CEFBS_None, // BIC16mp = 254
    CEFBS_None, // BIC16mr = 255
    CEFBS_None, // BIC16rc = 256
    CEFBS_None, // BIC16ri = 257
    CEFBS_None, // BIC16rm = 258
    CEFBS_None, // BIC16rn = 259
    CEFBS_None, // BIC16rp = 260
    CEFBS_None, // BIC16rr = 261
    CEFBS_None, // BIC8mc = 262
    CEFBS_None, // BIC8mi = 263
    CEFBS_None, // BIC8mm = 264
    CEFBS_None, // BIC8mn = 265
    CEFBS_None, // BIC8mp = 266
    CEFBS_None, // BIC8mr = 267
    CEFBS_None, // BIC8rc = 268
    CEFBS_None, // BIC8ri = 269
    CEFBS_None, // BIC8rm = 270
    CEFBS_None, // BIC8rn = 271
    CEFBS_None, // BIC8rp = 272
    CEFBS_None, // BIC8rr = 273
    CEFBS_None, // BIS16mc = 274
    CEFBS_None, // BIS16mi = 275
    CEFBS_None, // BIS16mm = 276
    CEFBS_None, // BIS16mn = 277
    CEFBS_None, // BIS16mp = 278
    CEFBS_None, // BIS16mr = 279
    CEFBS_None, // BIS16rc = 280
    CEFBS_None, // BIS16ri = 281
    CEFBS_None, // BIS16rm = 282
    CEFBS_None, // BIS16rn = 283
    CEFBS_None, // BIS16rp = 284
    CEFBS_None, // BIS16rr = 285
    CEFBS_None, // BIS8mc = 286
    CEFBS_None, // BIS8mi = 287
    CEFBS_None, // BIS8mm = 288
    CEFBS_None, // BIS8mn = 289
    CEFBS_None, // BIS8mp = 290
    CEFBS_None, // BIS8mr = 291
    CEFBS_None, // BIS8rc = 292
    CEFBS_None, // BIS8ri = 293
    CEFBS_None, // BIS8rm = 294
    CEFBS_None, // BIS8rn = 295
    CEFBS_None, // BIS8rp = 296
    CEFBS_None, // BIS8rr = 297
    CEFBS_None, // BIT16mc = 298
    CEFBS_None, // BIT16mi = 299
    CEFBS_None, // BIT16mm = 300
    CEFBS_None, // BIT16mn = 301
    CEFBS_None, // BIT16mp = 302
    CEFBS_None, // BIT16mr = 303
    CEFBS_None, // BIT16rc = 304
    CEFBS_None, // BIT16ri = 305
    CEFBS_None, // BIT16rm = 306
    CEFBS_None, // BIT16rn = 307
    CEFBS_None, // BIT16rp = 308
    CEFBS_None, // BIT16rr = 309
    CEFBS_None, // BIT8mc = 310
    CEFBS_None, // BIT8mi = 311
    CEFBS_None, // BIT8mm = 312
    CEFBS_None, // BIT8mn = 313
    CEFBS_None, // BIT8mp = 314
    CEFBS_None, // BIT8mr = 315
    CEFBS_None, // BIT8rc = 316
    CEFBS_None, // BIT8ri = 317
    CEFBS_None, // BIT8rm = 318
    CEFBS_None, // BIT8rn = 319
    CEFBS_None, // BIT8rp = 320
    CEFBS_None, // BIT8rr = 321
    CEFBS_None, // Bi = 322
    CEFBS_None, // Bm = 323
    CEFBS_None, // Br = 324
    CEFBS_None, // CALLi = 325
    CEFBS_None, // CALLm = 326
    CEFBS_None, // CALLn = 327
    CEFBS_None, // CALLp = 328
    CEFBS_None, // CALLr = 329
    CEFBS_None, // CMP16mc = 330
    CEFBS_None, // CMP16mi = 331
    CEFBS_None, // CMP16mm = 332
    CEFBS_None, // CMP16mn = 333
    CEFBS_None, // CMP16mp = 334
    CEFBS_None, // CMP16mr = 335
    CEFBS_None, // CMP16rc = 336
    CEFBS_None, // CMP16ri = 337
    CEFBS_None, // CMP16rm = 338
    CEFBS_None, // CMP16rn = 339
    CEFBS_None, // CMP16rp = 340
    CEFBS_None, // CMP16rr = 341
    CEFBS_None, // CMP8mc = 342
    CEFBS_None, // CMP8mi = 343
    CEFBS_None, // CMP8mm = 344
    CEFBS_None, // CMP8mn = 345
    CEFBS_None, // CMP8mp = 346
    CEFBS_None, // CMP8mr = 347
    CEFBS_None, // CMP8rc = 348
    CEFBS_None, // CMP8ri = 349
    CEFBS_None, // CMP8rm = 350
    CEFBS_None, // CMP8rn = 351
    CEFBS_None, // CMP8rp = 352
    CEFBS_None, // CMP8rr = 353
    CEFBS_None, // DADD16mc = 354
    CEFBS_None, // DADD16mi = 355
    CEFBS_None, // DADD16mm = 356
    CEFBS_None, // DADD16mn = 357
    CEFBS_None, // DADD16mp = 358
    CEFBS_None, // DADD16mr = 359
    CEFBS_None, // DADD16rc = 360
    CEFBS_None, // DADD16ri = 361
    CEFBS_None, // DADD16rm = 362
    CEFBS_None, // DADD16rn = 363
    CEFBS_None, // DADD16rp = 364
    CEFBS_None, // DADD16rr = 365
    CEFBS_None, // DADD8mc = 366
    CEFBS_None, // DADD8mi = 367
    CEFBS_None, // DADD8mm = 368
    CEFBS_None, // DADD8mn = 369
    CEFBS_None, // DADD8mp = 370
    CEFBS_None, // DADD8mr = 371
    CEFBS_None, // DADD8rc = 372
    CEFBS_None, // DADD8ri = 373
    CEFBS_None, // DADD8rm = 374
    CEFBS_None, // DADD8rn = 375
    CEFBS_None, // DADD8rp = 376
    CEFBS_None, // DADD8rr = 377
    CEFBS_None, // JCC = 378
    CEFBS_None, // JMP = 379
    CEFBS_None, // MOV16mc = 380
    CEFBS_None, // MOV16mi = 381
    CEFBS_None, // MOV16mm = 382
    CEFBS_None, // MOV16mn = 383
    CEFBS_None, // MOV16mr = 384
    CEFBS_None, // MOV16rc = 385
    CEFBS_None, // MOV16ri = 386
    CEFBS_None, // MOV16rm = 387
    CEFBS_None, // MOV16rn = 388
    CEFBS_None, // MOV16rp = 389
    CEFBS_None, // MOV16rr = 390
    CEFBS_None, // MOV8mc = 391
    CEFBS_None, // MOV8mi = 392
    CEFBS_None, // MOV8mm = 393
    CEFBS_None, // MOV8mn = 394
    CEFBS_None, // MOV8mr = 395
    CEFBS_None, // MOV8rc = 396
    CEFBS_None, // MOV8ri = 397
    CEFBS_None, // MOV8rm = 398
    CEFBS_None, // MOV8rn = 399
    CEFBS_None, // MOV8rp = 400
    CEFBS_None, // MOV8rr = 401
    CEFBS_None, // MOVZX16rm8 = 402
    CEFBS_None, // MOVZX16rr8 = 403
    CEFBS_None, // POP16r = 404
    CEFBS_None, // PUSH16c = 405
    CEFBS_None, // PUSH16i = 406
    CEFBS_None, // PUSH16r = 407
    CEFBS_None, // PUSH8r = 408
    CEFBS_None, // RET = 409
    CEFBS_None, // RETI = 410
    CEFBS_None, // RRA16m = 411
    CEFBS_None, // RRA16n = 412
    CEFBS_None, // RRA16p = 413
    CEFBS_None, // RRA16r = 414
    CEFBS_None, // RRA8m = 415
    CEFBS_None, // RRA8n = 416
    CEFBS_None, // RRA8p = 417
    CEFBS_None, // RRA8r = 418
    CEFBS_None, // RRC16m = 419
    CEFBS_None, // RRC16n = 420
    CEFBS_None, // RRC16p = 421
    CEFBS_None, // RRC16r = 422
    CEFBS_None, // RRC8m = 423
    CEFBS_None, // RRC8n = 424
    CEFBS_None, // RRC8p = 425
    CEFBS_None, // RRC8r = 426
    CEFBS_None, // Rrcl16 = 427
    CEFBS_None, // Rrcl8 = 428
    CEFBS_None, // SEXT16m = 429
    CEFBS_None, // SEXT16n = 430
    CEFBS_None, // SEXT16p = 431
    CEFBS_None, // SEXT16r = 432
    CEFBS_None, // SUB16mc = 433
    CEFBS_None, // SUB16mi = 434
    CEFBS_None, // SUB16mm = 435
    CEFBS_None, // SUB16mn = 436
    CEFBS_None, // SUB16mp = 437
    CEFBS_None, // SUB16mr = 438
    CEFBS_None, // SUB16rc = 439
    CEFBS_None, // SUB16ri = 440
    CEFBS_None, // SUB16rm = 441
    CEFBS_None, // SUB16rn = 442
    CEFBS_None, // SUB16rp = 443
    CEFBS_None, // SUB16rr = 444
    CEFBS_None, // SUB8mc = 445
    CEFBS_None, // SUB8mi = 446
    CEFBS_None, // SUB8mm = 447
    CEFBS_None, // SUB8mn = 448
    CEFBS_None, // SUB8mp = 449
    CEFBS_None, // SUB8mr = 450
    CEFBS_None, // SUB8rc = 451
    CEFBS_None, // SUB8ri = 452
    CEFBS_None, // SUB8rm = 453
    CEFBS_None, // SUB8rn = 454
    CEFBS_None, // SUB8rp = 455
    CEFBS_None, // SUB8rr = 456
    CEFBS_None, // SUBC16mc = 457
    CEFBS_None, // SUBC16mi = 458
    CEFBS_None, // SUBC16mm = 459
    CEFBS_None, // SUBC16mn = 460
    CEFBS_None, // SUBC16mp = 461
    CEFBS_None, // SUBC16mr = 462
    CEFBS_None, // SUBC16rc = 463
    CEFBS_None, // SUBC16ri = 464
    CEFBS_None, // SUBC16rm = 465
    CEFBS_None, // SUBC16rn = 466
    CEFBS_None, // SUBC16rp = 467
    CEFBS_None, // SUBC16rr = 468
    CEFBS_None, // SUBC8mc = 469
    CEFBS_None, // SUBC8mi = 470
    CEFBS_None, // SUBC8mm = 471
    CEFBS_None, // SUBC8mn = 472
    CEFBS_None, // SUBC8mp = 473
    CEFBS_None, // SUBC8mr = 474
    CEFBS_None, // SUBC8rc = 475
    CEFBS_None, // SUBC8ri = 476
    CEFBS_None, // SUBC8rm = 477
    CEFBS_None, // SUBC8rn = 478
    CEFBS_None, // SUBC8rp = 479
    CEFBS_None, // SUBC8rr = 480
    CEFBS_None, // SWPB16m = 481
    CEFBS_None, // SWPB16n = 482
    CEFBS_None, // SWPB16p = 483
    CEFBS_None, // SWPB16r = 484
    CEFBS_None, // Select16 = 485
    CEFBS_None, // Select8 = 486
    CEFBS_None, // Shl16 = 487
    CEFBS_None, // Shl8 = 488
    CEFBS_None, // Sra16 = 489
    CEFBS_None, // Sra8 = 490
    CEFBS_None, // Srl16 = 491
    CEFBS_None, // Srl8 = 492
    CEFBS_None, // XOR16mc = 493
    CEFBS_None, // XOR16mi = 494
    CEFBS_None, // XOR16mm = 495
    CEFBS_None, // XOR16mn = 496
    CEFBS_None, // XOR16mp = 497
    CEFBS_None, // XOR16mr = 498
    CEFBS_None, // XOR16rc = 499
    CEFBS_None, // XOR16ri = 500
    CEFBS_None, // XOR16rm = 501
    CEFBS_None, // XOR16rn = 502
    CEFBS_None, // XOR16rp = 503
    CEFBS_None, // XOR16rr = 504
    CEFBS_None, // XOR8mc = 505
    CEFBS_None, // XOR8mi = 506
    CEFBS_None, // XOR8mm = 507
    CEFBS_None, // XOR8mn = 508
    CEFBS_None, // XOR8mp = 509
    CEFBS_None, // XOR8mr = 510
    CEFBS_None, // XOR8rc = 511
    CEFBS_None, // XOR8ri = 512
    CEFBS_None, // XOR8rm = 513
    CEFBS_None, // XOR8rn = 514
    CEFBS_None, // XOR8rp = 515
    CEFBS_None, // XOR8rr = 516
    CEFBS_None, // ZEXT16r = 517
  };

  assert(Inst.getOpcode() < 518);
  const FeatureBitset &RequiredFeatures = FeatureBitsets[RequiredFeaturesRefs[Inst.getOpcode()]];
  FeatureBitset MissingFeatures =
      (AvailableFeatures & RequiredFeatures) ^
      RequiredFeatures;
  if (MissingFeatures.any()) {
    std::ostringstream Msg;
    Msg << "Attempting to emit " << MCII.getName(Inst.getOpcode()).str()
        << " instruction but the ";
    for (unsigned i = 0, e = MissingFeatures.size(); i != e; ++i)
      if (MissingFeatures.test(i))
        Msg << SubtargetFeatureNames[i] << " ";
    Msg << "predicate(s) are not met";
    report_fatal_error(Msg.str());
  }
#else
// Silence unused variable warning on targets that don't use MCII for other purposes (e.g. BPF).
(void)MCII;
#endif // NDEBUG
}
#endif

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Machine Code Emitter                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t HexagonMCCodeEmitter::getBinaryCodeForInstr(const MCInst &MI,
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
    UINT64_C(2357198976),	// A2_abs
    UINT64_C(2155872448),	// A2_absp
    UINT64_C(2357199008),	// A2_abssat
    UINT64_C(4076863488),	// A2_add
    UINT64_C(3577741408),	// A2_addh_h16_hh
    UINT64_C(3577741376),	// A2_addh_h16_hl
    UINT64_C(3577741344),	// A2_addh_h16_lh
    UINT64_C(3577741312),	// A2_addh_h16_ll
    UINT64_C(3577741536),	// A2_addh_h16_sat_hh
    UINT64_C(3577741504),	// A2_addh_h16_sat_hl
    UINT64_C(3577741472),	// A2_addh_h16_sat_lh
    UINT64_C(3577741440),	// A2_addh_h16_sat_ll
    UINT64_C(3573547072),	// A2_addh_l16_hl
    UINT64_C(3573547008),	// A2_addh_l16_ll
    UINT64_C(3573547200),	// A2_addh_l16_sat_hl
    UINT64_C(3573547136),	// A2_addh_l16_sat_ll
    UINT64_C(2952790016),	// A2_addi
    UINT64_C(3539992800),	// A2_addp
    UINT64_C(3546284192),	// A2_addpsat
    UINT64_C(4131389440),	// A2_addsat
    UINT64_C(3546284256),	// A2_addsph
    UINT64_C(3546284224),	// A2_addspl
    UINT64_C(4043309056),	// A2_and
    UINT64_C(1979711488),	// A2_andir
    UINT64_C(3554672640),	// A2_andp
    UINT64_C(1879048192),	// A2_aslh
    UINT64_C(1881145344),	// A2_asrh
    UINT64_C(4085252096),	// A2_combine_hh
    UINT64_C(4087349248),	// A2_combine_hl
    UINT64_C(4089446400),	// A2_combine_lh
    UINT64_C(4091543552),	// A2_combine_ll
    UINT64_C(2080374784),	// A2_combineii
    UINT64_C(4110417920),	// A2_combinew
    UINT64_C(3586129920),	// A2_max
    UINT64_C(3552575616),	// A2_maxp
    UINT64_C(3586130048),	// A2_maxu
    UINT64_C(3552575648),	// A2_maxup
    UINT64_C(3584032768),	// A2_min
    UINT64_C(3550478528),	// A2_minp
    UINT64_C(3584032896),	// A2_minu
    UINT64_C(3550478560),	// A2_minup
    UINT64_C(2155872416),	// A2_negp
    UINT64_C(2357199040),	// A2_negsat
    UINT64_C(2130706432),	// A2_nop
    UINT64_C(2155872384),	// A2_notp
    UINT64_C(4045406208),	// A2_or
    UINT64_C(1988100096),	// A2_orir
    UINT64_C(3554672704),	// A2_orp
    UINT64_C(4211081344),	// A2_paddf
    UINT64_C(4211089536),	// A2_paddfnew
    UINT64_C(1954545664),	// A2_paddif
    UINT64_C(1954553856),	// A2_paddifnew
    UINT64_C(1946157056),	// A2_paddit
    UINT64_C(1946165248),	// A2_padditnew
    UINT64_C(4211081216),	// A2_paddt
    UINT64_C(4211089408),	// A2_paddtnew
    UINT64_C(4177526912),	// A2_pandf
    UINT64_C(4177535104),	// A2_pandfnew
    UINT64_C(4177526784),	// A2_pandt
    UINT64_C(4177534976),	// A2_pandtnew
    UINT64_C(4179624064),	// A2_porf
    UINT64_C(4179632256),	// A2_porfnew
    UINT64_C(4179623936),	// A2_port
    UINT64_C(4179632128),	// A2_portnew
    UINT64_C(4213178496),	// A2_psubf
    UINT64_C(4213186688),	// A2_psubfnew
    UINT64_C(4213178368),	// A2_psubt
    UINT64_C(4213186560),	// A2_psubtnew
    UINT64_C(4183818368),	// A2_pxorf
    UINT64_C(4183826560),	// A2_pxorfnew
    UINT64_C(4183818240),	// A2_pxort
    UINT64_C(4183826432),	// A2_pxortnew
    UINT64_C(2294284320),	// A2_roundsat
    UINT64_C(2294284288),	// A2_sat
    UINT64_C(2361393376),	// A2_satb
    UINT64_C(2361393280),	// A2_sath
    UINT64_C(2361393344),	// A2_satub
    UINT64_C(2361393312),	// A2_satuh
    UINT64_C(4078960640),	// A2_sub
    UINT64_C(3579838560),	// A2_subh_h16_hh
    UINT64_C(3579838528),	// A2_subh_h16_hl
    UINT64_C(3579838496),	// A2_subh_h16_lh
    UINT64_C(3579838464),	// A2_subh_h16_ll
    UINT64_C(3579838688),	// A2_subh_h16_sat_hh
    UINT64_C(3579838656),	// A2_subh_h16_sat_hl
    UINT64_C(3579838624),	// A2_subh_h16_sat_lh
    UINT64_C(3579838592),	// A2_subh_h16_sat_ll
    UINT64_C(3575644224),	// A2_subh_l16_hl
    UINT64_C(3575644160),	// A2_subh_l16_ll
    UINT64_C(3575644352),	// A2_subh_l16_sat_hl
    UINT64_C(3575644288),	// A2_subh_l16_sat_ll
    UINT64_C(3542089952),	// A2_subp
    UINT64_C(1983905792),	// A2_subri
    UINT64_C(4139778048),	// A2_subsat
    UINT64_C(4127195136),	// A2_svaddh
    UINT64_C(4129292288),	// A2_svaddhs
    UINT64_C(4133486592),	// A2_svadduhs
    UINT64_C(4143972352),	// A2_svavgh
    UINT64_C(4146069504),	// A2_svavghs
    UINT64_C(4150263808),	// A2_svnavgh
    UINT64_C(4135583744),	// A2_svsubh
    UINT64_C(4137680896),	// A2_svsubhs
    UINT64_C(4141875200),	// A2_svsubuhs
    UINT64_C(2357199072),	// A2_swiz
    UINT64_C(1889533952),	// A2_sxtb
    UINT64_C(1893728256),	// A2_sxth
    UINT64_C(2218786816),	// A2_sxtw
    UINT64_C(1885339648),	// A2_tfr
    UINT64_C(1778384896),	// A2_tfrcrr
    UINT64_C(1914699776),	// A2_tfrih
    UINT64_C(1897922560),	// A2_tfril
    UINT64_C(1646264320),	// A2_tfrrcr
    UINT64_C(2013265920),	// A2_tfrsi
    UINT64_C(2151678080),	// A2_vabsh
    UINT64_C(2151678112),	// A2_vabshsat
    UINT64_C(2151678144),	// A2_vabsw
    UINT64_C(2151678176),	// A2_vabswsat
    UINT64_C(3539992640),	// A2_vaddh
    UINT64_C(3539992672),	// A2_vaddhs
    UINT64_C(3539992576),	// A2_vaddub
    UINT64_C(3539992608),	// A2_vaddubs
    UINT64_C(3539992704),	// A2_vadduhs
    UINT64_C(3539992736),	// A2_vaddw
    UINT64_C(3539992768),	// A2_vaddws
    UINT64_C(3544186944),	// A2_vavgh
    UINT64_C(3544187008),	// A2_vavghcr
    UINT64_C(3544186976),	// A2_vavghr
    UINT64_C(3544186880),	// A2_vavgub
    UINT64_C(3544186912),	// A2_vavgubr
    UINT64_C(3544187040),	// A2_vavguh
    UINT64_C(3544187072),	// A2_vavguhr
    UINT64_C(3546284128),	// A2_vavguw
    UINT64_C(3546284160),	// A2_vavguwr
    UINT64_C(3546284032),	// A2_vavgw
    UINT64_C(3546284096),	// A2_vavgwcr
    UINT64_C(3546284064),	// A2_vavgwr
    UINT64_C(3523215552),	// A2_vcmpbeq
    UINT64_C(3523215584),	// A2_vcmpbgtu
    UINT64_C(3523215456),	// A2_vcmpheq
    UINT64_C(3523215488),	// A2_vcmphgt
    UINT64_C(3523215520),	// A2_vcmphgtu
    UINT64_C(3523215360),	// A2_vcmpweq
    UINT64_C(3523215392),	// A2_vcmpwgt
    UINT64_C(3523215424),	// A2_vcmpwgtu
    UINT64_C(2155872480),	// A2_vconj
    UINT64_C(3552575680),	// A2_vmaxb
    UINT64_C(3552575520),	// A2_vmaxh
    UINT64_C(3552575488),	// A2_vmaxub
    UINT64_C(3552575552),	// A2_vmaxuh
    UINT64_C(3550478496),	// A2_vmaxuw
    UINT64_C(3552575584),	// A2_vmaxw
    UINT64_C(3552575712),	// A2_vminb
    UINT64_C(3550478368),	// A2_vminh
    UINT64_C(3550478336),	// A2_vminub
    UINT64_C(3550478400),	// A2_vminuh
    UINT64_C(3550478464),	// A2_vminuw
    UINT64_C(3550478432),	// A2_vminw
    UINT64_C(3548381184),	// A2_vnavgh
    UINT64_C(3548381248),	// A2_vnavghcr
    UINT64_C(3548381216),	// A2_vnavghr
    UINT64_C(3548381280),	// A2_vnavgw
    UINT64_C(3548381376),	// A2_vnavgwcr
    UINT64_C(3548381312),	// A2_vnavgwr
    UINT64_C(3896508448),	// A2_vraddub
    UINT64_C(3930062880),	// A2_vraddub_acc
    UINT64_C(3896508480),	// A2_vrsadub
    UINT64_C(3930062912),	// A2_vrsadub_acc
    UINT64_C(3542089792),	// A2_vsubh
    UINT64_C(3542089824),	// A2_vsubhs
    UINT64_C(3542089728),	// A2_vsubub
    UINT64_C(3542089760),	// A2_vsububs
    UINT64_C(3542089856),	// A2_vsubuhs
    UINT64_C(3542089888),	// A2_vsubw
    UINT64_C(3542089920),	// A2_vsubws
    UINT64_C(4049600512),	// A2_xor
    UINT64_C(3554672768),	// A2_xorp
    UINT64_C(1891631104),	// A2_zxth
    UINT64_C(3267362816),	// A4_addp_c
    UINT64_C(4051697664),	// A4_andn
    UINT64_C(3554672672),	// A4_andnp
    UINT64_C(3558866944),	// A4_bitsplit
    UINT64_C(2294284416),	// A4_bitspliti
    UINT64_C(3523223712),	// A4_boundscheck_hi
    UINT64_C(3523223680),	// A4_boundscheck_lo
    UINT64_C(3351249088),	// A4_cmpbeq
    UINT64_C(3707764736),	// A4_cmpbeqi
    UINT64_C(3351248960),	// A4_cmpbgt
    UINT64_C(3709861888),	// A4_cmpbgti
    UINT64_C(3351249120),	// A4_cmpbgtu
    UINT64_C(3711959040),	// A4_cmpbgtui
    UINT64_C(3351248992),	// A4_cmpheq
    UINT64_C(3707764744),	// A4_cmpheqi
    UINT64_C(3351249024),	// A4_cmphgt
    UINT64_C(3709861896),	// A4_cmphgti
    UINT64_C(3351249056),	// A4_cmphgtu
    UINT64_C(3711959048),	// A4_cmphgtui
    UINT64_C(2088763392),	// A4_combineii
    UINT64_C(1931485184),	// A4_combineir
    UINT64_C(1929388032),	// A4_combineri
    UINT64_C(2363490304),	// A4_cround_ri
    UINT64_C(3334471680),	// A4_cround_rr
    UINT64_C(0),	// A4_ext
    UINT64_C(3554672864),	// A4_modwrapu
    UINT64_C(4053794816),	// A4_orn
    UINT64_C(3554672736),	// A4_ornp
    UINT64_C(1879058432),	// A4_paslhf
    UINT64_C(1879059456),	// A4_paslhfnew
    UINT64_C(1879056384),	// A4_paslht
    UINT64_C(1879057408),	// A4_paslhtnew
    UINT64_C(1881155584),	// A4_pasrhf
    UINT64_C(1881156608),	// A4_pasrhfnew
    UINT64_C(1881153536),	// A4_pasrht
    UINT64_C(1881154560),	// A4_pasrhtnew
    UINT64_C(1889544192),	// A4_psxtbf
    UINT64_C(1889545216),	// A4_psxtbfnew
    UINT64_C(1889542144),	// A4_psxtbt
    UINT64_C(1889543168),	// A4_psxtbtnew
    UINT64_C(1893738496),	// A4_psxthf
    UINT64_C(1893739520),	// A4_psxthfnew
    UINT64_C(1893736448),	// A4_psxtht
    UINT64_C(1893737472),	// A4_psxthtnew
    UINT64_C(1887447040),	// A4_pzxtbf
    UINT64_C(1887448064),	// A4_pzxtbfnew
    UINT64_C(1887444992),	// A4_pzxtbt
    UINT64_C(1887446016),	// A4_pzxtbtnew
    UINT64_C(1891641344),	// A4_pzxthf
    UINT64_C(1891642368),	// A4_pzxthfnew
    UINT64_C(1891639296),	// A4_pzxtht
    UINT64_C(1891640320),	// A4_pzxthtnew
    UINT64_C(4081057792),	// A4_rcmpeq
    UINT64_C(1933582336),	// A4_rcmpeqi
    UINT64_C(4083154944),	// A4_rcmpneq
    UINT64_C(1935679488),	// A4_rcmpneqi
    UINT64_C(2363490432),	// A4_round_ri
    UINT64_C(2363490496),	// A4_round_ri_sat
    UINT64_C(3334471808),	// A4_round_rr
    UINT64_C(3334471872),	// A4_round_rr_sat
    UINT64_C(3269459968),	// A4_subp_c
    UINT64_C(1744830464),	// A4_tfrcpp
    UINT64_C(1663041536),	// A4_tfrpcp
    UINT64_C(3523223648),	// A4_tlbmatch
    UINT64_C(3523223552),	// A4_vcmpbeq_any
    UINT64_C(3690987520),	// A4_vcmpbeqi
    UINT64_C(3523223616),	// A4_vcmpbgt
    UINT64_C(3693084672),	// A4_vcmpbgti
    UINT64_C(3695181824),	// A4_vcmpbgtui
    UINT64_C(3690987528),	// A4_vcmpheqi
    UINT64_C(3693084680),	// A4_vcmphgti
    UINT64_C(3695181832),	// A4_vcmphgtui
    UINT64_C(3690987536),	// A4_vcmpweqi
    UINT64_C(3693084688),	// A4_vcmpwgti
    UINT64_C(3695181840),	// A4_vcmpwgtui
    UINT64_C(3407872032),	// A4_vrmaxh
    UINT64_C(3407880224),	// A4_vrmaxuh
    UINT64_C(3407880256),	// A4_vrmaxuw
    UINT64_C(3407872064),	// A4_vrmaxw
    UINT64_C(3407872160),	// A4_vrminh
    UINT64_C(3407880352),	// A4_vrminuh
    UINT64_C(3407880384),	// A4_vrminuw
    UINT64_C(3407872192),	// A4_vrminw
    UINT64_C(3936354304),	// A5_ACS
    UINT64_C(3242197024),	// A5_vaddhubs
    UINT64_C(3523223584),	// A6_vcmpbeq_notany
    UINT64_C(3940548608),	// A6_vminub_RdP
    UINT64_C(1805647872),	// C2_all8
    UINT64_C(1795162112),	// C2_and
    UINT64_C(1801453568),	// C2_andn
    UINT64_C(1803550720),	// C2_any8
    UINT64_C(3347054592),	// C2_bitsclr
    UINT64_C(2239758336),	// C2_bitsclri
    UINT64_C(3342860288),	// C2_bitsset
    UINT64_C(4244635776),	// C2_ccombinewf
    UINT64_C(4244643968),	// C2_ccombinewnewf
    UINT64_C(4244643840),	// C2_ccombinewnewt
    UINT64_C(4244635648),	// C2_ccombinewt
    UINT64_C(2122317824),	// C2_cmoveif
    UINT64_C(2113929216),	// C2_cmoveit
    UINT64_C(2122326016),	// C2_cmovenewif
    UINT64_C(2113937408),	// C2_cmovenewit
    UINT64_C(4060086272),	// C2_cmpeq
    UINT64_C(1962934272),	// C2_cmpeqi
    UINT64_C(3531603968),	// C2_cmpeqp
    UINT64_C(4064280576),	// C2_cmpgt
    UINT64_C(1967128576),	// C2_cmpgti
    UINT64_C(3531604032),	// C2_cmpgtp
    UINT64_C(4066377728),	// C2_cmpgtu
    UINT64_C(1971322880),	// C2_cmpgtui
    UINT64_C(3531604096),	// C2_cmpgtup
    UINT64_C(2248146944),	// C2_mask
    UINT64_C(4093640704),	// C2_mux
    UINT64_C(2046820352),	// C2_muxii
    UINT64_C(1929379840),	// C2_muxir
    UINT64_C(1937768448),	// C2_muxri
    UINT64_C(1807745024),	// C2_not
    UINT64_C(1797259264),	// C2_or
    UINT64_C(1809842176),	// C2_orn
    UINT64_C(2302672896),	// C2_tfrpr
    UINT64_C(2235564032),	// C2_tfrrp
    UINT64_C(2298478592),	// C2_vitpack
    UINT64_C(3506438144),	// C2_vmux
    UINT64_C(1799356416),	// C2_xor
    UINT64_C(1783169024),	// C4_addipc
    UINT64_C(1796210688),	// C4_and_and
    UINT64_C(1804599296),	// C4_and_andn
    UINT64_C(1798307840),	// C4_and_or
    UINT64_C(1806696448),	// C4_and_orn
    UINT64_C(4064280592),	// C4_cmplte
    UINT64_C(1967128592),	// C4_cmpltei
    UINT64_C(4066377744),	// C4_cmplteu
    UINT64_C(1971322896),	// C4_cmplteui
    UINT64_C(4060086288),	// C4_cmpneq
    UINT64_C(1962934288),	// C4_cmpneqi
    UINT64_C(1795170448),	// C4_fastcorner9
    UINT64_C(1796219024),	// C4_fastcorner9_not
    UINT64_C(3349151744),	// C4_nbitsclr
    UINT64_C(2241855488),	// C4_nbitsclri
    UINT64_C(3344957440),	// C4_nbitsset
    UINT64_C(1800404992),	// C4_or_and
    UINT64_C(1808793600),	// C4_or_andn
    UINT64_C(1802502144),	// C4_or_or
    UINT64_C(1810890752),	// C4_or_orn
    UINT64_C(1509949440),	// CALLProfile
    UINT64_C(0),	// CONST32
    UINT64_C(0),	// CONST64
    UINT64_C(0),	// DuplexIClass0
    UINT64_C(8192),	// DuplexIClass1
    UINT64_C(536870912),	// DuplexIClass2
    UINT64_C(536879104),	// DuplexIClass3
    UINT64_C(1073741824),	// DuplexIClass4
    UINT64_C(1073750016),	// DuplexIClass5
    UINT64_C(1610612736),	// DuplexIClass6
    UINT64_C(1610620928),	// DuplexIClass7
    UINT64_C(2147483648),	// DuplexIClass8
    UINT64_C(2147491840),	// DuplexIClass9
    UINT64_C(2684354560),	// DuplexIClassA
    UINT64_C(2684362752),	// DuplexIClassB
    UINT64_C(3221225472),	// DuplexIClassC
    UINT64_C(3221233664),	// DuplexIClassD
    UINT64_C(3758096384),	// DuplexIClassE
    UINT64_C(3758104576),	// DuplexIClassF
    UINT64_C(1384120320),	// EH_RETURN_JMPR
    UINT64_C(2162163808),	// F2_conv_d2df
    UINT64_C(2285895712),	// F2_conv_d2sf
    UINT64_C(2162163712),	// F2_conv_df2d
    UINT64_C(2162163904),	// F2_conv_df2d_chop
    UINT64_C(2281701408),	// F2_conv_df2sf
    UINT64_C(2162163744),	// F2_conv_df2ud
    UINT64_C(2162163936),	// F2_conv_df2ud_chop
    UINT64_C(2287992864),	// F2_conv_df2uw
    UINT64_C(2292187168),	// F2_conv_df2uw_chop
    UINT64_C(2290090016),	// F2_conv_df2w
    UINT64_C(2296381472),	// F2_conv_df2w_chop
    UINT64_C(2222981248),	// F2_conv_sf2d
    UINT64_C(2222981312),	// F2_conv_sf2d_chop
    UINT64_C(2222981120),	// F2_conv_sf2df
    UINT64_C(2222981216),	// F2_conv_sf2ud
    UINT64_C(2222981280),	// F2_conv_sf2ud_chop
    UINT64_C(2338324480),	// F2_conv_sf2uw
    UINT64_C(2338324512),	// F2_conv_sf2uw_chop
    UINT64_C(2340421632),	// F2_conv_sf2w
    UINT64_C(2340421664),	// F2_conv_sf2w_chop
    UINT64_C(2162163776),	// F2_conv_ud2df
    UINT64_C(2283798560),	// F2_conv_ud2sf
    UINT64_C(2222981152),	// F2_conv_uw2df
    UINT64_C(2334130176),	// F2_conv_uw2sf
    UINT64_C(2222981184),	// F2_conv_w2df
    UINT64_C(2336227328),	// F2_conv_w2sf
    UINT64_C(3892314208),	// F2_dfadd
    UINT64_C(3699376144),	// F2_dfclass
    UINT64_C(3537895424),	// F2_dfcmpeq
    UINT64_C(3537895488),	// F2_dfcmpge
    UINT64_C(3537895456),	// F2_dfcmpgt
    UINT64_C(3537895520),	// F2_dfcmpuo
    UINT64_C(3644850176),	// F2_dfimm_n
    UINT64_C(3640655872),	// F2_dfimm_p
    UINT64_C(3900702816),	// F2_dfsub
    UINT64_C(3942645760),	// F2_sfadd
    UINT64_C(2246049792),	// F2_sfclass
    UINT64_C(3353346144),	// F2_sfcmpeq
    UINT64_C(3353346048),	// F2_sfcmpge
    UINT64_C(3353346176),	// F2_sfcmpgt
    UINT64_C(3353346080),	// F2_sfcmpuo
    UINT64_C(3955228704),	// F2_sffixupd
    UINT64_C(3955228672),	// F2_sffixupn
    UINT64_C(2342518784),	// F2_sffixupr
    UINT64_C(4009754752),	// F2_sffma
    UINT64_C(4009754816),	// F2_sffma_lib
    UINT64_C(4016046208),	// F2_sffma_sc
    UINT64_C(4009754784),	// F2_sffms
    UINT64_C(4009754848),	// F2_sffms_lib
    UINT64_C(3594518528),	// F2_sfimm_n
    UINT64_C(3590324224),	// F2_sfimm_p
    UINT64_C(2346713088),	// F2_sfinvsqrta
    UINT64_C(3951034368),	// F2_sfmax
    UINT64_C(3951034400),	// F2_sfmin
    UINT64_C(3946840064),	// F2_sfmpy
    UINT64_C(3957325952),	// F2_sfrecipa
    UINT64_C(3942645792),	// F2_sfsub
    UINT64_C(1746927616),	// G4_tfrgcpp
    UINT64_C(1780482048),	// G4_tfrgcrr
    UINT64_C(1660944384),	// G4_tfrgpcp
    UINT64_C(1644167168),	// G4_tfrgrcr
    UINT64_C(35651584),	// HI
    UINT64_C(1509949440),	// J2_call
    UINT64_C(1562378240),	// J2_callf
    UINT64_C(1352663040),	// J2_callr
    UINT64_C(1361051648),	// J2_callrf
    UINT64_C(1358954496),	// J2_callrt
    UINT64_C(1560281088),	// J2_callt
    UINT64_C(1476395008),	// J2_jump
    UINT64_C(1545601024),	// J2_jumpf
    UINT64_C(1545603072),	// J2_jumpfnew
    UINT64_C(1545607168),	// J2_jumpfnewpt
    UINT64_C(1545605120),	// J2_jumpfpt
    UINT64_C(1384120320),	// J2_jumpr
    UINT64_C(1398800384),	// J2_jumprf
    UINT64_C(1398802432),	// J2_jumprfnew
    UINT64_C(1398806528),	// J2_jumprfnewpt
    UINT64_C(1398804480),	// J2_jumprfpt
    UINT64_C(1631584256),	// J2_jumprgtez
    UINT64_C(1631588352),	// J2_jumprgtezpt
    UINT64_C(1639972864),	// J2_jumprltez
    UINT64_C(1639976960),	// J2_jumprltezpt
    UINT64_C(1635778560),	// J2_jumprnz
    UINT64_C(1635782656),	// J2_jumprnzpt
    UINT64_C(1396703232),	// J2_jumprt
    UINT64_C(1396705280),	// J2_jumprtnew
    UINT64_C(1396709376),	// J2_jumprtnewpt
    UINT64_C(1396707328),	// J2_jumprtpt
    UINT64_C(1627389952),	// J2_jumprz
    UINT64_C(1627394048),	// J2_jumprzpt
    UINT64_C(1543503872),	// J2_jumpt
    UINT64_C(1543505920),	// J2_jumptnew
    UINT64_C(1543510016),	// J2_jumptnewpt
    UINT64_C(1543507968),	// J2_jumptpt
    UINT64_C(1761607680),	// J2_loop0i
    UINT64_C(1761607680),	// J2_loop0iext
    UINT64_C(1610612736),	// J2_loop0r
    UINT64_C(1610612736),	// J2_loop0rext
    UINT64_C(1763704832),	// J2_loop1i
    UINT64_C(1763704832),	// J2_loop1iext
    UINT64_C(1612709888),	// J2_loop1r
    UINT64_C(1612709888),	// J2_loop1rext
    UINT64_C(1413480448),	// J2_pause
    UINT64_C(1772093440),	// J2_ploop1si
    UINT64_C(1621098496),	// J2_ploop1sr
    UINT64_C(1774190592),	// J2_ploop2si
    UINT64_C(1623195648),	// J2_ploop2sr
    UINT64_C(1776287744),	// J2_ploop3si
    UINT64_C(1625292800),	// J2_ploop3sr
    UINT64_C(1409286144),	// J2_trap0
    UINT64_C(1417674752),	// J2_trap1
    UINT64_C(541065216),	// J4_cmpeq_f_jumpnv_nt
    UINT64_C(541073408),	// J4_cmpeq_f_jumpnv_t
    UINT64_C(339738624),	// J4_cmpeq_fp0_jump_nt
    UINT64_C(339746816),	// J4_cmpeq_fp0_jump_t
    UINT64_C(339742720),	// J4_cmpeq_fp1_jump_nt
    UINT64_C(339750912),	// J4_cmpeq_fp1_jump_t
    UINT64_C(536870912),	// J4_cmpeq_t_jumpnv_nt
    UINT64_C(536879104),	// J4_cmpeq_t_jumpnv_t
    UINT64_C(335544320),	// J4_cmpeq_tp0_jump_nt
    UINT64_C(335552512),	// J4_cmpeq_tp0_jump_t
    UINT64_C(335548416),	// J4_cmpeq_tp1_jump_nt
    UINT64_C(335556608),	// J4_cmpeq_tp1_jump_t
    UINT64_C(608174080),	// J4_cmpeqi_f_jumpnv_nt
    UINT64_C(608182272),	// J4_cmpeqi_f_jumpnv_t
    UINT64_C(272629760),	// J4_cmpeqi_fp0_jump_nt
    UINT64_C(272637952),	// J4_cmpeqi_fp0_jump_t
    UINT64_C(306184192),	// J4_cmpeqi_fp1_jump_nt
    UINT64_C(306192384),	// J4_cmpeqi_fp1_jump_t
    UINT64_C(603979776),	// J4_cmpeqi_t_jumpnv_nt
    UINT64_C(603987968),	// J4_cmpeqi_t_jumpnv_t
    UINT64_C(268435456),	// J4_cmpeqi_tp0_jump_nt
    UINT64_C(268443648),	// J4_cmpeqi_tp0_jump_t
    UINT64_C(301989888),	// J4_cmpeqi_tp1_jump_nt
    UINT64_C(301998080),	// J4_cmpeqi_tp1_jump_t
    UINT64_C(641728512),	// J4_cmpeqn1_f_jumpnv_nt
    UINT64_C(641736704),	// J4_cmpeqn1_f_jumpnv_t
    UINT64_C(297795584),	// J4_cmpeqn1_fp0_jump_nt
    UINT64_C(297803776),	// J4_cmpeqn1_fp0_jump_t
    UINT64_C(331350016),	// J4_cmpeqn1_fp1_jump_nt
    UINT64_C(331358208),	// J4_cmpeqn1_fp1_jump_t
    UINT64_C(637534208),	// J4_cmpeqn1_t_jumpnv_nt
    UINT64_C(637542400),	// J4_cmpeqn1_t_jumpnv_t
    UINT64_C(293601280),	// J4_cmpeqn1_tp0_jump_nt
    UINT64_C(293609472),	// J4_cmpeqn1_tp0_jump_t
    UINT64_C(327155712),	// J4_cmpeqn1_tp1_jump_nt
    UINT64_C(327163904),	// J4_cmpeqn1_tp1_jump_t
    UINT64_C(549453824),	// J4_cmpgt_f_jumpnv_nt
    UINT64_C(549462016),	// J4_cmpgt_f_jumpnv_t
    UINT64_C(348127232),	// J4_cmpgt_fp0_jump_nt
    UINT64_C(348135424),	// J4_cmpgt_fp0_jump_t
    UINT64_C(348131328),	// J4_cmpgt_fp1_jump_nt
    UINT64_C(348139520),	// J4_cmpgt_fp1_jump_t
    UINT64_C(545259520),	// J4_cmpgt_t_jumpnv_nt
    UINT64_C(545267712),	// J4_cmpgt_t_jumpnv_t
    UINT64_C(343932928),	// J4_cmpgt_tp0_jump_nt
    UINT64_C(343941120),	// J4_cmpgt_tp0_jump_t
    UINT64_C(343937024),	// J4_cmpgt_tp1_jump_nt
    UINT64_C(343945216),	// J4_cmpgt_tp1_jump_t
    UINT64_C(616562688),	// J4_cmpgti_f_jumpnv_nt
    UINT64_C(616570880),	// J4_cmpgti_f_jumpnv_t
    UINT64_C(281018368),	// J4_cmpgti_fp0_jump_nt
    UINT64_C(281026560),	// J4_cmpgti_fp0_jump_t
    UINT64_C(314572800),	// J4_cmpgti_fp1_jump_nt
    UINT64_C(314580992),	// J4_cmpgti_fp1_jump_t
    UINT64_C(612368384),	// J4_cmpgti_t_jumpnv_nt
    UINT64_C(612376576),	// J4_cmpgti_t_jumpnv_t
    UINT64_C(276824064),	// J4_cmpgti_tp0_jump_nt
    UINT64_C(276832256),	// J4_cmpgti_tp0_jump_t
    UINT64_C(310378496),	// J4_cmpgti_tp1_jump_nt
    UINT64_C(310386688),	// J4_cmpgti_tp1_jump_t
    UINT64_C(650117120),	// J4_cmpgtn1_f_jumpnv_nt
    UINT64_C(650125312),	// J4_cmpgtn1_f_jumpnv_t
    UINT64_C(297795840),	// J4_cmpgtn1_fp0_jump_nt
    UINT64_C(297804032),	// J4_cmpgtn1_fp0_jump_t
    UINT64_C(331350272),	// J4_cmpgtn1_fp1_jump_nt
    UINT64_C(331358464),	// J4_cmpgtn1_fp1_jump_t
    UINT64_C(645922816),	// J4_cmpgtn1_t_jumpnv_nt
    UINT64_C(645931008),	// J4_cmpgtn1_t_jumpnv_t
    UINT64_C(293601536),	// J4_cmpgtn1_tp0_jump_nt
    UINT64_C(293609728),	// J4_cmpgtn1_tp0_jump_t
    UINT64_C(327155968),	// J4_cmpgtn1_tp1_jump_nt
    UINT64_C(327164160),	// J4_cmpgtn1_tp1_jump_t
    UINT64_C(557842432),	// J4_cmpgtu_f_jumpnv_nt
    UINT64_C(557850624),	// J4_cmpgtu_f_jumpnv_t
    UINT64_C(356515840),	// J4_cmpgtu_fp0_jump_nt
    UINT64_C(356524032),	// J4_cmpgtu_fp0_jump_t
    UINT64_C(356519936),	// J4_cmpgtu_fp1_jump_nt
    UINT64_C(356528128),	// J4_cmpgtu_fp1_jump_t
    UINT64_C(553648128),	// J4_cmpgtu_t_jumpnv_nt
    UINT64_C(553656320),	// J4_cmpgtu_t_jumpnv_t
    UINT64_C(352321536),	// J4_cmpgtu_tp0_jump_nt
    UINT64_C(352329728),	// J4_cmpgtu_tp0_jump_t
    UINT64_C(352325632),	// J4_cmpgtu_tp1_jump_nt
    UINT64_C(352333824),	// J4_cmpgtu_tp1_jump_t
    UINT64_C(624951296),	// J4_cmpgtui_f_jumpnv_nt
    UINT64_C(624959488),	// J4_cmpgtui_f_jumpnv_t
    UINT64_C(289406976),	// J4_cmpgtui_fp0_jump_nt
    UINT64_C(289415168),	// J4_cmpgtui_fp0_jump_t
    UINT64_C(322961408),	// J4_cmpgtui_fp1_jump_nt
    UINT64_C(322969600),	// J4_cmpgtui_fp1_jump_t
    UINT64_C(620756992),	// J4_cmpgtui_t_jumpnv_nt
    UINT64_C(620765184),	// J4_cmpgtui_t_jumpnv_t
    UINT64_C(285212672),	// J4_cmpgtui_tp0_jump_nt
    UINT64_C(285220864),	// J4_cmpgtui_tp0_jump_t
    UINT64_C(318767104),	// J4_cmpgtui_tp1_jump_nt
    UINT64_C(318775296),	// J4_cmpgtui_tp1_jump_t
    UINT64_C(566231040),	// J4_cmplt_f_jumpnv_nt
    UINT64_C(566239232),	// J4_cmplt_f_jumpnv_t
    UINT64_C(562036736),	// J4_cmplt_t_jumpnv_nt
    UINT64_C(562044928),	// J4_cmplt_t_jumpnv_t
    UINT64_C(574619648),	// J4_cmpltu_f_jumpnv_nt
    UINT64_C(574627840),	// J4_cmpltu_f_jumpnv_t
    UINT64_C(570425344),	// J4_cmpltu_t_jumpnv_nt
    UINT64_C(570433536),	// J4_cmpltu_t_jumpnv_t
    UINT64_C(1386217472),	// J4_hintjumpr
    UINT64_C(369098752),	// J4_jumpseti
    UINT64_C(385875968),	// J4_jumpsetr
    UINT64_C(633339904),	// J4_tstbit0_f_jumpnv_nt
    UINT64_C(633348096),	// J4_tstbit0_f_jumpnv_t
    UINT64_C(297796352),	// J4_tstbit0_fp0_jump_nt
    UINT64_C(297804544),	// J4_tstbit0_fp0_jump_t
    UINT64_C(331350784),	// J4_tstbit0_fp1_jump_nt
    UINT64_C(331358976),	// J4_tstbit0_fp1_jump_t
    UINT64_C(629145600),	// J4_tstbit0_t_jumpnv_nt
    UINT64_C(629153792),	// J4_tstbit0_t_jumpnv_t
    UINT64_C(293602048),	// J4_tstbit0_tp0_jump_nt
    UINT64_C(293610240),	// J4_tstbit0_tp0_jump_t
    UINT64_C(327156480),	// J4_tstbit0_tp1_jump_nt
    UINT64_C(327164672),	// J4_tstbit0_tp1_jump_t
    UINT64_C(2415919104),	// L2_deallocframe
    UINT64_C(2424307712),	// L2_loadalignb_io
    UINT64_C(2659188736),	// L2_loadalignb_pbr
    UINT64_C(2558525440),	// L2_loadalignb_pci
    UINT64_C(2558525952),	// L2_loadalignb_pcr
    UINT64_C(2592079872),	// L2_loadalignb_pi
    UINT64_C(2625634304),	// L2_loadalignb_pr
    UINT64_C(2420113408),	// L2_loadalignh_io
    UINT64_C(2654994432),	// L2_loadalignh_pbr
    UINT64_C(2554331136),	// L2_loadalignh_pci
    UINT64_C(2554331648),	// L2_loadalignh_pcr
    UINT64_C(2587885568),	// L2_loadalignh_pi
    UINT64_C(2621440000),	// L2_loadalignh_pr
    UINT64_C(2418016256),	// L2_loadbsw2_io
    UINT64_C(2652897280),	// L2_loadbsw2_pbr
    UINT64_C(2552233984),	// L2_loadbsw2_pci
    UINT64_C(2552234496),	// L2_loadbsw2_pcr
    UINT64_C(2585788416),	// L2_loadbsw2_pi
    UINT64_C(2619342848),	// L2_loadbsw2_pr
    UINT64_C(2430599168),	// L2_loadbsw4_io
    UINT64_C(2665480192),	// L2_loadbsw4_pbr
    UINT64_C(2564816896),	// L2_loadbsw4_pci
    UINT64_C(2564817408),	// L2_loadbsw4_pcr
    UINT64_C(2598371328),	// L2_loadbsw4_pi
    UINT64_C(2631925760),	// L2_loadbsw4_pr
    UINT64_C(2422210560),	// L2_loadbzw2_io
    UINT64_C(2657091584),	// L2_loadbzw2_pbr
    UINT64_C(2556428288),	// L2_loadbzw2_pci
    UINT64_C(2556428800),	// L2_loadbzw2_pcr
    UINT64_C(2589982720),	// L2_loadbzw2_pi
    UINT64_C(2623537152),	// L2_loadbzw2_pr
    UINT64_C(2426404864),	// L2_loadbzw4_io
    UINT64_C(2661285888),	// L2_loadbzw4_pbr
    UINT64_C(2560622592),	// L2_loadbzw4_pci
    UINT64_C(2560623104),	// L2_loadbzw4_pcr
    UINT64_C(2594177024),	// L2_loadbzw4_pi
    UINT64_C(2627731456),	// L2_loadbzw4_pr
    UINT64_C(2432696320),	// L2_loadrb_io
    UINT64_C(2667577344),	// L2_loadrb_pbr
    UINT64_C(2566914048),	// L2_loadrb_pci
    UINT64_C(2566914560),	// L2_loadrb_pcr
    UINT64_C(2600468480),	// L2_loadrb_pi
    UINT64_C(2634022912),	// L2_loadrb_pr
    UINT64_C(1224736768),	// L2_loadrbgp
    UINT64_C(2445279232),	// L2_loadrd_io
    UINT64_C(2680160256),	// L2_loadrd_pbr
    UINT64_C(2579496960),	// L2_loadrd_pci
    UINT64_C(2579497472),	// L2_loadrd_pcr
    UINT64_C(2613051392),	// L2_loadrd_pi
    UINT64_C(2646605824),	// L2_loadrd_pr
    UINT64_C(1237319680),	// L2_loadrdgp
    UINT64_C(2436890624),	// L2_loadrh_io
    UINT64_C(2671771648),	// L2_loadrh_pbr
    UINT64_C(2571108352),	// L2_loadrh_pci
    UINT64_C(2571108864),	// L2_loadrh_pcr
    UINT64_C(2604662784),	// L2_loadrh_pi
    UINT64_C(2638217216),	// L2_loadrh_pr
    UINT64_C(1228931072),	// L2_loadrhgp
    UINT64_C(2441084928),	// L2_loadri_io
    UINT64_C(2675965952),	// L2_loadri_pbr
    UINT64_C(2575302656),	// L2_loadri_pci
    UINT64_C(2575303168),	// L2_loadri_pcr
    UINT64_C(2608857088),	// L2_loadri_pi
    UINT64_C(2642411520),	// L2_loadri_pr
    UINT64_C(1233125376),	// L2_loadrigp
    UINT64_C(2434793472),	// L2_loadrub_io
    UINT64_C(2669674496),	// L2_loadrub_pbr
    UINT64_C(2569011200),	// L2_loadrub_pci
    UINT64_C(2569011712),	// L2_loadrub_pcr
    UINT64_C(2602565632),	// L2_loadrub_pi
    UINT64_C(2636120064),	// L2_loadrub_pr
    UINT64_C(1226833920),	// L2_loadrubgp
    UINT64_C(2438987776),	// L2_loadruh_io
    UINT64_C(2673868800),	// L2_loadruh_pbr
    UINT64_C(2573205504),	// L2_loadruh_pci
    UINT64_C(2573206016),	// L2_loadruh_pcr
    UINT64_C(2606759936),	// L2_loadruh_pi
    UINT64_C(2640314368),	// L2_loadruh_pr
    UINT64_C(1231028224),	// L2_loadruhgp
    UINT64_C(2449473536),	// L2_loadw_locked
    UINT64_C(1157627904),	// L2_ploadrbf_io
    UINT64_C(2600478720),	// L2_ploadrbf_pi
    UINT64_C(1191182336),	// L2_ploadrbfnew_io
    UINT64_C(2600482816),	// L2_ploadrbfnew_pi
    UINT64_C(1090519040),	// L2_ploadrbt_io
    UINT64_C(2600476672),	// L2_ploadrbt_pi
    UINT64_C(1124073472),	// L2_ploadrbtnew_io
    UINT64_C(2600480768),	// L2_ploadrbtnew_pi
    UINT64_C(1170210816),	// L2_ploadrdf_io
    UINT64_C(2613061632),	// L2_ploadrdf_pi
    UINT64_C(1203765248),	// L2_ploadrdfnew_io
    UINT64_C(2613065728),	// L2_ploadrdfnew_pi
    UINT64_C(1103101952),	// L2_ploadrdt_io
    UINT64_C(2613059584),	// L2_ploadrdt_pi
    UINT64_C(1136656384),	// L2_ploadrdtnew_io
    UINT64_C(2613063680),	// L2_ploadrdtnew_pi
    UINT64_C(1161822208),	// L2_ploadrhf_io
    UINT64_C(2604673024),	// L2_ploadrhf_pi
    UINT64_C(1195376640),	// L2_ploadrhfnew_io
    UINT64_C(2604677120),	// L2_ploadrhfnew_pi
    UINT64_C(1094713344),	// L2_ploadrht_io
    UINT64_C(2604670976),	// L2_ploadrht_pi
    UINT64_C(1128267776),	// L2_ploadrhtnew_io
    UINT64_C(2604675072),	// L2_ploadrhtnew_pi
    UINT64_C(1166016512),	// L2_ploadrif_io
    UINT64_C(2608867328),	// L2_ploadrif_pi
    UINT64_C(1199570944),	// L2_ploadrifnew_io
    UINT64_C(2608871424),	// L2_ploadrifnew_pi
    UINT64_C(1098907648),	// L2_ploadrit_io
    UINT64_C(2608865280),	// L2_ploadrit_pi
    UINT64_C(1132462080),	// L2_ploadritnew_io
    UINT64_C(2608869376),	// L2_ploadritnew_pi
    UINT64_C(1159725056),	// L2_ploadrubf_io
    UINT64_C(2602575872),	// L2_ploadrubf_pi
    UINT64_C(1193279488),	// L2_ploadrubfnew_io
    UINT64_C(2602579968),	// L2_ploadrubfnew_pi
    UINT64_C(1092616192),	// L2_ploadrubt_io
    UINT64_C(2602573824),	// L2_ploadrubt_pi
    UINT64_C(1126170624),	// L2_ploadrubtnew_io
    UINT64_C(2602577920),	// L2_ploadrubtnew_pi
    UINT64_C(1163919360),	// L2_ploadruhf_io
    UINT64_C(2606770176),	// L2_ploadruhf_pi
    UINT64_C(1197473792),	// L2_ploadruhfnew_io
    UINT64_C(2606774272),	// L2_ploadruhfnew_pi
    UINT64_C(1096810496),	// L2_ploadruht_io
    UINT64_C(2606768128),	// L2_ploadruht_pi
    UINT64_C(1130364928),	// L2_ploadruhtnew_io
    UINT64_C(2606772224),	// L2_ploadruhtnew_pi
    UINT64_C(1040187392),	// L4_add_memopb_io
    UINT64_C(1042284544),	// L4_add_memoph_io
    UINT64_C(1044381696),	// L4_add_memopw_io
    UINT64_C(1040187456),	// L4_and_memopb_io
    UINT64_C(1042284608),	// L4_and_memoph_io
    UINT64_C(1044381760),	// L4_and_memopw_io
    UINT64_C(1056964608),	// L4_iadd_memopb_io
    UINT64_C(1059061760),	// L4_iadd_memoph_io
    UINT64_C(1061158912),	// L4_iadd_memopw_io
    UINT64_C(1056964672),	// L4_iand_memopb_io
    UINT64_C(1059061824),	// L4_iand_memoph_io
    UINT64_C(1061158976),	// L4_iand_memopw_io
    UINT64_C(1056964704),	// L4_ior_memopb_io
    UINT64_C(1059061856),	// L4_ior_memoph_io
    UINT64_C(1061159008),	// L4_ior_memopw_io
    UINT64_C(1056964640),	// L4_isub_memopb_io
    UINT64_C(1059061792),	// L4_isub_memoph_io
    UINT64_C(1061158944),	// L4_isub_memopw_io
    UINT64_C(2592083968),	// L4_loadalignb_ap
    UINT64_C(2625638400),	// L4_loadalignb_ur
    UINT64_C(2587889664),	// L4_loadalignh_ap
    UINT64_C(2621444096),	// L4_loadalignh_ur
    UINT64_C(2585792512),	// L4_loadbsw2_ap
    UINT64_C(2619346944),	// L4_loadbsw2_ur
    UINT64_C(2598375424),	// L4_loadbsw4_ap
    UINT64_C(2631929856),	// L4_loadbsw4_ur
    UINT64_C(2589986816),	// L4_loadbzw2_ap
    UINT64_C(2623541248),	// L4_loadbzw2_ur
    UINT64_C(2594181120),	// L4_loadbzw4_ap
    UINT64_C(2627735552),	// L4_loadbzw4_ur
    UINT64_C(2449477632),	// L4_loadd_locked
    UINT64_C(2600472576),	// L4_loadrb_ap
    UINT64_C(973078528),	// L4_loadrb_rr
    UINT64_C(2634027008),	// L4_loadrb_ur
    UINT64_C(2613055488),	// L4_loadrd_ap
    UINT64_C(985661440),	// L4_loadrd_rr
    UINT64_C(2646609920),	// L4_loadrd_ur
    UINT64_C(2604666880),	// L4_loadrh_ap
    UINT64_C(977272832),	// L4_loadrh_rr
    UINT64_C(2638221312),	// L4_loadrh_ur
    UINT64_C(2608861184),	// L4_loadri_ap
    UINT64_C(981467136),	// L4_loadri_rr
    UINT64_C(2642415616),	// L4_loadri_ur
    UINT64_C(2602569728),	// L4_loadrub_ap
    UINT64_C(975175680),	// L4_loadrub_rr
    UINT64_C(2636124160),	// L4_loadrub_ur
    UINT64_C(2606764032),	// L4_loadruh_ap
    UINT64_C(979369984),	// L4_loadruh_rr
    UINT64_C(2640318464),	// L4_loadruh_ur
    UINT64_C(1040187488),	// L4_or_memopb_io
    UINT64_C(1042284640),	// L4_or_memoph_io
    UINT64_C(1044381792),	// L4_or_memopw_io
    UINT64_C(2667587712),	// L4_ploadrbf_abs
    UINT64_C(822083584),	// L4_ploadrbf_rr
    UINT64_C(2667591808),	// L4_ploadrbfnew_abs
    UINT64_C(855638016),	// L4_ploadrbfnew_rr
    UINT64_C(2667585664),	// L4_ploadrbt_abs
    UINT64_C(805306368),	// L4_ploadrbt_rr
    UINT64_C(2667589760),	// L4_ploadrbtnew_abs
    UINT64_C(838860800),	// L4_ploadrbtnew_rr
    UINT64_C(2680170624),	// L4_ploadrdf_abs
    UINT64_C(834666496),	// L4_ploadrdf_rr
    UINT64_C(2680174720),	// L4_ploadrdfnew_abs
    UINT64_C(868220928),	// L4_ploadrdfnew_rr
    UINT64_C(2680168576),	// L4_ploadrdt_abs
    UINT64_C(817889280),	// L4_ploadrdt_rr
    UINT64_C(2680172672),	// L4_ploadrdtnew_abs
    UINT64_C(851443712),	// L4_ploadrdtnew_rr
    UINT64_C(2671782016),	// L4_ploadrhf_abs
    UINT64_C(826277888),	// L4_ploadrhf_rr
    UINT64_C(2671786112),	// L4_ploadrhfnew_abs
    UINT64_C(859832320),	// L4_ploadrhfnew_rr
    UINT64_C(2671779968),	// L4_ploadrht_abs
    UINT64_C(809500672),	// L4_ploadrht_rr
    UINT64_C(2671784064),	// L4_ploadrhtnew_abs
    UINT64_C(843055104),	// L4_ploadrhtnew_rr
    UINT64_C(2675976320),	// L4_ploadrif_abs
    UINT64_C(830472192),	// L4_ploadrif_rr
    UINT64_C(2675980416),	// L4_ploadrifnew_abs
    UINT64_C(864026624),	// L4_ploadrifnew_rr
    UINT64_C(2675974272),	// L4_ploadrit_abs
    UINT64_C(813694976),	// L4_ploadrit_rr
    UINT64_C(2675978368),	// L4_ploadritnew_abs
    UINT64_C(847249408),	// L4_ploadritnew_rr
    UINT64_C(2669684864),	// L4_ploadrubf_abs
    UINT64_C(824180736),	// L4_ploadrubf_rr
    UINT64_C(2669688960),	// L4_ploadrubfnew_abs
    UINT64_C(857735168),	// L4_ploadrubfnew_rr
    UINT64_C(2669682816),	// L4_ploadrubt_abs
    UINT64_C(807403520),	// L4_ploadrubt_rr
    UINT64_C(2669686912),	// L4_ploadrubtnew_abs
    UINT64_C(840957952),	// L4_ploadrubtnew_rr
    UINT64_C(2673879168),	// L4_ploadruhf_abs
    UINT64_C(828375040),	// L4_ploadruhf_rr
    UINT64_C(2673883264),	// L4_ploadruhfnew_abs
    UINT64_C(861929472),	// L4_ploadruhfnew_rr
    UINT64_C(2673877120),	// L4_ploadruht_abs
    UINT64_C(811597824),	// L4_ploadruht_rr
    UINT64_C(2673881216),	// L4_ploadruhtnew_abs
    UINT64_C(845152256),	// L4_ploadruhtnew_rr
    UINT64_C(2516582400),	// L4_return
    UINT64_C(2516594688),	// L4_return_f
    UINT64_C(2516592640),	// L4_return_fnew_pnt
    UINT64_C(2516596736),	// L4_return_fnew_pt
    UINT64_C(2516586496),	// L4_return_t
    UINT64_C(2516584448),	// L4_return_tnew_pnt
    UINT64_C(2516588544),	// L4_return_tnew_pt
    UINT64_C(1040187424),	// L4_sub_memopb_io
    UINT64_C(1042284576),	// L4_sub_memoph_io
    UINT64_C(1044381728),	// L4_sub_memopw_io
    UINT64_C(2449473600),	// L6_memcpy
    UINT64_C(18874368),	// LO
    UINT64_C(4009754656),	// M2_acci
    UINT64_C(3791650816),	// M2_accii
    UINT64_C(3875536928),	// M2_cmaci_s0
    UINT64_C(3875536960),	// M2_cmacr_s0
    UINT64_C(3875537088),	// M2_cmacs_s0
    UINT64_C(3883925696),	// M2_cmacs_s1
    UINT64_C(3879731392),	// M2_cmacsc_s0
    UINT64_C(3888120000),	// M2_cmacsc_s1
    UINT64_C(3841982496),	// M2_cmpyi_s0
    UINT64_C(3841982528),	// M2_cmpyr_s0
    UINT64_C(3978297536),	// M2_cmpyrs_s0
    UINT64_C(3986686144),	// M2_cmpyrs_s1
    UINT64_C(3982491840),	// M2_cmpyrsc_s0
    UINT64_C(3990880448),	// M2_cmpyrsc_s1
    UINT64_C(3841982656),	// M2_cmpys_s0
    UINT64_C(3850371264),	// M2_cmpys_s1
    UINT64_C(3846176960),	// M2_cmpysc_s0
    UINT64_C(3854565568),	// M2_cmpysc_s1
    UINT64_C(3875537120),	// M2_cnacs_s0
    UINT64_C(3883925728),	// M2_cnacs_s1
    UINT64_C(3879731424),	// M2_cnacsc_s0
    UINT64_C(3888120032),	// M2_cnacsc_s1
    UINT64_C(3875536896),	// M2_dpmpyss_acc_s0
    UINT64_C(3877634048),	// M2_dpmpyss_nac_s0
    UINT64_C(3978297376),	// M2_dpmpyss_rnd_s0
    UINT64_C(3841982464),	// M2_dpmpyss_s0
    UINT64_C(3879731200),	// M2_dpmpyuu_acc_s0
    UINT64_C(3881828352),	// M2_dpmpyuu_nac_s0
    UINT64_C(3846176768),	// M2_dpmpyuu_s0
    UINT64_C(3986686080),	// M2_hmmpyh_rs1
    UINT64_C(3986685952),	// M2_hmmpyh_s1
    UINT64_C(3990880384),	// M2_hmmpyl_rs1
    UINT64_C(3986685984),	// M2_hmmpyl_s1
    UINT64_C(4009754624),	// M2_maci
    UINT64_C(3783262208),	// M2_macsin
    UINT64_C(3774873600),	// M2_macsip
    UINT64_C(3927965920),	// M2_mmachs_rs0
    UINT64_C(3936354528),	// M2_mmachs_rs1
    UINT64_C(3925868768),	// M2_mmachs_s0
    UINT64_C(3934257376),	// M2_mmachs_s1
    UINT64_C(3927965856),	// M2_mmacls_rs0
    UINT64_C(3936354464),	// M2_mmacls_rs1
    UINT64_C(3925868704),	// M2_mmacls_s0
    UINT64_C(3934257312),	// M2_mmacls_s1
    UINT64_C(3932160224),	// M2_mmacuhs_rs0
    UINT64_C(3940548832),	// M2_mmacuhs_rs1
    UINT64_C(3930063072),	// M2_mmacuhs_s0
    UINT64_C(3938451680),	// M2_mmacuhs_s1
    UINT64_C(3932160160),	// M2_mmaculs_rs0
    UINT64_C(3940548768),	// M2_mmaculs_rs1
    UINT64_C(3930063008),	// M2_mmaculs_s0
    UINT64_C(3938451616),	// M2_mmaculs_s1
    UINT64_C(3894411488),	// M2_mmpyh_rs0
    UINT64_C(3902800096),	// M2_mmpyh_rs1
    UINT64_C(3892314336),	// M2_mmpyh_s0
    UINT64_C(3900702944),	// M2_mmpyh_s1
    UINT64_C(3894411424),	// M2_mmpyl_rs0
    UINT64_C(3902800032),	// M2_mmpyl_rs1
    UINT64_C(3892314272),	// M2_mmpyl_s0
    UINT64_C(3900702880),	// M2_mmpyl_s1
    UINT64_C(3898605792),	// M2_mmpyuh_rs0
    UINT64_C(3906994400),	// M2_mmpyuh_rs1
    UINT64_C(3896508640),	// M2_mmpyuh_s0
    UINT64_C(3904897248),	// M2_mmpyuh_s1
    UINT64_C(3898605728),	// M2_mmpyul_rs0
    UINT64_C(3906994336),	// M2_mmpyul_rs1
    UINT64_C(3896508576),	// M2_mmpyul_s0
    UINT64_C(3904897184),	// M2_mmpyul_s1
    UINT64_C(4018143232),	// M2_mnaci
    UINT64_C(3992977504),	// M2_mpy_acc_hh_s0
    UINT64_C(4001366112),	// M2_mpy_acc_hh_s1
    UINT64_C(3992977472),	// M2_mpy_acc_hl_s0
    UINT64_C(4001366080),	// M2_mpy_acc_hl_s1
    UINT64_C(3992977440),	// M2_mpy_acc_lh_s0
    UINT64_C(4001366048),	// M2_mpy_acc_lh_s1
    UINT64_C(3992977408),	// M2_mpy_acc_ll_s0
    UINT64_C(4001366016),	// M2_mpy_acc_ll_s1
    UINT64_C(3992977632),	// M2_mpy_acc_sat_hh_s0
    UINT64_C(4001366240),	// M2_mpy_acc_sat_hh_s1
    UINT64_C(3992977600),	// M2_mpy_acc_sat_hl_s0
    UINT64_C(4001366208),	// M2_mpy_acc_sat_hl_s1
    UINT64_C(3992977568),	// M2_mpy_acc_sat_lh_s0
    UINT64_C(4001366176),	// M2_mpy_acc_sat_lh_s1
    UINT64_C(3992977536),	// M2_mpy_acc_sat_ll_s0
    UINT64_C(4001366144),	// M2_mpy_acc_sat_ll_s1
    UINT64_C(3959423072),	// M2_mpy_hh_s0
    UINT64_C(3967811680),	// M2_mpy_hh_s1
    UINT64_C(3959423040),	// M2_mpy_hl_s0
    UINT64_C(3967811648),	// M2_mpy_hl_s1
    UINT64_C(3959423008),	// M2_mpy_lh_s0
    UINT64_C(3967811616),	// M2_mpy_lh_s1
    UINT64_C(3959422976),	// M2_mpy_ll_s0
    UINT64_C(3967811584),	// M2_mpy_ll_s1
    UINT64_C(3995074656),	// M2_mpy_nac_hh_s0
    UINT64_C(4003463264),	// M2_mpy_nac_hh_s1
    UINT64_C(3995074624),	// M2_mpy_nac_hl_s0
    UINT64_C(4003463232),	// M2_mpy_nac_hl_s1
    UINT64_C(3995074592),	// M2_mpy_nac_lh_s0
    UINT64_C(4003463200),	// M2_mpy_nac_lh_s1
    UINT64_C(3995074560),	// M2_mpy_nac_ll_s0
    UINT64_C(4003463168),	// M2_mpy_nac_ll_s1
    UINT64_C(3995074784),	// M2_mpy_nac_sat_hh_s0
    UINT64_C(4003463392),	// M2_mpy_nac_sat_hh_s1
    UINT64_C(3995074752),	// M2_mpy_nac_sat_hl_s0
    UINT64_C(4003463360),	// M2_mpy_nac_sat_hl_s1
    UINT64_C(3995074720),	// M2_mpy_nac_sat_lh_s0
    UINT64_C(4003463328),	// M2_mpy_nac_sat_lh_s1
    UINT64_C(3995074688),	// M2_mpy_nac_sat_ll_s0
    UINT64_C(4003463296),	// M2_mpy_nac_sat_ll_s1
    UINT64_C(3961520224),	// M2_mpy_rnd_hh_s0
    UINT64_C(3969908832),	// M2_mpy_rnd_hh_s1
    UINT64_C(3961520192),	// M2_mpy_rnd_hl_s0
    UINT64_C(3969908800),	// M2_mpy_rnd_hl_s1
    UINT64_C(3961520160),	// M2_mpy_rnd_lh_s0
    UINT64_C(3969908768),	// M2_mpy_rnd_lh_s1
    UINT64_C(3961520128),	// M2_mpy_rnd_ll_s0
    UINT64_C(3969908736),	// M2_mpy_rnd_ll_s1
    UINT64_C(3959423200),	// M2_mpy_sat_hh_s0
    UINT64_C(3967811808),	// M2_mpy_sat_hh_s1
    UINT64_C(3959423168),	// M2_mpy_sat_hl_s0
    UINT64_C(3967811776),	// M2_mpy_sat_hl_s1
    UINT64_C(3959423136),	// M2_mpy_sat_lh_s0
    UINT64_C(3967811744),	// M2_mpy_sat_lh_s1
    UINT64_C(3959423104),	// M2_mpy_sat_ll_s0
    UINT64_C(3967811712),	// M2_mpy_sat_ll_s1
    UINT64_C(3961520352),	// M2_mpy_sat_rnd_hh_s0
    UINT64_C(3969908960),	// M2_mpy_sat_rnd_hh_s1
    UINT64_C(3961520320),	// M2_mpy_sat_rnd_hl_s0
    UINT64_C(3969908928),	// M2_mpy_sat_rnd_hl_s1
    UINT64_C(3961520288),	// M2_mpy_sat_rnd_lh_s0
    UINT64_C(3969908896),	// M2_mpy_sat_rnd_lh_s1
    UINT64_C(3961520256),	// M2_mpy_sat_rnd_ll_s0
    UINT64_C(3969908864),	// M2_mpy_sat_rnd_ll_s1
    UINT64_C(3976200224),	// M2_mpy_up
    UINT64_C(3986686016),	// M2_mpy_up_s1
    UINT64_C(3990880256),	// M2_mpy_up_s1_sat
    UINT64_C(3858759776),	// M2_mpyd_acc_hh_s0
    UINT64_C(3867148384),	// M2_mpyd_acc_hh_s1
    UINT64_C(3858759744),	// M2_mpyd_acc_hl_s0
    UINT64_C(3867148352),	// M2_mpyd_acc_hl_s1
    UINT64_C(3858759712),	// M2_mpyd_acc_lh_s0
    UINT64_C(3867148320),	// M2_mpyd_acc_lh_s1
    UINT64_C(3858759680),	// M2_mpyd_acc_ll_s0
    UINT64_C(3867148288),	// M2_mpyd_acc_ll_s1
    UINT64_C(3825205344),	// M2_mpyd_hh_s0
    UINT64_C(3833593952),	// M2_mpyd_hh_s1
    UINT64_C(3825205312),	// M2_mpyd_hl_s0
    UINT64_C(3833593920),	// M2_mpyd_hl_s1
    UINT64_C(3825205280),	// M2_mpyd_lh_s0
    UINT64_C(3833593888),	// M2_mpyd_lh_s1
    UINT64_C(3825205248),	// M2_mpyd_ll_s0
    UINT64_C(3833593856),	// M2_mpyd_ll_s1
    UINT64_C(3860856928),	// M2_mpyd_nac_hh_s0
    UINT64_C(3869245536),	// M2_mpyd_nac_hh_s1
    UINT64_C(3860856896),	// M2_mpyd_nac_hl_s0
    UINT64_C(3869245504),	// M2_mpyd_nac_hl_s1
    UINT64_C(3860856864),	// M2_mpyd_nac_lh_s0
    UINT64_C(3869245472),	// M2_mpyd_nac_lh_s1
    UINT64_C(3860856832),	// M2_mpyd_nac_ll_s0
    UINT64_C(3869245440),	// M2_mpyd_nac_ll_s1
    UINT64_C(3827302496),	// M2_mpyd_rnd_hh_s0
    UINT64_C(3835691104),	// M2_mpyd_rnd_hh_s1
    UINT64_C(3827302464),	// M2_mpyd_rnd_hl_s0
    UINT64_C(3835691072),	// M2_mpyd_rnd_hl_s1
    UINT64_C(3827302432),	// M2_mpyd_rnd_lh_s0
    UINT64_C(3835691040),	// M2_mpyd_rnd_lh_s1
    UINT64_C(3827302400),	// M2_mpyd_rnd_ll_s0
    UINT64_C(3835691008),	// M2_mpyd_rnd_ll_s1
    UINT64_C(3976200192),	// M2_mpyi
    UINT64_C(3766484992),	// M2_mpysin
    UINT64_C(3758096384),	// M2_mpysip
    UINT64_C(3982491680),	// M2_mpysu_up
    UINT64_C(3997171808),	// M2_mpyu_acc_hh_s0
    UINT64_C(4005560416),	// M2_mpyu_acc_hh_s1
    UINT64_C(3997171776),	// M2_mpyu_acc_hl_s0
    UINT64_C(4005560384),	// M2_mpyu_acc_hl_s1
    UINT64_C(3997171744),	// M2_mpyu_acc_lh_s0
    UINT64_C(4005560352),	// M2_mpyu_acc_lh_s1
    UINT64_C(3997171712),	// M2_mpyu_acc_ll_s0
    UINT64_C(4005560320),	// M2_mpyu_acc_ll_s1
    UINT64_C(3963617376),	// M2_mpyu_hh_s0
    UINT64_C(3972005984),	// M2_mpyu_hh_s1
    UINT64_C(3963617344),	// M2_mpyu_hl_s0
    UINT64_C(3972005952),	// M2_mpyu_hl_s1
    UINT64_C(3963617312),	// M2_mpyu_lh_s0
    UINT64_C(3972005920),	// M2_mpyu_lh_s1
    UINT64_C(3963617280),	// M2_mpyu_ll_s0
    UINT64_C(3972005888),	// M2_mpyu_ll_s1
    UINT64_C(3999268960),	// M2_mpyu_nac_hh_s0
    UINT64_C(4007657568),	// M2_mpyu_nac_hh_s1
    UINT64_C(3999268928),	// M2_mpyu_nac_hl_s0
    UINT64_C(4007657536),	// M2_mpyu_nac_hl_s1
    UINT64_C(3999268896),	// M2_mpyu_nac_lh_s0
    UINT64_C(4007657504),	// M2_mpyu_nac_lh_s1
    UINT64_C(3999268864),	// M2_mpyu_nac_ll_s0
    UINT64_C(4007657472),	// M2_mpyu_nac_ll_s1
    UINT64_C(3980394528),	// M2_mpyu_up
    UINT64_C(3862954080),	// M2_mpyud_acc_hh_s0
    UINT64_C(3871342688),	// M2_mpyud_acc_hh_s1
    UINT64_C(3862954048),	// M2_mpyud_acc_hl_s0
    UINT64_C(3871342656),	// M2_mpyud_acc_hl_s1
    UINT64_C(3862954016),	// M2_mpyud_acc_lh_s0
    UINT64_C(3871342624),	// M2_mpyud_acc_lh_s1
    UINT64_C(3862953984),	// M2_mpyud_acc_ll_s0
    UINT64_C(3871342592),	// M2_mpyud_acc_ll_s1
    UINT64_C(3829399648),	// M2_mpyud_hh_s0
    UINT64_C(3837788256),	// M2_mpyud_hh_s1
    UINT64_C(3829399616),	// M2_mpyud_hl_s0
    UINT64_C(3837788224),	// M2_mpyud_hl_s1
    UINT64_C(3829399584),	// M2_mpyud_lh_s0
    UINT64_C(3837788192),	// M2_mpyud_lh_s1
    UINT64_C(3829399552),	// M2_mpyud_ll_s0
    UINT64_C(3837788160),	// M2_mpyud_ll_s1
    UINT64_C(3865051232),	// M2_mpyud_nac_hh_s0
    UINT64_C(3873439840),	// M2_mpyud_nac_hh_s1
    UINT64_C(3865051200),	// M2_mpyud_nac_hl_s0
    UINT64_C(3873439808),	// M2_mpyud_nac_hl_s1
    UINT64_C(3865051168),	// M2_mpyud_nac_lh_s0
    UINT64_C(3873439776),	// M2_mpyud_nac_lh_s1
    UINT64_C(3865051136),	// M2_mpyud_nac_ll_s0
    UINT64_C(3873439744),	// M2_mpyud_nac_ll_s1
    UINT64_C(4018143264),	// M2_nacci
    UINT64_C(3800039424),	// M2_naccii
    UINT64_C(4009754720),	// M2_subacc
    UINT64_C(3898605568),	// M2_vabsdiffh
    UINT64_C(3894411264),	// M2_vabsdiffw
    UINT64_C(3930062976),	// M2_vcmac_s0_sat_i
    UINT64_C(3927965824),	// M2_vcmac_s0_sat_r
    UINT64_C(3896508608),	// M2_vcmpy_s0_sat_i
    UINT64_C(3894411456),	// M2_vcmpy_s0_sat_r
    UINT64_C(3904897216),	// M2_vcmpy_s1_sat_i
    UINT64_C(3902800064),	// M2_vcmpy_s1_sat_r
    UINT64_C(3925868672),	// M2_vdmacs_s0
    UINT64_C(3934257280),	// M2_vdmacs_s1
    UINT64_C(3909091328),	// M2_vdmpyrs_s0
    UINT64_C(3917479936),	// M2_vdmpyrs_s1
    UINT64_C(3892314240),	// M2_vdmpys_s0
    UINT64_C(3900702848),	// M2_vdmpys_s1
    UINT64_C(3877634080),	// M2_vmac2
    UINT64_C(3927965760),	// M2_vmac2es
    UINT64_C(3925868736),	// M2_vmac2es_s0
    UINT64_C(3934257344),	// M2_vmac2es_s1
    UINT64_C(3875537056),	// M2_vmac2s_s0
    UINT64_C(3883925664),	// M2_vmac2s_s1
    UINT64_C(3881828512),	// M2_vmac2su_s0
    UINT64_C(3890217120),	// M2_vmac2su_s1
    UINT64_C(3892314304),	// M2_vmpy2es_s0
    UINT64_C(3900702912),	// M2_vmpy2es_s1
    UINT64_C(3841982624),	// M2_vmpy2s_s0
    UINT64_C(3978297568),	// M2_vmpy2s_s0pack
    UINT64_C(3850371232),	// M2_vmpy2s_s1
    UINT64_C(3986686176),	// M2_vmpy2s_s1pack
    UINT64_C(3841982688),	// M2_vmpy2su_s0
    UINT64_C(3850371296),	// M2_vmpy2su_s1
    UINT64_C(3911188704),	// M2_vraddh
    UINT64_C(3909091360),	// M2_vradduh
    UINT64_C(3925868544),	// M2_vrcmaci_s0
    UINT64_C(3930062848),	// M2_vrcmaci_s0c
    UINT64_C(3925868576),	// M2_vrcmacr_s0
    UINT64_C(3932160032),	// M2_vrcmacr_s0c
    UINT64_C(3892314112),	// M2_vrcmpyi_s0
    UINT64_C(3896508416),	// M2_vrcmpyi_s0c
    UINT64_C(3892314144),	// M2_vrcmpyr_s0
    UINT64_C(3898605600),	// M2_vrcmpyr_s0c
    UINT64_C(3936354432),	// M2_vrcmpys_acc_s1_h
    UINT64_C(3940548736),	// M2_vrcmpys_acc_s1_l
    UINT64_C(3902800000),	// M2_vrcmpys_s1_h
    UINT64_C(3906994304),	// M2_vrcmpys_s1_l
    UINT64_C(3919577280),	// M2_vrcmpys_s1rp_h
    UINT64_C(3919577312),	// M2_vrcmpys_s1rp_l
    UINT64_C(3925868608),	// M2_vrmac_s0
    UINT64_C(3892314176),	// M2_vrmpy_s0
    UINT64_C(4018143328),	// M2_xor_xacc
    UINT64_C(4013948928),	// M4_and_and
    UINT64_C(4011851808),	// M4_and_andn
    UINT64_C(4013948960),	// M4_and_or
    UINT64_C(4013948992),	// M4_and_xor
    UINT64_C(3305111680),	// M4_cmpyi_wh
    UINT64_C(3305111712),	// M4_cmpyi_whc
    UINT64_C(3305111744),	// M4_cmpyr_wh
    UINT64_C(3305111776),	// M4_cmpyr_whc
    UINT64_C(4016046080),	// M4_mac_up_s1_sat
    UINT64_C(3623878656),	// M4_mpyri_addi
    UINT64_C(3749707776),	// M4_mpyri_addr
    UINT64_C(3741319168),	// M4_mpyri_addr_u2
    UINT64_C(3607101440),	// M4_mpyrr_addi
    UINT64_C(3808428032),	// M4_mpyrr_addr
    UINT64_C(4016046112),	// M4_nac_up_s1_sat
    UINT64_C(4013949024),	// M4_or_and
    UINT64_C(4011851776),	// M4_or_andn
    UINT64_C(4022337536),	// M4_or_or
    UINT64_C(4022337568),	// M4_or_xor
    UINT64_C(3846176992),	// M4_pmpyw
    UINT64_C(3877634272),	// M4_pmpyw_acc
    UINT64_C(3854565600),	// M4_vpmpyh
    UINT64_C(3886022880),	// M4_vpmpyh_acc
    UINT64_C(3927965888),	// M4_vrmpyeh_acc_s0
    UINT64_C(3936354496),	// M4_vrmpyeh_acc_s1
    UINT64_C(3896508544),	// M4_vrmpyeh_s0
    UINT64_C(3904897152),	// M4_vrmpyeh_s1
    UINT64_C(3932160192),	// M4_vrmpyoh_acc_s0
    UINT64_C(3940548800),	// M4_vrmpyoh_acc_s1
    UINT64_C(3894411328),	// M4_vrmpyoh_s0
    UINT64_C(3902799936),	// M4_vrmpyoh_s1
    UINT64_C(4022337600),	// M4_xor_and
    UINT64_C(4011851840),	// M4_xor_andn
    UINT64_C(4022337632),	// M4_xor_or
    UINT64_C(3397386240),	// M4_xor_xacc
    UINT64_C(3927965728),	// M5_vdmacbsu
    UINT64_C(3902799904),	// M5_vdmpybsu
    UINT64_C(3888119840),	// M5_vmacbsu
    UINT64_C(3883925536),	// M5_vmacbuu
    UINT64_C(3846176800),	// M5_vmpybsu
    UINT64_C(3850371104),	// M5_vmpybuu
    UINT64_C(3938451488),	// M5_vrmacbsu
    UINT64_C(3934257184),	// M5_vrmacbuu
    UINT64_C(3904897056),	// M5_vrmpybsu
    UINT64_C(3900702752),	// M5_vrmpybuu
    UINT64_C(3906994176),	// M6_vabsdiffb
    UINT64_C(3902799872),	// M6_vabsdiffub
    UINT64_C(1509949440),	// PS_call_stk
    UINT64_C(1352663040),	// PS_callr_nr
    UINT64_C(1384120320),	// PS_jmpret
    UINT64_C(1398800384),	// PS_jmpretf
    UINT64_C(1398802432),	// PS_jmpretfnew
    UINT64_C(1398806528),	// PS_jmpretfnewpt
    UINT64_C(1396703232),	// PS_jmprett
    UINT64_C(1396705280),	// PS_jmprettnew
    UINT64_C(1396709376),	// PS_jmprettnewpt
    UINT64_C(1224736768),	// PS_loadrbabs
    UINT64_C(1237319680),	// PS_loadrdabs
    UINT64_C(1228931072),	// PS_loadrhabs
    UINT64_C(1233125376),	// PS_loadriabs
    UINT64_C(1226833920),	// PS_loadrubabs
    UINT64_C(1231028224),	// PS_loadruhabs
    UINT64_C(1207959552),	// PS_storerbabs
    UINT64_C(1218445312),	// PS_storerbnewabs
    UINT64_C(1220542464),	// PS_storerdabs
    UINT64_C(1214251008),	// PS_storerfabs
    UINT64_C(1212153856),	// PS_storerhabs
    UINT64_C(1218447360),	// PS_storerhnewabs
    UINT64_C(1216348160),	// PS_storeriabs
    UINT64_C(1218449408),	// PS_storerinewabs
    UINT64_C(1509949440),	// RESTORE_DEALLOC_BEFORE_TAILCALL_V4
    UINT64_C(1509949440),	// RESTORE_DEALLOC_BEFORE_TAILCALL_V4_EXT
    UINT64_C(1509949440),	// RESTORE_DEALLOC_BEFORE_TAILCALL_V4_EXT_PIC
    UINT64_C(1509949440),	// RESTORE_DEALLOC_BEFORE_TAILCALL_V4_PIC
    UINT64_C(1476395008),	// RESTORE_DEALLOC_RET_JMP_V4
    UINT64_C(1476395008),	// RESTORE_DEALLOC_RET_JMP_V4_EXT
    UINT64_C(1476395008),	// RESTORE_DEALLOC_RET_JMP_V4_EXT_PIC
    UINT64_C(1476395008),	// RESTORE_DEALLOC_RET_JMP_V4_PIC
    UINT64_C(3288334336),	// S2_addasl_rrri
    UINT64_C(2692743168),	// S2_allocframe
    UINT64_C(2147483712),	// S2_asl_i_p
    UINT64_C(2181038272),	// S2_asl_i_p_acc
    UINT64_C(2185232448),	// S2_asl_i_p_and
    UINT64_C(2181038144),	// S2_asl_i_p_nac
    UINT64_C(2185232576),	// S2_asl_i_p_or
    UINT64_C(2189426752),	// S2_asl_i_p_xacc
    UINT64_C(2348810304),	// S2_asl_i_r
    UINT64_C(2382364864),	// S2_asl_i_r_acc
    UINT64_C(2386559040),	// S2_asl_i_r_and
    UINT64_C(2382364736),	// S2_asl_i_r_nac
    UINT64_C(2386559168),	// S2_asl_i_r_or
    UINT64_C(2353004608),	// S2_asl_i_r_sat
    UINT64_C(2390753344),	// S2_asl_i_r_xacc
    UINT64_C(2155872320),	// S2_asl_i_vh
    UINT64_C(2151678016),	// S2_asl_i_vw
    UINT64_C(3279945856),	// S2_asl_r_p
    UINT64_C(3418357888),	// S2_asl_r_p_acc
    UINT64_C(3409969280),	// S2_asl_r_p_and
    UINT64_C(3414163584),	// S2_asl_r_p_nac
    UINT64_C(3405774976),	// S2_asl_r_p_or
    UINT64_C(3412066432),	// S2_asl_r_p_xor
    UINT64_C(3326083200),	// S2_asl_r_r
    UINT64_C(3435135104),	// S2_asl_r_r_acc
    UINT64_C(3426746496),	// S2_asl_r_r_and
    UINT64_C(3430940800),	// S2_asl_r_r_nac
    UINT64_C(3422552192),	// S2_asl_r_r_or
    UINT64_C(3321888896),	// S2_asl_r_r_sat
    UINT64_C(3275751552),	// S2_asl_r_vh
    UINT64_C(3271557248),	// S2_asl_r_vw
    UINT64_C(2147483648),	// S2_asr_i_p
    UINT64_C(2181038208),	// S2_asr_i_p_acc
    UINT64_C(2185232384),	// S2_asr_i_p_and
    UINT64_C(2181038080),	// S2_asr_i_p_nac
    UINT64_C(2185232512),	// S2_asr_i_p_or
    UINT64_C(2160066784),	// S2_asr_i_p_rnd
    UINT64_C(2348810240),	// S2_asr_i_r
    UINT64_C(2382364800),	// S2_asr_i_r_acc
    UINT64_C(2386558976),	// S2_asr_i_r_and
    UINT64_C(2382364672),	// S2_asr_i_r_nac
    UINT64_C(2386559104),	// S2_asr_i_r_or
    UINT64_C(2353004544),	// S2_asr_i_r_rnd
    UINT64_C(2294284352),	// S2_asr_i_svw_trun
    UINT64_C(2155872256),	// S2_asr_i_vh
    UINT64_C(2151677952),	// S2_asr_i_vw
    UINT64_C(3279945728),	// S2_asr_r_p
    UINT64_C(3418357760),	// S2_asr_r_p_acc
    UINT64_C(3409969152),	// S2_asr_r_p_and
    UINT64_C(3414163456),	// S2_asr_r_p_nac
    UINT64_C(3405774848),	// S2_asr_r_p_or
    UINT64_C(3412066304),	// S2_asr_r_p_xor
    UINT64_C(3326083072),	// S2_asr_r_r
    UINT64_C(3435134976),	// S2_asr_r_r_acc
    UINT64_C(3426746368),	// S2_asr_r_r_and
    UINT64_C(3430940672),	// S2_asr_r_r_nac
    UINT64_C(3422552064),	// S2_asr_r_r_or
    UINT64_C(3321888768),	// S2_asr_r_r_sat
    UINT64_C(3305111616),	// S2_asr_r_svw_trun
    UINT64_C(3275751424),	// S2_asr_r_vh
    UINT64_C(3271557120),	// S2_asr_r_vw
    UINT64_C(2353004736),	// S2_brev
    UINT64_C(2160066752),	// S2_brevp
    UINT64_C(3250585792),	// S2_cabacdecbin
    UINT64_C(2348810400),	// S2_cl0
    UINT64_C(2285895744),	// S2_cl0p
    UINT64_C(2348810432),	// S2_cl1
    UINT64_C(2285895808),	// S2_cl1p
    UINT64_C(2348810368),	// S2_clb
    UINT64_C(2348810464),	// S2_clbnorm
    UINT64_C(2285895680),	// S2_clbp
    UINT64_C(2361393184),	// S2_clrbit_i
    UINT64_C(3330277440),	// S2_clrbit_r
    UINT64_C(2353004672),	// S2_ct0
    UINT64_C(2296381504),	// S2_ct0p
    UINT64_C(2353004704),	// S2_ct1
    UINT64_C(2296381568),	// S2_ct1p
    UINT64_C(2160066688),	// S2_deinterleave
    UINT64_C(2365587456),	// S2_extractu
    UINT64_C(3372220416),	// S2_extractu_rp
    UINT64_C(2164260864),	// S2_extractup
    UINT64_C(3238002688),	// S2_extractup_rp
    UINT64_C(2399141888),	// S2_insert
    UINT64_C(3355443200),	// S2_insert_rp
    UINT64_C(2197815296),	// S2_insertp
    UINT64_C(3388997632),	// S2_insertp_rp
    UINT64_C(2160066720),	// S2_interleave
    UINT64_C(3246391488),	// S2_lfsp
    UINT64_C(3279945920),	// S2_lsl_r_p
    UINT64_C(3418357952),	// S2_lsl_r_p_acc
    UINT64_C(3409969344),	// S2_lsl_r_p_and
    UINT64_C(3414163648),	// S2_lsl_r_p_nac
    UINT64_C(3405775040),	// S2_lsl_r_p_or
    UINT64_C(3412066496),	// S2_lsl_r_p_xor
    UINT64_C(3326083264),	// S2_lsl_r_r
    UINT64_C(3435135168),	// S2_lsl_r_r_acc
    UINT64_C(3426746560),	// S2_lsl_r_r_and
    UINT64_C(3430940864),	// S2_lsl_r_r_nac
    UINT64_C(3422552256),	// S2_lsl_r_r_or
    UINT64_C(3275751616),	// S2_lsl_r_vh
    UINT64_C(3271557312),	// S2_lsl_r_vw
    UINT64_C(2147483680),	// S2_lsr_i_p
    UINT64_C(2181038240),	// S2_lsr_i_p_acc
    UINT64_C(2185232416),	// S2_lsr_i_p_and
    UINT64_C(2181038112),	// S2_lsr_i_p_nac
    UINT64_C(2185232544),	// S2_lsr_i_p_or
    UINT64_C(2189426720),	// S2_lsr_i_p_xacc
    UINT64_C(2348810272),	// S2_lsr_i_r
    UINT64_C(2382364832),	// S2_lsr_i_r_acc
    UINT64_C(2386559008),	// S2_lsr_i_r_and
    UINT64_C(2382364704),	// S2_lsr_i_r_nac
    UINT64_C(2386559136),	// S2_lsr_i_r_or
    UINT64_C(2390753312),	// S2_lsr_i_r_xacc
    UINT64_C(2155872288),	// S2_lsr_i_vh
    UINT64_C(2151677984),	// S2_lsr_i_vw
    UINT64_C(3279945792),	// S2_lsr_r_p
    UINT64_C(3418357824),	// S2_lsr_r_p_acc
    UINT64_C(3409969216),	// S2_lsr_r_p_and
    UINT64_C(3414163520),	// S2_lsr_r_p_nac
    UINT64_C(3405774912),	// S2_lsr_r_p_or
    UINT64_C(3412066368),	// S2_lsr_r_p_xor
    UINT64_C(3326083136),	// S2_lsr_r_r
    UINT64_C(3435135040),	// S2_lsr_r_r_acc
    UINT64_C(3426746432),	// S2_lsr_r_r_and
    UINT64_C(3430940736),	// S2_lsr_r_r_nac
    UINT64_C(3422552128),	// S2_lsr_r_r_or
    UINT64_C(3275751488),	// S2_lsr_r_vh
    UINT64_C(3271557184),	// S2_lsr_r_vw
    UINT64_C(2365595648),	// S2_mask
    UINT64_C(4118806528),	// S2_packhl
    UINT64_C(3489660928),	// S2_parityp
    UINT64_C(1140850688),	// S2_pstorerbf_io
    UINT64_C(2868912132),	// S2_pstorerbf_pi
    UINT64_C(2868912260),	// S2_pstorerbfnew_pi
    UINT64_C(1151336448),	// S2_pstorerbnewf_io
    UINT64_C(2879397892),	// S2_pstorerbnewf_pi
    UINT64_C(2879398020),	// S2_pstorerbnewfnew_pi
    UINT64_C(1084227584),	// S2_pstorerbnewt_io
    UINT64_C(2879397888),	// S2_pstorerbnewt_pi
    UINT64_C(2879398016),	// S2_pstorerbnewtnew_pi
    UINT64_C(1073741824),	// S2_pstorerbt_io
    UINT64_C(2868912128),	// S2_pstorerbt_pi
    UINT64_C(2868912256),	// S2_pstorerbtnew_pi
    UINT64_C(1153433600),	// S2_pstorerdf_io
    UINT64_C(2881495044),	// S2_pstorerdf_pi
    UINT64_C(2881495172),	// S2_pstorerdfnew_pi
    UINT64_C(1086324736),	// S2_pstorerdt_io
    UINT64_C(2881495040),	// S2_pstorerdt_pi
    UINT64_C(2881495168),	// S2_pstorerdtnew_pi
    UINT64_C(1147142144),	// S2_pstorerff_io
    UINT64_C(2875203588),	// S2_pstorerff_pi
    UINT64_C(2875203716),	// S2_pstorerffnew_pi
    UINT64_C(1080033280),	// S2_pstorerft_io
    UINT64_C(2875203584),	// S2_pstorerft_pi
    UINT64_C(2875203712),	// S2_pstorerftnew_pi
    UINT64_C(1145044992),	// S2_pstorerhf_io
    UINT64_C(2873106436),	// S2_pstorerhf_pi
    UINT64_C(2873106564),	// S2_pstorerhfnew_pi
    UINT64_C(1151338496),	// S2_pstorerhnewf_io
    UINT64_C(2879399940),	// S2_pstorerhnewf_pi
    UINT64_C(2879400068),	// S2_pstorerhnewfnew_pi
    UINT64_C(1084229632),	// S2_pstorerhnewt_io
    UINT64_C(2879399936),	// S2_pstorerhnewt_pi
    UINT64_C(2879400064),	// S2_pstorerhnewtnew_pi
    UINT64_C(1077936128),	// S2_pstorerht_io
    UINT64_C(2873106432),	// S2_pstorerht_pi
    UINT64_C(2873106560),	// S2_pstorerhtnew_pi
    UINT64_C(1149239296),	// S2_pstorerif_io
    UINT64_C(2877300740),	// S2_pstorerif_pi
    UINT64_C(2877300868),	// S2_pstorerifnew_pi
    UINT64_C(1151340544),	// S2_pstorerinewf_io
    UINT64_C(2879401988),	// S2_pstorerinewf_pi
    UINT64_C(2879402116),	// S2_pstorerinewfnew_pi
    UINT64_C(1084231680),	// S2_pstorerinewt_io
    UINT64_C(2879401984),	// S2_pstorerinewt_pi
    UINT64_C(2879402112),	// S2_pstorerinewtnew_pi
    UINT64_C(1082130432),	// S2_pstorerit_io
    UINT64_C(2877300736),	// S2_pstorerit_pi
    UINT64_C(2877300864),	// S2_pstoreritnew_pi
    UINT64_C(2361393152),	// S2_setbit_i
    UINT64_C(3330277376),	// S2_setbit_r
    UINT64_C(3238002752),	// S2_shuffeb
    UINT64_C(3238002880),	// S2_shuffeh
    UINT64_C(3238002816),	// S2_shuffob
    UINT64_C(3246391296),	// S2_shuffoh
    UINT64_C(2701131776),	// S2_storerb_io
    UINT64_C(2936012800),	// S2_storerb_pbr
    UINT64_C(2835349504),	// S2_storerb_pci
    UINT64_C(2835349506),	// S2_storerb_pcr
    UINT64_C(2868903936),	// S2_storerb_pi
    UINT64_C(2902458368),	// S2_storerb_pr
    UINT64_C(1207959552),	// S2_storerbgp
    UINT64_C(2711617536),	// S2_storerbnew_io
    UINT64_C(2946498560),	// S2_storerbnew_pbr
    UINT64_C(2845835264),	// S2_storerbnew_pci
    UINT64_C(2845835266),	// S2_storerbnew_pcr
    UINT64_C(2879389696),	// S2_storerbnew_pi
    UINT64_C(2912944128),	// S2_storerbnew_pr
    UINT64_C(1218445312),	// S2_storerbnewgp
    UINT64_C(2713714688),	// S2_storerd_io
    UINT64_C(2948595712),	// S2_storerd_pbr
    UINT64_C(2847932416),	// S2_storerd_pci
    UINT64_C(2847932418),	// S2_storerd_pcr
    UINT64_C(2881486848),	// S2_storerd_pi
    UINT64_C(2915041280),	// S2_storerd_pr
    UINT64_C(1220542464),	// S2_storerdgp
    UINT64_C(2707423232),	// S2_storerf_io
    UINT64_C(2942304256),	// S2_storerf_pbr
    UINT64_C(2841640960),	// S2_storerf_pci
    UINT64_C(2841640962),	// S2_storerf_pcr
    UINT64_C(2875195392),	// S2_storerf_pi
    UINT64_C(2908749824),	// S2_storerf_pr
    UINT64_C(1214251008),	// S2_storerfgp
    UINT64_C(2705326080),	// S2_storerh_io
    UINT64_C(2940207104),	// S2_storerh_pbr
    UINT64_C(2839543808),	// S2_storerh_pci
    UINT64_C(2839543810),	// S2_storerh_pcr
    UINT64_C(2873098240),	// S2_storerh_pi
    UINT64_C(2906652672),	// S2_storerh_pr
    UINT64_C(1212153856),	// S2_storerhgp
    UINT64_C(2711619584),	// S2_storerhnew_io
    UINT64_C(2946500608),	// S2_storerhnew_pbr
    UINT64_C(2845837312),	// S2_storerhnew_pci
    UINT64_C(2845837314),	// S2_storerhnew_pcr
    UINT64_C(2879391744),	// S2_storerhnew_pi
    UINT64_C(2912946176),	// S2_storerhnew_pr
    UINT64_C(1218447360),	// S2_storerhnewgp
    UINT64_C(2709520384),	// S2_storeri_io
    UINT64_C(2944401408),	// S2_storeri_pbr
    UINT64_C(2843738112),	// S2_storeri_pci
    UINT64_C(2843738114),	// S2_storeri_pcr
    UINT64_C(2877292544),	// S2_storeri_pi
    UINT64_C(2910846976),	// S2_storeri_pr
    UINT64_C(1216348160),	// S2_storerigp
    UINT64_C(2711621632),	// S2_storerinew_io
    UINT64_C(2946502656),	// S2_storerinew_pbr
    UINT64_C(2845839360),	// S2_storerinew_pci
    UINT64_C(2845839362),	// S2_storerinew_pcr
    UINT64_C(2879393792),	// S2_storerinew_pi
    UINT64_C(2912948224),	// S2_storerinew_pr
    UINT64_C(1218449408),	// S2_storerinewgp
    UINT64_C(2694840320),	// S2_storew_locked
    UINT64_C(2357198848),	// S2_svsathb
    UINT64_C(2357198912),	// S2_svsathub
    UINT64_C(2264924160),	// S2_tableidxb
    UINT64_C(2277507072),	// S2_tableidxd
    UINT64_C(2269118464),	// S2_tableidxh
    UINT64_C(2273312768),	// S2_tableidxw
    UINT64_C(2361393216),	// S2_togglebit_i
    UINT64_C(3330277504),	// S2_togglebit_r
    UINT64_C(2231369728),	// S2_tstbit_i
    UINT64_C(3338665984),	// S2_tstbit_r
    UINT64_C(3221225472),	// S2_valignib
    UINT64_C(3254779904),	// S2_valignrb
    UINT64_C(3284140096),	// S2_vcnegh
    UINT64_C(3284140032),	// S2_vcrotate
    UINT64_C(3407880416),	// S2_vrcnegh
    UINT64_C(2290090112),	// S2_vrndpackwh
    UINT64_C(2290090176),	// S2_vrndpackwhs
    UINT64_C(2281701568),	// S2_vsathb
    UINT64_C(2147483872),	// S2_vsathb_nopack
    UINT64_C(2281701376),	// S2_vsathub
    UINT64_C(2147483776),	// S2_vsathub_nopack
    UINT64_C(2281701440),	// S2_vsatwh
    UINT64_C(2147483840),	// S2_vsatwh_nopack
    UINT64_C(2281701504),	// S2_vsatwuh
    UINT64_C(2147483808),	// S2_vsatwuh_nopack
    UINT64_C(2353004768),	// S2_vsplatrb
    UINT64_C(2218786880),	// S2_vsplatrh
    UINT64_C(3229614080),	// S2_vspliceib
    UINT64_C(3263168512),	// S2_vsplicerb
    UINT64_C(2214592512),	// S2_vsxtbh
    UINT64_C(2214592640),	// S2_vsxthw
    UINT64_C(2290090048),	// S2_vtrunehb
    UINT64_C(3246391360),	// S2_vtrunewh
    UINT64_C(2290089984),	// S2_vtrunohb
    UINT64_C(3246391424),	// S2_vtrunowh
    UINT64_C(2214592576),	// S2_vzxtbh
    UINT64_C(2214592704),	// S2_vzxthw
    UINT64_C(3674210304),	// S4_addaddi
    UINT64_C(3724541956),	// S4_addi_asl_ri
    UINT64_C(3724541972),	// S4_addi_lsr_ri
    UINT64_C(3724541952),	// S4_andi_asl_ri
    UINT64_C(3724541968),	// S4_andi_lsr_ri
    UINT64_C(2350907392),	// S4_clbaddi
    UINT64_C(2287992896),	// S4_clbpaddi
    UINT64_C(2287992832),	// S4_clbpnorm
    UINT64_C(2373976064),	// S4_extract
    UINT64_C(3372220480),	// S4_extract_rp
    UINT64_C(2315255808),	// S4_extractp
    UINT64_C(3250585728),	// S4_extractp_rp
    UINT64_C(3330277568),	// S4_lsli
    UINT64_C(2233466880),	// S4_ntstbit_i
    UINT64_C(3340763136),	// S4_ntstbit_r
    UINT64_C(3657433088),	// S4_or_andi
    UINT64_C(3661627392),	// S4_or_andix
    UINT64_C(3665821696),	// S4_or_ori
    UINT64_C(3724541954),	// S4_ori_asl_ri
    UINT64_C(3724541970),	// S4_ori_lsr_ri
    UINT64_C(3588227072),	// S4_parity
    UINT64_C(2936012932),	// S4_pstorerbf_abs
    UINT64_C(889192448),	// S4_pstorerbf_rr
    UINT64_C(2936021124),	// S4_pstorerbfnew_abs
    UINT64_C(1174405120),	// S4_pstorerbfnew_io
    UINT64_C(922746880),	// S4_pstorerbfnew_rr
    UINT64_C(2946498692),	// S4_pstorerbnewf_abs
    UINT64_C(899678208),	// S4_pstorerbnewf_rr
    UINT64_C(2946506884),	// S4_pstorerbnewfnew_abs
    UINT64_C(1184890880),	// S4_pstorerbnewfnew_io
    UINT64_C(933232640),	// S4_pstorerbnewfnew_rr
    UINT64_C(2946498688),	// S4_pstorerbnewt_abs
    UINT64_C(882900992),	// S4_pstorerbnewt_rr
    UINT64_C(2946506880),	// S4_pstorerbnewtnew_abs
    UINT64_C(1117782016),	// S4_pstorerbnewtnew_io
    UINT64_C(916455424),	// S4_pstorerbnewtnew_rr
    UINT64_C(2936012928),	// S4_pstorerbt_abs
    UINT64_C(872415232),	// S4_pstorerbt_rr
    UINT64_C(2936021120),	// S4_pstorerbtnew_abs
    UINT64_C(1107296256),	// S4_pstorerbtnew_io
    UINT64_C(905969664),	// S4_pstorerbtnew_rr
    UINT64_C(2948595844),	// S4_pstorerdf_abs
    UINT64_C(901775360),	// S4_pstorerdf_rr
    UINT64_C(2948604036),	// S4_pstorerdfnew_abs
    UINT64_C(1186988032),	// S4_pstorerdfnew_io
    UINT64_C(935329792),	// S4_pstorerdfnew_rr
    UINT64_C(2948595840),	// S4_pstorerdt_abs
    UINT64_C(884998144),	// S4_pstorerdt_rr
    UINT64_C(2948604032),	// S4_pstorerdtnew_abs
    UINT64_C(1119879168),	// S4_pstorerdtnew_io
    UINT64_C(918552576),	// S4_pstorerdtnew_rr
    UINT64_C(2942304388),	// S4_pstorerff_abs
    UINT64_C(895483904),	// S4_pstorerff_rr
    UINT64_C(2942312580),	// S4_pstorerffnew_abs
    UINT64_C(1180696576),	// S4_pstorerffnew_io
    UINT64_C(929038336),	// S4_pstorerffnew_rr
    UINT64_C(2942304384),	// S4_pstorerft_abs
    UINT64_C(878706688),	// S4_pstorerft_rr
    UINT64_C(2942312576),	// S4_pstorerftnew_abs
    UINT64_C(1113587712),	// S4_pstorerftnew_io
    UINT64_C(912261120),	// S4_pstorerftnew_rr
    UINT64_C(2940207236),	// S4_pstorerhf_abs
    UINT64_C(893386752),	// S4_pstorerhf_rr
    UINT64_C(2940215428),	// S4_pstorerhfnew_abs
    UINT64_C(1178599424),	// S4_pstorerhfnew_io
    UINT64_C(926941184),	// S4_pstorerhfnew_rr
    UINT64_C(2946500740),	// S4_pstorerhnewf_abs
    UINT64_C(899678216),	// S4_pstorerhnewf_rr
    UINT64_C(2946508932),	// S4_pstorerhnewfnew_abs
    UINT64_C(1184892928),	// S4_pstorerhnewfnew_io
    UINT64_C(933232648),	// S4_pstorerhnewfnew_rr
    UINT64_C(2946500736),	// S4_pstorerhnewt_abs
    UINT64_C(882901000),	// S4_pstorerhnewt_rr
    UINT64_C(2946508928),	// S4_pstorerhnewtnew_abs
    UINT64_C(1117784064),	// S4_pstorerhnewtnew_io
    UINT64_C(916455432),	// S4_pstorerhnewtnew_rr
    UINT64_C(2940207232),	// S4_pstorerht_abs
    UINT64_C(876609536),	// S4_pstorerht_rr
    UINT64_C(2940215424),	// S4_pstorerhtnew_abs
    UINT64_C(1111490560),	// S4_pstorerhtnew_io
    UINT64_C(910163968),	// S4_pstorerhtnew_rr
    UINT64_C(2944401540),	// S4_pstorerif_abs
    UINT64_C(897581056),	// S4_pstorerif_rr
    UINT64_C(2944409732),	// S4_pstorerifnew_abs
    UINT64_C(1182793728),	// S4_pstorerifnew_io
    UINT64_C(931135488),	// S4_pstorerifnew_rr
    UINT64_C(2946502788),	// S4_pstorerinewf_abs
    UINT64_C(899678224),	// S4_pstorerinewf_rr
    UINT64_C(2946510980),	// S4_pstorerinewfnew_abs
    UINT64_C(1184894976),	// S4_pstorerinewfnew_io
    UINT64_C(933232656),	// S4_pstorerinewfnew_rr
    UINT64_C(2946502784),	// S4_pstorerinewt_abs
    UINT64_C(882901008),	// S4_pstorerinewt_rr
    UINT64_C(2946510976),	// S4_pstorerinewtnew_abs
    UINT64_C(1117786112),	// S4_pstorerinewtnew_io
    UINT64_C(916455440),	// S4_pstorerinewtnew_rr
    UINT64_C(2944401536),	// S4_pstorerit_abs
    UINT64_C(880803840),	// S4_pstorerit_rr
    UINT64_C(2944409728),	// S4_pstoreritnew_abs
    UINT64_C(1115684864),	// S4_pstoreritnew_io
    UINT64_C(914358272),	// S4_pstoreritnew_rr
    UINT64_C(2699034624),	// S4_stored_locked
    UINT64_C(1006632960),	// S4_storeirb_io
    UINT64_C(947912704),	// S4_storeirbf_io
    UINT64_C(964689920),	// S4_storeirbfnew_io
    UINT64_C(939524096),	// S4_storeirbt_io
    UINT64_C(956301312),	// S4_storeirbtnew_io
    UINT64_C(1008730112),	// S4_storeirh_io
    UINT64_C(950009856),	// S4_storeirhf_io
    UINT64_C(966787072),	// S4_storeirhfnew_io
    UINT64_C(941621248),	// S4_storeirht_io
    UINT64_C(958398464),	// S4_storeirhtnew_io
    UINT64_C(1010827264),	// S4_storeiri_io
    UINT64_C(952107008),	// S4_storeirif_io
    UINT64_C(968884224),	// S4_storeirifnew_io
    UINT64_C(943718400),	// S4_storeirit_io
    UINT64_C(960495616),	// S4_storeiritnew_io
    UINT64_C(2868904064),	// S4_storerb_ap
    UINT64_C(989855744),	// S4_storerb_rr
    UINT64_C(2902458496),	// S4_storerb_ur
    UINT64_C(2879389824),	// S4_storerbnew_ap
    UINT64_C(1000341504),	// S4_storerbnew_rr
    UINT64_C(2912944256),	// S4_storerbnew_ur
    UINT64_C(2881486976),	// S4_storerd_ap
    UINT64_C(1002438656),	// S4_storerd_rr
    UINT64_C(2915041408),	// S4_storerd_ur
    UINT64_C(2875195520),	// S4_storerf_ap
    UINT64_C(996147200),	// S4_storerf_rr
    UINT64_C(2908749952),	// S4_storerf_ur
    UINT64_C(2873098368),	// S4_storerh_ap
    UINT64_C(994050048),	// S4_storerh_rr
    UINT64_C(2906652800),	// S4_storerh_ur
    UINT64_C(2879391872),	// S4_storerhnew_ap
    UINT64_C(1000341512),	// S4_storerhnew_rr
    UINT64_C(2912946304),	// S4_storerhnew_ur
    UINT64_C(2877292672),	// S4_storeri_ap
    UINT64_C(998244352),	// S4_storeri_rr
    UINT64_C(2910847104),	// S4_storeri_ur
    UINT64_C(2879393920),	// S4_storerinew_ap
    UINT64_C(1000341520),	// S4_storerinew_rr
    UINT64_C(2912948352),	// S4_storerinew_ur
    UINT64_C(3682598912),	// S4_subaddi
    UINT64_C(3724541958),	// S4_subi_asl_ri
    UINT64_C(3724541974),	// S4_subi_lsr_ri
    UINT64_C(3284140224),	// S4_vrcrotate
    UINT64_C(3416260608),	// S4_vrcrotate_acc
    UINT64_C(3242197120),	// S4_vxaddsubh
    UINT64_C(3250585600),	// S4_vxaddsubhr
    UINT64_C(3242196992),	// S4_vxaddsubw
    UINT64_C(3242197184),	// S4_vxsubaddh
    UINT64_C(3250585664),	// S4_vxsubaddhr
    UINT64_C(3242197056),	// S4_vxsubaddw
    UINT64_C(2287992960),	// S5_asrhub_rnd_sat
    UINT64_C(2287992992),	// S5_asrhub_sat
    UINT64_C(2287992928),	// S5_popcountp
    UINT64_C(2149580800),	// S5_vasrhrnd
    UINT64_C(2147483744),	// S6_rol_i_p
    UINT64_C(2181038304),	// S6_rol_i_p_acc
    UINT64_C(2185232480),	// S6_rol_i_p_and
    UINT64_C(2181038176),	// S6_rol_i_p_nac
    UINT64_C(2185232608),	// S6_rol_i_p_or
    UINT64_C(2189426784),	// S6_rol_i_p_xacc
    UINT64_C(2348810336),	// S6_rol_i_r
    UINT64_C(2382364896),	// S6_rol_i_r_acc
    UINT64_C(2386559072),	// S6_rol_i_r_and
    UINT64_C(2382364768),	// S6_rol_i_r_nac
    UINT64_C(2386559200),	// S6_rol_i_r_or
    UINT64_C(2390753376),	// S6_rol_i_r_xacc
    UINT64_C(2218786944),	// S6_vsplatrbp
    UINT64_C(3246391392),	// S6_vtrunehb_ppp
    UINT64_C(3246391456),	// S6_vtrunohb_ppp
    UINT64_C(0),	// SA1_addi
    UINT64_C(6144),	// SA1_addrx
    UINT64_C(3072),	// SA1_addsp
    UINT64_C(4608),	// SA1_and1
    UINT64_C(6768),	// SA1_clrf
    UINT64_C(6736),	// SA1_clrfnew
    UINT64_C(6752),	// SA1_clrt
    UINT64_C(6720),	// SA1_clrtnew
    UINT64_C(6400),	// SA1_cmpeqi
    UINT64_C(7168),	// SA1_combine0i
    UINT64_C(7176),	// SA1_combine1i
    UINT64_C(7184),	// SA1_combine2i
    UINT64_C(7192),	// SA1_combine3i
    UINT64_C(7432),	// SA1_combinerz
    UINT64_C(7424),	// SA1_combinezr
    UINT64_C(4864),	// SA1_dec
    UINT64_C(4352),	// SA1_inc
    UINT64_C(2048),	// SA1_seti
    UINT64_C(6656),	// SA1_setin1
    UINT64_C(5376),	// SA1_sxtb
    UINT64_C(5120),	// SA1_sxth
    UINT64_C(4096),	// SA1_tfr
    UINT64_C(5888),	// SA1_zxtb
    UINT64_C(5632),	// SA1_zxth
    UINT64_C(1509949440),	// SAVE_REGISTERS_CALL_V4
    UINT64_C(1509949440),	// SAVE_REGISTERS_CALL_V4STK
    UINT64_C(1509949440),	// SAVE_REGISTERS_CALL_V4STK_EXT
    UINT64_C(1509949440),	// SAVE_REGISTERS_CALL_V4STK_EXT_PIC
    UINT64_C(1509949440),	// SAVE_REGISTERS_CALL_V4STK_PIC
    UINT64_C(1509949440),	// SAVE_REGISTERS_CALL_V4_EXT
    UINT64_C(1509949440),	// SAVE_REGISTERS_CALL_V4_EXT_PIC
    UINT64_C(1509949440),	// SAVE_REGISTERS_CALL_V4_PIC
    UINT64_C(0),	// SL1_loadri_io
    UINT64_C(4096),	// SL1_loadrub_io
    UINT64_C(7936),	// SL2_deallocframe
    UINT64_C(8128),	// SL2_jumpr31
    UINT64_C(8133),	// SL2_jumpr31_f
    UINT64_C(8135),	// SL2_jumpr31_fnew
    UINT64_C(8132),	// SL2_jumpr31_t
    UINT64_C(8134),	// SL2_jumpr31_tnew
    UINT64_C(4096),	// SL2_loadrb_io
    UINT64_C(7680),	// SL2_loadrd_sp
    UINT64_C(0),	// SL2_loadrh_io
    UINT64_C(7168),	// SL2_loadri_sp
    UINT64_C(2048),	// SL2_loadruh_io
    UINT64_C(8000),	// SL2_return
    UINT64_C(8005),	// SL2_return_f
    UINT64_C(8007),	// SL2_return_fnew
    UINT64_C(8004),	// SL2_return_t
    UINT64_C(8006),	// SL2_return_tnew
    UINT64_C(4096),	// SS1_storeb_io
    UINT64_C(0),	// SS1_storew_io
    UINT64_C(7168),	// SS2_allocframe
    UINT64_C(4608),	// SS2_storebi0
    UINT64_C(4864),	// SS2_storebi1
    UINT64_C(2560),	// SS2_stored_sp
    UINT64_C(0),	// SS2_storeh_io
    UINT64_C(2048),	// SS2_storew_sp
    UINT64_C(4096),	// SS2_storewi0
    UINT64_C(4352),	// SS2_storewi1
    UINT64_C(0),	// TFRI64_V2_ext
    UINT64_C(0),	// TFRI64_V4
    UINT64_C(2449473568),	// V6_extractw
    UINT64_C(432013376),	// V6_lvsplatb
    UINT64_C(432013344),	// V6_lvsplath
    UINT64_C(429916192),	// V6_lvsplatw
    UINT64_C(503513088),	// V6_pred_and
    UINT64_C(503513108),	// V6_pred_and_n
    UINT64_C(503513096),	// V6_pred_not
    UINT64_C(503513092),	// V6_pred_or
    UINT64_C(503513104),	// V6_pred_or_n
    UINT64_C(429916228),	// V6_pred_scalar2
    UINT64_C(429916236),	// V6_pred_scalar2v2
    UINT64_C(503513100),	// V6_pred_xor
    UINT64_C(503513112),	// V6_shuffeqh
    UINT64_C(503513116),	// V6_shuffeqw
    UINT64_C(671088864),	// V6_vL32Ub_ai
    UINT64_C(687866080),	// V6_vL32Ub_pi
    UINT64_C(721420512),	// V6_vL32Ub_ppu
    UINT64_C(671088640),	// V6_vL32b_ai
    UINT64_C(671088672),	// V6_vL32b_cur_ai
    UINT64_C(679477408),	// V6_vL32b_cur_npred_ai
    UINT64_C(696254624),	// V6_vL32b_cur_npred_pi
    UINT64_C(729809056),	// V6_vL32b_cur_npred_ppu
    UINT64_C(687865888),	// V6_vL32b_cur_pi
    UINT64_C(721420320),	// V6_vL32b_cur_ppu
    UINT64_C(679477376),	// V6_vL32b_cur_pred_ai
    UINT64_C(696254592),	// V6_vL32b_cur_pred_pi
    UINT64_C(729809024),	// V6_vL32b_cur_pred_ppu
    UINT64_C(679477344),	// V6_vL32b_npred_ai
    UINT64_C(696254560),	// V6_vL32b_npred_pi
    UINT64_C(729808992),	// V6_vL32b_npred_ppu
    UINT64_C(675282944),	// V6_vL32b_nt_ai
    UINT64_C(675282976),	// V6_vL32b_nt_cur_ai
    UINT64_C(683671712),	// V6_vL32b_nt_cur_npred_ai
    UINT64_C(700448928),	// V6_vL32b_nt_cur_npred_pi
    UINT64_C(734003360),	// V6_vL32b_nt_cur_npred_ppu
    UINT64_C(692060192),	// V6_vL32b_nt_cur_pi
    UINT64_C(725614624),	// V6_vL32b_nt_cur_ppu
    UINT64_C(683671680),	// V6_vL32b_nt_cur_pred_ai
    UINT64_C(700448896),	// V6_vL32b_nt_cur_pred_pi
    UINT64_C(734003328),	// V6_vL32b_nt_cur_pred_ppu
    UINT64_C(683671648),	// V6_vL32b_nt_npred_ai
    UINT64_C(700448864),	// V6_vL32b_nt_npred_pi
    UINT64_C(734003296),	// V6_vL32b_nt_npred_ppu
    UINT64_C(692060160),	// V6_vL32b_nt_pi
    UINT64_C(725614592),	// V6_vL32b_nt_ppu
    UINT64_C(683671616),	// V6_vL32b_nt_pred_ai
    UINT64_C(700448832),	// V6_vL32b_nt_pred_pi
    UINT64_C(734003264),	// V6_vL32b_nt_pred_ppu
    UINT64_C(675283008),	// V6_vL32b_nt_tmp_ai
    UINT64_C(683671776),	// V6_vL32b_nt_tmp_npred_ai
    UINT64_C(700448992),	// V6_vL32b_nt_tmp_npred_pi
    UINT64_C(734003424),	// V6_vL32b_nt_tmp_npred_ppu
    UINT64_C(692060224),	// V6_vL32b_nt_tmp_pi
    UINT64_C(725614656),	// V6_vL32b_nt_tmp_ppu
    UINT64_C(683671744),	// V6_vL32b_nt_tmp_pred_ai
    UINT64_C(700448960),	// V6_vL32b_nt_tmp_pred_pi
    UINT64_C(734003392),	// V6_vL32b_nt_tmp_pred_ppu
    UINT64_C(687865856),	// V6_vL32b_pi
    UINT64_C(721420288),	// V6_vL32b_ppu
    UINT64_C(679477312),	// V6_vL32b_pred_ai
    UINT64_C(696254528),	// V6_vL32b_pred_pi
    UINT64_C(729808960),	// V6_vL32b_pred_ppu
    UINT64_C(671088704),	// V6_vL32b_tmp_ai
    UINT64_C(679477472),	// V6_vL32b_tmp_npred_ai
    UINT64_C(696254688),	// V6_vL32b_tmp_npred_pi
    UINT64_C(729809120),	// V6_vL32b_tmp_npred_ppu
    UINT64_C(687865920),	// V6_vL32b_tmp_pi
    UINT64_C(721420352),	// V6_vL32b_tmp_ppu
    UINT64_C(679477440),	// V6_vL32b_tmp_pred_ai
    UINT64_C(696254656),	// V6_vL32b_tmp_pred_pi
    UINT64_C(729809088),	// V6_vL32b_tmp_pred_ppu
    UINT64_C(673186016),	// V6_vS32Ub_ai
    UINT64_C(681574624),	// V6_vS32Ub_npred_ai
    UINT64_C(698351840),	// V6_vS32Ub_npred_pi
    UINT64_C(731906272),	// V6_vS32Ub_npred_ppu
    UINT64_C(689963232),	// V6_vS32Ub_pi
    UINT64_C(723517664),	// V6_vS32Ub_ppu
    UINT64_C(681574592),	// V6_vS32Ub_pred_ai
    UINT64_C(698351808),	// V6_vS32Ub_pred_pi
    UINT64_C(731906240),	// V6_vS32Ub_pred_ppu
    UINT64_C(673185792),	// V6_vS32b_ai
    UINT64_C(673185824),	// V6_vS32b_new_ai
    UINT64_C(681574504),	// V6_vS32b_new_npred_ai
    UINT64_C(698351720),	// V6_vS32b_new_npred_pi
    UINT64_C(731906152),	// V6_vS32b_new_npred_ppu
    UINT64_C(689963040),	// V6_vS32b_new_pi
    UINT64_C(723517472),	// V6_vS32b_new_ppu
    UINT64_C(681574464),	// V6_vS32b_new_pred_ai
    UINT64_C(698351680),	// V6_vS32b_new_pred_pi
    UINT64_C(731906112),	// V6_vS32b_new_pred_ppu
    UINT64_C(681574432),	// V6_vS32b_npred_ai
    UINT64_C(698351648),	// V6_vS32b_npred_pi
    UINT64_C(731906080),	// V6_vS32b_npred_ppu
    UINT64_C(679477280),	// V6_vS32b_nqpred_ai
    UINT64_C(696254496),	// V6_vS32b_nqpred_pi
    UINT64_C(729808928),	// V6_vS32b_nqpred_ppu
    UINT64_C(677380096),	// V6_vS32b_nt_ai
    UINT64_C(677380128),	// V6_vS32b_nt_new_ai
    UINT64_C(685768824),	// V6_vS32b_nt_new_npred_ai
    UINT64_C(702546040),	// V6_vS32b_nt_new_npred_pi
    UINT64_C(736100472),	// V6_vS32b_nt_new_npred_ppu
    UINT64_C(694157344),	// V6_vS32b_nt_new_pi
    UINT64_C(727711776),	// V6_vS32b_nt_new_ppu
    UINT64_C(685768784),	// V6_vS32b_nt_new_pred_ai
    UINT64_C(702546000),	// V6_vS32b_nt_new_pred_pi
    UINT64_C(736100432),	// V6_vS32b_nt_new_pred_ppu
    UINT64_C(685768736),	// V6_vS32b_nt_npred_ai
    UINT64_C(702545952),	// V6_vS32b_nt_npred_pi
    UINT64_C(736100384),	// V6_vS32b_nt_npred_ppu
    UINT64_C(683671584),	// V6_vS32b_nt_nqpred_ai
    UINT64_C(700448800),	// V6_vS32b_nt_nqpred_pi
    UINT64_C(734003232),	// V6_vS32b_nt_nqpred_ppu
    UINT64_C(694157312),	// V6_vS32b_nt_pi
    UINT64_C(727711744),	// V6_vS32b_nt_ppu
    UINT64_C(685768704),	// V6_vS32b_nt_pred_ai
    UINT64_C(702545920),	// V6_vS32b_nt_pred_pi
    UINT64_C(736100352),	// V6_vS32b_nt_pred_ppu
    UINT64_C(683671552),	// V6_vS32b_nt_qpred_ai
    UINT64_C(700448768),	// V6_vS32b_nt_qpred_pi
    UINT64_C(734003200),	// V6_vS32b_nt_qpred_ppu
    UINT64_C(689963008),	// V6_vS32b_pi
    UINT64_C(723517440),	// V6_vS32b_ppu
    UINT64_C(681574400),	// V6_vS32b_pred_ai
    UINT64_C(698351616),	// V6_vS32b_pred_pi
    UINT64_C(731906048),	// V6_vS32b_pred_ppu
    UINT64_C(679477248),	// V6_vS32b_qpred_ai
    UINT64_C(696254464),	// V6_vS32b_qpred_pi
    UINT64_C(729808896),	// V6_vS32b_qpred_ppu
    UINT64_C(673185832),	// V6_vS32b_srls_ai
    UINT64_C(689963048),	// V6_vS32b_srls_pi
    UINT64_C(723517480),	// V6_vS32b_srls_ppu
    UINT64_C(503382144),	// V6_vabsb
    UINT64_C(503382176),	// V6_vabsb_sat
    UINT64_C(482344992),	// V6_vabsdiffh
    UINT64_C(482344960),	// V6_vabsdiffub
    UINT64_C(482345024),	// V6_vabsdiffuh
    UINT64_C(482345056),	// V6_vabsdiffw
    UINT64_C(503316480),	// V6_vabsh
    UINT64_C(503316512),	// V6_vabsh_sat
    UINT64_C(503316544),	// V6_vabsw
    UINT64_C(503316576),	// V6_vabsw_sat
    UINT64_C(530579648),	// V6_vaddb
    UINT64_C(476053632),	// V6_vaddb_dv
    UINT64_C(503390304),	// V6_vaddbnq
    UINT64_C(503390208),	// V6_vaddbq
    UINT64_C(520093696),	// V6_vaddbsat
    UINT64_C(513802240),	// V6_vaddbsat_dv
    UINT64_C(480256000),	// V6_vaddcarry
    UINT64_C(497033216),	// V6_vaddcarryo
    UINT64_C(494936064),	// V6_vaddcarrysat
    UINT64_C(520101888),	// V6_vaddclbh
    UINT64_C(520101920),	// V6_vaddclbw
    UINT64_C(530579680),	// V6_vaddh
    UINT64_C(476053664),	// V6_vaddh_dv
    UINT64_C(503390336),	// V6_vaddhnq
    UINT64_C(503390240),	// V6_vaddhq
    UINT64_C(473956448),	// V6_vaddhsat
    UINT64_C(478150688),	// V6_vaddhsat_dv
    UINT64_C(480247936),	// V6_vaddhw
    UINT64_C(471867456),	// V6_vaddhw_acc
    UINT64_C(480247872),	// V6_vaddubh
    UINT64_C(473964704),	// V6_vaddubh_acc
    UINT64_C(473956384),	// V6_vaddubsat
    UINT64_C(476053728),	// V6_vaddubsat_dv
    UINT64_C(513802368),	// V6_vaddububb_sat
    UINT64_C(473956416),	// V6_vadduhsat
    UINT64_C(478150656),	// V6_vadduhsat_dv
    UINT64_C(480247904),	// V6_vadduhw
    UINT64_C(473964672),	// V6_vadduhw_acc
    UINT64_C(526385184),	// V6_vadduwsat
    UINT64_C(513802304),	// V6_vadduwsat_dv
    UINT64_C(473956352),	// V6_vaddw
    UINT64_C(476053696),	// V6_vaddw_dv
    UINT64_C(503390368),	// V6_vaddwnq
    UINT64_C(503390272),	// V6_vaddwq
    UINT64_C(473956480),	// V6_vaddwsat
    UINT64_C(478150720),	// V6_vaddwsat_dv
    UINT64_C(452984832),	// V6_valignb
    UINT64_C(505421824),	// V6_valignbi
    UINT64_C(471859360),	// V6_vand
    UINT64_C(429917344),	// V6_vandnqrt
    UINT64_C(425731168),	// V6_vandnqrt_acc
    UINT64_C(429916320),	// V6_vandqrt
    UINT64_C(425730144),	// V6_vandqrt_acc
    UINT64_C(503521312),	// V6_vandvnqv
    UINT64_C(503521280),	// V6_vandvqv
    UINT64_C(429916232),	// V6_vandvrt
    UINT64_C(425730176),	// V6_vandvrt_acc
    UINT64_C(427819008),	// V6_vaslh
    UINT64_C(429924512),	// V6_vaslh_acc
    UINT64_C(530579616),	// V6_vaslhv
    UINT64_C(425722080),	// V6_vaslw
    UINT64_C(425730112),	// V6_vaslw_acc
    UINT64_C(530579584),	// V6_vaslwv
    UINT64_C(446701792),	// V6_vasr_into
    UINT64_C(425722048),	// V6_vasrh
    UINT64_C(427827424),	// V6_vasrh_acc
    UINT64_C(452993024),	// V6_vasrhbrndsat
    UINT64_C(402653184),	// V6_vasrhbsat
    UINT64_C(452985056),	// V6_vasrhubrndsat
    UINT64_C(452985024),	// V6_vasrhubsat
    UINT64_C(530579552),	// V6_vasrhv
    UINT64_C(402653408),	// V6_vasruhubrndsat
    UINT64_C(402661536),	// V6_vasruhubsat
    UINT64_C(402653216),	// V6_vasruwuhrndsat
    UINT64_C(402661504),	// V6_vasruwuhsat
    UINT64_C(425722016),	// V6_vasrw
    UINT64_C(425730208),	// V6_vasrw_acc
    UINT64_C(452984896),	// V6_vasrwh
    UINT64_C(452984960),	// V6_vasrwhrndsat
    UINT64_C(452984928),	// V6_vasrwhsat
    UINT64_C(402653248),	// V6_vasrwuhrndsat
    UINT64_C(452984992),	// V6_vasrwuhsat
    UINT64_C(530579456),	// V6_vasrwv
    UINT64_C(503521504),	// V6_vassign
    UINT64_C(520102016),	// V6_vavgb
    UINT64_C(520102048),	// V6_vavgbrnd
    UINT64_C(482345152),	// V6_vavgh
    UINT64_C(484442272),	// V6_vavghrnd
    UINT64_C(482345088),	// V6_vavgub
    UINT64_C(484442208),	// V6_vavgubrnd
    UINT64_C(482345120),	// V6_vavguh
    UINT64_C(484442240),	// V6_vavguhrnd
    UINT64_C(520101952),	// V6_vavguw
    UINT64_C(520101984),	// V6_vavguwrnd
    UINT64_C(482345184),	// V6_vavgw
    UINT64_C(484442304),	// V6_vavgwrnd
    UINT64_C(442499072),	// V6_vccombine
    UINT64_C(503447776),	// V6_vcl0h
    UINT64_C(503447712),	// V6_vcl0w
    UINT64_C(436207616),	// V6_vcmov
    UINT64_C(524288224),	// V6_vcombine
    UINT64_C(434118720),	// V6_vdeal
    UINT64_C(503316704),	// V6_vdealb
    UINT64_C(522191072),	// V6_vdealb4w
    UINT64_C(503316672),	// V6_vdealh
    UINT64_C(452993152),	// V6_vdealvdd
    UINT64_C(522190880),	// V6_vdelta
    UINT64_C(419430592),	// V6_vdmpybus
    UINT64_C(419438784),	// V6_vdmpybus_acc
    UINT64_C(419430624),	// V6_vdmpybus_dv
    UINT64_C(419438816),	// V6_vdmpybus_dv_acc
    UINT64_C(419430464),	// V6_vdmpyhb
    UINT64_C(419438688),	// V6_vdmpyhb_acc
    UINT64_C(421527680),	// V6_vdmpyhb_dv
    UINT64_C(421535872),	// V6_vdmpyhb_dv_acc
    UINT64_C(421527648),	// V6_vdmpyhisat
    UINT64_C(421535808),	// V6_vdmpyhisat_acc
    UINT64_C(421527616),	// V6_vdmpyhsat
    UINT64_C(421535840),	// V6_vdmpyhsat_acc
    UINT64_C(421527584),	// V6_vdmpyhsuisat
    UINT64_C(421535776),	// V6_vdmpyhsuisat_acc
    UINT64_C(421527552),	// V6_vdmpyhsusat
    UINT64_C(421535744),	// V6_vdmpyhsusat_acc
    UINT64_C(469762144),	// V6_vdmpyhvsat
    UINT64_C(469770336),	// V6_vdmpyhvsat_acc
    UINT64_C(419430560),	// V6_vdsaduh
    UINT64_C(425730048),	// V6_vdsaduh_acc
    UINT64_C(528482304),	// V6_veqb
    UINT64_C(478158848),	// V6_veqb_and
    UINT64_C(478158912),	// V6_veqb_or
    UINT64_C(478158976),	// V6_veqb_xor
    UINT64_C(528482308),	// V6_veqh
    UINT64_C(478158852),	// V6_veqh_and
    UINT64_C(478158916),	// V6_veqh_or
    UINT64_C(478158980),	// V6_veqh_xor
    UINT64_C(528482312),	// V6_veqw
    UINT64_C(478158856),	// V6_veqw_and
    UINT64_C(478158920),	// V6_veqw_or
    UINT64_C(478158984),	// V6_veqw_xor
    UINT64_C(788529408),	// V6_vgathermh
    UINT64_C(788530432),	// V6_vgathermhq
    UINT64_C(788529664),	// V6_vgathermhw
    UINT64_C(788530688),	// V6_vgathermhwq
    UINT64_C(788529152),	// V6_vgathermw
    UINT64_C(788530176),	// V6_vgathermwq
    UINT64_C(528482320),	// V6_vgtb
    UINT64_C(478158864),	// V6_vgtb_and
    UINT64_C(478158928),	// V6_vgtb_or
    UINT64_C(478158992),	// V6_vgtb_xor
    UINT64_C(528482324),	// V6_vgth
    UINT64_C(478158868),	// V6_vgth_and
    UINT64_C(478158932),	// V6_vgth_or
    UINT64_C(478158996),	// V6_vgth_xor
    UINT64_C(528482336),	// V6_vgtub
    UINT64_C(478158880),	// V6_vgtub_and
    UINT64_C(478158944),	// V6_vgtub_or
    UINT64_C(478159008),	// V6_vgtub_xor
    UINT64_C(528482340),	// V6_vgtuh
    UINT64_C(478158884),	// V6_vgtuh_and
    UINT64_C(478158948),	// V6_vgtuh_or
    UINT64_C(478159012),	// V6_vgtuh_xor
    UINT64_C(528482344),	// V6_vgtuw
    UINT64_C(478158888),	// V6_vgtuw_and
    UINT64_C(478158952),	// V6_vgtuw_or
    UINT64_C(478159016),	// V6_vgtuw_xor
    UINT64_C(528482328),	// V6_vgtw
    UINT64_C(478158872),	// V6_vgtw_and
    UINT64_C(478158936),	// V6_vgtw_or
    UINT64_C(478159000),	// V6_vgtw_xor
    UINT64_C(503324800),	// V6_vhist
    UINT64_C(503455872),	// V6_vhistq
    UINT64_C(429924384),	// V6_vinsertwr
    UINT64_C(452984864),	// V6_vlalignb
    UINT64_C(509616128),	// V6_vlalignbi
    UINT64_C(427819104),	// V6_vlsrb
    UINT64_C(427819072),	// V6_vlsrh
    UINT64_C(530579520),	// V6_vlsrhv
    UINT64_C(427819040),	// V6_vlsrw
    UINT64_C(530579488),	// V6_vlsrwv
    UINT64_C(425721984),	// V6_vlut4
    UINT64_C(452993056),	// V6_vlutvvb
    UINT64_C(402653280),	// V6_vlutvvb_nm
    UINT64_C(452993184),	// V6_vlutvvb_oracc
    UINT64_C(482353152),	// V6_vlutvvb_oracci
    UINT64_C(505413632),	// V6_vlutvvbi
    UINT64_C(452993216),	// V6_vlutvwh
    UINT64_C(402653312),	// V6_vlutvwh_nm
    UINT64_C(452993248),	// V6_vlutvwh_oracc
    UINT64_C(484450304),	// V6_vlutvwh_oracci
    UINT64_C(509607936),	// V6_vlutvwhi
    UINT64_C(522191008),	// V6_vmaxb
    UINT64_C(520093920),	// V6_vmaxh
    UINT64_C(520093856),	// V6_vmaxub
    UINT64_C(520093888),	// V6_vmaxuh
    UINT64_C(522190848),	// V6_vmaxw
    UINT64_C(522190976),	// V6_vminb
    UINT64_C(520093792),	// V6_vminh
    UINT64_C(520093728),	// V6_vminub
    UINT64_C(520093760),	// V6_vminuh
    UINT64_C(520093824),	// V6_vminw
    UINT64_C(421527744),	// V6_vmpabus
    UINT64_C(421535936),	// V6_vmpabus_acc
    UINT64_C(471859296),	// V6_vmpabusv
    UINT64_C(425721952),	// V6_vmpabuu
    UINT64_C(429924480),	// V6_vmpabuu_acc
    UINT64_C(484442336),	// V6_vmpabuuv
    UINT64_C(421527776),	// V6_vmpahb
    UINT64_C(421535968),	// V6_vmpahb_acc
    UINT64_C(427827328),	// V6_vmpahhsat
    UINT64_C(427819168),	// V6_vmpauhb
    UINT64_C(427827264),	// V6_vmpauhb_acc
    UINT64_C(427827360),	// V6_vmpauhuhsat
    UINT64_C(427827392),	// V6_vmpsuhuhsat
    UINT64_C(421527712),	// V6_vmpybus
    UINT64_C(421535904),	// V6_vmpybus_acc
    UINT64_C(469762240),	// V6_vmpybusv
    UINT64_C(469770432),	// V6_vmpybusv_acc
    UINT64_C(469762176),	// V6_vmpybv
    UINT64_C(469770368),	// V6_vmpybv_acc
    UINT64_C(534773920),	// V6_vmpyewuh
    UINT64_C(513802432),	// V6_vmpyewuh_64
    UINT64_C(423624704),	// V6_vmpyh
    UINT64_C(429924544),	// V6_vmpyh_acc
    UINT64_C(423632896),	// V6_vmpyhsat_acc
    UINT64_C(423624768),	// V6_vmpyhsrs
    UINT64_C(423624736),	// V6_vmpyhss
    UINT64_C(471859264),	// V6_vmpyhus
    UINT64_C(471867424),	// V6_vmpyhus_acc
    UINT64_C(469762272),	// V6_vmpyhv
    UINT64_C(469770464),	// V6_vmpyhv_acc
    UINT64_C(471859232),	// V6_vmpyhvsrs
    UINT64_C(526385152),	// V6_vmpyieoh
    UINT64_C(473964544),	// V6_vmpyiewh_acc
    UINT64_C(532676608),	// V6_vmpyiewuh
    UINT64_C(471867552),	// V6_vmpyiewuh_acc
    UINT64_C(471859328),	// V6_vmpyih
    UINT64_C(471867520),	// V6_vmpyih_acc
    UINT64_C(425721856),	// V6_vmpyihb
    UINT64_C(425730080),	// V6_vmpyihb_acc
    UINT64_C(532676640),	// V6_vmpyiowh
    UINT64_C(429916160),	// V6_vmpyiwb
    UINT64_C(423632960),	// V6_vmpyiwb_acc
    UINT64_C(427819232),	// V6_vmpyiwh
    UINT64_C(423632992),	// V6_vmpyiwh_acc
    UINT64_C(427819200),	// V6_vmpyiwub
    UINT64_C(427827232),	// V6_vmpyiwub_acc
    UINT64_C(534773984),	// V6_vmpyowh
    UINT64_C(471867488),	// V6_vmpyowh_64_acc
    UINT64_C(524288000),	// V6_vmpyowh_rnd
    UINT64_C(471867616),	// V6_vmpyowh_rnd_sacc
    UINT64_C(471867584),	// V6_vmpyowh_sacc
    UINT64_C(432013312),	// V6_vmpyub
    UINT64_C(427827200),	// V6_vmpyub_acc
    UINT64_C(469762208),	// V6_vmpyubv
    UINT64_C(469770400),	// V6_vmpyubv_acc
    UINT64_C(423624800),	// V6_vmpyuh
    UINT64_C(423632928),	// V6_vmpyuh_acc
    UINT64_C(425721920),	// V6_vmpyuhe
    UINT64_C(427827296),	// V6_vmpyuhe_acc
    UINT64_C(471859200),	// V6_vmpyuhv
    UINT64_C(471867392),	// V6_vmpyuhv_acc
    UINT64_C(518004736),	// V6_vmux
    UINT64_C(520102080),	// V6_vnavgb
    UINT64_C(484442144),	// V6_vnavgh
    UINT64_C(484442112),	// V6_vnavgub
    UINT64_C(484442176),	// V6_vnavgw
    UINT64_C(440401920),	// V6_vnccombine
    UINT64_C(438304768),	// V6_vncmov
    UINT64_C(503513248),	// V6_vnormamth
    UINT64_C(503513216),	// V6_vnormamtw
    UINT64_C(503316608),	// V6_vnot
    UINT64_C(471859392),	// V6_vor
    UINT64_C(532676672),	// V6_vpackeb
    UINT64_C(532676704),	// V6_vpackeh
    UINT64_C(532676800),	// V6_vpackhb_sat
    UINT64_C(532676768),	// V6_vpackhub_sat
    UINT64_C(534773792),	// V6_vpackob
    UINT64_C(534773824),	// V6_vpackoh
    UINT64_C(534773760),	// V6_vpackwh_sat
    UINT64_C(532676832),	// V6_vpackwuh_sat
    UINT64_C(503447744),	// V6_vpopcounth
    UINT64_C(503521344),	// V6_vprefixqb
    UINT64_C(503521600),	// V6_vprefixqh
    UINT64_C(503521856),	// V6_vprefixqw
    UINT64_C(522190944),	// V6_vrdelta
    UINT64_C(432013472),	// V6_vrmpybub_rtt
    UINT64_C(429924352),	// V6_vrmpybub_rtt_acc
    UINT64_C(419430528),	// V6_vrmpybus
    UINT64_C(419438752),	// V6_vrmpybus_acc
    UINT64_C(423624832),	// V6_vrmpybusi
    UINT64_C(423633024),	// V6_vrmpybusi_acc
    UINT64_C(469762112),	// V6_vrmpybusv
    UINT64_C(469770304),	// V6_vrmpybusv_acc
    UINT64_C(469762080),	// V6_vrmpybv
    UINT64_C(469770272),	// V6_vrmpybv_acc
    UINT64_C(419430496),	// V6_vrmpyub
    UINT64_C(419438720),	// V6_vrmpyub_acc
    UINT64_C(432013440),	// V6_vrmpyub_rtt
    UINT64_C(429924576),	// V6_vrmpyub_rtt_acc
    UINT64_C(429916352),	// V6_vrmpyubi
    UINT64_C(425730240),	// V6_vrmpyubi_acc
    UINT64_C(469762048),	// V6_vrmpyubv
    UINT64_C(469770240),	// V6_vrmpyubv_acc
    UINT64_C(434634752),	// V6_vrmpyzbb_rt
    UINT64_C(432021568),	// V6_vrmpyzbb_rt_acc
    UINT64_C(434110464),	// V6_vrmpyzbb_rx
    UINT64_C(432545856),	// V6_vrmpyzbb_rx_acc
    UINT64_C(435683392),	// V6_vrmpyzbub_rt
    UINT64_C(433070112),	// V6_vrmpyzbub_rt_acc
    UINT64_C(435159104),	// V6_vrmpyzbub_rx
    UINT64_C(433594400),	// V6_vrmpyzbub_rx_acc
    UINT64_C(434634784),	// V6_vrmpyzcb_rt
    UINT64_C(432021600),	// V6_vrmpyzcb_rt_acc
    UINT64_C(434110496),	// V6_vrmpyzcb_rx
    UINT64_C(432545888),	// V6_vrmpyzcb_rx_acc
    UINT64_C(434634816),	// V6_vrmpyzcbs_rt
    UINT64_C(432021536),	// V6_vrmpyzcbs_rt_acc
    UINT64_C(434110528),	// V6_vrmpyzcbs_rx
    UINT64_C(432545824),	// V6_vrmpyzcbs_rx_acc
    UINT64_C(435683328),	// V6_vrmpyznb_rt
    UINT64_C(433070144),	// V6_vrmpyznb_rt_acc
    UINT64_C(435159040),	// V6_vrmpyznb_rx
    UINT64_C(433594432),	// V6_vrmpyznb_rx_acc
    UINT64_C(425721888),	// V6_vror
    UINT64_C(444604640),	// V6_vrotr
    UINT64_C(526385344),	// V6_vroundhb
    UINT64_C(526385376),	// V6_vroundhub
    UINT64_C(534773856),	// V6_vrounduhub
    UINT64_C(534773888),	// V6_vrounduwuh
    UINT64_C(526385280),	// V6_vroundwh
    UINT64_C(526385312),	// V6_vroundwuh
    UINT64_C(423624896),	// V6_vrsadubi
    UINT64_C(423633088),	// V6_vrsadubi_acc
    UINT64_C(494936288),	// V6_vsatdw
    UINT64_C(526385216),	// V6_vsathub
    UINT64_C(522191040),	// V6_vsatuwuh
    UINT64_C(526385248),	// V6_vsatwh
    UINT64_C(503447648),	// V6_vsb
    UINT64_C(790626336),	// V6_vscattermh
    UINT64_C(790626464),	// V6_vscattermh_add
    UINT64_C(796917888),	// V6_vscattermhq
    UINT64_C(790626368),	// V6_vscattermhw
    UINT64_C(790626496),	// V6_vscattermhw_add
    UINT64_C(799014912),	// V6_vscattermhwq
    UINT64_C(790626304),	// V6_vscattermw
    UINT64_C(790626432),	// V6_vscattermw_add
    UINT64_C(796917760),	// V6_vscattermwq
    UINT64_C(503447680),	// V6_vsh
    UINT64_C(524288096),	// V6_vshufeh
    UINT64_C(434118688),	// V6_vshuff
    UINT64_C(503447552),	// V6_vshuffb
    UINT64_C(524288032),	// V6_vshuffeb
    UINT64_C(503382240),	// V6_vshuffh
    UINT64_C(524288064),	// V6_vshuffob
    UINT64_C(452993120),	// V6_vshuffvdd
    UINT64_C(524288192),	// V6_vshufoeb
    UINT64_C(524288160),	// V6_vshufoeh
    UINT64_C(524288128),	// V6_vshufoh
    UINT64_C(473956512),	// V6_vsubb
    UINT64_C(478150752),	// V6_vsubb_dv
    UINT64_C(503455776),	// V6_vsubbnq
    UINT64_C(503390400),	// V6_vsubbq
    UINT64_C(522190912),	// V6_vsubbsat
    UINT64_C(513802272),	// V6_vsubbsat_dv
    UINT64_C(480256128),	// V6_vsubcarry
    UINT64_C(497033344),	// V6_vsubcarryo
    UINT64_C(473956544),	// V6_vsubh
    UINT64_C(478150784),	// V6_vsubh_dv
    UINT64_C(503455808),	// V6_vsubhnq
    UINT64_C(503390432),	// V6_vsubhq
    UINT64_C(476053568),	// V6_vsubhsat
    UINT64_C(480247808),	// V6_vsubhsat_dv
    UINT64_C(480248032),	// V6_vsubhw
    UINT64_C(480247968),	// V6_vsububh
    UINT64_C(476053504),	// V6_vsububsat
    UINT64_C(478150848),	// V6_vsububsat_dv
    UINT64_C(513802400),	// V6_vsubububb_sat
    UINT64_C(476053536),	// V6_vsubuhsat
    UINT64_C(478150880),	// V6_vsubuhsat_dv
    UINT64_C(480248000),	// V6_vsubuhw
    UINT64_C(532676736),	// V6_vsubuwsat
    UINT64_C(513802336),	// V6_vsubuwsat_dv
    UINT64_C(473956576),	// V6_vsubw
    UINT64_C(478150816),	// V6_vsubw_dv
    UINT64_C(503455840),	// V6_vsubwnq
    UINT64_C(503455744),	// V6_vsubwq
    UINT64_C(476053600),	// V6_vsubwsat
    UINT64_C(480247840),	// V6_vsubwsat_dv
    UINT64_C(513810432),	// V6_vswap
    UINT64_C(419430400),	// V6_vtmpyb
    UINT64_C(419438592),	// V6_vtmpyb_acc
    UINT64_C(419430432),	// V6_vtmpybus
    UINT64_C(419438624),	// V6_vtmpybus_acc
    UINT64_C(429916288),	// V6_vtmpyhb
    UINT64_C(419438656),	// V6_vtmpyhb_acc
    UINT64_C(503382080),	// V6_vunpackb
    UINT64_C(503382112),	// V6_vunpackh
    UINT64_C(503324672),	// V6_vunpackob
    UINT64_C(503324704),	// V6_vunpackoh
    UINT64_C(503382016),	// V6_vunpackub
    UINT64_C(503382048),	// V6_vunpackuh
    UINT64_C(503325824),	// V6_vwhist128
    UINT64_C(503326336),	// V6_vwhist128m
    UINT64_C(503456896),	// V6_vwhist128q
    UINT64_C(503457408),	// V6_vwhist128qm
    UINT64_C(503325312),	// V6_vwhist256
    UINT64_C(503325568),	// V6_vwhist256_sat
    UINT64_C(503456384),	// V6_vwhist256q
    UINT64_C(503456640),	// V6_vwhist256q_sat
    UINT64_C(471859424),	// V6_vxor
    UINT64_C(503447584),	// V6_vzb
    UINT64_C(503447616),	// V6_vzh
    UINT64_C(738197504),	// V6_zLd_ai
    UINT64_C(754974720),	// V6_zLd_pi
    UINT64_C(754974721),	// V6_zLd_ppu
    UINT64_C(746586112),	// V6_zLd_pred_ai
    UINT64_C(763363328),	// V6_zLd_pred_pi
    UINT64_C(763363329),	// V6_zLd_pred_ppu
    UINT64_C(429916448),	// V6_zextract
    UINT64_C(2818572288),	// Y2_barrier
    UINT64_C(1814036480),	// Y2_break
    UINT64_C(2684354560),	// Y2_dccleana
    UINT64_C(2688548864),	// Y2_dccleaninva
    UINT64_C(2483027968),	// Y2_dcfetchbo
    UINT64_C(2686451712),	// Y2_dcinva
    UINT64_C(2696937472),	// Y2_dczeroa
    UINT64_C(1455423488),	// Y2_icinva
    UINT64_C(1472200706),	// Y2_isync
    UINT64_C(2822766592),	// Y2_syncht
    UINT64_C(1681915904),	// Y2_wait
    UINT64_C(2785017856),	// Y4_l2fetch
    UINT64_C(1648361472),	// Y4_trace
    UINT64_C(2793406464),	// Y5_l2fetch
    UINT64_C(3581935616),	// dep_A2_addsat
    UINT64_C(3581935744),	// dep_A2_subsat
    UINT64_C(3556769792),	// dep_S2_packhl
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case Hexagon::A2_nop:
    case Hexagon::CONST32:
    case Hexagon::CONST64:
    case Hexagon::DuplexIClass0:
    case Hexagon::DuplexIClass1:
    case Hexagon::DuplexIClass2:
    case Hexagon::DuplexIClass3:
    case Hexagon::DuplexIClass4:
    case Hexagon::DuplexIClass5:
    case Hexagon::DuplexIClass6:
    case Hexagon::DuplexIClass7:
    case Hexagon::DuplexIClass8:
    case Hexagon::DuplexIClass9:
    case Hexagon::DuplexIClassA:
    case Hexagon::DuplexIClassB:
    case Hexagon::DuplexIClassC:
    case Hexagon::DuplexIClassD:
    case Hexagon::DuplexIClassE:
    case Hexagon::DuplexIClassF:
    case Hexagon::SL2_deallocframe:
    case Hexagon::SL2_jumpr31:
    case Hexagon::SL2_jumpr31_f:
    case Hexagon::SL2_jumpr31_fnew:
    case Hexagon::SL2_jumpr31_t:
    case Hexagon::SL2_jumpr31_tnew:
    case Hexagon::SL2_return:
    case Hexagon::SL2_return_f:
    case Hexagon::SL2_return_fnew:
    case Hexagon::SL2_return_t:
    case Hexagon::SL2_return_tnew:
    case Hexagon::TFRI64_V2_ext:
    case Hexagon::TFRI64_V4:
    case Hexagon::V6_vhist:
    case Hexagon::V6_vwhist128:
    case Hexagon::V6_vwhist256:
    case Hexagon::V6_vwhist256_sat:
    case Hexagon::Y2_barrier:
    case Hexagon::Y2_break:
    case Hexagon::Y2_isync:
    case Hexagon::Y2_syncht: {
      break;
    }
    case Hexagon::A2_tfrcrr: {
      // op: Cs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A4_tfrcpp: {
      // op: Css32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::G4_tfrgcrr: {
      // op: Gs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::G4_tfrgcpp: {
      // op: Gss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::J4_cmpeqi_f_jumpnv_nt:
    case Hexagon::J4_cmpeqi_f_jumpnv_t:
    case Hexagon::J4_cmpeqi_t_jumpnv_nt:
    case Hexagon::J4_cmpeqi_t_jumpnv_t:
    case Hexagon::J4_cmpgti_f_jumpnv_nt:
    case Hexagon::J4_cmpgti_f_jumpnv_t:
    case Hexagon::J4_cmpgti_t_jumpnv_nt:
    case Hexagon::J4_cmpgti_t_jumpnv_t:
    case Hexagon::J4_cmpgtui_f_jumpnv_nt:
    case Hexagon::J4_cmpgtui_f_jumpnv_t:
    case Hexagon::J4_cmpgtui_t_jumpnv_nt:
    case Hexagon::J4_cmpgtui_t_jumpnv_t: {
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 11;
      Value |= (op & UINT64_C(508)) >> 1;
      // op: Ns8
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::J4_cmpeqi_fp0_jump_nt:
    case Hexagon::J4_cmpeqi_fp0_jump_t:
    case Hexagon::J4_cmpeqi_fp1_jump_nt:
    case Hexagon::J4_cmpeqi_fp1_jump_t:
    case Hexagon::J4_cmpeqi_tp0_jump_nt:
    case Hexagon::J4_cmpeqi_tp0_jump_t:
    case Hexagon::J4_cmpeqi_tp1_jump_nt:
    case Hexagon::J4_cmpeqi_tp1_jump_t:
    case Hexagon::J4_cmpgti_fp0_jump_nt:
    case Hexagon::J4_cmpgti_fp0_jump_t:
    case Hexagon::J4_cmpgti_fp1_jump_nt:
    case Hexagon::J4_cmpgti_fp1_jump_t:
    case Hexagon::J4_cmpgti_tp0_jump_nt:
    case Hexagon::J4_cmpgti_tp0_jump_t:
    case Hexagon::J4_cmpgti_tp1_jump_nt:
    case Hexagon::J4_cmpgti_tp1_jump_t:
    case Hexagon::J4_cmpgtui_fp0_jump_nt:
    case Hexagon::J4_cmpgtui_fp0_jump_t:
    case Hexagon::J4_cmpgtui_fp1_jump_nt:
    case Hexagon::J4_cmpgtui_fp1_jump_t:
    case Hexagon::J4_cmpgtui_tp0_jump_nt:
    case Hexagon::J4_cmpgtui_tp0_jump_t:
    case Hexagon::J4_cmpgtui_tp1_jump_nt:
    case Hexagon::J4_cmpgtui_tp1_jump_t: {
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 11;
      Value |= (op & UINT64_C(508)) >> 1;
      // op: Rs16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S4_storerbnew_ap:
    case Hexagon::S4_storerhnew_ap:
    case Hexagon::S4_storerinew_ap: {
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(63);
      Value |= op;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      // op: Re32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S4_storerb_ap:
    case Hexagon::S4_storerf_ap:
    case Hexagon::S4_storerh_ap:
    case Hexagon::S4_storeri_ap: {
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(63);
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Re32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S4_storerd_ap: {
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(63);
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Re32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::J4_jumpseti: {
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 8;
      Value |= op;
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 11;
      Value |= (op & UINT64_C(508)) >> 1;
      // op: Rd16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L4_loadbsw2_ap:
    case Hexagon::L4_loadbzw2_ap:
    case Hexagon::L4_loadrb_ap:
    case Hexagon::L4_loadrh_ap:
    case Hexagon::L4_loadri_ap:
    case Hexagon::L4_loadrub_ap:
    case Hexagon::L4_loadruh_ap: {
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(60)) << 6;
      Value |= (op & UINT64_C(3)) << 5;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Re32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L4_loadbsw4_ap:
    case Hexagon::L4_loadbzw4_ap:
    case Hexagon::L4_loadrd_ap: {
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(60)) << 6;
      Value |= (op & UINT64_C(3)) << 5;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Re32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L4_loadalignb_ap:
    case Hexagon::L4_loadalignh_ap: {
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(60)) << 6;
      Value |= (op & UINT64_C(3)) << 5;
      // op: Ryy32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Re32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::J2_call:
    case Hexagon::J2_jump: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(16744448)) << 1;
      Value |= (op & UINT64_C(32764)) >> 1;
      break;
    }
    case Hexagon::PS_storerinewabs:
    case Hexagon::S2_storerinewgp: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(196608)) << 9;
      Value |= (op & UINT64_C(63488)) << 5;
      Value |= (op & UINT64_C(1024)) << 3;
      Value |= (op & UINT64_C(1020)) >> 2;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::PS_storeriabs:
    case Hexagon::S2_storerigp: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(196608)) << 9;
      Value |= (op & UINT64_C(63488)) << 5;
      Value |= (op & UINT64_C(1024)) << 3;
      Value |= (op & UINT64_C(1020)) >> 2;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::J2_pause:
    case Hexagon::J2_trap0: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(248)) << 5;
      Value |= (op & UINT64_C(7)) << 2;
      break;
    }
    case Hexagon::PS_storerdabs:
    case Hexagon::S2_storerdgp: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(393216)) << 8;
      Value |= (op & UINT64_C(126976)) << 4;
      Value |= (op & UINT64_C(2048)) << 2;
      Value |= (op & UINT64_C(2040)) >> 3;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::A4_ext: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(4293918720)) >> 4;
      Value |= (op & UINT64_C(1048512)) >> 6;
      break;
    }
    case Hexagon::PS_storerbnewabs:
    case Hexagon::S2_storerbnewgp: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(49152)) << 11;
      Value |= (op & UINT64_C(15872)) << 7;
      Value |= (op & UINT64_C(256)) << 5;
      Value |= (op & UINT64_C(255));
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::PS_storerbabs:
    case Hexagon::S2_storerbgp: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(49152)) << 11;
      Value |= (op & UINT64_C(15872)) << 7;
      Value |= (op & UINT64_C(256)) << 5;
      Value |= (op & UINT64_C(255));
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::J2_loop0i:
    case Hexagon::J2_loop1i:
    case Hexagon::J2_ploop1si:
    case Hexagon::J2_ploop2si:
    case Hexagon::J2_ploop3si: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(496)) << 4;
      Value |= (op & UINT64_C(12)) << 1;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(992)) << 11;
      Value |= (op & UINT64_C(28)) << 3;
      Value |= (op & UINT64_C(3));
      break;
    }
    case Hexagon::J2_loop0r:
    case Hexagon::J2_loop1r:
    case Hexagon::J2_ploop1sr:
    case Hexagon::J2_ploop2sr:
    case Hexagon::J2_ploop3sr: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(496)) << 4;
      Value |= (op & UINT64_C(12)) << 1;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::PS_storerhnewabs:
    case Hexagon::S2_storerhnewgp: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(98304)) << 10;
      Value |= (op & UINT64_C(31744)) << 6;
      Value |= (op & UINT64_C(512)) << 4;
      Value |= (op & UINT64_C(510)) >> 1;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::PS_storerfabs:
    case Hexagon::PS_storerhabs:
    case Hexagon::S2_storerfgp:
    case Hexagon::S2_storerhgp: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(98304)) << 10;
      Value |= (op & UINT64_C(31744)) << 6;
      Value |= (op & UINT64_C(512)) << 4;
      Value |= (op & UINT64_C(510)) >> 1;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::V6_vwhist128m: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::SS2_storew_sp: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(124);
      op <<= 2;
      Value |= op;
      // op: Rt16
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case Hexagon::SS2_allocframe: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(248);
      op <<= 1;
      Value |= op;
      break;
    }
    case Hexagon::SS2_stored_sp: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(504);
      Value |= op;
      // op: Rtt8
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      Value |= op;
      break;
    }
    case Hexagon::S2_storerd_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(12288)) << 13;
      Value |= (op & UINT64_C(2048)) << 2;
      Value |= (op & UINT64_C(2040)) >> 3;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::J4_tstbit0_f_jumpnv_nt:
    case Hexagon::J4_tstbit0_f_jumpnv_t:
    case Hexagon::J4_tstbit0_t_jumpnv_nt:
    case Hexagon::J4_tstbit0_t_jumpnv_t: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 11;
      Value |= (op & UINT64_C(508)) >> 1;
      // op: Ns8
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::J4_tstbit0_fp0_jump_nt:
    case Hexagon::J4_tstbit0_fp0_jump_t:
    case Hexagon::J4_tstbit0_fp1_jump_nt:
    case Hexagon::J4_tstbit0_fp1_jump_t:
    case Hexagon::J4_tstbit0_tp0_jump_nt:
    case Hexagon::J4_tstbit0_tp0_jump_t:
    case Hexagon::J4_tstbit0_tp1_jump_nt:
    case Hexagon::J4_tstbit0_tp1_jump_t: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 11;
      Value |= (op & UINT64_C(508)) >> 1;
      // op: Rs16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S2_storerbnew_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 16;
      Value |= (op & UINT64_C(256)) << 5;
      Value |= (op & UINT64_C(255));
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::S2_storerb_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 16;
      Value |= (op & UINT64_C(256)) << 5;
      Value |= (op & UINT64_C(255));
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::J2_jumprgtez:
    case Hexagon::J2_jumprgtezpt:
    case Hexagon::J2_jumprltez:
    case Hexagon::J2_jumprltezpt:
    case Hexagon::J2_jumprnz:
    case Hexagon::J2_jumprnzpt:
    case Hexagon::J2_jumprz:
    case Hexagon::J2_jumprzpt: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(16384)) << 7;
      Value |= (op & UINT64_C(8192));
      Value |= (op & UINT64_C(8188)) >> 1;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadrigp:
    case Hexagon::PS_loadriabs: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(196608)) << 9;
      Value |= (op & UINT64_C(63488)) << 5;
      Value |= (op & UINT64_C(2044)) << 3;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S4_storerbnew_ur:
    case Hexagon::S4_storerhnew_ur:
    case Hexagon::S4_storerinew_ur: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(2)) << 12;
      Value |= (op & UINT64_C(1)) << 6;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(63);
      Value |= op;
      // op: Ru32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::S4_storerb_ur:
    case Hexagon::S4_storerf_ur:
    case Hexagon::S4_storerh_ur:
    case Hexagon::S4_storeri_ur: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(2)) << 12;
      Value |= (op & UINT64_C(1)) << 6;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(63);
      Value |= op;
      // op: Ru32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::S4_storerd_ur: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(2)) << 12;
      Value |= (op & UINT64_C(1)) << 6;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(63);
      Value |= op;
      // op: Ru32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::S4_addi_asl_ri:
    case Hexagon::S4_addi_lsr_ri:
    case Hexagon::S4_andi_asl_ri:
    case Hexagon::S4_andi_lsr_ri:
    case Hexagon::S4_ori_asl_ri:
    case Hexagon::S4_ori_lsr_ri:
    case Hexagon::S4_subi_asl_ri:
    case Hexagon::S4_subi_lsr_ri: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(224)) << 16;
      Value |= (op & UINT64_C(16)) << 9;
      Value |= (op & UINT64_C(14)) << 4;
      Value |= (op & UINT64_C(1)) << 3;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S2_storerhnew_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(3072)) << 15;
      Value |= (op & UINT64_C(512)) << 4;
      Value |= (op & UINT64_C(510)) >> 1;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::S2_storerf_io:
    case Hexagon::S2_storerh_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(3072)) << 15;
      Value |= (op & UINT64_C(512)) << 4;
      Value |= (op & UINT64_C(510)) >> 1;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadrdgp:
    case Hexagon::PS_loadrdabs: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(393216)) << 8;
      Value |= (op & UINT64_C(126976)) << 4;
      Value |= (op & UINT64_C(4088)) << 2;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S4_pstorerbnewf_abs:
    case Hexagon::S4_pstorerbnewfnew_abs:
    case Hexagon::S4_pstorerbnewt_abs:
    case Hexagon::S4_pstorerbnewtnew_abs:
    case Hexagon::S4_pstorerhnewf_abs:
    case Hexagon::S4_pstorerhnewfnew_abs:
    case Hexagon::S4_pstorerhnewt_abs:
    case Hexagon::S4_pstorerhnewtnew_abs:
    case Hexagon::S4_pstorerinewf_abs:
    case Hexagon::S4_pstorerinewfnew_abs:
    case Hexagon::S4_pstorerinewt_abs:
    case Hexagon::S4_pstorerinewtnew_abs: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(48)) << 12;
      Value |= (op & UINT64_C(15)) << 3;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::S4_pstorerbf_abs:
    case Hexagon::S4_pstorerbfnew_abs:
    case Hexagon::S4_pstorerbt_abs:
    case Hexagon::S4_pstorerbtnew_abs:
    case Hexagon::S4_pstorerff_abs:
    case Hexagon::S4_pstorerffnew_abs:
    case Hexagon::S4_pstorerft_abs:
    case Hexagon::S4_pstorerftnew_abs:
    case Hexagon::S4_pstorerhf_abs:
    case Hexagon::S4_pstorerhfnew_abs:
    case Hexagon::S4_pstorerht_abs:
    case Hexagon::S4_pstorerhtnew_abs:
    case Hexagon::S4_pstorerif_abs:
    case Hexagon::S4_pstorerifnew_abs:
    case Hexagon::S4_pstorerit_abs:
    case Hexagon::S4_pstoreritnew_abs: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(48)) << 12;
      Value |= (op & UINT64_C(15)) << 3;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::S4_pstorerdf_abs:
    case Hexagon::S4_pstorerdfnew_abs:
    case Hexagon::S4_pstorerdt_abs:
    case Hexagon::S4_pstorerdtnew_abs: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(48)) << 12;
      Value |= (op & UINT64_C(15)) << 3;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::M4_mpyri_addi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(48)) << 17;
      Value |= (op & UINT64_C(8)) << 10;
      Value |= (op & UINT64_C(7)) << 5;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(32)) << 18;
      Value |= (op & UINT64_C(31));
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::M4_mpyrr_addi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(48)) << 17;
      Value |= (op & UINT64_C(8)) << 10;
      Value |= (op & UINT64_C(7)) << 5;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::L2_loadrbgp:
    case Hexagon::L2_loadrubgp:
    case Hexagon::PS_loadrbabs:
    case Hexagon::PS_loadrubabs: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(49152)) << 11;
      Value |= (op & UINT64_C(15872)) << 7;
      Value |= (op & UINT64_C(511)) << 5;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A2_tfrsi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(49152)) << 8;
      Value |= (op & UINT64_C(15872)) << 7;
      Value |= (op & UINT64_C(511)) << 5;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::F2_sfimm_n:
    case Hexagon::F2_sfimm_p: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(512)) << 12;
      Value |= (op & UINT64_C(511)) << 5;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::F2_dfimm_n:
    case Hexagon::F2_dfimm_p: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(512)) << 12;
      Value |= (op & UINT64_C(511)) << 5;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A2_subri: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(512)) << 12;
      Value |= (op & UINT64_C(511)) << 5;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_storerinew_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(6144)) << 14;
      Value |= (op & UINT64_C(1024)) << 3;
      Value |= (op & UINT64_C(1020)) >> 2;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::S2_storeri_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(6144)) << 14;
      Value |= (op & UINT64_C(1024)) << 3;
      Value |= (op & UINT64_C(1020)) >> 2;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::S4_lsli: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(62)) << 15;
      Value |= (op & UINT64_C(1)) << 5;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vS32b_srls_ai:
    case Hexagon::V6_zLd_ai: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(8)) << 10;
      Value |= (op & UINT64_C(7)) << 8;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::V6_vS32b_new_ai:
    case Hexagon::V6_vS32b_nt_new_ai: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(8)) << 10;
      Value |= (op & UINT64_C(7)) << 8;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Os8
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      Value |= op;
      break;
    }
    case Hexagon::V6_vS32Ub_ai:
    case Hexagon::V6_vS32b_ai:
    case Hexagon::V6_vS32b_nt_ai: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(8)) << 10;
      Value |= (op & UINT64_C(7)) << 8;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::L2_loadrhgp:
    case Hexagon::L2_loadruhgp:
    case Hexagon::PS_loadrhabs:
    case Hexagon::PS_loadruhabs: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(98304)) << 10;
      Value |= (op & UINT64_C(31744)) << 6;
      Value |= (op & UINT64_C(1022)) << 4;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::J2_callf:
    case Hexagon::J2_callt:
    case Hexagon::J2_jumpf:
    case Hexagon::J2_jumpfnew:
    case Hexagon::J2_jumpfnewpt:
    case Hexagon::J2_jumpfpt:
    case Hexagon::J2_jumpt:
    case Hexagon::J2_jumptnew:
    case Hexagon::J2_jumptnewpt:
    case Hexagon::J2_jumptpt: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(98304)) << 7;
      Value |= (op & UINT64_C(31744)) << 6;
      Value |= (op & UINT64_C(512)) << 4;
      Value |= (op & UINT64_C(508)) >> 1;
      // op: Pu4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::V6_vwhist128qm: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 8;
      Value |= op;
      // op: Qv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 22;
      Value |= op;
      break;
    }
    case Hexagon::SL2_loadri_sp: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(124);
      op <<= 2;
      Value |= op;
      // op: Rd16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case Hexagon::S4_storeirh_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(126);
      op <<= 6;
      Value |= op;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(128)) << 6;
      Value |= (op & UINT64_C(127));
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L4_iadd_memoph_io:
    case Hexagon::L4_iand_memoph_io:
    case Hexagon::L4_ior_memoph_io:
    case Hexagon::L4_isub_memoph_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(126);
      op <<= 6;
      Value |= op;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L4_add_memoph_io:
    case Hexagon::L4_and_memoph_io:
    case Hexagon::L4_or_memoph_io:
    case Hexagon::L4_sub_memoph_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(126);
      op <<= 6;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::SS2_storeh_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(14);
      op <<= 7;
      Value |= op;
      // op: Rs16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      // op: Rt16
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case Hexagon::SS2_storebi0:
    case Hexagon::SS2_storebi1: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      // op: Rs16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      break;
    }
    case Hexagon::SS1_storeb_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 8;
      Value |= op;
      // op: Rs16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      // op: Rt16
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case Hexagon::Y2_dcfetchbo: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(16376);
      op >>= 3;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::SL2_loadrd_sp: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(248);
      Value |= op;
      // op: Rdd8
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      Value |= op;
      break;
    }
    case Hexagon::SA1_addsp: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(252);
      op <<= 2;
      Value |= op;
      // op: Rd16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case Hexagon::S4_storeiri_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(252);
      op <<= 5;
      Value |= op;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(128)) << 6;
      Value |= (op & UINT64_C(127));
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L4_iadd_memopw_io:
    case Hexagon::L4_iand_memopw_io:
    case Hexagon::L4_ior_memopw_io:
    case Hexagon::L4_isub_memopw_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(252);
      op <<= 5;
      Value |= op;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L4_add_memopw_io:
    case Hexagon::L4_and_memopw_io:
    case Hexagon::L4_or_memopw_io:
    case Hexagon::L4_sub_memopw_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(252);
      op <<= 5;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A2_combineii: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 5;
      Value |= op;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(254)) << 15;
      Value |= (op & UINT64_C(1)) << 13;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A4_combineii: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 5;
      Value |= op;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(62)) << 15;
      Value |= (op & UINT64_C(1)) << 13;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A4_combineir: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 5;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::SA1_cmpeqi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: Rs16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      break;
    }
    case Hexagon::SA1_combine0i:
    case Hexagon::SA1_combine1i:
    case Hexagon::SA1_combine2i:
    case Hexagon::SA1_combine3i: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Rdd8
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      Value |= op;
      break;
    }
    case Hexagon::S2_mask: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(24)) << 18;
      Value |= (op & UINT64_C(7)) << 5;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::SS1_storew_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(60);
      op <<= 6;
      Value |= op;
      // op: Rs16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      // op: Rt16
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case Hexagon::SS2_storewi0:
    case Hexagon::SS2_storewi1: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(60);
      op >>= 2;
      Value |= op;
      // op: Rs16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      break;
    }
    case Hexagon::SA1_seti: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 4;
      Value |= op;
      // op: Rd16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case Hexagon::S4_storeirb_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 7;
      Value |= op;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(128)) << 6;
      Value |= (op & UINT64_C(127));
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L4_iadd_memopb_io:
    case Hexagon::L4_iand_memopb_io:
    case Hexagon::L4_ior_memopb_io:
    case Hexagon::L4_isub_memopb_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 7;
      Value |= op;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::C4_addipc: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 7;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::L4_add_memopb_io:
    case Hexagon::L4_and_memopb_io:
    case Hexagon::L4_or_memopb_io:
    case Hexagon::L4_sub_memopb_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 7;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::L2_loadrd_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(12288)) << 13;
      Value |= (op & UINT64_C(4088)) << 2;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_pstorerinewf_io:
    case Hexagon::S2_pstorerinewt_io:
    case Hexagon::S4_pstorerinewfnew_io:
    case Hexagon::S4_pstorerinewtnew_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(128)) << 6;
      Value |= (op & UINT64_C(124)) << 1;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::S2_pstorerif_io:
    case Hexagon::S2_pstorerit_io:
    case Hexagon::S4_pstorerifnew_io:
    case Hexagon::S4_pstoreritnew_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(128)) << 6;
      Value |= (op & UINT64_C(124)) << 1;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::J4_cmpeqn1_f_jumpnv_nt:
    case Hexagon::J4_cmpeqn1_f_jumpnv_t:
    case Hexagon::J4_cmpeqn1_t_jumpnv_nt:
    case Hexagon::J4_cmpeqn1_t_jumpnv_t:
    case Hexagon::J4_cmpgtn1_f_jumpnv_nt:
    case Hexagon::J4_cmpgtn1_f_jumpnv_t:
    case Hexagon::J4_cmpgtn1_t_jumpnv_nt:
    case Hexagon::J4_cmpgtn1_t_jumpnv_t: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 11;
      Value |= (op & UINT64_C(508)) >> 1;
      // op: Ns8
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::J4_cmpeq_f_jumpnv_nt:
    case Hexagon::J4_cmpeq_f_jumpnv_t:
    case Hexagon::J4_cmpeq_t_jumpnv_nt:
    case Hexagon::J4_cmpeq_t_jumpnv_t:
    case Hexagon::J4_cmpgt_f_jumpnv_nt:
    case Hexagon::J4_cmpgt_f_jumpnv_t:
    case Hexagon::J4_cmpgt_t_jumpnv_nt:
    case Hexagon::J4_cmpgt_t_jumpnv_t:
    case Hexagon::J4_cmpgtu_f_jumpnv_nt:
    case Hexagon::J4_cmpgtu_f_jumpnv_t:
    case Hexagon::J4_cmpgtu_t_jumpnv_nt:
    case Hexagon::J4_cmpgtu_t_jumpnv_t: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 11;
      Value |= (op & UINT64_C(508)) >> 1;
      // op: Ns8
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::J4_cmpeqn1_fp0_jump_nt:
    case Hexagon::J4_cmpeqn1_fp0_jump_t:
    case Hexagon::J4_cmpeqn1_fp1_jump_nt:
    case Hexagon::J4_cmpeqn1_fp1_jump_t:
    case Hexagon::J4_cmpeqn1_tp0_jump_nt:
    case Hexagon::J4_cmpeqn1_tp0_jump_t:
    case Hexagon::J4_cmpeqn1_tp1_jump_nt:
    case Hexagon::J4_cmpeqn1_tp1_jump_t:
    case Hexagon::J4_cmpgtn1_fp0_jump_nt:
    case Hexagon::J4_cmpgtn1_fp0_jump_t:
    case Hexagon::J4_cmpgtn1_fp1_jump_nt:
    case Hexagon::J4_cmpgtn1_fp1_jump_t:
    case Hexagon::J4_cmpgtn1_tp0_jump_nt:
    case Hexagon::J4_cmpgtn1_tp0_jump_t:
    case Hexagon::J4_cmpgtn1_tp1_jump_nt:
    case Hexagon::J4_cmpgtn1_tp1_jump_t: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 11;
      Value |= (op & UINT64_C(508)) >> 1;
      // op: Rs16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::J4_cmpeq_fp0_jump_nt:
    case Hexagon::J4_cmpeq_fp0_jump_t:
    case Hexagon::J4_cmpeq_fp1_jump_nt:
    case Hexagon::J4_cmpeq_fp1_jump_t:
    case Hexagon::J4_cmpeq_tp0_jump_nt:
    case Hexagon::J4_cmpeq_tp0_jump_t:
    case Hexagon::J4_cmpeq_tp1_jump_nt:
    case Hexagon::J4_cmpeq_tp1_jump_t:
    case Hexagon::J4_cmpgt_fp0_jump_nt:
    case Hexagon::J4_cmpgt_fp0_jump_t:
    case Hexagon::J4_cmpgt_fp1_jump_nt:
    case Hexagon::J4_cmpgt_fp1_jump_t:
    case Hexagon::J4_cmpgt_tp0_jump_nt:
    case Hexagon::J4_cmpgt_tp0_jump_t:
    case Hexagon::J4_cmpgt_tp1_jump_nt:
    case Hexagon::J4_cmpgt_tp1_jump_t:
    case Hexagon::J4_cmpgtu_fp0_jump_nt:
    case Hexagon::J4_cmpgtu_fp0_jump_t:
    case Hexagon::J4_cmpgtu_fp1_jump_nt:
    case Hexagon::J4_cmpgtu_fp1_jump_t:
    case Hexagon::J4_cmpgtu_tp0_jump_nt:
    case Hexagon::J4_cmpgtu_tp0_jump_t:
    case Hexagon::J4_cmpgtu_tp1_jump_nt:
    case Hexagon::J4_cmpgtu_tp1_jump_t: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 11;
      Value |= (op & UINT64_C(508)) >> 1;
      // op: Rs16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 16;
      Value |= op;
      // op: Rt16
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::J4_jumpsetr: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 11;
      Value |= (op & UINT64_C(508)) >> 1;
      // op: Rs16
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 16;
      Value |= op;
      // op: Rd16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::J4_cmplt_f_jumpnv_nt:
    case Hexagon::J4_cmplt_f_jumpnv_t:
    case Hexagon::J4_cmplt_t_jumpnv_nt:
    case Hexagon::J4_cmplt_t_jumpnv_t:
    case Hexagon::J4_cmpltu_f_jumpnv_nt:
    case Hexagon::J4_cmpltu_f_jumpnv_t:
    case Hexagon::J4_cmpltu_t_jumpnv_nt:
    case Hexagon::J4_cmpltu_t_jumpnv_t: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 11;
      Value |= (op & UINT64_C(508)) >> 1;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Ns8
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadrb_io:
    case Hexagon::L2_loadrub_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 16;
      Value |= (op & UINT64_C(511)) << 5;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::M4_mpyri_addr_u2: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(192)) << 15;
      Value |= (op & UINT64_C(32)) << 8;
      Value |= (op & UINT64_C(28)) << 3;
      // op: Ru32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::L4_loadbsw2_ur:
    case Hexagon::L4_loadbzw2_ur:
    case Hexagon::L4_loadrb_ur:
    case Hexagon::L4_loadrh_ur:
    case Hexagon::L4_loadri_ur:
    case Hexagon::L4_loadrub_ur:
    case Hexagon::L4_loadruh_ur: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(2)) << 12;
      Value |= (op & UINT64_C(1)) << 7;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(60)) << 6;
      Value |= (op & UINT64_C(3)) << 5;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::L4_loadbsw4_ur:
    case Hexagon::L4_loadbzw4_ur:
    case Hexagon::L4_loadrd_ur: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(2)) << 12;
      Value |= (op & UINT64_C(1)) << 7;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(60)) << 6;
      Value |= (op & UINT64_C(3)) << 5;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S4_storerbnew_rr:
    case Hexagon::S4_storerhnew_rr:
    case Hexagon::S4_storerinew_rr: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(2)) << 12;
      Value |= (op & UINT64_C(1)) << 7;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Ru32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      Value |= op;
      break;
    }
    case Hexagon::S4_storerb_rr:
    case Hexagon::S4_storerf_rr:
    case Hexagon::S4_storerh_rr:
    case Hexagon::S4_storeri_rr: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(2)) << 12;
      Value |= (op & UINT64_C(1)) << 7;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Ru32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S4_storerd_rr: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(2)) << 12;
      Value |= (op & UINT64_C(1)) << 7;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Ru32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::J2_trap1: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(248)) << 5;
      Value |= (op & UINT64_C(7)) << 2;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S2_pstorerdf_io:
    case Hexagon::S2_pstorerdt_io:
    case Hexagon::S4_pstorerdfnew_io:
    case Hexagon::S4_pstorerdtnew_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(256)) << 5;
      Value |= (op & UINT64_C(248));
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadbsw2_io:
    case Hexagon::L2_loadbzw2_io:
    case Hexagon::L2_loadrh_io:
    case Hexagon::L2_loadruh_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(3072)) << 15;
      Value |= (op & UINT64_C(1022)) << 4;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_pstorerbnewf_io:
    case Hexagon::S2_pstorerbnewt_io:
    case Hexagon::S4_pstorerbnewfnew_io:
    case Hexagon::S4_pstorerbnewtnew_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(32)) << 8;
      Value |= (op & UINT64_C(31)) << 3;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::S2_pstorerbf_io:
    case Hexagon::S2_pstorerbt_io:
    case Hexagon::S4_pstorerbfnew_io:
    case Hexagon::S4_pstorerbtnew_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(32)) << 8;
      Value |= (op & UINT64_C(31)) << 3;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::C2_cmoveif:
    case Hexagon::C2_cmoveit:
    case Hexagon::C2_cmovenewif:
    case Hexagon::C2_cmovenewit: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(3840)) << 8;
      Value |= (op & UINT64_C(255)) << 5;
      // op: Pu4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 21;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S4_subaddi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(48)) << 17;
      Value |= (op & UINT64_C(8)) << 10;
      Value |= (op & UINT64_C(7)) << 5;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Ru32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::A2_tfrih:
    case Hexagon::A2_tfril: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(49152)) << 8;
      Value |= (op & UINT64_C(16383));
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::C2_cmpeqi:
    case Hexagon::C2_cmpgti:
    case Hexagon::C4_cmpltei:
    case Hexagon::C4_cmpneqi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(512)) << 12;
      Value |= (op & UINT64_C(511)) << 5;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Pd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::A2_andir:
    case Hexagon::A2_orir: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(512)) << 12;
      Value |= (op & UINT64_C(511)) << 5;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::L2_loadri_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(6144)) << 14;
      Value |= (op & UINT64_C(2044)) << 3;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::L2_loadbsw4_io:
    case Hexagon::L2_loadbzw4_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(6144)) << 14;
      Value |= (op & UINT64_C(2044)) << 3;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::L4_ploadrbf_abs:
    case Hexagon::L4_ploadrbfnew_abs:
    case Hexagon::L4_ploadrbt_abs:
    case Hexagon::L4_ploadrbtnew_abs:
    case Hexagon::L4_ploadrhf_abs:
    case Hexagon::L4_ploadrhfnew_abs:
    case Hexagon::L4_ploadrht_abs:
    case Hexagon::L4_ploadrhtnew_abs:
    case Hexagon::L4_ploadrif_abs:
    case Hexagon::L4_ploadrifnew_abs:
    case Hexagon::L4_ploadrit_abs:
    case Hexagon::L4_ploadritnew_abs:
    case Hexagon::L4_ploadrubf_abs:
    case Hexagon::L4_ploadrubfnew_abs:
    case Hexagon::L4_ploadrubt_abs:
    case Hexagon::L4_ploadrubtnew_abs:
    case Hexagon::L4_ploadruhf_abs:
    case Hexagon::L4_ploadruhfnew_abs:
    case Hexagon::L4_ploadruht_abs:
    case Hexagon::L4_ploadruhtnew_abs: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(62)) << 15;
      Value |= (op & UINT64_C(1)) << 8;
      // op: Pt4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 9;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::L4_ploadrdf_abs:
    case Hexagon::L4_ploadrdfnew_abs:
    case Hexagon::L4_ploadrdt_abs:
    case Hexagon::L4_ploadrdtnew_abs: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(62)) << 15;
      Value |= (op & UINT64_C(1)) << 8;
      // op: Pt4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 9;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_pstorerhnewf_io:
    case Hexagon::S2_pstorerhnewt_io:
    case Hexagon::S4_pstorerhnewfnew_io:
    case Hexagon::S4_pstorerhnewtnew_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(64)) << 7;
      Value |= (op & UINT64_C(62)) << 2;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::S2_pstorerff_io:
    case Hexagon::S2_pstorerft_io:
    case Hexagon::S2_pstorerhf_io:
    case Hexagon::S2_pstorerht_io:
    case Hexagon::S4_pstorerffnew_io:
    case Hexagon::S4_pstorerftnew_io:
    case Hexagon::S4_pstorerhfnew_io:
    case Hexagon::S4_pstorerhtnew_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(64)) << 7;
      Value |= (op & UINT64_C(62)) << 2;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::A2_addi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(65024)) << 12;
      Value |= (op & UINT64_C(511)) << 5;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_zLd_pred_ai: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(8)) << 10;
      Value |= (op & UINT64_C(7)) << 8;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::V6_vS32b_new_npred_ai:
    case Hexagon::V6_vS32b_new_pred_ai:
    case Hexagon::V6_vS32b_nt_new_npred_ai:
    case Hexagon::V6_vS32b_nt_new_pred_ai: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(8)) << 10;
      Value |= (op & UINT64_C(7)) << 8;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Os8
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      Value |= op;
      break;
    }
    case Hexagon::V6_vS32Ub_npred_ai:
    case Hexagon::V6_vS32Ub_pred_ai:
    case Hexagon::V6_vS32b_npred_ai:
    case Hexagon::V6_vS32b_nt_npred_ai:
    case Hexagon::V6_vS32b_nt_pred_ai:
    case Hexagon::V6_vS32b_pred_ai: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(8)) << 10;
      Value |= (op & UINT64_C(7)) << 8;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vs32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vS32b_nqpred_ai:
    case Hexagon::V6_vS32b_nt_nqpred_ai:
    case Hexagon::V6_vS32b_nt_qpred_ai:
    case Hexagon::V6_vS32b_qpred_ai: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(8)) << 10;
      Value |= (op & UINT64_C(7)) << 8;
      // op: Qv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vs32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vL32Ub_ai:
    case Hexagon::V6_vL32b_ai:
    case Hexagon::V6_vL32b_cur_ai:
    case Hexagon::V6_vL32b_nt_ai:
    case Hexagon::V6_vL32b_nt_cur_ai:
    case Hexagon::V6_vL32b_nt_tmp_ai:
    case Hexagon::V6_vL32b_tmp_ai: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(8)) << 10;
      Value |= (op & UINT64_C(7)) << 8;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_storerd_pci: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(120);
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S2_storerd_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(120);
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S4_storeirhf_io:
    case Hexagon::S4_storeirhfnew_io:
    case Hexagon::S4_storeirht_io:
    case Hexagon::S4_storeirhtnew_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(126);
      op <<= 6;
      Value |= op;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(32)) << 8;
      Value |= (op & UINT64_C(31));
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::SA1_addi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 4;
      Value |= op;
      // op: Rx16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case Hexagon::A4_cmpbgtui:
    case Hexagon::A4_cmphgtui: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 5;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Pd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::A4_vcmpbgtui:
    case Hexagon::A4_vcmphgtui:
    case Hexagon::A4_vcmpwgtui: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 5;
      Value |= op;
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Pd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::SL2_loadrh_io:
    case Hexagon::SL2_loadruh_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(14);
      op <<= 7;
      Value |= op;
      // op: Rs16
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      // op: Rd16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case Hexagon::S2_storerbnew_pci: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 3;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S2_storerb_pci: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 3;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S2_storerbnew_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 3;
      Value |= op;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S2_storerb_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 3;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::SL1_loadrub_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 8;
      Value |= op;
      // op: Rs16
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      // op: Rd16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case Hexagon::S5_asrhub_rnd_sat:
    case Hexagon::S5_asrhub_sat: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 8;
      Value |= op;
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_asl_i_vh:
    case Hexagon::S2_asr_i_vh:
    case Hexagon::S2_lsr_i_vh:
    case Hexagon::S5_vasrhrnd: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 8;
      Value |= op;
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_allocframe: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(16376);
      op >>= 3;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S4_storeirif_io:
    case Hexagon::S4_storeirifnew_io:
    case Hexagon::S4_storeirit_io:
    case Hexagon::S4_storeiritnew_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(252);
      op <<= 5;
      Value |= op;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(32)) << 8;
      Value |= (op & UINT64_C(31));
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::C2_muxii: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 5;
      Value |= op;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(254)) << 15;
      Value |= (op & UINT64_C(1)) << 13;
      // op: Pu4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 23;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::C2_muxri: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 5;
      Value |= op;
      // op: Pu4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 21;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A4_cmpbeqi:
    case Hexagon::A4_cmpbgti:
    case Hexagon::A4_cmpheqi:
    case Hexagon::A4_cmphgti: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 5;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Pd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::A4_rcmpeqi:
    case Hexagon::A4_rcmpneqi:
    case Hexagon::M2_mpysin:
    case Hexagon::M2_mpysip: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 5;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A4_combineri: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 5;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A4_vcmpbeqi:
    case Hexagon::A4_vcmpbgti:
    case Hexagon::A4_vcmpheqi:
    case Hexagon::A4_vcmphgti:
    case Hexagon::A4_vcmpweqi:
    case Hexagon::A4_vcmpwgti: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 5;
      Value |= op;
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Pd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::S2_storerhnew_pci: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(30);
      op <<= 2;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S2_storerf_pci:
    case Hexagon::S2_storerh_pci: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(30);
      op <<= 2;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S2_storerhnew_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(30);
      op <<= 2;
      Value |= op;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S2_storerf_pi:
    case Hexagon::S2_storerh_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(30);
      op <<= 2;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::F2_dfclass: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 5;
      Value |= op;
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Pd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::S2_extractu:
    case Hexagon::S4_extract: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(24)) << 18;
      Value |= (op & UINT64_C(7)) << 5;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::F2_sfclass:
    case Hexagon::S2_tstbit_i:
    case Hexagon::S4_ntstbit_i: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Pd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::A4_cround_ri:
    case Hexagon::A4_round_ri:
    case Hexagon::A4_round_ri_sat:
    case Hexagon::S2_asl_i_r:
    case Hexagon::S2_asl_i_r_sat:
    case Hexagon::S2_asr_i_r:
    case Hexagon::S2_asr_i_r_rnd:
    case Hexagon::S2_clrbit_i:
    case Hexagon::S2_lsr_i_r:
    case Hexagon::S2_setbit_i:
    case Hexagon::S2_togglebit_i:
    case Hexagon::S6_rol_i_r: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A4_bitspliti: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_asr_i_svw_trun: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_asl_i_vw:
    case Hexagon::S2_asr_i_vw:
    case Hexagon::S2_lsr_i_vw: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::C2_cmpgtui:
    case Hexagon::C4_cmplteui: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(511);
      op <<= 5;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Pd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::S2_storerinew_pci: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(60);
      op <<= 1;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S2_storeri_pci: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(60);
      op <<= 1;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S2_storerinew_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(60);
      op <<= 1;
      Value |= op;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S2_storeri_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(60);
      op <<= 1;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::SL1_loadri_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(60);
      op <<= 6;
      Value |= op;
      // op: Rs16
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      // op: Rd16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case Hexagon::S4_storeirbf_io:
    case Hexagon::S4_storeirbfnew_io:
    case Hexagon::S4_storeirbt_io:
    case Hexagon::S4_storeirbtnew_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 7;
      Value |= op;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(32)) << 8;
      Value |= (op & UINT64_C(31));
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S2_extractup:
    case Hexagon::S4_extractp: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 8;
      Value |= op;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(56)) << 18;
      Value |= (op & UINT64_C(7)) << 5;
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::C2_bitsclri:
    case Hexagon::C4_nbitsclri: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 8;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Pd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::S4_clbaddi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 8;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S4_clbpaddi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 8;
      Value |= op;
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_asl_i_p:
    case Hexagon::S2_asr_i_p:
    case Hexagon::S2_asr_i_p_rnd:
    case Hexagon::S2_lsr_i_p:
    case Hexagon::S6_rol_i_p: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 8;
      Value |= op;
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vS32b_new_pi:
    case Hexagon::V6_vS32b_nt_new_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      // op: Os8
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::SL2_loadrb_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      // op: Rs16
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      // op: Rd16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case Hexagon::V6_vS32b_srls_pi:
    case Hexagon::V6_zLd_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::V6_vS32Ub_pi:
    case Hexagon::V6_vS32b_nt_pi:
    case Hexagon::V6_vS32b_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      // op: Vs32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadalignb_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 16;
      Value |= (op & UINT64_C(511)) << 5;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Ryy32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S4_vrcrotate: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(2)) << 12;
      Value |= (op & UINT64_C(1)) << 5;
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::L4_loadalignb_ur:
    case Hexagon::L4_loadalignh_ur: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(2)) << 12;
      Value |= (op & UINT64_C(1)) << 7;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(60)) << 6;
      Value |= (op & UINT64_C(3)) << 5;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Ryy32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S4_pstorerbnewf_rr:
    case Hexagon::S4_pstorerbnewfnew_rr:
    case Hexagon::S4_pstorerbnewt_rr:
    case Hexagon::S4_pstorerbnewtnew_rr:
    case Hexagon::S4_pstorerhnewf_rr:
    case Hexagon::S4_pstorerhnewfnew_rr:
    case Hexagon::S4_pstorerhnewt_rr:
    case Hexagon::S4_pstorerhnewtnew_rr:
    case Hexagon::S4_pstorerinewf_rr:
    case Hexagon::S4_pstorerinewfnew_rr:
    case Hexagon::S4_pstorerinewt_rr:
    case Hexagon::S4_pstorerinewtnew_rr: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(2)) << 12;
      Value |= (op & UINT64_C(1)) << 7;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Ru32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(7);
      Value |= op;
      break;
    }
    case Hexagon::S4_pstorerbf_rr:
    case Hexagon::S4_pstorerbfnew_rr:
    case Hexagon::S4_pstorerbt_rr:
    case Hexagon::S4_pstorerbtnew_rr:
    case Hexagon::S4_pstorerff_rr:
    case Hexagon::S4_pstorerffnew_rr:
    case Hexagon::S4_pstorerft_rr:
    case Hexagon::S4_pstorerftnew_rr:
    case Hexagon::S4_pstorerhf_rr:
    case Hexagon::S4_pstorerhfnew_rr:
    case Hexagon::S4_pstorerht_rr:
    case Hexagon::S4_pstorerhtnew_rr:
    case Hexagon::S4_pstorerif_rr:
    case Hexagon::S4_pstorerifnew_rr:
    case Hexagon::S4_pstorerit_rr:
    case Hexagon::S4_pstoreritnew_rr: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(2)) << 12;
      Value |= (op & UINT64_C(1)) << 7;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Ru32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S4_pstorerdf_rr:
    case Hexagon::S4_pstorerdfnew_rr:
    case Hexagon::S4_pstorerdt_rr:
    case Hexagon::S4_pstorerdtnew_rr: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(2)) << 12;
      Value |= (op & UINT64_C(1)) << 7;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Ru32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::L4_loadrb_rr:
    case Hexagon::L4_loadrh_rr:
    case Hexagon::L4_loadri_rr:
    case Hexagon::L4_loadrub_rr:
    case Hexagon::L4_loadruh_rr: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(2)) << 12;
      Value |= (op & UINT64_C(1)) << 7;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::L4_loadrd_rr: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(2)) << 12;
      Value |= (op & UINT64_C(1)) << 7;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::L2_loadalignh_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(3072)) << 15;
      Value |= (op & UINT64_C(1022)) << 4;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Ryy32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S4_addaddi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(48)) << 17;
      Value |= (op & UINT64_C(8)) << 10;
      Value |= (op & UINT64_C(7)) << 5;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Ru32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::M4_mpyri_addr: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(48)) << 17;
      Value |= (op & UINT64_C(8)) << 10;
      Value |= (op & UINT64_C(7)) << 5;
      // op: Ru32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::S4_or_andi:
    case Hexagon::S4_or_ori: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(512)) << 12;
      Value |= (op & UINT64_C(511)) << 5;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S4_or_andix: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(512)) << 12;
      Value |= (op & UINT64_C(511)) << 5;
      // op: Ru32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::V6_vL32b_cur_npred_ai:
    case Hexagon::V6_vL32b_cur_pred_ai:
    case Hexagon::V6_vL32b_npred_ai:
    case Hexagon::V6_vL32b_nt_cur_npred_ai:
    case Hexagon::V6_vL32b_nt_cur_pred_ai:
    case Hexagon::V6_vL32b_nt_npred_ai:
    case Hexagon::V6_vL32b_nt_pred_ai:
    case Hexagon::V6_vL32b_nt_tmp_npred_ai:
    case Hexagon::V6_vL32b_nt_tmp_pred_ai:
    case Hexagon::V6_vL32b_pred_ai:
    case Hexagon::V6_vL32b_tmp_npred_ai:
    case Hexagon::V6_vL32b_tmp_pred_ai: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(8)) << 10;
      Value |= (op & UINT64_C(7)) << 8;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_tableidxb:
    case Hexagon::S2_tableidxd:
    case Hexagon::S2_tableidxh:
    case Hexagon::S2_tableidxw: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(8)) << 18;
      Value |= (op & UINT64_C(7)) << 5;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 8;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vrmpybusi:
    case Hexagon::V6_vrmpyubi:
    case Hexagon::V6_vrsadubi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 5;
      Value |= op;
      // op: Vuu32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_pstorerdf_pi:
    case Hexagon::S2_pstorerdfnew_pi:
    case Hexagon::S2_pstorerdt_pi:
    case Hexagon::S2_pstorerdtnew_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(120);
      Value |= op;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadrd_pci: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(120);
      op <<= 2;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadrd_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(120);
      op <<= 2;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_ploadrhf_io:
    case Hexagon::L2_ploadrhfnew_io:
    case Hexagon::L2_ploadrht_io:
    case Hexagon::L2_ploadrhtnew_io:
    case Hexagon::L2_ploadruhf_io:
    case Hexagon::L2_ploadruhfnew_io:
    case Hexagon::L2_ploadruht_io:
    case Hexagon::L2_ploadruhtnew_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(126);
      op <<= 4;
      Value |= op;
      // op: Pt4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_pstorerbnewf_pi:
    case Hexagon::S2_pstorerbnewfnew_pi:
    case Hexagon::S2_pstorerbnewt_pi:
    case Hexagon::S2_pstorerbnewtnew_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 3;
      Value |= op;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S2_pstorerbf_pi:
    case Hexagon::S2_pstorerbfnew_pi:
    case Hexagon::S2_pstorerbt_pi:
    case Hexagon::S2_pstorerbtnew_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 3;
      Value |= op;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadrb_pci:
    case Hexagon::L2_loadrub_pci: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 5;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadrb_pi:
    case Hexagon::L2_loadrub_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 5;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_ploadrif_io:
    case Hexagon::L2_ploadrifnew_io:
    case Hexagon::L2_ploadrit_io:
    case Hexagon::L2_ploadritnew_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(252);
      op <<= 3;
      Value |= op;
      // op: Pt4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A2_paddif:
    case Hexagon::A2_paddifnew:
    case Hexagon::A2_paddit:
    case Hexagon::A2_padditnew:
    case Hexagon::C2_muxir: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 5;
      Value |= op;
      // op: Pu4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 21;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::M2_accii:
    case Hexagon::M2_macsin:
    case Hexagon::M2_macsip:
    case Hexagon::M2_naccii: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 5;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_pstorerhnewf_pi:
    case Hexagon::S2_pstorerhnewfnew_pi:
    case Hexagon::S2_pstorerhnewt_pi:
    case Hexagon::S2_pstorerhnewtnew_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(30);
      op <<= 2;
      Value |= op;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S2_pstorerff_pi:
    case Hexagon::S2_pstorerffnew_pi:
    case Hexagon::S2_pstorerft_pi:
    case Hexagon::S2_pstorerftnew_pi:
    case Hexagon::S2_pstorerhf_pi:
    case Hexagon::S2_pstorerhfnew_pi:
    case Hexagon::S2_pstorerht_pi:
    case Hexagon::S2_pstorerhtnew_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(30);
      op <<= 2;
      Value |= op;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadbsw2_pci:
    case Hexagon::L2_loadbzw2_pci:
    case Hexagon::L2_loadrh_pci:
    case Hexagon::L2_loadruh_pci: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(30);
      op <<= 4;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadbsw2_pi:
    case Hexagon::L2_loadbzw2_pi:
    case Hexagon::L2_loadrh_pi:
    case Hexagon::L2_loadruh_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(30);
      op <<= 4;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S2_insert: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(24)) << 18;
      Value |= (op & UINT64_C(7)) << 5;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_asl_i_r_acc:
    case Hexagon::S2_asl_i_r_and:
    case Hexagon::S2_asl_i_r_nac:
    case Hexagon::S2_asl_i_r_or:
    case Hexagon::S2_asl_i_r_xacc:
    case Hexagon::S2_asr_i_r_acc:
    case Hexagon::S2_asr_i_r_and:
    case Hexagon::S2_asr_i_r_nac:
    case Hexagon::S2_asr_i_r_or:
    case Hexagon::S2_lsr_i_r_acc:
    case Hexagon::S2_lsr_i_r_and:
    case Hexagon::S2_lsr_i_r_nac:
    case Hexagon::S2_lsr_i_r_or:
    case Hexagon::S2_lsr_i_r_xacc:
    case Hexagon::S6_rol_i_r_acc:
    case Hexagon::S6_rol_i_r_and:
    case Hexagon::S6_rol_i_r_nac:
    case Hexagon::S6_rol_i_r_or:
    case Hexagon::S6_rol_i_r_xacc: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::L2_ploadrdf_io:
    case Hexagon::L2_ploadrdfnew_io:
    case Hexagon::L2_ploadrdt_io:
    case Hexagon::L2_ploadrdtnew_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(504);
      op <<= 2;
      Value |= op;
      // op: Pt4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_pstorerinewf_pi:
    case Hexagon::S2_pstorerinewfnew_pi:
    case Hexagon::S2_pstorerinewt_pi:
    case Hexagon::S2_pstorerinewtnew_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(60);
      op <<= 1;
      Value |= op;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S2_pstorerif_pi:
    case Hexagon::S2_pstorerifnew_pi:
    case Hexagon::S2_pstorerit_pi:
    case Hexagon::S2_pstoreritnew_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(60);
      op <<= 1;
      Value |= op;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadri_pci: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(60);
      op <<= 3;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadbsw4_pci:
    case Hexagon::L2_loadbzw4_pci: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(60);
      op <<= 3;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadri_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(60);
      op <<= 3;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadbsw4_pi:
    case Hexagon::L2_loadbzw4_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(60);
      op <<= 3;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_ploadrbf_io:
    case Hexagon::L2_ploadrbfnew_io:
    case Hexagon::L2_ploadrbt_io:
    case Hexagon::L2_ploadrbtnew_io:
    case Hexagon::L2_ploadrubf_io:
    case Hexagon::L2_ploadrubfnew_io:
    case Hexagon::L2_ploadrubt_io:
    case Hexagon::L2_ploadrubtnew_io: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 5;
      Value |= op;
      // op: Pt4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_insertp: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 8;
      Value |= op;
      // op: II
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(56)) << 18;
      Value |= (op & UINT64_C(7)) << 5;
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rxx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_asl_i_p_acc:
    case Hexagon::S2_asl_i_p_and:
    case Hexagon::S2_asl_i_p_nac:
    case Hexagon::S2_asl_i_p_or:
    case Hexagon::S2_asl_i_p_xacc:
    case Hexagon::S2_asr_i_p_acc:
    case Hexagon::S2_asr_i_p_and:
    case Hexagon::S2_asr_i_p_nac:
    case Hexagon::S2_asr_i_p_or:
    case Hexagon::S2_lsr_i_p_acc:
    case Hexagon::S2_lsr_i_p_and:
    case Hexagon::S2_lsr_i_p_nac:
    case Hexagon::S2_lsr_i_p_or:
    case Hexagon::S2_lsr_i_p_xacc:
    case Hexagon::S6_rol_i_p_acc:
    case Hexagon::S6_rol_i_p_and:
    case Hexagon::S6_rol_i_p_nac:
    case Hexagon::S6_rol_i_p_or:
    case Hexagon::S6_rol_i_p_xacc: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 8;
      Value |= op;
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rxx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_vspliceib: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 5;
      Value |= op;
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_addasl_rrri: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 5;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_valignib: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 5;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_valignbi:
    case Hexagon::V6_vlalignbi:
    case Hexagon::V6_vlutvvbi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 5;
      Value |= op;
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vlutvwhi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 5;
      Value |= op;
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vS32b_new_npred_pi:
    case Hexagon::V6_vS32b_new_pred_pi:
    case Hexagon::V6_vS32b_nt_new_npred_pi:
    case Hexagon::V6_vS32b_nt_new_pred_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: Os8
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(7);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::V6_zLd_pred_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::V6_vS32Ub_npred_pi:
    case Hexagon::V6_vS32Ub_pred_pi:
    case Hexagon::V6_vS32b_npred_pi:
    case Hexagon::V6_vS32b_nt_npred_pi:
    case Hexagon::V6_vS32b_nt_pred_pi:
    case Hexagon::V6_vS32b_pred_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: Vs32
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::V6_vS32b_nqpred_pi:
    case Hexagon::V6_vS32b_nt_nqpred_pi:
    case Hexagon::V6_vS32b_nt_qpred_pi:
    case Hexagon::V6_vS32b_qpred_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      // op: Qv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: Vs32
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::V6_vL32Ub_pi:
    case Hexagon::V6_vL32b_cur_pi:
    case Hexagon::V6_vL32b_nt_cur_pi:
    case Hexagon::V6_vL32b_nt_pi:
    case Hexagon::V6_vL32b_nt_tmp_pi:
    case Hexagon::V6_vL32b_pi:
    case Hexagon::V6_vL32b_tmp_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S4_vrcrotate_acc: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(2)) << 12;
      Value |= (op & UINT64_C(1)) << 5;
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rxx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::L4_ploadrbf_rr:
    case Hexagon::L4_ploadrbfnew_rr:
    case Hexagon::L4_ploadrbt_rr:
    case Hexagon::L4_ploadrbtnew_rr:
    case Hexagon::L4_ploadrhf_rr:
    case Hexagon::L4_ploadrhfnew_rr:
    case Hexagon::L4_ploadrht_rr:
    case Hexagon::L4_ploadrhtnew_rr:
    case Hexagon::L4_ploadrif_rr:
    case Hexagon::L4_ploadrifnew_rr:
    case Hexagon::L4_ploadrit_rr:
    case Hexagon::L4_ploadritnew_rr:
    case Hexagon::L4_ploadrubf_rr:
    case Hexagon::L4_ploadrubfnew_rr:
    case Hexagon::L4_ploadrubt_rr:
    case Hexagon::L4_ploadrubtnew_rr:
    case Hexagon::L4_ploadruhf_rr:
    case Hexagon::L4_ploadruhfnew_rr:
    case Hexagon::L4_ploadruht_rr:
    case Hexagon::L4_ploadruhtnew_rr: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(2)) << 12;
      Value |= (op & UINT64_C(1)) << 7;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::L4_ploadrdf_rr:
    case Hexagon::L4_ploadrdfnew_rr:
    case Hexagon::L4_ploadrdt_rr:
    case Hexagon::L4_ploadrdtnew_rr: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(2)) << 12;
      Value |= (op & UINT64_C(1)) << 7;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vrmpybusi_acc:
    case Hexagon::V6_vrmpyubi_acc:
    case Hexagon::V6_vrsadubi_acc: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 5;
      Value |= op;
      // op: Vuu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vxx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::L2_ploadrdf_pi:
    case Hexagon::L2_ploadrdfnew_pi:
    case Hexagon::L2_ploadrdt_pi:
    case Hexagon::L2_ploadrdtnew_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(120);
      op <<= 2;
      Value |= op;
      // op: Pt4
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 9;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadalignb_pci: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 5;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Ryy32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_ploadrbf_pi:
    case Hexagon::L2_ploadrbfnew_pi:
    case Hexagon::L2_ploadrbt_pi:
    case Hexagon::L2_ploadrbtnew_pi:
    case Hexagon::L2_ploadrubf_pi:
    case Hexagon::L2_ploadrubfnew_pi:
    case Hexagon::L2_ploadrubt_pi:
    case Hexagon::L2_ploadrubtnew_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 5;
      Value |= op;
      // op: Pt4
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 9;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadalignb_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 5;
      Value |= op;
      // op: Ryy32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadalignh_pci: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(30);
      op <<= 4;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Ryy32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_ploadrhf_pi:
    case Hexagon::L2_ploadrhfnew_pi:
    case Hexagon::L2_ploadrht_pi:
    case Hexagon::L2_ploadrhtnew_pi:
    case Hexagon::L2_ploadruhf_pi:
    case Hexagon::L2_ploadruhfnew_pi:
    case Hexagon::L2_ploadruht_pi:
    case Hexagon::L2_ploadruhtnew_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(30);
      op <<= 4;
      Value |= op;
      // op: Pt4
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 9;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadalignh_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(30);
      op <<= 4;
      Value |= op;
      // op: Ryy32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_ploadrif_pi:
    case Hexagon::L2_ploadrifnew_pi:
    case Hexagon::L2_ploadrit_pi:
    case Hexagon::L2_ploadritnew_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(60);
      op <<= 3;
      Value |= op;
      // op: Pt4
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 9;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::V6_vlutvvb_oracci: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 5;
      Value |= op;
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vlutvwh_oracci: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 5;
      Value |= op;
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vxx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vL32b_cur_npred_pi:
    case Hexagon::V6_vL32b_cur_pred_pi:
    case Hexagon::V6_vL32b_npred_pi:
    case Hexagon::V6_vL32b_nt_cur_npred_pi:
    case Hexagon::V6_vL32b_nt_cur_pred_pi:
    case Hexagon::V6_vL32b_nt_npred_pi:
    case Hexagon::V6_vL32b_nt_pred_pi:
    case Hexagon::V6_vL32b_nt_tmp_npred_pi:
    case Hexagon::V6_vL32b_nt_tmp_pred_pi:
    case Hexagon::V6_vL32b_pred_pi:
    case Hexagon::V6_vL32b_tmp_npred_pi:
    case Hexagon::V6_vL32b_tmp_pred_pi: {
      // op: Ii
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S2_storerbnew_pbr:
    case Hexagon::S2_storerbnew_pcr:
    case Hexagon::S2_storerbnew_pr:
    case Hexagon::S2_storerhnew_pbr:
    case Hexagon::S2_storerhnew_pcr:
    case Hexagon::S2_storerhnew_pr:
    case Hexagon::S2_storerinew_pbr:
    case Hexagon::S2_storerinew_pcr:
    case Hexagon::S2_storerinew_pr: {
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Nt8
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::V6_vS32b_new_ppu:
    case Hexagon::V6_vS32b_nt_new_ppu: {
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Os8
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S2_storerb_pbr:
    case Hexagon::S2_storerb_pcr:
    case Hexagon::S2_storerb_pr:
    case Hexagon::S2_storerf_pbr:
    case Hexagon::S2_storerf_pcr:
    case Hexagon::S2_storerf_pr:
    case Hexagon::S2_storerh_pbr:
    case Hexagon::S2_storerh_pcr:
    case Hexagon::S2_storerh_pr:
    case Hexagon::S2_storeri_pbr:
    case Hexagon::S2_storeri_pcr:
    case Hexagon::S2_storeri_pr: {
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::S2_storerd_pbr:
    case Hexagon::S2_storerd_pcr:
    case Hexagon::S2_storerd_pr: {
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::V6_vS32b_srls_ppu:
    case Hexagon::V6_zLd_ppu: {
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::V6_vS32Ub_ppu:
    case Hexagon::V6_vS32b_nt_ppu:
    case Hexagon::V6_vS32b_ppu: {
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Vs32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadbsw2_pbr:
    case Hexagon::L2_loadbsw2_pcr:
    case Hexagon::L2_loadbsw2_pr:
    case Hexagon::L2_loadbzw2_pbr:
    case Hexagon::L2_loadbzw2_pcr:
    case Hexagon::L2_loadbzw2_pr:
    case Hexagon::L2_loadrb_pbr:
    case Hexagon::L2_loadrb_pcr:
    case Hexagon::L2_loadrb_pr:
    case Hexagon::L2_loadrh_pbr:
    case Hexagon::L2_loadrh_pcr:
    case Hexagon::L2_loadrh_pr:
    case Hexagon::L2_loadri_pbr:
    case Hexagon::L2_loadri_pcr:
    case Hexagon::L2_loadri_pr:
    case Hexagon::L2_loadrub_pbr:
    case Hexagon::L2_loadrub_pcr:
    case Hexagon::L2_loadrub_pr:
    case Hexagon::L2_loadruh_pbr:
    case Hexagon::L2_loadruh_pcr:
    case Hexagon::L2_loadruh_pr: {
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadbsw4_pbr:
    case Hexagon::L2_loadbsw4_pcr:
    case Hexagon::L2_loadbsw4_pr:
    case Hexagon::L2_loadbzw4_pbr:
    case Hexagon::L2_loadbzw4_pcr:
    case Hexagon::L2_loadbzw4_pr:
    case Hexagon::L2_loadrd_pbr:
    case Hexagon::L2_loadrd_pcr:
    case Hexagon::L2_loadrd_pr: {
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::V6_vL32Ub_ppu:
    case Hexagon::V6_vL32b_cur_ppu:
    case Hexagon::V6_vL32b_nt_cur_ppu:
    case Hexagon::V6_vL32b_nt_ppu:
    case Hexagon::V6_vL32b_nt_tmp_ppu:
    case Hexagon::V6_vL32b_ppu:
    case Hexagon::V6_vL32b_tmp_ppu: {
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L2_loadalignb_pbr:
    case Hexagon::L2_loadalignb_pcr:
    case Hexagon::L2_loadalignb_pr:
    case Hexagon::L2_loadalignh_pbr:
    case Hexagon::L2_loadalignh_pcr:
    case Hexagon::L2_loadalignh_pr: {
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Ryy32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::C2_all8:
    case Hexagon::C2_any8:
    case Hexagon::C2_not: {
      // op: Ps4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 16;
      Value |= op;
      // op: Pd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::C2_xor:
    case Hexagon::C4_fastcorner9:
    case Hexagon::C4_fastcorner9_not: {
      // op: Ps4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 16;
      Value |= op;
      // op: Pt4
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 8;
      Value |= op;
      // op: Pd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::C4_and_and:
    case Hexagon::C4_and_andn:
    case Hexagon::C4_and_or:
    case Hexagon::C4_and_orn:
    case Hexagon::C4_or_and:
    case Hexagon::C4_or_andn:
    case Hexagon::C4_or_or:
    case Hexagon::C4_or_orn: {
      // op: Ps4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 16;
      Value |= op;
      // op: Pt4
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 8;
      Value |= op;
      // op: Pu4
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 6;
      Value |= op;
      // op: Pd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::C2_vitpack: {
      // op: Ps4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 16;
      Value |= op;
      // op: Pt4
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 8;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::C2_tfrpr: {
      // op: Ps4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vcmov:
    case Hexagon::V6_vncmov: {
      // op: Ps4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vccombine:
    case Hexagon::V6_vnccombine: {
      // op: Ps4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::C2_and:
    case Hexagon::C2_andn:
    case Hexagon::C2_or:
    case Hexagon::C2_orn: {
      // op: Pt4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 8;
      Value |= op;
      // op: Ps4
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 16;
      Value |= op;
      // op: Pd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::C2_mask: {
      // op: Pt4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 8;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::J2_callrf:
    case Hexagon::J2_callrt:
    case Hexagon::J2_jumprf:
    case Hexagon::J2_jumprfnew:
    case Hexagon::J2_jumprfnewpt:
    case Hexagon::J2_jumprfpt:
    case Hexagon::J2_jumprt:
    case Hexagon::J2_jumprtnew:
    case Hexagon::J2_jumprtnewpt:
    case Hexagon::J2_jumprtpt: {
      // op: Pu4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 8;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::A2_paddf:
    case Hexagon::A2_paddfnew:
    case Hexagon::A2_paddt:
    case Hexagon::A2_paddtnew:
    case Hexagon::A2_pandf:
    case Hexagon::A2_pandfnew:
    case Hexagon::A2_pandt:
    case Hexagon::A2_pandtnew:
    case Hexagon::A2_porf:
    case Hexagon::A2_porfnew:
    case Hexagon::A2_port:
    case Hexagon::A2_portnew:
    case Hexagon::A2_pxorf:
    case Hexagon::A2_pxorfnew:
    case Hexagon::A2_pxort:
    case Hexagon::A2_pxortnew:
    case Hexagon::C2_mux: {
      // op: Pu4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::C2_ccombinewf:
    case Hexagon::C2_ccombinewnewf:
    case Hexagon::C2_ccombinewnewt:
    case Hexagon::C2_ccombinewt: {
      // op: Pu4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::C2_vmux: {
      // op: Pu4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A2_psubf:
    case Hexagon::A2_psubfnew:
    case Hexagon::A2_psubt:
    case Hexagon::A2_psubtnew: {
      // op: Pu4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A4_paslhf:
    case Hexagon::A4_paslhfnew:
    case Hexagon::A4_paslht:
    case Hexagon::A4_paslhtnew:
    case Hexagon::A4_pasrhf:
    case Hexagon::A4_pasrhfnew:
    case Hexagon::A4_pasrht:
    case Hexagon::A4_pasrhtnew:
    case Hexagon::A4_psxtbf:
    case Hexagon::A4_psxtbfnew:
    case Hexagon::A4_psxtbt:
    case Hexagon::A4_psxtbtnew:
    case Hexagon::A4_psxthf:
    case Hexagon::A4_psxthfnew:
    case Hexagon::A4_psxtht:
    case Hexagon::A4_psxthtnew:
    case Hexagon::A4_pzxtbf:
    case Hexagon::A4_pzxtbfnew:
    case Hexagon::A4_pzxtbt:
    case Hexagon::A4_pzxtbtnew:
    case Hexagon::A4_pzxthf:
    case Hexagon::A4_pzxthfnew:
    case Hexagon::A4_pzxtht:
    case Hexagon::A4_pzxthtnew: {
      // op: Pu4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 8;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vS32b_new_npred_ppu:
    case Hexagon::V6_vS32b_new_pred_ppu:
    case Hexagon::V6_vS32b_nt_new_npred_ppu:
    case Hexagon::V6_vS32b_nt_new_pred_ppu: {
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Os8
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(7);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::V6_zLd_pred_ppu: {
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::V6_vS32Ub_npred_ppu:
    case Hexagon::V6_vS32Ub_pred_ppu:
    case Hexagon::V6_vS32b_npred_ppu:
    case Hexagon::V6_vS32b_nt_npred_ppu:
    case Hexagon::V6_vS32b_nt_pred_ppu:
    case Hexagon::V6_vS32b_pred_ppu: {
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Vs32
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::L4_return_f:
    case Hexagon::L4_return_fnew_pnt:
    case Hexagon::L4_return_fnew_pt:
    case Hexagon::L4_return_t:
    case Hexagon::L4_return_tnew_pnt:
    case Hexagon::L4_return_tnew_pt: {
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 8;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vL32b_cur_npred_ppu:
    case Hexagon::V6_vL32b_cur_pred_ppu:
    case Hexagon::V6_vL32b_npred_ppu:
    case Hexagon::V6_vL32b_nt_cur_npred_ppu:
    case Hexagon::V6_vL32b_nt_cur_pred_ppu:
    case Hexagon::V6_vL32b_nt_npred_ppu:
    case Hexagon::V6_vL32b_nt_pred_ppu:
    case Hexagon::V6_vL32b_nt_tmp_npred_ppu:
    case Hexagon::V6_vL32b_nt_tmp_pred_ppu:
    case Hexagon::V6_vL32b_pred_ppu:
    case Hexagon::V6_vL32b_tmp_npred_ppu:
    case Hexagon::V6_vL32b_tmp_pred_ppu: {
      // op: Pv4
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::V6_vgathermhq:
    case Hexagon::V6_vgathermwq: {
      // op: Qs4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vscattermhq:
    case Hexagon::V6_vscattermwq: {
      // op: Qs4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vw32
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vgathermhwq: {
      // op: Qs4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Vvv32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vscattermhwq: {
      // op: Qs4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Vvv32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vw32
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_pred_not: {
      // op: Qs4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 8;
      Value |= op;
      // op: Qd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::V6_pred_and:
    case Hexagon::V6_pred_and_n:
    case Hexagon::V6_pred_or:
    case Hexagon::V6_pred_or_n:
    case Hexagon::V6_pred_xor:
    case Hexagon::V6_shuffeqh:
    case Hexagon::V6_shuffeqw: {
      // op: Qs4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 8;
      Value |= op;
      // op: Qt4
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 22;
      Value |= op;
      // op: Qd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::V6_vmux: {
      // op: Qt4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vswap: {
      // op: Qt4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vandnqrt:
    case Hexagon::V6_vandqrt: {
      // op: Qu4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 8;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vandnqrt_acc:
    case Hexagon::V6_vandqrt_acc: {
      // op: Qu4
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 8;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vhistq:
    case Hexagon::V6_vwhist128q:
    case Hexagon::V6_vwhist256q:
    case Hexagon::V6_vwhist256q_sat: {
      // op: Qv4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 22;
      Value |= op;
      break;
    }
    case Hexagon::V6_vS32b_nqpred_ppu:
    case Hexagon::V6_vS32b_nt_nqpred_ppu:
    case Hexagon::V6_vS32b_nt_qpred_ppu:
    case Hexagon::V6_vS32b_qpred_ppu: {
      // op: Qv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Vs32
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::V6_vprefixqb:
    case Hexagon::V6_vprefixqh:
    case Hexagon::V6_vprefixqw: {
      // op: Qv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 22;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vandvnqv:
    case Hexagon::V6_vandvqv: {
      // op: Qv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 22;
      Value |= op;
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vaddbnq:
    case Hexagon::V6_vaddbq:
    case Hexagon::V6_vaddhnq:
    case Hexagon::V6_vaddhq:
    case Hexagon::V6_vaddwnq:
    case Hexagon::V6_vaddwq:
    case Hexagon::V6_vsubbnq:
    case Hexagon::V6_vsubbq:
    case Hexagon::V6_vsubhnq:
    case Hexagon::V6_vsubhq:
    case Hexagon::V6_vsubwnq:
    case Hexagon::V6_vsubwq: {
      // op: Qv4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 22;
      Value |= op;
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::SA1_clrf:
    case Hexagon::SA1_clrfnew:
    case Hexagon::SA1_clrt:
    case Hexagon::SA1_clrtnew:
    case Hexagon::SA1_setin1: {
      // op: Rd16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case Hexagon::PS_callr_nr: {
      // op: Rs
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::SA1_and1:
    case Hexagon::SA1_dec:
    case Hexagon::SA1_inc:
    case Hexagon::SA1_sxtb:
    case Hexagon::SA1_sxth:
    case Hexagon::SA1_tfr:
    case Hexagon::SA1_zxtb:
    case Hexagon::SA1_zxth: {
      // op: Rs16
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      // op: Rd16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case Hexagon::SA1_combinerz:
    case Hexagon::SA1_combinezr: {
      // op: Rs16
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      // op: Rdd8
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      Value |= op;
      break;
    }
    case Hexagon::SA1_addrx: {
      // op: Rs16
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      // op: Rx16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case Hexagon::J2_callr:
    case Hexagon::J2_jumpr:
    case Hexagon::J4_hintjumpr:
    case Hexagon::Y2_dccleana:
    case Hexagon::Y2_dccleaninva:
    case Hexagon::Y2_dcinva:
    case Hexagon::Y2_dczeroa:
    case Hexagon::Y2_icinva:
    case Hexagon::Y2_wait:
    case Hexagon::Y4_trace: {
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::Y4_l2fetch: {
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::L6_memcpy: {
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      break;
    }
    case Hexagon::Y5_l2fetch: {
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::A2_tfrrcr: {
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Cd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::G4_tfrgrcr: {
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Gd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::C2_tfrrp: {
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Pd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::A2_abs:
    case Hexagon::A2_abssat:
    case Hexagon::A2_aslh:
    case Hexagon::A2_asrh:
    case Hexagon::A2_negsat:
    case Hexagon::A2_satb:
    case Hexagon::A2_sath:
    case Hexagon::A2_satub:
    case Hexagon::A2_satuh:
    case Hexagon::A2_swiz:
    case Hexagon::A2_sxtb:
    case Hexagon::A2_sxth:
    case Hexagon::A2_tfr:
    case Hexagon::A2_zxth:
    case Hexagon::F2_conv_sf2uw:
    case Hexagon::F2_conv_sf2uw_chop:
    case Hexagon::F2_conv_sf2w:
    case Hexagon::F2_conv_sf2w_chop:
    case Hexagon::F2_conv_uw2sf:
    case Hexagon::F2_conv_w2sf:
    case Hexagon::F2_sffixupr:
    case Hexagon::L2_loadw_locked:
    case Hexagon::S2_brev:
    case Hexagon::S2_cl0:
    case Hexagon::S2_cl1:
    case Hexagon::S2_clb:
    case Hexagon::S2_clbnorm:
    case Hexagon::S2_ct0:
    case Hexagon::S2_ct1:
    case Hexagon::S2_svsathb:
    case Hexagon::S2_svsathub:
    case Hexagon::S2_vsplatrb: {
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A2_sxtw:
    case Hexagon::F2_conv_sf2d:
    case Hexagon::F2_conv_sf2d_chop:
    case Hexagon::F2_conv_sf2df:
    case Hexagon::F2_conv_sf2ud:
    case Hexagon::F2_conv_sf2ud_chop:
    case Hexagon::F2_conv_uw2df:
    case Hexagon::F2_conv_w2df:
    case Hexagon::L2_deallocframe:
    case Hexagon::L4_loadd_locked:
    case Hexagon::L4_return:
    case Hexagon::S2_vsplatrh:
    case Hexagon::S2_vsxtbh:
    case Hexagon::S2_vsxthw:
    case Hexagon::S2_vzxtbh:
    case Hexagon::S2_vzxthw:
    case Hexagon::S6_vsplatrbp: {
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A4_cmpbeq:
    case Hexagon::A4_cmpbgt:
    case Hexagon::A4_cmpbgtu:
    case Hexagon::A4_cmpheq:
    case Hexagon::A4_cmphgt:
    case Hexagon::A4_cmphgtu:
    case Hexagon::C2_bitsclr:
    case Hexagon::C2_bitsset:
    case Hexagon::C2_cmpeq:
    case Hexagon::C2_cmpgt:
    case Hexagon::C2_cmpgtu:
    case Hexagon::C4_cmplte:
    case Hexagon::C4_cmplteu:
    case Hexagon::C4_cmpneq:
    case Hexagon::C4_nbitsclr:
    case Hexagon::C4_nbitsset:
    case Hexagon::F2_sfcmpeq:
    case Hexagon::F2_sfcmpge:
    case Hexagon::F2_sfcmpgt:
    case Hexagon::F2_sfcmpuo:
    case Hexagon::S2_storew_locked:
    case Hexagon::S2_tstbit_r:
    case Hexagon::S4_ntstbit_r: {
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Pd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::A2_add:
    case Hexagon::A2_addsat:
    case Hexagon::A2_and:
    case Hexagon::A2_max:
    case Hexagon::A2_maxu:
    case Hexagon::A2_or:
    case Hexagon::A2_svaddh:
    case Hexagon::A2_svaddhs:
    case Hexagon::A2_svadduhs:
    case Hexagon::A2_svavgh:
    case Hexagon::A2_svavghs:
    case Hexagon::A2_xor:
    case Hexagon::A4_cround_rr:
    case Hexagon::A4_modwrapu:
    case Hexagon::A4_rcmpeq:
    case Hexagon::A4_rcmpneq:
    case Hexagon::A4_round_rr:
    case Hexagon::A4_round_rr_sat:
    case Hexagon::F2_sfadd:
    case Hexagon::F2_sffixupd:
    case Hexagon::F2_sffixupn:
    case Hexagon::F2_sfmax:
    case Hexagon::F2_sfmin:
    case Hexagon::F2_sfmpy:
    case Hexagon::F2_sfsub:
    case Hexagon::M2_cmpyrs_s0:
    case Hexagon::M2_cmpyrs_s1:
    case Hexagon::M2_cmpyrsc_s0:
    case Hexagon::M2_cmpyrsc_s1:
    case Hexagon::M2_dpmpyss_rnd_s0:
    case Hexagon::M2_hmmpyh_rs1:
    case Hexagon::M2_hmmpyh_s1:
    case Hexagon::M2_hmmpyl_rs1:
    case Hexagon::M2_hmmpyl_s1:
    case Hexagon::M2_mpy_hh_s0:
    case Hexagon::M2_mpy_hh_s1:
    case Hexagon::M2_mpy_hl_s0:
    case Hexagon::M2_mpy_hl_s1:
    case Hexagon::M2_mpy_lh_s0:
    case Hexagon::M2_mpy_lh_s1:
    case Hexagon::M2_mpy_ll_s0:
    case Hexagon::M2_mpy_ll_s1:
    case Hexagon::M2_mpy_rnd_hh_s0:
    case Hexagon::M2_mpy_rnd_hh_s1:
    case Hexagon::M2_mpy_rnd_hl_s0:
    case Hexagon::M2_mpy_rnd_hl_s1:
    case Hexagon::M2_mpy_rnd_lh_s0:
    case Hexagon::M2_mpy_rnd_lh_s1:
    case Hexagon::M2_mpy_rnd_ll_s0:
    case Hexagon::M2_mpy_rnd_ll_s1:
    case Hexagon::M2_mpy_sat_hh_s0:
    case Hexagon::M2_mpy_sat_hh_s1:
    case Hexagon::M2_mpy_sat_hl_s0:
    case Hexagon::M2_mpy_sat_hl_s1:
    case Hexagon::M2_mpy_sat_lh_s0:
    case Hexagon::M2_mpy_sat_lh_s1:
    case Hexagon::M2_mpy_sat_ll_s0:
    case Hexagon::M2_mpy_sat_ll_s1:
    case Hexagon::M2_mpy_sat_rnd_hh_s0:
    case Hexagon::M2_mpy_sat_rnd_hh_s1:
    case Hexagon::M2_mpy_sat_rnd_hl_s0:
    case Hexagon::M2_mpy_sat_rnd_hl_s1:
    case Hexagon::M2_mpy_sat_rnd_lh_s0:
    case Hexagon::M2_mpy_sat_rnd_lh_s1:
    case Hexagon::M2_mpy_sat_rnd_ll_s0:
    case Hexagon::M2_mpy_sat_rnd_ll_s1:
    case Hexagon::M2_mpy_up:
    case Hexagon::M2_mpy_up_s1:
    case Hexagon::M2_mpy_up_s1_sat:
    case Hexagon::M2_mpyi:
    case Hexagon::M2_mpysu_up:
    case Hexagon::M2_mpyu_hh_s0:
    case Hexagon::M2_mpyu_hh_s1:
    case Hexagon::M2_mpyu_hl_s0:
    case Hexagon::M2_mpyu_hl_s1:
    case Hexagon::M2_mpyu_lh_s0:
    case Hexagon::M2_mpyu_lh_s1:
    case Hexagon::M2_mpyu_ll_s0:
    case Hexagon::M2_mpyu_ll_s1:
    case Hexagon::M2_mpyu_up:
    case Hexagon::M2_vmpy2s_s0pack:
    case Hexagon::M2_vmpy2s_s1pack:
    case Hexagon::S2_asl_r_r:
    case Hexagon::S2_asl_r_r_sat:
    case Hexagon::S2_asr_r_r:
    case Hexagon::S2_asr_r_r_sat:
    case Hexagon::S2_clrbit_r:
    case Hexagon::S2_lsl_r_r:
    case Hexagon::S2_lsr_r_r:
    case Hexagon::S2_setbit_r:
    case Hexagon::S2_togglebit_r:
    case Hexagon::S4_parity:
    case Hexagon::dep_A2_addsat: {
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A2_combinew:
    case Hexagon::A4_bitsplit:
    case Hexagon::M2_cmpyi_s0:
    case Hexagon::M2_cmpyr_s0:
    case Hexagon::M2_cmpys_s0:
    case Hexagon::M2_cmpys_s1:
    case Hexagon::M2_cmpysc_s0:
    case Hexagon::M2_cmpysc_s1:
    case Hexagon::M2_dpmpyss_s0:
    case Hexagon::M2_dpmpyuu_s0:
    case Hexagon::M2_mpyd_hh_s0:
    case Hexagon::M2_mpyd_hh_s1:
    case Hexagon::M2_mpyd_hl_s0:
    case Hexagon::M2_mpyd_hl_s1:
    case Hexagon::M2_mpyd_lh_s0:
    case Hexagon::M2_mpyd_lh_s1:
    case Hexagon::M2_mpyd_ll_s0:
    case Hexagon::M2_mpyd_ll_s1:
    case Hexagon::M2_mpyd_rnd_hh_s0:
    case Hexagon::M2_mpyd_rnd_hh_s1:
    case Hexagon::M2_mpyd_rnd_hl_s0:
    case Hexagon::M2_mpyd_rnd_hl_s1:
    case Hexagon::M2_mpyd_rnd_lh_s0:
    case Hexagon::M2_mpyd_rnd_lh_s1:
    case Hexagon::M2_mpyd_rnd_ll_s0:
    case Hexagon::M2_mpyd_rnd_ll_s1:
    case Hexagon::M2_mpyud_hh_s0:
    case Hexagon::M2_mpyud_hh_s1:
    case Hexagon::M2_mpyud_hl_s0:
    case Hexagon::M2_mpyud_hl_s1:
    case Hexagon::M2_mpyud_lh_s0:
    case Hexagon::M2_mpyud_lh_s1:
    case Hexagon::M2_mpyud_ll_s0:
    case Hexagon::M2_mpyud_ll_s1:
    case Hexagon::M2_vmpy2s_s0:
    case Hexagon::M2_vmpy2s_s1:
    case Hexagon::M2_vmpy2su_s0:
    case Hexagon::M2_vmpy2su_s1:
    case Hexagon::M4_pmpyw:
    case Hexagon::M4_vpmpyh:
    case Hexagon::M5_vmpybsu:
    case Hexagon::M5_vmpybuu:
    case Hexagon::S2_packhl:
    case Hexagon::dep_S2_packhl: {
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S4_stored_locked: {
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Pd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::S2_extractu_rp:
    case Hexagon::S4_extract_rp: {
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::F2_sfinvsqrta: {
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Pe4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      break;
    }
    case Hexagon::F2_sffma_sc: {
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Pu4
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::F2_sfrecipa: {
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Pe4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      break;
    }
    case Hexagon::F2_sffma:
    case Hexagon::F2_sffma_lib:
    case Hexagon::F2_sffms:
    case Hexagon::F2_sffms_lib:
    case Hexagon::M2_acci:
    case Hexagon::M2_maci:
    case Hexagon::M2_mnaci:
    case Hexagon::M2_mpy_acc_hh_s0:
    case Hexagon::M2_mpy_acc_hh_s1:
    case Hexagon::M2_mpy_acc_hl_s0:
    case Hexagon::M2_mpy_acc_hl_s1:
    case Hexagon::M2_mpy_acc_lh_s0:
    case Hexagon::M2_mpy_acc_lh_s1:
    case Hexagon::M2_mpy_acc_ll_s0:
    case Hexagon::M2_mpy_acc_ll_s1:
    case Hexagon::M2_mpy_acc_sat_hh_s0:
    case Hexagon::M2_mpy_acc_sat_hh_s1:
    case Hexagon::M2_mpy_acc_sat_hl_s0:
    case Hexagon::M2_mpy_acc_sat_hl_s1:
    case Hexagon::M2_mpy_acc_sat_lh_s0:
    case Hexagon::M2_mpy_acc_sat_lh_s1:
    case Hexagon::M2_mpy_acc_sat_ll_s0:
    case Hexagon::M2_mpy_acc_sat_ll_s1:
    case Hexagon::M2_mpy_nac_hh_s0:
    case Hexagon::M2_mpy_nac_hh_s1:
    case Hexagon::M2_mpy_nac_hl_s0:
    case Hexagon::M2_mpy_nac_hl_s1:
    case Hexagon::M2_mpy_nac_lh_s0:
    case Hexagon::M2_mpy_nac_lh_s1:
    case Hexagon::M2_mpy_nac_ll_s0:
    case Hexagon::M2_mpy_nac_ll_s1:
    case Hexagon::M2_mpy_nac_sat_hh_s0:
    case Hexagon::M2_mpy_nac_sat_hh_s1:
    case Hexagon::M2_mpy_nac_sat_hl_s0:
    case Hexagon::M2_mpy_nac_sat_hl_s1:
    case Hexagon::M2_mpy_nac_sat_lh_s0:
    case Hexagon::M2_mpy_nac_sat_lh_s1:
    case Hexagon::M2_mpy_nac_sat_ll_s0:
    case Hexagon::M2_mpy_nac_sat_ll_s1:
    case Hexagon::M2_mpyu_acc_hh_s0:
    case Hexagon::M2_mpyu_acc_hh_s1:
    case Hexagon::M2_mpyu_acc_hl_s0:
    case Hexagon::M2_mpyu_acc_hl_s1:
    case Hexagon::M2_mpyu_acc_lh_s0:
    case Hexagon::M2_mpyu_acc_lh_s1:
    case Hexagon::M2_mpyu_acc_ll_s0:
    case Hexagon::M2_mpyu_acc_ll_s1:
    case Hexagon::M2_mpyu_nac_hh_s0:
    case Hexagon::M2_mpyu_nac_hh_s1:
    case Hexagon::M2_mpyu_nac_hl_s0:
    case Hexagon::M2_mpyu_nac_hl_s1:
    case Hexagon::M2_mpyu_nac_lh_s0:
    case Hexagon::M2_mpyu_nac_lh_s1:
    case Hexagon::M2_mpyu_nac_ll_s0:
    case Hexagon::M2_mpyu_nac_ll_s1:
    case Hexagon::M2_nacci:
    case Hexagon::M2_xor_xacc:
    case Hexagon::M4_and_and:
    case Hexagon::M4_and_andn:
    case Hexagon::M4_and_or:
    case Hexagon::M4_and_xor:
    case Hexagon::M4_mac_up_s1_sat:
    case Hexagon::M4_nac_up_s1_sat:
    case Hexagon::M4_or_and:
    case Hexagon::M4_or_andn:
    case Hexagon::M4_or_or:
    case Hexagon::M4_or_xor:
    case Hexagon::M4_xor_and:
    case Hexagon::M4_xor_andn:
    case Hexagon::M4_xor_or:
    case Hexagon::S2_asl_r_r_acc:
    case Hexagon::S2_asl_r_r_and:
    case Hexagon::S2_asl_r_r_nac:
    case Hexagon::S2_asl_r_r_or:
    case Hexagon::S2_asr_r_r_acc:
    case Hexagon::S2_asr_r_r_and:
    case Hexagon::S2_asr_r_r_nac:
    case Hexagon::S2_asr_r_r_or:
    case Hexagon::S2_lsl_r_r_acc:
    case Hexagon::S2_lsl_r_r_and:
    case Hexagon::S2_lsl_r_r_nac:
    case Hexagon::S2_lsl_r_r_or:
    case Hexagon::S2_lsr_r_r_acc:
    case Hexagon::S2_lsr_r_r_and:
    case Hexagon::S2_lsr_r_r_nac:
    case Hexagon::S2_lsr_r_r_or: {
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::M2_cmaci_s0:
    case Hexagon::M2_cmacr_s0:
    case Hexagon::M2_cmacs_s0:
    case Hexagon::M2_cmacs_s1:
    case Hexagon::M2_cmacsc_s0:
    case Hexagon::M2_cmacsc_s1:
    case Hexagon::M2_cnacs_s0:
    case Hexagon::M2_cnacs_s1:
    case Hexagon::M2_cnacsc_s0:
    case Hexagon::M2_cnacsc_s1:
    case Hexagon::M2_dpmpyss_acc_s0:
    case Hexagon::M2_dpmpyss_nac_s0:
    case Hexagon::M2_dpmpyuu_acc_s0:
    case Hexagon::M2_dpmpyuu_nac_s0:
    case Hexagon::M2_mpyd_acc_hh_s0:
    case Hexagon::M2_mpyd_acc_hh_s1:
    case Hexagon::M2_mpyd_acc_hl_s0:
    case Hexagon::M2_mpyd_acc_hl_s1:
    case Hexagon::M2_mpyd_acc_lh_s0:
    case Hexagon::M2_mpyd_acc_lh_s1:
    case Hexagon::M2_mpyd_acc_ll_s0:
    case Hexagon::M2_mpyd_acc_ll_s1:
    case Hexagon::M2_mpyd_nac_hh_s0:
    case Hexagon::M2_mpyd_nac_hh_s1:
    case Hexagon::M2_mpyd_nac_hl_s0:
    case Hexagon::M2_mpyd_nac_hl_s1:
    case Hexagon::M2_mpyd_nac_lh_s0:
    case Hexagon::M2_mpyd_nac_lh_s1:
    case Hexagon::M2_mpyd_nac_ll_s0:
    case Hexagon::M2_mpyd_nac_ll_s1:
    case Hexagon::M2_mpyud_acc_hh_s0:
    case Hexagon::M2_mpyud_acc_hh_s1:
    case Hexagon::M2_mpyud_acc_hl_s0:
    case Hexagon::M2_mpyud_acc_hl_s1:
    case Hexagon::M2_mpyud_acc_lh_s0:
    case Hexagon::M2_mpyud_acc_lh_s1:
    case Hexagon::M2_mpyud_acc_ll_s0:
    case Hexagon::M2_mpyud_acc_ll_s1:
    case Hexagon::M2_mpyud_nac_hh_s0:
    case Hexagon::M2_mpyud_nac_hh_s1:
    case Hexagon::M2_mpyud_nac_hl_s0:
    case Hexagon::M2_mpyud_nac_hl_s1:
    case Hexagon::M2_mpyud_nac_lh_s0:
    case Hexagon::M2_mpyud_nac_lh_s1:
    case Hexagon::M2_mpyud_nac_ll_s0:
    case Hexagon::M2_mpyud_nac_ll_s1:
    case Hexagon::M2_vmac2:
    case Hexagon::M2_vmac2s_s0:
    case Hexagon::M2_vmac2s_s1:
    case Hexagon::M2_vmac2su_s0:
    case Hexagon::M2_vmac2su_s1:
    case Hexagon::M4_pmpyw_acc:
    case Hexagon::M4_vpmpyh_acc:
    case Hexagon::M5_vmacbsu:
    case Hexagon::M5_vmacbuu: {
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rxx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_insert_rp: {
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A4_tfrpcp: {
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Cdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::G4_tfrgpcp: {
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Gdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A2_roundsat:
    case Hexagon::A2_sat:
    case Hexagon::F2_conv_d2sf:
    case Hexagon::F2_conv_df2sf:
    case Hexagon::F2_conv_df2uw:
    case Hexagon::F2_conv_df2uw_chop:
    case Hexagon::F2_conv_df2w:
    case Hexagon::F2_conv_df2w_chop:
    case Hexagon::F2_conv_ud2sf:
    case Hexagon::S2_cl0p:
    case Hexagon::S2_cl1p:
    case Hexagon::S2_clbp:
    case Hexagon::S2_ct0p:
    case Hexagon::S2_ct1p:
    case Hexagon::S2_vrndpackwh:
    case Hexagon::S2_vrndpackwhs:
    case Hexagon::S2_vsathb:
    case Hexagon::S2_vsathub:
    case Hexagon::S2_vsatwh:
    case Hexagon::S2_vsatwuh:
    case Hexagon::S2_vtrunehb:
    case Hexagon::S2_vtrunohb:
    case Hexagon::S4_clbpnorm:
    case Hexagon::S5_popcountp: {
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A2_absp:
    case Hexagon::A2_negp:
    case Hexagon::A2_notp:
    case Hexagon::A2_vabsh:
    case Hexagon::A2_vabshsat:
    case Hexagon::A2_vabsw:
    case Hexagon::A2_vabswsat:
    case Hexagon::A2_vconj:
    case Hexagon::F2_conv_d2df:
    case Hexagon::F2_conv_df2d:
    case Hexagon::F2_conv_df2d_chop:
    case Hexagon::F2_conv_df2ud:
    case Hexagon::F2_conv_df2ud_chop:
    case Hexagon::F2_conv_ud2df:
    case Hexagon::S2_brevp:
    case Hexagon::S2_deinterleave:
    case Hexagon::S2_interleave:
    case Hexagon::S2_vsathb_nopack:
    case Hexagon::S2_vsathub_nopack:
    case Hexagon::S2_vsatwh_nopack:
    case Hexagon::S2_vsatwuh_nopack: {
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A4_tlbmatch: {
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Pd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::M4_cmpyi_wh:
    case Hexagon::M4_cmpyi_whc:
    case Hexagon::M4_cmpyr_wh:
    case Hexagon::M4_cmpyr_whc:
    case Hexagon::S2_asr_r_svw_trun: {
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_asl_r_p:
    case Hexagon::S2_asl_r_vh:
    case Hexagon::S2_asl_r_vw:
    case Hexagon::S2_asr_r_p:
    case Hexagon::S2_asr_r_vh:
    case Hexagon::S2_asr_r_vw:
    case Hexagon::S2_lsl_r_p:
    case Hexagon::S2_lsl_r_vh:
    case Hexagon::S2_lsl_r_vw:
    case Hexagon::S2_lsr_r_p:
    case Hexagon::S2_lsr_r_vh:
    case Hexagon::S2_lsr_r_vw:
    case Hexagon::S2_vcnegh:
    case Hexagon::S2_vcrotate: {
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A2_vcmpbeq:
    case Hexagon::A2_vcmpbgtu:
    case Hexagon::A2_vcmpheq:
    case Hexagon::A2_vcmphgt:
    case Hexagon::A2_vcmphgtu:
    case Hexagon::A2_vcmpweq:
    case Hexagon::A2_vcmpwgt:
    case Hexagon::A2_vcmpwgtu:
    case Hexagon::A4_boundscheck_hi:
    case Hexagon::A4_boundscheck_lo:
    case Hexagon::A4_vcmpbeq_any:
    case Hexagon::A4_vcmpbgt:
    case Hexagon::A6_vcmpbeq_notany:
    case Hexagon::C2_cmpeqp:
    case Hexagon::C2_cmpgtp:
    case Hexagon::C2_cmpgtup:
    case Hexagon::F2_dfcmpeq:
    case Hexagon::F2_dfcmpge:
    case Hexagon::F2_dfcmpgt:
    case Hexagon::F2_dfcmpuo: {
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Pd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::S2_vsplicerb: {
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Pu4
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A5_vaddhubs:
    case Hexagon::M2_vdmpyrs_s0:
    case Hexagon::M2_vdmpyrs_s1:
    case Hexagon::M2_vraddh:
    case Hexagon::M2_vradduh:
    case Hexagon::M2_vrcmpys_s1rp_h:
    case Hexagon::M2_vrcmpys_s1rp_l:
    case Hexagon::S2_parityp: {
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A2_addp:
    case Hexagon::A2_addpsat:
    case Hexagon::A2_addsph:
    case Hexagon::A2_addspl:
    case Hexagon::A2_andp:
    case Hexagon::A2_maxp:
    case Hexagon::A2_maxup:
    case Hexagon::A2_orp:
    case Hexagon::A2_vaddh:
    case Hexagon::A2_vaddhs:
    case Hexagon::A2_vaddub:
    case Hexagon::A2_vaddubs:
    case Hexagon::A2_vadduhs:
    case Hexagon::A2_vaddw:
    case Hexagon::A2_vaddws:
    case Hexagon::A2_vavgh:
    case Hexagon::A2_vavghcr:
    case Hexagon::A2_vavghr:
    case Hexagon::A2_vavgub:
    case Hexagon::A2_vavgubr:
    case Hexagon::A2_vavguh:
    case Hexagon::A2_vavguhr:
    case Hexagon::A2_vavguw:
    case Hexagon::A2_vavguwr:
    case Hexagon::A2_vavgw:
    case Hexagon::A2_vavgwcr:
    case Hexagon::A2_vavgwr:
    case Hexagon::A2_vraddub:
    case Hexagon::A2_vrsadub:
    case Hexagon::A2_xorp:
    case Hexagon::F2_dfadd:
    case Hexagon::F2_dfsub:
    case Hexagon::M2_mmpyh_rs0:
    case Hexagon::M2_mmpyh_rs1:
    case Hexagon::M2_mmpyh_s0:
    case Hexagon::M2_mmpyh_s1:
    case Hexagon::M2_mmpyl_rs0:
    case Hexagon::M2_mmpyl_rs1:
    case Hexagon::M2_mmpyl_s0:
    case Hexagon::M2_mmpyl_s1:
    case Hexagon::M2_mmpyuh_rs0:
    case Hexagon::M2_mmpyuh_rs1:
    case Hexagon::M2_mmpyuh_s0:
    case Hexagon::M2_mmpyuh_s1:
    case Hexagon::M2_mmpyul_rs0:
    case Hexagon::M2_mmpyul_rs1:
    case Hexagon::M2_mmpyul_s0:
    case Hexagon::M2_mmpyul_s1:
    case Hexagon::M2_vcmpy_s0_sat_i:
    case Hexagon::M2_vcmpy_s0_sat_r:
    case Hexagon::M2_vcmpy_s1_sat_i:
    case Hexagon::M2_vcmpy_s1_sat_r:
    case Hexagon::M2_vdmpys_s0:
    case Hexagon::M2_vdmpys_s1:
    case Hexagon::M2_vmpy2es_s0:
    case Hexagon::M2_vmpy2es_s1:
    case Hexagon::M2_vrcmpyi_s0:
    case Hexagon::M2_vrcmpyi_s0c:
    case Hexagon::M2_vrcmpyr_s0:
    case Hexagon::M2_vrcmpyr_s0c:
    case Hexagon::M2_vrcmpys_s1_h:
    case Hexagon::M2_vrcmpys_s1_l:
    case Hexagon::M2_vrmpy_s0:
    case Hexagon::M4_vrmpyeh_s0:
    case Hexagon::M4_vrmpyeh_s1:
    case Hexagon::M4_vrmpyoh_s0:
    case Hexagon::M4_vrmpyoh_s1:
    case Hexagon::M5_vdmpybsu:
    case Hexagon::M5_vrmpybsu:
    case Hexagon::M5_vrmpybuu:
    case Hexagon::S2_cabacdecbin:
    case Hexagon::S2_extractup_rp:
    case Hexagon::S2_lfsp:
    case Hexagon::S2_shuffeb:
    case Hexagon::S2_shuffeh:
    case Hexagon::S2_vtrunewh:
    case Hexagon::S2_vtrunowh:
    case Hexagon::S4_extractp_rp:
    case Hexagon::S4_vxaddsubh:
    case Hexagon::S4_vxaddsubhr:
    case Hexagon::S4_vxaddsubw:
    case Hexagon::S4_vxsubaddh:
    case Hexagon::S4_vxsubaddhr:
    case Hexagon::S4_vxsubaddw:
    case Hexagon::S6_vtrunehb_ppp:
    case Hexagon::S6_vtrunohb_ppp: {
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_asl_r_p_acc:
    case Hexagon::S2_asl_r_p_and:
    case Hexagon::S2_asl_r_p_nac:
    case Hexagon::S2_asl_r_p_or:
    case Hexagon::S2_asl_r_p_xor:
    case Hexagon::S2_asr_r_p_acc:
    case Hexagon::S2_asr_r_p_and:
    case Hexagon::S2_asr_r_p_nac:
    case Hexagon::S2_asr_r_p_or:
    case Hexagon::S2_asr_r_p_xor:
    case Hexagon::S2_lsl_r_p_acc:
    case Hexagon::S2_lsl_r_p_and:
    case Hexagon::S2_lsl_r_p_nac:
    case Hexagon::S2_lsl_r_p_or:
    case Hexagon::S2_lsl_r_p_xor:
    case Hexagon::S2_lsr_r_p_acc:
    case Hexagon::S2_lsr_r_p_and:
    case Hexagon::S2_lsr_r_p_nac:
    case Hexagon::S2_lsr_r_p_or:
    case Hexagon::S2_lsr_r_p_xor:
    case Hexagon::S2_vrcnegh: {
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rxx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A4_addp_c:
    case Hexagon::A4_subp_c: {
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Px4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      break;
    }
    case Hexagon::A2_vraddub_acc:
    case Hexagon::A2_vrsadub_acc:
    case Hexagon::M2_mmachs_rs0:
    case Hexagon::M2_mmachs_rs1:
    case Hexagon::M2_mmachs_s0:
    case Hexagon::M2_mmachs_s1:
    case Hexagon::M2_mmacls_rs0:
    case Hexagon::M2_mmacls_rs1:
    case Hexagon::M2_mmacls_s0:
    case Hexagon::M2_mmacls_s1:
    case Hexagon::M2_mmacuhs_rs0:
    case Hexagon::M2_mmacuhs_rs1:
    case Hexagon::M2_mmacuhs_s0:
    case Hexagon::M2_mmacuhs_s1:
    case Hexagon::M2_mmaculs_rs0:
    case Hexagon::M2_mmaculs_rs1:
    case Hexagon::M2_mmaculs_s0:
    case Hexagon::M2_mmaculs_s1:
    case Hexagon::M2_vcmac_s0_sat_i:
    case Hexagon::M2_vcmac_s0_sat_r:
    case Hexagon::M2_vdmacs_s0:
    case Hexagon::M2_vdmacs_s1:
    case Hexagon::M2_vmac2es:
    case Hexagon::M2_vmac2es_s0:
    case Hexagon::M2_vmac2es_s1:
    case Hexagon::M2_vrcmaci_s0:
    case Hexagon::M2_vrcmaci_s0c:
    case Hexagon::M2_vrcmacr_s0:
    case Hexagon::M2_vrcmacr_s0c:
    case Hexagon::M2_vrcmpys_acc_s1_h:
    case Hexagon::M2_vrcmpys_acc_s1_l:
    case Hexagon::M2_vrmac_s0:
    case Hexagon::M4_vrmpyeh_acc_s0:
    case Hexagon::M4_vrmpyeh_acc_s1:
    case Hexagon::M4_vrmpyoh_acc_s0:
    case Hexagon::M4_vrmpyoh_acc_s1:
    case Hexagon::M4_xor_xacc:
    case Hexagon::M5_vdmacbsu:
    case Hexagon::M5_vrmacbsu:
    case Hexagon::M5_vrmacbuu:
    case Hexagon::S2_insertp_rp: {
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rxx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A4_vrmaxh:
    case Hexagon::A4_vrmaxuh:
    case Hexagon::A4_vrmaxuw:
    case Hexagon::A4_vrmaxw:
    case Hexagon::A4_vrminh:
    case Hexagon::A4_vrminuh:
    case Hexagon::A4_vrminuw:
    case Hexagon::A4_vrminw: {
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Ru32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rxx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::A5_ACS: {
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rxx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Pe4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      break;
    }
    case Hexagon::V6_vgathermh:
    case Hexagon::V6_vgathermw: {
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vscattermh:
    case Hexagon::V6_vscattermh_add:
    case Hexagon::V6_vscattermw:
    case Hexagon::V6_vscattermw_add: {
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vw32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vgathermhw: {
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Vvv32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vscattermhw:
    case Hexagon::V6_vscattermhw_add: {
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Mu2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 13;
      Value |= op;
      // op: Vvv32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vw32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_pred_scalar2:
    case Hexagon::V6_pred_scalar2v2: {
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Qd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::V6_lvsplatb:
    case Hexagon::V6_lvsplath:
    case Hexagon::V6_lvsplatw:
    case Hexagon::V6_zextract: {
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A2_addh_h16_hh:
    case Hexagon::A2_addh_h16_hl:
    case Hexagon::A2_addh_h16_lh:
    case Hexagon::A2_addh_h16_ll:
    case Hexagon::A2_addh_h16_sat_hh:
    case Hexagon::A2_addh_h16_sat_hl:
    case Hexagon::A2_addh_h16_sat_lh:
    case Hexagon::A2_addh_h16_sat_ll:
    case Hexagon::A2_addh_l16_hl:
    case Hexagon::A2_addh_l16_ll:
    case Hexagon::A2_addh_l16_sat_hl:
    case Hexagon::A2_addh_l16_sat_ll:
    case Hexagon::A2_combine_hh:
    case Hexagon::A2_combine_hl:
    case Hexagon::A2_combine_lh:
    case Hexagon::A2_combine_ll:
    case Hexagon::A2_min:
    case Hexagon::A2_minu:
    case Hexagon::A2_sub:
    case Hexagon::A2_subh_h16_hh:
    case Hexagon::A2_subh_h16_hl:
    case Hexagon::A2_subh_h16_lh:
    case Hexagon::A2_subh_h16_ll:
    case Hexagon::A2_subh_h16_sat_hh:
    case Hexagon::A2_subh_h16_sat_hl:
    case Hexagon::A2_subh_h16_sat_lh:
    case Hexagon::A2_subh_h16_sat_ll:
    case Hexagon::A2_subh_l16_hl:
    case Hexagon::A2_subh_l16_ll:
    case Hexagon::A2_subh_l16_sat_hl:
    case Hexagon::A2_subh_l16_sat_ll:
    case Hexagon::A2_subsat:
    case Hexagon::A2_svnavgh:
    case Hexagon::A2_svsubh:
    case Hexagon::A2_svsubhs:
    case Hexagon::A2_svsubuhs:
    case Hexagon::A4_andn:
    case Hexagon::A4_orn:
    case Hexagon::dep_A2_subsat: {
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vinsertwr: {
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::M2_subacc: {
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vdeal:
    case Hexagon::V6_vshuff: {
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vy32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vx32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::S2_valignrb: {
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Pu4
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A2_minp:
    case Hexagon::A2_minup:
    case Hexagon::A2_subp:
    case Hexagon::A2_vmaxb:
    case Hexagon::A2_vmaxh:
    case Hexagon::A2_vmaxub:
    case Hexagon::A2_vmaxuh:
    case Hexagon::A2_vmaxuw:
    case Hexagon::A2_vmaxw:
    case Hexagon::A2_vminb:
    case Hexagon::A2_vminh:
    case Hexagon::A2_vminub:
    case Hexagon::A2_vminuh:
    case Hexagon::A2_vminuw:
    case Hexagon::A2_vminw:
    case Hexagon::A2_vnavgh:
    case Hexagon::A2_vnavghcr:
    case Hexagon::A2_vnavghr:
    case Hexagon::A2_vnavgw:
    case Hexagon::A2_vnavgwcr:
    case Hexagon::A2_vnavgwr:
    case Hexagon::A2_vsubh:
    case Hexagon::A2_vsubhs:
    case Hexagon::A2_vsubub:
    case Hexagon::A2_vsububs:
    case Hexagon::A2_vsubuhs:
    case Hexagon::A2_vsubw:
    case Hexagon::A2_vsubws:
    case Hexagon::A4_andnp:
    case Hexagon::A4_ornp:
    case Hexagon::M2_vabsdiffh:
    case Hexagon::M2_vabsdiffw:
    case Hexagon::M6_vabsdiffb:
    case Hexagon::M6_vabsdiffub:
    case Hexagon::S2_shuffob:
    case Hexagon::S2_shuffoh: {
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::A6_vminub_RdP: {
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rss32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Pe4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      break;
    }
    case Hexagon::M4_mpyrr_addr: {
      // op: Ru32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Ry32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      break;
    }
    case Hexagon::V6_extractw: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rs32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Rd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vandvrt: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Qd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::V6_vaslh:
    case Hexagon::V6_vaslw:
    case Hexagon::V6_vasrh:
    case Hexagon::V6_vasrw:
    case Hexagon::V6_vdmpybus:
    case Hexagon::V6_vdmpyhb:
    case Hexagon::V6_vdmpyhsat:
    case Hexagon::V6_vdmpyhsusat:
    case Hexagon::V6_vlsrb:
    case Hexagon::V6_vlsrh:
    case Hexagon::V6_vlsrw:
    case Hexagon::V6_vmpyhsrs:
    case Hexagon::V6_vmpyhss:
    case Hexagon::V6_vmpyihb:
    case Hexagon::V6_vmpyiwb:
    case Hexagon::V6_vmpyiwh:
    case Hexagon::V6_vmpyiwub:
    case Hexagon::V6_vmpyuhe:
    case Hexagon::V6_vrmpybus:
    case Hexagon::V6_vrmpyub:
    case Hexagon::V6_vror: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vmpybus:
    case Hexagon::V6_vmpyh:
    case Hexagon::V6_vmpyub:
    case Hexagon::V6_vmpyuh: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vrmpyzbb_rt:
    case Hexagon::V6_vrmpyzbub_rt:
    case Hexagon::V6_vrmpyzcb_rt:
    case Hexagon::V6_vrmpyzcbs_rt:
    case Hexagon::V6_vrmpyznb_rt: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rt8
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 16;
      Value |= op;
      // op: Vdddd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vlut4: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vrmpybub_rtt:
    case Hexagon::V6_vrmpyub_rtt: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vabsb:
    case Hexagon::V6_vabsb_sat:
    case Hexagon::V6_vabsh:
    case Hexagon::V6_vabsh_sat:
    case Hexagon::V6_vabsw:
    case Hexagon::V6_vabsw_sat:
    case Hexagon::V6_vassign:
    case Hexagon::V6_vcl0h:
    case Hexagon::V6_vcl0w:
    case Hexagon::V6_vdealb:
    case Hexagon::V6_vdealh:
    case Hexagon::V6_vnormamth:
    case Hexagon::V6_vnormamtw:
    case Hexagon::V6_vnot:
    case Hexagon::V6_vpopcounth:
    case Hexagon::V6_vshuffb:
    case Hexagon::V6_vshuffh: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vsb:
    case Hexagon::V6_vsh:
    case Hexagon::V6_vunpackb:
    case Hexagon::V6_vunpackh:
    case Hexagon::V6_vunpackub:
    case Hexagon::V6_vunpackuh:
    case Hexagon::V6_vzb:
    case Hexagon::V6_vzh: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_veqb:
    case Hexagon::V6_veqh:
    case Hexagon::V6_veqw:
    case Hexagon::V6_vgtb:
    case Hexagon::V6_vgth:
    case Hexagon::V6_vgtub:
    case Hexagon::V6_vgtuh:
    case Hexagon::V6_vgtuw:
    case Hexagon::V6_vgtw: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Qd4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::V6_vaddcarrysat: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Qs4
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vabsdiffh:
    case Hexagon::V6_vabsdiffub:
    case Hexagon::V6_vabsdiffuh:
    case Hexagon::V6_vabsdiffw:
    case Hexagon::V6_vaddb:
    case Hexagon::V6_vaddbsat:
    case Hexagon::V6_vaddclbh:
    case Hexagon::V6_vaddclbw:
    case Hexagon::V6_vaddh:
    case Hexagon::V6_vaddhsat:
    case Hexagon::V6_vaddubsat:
    case Hexagon::V6_vaddububb_sat:
    case Hexagon::V6_vadduhsat:
    case Hexagon::V6_vadduwsat:
    case Hexagon::V6_vaddw:
    case Hexagon::V6_vaddwsat:
    case Hexagon::V6_vand:
    case Hexagon::V6_vaslhv:
    case Hexagon::V6_vaslwv:
    case Hexagon::V6_vasrhv:
    case Hexagon::V6_vasrwv:
    case Hexagon::V6_vavgb:
    case Hexagon::V6_vavgbrnd:
    case Hexagon::V6_vavgh:
    case Hexagon::V6_vavghrnd:
    case Hexagon::V6_vavgub:
    case Hexagon::V6_vavgubrnd:
    case Hexagon::V6_vavguh:
    case Hexagon::V6_vavguhrnd:
    case Hexagon::V6_vavguw:
    case Hexagon::V6_vavguwrnd:
    case Hexagon::V6_vavgw:
    case Hexagon::V6_vavgwrnd:
    case Hexagon::V6_vdealb4w:
    case Hexagon::V6_vdelta:
    case Hexagon::V6_vdmpyhvsat:
    case Hexagon::V6_vlsrhv:
    case Hexagon::V6_vlsrwv:
    case Hexagon::V6_vmaxb:
    case Hexagon::V6_vmaxh:
    case Hexagon::V6_vmaxub:
    case Hexagon::V6_vmaxuh:
    case Hexagon::V6_vmaxw:
    case Hexagon::V6_vminb:
    case Hexagon::V6_vminh:
    case Hexagon::V6_vminub:
    case Hexagon::V6_vminuh:
    case Hexagon::V6_vminw:
    case Hexagon::V6_vmpyewuh:
    case Hexagon::V6_vmpyhvsrs:
    case Hexagon::V6_vmpyieoh:
    case Hexagon::V6_vmpyiewuh:
    case Hexagon::V6_vmpyih:
    case Hexagon::V6_vmpyiowh:
    case Hexagon::V6_vmpyowh:
    case Hexagon::V6_vmpyowh_rnd:
    case Hexagon::V6_vnavgb:
    case Hexagon::V6_vnavgh:
    case Hexagon::V6_vnavgub:
    case Hexagon::V6_vnavgw:
    case Hexagon::V6_vor:
    case Hexagon::V6_vpackeb:
    case Hexagon::V6_vpackeh:
    case Hexagon::V6_vpackhb_sat:
    case Hexagon::V6_vpackhub_sat:
    case Hexagon::V6_vpackob:
    case Hexagon::V6_vpackoh:
    case Hexagon::V6_vpackwh_sat:
    case Hexagon::V6_vpackwuh_sat:
    case Hexagon::V6_vrdelta:
    case Hexagon::V6_vrmpybusv:
    case Hexagon::V6_vrmpybv:
    case Hexagon::V6_vrmpyubv:
    case Hexagon::V6_vrotr:
    case Hexagon::V6_vroundhb:
    case Hexagon::V6_vroundhub:
    case Hexagon::V6_vrounduhub:
    case Hexagon::V6_vrounduwuh:
    case Hexagon::V6_vroundwh:
    case Hexagon::V6_vroundwuh:
    case Hexagon::V6_vsatdw:
    case Hexagon::V6_vsathub:
    case Hexagon::V6_vsatuwuh:
    case Hexagon::V6_vsatwh:
    case Hexagon::V6_vshufeh:
    case Hexagon::V6_vshuffeb:
    case Hexagon::V6_vshuffob:
    case Hexagon::V6_vshufoh:
    case Hexagon::V6_vsubb:
    case Hexagon::V6_vsubbsat:
    case Hexagon::V6_vsubh:
    case Hexagon::V6_vsubhsat:
    case Hexagon::V6_vsububsat:
    case Hexagon::V6_vsubububb_sat:
    case Hexagon::V6_vsubuhsat:
    case Hexagon::V6_vsubuwsat:
    case Hexagon::V6_vsubw:
    case Hexagon::V6_vsubwsat:
    case Hexagon::V6_vxor: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vaddhw:
    case Hexagon::V6_vaddubh:
    case Hexagon::V6_vadduhw:
    case Hexagon::V6_vcombine:
    case Hexagon::V6_vmpybusv:
    case Hexagon::V6_vmpybv:
    case Hexagon::V6_vmpyewuh_64:
    case Hexagon::V6_vmpyhus:
    case Hexagon::V6_vmpyhv:
    case Hexagon::V6_vmpyubv:
    case Hexagon::V6_vmpyuhv:
    case Hexagon::V6_vshufoeb:
    case Hexagon::V6_vshufoeh:
    case Hexagon::V6_vsubhw:
    case Hexagon::V6_vsububh:
    case Hexagon::V6_vsubuhw: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_valignb:
    case Hexagon::V6_vasrhbrndsat:
    case Hexagon::V6_vasrhbsat:
    case Hexagon::V6_vasrhubrndsat:
    case Hexagon::V6_vasrhubsat:
    case Hexagon::V6_vasruhubrndsat:
    case Hexagon::V6_vasruhubsat:
    case Hexagon::V6_vasruwuhrndsat:
    case Hexagon::V6_vasruwuhsat:
    case Hexagon::V6_vasrwh:
    case Hexagon::V6_vasrwhrndsat:
    case Hexagon::V6_vasrwhsat:
    case Hexagon::V6_vasrwuhrndsat:
    case Hexagon::V6_vasrwuhsat:
    case Hexagon::V6_vlalignb:
    case Hexagon::V6_vlutvvb:
    case Hexagon::V6_vlutvvb_nm: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 19;
      Value |= op;
      // op: Rt8
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 16;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vdealvdd:
    case Hexagon::V6_vlutvwh:
    case Hexagon::V6_vlutvwh_nm:
    case Hexagon::V6_vshuffvdd: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 19;
      Value |= op;
      // op: Rt8
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 16;
      Value |= op;
      // op: Vdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vandvrt_acc: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Qx4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::V6_vaslh_acc:
    case Hexagon::V6_vaslw_acc:
    case Hexagon::V6_vasrh_acc:
    case Hexagon::V6_vasrw_acc:
    case Hexagon::V6_vdmpybus_acc:
    case Hexagon::V6_vdmpyhb_acc:
    case Hexagon::V6_vdmpyhsat_acc:
    case Hexagon::V6_vdmpyhsusat_acc:
    case Hexagon::V6_vmpyihb_acc:
    case Hexagon::V6_vmpyiwb_acc:
    case Hexagon::V6_vmpyiwh_acc:
    case Hexagon::V6_vmpyiwub_acc:
    case Hexagon::V6_vmpyuhe_acc:
    case Hexagon::V6_vrmpybus_acc:
    case Hexagon::V6_vrmpyub_acc: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vmpybus_acc:
    case Hexagon::V6_vmpyh_acc:
    case Hexagon::V6_vmpyhsat_acc:
    case Hexagon::V6_vmpyub_acc:
    case Hexagon::V6_vmpyuh_acc: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vxx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vrmpyzbb_rt_acc:
    case Hexagon::V6_vrmpyzbub_rt_acc:
    case Hexagon::V6_vrmpyzcb_rt_acc:
    case Hexagon::V6_vrmpyzcbs_rt_acc:
    case Hexagon::V6_vrmpyznb_rt_acc: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rt8
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 16;
      Value |= op;
      // op: Vyyyy32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vmpahhsat:
    case Hexagon::V6_vmpauhuhsat:
    case Hexagon::V6_vmpsuhuhsat: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vrmpybub_rtt_acc:
    case Hexagon::V6_vrmpyub_rtt_acc: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rtt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vxx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vrmpyzbb_rx:
    case Hexagon::V6_vrmpyzbub_rx:
    case Hexagon::V6_vrmpyzcb_rx:
    case Hexagon::V6_vrmpyzcbs_rx:
    case Hexagon::V6_vrmpyznb_rx: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vdddd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx8
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::V6_veqb_and:
    case Hexagon::V6_veqb_or:
    case Hexagon::V6_veqb_xor:
    case Hexagon::V6_veqh_and:
    case Hexagon::V6_veqh_or:
    case Hexagon::V6_veqh_xor:
    case Hexagon::V6_veqw_and:
    case Hexagon::V6_veqw_or:
    case Hexagon::V6_veqw_xor:
    case Hexagon::V6_vgtb_and:
    case Hexagon::V6_vgtb_or:
    case Hexagon::V6_vgtb_xor:
    case Hexagon::V6_vgth_and:
    case Hexagon::V6_vgth_or:
    case Hexagon::V6_vgth_xor:
    case Hexagon::V6_vgtub_and:
    case Hexagon::V6_vgtub_or:
    case Hexagon::V6_vgtub_xor:
    case Hexagon::V6_vgtuh_and:
    case Hexagon::V6_vgtuh_or:
    case Hexagon::V6_vgtuh_xor:
    case Hexagon::V6_vgtuw_and:
    case Hexagon::V6_vgtuw_or:
    case Hexagon::V6_vgtuw_xor:
    case Hexagon::V6_vgtw_and:
    case Hexagon::V6_vgtw_or:
    case Hexagon::V6_vgtw_xor: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Qx4
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      Value |= op;
      break;
    }
    case Hexagon::V6_vaddcarryo:
    case Hexagon::V6_vsubcarryo: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Qe4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      break;
    }
    case Hexagon::V6_vaddcarry:
    case Hexagon::V6_vsubcarry: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Qx4
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 5;
      Value |= op;
      break;
    }
    case Hexagon::V6_vdmpyhvsat_acc:
    case Hexagon::V6_vmpyiewh_acc:
    case Hexagon::V6_vmpyiewuh_acc:
    case Hexagon::V6_vmpyih_acc:
    case Hexagon::V6_vmpyowh_rnd_sacc:
    case Hexagon::V6_vmpyowh_sacc:
    case Hexagon::V6_vrmpybusv_acc:
    case Hexagon::V6_vrmpybv_acc:
    case Hexagon::V6_vrmpyubv_acc: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vaddhw_acc:
    case Hexagon::V6_vaddubh_acc:
    case Hexagon::V6_vadduhw_acc:
    case Hexagon::V6_vasr_into:
    case Hexagon::V6_vmpybusv_acc:
    case Hexagon::V6_vmpybv_acc:
    case Hexagon::V6_vmpyhus_acc:
    case Hexagon::V6_vmpyhv_acc:
    case Hexagon::V6_vmpyowh_64_acc:
    case Hexagon::V6_vmpyubv_acc:
    case Hexagon::V6_vmpyuhv_acc: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vxx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vlutvvb_oracc: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 19;
      Value |= op;
      // op: Rt8
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 16;
      Value |= op;
      // op: Vx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vlutvwh_oracc: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vv32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 19;
      Value |= op;
      // op: Rt8
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 16;
      Value |= op;
      // op: Vxx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vunpackob:
    case Hexagon::V6_vunpackoh: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vxx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vrmpyzbb_rx_acc:
    case Hexagon::V6_vrmpyzbub_rx_acc:
    case Hexagon::V6_vrmpyzcb_rx_acc:
    case Hexagon::V6_vrmpyzcbs_rx_acc:
    case Hexagon::V6_vrmpyznb_rx_acc: {
      // op: Vu32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vyyyy32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      // op: Rx8
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::V6_vdmpyhisat:
    case Hexagon::V6_vdmpyhsuisat: {
      // op: Vuu32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vdmpybus_dv:
    case Hexagon::V6_vdmpyhb_dv:
    case Hexagon::V6_vdsaduh:
    case Hexagon::V6_vmpabus:
    case Hexagon::V6_vmpabuu:
    case Hexagon::V6_vmpahb:
    case Hexagon::V6_vmpauhb:
    case Hexagon::V6_vtmpyb:
    case Hexagon::V6_vtmpybus:
    case Hexagon::V6_vtmpyhb: {
      // op: Vuu32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vaddb_dv:
    case Hexagon::V6_vaddbsat_dv:
    case Hexagon::V6_vaddh_dv:
    case Hexagon::V6_vaddhsat_dv:
    case Hexagon::V6_vaddubsat_dv:
    case Hexagon::V6_vadduhsat_dv:
    case Hexagon::V6_vadduwsat_dv:
    case Hexagon::V6_vaddw_dv:
    case Hexagon::V6_vaddwsat_dv:
    case Hexagon::V6_vmpabusv:
    case Hexagon::V6_vmpabuuv:
    case Hexagon::V6_vsubb_dv:
    case Hexagon::V6_vsubbsat_dv:
    case Hexagon::V6_vsubh_dv:
    case Hexagon::V6_vsubhsat_dv:
    case Hexagon::V6_vsububsat_dv:
    case Hexagon::V6_vsubuhsat_dv:
    case Hexagon::V6_vsubuwsat_dv:
    case Hexagon::V6_vsubw_dv:
    case Hexagon::V6_vsubwsat_dv: {
      // op: Vuu32
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Vvv32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vdd32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vdmpyhisat_acc:
    case Hexagon::V6_vdmpyhsuisat_acc: {
      // op: Vuu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::V6_vdmpybus_dv_acc:
    case Hexagon::V6_vdmpyhb_dv_acc:
    case Hexagon::V6_vdsaduh_acc:
    case Hexagon::V6_vmpabus_acc:
    case Hexagon::V6_vmpabuu_acc:
    case Hexagon::V6_vmpahb_acc:
    case Hexagon::V6_vmpauhb_acc:
    case Hexagon::V6_vtmpyb_acc:
    case Hexagon::V6_vtmpybus_acc:
    case Hexagon::V6_vtmpyhb_acc: {
      // op: Vuu32
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 8;
      Value |= op;
      // op: Rt32
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: Vxx32
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case Hexagon::CALLProfile:
    case Hexagon::PS_call_stk:
    case Hexagon::RESTORE_DEALLOC_BEFORE_TAILCALL_V4:
    case Hexagon::RESTORE_DEALLOC_BEFORE_TAILCALL_V4_EXT:
    case Hexagon::RESTORE_DEALLOC_BEFORE_TAILCALL_V4_EXT_PIC:
    case Hexagon::RESTORE_DEALLOC_BEFORE_TAILCALL_V4_PIC:
    case Hexagon::RESTORE_DEALLOC_RET_JMP_V4:
    case Hexagon::RESTORE_DEALLOC_RET_JMP_V4_EXT:
    case Hexagon::RESTORE_DEALLOC_RET_JMP_V4_EXT_PIC:
    case Hexagon::RESTORE_DEALLOC_RET_JMP_V4_PIC:
    case Hexagon::SAVE_REGISTERS_CALL_V4:
    case Hexagon::SAVE_REGISTERS_CALL_V4STK:
    case Hexagon::SAVE_REGISTERS_CALL_V4STK_EXT:
    case Hexagon::SAVE_REGISTERS_CALL_V4STK_EXT_PIC:
    case Hexagon::SAVE_REGISTERS_CALL_V4STK_PIC:
    case Hexagon::SAVE_REGISTERS_CALL_V4_EXT:
    case Hexagon::SAVE_REGISTERS_CALL_V4_EXT_PIC:
    case Hexagon::SAVE_REGISTERS_CALL_V4_PIC: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(16744448)) << 1;
      Value |= (op & UINT64_C(32764)) >> 1;
      break;
    }
    case Hexagon::EH_RETURN_JMPR:
    case Hexagon::PS_jmpret: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::HI:
    case Hexagon::LO: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      // op: imm_value
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(49152)) << 8;
      Value |= (op & UINT64_C(16383));
      break;
    }
    case Hexagon::J2_loop0iext:
    case Hexagon::J2_loop1iext: {
      // op: offset
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(496)) << 4;
      Value |= (op & UINT64_C(12)) << 1;
      // op: src2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(992)) << 11;
      Value |= (op & UINT64_C(28)) << 3;
      Value |= (op & UINT64_C(3));
      break;
    }
    case Hexagon::J2_loop0rext:
    case Hexagon::J2_loop1rext: {
      // op: offset
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(496)) << 4;
      Value |= (op & UINT64_C(12)) << 1;
      // op: src2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
      break;
    }
    case Hexagon::PS_jmpretf:
    case Hexagon::PS_jmpretfnew:
    case Hexagon::PS_jmpretfnewpt:
    case Hexagon::PS_jmprett:
    case Hexagon::PS_jmprettnew:
    case Hexagon::PS_jmprettnewpt: {
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 8;
      Value |= op;
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 16;
      Value |= op;
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
  Feature_HasV66Bit = 5,
  Feature_HasV65Bit = 4,
  Feature_HasV62Bit = 3,
  Feature_HasV60Bit = 2,
  Feature_HasV55Bit = 1,
  Feature_HasV5Bit = 0,
  Feature_UseHVX64BBit = 8,
  Feature_UseHVX128BBit = 7,
  Feature_UseHVXBit = 6,
  Feature_UseHVXV60Bit = 9,
  Feature_UseHVXV62Bit = 10,
  Feature_UseHVXV65Bit = 11,
  Feature_UseHVXV66Bit = 12,
  Feature_UseZRegBit = 13,
};

#ifndef NDEBUG
static const char *SubtargetFeatureNames[] = {
  "Feature_HasV5",
  "Feature_HasV55",
  "Feature_HasV60",
  "Feature_HasV62",
  "Feature_HasV65",
  "Feature_HasV66",
  "Feature_UseHVX",
  "Feature_UseHVX128B",
  "Feature_UseHVX64B",
  "Feature_UseHVXV60",
  "Feature_UseHVXV62",
  "Feature_UseHVXV65",
  "Feature_UseHVXV66",
  "Feature_UseZReg",
  nullptr
};

#endif // NDEBUG
FeatureBitset HexagonMCCodeEmitter::
computeAvailableFeatures(const FeatureBitset& FB) const {
  FeatureBitset Features;
  if ((FB[Hexagon::ArchV66]))
    Features.set(Feature_HasV66Bit);
  if ((FB[Hexagon::ArchV65]))
    Features.set(Feature_HasV65Bit);
  if ((FB[Hexagon::ArchV62]))
    Features.set(Feature_HasV62Bit);
  if ((FB[Hexagon::ArchV60]))
    Features.set(Feature_HasV60Bit);
  if ((FB[Hexagon::ArchV55]))
    Features.set(Feature_HasV55Bit);
  if ((FB[Hexagon::ArchV5]))
    Features.set(Feature_HasV5Bit);
  if ((FB[Hexagon::ExtensionHVX64B]))
    Features.set(Feature_UseHVX64BBit);
  if ((FB[Hexagon::ExtensionHVX128B]))
    Features.set(Feature_UseHVX128BBit);
  if ((FB[Hexagon::ExtensionHVXV60]))
    Features.set(Feature_UseHVXBit);
  if ((FB[Hexagon::ExtensionHVXV60]))
    Features.set(Feature_UseHVXV60Bit);
  if ((FB[Hexagon::ExtensionHVXV62]))
    Features.set(Feature_UseHVXV62Bit);
  if ((FB[Hexagon::ExtensionHVXV65]))
    Features.set(Feature_UseHVXV65Bit);
  if ((FB[Hexagon::ExtensionHVXV66]))
    Features.set(Feature_UseHVXV66Bit);
  if ((FB[Hexagon::ExtensionZReg]))
    Features.set(Feature_UseZRegBit);
  return Features;
}

#ifndef NDEBUG
// Feature bitsets.
enum : uint8_t {
  CEFBS_None,
  CEFBS_HasV55,
  CEFBS_HasV60,
  CEFBS_HasV62,
  CEFBS_HasV65,
  CEFBS_HasV66,
  CEFBS_UseHVXV60,
  CEFBS_UseHVXV62,
  CEFBS_UseHVXV65,
  CEFBS_UseHVXV66,
  CEFBS_HasV60_UseHVX,
  CEFBS_UseHVXV66_UseZReg,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // CEFBS_None
  {Feature_HasV55Bit, },
  {Feature_HasV60Bit, },
  {Feature_HasV62Bit, },
  {Feature_HasV65Bit, },
  {Feature_HasV66Bit, },
  {Feature_UseHVXV60Bit, },
  {Feature_UseHVXV62Bit, },
  {Feature_UseHVXV65Bit, },
  {Feature_UseHVXV66Bit, },
  {Feature_HasV60Bit, Feature_UseHVXBit, },
  {Feature_UseHVXV66Bit, Feature_UseZRegBit, },
};
#endif // NDEBUG

void HexagonMCCodeEmitter::verifyInstructionPredicates(
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
    CEFBS_None, // A2_addsp = 175
    CEFBS_None, // A2_iconst = 176
    CEFBS_None, // A2_neg = 177
    CEFBS_None, // A2_not = 178
    CEFBS_None, // A2_tfrf = 179
    CEFBS_None, // A2_tfrfnew = 180
    CEFBS_None, // A2_tfrp = 181
    CEFBS_None, // A2_tfrpf = 182
    CEFBS_None, // A2_tfrpfnew = 183
    CEFBS_None, // A2_tfrpi = 184
    CEFBS_None, // A2_tfrpt = 185
    CEFBS_None, // A2_tfrptnew = 186
    CEFBS_None, // A2_tfrt = 187
    CEFBS_None, // A2_tfrtnew = 188
    CEFBS_None, // A2_vaddb_map = 189
    CEFBS_None, // A2_vsubb_map = 190
    CEFBS_None, // A2_zxtb = 191
    CEFBS_None, // A4_boundscheck = 192
    CEFBS_None, // ADJCALLSTACKDOWN = 193
    CEFBS_None, // ADJCALLSTACKUP = 194
    CEFBS_None, // C2_cmpgei = 195
    CEFBS_None, // C2_cmpgeui = 196
    CEFBS_None, // C2_cmplt = 197
    CEFBS_None, // C2_cmpltu = 198
    CEFBS_None, // C2_pxfer_map = 199
    CEFBS_None, // DUPLEX_Pseudo = 200
    CEFBS_None, // ENDLOOP0 = 201
    CEFBS_None, // ENDLOOP01 = 202
    CEFBS_None, // ENDLOOP1 = 203
    CEFBS_None, // J2_endloop0 = 204
    CEFBS_None, // J2_endloop01 = 205
    CEFBS_None, // J2_endloop1 = 206
    CEFBS_HasV60, // J2_jumpf_nopred_map = 207
    CEFBS_HasV60, // J2_jumprf_nopred_map = 208
    CEFBS_HasV60, // J2_jumprt_nopred_map = 209
    CEFBS_HasV60, // J2_jumpt_nopred_map = 210
    CEFBS_None, // J2_trap1_noregmap = 211
    CEFBS_None, // L2_loadalignb_zomap = 212
    CEFBS_None, // L2_loadalignh_zomap = 213
    CEFBS_None, // L2_loadbsw2_zomap = 214
    CEFBS_None, // L2_loadbsw4_zomap = 215
    CEFBS_None, // L2_loadbzw2_zomap = 216
    CEFBS_None, // L2_loadbzw4_zomap = 217
    CEFBS_None, // L2_loadrb_zomap = 218
    CEFBS_None, // L2_loadrd_zomap = 219
    CEFBS_None, // L2_loadrh_zomap = 220
    CEFBS_None, // L2_loadri_zomap = 221
    CEFBS_None, // L2_loadrub_zomap = 222
    CEFBS_None, // L2_loadruh_zomap = 223
    CEFBS_None, // L2_ploadrbf_zomap = 224
    CEFBS_None, // L2_ploadrbfnew_zomap = 225
    CEFBS_None, // L2_ploadrbt_zomap = 226
    CEFBS_None, // L2_ploadrbtnew_zomap = 227
    CEFBS_None, // L2_ploadrdf_zomap = 228
    CEFBS_None, // L2_ploadrdfnew_zomap = 229
    CEFBS_None, // L2_ploadrdt_zomap = 230
    CEFBS_None, // L2_ploadrdtnew_zomap = 231
    CEFBS_None, // L2_ploadrhf_zomap = 232
    CEFBS_None, // L2_ploadrhfnew_zomap = 233
    CEFBS_None, // L2_ploadrht_zomap = 234
    CEFBS_None, // L2_ploadrhtnew_zomap = 235
    CEFBS_None, // L2_ploadrif_zomap = 236
    CEFBS_None, // L2_ploadrifnew_zomap = 237
    CEFBS_None, // L2_ploadrit_zomap = 238
    CEFBS_None, // L2_ploadritnew_zomap = 239
    CEFBS_None, // L2_ploadrubf_zomap = 240
    CEFBS_None, // L2_ploadrubfnew_zomap = 241
    CEFBS_None, // L2_ploadrubt_zomap = 242
    CEFBS_None, // L2_ploadrubtnew_zomap = 243
    CEFBS_None, // L2_ploadruhf_zomap = 244
    CEFBS_None, // L2_ploadruhfnew_zomap = 245
    CEFBS_None, // L2_ploadruht_zomap = 246
    CEFBS_None, // L2_ploadruhtnew_zomap = 247
    CEFBS_None, // L4_add_memopb_zomap = 248
    CEFBS_None, // L4_add_memoph_zomap = 249
    CEFBS_None, // L4_add_memopw_zomap = 250
    CEFBS_None, // L4_and_memopb_zomap = 251
    CEFBS_None, // L4_and_memoph_zomap = 252
    CEFBS_None, // L4_and_memopw_zomap = 253
    CEFBS_None, // L4_iadd_memopb_zomap = 254
    CEFBS_None, // L4_iadd_memoph_zomap = 255
    CEFBS_None, // L4_iadd_memopw_zomap = 256
    CEFBS_None, // L4_iand_memopb_zomap = 257
    CEFBS_None, // L4_iand_memoph_zomap = 258
    CEFBS_None, // L4_iand_memopw_zomap = 259
    CEFBS_None, // L4_ior_memopb_zomap = 260
    CEFBS_None, // L4_ior_memoph_zomap = 261
    CEFBS_None, // L4_ior_memopw_zomap = 262
    CEFBS_None, // L4_isub_memopb_zomap = 263
    CEFBS_None, // L4_isub_memoph_zomap = 264
    CEFBS_None, // L4_isub_memopw_zomap = 265
    CEFBS_None, // L4_or_memopb_zomap = 266
    CEFBS_None, // L4_or_memoph_zomap = 267
    CEFBS_None, // L4_or_memopw_zomap = 268
    CEFBS_HasV65, // L4_return_map_to_raw_f = 269
    CEFBS_HasV65, // L4_return_map_to_raw_fnew_pnt = 270
    CEFBS_HasV65, // L4_return_map_to_raw_fnew_pt = 271
    CEFBS_HasV65, // L4_return_map_to_raw_t = 272
    CEFBS_HasV65, // L4_return_map_to_raw_tnew_pnt = 273
    CEFBS_HasV65, // L4_return_map_to_raw_tnew_pt = 274
    CEFBS_None, // L4_sub_memopb_zomap = 275
    CEFBS_None, // L4_sub_memoph_zomap = 276
    CEFBS_None, // L4_sub_memopw_zomap = 277
    CEFBS_HasV65, // L6_deallocframe_map_to_raw = 278
    CEFBS_HasV65, // L6_return_map_to_raw = 279
    CEFBS_None, // LDriw_ctr = 280
    CEFBS_None, // LDriw_pred = 281
    CEFBS_None, // M2_mpysmi = 282
    CEFBS_None, // M2_mpyui = 283
    CEFBS_None, // M2_vrcmpys_acc_s1 = 284
    CEFBS_None, // M2_vrcmpys_s1 = 285
    CEFBS_None, // M2_vrcmpys_s1rp = 286
    CEFBS_None, // PS_aligna = 287
    CEFBS_None, // PS_alloca = 288
    CEFBS_None, // PS_call_nr = 289
    CEFBS_None, // PS_crash = 290
    CEFBS_None, // PS_false = 291
    CEFBS_None, // PS_fi = 292
    CEFBS_None, // PS_fia = 293
    CEFBS_None, // PS_loadrb_pci = 294
    CEFBS_None, // PS_loadrb_pcr = 295
    CEFBS_None, // PS_loadrd_pci = 296
    CEFBS_None, // PS_loadrd_pcr = 297
    CEFBS_None, // PS_loadrh_pci = 298
    CEFBS_None, // PS_loadrh_pcr = 299
    CEFBS_None, // PS_loadri_pci = 300
    CEFBS_None, // PS_loadri_pcr = 301
    CEFBS_None, // PS_loadrub_pci = 302
    CEFBS_None, // PS_loadrub_pcr = 303
    CEFBS_None, // PS_loadruh_pci = 304
    CEFBS_None, // PS_loadruh_pcr = 305
    CEFBS_None, // PS_pselect = 306
    CEFBS_None, // PS_qfalse = 307
    CEFBS_None, // PS_qtrue = 308
    CEFBS_None, // PS_storerb_pci = 309
    CEFBS_None, // PS_storerb_pcr = 310
    CEFBS_None, // PS_storerd_pci = 311
    CEFBS_None, // PS_storerd_pcr = 312
    CEFBS_None, // PS_storerf_pci = 313
    CEFBS_None, // PS_storerf_pcr = 314
    CEFBS_None, // PS_storerh_pci = 315
    CEFBS_None, // PS_storerh_pcr = 316
    CEFBS_None, // PS_storeri_pci = 317
    CEFBS_None, // PS_storeri_pcr = 318
    CEFBS_None, // PS_tailcall_i = 319
    CEFBS_None, // PS_tailcall_r = 320
    CEFBS_None, // PS_true = 321
    CEFBS_None, // PS_vdd0 = 322
    CEFBS_HasV60_UseHVX, // PS_vloadrq_ai = 323
    CEFBS_HasV60_UseHVX, // PS_vloadrv_ai = 324
    CEFBS_HasV60_UseHVX, // PS_vloadrv_nt_ai = 325
    CEFBS_HasV60_UseHVX, // PS_vloadrw_ai = 326
    CEFBS_HasV60_UseHVX, // PS_vloadrw_nt_ai = 327
    CEFBS_None, // PS_vmulw = 328
    CEFBS_None, // PS_vmulw_acc = 329
    CEFBS_HasV60_UseHVX, // PS_vselect = 330
    CEFBS_HasV60_UseHVX, // PS_vstorerq_ai = 331
    CEFBS_HasV60_UseHVX, // PS_vstorerv_ai = 332
    CEFBS_HasV60_UseHVX, // PS_vstorerv_nt_ai = 333
    CEFBS_HasV60_UseHVX, // PS_vstorerw_ai = 334
    CEFBS_HasV60_UseHVX, // PS_vstorerw_nt_ai = 335
    CEFBS_HasV60_UseHVX, // PS_wselect = 336
    CEFBS_None, // S2_asr_i_p_rnd_goodsyntax = 337
    CEFBS_None, // S2_asr_i_r_rnd_goodsyntax = 338
    CEFBS_None, // S2_pstorerbf_zomap = 339
    CEFBS_None, // S2_pstorerbnewf_zomap = 340
    CEFBS_None, // S2_pstorerbnewt_zomap = 341
    CEFBS_None, // S2_pstorerbt_zomap = 342
    CEFBS_None, // S2_pstorerdf_zomap = 343
    CEFBS_None, // S2_pstorerdt_zomap = 344
    CEFBS_None, // S2_pstorerff_zomap = 345
    CEFBS_None, // S2_pstorerft_zomap = 346
    CEFBS_None, // S2_pstorerhf_zomap = 347
    CEFBS_None, // S2_pstorerhnewf_zomap = 348
    CEFBS_None, // S2_pstorerhnewt_zomap = 349
    CEFBS_None, // S2_pstorerht_zomap = 350
    CEFBS_None, // S2_pstorerif_zomap = 351
    CEFBS_None, // S2_pstorerinewf_zomap = 352
    CEFBS_None, // S2_pstorerinewt_zomap = 353
    CEFBS_None, // S2_pstorerit_zomap = 354
    CEFBS_None, // S2_storerb_zomap = 355
    CEFBS_None, // S2_storerbnew_zomap = 356
    CEFBS_None, // S2_storerd_zomap = 357
    CEFBS_None, // S2_storerf_zomap = 358
    CEFBS_None, // S2_storerh_zomap = 359
    CEFBS_None, // S2_storerhnew_zomap = 360
    CEFBS_None, // S2_storeri_zomap = 361
    CEFBS_None, // S2_storerinew_zomap = 362
    CEFBS_None, // S2_tableidxb_goodsyntax = 363
    CEFBS_None, // S2_tableidxd_goodsyntax = 364
    CEFBS_None, // S2_tableidxh_goodsyntax = 365
    CEFBS_None, // S2_tableidxw_goodsyntax = 366
    CEFBS_None, // S4_pstorerbfnew_zomap = 367
    CEFBS_None, // S4_pstorerbnewfnew_zomap = 368
    CEFBS_None, // S4_pstorerbnewtnew_zomap = 369
    CEFBS_None, // S4_pstorerbtnew_zomap = 370
    CEFBS_None, // S4_pstorerdfnew_zomap = 371
    CEFBS_None, // S4_pstorerdtnew_zomap = 372
    CEFBS_None, // S4_pstorerffnew_zomap = 373
    CEFBS_None, // S4_pstorerftnew_zomap = 374
    CEFBS_None, // S4_pstorerhfnew_zomap = 375
    CEFBS_None, // S4_pstorerhnewfnew_zomap = 376
    CEFBS_None, // S4_pstorerhnewtnew_zomap = 377
    CEFBS_None, // S4_pstorerhtnew_zomap = 378
    CEFBS_None, // S4_pstorerifnew_zomap = 379
    CEFBS_None, // S4_pstorerinewfnew_zomap = 380
    CEFBS_None, // S4_pstorerinewtnew_zomap = 381
    CEFBS_None, // S4_pstoreritnew_zomap = 382
    CEFBS_None, // S4_storeirb_zomap = 383
    CEFBS_None, // S4_storeirbf_zomap = 384
    CEFBS_None, // S4_storeirbfnew_zomap = 385
    CEFBS_None, // S4_storeirbt_zomap = 386
    CEFBS_None, // S4_storeirbtnew_zomap = 387
    CEFBS_None, // S4_storeirh_zomap = 388
    CEFBS_None, // S4_storeirhf_zomap = 389
    CEFBS_None, // S4_storeirhfnew_zomap = 390
    CEFBS_None, // S4_storeirht_zomap = 391
    CEFBS_None, // S4_storeirhtnew_zomap = 392
    CEFBS_None, // S4_storeiri_zomap = 393
    CEFBS_None, // S4_storeirif_zomap = 394
    CEFBS_None, // S4_storeirifnew_zomap = 395
    CEFBS_None, // S4_storeirit_zomap = 396
    CEFBS_None, // S4_storeiritnew_zomap = 397
    CEFBS_None, // S5_asrhub_rnd_sat_goodsyntax = 398
    CEFBS_None, // S5_vasrhrnd_goodsyntax = 399
    CEFBS_HasV65, // S6_allocframe_to_raw = 400
    CEFBS_None, // STriw_ctr = 401
    CEFBS_None, // STriw_pred = 402
    CEFBS_UseHVXV60, // V6_MAP_equb = 403
    CEFBS_UseHVXV60, // V6_MAP_equb_and = 404
    CEFBS_UseHVXV60, // V6_MAP_equb_ior = 405
    CEFBS_UseHVXV60, // V6_MAP_equb_xor = 406
    CEFBS_UseHVXV60, // V6_MAP_equh = 407
    CEFBS_UseHVXV60, // V6_MAP_equh_and = 408
    CEFBS_UseHVXV60, // V6_MAP_equh_ior = 409
    CEFBS_UseHVXV60, // V6_MAP_equh_xor = 410
    CEFBS_UseHVXV60, // V6_MAP_equw = 411
    CEFBS_UseHVXV60, // V6_MAP_equw_and = 412
    CEFBS_UseHVXV60, // V6_MAP_equw_ior = 413
    CEFBS_UseHVXV60, // V6_MAP_equw_xor = 414
    CEFBS_UseHVXV60, // V6_extractw_alt = 415
    CEFBS_UseHVXV60, // V6_hi = 416
    CEFBS_UseHVXV60, // V6_ld0 = 417
    CEFBS_UseHVXV62, // V6_ldcnp0 = 418
    CEFBS_UseHVXV62, // V6_ldcnpnt0 = 419
    CEFBS_UseHVXV62, // V6_ldcp0 = 420
    CEFBS_UseHVXV62, // V6_ldcpnt0 = 421
    CEFBS_UseHVXV62, // V6_ldnp0 = 422
    CEFBS_UseHVXV62, // V6_ldnpnt0 = 423
    CEFBS_UseHVXV60, // V6_ldnt0 = 424
    CEFBS_HasV62, // V6_ldntnt0 = 425
    CEFBS_UseHVXV62, // V6_ldp0 = 426
    CEFBS_UseHVXV62, // V6_ldpnt0 = 427
    CEFBS_UseHVXV62, // V6_ldtnp0 = 428
    CEFBS_UseHVXV62, // V6_ldtnpnt0 = 429
    CEFBS_UseHVXV62, // V6_ldtp0 = 430
    CEFBS_UseHVXV62, // V6_ldtpnt0 = 431
    CEFBS_UseHVXV60, // V6_ldu0 = 432
    CEFBS_UseHVXV60, // V6_lo = 433
    CEFBS_UseHVXV60, // V6_st0 = 434
    CEFBS_UseHVXV60, // V6_stn0 = 435
    CEFBS_UseHVXV60, // V6_stnnt0 = 436
    CEFBS_UseHVXV60, // V6_stnp0 = 437
    CEFBS_UseHVXV60, // V6_stnpnt0 = 438
    CEFBS_UseHVXV60, // V6_stnq0 = 439
    CEFBS_UseHVXV60, // V6_stnqnt0 = 440
    CEFBS_UseHVXV60, // V6_stnt0 = 441
    CEFBS_UseHVXV60, // V6_stp0 = 442
    CEFBS_UseHVXV60, // V6_stpnt0 = 443
    CEFBS_UseHVXV60, // V6_stq0 = 444
    CEFBS_UseHVXV60, // V6_stqnt0 = 445
    CEFBS_UseHVXV60, // V6_stu0 = 446
    CEFBS_UseHVXV60, // V6_stunp0 = 447
    CEFBS_UseHVXV60, // V6_stup0 = 448
    CEFBS_UseHVXV65, // V6_vabsb_alt = 449
    CEFBS_UseHVXV65, // V6_vabsb_sat_alt = 450
    CEFBS_UseHVXV60, // V6_vabsdiffh_alt = 451
    CEFBS_UseHVXV60, // V6_vabsdiffub_alt = 452
    CEFBS_UseHVXV60, // V6_vabsdiffuh_alt = 453
    CEFBS_UseHVXV60, // V6_vabsdiffw_alt = 454
    CEFBS_UseHVXV60, // V6_vabsh_alt = 455
    CEFBS_UseHVXV60, // V6_vabsh_sat_alt = 456
    CEFBS_UseHVXV65, // V6_vabsub_alt = 457
    CEFBS_UseHVXV65, // V6_vabsuh_alt = 458
    CEFBS_UseHVXV65, // V6_vabsuw_alt = 459
    CEFBS_UseHVXV60, // V6_vabsw_alt = 460
    CEFBS_UseHVXV60, // V6_vabsw_sat_alt = 461
    CEFBS_UseHVXV60, // V6_vaddb_alt = 462
    CEFBS_UseHVXV60, // V6_vaddb_dv_alt = 463
    CEFBS_UseHVXV60, // V6_vaddbnq_alt = 464
    CEFBS_UseHVXV60, // V6_vaddbq_alt = 465
    CEFBS_UseHVXV62, // V6_vaddbsat_alt = 466
    CEFBS_UseHVXV62, // V6_vaddbsat_dv_alt = 467
    CEFBS_UseHVXV60, // V6_vaddh_alt = 468
    CEFBS_UseHVXV60, // V6_vaddh_dv_alt = 469
    CEFBS_UseHVXV60, // V6_vaddhnq_alt = 470
    CEFBS_UseHVXV60, // V6_vaddhq_alt = 471
    CEFBS_UseHVXV60, // V6_vaddhsat_alt = 472
    CEFBS_UseHVXV60, // V6_vaddhsat_dv_alt = 473
    CEFBS_UseHVXV62, // V6_vaddhw_acc_alt = 474
    CEFBS_UseHVXV60, // V6_vaddhw_alt = 475
    CEFBS_UseHVXV62, // V6_vaddubh_acc_alt = 476
    CEFBS_UseHVXV60, // V6_vaddubh_alt = 477
    CEFBS_UseHVXV60, // V6_vaddubsat_alt = 478
    CEFBS_UseHVXV60, // V6_vaddubsat_dv_alt = 479
    CEFBS_UseHVXV60, // V6_vadduhsat_alt = 480
    CEFBS_UseHVXV60, // V6_vadduhsat_dv_alt = 481
    CEFBS_UseHVXV62, // V6_vadduhw_acc_alt = 482
    CEFBS_UseHVXV60, // V6_vadduhw_alt = 483
    CEFBS_UseHVXV62, // V6_vadduwsat_alt = 484
    CEFBS_UseHVXV62, // V6_vadduwsat_dv_alt = 485
    CEFBS_UseHVXV60, // V6_vaddw_alt = 486
    CEFBS_UseHVXV60, // V6_vaddw_dv_alt = 487
    CEFBS_UseHVXV60, // V6_vaddwnq_alt = 488
    CEFBS_UseHVXV60, // V6_vaddwq_alt = 489
    CEFBS_UseHVXV60, // V6_vaddwsat_alt = 490
    CEFBS_UseHVXV60, // V6_vaddwsat_dv_alt = 491
    CEFBS_UseHVXV62, // V6_vandnqrt_acc_alt = 492
    CEFBS_UseHVXV62, // V6_vandnqrt_alt = 493
    CEFBS_UseHVXV60, // V6_vandqrt_acc_alt = 494
    CEFBS_UseHVXV60, // V6_vandqrt_alt = 495
    CEFBS_UseHVXV60, // V6_vandvrt_acc_alt = 496
    CEFBS_UseHVXV60, // V6_vandvrt_alt = 497
    CEFBS_UseHVXV65, // V6_vaslh_acc_alt = 498
    CEFBS_UseHVXV60, // V6_vaslh_alt = 499
    CEFBS_UseHVXV60, // V6_vaslhv_alt = 500
    CEFBS_UseHVXV60, // V6_vaslw_acc_alt = 501
    CEFBS_UseHVXV60, // V6_vaslw_alt = 502
    CEFBS_UseHVXV60, // V6_vaslwv_alt = 503
    CEFBS_UseHVXV66, // V6_vasr_into_alt = 504
    CEFBS_UseHVXV65, // V6_vasrh_acc_alt = 505
    CEFBS_UseHVXV60, // V6_vasrh_alt = 506
    CEFBS_HasV60, // V6_vasrhbrndsat_alt = 507
    CEFBS_HasV60, // V6_vasrhubrndsat_alt = 508
    CEFBS_HasV60, // V6_vasrhubsat_alt = 509
    CEFBS_UseHVXV60, // V6_vasrhv_alt = 510
    CEFBS_UseHVXV60, // V6_vasrw_acc_alt = 511
    CEFBS_UseHVXV60, // V6_vasrw_alt = 512
    CEFBS_HasV60, // V6_vasrwh_alt = 513
    CEFBS_HasV60, // V6_vasrwhrndsat_alt = 514
    CEFBS_HasV60, // V6_vasrwhsat_alt = 515
    CEFBS_HasV60, // V6_vasrwuhsat_alt = 516
    CEFBS_UseHVXV60, // V6_vasrwv_alt = 517
    CEFBS_UseHVXV60, // V6_vassignp = 518
    CEFBS_UseHVXV65, // V6_vavgb_alt = 519
    CEFBS_UseHVXV65, // V6_vavgbrnd_alt = 520
    CEFBS_UseHVXV60, // V6_vavgh_alt = 521
    CEFBS_UseHVXV60, // V6_vavghrnd_alt = 522
    CEFBS_UseHVXV60, // V6_vavgub_alt = 523
    CEFBS_UseHVXV60, // V6_vavgubrnd_alt = 524
    CEFBS_UseHVXV60, // V6_vavguh_alt = 525
    CEFBS_UseHVXV60, // V6_vavguhrnd_alt = 526
    CEFBS_UseHVXV65, // V6_vavguw_alt = 527
    CEFBS_UseHVXV65, // V6_vavguwrnd_alt = 528
    CEFBS_UseHVXV60, // V6_vavgw_alt = 529
    CEFBS_UseHVXV60, // V6_vavgwrnd_alt = 530
    CEFBS_UseHVXV60, // V6_vcl0h_alt = 531
    CEFBS_UseHVXV60, // V6_vcl0w_alt = 532
    CEFBS_UseHVXV60, // V6_vd0 = 533
    CEFBS_UseHVXV65, // V6_vdd0 = 534
    CEFBS_UseHVXV60, // V6_vdealb4w_alt = 535
    CEFBS_UseHVXV60, // V6_vdealb_alt = 536
    CEFBS_UseHVXV60, // V6_vdealh_alt = 537
    CEFBS_UseHVXV60, // V6_vdmpybus_acc_alt = 538
    CEFBS_UseHVXV60, // V6_vdmpybus_alt = 539
    CEFBS_UseHVXV60, // V6_vdmpybus_dv_acc_alt = 540
    CEFBS_UseHVXV60, // V6_vdmpybus_dv_alt = 541
    CEFBS_UseHVXV60, // V6_vdmpyhb_acc_alt = 542
    CEFBS_UseHVXV60, // V6_vdmpyhb_alt = 543
    CEFBS_UseHVXV60, // V6_vdmpyhb_dv_acc_alt = 544
    CEFBS_UseHVXV60, // V6_vdmpyhb_dv_alt = 545
    CEFBS_UseHVXV60, // V6_vdmpyhisat_acc_alt = 546
    CEFBS_UseHVXV60, // V6_vdmpyhisat_alt = 547
    CEFBS_UseHVXV60, // V6_vdmpyhsat_acc_alt = 548
    CEFBS_UseHVXV60, // V6_vdmpyhsat_alt = 549
    CEFBS_UseHVXV60, // V6_vdmpyhsuisat_acc_alt = 550
    CEFBS_UseHVXV60, // V6_vdmpyhsuisat_alt = 551
    CEFBS_UseHVXV60, // V6_vdmpyhsusat_acc_alt = 552
    CEFBS_UseHVXV60, // V6_vdmpyhsusat_alt = 553
    CEFBS_UseHVXV60, // V6_vdmpyhvsat_acc_alt = 554
    CEFBS_UseHVXV60, // V6_vdmpyhvsat_alt = 555
    CEFBS_UseHVXV60, // V6_vdsaduh_acc_alt = 556
    CEFBS_UseHVXV60, // V6_vdsaduh_alt = 557
    CEFBS_None, // V6_vgathermh_pseudo = 558
    CEFBS_None, // V6_vgathermhq_pseudo = 559
    CEFBS_None, // V6_vgathermhw_pseudo = 560
    CEFBS_None, // V6_vgathermhwq_pseudo = 561
    CEFBS_None, // V6_vgathermw_pseudo = 562
    CEFBS_None, // V6_vgathermwq_pseudo = 563
    CEFBS_UseHVXV60, // V6_vlsrh_alt = 564
    CEFBS_UseHVXV60, // V6_vlsrhv_alt = 565
    CEFBS_UseHVXV60, // V6_vlsrw_alt = 566
    CEFBS_UseHVXV60, // V6_vlsrwv_alt = 567
    CEFBS_UseHVXV62, // V6_vmaxb_alt = 568
    CEFBS_UseHVXV60, // V6_vmaxh_alt = 569
    CEFBS_UseHVXV60, // V6_vmaxub_alt = 570
    CEFBS_UseHVXV60, // V6_vmaxuh_alt = 571
    CEFBS_UseHVXV60, // V6_vmaxw_alt = 572
    CEFBS_UseHVXV62, // V6_vminb_alt = 573
    CEFBS_UseHVXV60, // V6_vminh_alt = 574
    CEFBS_UseHVXV60, // V6_vminub_alt = 575
    CEFBS_UseHVXV60, // V6_vminuh_alt = 576
    CEFBS_UseHVXV60, // V6_vminw_alt = 577
    CEFBS_UseHVXV60, // V6_vmpabus_acc_alt = 578
    CEFBS_UseHVXV60, // V6_vmpabus_alt = 579
    CEFBS_UseHVXV60, // V6_vmpabusv_alt = 580
    CEFBS_UseHVXV65, // V6_vmpabuu_acc_alt = 581
    CEFBS_UseHVXV65, // V6_vmpabuu_alt = 582
    CEFBS_UseHVXV60, // V6_vmpabuuv_alt = 583
    CEFBS_UseHVXV60, // V6_vmpahb_acc_alt = 584
    CEFBS_UseHVXV60, // V6_vmpahb_alt = 585
    CEFBS_UseHVXV62, // V6_vmpauhb_acc_alt = 586
    CEFBS_UseHVXV62, // V6_vmpauhb_alt = 587
    CEFBS_UseHVXV60, // V6_vmpybus_acc_alt = 588
    CEFBS_UseHVXV60, // V6_vmpybus_alt = 589
    CEFBS_UseHVXV60, // V6_vmpybusv_acc_alt = 590
    CEFBS_UseHVXV60, // V6_vmpybusv_alt = 591
    CEFBS_UseHVXV60, // V6_vmpybv_acc_alt = 592
    CEFBS_UseHVXV60, // V6_vmpybv_alt = 593
    CEFBS_UseHVXV60, // V6_vmpyewuh_alt = 594
    CEFBS_UseHVXV65, // V6_vmpyh_acc_alt = 595
    CEFBS_UseHVXV60, // V6_vmpyh_alt = 596
    CEFBS_UseHVXV60, // V6_vmpyhsat_acc_alt = 597
    CEFBS_UseHVXV60, // V6_vmpyhsrs_alt = 598
    CEFBS_UseHVXV60, // V6_vmpyhss_alt = 599
    CEFBS_UseHVXV60, // V6_vmpyhus_acc_alt = 600
    CEFBS_UseHVXV60, // V6_vmpyhus_alt = 601
    CEFBS_UseHVXV60, // V6_vmpyhv_acc_alt = 602
    CEFBS_UseHVXV60, // V6_vmpyhv_alt = 603
    CEFBS_UseHVXV60, // V6_vmpyhvsrs_alt = 604
    CEFBS_UseHVXV60, // V6_vmpyiewh_acc_alt = 605
    CEFBS_UseHVXV60, // V6_vmpyiewuh_acc_alt = 606
    CEFBS_UseHVXV60, // V6_vmpyiewuh_alt = 607
    CEFBS_UseHVXV60, // V6_vmpyih_acc_alt = 608
    CEFBS_UseHVXV60, // V6_vmpyih_alt = 609
    CEFBS_UseHVXV60, // V6_vmpyihb_acc_alt = 610
    CEFBS_UseHVXV60, // V6_vmpyihb_alt = 611
    CEFBS_UseHVXV60, // V6_vmpyiowh_alt = 612
    CEFBS_UseHVXV60, // V6_vmpyiwb_acc_alt = 613
    CEFBS_UseHVXV60, // V6_vmpyiwb_alt = 614
    CEFBS_UseHVXV60, // V6_vmpyiwh_acc_alt = 615
    CEFBS_UseHVXV60, // V6_vmpyiwh_alt = 616
    CEFBS_UseHVXV62, // V6_vmpyiwub_acc_alt = 617
    CEFBS_UseHVXV62, // V6_vmpyiwub_alt = 618
    CEFBS_UseHVXV60, // V6_vmpyowh_alt = 619
    CEFBS_UseHVXV60, // V6_vmpyowh_rnd_alt = 620
    CEFBS_UseHVXV60, // V6_vmpyowh_rnd_sacc_alt = 621
    CEFBS_UseHVXV60, // V6_vmpyowh_sacc_alt = 622
    CEFBS_UseHVXV60, // V6_vmpyub_acc_alt = 623
    CEFBS_UseHVXV60, // V6_vmpyub_alt = 624
    CEFBS_UseHVXV60, // V6_vmpyubv_acc_alt = 625
    CEFBS_UseHVXV60, // V6_vmpyubv_alt = 626
    CEFBS_UseHVXV60, // V6_vmpyuh_acc_alt = 627
    CEFBS_UseHVXV60, // V6_vmpyuh_alt = 628
    CEFBS_UseHVXV60, // V6_vmpyuhv_acc_alt = 629
    CEFBS_UseHVXV60, // V6_vmpyuhv_alt = 630
    CEFBS_UseHVXV65, // V6_vnavgb_alt = 631
    CEFBS_UseHVXV60, // V6_vnavgh_alt = 632
    CEFBS_UseHVXV60, // V6_vnavgub_alt = 633
    CEFBS_UseHVXV60, // V6_vnavgw_alt = 634
    CEFBS_UseHVXV60, // V6_vnormamth_alt = 635
    CEFBS_UseHVXV60, // V6_vnormamtw_alt = 636
    CEFBS_UseHVXV60, // V6_vpackeb_alt = 637
    CEFBS_UseHVXV60, // V6_vpackeh_alt = 638
    CEFBS_UseHVXV60, // V6_vpackhb_sat_alt = 639
    CEFBS_UseHVXV60, // V6_vpackhub_sat_alt = 640
    CEFBS_UseHVXV60, // V6_vpackob_alt = 641
    CEFBS_UseHVXV60, // V6_vpackoh_alt = 642
    CEFBS_UseHVXV60, // V6_vpackwh_sat_alt = 643
    CEFBS_UseHVXV60, // V6_vpackwuh_sat_alt = 644
    CEFBS_UseHVXV60, // V6_vpopcounth_alt = 645
    CEFBS_UseHVXV65, // V6_vrmpybub_rtt_acc_alt = 646
    CEFBS_UseHVXV65, // V6_vrmpybub_rtt_alt = 647
    CEFBS_UseHVXV60, // V6_vrmpybus_acc_alt = 648
    CEFBS_UseHVXV60, // V6_vrmpybus_alt = 649
    CEFBS_UseHVXV60, // V6_vrmpybusi_acc_alt = 650
    CEFBS_UseHVXV60, // V6_vrmpybusi_alt = 651
    CEFBS_UseHVXV60, // V6_vrmpybusv_acc_alt = 652
    CEFBS_UseHVXV60, // V6_vrmpybusv_alt = 653
    CEFBS_UseHVXV60, // V6_vrmpybv_acc_alt = 654
    CEFBS_UseHVXV60, // V6_vrmpybv_alt = 655
    CEFBS_UseHVXV60, // V6_vrmpyub_acc_alt = 656
    CEFBS_UseHVXV60, // V6_vrmpyub_alt = 657
    CEFBS_UseHVXV65, // V6_vrmpyub_rtt_acc_alt = 658
    CEFBS_UseHVXV65, // V6_vrmpyub_rtt_alt = 659
    CEFBS_UseHVXV60, // V6_vrmpyubi_acc_alt = 660
    CEFBS_UseHVXV60, // V6_vrmpyubi_alt = 661
    CEFBS_UseHVXV60, // V6_vrmpyubv_acc_alt = 662
    CEFBS_UseHVXV60, // V6_vrmpyubv_alt = 663
    CEFBS_UseHVXV66, // V6_vrotr_alt = 664
    CEFBS_UseHVXV60, // V6_vroundhb_alt = 665
    CEFBS_UseHVXV60, // V6_vroundhub_alt = 666
    CEFBS_UseHVXV62, // V6_vrounduhub_alt = 667
    CEFBS_UseHVXV62, // V6_vrounduwuh_alt = 668
    CEFBS_UseHVXV60, // V6_vroundwh_alt = 669
    CEFBS_UseHVXV60, // V6_vroundwuh_alt = 670
    CEFBS_UseHVXV60, // V6_vrsadubi_acc_alt = 671
    CEFBS_UseHVXV60, // V6_vrsadubi_alt = 672
    CEFBS_UseHVXV60, // V6_vsathub_alt = 673
    CEFBS_UseHVXV62, // V6_vsatuwuh_alt = 674
    CEFBS_UseHVXV60, // V6_vsatwh_alt = 675
    CEFBS_UseHVXV60, // V6_vsb_alt = 676
    CEFBS_UseHVXV65, // V6_vscattermh_add_alt = 677
    CEFBS_UseHVXV65, // V6_vscattermh_alt = 678
    CEFBS_UseHVXV65, // V6_vscattermhq_alt = 679
    CEFBS_UseHVXV65, // V6_vscattermw_add_alt = 680
    CEFBS_UseHVXV65, // V6_vscattermw_alt = 681
    CEFBS_UseHVXV65, // V6_vscattermwh_add_alt = 682
    CEFBS_UseHVXV65, // V6_vscattermwh_alt = 683
    CEFBS_UseHVXV65, // V6_vscattermwhq_alt = 684
    CEFBS_UseHVXV65, // V6_vscattermwq_alt = 685
    CEFBS_UseHVXV60, // V6_vsh_alt = 686
    CEFBS_UseHVXV60, // V6_vshufeh_alt = 687
    CEFBS_UseHVXV60, // V6_vshuffb_alt = 688
    CEFBS_UseHVXV60, // V6_vshuffeb_alt = 689
    CEFBS_UseHVXV60, // V6_vshuffh_alt = 690
    CEFBS_UseHVXV60, // V6_vshuffob_alt = 691
    CEFBS_UseHVXV60, // V6_vshufoeb_alt = 692
    CEFBS_UseHVXV60, // V6_vshufoeh_alt = 693
    CEFBS_UseHVXV60, // V6_vshufoh_alt = 694
    CEFBS_UseHVXV60, // V6_vsubb_alt = 695
    CEFBS_UseHVXV60, // V6_vsubb_dv_alt = 696
    CEFBS_UseHVXV60, // V6_vsubbnq_alt = 697
    CEFBS_UseHVXV60, // V6_vsubbq_alt = 698
    CEFBS_UseHVXV62, // V6_vsubbsat_alt = 699
    CEFBS_UseHVXV62, // V6_vsubbsat_dv_alt = 700
    CEFBS_UseHVXV60, // V6_vsubh_alt = 701
    CEFBS_UseHVXV60, // V6_vsubh_dv_alt = 702
    CEFBS_UseHVXV60, // V6_vsubhnq_alt = 703
    CEFBS_UseHVXV60, // V6_vsubhq_alt = 704
    CEFBS_UseHVXV60, // V6_vsubhsat_alt = 705
    CEFBS_UseHVXV60, // V6_vsubhsat_dv_alt = 706
    CEFBS_UseHVXV60, // V6_vsubhw_alt = 707
    CEFBS_UseHVXV60, // V6_vsububh_alt = 708
    CEFBS_UseHVXV60, // V6_vsububsat_alt = 709
    CEFBS_UseHVXV60, // V6_vsububsat_dv_alt = 710
    CEFBS_UseHVXV60, // V6_vsubuhsat_alt = 711
    CEFBS_UseHVXV60, // V6_vsubuhsat_dv_alt = 712
    CEFBS_UseHVXV60, // V6_vsubuhw_alt = 713
    CEFBS_UseHVXV62, // V6_vsubuwsat_alt = 714
    CEFBS_UseHVXV62, // V6_vsubuwsat_dv_alt = 715
    CEFBS_UseHVXV60, // V6_vsubw_alt = 716
    CEFBS_UseHVXV60, // V6_vsubw_dv_alt = 717
    CEFBS_UseHVXV60, // V6_vsubwnq_alt = 718
    CEFBS_UseHVXV60, // V6_vsubwq_alt = 719
    CEFBS_UseHVXV60, // V6_vsubwsat_alt = 720
    CEFBS_UseHVXV60, // V6_vsubwsat_dv_alt = 721
    CEFBS_UseHVXV60, // V6_vtmpyb_acc_alt = 722
    CEFBS_UseHVXV60, // V6_vtmpyb_alt = 723
    CEFBS_UseHVXV60, // V6_vtmpybus_acc_alt = 724
    CEFBS_UseHVXV60, // V6_vtmpybus_alt = 725
    CEFBS_UseHVXV60, // V6_vtmpyhb_acc_alt = 726
    CEFBS_UseHVXV60, // V6_vtmpyhb_alt = 727
    CEFBS_UseHVXV60, // V6_vtran2x2_map = 728
    CEFBS_UseHVXV60, // V6_vunpackb_alt = 729
    CEFBS_UseHVXV60, // V6_vunpackh_alt = 730
    CEFBS_UseHVXV60, // V6_vunpackob_alt = 731
    CEFBS_UseHVXV60, // V6_vunpackoh_alt = 732
    CEFBS_UseHVXV60, // V6_vunpackub_alt = 733
    CEFBS_UseHVXV60, // V6_vunpackuh_alt = 734
    CEFBS_UseHVXV60, // V6_vzb_alt = 735
    CEFBS_UseHVXV60, // V6_vzh_alt = 736
    CEFBS_UseHVXV66, // V6_zld0 = 737
    CEFBS_UseHVXV66, // V6_zldp0 = 738
    CEFBS_None, // Y2_dcfetch = 739
    CEFBS_None, // A2_abs = 740
    CEFBS_None, // A2_absp = 741
    CEFBS_None, // A2_abssat = 742
    CEFBS_None, // A2_add = 743
    CEFBS_None, // A2_addh_h16_hh = 744
    CEFBS_None, // A2_addh_h16_hl = 745
    CEFBS_None, // A2_addh_h16_lh = 746
    CEFBS_None, // A2_addh_h16_ll = 747
    CEFBS_None, // A2_addh_h16_sat_hh = 748
    CEFBS_None, // A2_addh_h16_sat_hl = 749
    CEFBS_None, // A2_addh_h16_sat_lh = 750
    CEFBS_None, // A2_addh_h16_sat_ll = 751
    CEFBS_None, // A2_addh_l16_hl = 752
    CEFBS_None, // A2_addh_l16_ll = 753
    CEFBS_None, // A2_addh_l16_sat_hl = 754
    CEFBS_None, // A2_addh_l16_sat_ll = 755
    CEFBS_None, // A2_addi = 756
    CEFBS_None, // A2_addp = 757
    CEFBS_None, // A2_addpsat = 758
    CEFBS_None, // A2_addsat = 759
    CEFBS_None, // A2_addsph = 760
    CEFBS_None, // A2_addspl = 761
    CEFBS_None, // A2_and = 762
    CEFBS_None, // A2_andir = 763
    CEFBS_None, // A2_andp = 764
    CEFBS_None, // A2_aslh = 765
    CEFBS_None, // A2_asrh = 766
    CEFBS_None, // A2_combine_hh = 767
    CEFBS_None, // A2_combine_hl = 768
    CEFBS_None, // A2_combine_lh = 769
    CEFBS_None, // A2_combine_ll = 770
    CEFBS_None, // A2_combineii = 771
    CEFBS_None, // A2_combinew = 772
    CEFBS_None, // A2_max = 773
    CEFBS_None, // A2_maxp = 774
    CEFBS_None, // A2_maxu = 775
    CEFBS_None, // A2_maxup = 776
    CEFBS_None, // A2_min = 777
    CEFBS_None, // A2_minp = 778
    CEFBS_None, // A2_minu = 779
    CEFBS_None, // A2_minup = 780
    CEFBS_None, // A2_negp = 781
    CEFBS_None, // A2_negsat = 782
    CEFBS_None, // A2_nop = 783
    CEFBS_None, // A2_notp = 784
    CEFBS_None, // A2_or = 785
    CEFBS_None, // A2_orir = 786
    CEFBS_None, // A2_orp = 787
    CEFBS_None, // A2_paddf = 788
    CEFBS_None, // A2_paddfnew = 789
    CEFBS_None, // A2_paddif = 790
    CEFBS_None, // A2_paddifnew = 791
    CEFBS_None, // A2_paddit = 792
    CEFBS_None, // A2_padditnew = 793
    CEFBS_None, // A2_paddt = 794
    CEFBS_None, // A2_paddtnew = 795
    CEFBS_None, // A2_pandf = 796
    CEFBS_None, // A2_pandfnew = 797
    CEFBS_None, // A2_pandt = 798
    CEFBS_None, // A2_pandtnew = 799
    CEFBS_None, // A2_porf = 800
    CEFBS_None, // A2_porfnew = 801
    CEFBS_None, // A2_port = 802
    CEFBS_None, // A2_portnew = 803
    CEFBS_None, // A2_psubf = 804
    CEFBS_None, // A2_psubfnew = 805
    CEFBS_None, // A2_psubt = 806
    CEFBS_None, // A2_psubtnew = 807
    CEFBS_None, // A2_pxorf = 808
    CEFBS_None, // A2_pxorfnew = 809
    CEFBS_None, // A2_pxort = 810
    CEFBS_None, // A2_pxortnew = 811
    CEFBS_None, // A2_roundsat = 812
    CEFBS_None, // A2_sat = 813
    CEFBS_None, // A2_satb = 814
    CEFBS_None, // A2_sath = 815
    CEFBS_None, // A2_satub = 816
    CEFBS_None, // A2_satuh = 817
    CEFBS_None, // A2_sub = 818
    CEFBS_None, // A2_subh_h16_hh = 819
    CEFBS_None, // A2_subh_h16_hl = 820
    CEFBS_None, // A2_subh_h16_lh = 821
    CEFBS_None, // A2_subh_h16_ll = 822
    CEFBS_None, // A2_subh_h16_sat_hh = 823
    CEFBS_None, // A2_subh_h16_sat_hl = 824
    CEFBS_None, // A2_subh_h16_sat_lh = 825
    CEFBS_None, // A2_subh_h16_sat_ll = 826
    CEFBS_None, // A2_subh_l16_hl = 827
    CEFBS_None, // A2_subh_l16_ll = 828
    CEFBS_None, // A2_subh_l16_sat_hl = 829
    CEFBS_None, // A2_subh_l16_sat_ll = 830
    CEFBS_None, // A2_subp = 831
    CEFBS_None, // A2_subri = 832
    CEFBS_None, // A2_subsat = 833
    CEFBS_None, // A2_svaddh = 834
    CEFBS_None, // A2_svaddhs = 835
    CEFBS_None, // A2_svadduhs = 836
    CEFBS_None, // A2_svavgh = 837
    CEFBS_None, // A2_svavghs = 838
    CEFBS_None, // A2_svnavgh = 839
    CEFBS_None, // A2_svsubh = 840
    CEFBS_None, // A2_svsubhs = 841
    CEFBS_None, // A2_svsubuhs = 842
    CEFBS_None, // A2_swiz = 843
    CEFBS_None, // A2_sxtb = 844
    CEFBS_None, // A2_sxth = 845
    CEFBS_None, // A2_sxtw = 846
    CEFBS_None, // A2_tfr = 847
    CEFBS_None, // A2_tfrcrr = 848
    CEFBS_None, // A2_tfrih = 849
    CEFBS_None, // A2_tfril = 850
    CEFBS_None, // A2_tfrrcr = 851
    CEFBS_None, // A2_tfrsi = 852
    CEFBS_None, // A2_vabsh = 853
    CEFBS_None, // A2_vabshsat = 854
    CEFBS_None, // A2_vabsw = 855
    CEFBS_None, // A2_vabswsat = 856
    CEFBS_None, // A2_vaddh = 857
    CEFBS_None, // A2_vaddhs = 858
    CEFBS_None, // A2_vaddub = 859
    CEFBS_None, // A2_vaddubs = 860
    CEFBS_None, // A2_vadduhs = 861
    CEFBS_None, // A2_vaddw = 862
    CEFBS_None, // A2_vaddws = 863
    CEFBS_None, // A2_vavgh = 864
    CEFBS_None, // A2_vavghcr = 865
    CEFBS_None, // A2_vavghr = 866
    CEFBS_None, // A2_vavgub = 867
    CEFBS_None, // A2_vavgubr = 868
    CEFBS_None, // A2_vavguh = 869
    CEFBS_None, // A2_vavguhr = 870
    CEFBS_None, // A2_vavguw = 871
    CEFBS_None, // A2_vavguwr = 872
    CEFBS_None, // A2_vavgw = 873
    CEFBS_None, // A2_vavgwcr = 874
    CEFBS_None, // A2_vavgwr = 875
    CEFBS_None, // A2_vcmpbeq = 876
    CEFBS_None, // A2_vcmpbgtu = 877
    CEFBS_None, // A2_vcmpheq = 878
    CEFBS_None, // A2_vcmphgt = 879
    CEFBS_None, // A2_vcmphgtu = 880
    CEFBS_None, // A2_vcmpweq = 881
    CEFBS_None, // A2_vcmpwgt = 882
    CEFBS_None, // A2_vcmpwgtu = 883
    CEFBS_None, // A2_vconj = 884
    CEFBS_None, // A2_vmaxb = 885
    CEFBS_None, // A2_vmaxh = 886
    CEFBS_None, // A2_vmaxub = 887
    CEFBS_None, // A2_vmaxuh = 888
    CEFBS_None, // A2_vmaxuw = 889
    CEFBS_None, // A2_vmaxw = 890
    CEFBS_None, // A2_vminb = 891
    CEFBS_None, // A2_vminh = 892
    CEFBS_None, // A2_vminub = 893
    CEFBS_None, // A2_vminuh = 894
    CEFBS_None, // A2_vminuw = 895
    CEFBS_None, // A2_vminw = 896
    CEFBS_None, // A2_vnavgh = 897
    CEFBS_None, // A2_vnavghcr = 898
    CEFBS_None, // A2_vnavghr = 899
    CEFBS_None, // A2_vnavgw = 900
    CEFBS_None, // A2_vnavgwcr = 901
    CEFBS_None, // A2_vnavgwr = 902
    CEFBS_None, // A2_vraddub = 903
    CEFBS_None, // A2_vraddub_acc = 904
    CEFBS_None, // A2_vrsadub = 905
    CEFBS_None, // A2_vrsadub_acc = 906
    CEFBS_None, // A2_vsubh = 907
    CEFBS_None, // A2_vsubhs = 908
    CEFBS_None, // A2_vsubub = 909
    CEFBS_None, // A2_vsububs = 910
    CEFBS_None, // A2_vsubuhs = 911
    CEFBS_None, // A2_vsubw = 912
    CEFBS_None, // A2_vsubws = 913
    CEFBS_None, // A2_xor = 914
    CEFBS_None, // A2_xorp = 915
    CEFBS_None, // A2_zxth = 916
    CEFBS_None, // A4_addp_c = 917
    CEFBS_None, // A4_andn = 918
    CEFBS_None, // A4_andnp = 919
    CEFBS_None, // A4_bitsplit = 920
    CEFBS_None, // A4_bitspliti = 921
    CEFBS_None, // A4_boundscheck_hi = 922
    CEFBS_None, // A4_boundscheck_lo = 923
    CEFBS_None, // A4_cmpbeq = 924
    CEFBS_None, // A4_cmpbeqi = 925
    CEFBS_None, // A4_cmpbgt = 926
    CEFBS_None, // A4_cmpbgti = 927
    CEFBS_None, // A4_cmpbgtu = 928
    CEFBS_None, // A4_cmpbgtui = 929
    CEFBS_None, // A4_cmpheq = 930
    CEFBS_None, // A4_cmpheqi = 931
    CEFBS_None, // A4_cmphgt = 932
    CEFBS_None, // A4_cmphgti = 933
    CEFBS_None, // A4_cmphgtu = 934
    CEFBS_None, // A4_cmphgtui = 935
    CEFBS_None, // A4_combineii = 936
    CEFBS_None, // A4_combineir = 937
    CEFBS_None, // A4_combineri = 938
    CEFBS_None, // A4_cround_ri = 939
    CEFBS_None, // A4_cround_rr = 940
    CEFBS_None, // A4_ext = 941
    CEFBS_None, // A4_modwrapu = 942
    CEFBS_None, // A4_orn = 943
    CEFBS_None, // A4_ornp = 944
    CEFBS_None, // A4_paslhf = 945
    CEFBS_None, // A4_paslhfnew = 946
    CEFBS_None, // A4_paslht = 947
    CEFBS_None, // A4_paslhtnew = 948
    CEFBS_None, // A4_pasrhf = 949
    CEFBS_None, // A4_pasrhfnew = 950
    CEFBS_None, // A4_pasrht = 951
    CEFBS_None, // A4_pasrhtnew = 952
    CEFBS_None, // A4_psxtbf = 953
    CEFBS_None, // A4_psxtbfnew = 954
    CEFBS_None, // A4_psxtbt = 955
    CEFBS_None, // A4_psxtbtnew = 956
    CEFBS_None, // A4_psxthf = 957
    CEFBS_None, // A4_psxthfnew = 958
    CEFBS_None, // A4_psxtht = 959
    CEFBS_None, // A4_psxthtnew = 960
    CEFBS_None, // A4_pzxtbf = 961
    CEFBS_None, // A4_pzxtbfnew = 962
    CEFBS_None, // A4_pzxtbt = 963
    CEFBS_None, // A4_pzxtbtnew = 964
    CEFBS_None, // A4_pzxthf = 965
    CEFBS_None, // A4_pzxthfnew = 966
    CEFBS_None, // A4_pzxtht = 967
    CEFBS_None, // A4_pzxthtnew = 968
    CEFBS_None, // A4_rcmpeq = 969
    CEFBS_None, // A4_rcmpeqi = 970
    CEFBS_None, // A4_rcmpneq = 971
    CEFBS_None, // A4_rcmpneqi = 972
    CEFBS_None, // A4_round_ri = 973
    CEFBS_None, // A4_round_ri_sat = 974
    CEFBS_None, // A4_round_rr = 975
    CEFBS_None, // A4_round_rr_sat = 976
    CEFBS_None, // A4_subp_c = 977
    CEFBS_None, // A4_tfrcpp = 978
    CEFBS_None, // A4_tfrpcp = 979
    CEFBS_None, // A4_tlbmatch = 980
    CEFBS_None, // A4_vcmpbeq_any = 981
    CEFBS_None, // A4_vcmpbeqi = 982
    CEFBS_None, // A4_vcmpbgt = 983
    CEFBS_None, // A4_vcmpbgti = 984
    CEFBS_None, // A4_vcmpbgtui = 985
    CEFBS_None, // A4_vcmpheqi = 986
    CEFBS_None, // A4_vcmphgti = 987
    CEFBS_None, // A4_vcmphgtui = 988
    CEFBS_None, // A4_vcmpweqi = 989
    CEFBS_None, // A4_vcmpwgti = 990
    CEFBS_None, // A4_vcmpwgtui = 991
    CEFBS_None, // A4_vrmaxh = 992
    CEFBS_None, // A4_vrmaxuh = 993
    CEFBS_None, // A4_vrmaxuw = 994
    CEFBS_None, // A4_vrmaxw = 995
    CEFBS_None, // A4_vrminh = 996
    CEFBS_None, // A4_vrminuh = 997
    CEFBS_None, // A4_vrminuw = 998
    CEFBS_None, // A4_vrminw = 999
    CEFBS_HasV55, // A5_ACS = 1000
    CEFBS_None, // A5_vaddhubs = 1001
    CEFBS_HasV65, // A6_vcmpbeq_notany = 1002
    CEFBS_HasV62, // A6_vminub_RdP = 1003
    CEFBS_None, // C2_all8 = 1004
    CEFBS_None, // C2_and = 1005
    CEFBS_None, // C2_andn = 1006
    CEFBS_None, // C2_any8 = 1007
    CEFBS_None, // C2_bitsclr = 1008
    CEFBS_None, // C2_bitsclri = 1009
    CEFBS_None, // C2_bitsset = 1010
    CEFBS_None, // C2_ccombinewf = 1011
    CEFBS_None, // C2_ccombinewnewf = 1012
    CEFBS_None, // C2_ccombinewnewt = 1013
    CEFBS_None, // C2_ccombinewt = 1014
    CEFBS_None, // C2_cmoveif = 1015
    CEFBS_None, // C2_cmoveit = 1016
    CEFBS_None, // C2_cmovenewif = 1017
    CEFBS_None, // C2_cmovenewit = 1018
    CEFBS_None, // C2_cmpeq = 1019
    CEFBS_None, // C2_cmpeqi = 1020
    CEFBS_None, // C2_cmpeqp = 1021
    CEFBS_None, // C2_cmpgt = 1022
    CEFBS_None, // C2_cmpgti = 1023
    CEFBS_None, // C2_cmpgtp = 1024
    CEFBS_None, // C2_cmpgtu = 1025
    CEFBS_None, // C2_cmpgtui = 1026
    CEFBS_None, // C2_cmpgtup = 1027
    CEFBS_None, // C2_mask = 1028
    CEFBS_None, // C2_mux = 1029
    CEFBS_None, // C2_muxii = 1030
    CEFBS_None, // C2_muxir = 1031
    CEFBS_None, // C2_muxri = 1032
    CEFBS_None, // C2_not = 1033
    CEFBS_None, // C2_or = 1034
    CEFBS_None, // C2_orn = 1035
    CEFBS_None, // C2_tfrpr = 1036
    CEFBS_None, // C2_tfrrp = 1037
    CEFBS_None, // C2_vitpack = 1038
    CEFBS_None, // C2_vmux = 1039
    CEFBS_None, // C2_xor = 1040
    CEFBS_None, // C4_addipc = 1041
    CEFBS_None, // C4_and_and = 1042
    CEFBS_None, // C4_and_andn = 1043
    CEFBS_None, // C4_and_or = 1044
    CEFBS_None, // C4_and_orn = 1045
    CEFBS_None, // C4_cmplte = 1046
    CEFBS_None, // C4_cmpltei = 1047
    CEFBS_None, // C4_cmplteu = 1048
    CEFBS_None, // C4_cmplteui = 1049
    CEFBS_None, // C4_cmpneq = 1050
    CEFBS_None, // C4_cmpneqi = 1051
    CEFBS_None, // C4_fastcorner9 = 1052
    CEFBS_None, // C4_fastcorner9_not = 1053
    CEFBS_None, // C4_nbitsclr = 1054
    CEFBS_None, // C4_nbitsclri = 1055
    CEFBS_None, // C4_nbitsset = 1056
    CEFBS_None, // C4_or_and = 1057
    CEFBS_None, // C4_or_andn = 1058
    CEFBS_None, // C4_or_or = 1059
    CEFBS_None, // C4_or_orn = 1060
    CEFBS_None, // CALLProfile = 1061
    CEFBS_None, // CONST32 = 1062
    CEFBS_None, // CONST64 = 1063
    CEFBS_None, // DuplexIClass0 = 1064
    CEFBS_None, // DuplexIClass1 = 1065
    CEFBS_None, // DuplexIClass2 = 1066
    CEFBS_None, // DuplexIClass3 = 1067
    CEFBS_None, // DuplexIClass4 = 1068
    CEFBS_None, // DuplexIClass5 = 1069
    CEFBS_None, // DuplexIClass6 = 1070
    CEFBS_None, // DuplexIClass7 = 1071
    CEFBS_None, // DuplexIClass8 = 1072
    CEFBS_None, // DuplexIClass9 = 1073
    CEFBS_None, // DuplexIClassA = 1074
    CEFBS_None, // DuplexIClassB = 1075
    CEFBS_None, // DuplexIClassC = 1076
    CEFBS_None, // DuplexIClassD = 1077
    CEFBS_None, // DuplexIClassE = 1078
    CEFBS_None, // DuplexIClassF = 1079
    CEFBS_None, // EH_RETURN_JMPR = 1080
    CEFBS_None, // F2_conv_d2df = 1081
    CEFBS_None, // F2_conv_d2sf = 1082
    CEFBS_None, // F2_conv_df2d = 1083
    CEFBS_None, // F2_conv_df2d_chop = 1084
    CEFBS_None, // F2_conv_df2sf = 1085
    CEFBS_None, // F2_conv_df2ud = 1086
    CEFBS_None, // F2_conv_df2ud_chop = 1087
    CEFBS_None, // F2_conv_df2uw = 1088
    CEFBS_None, // F2_conv_df2uw_chop = 1089
    CEFBS_None, // F2_conv_df2w = 1090
    CEFBS_None, // F2_conv_df2w_chop = 1091
    CEFBS_None, // F2_conv_sf2d = 1092
    CEFBS_None, // F2_conv_sf2d_chop = 1093
    CEFBS_None, // F2_conv_sf2df = 1094
    CEFBS_None, // F2_conv_sf2ud = 1095
    CEFBS_None, // F2_conv_sf2ud_chop = 1096
    CEFBS_None, // F2_conv_sf2uw = 1097
    CEFBS_None, // F2_conv_sf2uw_chop = 1098
    CEFBS_None, // F2_conv_sf2w = 1099
    CEFBS_None, // F2_conv_sf2w_chop = 1100
    CEFBS_None, // F2_conv_ud2df = 1101
    CEFBS_None, // F2_conv_ud2sf = 1102
    CEFBS_None, // F2_conv_uw2df = 1103
    CEFBS_None, // F2_conv_uw2sf = 1104
    CEFBS_None, // F2_conv_w2df = 1105
    CEFBS_None, // F2_conv_w2sf = 1106
    CEFBS_HasV66, // F2_dfadd = 1107
    CEFBS_None, // F2_dfclass = 1108
    CEFBS_None, // F2_dfcmpeq = 1109
    CEFBS_None, // F2_dfcmpge = 1110
    CEFBS_None, // F2_dfcmpgt = 1111
    CEFBS_None, // F2_dfcmpuo = 1112
    CEFBS_None, // F2_dfimm_n = 1113
    CEFBS_None, // F2_dfimm_p = 1114
    CEFBS_HasV66, // F2_dfsub = 1115
    CEFBS_None, // F2_sfadd = 1116
    CEFBS_None, // F2_sfclass = 1117
    CEFBS_None, // F2_sfcmpeq = 1118
    CEFBS_None, // F2_sfcmpge = 1119
    CEFBS_None, // F2_sfcmpgt = 1120
    CEFBS_None, // F2_sfcmpuo = 1121
    CEFBS_None, // F2_sffixupd = 1122
    CEFBS_None, // F2_sffixupn = 1123
    CEFBS_None, // F2_sffixupr = 1124
    CEFBS_None, // F2_sffma = 1125
    CEFBS_None, // F2_sffma_lib = 1126
    CEFBS_None, // F2_sffma_sc = 1127
    CEFBS_None, // F2_sffms = 1128
    CEFBS_None, // F2_sffms_lib = 1129
    CEFBS_None, // F2_sfimm_n = 1130
    CEFBS_None, // F2_sfimm_p = 1131
    CEFBS_None, // F2_sfinvsqrta = 1132
    CEFBS_None, // F2_sfmax = 1133
    CEFBS_None, // F2_sfmin = 1134
    CEFBS_None, // F2_sfmpy = 1135
    CEFBS_None, // F2_sfrecipa = 1136
    CEFBS_None, // F2_sfsub = 1137
    CEFBS_None, // G4_tfrgcpp = 1138
    CEFBS_None, // G4_tfrgcrr = 1139
    CEFBS_None, // G4_tfrgpcp = 1140
    CEFBS_None, // G4_tfrgrcr = 1141
    CEFBS_None, // HI = 1142
    CEFBS_None, // J2_call = 1143
    CEFBS_None, // J2_callf = 1144
    CEFBS_None, // J2_callr = 1145
    CEFBS_None, // J2_callrf = 1146
    CEFBS_None, // J2_callrt = 1147
    CEFBS_None, // J2_callt = 1148
    CEFBS_None, // J2_jump = 1149
    CEFBS_None, // J2_jumpf = 1150
    CEFBS_None, // J2_jumpfnew = 1151
    CEFBS_None, // J2_jumpfnewpt = 1152
    CEFBS_HasV60, // J2_jumpfpt = 1153
    CEFBS_None, // J2_jumpr = 1154
    CEFBS_None, // J2_jumprf = 1155
    CEFBS_None, // J2_jumprfnew = 1156
    CEFBS_None, // J2_jumprfnewpt = 1157
    CEFBS_HasV60, // J2_jumprfpt = 1158
    CEFBS_None, // J2_jumprgtez = 1159
    CEFBS_None, // J2_jumprgtezpt = 1160
    CEFBS_None, // J2_jumprltez = 1161
    CEFBS_None, // J2_jumprltezpt = 1162
    CEFBS_None, // J2_jumprnz = 1163
    CEFBS_None, // J2_jumprnzpt = 1164
    CEFBS_None, // J2_jumprt = 1165
    CEFBS_None, // J2_jumprtnew = 1166
    CEFBS_None, // J2_jumprtnewpt = 1167
    CEFBS_HasV60, // J2_jumprtpt = 1168
    CEFBS_None, // J2_jumprz = 1169
    CEFBS_None, // J2_jumprzpt = 1170
    CEFBS_None, // J2_jumpt = 1171
    CEFBS_None, // J2_jumptnew = 1172
    CEFBS_None, // J2_jumptnewpt = 1173
    CEFBS_HasV60, // J2_jumptpt = 1174
    CEFBS_None, // J2_loop0i = 1175
    CEFBS_None, // J2_loop0iext = 1176
    CEFBS_None, // J2_loop0r = 1177
    CEFBS_None, // J2_loop0rext = 1178
    CEFBS_None, // J2_loop1i = 1179
    CEFBS_None, // J2_loop1iext = 1180
    CEFBS_None, // J2_loop1r = 1181
    CEFBS_None, // J2_loop1rext = 1182
    CEFBS_None, // J2_pause = 1183
    CEFBS_None, // J2_ploop1si = 1184
    CEFBS_None, // J2_ploop1sr = 1185
    CEFBS_None, // J2_ploop2si = 1186
    CEFBS_None, // J2_ploop2sr = 1187
    CEFBS_None, // J2_ploop3si = 1188
    CEFBS_None, // J2_ploop3sr = 1189
    CEFBS_None, // J2_trap0 = 1190
    CEFBS_None, // J2_trap1 = 1191
    CEFBS_None, // J4_cmpeq_f_jumpnv_nt = 1192
    CEFBS_None, // J4_cmpeq_f_jumpnv_t = 1193
    CEFBS_None, // J4_cmpeq_fp0_jump_nt = 1194
    CEFBS_None, // J4_cmpeq_fp0_jump_t = 1195
    CEFBS_None, // J4_cmpeq_fp1_jump_nt = 1196
    CEFBS_None, // J4_cmpeq_fp1_jump_t = 1197
    CEFBS_None, // J4_cmpeq_t_jumpnv_nt = 1198
    CEFBS_None, // J4_cmpeq_t_jumpnv_t = 1199
    CEFBS_None, // J4_cmpeq_tp0_jump_nt = 1200
    CEFBS_None, // J4_cmpeq_tp0_jump_t = 1201
    CEFBS_None, // J4_cmpeq_tp1_jump_nt = 1202
    CEFBS_None, // J4_cmpeq_tp1_jump_t = 1203
    CEFBS_None, // J4_cmpeqi_f_jumpnv_nt = 1204
    CEFBS_None, // J4_cmpeqi_f_jumpnv_t = 1205
    CEFBS_None, // J4_cmpeqi_fp0_jump_nt = 1206
    CEFBS_None, // J4_cmpeqi_fp0_jump_t = 1207
    CEFBS_None, // J4_cmpeqi_fp1_jump_nt = 1208
    CEFBS_None, // J4_cmpeqi_fp1_jump_t = 1209
    CEFBS_None, // J4_cmpeqi_t_jumpnv_nt = 1210
    CEFBS_None, // J4_cmpeqi_t_jumpnv_t = 1211
    CEFBS_None, // J4_cmpeqi_tp0_jump_nt = 1212
    CEFBS_None, // J4_cmpeqi_tp0_jump_t = 1213
    CEFBS_None, // J4_cmpeqi_tp1_jump_nt = 1214
    CEFBS_None, // J4_cmpeqi_tp1_jump_t = 1215
    CEFBS_None, // J4_cmpeqn1_f_jumpnv_nt = 1216
    CEFBS_None, // J4_cmpeqn1_f_jumpnv_t = 1217
    CEFBS_None, // J4_cmpeqn1_fp0_jump_nt = 1218
    CEFBS_None, // J4_cmpeqn1_fp0_jump_t = 1219
    CEFBS_None, // J4_cmpeqn1_fp1_jump_nt = 1220
    CEFBS_None, // J4_cmpeqn1_fp1_jump_t = 1221
    CEFBS_None, // J4_cmpeqn1_t_jumpnv_nt = 1222
    CEFBS_None, // J4_cmpeqn1_t_jumpnv_t = 1223
    CEFBS_None, // J4_cmpeqn1_tp0_jump_nt = 1224
    CEFBS_None, // J4_cmpeqn1_tp0_jump_t = 1225
    CEFBS_None, // J4_cmpeqn1_tp1_jump_nt = 1226
    CEFBS_None, // J4_cmpeqn1_tp1_jump_t = 1227
    CEFBS_None, // J4_cmpgt_f_jumpnv_nt = 1228
    CEFBS_None, // J4_cmpgt_f_jumpnv_t = 1229
    CEFBS_None, // J4_cmpgt_fp0_jump_nt = 1230
    CEFBS_None, // J4_cmpgt_fp0_jump_t = 1231
    CEFBS_None, // J4_cmpgt_fp1_jump_nt = 1232
    CEFBS_None, // J4_cmpgt_fp1_jump_t = 1233
    CEFBS_None, // J4_cmpgt_t_jumpnv_nt = 1234
    CEFBS_None, // J4_cmpgt_t_jumpnv_t = 1235
    CEFBS_None, // J4_cmpgt_tp0_jump_nt = 1236
    CEFBS_None, // J4_cmpgt_tp0_jump_t = 1237
    CEFBS_None, // J4_cmpgt_tp1_jump_nt = 1238
    CEFBS_None, // J4_cmpgt_tp1_jump_t = 1239
    CEFBS_None, // J4_cmpgti_f_jumpnv_nt = 1240
    CEFBS_None, // J4_cmpgti_f_jumpnv_t = 1241
    CEFBS_None, // J4_cmpgti_fp0_jump_nt = 1242
    CEFBS_None, // J4_cmpgti_fp0_jump_t = 1243
    CEFBS_None, // J4_cmpgti_fp1_jump_nt = 1244
    CEFBS_None, // J4_cmpgti_fp1_jump_t = 1245
    CEFBS_None, // J4_cmpgti_t_jumpnv_nt = 1246
    CEFBS_None, // J4_cmpgti_t_jumpnv_t = 1247
    CEFBS_None, // J4_cmpgti_tp0_jump_nt = 1248
    CEFBS_None, // J4_cmpgti_tp0_jump_t = 1249
    CEFBS_None, // J4_cmpgti_tp1_jump_nt = 1250
    CEFBS_None, // J4_cmpgti_tp1_jump_t = 1251
    CEFBS_None, // J4_cmpgtn1_f_jumpnv_nt = 1252
    CEFBS_None, // J4_cmpgtn1_f_jumpnv_t = 1253
    CEFBS_None, // J4_cmpgtn1_fp0_jump_nt = 1254
    CEFBS_None, // J4_cmpgtn1_fp0_jump_t = 1255
    CEFBS_None, // J4_cmpgtn1_fp1_jump_nt = 1256
    CEFBS_None, // J4_cmpgtn1_fp1_jump_t = 1257
    CEFBS_None, // J4_cmpgtn1_t_jumpnv_nt = 1258
    CEFBS_None, // J4_cmpgtn1_t_jumpnv_t = 1259
    CEFBS_None, // J4_cmpgtn1_tp0_jump_nt = 1260
    CEFBS_None, // J4_cmpgtn1_tp0_jump_t = 1261
    CEFBS_None, // J4_cmpgtn1_tp1_jump_nt = 1262
    CEFBS_None, // J4_cmpgtn1_tp1_jump_t = 1263
    CEFBS_None, // J4_cmpgtu_f_jumpnv_nt = 1264
    CEFBS_None, // J4_cmpgtu_f_jumpnv_t = 1265
    CEFBS_None, // J4_cmpgtu_fp0_jump_nt = 1266
    CEFBS_None, // J4_cmpgtu_fp0_jump_t = 1267
    CEFBS_None, // J4_cmpgtu_fp1_jump_nt = 1268
    CEFBS_None, // J4_cmpgtu_fp1_jump_t = 1269
    CEFBS_None, // J4_cmpgtu_t_jumpnv_nt = 1270
    CEFBS_None, // J4_cmpgtu_t_jumpnv_t = 1271
    CEFBS_None, // J4_cmpgtu_tp0_jump_nt = 1272
    CEFBS_None, // J4_cmpgtu_tp0_jump_t = 1273
    CEFBS_None, // J4_cmpgtu_tp1_jump_nt = 1274
    CEFBS_None, // J4_cmpgtu_tp1_jump_t = 1275
    CEFBS_None, // J4_cmpgtui_f_jumpnv_nt = 1276
    CEFBS_None, // J4_cmpgtui_f_jumpnv_t = 1277
    CEFBS_None, // J4_cmpgtui_fp0_jump_nt = 1278
    CEFBS_None, // J4_cmpgtui_fp0_jump_t = 1279
    CEFBS_None, // J4_cmpgtui_fp1_jump_nt = 1280
    CEFBS_None, // J4_cmpgtui_fp1_jump_t = 1281
    CEFBS_None, // J4_cmpgtui_t_jumpnv_nt = 1282
    CEFBS_None, // J4_cmpgtui_t_jumpnv_t = 1283
    CEFBS_None, // J4_cmpgtui_tp0_jump_nt = 1284
    CEFBS_None, // J4_cmpgtui_tp0_jump_t = 1285
    CEFBS_None, // J4_cmpgtui_tp1_jump_nt = 1286
    CEFBS_None, // J4_cmpgtui_tp1_jump_t = 1287
    CEFBS_None, // J4_cmplt_f_jumpnv_nt = 1288
    CEFBS_None, // J4_cmplt_f_jumpnv_t = 1289
    CEFBS_None, // J4_cmplt_t_jumpnv_nt = 1290
    CEFBS_None, // J4_cmplt_t_jumpnv_t = 1291
    CEFBS_None, // J4_cmpltu_f_jumpnv_nt = 1292
    CEFBS_None, // J4_cmpltu_f_jumpnv_t = 1293
    CEFBS_None, // J4_cmpltu_t_jumpnv_nt = 1294
    CEFBS_None, // J4_cmpltu_t_jumpnv_t = 1295
    CEFBS_None, // J4_hintjumpr = 1296
    CEFBS_None, // J4_jumpseti = 1297
    CEFBS_None, // J4_jumpsetr = 1298
    CEFBS_None, // J4_tstbit0_f_jumpnv_nt = 1299
    CEFBS_None, // J4_tstbit0_f_jumpnv_t = 1300
    CEFBS_None, // J4_tstbit0_fp0_jump_nt = 1301
    CEFBS_None, // J4_tstbit0_fp0_jump_t = 1302
    CEFBS_None, // J4_tstbit0_fp1_jump_nt = 1303
    CEFBS_None, // J4_tstbit0_fp1_jump_t = 1304
    CEFBS_None, // J4_tstbit0_t_jumpnv_nt = 1305
    CEFBS_None, // J4_tstbit0_t_jumpnv_t = 1306
    CEFBS_None, // J4_tstbit0_tp0_jump_nt = 1307
    CEFBS_None, // J4_tstbit0_tp0_jump_t = 1308
    CEFBS_None, // J4_tstbit0_tp1_jump_nt = 1309
    CEFBS_None, // J4_tstbit0_tp1_jump_t = 1310
    CEFBS_None, // L2_deallocframe = 1311
    CEFBS_None, // L2_loadalignb_io = 1312
    CEFBS_None, // L2_loadalignb_pbr = 1313
    CEFBS_None, // L2_loadalignb_pci = 1314
    CEFBS_None, // L2_loadalignb_pcr = 1315
    CEFBS_None, // L2_loadalignb_pi = 1316
    CEFBS_None, // L2_loadalignb_pr = 1317
    CEFBS_None, // L2_loadalignh_io = 1318
    CEFBS_None, // L2_loadalignh_pbr = 1319
    CEFBS_None, // L2_loadalignh_pci = 1320
    CEFBS_None, // L2_loadalignh_pcr = 1321
    CEFBS_None, // L2_loadalignh_pi = 1322
    CEFBS_None, // L2_loadalignh_pr = 1323
    CEFBS_None, // L2_loadbsw2_io = 1324
    CEFBS_None, // L2_loadbsw2_pbr = 1325
    CEFBS_None, // L2_loadbsw2_pci = 1326
    CEFBS_None, // L2_loadbsw2_pcr = 1327
    CEFBS_None, // L2_loadbsw2_pi = 1328
    CEFBS_None, // L2_loadbsw2_pr = 1329
    CEFBS_None, // L2_loadbsw4_io = 1330
    CEFBS_None, // L2_loadbsw4_pbr = 1331
    CEFBS_None, // L2_loadbsw4_pci = 1332
    CEFBS_None, // L2_loadbsw4_pcr = 1333
    CEFBS_None, // L2_loadbsw4_pi = 1334
    CEFBS_None, // L2_loadbsw4_pr = 1335
    CEFBS_None, // L2_loadbzw2_io = 1336
    CEFBS_None, // L2_loadbzw2_pbr = 1337
    CEFBS_None, // L2_loadbzw2_pci = 1338
    CEFBS_None, // L2_loadbzw2_pcr = 1339
    CEFBS_None, // L2_loadbzw2_pi = 1340
    CEFBS_None, // L2_loadbzw2_pr = 1341
    CEFBS_None, // L2_loadbzw4_io = 1342
    CEFBS_None, // L2_loadbzw4_pbr = 1343
    CEFBS_None, // L2_loadbzw4_pci = 1344
    CEFBS_None, // L2_loadbzw4_pcr = 1345
    CEFBS_None, // L2_loadbzw4_pi = 1346
    CEFBS_None, // L2_loadbzw4_pr = 1347
    CEFBS_None, // L2_loadrb_io = 1348
    CEFBS_None, // L2_loadrb_pbr = 1349
    CEFBS_None, // L2_loadrb_pci = 1350
    CEFBS_None, // L2_loadrb_pcr = 1351
    CEFBS_None, // L2_loadrb_pi = 1352
    CEFBS_None, // L2_loadrb_pr = 1353
    CEFBS_None, // L2_loadrbgp = 1354
    CEFBS_None, // L2_loadrd_io = 1355
    CEFBS_None, // L2_loadrd_pbr = 1356
    CEFBS_None, // L2_loadrd_pci = 1357
    CEFBS_None, // L2_loadrd_pcr = 1358
    CEFBS_None, // L2_loadrd_pi = 1359
    CEFBS_None, // L2_loadrd_pr = 1360
    CEFBS_None, // L2_loadrdgp = 1361
    CEFBS_None, // L2_loadrh_io = 1362
    CEFBS_None, // L2_loadrh_pbr = 1363
    CEFBS_None, // L2_loadrh_pci = 1364
    CEFBS_None, // L2_loadrh_pcr = 1365
    CEFBS_None, // L2_loadrh_pi = 1366
    CEFBS_None, // L2_loadrh_pr = 1367
    CEFBS_None, // L2_loadrhgp = 1368
    CEFBS_None, // L2_loadri_io = 1369
    CEFBS_None, // L2_loadri_pbr = 1370
    CEFBS_None, // L2_loadri_pci = 1371
    CEFBS_None, // L2_loadri_pcr = 1372
    CEFBS_None, // L2_loadri_pi = 1373
    CEFBS_None, // L2_loadri_pr = 1374
    CEFBS_None, // L2_loadrigp = 1375
    CEFBS_None, // L2_loadrub_io = 1376
    CEFBS_None, // L2_loadrub_pbr = 1377
    CEFBS_None, // L2_loadrub_pci = 1378
    CEFBS_None, // L2_loadrub_pcr = 1379
    CEFBS_None, // L2_loadrub_pi = 1380
    CEFBS_None, // L2_loadrub_pr = 1381
    CEFBS_None, // L2_loadrubgp = 1382
    CEFBS_None, // L2_loadruh_io = 1383
    CEFBS_None, // L2_loadruh_pbr = 1384
    CEFBS_None, // L2_loadruh_pci = 1385
    CEFBS_None, // L2_loadruh_pcr = 1386
    CEFBS_None, // L2_loadruh_pi = 1387
    CEFBS_None, // L2_loadruh_pr = 1388
    CEFBS_None, // L2_loadruhgp = 1389
    CEFBS_None, // L2_loadw_locked = 1390
    CEFBS_None, // L2_ploadrbf_io = 1391
    CEFBS_None, // L2_ploadrbf_pi = 1392
    CEFBS_None, // L2_ploadrbfnew_io = 1393
    CEFBS_None, // L2_ploadrbfnew_pi = 1394
    CEFBS_None, // L2_ploadrbt_io = 1395
    CEFBS_None, // L2_ploadrbt_pi = 1396
    CEFBS_None, // L2_ploadrbtnew_io = 1397
    CEFBS_None, // L2_ploadrbtnew_pi = 1398
    CEFBS_None, // L2_ploadrdf_io = 1399
    CEFBS_None, // L2_ploadrdf_pi = 1400
    CEFBS_None, // L2_ploadrdfnew_io = 1401
    CEFBS_None, // L2_ploadrdfnew_pi = 1402
    CEFBS_None, // L2_ploadrdt_io = 1403
    CEFBS_None, // L2_ploadrdt_pi = 1404
    CEFBS_None, // L2_ploadrdtnew_io = 1405
    CEFBS_None, // L2_ploadrdtnew_pi = 1406
    CEFBS_None, // L2_ploadrhf_io = 1407
    CEFBS_None, // L2_ploadrhf_pi = 1408
    CEFBS_None, // L2_ploadrhfnew_io = 1409
    CEFBS_None, // L2_ploadrhfnew_pi = 1410
    CEFBS_None, // L2_ploadrht_io = 1411
    CEFBS_None, // L2_ploadrht_pi = 1412
    CEFBS_None, // L2_ploadrhtnew_io = 1413
    CEFBS_None, // L2_ploadrhtnew_pi = 1414
    CEFBS_None, // L2_ploadrif_io = 1415
    CEFBS_None, // L2_ploadrif_pi = 1416
    CEFBS_None, // L2_ploadrifnew_io = 1417
    CEFBS_None, // L2_ploadrifnew_pi = 1418
    CEFBS_None, // L2_ploadrit_io = 1419
    CEFBS_None, // L2_ploadrit_pi = 1420
    CEFBS_None, // L2_ploadritnew_io = 1421
    CEFBS_None, // L2_ploadritnew_pi = 1422
    CEFBS_None, // L2_ploadrubf_io = 1423
    CEFBS_None, // L2_ploadrubf_pi = 1424
    CEFBS_None, // L2_ploadrubfnew_io = 1425
    CEFBS_None, // L2_ploadrubfnew_pi = 1426
    CEFBS_None, // L2_ploadrubt_io = 1427
    CEFBS_None, // L2_ploadrubt_pi = 1428
    CEFBS_None, // L2_ploadrubtnew_io = 1429
    CEFBS_None, // L2_ploadrubtnew_pi = 1430
    CEFBS_None, // L2_ploadruhf_io = 1431
    CEFBS_None, // L2_ploadruhf_pi = 1432
    CEFBS_None, // L2_ploadruhfnew_io = 1433
    CEFBS_None, // L2_ploadruhfnew_pi = 1434
    CEFBS_None, // L2_ploadruht_io = 1435
    CEFBS_None, // L2_ploadruht_pi = 1436
    CEFBS_None, // L2_ploadruhtnew_io = 1437
    CEFBS_None, // L2_ploadruhtnew_pi = 1438
    CEFBS_None, // L4_add_memopb_io = 1439
    CEFBS_None, // L4_add_memoph_io = 1440
    CEFBS_None, // L4_add_memopw_io = 1441
    CEFBS_None, // L4_and_memopb_io = 1442
    CEFBS_None, // L4_and_memoph_io = 1443
    CEFBS_None, // L4_and_memopw_io = 1444
    CEFBS_None, // L4_iadd_memopb_io = 1445
    CEFBS_None, // L4_iadd_memoph_io = 1446
    CEFBS_None, // L4_iadd_memopw_io = 1447
    CEFBS_None, // L4_iand_memopb_io = 1448
    CEFBS_None, // L4_iand_memoph_io = 1449
    CEFBS_None, // L4_iand_memopw_io = 1450
    CEFBS_None, // L4_ior_memopb_io = 1451
    CEFBS_None, // L4_ior_memoph_io = 1452
    CEFBS_None, // L4_ior_memopw_io = 1453
    CEFBS_None, // L4_isub_memopb_io = 1454
    CEFBS_None, // L4_isub_memoph_io = 1455
    CEFBS_None, // L4_isub_memopw_io = 1456
    CEFBS_None, // L4_loadalignb_ap = 1457
    CEFBS_None, // L4_loadalignb_ur = 1458
    CEFBS_None, // L4_loadalignh_ap = 1459
    CEFBS_None, // L4_loadalignh_ur = 1460
    CEFBS_None, // L4_loadbsw2_ap = 1461
    CEFBS_None, // L4_loadbsw2_ur = 1462
    CEFBS_None, // L4_loadbsw4_ap = 1463
    CEFBS_None, // L4_loadbsw4_ur = 1464
    CEFBS_None, // L4_loadbzw2_ap = 1465
    CEFBS_None, // L4_loadbzw2_ur = 1466
    CEFBS_None, // L4_loadbzw4_ap = 1467
    CEFBS_None, // L4_loadbzw4_ur = 1468
    CEFBS_None, // L4_loadd_locked = 1469
    CEFBS_None, // L4_loadrb_ap = 1470
    CEFBS_None, // L4_loadrb_rr = 1471
    CEFBS_None, // L4_loadrb_ur = 1472
    CEFBS_None, // L4_loadrd_ap = 1473
    CEFBS_None, // L4_loadrd_rr = 1474
    CEFBS_None, // L4_loadrd_ur = 1475
    CEFBS_None, // L4_loadrh_ap = 1476
    CEFBS_None, // L4_loadrh_rr = 1477
    CEFBS_None, // L4_loadrh_ur = 1478
    CEFBS_None, // L4_loadri_ap = 1479
    CEFBS_None, // L4_loadri_rr = 1480
    CEFBS_None, // L4_loadri_ur = 1481
    CEFBS_None, // L4_loadrub_ap = 1482
    CEFBS_None, // L4_loadrub_rr = 1483
    CEFBS_None, // L4_loadrub_ur = 1484
    CEFBS_None, // L4_loadruh_ap = 1485
    CEFBS_None, // L4_loadruh_rr = 1486
    CEFBS_None, // L4_loadruh_ur = 1487
    CEFBS_None, // L4_or_memopb_io = 1488
    CEFBS_None, // L4_or_memoph_io = 1489
    CEFBS_None, // L4_or_memopw_io = 1490
    CEFBS_None, // L4_ploadrbf_abs = 1491
    CEFBS_None, // L4_ploadrbf_rr = 1492
    CEFBS_None, // L4_ploadrbfnew_abs = 1493
    CEFBS_None, // L4_ploadrbfnew_rr = 1494
    CEFBS_None, // L4_ploadrbt_abs = 1495
    CEFBS_None, // L4_ploadrbt_rr = 1496
    CEFBS_None, // L4_ploadrbtnew_abs = 1497
    CEFBS_None, // L4_ploadrbtnew_rr = 1498
    CEFBS_None, // L4_ploadrdf_abs = 1499
    CEFBS_None, // L4_ploadrdf_rr = 1500
    CEFBS_None, // L4_ploadrdfnew_abs = 1501
    CEFBS_None, // L4_ploadrdfnew_rr = 1502
    CEFBS_None, // L4_ploadrdt_abs = 1503
    CEFBS_None, // L4_ploadrdt_rr = 1504
    CEFBS_None, // L4_ploadrdtnew_abs = 1505
    CEFBS_None, // L4_ploadrdtnew_rr = 1506
    CEFBS_None, // L4_ploadrhf_abs = 1507
    CEFBS_None, // L4_ploadrhf_rr = 1508
    CEFBS_None, // L4_ploadrhfnew_abs = 1509
    CEFBS_None, // L4_ploadrhfnew_rr = 1510
    CEFBS_None, // L4_ploadrht_abs = 1511
    CEFBS_None, // L4_ploadrht_rr = 1512
    CEFBS_None, // L4_ploadrhtnew_abs = 1513
    CEFBS_None, // L4_ploadrhtnew_rr = 1514
    CEFBS_None, // L4_ploadrif_abs = 1515
    CEFBS_None, // L4_ploadrif_rr = 1516
    CEFBS_None, // L4_ploadrifnew_abs = 1517
    CEFBS_None, // L4_ploadrifnew_rr = 1518
    CEFBS_None, // L4_ploadrit_abs = 1519
    CEFBS_None, // L4_ploadrit_rr = 1520
    CEFBS_None, // L4_ploadritnew_abs = 1521
    CEFBS_None, // L4_ploadritnew_rr = 1522
    CEFBS_None, // L4_ploadrubf_abs = 1523
    CEFBS_None, // L4_ploadrubf_rr = 1524
    CEFBS_None, // L4_ploadrubfnew_abs = 1525
    CEFBS_None, // L4_ploadrubfnew_rr = 1526
    CEFBS_None, // L4_ploadrubt_abs = 1527
    CEFBS_None, // L4_ploadrubt_rr = 1528
    CEFBS_None, // L4_ploadrubtnew_abs = 1529
    CEFBS_None, // L4_ploadrubtnew_rr = 1530
    CEFBS_None, // L4_ploadruhf_abs = 1531
    CEFBS_None, // L4_ploadruhf_rr = 1532
    CEFBS_None, // L4_ploadruhfnew_abs = 1533
    CEFBS_None, // L4_ploadruhfnew_rr = 1534
    CEFBS_None, // L4_ploadruht_abs = 1535
    CEFBS_None, // L4_ploadruht_rr = 1536
    CEFBS_None, // L4_ploadruhtnew_abs = 1537
    CEFBS_None, // L4_ploadruhtnew_rr = 1538
    CEFBS_None, // L4_return = 1539
    CEFBS_None, // L4_return_f = 1540
    CEFBS_None, // L4_return_fnew_pnt = 1541
    CEFBS_None, // L4_return_fnew_pt = 1542
    CEFBS_None, // L4_return_t = 1543
    CEFBS_None, // L4_return_tnew_pnt = 1544
    CEFBS_None, // L4_return_tnew_pt = 1545
    CEFBS_None, // L4_sub_memopb_io = 1546
    CEFBS_None, // L4_sub_memoph_io = 1547
    CEFBS_None, // L4_sub_memopw_io = 1548
    CEFBS_HasV66, // L6_memcpy = 1549
    CEFBS_None, // LO = 1550
    CEFBS_None, // M2_acci = 1551
    CEFBS_None, // M2_accii = 1552
    CEFBS_None, // M2_cmaci_s0 = 1553
    CEFBS_None, // M2_cmacr_s0 = 1554
    CEFBS_None, // M2_cmacs_s0 = 1555
    CEFBS_None, // M2_cmacs_s1 = 1556
    CEFBS_None, // M2_cmacsc_s0 = 1557
    CEFBS_None, // M2_cmacsc_s1 = 1558
    CEFBS_None, // M2_cmpyi_s0 = 1559
    CEFBS_None, // M2_cmpyr_s0 = 1560
    CEFBS_None, // M2_cmpyrs_s0 = 1561
    CEFBS_None, // M2_cmpyrs_s1 = 1562
    CEFBS_None, // M2_cmpyrsc_s0 = 1563
    CEFBS_None, // M2_cmpyrsc_s1 = 1564
    CEFBS_None, // M2_cmpys_s0 = 1565
    CEFBS_None, // M2_cmpys_s1 = 1566
    CEFBS_None, // M2_cmpysc_s0 = 1567
    CEFBS_None, // M2_cmpysc_s1 = 1568
    CEFBS_None, // M2_cnacs_s0 = 1569
    CEFBS_None, // M2_cnacs_s1 = 1570
    CEFBS_None, // M2_cnacsc_s0 = 1571
    CEFBS_None, // M2_cnacsc_s1 = 1572
    CEFBS_None, // M2_dpmpyss_acc_s0 = 1573
    CEFBS_None, // M2_dpmpyss_nac_s0 = 1574
    CEFBS_None, // M2_dpmpyss_rnd_s0 = 1575
    CEFBS_None, // M2_dpmpyss_s0 = 1576
    CEFBS_None, // M2_dpmpyuu_acc_s0 = 1577
    CEFBS_None, // M2_dpmpyuu_nac_s0 = 1578
    CEFBS_None, // M2_dpmpyuu_s0 = 1579
    CEFBS_None, // M2_hmmpyh_rs1 = 1580
    CEFBS_None, // M2_hmmpyh_s1 = 1581
    CEFBS_None, // M2_hmmpyl_rs1 = 1582
    CEFBS_None, // M2_hmmpyl_s1 = 1583
    CEFBS_None, // M2_maci = 1584
    CEFBS_None, // M2_macsin = 1585
    CEFBS_None, // M2_macsip = 1586
    CEFBS_None, // M2_mmachs_rs0 = 1587
    CEFBS_None, // M2_mmachs_rs1 = 1588
    CEFBS_None, // M2_mmachs_s0 = 1589
    CEFBS_None, // M2_mmachs_s1 = 1590
    CEFBS_None, // M2_mmacls_rs0 = 1591
    CEFBS_None, // M2_mmacls_rs1 = 1592
    CEFBS_None, // M2_mmacls_s0 = 1593
    CEFBS_None, // M2_mmacls_s1 = 1594
    CEFBS_None, // M2_mmacuhs_rs0 = 1595
    CEFBS_None, // M2_mmacuhs_rs1 = 1596
    CEFBS_None, // M2_mmacuhs_s0 = 1597
    CEFBS_None, // M2_mmacuhs_s1 = 1598
    CEFBS_None, // M2_mmaculs_rs0 = 1599
    CEFBS_None, // M2_mmaculs_rs1 = 1600
    CEFBS_None, // M2_mmaculs_s0 = 1601
    CEFBS_None, // M2_mmaculs_s1 = 1602
    CEFBS_None, // M2_mmpyh_rs0 = 1603
    CEFBS_None, // M2_mmpyh_rs1 = 1604
    CEFBS_None, // M2_mmpyh_s0 = 1605
    CEFBS_None, // M2_mmpyh_s1 = 1606
    CEFBS_None, // M2_mmpyl_rs0 = 1607
    CEFBS_None, // M2_mmpyl_rs1 = 1608
    CEFBS_None, // M2_mmpyl_s0 = 1609
    CEFBS_None, // M2_mmpyl_s1 = 1610
    CEFBS_None, // M2_mmpyuh_rs0 = 1611
    CEFBS_None, // M2_mmpyuh_rs1 = 1612
    CEFBS_None, // M2_mmpyuh_s0 = 1613
    CEFBS_None, // M2_mmpyuh_s1 = 1614
    CEFBS_None, // M2_mmpyul_rs0 = 1615
    CEFBS_None, // M2_mmpyul_rs1 = 1616
    CEFBS_None, // M2_mmpyul_s0 = 1617
    CEFBS_None, // M2_mmpyul_s1 = 1618
    CEFBS_HasV66, // M2_mnaci = 1619
    CEFBS_None, // M2_mpy_acc_hh_s0 = 1620
    CEFBS_None, // M2_mpy_acc_hh_s1 = 1621
    CEFBS_None, // M2_mpy_acc_hl_s0 = 1622
    CEFBS_None, // M2_mpy_acc_hl_s1 = 1623
    CEFBS_None, // M2_mpy_acc_lh_s0 = 1624
    CEFBS_None, // M2_mpy_acc_lh_s1 = 1625
    CEFBS_None, // M2_mpy_acc_ll_s0 = 1626
    CEFBS_None, // M2_mpy_acc_ll_s1 = 1627
    CEFBS_None, // M2_mpy_acc_sat_hh_s0 = 1628
    CEFBS_None, // M2_mpy_acc_sat_hh_s1 = 1629
    CEFBS_None, // M2_mpy_acc_sat_hl_s0 = 1630
    CEFBS_None, // M2_mpy_acc_sat_hl_s1 = 1631
    CEFBS_None, // M2_mpy_acc_sat_lh_s0 = 1632
    CEFBS_None, // M2_mpy_acc_sat_lh_s1 = 1633
    CEFBS_None, // M2_mpy_acc_sat_ll_s0 = 1634
    CEFBS_None, // M2_mpy_acc_sat_ll_s1 = 1635
    CEFBS_None, // M2_mpy_hh_s0 = 1636
    CEFBS_None, // M2_mpy_hh_s1 = 1637
    CEFBS_None, // M2_mpy_hl_s0 = 1638
    CEFBS_None, // M2_mpy_hl_s1 = 1639
    CEFBS_None, // M2_mpy_lh_s0 = 1640
    CEFBS_None, // M2_mpy_lh_s1 = 1641
    CEFBS_None, // M2_mpy_ll_s0 = 1642
    CEFBS_None, // M2_mpy_ll_s1 = 1643
    CEFBS_None, // M2_mpy_nac_hh_s0 = 1644
    CEFBS_None, // M2_mpy_nac_hh_s1 = 1645
    CEFBS_None, // M2_mpy_nac_hl_s0 = 1646
    CEFBS_None, // M2_mpy_nac_hl_s1 = 1647
    CEFBS_None, // M2_mpy_nac_lh_s0 = 1648
    CEFBS_None, // M2_mpy_nac_lh_s1 = 1649
    CEFBS_None, // M2_mpy_nac_ll_s0 = 1650
    CEFBS_None, // M2_mpy_nac_ll_s1 = 1651
    CEFBS_None, // M2_mpy_nac_sat_hh_s0 = 1652
    CEFBS_None, // M2_mpy_nac_sat_hh_s1 = 1653
    CEFBS_None, // M2_mpy_nac_sat_hl_s0 = 1654
    CEFBS_None, // M2_mpy_nac_sat_hl_s1 = 1655
    CEFBS_None, // M2_mpy_nac_sat_lh_s0 = 1656
    CEFBS_None, // M2_mpy_nac_sat_lh_s1 = 1657
    CEFBS_None, // M2_mpy_nac_sat_ll_s0 = 1658
    CEFBS_None, // M2_mpy_nac_sat_ll_s1 = 1659
    CEFBS_None, // M2_mpy_rnd_hh_s0 = 1660
    CEFBS_None, // M2_mpy_rnd_hh_s1 = 1661
    CEFBS_None, // M2_mpy_rnd_hl_s0 = 1662
    CEFBS_None, // M2_mpy_rnd_hl_s1 = 1663
    CEFBS_None, // M2_mpy_rnd_lh_s0 = 1664
    CEFBS_None, // M2_mpy_rnd_lh_s1 = 1665
    CEFBS_None, // M2_mpy_rnd_ll_s0 = 1666
    CEFBS_None, // M2_mpy_rnd_ll_s1 = 1667
    CEFBS_None, // M2_mpy_sat_hh_s0 = 1668
    CEFBS_None, // M2_mpy_sat_hh_s1 = 1669
    CEFBS_None, // M2_mpy_sat_hl_s0 = 1670
    CEFBS_None, // M2_mpy_sat_hl_s1 = 1671
    CEFBS_None, // M2_mpy_sat_lh_s0 = 1672
    CEFBS_None, // M2_mpy_sat_lh_s1 = 1673
    CEFBS_None, // M2_mpy_sat_ll_s0 = 1674
    CEFBS_None, // M2_mpy_sat_ll_s1 = 1675
    CEFBS_None, // M2_mpy_sat_rnd_hh_s0 = 1676
    CEFBS_None, // M2_mpy_sat_rnd_hh_s1 = 1677
    CEFBS_None, // M2_mpy_sat_rnd_hl_s0 = 1678
    CEFBS_None, // M2_mpy_sat_rnd_hl_s1 = 1679
    CEFBS_None, // M2_mpy_sat_rnd_lh_s0 = 1680
    CEFBS_None, // M2_mpy_sat_rnd_lh_s1 = 1681
    CEFBS_None, // M2_mpy_sat_rnd_ll_s0 = 1682
    CEFBS_None, // M2_mpy_sat_rnd_ll_s1 = 1683
    CEFBS_None, // M2_mpy_up = 1684
    CEFBS_None, // M2_mpy_up_s1 = 1685
    CEFBS_None, // M2_mpy_up_s1_sat = 1686
    CEFBS_None, // M2_mpyd_acc_hh_s0 = 1687
    CEFBS_None, // M2_mpyd_acc_hh_s1 = 1688
    CEFBS_None, // M2_mpyd_acc_hl_s0 = 1689
    CEFBS_None, // M2_mpyd_acc_hl_s1 = 1690
    CEFBS_None, // M2_mpyd_acc_lh_s0 = 1691
    CEFBS_None, // M2_mpyd_acc_lh_s1 = 1692
    CEFBS_None, // M2_mpyd_acc_ll_s0 = 1693
    CEFBS_None, // M2_mpyd_acc_ll_s1 = 1694
    CEFBS_None, // M2_mpyd_hh_s0 = 1695
    CEFBS_None, // M2_mpyd_hh_s1 = 1696
    CEFBS_None, // M2_mpyd_hl_s0 = 1697
    CEFBS_None, // M2_mpyd_hl_s1 = 1698
    CEFBS_None, // M2_mpyd_lh_s0 = 1699
    CEFBS_None, // M2_mpyd_lh_s1 = 1700
    CEFBS_None, // M2_mpyd_ll_s0 = 1701
    CEFBS_None, // M2_mpyd_ll_s1 = 1702
    CEFBS_None, // M2_mpyd_nac_hh_s0 = 1703
    CEFBS_None, // M2_mpyd_nac_hh_s1 = 1704
    CEFBS_None, // M2_mpyd_nac_hl_s0 = 1705
    CEFBS_None, // M2_mpyd_nac_hl_s1 = 1706
    CEFBS_None, // M2_mpyd_nac_lh_s0 = 1707
    CEFBS_None, // M2_mpyd_nac_lh_s1 = 1708
    CEFBS_None, // M2_mpyd_nac_ll_s0 = 1709
    CEFBS_None, // M2_mpyd_nac_ll_s1 = 1710
    CEFBS_None, // M2_mpyd_rnd_hh_s0 = 1711
    CEFBS_None, // M2_mpyd_rnd_hh_s1 = 1712
    CEFBS_None, // M2_mpyd_rnd_hl_s0 = 1713
    CEFBS_None, // M2_mpyd_rnd_hl_s1 = 1714
    CEFBS_None, // M2_mpyd_rnd_lh_s0 = 1715
    CEFBS_None, // M2_mpyd_rnd_lh_s1 = 1716
    CEFBS_None, // M2_mpyd_rnd_ll_s0 = 1717
    CEFBS_None, // M2_mpyd_rnd_ll_s1 = 1718
    CEFBS_None, // M2_mpyi = 1719
    CEFBS_None, // M2_mpysin = 1720
    CEFBS_None, // M2_mpysip = 1721
    CEFBS_None, // M2_mpysu_up = 1722
    CEFBS_None, // M2_mpyu_acc_hh_s0 = 1723
    CEFBS_None, // M2_mpyu_acc_hh_s1 = 1724
    CEFBS_None, // M2_mpyu_acc_hl_s0 = 1725
    CEFBS_None, // M2_mpyu_acc_hl_s1 = 1726
    CEFBS_None, // M2_mpyu_acc_lh_s0 = 1727
    CEFBS_None, // M2_mpyu_acc_lh_s1 = 1728
    CEFBS_None, // M2_mpyu_acc_ll_s0 = 1729
    CEFBS_None, // M2_mpyu_acc_ll_s1 = 1730
    CEFBS_None, // M2_mpyu_hh_s0 = 1731
    CEFBS_None, // M2_mpyu_hh_s1 = 1732
    CEFBS_None, // M2_mpyu_hl_s0 = 1733
    CEFBS_None, // M2_mpyu_hl_s1 = 1734
    CEFBS_None, // M2_mpyu_lh_s0 = 1735
    CEFBS_None, // M2_mpyu_lh_s1 = 1736
    CEFBS_None, // M2_mpyu_ll_s0 = 1737
    CEFBS_None, // M2_mpyu_ll_s1 = 1738
    CEFBS_None, // M2_mpyu_nac_hh_s0 = 1739
    CEFBS_None, // M2_mpyu_nac_hh_s1 = 1740
    CEFBS_None, // M2_mpyu_nac_hl_s0 = 1741
    CEFBS_None, // M2_mpyu_nac_hl_s1 = 1742
    CEFBS_None, // M2_mpyu_nac_lh_s0 = 1743
    CEFBS_None, // M2_mpyu_nac_lh_s1 = 1744
    CEFBS_None, // M2_mpyu_nac_ll_s0 = 1745
    CEFBS_None, // M2_mpyu_nac_ll_s1 = 1746
    CEFBS_None, // M2_mpyu_up = 1747
    CEFBS_None, // M2_mpyud_acc_hh_s0 = 1748
    CEFBS_None, // M2_mpyud_acc_hh_s1 = 1749
    CEFBS_None, // M2_mpyud_acc_hl_s0 = 1750
    CEFBS_None, // M2_mpyud_acc_hl_s1 = 1751
    CEFBS_None, // M2_mpyud_acc_lh_s0 = 1752
    CEFBS_None, // M2_mpyud_acc_lh_s1 = 1753
    CEFBS_None, // M2_mpyud_acc_ll_s0 = 1754
    CEFBS_None, // M2_mpyud_acc_ll_s1 = 1755
    CEFBS_None, // M2_mpyud_hh_s0 = 1756
    CEFBS_None, // M2_mpyud_hh_s1 = 1757
    CEFBS_None, // M2_mpyud_hl_s0 = 1758
    CEFBS_None, // M2_mpyud_hl_s1 = 1759
    CEFBS_None, // M2_mpyud_lh_s0 = 1760
    CEFBS_None, // M2_mpyud_lh_s1 = 1761
    CEFBS_None, // M2_mpyud_ll_s0 = 1762
    CEFBS_None, // M2_mpyud_ll_s1 = 1763
    CEFBS_None, // M2_mpyud_nac_hh_s0 = 1764
    CEFBS_None, // M2_mpyud_nac_hh_s1 = 1765
    CEFBS_None, // M2_mpyud_nac_hl_s0 = 1766
    CEFBS_None, // M2_mpyud_nac_hl_s1 = 1767
    CEFBS_None, // M2_mpyud_nac_lh_s0 = 1768
    CEFBS_None, // M2_mpyud_nac_lh_s1 = 1769
    CEFBS_None, // M2_mpyud_nac_ll_s0 = 1770
    CEFBS_None, // M2_mpyud_nac_ll_s1 = 1771
    CEFBS_None, // M2_nacci = 1772
    CEFBS_None, // M2_naccii = 1773
    CEFBS_None, // M2_subacc = 1774
    CEFBS_None, // M2_vabsdiffh = 1775
    CEFBS_None, // M2_vabsdiffw = 1776
    CEFBS_None, // M2_vcmac_s0_sat_i = 1777
    CEFBS_None, // M2_vcmac_s0_sat_r = 1778
    CEFBS_None, // M2_vcmpy_s0_sat_i = 1779
    CEFBS_None, // M2_vcmpy_s0_sat_r = 1780
    CEFBS_None, // M2_vcmpy_s1_sat_i = 1781
    CEFBS_None, // M2_vcmpy_s1_sat_r = 1782
    CEFBS_None, // M2_vdmacs_s0 = 1783
    CEFBS_None, // M2_vdmacs_s1 = 1784
    CEFBS_None, // M2_vdmpyrs_s0 = 1785
    CEFBS_None, // M2_vdmpyrs_s1 = 1786
    CEFBS_None, // M2_vdmpys_s0 = 1787
    CEFBS_None, // M2_vdmpys_s1 = 1788
    CEFBS_None, // M2_vmac2 = 1789
    CEFBS_None, // M2_vmac2es = 1790
    CEFBS_None, // M2_vmac2es_s0 = 1791
    CEFBS_None, // M2_vmac2es_s1 = 1792
    CEFBS_None, // M2_vmac2s_s0 = 1793
    CEFBS_None, // M2_vmac2s_s1 = 1794
    CEFBS_None, // M2_vmac2su_s0 = 1795
    CEFBS_None, // M2_vmac2su_s1 = 1796
    CEFBS_None, // M2_vmpy2es_s0 = 1797
    CEFBS_None, // M2_vmpy2es_s1 = 1798
    CEFBS_None, // M2_vmpy2s_s0 = 1799
    CEFBS_None, // M2_vmpy2s_s0pack = 1800
    CEFBS_None, // M2_vmpy2s_s1 = 1801
    CEFBS_None, // M2_vmpy2s_s1pack = 1802
    CEFBS_None, // M2_vmpy2su_s0 = 1803
    CEFBS_None, // M2_vmpy2su_s1 = 1804
    CEFBS_None, // M2_vraddh = 1805
    CEFBS_None, // M2_vradduh = 1806
    CEFBS_None, // M2_vrcmaci_s0 = 1807
    CEFBS_None, // M2_vrcmaci_s0c = 1808
    CEFBS_None, // M2_vrcmacr_s0 = 1809
    CEFBS_None, // M2_vrcmacr_s0c = 1810
    CEFBS_None, // M2_vrcmpyi_s0 = 1811
    CEFBS_None, // M2_vrcmpyi_s0c = 1812
    CEFBS_None, // M2_vrcmpyr_s0 = 1813
    CEFBS_None, // M2_vrcmpyr_s0c = 1814
    CEFBS_None, // M2_vrcmpys_acc_s1_h = 1815
    CEFBS_None, // M2_vrcmpys_acc_s1_l = 1816
    CEFBS_None, // M2_vrcmpys_s1_h = 1817
    CEFBS_None, // M2_vrcmpys_s1_l = 1818
    CEFBS_None, // M2_vrcmpys_s1rp_h = 1819
    CEFBS_None, // M2_vrcmpys_s1rp_l = 1820
    CEFBS_None, // M2_vrmac_s0 = 1821
    CEFBS_None, // M2_vrmpy_s0 = 1822
    CEFBS_None, // M2_xor_xacc = 1823
    CEFBS_None, // M4_and_and = 1824
    CEFBS_None, // M4_and_andn = 1825
    CEFBS_None, // M4_and_or = 1826
    CEFBS_None, // M4_and_xor = 1827
    CEFBS_None, // M4_cmpyi_wh = 1828
    CEFBS_None, // M4_cmpyi_whc = 1829
    CEFBS_None, // M4_cmpyr_wh = 1830
    CEFBS_None, // M4_cmpyr_whc = 1831
    CEFBS_None, // M4_mac_up_s1_sat = 1832
    CEFBS_None, // M4_mpyri_addi = 1833
    CEFBS_None, // M4_mpyri_addr = 1834
    CEFBS_None, // M4_mpyri_addr_u2 = 1835
    CEFBS_None, // M4_mpyrr_addi = 1836
    CEFBS_None, // M4_mpyrr_addr = 1837
    CEFBS_None, // M4_nac_up_s1_sat = 1838
    CEFBS_None, // M4_or_and = 1839
    CEFBS_None, // M4_or_andn = 1840
    CEFBS_None, // M4_or_or = 1841
    CEFBS_None, // M4_or_xor = 1842
    CEFBS_None, // M4_pmpyw = 1843
    CEFBS_None, // M4_pmpyw_acc = 1844
    CEFBS_None, // M4_vpmpyh = 1845
    CEFBS_None, // M4_vpmpyh_acc = 1846
    CEFBS_None, // M4_vrmpyeh_acc_s0 = 1847
    CEFBS_None, // M4_vrmpyeh_acc_s1 = 1848
    CEFBS_None, // M4_vrmpyeh_s0 = 1849
    CEFBS_None, // M4_vrmpyeh_s1 = 1850
    CEFBS_None, // M4_vrmpyoh_acc_s0 = 1851
    CEFBS_None, // M4_vrmpyoh_acc_s1 = 1852
    CEFBS_None, // M4_vrmpyoh_s0 = 1853
    CEFBS_None, // M4_vrmpyoh_s1 = 1854
    CEFBS_None, // M4_xor_and = 1855
    CEFBS_None, // M4_xor_andn = 1856
    CEFBS_None, // M4_xor_or = 1857
    CEFBS_None, // M4_xor_xacc = 1858
    CEFBS_None, // M5_vdmacbsu = 1859
    CEFBS_None, // M5_vdmpybsu = 1860
    CEFBS_None, // M5_vmacbsu = 1861
    CEFBS_None, // M5_vmacbuu = 1862
    CEFBS_None, // M5_vmpybsu = 1863
    CEFBS_None, // M5_vmpybuu = 1864
    CEFBS_None, // M5_vrmacbsu = 1865
    CEFBS_None, // M5_vrmacbuu = 1866
    CEFBS_None, // M5_vrmpybsu = 1867
    CEFBS_None, // M5_vrmpybuu = 1868
    CEFBS_HasV62, // M6_vabsdiffb = 1869
    CEFBS_HasV62, // M6_vabsdiffub = 1870
    CEFBS_None, // PS_call_stk = 1871
    CEFBS_None, // PS_callr_nr = 1872
    CEFBS_None, // PS_jmpret = 1873
    CEFBS_None, // PS_jmpretf = 1874
    CEFBS_None, // PS_jmpretfnew = 1875
    CEFBS_None, // PS_jmpretfnewpt = 1876
    CEFBS_None, // PS_jmprett = 1877
    CEFBS_None, // PS_jmprettnew = 1878
    CEFBS_None, // PS_jmprettnewpt = 1879
    CEFBS_None, // PS_loadrbabs = 1880
    CEFBS_None, // PS_loadrdabs = 1881
    CEFBS_None, // PS_loadrhabs = 1882
    CEFBS_None, // PS_loadriabs = 1883
    CEFBS_None, // PS_loadrubabs = 1884
    CEFBS_None, // PS_loadruhabs = 1885
    CEFBS_None, // PS_storerbabs = 1886
    CEFBS_None, // PS_storerbnewabs = 1887
    CEFBS_None, // PS_storerdabs = 1888
    CEFBS_None, // PS_storerfabs = 1889
    CEFBS_None, // PS_storerhabs = 1890
    CEFBS_None, // PS_storerhnewabs = 1891
    CEFBS_None, // PS_storeriabs = 1892
    CEFBS_None, // PS_storerinewabs = 1893
    CEFBS_None, // RESTORE_DEALLOC_BEFORE_TAILCALL_V4 = 1894
    CEFBS_None, // RESTORE_DEALLOC_BEFORE_TAILCALL_V4_EXT = 1895
    CEFBS_None, // RESTORE_DEALLOC_BEFORE_TAILCALL_V4_EXT_PIC = 1896
    CEFBS_None, // RESTORE_DEALLOC_BEFORE_TAILCALL_V4_PIC = 1897
    CEFBS_None, // RESTORE_DEALLOC_RET_JMP_V4 = 1898
    CEFBS_None, // RESTORE_DEALLOC_RET_JMP_V4_EXT = 1899
    CEFBS_None, // RESTORE_DEALLOC_RET_JMP_V4_EXT_PIC = 1900
    CEFBS_None, // RESTORE_DEALLOC_RET_JMP_V4_PIC = 1901
    CEFBS_None, // S2_addasl_rrri = 1902
    CEFBS_None, // S2_allocframe = 1903
    CEFBS_None, // S2_asl_i_p = 1904
    CEFBS_None, // S2_asl_i_p_acc = 1905
    CEFBS_None, // S2_asl_i_p_and = 1906
    CEFBS_None, // S2_asl_i_p_nac = 1907
    CEFBS_None, // S2_asl_i_p_or = 1908
    CEFBS_None, // S2_asl_i_p_xacc = 1909
    CEFBS_None, // S2_asl_i_r = 1910
    CEFBS_None, // S2_asl_i_r_acc = 1911
    CEFBS_None, // S2_asl_i_r_and = 1912
    CEFBS_None, // S2_asl_i_r_nac = 1913
    CEFBS_None, // S2_asl_i_r_or = 1914
    CEFBS_None, // S2_asl_i_r_sat = 1915
    CEFBS_None, // S2_asl_i_r_xacc = 1916
    CEFBS_None, // S2_asl_i_vh = 1917
    CEFBS_None, // S2_asl_i_vw = 1918
    CEFBS_None, // S2_asl_r_p = 1919
    CEFBS_None, // S2_asl_r_p_acc = 1920
    CEFBS_None, // S2_asl_r_p_and = 1921
    CEFBS_None, // S2_asl_r_p_nac = 1922
    CEFBS_None, // S2_asl_r_p_or = 1923
    CEFBS_None, // S2_asl_r_p_xor = 1924
    CEFBS_None, // S2_asl_r_r = 1925
    CEFBS_None, // S2_asl_r_r_acc = 1926
    CEFBS_None, // S2_asl_r_r_and = 1927
    CEFBS_None, // S2_asl_r_r_nac = 1928
    CEFBS_None, // S2_asl_r_r_or = 1929
    CEFBS_None, // S2_asl_r_r_sat = 1930
    CEFBS_None, // S2_asl_r_vh = 1931
    CEFBS_None, // S2_asl_r_vw = 1932
    CEFBS_None, // S2_asr_i_p = 1933
    CEFBS_None, // S2_asr_i_p_acc = 1934
    CEFBS_None, // S2_asr_i_p_and = 1935
    CEFBS_None, // S2_asr_i_p_nac = 1936
    CEFBS_None, // S2_asr_i_p_or = 1937
    CEFBS_None, // S2_asr_i_p_rnd = 1938
    CEFBS_None, // S2_asr_i_r = 1939
    CEFBS_None, // S2_asr_i_r_acc = 1940
    CEFBS_None, // S2_asr_i_r_and = 1941
    CEFBS_None, // S2_asr_i_r_nac = 1942
    CEFBS_None, // S2_asr_i_r_or = 1943
    CEFBS_None, // S2_asr_i_r_rnd = 1944
    CEFBS_None, // S2_asr_i_svw_trun = 1945
    CEFBS_None, // S2_asr_i_vh = 1946
    CEFBS_None, // S2_asr_i_vw = 1947
    CEFBS_None, // S2_asr_r_p = 1948
    CEFBS_None, // S2_asr_r_p_acc = 1949
    CEFBS_None, // S2_asr_r_p_and = 1950
    CEFBS_None, // S2_asr_r_p_nac = 1951
    CEFBS_None, // S2_asr_r_p_or = 1952
    CEFBS_None, // S2_asr_r_p_xor = 1953
    CEFBS_None, // S2_asr_r_r = 1954
    CEFBS_None, // S2_asr_r_r_acc = 1955
    CEFBS_None, // S2_asr_r_r_and = 1956
    CEFBS_None, // S2_asr_r_r_nac = 1957
    CEFBS_None, // S2_asr_r_r_or = 1958
    CEFBS_None, // S2_asr_r_r_sat = 1959
    CEFBS_None, // S2_asr_r_svw_trun = 1960
    CEFBS_None, // S2_asr_r_vh = 1961
    CEFBS_None, // S2_asr_r_vw = 1962
    CEFBS_None, // S2_brev = 1963
    CEFBS_None, // S2_brevp = 1964
    CEFBS_None, // S2_cabacdecbin = 1965
    CEFBS_None, // S2_cl0 = 1966
    CEFBS_None, // S2_cl0p = 1967
    CEFBS_None, // S2_cl1 = 1968
    CEFBS_None, // S2_cl1p = 1969
    CEFBS_None, // S2_clb = 1970
    CEFBS_None, // S2_clbnorm = 1971
    CEFBS_None, // S2_clbp = 1972
    CEFBS_None, // S2_clrbit_i = 1973
    CEFBS_None, // S2_clrbit_r = 1974
    CEFBS_None, // S2_ct0 = 1975
    CEFBS_None, // S2_ct0p = 1976
    CEFBS_None, // S2_ct1 = 1977
    CEFBS_None, // S2_ct1p = 1978
    CEFBS_None, // S2_deinterleave = 1979
    CEFBS_None, // S2_extractu = 1980
    CEFBS_None, // S2_extractu_rp = 1981
    CEFBS_None, // S2_extractup = 1982
    CEFBS_None, // S2_extractup_rp = 1983
    CEFBS_None, // S2_insert = 1984
    CEFBS_None, // S2_insert_rp = 1985
    CEFBS_None, // S2_insertp = 1986
    CEFBS_None, // S2_insertp_rp = 1987
    CEFBS_None, // S2_interleave = 1988
    CEFBS_None, // S2_lfsp = 1989
    CEFBS_None, // S2_lsl_r_p = 1990
    CEFBS_None, // S2_lsl_r_p_acc = 1991
    CEFBS_None, // S2_lsl_r_p_and = 1992
    CEFBS_None, // S2_lsl_r_p_nac = 1993
    CEFBS_None, // S2_lsl_r_p_or = 1994
    CEFBS_None, // S2_lsl_r_p_xor = 1995
    CEFBS_None, // S2_lsl_r_r = 1996
    CEFBS_None, // S2_lsl_r_r_acc = 1997
    CEFBS_None, // S2_lsl_r_r_and = 1998
    CEFBS_None, // S2_lsl_r_r_nac = 1999
    CEFBS_None, // S2_lsl_r_r_or = 2000
    CEFBS_None, // S2_lsl_r_vh = 2001
    CEFBS_None, // S2_lsl_r_vw = 2002
    CEFBS_None, // S2_lsr_i_p = 2003
    CEFBS_None, // S2_lsr_i_p_acc = 2004
    CEFBS_None, // S2_lsr_i_p_and = 2005
    CEFBS_None, // S2_lsr_i_p_nac = 2006
    CEFBS_None, // S2_lsr_i_p_or = 2007
    CEFBS_None, // S2_lsr_i_p_xacc = 2008
    CEFBS_None, // S2_lsr_i_r = 2009
    CEFBS_None, // S2_lsr_i_r_acc = 2010
    CEFBS_None, // S2_lsr_i_r_and = 2011
    CEFBS_None, // S2_lsr_i_r_nac = 2012
    CEFBS_None, // S2_lsr_i_r_or = 2013
    CEFBS_None, // S2_lsr_i_r_xacc = 2014
    CEFBS_None, // S2_lsr_i_vh = 2015
    CEFBS_None, // S2_lsr_i_vw = 2016
    CEFBS_None, // S2_lsr_r_p = 2017
    CEFBS_None, // S2_lsr_r_p_acc = 2018
    CEFBS_None, // S2_lsr_r_p_and = 2019
    CEFBS_None, // S2_lsr_r_p_nac = 2020
    CEFBS_None, // S2_lsr_r_p_or = 2021
    CEFBS_None, // S2_lsr_r_p_xor = 2022
    CEFBS_None, // S2_lsr_r_r = 2023
    CEFBS_None, // S2_lsr_r_r_acc = 2024
    CEFBS_None, // S2_lsr_r_r_and = 2025
    CEFBS_None, // S2_lsr_r_r_nac = 2026
    CEFBS_None, // S2_lsr_r_r_or = 2027
    CEFBS_None, // S2_lsr_r_vh = 2028
    CEFBS_None, // S2_lsr_r_vw = 2029
    CEFBS_HasV66, // S2_mask = 2030
    CEFBS_None, // S2_packhl = 2031
    CEFBS_None, // S2_parityp = 2032
    CEFBS_None, // S2_pstorerbf_io = 2033
    CEFBS_None, // S2_pstorerbf_pi = 2034
    CEFBS_None, // S2_pstorerbfnew_pi = 2035
    CEFBS_None, // S2_pstorerbnewf_io = 2036
    CEFBS_None, // S2_pstorerbnewf_pi = 2037
    CEFBS_None, // S2_pstorerbnewfnew_pi = 2038
    CEFBS_None, // S2_pstorerbnewt_io = 2039
    CEFBS_None, // S2_pstorerbnewt_pi = 2040
    CEFBS_None, // S2_pstorerbnewtnew_pi = 2041
    CEFBS_None, // S2_pstorerbt_io = 2042
    CEFBS_None, // S2_pstorerbt_pi = 2043
    CEFBS_None, // S2_pstorerbtnew_pi = 2044
    CEFBS_None, // S2_pstorerdf_io = 2045
    CEFBS_None, // S2_pstorerdf_pi = 2046
    CEFBS_None, // S2_pstorerdfnew_pi = 2047
    CEFBS_None, // S2_pstorerdt_io = 2048
    CEFBS_None, // S2_pstorerdt_pi = 2049
    CEFBS_None, // S2_pstorerdtnew_pi = 2050
    CEFBS_None, // S2_pstorerff_io = 2051
    CEFBS_None, // S2_pstorerff_pi = 2052
    CEFBS_None, // S2_pstorerffnew_pi = 2053
    CEFBS_None, // S2_pstorerft_io = 2054
    CEFBS_None, // S2_pstorerft_pi = 2055
    CEFBS_None, // S2_pstorerftnew_pi = 2056
    CEFBS_None, // S2_pstorerhf_io = 2057
    CEFBS_None, // S2_pstorerhf_pi = 2058
    CEFBS_None, // S2_pstorerhfnew_pi = 2059
    CEFBS_None, // S2_pstorerhnewf_io = 2060
    CEFBS_None, // S2_pstorerhnewf_pi = 2061
    CEFBS_None, // S2_pstorerhnewfnew_pi = 2062
    CEFBS_None, // S2_pstorerhnewt_io = 2063
    CEFBS_None, // S2_pstorerhnewt_pi = 2064
    CEFBS_None, // S2_pstorerhnewtnew_pi = 2065
    CEFBS_None, // S2_pstorerht_io = 2066
    CEFBS_None, // S2_pstorerht_pi = 2067
    CEFBS_None, // S2_pstorerhtnew_pi = 2068
    CEFBS_None, // S2_pstorerif_io = 2069
    CEFBS_None, // S2_pstorerif_pi = 2070
    CEFBS_None, // S2_pstorerifnew_pi = 2071
    CEFBS_None, // S2_pstorerinewf_io = 2072
    CEFBS_None, // S2_pstorerinewf_pi = 2073
    CEFBS_None, // S2_pstorerinewfnew_pi = 2074
    CEFBS_None, // S2_pstorerinewt_io = 2075
    CEFBS_None, // S2_pstorerinewt_pi = 2076
    CEFBS_None, // S2_pstorerinewtnew_pi = 2077
    CEFBS_None, // S2_pstorerit_io = 2078
    CEFBS_None, // S2_pstorerit_pi = 2079
    CEFBS_None, // S2_pstoreritnew_pi = 2080
    CEFBS_None, // S2_setbit_i = 2081
    CEFBS_None, // S2_setbit_r = 2082
    CEFBS_None, // S2_shuffeb = 2083
    CEFBS_None, // S2_shuffeh = 2084
    CEFBS_None, // S2_shuffob = 2085
    CEFBS_None, // S2_shuffoh = 2086
    CEFBS_None, // S2_storerb_io = 2087
    CEFBS_None, // S2_storerb_pbr = 2088
    CEFBS_None, // S2_storerb_pci = 2089
    CEFBS_None, // S2_storerb_pcr = 2090
    CEFBS_None, // S2_storerb_pi = 2091
    CEFBS_None, // S2_storerb_pr = 2092
    CEFBS_None, // S2_storerbgp = 2093
    CEFBS_None, // S2_storerbnew_io = 2094
    CEFBS_None, // S2_storerbnew_pbr = 2095
    CEFBS_None, // S2_storerbnew_pci = 2096
    CEFBS_None, // S2_storerbnew_pcr = 2097
    CEFBS_None, // S2_storerbnew_pi = 2098
    CEFBS_None, // S2_storerbnew_pr = 2099
    CEFBS_None, // S2_storerbnewgp = 2100
    CEFBS_None, // S2_storerd_io = 2101
    CEFBS_None, // S2_storerd_pbr = 2102
    CEFBS_None, // S2_storerd_pci = 2103
    CEFBS_None, // S2_storerd_pcr = 2104
    CEFBS_None, // S2_storerd_pi = 2105
    CEFBS_None, // S2_storerd_pr = 2106
    CEFBS_None, // S2_storerdgp = 2107
    CEFBS_None, // S2_storerf_io = 2108
    CEFBS_None, // S2_storerf_pbr = 2109
    CEFBS_None, // S2_storerf_pci = 2110
    CEFBS_None, // S2_storerf_pcr = 2111
    CEFBS_None, // S2_storerf_pi = 2112
    CEFBS_None, // S2_storerf_pr = 2113
    CEFBS_None, // S2_storerfgp = 2114
    CEFBS_None, // S2_storerh_io = 2115
    CEFBS_None, // S2_storerh_pbr = 2116
    CEFBS_None, // S2_storerh_pci = 2117
    CEFBS_None, // S2_storerh_pcr = 2118
    CEFBS_None, // S2_storerh_pi = 2119
    CEFBS_None, // S2_storerh_pr = 2120
    CEFBS_None, // S2_storerhgp = 2121
    CEFBS_None, // S2_storerhnew_io = 2122
    CEFBS_None, // S2_storerhnew_pbr = 2123
    CEFBS_None, // S2_storerhnew_pci = 2124
    CEFBS_None, // S2_storerhnew_pcr = 2125
    CEFBS_None, // S2_storerhnew_pi = 2126
    CEFBS_None, // S2_storerhnew_pr = 2127
    CEFBS_None, // S2_storerhnewgp = 2128
    CEFBS_None, // S2_storeri_io = 2129
    CEFBS_None, // S2_storeri_pbr = 2130
    CEFBS_None, // S2_storeri_pci = 2131
    CEFBS_None, // S2_storeri_pcr = 2132
    CEFBS_None, // S2_storeri_pi = 2133
    CEFBS_None, // S2_storeri_pr = 2134
    CEFBS_None, // S2_storerigp = 2135
    CEFBS_None, // S2_storerinew_io = 2136
    CEFBS_None, // S2_storerinew_pbr = 2137
    CEFBS_None, // S2_storerinew_pci = 2138
    CEFBS_None, // S2_storerinew_pcr = 2139
    CEFBS_None, // S2_storerinew_pi = 2140
    CEFBS_None, // S2_storerinew_pr = 2141
    CEFBS_None, // S2_storerinewgp = 2142
    CEFBS_None, // S2_storew_locked = 2143
    CEFBS_None, // S2_svsathb = 2144
    CEFBS_None, // S2_svsathub = 2145
    CEFBS_None, // S2_tableidxb = 2146
    CEFBS_None, // S2_tableidxd = 2147
    CEFBS_None, // S2_tableidxh = 2148
    CEFBS_None, // S2_tableidxw = 2149
    CEFBS_None, // S2_togglebit_i = 2150
    CEFBS_None, // S2_togglebit_r = 2151
    CEFBS_None, // S2_tstbit_i = 2152
    CEFBS_None, // S2_tstbit_r = 2153
    CEFBS_None, // S2_valignib = 2154
    CEFBS_None, // S2_valignrb = 2155
    CEFBS_None, // S2_vcnegh = 2156
    CEFBS_None, // S2_vcrotate = 2157
    CEFBS_None, // S2_vrcnegh = 2158
    CEFBS_None, // S2_vrndpackwh = 2159
    CEFBS_None, // S2_vrndpackwhs = 2160
    CEFBS_None, // S2_vsathb = 2161
    CEFBS_None, // S2_vsathb_nopack = 2162
    CEFBS_None, // S2_vsathub = 2163
    CEFBS_None, // S2_vsathub_nopack = 2164
    CEFBS_None, // S2_vsatwh = 2165
    CEFBS_None, // S2_vsatwh_nopack = 2166
    CEFBS_None, // S2_vsatwuh = 2167
    CEFBS_None, // S2_vsatwuh_nopack = 2168
    CEFBS_None, // S2_vsplatrb = 2169
    CEFBS_None, // S2_vsplatrh = 2170
    CEFBS_None, // S2_vspliceib = 2171
    CEFBS_None, // S2_vsplicerb = 2172
    CEFBS_None, // S2_vsxtbh = 2173
    CEFBS_None, // S2_vsxthw = 2174
    CEFBS_None, // S2_vtrunehb = 2175
    CEFBS_None, // S2_vtrunewh = 2176
    CEFBS_None, // S2_vtrunohb = 2177
    CEFBS_None, // S2_vtrunowh = 2178
    CEFBS_None, // S2_vzxtbh = 2179
    CEFBS_None, // S2_vzxthw = 2180
    CEFBS_None, // S4_addaddi = 2181
    CEFBS_None, // S4_addi_asl_ri = 2182
    CEFBS_None, // S4_addi_lsr_ri = 2183
    CEFBS_None, // S4_andi_asl_ri = 2184
    CEFBS_None, // S4_andi_lsr_ri = 2185
    CEFBS_None, // S4_clbaddi = 2186
    CEFBS_None, // S4_clbpaddi = 2187
    CEFBS_None, // S4_clbpnorm = 2188
    CEFBS_None, // S4_extract = 2189
    CEFBS_None, // S4_extract_rp = 2190
    CEFBS_None, // S4_extractp = 2191
    CEFBS_None, // S4_extractp_rp = 2192
    CEFBS_None, // S4_lsli = 2193
    CEFBS_None, // S4_ntstbit_i = 2194
    CEFBS_None, // S4_ntstbit_r = 2195
    CEFBS_None, // S4_or_andi = 2196
    CEFBS_None, // S4_or_andix = 2197
    CEFBS_None, // S4_or_ori = 2198
    CEFBS_None, // S4_ori_asl_ri = 2199
    CEFBS_None, // S4_ori_lsr_ri = 2200
    CEFBS_None, // S4_parity = 2201
    CEFBS_None, // S4_pstorerbf_abs = 2202
    CEFBS_None, // S4_pstorerbf_rr = 2203
    CEFBS_None, // S4_pstorerbfnew_abs = 2204
    CEFBS_None, // S4_pstorerbfnew_io = 2205
    CEFBS_None, // S4_pstorerbfnew_rr = 2206
    CEFBS_None, // S4_pstorerbnewf_abs = 2207
    CEFBS_None, // S4_pstorerbnewf_rr = 2208
    CEFBS_None, // S4_pstorerbnewfnew_abs = 2209
    CEFBS_None, // S4_pstorerbnewfnew_io = 2210
    CEFBS_None, // S4_pstorerbnewfnew_rr = 2211
    CEFBS_None, // S4_pstorerbnewt_abs = 2212
    CEFBS_None, // S4_pstorerbnewt_rr = 2213
    CEFBS_None, // S4_pstorerbnewtnew_abs = 2214
    CEFBS_None, // S4_pstorerbnewtnew_io = 2215
    CEFBS_None, // S4_pstorerbnewtnew_rr = 2216
    CEFBS_None, // S4_pstorerbt_abs = 2217
    CEFBS_None, // S4_pstorerbt_rr = 2218
    CEFBS_None, // S4_pstorerbtnew_abs = 2219
    CEFBS_None, // S4_pstorerbtnew_io = 2220
    CEFBS_None, // S4_pstorerbtnew_rr = 2221
    CEFBS_None, // S4_pstorerdf_abs = 2222
    CEFBS_None, // S4_pstorerdf_rr = 2223
    CEFBS_None, // S4_pstorerdfnew_abs = 2224
    CEFBS_None, // S4_pstorerdfnew_io = 2225
    CEFBS_None, // S4_pstorerdfnew_rr = 2226
    CEFBS_None, // S4_pstorerdt_abs = 2227
    CEFBS_None, // S4_pstorerdt_rr = 2228
    CEFBS_None, // S4_pstorerdtnew_abs = 2229
    CEFBS_None, // S4_pstorerdtnew_io = 2230
    CEFBS_None, // S4_pstorerdtnew_rr = 2231
    CEFBS_None, // S4_pstorerff_abs = 2232
    CEFBS_None, // S4_pstorerff_rr = 2233
    CEFBS_None, // S4_pstorerffnew_abs = 2234
    CEFBS_None, // S4_pstorerffnew_io = 2235
    CEFBS_None, // S4_pstorerffnew_rr = 2236
    CEFBS_None, // S4_pstorerft_abs = 2237
    CEFBS_None, // S4_pstorerft_rr = 2238
    CEFBS_None, // S4_pstorerftnew_abs = 2239
    CEFBS_None, // S4_pstorerftnew_io = 2240
    CEFBS_None, // S4_pstorerftnew_rr = 2241
    CEFBS_None, // S4_pstorerhf_abs = 2242
    CEFBS_None, // S4_pstorerhf_rr = 2243
    CEFBS_None, // S4_pstorerhfnew_abs = 2244
    CEFBS_None, // S4_pstorerhfnew_io = 2245
    CEFBS_None, // S4_pstorerhfnew_rr = 2246
    CEFBS_None, // S4_pstorerhnewf_abs = 2247
    CEFBS_None, // S4_pstorerhnewf_rr = 2248
    CEFBS_None, // S4_pstorerhnewfnew_abs = 2249
    CEFBS_None, // S4_pstorerhnewfnew_io = 2250
    CEFBS_None, // S4_pstorerhnewfnew_rr = 2251
    CEFBS_None, // S4_pstorerhnewt_abs = 2252
    CEFBS_None, // S4_pstorerhnewt_rr = 2253
    CEFBS_None, // S4_pstorerhnewtnew_abs = 2254
    CEFBS_None, // S4_pstorerhnewtnew_io = 2255
    CEFBS_None, // S4_pstorerhnewtnew_rr = 2256
    CEFBS_None, // S4_pstorerht_abs = 2257
    CEFBS_None, // S4_pstorerht_rr = 2258
    CEFBS_None, // S4_pstorerhtnew_abs = 2259
    CEFBS_None, // S4_pstorerhtnew_io = 2260
    CEFBS_None, // S4_pstorerhtnew_rr = 2261
    CEFBS_None, // S4_pstorerif_abs = 2262
    CEFBS_None, // S4_pstorerif_rr = 2263
    CEFBS_None, // S4_pstorerifnew_abs = 2264
    CEFBS_None, // S4_pstorerifnew_io = 2265
    CEFBS_None, // S4_pstorerifnew_rr = 2266
    CEFBS_None, // S4_pstorerinewf_abs = 2267
    CEFBS_None, // S4_pstorerinewf_rr = 2268
    CEFBS_None, // S4_pstorerinewfnew_abs = 2269
    CEFBS_None, // S4_pstorerinewfnew_io = 2270
    CEFBS_None, // S4_pstorerinewfnew_rr = 2271
    CEFBS_None, // S4_pstorerinewt_abs = 2272
    CEFBS_None, // S4_pstorerinewt_rr = 2273
    CEFBS_None, // S4_pstorerinewtnew_abs = 2274
    CEFBS_None, // S4_pstorerinewtnew_io = 2275
    CEFBS_None, // S4_pstorerinewtnew_rr = 2276
    CEFBS_None, // S4_pstorerit_abs = 2277
    CEFBS_None, // S4_pstorerit_rr = 2278
    CEFBS_None, // S4_pstoreritnew_abs = 2279
    CEFBS_None, // S4_pstoreritnew_io = 2280
    CEFBS_None, // S4_pstoreritnew_rr = 2281
    CEFBS_None, // S4_stored_locked = 2282
    CEFBS_None, // S4_storeirb_io = 2283
    CEFBS_None, // S4_storeirbf_io = 2284
    CEFBS_None, // S4_storeirbfnew_io = 2285
    CEFBS_None, // S4_storeirbt_io = 2286
    CEFBS_None, // S4_storeirbtnew_io = 2287
    CEFBS_None, // S4_storeirh_io = 2288
    CEFBS_None, // S4_storeirhf_io = 2289
    CEFBS_None, // S4_storeirhfnew_io = 2290
    CEFBS_None, // S4_storeirht_io = 2291
    CEFBS_None, // S4_storeirhtnew_io = 2292
    CEFBS_None, // S4_storeiri_io = 2293
    CEFBS_None, // S4_storeirif_io = 2294
    CEFBS_None, // S4_storeirifnew_io = 2295
    CEFBS_None, // S4_storeirit_io = 2296
    CEFBS_None, // S4_storeiritnew_io = 2297
    CEFBS_None, // S4_storerb_ap = 2298
    CEFBS_None, // S4_storerb_rr = 2299
    CEFBS_None, // S4_storerb_ur = 2300
    CEFBS_None, // S4_storerbnew_ap = 2301
    CEFBS_None, // S4_storerbnew_rr = 2302
    CEFBS_None, // S4_storerbnew_ur = 2303
    CEFBS_None, // S4_storerd_ap = 2304
    CEFBS_None, // S4_storerd_rr = 2305
    CEFBS_None, // S4_storerd_ur = 2306
    CEFBS_None, // S4_storerf_ap = 2307
    CEFBS_None, // S4_storerf_rr = 2308
    CEFBS_None, // S4_storerf_ur = 2309
    CEFBS_None, // S4_storerh_ap = 2310
    CEFBS_None, // S4_storerh_rr = 2311
    CEFBS_None, // S4_storerh_ur = 2312
    CEFBS_None, // S4_storerhnew_ap = 2313
    CEFBS_None, // S4_storerhnew_rr = 2314
    CEFBS_None, // S4_storerhnew_ur = 2315
    CEFBS_None, // S4_storeri_ap = 2316
    CEFBS_None, // S4_storeri_rr = 2317
    CEFBS_None, // S4_storeri_ur = 2318
    CEFBS_None, // S4_storerinew_ap = 2319
    CEFBS_None, // S4_storerinew_rr = 2320
    CEFBS_None, // S4_storerinew_ur = 2321
    CEFBS_None, // S4_subaddi = 2322
    CEFBS_None, // S4_subi_asl_ri = 2323
    CEFBS_None, // S4_subi_lsr_ri = 2324
    CEFBS_None, // S4_vrcrotate = 2325
    CEFBS_None, // S4_vrcrotate_acc = 2326
    CEFBS_None, // S4_vxaddsubh = 2327
    CEFBS_None, // S4_vxaddsubhr = 2328
    CEFBS_None, // S4_vxaddsubw = 2329
    CEFBS_None, // S4_vxsubaddh = 2330
    CEFBS_None, // S4_vxsubaddhr = 2331
    CEFBS_None, // S4_vxsubaddw = 2332
    CEFBS_None, // S5_asrhub_rnd_sat = 2333
    CEFBS_None, // S5_asrhub_sat = 2334
    CEFBS_None, // S5_popcountp = 2335
    CEFBS_None, // S5_vasrhrnd = 2336
    CEFBS_HasV60, // S6_rol_i_p = 2337
    CEFBS_HasV60, // S6_rol_i_p_acc = 2338
    CEFBS_HasV60, // S6_rol_i_p_and = 2339
    CEFBS_HasV60, // S6_rol_i_p_nac = 2340
    CEFBS_HasV60, // S6_rol_i_p_or = 2341
    CEFBS_HasV60, // S6_rol_i_p_xacc = 2342
    CEFBS_HasV60, // S6_rol_i_r = 2343
    CEFBS_HasV60, // S6_rol_i_r_acc = 2344
    CEFBS_HasV60, // S6_rol_i_r_and = 2345
    CEFBS_HasV60, // S6_rol_i_r_nac = 2346
    CEFBS_HasV60, // S6_rol_i_r_or = 2347
    CEFBS_HasV60, // S6_rol_i_r_xacc = 2348
    CEFBS_HasV62, // S6_vsplatrbp = 2349
    CEFBS_HasV62, // S6_vtrunehb_ppp = 2350
    CEFBS_HasV62, // S6_vtrunohb_ppp = 2351
    CEFBS_None, // SA1_addi = 2352
    CEFBS_None, // SA1_addrx = 2353
    CEFBS_None, // SA1_addsp = 2354
    CEFBS_None, // SA1_and1 = 2355
    CEFBS_None, // SA1_clrf = 2356
    CEFBS_None, // SA1_clrfnew = 2357
    CEFBS_None, // SA1_clrt = 2358
    CEFBS_None, // SA1_clrtnew = 2359
    CEFBS_None, // SA1_cmpeqi = 2360
    CEFBS_None, // SA1_combine0i = 2361
    CEFBS_None, // SA1_combine1i = 2362
    CEFBS_None, // SA1_combine2i = 2363
    CEFBS_None, // SA1_combine3i = 2364
    CEFBS_None, // SA1_combinerz = 2365
    CEFBS_None, // SA1_combinezr = 2366
    CEFBS_None, // SA1_dec = 2367
    CEFBS_None, // SA1_inc = 2368
    CEFBS_None, // SA1_seti = 2369
    CEFBS_None, // SA1_setin1 = 2370
    CEFBS_None, // SA1_sxtb = 2371
    CEFBS_None, // SA1_sxth = 2372
    CEFBS_None, // SA1_tfr = 2373
    CEFBS_None, // SA1_zxtb = 2374
    CEFBS_None, // SA1_zxth = 2375
    CEFBS_None, // SAVE_REGISTERS_CALL_V4 = 2376
    CEFBS_None, // SAVE_REGISTERS_CALL_V4STK = 2377
    CEFBS_None, // SAVE_REGISTERS_CALL_V4STK_EXT = 2378
    CEFBS_None, // SAVE_REGISTERS_CALL_V4STK_EXT_PIC = 2379
    CEFBS_None, // SAVE_REGISTERS_CALL_V4STK_PIC = 2380
    CEFBS_None, // SAVE_REGISTERS_CALL_V4_EXT = 2381
    CEFBS_None, // SAVE_REGISTERS_CALL_V4_EXT_PIC = 2382
    CEFBS_None, // SAVE_REGISTERS_CALL_V4_PIC = 2383
    CEFBS_None, // SL1_loadri_io = 2384
    CEFBS_None, // SL1_loadrub_io = 2385
    CEFBS_None, // SL2_deallocframe = 2386
    CEFBS_None, // SL2_jumpr31 = 2387
    CEFBS_None, // SL2_jumpr31_f = 2388
    CEFBS_None, // SL2_jumpr31_fnew = 2389
    CEFBS_None, // SL2_jumpr31_t = 2390
    CEFBS_None, // SL2_jumpr31_tnew = 2391
    CEFBS_None, // SL2_loadrb_io = 2392
    CEFBS_None, // SL2_loadrd_sp = 2393
    CEFBS_None, // SL2_loadrh_io = 2394
    CEFBS_None, // SL2_loadri_sp = 2395
    CEFBS_None, // SL2_loadruh_io = 2396
    CEFBS_None, // SL2_return = 2397
    CEFBS_None, // SL2_return_f = 2398
    CEFBS_None, // SL2_return_fnew = 2399
    CEFBS_None, // SL2_return_t = 2400
    CEFBS_None, // SL2_return_tnew = 2401
    CEFBS_None, // SS1_storeb_io = 2402
    CEFBS_None, // SS1_storew_io = 2403
    CEFBS_None, // SS2_allocframe = 2404
    CEFBS_None, // SS2_storebi0 = 2405
    CEFBS_None, // SS2_storebi1 = 2406
    CEFBS_None, // SS2_stored_sp = 2407
    CEFBS_None, // SS2_storeh_io = 2408
    CEFBS_None, // SS2_storew_sp = 2409
    CEFBS_None, // SS2_storewi0 = 2410
    CEFBS_None, // SS2_storewi1 = 2411
    CEFBS_None, // TFRI64_V2_ext = 2412
    CEFBS_None, // TFRI64_V4 = 2413
    CEFBS_UseHVXV60, // V6_extractw = 2414
    CEFBS_UseHVXV62, // V6_lvsplatb = 2415
    CEFBS_UseHVXV62, // V6_lvsplath = 2416
    CEFBS_UseHVXV60, // V6_lvsplatw = 2417
    CEFBS_UseHVXV60, // V6_pred_and = 2418
    CEFBS_UseHVXV60, // V6_pred_and_n = 2419
    CEFBS_UseHVXV60, // V6_pred_not = 2420
    CEFBS_UseHVXV60, // V6_pred_or = 2421
    CEFBS_UseHVXV60, // V6_pred_or_n = 2422
    CEFBS_UseHVXV60, // V6_pred_scalar2 = 2423
    CEFBS_UseHVXV62, // V6_pred_scalar2v2 = 2424
    CEFBS_UseHVXV60, // V6_pred_xor = 2425
    CEFBS_UseHVXV62, // V6_shuffeqh = 2426
    CEFBS_UseHVXV62, // V6_shuffeqw = 2427
    CEFBS_UseHVXV60, // V6_vL32Ub_ai = 2428
    CEFBS_UseHVXV60, // V6_vL32Ub_pi = 2429
    CEFBS_UseHVXV60, // V6_vL32Ub_ppu = 2430
    CEFBS_UseHVXV60, // V6_vL32b_ai = 2431
    CEFBS_UseHVXV60, // V6_vL32b_cur_ai = 2432
    CEFBS_UseHVXV62, // V6_vL32b_cur_npred_ai = 2433
    CEFBS_UseHVXV62, // V6_vL32b_cur_npred_pi = 2434
    CEFBS_UseHVXV62, // V6_vL32b_cur_npred_ppu = 2435
    CEFBS_UseHVXV60, // V6_vL32b_cur_pi = 2436
    CEFBS_UseHVXV60, // V6_vL32b_cur_ppu = 2437
    CEFBS_UseHVXV62, // V6_vL32b_cur_pred_ai = 2438
    CEFBS_UseHVXV62, // V6_vL32b_cur_pred_pi = 2439
    CEFBS_UseHVXV62, // V6_vL32b_cur_pred_ppu = 2440
    CEFBS_UseHVXV62, // V6_vL32b_npred_ai = 2441
    CEFBS_UseHVXV62, // V6_vL32b_npred_pi = 2442
    CEFBS_UseHVXV62, // V6_vL32b_npred_ppu = 2443
    CEFBS_UseHVXV60, // V6_vL32b_nt_ai = 2444
    CEFBS_UseHVXV60, // V6_vL32b_nt_cur_ai = 2445
    CEFBS_UseHVXV62, // V6_vL32b_nt_cur_npred_ai = 2446
    CEFBS_UseHVXV62, // V6_vL32b_nt_cur_npred_pi = 2447
    CEFBS_UseHVXV62, // V6_vL32b_nt_cur_npred_ppu = 2448
    CEFBS_UseHVXV60, // V6_vL32b_nt_cur_pi = 2449
    CEFBS_UseHVXV60, // V6_vL32b_nt_cur_ppu = 2450
    CEFBS_UseHVXV62, // V6_vL32b_nt_cur_pred_ai = 2451
    CEFBS_UseHVXV62, // V6_vL32b_nt_cur_pred_pi = 2452
    CEFBS_UseHVXV62, // V6_vL32b_nt_cur_pred_ppu = 2453
    CEFBS_UseHVXV62, // V6_vL32b_nt_npred_ai = 2454
    CEFBS_UseHVXV62, // V6_vL32b_nt_npred_pi = 2455
    CEFBS_UseHVXV62, // V6_vL32b_nt_npred_ppu = 2456
    CEFBS_UseHVXV60, // V6_vL32b_nt_pi = 2457
    CEFBS_UseHVXV60, // V6_vL32b_nt_ppu = 2458
    CEFBS_UseHVXV62, // V6_vL32b_nt_pred_ai = 2459
    CEFBS_UseHVXV62, // V6_vL32b_nt_pred_pi = 2460
    CEFBS_UseHVXV62, // V6_vL32b_nt_pred_ppu = 2461
    CEFBS_UseHVXV60, // V6_vL32b_nt_tmp_ai = 2462
    CEFBS_UseHVXV62, // V6_vL32b_nt_tmp_npred_ai = 2463
    CEFBS_UseHVXV62, // V6_vL32b_nt_tmp_npred_pi = 2464
    CEFBS_UseHVXV62, // V6_vL32b_nt_tmp_npred_ppu = 2465
    CEFBS_UseHVXV60, // V6_vL32b_nt_tmp_pi = 2466
    CEFBS_UseHVXV60, // V6_vL32b_nt_tmp_ppu = 2467
    CEFBS_UseHVXV62, // V6_vL32b_nt_tmp_pred_ai = 2468
    CEFBS_UseHVXV62, // V6_vL32b_nt_tmp_pred_pi = 2469
    CEFBS_UseHVXV62, // V6_vL32b_nt_tmp_pred_ppu = 2470
    CEFBS_UseHVXV60, // V6_vL32b_pi = 2471
    CEFBS_UseHVXV60, // V6_vL32b_ppu = 2472
    CEFBS_UseHVXV62, // V6_vL32b_pred_ai = 2473
    CEFBS_UseHVXV62, // V6_vL32b_pred_pi = 2474
    CEFBS_UseHVXV62, // V6_vL32b_pred_ppu = 2475
    CEFBS_UseHVXV60, // V6_vL32b_tmp_ai = 2476
    CEFBS_UseHVXV62, // V6_vL32b_tmp_npred_ai = 2477
    CEFBS_UseHVXV62, // V6_vL32b_tmp_npred_pi = 2478
    CEFBS_UseHVXV62, // V6_vL32b_tmp_npred_ppu = 2479
    CEFBS_UseHVXV60, // V6_vL32b_tmp_pi = 2480
    CEFBS_UseHVXV60, // V6_vL32b_tmp_ppu = 2481
    CEFBS_UseHVXV62, // V6_vL32b_tmp_pred_ai = 2482
    CEFBS_UseHVXV62, // V6_vL32b_tmp_pred_pi = 2483
    CEFBS_UseHVXV62, // V6_vL32b_tmp_pred_ppu = 2484
    CEFBS_UseHVXV60, // V6_vS32Ub_ai = 2485
    CEFBS_UseHVXV60, // V6_vS32Ub_npred_ai = 2486
    CEFBS_UseHVXV60, // V6_vS32Ub_npred_pi = 2487
    CEFBS_UseHVXV60, // V6_vS32Ub_npred_ppu = 2488
    CEFBS_UseHVXV60, // V6_vS32Ub_pi = 2489
    CEFBS_UseHVXV60, // V6_vS32Ub_ppu = 2490
    CEFBS_UseHVXV60, // V6_vS32Ub_pred_ai = 2491
    CEFBS_UseHVXV60, // V6_vS32Ub_pred_pi = 2492
    CEFBS_UseHVXV60, // V6_vS32Ub_pred_ppu = 2493
    CEFBS_UseHVXV60, // V6_vS32b_ai = 2494
    CEFBS_UseHVXV60, // V6_vS32b_new_ai = 2495
    CEFBS_UseHVXV60, // V6_vS32b_new_npred_ai = 2496
    CEFBS_UseHVXV60, // V6_vS32b_new_npred_pi = 2497
    CEFBS_UseHVXV60, // V6_vS32b_new_npred_ppu = 2498
    CEFBS_UseHVXV60, // V6_vS32b_new_pi = 2499
    CEFBS_UseHVXV60, // V6_vS32b_new_ppu = 2500
    CEFBS_UseHVXV60, // V6_vS32b_new_pred_ai = 2501
    CEFBS_UseHVXV60, // V6_vS32b_new_pred_pi = 2502
    CEFBS_UseHVXV60, // V6_vS32b_new_pred_ppu = 2503
    CEFBS_UseHVXV60, // V6_vS32b_npred_ai = 2504
    CEFBS_UseHVXV60, // V6_vS32b_npred_pi = 2505
    CEFBS_UseHVXV60, // V6_vS32b_npred_ppu = 2506
    CEFBS_UseHVXV60, // V6_vS32b_nqpred_ai = 2507
    CEFBS_UseHVXV60, // V6_vS32b_nqpred_pi = 2508
    CEFBS_UseHVXV60, // V6_vS32b_nqpred_ppu = 2509
    CEFBS_UseHVXV60, // V6_vS32b_nt_ai = 2510
    CEFBS_UseHVXV60, // V6_vS32b_nt_new_ai = 2511
    CEFBS_UseHVXV60, // V6_vS32b_nt_new_npred_ai = 2512
    CEFBS_UseHVXV60, // V6_vS32b_nt_new_npred_pi = 2513
    CEFBS_UseHVXV60, // V6_vS32b_nt_new_npred_ppu = 2514
    CEFBS_UseHVXV60, // V6_vS32b_nt_new_pi = 2515
    CEFBS_UseHVXV60, // V6_vS32b_nt_new_ppu = 2516
    CEFBS_UseHVXV60, // V6_vS32b_nt_new_pred_ai = 2517
    CEFBS_UseHVXV60, // V6_vS32b_nt_new_pred_pi = 2518
    CEFBS_UseHVXV60, // V6_vS32b_nt_new_pred_ppu = 2519
    CEFBS_UseHVXV60, // V6_vS32b_nt_npred_ai = 2520
    CEFBS_UseHVXV60, // V6_vS32b_nt_npred_pi = 2521
    CEFBS_UseHVXV60, // V6_vS32b_nt_npred_ppu = 2522
    CEFBS_UseHVXV60, // V6_vS32b_nt_nqpred_ai = 2523
    CEFBS_UseHVXV60, // V6_vS32b_nt_nqpred_pi = 2524
    CEFBS_UseHVXV60, // V6_vS32b_nt_nqpred_ppu = 2525
    CEFBS_UseHVXV60, // V6_vS32b_nt_pi = 2526
    CEFBS_UseHVXV60, // V6_vS32b_nt_ppu = 2527
    CEFBS_UseHVXV60, // V6_vS32b_nt_pred_ai = 2528
    CEFBS_UseHVXV60, // V6_vS32b_nt_pred_pi = 2529
    CEFBS_UseHVXV60, // V6_vS32b_nt_pred_ppu = 2530
    CEFBS_UseHVXV60, // V6_vS32b_nt_qpred_ai = 2531
    CEFBS_UseHVXV60, // V6_vS32b_nt_qpred_pi = 2532
    CEFBS_UseHVXV60, // V6_vS32b_nt_qpred_ppu = 2533
    CEFBS_UseHVXV60, // V6_vS32b_pi = 2534
    CEFBS_UseHVXV60, // V6_vS32b_ppu = 2535
    CEFBS_UseHVXV60, // V6_vS32b_pred_ai = 2536
    CEFBS_UseHVXV60, // V6_vS32b_pred_pi = 2537
    CEFBS_UseHVXV60, // V6_vS32b_pred_ppu = 2538
    CEFBS_UseHVXV60, // V6_vS32b_qpred_ai = 2539
    CEFBS_UseHVXV60, // V6_vS32b_qpred_pi = 2540
    CEFBS_UseHVXV60, // V6_vS32b_qpred_ppu = 2541
    CEFBS_UseHVXV65, // V6_vS32b_srls_ai = 2542
    CEFBS_UseHVXV65, // V6_vS32b_srls_pi = 2543
    CEFBS_UseHVXV65, // V6_vS32b_srls_ppu = 2544
    CEFBS_UseHVXV65, // V6_vabsb = 2545
    CEFBS_UseHVXV65, // V6_vabsb_sat = 2546
    CEFBS_UseHVXV60, // V6_vabsdiffh = 2547
    CEFBS_UseHVXV60, // V6_vabsdiffub = 2548
    CEFBS_UseHVXV60, // V6_vabsdiffuh = 2549
    CEFBS_UseHVXV60, // V6_vabsdiffw = 2550
    CEFBS_UseHVXV60, // V6_vabsh = 2551
    CEFBS_UseHVXV60, // V6_vabsh_sat = 2552
    CEFBS_UseHVXV60, // V6_vabsw = 2553
    CEFBS_UseHVXV60, // V6_vabsw_sat = 2554
    CEFBS_UseHVXV60, // V6_vaddb = 2555
    CEFBS_UseHVXV60, // V6_vaddb_dv = 2556
    CEFBS_UseHVXV60, // V6_vaddbnq = 2557
    CEFBS_UseHVXV60, // V6_vaddbq = 2558
    CEFBS_UseHVXV62, // V6_vaddbsat = 2559
    CEFBS_UseHVXV62, // V6_vaddbsat_dv = 2560
    CEFBS_UseHVXV62, // V6_vaddcarry = 2561
    CEFBS_UseHVXV66, // V6_vaddcarryo = 2562
    CEFBS_UseHVXV66, // V6_vaddcarrysat = 2563
    CEFBS_UseHVXV62, // V6_vaddclbh = 2564
    CEFBS_UseHVXV62, // V6_vaddclbw = 2565
    CEFBS_UseHVXV60, // V6_vaddh = 2566
    CEFBS_UseHVXV60, // V6_vaddh_dv = 2567
    CEFBS_UseHVXV60, // V6_vaddhnq = 2568
    CEFBS_UseHVXV60, // V6_vaddhq = 2569
    CEFBS_UseHVXV60, // V6_vaddhsat = 2570
    CEFBS_UseHVXV60, // V6_vaddhsat_dv = 2571
    CEFBS_UseHVXV60, // V6_vaddhw = 2572
    CEFBS_UseHVXV62, // V6_vaddhw_acc = 2573
    CEFBS_UseHVXV60, // V6_vaddubh = 2574
    CEFBS_UseHVXV62, // V6_vaddubh_acc = 2575
    CEFBS_UseHVXV60, // V6_vaddubsat = 2576
    CEFBS_UseHVXV60, // V6_vaddubsat_dv = 2577
    CEFBS_UseHVXV62, // V6_vaddububb_sat = 2578
    CEFBS_UseHVXV60, // V6_vadduhsat = 2579
    CEFBS_UseHVXV60, // V6_vadduhsat_dv = 2580
    CEFBS_UseHVXV60, // V6_vadduhw = 2581
    CEFBS_UseHVXV62, // V6_vadduhw_acc = 2582
    CEFBS_UseHVXV62, // V6_vadduwsat = 2583
    CEFBS_UseHVXV62, // V6_vadduwsat_dv = 2584
    CEFBS_UseHVXV60, // V6_vaddw = 2585
    CEFBS_UseHVXV60, // V6_vaddw_dv = 2586
    CEFBS_UseHVXV60, // V6_vaddwnq = 2587
    CEFBS_UseHVXV60, // V6_vaddwq = 2588
    CEFBS_UseHVXV60, // V6_vaddwsat = 2589
    CEFBS_UseHVXV60, // V6_vaddwsat_dv = 2590
    CEFBS_UseHVXV60, // V6_valignb = 2591
    CEFBS_UseHVXV60, // V6_valignbi = 2592
    CEFBS_UseHVXV60, // V6_vand = 2593
    CEFBS_UseHVXV62, // V6_vandnqrt = 2594
    CEFBS_UseHVXV62, // V6_vandnqrt_acc = 2595
    CEFBS_UseHVXV60, // V6_vandqrt = 2596
    CEFBS_UseHVXV60, // V6_vandqrt_acc = 2597
    CEFBS_UseHVXV62, // V6_vandvnqv = 2598
    CEFBS_UseHVXV62, // V6_vandvqv = 2599
    CEFBS_UseHVXV60, // V6_vandvrt = 2600
    CEFBS_UseHVXV60, // V6_vandvrt_acc = 2601
    CEFBS_UseHVXV60, // V6_vaslh = 2602
    CEFBS_UseHVXV65, // V6_vaslh_acc = 2603
    CEFBS_UseHVXV60, // V6_vaslhv = 2604
    CEFBS_UseHVXV60, // V6_vaslw = 2605
    CEFBS_UseHVXV60, // V6_vaslw_acc = 2606
    CEFBS_UseHVXV60, // V6_vaslwv = 2607
    CEFBS_UseHVXV66, // V6_vasr_into = 2608
    CEFBS_UseHVXV60, // V6_vasrh = 2609
    CEFBS_UseHVXV65, // V6_vasrh_acc = 2610
    CEFBS_UseHVXV60, // V6_vasrhbrndsat = 2611
    CEFBS_UseHVXV62, // V6_vasrhbsat = 2612
    CEFBS_UseHVXV60, // V6_vasrhubrndsat = 2613
    CEFBS_UseHVXV60, // V6_vasrhubsat = 2614
    CEFBS_UseHVXV60, // V6_vasrhv = 2615
    CEFBS_UseHVXV65, // V6_vasruhubrndsat = 2616
    CEFBS_UseHVXV65, // V6_vasruhubsat = 2617
    CEFBS_UseHVXV62, // V6_vasruwuhrndsat = 2618
    CEFBS_UseHVXV65, // V6_vasruwuhsat = 2619
    CEFBS_UseHVXV60, // V6_vasrw = 2620
    CEFBS_UseHVXV60, // V6_vasrw_acc = 2621
    CEFBS_UseHVXV60, // V6_vasrwh = 2622
    CEFBS_UseHVXV60, // V6_vasrwhrndsat = 2623
    CEFBS_UseHVXV60, // V6_vasrwhsat = 2624
    CEFBS_UseHVXV62, // V6_vasrwuhrndsat = 2625
    CEFBS_UseHVXV60, // V6_vasrwuhsat = 2626
    CEFBS_UseHVXV60, // V6_vasrwv = 2627
    CEFBS_UseHVXV60, // V6_vassign = 2628
    CEFBS_UseHVXV65, // V6_vavgb = 2629
    CEFBS_UseHVXV65, // V6_vavgbrnd = 2630
    CEFBS_UseHVXV60, // V6_vavgh = 2631
    CEFBS_UseHVXV60, // V6_vavghrnd = 2632
    CEFBS_UseHVXV60, // V6_vavgub = 2633
    CEFBS_UseHVXV60, // V6_vavgubrnd = 2634
    CEFBS_UseHVXV60, // V6_vavguh = 2635
    CEFBS_UseHVXV60, // V6_vavguhrnd = 2636
    CEFBS_UseHVXV65, // V6_vavguw = 2637
    CEFBS_UseHVXV65, // V6_vavguwrnd = 2638
    CEFBS_UseHVXV60, // V6_vavgw = 2639
    CEFBS_UseHVXV60, // V6_vavgwrnd = 2640
    CEFBS_UseHVXV60, // V6_vccombine = 2641
    CEFBS_UseHVXV60, // V6_vcl0h = 2642
    CEFBS_UseHVXV60, // V6_vcl0w = 2643
    CEFBS_UseHVXV60, // V6_vcmov = 2644
    CEFBS_UseHVXV60, // V6_vcombine = 2645
    CEFBS_UseHVXV60, // V6_vdeal = 2646
    CEFBS_UseHVXV60, // V6_vdealb = 2647
    CEFBS_UseHVXV60, // V6_vdealb4w = 2648
    CEFBS_UseHVXV60, // V6_vdealh = 2649
    CEFBS_UseHVXV60, // V6_vdealvdd = 2650
    CEFBS_UseHVXV60, // V6_vdelta = 2651
    CEFBS_UseHVXV60, // V6_vdmpybus = 2652
    CEFBS_UseHVXV60, // V6_vdmpybus_acc = 2653
    CEFBS_UseHVXV60, // V6_vdmpybus_dv = 2654
    CEFBS_UseHVXV60, // V6_vdmpybus_dv_acc = 2655
    CEFBS_UseHVXV60, // V6_vdmpyhb = 2656
    CEFBS_UseHVXV60, // V6_vdmpyhb_acc = 2657
    CEFBS_UseHVXV60, // V6_vdmpyhb_dv = 2658
    CEFBS_UseHVXV60, // V6_vdmpyhb_dv_acc = 2659
    CEFBS_UseHVXV60, // V6_vdmpyhisat = 2660
    CEFBS_UseHVXV60, // V6_vdmpyhisat_acc = 2661
    CEFBS_UseHVXV60, // V6_vdmpyhsat = 2662
    CEFBS_UseHVXV60, // V6_vdmpyhsat_acc = 2663
    CEFBS_UseHVXV60, // V6_vdmpyhsuisat = 2664
    CEFBS_UseHVXV60, // V6_vdmpyhsuisat_acc = 2665
    CEFBS_UseHVXV60, // V6_vdmpyhsusat = 2666
    CEFBS_UseHVXV60, // V6_vdmpyhsusat_acc = 2667
    CEFBS_UseHVXV60, // V6_vdmpyhvsat = 2668
    CEFBS_UseHVXV60, // V6_vdmpyhvsat_acc = 2669
    CEFBS_UseHVXV60, // V6_vdsaduh = 2670
    CEFBS_UseHVXV60, // V6_vdsaduh_acc = 2671
    CEFBS_UseHVXV60, // V6_veqb = 2672
    CEFBS_UseHVXV60, // V6_veqb_and = 2673
    CEFBS_UseHVXV60, // V6_veqb_or = 2674
    CEFBS_UseHVXV60, // V6_veqb_xor = 2675
    CEFBS_UseHVXV60, // V6_veqh = 2676
    CEFBS_UseHVXV60, // V6_veqh_and = 2677
    CEFBS_UseHVXV60, // V6_veqh_or = 2678
    CEFBS_UseHVXV60, // V6_veqh_xor = 2679
    CEFBS_UseHVXV60, // V6_veqw = 2680
    CEFBS_UseHVXV60, // V6_veqw_and = 2681
    CEFBS_UseHVXV60, // V6_veqw_or = 2682
    CEFBS_UseHVXV60, // V6_veqw_xor = 2683
    CEFBS_UseHVXV65, // V6_vgathermh = 2684
    CEFBS_UseHVXV65, // V6_vgathermhq = 2685
    CEFBS_UseHVXV65, // V6_vgathermhw = 2686
    CEFBS_UseHVXV65, // V6_vgathermhwq = 2687
    CEFBS_UseHVXV65, // V6_vgathermw = 2688
    CEFBS_UseHVXV65, // V6_vgathermwq = 2689
    CEFBS_UseHVXV60, // V6_vgtb = 2690
    CEFBS_UseHVXV60, // V6_vgtb_and = 2691
    CEFBS_UseHVXV60, // V6_vgtb_or = 2692
    CEFBS_UseHVXV60, // V6_vgtb_xor = 2693
    CEFBS_UseHVXV60, // V6_vgth = 2694
    CEFBS_UseHVXV60, // V6_vgth_and = 2695
    CEFBS_UseHVXV60, // V6_vgth_or = 2696
    CEFBS_UseHVXV60, // V6_vgth_xor = 2697
    CEFBS_UseHVXV60, // V6_vgtub = 2698
    CEFBS_UseHVXV60, // V6_vgtub_and = 2699
    CEFBS_UseHVXV60, // V6_vgtub_or = 2700
    CEFBS_UseHVXV60, // V6_vgtub_xor = 2701
    CEFBS_UseHVXV60, // V6_vgtuh = 2702
    CEFBS_UseHVXV60, // V6_vgtuh_and = 2703
    CEFBS_UseHVXV60, // V6_vgtuh_or = 2704
    CEFBS_UseHVXV60, // V6_vgtuh_xor = 2705
    CEFBS_UseHVXV60, // V6_vgtuw = 2706
    CEFBS_UseHVXV60, // V6_vgtuw_and = 2707
    CEFBS_UseHVXV60, // V6_vgtuw_or = 2708
    CEFBS_UseHVXV60, // V6_vgtuw_xor = 2709
    CEFBS_UseHVXV60, // V6_vgtw = 2710
    CEFBS_UseHVXV60, // V6_vgtw_and = 2711
    CEFBS_UseHVXV60, // V6_vgtw_or = 2712
    CEFBS_UseHVXV60, // V6_vgtw_xor = 2713
    CEFBS_UseHVXV60, // V6_vhist = 2714
    CEFBS_UseHVXV60, // V6_vhistq = 2715
    CEFBS_UseHVXV60, // V6_vinsertwr = 2716
    CEFBS_UseHVXV60, // V6_vlalignb = 2717
    CEFBS_UseHVXV60, // V6_vlalignbi = 2718
    CEFBS_UseHVXV62, // V6_vlsrb = 2719
    CEFBS_UseHVXV60, // V6_vlsrh = 2720
    CEFBS_UseHVXV60, // V6_vlsrhv = 2721
    CEFBS_UseHVXV60, // V6_vlsrw = 2722
    CEFBS_UseHVXV60, // V6_vlsrwv = 2723
    CEFBS_UseHVXV65, // V6_vlut4 = 2724
    CEFBS_UseHVXV60, // V6_vlutvvb = 2725
    CEFBS_UseHVXV62, // V6_vlutvvb_nm = 2726
    CEFBS_UseHVXV60, // V6_vlutvvb_oracc = 2727
    CEFBS_UseHVXV62, // V6_vlutvvb_oracci = 2728
    CEFBS_UseHVXV62, // V6_vlutvvbi = 2729
    CEFBS_UseHVXV60, // V6_vlutvwh = 2730
    CEFBS_UseHVXV62, // V6_vlutvwh_nm = 2731
    CEFBS_UseHVXV60, // V6_vlutvwh_oracc = 2732
    CEFBS_UseHVXV62, // V6_vlutvwh_oracci = 2733
    CEFBS_UseHVXV62, // V6_vlutvwhi = 2734
    CEFBS_UseHVXV62, // V6_vmaxb = 2735
    CEFBS_UseHVXV60, // V6_vmaxh = 2736
    CEFBS_UseHVXV60, // V6_vmaxub = 2737
    CEFBS_UseHVXV60, // V6_vmaxuh = 2738
    CEFBS_UseHVXV60, // V6_vmaxw = 2739
    CEFBS_UseHVXV62, // V6_vminb = 2740
    CEFBS_UseHVXV60, // V6_vminh = 2741
    CEFBS_UseHVXV60, // V6_vminub = 2742
    CEFBS_UseHVXV60, // V6_vminuh = 2743
    CEFBS_UseHVXV60, // V6_vminw = 2744
    CEFBS_UseHVXV60, // V6_vmpabus = 2745
    CEFBS_UseHVXV60, // V6_vmpabus_acc = 2746
    CEFBS_UseHVXV60, // V6_vmpabusv = 2747
    CEFBS_UseHVXV65, // V6_vmpabuu = 2748
    CEFBS_UseHVXV65, // V6_vmpabuu_acc = 2749
    CEFBS_UseHVXV60, // V6_vmpabuuv = 2750
    CEFBS_UseHVXV60, // V6_vmpahb = 2751
    CEFBS_UseHVXV60, // V6_vmpahb_acc = 2752
    CEFBS_UseHVXV65, // V6_vmpahhsat = 2753
    CEFBS_UseHVXV62, // V6_vmpauhb = 2754
    CEFBS_UseHVXV62, // V6_vmpauhb_acc = 2755
    CEFBS_UseHVXV65, // V6_vmpauhuhsat = 2756
    CEFBS_UseHVXV65, // V6_vmpsuhuhsat = 2757
    CEFBS_UseHVXV60, // V6_vmpybus = 2758
    CEFBS_UseHVXV60, // V6_vmpybus_acc = 2759
    CEFBS_UseHVXV60, // V6_vmpybusv = 2760
    CEFBS_UseHVXV60, // V6_vmpybusv_acc = 2761
    CEFBS_UseHVXV60, // V6_vmpybv = 2762
    CEFBS_UseHVXV60, // V6_vmpybv_acc = 2763
    CEFBS_UseHVXV60, // V6_vmpyewuh = 2764
    CEFBS_UseHVXV62, // V6_vmpyewuh_64 = 2765
    CEFBS_UseHVXV60, // V6_vmpyh = 2766
    CEFBS_UseHVXV65, // V6_vmpyh_acc = 2767
    CEFBS_UseHVXV60, // V6_vmpyhsat_acc = 2768
    CEFBS_UseHVXV60, // V6_vmpyhsrs = 2769
    CEFBS_UseHVXV60, // V6_vmpyhss = 2770
    CEFBS_UseHVXV60, // V6_vmpyhus = 2771
    CEFBS_UseHVXV60, // V6_vmpyhus_acc = 2772
    CEFBS_UseHVXV60, // V6_vmpyhv = 2773
    CEFBS_UseHVXV60, // V6_vmpyhv_acc = 2774
    CEFBS_UseHVXV60, // V6_vmpyhvsrs = 2775
    CEFBS_UseHVXV60, // V6_vmpyieoh = 2776
    CEFBS_UseHVXV60, // V6_vmpyiewh_acc = 2777
    CEFBS_UseHVXV60, // V6_vmpyiewuh = 2778
    CEFBS_UseHVXV60, // V6_vmpyiewuh_acc = 2779
    CEFBS_UseHVXV60, // V6_vmpyih = 2780
    CEFBS_UseHVXV60, // V6_vmpyih_acc = 2781
    CEFBS_UseHVXV60, // V6_vmpyihb = 2782
    CEFBS_UseHVXV60, // V6_vmpyihb_acc = 2783
    CEFBS_UseHVXV60, // V6_vmpyiowh = 2784
    CEFBS_UseHVXV60, // V6_vmpyiwb = 2785
    CEFBS_UseHVXV60, // V6_vmpyiwb_acc = 2786
    CEFBS_UseHVXV60, // V6_vmpyiwh = 2787
    CEFBS_UseHVXV60, // V6_vmpyiwh_acc = 2788
    CEFBS_UseHVXV62, // V6_vmpyiwub = 2789
    CEFBS_UseHVXV62, // V6_vmpyiwub_acc = 2790
    CEFBS_UseHVXV60, // V6_vmpyowh = 2791
    CEFBS_UseHVXV62, // V6_vmpyowh_64_acc = 2792
    CEFBS_UseHVXV60, // V6_vmpyowh_rnd = 2793
    CEFBS_UseHVXV60, // V6_vmpyowh_rnd_sacc = 2794
    CEFBS_UseHVXV60, // V6_vmpyowh_sacc = 2795
    CEFBS_UseHVXV60, // V6_vmpyub = 2796
    CEFBS_UseHVXV60, // V6_vmpyub_acc = 2797
    CEFBS_UseHVXV60, // V6_vmpyubv = 2798
    CEFBS_UseHVXV60, // V6_vmpyubv_acc = 2799
    CEFBS_UseHVXV60, // V6_vmpyuh = 2800
    CEFBS_UseHVXV60, // V6_vmpyuh_acc = 2801
    CEFBS_UseHVXV65, // V6_vmpyuhe = 2802
    CEFBS_UseHVXV65, // V6_vmpyuhe_acc = 2803
    CEFBS_UseHVXV60, // V6_vmpyuhv = 2804
    CEFBS_UseHVXV60, // V6_vmpyuhv_acc = 2805
    CEFBS_UseHVXV60, // V6_vmux = 2806
    CEFBS_UseHVXV65, // V6_vnavgb = 2807
    CEFBS_UseHVXV60, // V6_vnavgh = 2808
    CEFBS_UseHVXV60, // V6_vnavgub = 2809
    CEFBS_UseHVXV60, // V6_vnavgw = 2810
    CEFBS_UseHVXV60, // V6_vnccombine = 2811
    CEFBS_UseHVXV60, // V6_vncmov = 2812
    CEFBS_UseHVXV60, // V6_vnormamth = 2813
    CEFBS_UseHVXV60, // V6_vnormamtw = 2814
    CEFBS_UseHVXV60, // V6_vnot = 2815
    CEFBS_UseHVXV60, // V6_vor = 2816
    CEFBS_UseHVXV60, // V6_vpackeb = 2817
    CEFBS_UseHVXV60, // V6_vpackeh = 2818
    CEFBS_UseHVXV60, // V6_vpackhb_sat = 2819
    CEFBS_UseHVXV60, // V6_vpackhub_sat = 2820
    CEFBS_UseHVXV60, // V6_vpackob = 2821
    CEFBS_UseHVXV60, // V6_vpackoh = 2822
    CEFBS_UseHVXV60, // V6_vpackwh_sat = 2823
    CEFBS_UseHVXV60, // V6_vpackwuh_sat = 2824
    CEFBS_UseHVXV60, // V6_vpopcounth = 2825
    CEFBS_UseHVXV65, // V6_vprefixqb = 2826
    CEFBS_UseHVXV65, // V6_vprefixqh = 2827
    CEFBS_UseHVXV65, // V6_vprefixqw = 2828
    CEFBS_UseHVXV60, // V6_vrdelta = 2829
    CEFBS_UseHVXV65, // V6_vrmpybub_rtt = 2830
    CEFBS_UseHVXV65, // V6_vrmpybub_rtt_acc = 2831
    CEFBS_UseHVXV60, // V6_vrmpybus = 2832
    CEFBS_UseHVXV60, // V6_vrmpybus_acc = 2833
    CEFBS_UseHVXV60, // V6_vrmpybusi = 2834
    CEFBS_UseHVXV60, // V6_vrmpybusi_acc = 2835
    CEFBS_UseHVXV60, // V6_vrmpybusv = 2836
    CEFBS_UseHVXV60, // V6_vrmpybusv_acc = 2837
    CEFBS_UseHVXV60, // V6_vrmpybv = 2838
    CEFBS_UseHVXV60, // V6_vrmpybv_acc = 2839
    CEFBS_UseHVXV60, // V6_vrmpyub = 2840
    CEFBS_UseHVXV60, // V6_vrmpyub_acc = 2841
    CEFBS_UseHVXV65, // V6_vrmpyub_rtt = 2842
    CEFBS_UseHVXV65, // V6_vrmpyub_rtt_acc = 2843
    CEFBS_UseHVXV60, // V6_vrmpyubi = 2844
    CEFBS_UseHVXV60, // V6_vrmpyubi_acc = 2845
    CEFBS_UseHVXV60, // V6_vrmpyubv = 2846
    CEFBS_UseHVXV60, // V6_vrmpyubv_acc = 2847
    CEFBS_UseHVXV66_UseZReg, // V6_vrmpyzbb_rt = 2848
    CEFBS_UseHVXV66_UseZReg, // V6_vrmpyzbb_rt_acc = 2849
    CEFBS_UseHVXV66_UseZReg, // V6_vrmpyzbb_rx = 2850
    CEFBS_UseHVXV66_UseZReg, // V6_vrmpyzbb_rx_acc = 2851
    CEFBS_UseHVXV66_UseZReg, // V6_vrmpyzbub_rt = 2852
    CEFBS_UseHVXV66_UseZReg, // V6_vrmpyzbub_rt_acc = 2853
    CEFBS_UseHVXV66_UseZReg, // V6_vrmpyzbub_rx = 2854
    CEFBS_UseHVXV66_UseZReg, // V6_vrmpyzbub_rx_acc = 2855
    CEFBS_UseHVXV66_UseZReg, // V6_vrmpyzcb_rt = 2856
    CEFBS_UseHVXV66_UseZReg, // V6_vrmpyzcb_rt_acc = 2857
    CEFBS_UseHVXV66_UseZReg, // V6_vrmpyzcb_rx = 2858
    CEFBS_UseHVXV66_UseZReg, // V6_vrmpyzcb_rx_acc = 2859
    CEFBS_UseHVXV66_UseZReg, // V6_vrmpyzcbs_rt = 2860
    CEFBS_UseHVXV66_UseZReg, // V6_vrmpyzcbs_rt_acc = 2861
    CEFBS_UseHVXV66_UseZReg, // V6_vrmpyzcbs_rx = 2862
    CEFBS_UseHVXV66_UseZReg, // V6_vrmpyzcbs_rx_acc = 2863
    CEFBS_UseHVXV66_UseZReg, // V6_vrmpyznb_rt = 2864
    CEFBS_UseHVXV66_UseZReg, // V6_vrmpyznb_rt_acc = 2865
    CEFBS_UseHVXV66_UseZReg, // V6_vrmpyznb_rx = 2866
    CEFBS_UseHVXV66_UseZReg, // V6_vrmpyznb_rx_acc = 2867
    CEFBS_UseHVXV60, // V6_vror = 2868
    CEFBS_UseHVXV66, // V6_vrotr = 2869
    CEFBS_UseHVXV60, // V6_vroundhb = 2870
    CEFBS_UseHVXV60, // V6_vroundhub = 2871
    CEFBS_UseHVXV62, // V6_vrounduhub = 2872
    CEFBS_UseHVXV62, // V6_vrounduwuh = 2873
    CEFBS_UseHVXV60, // V6_vroundwh = 2874
    CEFBS_UseHVXV60, // V6_vroundwuh = 2875
    CEFBS_UseHVXV60, // V6_vrsadubi = 2876
    CEFBS_UseHVXV60, // V6_vrsadubi_acc = 2877
    CEFBS_UseHVXV66, // V6_vsatdw = 2878
    CEFBS_UseHVXV60, // V6_vsathub = 2879
    CEFBS_UseHVXV62, // V6_vsatuwuh = 2880
    CEFBS_UseHVXV60, // V6_vsatwh = 2881
    CEFBS_UseHVXV60, // V6_vsb = 2882
    CEFBS_UseHVXV65, // V6_vscattermh = 2883
    CEFBS_UseHVXV65, // V6_vscattermh_add = 2884
    CEFBS_UseHVXV65, // V6_vscattermhq = 2885
    CEFBS_UseHVXV65, // V6_vscattermhw = 2886
    CEFBS_UseHVXV65, // V6_vscattermhw_add = 2887
    CEFBS_UseHVXV65, // V6_vscattermhwq = 2888
    CEFBS_UseHVXV65, // V6_vscattermw = 2889
    CEFBS_UseHVXV65, // V6_vscattermw_add = 2890
    CEFBS_UseHVXV65, // V6_vscattermwq = 2891
    CEFBS_UseHVXV60, // V6_vsh = 2892
    CEFBS_UseHVXV60, // V6_vshufeh = 2893
    CEFBS_UseHVXV60, // V6_vshuff = 2894
    CEFBS_UseHVXV60, // V6_vshuffb = 2895
    CEFBS_UseHVXV60, // V6_vshuffeb = 2896
    CEFBS_UseHVXV60, // V6_vshuffh = 2897
    CEFBS_UseHVXV60, // V6_vshuffob = 2898
    CEFBS_UseHVXV60, // V6_vshuffvdd = 2899
    CEFBS_UseHVXV60, // V6_vshufoeb = 2900
    CEFBS_UseHVXV60, // V6_vshufoeh = 2901
    CEFBS_UseHVXV60, // V6_vshufoh = 2902
    CEFBS_UseHVXV60, // V6_vsubb = 2903
    CEFBS_UseHVXV60, // V6_vsubb_dv = 2904
    CEFBS_UseHVXV60, // V6_vsubbnq = 2905
    CEFBS_UseHVXV60, // V6_vsubbq = 2906
    CEFBS_UseHVXV62, // V6_vsubbsat = 2907
    CEFBS_UseHVXV62, // V6_vsubbsat_dv = 2908
    CEFBS_UseHVXV62, // V6_vsubcarry = 2909
    CEFBS_UseHVXV66, // V6_vsubcarryo = 2910
    CEFBS_UseHVXV60, // V6_vsubh = 2911
    CEFBS_UseHVXV60, // V6_vsubh_dv = 2912
    CEFBS_UseHVXV60, // V6_vsubhnq = 2913
    CEFBS_UseHVXV60, // V6_vsubhq = 2914
    CEFBS_UseHVXV60, // V6_vsubhsat = 2915
    CEFBS_UseHVXV60, // V6_vsubhsat_dv = 2916
    CEFBS_UseHVXV60, // V6_vsubhw = 2917
    CEFBS_UseHVXV60, // V6_vsububh = 2918
    CEFBS_UseHVXV60, // V6_vsububsat = 2919
    CEFBS_UseHVXV60, // V6_vsububsat_dv = 2920
    CEFBS_UseHVXV62, // V6_vsubububb_sat = 2921
    CEFBS_UseHVXV60, // V6_vsubuhsat = 2922
    CEFBS_UseHVXV60, // V6_vsubuhsat_dv = 2923
    CEFBS_UseHVXV60, // V6_vsubuhw = 2924
    CEFBS_UseHVXV62, // V6_vsubuwsat = 2925
    CEFBS_UseHVXV62, // V6_vsubuwsat_dv = 2926
    CEFBS_UseHVXV60, // V6_vsubw = 2927
    CEFBS_UseHVXV60, // V6_vsubw_dv = 2928
    CEFBS_UseHVXV60, // V6_vsubwnq = 2929
    CEFBS_UseHVXV60, // V6_vsubwq = 2930
    CEFBS_UseHVXV60, // V6_vsubwsat = 2931
    CEFBS_UseHVXV60, // V6_vsubwsat_dv = 2932
    CEFBS_UseHVXV60, // V6_vswap = 2933
    CEFBS_UseHVXV60, // V6_vtmpyb = 2934
    CEFBS_UseHVXV60, // V6_vtmpyb_acc = 2935
    CEFBS_UseHVXV60, // V6_vtmpybus = 2936
    CEFBS_UseHVXV60, // V6_vtmpybus_acc = 2937
    CEFBS_UseHVXV60, // V6_vtmpyhb = 2938
    CEFBS_UseHVXV60, // V6_vtmpyhb_acc = 2939
    CEFBS_UseHVXV60, // V6_vunpackb = 2940
    CEFBS_UseHVXV60, // V6_vunpackh = 2941
    CEFBS_UseHVXV60, // V6_vunpackob = 2942
    CEFBS_UseHVXV60, // V6_vunpackoh = 2943
    CEFBS_UseHVXV60, // V6_vunpackub = 2944
    CEFBS_UseHVXV60, // V6_vunpackuh = 2945
    CEFBS_UseHVXV62, // V6_vwhist128 = 2946
    CEFBS_UseHVXV62, // V6_vwhist128m = 2947
    CEFBS_UseHVXV62, // V6_vwhist128q = 2948
    CEFBS_UseHVXV62, // V6_vwhist128qm = 2949
    CEFBS_UseHVXV62, // V6_vwhist256 = 2950
    CEFBS_UseHVXV62, // V6_vwhist256_sat = 2951
    CEFBS_UseHVXV62, // V6_vwhist256q = 2952
    CEFBS_UseHVXV62, // V6_vwhist256q_sat = 2953
    CEFBS_UseHVXV60, // V6_vxor = 2954
    CEFBS_UseHVXV60, // V6_vzb = 2955
    CEFBS_UseHVXV60, // V6_vzh = 2956
    CEFBS_UseHVXV66_UseZReg, // V6_zLd_ai = 2957
    CEFBS_UseHVXV66_UseZReg, // V6_zLd_pi = 2958
    CEFBS_UseHVXV66_UseZReg, // V6_zLd_ppu = 2959
    CEFBS_UseHVXV66_UseZReg, // V6_zLd_pred_ai = 2960
    CEFBS_UseHVXV66_UseZReg, // V6_zLd_pred_pi = 2961
    CEFBS_UseHVXV66_UseZReg, // V6_zLd_pred_ppu = 2962
    CEFBS_UseHVXV66_UseZReg, // V6_zextract = 2963
    CEFBS_None, // Y2_barrier = 2964
    CEFBS_None, // Y2_break = 2965
    CEFBS_None, // Y2_dccleana = 2966
    CEFBS_None, // Y2_dccleaninva = 2967
    CEFBS_None, // Y2_dcfetchbo = 2968
    CEFBS_None, // Y2_dcinva = 2969
    CEFBS_None, // Y2_dczeroa = 2970
    CEFBS_None, // Y2_icinva = 2971
    CEFBS_None, // Y2_isync = 2972
    CEFBS_None, // Y2_syncht = 2973
    CEFBS_HasV65, // Y2_wait = 2974
    CEFBS_None, // Y4_l2fetch = 2975
    CEFBS_None, // Y4_trace = 2976
    CEFBS_None, // Y5_l2fetch = 2977
    CEFBS_None, // dep_A2_addsat = 2978
    CEFBS_None, // dep_A2_subsat = 2979
    CEFBS_None, // dep_S2_packhl = 2980
  };

  assert(Inst.getOpcode() < 2981);
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

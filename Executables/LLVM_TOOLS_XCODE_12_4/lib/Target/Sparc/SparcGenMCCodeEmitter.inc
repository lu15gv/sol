/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Machine Code Emitter                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t SparcMCCodeEmitter::getBinaryCodeForInstr(const MCInst &MI,
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
    UINT64_C(2155880448),	// ADDCCri
    UINT64_C(2155872256),	// ADDCCrr
    UINT64_C(2151686144),	// ADDCri
    UINT64_C(2151677952),	// ADDCrr
    UINT64_C(2160074752),	// ADDEri
    UINT64_C(2160066560),	// ADDErr
    UINT64_C(2175795744),	// ADDXC
    UINT64_C(2175795808),	// ADDXCCC
    UINT64_C(2147491840),	// ADDXri
    UINT64_C(2147483648),	// ADDXrr
    UINT64_C(2147491840),	// ADDri
    UINT64_C(2147483648),	// ADDrr
    UINT64_C(2175795968),	// ALIGNADDR
    UINT64_C(2175796032),	// ALIGNADDRL
    UINT64_C(2156404736),	// ANDCCri
    UINT64_C(2156396544),	// ANDCCrr
    UINT64_C(2158501888),	// ANDNCCri
    UINT64_C(2158493696),	// ANDNCCrr
    UINT64_C(2150113280),	// ANDNri
    UINT64_C(2150105088),	// ANDNrr
    UINT64_C(2150105088),	// ANDXNrr
    UINT64_C(2148016128),	// ANDXri
    UINT64_C(2148007936),	// ANDXrr
    UINT64_C(2148016128),	// ANDri
    UINT64_C(2148007936),	// ANDrr
    UINT64_C(2175795776),	// ARRAY16
    UINT64_C(2175795840),	// ARRAY32
    UINT64_C(2175795712),	// ARRAY8
    UINT64_C(276824064),	// BA
    UINT64_C(8388608),	// BCOND
    UINT64_C(545259520),	// BCONDA
    UINT64_C(2176851968),	// BINDri
    UINT64_C(2176843776),	// BINDrr
    UINT64_C(2175796000),	// BMASK
    UINT64_C(21495808),	// BPFCC
    UINT64_C(558366720),	// BPFCCA
    UINT64_C(557842432),	// BPFCCANT
    UINT64_C(20971520),	// BPFCCNT
    UINT64_C(784334848),	// BPGEZapn
    UINT64_C(784859136),	// BPGEZapt
    UINT64_C(247463936),	// BPGEZnapn
    UINT64_C(247988224),	// BPGEZnapt
    UINT64_C(750780416),	// BPGZapn
    UINT64_C(751304704),	// BPGZapt
    UINT64_C(213909504),	// BPGZnapn
    UINT64_C(214433792),	// BPGZnapt
    UINT64_C(4718592),	// BPICC
    UINT64_C(541589504),	// BPICCA
    UINT64_C(541065216),	// BPICCANT
    UINT64_C(4194304),	// BPICCNT
    UINT64_C(616562688),	// BPLEZapn
    UINT64_C(617086976),	// BPLEZapt
    UINT64_C(79691776),	// BPLEZnapn
    UINT64_C(80216064),	// BPLEZnapt
    UINT64_C(650117120),	// BPLZapn
    UINT64_C(650641408),	// BPLZapt
    UINT64_C(113246208),	// BPLZnapn
    UINT64_C(113770496),	// BPLZnapt
    UINT64_C(717225984),	// BPNZapn
    UINT64_C(717750272),	// BPNZapt
    UINT64_C(180355072),	// BPNZnapn
    UINT64_C(180879360),	// BPNZnapt
    UINT64_C(6815744),	// BPXCC
    UINT64_C(543686656),	// BPXCCA
    UINT64_C(543162368),	// BPXCCANT
    UINT64_C(6291456),	// BPXCCNT
    UINT64_C(583008256),	// BPZapn
    UINT64_C(583532544),	// BPZapt
    UINT64_C(46137344),	// BPZnapn
    UINT64_C(46661632),	// BPZnapt
    UINT64_C(2175796096),	// BSHUFFLE
    UINT64_C(1073741824),	// CALL
    UINT64_C(2680168448),	// CALLri
    UINT64_C(2680160256),	// CALLrr
    UINT64_C(3252683072),	// CASAasi10
    UINT64_C(3252682752),	// CASArr
    UINT64_C(3253735424),	// CASXrr
    UINT64_C(3252686848),	// CASrr
    UINT64_C(29360128),	// CBCOND
    UINT64_C(566231040),	// CBCONDA
    UINT64_C(2175796128),	// CMASK16
    UINT64_C(2175796192),	// CMASK32
    UINT64_C(2175796064),	// CMASK8
    UINT64_C(2157977600),	// CMPri
    UINT64_C(2157969408),	// CMPrr
    UINT64_C(2175795328),	// EDGE16
    UINT64_C(2175795392),	// EDGE16L
    UINT64_C(2175795424),	// EDGE16LN
    UINT64_C(2175795360),	// EDGE16N
    UINT64_C(2175795456),	// EDGE32
    UINT64_C(2175795520),	// EDGE32L
    UINT64_C(2175795552),	// EDGE32LN
    UINT64_C(2175795488),	// EDGE32N
    UINT64_C(2175795200),	// EDGE8
    UINT64_C(2175795264),	// EDGE8L
    UINT64_C(2175795296),	// EDGE8LN
    UINT64_C(2175795232),	// EDGE8N
    UINT64_C(2174746944),	// FABSD
    UINT64_C(2174746976),	// FABSQ
    UINT64_C(2174746912),	// FABSS
    UINT64_C(2174748736),	// FADDD
    UINT64_C(2174748768),	// FADDQ
    UINT64_C(2174748704),	// FADDS
    UINT64_C(2175797504),	// FALIGNADATA
    UINT64_C(2175798784),	// FAND
    UINT64_C(2175798528),	// FANDNOT1
    UINT64_C(2175798560),	// FANDNOT1S
    UINT64_C(2175798400),	// FANDNOT2
    UINT64_C(2175798432),	// FANDNOT2S
    UINT64_C(2175798816),	// FANDS
    UINT64_C(25165824),	// FBCOND
    UINT64_C(562036736),	// FBCONDA
    UINT64_C(2175797376),	// FCHKSM16
    UINT64_C(2175273536),	// FCMPD
    UINT64_C(2175796544),	// FCMPEQ16
    UINT64_C(2175796672),	// FCMPEQ32
    UINT64_C(2175796480),	// FCMPGT16
    UINT64_C(2175796608),	// FCMPGT32
    UINT64_C(2175796224),	// FCMPLE16
    UINT64_C(2175796352),	// FCMPLE32
    UINT64_C(2175796288),	// FCMPNE16
    UINT64_C(2175796416),	// FCMPNE32
    UINT64_C(2175273568),	// FCMPQ
    UINT64_C(2175273504),	// FCMPS
    UINT64_C(2174749120),	// FDIVD
    UINT64_C(2174749152),	// FDIVQ
    UINT64_C(2174749088),	// FDIVS
    UINT64_C(2174750144),	// FDMULQ
    UINT64_C(2174753344),	// FDTOI
    UINT64_C(2174753216),	// FDTOQ
    UINT64_C(2174752960),	// FDTOS
    UINT64_C(2174750784),	// FDTOX
    UINT64_C(2175797664),	// FEXPAND
    UINT64_C(2174749760),	// FHADDD
    UINT64_C(2174749728),	// FHADDS
    UINT64_C(2174749888),	// FHSUBD
    UINT64_C(2174749856),	// FHSUBS
    UINT64_C(2174753024),	// FITOD
    UINT64_C(2174753152),	// FITOQ
    UINT64_C(2174752896),	// FITOS
    UINT64_C(2175806016),	// FLCMPD
    UINT64_C(2175805984),	// FLCMPS
    UINT64_C(2178416640),	// FLUSH
    UINT64_C(2170028032),	// FLUSHW
    UINT64_C(2178424832),	// FLUSHri
    UINT64_C(2178416640),	// FLUSHrr
    UINT64_C(2175797248),	// FMEAN16
    UINT64_C(2174746688),	// FMOVD
    UINT64_C(2175270976),	// FMOVD_FCC
    UINT64_C(2175279168),	// FMOVD_ICC
    UINT64_C(2175283264),	// FMOVD_XCC
    UINT64_C(2174746720),	// FMOVQ
    UINT64_C(2175271008),	// FMOVQ_FCC
    UINT64_C(2175279200),	// FMOVQ_ICC
    UINT64_C(2175283296),	// FMOVQ_XCC
    UINT64_C(2175278272),	// FMOVRGEZD
    UINT64_C(2175278304),	// FMOVRGEZQ
    UINT64_C(2175278240),	// FMOVRGEZS
    UINT64_C(2175277248),	// FMOVRGZD
    UINT64_C(2175277280),	// FMOVRGZQ
    UINT64_C(2175277216),	// FMOVRGZS
    UINT64_C(2175273152),	// FMOVRLEZD
    UINT64_C(2175273184),	// FMOVRLEZQ
    UINT64_C(2175273120),	// FMOVRLEZS
    UINT64_C(2175274176),	// FMOVRLZD
    UINT64_C(2175274208),	// FMOVRLZQ
    UINT64_C(2175274144),	// FMOVRLZS
    UINT64_C(2175276224),	// FMOVRNZD
    UINT64_C(2175276256),	// FMOVRNZQ
    UINT64_C(2175276192),	// FMOVRNZS
    UINT64_C(2175272128),	// FMOVRZD
    UINT64_C(2175272160),	// FMOVRZQ
    UINT64_C(2175272096),	// FMOVRZS
    UINT64_C(2174746656),	// FMOVS
    UINT64_C(2175270944),	// FMOVS_FCC
    UINT64_C(2175279136),	// FMOVS_ICC
    UINT64_C(2175283232),	// FMOVS_XCC
    UINT64_C(2175796928),	// FMUL8SUX16
    UINT64_C(2175796960),	// FMUL8ULX16
    UINT64_C(2175796768),	// FMUL8X16
    UINT64_C(2175796896),	// FMUL8X16AL
    UINT64_C(2175796832),	// FMUL8X16AU
    UINT64_C(2174748992),	// FMULD
    UINT64_C(2175796992),	// FMULD8SUX16
    UINT64_C(2175797024),	// FMULD8ULX16
    UINT64_C(2174749024),	// FMULQ
    UINT64_C(2174748960),	// FMULS
    UINT64_C(2174749248),	// FNADDD
    UINT64_C(2174749216),	// FNADDS
    UINT64_C(2175798720),	// FNAND
    UINT64_C(2175798752),	// FNANDS
    UINT64_C(2174746816),	// FNEGD
    UINT64_C(2174746848),	// FNEGQ
    UINT64_C(2174746784),	// FNEGS
    UINT64_C(2174750272),	// FNHADDD
    UINT64_C(2174750240),	// FNHADDS
    UINT64_C(2174749504),	// FNMULD
    UINT64_C(2174749472),	// FNMULS
    UINT64_C(2175798336),	// FNOR
    UINT64_C(2175798368),	// FNORS
    UINT64_C(2175798592),	// FNOT1
    UINT64_C(2175798624),	// FNOT1S
    UINT64_C(2175798464),	// FNOT2
    UINT64_C(2175798496),	// FNOT2S
    UINT64_C(2174750496),	// FNSMULD
    UINT64_C(2175799232),	// FONE
    UINT64_C(2175799264),	// FONES
    UINT64_C(2175799168),	// FOR
    UINT64_C(2175799104),	// FORNOT1
    UINT64_C(2175799136),	// FORNOT1S
    UINT64_C(2175798976),	// FORNOT2
    UINT64_C(2175799008),	// FORNOT2S
    UINT64_C(2175799200),	// FORS
    UINT64_C(2175797088),	// FPACK16
    UINT64_C(2175797056),	// FPACK32
    UINT64_C(2175797152),	// FPACKFIX
    UINT64_C(2175797760),	// FPADD16
    UINT64_C(2175797792),	// FPADD16S
    UINT64_C(2175797824),	// FPADD32
    UINT64_C(2175797856),	// FPADD32S
    UINT64_C(2175797312),	// FPADD64
    UINT64_C(2175797600),	// FPMERGE
    UINT64_C(2175797888),	// FPSUB16
    UINT64_C(2175797920),	// FPSUB16S
    UINT64_C(2175797952),	// FPSUB32
    UINT64_C(2175797984),	// FPSUB32S
    UINT64_C(2174753120),	// FQTOD
    UINT64_C(2174753376),	// FQTOI
    UINT64_C(2174752992),	// FQTOS
    UINT64_C(2174750816),	// FQTOX
    UINT64_C(2175796512),	// FSLAS16
    UINT64_C(2175796640),	// FSLAS32
    UINT64_C(2175796256),	// FSLL16
    UINT64_C(2175796384),	// FSLL32
    UINT64_C(2174749984),	// FSMULD
    UINT64_C(2174747968),	// FSQRTD
    UINT64_C(2174748000),	// FSQRTQ
    UINT64_C(2174747936),	// FSQRTS
    UINT64_C(2175796576),	// FSRA16
    UINT64_C(2175796704),	// FSRA32
    UINT64_C(2175798912),	// FSRC1
    UINT64_C(2175798944),	// FSRC1S
    UINT64_C(2175799040),	// FSRC2
    UINT64_C(2175799072),	// FSRC2S
    UINT64_C(2175796320),	// FSRL16
    UINT64_C(2175796448),	// FSRL32
    UINT64_C(2174753056),	// FSTOD
    UINT64_C(2174753312),	// FSTOI
    UINT64_C(2174753184),	// FSTOQ
    UINT64_C(2174750752),	// FSTOX
    UINT64_C(2174748864),	// FSUBD
    UINT64_C(2174748896),	// FSUBQ
    UINT64_C(2174748832),	// FSUBS
    UINT64_C(2175798848),	// FXNOR
    UINT64_C(2175798880),	// FXNORS
    UINT64_C(2175798656),	// FXOR
    UINT64_C(2175798688),	// FXORS
    UINT64_C(2174750976),	// FXTOD
    UINT64_C(2174751104),	// FXTOQ
    UINT64_C(2174750848),	// FXTOS
    UINT64_C(2175798272),	// FZERO
    UINT64_C(2175798304),	// FZEROS
    UINT64_C(2176851968),	// JMPLri
    UINT64_C(2176843776),	// JMPLrr
    UINT64_C(3229614080),	// LDArr
    UINT64_C(3246923776),	// LDCSRri
    UINT64_C(3246915584),	// LDCSRrr
    UINT64_C(3246399488),	// LDCri
    UINT64_C(3246391296),	// LDCrr
    UINT64_C(3231186944),	// LDDArr
    UINT64_C(3247972352),	// LDDCri
    UINT64_C(3247964160),	// LDDCrr
    UINT64_C(3247964160),	// LDDFArr
    UINT64_C(3239583744),	// LDDFri
    UINT64_C(3239575552),	// LDDFrr
    UINT64_C(3222806528),	// LDDri
    UINT64_C(3222798336),	// LDDrr
    UINT64_C(3246391296),	// LDFArr
    UINT64_C(3238535168),	// LDFSRri
    UINT64_C(3238526976),	// LDFSRrr
    UINT64_C(3238010880),	// LDFri
    UINT64_C(3238002688),	// LDFrr
    UINT64_C(3247439872),	// LDQFArr
    UINT64_C(3239059456),	// LDQFri
    UINT64_C(3239051264),	// LDQFrr
    UINT64_C(3234332672),	// LDSBArr
    UINT64_C(3225952256),	// LDSBri
    UINT64_C(3225944064),	// LDSBrr
    UINT64_C(3234856960),	// LDSHArr
    UINT64_C(3226476544),	// LDSHri
    UINT64_C(3226468352),	// LDSHrr
    UINT64_C(3236429824),	// LDSTUBArr
    UINT64_C(3228049408),	// LDSTUBri
    UINT64_C(3228041216),	// LDSTUBrr
    UINT64_C(3225427968),	// LDSWri
    UINT64_C(3225419776),	// LDSWrr
    UINT64_C(3230138368),	// LDUBArr
    UINT64_C(3221757952),	// LDUBri
    UINT64_C(3221749760),	// LDUBrr
    UINT64_C(3230662656),	// LDUHArr
    UINT64_C(3222282240),	// LDUHri
    UINT64_C(3222274048),	// LDUHrr
    UINT64_C(3272089600),	// LDXFSRri
    UINT64_C(3272081408),	// LDXFSRrr
    UINT64_C(3227000832),	// LDXri
    UINT64_C(3226992640),	// LDXrr
    UINT64_C(3221233664),	// LDri
    UINT64_C(3221225472),	// LDrr
    UINT64_C(2147491840),	// LEAX_ADDri
    UINT64_C(2147491840),	// LEA_ADDri
    UINT64_C(2175795936),	// LZCNT
    UINT64_C(2168709120),	// MEMBARi
    UINT64_C(2175803904),	// MOVDTOX
    UINT64_C(2170560512),	// MOVFCCri
    UINT64_C(2170552320),	// MOVFCCrr
    UINT64_C(2170822656),	// MOVICCri
    UINT64_C(2170814464),	// MOVICCrr
    UINT64_C(2172140544),	// MOVRGEZri
    UINT64_C(2172132352),	// MOVRGEZrr
    UINT64_C(2172139520),	// MOVRGZri
    UINT64_C(2172131328),	// MOVRGZrr
    UINT64_C(2172135424),	// MOVRLEZri
    UINT64_C(2172127232),	// MOVRLEZrr
    UINT64_C(2172136448),	// MOVRLZri
    UINT64_C(2172128256),	// MOVRLZrr
    UINT64_C(2172138496),	// MOVRNZri
    UINT64_C(2172130304),	// MOVRNZrr
    UINT64_C(2172134400),	// MOVRRZri
    UINT64_C(2172126208),	// MOVRRZrr
    UINT64_C(2175804000),	// MOVSTOSW
    UINT64_C(2175803936),	// MOVSTOUW
    UINT64_C(2175804192),	// MOVWTOS
    UINT64_C(2170826752),	// MOVXCCri
    UINT64_C(2170818560),	// MOVXCCrr
    UINT64_C(2175804160),	// MOVXTOD
    UINT64_C(2166366208),	// MULSCCri
    UINT64_C(2166358016),	// MULSCCrr
    UINT64_C(2152210432),	// MULXri
    UINT64_C(2152202240),	// MULXrr
    UINT64_C(16777216),	// NOP
    UINT64_C(2156929024),	// ORCCri
    UINT64_C(2156920832),	// ORCCrr
    UINT64_C(2159026176),	// ORNCCri
    UINT64_C(2159017984),	// ORNCCrr
    UINT64_C(2150637568),	// ORNri
    UINT64_C(2150629376),	// ORNrr
    UINT64_C(2150629376),	// ORXNrr
    UINT64_C(2148540416),	// ORXri
    UINT64_C(2148532224),	// ORXrr
    UINT64_C(2148540416),	// ORri
    UINT64_C(2148532224),	// ORrr
    UINT64_C(2175797184),	// PDIST
    UINT64_C(2175797216),	// PDISTN
    UINT64_C(2171600896),	// POPCrr
    UINT64_C(2206736384),	// PWRPSRri
    UINT64_C(2206728192),	// PWRPSRrr
    UINT64_C(2168455168),	// RDASR
    UINT64_C(2169503744),	// RDPR
    UINT64_C(2168979456),	// RDPSR
    UINT64_C(2170028032),	// RDTBR
    UINT64_C(2169503744),	// RDWIM
    UINT64_C(2179473408),	// RESTOREri
    UINT64_C(2179465216),	// RESTORErr
    UINT64_C(2177359872),	// RET
    UINT64_C(2177097728),	// RETL
    UINT64_C(2177376256),	// RETTri
    UINT64_C(2177368064),	// RETTrr
    UINT64_C(2178949120),	// SAVEri
    UINT64_C(2178940928),	// SAVErr
    UINT64_C(2163744768),	// SDIVCCri
    UINT64_C(2163736576),	// SDIVCCrr
    UINT64_C(2171084800),	// SDIVXri
    UINT64_C(2171076608),	// SDIVXrr
    UINT64_C(2155356160),	// SDIVri
    UINT64_C(2155347968),	// SDIVrr
    UINT64_C(16777216),	// SETHIXi
    UINT64_C(16777216),	// SETHIi
    UINT64_C(2175799296),	// SHUTDOWN
    UINT64_C(2175799328),	// SIAM
    UINT64_C(2166894592),	// SLLXri
    UINT64_C(2166886400),	// SLLXrr
    UINT64_C(2166890496),	// SLLri
    UINT64_C(2166882304),	// SLLrr
    UINT64_C(2180521984),	// SMACri
    UINT64_C(2180513792),	// SMACrr
    UINT64_C(2161647616),	// SMULCCri
    UINT64_C(2161639424),	// SMULCCrr
    UINT64_C(2153259008),	// SMULri
    UINT64_C(2153250816),	// SMULrr
    UINT64_C(2167943168),	// SRAXri
    UINT64_C(2167934976),	// SRAXrr
    UINT64_C(2167939072),	// SRAri
    UINT64_C(2167930880),	// SRArr
    UINT64_C(2167418880),	// SRLXri
    UINT64_C(2167410688),	// SRLXrr
    UINT64_C(2167414784),	// SRLri
    UINT64_C(2167406592),	// SRLrr
    UINT64_C(3231711232),	// STArr
    UINT64_C(2168700928),	// STBAR
    UINT64_C(3232235520),	// STBArr
    UINT64_C(3223855104),	// STBri
    UINT64_C(3223846912),	// STBrr
    UINT64_C(3249020928),	// STCSRri
    UINT64_C(3249012736),	// STCSRrr
    UINT64_C(3248496640),	// STCri
    UINT64_C(3248488448),	// STCrr
    UINT64_C(3233284096),	// STDArr
    UINT64_C(3249545216),	// STDCQri
    UINT64_C(3249537024),	// STDCQrr
    UINT64_C(3250069504),	// STDCri
    UINT64_C(3250061312),	// STDCrr
    UINT64_C(3250061312),	// STDFArr
    UINT64_C(3241156608),	// STDFQri
    UINT64_C(3241148416),	// STDFQrr
    UINT64_C(3241680896),	// STDFri
    UINT64_C(3241672704),	// STDFrr
    UINT64_C(3224903680),	// STDri
    UINT64_C(3224895488),	// STDrr
    UINT64_C(3248488448),	// STFArr
    UINT64_C(3240632320),	// STFSRri
    UINT64_C(3240624128),	// STFSRrr
    UINT64_C(3240108032),	// STFri
    UINT64_C(3240099840),	// STFrr
    UINT64_C(3232759808),	// STHArr
    UINT64_C(3224379392),	// STHri
    UINT64_C(3224371200),	// STHrr
    UINT64_C(3249537024),	// STQFArr
    UINT64_C(3241156608),	// STQFri
    UINT64_C(3241148416),	// STQFrr
    UINT64_C(3274186752),	// STXFSRri
    UINT64_C(3274178560),	// STXFSRrr
    UINT64_C(3228573696),	// STXri
    UINT64_C(3228565504),	// STXrr
    UINT64_C(3223330816),	// STri
    UINT64_C(3223322624),	// STrr
    UINT64_C(2157977600),	// SUBCCri
    UINT64_C(2157969408),	// SUBCCrr
    UINT64_C(2153783296),	// SUBCri
    UINT64_C(2153775104),	// SUBCrr
    UINT64_C(2162171904),	// SUBEri
    UINT64_C(2162163712),	// SUBErr
    UINT64_C(2149588992),	// SUBXri
    UINT64_C(2149580800),	// SUBXrr
    UINT64_C(2149588992),	// SUBri
    UINT64_C(2149580800),	// SUBrr
    UINT64_C(3237478400),	// SWAPArr
    UINT64_C(3229097984),	// SWAPri
    UINT64_C(3229089792),	// SWAPrr
    UINT64_C(2446336001),	// TA1
    UINT64_C(2446336003),	// TA3
    UINT64_C(2446336005),	// TA5
    UINT64_C(2165317632),	// TADDCCTVri
    UINT64_C(2165309440),	// TADDCCTVrr
    UINT64_C(2164269056),	// TADDCCri
    UINT64_C(2164260864),	// TADDCCrr
    UINT64_C(2177900544),	// TICCri
    UINT64_C(2177892352),	// TICCrr
    UINT64_C(2147483648),	// TLS_ADDXrr
    UINT64_C(2147483648),	// TLS_ADDrr
    UINT64_C(1073741824),	// TLS_CALL
    UINT64_C(3226992640),	// TLS_LDXrr
    UINT64_C(3221225472),	// TLS_LDrr
    UINT64_C(2177900544),	// TRAPri
    UINT64_C(2177892352),	// TRAPrr
    UINT64_C(2165841920),	// TSUBCCTVri
    UINT64_C(2165833728),	// TSUBCCTVrr
    UINT64_C(2164793344),	// TSUBCCri
    UINT64_C(2164785152),	// TSUBCCrr
    UINT64_C(2177904640),	// TXCCri
    UINT64_C(2177896448),	// TXCCrr
    UINT64_C(2163220480),	// UDIVCCri
    UINT64_C(2163212288),	// UDIVCCrr
    UINT64_C(2154307584),	// UDIVXri
    UINT64_C(2154299392),	// UDIVXrr
    UINT64_C(2154831872),	// UDIVri
    UINT64_C(2154823680),	// UDIVrr
    UINT64_C(2179997696),	// UMACri
    UINT64_C(2179989504),	// UMACrr
    UINT64_C(2161123328),	// UMULCCri
    UINT64_C(2161115136),	// UMULCCrr
    UINT64_C(2175795904),	// UMULXHI
    UINT64_C(2152734720),	// UMULri
    UINT64_C(2152726528),	// UMULrr
    UINT64_C(0),	// UNIMP
    UINT64_C(2175273536),	// V9FCMPD
    UINT64_C(2175273664),	// V9FCMPED
    UINT64_C(2175273696),	// V9FCMPEQ
    UINT64_C(2175273632),	// V9FCMPES
    UINT64_C(2175273568),	// V9FCMPQ
    UINT64_C(2175273504),	// V9FCMPS
    UINT64_C(2175270976),	// V9FMOVD_FCC
    UINT64_C(2175271008),	// V9FMOVQ_FCC
    UINT64_C(2175270944),	// V9FMOVS_FCC
    UINT64_C(2170560512),	// V9MOVFCCri
    UINT64_C(2170552320),	// V9MOVFCCrr
    UINT64_C(2172657664),	// WRASRri
    UINT64_C(2172649472),	// WRASRrr
    UINT64_C(2173706240),	// WRPRri
    UINT64_C(2173698048),	// WRPRrr
    UINT64_C(2173181952),	// WRPSRri
    UINT64_C(2173173760),	// WRPSRrr
    UINT64_C(2174230528),	// WRTBRri
    UINT64_C(2174222336),	// WRTBRrr
    UINT64_C(2173706240),	// WRWIMri
    UINT64_C(2173698048),	// WRWIMrr
    UINT64_C(2175804064),	// XMULX
    UINT64_C(2175804128),	// XMULXHI
    UINT64_C(2159550464),	// XNORCCri
    UINT64_C(2159542272),	// XNORCCrr
    UINT64_C(2151153664),	// XNORXrr
    UINT64_C(2151161856),	// XNORri
    UINT64_C(2151153664),	// XNORrr
    UINT64_C(2157453312),	// XORCCri
    UINT64_C(2157445120),	// XORCCrr
    UINT64_C(2149064704),	// XORXri
    UINT64_C(2149056512),	// XORXrr
    UINT64_C(2149064704),	// XORri
    UINT64_C(2149056512),	// XORrr
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case SP::FLUSH:
    case SP::FLUSHW:
    case SP::NOP:
    case SP::SHUTDOWN:
    case SP::SIAM:
    case SP::STBAR:
    case SP::TA1:
    case SP::TA3:
    case SP::TA5: {
      break;
    }
    case SP::BPFCC:
    case SP::BPFCCA:
    case SP::BPFCCANT:
    case SP::BPFCCNT: {
      // op: cc
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 20;
      Value |= op;
      // op: cond
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 25;
      Value |= op;
      // op: imm19
      op = getBranchPredTargetOpValue(MI, 0, Fixups, STI);
      op &= UINT64_C(524287);
      Value |= op;
      break;
    }
    case SP::BPICC:
    case SP::BPICCA:
    case SP::BPICCANT:
    case SP::BPICCNT:
    case SP::BPXCC:
    case SP::BPXCCA:
    case SP::BPXCCANT:
    case SP::BPXCCNT: {
      // op: cond
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 25;
      Value |= op;
      // op: imm19
      op = getBranchPredTargetOpValue(MI, 0, Fixups, STI);
      op &= UINT64_C(524287);
      Value |= op;
      break;
    }
    case SP::CALL:
    case SP::TLS_CALL: {
      // op: disp
      op = getCallTargetOpValue(MI, 0, Fixups, STI);
      op &= UINT64_C(1073741823);
      Value |= op;
      break;
    }
    case SP::BPGEZapn:
    case SP::BPGEZapt:
    case SP::BPGEZnapn:
    case SP::BPGEZnapt:
    case SP::BPGZapn:
    case SP::BPGZapt:
    case SP::BPGZnapn:
    case SP::BPGZnapt:
    case SP::BPLEZapn:
    case SP::BPLEZapt:
    case SP::BPLEZnapn:
    case SP::BPLEZnapt:
    case SP::BPLZapn:
    case SP::BPLZapt:
    case SP::BPLZnapn:
    case SP::BPLZnapt:
    case SP::BPNZapn:
    case SP::BPNZapt:
    case SP::BPNZnapn:
    case SP::BPNZnapt:
    case SP::BPZapn:
    case SP::BPZapt:
    case SP::BPZnapn:
    case SP::BPZnapt: {
      // op: imm16
      op = getBranchOnRegTargetOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(49152)) << 6;
      Value |= (op & UINT64_C(16383));
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 14;
      Value |= op;
      break;
    }
    case SP::BA: {
      // op: imm22
      op = getBranchTargetOpValue(MI, 0, Fixups, STI);
      op &= UINT64_C(4194303);
      Value |= op;
      break;
    }
    case SP::BCOND:
    case SP::BCONDA:
    case SP::CBCOND:
    case SP::CBCONDA:
    case SP::FBCOND:
    case SP::FBCONDA: {
      // op: imm22
      op = getBranchTargetOpValue(MI, 0, Fixups, STI);
      op &= UINT64_C(4194303);
      Value |= op;
      // op: cond
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 25;
      Value |= op;
      break;
    }
    case SP::UNIMP: {
      // op: imm22
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(4194303);
      Value |= op;
      break;
    }
    case SP::SETHIXi:
    case SP::SETHIi: {
      // op: imm22
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(4194303);
      Value |= op;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      break;
    }
    case SP::FONE:
    case SP::FONES:
    case SP::FZERO:
    case SP::FZEROS:
    case SP::RDPSR:
    case SP::RDTBR:
    case SP::RDWIM: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      break;
    }
    case SP::V9MOVFCCrr: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      // op: cc
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: cond
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 14;
      Value |= op;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case SP::V9MOVFCCri: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      // op: cc
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: cond
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 14;
      Value |= op;
      // op: simm11
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(2047);
      Value |= op;
      break;
    }
    case SP::FMOVD_FCC:
    case SP::FMOVD_ICC:
    case SP::FMOVD_XCC:
    case SP::FMOVQ_FCC:
    case SP::FMOVQ_ICC:
    case SP::FMOVQ_XCC:
    case SP::FMOVS_FCC:
    case SP::FMOVS_ICC:
    case SP::FMOVS_XCC:
    case SP::MOVFCCrr:
    case SP::MOVICCrr:
    case SP::MOVXCCrr: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      // op: cond
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 14;
      Value |= op;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case SP::MOVFCCri:
    case SP::MOVICCri:
    case SP::MOVXCCri: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      // op: cond
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 14;
      Value |= op;
      // op: simm11
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(2047);
      Value |= op;
      break;
    }
    case SP::V9FMOVD_FCC:
    case SP::V9FMOVQ_FCC:
    case SP::V9FMOVS_FCC: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      // op: cond
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 14;
      Value |= op;
      // op: opf_cc
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 11;
      Value |= op;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case SP::FNOT1:
    case SP::FNOT1S:
    case SP::FSRC1:
    case SP::FSRC1S:
    case SP::RDASR:
    case SP::RDPR: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 14;
      Value |= op;
      break;
    }
    case SP::LDArr:
    case SP::LDDArr:
    case SP::LDDFArr:
    case SP::LDFArr:
    case SP::LDQFArr:
    case SP::LDSBArr:
    case SP::LDSHArr:
    case SP::LDSTUBArr:
    case SP::LDUBArr:
    case SP::LDUHArr:
    case SP::SWAPArr: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 14;
      Value |= op;
      // op: asi
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 5;
      Value |= op;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case SP::CASArr: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 14;
      Value |= op;
      // op: asi
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 5;
      Value |= op;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case SP::ADDCCrr:
    case SP::ADDCrr:
    case SP::ADDErr:
    case SP::ADDXC:
    case SP::ADDXCCC:
    case SP::ADDXrr:
    case SP::ADDrr:
    case SP::ALIGNADDR:
    case SP::ALIGNADDRL:
    case SP::ANDCCrr:
    case SP::ANDNCCrr:
    case SP::ANDNrr:
    case SP::ANDXNrr:
    case SP::ANDXrr:
    case SP::ANDrr:
    case SP::ARRAY16:
    case SP::ARRAY32:
    case SP::ARRAY8:
    case SP::BMASK:
    case SP::BSHUFFLE:
    case SP::CASAasi10:
    case SP::CASXrr:
    case SP::CASrr:
    case SP::EDGE16:
    case SP::EDGE16L:
    case SP::EDGE16LN:
    case SP::EDGE16N:
    case SP::EDGE32:
    case SP::EDGE32L:
    case SP::EDGE32LN:
    case SP::EDGE32N:
    case SP::EDGE8:
    case SP::EDGE8L:
    case SP::EDGE8LN:
    case SP::EDGE8N:
    case SP::FADDD:
    case SP::FADDQ:
    case SP::FADDS:
    case SP::FALIGNADATA:
    case SP::FAND:
    case SP::FANDNOT1:
    case SP::FANDNOT1S:
    case SP::FANDNOT2:
    case SP::FANDNOT2S:
    case SP::FANDS:
    case SP::FCHKSM16:
    case SP::FCMPEQ16:
    case SP::FCMPEQ32:
    case SP::FCMPGT16:
    case SP::FCMPGT32:
    case SP::FCMPLE16:
    case SP::FCMPLE32:
    case SP::FCMPNE16:
    case SP::FCMPNE32:
    case SP::FDIVD:
    case SP::FDIVQ:
    case SP::FDIVS:
    case SP::FDMULQ:
    case SP::FHADDD:
    case SP::FHADDS:
    case SP::FHSUBD:
    case SP::FHSUBS:
    case SP::FLCMPD:
    case SP::FLCMPS:
    case SP::FMEAN16:
    case SP::FMOVRGEZD:
    case SP::FMOVRGEZQ:
    case SP::FMOVRGEZS:
    case SP::FMOVRGZD:
    case SP::FMOVRGZQ:
    case SP::FMOVRGZS:
    case SP::FMOVRLEZD:
    case SP::FMOVRLEZQ:
    case SP::FMOVRLEZS:
    case SP::FMOVRLZD:
    case SP::FMOVRLZQ:
    case SP::FMOVRLZS:
    case SP::FMOVRNZD:
    case SP::FMOVRNZQ:
    case SP::FMOVRNZS:
    case SP::FMOVRZD:
    case SP::FMOVRZQ:
    case SP::FMOVRZS:
    case SP::FMUL8SUX16:
    case SP::FMUL8ULX16:
    case SP::FMUL8X16:
    case SP::FMUL8X16AL:
    case SP::FMUL8X16AU:
    case SP::FMULD:
    case SP::FMULD8SUX16:
    case SP::FMULD8ULX16:
    case SP::FMULQ:
    case SP::FMULS:
    case SP::FNADDD:
    case SP::FNADDS:
    case SP::FNAND:
    case SP::FNANDS:
    case SP::FNHADDD:
    case SP::FNHADDS:
    case SP::FNMULD:
    case SP::FNMULS:
    case SP::FNOR:
    case SP::FNORS:
    case SP::FNSMULD:
    case SP::FOR:
    case SP::FORNOT1:
    case SP::FORNOT1S:
    case SP::FORNOT2:
    case SP::FORNOT2S:
    case SP::FORS:
    case SP::FPACK32:
    case SP::FPADD16:
    case SP::FPADD16S:
    case SP::FPADD32:
    case SP::FPADD32S:
    case SP::FPADD64:
    case SP::FPMERGE:
    case SP::FPSUB16:
    case SP::FPSUB16S:
    case SP::FPSUB32:
    case SP::FPSUB32S:
    case SP::FSLAS16:
    case SP::FSLAS32:
    case SP::FSLL16:
    case SP::FSLL32:
    case SP::FSMULD:
    case SP::FSRA16:
    case SP::FSRA32:
    case SP::FSRL16:
    case SP::FSRL32:
    case SP::FSUBD:
    case SP::FSUBQ:
    case SP::FSUBS:
    case SP::FXNOR:
    case SP::FXNORS:
    case SP::FXOR:
    case SP::FXORS:
    case SP::JMPLrr:
    case SP::LDCrr:
    case SP::LDDCrr:
    case SP::LDDFrr:
    case SP::LDDrr:
    case SP::LDFrr:
    case SP::LDQFrr:
    case SP::LDSBrr:
    case SP::LDSHrr:
    case SP::LDSTUBrr:
    case SP::LDSWrr:
    case SP::LDUBrr:
    case SP::LDUHrr:
    case SP::LDXrr:
    case SP::LDrr:
    case SP::MOVRGEZrr:
    case SP::MOVRGZrr:
    case SP::MOVRLEZrr:
    case SP::MOVRLZrr:
    case SP::MOVRNZrr:
    case SP::MOVRRZrr:
    case SP::MULSCCrr:
    case SP::MULXrr:
    case SP::ORCCrr:
    case SP::ORNCCrr:
    case SP::ORNrr:
    case SP::ORXNrr:
    case SP::ORXrr:
    case SP::ORrr:
    case SP::PDIST:
    case SP::PDISTN:
    case SP::RESTORErr:
    case SP::SAVErr:
    case SP::SDIVCCrr:
    case SP::SDIVXrr:
    case SP::SDIVrr:
    case SP::SLLXrr:
    case SP::SLLrr:
    case SP::SMACrr:
    case SP::SMULCCrr:
    case SP::SMULrr:
    case SP::SRAXrr:
    case SP::SRArr:
    case SP::SRLXrr:
    case SP::SRLrr:
    case SP::SUBCCrr:
    case SP::SUBCrr:
    case SP::SUBErr:
    case SP::SUBXrr:
    case SP::SUBrr:
    case SP::SWAPrr:
    case SP::TADDCCTVrr:
    case SP::TADDCCrr:
    case SP::TLS_ADDXrr:
    case SP::TLS_ADDrr:
    case SP::TLS_LDXrr:
    case SP::TLS_LDrr:
    case SP::TSUBCCTVrr:
    case SP::TSUBCCrr:
    case SP::UDIVCCrr:
    case SP::UDIVXrr:
    case SP::UDIVrr:
    case SP::UMACrr:
    case SP::UMULCCrr:
    case SP::UMULXHI:
    case SP::UMULrr:
    case SP::V9FCMPD:
    case SP::V9FCMPED:
    case SP::V9FCMPEQ:
    case SP::V9FCMPES:
    case SP::V9FCMPQ:
    case SP::V9FCMPS:
    case SP::WRASRrr:
    case SP::WRPRrr:
    case SP::XMULX:
    case SP::XMULXHI:
    case SP::XNORCCrr:
    case SP::XNORXrr:
    case SP::XNORrr:
    case SP::XORCCrr:
    case SP::XORXrr:
    case SP::XORrr: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 14;
      Value |= op;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case SP::SLLXri:
    case SP::SRAXri:
    case SP::SRLXri: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 14;
      Value |= op;
      // op: shcnt
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(63);
      Value |= op;
      break;
    }
    case SP::MOVRGEZri:
    case SP::MOVRGZri:
    case SP::MOVRLEZri:
    case SP::MOVRLZri:
    case SP::MOVRNZri:
    case SP::MOVRRZri: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 14;
      Value |= op;
      // op: simm10
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(1023);
      Value |= op;
      break;
    }
    case SP::ADDCCri:
    case SP::ADDCri:
    case SP::ADDEri:
    case SP::ADDXri:
    case SP::ADDri:
    case SP::ANDCCri:
    case SP::ANDNCCri:
    case SP::ANDNri:
    case SP::ANDXri:
    case SP::ANDri:
    case SP::JMPLri:
    case SP::LDCri:
    case SP::LDDCri:
    case SP::LDDFri:
    case SP::LDDri:
    case SP::LDFri:
    case SP::LDQFri:
    case SP::LDSBri:
    case SP::LDSHri:
    case SP::LDSTUBri:
    case SP::LDSWri:
    case SP::LDUBri:
    case SP::LDUHri:
    case SP::LDXri:
    case SP::LDri:
    case SP::LEAX_ADDri:
    case SP::LEA_ADDri:
    case SP::MULSCCri:
    case SP::MULXri:
    case SP::ORCCri:
    case SP::ORNCCri:
    case SP::ORNri:
    case SP::ORXri:
    case SP::ORri:
    case SP::RESTOREri:
    case SP::SAVEri:
    case SP::SDIVCCri:
    case SP::SDIVXri:
    case SP::SDIVri:
    case SP::SLLri:
    case SP::SMACri:
    case SP::SMULCCri:
    case SP::SMULri:
    case SP::SRAri:
    case SP::SRLri:
    case SP::SUBCCri:
    case SP::SUBCri:
    case SP::SUBEri:
    case SP::SUBXri:
    case SP::SUBri:
    case SP::SWAPri:
    case SP::TADDCCTVri:
    case SP::TADDCCri:
    case SP::TSUBCCTVri:
    case SP::TSUBCCri:
    case SP::UDIVCCri:
    case SP::UDIVXri:
    case SP::UDIVri:
    case SP::UMACri:
    case SP::UMULCCri:
    case SP::UMULri:
    case SP::WRASRri:
    case SP::WRPRri:
    case SP::XNORCCri:
    case SP::XNORri:
    case SP::XORCCri:
    case SP::XORXri:
    case SP::XORri: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 14;
      Value |= op;
      // op: simm13
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(8191);
      Value |= op;
      break;
    }
    case SP::FABSD:
    case SP::FABSQ:
    case SP::FABSS:
    case SP::FDTOI:
    case SP::FDTOQ:
    case SP::FDTOS:
    case SP::FDTOX:
    case SP::FEXPAND:
    case SP::FITOD:
    case SP::FITOQ:
    case SP::FITOS:
    case SP::FMOVD:
    case SP::FMOVQ:
    case SP::FMOVS:
    case SP::FNEGD:
    case SP::FNEGQ:
    case SP::FNEGS:
    case SP::FNOT2:
    case SP::FNOT2S:
    case SP::FPACK16:
    case SP::FPACKFIX:
    case SP::FQTOD:
    case SP::FQTOI:
    case SP::FQTOS:
    case SP::FQTOX:
    case SP::FSQRTD:
    case SP::FSQRTQ:
    case SP::FSQRTS:
    case SP::FSRC2:
    case SP::FSRC2S:
    case SP::FSTOD:
    case SP::FSTOI:
    case SP::FSTOQ:
    case SP::FSTOX:
    case SP::FXTOD:
    case SP::FXTOQ:
    case SP::FXTOS:
    case SP::LZCNT:
    case SP::MOVDTOX:
    case SP::MOVSTOSW:
    case SP::MOVSTOUW:
    case SP::MOVWTOS:
    case SP::MOVXTOD:
    case SP::POPCrr: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case SP::STArr:
    case SP::STBArr:
    case SP::STDArr:
    case SP::STDFArr:
    case SP::STFArr:
    case SP::STHArr:
    case SP::STQFArr: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 14;
      Value |= op;
      // op: asi
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 5;
      Value |= op;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case SP::STBrr:
    case SP::STCrr:
    case SP::STDCrr:
    case SP::STDFrr:
    case SP::STDrr:
    case SP::STFrr:
    case SP::STHrr:
    case SP::STQFrr:
    case SP::STXrr:
    case SP::STrr: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 14;
      Value |= op;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case SP::STBri:
    case SP::STCri:
    case SP::STDCri:
    case SP::STDFri:
    case SP::STDri:
    case SP::STFri:
    case SP::STHri:
    case SP::STQFri:
    case SP::STXri:
    case SP::STri: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 25;
      Value |= op;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 14;
      Value |= op;
      // op: simm13
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(8191);
      Value |= op;
      break;
    }
    case SP::TICCri:
    case SP::TRAPri:
    case SP::TXCCri: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 14;
      Value |= op;
      // op: cond
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 25;
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(255);
      Value |= op;
      break;
    }
    case SP::TICCrr:
    case SP::TRAPrr:
    case SP::TXCCrr: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 14;
      Value |= op;
      // op: cond
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 25;
      Value |= op;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case SP::BINDrr:
    case SP::CALLrr:
    case SP::CMPrr:
    case SP::FCMPD:
    case SP::FCMPQ:
    case SP::FCMPS:
    case SP::FLUSHrr:
    case SP::LDCSRrr:
    case SP::LDFSRrr:
    case SP::LDXFSRrr:
    case SP::PWRPSRrr:
    case SP::RETTrr:
    case SP::STCSRrr:
    case SP::STDCQrr:
    case SP::STDFQrr:
    case SP::STFSRrr:
    case SP::STXFSRrr:
    case SP::WRPSRrr:
    case SP::WRTBRrr:
    case SP::WRWIMrr: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 14;
      Value |= op;
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case SP::BINDri:
    case SP::CALLri:
    case SP::CMPri:
    case SP::FLUSHri:
    case SP::LDCSRri:
    case SP::LDFSRri:
    case SP::LDXFSRri:
    case SP::PWRPSRri:
    case SP::RETTri:
    case SP::STCSRri:
    case SP::STDCQri:
    case SP::STDFQri:
    case SP::STFSRri:
    case SP::STXFSRri:
    case SP::WRPSRri:
    case SP::WRTBRri:
    case SP::WRWIMri: {
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 14;
      Value |= op;
      // op: simm13
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(8191);
      Value |= op;
      break;
    }
    case SP::CMASK16:
    case SP::CMASK32:
    case SP::CMASK8: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      Value |= op;
      break;
    }
    case SP::MEMBARi:
    case SP::RET:
    case SP::RETL: {
      // op: simm13
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(8191);
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
  Feature_UseSoftMulDivBit = 5,
  Feature_HasV9Bit = 1,
  Feature_HasVISBit = 2,
  Feature_HasVIS2Bit = 3,
  Feature_HasVIS3Bit = 4,
  Feature_HasPWRPSRBit = 0,
};

#ifndef NDEBUG
static const char *SubtargetFeatureNames[] = {
  "Feature_HasPWRPSR",
  "Feature_HasV9",
  "Feature_HasVIS",
  "Feature_HasVIS2",
  "Feature_HasVIS3",
  "Feature_UseSoftMulDiv",
  nullptr
};

#endif // NDEBUG
FeatureBitset SparcMCCodeEmitter::
computeAvailableFeatures(const FeatureBitset& FB) const {
  FeatureBitset Features;
  if ((FB[Sparc::FeatureSoftMulDiv]))
    Features.set(Feature_UseSoftMulDivBit);
  if ((FB[Sparc::FeatureV9]))
    Features.set(Feature_HasV9Bit);
  if ((FB[Sparc::FeatureVIS]))
    Features.set(Feature_HasVISBit);
  if ((FB[Sparc::FeatureVIS2]))
    Features.set(Feature_HasVIS2Bit);
  if ((FB[Sparc::FeatureVIS3]))
    Features.set(Feature_HasVIS3Bit);
  if ((FB[Sparc::FeaturePWRPSR]))
    Features.set(Feature_HasPWRPSRBit);
  return Features;
}

#ifndef NDEBUG
// Feature bitsets.
enum : uint8_t {
  CEFBS_None,
  CEFBS_HasPWRPSR,
  CEFBS_HasV9,
  CEFBS_HasVIS,
  CEFBS_HasVIS2,
  CEFBS_HasVIS3,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // CEFBS_None
  {Feature_HasPWRPSRBit, },
  {Feature_HasV9Bit, },
  {Feature_HasVISBit, },
  {Feature_HasVIS2Bit, },
  {Feature_HasVIS3Bit, },
};
#endif // NDEBUG

void SparcMCCodeEmitter::verifyInstructionPredicates(
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
    CEFBS_None, // ADJCALLSTACKDOWN = 175
    CEFBS_None, // ADJCALLSTACKUP = 176
    CEFBS_None, // GETPCX = 177
    CEFBS_None, // SELECT_CC_DFP_FCC = 178
    CEFBS_None, // SELECT_CC_DFP_ICC = 179
    CEFBS_None, // SELECT_CC_FP_FCC = 180
    CEFBS_None, // SELECT_CC_FP_ICC = 181
    CEFBS_None, // SELECT_CC_Int_FCC = 182
    CEFBS_None, // SELECT_CC_Int_ICC = 183
    CEFBS_None, // SELECT_CC_QFP_FCC = 184
    CEFBS_None, // SELECT_CC_QFP_ICC = 185
    CEFBS_None, // SET = 186
    CEFBS_None, // ADDCCri = 187
    CEFBS_None, // ADDCCrr = 188
    CEFBS_None, // ADDCri = 189
    CEFBS_None, // ADDCrr = 190
    CEFBS_None, // ADDEri = 191
    CEFBS_None, // ADDErr = 192
    CEFBS_HasVIS3, // ADDXC = 193
    CEFBS_HasVIS3, // ADDXCCC = 194
    CEFBS_None, // ADDXri = 195
    CEFBS_None, // ADDXrr = 196
    CEFBS_None, // ADDri = 197
    CEFBS_None, // ADDrr = 198
    CEFBS_HasVIS, // ALIGNADDR = 199
    CEFBS_HasVIS, // ALIGNADDRL = 200
    CEFBS_None, // ANDCCri = 201
    CEFBS_None, // ANDCCrr = 202
    CEFBS_None, // ANDNCCri = 203
    CEFBS_None, // ANDNCCrr = 204
    CEFBS_None, // ANDNri = 205
    CEFBS_None, // ANDNrr = 206
    CEFBS_None, // ANDXNrr = 207
    CEFBS_None, // ANDXri = 208
    CEFBS_None, // ANDXrr = 209
    CEFBS_None, // ANDri = 210
    CEFBS_None, // ANDrr = 211
    CEFBS_HasVIS, // ARRAY16 = 212
    CEFBS_HasVIS, // ARRAY32 = 213
    CEFBS_HasVIS, // ARRAY8 = 214
    CEFBS_None, // BA = 215
    CEFBS_None, // BCOND = 216
    CEFBS_None, // BCONDA = 217
    CEFBS_None, // BINDri = 218
    CEFBS_None, // BINDrr = 219
    CEFBS_HasVIS2, // BMASK = 220
    CEFBS_HasV9, // BPFCC = 221
    CEFBS_HasV9, // BPFCCA = 222
    CEFBS_HasV9, // BPFCCANT = 223
    CEFBS_HasV9, // BPFCCNT = 224
    CEFBS_None, // BPGEZapn = 225
    CEFBS_None, // BPGEZapt = 226
    CEFBS_None, // BPGEZnapn = 227
    CEFBS_None, // BPGEZnapt = 228
    CEFBS_None, // BPGZapn = 229
    CEFBS_None, // BPGZapt = 230
    CEFBS_None, // BPGZnapn = 231
    CEFBS_None, // BPGZnapt = 232
    CEFBS_HasV9, // BPICC = 233
    CEFBS_HasV9, // BPICCA = 234
    CEFBS_HasV9, // BPICCANT = 235
    CEFBS_HasV9, // BPICCNT = 236
    CEFBS_None, // BPLEZapn = 237
    CEFBS_None, // BPLEZapt = 238
    CEFBS_None, // BPLEZnapn = 239
    CEFBS_None, // BPLEZnapt = 240
    CEFBS_None, // BPLZapn = 241
    CEFBS_None, // BPLZapt = 242
    CEFBS_None, // BPLZnapn = 243
    CEFBS_None, // BPLZnapt = 244
    CEFBS_None, // BPNZapn = 245
    CEFBS_None, // BPNZapt = 246
    CEFBS_None, // BPNZnapn = 247
    CEFBS_None, // BPNZnapt = 248
    CEFBS_None, // BPXCC = 249
    CEFBS_None, // BPXCCA = 250
    CEFBS_None, // BPXCCANT = 251
    CEFBS_None, // BPXCCNT = 252
    CEFBS_None, // BPZapn = 253
    CEFBS_None, // BPZapt = 254
    CEFBS_None, // BPZnapn = 255
    CEFBS_None, // BPZnapt = 256
    CEFBS_HasVIS2, // BSHUFFLE = 257
    CEFBS_None, // CALL = 258
    CEFBS_None, // CALLri = 259
    CEFBS_None, // CALLrr = 260
    CEFBS_None, // CASAasi10 = 261
    CEFBS_None, // CASArr = 262
    CEFBS_None, // CASXrr = 263
    CEFBS_HasV9, // CASrr = 264
    CEFBS_None, // CBCOND = 265
    CEFBS_None, // CBCONDA = 266
    CEFBS_HasVIS3, // CMASK16 = 267
    CEFBS_HasVIS3, // CMASK32 = 268
    CEFBS_HasVIS3, // CMASK8 = 269
    CEFBS_None, // CMPri = 270
    CEFBS_None, // CMPrr = 271
    CEFBS_HasVIS, // EDGE16 = 272
    CEFBS_HasVIS, // EDGE16L = 273
    CEFBS_HasVIS2, // EDGE16LN = 274
    CEFBS_HasVIS2, // EDGE16N = 275
    CEFBS_HasVIS, // EDGE32 = 276
    CEFBS_HasVIS, // EDGE32L = 277
    CEFBS_HasVIS2, // EDGE32LN = 278
    CEFBS_HasVIS2, // EDGE32N = 279
    CEFBS_HasVIS, // EDGE8 = 280
    CEFBS_HasVIS, // EDGE8L = 281
    CEFBS_HasVIS2, // EDGE8LN = 282
    CEFBS_HasVIS2, // EDGE8N = 283
    CEFBS_HasV9, // FABSD = 284
    CEFBS_HasV9, // FABSQ = 285
    CEFBS_None, // FABSS = 286
    CEFBS_None, // FADDD = 287
    CEFBS_None, // FADDQ = 288
    CEFBS_None, // FADDS = 289
    CEFBS_HasVIS, // FALIGNADATA = 290
    CEFBS_HasVIS, // FAND = 291
    CEFBS_HasVIS, // FANDNOT1 = 292
    CEFBS_HasVIS, // FANDNOT1S = 293
    CEFBS_HasVIS, // FANDNOT2 = 294
    CEFBS_HasVIS, // FANDNOT2S = 295
    CEFBS_HasVIS, // FANDS = 296
    CEFBS_None, // FBCOND = 297
    CEFBS_None, // FBCONDA = 298
    CEFBS_HasVIS3, // FCHKSM16 = 299
    CEFBS_None, // FCMPD = 300
    CEFBS_HasVIS, // FCMPEQ16 = 301
    CEFBS_HasVIS, // FCMPEQ32 = 302
    CEFBS_HasVIS, // FCMPGT16 = 303
    CEFBS_HasVIS, // FCMPGT32 = 304
    CEFBS_HasVIS, // FCMPLE16 = 305
    CEFBS_HasVIS, // FCMPLE32 = 306
    CEFBS_HasVIS, // FCMPNE16 = 307
    CEFBS_HasVIS, // FCMPNE32 = 308
    CEFBS_None, // FCMPQ = 309
    CEFBS_None, // FCMPS = 310
    CEFBS_None, // FDIVD = 311
    CEFBS_None, // FDIVQ = 312
    CEFBS_None, // FDIVS = 313
    CEFBS_None, // FDMULQ = 314
    CEFBS_None, // FDTOI = 315
    CEFBS_None, // FDTOQ = 316
    CEFBS_None, // FDTOS = 317
    CEFBS_None, // FDTOX = 318
    CEFBS_HasVIS, // FEXPAND = 319
    CEFBS_HasVIS3, // FHADDD = 320
    CEFBS_HasVIS3, // FHADDS = 321
    CEFBS_HasVIS3, // FHSUBD = 322
    CEFBS_HasVIS3, // FHSUBS = 323
    CEFBS_None, // FITOD = 324
    CEFBS_None, // FITOQ = 325
    CEFBS_None, // FITOS = 326
    CEFBS_HasVIS3, // FLCMPD = 327
    CEFBS_HasVIS3, // FLCMPS = 328
    CEFBS_None, // FLUSH = 329
    CEFBS_HasV9, // FLUSHW = 330
    CEFBS_None, // FLUSHri = 331
    CEFBS_None, // FLUSHrr = 332
    CEFBS_HasVIS3, // FMEAN16 = 333
    CEFBS_HasV9, // FMOVD = 334
    CEFBS_HasV9, // FMOVD_FCC = 335
    CEFBS_HasV9, // FMOVD_ICC = 336
    CEFBS_None, // FMOVD_XCC = 337
    CEFBS_HasV9, // FMOVQ = 338
    CEFBS_HasV9, // FMOVQ_FCC = 339
    CEFBS_HasV9, // FMOVQ_ICC = 340
    CEFBS_None, // FMOVQ_XCC = 341
    CEFBS_HasV9, // FMOVRGEZD = 342
    CEFBS_HasV9, // FMOVRGEZQ = 343
    CEFBS_HasV9, // FMOVRGEZS = 344
    CEFBS_HasV9, // FMOVRGZD = 345
    CEFBS_HasV9, // FMOVRGZQ = 346
    CEFBS_HasV9, // FMOVRGZS = 347
    CEFBS_HasV9, // FMOVRLEZD = 348
    CEFBS_HasV9, // FMOVRLEZQ = 349
    CEFBS_HasV9, // FMOVRLEZS = 350
    CEFBS_HasV9, // FMOVRLZD = 351
    CEFBS_HasV9, // FMOVRLZQ = 352
    CEFBS_HasV9, // FMOVRLZS = 353
    CEFBS_HasV9, // FMOVRNZD = 354
    CEFBS_HasV9, // FMOVRNZQ = 355
    CEFBS_HasV9, // FMOVRNZS = 356
    CEFBS_HasV9, // FMOVRZD = 357
    CEFBS_HasV9, // FMOVRZQ = 358
    CEFBS_HasV9, // FMOVRZS = 359
    CEFBS_None, // FMOVS = 360
    CEFBS_HasV9, // FMOVS_FCC = 361
    CEFBS_HasV9, // FMOVS_ICC = 362
    CEFBS_None, // FMOVS_XCC = 363
    CEFBS_HasVIS, // FMUL8SUX16 = 364
    CEFBS_HasVIS, // FMUL8ULX16 = 365
    CEFBS_HasVIS, // FMUL8X16 = 366
    CEFBS_HasVIS, // FMUL8X16AL = 367
    CEFBS_HasVIS, // FMUL8X16AU = 368
    CEFBS_None, // FMULD = 369
    CEFBS_HasVIS, // FMULD8SUX16 = 370
    CEFBS_HasVIS, // FMULD8ULX16 = 371
    CEFBS_None, // FMULQ = 372
    CEFBS_None, // FMULS = 373
    CEFBS_HasVIS3, // FNADDD = 374
    CEFBS_HasVIS3, // FNADDS = 375
    CEFBS_HasVIS, // FNAND = 376
    CEFBS_HasVIS, // FNANDS = 377
    CEFBS_HasV9, // FNEGD = 378
    CEFBS_HasV9, // FNEGQ = 379
    CEFBS_None, // FNEGS = 380
    CEFBS_HasVIS3, // FNHADDD = 381
    CEFBS_HasVIS3, // FNHADDS = 382
    CEFBS_HasVIS3, // FNMULD = 383
    CEFBS_HasVIS3, // FNMULS = 384
    CEFBS_HasVIS, // FNOR = 385
    CEFBS_HasVIS, // FNORS = 386
    CEFBS_HasVIS, // FNOT1 = 387
    CEFBS_HasVIS, // FNOT1S = 388
    CEFBS_HasVIS, // FNOT2 = 389
    CEFBS_HasVIS, // FNOT2S = 390
    CEFBS_HasVIS3, // FNSMULD = 391
    CEFBS_HasVIS, // FONE = 392
    CEFBS_HasVIS, // FONES = 393
    CEFBS_HasVIS, // FOR = 394
    CEFBS_HasVIS, // FORNOT1 = 395
    CEFBS_HasVIS, // FORNOT1S = 396
    CEFBS_HasVIS, // FORNOT2 = 397
    CEFBS_HasVIS, // FORNOT2S = 398
    CEFBS_HasVIS, // FORS = 399
    CEFBS_HasVIS, // FPACK16 = 400
    CEFBS_HasVIS, // FPACK32 = 401
    CEFBS_HasVIS, // FPACKFIX = 402
    CEFBS_HasVIS, // FPADD16 = 403
    CEFBS_HasVIS, // FPADD16S = 404
    CEFBS_HasVIS, // FPADD32 = 405
    CEFBS_HasVIS, // FPADD32S = 406
    CEFBS_HasVIS3, // FPADD64 = 407
    CEFBS_HasVIS, // FPMERGE = 408
    CEFBS_HasVIS, // FPSUB16 = 409
    CEFBS_HasVIS, // FPSUB16S = 410
    CEFBS_HasVIS, // FPSUB32 = 411
    CEFBS_HasVIS, // FPSUB32S = 412
    CEFBS_None, // FQTOD = 413
    CEFBS_None, // FQTOI = 414
    CEFBS_None, // FQTOS = 415
    CEFBS_None, // FQTOX = 416
    CEFBS_HasVIS3, // FSLAS16 = 417
    CEFBS_HasVIS3, // FSLAS32 = 418
    CEFBS_HasVIS3, // FSLL16 = 419
    CEFBS_HasVIS3, // FSLL32 = 420
    CEFBS_None, // FSMULD = 421
    CEFBS_None, // FSQRTD = 422
    CEFBS_None, // FSQRTQ = 423
    CEFBS_None, // FSQRTS = 424
    CEFBS_HasVIS3, // FSRA16 = 425
    CEFBS_HasVIS3, // FSRA32 = 426
    CEFBS_HasVIS, // FSRC1 = 427
    CEFBS_HasVIS, // FSRC1S = 428
    CEFBS_HasVIS, // FSRC2 = 429
    CEFBS_HasVIS, // FSRC2S = 430
    CEFBS_HasVIS3, // FSRL16 = 431
    CEFBS_HasVIS3, // FSRL32 = 432
    CEFBS_None, // FSTOD = 433
    CEFBS_None, // FSTOI = 434
    CEFBS_None, // FSTOQ = 435
    CEFBS_None, // FSTOX = 436
    CEFBS_None, // FSUBD = 437
    CEFBS_None, // FSUBQ = 438
    CEFBS_None, // FSUBS = 439
    CEFBS_HasVIS, // FXNOR = 440
    CEFBS_HasVIS, // FXNORS = 441
    CEFBS_HasVIS, // FXOR = 442
    CEFBS_HasVIS, // FXORS = 443
    CEFBS_None, // FXTOD = 444
    CEFBS_None, // FXTOQ = 445
    CEFBS_None, // FXTOS = 446
    CEFBS_HasVIS, // FZERO = 447
    CEFBS_HasVIS, // FZEROS = 448
    CEFBS_None, // JMPLri = 449
    CEFBS_None, // JMPLrr = 450
    CEFBS_None, // LDArr = 451
    CEFBS_None, // LDCSRri = 452
    CEFBS_None, // LDCSRrr = 453
    CEFBS_None, // LDCri = 454
    CEFBS_None, // LDCrr = 455
    CEFBS_None, // LDDArr = 456
    CEFBS_None, // LDDCri = 457
    CEFBS_None, // LDDCrr = 458
    CEFBS_HasV9, // LDDFArr = 459
    CEFBS_None, // LDDFri = 460
    CEFBS_None, // LDDFrr = 461
    CEFBS_None, // LDDri = 462
    CEFBS_None, // LDDrr = 463
    CEFBS_HasV9, // LDFArr = 464
    CEFBS_None, // LDFSRri = 465
    CEFBS_None, // LDFSRrr = 466
    CEFBS_None, // LDFri = 467
    CEFBS_None, // LDFrr = 468
    CEFBS_HasV9, // LDQFArr = 469
    CEFBS_HasV9, // LDQFri = 470
    CEFBS_HasV9, // LDQFrr = 471
    CEFBS_None, // LDSBArr = 472
    CEFBS_None, // LDSBri = 473
    CEFBS_None, // LDSBrr = 474
    CEFBS_None, // LDSHArr = 475
    CEFBS_None, // LDSHri = 476
    CEFBS_None, // LDSHrr = 477
    CEFBS_None, // LDSTUBArr = 478
    CEFBS_None, // LDSTUBri = 479
    CEFBS_None, // LDSTUBrr = 480
    CEFBS_None, // LDSWri = 481
    CEFBS_None, // LDSWrr = 482
    CEFBS_None, // LDUBArr = 483
    CEFBS_None, // LDUBri = 484
    CEFBS_None, // LDUBrr = 485
    CEFBS_None, // LDUHArr = 486
    CEFBS_None, // LDUHri = 487
    CEFBS_None, // LDUHrr = 488
    CEFBS_HasV9, // LDXFSRri = 489
    CEFBS_HasV9, // LDXFSRrr = 490
    CEFBS_None, // LDXri = 491
    CEFBS_None, // LDXrr = 492
    CEFBS_None, // LDri = 493
    CEFBS_None, // LDrr = 494
    CEFBS_None, // LEAX_ADDri = 495
    CEFBS_None, // LEA_ADDri = 496
    CEFBS_HasVIS3, // LZCNT = 497
    CEFBS_HasV9, // MEMBARi = 498
    CEFBS_HasVIS3, // MOVDTOX = 499
    CEFBS_HasV9, // MOVFCCri = 500
    CEFBS_HasV9, // MOVFCCrr = 501
    CEFBS_HasV9, // MOVICCri = 502
    CEFBS_HasV9, // MOVICCrr = 503
    CEFBS_None, // MOVRGEZri = 504
    CEFBS_None, // MOVRGEZrr = 505
    CEFBS_None, // MOVRGZri = 506
    CEFBS_None, // MOVRGZrr = 507
    CEFBS_None, // MOVRLEZri = 508
    CEFBS_None, // MOVRLEZrr = 509
    CEFBS_None, // MOVRLZri = 510
    CEFBS_None, // MOVRLZrr = 511
    CEFBS_None, // MOVRNZri = 512
    CEFBS_None, // MOVRNZrr = 513
    CEFBS_None, // MOVRRZri = 514
    CEFBS_None, // MOVRRZrr = 515
    CEFBS_HasVIS3, // MOVSTOSW = 516
    CEFBS_HasVIS3, // MOVSTOUW = 517
    CEFBS_HasVIS3, // MOVWTOS = 518
    CEFBS_None, // MOVXCCri = 519
    CEFBS_None, // MOVXCCrr = 520
    CEFBS_HasVIS3, // MOVXTOD = 521
    CEFBS_None, // MULSCCri = 522
    CEFBS_None, // MULSCCrr = 523
    CEFBS_None, // MULXri = 524
    CEFBS_None, // MULXrr = 525
    CEFBS_None, // NOP = 526
    CEFBS_None, // ORCCri = 527
    CEFBS_None, // ORCCrr = 528
    CEFBS_None, // ORNCCri = 529
    CEFBS_None, // ORNCCrr = 530
    CEFBS_None, // ORNri = 531
    CEFBS_None, // ORNrr = 532
    CEFBS_None, // ORXNrr = 533
    CEFBS_None, // ORXri = 534
    CEFBS_None, // ORXrr = 535
    CEFBS_None, // ORri = 536
    CEFBS_None, // ORrr = 537
    CEFBS_HasVIS, // PDIST = 538
    CEFBS_HasVIS3, // PDISTN = 539
    CEFBS_HasV9, // POPCrr = 540
    CEFBS_HasPWRPSR, // PWRPSRri = 541
    CEFBS_HasPWRPSR, // PWRPSRrr = 542
    CEFBS_None, // RDASR = 543
    CEFBS_HasV9, // RDPR = 544
    CEFBS_None, // RDPSR = 545
    CEFBS_None, // RDTBR = 546
    CEFBS_None, // RDWIM = 547
    CEFBS_None, // RESTOREri = 548
    CEFBS_None, // RESTORErr = 549
    CEFBS_None, // RET = 550
    CEFBS_None, // RETL = 551
    CEFBS_None, // RETTri = 552
    CEFBS_None, // RETTrr = 553
    CEFBS_None, // SAVEri = 554
    CEFBS_None, // SAVErr = 555
    CEFBS_None, // SDIVCCri = 556
    CEFBS_None, // SDIVCCrr = 557
    CEFBS_None, // SDIVXri = 558
    CEFBS_None, // SDIVXrr = 559
    CEFBS_None, // SDIVri = 560
    CEFBS_None, // SDIVrr = 561
    CEFBS_None, // SETHIXi = 562
    CEFBS_None, // SETHIi = 563
    CEFBS_HasVIS, // SHUTDOWN = 564
    CEFBS_HasVIS2, // SIAM = 565
    CEFBS_None, // SLLXri = 566
    CEFBS_None, // SLLXrr = 567
    CEFBS_None, // SLLri = 568
    CEFBS_None, // SLLrr = 569
    CEFBS_None, // SMACri = 570
    CEFBS_None, // SMACrr = 571
    CEFBS_None, // SMULCCri = 572
    CEFBS_None, // SMULCCrr = 573
    CEFBS_None, // SMULri = 574
    CEFBS_None, // SMULrr = 575
    CEFBS_None, // SRAXri = 576
    CEFBS_None, // SRAXrr = 577
    CEFBS_None, // SRAri = 578
    CEFBS_None, // SRArr = 579
    CEFBS_None, // SRLXri = 580
    CEFBS_None, // SRLXrr = 581
    CEFBS_None, // SRLri = 582
    CEFBS_None, // SRLrr = 583
    CEFBS_None, // STArr = 584
    CEFBS_None, // STBAR = 585
    CEFBS_None, // STBArr = 586
    CEFBS_None, // STBri = 587
    CEFBS_None, // STBrr = 588
    CEFBS_None, // STCSRri = 589
    CEFBS_None, // STCSRrr = 590
    CEFBS_None, // STCri = 591
    CEFBS_None, // STCrr = 592
    CEFBS_None, // STDArr = 593
    CEFBS_None, // STDCQri = 594
    CEFBS_None, // STDCQrr = 595
    CEFBS_None, // STDCri = 596
    CEFBS_None, // STDCrr = 597
    CEFBS_HasV9, // STDFArr = 598
    CEFBS_None, // STDFQri = 599
    CEFBS_None, // STDFQrr = 600
    CEFBS_None, // STDFri = 601
    CEFBS_None, // STDFrr = 602
    CEFBS_None, // STDri = 603
    CEFBS_None, // STDrr = 604
    CEFBS_HasV9, // STFArr = 605
    CEFBS_None, // STFSRri = 606
    CEFBS_None, // STFSRrr = 607
    CEFBS_None, // STFri = 608
    CEFBS_None, // STFrr = 609
    CEFBS_None, // STHArr = 610
    CEFBS_None, // STHri = 611
    CEFBS_None, // STHrr = 612
    CEFBS_HasV9, // STQFArr = 613
    CEFBS_HasV9, // STQFri = 614
    CEFBS_HasV9, // STQFrr = 615
    CEFBS_HasV9, // STXFSRri = 616
    CEFBS_HasV9, // STXFSRrr = 617
    CEFBS_None, // STXri = 618
    CEFBS_None, // STXrr = 619
    CEFBS_None, // STri = 620
    CEFBS_None, // STrr = 621
    CEFBS_None, // SUBCCri = 622
    CEFBS_None, // SUBCCrr = 623
    CEFBS_None, // SUBCri = 624
    CEFBS_None, // SUBCrr = 625
    CEFBS_None, // SUBEri = 626
    CEFBS_None, // SUBErr = 627
    CEFBS_None, // SUBXri = 628
    CEFBS_None, // SUBXrr = 629
    CEFBS_None, // SUBri = 630
    CEFBS_None, // SUBrr = 631
    CEFBS_None, // SWAPArr = 632
    CEFBS_None, // SWAPri = 633
    CEFBS_None, // SWAPrr = 634
    CEFBS_None, // TA1 = 635
    CEFBS_None, // TA3 = 636
    CEFBS_None, // TA5 = 637
    CEFBS_None, // TADDCCTVri = 638
    CEFBS_None, // TADDCCTVrr = 639
    CEFBS_None, // TADDCCri = 640
    CEFBS_None, // TADDCCrr = 641
    CEFBS_HasV9, // TICCri = 642
    CEFBS_HasV9, // TICCrr = 643
    CEFBS_None, // TLS_ADDXrr = 644
    CEFBS_None, // TLS_ADDrr = 645
    CEFBS_None, // TLS_CALL = 646
    CEFBS_None, // TLS_LDXrr = 647
    CEFBS_None, // TLS_LDrr = 648
    CEFBS_None, // TRAPri = 649
    CEFBS_None, // TRAPrr = 650
    CEFBS_None, // TSUBCCTVri = 651
    CEFBS_None, // TSUBCCTVrr = 652
    CEFBS_None, // TSUBCCri = 653
    CEFBS_None, // TSUBCCrr = 654
    CEFBS_None, // TXCCri = 655
    CEFBS_None, // TXCCrr = 656
    CEFBS_None, // UDIVCCri = 657
    CEFBS_None, // UDIVCCrr = 658
    CEFBS_None, // UDIVXri = 659
    CEFBS_None, // UDIVXrr = 660
    CEFBS_None, // UDIVri = 661
    CEFBS_None, // UDIVrr = 662
    CEFBS_None, // UMACri = 663
    CEFBS_None, // UMACrr = 664
    CEFBS_None, // UMULCCri = 665
    CEFBS_None, // UMULCCrr = 666
    CEFBS_HasVIS3, // UMULXHI = 667
    CEFBS_None, // UMULri = 668
    CEFBS_None, // UMULrr = 669
    CEFBS_None, // UNIMP = 670
    CEFBS_None, // V9FCMPD = 671
    CEFBS_None, // V9FCMPED = 672
    CEFBS_None, // V9FCMPEQ = 673
    CEFBS_None, // V9FCMPES = 674
    CEFBS_None, // V9FCMPQ = 675
    CEFBS_None, // V9FCMPS = 676
    CEFBS_HasV9, // V9FMOVD_FCC = 677
    CEFBS_HasV9, // V9FMOVQ_FCC = 678
    CEFBS_HasV9, // V9FMOVS_FCC = 679
    CEFBS_HasV9, // V9MOVFCCri = 680
    CEFBS_HasV9, // V9MOVFCCrr = 681
    CEFBS_None, // WRASRri = 682
    CEFBS_None, // WRASRrr = 683
    CEFBS_HasV9, // WRPRri = 684
    CEFBS_HasV9, // WRPRrr = 685
    CEFBS_None, // WRPSRri = 686
    CEFBS_None, // WRPSRrr = 687
    CEFBS_None, // WRTBRri = 688
    CEFBS_None, // WRTBRrr = 689
    CEFBS_None, // WRWIMri = 690
    CEFBS_None, // WRWIMrr = 691
    CEFBS_HasVIS3, // XMULX = 692
    CEFBS_HasVIS3, // XMULXHI = 693
    CEFBS_None, // XNORCCri = 694
    CEFBS_None, // XNORCCrr = 695
    CEFBS_None, // XNORXrr = 696
    CEFBS_None, // XNORri = 697
    CEFBS_None, // XNORrr = 698
    CEFBS_None, // XORCCri = 699
    CEFBS_None, // XORCCrr = 700
    CEFBS_None, // XORXri = 701
    CEFBS_None, // XORXrr = 702
    CEFBS_None, // XORri = 703
    CEFBS_None, // XORrr = 704
  };

  assert(Inst.getOpcode() < 705);
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

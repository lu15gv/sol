/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Subtarget Enumeration Source Fragment                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM

namespace llvm {
namespace Hexagon {
enum {
  ArchV5 = 0,
  ArchV55 = 1,
  ArchV60 = 2,
  ArchV62 = 3,
  ArchV65 = 4,
  ArchV66 = 5,
  ExtensionHVX = 6,
  ExtensionHVX64B = 7,
  ExtensionHVX128B = 8,
  ExtensionHVXV60 = 9,
  ExtensionHVXV62 = 10,
  ExtensionHVXV65 = 11,
  ExtensionHVXV66 = 12,
  ExtensionZReg = 13,
  FeatureDuplex = 14,
  FeatureLongCalls = 15,
  FeatureMemNoShuf = 16,
  FeatureMemops = 17,
  FeatureNVJ = 18,
  FeatureNVS = 19,
  FeatureNoreturnStackElim = 20,
  FeaturePackets = 21,
  FeatureReservedR19 = 22,
  FeatureSmallData = 23,
  NumSubtargetFeatures = 24
};
} // end namespace Hexagon
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[] = {
  { "duplex", "Enable generation of duplex instruction", Hexagon::FeatureDuplex, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvx", "Hexagon HVX instructions", Hexagon::ExtensionHVX, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvx-length128b", "Hexagon HVX 128B instructions", Hexagon::ExtensionHVX128B, { { { 0x40ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvx-length64b", "Hexagon HVX 64B instructions", Hexagon::ExtensionHVX64B, { { { 0x40ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv60", "Hexagon HVX instructions", Hexagon::ExtensionHVXV60, { { { 0x40ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv62", "Hexagon HVX instructions", Hexagon::ExtensionHVXV62, { { { 0x240ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv65", "Hexagon HVX instructions", Hexagon::ExtensionHVXV65, { { { 0x640ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv66", "Hexagon HVX instructions", Hexagon::ExtensionHVXV66, { { { 0x2e40ULL, 0x0ULL, 0x0ULL, } } } },
  { "long-calls", "Use constant-extended calls", Hexagon::FeatureLongCalls, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "mem_noshuf", "Supports mem_noshuf feature", Hexagon::FeatureMemNoShuf, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "memops", "Use memop instructions", Hexagon::FeatureMemops, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "noreturn-stack-elim", "Eliminate stack allocation in a noreturn function when possible", Hexagon::FeatureNoreturnStackElim, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "nvj", "Support for new-value jumps", Hexagon::FeatureNVJ, { { { 0x200000ULL, 0x0ULL, 0x0ULL, } } } },
  { "nvs", "Support for new-value stores", Hexagon::FeatureNVS, { { { 0x200000ULL, 0x0ULL, 0x0ULL, } } } },
  { "packets", "Support for instruction packets", Hexagon::FeaturePackets, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "reserved-r19", "Reserve register R19", Hexagon::FeatureReservedR19, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "small-data", "Allow GP-relative addressing of global variables", Hexagon::FeatureSmallData, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v5", "Enable Hexagon V5 architecture", Hexagon::ArchV5, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v55", "Enable Hexagon V55 architecture", Hexagon::ArchV55, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v60", "Enable Hexagon V60 architecture", Hexagon::ArchV60, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v62", "Enable Hexagon V62 architecture", Hexagon::ArchV62, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v65", "Enable Hexagon V65 architecture", Hexagon::ArchV65, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v66", "Enable Hexagon V66 architecture", Hexagon::ArchV66, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "zreg", "Hexagon ZReg extension instructions", Hexagon::ExtensionZReg, { { { 0x0ULL, 0x0ULL, 0x0ULL, } } } },
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#if !defined(NDEBUG) || defined(LLVM_ENABLE_DUMP)
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "HexagonItinerariesV60"
namespace HexagonItinerariesV60FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
  const unsigned CVI_ST = 1 << 5;
  const unsigned CVI_XLANE = 1 << 6;
  const unsigned CVI_SHIFT = 1 << 7;
  const unsigned CVI_MPY0 = 1 << 8;
  const unsigned CVI_MPY1 = 1 << 9;
  const unsigned CVI_LD = 1 << 10;
  const unsigned CVI_XLSHF = 1 << 11;
  const unsigned CVI_MPY01 = 1 << 12;
  const unsigned CVI_ALL = 1 << 13;
  const unsigned CVI_ALL_NOMEM = 1 << 14;
  const unsigned CVI_ZW = 1 << 15;
} // end namespace HexagonItinerariesV60FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV60"
namespace HexagonItinerariesV60Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV60Bypass

// Functional units for "HexagonItinerariesV5"
namespace HexagonItinerariesV5FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
} // end namespace HexagonItinerariesV5FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV5"
namespace HexagonItinerariesV5Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
} // end namespace HexagonItinerariesV5Bypass

// Functional units for "HexagonItinerariesV55"
namespace HexagonItinerariesV55FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
} // end namespace HexagonItinerariesV55FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV55"
namespace HexagonItinerariesV55Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
} // end namespace HexagonItinerariesV55Bypass

// Functional units for "HexagonItinerariesV62"
namespace HexagonItinerariesV62FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
  const unsigned CVI_ST = 1 << 5;
  const unsigned CVI_XLANE = 1 << 6;
  const unsigned CVI_SHIFT = 1 << 7;
  const unsigned CVI_MPY0 = 1 << 8;
  const unsigned CVI_MPY1 = 1 << 9;
  const unsigned CVI_LD = 1 << 10;
  const unsigned CVI_XLSHF = 1 << 11;
  const unsigned CVI_MPY01 = 1 << 12;
  const unsigned CVI_ALL = 1 << 13;
  const unsigned CVI_ALL_NOMEM = 1 << 14;
  const unsigned CVI_ZW = 1 << 15;
} // end namespace HexagonItinerariesV62FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV62"
namespace HexagonItinerariesV62Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV62Bypass

// Functional units for "HexagonItinerariesV65"
namespace HexagonItinerariesV65FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
  const unsigned CVI_ST = 1 << 5;
  const unsigned CVI_XLANE = 1 << 6;
  const unsigned CVI_SHIFT = 1 << 7;
  const unsigned CVI_MPY0 = 1 << 8;
  const unsigned CVI_MPY1 = 1 << 9;
  const unsigned CVI_LD = 1 << 10;
  const unsigned CVI_XLSHF = 1 << 11;
  const unsigned CVI_MPY01 = 1 << 12;
  const unsigned CVI_ALL = 1 << 13;
  const unsigned CVI_ALL_NOMEM = 1 << 14;
  const unsigned CVI_ZW = 1 << 15;
} // end namespace HexagonItinerariesV65FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV65"
namespace HexagonItinerariesV65Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV65Bypass

// Functional units for "HexagonItinerariesV66"
namespace HexagonItinerariesV66FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
  const unsigned CVI_ST = 1 << 5;
  const unsigned CVI_XLANE = 1 << 6;
  const unsigned CVI_SHIFT = 1 << 7;
  const unsigned CVI_MPY0 = 1 << 8;
  const unsigned CVI_MPY1 = 1 << 9;
  const unsigned CVI_LD = 1 << 10;
  const unsigned CVI_XLSHF = 1 << 11;
  const unsigned CVI_MPY01 = 1 << 12;
  const unsigned CVI_ALL = 1 << 13;
  const unsigned CVI_ALL_NOMEM = 1 << 14;
  const unsigned CVI_ZW = 1 << 15;
} // end namespace HexagonItinerariesV66FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV66"
namespace HexagonItinerariesV66Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV66Bypass

extern const llvm::InstrStage HexagonStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 1, HexagonItinerariesV60FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, HexagonItinerariesV60FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 1, HexagonItinerariesV60FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7-8
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 9-10
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11-13
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 14-15
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 16-18
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 19-20
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 21-22
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 23-26
  { 1, HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 27
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 28-29
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 30-31
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 32-33
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 34-37
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 38-39
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 40-43
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 44-45
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 46-47
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 48-49
  { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 50-52
  { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 53-55
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 56-57
  { 1, HexagonItinerariesV60FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 58-59
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 60-62
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 63-64
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 65-67
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 68-69
  { 1, HexagonItinerariesV5FU::SLOT2 | HexagonItinerariesV5FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 70
  { 1, HexagonItinerariesV5FU::SLOT0 | HexagonItinerariesV5FU::SLOT1 | HexagonItinerariesV5FU::SLOT2 | HexagonItinerariesV5FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 71
  { 1, HexagonItinerariesV5FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 72
  { 1, HexagonItinerariesV5FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 73
  { 1, HexagonItinerariesV5FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 74
  { 1, HexagonItinerariesV5FU::SLOT0 | HexagonItinerariesV5FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 75
  { 1, HexagonItinerariesV5FU::SLOT2 | HexagonItinerariesV5FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV5FU::SLOT2 | HexagonItinerariesV5FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 76-77
  { 1, HexagonItinerariesV5FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 78
  { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 79
  { 1, HexagonItinerariesV55FU::SLOT0 | HexagonItinerariesV55FU::SLOT1 | HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 80
  { 1, HexagonItinerariesV55FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 81
  { 1, HexagonItinerariesV55FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 82
  { 1, HexagonItinerariesV55FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 83
  { 1, HexagonItinerariesV55FU::SLOT0 | HexagonItinerariesV55FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 84
  { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 85-86
  { 1, HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 87
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 88
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 89
  { 1, HexagonItinerariesV62FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 90
  { 1, HexagonItinerariesV62FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 91
  { 1, HexagonItinerariesV62FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 92
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 93
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 94-95
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 96-97
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 98-100
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 101-102
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 103-105
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 106-107
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 108-109
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 110-113
  { 1, HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 114
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 115-116
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 117-118
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 119-120
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 121-124
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 125-126
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 127-130
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 131-132
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 133-134
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 135-136
  { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 137-139
  { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 140-142
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 143-144
  { 1, HexagonItinerariesV62FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 145-146
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 147-149
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 150-151
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 152-154
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 155-156
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 157
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 158
  { 1, HexagonItinerariesV65FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 159
  { 1, HexagonItinerariesV65FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 160
  { 1, HexagonItinerariesV65FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 161
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 162
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 163-164
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 165-166
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 167-169
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 170-171
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 172-174
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 175-176
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 177-178
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 179-182
  { 1, HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 183
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 184-185
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 186-187
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 188-189
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 190-193
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 194-195
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 196-199
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 200-201
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 202-203
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 204-205
  { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 206-208
  { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 209-211
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 212-213
  { 1, HexagonItinerariesV65FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 214-215
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 216-218
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 219-220
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 221-223
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 224-225
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 226
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 227
  { 1, HexagonItinerariesV66FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 228
  { 1, HexagonItinerariesV66FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 229
  { 1, HexagonItinerariesV66FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 230
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 231
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 232-233
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01 | HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 234-235
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 236-238
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 239-240
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 241-243
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLANE | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 244-245
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 246-247
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01 | HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 248-251
  { 1, HexagonItinerariesV66FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 252
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 253-254
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 255-256
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 257-258
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 259-262
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 263-264
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 265-268
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 269-270
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 271-272
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 273-274
  { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 275-277
  { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01 | HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 278-280
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 281-282
  { 1, HexagonItinerariesV66FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 283-284
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 285-287
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 288-289
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01 | HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 290-292
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 293-294
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned HexagonOperandCycles[] = {
  0, // No itinerary
  3,   2,   2, // 1-3
  1,   1,   1, // 4-6
  3,   2, // 7-8
  3,   2,   2,   2, // 9-12
  3,   3,   2,   2, // 13-16
  3,   2,   2, // 17-19
  3,   3,   2, // 20-22
  3,   2,   2, // 23-25
  3,   1,   1, // 26-28
  3,   1,   2, // 29-31
  3,   2,   2, // 32-34
  1,   1,   1, // 35-37
  2, // 38
  2,   2, // 39-40
  2,   1, // 41-42
  3,   2,   2, // 43-45
  4,   2,   1,   2, // 46-49
  4,   1,   2, // 50-52
  4,   3,   1,   2, // 53-56
  1,   2,   2, // 57-59
  1,   2,   2, // 60-62
  3,   2,   2, // 63-65
  3,   3,   2, // 66-68
  2, // 69
  3, // 70
  4,   2, // 71-72
  3,   2, // 73-74
  3,   1, // 75-76
  4,   1,   2, // 77-79
  4,   1,   1, // 80-82
  4,   2,   1,   1, // 83-86
  2, // 87
  4,   3,   1,   2,   2, // 88-92
  9,   7,   7, // 93-95
  3,   1,   2,   2,   2, // 96-100
  3,   1,   2,   2, // 101-104
  1, // 105
  9,   7,   7, // 106-108
  9,   1,   2, // 109-111
  1,   1,   1, // 112-114
  9,   2,   7, // 115-117
  1,   2,   7, // 118-120
  9,   2,   7,   7, // 121-124
  4,   2,   2, // 125-127
  2,   1,   2,   2, // 128-131
  2,   1,   2,   3, // 132-135
  1,   2,   2, // 136-138
  1,   2,   3, // 139-141
  4,   2,   2,   2,   2, // 142-146
  3,   1,   2,   3, // 147-150
  1,   2,   2, // 151-153
  2,   1,   2,   2, // 154-157
  3,   1,   2,   2, // 158-161
  4,   2,   2, // 162-164
  1,   1,   1, // 165-167
  9,   7,   7,   7, // 168-171
  9,   7, // 172-173
  9,   5,   5,   2, // 174-177
  9, // 178
  1, // 179
  4,   2, // 180-181
  4,   2,   2, // 182-184
  4,   2,   2, // 185-187
  4,   2,   2, // 188-190
  3,   2, // 191-192
  3,   2,   2, // 193-195
  3,   2,   2, // 196-198
  4,   2, // 199-200
  4,   1, // 201-202
  3,   2,   2, // 203-205
  3,   2,   2, // 206-208
  4,   4,   1,   1,   2, // 209-213
  3,   1,   2, // 214-216
  2, // 217
  4,   1,   1, // 218-220
  4,   1,   1,   2, // 221-224
  4,   4,   1,   1,   1, // 225-229
  3,   2,   2, // 230-232
  4,   4,   2,   2, // 233-236
  3,   2, // 237-238
  3,   1,   1, // 239-241
  3,   1, // 242-243
  3,   2,   2,   2, // 244-247
  4,   2, // 248-249
  3,   2,   2,   2, // 250-253
  5,   1, // 254-255
  5,   1,   1, // 256-258
  4,   2, // 259-260
  5,   1,   1, // 261-263
  5,   2,   1,   1, // 264-267
  5,   2,   1,   1,   2, // 268-272
  5,   5,   1, // 273-275
  4,   2,   2, // 276-278
  5,   5,   1,   1, // 279-282
  4,   2, // 283-284
  4,   1, // 285-286
  2,   2, // 287-288
  1, // 289
  2,   1, // 290-291
  2, // 292
  3,   2, // 293-294
  2,   2, // 295-296
  3,   1, // 297-298
  2,   1, // 299-300
  1,   2, // 301-302
  2,   2, // 303-304
  2,   1, // 305-306
  2, // 307
  2,   2, // 308-309
  2,   1, // 310-311
  2, // 312
  3,   2,   2, // 313-315
  1,   1,   2, // 316-318
  3,   2,   2, // 319-321
  1,   2,   2, // 322-324
  2,   3,   2, // 325-327
  3,   2,   2, // 328-330
  3,   2, // 331-332
  1,   2, // 333-334
  4,   3,   2,   1,   2, // 335-339
  4,   3,   2,   1,   2,   2, // 340-345
  4,   2, // 346-347
  4,   1, // 348-349
  4,   3,   3,   1,   2, // 350-354
  4,   3,   2,   2, // 355-358
  4,   2,   1,   2,   2, // 359-363
  4,   3,   2, // 364-366
  4,   1,   2,   2, // 367-370
  4,   1,   1,   2, // 371-374
  4,   2,   2, // 375-377
  4,   2,   1,   1,   2, // 378-382
  4,   3,   1,   1,   2, // 383-387
  1,   1,   2, // 388-390
  4,   2,   2,   2, // 391-394
  4,   2,   1,   2, // 395-398
  4,   2,   1,   1, // 399-402
  4,   2,   2,   2, // 403-406
  4,   2,   2,   1, // 407-410
  4,   2,   2, // 411-413
  2,   2, // 414-415
  2,   3, // 416-417
  4,   2, // 418-419
  4,   1,   1, // 420-422
  3,   2,   1,   2,   2, // 423-427
  3,   3,   1,   2,   2, // 428-432
  3,   2,   1,   2,   3, // 433-437
  3,   3,   1,   2,   3, // 438-442
  3,   1,   2,   2,   3, // 443-447
  4,   1,   1, // 448-450
  2,   2,   2, // 451-453
  2,   1,   1,   2,   2, // 454-458
  3,   2,   2, // 459-461
  3,   1,   1,   2,   2, // 462-466
  2,   2,   3, // 467-469
  2,   1,   1,   2,   3, // 470-474
  3,   2,   3, // 475-477
  3,   1,   1,   2,   3, // 478-482
  1,   1,   2,   2, // 483-486
  1,   2,   2,   2, // 487-490
  1,   1,   2,   3, // 491-494
  1,   2,   2,   3, // 495-498
  4,   1,   1,   2, // 499-502
  4,   2,   1,   1,   2, // 503-507
  4,   2, // 508-509
  4,   2,   2,   2, // 510-513
  3,   2, // 514-515
  3,   2,   2, // 516-518
  3,   2, // 519-520
  3, // 521
  3, // 522
  1,   2, // 523-524
  2, // 525
  1,   2, // 526-527
  4,   7,   1, // 528-530
  9,   2, // 531-532
  9,   2, // 533-534
  9,   1,   2, // 535-537
  9,   3,   1,   2, // 538-541
  9,   2,   1,   2, // 542-545
  9,   3,   2,   1,   2, // 546-550
  9,   3,   1,   2, // 551-554
  9,   1,   2, // 555-557
  9,   2,   1,   2, // 558-561
  9,   3,   2,   1,   2, // 562-566
  9,   3,   1,   2, // 567-570
  1,   2,   5, // 571-573
  2,   1,   2,   5, // 574-577
  3,   2,   1,   2,   5, // 578-582
  3,   1,   2,   5, // 583-586
  1,   2,   5, // 587-589
  2,   1,   2,   5, // 590-593
  3,   2,   1,   2,   5, // 594-598
  3,   1,   2,   5, // 599-602
  2,   1,   2,   7, // 603-606
  3,   2,   1,   2,   7, // 607-611
  7,   1,   2,   7, // 612-615
  3,   7,   1,   2,   7, // 616-620
  3,   1,   2,   7, // 621-624
  1,   2, // 625-626
  3,   1,   2, // 627-629
  9,   5,   5, // 630-632
  9,   7,   7,   7, // 633-636
  9,   9,   7,   7,   7, // 637-641
  9,   9,   7,   7, // 642-645
  9,   5,   5, // 646-648
  9,   5,   5, // 649-651
  9,   7,   5,   5, // 652-655
  9,   5,   5,   2, // 656-659
  9,   7,   2, // 660-662
  9,   7,   7,   2, // 663-666
  9,   5,   2, // 667-669
  9,   7,   5,   2, // 670-673
  9,   7,   5,   5, // 674-677
  9,   5, // 678-679
  9,   9,   5,   5,   2, // 680-684
  9,   5, // 685-686
  9,   5,   5, // 687-689
  9,   5,   5,   2, // 690-693
  9,   5,   2, // 694-696
  9,   7,   5,   2, // 697-700
  9,   5,   2, // 701-703
  9,   7,   5,   2, // 704-707
  1,   2,   7, // 708-710
  7,   1,   2,   7, // 711-714
  1,   2,   7, // 715-717
  7,   1,   2,   7, // 718-721
  3, // 722
  9,   5,   2, // 723-725
  9,   7,   5,   5,   2, // 726-730
  9,   5,   5,   2, // 731-734
  9,   5,   2, // 735-737
  9,   7,   5,   2, // 738-741
  9,   5,   2,   2, // 742-745
  9,   7,   5,   2,   2, // 746-750
  9,   5,   2, // 751-753
  9,   7,   5,   2, // 754-757
  9,   3,   5,   2, // 758-761
  9,   3,   7,   5,   2, // 762-766
  9,   5,   2, // 767-769
  9,   5,   5, // 770-772
  9,   7, // 773-774
  1,   2,   7,   7, // 775-778
  7,   1,   2,   7,   7, // 779-783
  1,   2,   7,   7, // 784-787
  7,   1,   2,   7,   7, // 788-792
  9,   7,   7,   7, // 793-796
  9,   5, // 797-798
  9,   7,   5, // 799-801
  2, // 802
  3,   2, // 803-804
  1,   2, // 805-806
  3,   1,   2, // 807-809
  2,   1,   2, // 810-812
  3,   2,   1,   2, // 813-816
  1, // 817
  1,   2, // 818-819
  1, // 820
  1, // 821
  1,   1, // 822-823
  1, // 824
  3,   2,   2, // 825-827
  1,   1,   1, // 828-830
  3,   2, // 831-832
  3,   2,   2,   2, // 833-836
  3,   3,   2,   2, // 837-840
  3,   2,   2, // 841-843
  3,   3,   2, // 844-846
  3,   2,   2, // 847-849
  3,   1,   1, // 850-852
  3,   1,   2, // 853-855
  3,   2,   2, // 856-858
  1,   1,   1, // 859-861
  2, // 862
  2,   2, // 863-864
  2,   1, // 865-866
  3,   2,   2, // 867-869
  4,   2,   1,   2, // 870-873
  4,   1,   2, // 874-876
  4,   3,   1,   2, // 877-880
  1,   2,   2, // 881-883
  1,   2,   2, // 884-886
  4,   2,   1, // 887-889
  4,   3,   1, // 890-892
  2, // 893
  3, // 894
  4,   2, // 895-896
  4,   2, // 897-898
  2,   1, // 899-900
  4,   1,   2, // 901-903
  4,   1,   1, // 904-906
  4,   2,   1,   1, // 907-910
  2, // 911
  4,   3,   1,   2,   2, // 912-916
  3,   1,   2,   2,   2, // 917-921
  3,   1,   2,   2, // 922-925
  1, // 926
  1,   1,   1, // 927-929
  4,   2,   2, // 930-932
  2,   1,   2,   2, // 933-936
  2,   1,   2,   3, // 937-940
  1,   2,   2, // 941-943
  1,   2,   3, // 944-946
  3,   2,   2,   2,   2, // 947-951
  3,   1,   2,   3, // 952-955
  1,   2,   2, // 956-958
  2,   1,   2,   2, // 959-962
  3,   1,   2,   2, // 963-966
  4,   2,   2, // 967-969
  1,   1,   1, // 970-972
  1, // 973
  4,   2, // 974-975
  4,   2,   2, // 976-978
  3,   2,   2, // 979-981
  4,   2,   2, // 982-984
  3,   2, // 985-986
  3,   2,   2, // 987-989
  4,   2,   2, // 990-992
  4,   2, // 993-994
  4,   1, // 995-996
  3,   2,   2, // 997-999
  4,   2,   2, // 1000-1002
  4,   4,   1,   1,   2, // 1003-1007
  3,   1,   2, // 1008-1010
  2, // 1011
  4,   1,   1, // 1012-1014
  4,   1,   1,   1, // 1015-1018
  4,   4,   1,   1,   1, // 1019-1023
  3,   2,   2, // 1024-1026
  4,   4,   2,   2, // 1027-1030
  3,   2, // 1031-1032
  3,   1,   1, // 1033-1035
  3,   1, // 1036-1037
  3,   2,   2,   2, // 1038-1041
  4,   2, // 1042-1043
  3,   2,   2,   2, // 1044-1047
  4,   1, // 1048-1049
  5,   1,   1, // 1050-1052
  4,   2, // 1053-1054
  4,   1,   1, // 1055-1057
  4,   1,   1,   1, // 1058-1061
  4,   1,   1,   1,   2, // 1062-1066
  4,   4,   1, // 1067-1069
  4,   1,   1, // 1070-1072
  4,   4,   1,   1, // 1073-1076
  4,   2, // 1077-1078
  4,   1, // 1079-1080
  2,   2, // 1081-1082
  1, // 1083
  2,   1, // 1084-1085
  2, // 1086
  3,   2, // 1087-1088
  2,   2, // 1089-1090
  3,   1, // 1091-1092
  2,   1, // 1093-1094
  1,   2, // 1095-1096
  2,   2, // 1097-1098
  2,   1, // 1099-1100
  2, // 1101
  2,   2, // 1102-1103
  2,   1, // 1104-1105
  2, // 1106
  3,   1,   2, // 1107-1109
  1,   1,   2, // 1110-1112
  3,   2,   2, // 1113-1115
  1,   2,   2, // 1116-1118
  1,   3,   2, // 1119-1121
  3,   2,   2, // 1122-1124
  3,   2, // 1125-1126
  1,   2, // 1127-1128
  4,   3,   2,   1,   2, // 1129-1133
  4,   3,   2,   1,   2,   2, // 1134-1139
  4,   2, // 1140-1141
  4,   1, // 1142-1143
  4,   3,   3,   1,   2, // 1144-1148
  4,   3,   2,   2, // 1149-1152
  4,   2,   1,   2,   2, // 1153-1157
  4,   3,   2, // 1158-1160
  4,   1,   2,   2, // 1161-1164
  4,   1,   1,   2, // 1165-1168
  4,   2,   2, // 1169-1171
  4,   2,   1,   1,   2, // 1172-1176
  4,   3,   1,   1,   2, // 1177-1181
  1,   1,   2, // 1182-1184
  4,   2,   2,   2, // 1185-1188
  4,   2,   1,   2, // 1189-1192
  4,   2,   1,   1, // 1193-1196
  3,   2,   2,   2, // 1197-1200
  4,   2,   2,   1, // 1201-1204
  4,   2,   2, // 1205-1207
  2,   2, // 1208-1209
  2,   3, // 1210-1211
  3,   2, // 1212-1213
  4,   1,   1, // 1214-1216
  3,   2,   1,   2,   2, // 1217-1221
  3,   3,   1,   2,   2, // 1222-1226
  3,   2,   1,   2,   3, // 1227-1231
  3,   3,   1,   2,   3, // 1232-1236
  3,   1,   2,   2,   3, // 1237-1241
  4,   1,   1, // 1242-1244
  2,   2,   2, // 1245-1247
  2,   1,   1,   2,   2, // 1248-1252
  3,   2,   2, // 1253-1255
  3,   1,   1,   2,   2, // 1256-1260
  2,   2,   3, // 1261-1263
  2,   1,   1,   2,   3, // 1264-1268
  3,   2,   3, // 1269-1271
  3,   1,   1,   2,   3, // 1272-1276
  1,   1,   2,   2, // 1277-1280
  1,   2,   2,   2, // 1281-1284
  1,   1,   2,   3, // 1285-1288
  1,   2,   2,   3, // 1289-1292
  4,   1,   1,   2, // 1293-1296
  4,   2,   1,   1,   2, // 1297-1301
  4,   2, // 1302-1303
  4,   2,   2,   2, // 1304-1307
  3,   2, // 1308-1309
  3,   2,   2, // 1310-1312
  3,   2, // 1313-1314
  3, // 1315
  3, // 1316
  1,   2, // 1317-1318
  2, // 1319
  1,   2, // 1320-1321
  1, // 1322
  1,   2, // 1323-1324
  1, // 1325
  1, // 1326
  1,   1, // 1327-1328
  1, // 1329
  4,   2,   2, // 1330-1332
  1,   1,   1, // 1333-1335
  3,   2, // 1336-1337
  3,   2,   2,   2, // 1338-1341
  3,   3,   2,   2, // 1342-1345
  3,   2,   2, // 1346-1348
  3,   3,   2, // 1349-1351
  3,   2,   2, // 1352-1354
  3,   1,   1, // 1355-1357
  3,   1,   2, // 1358-1360
  3,   2,   2, // 1361-1363
  1,   1,   1, // 1364-1366
  2, // 1367
  2,   2, // 1368-1369
  2,   1, // 1370-1371
  3,   2,   2, // 1372-1374
  4,   2,   1,   2, // 1375-1378
  4,   1,   2, // 1379-1381
  4,   3,   1,   2, // 1382-1385
  1,   2,   2, // 1386-1388
  1,   2,   2, // 1389-1391
  3,   2,   2, // 1392-1394
  3,   3,   2, // 1395-1397
  2, // 1398
  3, // 1399
  4,   2, // 1400-1401
  3,   2, // 1402-1403
  3,   1, // 1404-1405
  4,   1,   2, // 1406-1408
  4,   1,   1, // 1409-1411
  4,   2,   1,   1, // 1412-1415
  2, // 1416
  4,   3,   1,   2,   2, // 1417-1421
  9,   7,   7, // 1422-1424
  3,   1,   2,   2,   2, // 1425-1429
  3,   1,   2,   2, // 1430-1433
  1, // 1434
  9,   7,   7, // 1435-1437
  9,   1,   2, // 1438-1440
  1,   1,   1, // 1441-1443
  9,   2,   7, // 1444-1446
  1,   2,   7, // 1447-1449
  9,   2,   7,   7, // 1450-1453
  4,   2,   2, // 1454-1456
  2,   1,   2,   2, // 1457-1460
  2,   1,   2,   3, // 1461-1464
  1,   2,   2, // 1465-1467
  1,   2,   3, // 1468-1470
  4,   2,   2,   2,   2, // 1471-1475
  3,   1,   2,   3, // 1476-1479
  1,   2,   2, // 1480-1482
  2,   1,   2,   2, // 1483-1486
  3,   1,   2,   2, // 1487-1490
  4,   2,   2, // 1491-1493
  1,   1,   1, // 1494-1496
  9,   7,   7,   7, // 1497-1500
  9,   7, // 1501-1502
  9,   5,   5,   2, // 1503-1506
  9, // 1507
  1, // 1508
  4,   2, // 1509-1510
  4,   2,   2, // 1511-1513
  4,   2,   2, // 1514-1516
  4,   2,   2, // 1517-1519
  3,   2, // 1520-1521
  3,   2,   2, // 1522-1524
  3,   2,   2, // 1525-1527
  4,   2, // 1528-1529
  4,   1, // 1530-1531
  3,   2,   2, // 1532-1534
  3,   2,   2, // 1535-1537
  3,   4,   2,   2,   2, // 1538-1542
  3,   1,   2, // 1543-1545
  2, // 1546
  4,   1,   1, // 1547-1549
  4,   1,   1,   2, // 1550-1553
  4,   4,   2,   1,   1, // 1554-1558
  3,   2,   2, // 1559-1561
  4,   4,   2,   2, // 1562-1565
  3,   2, // 1566-1567
  3,   1,   1, // 1568-1570
  3,   1, // 1571-1572
  3,   2,   2,   2, // 1573-1576
  4,   2, // 1577-1578
  3,   2,   2,   2, // 1579-1582
  5,   1, // 1583-1584
  5,   1,   1, // 1585-1587
  4,   2, // 1588-1589
  5,   1,   1, // 1590-1592
  5,   2,   1,   1, // 1593-1596
  5,   2,   1,   1,   2, // 1597-1601
  5,   5,   1, // 1602-1604
  4,   2,   2, // 1605-1607
  5,   5,   1,   1, // 1608-1611
  4,   2, // 1612-1613
  4,   1, // 1614-1615
  2,   2, // 1616-1617
  1, // 1618
  2,   1, // 1619-1620
  2, // 1621
  3,   2, // 1622-1623
  2,   2, // 1624-1625
  3,   1, // 1626-1627
  2,   1, // 1628-1629
  1,   2, // 1630-1631
  2,   2, // 1632-1633
  2,   1, // 1634-1635
  2, // 1636
  2,   2, // 1637-1638
  2,   1, // 1639-1640
  2, // 1641
  3,   2,   2, // 1642-1644
  1,   1,   2, // 1645-1647
  3,   2,   2, // 1648-1650
  1,   2,   2, // 1651-1653
  2,   3,   2, // 1654-1656
  3,   2,   2, // 1657-1659
  3,   2, // 1660-1661
  1,   2, // 1662-1663
  4,   3,   2,   1,   2, // 1664-1668
  4,   3,   2,   1,   2,   2, // 1669-1674
  4,   2, // 1675-1676
  4,   1, // 1677-1678
  4,   3,   3,   1,   2, // 1679-1683
  4,   3,   2,   2, // 1684-1687
  4,   2,   1,   2,   2, // 1688-1692
  4,   3,   2, // 1693-1695
  4,   1,   2,   2, // 1696-1699
  4,   1,   1,   2, // 1700-1703
  4,   2,   2, // 1704-1706
  4,   2,   1,   1,   2, // 1707-1711
  4,   3,   1,   1,   2, // 1712-1716
  1,   1,   2, // 1717-1719
  4,   2,   2,   2, // 1720-1723
  4,   2,   1,   2, // 1724-1727
  4,   2,   1,   1, // 1728-1731
  4,   2,   2,   2, // 1732-1735
  4,   2,   2,   1, // 1736-1739
  4,   2,   2, // 1740-1742
  2,   2, // 1743-1744
  2,   3, // 1745-1746
  4,   2, // 1747-1748
  4,   1,   1, // 1749-1751
  3,   2,   1,   2,   2, // 1752-1756
  3,   3,   1,   2,   2, // 1757-1761
  3,   2,   1,   2,   3, // 1762-1766
  3,   3,   1,   2,   3, // 1767-1771
  3,   1,   2,   2,   3, // 1772-1776
  4,   1,   1, // 1777-1779
  2,   2,   2, // 1780-1782
  2,   1,   1,   2,   2, // 1783-1787
  3,   2,   2, // 1788-1790
  3,   1,   1,   2,   2, // 1791-1795
  2,   2,   3, // 1796-1798
  2,   1,   1,   2,   3, // 1799-1803
  3,   2,   3, // 1804-1806
  3,   1,   1,   2,   3, // 1807-1811
  1,   1,   2,   2, // 1812-1815
  1,   2,   2,   2, // 1816-1819
  1,   1,   2,   3, // 1820-1823
  1,   2,   2,   3, // 1824-1827
  4,   1,   1,   2, // 1828-1831
  4,   2,   1,   1,   2, // 1832-1836
  4,   2, // 1837-1838
  4,   2,   2,   2, // 1839-1842
  3,   2, // 1843-1844
  3,   2,   2, // 1845-1847
  3,   2, // 1848-1849
  3, // 1850
  3, // 1851
  1,   2, // 1852-1853
  2, // 1854
  1,   2, // 1855-1856
  4,   7,   1, // 1857-1859
  9,   2, // 1860-1861
  9,   2, // 1862-1863
  9,   1,   2, // 1864-1866
  9,   3,   1,   2, // 1867-1870
  9,   2,   1,   2, // 1871-1874
  9,   3,   2,   1,   2, // 1875-1879
  9,   3,   1,   2, // 1880-1883
  9,   1,   2, // 1884-1886
  9,   2,   1,   2, // 1887-1890
  9,   3,   2,   1,   2, // 1891-1895
  9,   3,   1,   2, // 1896-1899
  1,   2,   5, // 1900-1902
  2,   1,   2,   5, // 1903-1906
  3,   2,   1,   2,   5, // 1907-1911
  3,   1,   2,   5, // 1912-1915
  1,   2,   5, // 1916-1918
  2,   1,   2,   5, // 1919-1922
  3,   2,   1,   2,   5, // 1923-1927
  3,   1,   2,   5, // 1928-1931
  2,   1,   2,   7, // 1932-1935
  3,   2,   1,   2,   7, // 1936-1940
  7,   1,   2,   7, // 1941-1944
  3,   7,   1,   2,   7, // 1945-1949
  3,   1,   2,   7, // 1950-1953
  1,   2, // 1954-1955
  3,   1,   2, // 1956-1958
  9,   5,   5, // 1959-1961
  9,   7,   7,   7, // 1962-1965
  9,   9,   7,   7,   7, // 1966-1970
  9,   9,   7,   7, // 1971-1974
  9,   5,   5, // 1975-1977
  9,   5,   5, // 1978-1980
  9,   7,   5,   5, // 1981-1984
  9,   5,   5,   2, // 1985-1988
  9,   7,   2, // 1989-1991
  9,   7,   7,   2, // 1992-1995
  9,   5,   2, // 1996-1998
  9,   7,   5,   2, // 1999-2002
  9,   7,   5,   5, // 2003-2006
  9,   5, // 2007-2008
  9,   9,   5,   5,   2, // 2009-2013
  9,   5, // 2014-2015
  9,   5,   5, // 2016-2018
  9,   5,   5,   2, // 2019-2022
  9,   5,   2, // 2023-2025
  9,   7,   5,   2, // 2026-2029
  9,   5,   2, // 2030-2032
  9,   7,   5,   2, // 2033-2036
  1,   2,   7, // 2037-2039
  7,   1,   2,   7, // 2040-2043
  1,   2,   7, // 2044-2046
  7,   1,   2,   7, // 2047-2050
  3, // 2051
  9,   5,   2, // 2052-2054
  9,   7,   5,   5,   2, // 2055-2059
  9,   5,   5,   2, // 2060-2063
  9,   5,   2, // 2064-2066
  9,   7,   5,   2, // 2067-2070
  9,   5,   2,   2, // 2071-2074
  9,   7,   5,   2,   2, // 2075-2079
  9,   5,   2, // 2080-2082
  9,   7,   5,   2, // 2083-2086
  9,   3,   5,   2, // 2087-2090
  9,   3,   7,   5,   2, // 2091-2095
  9,   5,   2, // 2096-2098
  9,   7,   7, // 2099-2101
  9,   7, // 2102-2103
  1,   2,   7,   7, // 2104-2107
  7,   1,   2,   7,   7, // 2108-2112
  1,   2,   7,   7, // 2113-2116
  7,   1,   2,   7,   7, // 2117-2121
  9,   7,   7,   7, // 2122-2125
  9,   5, // 2126-2127
  9,   7,   5, // 2128-2130
  2, // 2131
  3,   2, // 2132-2133
  1,   2, // 2134-2135
  3,   1,   2, // 2136-2138
  2,   1,   2, // 2139-2141
  3,   2,   1,   2, // 2142-2145
  1, // 2146
  1,   2, // 2147-2148
  1, // 2149
  1, // 2150
  1,   1, // 2151-2152
  1, // 2153
  4,   2,   2, // 2154-2156
  1,   1,   1, // 2157-2159
  3,   2, // 2160-2161
  3,   2,   2,   2, // 2162-2165
  4,   3,   2,   2, // 2166-2169
  3,   2,   2, // 2170-2172
  4,   3,   2, // 2173-2175
  3,   2,   2, // 2176-2178
  3,   2,   2, // 2179-2181
  3,   2,   2, // 2182-2184
  3,   2,   2, // 2185-2187
  1,   1,   1, // 2188-2190
  2, // 2191
  2,   2, // 2192-2193
  2,   2, // 2194-2195
  4,   1,   2, // 2196-2198
  4,   2,   1,   2, // 2199-2202
  4,   1,   2, // 2203-2205
  4,   3,   1,   2, // 2206-2209
  1,   2,   2, // 2210-2212
  1,   2,   2, // 2213-2215
  3,   2,   1, // 2216-2218
  3,   3,   1, // 2219-2221
  2, // 2222
  3, // 2223
  4,   1, // 2224-2225
  3,   1, // 2226-2227
  3,   1, // 2228-2229
  4,   1,   2, // 2230-2232
  4,   1,   1, // 2233-2235
  4,   2,   1,   1, // 2236-2239
  2, // 2240
  4,   3,   1,   2,   2, // 2241-2245
  9,   7,   7, // 2246-2248
  3,   1,   2,   2,   2, // 2249-2253
  3,   1,   2,   2, // 2254-2257
  2, // 2258
  9,   7,   7, // 2259-2261
  9,   1,   2, // 2262-2264
  1,   1,   1, // 2265-2267
  9,   2,   7, // 2268-2270
  1,   2,   7, // 2271-2273
  9,   2,   7,   7, // 2274-2277
  4,   2,   2, // 2278-2280
  2,   1,   2,   2, // 2281-2284
  2,   1,   2,   3, // 2285-2288
  1,   2,   2, // 2289-2291
  1,   2,   3, // 2292-2294
  4,   2,   2,   2,   2, // 2295-2299
  3,   1,   2,   3, // 2300-2303
  1,   2,   2, // 2304-2306
  2,   1,   2,   2, // 2307-2310
  3,   1,   2,   2, // 2311-2314
  3,   1,   2, // 2315-2317
  1,   1,   1, // 2318-2320
  9,   7,   7,   7, // 2321-2324
  9,   7, // 2325-2326
  9,   5,   5,   2, // 2327-2330
  9, // 2331
  1, // 2332
  4,   2, // 2333-2334
  4,   2,   2, // 2335-2337
  4,   2,   2, // 2338-2340
  4,   2,   2, // 2341-2343
  3,   2, // 2344-2345
  3,   2,   2, // 2346-2348
  3,   2,   2, // 2349-2351
  4,   2, // 2352-2353
  4,   1, // 2354-2355
  3,   2,   2, // 2356-2358
  3,   2,   2, // 2359-2361
  3,   4,   2,   2,   2, // 2362-2366
  3,   2,   2, // 2367-2369
  2, // 2370
  4,   1,   1, // 2371-2373
  4,   1,   1,   2, // 2374-2377
  4,   4,   2,   1,   1, // 2378-2382
  3,   2,   2, // 2383-2385
  4,   4,   2,   2, // 2386-2389
  3,   2, // 2390-2391
  3,   2,   2, // 2392-2394
  3,   2, // 2395-2396
  3,   2,   2,   2, // 2397-2400
  4,   2, // 2401-2402
  3,   2,   2,   2, // 2403-2406
  5,   1, // 2407-2408
  5,   1,   1, // 2409-2411
  4,   2, // 2412-2413
  5,   1,   1, // 2414-2416
  5,   2,   1,   1, // 2417-2420
  5,   2,   1,   1,   2, // 2421-2425
  5,   5,   1, // 2426-2428
  4,   2,   2, // 2429-2431
  5,   5,   1,   1, // 2432-2435
  4,   2, // 2436-2437
  4,   1, // 2438-2439
  2,   2, // 2440-2441
  1, // 2442
  2,   1, // 2443-2444
  2, // 2445
  3,   2, // 2446-2447
  2,   2, // 2448-2449
  3,   2, // 2450-2451
  2,   2, // 2452-2453
  2,   2, // 2454-2455
  2,   2, // 2456-2457
  2,   1, // 2458-2459
  2, // 2460
  2,   2, // 2461-2462
  2,   1, // 2463-2464
  2, // 2465
  3,   2,   2, // 2466-2468
  2,   2,   2, // 2469-2471
  3,   2,   2, // 2472-2474
  2,   2,   2, // 2475-2477
  2,   3,   2, // 2478-2480
  3,   2,   2, // 2481-2483
  3,   2, // 2484-2485
  2,   2, // 2486-2487
  4,   3,   2,   1,   2, // 2488-2492
  4,   3,   2,   1,   2,   2, // 2493-2498
  4,   2, // 2499-2500
  4,   1, // 2501-2502
  4,   4,   3,   1,   2, // 2503-2507
  4,   3,   2,   2, // 2508-2511
  4,   2,   1,   2,   2, // 2512-2516
  4,   3,   2, // 2517-2519
  4,   1,   2,   2, // 2520-2523
  4,   1,   1,   2, // 2524-2527
  4,   2,   2, // 2528-2530
  4,   2,   1,   1,   2, // 2531-2535
  4,   3,   1,   1,   2, // 2536-2540
  1,   1,   2, // 2541-2543
  4,   2,   2,   2, // 2544-2547
  4,   2,   1,   2, // 2548-2551
  4,   2,   1,   1, // 2552-2555
  4,   2,   2,   2, // 2556-2559
  4,   2,   2,   1, // 2560-2563
  4,   2,   2, // 2564-2566
  2,   2, // 2567-2568
  2,   3, // 2569-2570
  4,   2, // 2571-2572
  4,   1,   1, // 2573-2575
  3,   2,   1,   2,   2, // 2576-2580
  4,   3,   1,   2,   1, // 2581-2585
  3,   2,   1,   2,   3, // 2586-2590
  4,   3,   1,   2,   3, // 2591-2595
  3,   1,   2,   2,   3, // 2596-2600
  4,   1,   1, // 2601-2603
  2,   2,   2, // 2604-2606
  2,   1,   1,   2,   2, // 2607-2611
  3,   2,   2, // 2612-2614
  3,   1,   1,   2,   2, // 2615-2619
  2,   2,   3, // 2620-2622
  2,   1,   1,   2,   3, // 2623-2627
  3,   2,   3, // 2628-2630
  3,   1,   1,   2,   3, // 2631-2635
  1,   1,   2,   2, // 2636-2639
  1,   2,   2,   2, // 2640-2643
  1,   1,   2,   3, // 2644-2647
  1,   2,   2,   3, // 2648-2651
  4,   1,   1,   2, // 2652-2655
  4,   2,   1,   1,   2, // 2656-2660
  4,   2, // 2661-2662
  4,   2,   2,   2, // 2663-2666
  3,   2, // 2667-2668
  3,   2,   2, // 2669-2671
  3,   2, // 2672-2673
  3, // 2674
  4, // 2675
  2,   2, // 2676-2677
  2, // 2678
  1,   2, // 2679-2680
  4,   7,   1, // 2681-2683
  9,   2, // 2684-2685
  9,   2, // 2686-2687
  9,   1,   2, // 2688-2690
  9,   3,   1,   2, // 2691-2694
  9,   2,   1,   2, // 2695-2698
  9,   3,   2,   1,   2, // 2699-2703
  9,   3,   1,   2, // 2704-2707
  9,   1,   2, // 2708-2710
  9,   2,   1,   2, // 2711-2714
  9,   3,   2,   1,   2, // 2715-2719
  9,   3,   1,   2, // 2720-2723
  1,   2,   5, // 2724-2726
  2,   1,   2,   5, // 2727-2730
  3,   2,   1,   2,   5, // 2731-2735
  3,   1,   2,   5, // 2736-2739
  1,   2,   5, // 2740-2742
  2,   1,   2,   5, // 2743-2746
  3,   2,   1,   2,   5, // 2747-2751
  3,   1,   2,   5, // 2752-2755
  2,   1,   2,   7, // 2756-2759
  3,   2,   1,   2,   7, // 2760-2764
  7,   1,   2,   7, // 2765-2768
  3,   7,   1,   2,   7, // 2769-2773
  3,   1,   2,   7, // 2774-2777
  1,   2, // 2778-2779
  3,   1,   2, // 2780-2782
  9,   5,   5, // 2783-2785
  9,   7,   7,   7, // 2786-2789
  9,   9,   7,   7,   7, // 2790-2794
  9,   9,   7,   7, // 2795-2798
  9,   5,   5, // 2799-2801
  9,   5,   5, // 2802-2804
  9,   7,   5,   5, // 2805-2808
  9,   5,   5,   2, // 2809-2812
  9,   7,   2, // 2813-2815
  9,   7,   7,   2, // 2816-2819
  9,   5,   2, // 2820-2822
  9,   7,   5,   2, // 2823-2826
  9,   7,   5,   5, // 2827-2830
  9,   5, // 2831-2832
  9,   9,   5,   5,   2, // 2833-2837
  9,   5, // 2838-2839
  9,   5,   5, // 2840-2842
  9,   5,   5,   2, // 2843-2846
  9,   5,   2, // 2847-2849
  9,   7,   5,   2, // 2850-2853
  9,   5,   2, // 2854-2856
  9,   7,   5,   2, // 2857-2860
  1,   2,   7, // 2861-2863
  7,   1,   2,   7, // 2864-2867
  1,   2,   7, // 2868-2870
  7,   1,   2,   7, // 2871-2874
  3, // 2875
  9,   5,   2, // 2876-2878
  9,   7,   5,   5,   2, // 2879-2883
  9,   5,   5,   2, // 2884-2887
  9,   5,   2, // 2888-2890
  9,   7,   5,   2, // 2891-2894
  9,   5,   2,   2, // 2895-2898
  9,   7,   5,   2,   2, // 2899-2903
  9,   5,   2, // 2904-2906
  9,   7,   5,   2, // 2907-2910
  9,   3,   5,   2, // 2911-2914
  9,   3,   7,   5,   2, // 2915-2919
  9,   5,   2, // 2920-2922
  9,   7,   7, // 2923-2925
  9,   7, // 2926-2927
  1,   2,   7,   7, // 2928-2931
  7,   1,   2,   7,   7, // 2932-2936
  1,   2,   7,   7, // 2937-2940
  7,   1,   2,   7,   7, // 2941-2945
  9,   7,   7,   7, // 2946-2949
  9,   5, // 2950-2951
  9,   7,   5, // 2952-2954
  2, // 2955
  3,   2, // 2956-2957
  1,   2, // 2958-2959
  3,   1,   2, // 2960-2962
  2,   1,   2, // 2963-2965
  3,   2,   1,   2, // 2966-2969
  1, // 2970
  1,   2, // 2971-2972
  1, // 2973
  1, // 2974
  1,   1, // 2975-2976
  1, // 2977
  4,   2,   2, // 2978-2980
  1,   1,   1, // 2981-2983
  3,   2, // 2984-2985
  3,   2,   2,   2, // 2986-2989
  4,   3,   2,   2, // 2990-2993
  3,   2,   2, // 2994-2996
  4,   3,   2, // 2997-2999
  3,   2,   2, // 3000-3002
  3,   2,   2, // 3003-3005
  3,   2,   2, // 3006-3008
  3,   2,   2, // 3009-3011
  1,   1,   1, // 3012-3014
  2, // 3015
  2,   2, // 3016-3017
  2,   2, // 3018-3019
  4,   1,   2, // 3020-3022
  4,   2,   1,   2, // 3023-3026
  4,   1,   2, // 3027-3029
  4,   3,   1,   2, // 3030-3033
  1,   2,   3, // 3034-3036
  1,   2,   2, // 3037-3039
  3,   2,   1, // 3040-3042
  3,   3,   1, // 3043-3045
  2, // 3046
  3, // 3047
  4,   1, // 3048-3049
  3,   1, // 3050-3051
  3,   1, // 3052-3053
  4,   1,   2, // 3054-3056
  4,   1,   1, // 3057-3059
  4,   2,   1,   1, // 3060-3063
  2, // 3064
  4,   3,   1,   2,   2, // 3065-3069
  9,   7,   7, // 3070-3072
  3,   1,   2,   2,   3, // 3073-3077
  3,   1,   2,   3, // 3078-3081
  2, // 3082
  9,   7,   7, // 3083-3085
  9,   1,   2, // 3086-3088
  1,   1,   1, // 3089-3091
  9,   2,   7, // 3092-3094
  1,   2,   7, // 3095-3097
  9,   2,   7,   7, // 3098-3101
  4,   2,   2, // 3102-3104
  2,   1,   2,   3, // 3105-3108
  2,   1,   2,   3, // 3109-3112
  1,   2,   3, // 3113-3115
  1,   2,   3, // 3116-3118
  4,   2,   2,   2,   2, // 3119-3123
  3,   1,   2,   3, // 3124-3127
  1,   2,   2, // 3128-3130
  2,   1,   2,   2, // 3131-3134
  3,   1,   2,   2, // 3135-3138
  3,   1,   2, // 3139-3141
  1,   1,   1, // 3142-3144
  9,   7,   7,   7, // 3145-3148
  9,   7, // 3149-3150
  9,   5,   5,   2, // 3151-3154
  9, // 3155
  1, // 3156
  4,   2, // 3157-3158
  4,   2,   2, // 3159-3161
  4,   2,   2, // 3162-3164
  4,   2,   2, // 3165-3167
  3,   2, // 3168-3169
  4,   2,   2, // 3170-3172
  4,   2,   2, // 3173-3175
  4,   2, // 3176-3177
  4,   1, // 3178-3179
  4,   2,   2, // 3180-3182
  4,   2,   2, // 3183-3185
  3,   4,   2,   2,   2, // 3186-3190
  3,   2,   2, // 3191-3193
  2, // 3194
  4,   1,   1, // 3195-3197
  4,   1,   1,   2, // 3198-3201
  4,   4,   2,   1,   1, // 3202-3206
  3,   2,   2, // 3207-3209
  4,   4,   2,   2, // 3210-3213
  3,   2, // 3214-3215
  3,   2,   2, // 3216-3218
  3,   2, // 3219-3220
  3,   2,   2,   2, // 3221-3224
  4,   2, // 3225-3226
  3,   2,   2,   2, // 3227-3230
  5,   1, // 3231-3232
  5,   1,   1, // 3233-3235
  4,   2, // 3236-3237
  5,   1,   1, // 3238-3240
  5,   2,   1,   1, // 3241-3244
  5,   2,   1,   1,   2, // 3245-3249
  5,   5,   1, // 3250-3252
  4,   2,   2, // 3253-3255
  5,   5,   1,   1, // 3256-3259
  4,   2, // 3260-3261
  4,   1, // 3262-3263
  2,   2, // 3264-3265
  1, // 3266
  2,   1, // 3267-3268
  2, // 3269
  3,   2, // 3270-3271
  2,   2, // 3272-3273
  3,   2, // 3274-3275
  2,   2, // 3276-3277
  2,   2, // 3278-3279
  2,   2, // 3280-3281
  2,   1, // 3282-3283
  2, // 3284
  2,   2, // 3285-3286
  2,   1, // 3287-3288
  2, // 3289
  3,   3,   2, // 3290-3292
  2,   2,   2, // 3293-3295
  3,   2,   2, // 3296-3298
  2,   2,   2, // 3299-3301
  3,   3,   2, // 3302-3304
  3,   2,   2, // 3305-3307
  3,   2, // 3308-3309
  2,   2, // 3310-3311
  4,   3,   2,   1,   2, // 3312-3316
  4,   3,   2,   1,   2,   2, // 3317-3322
  4,   2, // 3323-3324
  4,   1, // 3325-3326
  4,   4,   3,   1,   2, // 3327-3331
  4,   3,   2,   2, // 3332-3335
  4,   2,   1,   2,   2, // 3336-3340
  4,   3,   2, // 3341-3343
  4,   1,   2,   2, // 3344-3347
  4,   1,   1,   2, // 3348-3351
  4,   2,   2, // 3352-3354
  4,   2,   1,   1,   2, // 3355-3359
  4,   3,   1,   1,   2, // 3360-3364
  1,   1,   2, // 3365-3367
  4,   2,   2,   2, // 3368-3371
  4,   2,   1,   2, // 3372-3375
  4,   2,   1,   1, // 3376-3379
  4,   2,   2,   2, // 3380-3383
  4,   2,   2,   1, // 3384-3387
  4,   2,   2, // 3388-3390
  2,   3, // 3391-3392
  2,   3, // 3393-3394
  4,   2, // 3395-3396
  4,   1,   1, // 3397-3399
  3,   2,   1,   2,   3, // 3400-3404
  4,   3,   1,   2,   1, // 3405-3409
  3,   2,   1,   2,   3, // 3410-3414
  4,   3,   1,   2,   3, // 3415-3419
  3,   1,   2,   2,   3, // 3420-3424
  4,   1,   1, // 3425-3427
  2,   2,   3, // 3428-3430
  2,   1,   1,   2,   3, // 3431-3435
  3,   2,   3, // 3436-3438
  3,   1,   1,   2,   3, // 3439-3443
  2,   2,   3, // 3444-3446
  2,   1,   1,   2,   3, // 3447-3451
  3,   2,   3, // 3452-3454
  3,   1,   1,   2,   3, // 3455-3459
  1,   1,   2,   3, // 3460-3463
  1,   2,   2,   3, // 3464-3467
  1,   1,   2,   3, // 3468-3471
  1,   2,   2,   3, // 3472-3475
  4,   1,   1,   2, // 3476-3479
  4,   2,   1,   1,   2, // 3480-3484
  4,   2, // 3485-3486
  4,   2,   2,   2, // 3487-3490
  3,   2, // 3491-3492
  3,   2,   2, // 3493-3495
  3,   2, // 3496-3497
  3, // 3498
  4, // 3499
  2,   2, // 3500-3501
  2, // 3502
  1,   2, // 3503-3504
  4,   7,   1, // 3505-3507
  9,   2, // 3508-3509
  9,   2, // 3510-3511
  9,   1,   2, // 3512-3514
  9,   3,   1,   2, // 3515-3518
  9,   2,   1,   2, // 3519-3522
  9,   3,   2,   1,   2, // 3523-3527
  9,   3,   1,   2, // 3528-3531
  9,   1,   2, // 3532-3534
  9,   2,   1,   2, // 3535-3538
  9,   3,   2,   1,   2, // 3539-3543
  9,   3,   1,   2, // 3544-3547
  1,   2,   5, // 3548-3550
  2,   1,   2,   5, // 3551-3554
  3,   2,   1,   2,   5, // 3555-3559
  3,   1,   2,   5, // 3560-3563
  1,   2,   5, // 3564-3566
  2,   1,   2,   5, // 3567-3570
  3,   2,   1,   2,   5, // 3571-3575
  3,   1,   2,   5, // 3576-3579
  2,   1,   2,   7, // 3580-3583
  3,   2,   1,   2,   7, // 3584-3588
  7,   1,   2,   7, // 3589-3592
  3,   7,   1,   2,   7, // 3593-3597
  3,   1,   2,   7, // 3598-3601
  1,   2, // 3602-3603
  3,   1,   2, // 3604-3606
  9,   5,   5, // 3607-3609
  9,   7,   7,   7, // 3610-3613
  9,   9,   7,   7,   7, // 3614-3618
  9,   9,   7,   7, // 3619-3622
  9,   5,   5, // 3623-3625
  9,   5,   5, // 3626-3628
  9,   7,   5,   5, // 3629-3632
  9,   5,   5,   2, // 3633-3636
  9,   7,   2, // 3637-3639
  9,   7,   7,   2, // 3640-3643
  9,   5,   2, // 3644-3646
  9,   7,   5,   2, // 3647-3650
  9,   7,   5,   5, // 3651-3654
  9,   5, // 3655-3656
  9,   9,   5,   5,   2, // 3657-3661
  9,   5, // 3662-3663
  9,   5,   5, // 3664-3666
  9,   5,   5,   2, // 3667-3670
  9,   5,   2, // 3671-3673
  9,   7,   5,   2, // 3674-3677
  9,   5,   2, // 3678-3680
  9,   7,   5,   2, // 3681-3684
  1,   2,   7, // 3685-3687
  7,   1,   2,   7, // 3688-3691
  1,   2,   7, // 3692-3694
  7,   1,   2,   7, // 3695-3698
  3, // 3699
  9,   5,   2, // 3700-3702
  9,   7,   5,   5,   2, // 3703-3707
  9,   5,   5,   2, // 3708-3711
  9,   5,   2, // 3712-3714
  9,   7,   5,   2, // 3715-3718
  9,   5,   2,   2, // 3719-3722
  9,   7,   5,   2,   2, // 3723-3727
  9,   5,   2, // 3728-3730
  9,   7,   5,   2, // 3731-3734
  9,   3,   5,   2, // 3735-3738
  9,   3,   7,   5,   2, // 3739-3743
  9,   5,   2, // 3744-3746
  9,   7,   7, // 3747-3749
  9,   7, // 3750-3751
  1,   2,   7,   7, // 3752-3755
  7,   1,   2,   7,   7, // 3756-3760
  1,   2,   7,   7, // 3761-3764
  7,   1,   2,   7,   7, // 3765-3769
  9,   7,   7,   7, // 3770-3773
  9,   5, // 3774-3775
  9,   7,   5, // 3776-3778
  2, // 3779
  3,   2, // 3780-3781
  1,   2, // 3782-3783
  3,   1,   2, // 3784-3786
  2,   1,   2, // 3787-3789
  3,   2,   1,   2, // 3790-3793
  1, // 3794
  1,   2, // 3795-3796
  1, // 3797
  1, // 3798
  1,   1, // 3799-3800
  1, // 3801
  0 // End operand cycles
};
extern const unsigned HexagonForwardingPaths[] = {
 0, // No itinerary
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1-3
 0,  0,  0, // 4-6
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 7-8
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 9-12
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 13-16
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 17-19
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 20-22
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 23-25
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 26-28
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 29-31
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 32-34
 0,  0,  0, // 35-37
 0, // 38
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 39-40
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 41-42
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 43-45
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 46-49
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 50-52
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 53-56
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 57-59
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 60-62
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 63-65
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 66-68
HexagonItinerariesV60Bypass::Hex_FWD, // 69
HexagonItinerariesV60Bypass::Hex_FWD, // 70
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 71-72
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 73-74
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 75-76
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 77-79
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 80-82
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 83-86
HexagonItinerariesV60Bypass::Hex_FWD, // 87
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 88-92
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 93-95
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 96-100
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 101-104
HexagonItinerariesV60Bypass::Hex_FWD, // 105
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 106-108
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 109-111
 0,  0,  0, // 112-114
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 115-117
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 118-120
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 121-124
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 125-127
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 128-131
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 132-135
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 136-138
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 139-141
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 142-146
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 147-150
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 151-153
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 154-157
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 158-161
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 162-164
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 165-167
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD,  0, // 168-171
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 172-173
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 174-177
HexagonItinerariesV60Bypass::HVX_FWD, // 178
HexagonItinerariesV60Bypass::Hex_FWD, // 179
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 180-181
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 182-184
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 185-187
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 188-190
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 191-192
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 193-195
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 196-198
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 199-200
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 201-202
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 203-205
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 206-208
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 209-213
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 214-216
HexagonItinerariesV60Bypass::Hex_FWD, // 217
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 218-220
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 221-224
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 225-229
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 230-232
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 233-236
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 237-238
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 239-241
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 242-243
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 244-247
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 248-249
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 250-253
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 254-255
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 256-258
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 259-260
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 261-263
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 264-267
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 268-272
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 273-275
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 276-278
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 279-282
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 283-284
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 285-286
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 287-288
HexagonItinerariesV60Bypass::Hex_FWD, // 289
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 290-291
HexagonItinerariesV60Bypass::Hex_FWD, // 292
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 293-294
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 295-296
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 297-298
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 299-300
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 301-302
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 303-304
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 305-306
HexagonItinerariesV60Bypass::Hex_FWD, // 307
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 308-309
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 310-311
HexagonItinerariesV60Bypass::Hex_FWD, // 312
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 313-315
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 316-318
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 319-321
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 322-324
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 325-327
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 328-330
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 331-332
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 333-334
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 335-339
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 340-345
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 346-347
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 348-349
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 350-354
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 355-358
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 359-363
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 364-366
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 367-370
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 371-374
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 375-377
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 378-382
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 383-387
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 388-390
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 391-394
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 395-398
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 399-402
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 403-406
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 407-410
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 411-413
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 414-415
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 416-417
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 418-419
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 420-422
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 423-427
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 428-432
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 433-437
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 438-442
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 443-447
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 448-450
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 451-453
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 454-458
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 459-461
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 462-466
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 467-469
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 470-474
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 475-477
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 478-482
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 483-486
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 487-490
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 491-494
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 495-498
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 499-502
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 503-507
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 508-509
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 510-513
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 514-515
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 516-518
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 519-520
HexagonItinerariesV60Bypass::Hex_FWD, // 521
HexagonItinerariesV60Bypass::Hex_FWD, // 522
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 523-524
HexagonItinerariesV60Bypass::Hex_FWD, // 525
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 526-527
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 528-530
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 531-532
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 533-534
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 535-537
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 538-541
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 542-545
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 546-550
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 551-554
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 555-557
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 558-561
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 562-566
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 567-570
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 571-573
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 574-577
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 578-582
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 583-586
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 587-589
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 590-593
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 594-598
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 599-602
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 603-606
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 607-611
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 612-615
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 616-620
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 621-624
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 625-626
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 627-629
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 630-632
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 633-636
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 637-641
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 642-645
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 646-648
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 649-651
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 652-655
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 656-659
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 660-662
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 663-666
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 667-669
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 670-673
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 674-677
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 678-679
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 680-684
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 685-686
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 687-689
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 690-693
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 694-696
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 697-700
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 701-703
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 704-707
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 708-710
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 711-714
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 715-717
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 718-721
HexagonItinerariesV60Bypass::HVX_FWD, // 722
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 723-725
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 726-730
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 731-734
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 735-737
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 738-741
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 742-745
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 746-750
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 751-753
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 754-757
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 758-761
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 762-766
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 767-769
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 770-772
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 773-774
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 775-778
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 779-783
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 784-787
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 788-792
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 793-796
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 797-798
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 799-801
HexagonItinerariesV60Bypass::Hex_FWD, // 802
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 803-804
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 805-806
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 807-809
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 810-812
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 813-816
HexagonItinerariesV60Bypass::Hex_FWD, // 817
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 818-819
HexagonItinerariesV60Bypass::Hex_FWD, // 820
HexagonItinerariesV60Bypass::Hex_FWD, // 821
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 822-823
HexagonItinerariesV60Bypass::Hex_FWD, // 824
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 825-827
 0,  0,  0, // 828-830
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 831-832
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 833-836
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 837-840
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 841-843
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 844-846
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 847-849
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 850-852
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 853-855
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 856-858
 0,  0,  0, // 859-861
 0, // 862
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 863-864
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 865-866
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 867-869
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 870-873
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 874-876
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 877-880
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 881-883
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 884-886
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 887-889
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 890-892
HexagonItinerariesV55Bypass::Hex_FWD, // 893
HexagonItinerariesV55Bypass::Hex_FWD, // 894
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 895-896
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 897-898
 0,  0, // 899-900
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 901-903
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 904-906
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 907-910
HexagonItinerariesV55Bypass::Hex_FWD, // 911
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 912-916
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 917-921
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 922-925
HexagonItinerariesV55Bypass::Hex_FWD, // 926
 0,  0,  0, // 927-929
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 930-932
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 933-936
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 937-940
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 941-943
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 944-946
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 947-951
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 952-955
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 956-958
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 959-962
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 963-966
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 967-969
 0,  0,  0, // 970-972
HexagonItinerariesV55Bypass::Hex_FWD, // 973
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 974-975
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 976-978
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 979-981
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 982-984
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 985-986
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 987-989
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 990-992
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 993-994
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 995-996
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 997-999
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1000-1002
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1003-1007
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1008-1010
HexagonItinerariesV55Bypass::Hex_FWD, // 1011
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1012-1014
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1015-1018
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1019-1023
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1024-1026
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1027-1030
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1031-1032
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1033-1035
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1036-1037
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1038-1041
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1042-1043
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1044-1047
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1048-1049
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1050-1052
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1053-1054
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1055-1057
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1058-1061
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1062-1066
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1067-1069
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1070-1072
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1073-1076
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1077-1078
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1079-1080
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1081-1082
HexagonItinerariesV55Bypass::Hex_FWD, // 1083
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1084-1085
HexagonItinerariesV55Bypass::Hex_FWD, // 1086
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1087-1088
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1089-1090
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1091-1092
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1093-1094
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1095-1096
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1097-1098
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1099-1100
HexagonItinerariesV55Bypass::Hex_FWD, // 1101
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1102-1103
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1104-1105
HexagonItinerariesV55Bypass::Hex_FWD, // 1106
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1107-1109
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1110-1112
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1113-1115
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1116-1118
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1119-1121
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1122-1124
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1125-1126
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1127-1128
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1129-1133
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1134-1139
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1140-1141
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1142-1143
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1144-1148
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1149-1152
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1153-1157
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1158-1160
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1161-1164
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1165-1168
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1169-1171
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1172-1176
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1177-1181
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1182-1184
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1185-1188
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1189-1192
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1193-1196
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1197-1200
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1201-1204
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1205-1207
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1208-1209
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1210-1211
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1212-1213
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1214-1216
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1217-1221
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1222-1226
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1227-1231
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1232-1236
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1237-1241
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1242-1244
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1245-1247
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1248-1252
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1253-1255
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1256-1260
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1261-1263
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1264-1268
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1269-1271
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1272-1276
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1277-1280
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1281-1284
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1285-1288
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1289-1292
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1293-1296
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1297-1301
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1302-1303
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1304-1307
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1308-1309
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1310-1312
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1313-1314
HexagonItinerariesV55Bypass::Hex_FWD, // 1315
HexagonItinerariesV55Bypass::Hex_FWD, // 1316
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1317-1318
HexagonItinerariesV55Bypass::Hex_FWD, // 1319
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1320-1321
HexagonItinerariesV55Bypass::Hex_FWD, // 1322
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1323-1324
HexagonItinerariesV55Bypass::Hex_FWD, // 1325
HexagonItinerariesV55Bypass::Hex_FWD, // 1326
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1327-1328
HexagonItinerariesV55Bypass::Hex_FWD, // 1329
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1330-1332
 0,  0,  0, // 1333-1335
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1336-1337
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1338-1341
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1342-1345
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1346-1348
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1349-1351
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1352-1354
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1355-1357
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1358-1360
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1361-1363
 0,  0,  0, // 1364-1366
 0, // 1367
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1368-1369
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1370-1371
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1372-1374
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1375-1378
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1379-1381
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1382-1385
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1386-1388
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1389-1391
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1392-1394
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1395-1397
HexagonItinerariesV62Bypass::Hex_FWD, // 1398
HexagonItinerariesV62Bypass::Hex_FWD, // 1399
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1400-1401
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1402-1403
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1404-1405
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1406-1408
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1409-1411
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1412-1415
HexagonItinerariesV62Bypass::Hex_FWD, // 1416
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1417-1421
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1422-1424
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1425-1429
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1430-1433
HexagonItinerariesV62Bypass::Hex_FWD, // 1434
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1435-1437
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1438-1440
 0,  0,  0, // 1441-1443
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1444-1446
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1447-1449
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1450-1453
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1454-1456
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1457-1460
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1461-1464
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1465-1467
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1468-1470
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1471-1475
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1476-1479
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1480-1482
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1483-1486
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1487-1490
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1491-1493
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1494-1496
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD,  0, // 1497-1500
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1501-1502
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1503-1506
HexagonItinerariesV62Bypass::HVX_FWD, // 1507
HexagonItinerariesV62Bypass::Hex_FWD, // 1508
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1509-1510
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1511-1513
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1514-1516
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1517-1519
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1520-1521
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1522-1524
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1525-1527
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1528-1529
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1530-1531
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1532-1534
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1535-1537
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1538-1542
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1543-1545
HexagonItinerariesV62Bypass::Hex_FWD, // 1546
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1547-1549
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1550-1553
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1554-1558
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1559-1561
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1562-1565
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1566-1567
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1568-1570
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1571-1572
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1573-1576
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1577-1578
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1579-1582
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1583-1584
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1585-1587
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1588-1589
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1590-1592
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1593-1596
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1597-1601
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1602-1604
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1605-1607
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1608-1611
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1612-1613
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1614-1615
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1616-1617
HexagonItinerariesV62Bypass::Hex_FWD, // 1618
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1619-1620
HexagonItinerariesV62Bypass::Hex_FWD, // 1621
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1622-1623
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1624-1625
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1626-1627
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1628-1629
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1630-1631
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1632-1633
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1634-1635
HexagonItinerariesV62Bypass::Hex_FWD, // 1636
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1637-1638
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1639-1640
HexagonItinerariesV62Bypass::Hex_FWD, // 1641
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1642-1644
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1645-1647
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1648-1650
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1651-1653
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1654-1656
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1657-1659
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1660-1661
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1662-1663
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1664-1668
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1669-1674
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1675-1676
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1677-1678
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1679-1683
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1684-1687
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1688-1692
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1693-1695
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1696-1699
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1700-1703
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1704-1706
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1707-1711
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1712-1716
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1717-1719
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1720-1723
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1724-1727
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1728-1731
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1732-1735
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1736-1739
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1740-1742
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1743-1744
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1745-1746
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1747-1748
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1749-1751
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1752-1756
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1757-1761
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1762-1766
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1767-1771
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1772-1776
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1777-1779
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1780-1782
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1783-1787
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1788-1790
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1791-1795
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1796-1798
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1799-1803
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1804-1806
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1807-1811
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1812-1815
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1816-1819
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1820-1823
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1824-1827
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1828-1831
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1832-1836
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1837-1838
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1839-1842
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1843-1844
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1845-1847
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1848-1849
HexagonItinerariesV62Bypass::Hex_FWD, // 1850
HexagonItinerariesV62Bypass::Hex_FWD, // 1851
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1852-1853
HexagonItinerariesV62Bypass::Hex_FWD, // 1854
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1855-1856
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1857-1859
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1860-1861
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1862-1863
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1864-1866
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1867-1870
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1871-1874
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1875-1879
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1880-1883
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1884-1886
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1887-1890
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1891-1895
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1896-1899
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1900-1902
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1903-1906
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1907-1911
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1912-1915
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1916-1918
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1919-1922
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1923-1927
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1928-1931
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1932-1935
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1936-1940
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1941-1944
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1945-1949
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1950-1953
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1954-1955
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1956-1958
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1959-1961
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1962-1965
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1966-1970
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1971-1974
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1975-1977
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1978-1980
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1981-1984
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1985-1988
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1989-1991
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1992-1995
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1996-1998
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1999-2002
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2003-2006
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2007-2008
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2009-2013
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2014-2015
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2016-2018
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2019-2022
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2023-2025
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2026-2029
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2030-2032
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2033-2036
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2037-2039
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2040-2043
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2044-2046
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2047-2050
HexagonItinerariesV62Bypass::HVX_FWD, // 2051
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2052-2054
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2055-2059
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2060-2063
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2064-2066
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2067-2070
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2071-2074
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2075-2079
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2080-2082
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2083-2086
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2087-2090
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2091-2095
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2096-2098
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2099-2101
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2102-2103
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2104-2107
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2108-2112
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2113-2116
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2117-2121
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2122-2125
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2126-2127
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2128-2130
HexagonItinerariesV62Bypass::Hex_FWD, // 2131
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2132-2133
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2134-2135
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2136-2138
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2139-2141
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2142-2145
HexagonItinerariesV62Bypass::Hex_FWD, // 2146
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2147-2148
HexagonItinerariesV62Bypass::Hex_FWD, // 2149
HexagonItinerariesV62Bypass::Hex_FWD, // 2150
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2151-2152
HexagonItinerariesV62Bypass::Hex_FWD, // 2153
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2154-2156
 0,  0,  0, // 2157-2159
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2160-2161
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2162-2165
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2166-2169
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2170-2172
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2173-2175
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2176-2178
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2179-2181
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2182-2184
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2185-2187
 0,  0,  0, // 2188-2190
 0, // 2191
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2192-2193
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2194-2195
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2196-2198
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2199-2202
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2203-2205
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2206-2209
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2210-2212
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2213-2215
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2216-2218
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2219-2221
HexagonItinerariesV65Bypass::Hex_FWD, // 2222
HexagonItinerariesV65Bypass::Hex_FWD, // 2223
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2224-2225
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2226-2227
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2228-2229
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2230-2232
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2233-2235
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2236-2239
HexagonItinerariesV65Bypass::Hex_FWD, // 2240
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2241-2245
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2246-2248
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2249-2253
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2254-2257
HexagonItinerariesV65Bypass::Hex_FWD, // 2258
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2259-2261
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2262-2264
 0,  0,  0, // 2265-2267
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2268-2270
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2271-2273
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2274-2277
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2278-2280
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2281-2284
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2285-2288
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2289-2291
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2292-2294
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2295-2299
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2300-2303
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2304-2306
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2307-2310
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2311-2314
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2315-2317
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2318-2320
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD,  0, // 2321-2324
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2325-2326
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2327-2330
HexagonItinerariesV65Bypass::HVX_FWD, // 2331
HexagonItinerariesV65Bypass::Hex_FWD, // 2332
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2333-2334
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2335-2337
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2338-2340
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2341-2343
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2344-2345
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2346-2348
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2349-2351
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2352-2353
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2354-2355
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2356-2358
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2359-2361
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2362-2366
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2367-2369
HexagonItinerariesV65Bypass::Hex_FWD, // 2370
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2371-2373
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2374-2377
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2378-2382
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2383-2385
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2386-2389
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2390-2391
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2392-2394
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2395-2396
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2397-2400
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2401-2402
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2403-2406
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2407-2408
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2409-2411
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2412-2413
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2414-2416
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2417-2420
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2421-2425
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2426-2428
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2429-2431
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2432-2435
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2436-2437
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2438-2439
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2440-2441
HexagonItinerariesV65Bypass::Hex_FWD, // 2442
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2443-2444
HexagonItinerariesV65Bypass::Hex_FWD, // 2445
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2446-2447
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2448-2449
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2450-2451
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2452-2453
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2454-2455
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2456-2457
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2458-2459
HexagonItinerariesV65Bypass::Hex_FWD, // 2460
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2461-2462
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2463-2464
HexagonItinerariesV65Bypass::Hex_FWD, // 2465
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2466-2468
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2469-2471
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2472-2474
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2475-2477
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2478-2480
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2481-2483
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2484-2485
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2486-2487
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2488-2492
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2493-2498
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2499-2500
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2501-2502
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2503-2507
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2508-2511
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2512-2516
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2517-2519
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2520-2523
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2524-2527
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2528-2530
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2531-2535
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2536-2540
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2541-2543
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2544-2547
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2548-2551
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2552-2555
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2556-2559
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2560-2563
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2564-2566
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2567-2568
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2569-2570
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2571-2572
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2573-2575
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2576-2580
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2581-2585
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2586-2590
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2591-2595
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2596-2600
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2601-2603
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2604-2606
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2607-2611
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2612-2614
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2615-2619
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2620-2622
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2623-2627
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2628-2630
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2631-2635
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2636-2639
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2640-2643
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2644-2647
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2648-2651
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2652-2655
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2656-2660
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2661-2662
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2663-2666
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2667-2668
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2669-2671
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2672-2673
HexagonItinerariesV65Bypass::Hex_FWD, // 2674
HexagonItinerariesV65Bypass::Hex_FWD, // 2675
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2676-2677
HexagonItinerariesV65Bypass::Hex_FWD, // 2678
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2679-2680
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2681-2683
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2684-2685
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2686-2687
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2688-2690
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2691-2694
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2695-2698
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2699-2703
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2704-2707
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2708-2710
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2711-2714
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2715-2719
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2720-2723
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2724-2726
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2727-2730
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2731-2735
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2736-2739
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2740-2742
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2743-2746
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2747-2751
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2752-2755
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2756-2759
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2760-2764
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2765-2768
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2769-2773
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2774-2777
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2778-2779
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2780-2782
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2783-2785
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2786-2789
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2790-2794
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2795-2798
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2799-2801
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2802-2804
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2805-2808
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2809-2812
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2813-2815
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2816-2819
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2820-2822
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2823-2826
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2827-2830
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2831-2832
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2833-2837
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2838-2839
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2840-2842
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2843-2846
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2847-2849
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2850-2853
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2854-2856
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2857-2860
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2861-2863
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2864-2867
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2868-2870
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2871-2874
HexagonItinerariesV65Bypass::HVX_FWD, // 2875
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2876-2878
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2879-2883
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2884-2887
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2888-2890
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2891-2894
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2895-2898
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2899-2903
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2904-2906
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2907-2910
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2911-2914
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2915-2919
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2920-2922
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2923-2925
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2926-2927
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2928-2931
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2932-2936
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2937-2940
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2941-2945
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2946-2949
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2950-2951
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2952-2954
HexagonItinerariesV65Bypass::Hex_FWD, // 2955
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2956-2957
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2958-2959
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2960-2962
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2963-2965
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2966-2969
HexagonItinerariesV65Bypass::Hex_FWD, // 2970
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2971-2972
HexagonItinerariesV65Bypass::Hex_FWD, // 2973
HexagonItinerariesV65Bypass::Hex_FWD, // 2974
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2975-2976
HexagonItinerariesV65Bypass::Hex_FWD, // 2977
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 2978-2980
 0,  0,  0, // 2981-2983
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 2984-2985
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 2986-2989
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 2990-2993
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 2994-2996
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 2997-2999
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3000-3002
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3003-3005
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3006-3008
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3009-3011
 0,  0,  0, // 3012-3014
 0, // 3015
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3016-3017
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3018-3019
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3020-3022
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3023-3026
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3027-3029
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3030-3033
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3034-3036
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3037-3039
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3040-3042
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3043-3045
HexagonItinerariesV66Bypass::Hex_FWD, // 3046
HexagonItinerariesV66Bypass::Hex_FWD, // 3047
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3048-3049
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3050-3051
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3052-3053
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3054-3056
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3057-3059
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3060-3063
HexagonItinerariesV66Bypass::Hex_FWD, // 3064
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3065-3069
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3070-3072
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3073-3077
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3078-3081
HexagonItinerariesV66Bypass::Hex_FWD, // 3082
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3083-3085
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3086-3088
 0,  0,  0, // 3089-3091
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3092-3094
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3095-3097
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3098-3101
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3102-3104
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3105-3108
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3109-3112
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3113-3115
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3116-3118
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3119-3123
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3124-3127
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3128-3130
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3131-3134
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3135-3138
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3139-3141
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3142-3144
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD,  0, // 3145-3148
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3149-3150
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3151-3154
HexagonItinerariesV66Bypass::HVX_FWD, // 3155
HexagonItinerariesV66Bypass::Hex_FWD, // 3156
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3157-3158
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3159-3161
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3162-3164
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3165-3167
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3168-3169
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3170-3172
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3173-3175
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3176-3177
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3178-3179
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3180-3182
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3183-3185
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3186-3190
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3191-3193
HexagonItinerariesV66Bypass::Hex_FWD, // 3194
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3195-3197
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3198-3201
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3202-3206
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3207-3209
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3210-3213
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3214-3215
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3216-3218
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3219-3220
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3221-3224
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3225-3226
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3227-3230
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3231-3232
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3233-3235
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3236-3237
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3238-3240
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3241-3244
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3245-3249
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3250-3252
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3253-3255
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3256-3259
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3260-3261
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3262-3263
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3264-3265
HexagonItinerariesV66Bypass::Hex_FWD, // 3266
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3267-3268
HexagonItinerariesV66Bypass::Hex_FWD, // 3269
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3270-3271
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3272-3273
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3274-3275
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3276-3277
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3278-3279
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3280-3281
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3282-3283
HexagonItinerariesV66Bypass::Hex_FWD, // 3284
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3285-3286
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3287-3288
HexagonItinerariesV66Bypass::Hex_FWD, // 3289
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3290-3292
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3293-3295
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3296-3298
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3299-3301
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3302-3304
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3305-3307
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3308-3309
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3310-3311
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3312-3316
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3317-3322
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3323-3324
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3325-3326
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3327-3331
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3332-3335
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3336-3340
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3341-3343
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3344-3347
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3348-3351
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3352-3354
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3355-3359
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3360-3364
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3365-3367
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3368-3371
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3372-3375
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3376-3379
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3380-3383
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3384-3387
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3388-3390
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3391-3392
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3393-3394
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3395-3396
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3397-3399
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3400-3404
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3405-3409
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3410-3414
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3415-3419
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3420-3424
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3425-3427
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3428-3430
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3431-3435
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3436-3438
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3439-3443
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3444-3446
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3447-3451
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3452-3454
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3455-3459
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3460-3463
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3464-3467
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3468-3471
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3472-3475
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3476-3479
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3480-3484
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3485-3486
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3487-3490
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3491-3492
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3493-3495
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3496-3497
HexagonItinerariesV66Bypass::Hex_FWD, // 3498
HexagonItinerariesV66Bypass::Hex_FWD, // 3499
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3500-3501
HexagonItinerariesV66Bypass::Hex_FWD, // 3502
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3503-3504
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3505-3507
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3508-3509
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3510-3511
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3512-3514
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3515-3518
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3519-3522
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3523-3527
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3528-3531
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3532-3534
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3535-3538
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3539-3543
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3544-3547
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3548-3550
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3551-3554
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3555-3559
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3560-3563
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3564-3566
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3567-3570
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3571-3575
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3576-3579
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3580-3583
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3584-3588
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3589-3592
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3593-3597
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3598-3601
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3602-3603
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3604-3606
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3607-3609
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3610-3613
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3614-3618
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3619-3622
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3623-3625
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3626-3628
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3629-3632
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3633-3636
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3637-3639
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3640-3643
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3644-3646
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3647-3650
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3651-3654
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3655-3656
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3657-3661
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3662-3663
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3664-3666
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3667-3670
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3671-3673
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3674-3677
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3678-3680
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3681-3684
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3685-3687
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3688-3691
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3692-3694
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3695-3698
HexagonItinerariesV66Bypass::HVX_FWD, // 3699
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3700-3702
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3703-3707
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3708-3711
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3712-3714
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3715-3718
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3719-3722
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3723-3727
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3728-3730
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3731-3734
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3735-3738
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3739-3743
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3744-3746
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3747-3749
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3750-3751
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3752-3755
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3756-3760
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3761-3764
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3765-3769
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3770-3773
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3774-3775
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3776-3778
HexagonItinerariesV66Bypass::Hex_FWD, // 3779
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3780-3781
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3782-3783
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3784-3786
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3787-3789
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3790-3793
HexagonItinerariesV66Bypass::Hex_FWD, // 3794
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3795-3796
HexagonItinerariesV66Bypass::Hex_FWD, // 3797
HexagonItinerariesV66Bypass::Hex_FWD, // 3798
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3799-3800
HexagonItinerariesV66Bypass::Hex_FWD, // 3801
 0 // End bypass tables
};

static const llvm::InstrItinerary HexagonItinerariesV60[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 1, 4 }, // 1 tc_679309b8
  { 1, 2, 3, 4, 7 }, // 2 PSEUDO
  { 1, 2, 3, 7, 9 }, // 3 tc_57890846
  { 1, 2, 3, 9, 13 }, // 4 tc_4c5ba658
  { 1, 2, 3, 13, 17 }, // 5 tc_05c070ec
  { 1, 2, 3, 17, 20 }, // 6 tc_5a2711e5
  { 1, 2, 3, 20, 23 }, // 7 tc_1ae57e39
  { 1, 1, 2, 23, 26 }, // 8 tc_946df596
  { 1, 1, 2, 26, 29 }, // 9 tc_85d5d03f
  { 1, 2, 3, 29, 32 }, // 10 tc_56f114f4
  { 1, 1, 2, 32, 35 }, // 11 tc_640086b5
  { 1, 3, 4, 35, 38 }, // 12 DUPLEX
  { 1, 4, 5, 38, 39 }, // 13 tc_ENDLOOP
  { 1, 2, 3, 0, 0 }, // 14 tc_1b6f7cec
  { 1, 1, 2, 39, 41 }, // 15 tc_db2bce9c
  { 1, 5, 6, 41, 43 }, // 16 tc_85c9c08f
  { 1, 5, 6, 43, 46 }, // 17 tc_b9e09e03
  { 1, 6, 7, 46, 50 }, // 18 tc_5ef37dc4
  { 1, 6, 7, 50, 53 }, // 19 tc_17e0d2cd
  { 1, 6, 7, 53, 57 }, // 20 tc_44d3da28
  { 1, 3, 4, 57, 60 }, // 21 tc_7186d325
  { 1, 3, 4, 60, 63 }, // 22 tc_096199d3
  { 1, 3, 4, 63, 66 }, // 23 tc_2b8da4c2
  { 1, 3, 4, 66, 69 }, // 24 tc_9da59d12
  { 1, 3, 4, 69, 70 }, // 25 tc_4d5fa3a1
  { 1, 3, 4, 70, 71 }, // 26 tc_e06f432a
  { 1, 6, 7, 71, 73 }, // 27 tc_15aa71c5
  { 1, 3, 4, 73, 75 }, // 28 tc_675e4897
  { 1, 6, 7, 75, 77 }, // 29 LD_tc_ld_SLOT01
  { 1, 1, 2, 77, 80 }, // 30 tc_c8ce0b5c
  { 1, 1, 2, 80, 83 }, // 31 tc_bafaade3
  { 1, 1, 2, 83, 87 }, // 32 tc_d773585a
  { 1, 1, 2, 87, 88 }, // 33 tc_4ae7b58b
  { 1, 6, 7, 88, 93 }, // 34 tc_e93a3d71
  { 1, 7, 9, 93, 96 }, // 35 tc_56c4f9fe
  { 1, 6, 7, 96, 101 }, // 36 tc_e86aa961
  { 1, 6, 7, 101, 105 }, // 37 tc_da97ee82
  { 1, 5, 6, 105, 106 }, // 38 tc_d5b7b0c1
  { 1, 9, 11, 106, 109 }, // 39 tc_db5555f3
  { 1, 11, 14, 109, 112 }, // 40 tc_c0749f3c
  { 1, 14, 16, 112, 115 }, // 41 PSEUDOM
  { 1, 7, 9, 115, 118 }, // 42 tc_3aacf4a8
  { 1, 16, 19, 118, 121 }, // 43 tc_c5dba46e
  { 1, 9, 11, 121, 125 }, // 44 tc_af25efd9
  { 1, 1, 2, 125, 128 }, // 45 tc_002cb246
  { 1, 6, 7, 128, 132 }, // 46 tc_f8e23f0b
  { 1, 3, 4, 132, 136 }, // 47 tc_8fb7ab1b
  { 1, 6, 7, 136, 139 }, // 48 tc_30b9bb4a
  { 1, 3, 4, 139, 142 }, // 49 tc_be9602ff
  { 1, 1, 2, 142, 147 }, // 50 tc_bfec0f01
  { 1, 3, 4, 147, 151 }, // 51 tc_c79a189f
  { 1, 6, 7, 151, 154 }, // 52 tc_b83e6d73
  { 1, 6, 7, 154, 158 }, // 53 tc_0b2be201
  { 1, 6, 7, 158, 162 }, // 54 tc_c4f596e3
  { 1, 3, 4, 162, 165 }, // 55 tc_b44ecf75
  { 1, 6, 7, 165, 168 }, // 56 ST_tc_st_SLOT01
  { 1, 19, 21, 168, 172 }, // 57 CVI_VA
  { 1, 7, 9, 172, 174 }, // 58 tc_0ec46cf9
  { 1, 21, 23, 174, 178 }, // 59 tc_16ff9ef8
  { 1, 9, 11, 178, 179 }, // 60 tc_718b5c53
  { 1, 23, 27, 0, 0 }, // 61 CVI_GATHER_PSEUDO
  { 1, 3, 4, 179, 180 }, // 62 tc_d63f638c
  { 1, 1, 2, 180, 182 }, // 63 tc_cf8126ae
  { 1, 1, 2, 182, 185 }, // 64 tc_779080bf
  { 1, 1, 2, 185, 188 }, // 65 tc_4414d8b1
  { 1, 2, 3, 188, 191 }, // 66 tc_61830035
  { 1, 1, 2, 191, 193 }, // 67 tc_0ae0825c
  { 1, 2, 3, 0, 0 }, // 68 tc_2eabeebe
  { 1, 2, 3, 193, 196 }, // 69 tc_1c80410a
  { 1, 2, 3, 196, 199 }, // 70 tc_d08ee0f4
  { 1, 27, 28, 199, 201 }, // 71 tc_b9272d6c
  { 1, 27, 28, 201, 203 }, // 72 tc_434c8e1e
  { 1, 1, 2, 203, 206 }, // 73 tc_6132ba3d
  { 1, 1, 2, 206, 209 }, // 74 tc_e4a7f9f0
  { 1, 1, 2, 209, 214 }, // 75 tc_9c3ecd83
  { 1, 1, 2, 214, 217 }, // 76 tc_643b4717
  { 1, 2, 3, 217, 218 }, // 77 tc_862b3e70
  { 1, 1, 2, 218, 221 }, // 78 tc_4837eefb
  { 1, 1, 2, 221, 225 }, // 79 tc_5b54b33f
  { 1, 1, 2, 225, 230 }, // 80 tc_d1aa9eaa
  { 1, 1, 2, 230, 233 }, // 81 tc_1fc97744
  { 1, 1, 2, 233, 237 }, // 82 tc_f9058dd7
  { 1, 1, 2, 237, 239 }, // 83 tc_de554571
  { 1, 2, 3, 239, 242 }, // 84 tc_de4df740
  { 1, 1, 2, 242, 244 }, // 85 tc_cfd8378a
  { 1, 1, 2, 244, 248 }, // 86 tc_b4b5c03a
  { 1, 27, 28, 248, 250 }, // 87 tc_a813cf9a
  { 1, 1, 2, 250, 254 }, // 88 tc_b31c2e97
  { 1, 1, 2, 254, 256 }, // 89 tc_3a867367
  { 1, 1, 2, 256, 259 }, // 90 tc_2f7c551d
  { 1, 1, 2, 259, 261 }, // 91 tc_9e313203
  { 1, 1, 2, 261, 264 }, // 92 tc_3b470976
  { 1, 1, 2, 264, 268 }, // 93 tc_a58fd5cc
  { 1, 1, 2, 268, 273 }, // 94 tc_4560740b
  { 1, 1, 2, 273, 276 }, // 95 tc_b8bffe55
  { 1, 1, 2, 276, 279 }, // 96 tc_88b4f13d
  { 1, 1, 2, 279, 283 }, // 97 tc_2ff964b4
  { 1, 27, 28, 283, 285 }, // 98 tc_0d8f5752
  { 1, 27, 28, 285, 287 }, // 99 tc_bcf98408
  { 1, 1, 2, 287, 289 }, // 100 tc_1d81e60e
  { 1, 5, 6, 289, 290 }, // 101 tc_3bd75825
  { 1, 5, 6, 290, 292 }, // 102 tc_1ad90acd
  { 1, 1, 2, 292, 293 }, // 103 tc_ae53734a
  { 1, 1, 2, 293, 295 }, // 104 tc_20cdee80
  { 1, 1, 2, 295, 297 }, // 105 tc_cd374165
  { 1, 5, 6, 297, 299 }, // 106 tc_b51dc29a
  { 1, 5, 6, 299, 301 }, // 107 tc_e78647bd
  { 1, 27, 28, 301, 303 }, // 108 tc_d9d43ecb
  { 1, 27, 28, 303, 305 }, // 109 tc_a9d88b22
  { 1, 27, 28, 305, 307 }, // 110 tc_df3319ed
  { 1, 5, 6, 307, 308 }, // 111 tc_8d9d0154
  { 1, 27, 28, 308, 310 }, // 112 tc_1c4528a2
  { 1, 27, 28, 310, 312 }, // 113 tc_32779c6f
  { 1, 5, 6, 312, 313 }, // 114 tc_fc3999b4
  { 1, 3, 4, 313, 316 }, // 115 tc_9bfd761f
  { 1, 1, 2, 316, 319 }, // 116 tc_56336eb0
  { 1, 3, 4, 319, 322 }, // 117 tc_bd8382d1
  { 1, 1, 2, 322, 325 }, // 118 tc_3d495a39
  { 1, 3, 4, 325, 328 }, // 119 tc_b343892a
  { 1, 1, 2, 328, 331 }, // 120 tc_0663f615
  { 1, 3, 4, 331, 333 }, // 121 tc_8c945be0
  { 1, 1, 2, 333, 335 }, // 122 tc_2332b92e
  { 1, 6, 7, 335, 340 }, // 123 tc_3c76b0ff
  { 1, 6, 7, 340, 346 }, // 124 tc_785f65a7
  { 1, 6, 7, 346, 348 }, // 125 tc_c4db48cb
  { 1, 3, 4, 348, 350 }, // 126 tc_b43e7930
  { 1, 6, 7, 350, 355 }, // 127 tc_e9f3243f
  { 1, 6, 7, 355, 359 }, // 128 tc_7a91e76a
  { 1, 6, 7, 359, 364 }, // 129 tc_a5d4aeec
  { 1, 6, 7, 364, 367 }, // 130 tc_3b5b7ef9
  { 1, 6, 7, 367, 371 }, // 131 tc_bab0eed9
  { 1, 6, 7, 371, 375 }, // 132 tc_bf061958
  { 1, 6, 7, 375, 378 }, // 133 tc_7646c131
  { 1, 6, 7, 378, 383 }, // 134 tc_e4b3cb20
  { 1, 6, 7, 383, 388 }, // 135 tc_25a78932
  { 1, 6, 7, 388, 391 }, // 136 tc_a6b1eca9
  { 1, 1, 2, 391, 395 }, // 137 tc_f675fee8
  { 1, 1, 2, 395, 399 }, // 138 tc_05d3a09b
  { 1, 1, 2, 399, 403 }, // 139 tc_bdceeac1
  { 1, 1, 2, 403, 407 }, // 140 tc_f429765c
  { 1, 1, 2, 407, 411 }, // 141 tc_1a2fd869
  { 1, 1, 2, 411, 414 }, // 142 tc_9461ff31
  { 1, 6, 7, 414, 416 }, // 143 tc_0371abea
  { 1, 3, 4, 416, 418 }, // 144 tc_5bf126a6
  { 1, 1, 2, 418, 420 }, // 145 tc_14b5c689
  { 1, 1, 2, 420, 423 }, // 146 tc_76851da1
  { 1, 6, 7, 423, 428 }, // 147 tc_24b66c99
  { 1, 6, 7, 428, 433 }, // 148 tc_53559e35
  { 1, 3, 4, 433, 438 }, // 149 tc_838b34ea
  { 1, 3, 4, 438, 443 }, // 150 tc_d65dbf51
  { 1, 3, 4, 443, 448 }, // 151 tc_d5c0729a
  { 1, 3, 4, 448, 451 }, // 152 tc_5abb5e3f
  { 1, 6, 7, 451, 454 }, // 153 tc_362c6592
  { 1, 6, 7, 454, 459 }, // 154 tc_3962fa26
  { 1, 6, 7, 459, 462 }, // 155 tc_da4a37ed
  { 1, 6, 7, 462, 467 }, // 156 tc_40116ca8
  { 1, 3, 4, 467, 470 }, // 157 tc_4b68bce4
  { 1, 3, 4, 470, 475 }, // 158 tc_e95795ec
  { 1, 3, 4, 475, 478 }, // 159 tc_d2e63d61
  { 1, 3, 4, 478, 483 }, // 160 tc_b90a29b1
  { 1, 6, 7, 483, 487 }, // 161 tc_5aee39f7
  { 1, 6, 7, 487, 491 }, // 162 tc_14b272fa
  { 1, 3, 4, 491, 495 }, // 163 tc_67435e81
  { 1, 3, 4, 495, 499 }, // 164 tc_fcc3ddf9
  { 1, 1, 2, 499, 503 }, // 165 tc_13bfbcf9
  { 1, 1, 2, 503, 508 }, // 166 tc_9debc299
  { 1, 1, 2, 508, 510 }, // 167 tc_703e822c
  { 1, 1, 2, 510, 514 }, // 168 tc_784490da
  { 1, 1, 2, 514, 516 }, // 169 tc_a1c00888
  { 1, 6, 7, 516, 519 }, // 170 tc_0a705168
  { 1, 6, 7, 519, 521 }, // 171 tc_9fc3dae0
  { 1, 6, 7, 521, 522 }, // 172 tc_a1123dda
  { 1, 6, 7, 522, 523 }, // 173 tc_8b3e402a
  { 1, 6, 7, 523, 525 }, // 174 tc_5b7c0967
  { 1, 6, 7, 0, 0 }, // 175 tc_39dfefe8
  { 1, 3, 4, 0, 0 }, // 176 tc_b4407292
  { 1, 3, 4, 0, 0 }, // 177 tc_36153880
  { 1, 3, 4, 525, 526 }, // 178 tc_49a8207d
  { 1, 6, 7, 526, 528 }, // 179 tc_89e94ad3
  { 1, 28, 30, 528, 531 }, // 180 tc_540c3da3
  { 1, 30, 32, 531, 533 }, // 181 tc_c4edf264
  { 1, 32, 34, 533, 535 }, // 182 tc_5bf8afbb
  { 1, 34, 38, 535, 538 }, // 183 tc_a7e6707d
  { 1, 34, 38, 538, 542 }, // 184 tc_3c56e5ce
  { 1, 11, 14, 542, 546 }, // 185 tc_abe8c3b2
  { 1, 11, 14, 546, 551 }, // 186 tc_453fe68d
  { 1, 11, 14, 551, 555 }, // 187 tc_1ba8a0cd
  { 1, 38, 40, 555, 558 }, // 188 tc_52447ecc
  { 1, 38, 40, 558, 562 }, // 189 tc_3904b926
  { 1, 38, 40, 562, 567 }, // 190 tc_b9db8205
  { 1, 38, 40, 567, 571 }, // 191 tc_663c80a7
  { 1, 40, 44, 571, 574 }, // 192 tc_f21e8abb
  { 1, 40, 44, 574, 578 }, // 193 tc_131f1c81
  { 1, 40, 44, 578, 583 }, // 194 tc_c7039829
  { 1, 40, 44, 583, 587 }, // 195 tc_e2d2e9e5
  { 1, 44, 46, 587, 590 }, // 196 tc_ab23f776
  { 1, 44, 46, 590, 594 }, // 197 tc_7177e272
  { 1, 44, 46, 594, 599 }, // 198 tc_e99d4c2e
  { 1, 44, 46, 599, 603 }, // 199 tc_6942b6e0
  { 1, 16, 19, 603, 607 }, // 200 tc_a02a10a8
  { 1, 16, 19, 607, 612 }, // 201 tc_54a0dc47
  { 1, 16, 19, 612, 616 }, // 202 tc_447d9895
  { 1, 16, 19, 616, 621 }, // 203 tc_191381c1
  { 1, 16, 19, 621, 625 }, // 204 tc_3e2aaafc
  { 1, 44, 46, 625, 627 }, // 205 tc_3ce09744
  { 1, 44, 46, 627, 630 }, // 206 tc_20a4bbec
  { 1, 30, 32, 630, 633 }, // 207 tc_c127de3a
  { 1, 7, 9, 633, 637 }, // 208 tc_257f6f7c
  { 1, 7, 9, 637, 642 }, // 209 tc_7e6a3e89
  { 1, 7, 9, 642, 646 }, // 210 tc_e35c1e93
  { 1, 21, 23, 646, 649 }, // 211 tc_05ca8cfd
  { 1, 46, 48, 649, 652 }, // 212 tc_d8287c14
  { 1, 46, 48, 652, 656 }, // 213 tc_08a4f1b6
  { 1, 32, 34, 656, 660 }, // 214 tc_56e64202
  { 1, 30, 32, 660, 663 }, // 215 tc_ac4046bc
  { 1, 30, 32, 663, 667 }, // 216 tc_2e8f5f6e
  { 1, 21, 23, 667, 670 }, // 217 tc_7417e785
  { 1, 21, 23, 670, 674 }, // 218 tc_309dbb4f
  { 1, 48, 50, 674, 678 }, // 219 tc_df80eeb0
  { 1, 21, 23, 678, 680 }, // 220 tc_51d0ecc3
  { 1, 48, 50, 680, 685 }, // 221 tc_561aaa58
  { 1, 32, 34, 685, 687 }, // 222 tc_946013d8
  { 1, 32, 34, 687, 690 }, // 223 tc_46d6c3e0
  { 1, 48, 50, 690, 694 }, // 224 tc_87adc037
  { 1, 30, 32, 694, 697 }, // 225 tc_649072c2
  { 1, 30, 32, 697, 701 }, // 226 tc_b091f1c6
  { 1, 46, 48, 701, 704 }, // 227 tc_0b04c6c7
  { 1, 46, 48, 704, 708 }, // 228 tc_660769f1
  { 1, 50, 53, 708, 711 }, // 229 tc_e8797b98
  { 1, 50, 53, 711, 715 }, // 230 tc_05ac6f98
  { 1, 53, 56, 715, 718 }, // 231 tc_05058f6f
  { 1, 53, 56, 718, 722 }, // 232 tc_fd7610da
  { 1, 56, 58, 0, 0 }, // 233 tc_1381a97c
  { 1, 56, 58, 722, 723 }, // 234 tc_e3f68a46
  { 1, 58, 60, 723, 726 }, // 235 tc_f1de44ef
  { 1, 48, 50, 726, 731 }, // 236 tc_9d1dc972
  { 1, 58, 60, 731, 735 }, // 237 tc_90bcc1db
  { 1, 60, 63, 735, 738 }, // 238 tc_cd94bfe0
  { 1, 60, 63, 738, 742 }, // 239 tc_15fdf750
  { 1, 46, 48, 742, 746 }, // 240 tc_1ad8a370
  { 1, 46, 48, 746, 751 }, // 241 tc_e675c45a
  { 1, 63, 65, 751, 754 }, // 242 tc_61bf7c03
  { 1, 63, 65, 754, 758 }, // 243 tc_933f2b39
  { 1, 63, 65, 758, 762 }, // 244 tc_26a377fe
  { 1, 63, 65, 762, 767 }, // 245 tc_2d4051cd
  { 1, 32, 34, 767, 770 }, // 246 tc_6e7fa133
  { 1, 21, 23, 770, 773 }, // 247 tc_8772086c
  { 1, 9, 11, 773, 775 }, // 248 tc_b4416217
  { 1, 16, 19, 775, 779 }, // 249 tc_9f363d21
  { 1, 16, 19, 779, 784 }, // 250 tc_8e420e4d
  { 1, 65, 68, 784, 788 }, // 251 tc_7273323b
  { 1, 65, 68, 788, 793 }, // 252 tc_58d21193
  { 1, 9, 11, 793, 797 }, // 253 tc_71646d06
  { 1, 48, 50, 797, 799 }, // 254 tc_04da405a
  { 1, 48, 50, 799, 802 }, // 255 tc_2c745bb8
  { 1, 56, 58, 802, 803 }, // 256 tc_b28e51aa
  { 1, 56, 58, 803, 805 }, // 257 tc_767c4e9d
  { 1, 68, 70, 805, 807 }, // 258 tc_e699ae41
  { 1, 68, 70, 807, 810 }, // 259 tc_a0dbea28
  { 1, 68, 70, 810, 813 }, // 260 tc_dd5b0695
  { 1, 68, 70, 813, 817 }, // 261 tc_3ad719fb
  { 1, 3, 4, 0, 0 }, // 262 tc_8c99de45
  { 1, 27, 28, 0, 0 }, // 263 tc_9ad9998f
  { 1, 3, 4, 817, 818 }, // 264 tc_b857bf4e
  { 1, 3, 4, 818, 820 }, // 265 tc_9ca930f7
  { 1, 5, 6, 820, 821 }, // 266 tc_5d7f5414
  { 1, 5, 6, 0, 0 }, // 267 tc_8b121f4a
  { 1, 27, 28, 821, 822 }, // 268 tc_174516e8
  { 1, 3, 4, 822, 824 }, // 269 tc_fe211424
  { 1, 27, 28, 824, 825 }, // 270 tc_6b25e783
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV5[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 70, 71, 0, 0 }, // 1 tc_679309b8
  { 1, 71, 72, 0, 0 }, // 2 PSEUDO
  { 1, 71, 72, 0, 0 }, // 3 tc_57890846
  { 1, 71, 72, 0, 0 }, // 4 tc_4c5ba658
  { 1, 71, 72, 0, 0 }, // 5 tc_05c070ec
  { 1, 71, 72, 0, 0 }, // 6 tc_5a2711e5
  { 1, 71, 72, 0, 0 }, // 7 tc_1ae57e39
  { 1, 70, 71, 0, 0 }, // 8 tc_946df596
  { 1, 70, 71, 0, 0 }, // 9 tc_85d5d03f
  { 1, 71, 72, 0, 0 }, // 10 tc_56f114f4
  { 1, 70, 71, 0, 0 }, // 11 tc_640086b5
  { 1, 72, 73, 0, 0 }, // 12 DUPLEX
  { 1, 73, 74, 0, 0 }, // 13 tc_ENDLOOP
  { 1, 71, 72, 0, 0 }, // 14 tc_1b6f7cec
  { 1, 70, 71, 0, 0 }, // 15 tc_db2bce9c
  { 1, 74, 75, 0, 0 }, // 16 tc_85c9c08f
  { 1, 74, 75, 0, 0 }, // 17 tc_b9e09e03
  { 1, 75, 76, 0, 0 }, // 18 tc_5ef37dc4
  { 1, 75, 76, 0, 0 }, // 19 tc_17e0d2cd
  { 1, 75, 76, 0, 0 }, // 20 tc_44d3da28
  { 1, 72, 73, 0, 0 }, // 21 tc_7186d325
  { 1, 72, 73, 0, 0 }, // 22 tc_096199d3
  { 1, 72, 73, 0, 0 }, // 23 tc_2b8da4c2
  { 1, 72, 73, 0, 0 }, // 24 tc_9da59d12
  { 1, 72, 73, 0, 0 }, // 25 tc_4d5fa3a1
  { 1, 72, 73, 0, 0 }, // 26 tc_e06f432a
  { 1, 75, 76, 0, 0 }, // 27 tc_15aa71c5
  { 1, 72, 73, 0, 0 }, // 28 tc_675e4897
  { 1, 75, 76, 0, 0 }, // 29 LD_tc_ld_SLOT01
  { 1, 70, 71, 0, 0 }, // 30 tc_c8ce0b5c
  { 1, 70, 71, 0, 0 }, // 31 tc_bafaade3
  { 1, 70, 71, 0, 0 }, // 32 tc_d773585a
  { 1, 70, 71, 0, 0 }, // 33 tc_4ae7b58b
  { 1, 75, 76, 0, 0 }, // 34 tc_e93a3d71
  { 0, 0, 0, 0, 0 }, // 35 tc_56c4f9fe
  { 1, 75, 76, 0, 0 }, // 36 tc_e86aa961
  { 1, 75, 76, 0, 0 }, // 37 tc_da97ee82
  { 1, 74, 75, 0, 0 }, // 38 tc_d5b7b0c1
  { 0, 0, 0, 0, 0 }, // 39 tc_db5555f3
  { 0, 0, 0, 0, 0 }, // 40 tc_c0749f3c
  { 1, 76, 78, 0, 0 }, // 41 PSEUDOM
  { 0, 0, 0, 0, 0 }, // 42 tc_3aacf4a8
  { 0, 0, 0, 0, 0 }, // 43 tc_c5dba46e
  { 0, 0, 0, 0, 0 }, // 44 tc_af25efd9
  { 1, 70, 71, 0, 0 }, // 45 tc_002cb246
  { 1, 75, 76, 0, 0 }, // 46 tc_f8e23f0b
  { 1, 72, 73, 0, 0 }, // 47 tc_8fb7ab1b
  { 1, 75, 76, 0, 0 }, // 48 tc_30b9bb4a
  { 1, 72, 73, 0, 0 }, // 49 tc_be9602ff
  { 1, 70, 71, 0, 0 }, // 50 tc_bfec0f01
  { 1, 72, 73, 0, 0 }, // 51 tc_c79a189f
  { 1, 75, 76, 0, 0 }, // 52 tc_b83e6d73
  { 1, 75, 76, 0, 0 }, // 53 tc_0b2be201
  { 1, 75, 76, 0, 0 }, // 54 tc_c4f596e3
  { 1, 72, 73, 0, 0 }, // 55 tc_b44ecf75
  { 1, 75, 76, 0, 0 }, // 56 ST_tc_st_SLOT01
  { 0, 0, 0, 0, 0 }, // 57 CVI_VA
  { 0, 0, 0, 0, 0 }, // 58 tc_0ec46cf9
  { 0, 0, 0, 0, 0 }, // 59 tc_16ff9ef8
  { 0, 0, 0, 0, 0 }, // 60 tc_718b5c53
  { 0, 0, 0, 0, 0 }, // 61 CVI_GATHER_PSEUDO
  { 1, 72, 73, 0, 0 }, // 62 tc_d63f638c
  { 1, 70, 71, 0, 0 }, // 63 tc_cf8126ae
  { 1, 70, 71, 0, 0 }, // 64 tc_779080bf
  { 1, 70, 71, 0, 0 }, // 65 tc_4414d8b1
  { 1, 71, 72, 0, 0 }, // 66 tc_61830035
  { 1, 70, 71, 0, 0 }, // 67 tc_0ae0825c
  { 1, 71, 72, 0, 0 }, // 68 tc_2eabeebe
  { 1, 71, 72, 0, 0 }, // 69 tc_1c80410a
  { 1, 71, 72, 0, 0 }, // 70 tc_d08ee0f4
  { 1, 78, 79, 0, 0 }, // 71 tc_b9272d6c
  { 1, 78, 79, 0, 0 }, // 72 tc_434c8e1e
  { 1, 70, 71, 0, 0 }, // 73 tc_6132ba3d
  { 1, 70, 71, 0, 0 }, // 74 tc_e4a7f9f0
  { 1, 70, 71, 0, 0 }, // 75 tc_9c3ecd83
  { 1, 70, 71, 0, 0 }, // 76 tc_643b4717
  { 1, 71, 72, 0, 0 }, // 77 tc_862b3e70
  { 1, 70, 71, 0, 0 }, // 78 tc_4837eefb
  { 1, 70, 71, 0, 0 }, // 79 tc_5b54b33f
  { 1, 70, 71, 0, 0 }, // 80 tc_d1aa9eaa
  { 1, 70, 71, 0, 0 }, // 81 tc_1fc97744
  { 1, 70, 71, 0, 0 }, // 82 tc_f9058dd7
  { 1, 70, 71, 0, 0 }, // 83 tc_de554571
  { 1, 71, 72, 0, 0 }, // 84 tc_de4df740
  { 1, 70, 71, 0, 0 }, // 85 tc_cfd8378a
  { 1, 70, 71, 0, 0 }, // 86 tc_b4b5c03a
  { 1, 78, 79, 0, 0 }, // 87 tc_a813cf9a
  { 1, 70, 71, 0, 0 }, // 88 tc_b31c2e97
  { 1, 70, 71, 0, 0 }, // 89 tc_3a867367
  { 1, 70, 71, 0, 0 }, // 90 tc_2f7c551d
  { 1, 70, 71, 0, 0 }, // 91 tc_9e313203
  { 1, 70, 71, 0, 0 }, // 92 tc_3b470976
  { 1, 70, 71, 0, 0 }, // 93 tc_a58fd5cc
  { 1, 70, 71, 0, 0 }, // 94 tc_4560740b
  { 1, 70, 71, 0, 0 }, // 95 tc_b8bffe55
  { 1, 70, 71, 0, 0 }, // 96 tc_88b4f13d
  { 1, 70, 71, 0, 0 }, // 97 tc_2ff964b4
  { 1, 78, 79, 0, 0 }, // 98 tc_0d8f5752
  { 1, 78, 79, 0, 0 }, // 99 tc_bcf98408
  { 1, 70, 71, 0, 0 }, // 100 tc_1d81e60e
  { 1, 74, 75, 0, 0 }, // 101 tc_3bd75825
  { 1, 74, 75, 0, 0 }, // 102 tc_1ad90acd
  { 1, 70, 71, 0, 0 }, // 103 tc_ae53734a
  { 1, 70, 71, 0, 0 }, // 104 tc_20cdee80
  { 1, 70, 71, 0, 0 }, // 105 tc_cd374165
  { 1, 74, 75, 0, 0 }, // 106 tc_b51dc29a
  { 1, 74, 75, 0, 0 }, // 107 tc_e78647bd
  { 1, 78, 79, 0, 0 }, // 108 tc_d9d43ecb
  { 1, 78, 79, 0, 0 }, // 109 tc_a9d88b22
  { 1, 78, 79, 0, 0 }, // 110 tc_df3319ed
  { 1, 74, 75, 0, 0 }, // 111 tc_8d9d0154
  { 1, 78, 79, 0, 0 }, // 112 tc_1c4528a2
  { 1, 78, 79, 0, 0 }, // 113 tc_32779c6f
  { 1, 74, 75, 0, 0 }, // 114 tc_fc3999b4
  { 1, 72, 73, 0, 0 }, // 115 tc_9bfd761f
  { 1, 70, 71, 0, 0 }, // 116 tc_56336eb0
  { 1, 72, 73, 0, 0 }, // 117 tc_bd8382d1
  { 1, 70, 71, 0, 0 }, // 118 tc_3d495a39
  { 1, 72, 73, 0, 0 }, // 119 tc_b343892a
  { 1, 70, 71, 0, 0 }, // 120 tc_0663f615
  { 1, 72, 73, 0, 0 }, // 121 tc_8c945be0
  { 1, 70, 71, 0, 0 }, // 122 tc_2332b92e
  { 1, 75, 76, 0, 0 }, // 123 tc_3c76b0ff
  { 1, 75, 76, 0, 0 }, // 124 tc_785f65a7
  { 1, 75, 76, 0, 0 }, // 125 tc_c4db48cb
  { 1, 72, 73, 0, 0 }, // 126 tc_b43e7930
  { 1, 75, 76, 0, 0 }, // 127 tc_e9f3243f
  { 1, 75, 76, 0, 0 }, // 128 tc_7a91e76a
  { 1, 75, 76, 0, 0 }, // 129 tc_a5d4aeec
  { 1, 75, 76, 0, 0 }, // 130 tc_3b5b7ef9
  { 1, 75, 76, 0, 0 }, // 131 tc_bab0eed9
  { 1, 75, 76, 0, 0 }, // 132 tc_bf061958
  { 1, 75, 76, 0, 0 }, // 133 tc_7646c131
  { 1, 75, 76, 0, 0 }, // 134 tc_e4b3cb20
  { 1, 75, 76, 0, 0 }, // 135 tc_25a78932
  { 1, 75, 76, 0, 0 }, // 136 tc_a6b1eca9
  { 1, 70, 71, 0, 0 }, // 137 tc_f675fee8
  { 1, 70, 71, 0, 0 }, // 138 tc_05d3a09b
  { 1, 70, 71, 0, 0 }, // 139 tc_bdceeac1
  { 1, 70, 71, 0, 0 }, // 140 tc_f429765c
  { 1, 70, 71, 0, 0 }, // 141 tc_1a2fd869
  { 1, 70, 71, 0, 0 }, // 142 tc_9461ff31
  { 1, 75, 76, 0, 0 }, // 143 tc_0371abea
  { 1, 72, 73, 0, 0 }, // 144 tc_5bf126a6
  { 1, 70, 71, 0, 0 }, // 145 tc_14b5c689
  { 1, 70, 71, 0, 0 }, // 146 tc_76851da1
  { 1, 75, 76, 0, 0 }, // 147 tc_24b66c99
  { 1, 75, 76, 0, 0 }, // 148 tc_53559e35
  { 1, 72, 73, 0, 0 }, // 149 tc_838b34ea
  { 1, 72, 73, 0, 0 }, // 150 tc_d65dbf51
  { 1, 72, 73, 0, 0 }, // 151 tc_d5c0729a
  { 1, 72, 73, 0, 0 }, // 152 tc_5abb5e3f
  { 1, 75, 76, 0, 0 }, // 153 tc_362c6592
  { 1, 75, 76, 0, 0 }, // 154 tc_3962fa26
  { 1, 75, 76, 0, 0 }, // 155 tc_da4a37ed
  { 1, 75, 76, 0, 0 }, // 156 tc_40116ca8
  { 1, 72, 73, 0, 0 }, // 157 tc_4b68bce4
  { 1, 72, 73, 0, 0 }, // 158 tc_e95795ec
  { 1, 72, 73, 0, 0 }, // 159 tc_d2e63d61
  { 1, 72, 73, 0, 0 }, // 160 tc_b90a29b1
  { 1, 75, 76, 0, 0 }, // 161 tc_5aee39f7
  { 1, 75, 76, 0, 0 }, // 162 tc_14b272fa
  { 1, 72, 73, 0, 0 }, // 163 tc_67435e81
  { 1, 72, 73, 0, 0 }, // 164 tc_fcc3ddf9
  { 1, 70, 71, 0, 0 }, // 165 tc_13bfbcf9
  { 1, 70, 71, 0, 0 }, // 166 tc_9debc299
  { 1, 70, 71, 0, 0 }, // 167 tc_703e822c
  { 1, 70, 71, 0, 0 }, // 168 tc_784490da
  { 1, 70, 71, 0, 0 }, // 169 tc_a1c00888
  { 1, 75, 76, 0, 0 }, // 170 tc_0a705168
  { 1, 75, 76, 0, 0 }, // 171 tc_9fc3dae0
  { 1, 75, 76, 0, 0 }, // 172 tc_a1123dda
  { 1, 75, 76, 0, 0 }, // 173 tc_8b3e402a
  { 1, 75, 76, 0, 0 }, // 174 tc_5b7c0967
  { 1, 75, 76, 0, 0 }, // 175 tc_39dfefe8
  { 1, 72, 73, 0, 0 }, // 176 tc_b4407292
  { 1, 72, 73, 0, 0 }, // 177 tc_36153880
  { 1, 72, 73, 0, 0 }, // 178 tc_49a8207d
  { 1, 75, 76, 0, 0 }, // 179 tc_89e94ad3
  { 0, 0, 0, 0, 0 }, // 180 tc_540c3da3
  { 0, 0, 0, 0, 0 }, // 181 tc_c4edf264
  { 0, 0, 0, 0, 0 }, // 182 tc_5bf8afbb
  { 0, 0, 0, 0, 0 }, // 183 tc_a7e6707d
  { 0, 0, 0, 0, 0 }, // 184 tc_3c56e5ce
  { 0, 0, 0, 0, 0 }, // 185 tc_abe8c3b2
  { 0, 0, 0, 0, 0 }, // 186 tc_453fe68d
  { 0, 0, 0, 0, 0 }, // 187 tc_1ba8a0cd
  { 0, 0, 0, 0, 0 }, // 188 tc_52447ecc
  { 0, 0, 0, 0, 0 }, // 189 tc_3904b926
  { 0, 0, 0, 0, 0 }, // 190 tc_b9db8205
  { 0, 0, 0, 0, 0 }, // 191 tc_663c80a7
  { 0, 0, 0, 0, 0 }, // 192 tc_f21e8abb
  { 0, 0, 0, 0, 0 }, // 193 tc_131f1c81
  { 0, 0, 0, 0, 0 }, // 194 tc_c7039829
  { 0, 0, 0, 0, 0 }, // 195 tc_e2d2e9e5
  { 0, 0, 0, 0, 0 }, // 196 tc_ab23f776
  { 0, 0, 0, 0, 0 }, // 197 tc_7177e272
  { 0, 0, 0, 0, 0 }, // 198 tc_e99d4c2e
  { 0, 0, 0, 0, 0 }, // 199 tc_6942b6e0
  { 0, 0, 0, 0, 0 }, // 200 tc_a02a10a8
  { 0, 0, 0, 0, 0 }, // 201 tc_54a0dc47
  { 0, 0, 0, 0, 0 }, // 202 tc_447d9895
  { 0, 0, 0, 0, 0 }, // 203 tc_191381c1
  { 0, 0, 0, 0, 0 }, // 204 tc_3e2aaafc
  { 0, 0, 0, 0, 0 }, // 205 tc_3ce09744
  { 0, 0, 0, 0, 0 }, // 206 tc_20a4bbec
  { 0, 0, 0, 0, 0 }, // 207 tc_c127de3a
  { 0, 0, 0, 0, 0 }, // 208 tc_257f6f7c
  { 0, 0, 0, 0, 0 }, // 209 tc_7e6a3e89
  { 0, 0, 0, 0, 0 }, // 210 tc_e35c1e93
  { 0, 0, 0, 0, 0 }, // 211 tc_05ca8cfd
  { 0, 0, 0, 0, 0 }, // 212 tc_d8287c14
  { 0, 0, 0, 0, 0 }, // 213 tc_08a4f1b6
  { 0, 0, 0, 0, 0 }, // 214 tc_56e64202
  { 0, 0, 0, 0, 0 }, // 215 tc_ac4046bc
  { 0, 0, 0, 0, 0 }, // 216 tc_2e8f5f6e
  { 0, 0, 0, 0, 0 }, // 217 tc_7417e785
  { 0, 0, 0, 0, 0 }, // 218 tc_309dbb4f
  { 0, 0, 0, 0, 0 }, // 219 tc_df80eeb0
  { 0, 0, 0, 0, 0 }, // 220 tc_51d0ecc3
  { 0, 0, 0, 0, 0 }, // 221 tc_561aaa58
  { 0, 0, 0, 0, 0 }, // 222 tc_946013d8
  { 0, 0, 0, 0, 0 }, // 223 tc_46d6c3e0
  { 0, 0, 0, 0, 0 }, // 224 tc_87adc037
  { 0, 0, 0, 0, 0 }, // 225 tc_649072c2
  { 0, 0, 0, 0, 0 }, // 226 tc_b091f1c6
  { 0, 0, 0, 0, 0 }, // 227 tc_0b04c6c7
  { 0, 0, 0, 0, 0 }, // 228 tc_660769f1
  { 0, 0, 0, 0, 0 }, // 229 tc_e8797b98
  { 0, 0, 0, 0, 0 }, // 230 tc_05ac6f98
  { 0, 0, 0, 0, 0 }, // 231 tc_05058f6f
  { 0, 0, 0, 0, 0 }, // 232 tc_fd7610da
  { 0, 0, 0, 0, 0 }, // 233 tc_1381a97c
  { 0, 0, 0, 0, 0 }, // 234 tc_e3f68a46
  { 0, 0, 0, 0, 0 }, // 235 tc_f1de44ef
  { 0, 0, 0, 0, 0 }, // 236 tc_9d1dc972
  { 0, 0, 0, 0, 0 }, // 237 tc_90bcc1db
  { 0, 0, 0, 0, 0 }, // 238 tc_cd94bfe0
  { 0, 0, 0, 0, 0 }, // 239 tc_15fdf750
  { 0, 0, 0, 0, 0 }, // 240 tc_1ad8a370
  { 0, 0, 0, 0, 0 }, // 241 tc_e675c45a
  { 0, 0, 0, 0, 0 }, // 242 tc_61bf7c03
  { 0, 0, 0, 0, 0 }, // 243 tc_933f2b39
  { 0, 0, 0, 0, 0 }, // 244 tc_26a377fe
  { 0, 0, 0, 0, 0 }, // 245 tc_2d4051cd
  { 0, 0, 0, 0, 0 }, // 246 tc_6e7fa133
  { 0, 0, 0, 0, 0 }, // 247 tc_8772086c
  { 0, 0, 0, 0, 0 }, // 248 tc_b4416217
  { 0, 0, 0, 0, 0 }, // 249 tc_9f363d21
  { 0, 0, 0, 0, 0 }, // 250 tc_8e420e4d
  { 0, 0, 0, 0, 0 }, // 251 tc_7273323b
  { 0, 0, 0, 0, 0 }, // 252 tc_58d21193
  { 0, 0, 0, 0, 0 }, // 253 tc_71646d06
  { 0, 0, 0, 0, 0 }, // 254 tc_04da405a
  { 0, 0, 0, 0, 0 }, // 255 tc_2c745bb8
  { 0, 0, 0, 0, 0 }, // 256 tc_b28e51aa
  { 0, 0, 0, 0, 0 }, // 257 tc_767c4e9d
  { 0, 0, 0, 0, 0 }, // 258 tc_e699ae41
  { 0, 0, 0, 0, 0 }, // 259 tc_a0dbea28
  { 0, 0, 0, 0, 0 }, // 260 tc_dd5b0695
  { 0, 0, 0, 0, 0 }, // 261 tc_3ad719fb
  { 1, 72, 73, 0, 0 }, // 262 tc_8c99de45
  { 1, 78, 79, 0, 0 }, // 263 tc_9ad9998f
  { 1, 72, 73, 0, 0 }, // 264 tc_b857bf4e
  { 1, 72, 73, 0, 0 }, // 265 tc_9ca930f7
  { 1, 74, 75, 0, 0 }, // 266 tc_5d7f5414
  { 1, 74, 75, 0, 0 }, // 267 tc_8b121f4a
  { 1, 78, 79, 0, 0 }, // 268 tc_174516e8
  { 1, 72, 73, 0, 0 }, // 269 tc_fe211424
  { 1, 78, 79, 0, 0 }, // 270 tc_6b25e783
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV55[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 79, 80, 825, 828 }, // 1 tc_679309b8
  { 1, 80, 81, 828, 831 }, // 2 PSEUDO
  { 1, 80, 81, 831, 833 }, // 3 tc_57890846
  { 1, 80, 81, 833, 837 }, // 4 tc_4c5ba658
  { 1, 80, 81, 837, 841 }, // 5 tc_05c070ec
  { 1, 80, 81, 841, 844 }, // 6 tc_5a2711e5
  { 1, 80, 81, 844, 847 }, // 7 tc_1ae57e39
  { 1, 79, 80, 847, 850 }, // 8 tc_946df596
  { 1, 79, 80, 850, 853 }, // 9 tc_85d5d03f
  { 1, 80, 81, 853, 856 }, // 10 tc_56f114f4
  { 1, 79, 80, 856, 859 }, // 11 tc_640086b5
  { 1, 81, 82, 859, 862 }, // 12 DUPLEX
  { 1, 82, 83, 862, 863 }, // 13 tc_ENDLOOP
  { 1, 80, 81, 0, 0 }, // 14 tc_1b6f7cec
  { 1, 79, 80, 863, 865 }, // 15 tc_db2bce9c
  { 1, 83, 84, 865, 867 }, // 16 tc_85c9c08f
  { 1, 83, 84, 867, 870 }, // 17 tc_b9e09e03
  { 1, 84, 85, 870, 874 }, // 18 tc_5ef37dc4
  { 1, 84, 85, 874, 877 }, // 19 tc_17e0d2cd
  { 1, 84, 85, 877, 881 }, // 20 tc_44d3da28
  { 1, 81, 82, 881, 884 }, // 21 tc_7186d325
  { 1, 81, 82, 884, 887 }, // 22 tc_096199d3
  { 1, 81, 82, 887, 890 }, // 23 tc_2b8da4c2
  { 1, 81, 82, 890, 893 }, // 24 tc_9da59d12
  { 1, 81, 82, 893, 894 }, // 25 tc_4d5fa3a1
  { 1, 81, 82, 894, 895 }, // 26 tc_e06f432a
  { 1, 84, 85, 895, 897 }, // 27 tc_15aa71c5
  { 1, 81, 82, 897, 899 }, // 28 tc_675e4897
  { 1, 84, 85, 899, 901 }, // 29 LD_tc_ld_SLOT01
  { 1, 79, 80, 901, 904 }, // 30 tc_c8ce0b5c
  { 1, 79, 80, 904, 907 }, // 31 tc_bafaade3
  { 1, 79, 80, 907, 911 }, // 32 tc_d773585a
  { 1, 79, 80, 911, 912 }, // 33 tc_4ae7b58b
  { 1, 84, 85, 912, 917 }, // 34 tc_e93a3d71
  { 0, 0, 0, 0, 0 }, // 35 tc_56c4f9fe
  { 1, 84, 85, 917, 922 }, // 36 tc_e86aa961
  { 1, 84, 85, 922, 926 }, // 37 tc_da97ee82
  { 1, 83, 84, 926, 927 }, // 38 tc_d5b7b0c1
  { 0, 0, 0, 0, 0 }, // 39 tc_db5555f3
  { 0, 0, 0, 0, 0 }, // 40 tc_c0749f3c
  { 1, 85, 87, 927, 930 }, // 41 PSEUDOM
  { 0, 0, 0, 0, 0 }, // 42 tc_3aacf4a8
  { 0, 0, 0, 0, 0 }, // 43 tc_c5dba46e
  { 0, 0, 0, 0, 0 }, // 44 tc_af25efd9
  { 1, 79, 80, 930, 933 }, // 45 tc_002cb246
  { 1, 84, 85, 933, 937 }, // 46 tc_f8e23f0b
  { 1, 81, 82, 937, 941 }, // 47 tc_8fb7ab1b
  { 1, 84, 85, 941, 944 }, // 48 tc_30b9bb4a
  { 1, 81, 82, 944, 947 }, // 49 tc_be9602ff
  { 1, 79, 80, 947, 952 }, // 50 tc_bfec0f01
  { 1, 81, 82, 952, 956 }, // 51 tc_c79a189f
  { 1, 84, 85, 956, 959 }, // 52 tc_b83e6d73
  { 1, 84, 85, 959, 963 }, // 53 tc_0b2be201
  { 1, 84, 85, 963, 967 }, // 54 tc_c4f596e3
  { 1, 81, 82, 967, 970 }, // 55 tc_b44ecf75
  { 1, 84, 85, 970, 973 }, // 56 ST_tc_st_SLOT01
  { 0, 0, 0, 0, 0 }, // 57 CVI_VA
  { 0, 0, 0, 0, 0 }, // 58 tc_0ec46cf9
  { 0, 0, 0, 0, 0 }, // 59 tc_16ff9ef8
  { 0, 0, 0, 0, 0 }, // 60 tc_718b5c53
  { 0, 0, 0, 0, 0 }, // 61 CVI_GATHER_PSEUDO
  { 1, 81, 82, 973, 974 }, // 62 tc_d63f638c
  { 1, 79, 80, 974, 976 }, // 63 tc_cf8126ae
  { 1, 79, 80, 976, 979 }, // 64 tc_779080bf
  { 1, 79, 80, 979, 982 }, // 65 tc_4414d8b1
  { 1, 80, 81, 982, 985 }, // 66 tc_61830035
  { 1, 79, 80, 985, 987 }, // 67 tc_0ae0825c
  { 1, 80, 81, 0, 0 }, // 68 tc_2eabeebe
  { 1, 80, 81, 987, 990 }, // 69 tc_1c80410a
  { 1, 80, 81, 990, 993 }, // 70 tc_d08ee0f4
  { 1, 87, 88, 993, 995 }, // 71 tc_b9272d6c
  { 1, 87, 88, 995, 997 }, // 72 tc_434c8e1e
  { 1, 79, 80, 997, 1000 }, // 73 tc_6132ba3d
  { 1, 79, 80, 1000, 1003 }, // 74 tc_e4a7f9f0
  { 1, 79, 80, 1003, 1008 }, // 75 tc_9c3ecd83
  { 1, 79, 80, 1008, 1011 }, // 76 tc_643b4717
  { 1, 80, 81, 1011, 1012 }, // 77 tc_862b3e70
  { 1, 79, 80, 1012, 1015 }, // 78 tc_4837eefb
  { 1, 79, 80, 1015, 1019 }, // 79 tc_5b54b33f
  { 1, 79, 80, 1019, 1024 }, // 80 tc_d1aa9eaa
  { 1, 79, 80, 1024, 1027 }, // 81 tc_1fc97744
  { 1, 79, 80, 1027, 1031 }, // 82 tc_f9058dd7
  { 1, 79, 80, 1031, 1033 }, // 83 tc_de554571
  { 1, 80, 81, 1033, 1036 }, // 84 tc_de4df740
  { 1, 79, 80, 1036, 1038 }, // 85 tc_cfd8378a
  { 1, 79, 80, 1038, 1042 }, // 86 tc_b4b5c03a
  { 1, 87, 88, 1042, 1044 }, // 87 tc_a813cf9a
  { 1, 79, 80, 1044, 1048 }, // 88 tc_b31c2e97
  { 1, 79, 80, 1048, 1050 }, // 89 tc_3a867367
  { 1, 79, 80, 1050, 1053 }, // 90 tc_2f7c551d
  { 1, 79, 80, 1053, 1055 }, // 91 tc_9e313203
  { 1, 79, 80, 1055, 1058 }, // 92 tc_3b470976
  { 1, 79, 80, 1058, 1062 }, // 93 tc_a58fd5cc
  { 1, 79, 80, 1062, 1067 }, // 94 tc_4560740b
  { 1, 79, 80, 1067, 1070 }, // 95 tc_b8bffe55
  { 1, 79, 80, 1070, 1073 }, // 96 tc_88b4f13d
  { 1, 79, 80, 1073, 1077 }, // 97 tc_2ff964b4
  { 1, 87, 88, 1077, 1079 }, // 98 tc_0d8f5752
  { 1, 87, 88, 1079, 1081 }, // 99 tc_bcf98408
  { 1, 79, 80, 1081, 1083 }, // 100 tc_1d81e60e
  { 1, 83, 84, 1083, 1084 }, // 101 tc_3bd75825
  { 1, 83, 84, 1084, 1086 }, // 102 tc_1ad90acd
  { 1, 79, 80, 1086, 1087 }, // 103 tc_ae53734a
  { 1, 79, 80, 1087, 1089 }, // 104 tc_20cdee80
  { 1, 79, 80, 1089, 1091 }, // 105 tc_cd374165
  { 1, 83, 84, 1091, 1093 }, // 106 tc_b51dc29a
  { 1, 83, 84, 1093, 1095 }, // 107 tc_e78647bd
  { 1, 87, 88, 1095, 1097 }, // 108 tc_d9d43ecb
  { 1, 87, 88, 1097, 1099 }, // 109 tc_a9d88b22
  { 1, 87, 88, 1099, 1101 }, // 110 tc_df3319ed
  { 1, 83, 84, 1101, 1102 }, // 111 tc_8d9d0154
  { 1, 87, 88, 1102, 1104 }, // 112 tc_1c4528a2
  { 1, 87, 88, 1104, 1106 }, // 113 tc_32779c6f
  { 1, 83, 84, 1106, 1107 }, // 114 tc_fc3999b4
  { 1, 81, 82, 1107, 1110 }, // 115 tc_9bfd761f
  { 1, 79, 80, 1110, 1113 }, // 116 tc_56336eb0
  { 1, 81, 82, 1113, 1116 }, // 117 tc_bd8382d1
  { 1, 79, 80, 1116, 1119 }, // 118 tc_3d495a39
  { 1, 81, 82, 1119, 1122 }, // 119 tc_b343892a
  { 1, 79, 80, 1122, 1125 }, // 120 tc_0663f615
  { 1, 81, 82, 1125, 1127 }, // 121 tc_8c945be0
  { 1, 79, 80, 1127, 1129 }, // 122 tc_2332b92e
  { 1, 84, 85, 1129, 1134 }, // 123 tc_3c76b0ff
  { 1, 84, 85, 1134, 1140 }, // 124 tc_785f65a7
  { 1, 84, 85, 1140, 1142 }, // 125 tc_c4db48cb
  { 1, 81, 82, 1142, 1144 }, // 126 tc_b43e7930
  { 1, 84, 85, 1144, 1149 }, // 127 tc_e9f3243f
  { 1, 84, 85, 1149, 1153 }, // 128 tc_7a91e76a
  { 1, 84, 85, 1153, 1158 }, // 129 tc_a5d4aeec
  { 1, 84, 85, 1158, 1161 }, // 130 tc_3b5b7ef9
  { 1, 84, 85, 1161, 1165 }, // 131 tc_bab0eed9
  { 1, 84, 85, 1165, 1169 }, // 132 tc_bf061958
  { 1, 84, 85, 1169, 1172 }, // 133 tc_7646c131
  { 1, 84, 85, 1172, 1177 }, // 134 tc_e4b3cb20
  { 1, 84, 85, 1177, 1182 }, // 135 tc_25a78932
  { 1, 84, 85, 1182, 1185 }, // 136 tc_a6b1eca9
  { 1, 79, 80, 1185, 1189 }, // 137 tc_f675fee8
  { 1, 79, 80, 1189, 1193 }, // 138 tc_05d3a09b
  { 1, 79, 80, 1193, 1197 }, // 139 tc_bdceeac1
  { 1, 79, 80, 1197, 1201 }, // 140 tc_f429765c
  { 1, 79, 80, 1201, 1205 }, // 141 tc_1a2fd869
  { 1, 79, 80, 1205, 1208 }, // 142 tc_9461ff31
  { 1, 84, 85, 1208, 1210 }, // 143 tc_0371abea
  { 1, 81, 82, 1210, 1212 }, // 144 tc_5bf126a6
  { 1, 79, 80, 1212, 1214 }, // 145 tc_14b5c689
  { 1, 79, 80, 1214, 1217 }, // 146 tc_76851da1
  { 1, 84, 85, 1217, 1222 }, // 147 tc_24b66c99
  { 1, 84, 85, 1222, 1227 }, // 148 tc_53559e35
  { 1, 81, 82, 1227, 1232 }, // 149 tc_838b34ea
  { 1, 81, 82, 1232, 1237 }, // 150 tc_d65dbf51
  { 1, 81, 82, 1237, 1242 }, // 151 tc_d5c0729a
  { 1, 81, 82, 1242, 1245 }, // 152 tc_5abb5e3f
  { 1, 84, 85, 1245, 1248 }, // 153 tc_362c6592
  { 1, 84, 85, 1248, 1253 }, // 154 tc_3962fa26
  { 1, 84, 85, 1253, 1256 }, // 155 tc_da4a37ed
  { 1, 84, 85, 1256, 1261 }, // 156 tc_40116ca8
  { 1, 81, 82, 1261, 1264 }, // 157 tc_4b68bce4
  { 1, 81, 82, 1264, 1269 }, // 158 tc_e95795ec
  { 1, 81, 82, 1269, 1272 }, // 159 tc_d2e63d61
  { 1, 81, 82, 1272, 1277 }, // 160 tc_b90a29b1
  { 1, 84, 85, 1277, 1281 }, // 161 tc_5aee39f7
  { 1, 84, 85, 1281, 1285 }, // 162 tc_14b272fa
  { 1, 81, 82, 1285, 1289 }, // 163 tc_67435e81
  { 1, 81, 82, 1289, 1293 }, // 164 tc_fcc3ddf9
  { 1, 79, 80, 1293, 1297 }, // 165 tc_13bfbcf9
  { 1, 79, 80, 1297, 1302 }, // 166 tc_9debc299
  { 1, 79, 80, 1302, 1304 }, // 167 tc_703e822c
  { 1, 79, 80, 1304, 1308 }, // 168 tc_784490da
  { 1, 79, 80, 1308, 1310 }, // 169 tc_a1c00888
  { 1, 84, 85, 1310, 1313 }, // 170 tc_0a705168
  { 1, 84, 85, 1313, 1315 }, // 171 tc_9fc3dae0
  { 1, 84, 85, 1315, 1316 }, // 172 tc_a1123dda
  { 1, 84, 85, 1316, 1317 }, // 173 tc_8b3e402a
  { 1, 84, 85, 1317, 1319 }, // 174 tc_5b7c0967
  { 1, 84, 85, 0, 0 }, // 175 tc_39dfefe8
  { 1, 81, 82, 0, 0 }, // 176 tc_b4407292
  { 1, 81, 82, 0, 0 }, // 177 tc_36153880
  { 1, 81, 82, 1319, 1320 }, // 178 tc_49a8207d
  { 1, 84, 85, 1320, 1322 }, // 179 tc_89e94ad3
  { 0, 0, 0, 0, 0 }, // 180 tc_540c3da3
  { 0, 0, 0, 0, 0 }, // 181 tc_c4edf264
  { 0, 0, 0, 0, 0 }, // 182 tc_5bf8afbb
  { 0, 0, 0, 0, 0 }, // 183 tc_a7e6707d
  { 0, 0, 0, 0, 0 }, // 184 tc_3c56e5ce
  { 0, 0, 0, 0, 0 }, // 185 tc_abe8c3b2
  { 0, 0, 0, 0, 0 }, // 186 tc_453fe68d
  { 0, 0, 0, 0, 0 }, // 187 tc_1ba8a0cd
  { 0, 0, 0, 0, 0 }, // 188 tc_52447ecc
  { 0, 0, 0, 0, 0 }, // 189 tc_3904b926
  { 0, 0, 0, 0, 0 }, // 190 tc_b9db8205
  { 0, 0, 0, 0, 0 }, // 191 tc_663c80a7
  { 0, 0, 0, 0, 0 }, // 192 tc_f21e8abb
  { 0, 0, 0, 0, 0 }, // 193 tc_131f1c81
  { 0, 0, 0, 0, 0 }, // 194 tc_c7039829
  { 0, 0, 0, 0, 0 }, // 195 tc_e2d2e9e5
  { 0, 0, 0, 0, 0 }, // 196 tc_ab23f776
  { 0, 0, 0, 0, 0 }, // 197 tc_7177e272
  { 0, 0, 0, 0, 0 }, // 198 tc_e99d4c2e
  { 0, 0, 0, 0, 0 }, // 199 tc_6942b6e0
  { 0, 0, 0, 0, 0 }, // 200 tc_a02a10a8
  { 0, 0, 0, 0, 0 }, // 201 tc_54a0dc47
  { 0, 0, 0, 0, 0 }, // 202 tc_447d9895
  { 0, 0, 0, 0, 0 }, // 203 tc_191381c1
  { 0, 0, 0, 0, 0 }, // 204 tc_3e2aaafc
  { 0, 0, 0, 0, 0 }, // 205 tc_3ce09744
  { 0, 0, 0, 0, 0 }, // 206 tc_20a4bbec
  { 0, 0, 0, 0, 0 }, // 207 tc_c127de3a
  { 0, 0, 0, 0, 0 }, // 208 tc_257f6f7c
  { 0, 0, 0, 0, 0 }, // 209 tc_7e6a3e89
  { 0, 0, 0, 0, 0 }, // 210 tc_e35c1e93
  { 0, 0, 0, 0, 0 }, // 211 tc_05ca8cfd
  { 0, 0, 0, 0, 0 }, // 212 tc_d8287c14
  { 0, 0, 0, 0, 0 }, // 213 tc_08a4f1b6
  { 0, 0, 0, 0, 0 }, // 214 tc_56e64202
  { 0, 0, 0, 0, 0 }, // 215 tc_ac4046bc
  { 0, 0, 0, 0, 0 }, // 216 tc_2e8f5f6e
  { 0, 0, 0, 0, 0 }, // 217 tc_7417e785
  { 0, 0, 0, 0, 0 }, // 218 tc_309dbb4f
  { 0, 0, 0, 0, 0 }, // 219 tc_df80eeb0
  { 0, 0, 0, 0, 0 }, // 220 tc_51d0ecc3
  { 0, 0, 0, 0, 0 }, // 221 tc_561aaa58
  { 0, 0, 0, 0, 0 }, // 222 tc_946013d8
  { 0, 0, 0, 0, 0 }, // 223 tc_46d6c3e0
  { 0, 0, 0, 0, 0 }, // 224 tc_87adc037
  { 0, 0, 0, 0, 0 }, // 225 tc_649072c2
  { 0, 0, 0, 0, 0 }, // 226 tc_b091f1c6
  { 0, 0, 0, 0, 0 }, // 227 tc_0b04c6c7
  { 0, 0, 0, 0, 0 }, // 228 tc_660769f1
  { 0, 0, 0, 0, 0 }, // 229 tc_e8797b98
  { 0, 0, 0, 0, 0 }, // 230 tc_05ac6f98
  { 0, 0, 0, 0, 0 }, // 231 tc_05058f6f
  { 0, 0, 0, 0, 0 }, // 232 tc_fd7610da
  { 0, 0, 0, 0, 0 }, // 233 tc_1381a97c
  { 0, 0, 0, 0, 0 }, // 234 tc_e3f68a46
  { 0, 0, 0, 0, 0 }, // 235 tc_f1de44ef
  { 0, 0, 0, 0, 0 }, // 236 tc_9d1dc972
  { 0, 0, 0, 0, 0 }, // 237 tc_90bcc1db
  { 0, 0, 0, 0, 0 }, // 238 tc_cd94bfe0
  { 0, 0, 0, 0, 0 }, // 239 tc_15fdf750
  { 0, 0, 0, 0, 0 }, // 240 tc_1ad8a370
  { 0, 0, 0, 0, 0 }, // 241 tc_e675c45a
  { 0, 0, 0, 0, 0 }, // 242 tc_61bf7c03
  { 0, 0, 0, 0, 0 }, // 243 tc_933f2b39
  { 0, 0, 0, 0, 0 }, // 244 tc_26a377fe
  { 0, 0, 0, 0, 0 }, // 245 tc_2d4051cd
  { 0, 0, 0, 0, 0 }, // 246 tc_6e7fa133
  { 0, 0, 0, 0, 0 }, // 247 tc_8772086c
  { 0, 0, 0, 0, 0 }, // 248 tc_b4416217
  { 0, 0, 0, 0, 0 }, // 249 tc_9f363d21
  { 0, 0, 0, 0, 0 }, // 250 tc_8e420e4d
  { 0, 0, 0, 0, 0 }, // 251 tc_7273323b
  { 0, 0, 0, 0, 0 }, // 252 tc_58d21193
  { 0, 0, 0, 0, 0 }, // 253 tc_71646d06
  { 0, 0, 0, 0, 0 }, // 254 tc_04da405a
  { 0, 0, 0, 0, 0 }, // 255 tc_2c745bb8
  { 0, 0, 0, 0, 0 }, // 256 tc_b28e51aa
  { 0, 0, 0, 0, 0 }, // 257 tc_767c4e9d
  { 0, 0, 0, 0, 0 }, // 258 tc_e699ae41
  { 0, 0, 0, 0, 0 }, // 259 tc_a0dbea28
  { 0, 0, 0, 0, 0 }, // 260 tc_dd5b0695
  { 0, 0, 0, 0, 0 }, // 261 tc_3ad719fb
  { 1, 81, 82, 0, 0 }, // 262 tc_8c99de45
  { 1, 87, 88, 0, 0 }, // 263 tc_9ad9998f
  { 1, 81, 82, 1322, 1323 }, // 264 tc_b857bf4e
  { 1, 81, 82, 1323, 1325 }, // 265 tc_9ca930f7
  { 1, 83, 84, 1325, 1326 }, // 266 tc_5d7f5414
  { 1, 83, 84, 0, 0 }, // 267 tc_8b121f4a
  { 1, 87, 88, 1326, 1327 }, // 268 tc_174516e8
  { 1, 81, 82, 1327, 1329 }, // 269 tc_fe211424
  { 1, 87, 88, 1329, 1330 }, // 270 tc_6b25e783
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV62[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 88, 89, 1330, 1333 }, // 1 tc_679309b8
  { 1, 89, 90, 1333, 1336 }, // 2 PSEUDO
  { 1, 89, 90, 1336, 1338 }, // 3 tc_57890846
  { 1, 89, 90, 1338, 1342 }, // 4 tc_4c5ba658
  { 1, 89, 90, 1342, 1346 }, // 5 tc_05c070ec
  { 1, 89, 90, 1346, 1349 }, // 6 tc_5a2711e5
  { 1, 89, 90, 1349, 1352 }, // 7 tc_1ae57e39
  { 1, 88, 89, 1352, 1355 }, // 8 tc_946df596
  { 1, 88, 89, 1355, 1358 }, // 9 tc_85d5d03f
  { 1, 89, 90, 1358, 1361 }, // 10 tc_56f114f4
  { 1, 88, 89, 1361, 1364 }, // 11 tc_640086b5
  { 1, 90, 91, 1364, 1367 }, // 12 DUPLEX
  { 1, 91, 92, 1367, 1368 }, // 13 tc_ENDLOOP
  { 1, 89, 90, 0, 0 }, // 14 tc_1b6f7cec
  { 1, 89, 90, 1368, 1370 }, // 15 tc_db2bce9c
  { 1, 92, 93, 1370, 1372 }, // 16 tc_85c9c08f
  { 1, 92, 93, 1372, 1375 }, // 17 tc_b9e09e03
  { 1, 93, 94, 1375, 1379 }, // 18 tc_5ef37dc4
  { 1, 93, 94, 1379, 1382 }, // 19 tc_17e0d2cd
  { 1, 93, 94, 1382, 1386 }, // 20 tc_44d3da28
  { 1, 90, 91, 1386, 1389 }, // 21 tc_7186d325
  { 1, 90, 91, 1389, 1392 }, // 22 tc_096199d3
  { 1, 90, 91, 1392, 1395 }, // 23 tc_2b8da4c2
  { 1, 90, 91, 1395, 1398 }, // 24 tc_9da59d12
  { 1, 90, 91, 1398, 1399 }, // 25 tc_4d5fa3a1
  { 1, 90, 91, 1399, 1400 }, // 26 tc_e06f432a
  { 1, 93, 94, 1400, 1402 }, // 27 tc_15aa71c5
  { 1, 90, 91, 1402, 1404 }, // 28 tc_675e4897
  { 1, 93, 94, 1404, 1406 }, // 29 LD_tc_ld_SLOT01
  { 1, 88, 89, 1406, 1409 }, // 30 tc_c8ce0b5c
  { 1, 88, 89, 1409, 1412 }, // 31 tc_bafaade3
  { 1, 88, 89, 1412, 1416 }, // 32 tc_d773585a
  { 1, 88, 89, 1416, 1417 }, // 33 tc_4ae7b58b
  { 1, 93, 94, 1417, 1422 }, // 34 tc_e93a3d71
  { 1, 94, 96, 1422, 1425 }, // 35 tc_56c4f9fe
  { 1, 93, 94, 1425, 1430 }, // 36 tc_e86aa961
  { 1, 93, 94, 1430, 1434 }, // 37 tc_da97ee82
  { 1, 92, 93, 1434, 1435 }, // 38 tc_d5b7b0c1
  { 1, 96, 98, 1435, 1438 }, // 39 tc_db5555f3
  { 1, 98, 101, 1438, 1441 }, // 40 tc_c0749f3c
  { 1, 101, 103, 1441, 1444 }, // 41 PSEUDOM
  { 1, 94, 96, 1444, 1447 }, // 42 tc_3aacf4a8
  { 1, 103, 106, 1447, 1450 }, // 43 tc_c5dba46e
  { 1, 96, 98, 1450, 1454 }, // 44 tc_af25efd9
  { 1, 88, 89, 1454, 1457 }, // 45 tc_002cb246
  { 1, 93, 94, 1457, 1461 }, // 46 tc_f8e23f0b
  { 1, 90, 91, 1461, 1465 }, // 47 tc_8fb7ab1b
  { 1, 93, 94, 1465, 1468 }, // 48 tc_30b9bb4a
  { 1, 90, 91, 1468, 1471 }, // 49 tc_be9602ff
  { 1, 88, 89, 1471, 1476 }, // 50 tc_bfec0f01
  { 1, 90, 91, 1476, 1480 }, // 51 tc_c79a189f
  { 1, 93, 94, 1480, 1483 }, // 52 tc_b83e6d73
  { 1, 93, 94, 1483, 1487 }, // 53 tc_0b2be201
  { 1, 93, 94, 1487, 1491 }, // 54 tc_c4f596e3
  { 1, 90, 91, 1491, 1494 }, // 55 tc_b44ecf75
  { 1, 93, 94, 1494, 1497 }, // 56 ST_tc_st_SLOT01
  { 1, 106, 108, 1497, 1501 }, // 57 CVI_VA
  { 1, 94, 96, 1501, 1503 }, // 58 tc_0ec46cf9
  { 1, 108, 110, 1503, 1507 }, // 59 tc_16ff9ef8
  { 1, 96, 98, 1507, 1508 }, // 60 tc_718b5c53
  { 1, 110, 114, 0, 0 }, // 61 CVI_GATHER_PSEUDO
  { 1, 90, 91, 1508, 1509 }, // 62 tc_d63f638c
  { 1, 88, 89, 1509, 1511 }, // 63 tc_cf8126ae
  { 1, 88, 89, 1511, 1514 }, // 64 tc_779080bf
  { 1, 88, 89, 1514, 1517 }, // 65 tc_4414d8b1
  { 1, 89, 90, 1517, 1520 }, // 66 tc_61830035
  { 1, 88, 89, 1520, 1522 }, // 67 tc_0ae0825c
  { 1, 89, 90, 0, 0 }, // 68 tc_2eabeebe
  { 1, 89, 90, 1522, 1525 }, // 69 tc_1c80410a
  { 1, 89, 90, 1525, 1528 }, // 70 tc_d08ee0f4
  { 1, 114, 115, 1528, 1530 }, // 71 tc_b9272d6c
  { 1, 114, 115, 1530, 1532 }, // 72 tc_434c8e1e
  { 1, 88, 89, 1532, 1535 }, // 73 tc_6132ba3d
  { 1, 88, 89, 1535, 1538 }, // 74 tc_e4a7f9f0
  { 1, 88, 89, 1538, 1543 }, // 75 tc_9c3ecd83
  { 1, 88, 89, 1543, 1546 }, // 76 tc_643b4717
  { 1, 89, 90, 1546, 1547 }, // 77 tc_862b3e70
  { 1, 88, 89, 1547, 1550 }, // 78 tc_4837eefb
  { 1, 88, 89, 1550, 1554 }, // 79 tc_5b54b33f
  { 1, 88, 89, 1554, 1559 }, // 80 tc_d1aa9eaa
  { 1, 88, 89, 1559, 1562 }, // 81 tc_1fc97744
  { 1, 88, 89, 1562, 1566 }, // 82 tc_f9058dd7
  { 1, 88, 89, 1566, 1568 }, // 83 tc_de554571
  { 1, 89, 90, 1568, 1571 }, // 84 tc_de4df740
  { 1, 88, 89, 1571, 1573 }, // 85 tc_cfd8378a
  { 1, 88, 89, 1573, 1577 }, // 86 tc_b4b5c03a
  { 1, 114, 115, 1577, 1579 }, // 87 tc_a813cf9a
  { 1, 88, 89, 1579, 1583 }, // 88 tc_b31c2e97
  { 1, 88, 89, 1583, 1585 }, // 89 tc_3a867367
  { 1, 88, 89, 1585, 1588 }, // 90 tc_2f7c551d
  { 1, 88, 89, 1588, 1590 }, // 91 tc_9e313203
  { 1, 88, 89, 1590, 1593 }, // 92 tc_3b470976
  { 1, 88, 89, 1593, 1597 }, // 93 tc_a58fd5cc
  { 1, 88, 89, 1597, 1602 }, // 94 tc_4560740b
  { 1, 88, 89, 1602, 1605 }, // 95 tc_b8bffe55
  { 1, 88, 89, 1605, 1608 }, // 96 tc_88b4f13d
  { 1, 88, 89, 1608, 1612 }, // 97 tc_2ff964b4
  { 1, 114, 115, 1612, 1614 }, // 98 tc_0d8f5752
  { 1, 114, 115, 1614, 1616 }, // 99 tc_bcf98408
  { 1, 88, 89, 1616, 1618 }, // 100 tc_1d81e60e
  { 1, 92, 93, 1618, 1619 }, // 101 tc_3bd75825
  { 1, 92, 93, 1619, 1621 }, // 102 tc_1ad90acd
  { 1, 89, 90, 1621, 1622 }, // 103 tc_ae53734a
  { 1, 89, 90, 1622, 1624 }, // 104 tc_20cdee80
  { 1, 89, 90, 1624, 1626 }, // 105 tc_cd374165
  { 1, 92, 93, 1626, 1628 }, // 106 tc_b51dc29a
  { 1, 92, 93, 1628, 1630 }, // 107 tc_e78647bd
  { 1, 114, 115, 1630, 1632 }, // 108 tc_d9d43ecb
  { 1, 114, 115, 1632, 1634 }, // 109 tc_a9d88b22
  { 1, 114, 115, 1634, 1636 }, // 110 tc_df3319ed
  { 1, 92, 93, 1636, 1637 }, // 111 tc_8d9d0154
  { 1, 114, 115, 1637, 1639 }, // 112 tc_1c4528a2
  { 1, 114, 115, 1639, 1641 }, // 113 tc_32779c6f
  { 1, 92, 93, 1641, 1642 }, // 114 tc_fc3999b4
  { 1, 90, 91, 1642, 1645 }, // 115 tc_9bfd761f
  { 1, 89, 90, 1645, 1648 }, // 116 tc_56336eb0
  { 1, 90, 91, 1648, 1651 }, // 117 tc_bd8382d1
  { 1, 89, 90, 1651, 1654 }, // 118 tc_3d495a39
  { 1, 90, 91, 1654, 1657 }, // 119 tc_b343892a
  { 1, 88, 89, 1657, 1660 }, // 120 tc_0663f615
  { 1, 90, 91, 1660, 1662 }, // 121 tc_8c945be0
  { 1, 89, 90, 1662, 1664 }, // 122 tc_2332b92e
  { 1, 93, 94, 1664, 1669 }, // 123 tc_3c76b0ff
  { 1, 93, 94, 1669, 1675 }, // 124 tc_785f65a7
  { 1, 93, 94, 1675, 1677 }, // 125 tc_c4db48cb
  { 1, 90, 91, 1677, 1679 }, // 126 tc_b43e7930
  { 1, 93, 94, 1679, 1684 }, // 127 tc_e9f3243f
  { 1, 93, 94, 1684, 1688 }, // 128 tc_7a91e76a
  { 1, 93, 94, 1688, 1693 }, // 129 tc_a5d4aeec
  { 1, 93, 94, 1693, 1696 }, // 130 tc_3b5b7ef9
  { 1, 93, 94, 1696, 1700 }, // 131 tc_bab0eed9
  { 1, 93, 94, 1700, 1704 }, // 132 tc_bf061958
  { 1, 93, 94, 1704, 1707 }, // 133 tc_7646c131
  { 1, 93, 94, 1707, 1712 }, // 134 tc_e4b3cb20
  { 1, 93, 94, 1712, 1717 }, // 135 tc_25a78932
  { 1, 93, 94, 1717, 1720 }, // 136 tc_a6b1eca9
  { 1, 88, 89, 1720, 1724 }, // 137 tc_f675fee8
  { 1, 88, 89, 1724, 1728 }, // 138 tc_05d3a09b
  { 1, 88, 89, 1728, 1732 }, // 139 tc_bdceeac1
  { 1, 88, 89, 1732, 1736 }, // 140 tc_f429765c
  { 1, 88, 89, 1736, 1740 }, // 141 tc_1a2fd869
  { 1, 88, 89, 1740, 1743 }, // 142 tc_9461ff31
  { 1, 93, 94, 1743, 1745 }, // 143 tc_0371abea
  { 1, 90, 91, 1745, 1747 }, // 144 tc_5bf126a6
  { 1, 88, 89, 1747, 1749 }, // 145 tc_14b5c689
  { 1, 88, 89, 1749, 1752 }, // 146 tc_76851da1
  { 1, 93, 94, 1752, 1757 }, // 147 tc_24b66c99
  { 1, 93, 94, 1757, 1762 }, // 148 tc_53559e35
  { 1, 90, 91, 1762, 1767 }, // 149 tc_838b34ea
  { 1, 90, 91, 1767, 1772 }, // 150 tc_d65dbf51
  { 1, 90, 91, 1772, 1777 }, // 151 tc_d5c0729a
  { 1, 90, 91, 1777, 1780 }, // 152 tc_5abb5e3f
  { 1, 93, 94, 1780, 1783 }, // 153 tc_362c6592
  { 1, 93, 94, 1783, 1788 }, // 154 tc_3962fa26
  { 1, 93, 94, 1788, 1791 }, // 155 tc_da4a37ed
  { 1, 93, 94, 1791, 1796 }, // 156 tc_40116ca8
  { 1, 90, 91, 1796, 1799 }, // 157 tc_4b68bce4
  { 1, 90, 91, 1799, 1804 }, // 158 tc_e95795ec
  { 1, 90, 91, 1804, 1807 }, // 159 tc_d2e63d61
  { 1, 90, 91, 1807, 1812 }, // 160 tc_b90a29b1
  { 1, 93, 94, 1812, 1816 }, // 161 tc_5aee39f7
  { 1, 93, 94, 1816, 1820 }, // 162 tc_14b272fa
  { 1, 90, 91, 1820, 1824 }, // 163 tc_67435e81
  { 1, 90, 91, 1824, 1828 }, // 164 tc_fcc3ddf9
  { 1, 88, 89, 1828, 1832 }, // 165 tc_13bfbcf9
  { 1, 88, 89, 1832, 1837 }, // 166 tc_9debc299
  { 1, 88, 89, 1837, 1839 }, // 167 tc_703e822c
  { 1, 88, 89, 1839, 1843 }, // 168 tc_784490da
  { 1, 88, 89, 1843, 1845 }, // 169 tc_a1c00888
  { 1, 93, 94, 1845, 1848 }, // 170 tc_0a705168
  { 1, 93, 94, 1848, 1850 }, // 171 tc_9fc3dae0
  { 1, 93, 94, 1850, 1851 }, // 172 tc_a1123dda
  { 1, 93, 94, 1851, 1852 }, // 173 tc_8b3e402a
  { 1, 93, 94, 1852, 1854 }, // 174 tc_5b7c0967
  { 1, 93, 94, 0, 0 }, // 175 tc_39dfefe8
  { 1, 90, 91, 0, 0 }, // 176 tc_b4407292
  { 1, 90, 91, 0, 0 }, // 177 tc_36153880
  { 1, 90, 91, 1854, 1855 }, // 178 tc_49a8207d
  { 1, 93, 94, 1855, 1857 }, // 179 tc_89e94ad3
  { 1, 115, 117, 1857, 1860 }, // 180 tc_540c3da3
  { 1, 117, 119, 1860, 1862 }, // 181 tc_c4edf264
  { 1, 119, 121, 1862, 1864 }, // 182 tc_5bf8afbb
  { 1, 121, 125, 1864, 1867 }, // 183 tc_a7e6707d
  { 1, 121, 125, 1867, 1871 }, // 184 tc_3c56e5ce
  { 1, 98, 101, 1871, 1875 }, // 185 tc_abe8c3b2
  { 1, 98, 101, 1875, 1880 }, // 186 tc_453fe68d
  { 1, 98, 101, 1880, 1884 }, // 187 tc_1ba8a0cd
  { 1, 125, 127, 1884, 1887 }, // 188 tc_52447ecc
  { 1, 125, 127, 1887, 1891 }, // 189 tc_3904b926
  { 1, 125, 127, 1891, 1896 }, // 190 tc_b9db8205
  { 1, 125, 127, 1896, 1900 }, // 191 tc_663c80a7
  { 1, 127, 131, 1900, 1903 }, // 192 tc_f21e8abb
  { 1, 127, 131, 1903, 1907 }, // 193 tc_131f1c81
  { 1, 127, 131, 1907, 1912 }, // 194 tc_c7039829
  { 1, 127, 131, 1912, 1916 }, // 195 tc_e2d2e9e5
  { 1, 131, 133, 1916, 1919 }, // 196 tc_ab23f776
  { 1, 131, 133, 1919, 1923 }, // 197 tc_7177e272
  { 1, 131, 133, 1923, 1928 }, // 198 tc_e99d4c2e
  { 1, 131, 133, 1928, 1932 }, // 199 tc_6942b6e0
  { 1, 103, 106, 1932, 1936 }, // 200 tc_a02a10a8
  { 1, 103, 106, 1936, 1941 }, // 201 tc_54a0dc47
  { 1, 103, 106, 1941, 1945 }, // 202 tc_447d9895
  { 1, 103, 106, 1945, 1950 }, // 203 tc_191381c1
  { 1, 103, 106, 1950, 1954 }, // 204 tc_3e2aaafc
  { 1, 131, 133, 1954, 1956 }, // 205 tc_3ce09744
  { 1, 131, 133, 1956, 1959 }, // 206 tc_20a4bbec
  { 1, 117, 119, 1959, 1962 }, // 207 tc_c127de3a
  { 1, 94, 96, 1962, 1966 }, // 208 tc_257f6f7c
  { 1, 94, 96, 1966, 1971 }, // 209 tc_7e6a3e89
  { 1, 94, 96, 1971, 1975 }, // 210 tc_e35c1e93
  { 1, 108, 110, 1975, 1978 }, // 211 tc_05ca8cfd
  { 1, 133, 135, 1978, 1981 }, // 212 tc_d8287c14
  { 1, 133, 135, 1981, 1985 }, // 213 tc_08a4f1b6
  { 1, 119, 121, 1985, 1989 }, // 214 tc_56e64202
  { 1, 117, 119, 1989, 1992 }, // 215 tc_ac4046bc
  { 1, 117, 119, 1992, 1996 }, // 216 tc_2e8f5f6e
  { 1, 108, 110, 1996, 1999 }, // 217 tc_7417e785
  { 1, 108, 110, 1999, 2003 }, // 218 tc_309dbb4f
  { 1, 135, 137, 2003, 2007 }, // 219 tc_df80eeb0
  { 1, 108, 110, 2007, 2009 }, // 220 tc_51d0ecc3
  { 1, 135, 137, 2009, 2014 }, // 221 tc_561aaa58
  { 1, 119, 121, 2014, 2016 }, // 222 tc_946013d8
  { 1, 119, 121, 2016, 2019 }, // 223 tc_46d6c3e0
  { 1, 135, 137, 2019, 2023 }, // 224 tc_87adc037
  { 1, 117, 119, 2023, 2026 }, // 225 tc_649072c2
  { 1, 117, 119, 2026, 2030 }, // 226 tc_b091f1c6
  { 1, 133, 135, 2030, 2033 }, // 227 tc_0b04c6c7
  { 1, 133, 135, 2033, 2037 }, // 228 tc_660769f1
  { 1, 137, 140, 2037, 2040 }, // 229 tc_e8797b98
  { 1, 137, 140, 2040, 2044 }, // 230 tc_05ac6f98
  { 1, 140, 143, 2044, 2047 }, // 231 tc_05058f6f
  { 1, 140, 143, 2047, 2051 }, // 232 tc_fd7610da
  { 1, 143, 145, 0, 0 }, // 233 tc_1381a97c
  { 1, 143, 145, 2051, 2052 }, // 234 tc_e3f68a46
  { 1, 145, 147, 2052, 2055 }, // 235 tc_f1de44ef
  { 1, 135, 137, 2055, 2060 }, // 236 tc_9d1dc972
  { 1, 145, 147, 2060, 2064 }, // 237 tc_90bcc1db
  { 1, 147, 150, 2064, 2067 }, // 238 tc_cd94bfe0
  { 1, 147, 150, 2067, 2071 }, // 239 tc_15fdf750
  { 1, 133, 135, 2071, 2075 }, // 240 tc_1ad8a370
  { 1, 133, 135, 2075, 2080 }, // 241 tc_e675c45a
  { 1, 150, 152, 2080, 2083 }, // 242 tc_61bf7c03
  { 1, 150, 152, 2083, 2087 }, // 243 tc_933f2b39
  { 1, 150, 152, 2087, 2091 }, // 244 tc_26a377fe
  { 1, 150, 152, 2091, 2096 }, // 245 tc_2d4051cd
  { 1, 119, 121, 2096, 2099 }, // 246 tc_6e7fa133
  { 1, 94, 96, 2099, 2102 }, // 247 tc_8772086c
  { 1, 96, 98, 2102, 2104 }, // 248 tc_b4416217
  { 1, 103, 106, 2104, 2108 }, // 249 tc_9f363d21
  { 1, 103, 106, 2108, 2113 }, // 250 tc_8e420e4d
  { 1, 152, 155, 2113, 2117 }, // 251 tc_7273323b
  { 1, 152, 155, 2117, 2122 }, // 252 tc_58d21193
  { 1, 96, 98, 2122, 2126 }, // 253 tc_71646d06
  { 1, 135, 137, 2126, 2128 }, // 254 tc_04da405a
  { 1, 135, 137, 2128, 2131 }, // 255 tc_2c745bb8
  { 1, 143, 145, 2131, 2132 }, // 256 tc_b28e51aa
  { 1, 143, 145, 2132, 2134 }, // 257 tc_767c4e9d
  { 1, 155, 157, 2134, 2136 }, // 258 tc_e699ae41
  { 1, 155, 157, 2136, 2139 }, // 259 tc_a0dbea28
  { 1, 155, 157, 2139, 2142 }, // 260 tc_dd5b0695
  { 1, 155, 157, 2142, 2146 }, // 261 tc_3ad719fb
  { 1, 90, 91, 0, 0 }, // 262 tc_8c99de45
  { 1, 114, 115, 0, 0 }, // 263 tc_9ad9998f
  { 1, 90, 91, 2146, 2147 }, // 264 tc_b857bf4e
  { 1, 90, 91, 2147, 2149 }, // 265 tc_9ca930f7
  { 1, 92, 93, 2149, 2150 }, // 266 tc_5d7f5414
  { 1, 92, 93, 0, 0 }, // 267 tc_8b121f4a
  { 1, 114, 115, 2150, 2151 }, // 268 tc_174516e8
  { 1, 90, 91, 2151, 2153 }, // 269 tc_fe211424
  { 1, 114, 115, 2153, 2154 }, // 270 tc_6b25e783
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV65[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 157, 158, 2154, 2157 }, // 1 tc_679309b8
  { 1, 158, 159, 2157, 2160 }, // 2 PSEUDO
  { 1, 158, 159, 2160, 2162 }, // 3 tc_57890846
  { 1, 158, 159, 2162, 2166 }, // 4 tc_4c5ba658
  { 1, 158, 159, 2166, 2170 }, // 5 tc_05c070ec
  { 1, 158, 159, 2170, 2173 }, // 6 tc_5a2711e5
  { 1, 158, 159, 2173, 2176 }, // 7 tc_1ae57e39
  { 1, 157, 158, 2176, 2179 }, // 8 tc_946df596
  { 1, 157, 158, 2179, 2182 }, // 9 tc_85d5d03f
  { 1, 158, 159, 2182, 2185 }, // 10 tc_56f114f4
  { 1, 157, 158, 2185, 2188 }, // 11 tc_640086b5
  { 1, 159, 160, 2188, 2191 }, // 12 DUPLEX
  { 1, 160, 161, 2191, 2192 }, // 13 tc_ENDLOOP
  { 1, 158, 159, 0, 0 }, // 14 tc_1b6f7cec
  { 1, 158, 159, 2192, 2194 }, // 15 tc_db2bce9c
  { 1, 161, 162, 2194, 2196 }, // 16 tc_85c9c08f
  { 1, 161, 162, 2196, 2199 }, // 17 tc_b9e09e03
  { 1, 162, 163, 2199, 2203 }, // 18 tc_5ef37dc4
  { 1, 162, 163, 2203, 2206 }, // 19 tc_17e0d2cd
  { 1, 162, 163, 2206, 2210 }, // 20 tc_44d3da28
  { 1, 159, 160, 2210, 2213 }, // 21 tc_7186d325
  { 1, 159, 160, 2213, 2216 }, // 22 tc_096199d3
  { 1, 159, 160, 2216, 2219 }, // 23 tc_2b8da4c2
  { 1, 159, 160, 2219, 2222 }, // 24 tc_9da59d12
  { 1, 159, 160, 2222, 2223 }, // 25 tc_4d5fa3a1
  { 1, 159, 160, 2223, 2224 }, // 26 tc_e06f432a
  { 1, 162, 163, 2224, 2226 }, // 27 tc_15aa71c5
  { 1, 159, 160, 2226, 2228 }, // 28 tc_675e4897
  { 1, 162, 163, 2228, 2230 }, // 29 LD_tc_ld_SLOT01
  { 1, 157, 158, 2230, 2233 }, // 30 tc_c8ce0b5c
  { 1, 157, 158, 2233, 2236 }, // 31 tc_bafaade3
  { 1, 157, 158, 2236, 2240 }, // 32 tc_d773585a
  { 1, 157, 158, 2240, 2241 }, // 33 tc_4ae7b58b
  { 1, 162, 163, 2241, 2246 }, // 34 tc_e93a3d71
  { 1, 163, 165, 2246, 2249 }, // 35 tc_56c4f9fe
  { 1, 162, 163, 2249, 2254 }, // 36 tc_e86aa961
  { 1, 162, 163, 2254, 2258 }, // 37 tc_da97ee82
  { 1, 161, 162, 2258, 2259 }, // 38 tc_d5b7b0c1
  { 1, 165, 167, 2259, 2262 }, // 39 tc_db5555f3
  { 1, 167, 170, 2262, 2265 }, // 40 tc_c0749f3c
  { 1, 170, 172, 2265, 2268 }, // 41 PSEUDOM
  { 1, 163, 165, 2268, 2271 }, // 42 tc_3aacf4a8
  { 1, 172, 175, 2271, 2274 }, // 43 tc_c5dba46e
  { 1, 165, 167, 2274, 2278 }, // 44 tc_af25efd9
  { 1, 157, 158, 2278, 2281 }, // 45 tc_002cb246
  { 1, 162, 163, 2281, 2285 }, // 46 tc_f8e23f0b
  { 1, 159, 160, 2285, 2289 }, // 47 tc_8fb7ab1b
  { 1, 162, 163, 2289, 2292 }, // 48 tc_30b9bb4a
  { 1, 159, 160, 2292, 2295 }, // 49 tc_be9602ff
  { 1, 157, 158, 2295, 2300 }, // 50 tc_bfec0f01
  { 1, 159, 160, 2300, 2304 }, // 51 tc_c79a189f
  { 1, 162, 163, 2304, 2307 }, // 52 tc_b83e6d73
  { 1, 162, 163, 2307, 2311 }, // 53 tc_0b2be201
  { 1, 162, 163, 2311, 2315 }, // 54 tc_c4f596e3
  { 1, 159, 160, 2315, 2318 }, // 55 tc_b44ecf75
  { 1, 162, 163, 2318, 2321 }, // 56 ST_tc_st_SLOT01
  { 1, 175, 177, 2321, 2325 }, // 57 CVI_VA
  { 1, 163, 165, 2325, 2327 }, // 58 tc_0ec46cf9
  { 1, 177, 179, 2327, 2331 }, // 59 tc_16ff9ef8
  { 1, 165, 167, 2331, 2332 }, // 60 tc_718b5c53
  { 1, 179, 183, 0, 0 }, // 61 CVI_GATHER_PSEUDO
  { 1, 159, 160, 2332, 2333 }, // 62 tc_d63f638c
  { 1, 157, 158, 2333, 2335 }, // 63 tc_cf8126ae
  { 1, 157, 158, 2335, 2338 }, // 64 tc_779080bf
  { 1, 157, 158, 2338, 2341 }, // 65 tc_4414d8b1
  { 1, 158, 159, 2341, 2344 }, // 66 tc_61830035
  { 1, 157, 158, 2344, 2346 }, // 67 tc_0ae0825c
  { 1, 158, 159, 0, 0 }, // 68 tc_2eabeebe
  { 1, 158, 159, 2346, 2349 }, // 69 tc_1c80410a
  { 1, 158, 159, 2349, 2352 }, // 70 tc_d08ee0f4
  { 1, 183, 184, 2352, 2354 }, // 71 tc_b9272d6c
  { 1, 183, 184, 2354, 2356 }, // 72 tc_434c8e1e
  { 1, 157, 158, 2356, 2359 }, // 73 tc_6132ba3d
  { 1, 157, 158, 2359, 2362 }, // 74 tc_e4a7f9f0
  { 1, 157, 158, 2362, 2367 }, // 75 tc_9c3ecd83
  { 1, 157, 158, 2367, 2370 }, // 76 tc_643b4717
  { 1, 158, 159, 2370, 2371 }, // 77 tc_862b3e70
  { 1, 157, 158, 2371, 2374 }, // 78 tc_4837eefb
  { 1, 157, 158, 2374, 2378 }, // 79 tc_5b54b33f
  { 1, 157, 158, 2378, 2383 }, // 80 tc_d1aa9eaa
  { 1, 157, 158, 2383, 2386 }, // 81 tc_1fc97744
  { 1, 157, 158, 2386, 2390 }, // 82 tc_f9058dd7
  { 1, 157, 158, 2390, 2392 }, // 83 tc_de554571
  { 1, 158, 159, 2392, 2395 }, // 84 tc_de4df740
  { 1, 157, 158, 2395, 2397 }, // 85 tc_cfd8378a
  { 1, 157, 158, 2397, 2401 }, // 86 tc_b4b5c03a
  { 1, 183, 184, 2401, 2403 }, // 87 tc_a813cf9a
  { 1, 157, 158, 2403, 2407 }, // 88 tc_b31c2e97
  { 1, 157, 158, 2407, 2409 }, // 89 tc_3a867367
  { 1, 157, 158, 2409, 2412 }, // 90 tc_2f7c551d
  { 1, 157, 158, 2412, 2414 }, // 91 tc_9e313203
  { 1, 157, 158, 2414, 2417 }, // 92 tc_3b470976
  { 1, 157, 158, 2417, 2421 }, // 93 tc_a58fd5cc
  { 1, 157, 158, 2421, 2426 }, // 94 tc_4560740b
  { 1, 157, 158, 2426, 2429 }, // 95 tc_b8bffe55
  { 1, 157, 158, 2429, 2432 }, // 96 tc_88b4f13d
  { 1, 157, 158, 2432, 2436 }, // 97 tc_2ff964b4
  { 1, 183, 184, 2436, 2438 }, // 98 tc_0d8f5752
  { 1, 183, 184, 2438, 2440 }, // 99 tc_bcf98408
  { 1, 157, 158, 2440, 2442 }, // 100 tc_1d81e60e
  { 1, 161, 162, 2442, 2443 }, // 101 tc_3bd75825
  { 1, 161, 162, 2443, 2445 }, // 102 tc_1ad90acd
  { 1, 158, 159, 2445, 2446 }, // 103 tc_ae53734a
  { 1, 158, 159, 2446, 2448 }, // 104 tc_20cdee80
  { 1, 158, 159, 2448, 2450 }, // 105 tc_cd374165
  { 1, 161, 162, 2450, 2452 }, // 106 tc_b51dc29a
  { 1, 161, 162, 2452, 2454 }, // 107 tc_e78647bd
  { 1, 183, 184, 2454, 2456 }, // 108 tc_d9d43ecb
  { 1, 183, 184, 2456, 2458 }, // 109 tc_a9d88b22
  { 1, 183, 184, 2458, 2460 }, // 110 tc_df3319ed
  { 1, 161, 162, 2460, 2461 }, // 111 tc_8d9d0154
  { 1, 183, 184, 2461, 2463 }, // 112 tc_1c4528a2
  { 1, 183, 184, 2463, 2465 }, // 113 tc_32779c6f
  { 1, 161, 162, 2465, 2466 }, // 114 tc_fc3999b4
  { 1, 159, 160, 2466, 2469 }, // 115 tc_9bfd761f
  { 1, 158, 159, 2469, 2472 }, // 116 tc_56336eb0
  { 1, 159, 160, 2472, 2475 }, // 117 tc_bd8382d1
  { 1, 158, 159, 2475, 2478 }, // 118 tc_3d495a39
  { 1, 159, 160, 2478, 2481 }, // 119 tc_b343892a
  { 1, 157, 158, 2481, 2484 }, // 120 tc_0663f615
  { 1, 159, 160, 2484, 2486 }, // 121 tc_8c945be0
  { 1, 158, 159, 2486, 2488 }, // 122 tc_2332b92e
  { 1, 162, 163, 2488, 2493 }, // 123 tc_3c76b0ff
  { 1, 162, 163, 2493, 2499 }, // 124 tc_785f65a7
  { 1, 162, 163, 2499, 2501 }, // 125 tc_c4db48cb
  { 1, 159, 160, 2501, 2503 }, // 126 tc_b43e7930
  { 1, 162, 163, 2503, 2508 }, // 127 tc_e9f3243f
  { 1, 162, 163, 2508, 2512 }, // 128 tc_7a91e76a
  { 1, 162, 163, 2512, 2517 }, // 129 tc_a5d4aeec
  { 1, 162, 163, 2517, 2520 }, // 130 tc_3b5b7ef9
  { 1, 162, 163, 2520, 2524 }, // 131 tc_bab0eed9
  { 1, 162, 163, 2524, 2528 }, // 132 tc_bf061958
  { 1, 162, 163, 2528, 2531 }, // 133 tc_7646c131
  { 1, 162, 163, 2531, 2536 }, // 134 tc_e4b3cb20
  { 1, 162, 163, 2536, 2541 }, // 135 tc_25a78932
  { 1, 162, 163, 2541, 2544 }, // 136 tc_a6b1eca9
  { 1, 157, 158, 2544, 2548 }, // 137 tc_f675fee8
  { 1, 157, 158, 2548, 2552 }, // 138 tc_05d3a09b
  { 1, 157, 158, 2552, 2556 }, // 139 tc_bdceeac1
  { 1, 157, 158, 2556, 2560 }, // 140 tc_f429765c
  { 1, 157, 158, 2560, 2564 }, // 141 tc_1a2fd869
  { 1, 157, 158, 2564, 2567 }, // 142 tc_9461ff31
  { 1, 162, 163, 2567, 2569 }, // 143 tc_0371abea
  { 1, 159, 160, 2569, 2571 }, // 144 tc_5bf126a6
  { 1, 157, 158, 2571, 2573 }, // 145 tc_14b5c689
  { 1, 157, 158, 2573, 2576 }, // 146 tc_76851da1
  { 1, 162, 163, 2576, 2581 }, // 147 tc_24b66c99
  { 1, 162, 163, 2581, 2586 }, // 148 tc_53559e35
  { 1, 159, 160, 2586, 2591 }, // 149 tc_838b34ea
  { 1, 159, 160, 2591, 2596 }, // 150 tc_d65dbf51
  { 1, 159, 160, 2596, 2601 }, // 151 tc_d5c0729a
  { 1, 159, 160, 2601, 2604 }, // 152 tc_5abb5e3f
  { 1, 162, 163, 2604, 2607 }, // 153 tc_362c6592
  { 1, 162, 163, 2607, 2612 }, // 154 tc_3962fa26
  { 1, 162, 163, 2612, 2615 }, // 155 tc_da4a37ed
  { 1, 162, 163, 2615, 2620 }, // 156 tc_40116ca8
  { 1, 159, 160, 2620, 2623 }, // 157 tc_4b68bce4
  { 1, 159, 160, 2623, 2628 }, // 158 tc_e95795ec
  { 1, 159, 160, 2628, 2631 }, // 159 tc_d2e63d61
  { 1, 159, 160, 2631, 2636 }, // 160 tc_b90a29b1
  { 1, 162, 163, 2636, 2640 }, // 161 tc_5aee39f7
  { 1, 162, 163, 2640, 2644 }, // 162 tc_14b272fa
  { 1, 159, 160, 2644, 2648 }, // 163 tc_67435e81
  { 1, 159, 160, 2648, 2652 }, // 164 tc_fcc3ddf9
  { 1, 157, 158, 2652, 2656 }, // 165 tc_13bfbcf9
  { 1, 157, 158, 2656, 2661 }, // 166 tc_9debc299
  { 1, 157, 158, 2661, 2663 }, // 167 tc_703e822c
  { 1, 157, 158, 2663, 2667 }, // 168 tc_784490da
  { 1, 157, 158, 2667, 2669 }, // 169 tc_a1c00888
  { 1, 162, 163, 2669, 2672 }, // 170 tc_0a705168
  { 1, 162, 163, 2672, 2674 }, // 171 tc_9fc3dae0
  { 1, 162, 163, 2674, 2675 }, // 172 tc_a1123dda
  { 1, 162, 163, 2675, 2676 }, // 173 tc_8b3e402a
  { 1, 162, 163, 2676, 2678 }, // 174 tc_5b7c0967
  { 1, 162, 163, 0, 0 }, // 175 tc_39dfefe8
  { 1, 159, 160, 0, 0 }, // 176 tc_b4407292
  { 1, 159, 160, 0, 0 }, // 177 tc_36153880
  { 1, 159, 160, 2678, 2679 }, // 178 tc_49a8207d
  { 1, 162, 163, 2679, 2681 }, // 179 tc_89e94ad3
  { 1, 184, 186, 2681, 2684 }, // 180 tc_540c3da3
  { 1, 186, 188, 2684, 2686 }, // 181 tc_c4edf264
  { 1, 188, 190, 2686, 2688 }, // 182 tc_5bf8afbb
  { 1, 190, 194, 2688, 2691 }, // 183 tc_a7e6707d
  { 1, 190, 194, 2691, 2695 }, // 184 tc_3c56e5ce
  { 1, 167, 170, 2695, 2699 }, // 185 tc_abe8c3b2
  { 1, 167, 170, 2699, 2704 }, // 186 tc_453fe68d
  { 1, 167, 170, 2704, 2708 }, // 187 tc_1ba8a0cd
  { 1, 194, 196, 2708, 2711 }, // 188 tc_52447ecc
  { 1, 194, 196, 2711, 2715 }, // 189 tc_3904b926
  { 1, 194, 196, 2715, 2720 }, // 190 tc_b9db8205
  { 1, 194, 196, 2720, 2724 }, // 191 tc_663c80a7
  { 1, 196, 200, 2724, 2727 }, // 192 tc_f21e8abb
  { 1, 196, 200, 2727, 2731 }, // 193 tc_131f1c81
  { 1, 196, 200, 2731, 2736 }, // 194 tc_c7039829
  { 1, 196, 200, 2736, 2740 }, // 195 tc_e2d2e9e5
  { 1, 200, 202, 2740, 2743 }, // 196 tc_ab23f776
  { 1, 200, 202, 2743, 2747 }, // 197 tc_7177e272
  { 1, 200, 202, 2747, 2752 }, // 198 tc_e99d4c2e
  { 1, 200, 202, 2752, 2756 }, // 199 tc_6942b6e0
  { 1, 172, 175, 2756, 2760 }, // 200 tc_a02a10a8
  { 1, 172, 175, 2760, 2765 }, // 201 tc_54a0dc47
  { 1, 172, 175, 2765, 2769 }, // 202 tc_447d9895
  { 1, 172, 175, 2769, 2774 }, // 203 tc_191381c1
  { 1, 172, 175, 2774, 2778 }, // 204 tc_3e2aaafc
  { 1, 200, 202, 2778, 2780 }, // 205 tc_3ce09744
  { 1, 200, 202, 2780, 2783 }, // 206 tc_20a4bbec
  { 1, 186, 188, 2783, 2786 }, // 207 tc_c127de3a
  { 1, 163, 165, 2786, 2790 }, // 208 tc_257f6f7c
  { 1, 163, 165, 2790, 2795 }, // 209 tc_7e6a3e89
  { 1, 163, 165, 2795, 2799 }, // 210 tc_e35c1e93
  { 1, 177, 179, 2799, 2802 }, // 211 tc_05ca8cfd
  { 1, 202, 204, 2802, 2805 }, // 212 tc_d8287c14
  { 1, 202, 204, 2805, 2809 }, // 213 tc_08a4f1b6
  { 1, 188, 190, 2809, 2813 }, // 214 tc_56e64202
  { 1, 186, 188, 2813, 2816 }, // 215 tc_ac4046bc
  { 1, 186, 188, 2816, 2820 }, // 216 tc_2e8f5f6e
  { 1, 177, 179, 2820, 2823 }, // 217 tc_7417e785
  { 1, 177, 179, 2823, 2827 }, // 218 tc_309dbb4f
  { 1, 204, 206, 2827, 2831 }, // 219 tc_df80eeb0
  { 1, 177, 179, 2831, 2833 }, // 220 tc_51d0ecc3
  { 1, 204, 206, 2833, 2838 }, // 221 tc_561aaa58
  { 1, 188, 190, 2838, 2840 }, // 222 tc_946013d8
  { 1, 188, 190, 2840, 2843 }, // 223 tc_46d6c3e0
  { 1, 204, 206, 2843, 2847 }, // 224 tc_87adc037
  { 1, 186, 188, 2847, 2850 }, // 225 tc_649072c2
  { 1, 186, 188, 2850, 2854 }, // 226 tc_b091f1c6
  { 1, 202, 204, 2854, 2857 }, // 227 tc_0b04c6c7
  { 1, 202, 204, 2857, 2861 }, // 228 tc_660769f1
  { 1, 206, 209, 2861, 2864 }, // 229 tc_e8797b98
  { 1, 206, 209, 2864, 2868 }, // 230 tc_05ac6f98
  { 1, 209, 212, 2868, 2871 }, // 231 tc_05058f6f
  { 1, 209, 212, 2871, 2875 }, // 232 tc_fd7610da
  { 1, 212, 214, 0, 0 }, // 233 tc_1381a97c
  { 1, 212, 214, 2875, 2876 }, // 234 tc_e3f68a46
  { 1, 214, 216, 2876, 2879 }, // 235 tc_f1de44ef
  { 1, 204, 206, 2879, 2884 }, // 236 tc_9d1dc972
  { 1, 214, 216, 2884, 2888 }, // 237 tc_90bcc1db
  { 1, 216, 219, 2888, 2891 }, // 238 tc_cd94bfe0
  { 1, 216, 219, 2891, 2895 }, // 239 tc_15fdf750
  { 1, 202, 204, 2895, 2899 }, // 240 tc_1ad8a370
  { 1, 202, 204, 2899, 2904 }, // 241 tc_e675c45a
  { 1, 219, 221, 2904, 2907 }, // 242 tc_61bf7c03
  { 1, 219, 221, 2907, 2911 }, // 243 tc_933f2b39
  { 1, 219, 221, 2911, 2915 }, // 244 tc_26a377fe
  { 1, 219, 221, 2915, 2920 }, // 245 tc_2d4051cd
  { 1, 188, 190, 2920, 2923 }, // 246 tc_6e7fa133
  { 1, 163, 165, 2923, 2926 }, // 247 tc_8772086c
  { 1, 165, 167, 2926, 2928 }, // 248 tc_b4416217
  { 1, 172, 175, 2928, 2932 }, // 249 tc_9f363d21
  { 1, 172, 175, 2932, 2937 }, // 250 tc_8e420e4d
  { 1, 221, 224, 2937, 2941 }, // 251 tc_7273323b
  { 1, 221, 224, 2941, 2946 }, // 252 tc_58d21193
  { 1, 165, 167, 2946, 2950 }, // 253 tc_71646d06
  { 1, 204, 206, 2950, 2952 }, // 254 tc_04da405a
  { 1, 204, 206, 2952, 2955 }, // 255 tc_2c745bb8
  { 1, 212, 214, 2955, 2956 }, // 256 tc_b28e51aa
  { 1, 212, 214, 2956, 2958 }, // 257 tc_767c4e9d
  { 1, 224, 226, 2958, 2960 }, // 258 tc_e699ae41
  { 1, 224, 226, 2960, 2963 }, // 259 tc_a0dbea28
  { 1, 224, 226, 2963, 2966 }, // 260 tc_dd5b0695
  { 1, 224, 226, 2966, 2970 }, // 261 tc_3ad719fb
  { 1, 159, 160, 0, 0 }, // 262 tc_8c99de45
  { 1, 183, 184, 0, 0 }, // 263 tc_9ad9998f
  { 1, 159, 160, 2970, 2971 }, // 264 tc_b857bf4e
  { 1, 159, 160, 2971, 2973 }, // 265 tc_9ca930f7
  { 1, 161, 162, 2973, 2974 }, // 266 tc_5d7f5414
  { 1, 161, 162, 0, 0 }, // 267 tc_8b121f4a
  { 1, 183, 184, 2974, 2975 }, // 268 tc_174516e8
  { 1, 159, 160, 2975, 2977 }, // 269 tc_fe211424
  { 1, 183, 184, 2977, 2978 }, // 270 tc_6b25e783
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV66[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 226, 227, 2978, 2981 }, // 1 tc_679309b8
  { 1, 227, 228, 2981, 2984 }, // 2 PSEUDO
  { 1, 227, 228, 2984, 2986 }, // 3 tc_57890846
  { 1, 227, 228, 2986, 2990 }, // 4 tc_4c5ba658
  { 1, 227, 228, 2990, 2994 }, // 5 tc_05c070ec
  { 1, 227, 228, 2994, 2997 }, // 6 tc_5a2711e5
  { 1, 227, 228, 2997, 3000 }, // 7 tc_1ae57e39
  { 1, 226, 227, 3000, 3003 }, // 8 tc_946df596
  { 1, 226, 227, 3003, 3006 }, // 9 tc_85d5d03f
  { 1, 227, 228, 3006, 3009 }, // 10 tc_56f114f4
  { 1, 226, 227, 3009, 3012 }, // 11 tc_640086b5
  { 1, 228, 229, 3012, 3015 }, // 12 DUPLEX
  { 1, 229, 230, 3015, 3016 }, // 13 tc_ENDLOOP
  { 1, 227, 228, 0, 0 }, // 14 tc_1b6f7cec
  { 1, 227, 228, 3016, 3018 }, // 15 tc_db2bce9c
  { 1, 230, 231, 3018, 3020 }, // 16 tc_85c9c08f
  { 1, 230, 231, 3020, 3023 }, // 17 tc_b9e09e03
  { 1, 231, 232, 3023, 3027 }, // 18 tc_5ef37dc4
  { 1, 231, 232, 3027, 3030 }, // 19 tc_17e0d2cd
  { 1, 231, 232, 3030, 3034 }, // 20 tc_44d3da28
  { 1, 228, 229, 3034, 3037 }, // 21 tc_7186d325
  { 1, 228, 229, 3037, 3040 }, // 22 tc_096199d3
  { 1, 228, 229, 3040, 3043 }, // 23 tc_2b8da4c2
  { 1, 228, 229, 3043, 3046 }, // 24 tc_9da59d12
  { 1, 228, 229, 3046, 3047 }, // 25 tc_4d5fa3a1
  { 1, 228, 229, 3047, 3048 }, // 26 tc_e06f432a
  { 1, 231, 232, 3048, 3050 }, // 27 tc_15aa71c5
  { 1, 228, 229, 3050, 3052 }, // 28 tc_675e4897
  { 1, 231, 232, 3052, 3054 }, // 29 LD_tc_ld_SLOT01
  { 1, 226, 227, 3054, 3057 }, // 30 tc_c8ce0b5c
  { 1, 226, 227, 3057, 3060 }, // 31 tc_bafaade3
  { 1, 226, 227, 3060, 3064 }, // 32 tc_d773585a
  { 1, 226, 227, 3064, 3065 }, // 33 tc_4ae7b58b
  { 1, 231, 232, 3065, 3070 }, // 34 tc_e93a3d71
  { 1, 232, 234, 3070, 3073 }, // 35 tc_56c4f9fe
  { 1, 231, 232, 3073, 3078 }, // 36 tc_e86aa961
  { 1, 231, 232, 3078, 3082 }, // 37 tc_da97ee82
  { 1, 230, 231, 3082, 3083 }, // 38 tc_d5b7b0c1
  { 1, 234, 236, 3083, 3086 }, // 39 tc_db5555f3
  { 1, 236, 239, 3086, 3089 }, // 40 tc_c0749f3c
  { 1, 239, 241, 3089, 3092 }, // 41 PSEUDOM
  { 1, 232, 234, 3092, 3095 }, // 42 tc_3aacf4a8
  { 1, 241, 244, 3095, 3098 }, // 43 tc_c5dba46e
  { 1, 234, 236, 3098, 3102 }, // 44 tc_af25efd9
  { 1, 226, 227, 3102, 3105 }, // 45 tc_002cb246
  { 1, 231, 232, 3105, 3109 }, // 46 tc_f8e23f0b
  { 1, 228, 229, 3109, 3113 }, // 47 tc_8fb7ab1b
  { 1, 231, 232, 3113, 3116 }, // 48 tc_30b9bb4a
  { 1, 228, 229, 3116, 3119 }, // 49 tc_be9602ff
  { 1, 226, 227, 3119, 3124 }, // 50 tc_bfec0f01
  { 1, 228, 229, 3124, 3128 }, // 51 tc_c79a189f
  { 1, 231, 232, 3128, 3131 }, // 52 tc_b83e6d73
  { 1, 231, 232, 3131, 3135 }, // 53 tc_0b2be201
  { 1, 231, 232, 3135, 3139 }, // 54 tc_c4f596e3
  { 1, 228, 229, 3139, 3142 }, // 55 tc_b44ecf75
  { 1, 231, 232, 3142, 3145 }, // 56 ST_tc_st_SLOT01
  { 1, 244, 246, 3145, 3149 }, // 57 CVI_VA
  { 1, 232, 234, 3149, 3151 }, // 58 tc_0ec46cf9
  { 1, 246, 248, 3151, 3155 }, // 59 tc_16ff9ef8
  { 1, 234, 236, 3155, 3156 }, // 60 tc_718b5c53
  { 1, 248, 252, 0, 0 }, // 61 CVI_GATHER_PSEUDO
  { 1, 228, 229, 3156, 3157 }, // 62 tc_d63f638c
  { 1, 226, 227, 3157, 3159 }, // 63 tc_cf8126ae
  { 1, 226, 227, 3159, 3162 }, // 64 tc_779080bf
  { 1, 226, 227, 3162, 3165 }, // 65 tc_4414d8b1
  { 1, 227, 228, 3165, 3168 }, // 66 tc_61830035
  { 1, 226, 227, 3168, 3170 }, // 67 tc_0ae0825c
  { 1, 227, 228, 0, 0 }, // 68 tc_2eabeebe
  { 1, 227, 228, 3170, 3173 }, // 69 tc_1c80410a
  { 1, 227, 228, 3173, 3176 }, // 70 tc_d08ee0f4
  { 1, 252, 253, 3176, 3178 }, // 71 tc_b9272d6c
  { 1, 252, 253, 3178, 3180 }, // 72 tc_434c8e1e
  { 1, 226, 227, 3180, 3183 }, // 73 tc_6132ba3d
  { 1, 226, 227, 3183, 3186 }, // 74 tc_e4a7f9f0
  { 1, 226, 227, 3186, 3191 }, // 75 tc_9c3ecd83
  { 1, 226, 227, 3191, 3194 }, // 76 tc_643b4717
  { 1, 227, 228, 3194, 3195 }, // 77 tc_862b3e70
  { 1, 226, 227, 3195, 3198 }, // 78 tc_4837eefb
  { 1, 226, 227, 3198, 3202 }, // 79 tc_5b54b33f
  { 1, 226, 227, 3202, 3207 }, // 80 tc_d1aa9eaa
  { 1, 226, 227, 3207, 3210 }, // 81 tc_1fc97744
  { 1, 226, 227, 3210, 3214 }, // 82 tc_f9058dd7
  { 1, 226, 227, 3214, 3216 }, // 83 tc_de554571
  { 1, 227, 228, 3216, 3219 }, // 84 tc_de4df740
  { 1, 226, 227, 3219, 3221 }, // 85 tc_cfd8378a
  { 1, 226, 227, 3221, 3225 }, // 86 tc_b4b5c03a
  { 1, 252, 253, 3225, 3227 }, // 87 tc_a813cf9a
  { 1, 226, 227, 3227, 3231 }, // 88 tc_b31c2e97
  { 1, 226, 227, 3231, 3233 }, // 89 tc_3a867367
  { 1, 226, 227, 3233, 3236 }, // 90 tc_2f7c551d
  { 1, 226, 227, 3236, 3238 }, // 91 tc_9e313203
  { 1, 226, 227, 3238, 3241 }, // 92 tc_3b470976
  { 1, 226, 227, 3241, 3245 }, // 93 tc_a58fd5cc
  { 1, 226, 227, 3245, 3250 }, // 94 tc_4560740b
  { 1, 226, 227, 3250, 3253 }, // 95 tc_b8bffe55
  { 1, 226, 227, 3253, 3256 }, // 96 tc_88b4f13d
  { 1, 226, 227, 3256, 3260 }, // 97 tc_2ff964b4
  { 1, 252, 253, 3260, 3262 }, // 98 tc_0d8f5752
  { 1, 252, 253, 3262, 3264 }, // 99 tc_bcf98408
  { 1, 226, 227, 3264, 3266 }, // 100 tc_1d81e60e
  { 1, 230, 231, 3266, 3267 }, // 101 tc_3bd75825
  { 1, 230, 231, 3267, 3269 }, // 102 tc_1ad90acd
  { 1, 227, 228, 3269, 3270 }, // 103 tc_ae53734a
  { 1, 227, 228, 3270, 3272 }, // 104 tc_20cdee80
  { 1, 227, 228, 3272, 3274 }, // 105 tc_cd374165
  { 1, 230, 231, 3274, 3276 }, // 106 tc_b51dc29a
  { 1, 230, 231, 3276, 3278 }, // 107 tc_e78647bd
  { 1, 252, 253, 3278, 3280 }, // 108 tc_d9d43ecb
  { 1, 252, 253, 3280, 3282 }, // 109 tc_a9d88b22
  { 1, 252, 253, 3282, 3284 }, // 110 tc_df3319ed
  { 1, 230, 231, 3284, 3285 }, // 111 tc_8d9d0154
  { 1, 252, 253, 3285, 3287 }, // 112 tc_1c4528a2
  { 1, 252, 253, 3287, 3289 }, // 113 tc_32779c6f
  { 1, 230, 231, 3289, 3290 }, // 114 tc_fc3999b4
  { 1, 228, 229, 3290, 3293 }, // 115 tc_9bfd761f
  { 1, 227, 228, 3293, 3296 }, // 116 tc_56336eb0
  { 1, 228, 229, 3296, 3299 }, // 117 tc_bd8382d1
  { 1, 227, 228, 3299, 3302 }, // 118 tc_3d495a39
  { 1, 228, 229, 3302, 3305 }, // 119 tc_b343892a
  { 1, 226, 227, 3305, 3308 }, // 120 tc_0663f615
  { 1, 228, 229, 3308, 3310 }, // 121 tc_8c945be0
  { 1, 227, 228, 3310, 3312 }, // 122 tc_2332b92e
  { 1, 231, 232, 3312, 3317 }, // 123 tc_3c76b0ff
  { 1, 231, 232, 3317, 3323 }, // 124 tc_785f65a7
  { 1, 231, 232, 3323, 3325 }, // 125 tc_c4db48cb
  { 1, 228, 229, 3325, 3327 }, // 126 tc_b43e7930
  { 1, 231, 232, 3327, 3332 }, // 127 tc_e9f3243f
  { 1, 231, 232, 3332, 3336 }, // 128 tc_7a91e76a
  { 1, 231, 232, 3336, 3341 }, // 129 tc_a5d4aeec
  { 1, 231, 232, 3341, 3344 }, // 130 tc_3b5b7ef9
  { 1, 231, 232, 3344, 3348 }, // 131 tc_bab0eed9
  { 1, 231, 232, 3348, 3352 }, // 132 tc_bf061958
  { 1, 231, 232, 3352, 3355 }, // 133 tc_7646c131
  { 1, 231, 232, 3355, 3360 }, // 134 tc_e4b3cb20
  { 1, 231, 232, 3360, 3365 }, // 135 tc_25a78932
  { 1, 231, 232, 3365, 3368 }, // 136 tc_a6b1eca9
  { 1, 226, 227, 3368, 3372 }, // 137 tc_f675fee8
  { 1, 226, 227, 3372, 3376 }, // 138 tc_05d3a09b
  { 1, 226, 227, 3376, 3380 }, // 139 tc_bdceeac1
  { 1, 226, 227, 3380, 3384 }, // 140 tc_f429765c
  { 1, 226, 227, 3384, 3388 }, // 141 tc_1a2fd869
  { 1, 226, 227, 3388, 3391 }, // 142 tc_9461ff31
  { 1, 231, 232, 3391, 3393 }, // 143 tc_0371abea
  { 1, 228, 229, 3393, 3395 }, // 144 tc_5bf126a6
  { 1, 226, 227, 3395, 3397 }, // 145 tc_14b5c689
  { 1, 226, 227, 3397, 3400 }, // 146 tc_76851da1
  { 1, 231, 232, 3400, 3405 }, // 147 tc_24b66c99
  { 1, 231, 232, 3405, 3410 }, // 148 tc_53559e35
  { 1, 228, 229, 3410, 3415 }, // 149 tc_838b34ea
  { 1, 228, 229, 3415, 3420 }, // 150 tc_d65dbf51
  { 1, 228, 229, 3420, 3425 }, // 151 tc_d5c0729a
  { 1, 228, 229, 3425, 3428 }, // 152 tc_5abb5e3f
  { 1, 231, 232, 3428, 3431 }, // 153 tc_362c6592
  { 1, 231, 232, 3431, 3436 }, // 154 tc_3962fa26
  { 1, 231, 232, 3436, 3439 }, // 155 tc_da4a37ed
  { 1, 231, 232, 3439, 3444 }, // 156 tc_40116ca8
  { 1, 228, 229, 3444, 3447 }, // 157 tc_4b68bce4
  { 1, 228, 229, 3447, 3452 }, // 158 tc_e95795ec
  { 1, 228, 229, 3452, 3455 }, // 159 tc_d2e63d61
  { 1, 228, 229, 3455, 3460 }, // 160 tc_b90a29b1
  { 1, 231, 232, 3460, 3464 }, // 161 tc_5aee39f7
  { 1, 231, 232, 3464, 3468 }, // 162 tc_14b272fa
  { 1, 228, 229, 3468, 3472 }, // 163 tc_67435e81
  { 1, 228, 229, 3472, 3476 }, // 164 tc_fcc3ddf9
  { 1, 226, 227, 3476, 3480 }, // 165 tc_13bfbcf9
  { 1, 226, 227, 3480, 3485 }, // 166 tc_9debc299
  { 1, 226, 227, 3485, 3487 }, // 167 tc_703e822c
  { 1, 226, 227, 3487, 3491 }, // 168 tc_784490da
  { 1, 226, 227, 3491, 3493 }, // 169 tc_a1c00888
  { 1, 231, 232, 3493, 3496 }, // 170 tc_0a705168
  { 1, 231, 232, 3496, 3498 }, // 171 tc_9fc3dae0
  { 1, 231, 232, 3498, 3499 }, // 172 tc_a1123dda
  { 1, 231, 232, 3499, 3500 }, // 173 tc_8b3e402a
  { 1, 231, 232, 3500, 3502 }, // 174 tc_5b7c0967
  { 1, 231, 232, 0, 0 }, // 175 tc_39dfefe8
  { 1, 228, 229, 0, 0 }, // 176 tc_b4407292
  { 1, 228, 229, 0, 0 }, // 177 tc_36153880
  { 1, 228, 229, 3502, 3503 }, // 178 tc_49a8207d
  { 1, 231, 232, 3503, 3505 }, // 179 tc_89e94ad3
  { 1, 253, 255, 3505, 3508 }, // 180 tc_540c3da3
  { 1, 255, 257, 3508, 3510 }, // 181 tc_c4edf264
  { 1, 257, 259, 3510, 3512 }, // 182 tc_5bf8afbb
  { 1, 259, 263, 3512, 3515 }, // 183 tc_a7e6707d
  { 1, 259, 263, 3515, 3519 }, // 184 tc_3c56e5ce
  { 1, 236, 239, 3519, 3523 }, // 185 tc_abe8c3b2
  { 1, 236, 239, 3523, 3528 }, // 186 tc_453fe68d
  { 1, 236, 239, 3528, 3532 }, // 187 tc_1ba8a0cd
  { 1, 263, 265, 3532, 3535 }, // 188 tc_52447ecc
  { 1, 263, 265, 3535, 3539 }, // 189 tc_3904b926
  { 1, 263, 265, 3539, 3544 }, // 190 tc_b9db8205
  { 1, 263, 265, 3544, 3548 }, // 191 tc_663c80a7
  { 1, 265, 269, 3548, 3551 }, // 192 tc_f21e8abb
  { 1, 265, 269, 3551, 3555 }, // 193 tc_131f1c81
  { 1, 265, 269, 3555, 3560 }, // 194 tc_c7039829
  { 1, 265, 269, 3560, 3564 }, // 195 tc_e2d2e9e5
  { 1, 269, 271, 3564, 3567 }, // 196 tc_ab23f776
  { 1, 269, 271, 3567, 3571 }, // 197 tc_7177e272
  { 1, 269, 271, 3571, 3576 }, // 198 tc_e99d4c2e
  { 1, 269, 271, 3576, 3580 }, // 199 tc_6942b6e0
  { 1, 241, 244, 3580, 3584 }, // 200 tc_a02a10a8
  { 1, 241, 244, 3584, 3589 }, // 201 tc_54a0dc47
  { 1, 241, 244, 3589, 3593 }, // 202 tc_447d9895
  { 1, 241, 244, 3593, 3598 }, // 203 tc_191381c1
  { 1, 241, 244, 3598, 3602 }, // 204 tc_3e2aaafc
  { 1, 269, 271, 3602, 3604 }, // 205 tc_3ce09744
  { 1, 269, 271, 3604, 3607 }, // 206 tc_20a4bbec
  { 1, 255, 257, 3607, 3610 }, // 207 tc_c127de3a
  { 1, 232, 234, 3610, 3614 }, // 208 tc_257f6f7c
  { 1, 232, 234, 3614, 3619 }, // 209 tc_7e6a3e89
  { 1, 232, 234, 3619, 3623 }, // 210 tc_e35c1e93
  { 1, 246, 248, 3623, 3626 }, // 211 tc_05ca8cfd
  { 1, 271, 273, 3626, 3629 }, // 212 tc_d8287c14
  { 1, 271, 273, 3629, 3633 }, // 213 tc_08a4f1b6
  { 1, 257, 259, 3633, 3637 }, // 214 tc_56e64202
  { 1, 255, 257, 3637, 3640 }, // 215 tc_ac4046bc
  { 1, 255, 257, 3640, 3644 }, // 216 tc_2e8f5f6e
  { 1, 246, 248, 3644, 3647 }, // 217 tc_7417e785
  { 1, 246, 248, 3647, 3651 }, // 218 tc_309dbb4f
  { 1, 273, 275, 3651, 3655 }, // 219 tc_df80eeb0
  { 1, 246, 248, 3655, 3657 }, // 220 tc_51d0ecc3
  { 1, 273, 275, 3657, 3662 }, // 221 tc_561aaa58
  { 1, 257, 259, 3662, 3664 }, // 222 tc_946013d8
  { 1, 257, 259, 3664, 3667 }, // 223 tc_46d6c3e0
  { 1, 273, 275, 3667, 3671 }, // 224 tc_87adc037
  { 1, 255, 257, 3671, 3674 }, // 225 tc_649072c2
  { 1, 255, 257, 3674, 3678 }, // 226 tc_b091f1c6
  { 1, 271, 273, 3678, 3681 }, // 227 tc_0b04c6c7
  { 1, 271, 273, 3681, 3685 }, // 228 tc_660769f1
  { 1, 275, 278, 3685, 3688 }, // 229 tc_e8797b98
  { 1, 275, 278, 3688, 3692 }, // 230 tc_05ac6f98
  { 1, 278, 281, 3692, 3695 }, // 231 tc_05058f6f
  { 1, 278, 281, 3695, 3699 }, // 232 tc_fd7610da
  { 1, 281, 283, 0, 0 }, // 233 tc_1381a97c
  { 1, 281, 283, 3699, 3700 }, // 234 tc_e3f68a46
  { 1, 283, 285, 3700, 3703 }, // 235 tc_f1de44ef
  { 1, 273, 275, 3703, 3708 }, // 236 tc_9d1dc972
  { 1, 283, 285, 3708, 3712 }, // 237 tc_90bcc1db
  { 1, 285, 288, 3712, 3715 }, // 238 tc_cd94bfe0
  { 1, 285, 288, 3715, 3719 }, // 239 tc_15fdf750
  { 1, 271, 273, 3719, 3723 }, // 240 tc_1ad8a370
  { 1, 271, 273, 3723, 3728 }, // 241 tc_e675c45a
  { 1, 288, 290, 3728, 3731 }, // 242 tc_61bf7c03
  { 1, 288, 290, 3731, 3735 }, // 243 tc_933f2b39
  { 1, 288, 290, 3735, 3739 }, // 244 tc_26a377fe
  { 1, 288, 290, 3739, 3744 }, // 245 tc_2d4051cd
  { 1, 257, 259, 3744, 3747 }, // 246 tc_6e7fa133
  { 1, 232, 234, 3747, 3750 }, // 247 tc_8772086c
  { 1, 234, 236, 3750, 3752 }, // 248 tc_b4416217
  { 1, 241, 244, 3752, 3756 }, // 249 tc_9f363d21
  { 1, 241, 244, 3756, 3761 }, // 250 tc_8e420e4d
  { 1, 290, 293, 3761, 3765 }, // 251 tc_7273323b
  { 1, 290, 293, 3765, 3770 }, // 252 tc_58d21193
  { 1, 234, 236, 3770, 3774 }, // 253 tc_71646d06
  { 1, 273, 275, 3774, 3776 }, // 254 tc_04da405a
  { 1, 273, 275, 3776, 3779 }, // 255 tc_2c745bb8
  { 1, 281, 283, 3779, 3780 }, // 256 tc_b28e51aa
  { 1, 281, 283, 3780, 3782 }, // 257 tc_767c4e9d
  { 1, 293, 295, 3782, 3784 }, // 258 tc_e699ae41
  { 1, 293, 295, 3784, 3787 }, // 259 tc_a0dbea28
  { 1, 293, 295, 3787, 3790 }, // 260 tc_dd5b0695
  { 1, 293, 295, 3790, 3794 }, // 261 tc_3ad719fb
  { 1, 228, 229, 0, 0 }, // 262 tc_8c99de45
  { 1, 252, 253, 0, 0 }, // 263 tc_9ad9998f
  { 1, 228, 229, 3794, 3795 }, // 264 tc_b857bf4e
  { 1, 228, 229, 3795, 3797 }, // 265 tc_9ca930f7
  { 1, 230, 231, 3797, 3798 }, // 266 tc_5d7f5414
  { 1, 230, 231, 0, 0 }, // 267 tc_8b121f4a
  { 1, 252, 253, 3798, 3799 }, // 268 tc_174516e8
  { 1, 228, 229, 3799, 3801 }, // 269 tc_fe211424
  { 1, 252, 253, 3801, 3802 }, // 270 tc_6b25e783
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // HexagonReadAdvanceTable

#undef DBGFIELD

static const llvm::MCSchedModel NoSchedModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  0, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV60 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  1, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV60,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV5 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  2, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV5,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV55 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  3, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV55,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV62 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  4, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV62,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV65 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  5, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV65,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV66 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  6, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV66,
  nullptr // No extra processor descriptor
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetSubTypeKV HexagonSubTypeKV[] = {
 { "generic", { { { 0xae4007ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV60 },
 { "hexagonv5", { { { 0xae4001ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV5 },
 { "hexagonv55", { { { 0xae4003ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV55 },
 { "hexagonv60", { { { 0xae4007ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV60 },
 { "hexagonv62", { { { 0xae400fULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV62 },
 { "hexagonv65", { { { 0xaf401fULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV65 },
 { "hexagonv66", { { { 0xaf403fULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV66 },
};

namespace Hexagon_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass,
    const MCInst *MI, unsigned CPUID) {
  // Don't know how to resolve this scheduling class.
  return 0;
}
} // end namespace Hexagon_MC

struct HexagonGenMCSubtargetInfo : public MCSubtargetInfo {
  HexagonGenMCSubtargetInfo(const Triple &TT, 
    StringRef CPU, StringRef FS, ArrayRef<SubtargetFeatureKV> PF,
    ArrayRef<SubtargetSubTypeKV> PD,
    const MCWriteProcResEntry *WPR,
    const MCWriteLatencyEntry *WL,
    const MCReadAdvanceEntry *RA, const InstrStage *IS,
    const unsigned *OC, const unsigned *FP) :
      MCSubtargetInfo(TT, CPU, FS, PF, PD,
                      WPR, WL, RA, IS, OC, FP) { }

  unsigned resolveVariantSchedClass(unsigned SchedClass,
      const MCInst *MI, unsigned CPUID) const override {
    return Hexagon_MC::resolveVariantSchedClassImpl(SchedClass, MI, CPUID); 
  }
  unsigned getHwMode() const override;
};
unsigned HexagonGenMCSubtargetInfo::getHwMode() const {
  if (checkFeatures("+hvx-length128b")) return 1;
  if (checkFeatures("+hvx-length64b")) return 2;
  return 0;
}

static inline MCSubtargetInfo *createHexagonMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new HexagonGenMCSubtargetInfo(TT, CPU, FS, HexagonFeatureKV, HexagonSubTypeKV, 
                      HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                      HexagonStages, HexagonOperandCycles, HexagonForwardingPaths);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::HexagonSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  LLVM_DEBUG(dbgs() << "\nFeatures:" << FS);
  LLVM_DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[Hexagon::ArchV5] && HexagonArchVersion < Hexagon::ArchEnum::V5) HexagonArchVersion = Hexagon::ArchEnum::V5;
  if (Bits[Hexagon::ArchV55] && HexagonArchVersion < Hexagon::ArchEnum::V55) HexagonArchVersion = Hexagon::ArchEnum::V55;
  if (Bits[Hexagon::ArchV60] && HexagonArchVersion < Hexagon::ArchEnum::V60) HexagonArchVersion = Hexagon::ArchEnum::V60;
  if (Bits[Hexagon::ArchV62] && HexagonArchVersion < Hexagon::ArchEnum::V62) HexagonArchVersion = Hexagon::ArchEnum::V62;
  if (Bits[Hexagon::ArchV65] && HexagonArchVersion < Hexagon::ArchEnum::V65) HexagonArchVersion = Hexagon::ArchEnum::V65;
  if (Bits[Hexagon::ArchV66] && HexagonArchVersion < Hexagon::ArchEnum::V66) HexagonArchVersion = Hexagon::ArchEnum::V66;
  if (Bits[Hexagon::ExtensionHVX] && HexagonHVXVersion < Hexagon::ArchEnum::V60) HexagonHVXVersion = Hexagon::ArchEnum::V60;
  if (Bits[Hexagon::ExtensionHVX64B]) UseHVX64BOps = true;
  if (Bits[Hexagon::ExtensionHVX128B]) UseHVX128BOps = true;
  if (Bits[Hexagon::ExtensionHVXV60] && HexagonHVXVersion < Hexagon::ArchEnum::V60) HexagonHVXVersion = Hexagon::ArchEnum::V60;
  if (Bits[Hexagon::ExtensionHVXV62] && HexagonHVXVersion < Hexagon::ArchEnum::V62) HexagonHVXVersion = Hexagon::ArchEnum::V62;
  if (Bits[Hexagon::ExtensionHVXV65] && HexagonHVXVersion < Hexagon::ArchEnum::V65) HexagonHVXVersion = Hexagon::ArchEnum::V65;
  if (Bits[Hexagon::ExtensionHVXV66] && HexagonHVXVersion < Hexagon::ArchEnum::V66) HexagonHVXVersion = Hexagon::ArchEnum::V66;
  if (Bits[Hexagon::ExtensionZReg]) UseZRegOps = true;
  if (Bits[Hexagon::FeatureDuplex]) EnableDuplex = true;
  if (Bits[Hexagon::FeatureLongCalls]) UseLongCalls = true;
  if (Bits[Hexagon::FeatureMemNoShuf]) HasMemNoShuf = false;
  if (Bits[Hexagon::FeatureMemops]) UseMemops = true;
  if (Bits[Hexagon::FeatureNVJ]) UseNewValueJumps = true;
  if (Bits[Hexagon::FeatureNVS]) UseNewValueStores = true;
  if (Bits[Hexagon::FeatureNoreturnStackElim]) NoreturnStackElim = true;
  if (Bits[Hexagon::FeaturePackets]) UsePackets = true;
  if (Bits[Hexagon::FeatureReservedR19]) ReservedR19 = true;
  if (Bits[Hexagon::FeatureSmallData]) UseSmallData = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
namespace Hexagon_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass, const MCInst *MI, unsigned CPUID);
} // end namespace Hexagon_MC

struct HexagonGenSubtargetInfo : public TargetSubtargetInfo {
  explicit HexagonGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass,  const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  unsigned resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, unsigned CPUID) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
  unsigned getHwMode() const override;
};
} // end namespace llvm

#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR

#include "llvm/CodeGen/TargetSchedule.h"

namespace llvm {
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[];
extern const llvm::SubtargetSubTypeKV HexagonSubTypeKV[];
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[];
extern const llvm::InstrStage HexagonStages[];
extern const unsigned HexagonOperandCycles[];
extern const unsigned HexagonForwardingPaths[];
HexagonGenSubtargetInfo::HexagonGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(HexagonFeatureKV, 24), makeArrayRef(HexagonSubTypeKV, 7), 
                        HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                        HexagonStages, HexagonOperandCycles, HexagonForwardingPaths) {}

unsigned HexagonGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // HexagonGenSubtargetInfo::resolveSchedClass

unsigned HexagonGenSubtargetInfo
::resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, unsigned CPUID) const {
  return Hexagon_MC::resolveVariantSchedClassImpl(SchedClass, MI, CPUID);
} // HexagonGenSubtargetInfo::resolveVariantSchedClass

unsigned HexagonGenSubtargetInfo::getHwMode() const {
  if (checkFeatures("+hvx-length128b")) return 1;
  if (checkFeatures("+hvx-length64b")) return 2;
  return 0;
}
} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR


#ifdef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS


#ifdef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS


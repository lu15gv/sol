#ifdef GET_MIMGBaseOpcode_DECL
enum MIMGBaseOpcode {
  IMAGE_ATOMIC_ADD = 0,
  IMAGE_ATOMIC_AND = 1,
  IMAGE_ATOMIC_CMPSWAP = 2,
  IMAGE_ATOMIC_DEC = 3,
  IMAGE_ATOMIC_INC = 4,
  IMAGE_ATOMIC_OR = 5,
  IMAGE_ATOMIC_SMAX = 6,
  IMAGE_ATOMIC_SMIN = 7,
  IMAGE_ATOMIC_SUB = 8,
  IMAGE_ATOMIC_SWAP = 9,
  IMAGE_ATOMIC_UMAX = 10,
  IMAGE_ATOMIC_UMIN = 11,
  IMAGE_ATOMIC_XOR = 12,
  IMAGE_GATHER4 = 13,
  IMAGE_GATHER4_B = 14,
  IMAGE_GATHER4_B_CL = 15,
  IMAGE_GATHER4_B_CL_O = 16,
  IMAGE_GATHER4_B_O = 17,
  IMAGE_GATHER4_C = 18,
  IMAGE_GATHER4_CL = 19,
  IMAGE_GATHER4_CL_O = 20,
  IMAGE_GATHER4_C_B = 21,
  IMAGE_GATHER4_C_B_CL = 22,
  IMAGE_GATHER4_C_B_CL_O = 23,
  IMAGE_GATHER4_C_B_O = 24,
  IMAGE_GATHER4_C_CL = 25,
  IMAGE_GATHER4_C_CL_O = 26,
  IMAGE_GATHER4_C_L = 27,
  IMAGE_GATHER4_C_LZ = 28,
  IMAGE_GATHER4_C_LZ_O = 29,
  IMAGE_GATHER4_C_L_O = 30,
  IMAGE_GATHER4_C_O = 31,
  IMAGE_GATHER4_L = 32,
  IMAGE_GATHER4_LZ = 33,
  IMAGE_GATHER4_LZ_O = 34,
  IMAGE_GATHER4_L_O = 35,
  IMAGE_GATHER4_O = 36,
  IMAGE_GET_LOD = 37,
  IMAGE_GET_RESINFO = 38,
  IMAGE_LOAD = 39,
  IMAGE_LOAD_MIP = 40,
  IMAGE_LOAD_MIP_PCK = 41,
  IMAGE_LOAD_MIP_PCK_SGN = 42,
  IMAGE_LOAD_PCK = 43,
  IMAGE_LOAD_PCK_SGN = 44,
  IMAGE_SAMPLE = 45,
  IMAGE_SAMPLE_B = 46,
  IMAGE_SAMPLE_B_CL = 47,
  IMAGE_SAMPLE_B_CL_O = 48,
  IMAGE_SAMPLE_B_O = 49,
  IMAGE_SAMPLE_C = 50,
  IMAGE_SAMPLE_CD = 51,
  IMAGE_SAMPLE_CD_CL = 52,
  IMAGE_SAMPLE_CD_CL_O = 53,
  IMAGE_SAMPLE_CD_O = 54,
  IMAGE_SAMPLE_CL = 55,
  IMAGE_SAMPLE_CL_O = 56,
  IMAGE_SAMPLE_C_B = 57,
  IMAGE_SAMPLE_C_B_CL = 58,
  IMAGE_SAMPLE_C_B_CL_O = 59,
  IMAGE_SAMPLE_C_B_O = 60,
  IMAGE_SAMPLE_C_CD = 61,
  IMAGE_SAMPLE_C_CD_CL = 62,
  IMAGE_SAMPLE_C_CD_CL_O = 63,
  IMAGE_SAMPLE_C_CD_O = 64,
  IMAGE_SAMPLE_C_CL = 65,
  IMAGE_SAMPLE_C_CL_O = 66,
  IMAGE_SAMPLE_C_D = 67,
  IMAGE_SAMPLE_C_D_CL = 68,
  IMAGE_SAMPLE_C_D_CL_O = 69,
  IMAGE_SAMPLE_C_D_O = 70,
  IMAGE_SAMPLE_C_L = 71,
  IMAGE_SAMPLE_C_LZ = 72,
  IMAGE_SAMPLE_C_LZ_O = 73,
  IMAGE_SAMPLE_C_L_O = 74,
  IMAGE_SAMPLE_C_O = 75,
  IMAGE_SAMPLE_D = 76,
  IMAGE_SAMPLE_D_CL = 77,
  IMAGE_SAMPLE_D_CL_O = 78,
  IMAGE_SAMPLE_D_O = 79,
  IMAGE_SAMPLE_L = 80,
  IMAGE_SAMPLE_LZ = 81,
  IMAGE_SAMPLE_LZ_O = 82,
  IMAGE_SAMPLE_L_O = 83,
  IMAGE_SAMPLE_O = 84,
  IMAGE_STORE = 85,
  IMAGE_STORE_MIP = 86,
  IMAGE_STORE_MIP_PCK = 87,
  IMAGE_STORE_PCK = 88,
};
#endif

#ifdef GET_MIMGDim_DECL
enum MIMGDim {
  AMDGPUDim1D = 0,
  AMDGPUDim1DArray = 1,
  AMDGPUDim2D = 2,
  AMDGPUDim2DArray = 3,
  AMDGPUDim2DArrayMsaa = 4,
  AMDGPUDim2DMsaa = 5,
  AMDGPUDim3D = 6,
  AMDGPUDimCube = 7,
};
#endif

#ifdef GET_MIMGEncoding_DECL
enum MIMGEncoding {
  MIMGEncGfx10Default = 0,
  MIMGEncGfx10NSA = 1,
  MIMGEncGfx6 = 2,
  MIMGEncGfx8 = 3,
};
#endif

#ifdef GET_Gfx10PlusBufferFormat_DECL
const GcnBufferFormatInfo *getGfx10PlusBufferFormatInfo(uint8_t BitsPerComp, uint8_t NumComponents, uint8_t NumFormat);
const GcnBufferFormatInfo *getGfx10PlusBufferFormatInfo(uint8_t Format);
#endif

#ifdef GET_Gfx10PlusBufferFormat_IMPL
constexpr GcnBufferFormatInfo Gfx10PlusBufferFormat[] = {
  { 0x1, 0x8, 0x1, 0x0, 0x1 }, // 0
  { 0x2, 0x8, 0x1, 0x1, 0x1 }, // 1
  { 0x3, 0x8, 0x1, 0x2, 0x1 }, // 2
  { 0x4, 0x8, 0x1, 0x3, 0x1 }, // 3
  { 0x5, 0x8, 0x1, 0x4, 0x1 }, // 4
  { 0x6, 0x8, 0x1, 0x5, 0x1 }, // 5
  { 0xE, 0x8, 0x2, 0x0, 0x3 }, // 6
  { 0xF, 0x8, 0x2, 0x1, 0x3 }, // 7
  { 0x10, 0x8, 0x2, 0x2, 0x3 }, // 8
  { 0x11, 0x8, 0x2, 0x3, 0x3 }, // 9
  { 0x12, 0x8, 0x2, 0x4, 0x3 }, // 10
  { 0x13, 0x8, 0x2, 0x5, 0x3 }, // 11
  { 0x38, 0x8, 0x4, 0x0, 0xA }, // 12
  { 0x39, 0x8, 0x4, 0x1, 0xA }, // 13
  { 0x3A, 0x8, 0x4, 0x2, 0xA }, // 14
  { 0x3B, 0x8, 0x4, 0x3, 0xA }, // 15
  { 0x3C, 0x8, 0x4, 0x4, 0xA }, // 16
  { 0x3D, 0x8, 0x4, 0x5, 0xA }, // 17
  { 0x7, 0x10, 0x1, 0x0, 0x2 }, // 18
  { 0x8, 0x10, 0x1, 0x1, 0x2 }, // 19
  { 0x9, 0x10, 0x1, 0x2, 0x2 }, // 20
  { 0xA, 0x10, 0x1, 0x3, 0x2 }, // 21
  { 0xB, 0x10, 0x1, 0x4, 0x2 }, // 22
  { 0xC, 0x10, 0x1, 0x5, 0x2 }, // 23
  { 0xD, 0x10, 0x1, 0x7, 0x2 }, // 24
  { 0x17, 0x10, 0x2, 0x0, 0x5 }, // 25
  { 0x18, 0x10, 0x2, 0x1, 0x5 }, // 26
  { 0x19, 0x10, 0x2, 0x2, 0x5 }, // 27
  { 0x1A, 0x10, 0x2, 0x3, 0x5 }, // 28
  { 0x1B, 0x10, 0x2, 0x4, 0x5 }, // 29
  { 0x1C, 0x10, 0x2, 0x5, 0x5 }, // 30
  { 0x1D, 0x10, 0x2, 0x7, 0x5 }, // 31
  { 0x41, 0x10, 0x4, 0x0, 0xC }, // 32
  { 0x42, 0x10, 0x4, 0x1, 0xC }, // 33
  { 0x43, 0x10, 0x4, 0x2, 0xC }, // 34
  { 0x44, 0x10, 0x4, 0x3, 0xC }, // 35
  { 0x45, 0x10, 0x4, 0x4, 0xC }, // 36
  { 0x46, 0x10, 0x4, 0x5, 0xC }, // 37
  { 0x47, 0x10, 0x4, 0x7, 0xC }, // 38
  { 0x14, 0x20, 0x1, 0x4, 0x4 }, // 39
  { 0x15, 0x20, 0x1, 0x5, 0x4 }, // 40
  { 0x16, 0x20, 0x1, 0x7, 0x4 }, // 41
  { 0x3E, 0x20, 0x2, 0x4, 0xB }, // 42
  { 0x3F, 0x20, 0x2, 0x5, 0xB }, // 43
  { 0x40, 0x20, 0x2, 0x7, 0xB }, // 44
  { 0x48, 0x20, 0x3, 0x4, 0xD }, // 45
  { 0x49, 0x20, 0x3, 0x5, 0xD }, // 46
  { 0x4A, 0x20, 0x3, 0x7, 0xD }, // 47
  { 0x4B, 0x20, 0x4, 0x4, 0xE }, // 48
  { 0x4C, 0x20, 0x4, 0x5, 0xE }, // 49
  { 0x4D, 0x20, 0x4, 0x7, 0xE }, // 50
 };

const GcnBufferFormatInfo *getGfx10PlusBufferFormatInfo(uint8_t BitsPerComp, uint8_t NumComponents, uint8_t NumFormat) {
  struct KeyType {
    uint8_t BitsPerComp;
    uint8_t NumComponents;
    uint8_t NumFormat;
  };
  KeyType Key = { BitsPerComp, NumComponents, NumFormat };
  auto Table = makeArrayRef(Gfx10PlusBufferFormat);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const GcnBufferFormatInfo &LHS, const KeyType &RHS) {
      if (LHS.BitsPerComp < RHS.BitsPerComp)
        return true;
      if (LHS.BitsPerComp > RHS.BitsPerComp)
        return false;
      if (LHS.NumComponents < RHS.NumComponents)
        return true;
      if (LHS.NumComponents > RHS.NumComponents)
        return false;
      if (LHS.NumFormat < RHS.NumFormat)
        return true;
      if (LHS.NumFormat > RHS.NumFormat)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.BitsPerComp != Idx->BitsPerComp ||
      Key.NumComponents != Idx->NumComponents ||
      Key.NumFormat != Idx->NumFormat)
    return nullptr;
  return &*Idx;
}

const GcnBufferFormatInfo *getGfx10PlusBufferFormatInfo(uint8_t Format) {
  struct IndexType {
    uint8_t Format;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { 0x1, 0 },
    { 0x2, 1 },
    { 0x3, 2 },
    { 0x4, 3 },
    { 0x5, 4 },
    { 0x6, 5 },
    { 0x7, 18 },
    { 0x8, 19 },
    { 0x9, 20 },
    { 0xA, 21 },
    { 0xB, 22 },
    { 0xC, 23 },
    { 0xD, 24 },
    { 0xE, 6 },
    { 0xF, 7 },
    { 0x10, 8 },
    { 0x11, 9 },
    { 0x12, 10 },
    { 0x13, 11 },
    { 0x14, 39 },
    { 0x15, 40 },
    { 0x16, 41 },
    { 0x17, 25 },
    { 0x18, 26 },
    { 0x19, 27 },
    { 0x1A, 28 },
    { 0x1B, 29 },
    { 0x1C, 30 },
    { 0x1D, 31 },
    { 0x38, 12 },
    { 0x39, 13 },
    { 0x3A, 14 },
    { 0x3B, 15 },
    { 0x3C, 16 },
    { 0x3D, 17 },
    { 0x3E, 42 },
    { 0x3F, 43 },
    { 0x40, 44 },
    { 0x41, 32 },
    { 0x42, 33 },
    { 0x43, 34 },
    { 0x44, 35 },
    { 0x45, 36 },
    { 0x46, 37 },
    { 0x47, 38 },
    { 0x48, 45 },
    { 0x49, 46 },
    { 0x4A, 47 },
    { 0x4B, 48 },
    { 0x4C, 49 },
    { 0x4D, 50 },
  };

  struct KeyType {
    uint8_t Format;
  };
  KeyType Key = { Format };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.Format < RHS.Format)
        return true;
      if (LHS.Format > RHS.Format)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Format != Idx->Format)
    return nullptr;
  return &Gfx10PlusBufferFormat[Idx->_index];
}
#endif

#ifdef GET_Gfx9BufferFormat_DECL
const GcnBufferFormatInfo *getGfx9BufferFormatInfo(uint8_t BitsPerComp, uint8_t NumComponents, uint8_t NumFormat);
const GcnBufferFormatInfo *getGfx9BufferFormatInfo(uint8_t Format);
#endif

#ifdef GET_Gfx9BufferFormat_IMPL
constexpr GcnBufferFormatInfo Gfx9BufferFormat[] = {
  { 0x1, 0x8, 0x1, 0x0, 0x1 }, // 0
  { 0x11, 0x8, 0x1, 0x1, 0x1 }, // 1
  { 0x21, 0x8, 0x1, 0x2, 0x1 }, // 2
  { 0x31, 0x8, 0x1, 0x3, 0x1 }, // 3
  { 0x41, 0x8, 0x1, 0x4, 0x1 }, // 4
  { 0x51, 0x8, 0x1, 0x5, 0x1 }, // 5
  { 0x3, 0x8, 0x2, 0x0, 0x3 }, // 6
  { 0x13, 0x8, 0x2, 0x1, 0x3 }, // 7
  { 0x23, 0x8, 0x2, 0x2, 0x3 }, // 8
  { 0x33, 0x8, 0x2, 0x3, 0x3 }, // 9
  { 0x43, 0x8, 0x2, 0x4, 0x3 }, // 10
  { 0x53, 0x8, 0x2, 0x5, 0x3 }, // 11
  { 0xA, 0x8, 0x4, 0x0, 0xA }, // 12
  { 0x1A, 0x8, 0x4, 0x1, 0xA }, // 13
  { 0x2A, 0x8, 0x4, 0x2, 0xA }, // 14
  { 0x3A, 0x8, 0x4, 0x3, 0xA }, // 15
  { 0x4A, 0x8, 0x4, 0x4, 0xA }, // 16
  { 0x5A, 0x8, 0x4, 0x5, 0xA }, // 17
  { 0x2, 0x10, 0x1, 0x0, 0x2 }, // 18
  { 0x12, 0x10, 0x1, 0x1, 0x2 }, // 19
  { 0x22, 0x10, 0x1, 0x2, 0x2 }, // 20
  { 0x32, 0x10, 0x1, 0x3, 0x2 }, // 21
  { 0x42, 0x10, 0x1, 0x4, 0x2 }, // 22
  { 0x52, 0x10, 0x1, 0x5, 0x2 }, // 23
  { 0x72, 0x10, 0x1, 0x7, 0x2 }, // 24
  { 0x5, 0x10, 0x2, 0x0, 0x5 }, // 25
  { 0x15, 0x10, 0x2, 0x1, 0x5 }, // 26
  { 0x25, 0x10, 0x2, 0x2, 0x5 }, // 27
  { 0x35, 0x10, 0x2, 0x3, 0x5 }, // 28
  { 0x45, 0x10, 0x2, 0x4, 0x5 }, // 29
  { 0x55, 0x10, 0x2, 0x5, 0x5 }, // 30
  { 0x75, 0x10, 0x2, 0x7, 0x5 }, // 31
  { 0xC, 0x10, 0x4, 0x0, 0xC }, // 32
  { 0x1C, 0x10, 0x4, 0x1, 0xC }, // 33
  { 0x2C, 0x10, 0x4, 0x2, 0xC }, // 34
  { 0x3C, 0x10, 0x4, 0x3, 0xC }, // 35
  { 0x4C, 0x10, 0x4, 0x4, 0xC }, // 36
  { 0x5C, 0x10, 0x4, 0x5, 0xC }, // 37
  { 0x7C, 0x10, 0x4, 0x7, 0xC }, // 38
  { 0x44, 0x20, 0x1, 0x4, 0x4 }, // 39
  { 0x54, 0x20, 0x1, 0x5, 0x4 }, // 40
  { 0x74, 0x20, 0x1, 0x7, 0x4 }, // 41
  { 0x4B, 0x20, 0x2, 0x4, 0xB }, // 42
  { 0x5B, 0x20, 0x2, 0x5, 0xB }, // 43
  { 0x7B, 0x20, 0x2, 0x7, 0xB }, // 44
  { 0x4D, 0x20, 0x3, 0x4, 0xD }, // 45
  { 0x5D, 0x20, 0x3, 0x5, 0xD }, // 46
  { 0x7D, 0x20, 0x3, 0x7, 0xD }, // 47
  { 0x4E, 0x20, 0x4, 0x4, 0xE }, // 48
  { 0x5E, 0x20, 0x4, 0x5, 0xE }, // 49
  { 0x7E, 0x20, 0x4, 0x7, 0xE }, // 50
 };

const GcnBufferFormatInfo *getGfx9BufferFormatInfo(uint8_t BitsPerComp, uint8_t NumComponents, uint8_t NumFormat) {
  struct KeyType {
    uint8_t BitsPerComp;
    uint8_t NumComponents;
    uint8_t NumFormat;
  };
  KeyType Key = { BitsPerComp, NumComponents, NumFormat };
  auto Table = makeArrayRef(Gfx9BufferFormat);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const GcnBufferFormatInfo &LHS, const KeyType &RHS) {
      if (LHS.BitsPerComp < RHS.BitsPerComp)
        return true;
      if (LHS.BitsPerComp > RHS.BitsPerComp)
        return false;
      if (LHS.NumComponents < RHS.NumComponents)
        return true;
      if (LHS.NumComponents > RHS.NumComponents)
        return false;
      if (LHS.NumFormat < RHS.NumFormat)
        return true;
      if (LHS.NumFormat > RHS.NumFormat)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.BitsPerComp != Idx->BitsPerComp ||
      Key.NumComponents != Idx->NumComponents ||
      Key.NumFormat != Idx->NumFormat)
    return nullptr;
  return &*Idx;
}

const GcnBufferFormatInfo *getGfx9BufferFormatInfo(uint8_t Format) {
  struct IndexType {
    uint8_t Format;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { 0x1, 0 },
    { 0x2, 18 },
    { 0x3, 6 },
    { 0x5, 25 },
    { 0xA, 12 },
    { 0xC, 32 },
    { 0x11, 1 },
    { 0x12, 19 },
    { 0x13, 7 },
    { 0x15, 26 },
    { 0x1A, 13 },
    { 0x1C, 33 },
    { 0x21, 2 },
    { 0x22, 20 },
    { 0x23, 8 },
    { 0x25, 27 },
    { 0x2A, 14 },
    { 0x2C, 34 },
    { 0x31, 3 },
    { 0x32, 21 },
    { 0x33, 9 },
    { 0x35, 28 },
    { 0x3A, 15 },
    { 0x3C, 35 },
    { 0x41, 4 },
    { 0x42, 22 },
    { 0x43, 10 },
    { 0x44, 39 },
    { 0x45, 29 },
    { 0x4A, 16 },
    { 0x4B, 42 },
    { 0x4C, 36 },
    { 0x4D, 45 },
    { 0x4E, 48 },
    { 0x51, 5 },
    { 0x52, 23 },
    { 0x53, 11 },
    { 0x54, 40 },
    { 0x55, 30 },
    { 0x5A, 17 },
    { 0x5B, 43 },
    { 0x5C, 37 },
    { 0x5D, 46 },
    { 0x5E, 49 },
    { 0x72, 24 },
    { 0x74, 41 },
    { 0x75, 31 },
    { 0x7B, 44 },
    { 0x7C, 38 },
    { 0x7D, 47 },
    { 0x7E, 50 },
  };

  struct KeyType {
    uint8_t Format;
  };
  KeyType Key = { Format };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.Format < RHS.Format)
        return true;
      if (LHS.Format > RHS.Format)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Format != Idx->Format)
    return nullptr;
  return &Gfx9BufferFormat[Idx->_index];
}
#endif

#ifdef GET_ImageDimIntrinsicTable_DECL
const ImageDimIntrinsicInfo *getImageDimIntrinsicInfo(unsigned Intr);
#endif

#ifdef GET_ImageDimIntrinsicTable_IMPL
constexpr ImageDimIntrinsicInfo ImageDimIntrinsicTable[] = {
  { Intrinsic::amdgcn_image_atomic_add_1d, IMAGE_ATOMIC_ADD, AMDGPUDim1D }, // 0
  { Intrinsic::amdgcn_image_atomic_add_1darray, IMAGE_ATOMIC_ADD, AMDGPUDim1DArray }, // 1
  { Intrinsic::amdgcn_image_atomic_add_2d, IMAGE_ATOMIC_ADD, AMDGPUDim2D }, // 2
  { Intrinsic::amdgcn_image_atomic_add_2darray, IMAGE_ATOMIC_ADD, AMDGPUDim2DArray }, // 3
  { Intrinsic::amdgcn_image_atomic_add_2darraymsaa, IMAGE_ATOMIC_ADD, AMDGPUDim2DArrayMsaa }, // 4
  { Intrinsic::amdgcn_image_atomic_add_2dmsaa, IMAGE_ATOMIC_ADD, AMDGPUDim2DMsaa }, // 5
  { Intrinsic::amdgcn_image_atomic_add_3d, IMAGE_ATOMIC_ADD, AMDGPUDim3D }, // 6
  { Intrinsic::amdgcn_image_atomic_add_cube, IMAGE_ATOMIC_ADD, AMDGPUDimCube }, // 7
  { Intrinsic::amdgcn_image_atomic_and_1d, IMAGE_ATOMIC_AND, AMDGPUDim1D }, // 8
  { Intrinsic::amdgcn_image_atomic_and_1darray, IMAGE_ATOMIC_AND, AMDGPUDim1DArray }, // 9
  { Intrinsic::amdgcn_image_atomic_and_2d, IMAGE_ATOMIC_AND, AMDGPUDim2D }, // 10
  { Intrinsic::amdgcn_image_atomic_and_2darray, IMAGE_ATOMIC_AND, AMDGPUDim2DArray }, // 11
  { Intrinsic::amdgcn_image_atomic_and_2darraymsaa, IMAGE_ATOMIC_AND, AMDGPUDim2DArrayMsaa }, // 12
  { Intrinsic::amdgcn_image_atomic_and_2dmsaa, IMAGE_ATOMIC_AND, AMDGPUDim2DMsaa }, // 13
  { Intrinsic::amdgcn_image_atomic_and_3d, IMAGE_ATOMIC_AND, AMDGPUDim3D }, // 14
  { Intrinsic::amdgcn_image_atomic_and_cube, IMAGE_ATOMIC_AND, AMDGPUDimCube }, // 15
  { Intrinsic::amdgcn_image_atomic_cmpswap_1d, IMAGE_ATOMIC_CMPSWAP, AMDGPUDim1D }, // 16
  { Intrinsic::amdgcn_image_atomic_cmpswap_1darray, IMAGE_ATOMIC_CMPSWAP, AMDGPUDim1DArray }, // 17
  { Intrinsic::amdgcn_image_atomic_cmpswap_2d, IMAGE_ATOMIC_CMPSWAP, AMDGPUDim2D }, // 18
  { Intrinsic::amdgcn_image_atomic_cmpswap_2darray, IMAGE_ATOMIC_CMPSWAP, AMDGPUDim2DArray }, // 19
  { Intrinsic::amdgcn_image_atomic_cmpswap_2darraymsaa, IMAGE_ATOMIC_CMPSWAP, AMDGPUDim2DArrayMsaa }, // 20
  { Intrinsic::amdgcn_image_atomic_cmpswap_2dmsaa, IMAGE_ATOMIC_CMPSWAP, AMDGPUDim2DMsaa }, // 21
  { Intrinsic::amdgcn_image_atomic_cmpswap_3d, IMAGE_ATOMIC_CMPSWAP, AMDGPUDim3D }, // 22
  { Intrinsic::amdgcn_image_atomic_cmpswap_cube, IMAGE_ATOMIC_CMPSWAP, AMDGPUDimCube }, // 23
  { Intrinsic::amdgcn_image_atomic_dec_1d, IMAGE_ATOMIC_DEC, AMDGPUDim1D }, // 24
  { Intrinsic::amdgcn_image_atomic_dec_1darray, IMAGE_ATOMIC_DEC, AMDGPUDim1DArray }, // 25
  { Intrinsic::amdgcn_image_atomic_dec_2d, IMAGE_ATOMIC_DEC, AMDGPUDim2D }, // 26
  { Intrinsic::amdgcn_image_atomic_dec_2darray, IMAGE_ATOMIC_DEC, AMDGPUDim2DArray }, // 27
  { Intrinsic::amdgcn_image_atomic_dec_2darraymsaa, IMAGE_ATOMIC_DEC, AMDGPUDim2DArrayMsaa }, // 28
  { Intrinsic::amdgcn_image_atomic_dec_2dmsaa, IMAGE_ATOMIC_DEC, AMDGPUDim2DMsaa }, // 29
  { Intrinsic::amdgcn_image_atomic_dec_3d, IMAGE_ATOMIC_DEC, AMDGPUDim3D }, // 30
  { Intrinsic::amdgcn_image_atomic_dec_cube, IMAGE_ATOMIC_DEC, AMDGPUDimCube }, // 31
  { Intrinsic::amdgcn_image_atomic_inc_1d, IMAGE_ATOMIC_INC, AMDGPUDim1D }, // 32
  { Intrinsic::amdgcn_image_atomic_inc_1darray, IMAGE_ATOMIC_INC, AMDGPUDim1DArray }, // 33
  { Intrinsic::amdgcn_image_atomic_inc_2d, IMAGE_ATOMIC_INC, AMDGPUDim2D }, // 34
  { Intrinsic::amdgcn_image_atomic_inc_2darray, IMAGE_ATOMIC_INC, AMDGPUDim2DArray }, // 35
  { Intrinsic::amdgcn_image_atomic_inc_2darraymsaa, IMAGE_ATOMIC_INC, AMDGPUDim2DArrayMsaa }, // 36
  { Intrinsic::amdgcn_image_atomic_inc_2dmsaa, IMAGE_ATOMIC_INC, AMDGPUDim2DMsaa }, // 37
  { Intrinsic::amdgcn_image_atomic_inc_3d, IMAGE_ATOMIC_INC, AMDGPUDim3D }, // 38
  { Intrinsic::amdgcn_image_atomic_inc_cube, IMAGE_ATOMIC_INC, AMDGPUDimCube }, // 39
  { Intrinsic::amdgcn_image_atomic_or_1d, IMAGE_ATOMIC_OR, AMDGPUDim1D }, // 40
  { Intrinsic::amdgcn_image_atomic_or_1darray, IMAGE_ATOMIC_OR, AMDGPUDim1DArray }, // 41
  { Intrinsic::amdgcn_image_atomic_or_2d, IMAGE_ATOMIC_OR, AMDGPUDim2D }, // 42
  { Intrinsic::amdgcn_image_atomic_or_2darray, IMAGE_ATOMIC_OR, AMDGPUDim2DArray }, // 43
  { Intrinsic::amdgcn_image_atomic_or_2darraymsaa, IMAGE_ATOMIC_OR, AMDGPUDim2DArrayMsaa }, // 44
  { Intrinsic::amdgcn_image_atomic_or_2dmsaa, IMAGE_ATOMIC_OR, AMDGPUDim2DMsaa }, // 45
  { Intrinsic::amdgcn_image_atomic_or_3d, IMAGE_ATOMIC_OR, AMDGPUDim3D }, // 46
  { Intrinsic::amdgcn_image_atomic_or_cube, IMAGE_ATOMIC_OR, AMDGPUDimCube }, // 47
  { Intrinsic::amdgcn_image_atomic_smax_1d, IMAGE_ATOMIC_SMAX, AMDGPUDim1D }, // 48
  { Intrinsic::amdgcn_image_atomic_smax_1darray, IMAGE_ATOMIC_SMAX, AMDGPUDim1DArray }, // 49
  { Intrinsic::amdgcn_image_atomic_smax_2d, IMAGE_ATOMIC_SMAX, AMDGPUDim2D }, // 50
  { Intrinsic::amdgcn_image_atomic_smax_2darray, IMAGE_ATOMIC_SMAX, AMDGPUDim2DArray }, // 51
  { Intrinsic::amdgcn_image_atomic_smax_2darraymsaa, IMAGE_ATOMIC_SMAX, AMDGPUDim2DArrayMsaa }, // 52
  { Intrinsic::amdgcn_image_atomic_smax_2dmsaa, IMAGE_ATOMIC_SMAX, AMDGPUDim2DMsaa }, // 53
  { Intrinsic::amdgcn_image_atomic_smax_3d, IMAGE_ATOMIC_SMAX, AMDGPUDim3D }, // 54
  { Intrinsic::amdgcn_image_atomic_smax_cube, IMAGE_ATOMIC_SMAX, AMDGPUDimCube }, // 55
  { Intrinsic::amdgcn_image_atomic_smin_1d, IMAGE_ATOMIC_SMIN, AMDGPUDim1D }, // 56
  { Intrinsic::amdgcn_image_atomic_smin_1darray, IMAGE_ATOMIC_SMIN, AMDGPUDim1DArray }, // 57
  { Intrinsic::amdgcn_image_atomic_smin_2d, IMAGE_ATOMIC_SMIN, AMDGPUDim2D }, // 58
  { Intrinsic::amdgcn_image_atomic_smin_2darray, IMAGE_ATOMIC_SMIN, AMDGPUDim2DArray }, // 59
  { Intrinsic::amdgcn_image_atomic_smin_2darraymsaa, IMAGE_ATOMIC_SMIN, AMDGPUDim2DArrayMsaa }, // 60
  { Intrinsic::amdgcn_image_atomic_smin_2dmsaa, IMAGE_ATOMIC_SMIN, AMDGPUDim2DMsaa }, // 61
  { Intrinsic::amdgcn_image_atomic_smin_3d, IMAGE_ATOMIC_SMIN, AMDGPUDim3D }, // 62
  { Intrinsic::amdgcn_image_atomic_smin_cube, IMAGE_ATOMIC_SMIN, AMDGPUDimCube }, // 63
  { Intrinsic::amdgcn_image_atomic_sub_1d, IMAGE_ATOMIC_SUB, AMDGPUDim1D }, // 64
  { Intrinsic::amdgcn_image_atomic_sub_1darray, IMAGE_ATOMIC_SUB, AMDGPUDim1DArray }, // 65
  { Intrinsic::amdgcn_image_atomic_sub_2d, IMAGE_ATOMIC_SUB, AMDGPUDim2D }, // 66
  { Intrinsic::amdgcn_image_atomic_sub_2darray, IMAGE_ATOMIC_SUB, AMDGPUDim2DArray }, // 67
  { Intrinsic::amdgcn_image_atomic_sub_2darraymsaa, IMAGE_ATOMIC_SUB, AMDGPUDim2DArrayMsaa }, // 68
  { Intrinsic::amdgcn_image_atomic_sub_2dmsaa, IMAGE_ATOMIC_SUB, AMDGPUDim2DMsaa }, // 69
  { Intrinsic::amdgcn_image_atomic_sub_3d, IMAGE_ATOMIC_SUB, AMDGPUDim3D }, // 70
  { Intrinsic::amdgcn_image_atomic_sub_cube, IMAGE_ATOMIC_SUB, AMDGPUDimCube }, // 71
  { Intrinsic::amdgcn_image_atomic_swap_1d, IMAGE_ATOMIC_SWAP, AMDGPUDim1D }, // 72
  { Intrinsic::amdgcn_image_atomic_swap_1darray, IMAGE_ATOMIC_SWAP, AMDGPUDim1DArray }, // 73
  { Intrinsic::amdgcn_image_atomic_swap_2d, IMAGE_ATOMIC_SWAP, AMDGPUDim2D }, // 74
  { Intrinsic::amdgcn_image_atomic_swap_2darray, IMAGE_ATOMIC_SWAP, AMDGPUDim2DArray }, // 75
  { Intrinsic::amdgcn_image_atomic_swap_2darraymsaa, IMAGE_ATOMIC_SWAP, AMDGPUDim2DArrayMsaa }, // 76
  { Intrinsic::amdgcn_image_atomic_swap_2dmsaa, IMAGE_ATOMIC_SWAP, AMDGPUDim2DMsaa }, // 77
  { Intrinsic::amdgcn_image_atomic_swap_3d, IMAGE_ATOMIC_SWAP, AMDGPUDim3D }, // 78
  { Intrinsic::amdgcn_image_atomic_swap_cube, IMAGE_ATOMIC_SWAP, AMDGPUDimCube }, // 79
  { Intrinsic::amdgcn_image_atomic_umax_1d, IMAGE_ATOMIC_UMAX, AMDGPUDim1D }, // 80
  { Intrinsic::amdgcn_image_atomic_umax_1darray, IMAGE_ATOMIC_UMAX, AMDGPUDim1DArray }, // 81
  { Intrinsic::amdgcn_image_atomic_umax_2d, IMAGE_ATOMIC_UMAX, AMDGPUDim2D }, // 82
  { Intrinsic::amdgcn_image_atomic_umax_2darray, IMAGE_ATOMIC_UMAX, AMDGPUDim2DArray }, // 83
  { Intrinsic::amdgcn_image_atomic_umax_2darraymsaa, IMAGE_ATOMIC_UMAX, AMDGPUDim2DArrayMsaa }, // 84
  { Intrinsic::amdgcn_image_atomic_umax_2dmsaa, IMAGE_ATOMIC_UMAX, AMDGPUDim2DMsaa }, // 85
  { Intrinsic::amdgcn_image_atomic_umax_3d, IMAGE_ATOMIC_UMAX, AMDGPUDim3D }, // 86
  { Intrinsic::amdgcn_image_atomic_umax_cube, IMAGE_ATOMIC_UMAX, AMDGPUDimCube }, // 87
  { Intrinsic::amdgcn_image_atomic_umin_1d, IMAGE_ATOMIC_UMIN, AMDGPUDim1D }, // 88
  { Intrinsic::amdgcn_image_atomic_umin_1darray, IMAGE_ATOMIC_UMIN, AMDGPUDim1DArray }, // 89
  { Intrinsic::amdgcn_image_atomic_umin_2d, IMAGE_ATOMIC_UMIN, AMDGPUDim2D }, // 90
  { Intrinsic::amdgcn_image_atomic_umin_2darray, IMAGE_ATOMIC_UMIN, AMDGPUDim2DArray }, // 91
  { Intrinsic::amdgcn_image_atomic_umin_2darraymsaa, IMAGE_ATOMIC_UMIN, AMDGPUDim2DArrayMsaa }, // 92
  { Intrinsic::amdgcn_image_atomic_umin_2dmsaa, IMAGE_ATOMIC_UMIN, AMDGPUDim2DMsaa }, // 93
  { Intrinsic::amdgcn_image_atomic_umin_3d, IMAGE_ATOMIC_UMIN, AMDGPUDim3D }, // 94
  { Intrinsic::amdgcn_image_atomic_umin_cube, IMAGE_ATOMIC_UMIN, AMDGPUDimCube }, // 95
  { Intrinsic::amdgcn_image_atomic_xor_1d, IMAGE_ATOMIC_XOR, AMDGPUDim1D }, // 96
  { Intrinsic::amdgcn_image_atomic_xor_1darray, IMAGE_ATOMIC_XOR, AMDGPUDim1DArray }, // 97
  { Intrinsic::amdgcn_image_atomic_xor_2d, IMAGE_ATOMIC_XOR, AMDGPUDim2D }, // 98
  { Intrinsic::amdgcn_image_atomic_xor_2darray, IMAGE_ATOMIC_XOR, AMDGPUDim2DArray }, // 99
  { Intrinsic::amdgcn_image_atomic_xor_2darraymsaa, IMAGE_ATOMIC_XOR, AMDGPUDim2DArrayMsaa }, // 100
  { Intrinsic::amdgcn_image_atomic_xor_2dmsaa, IMAGE_ATOMIC_XOR, AMDGPUDim2DMsaa }, // 101
  { Intrinsic::amdgcn_image_atomic_xor_3d, IMAGE_ATOMIC_XOR, AMDGPUDim3D }, // 102
  { Intrinsic::amdgcn_image_atomic_xor_cube, IMAGE_ATOMIC_XOR, AMDGPUDimCube }, // 103
  { Intrinsic::amdgcn_image_gather4_2d, IMAGE_GATHER4, AMDGPUDim2D }, // 104
  { Intrinsic::amdgcn_image_gather4_2darray, IMAGE_GATHER4, AMDGPUDim2DArray }, // 105
  { Intrinsic::amdgcn_image_gather4_b_2d, IMAGE_GATHER4_B, AMDGPUDim2D }, // 106
  { Intrinsic::amdgcn_image_gather4_b_2darray, IMAGE_GATHER4_B, AMDGPUDim2DArray }, // 107
  { Intrinsic::amdgcn_image_gather4_b_cl_2d, IMAGE_GATHER4_B_CL, AMDGPUDim2D }, // 108
  { Intrinsic::amdgcn_image_gather4_b_cl_2darray, IMAGE_GATHER4_B_CL, AMDGPUDim2DArray }, // 109
  { Intrinsic::amdgcn_image_gather4_b_cl_cube, IMAGE_GATHER4_B_CL, AMDGPUDimCube }, // 110
  { Intrinsic::amdgcn_image_gather4_b_cl_o_2d, IMAGE_GATHER4_B_CL_O, AMDGPUDim2D }, // 111
  { Intrinsic::amdgcn_image_gather4_b_cl_o_2darray, IMAGE_GATHER4_B_CL_O, AMDGPUDim2DArray }, // 112
  { Intrinsic::amdgcn_image_gather4_b_cl_o_cube, IMAGE_GATHER4_B_CL_O, AMDGPUDimCube }, // 113
  { Intrinsic::amdgcn_image_gather4_b_cube, IMAGE_GATHER4_B, AMDGPUDimCube }, // 114
  { Intrinsic::amdgcn_image_gather4_b_o_2d, IMAGE_GATHER4_B_O, AMDGPUDim2D }, // 115
  { Intrinsic::amdgcn_image_gather4_b_o_2darray, IMAGE_GATHER4_B_O, AMDGPUDim2DArray }, // 116
  { Intrinsic::amdgcn_image_gather4_b_o_cube, IMAGE_GATHER4_B_O, AMDGPUDimCube }, // 117
  { Intrinsic::amdgcn_image_gather4_c_2d, IMAGE_GATHER4_C, AMDGPUDim2D }, // 118
  { Intrinsic::amdgcn_image_gather4_c_2darray, IMAGE_GATHER4_C, AMDGPUDim2DArray }, // 119
  { Intrinsic::amdgcn_image_gather4_c_b_2d, IMAGE_GATHER4_C_B, AMDGPUDim2D }, // 120
  { Intrinsic::amdgcn_image_gather4_c_b_2darray, IMAGE_GATHER4_C_B, AMDGPUDim2DArray }, // 121
  { Intrinsic::amdgcn_image_gather4_c_b_cl_2d, IMAGE_GATHER4_C_B_CL, AMDGPUDim2D }, // 122
  { Intrinsic::amdgcn_image_gather4_c_b_cl_2darray, IMAGE_GATHER4_C_B_CL, AMDGPUDim2DArray }, // 123
  { Intrinsic::amdgcn_image_gather4_c_b_cl_cube, IMAGE_GATHER4_C_B_CL, AMDGPUDimCube }, // 124
  { Intrinsic::amdgcn_image_gather4_c_b_cl_o_2d, IMAGE_GATHER4_C_B_CL_O, AMDGPUDim2D }, // 125
  { Intrinsic::amdgcn_image_gather4_c_b_cl_o_2darray, IMAGE_GATHER4_C_B_CL_O, AMDGPUDim2DArray }, // 126
  { Intrinsic::amdgcn_image_gather4_c_b_cl_o_cube, IMAGE_GATHER4_C_B_CL_O, AMDGPUDimCube }, // 127
  { Intrinsic::amdgcn_image_gather4_c_b_cube, IMAGE_GATHER4_C_B, AMDGPUDimCube }, // 128
  { Intrinsic::amdgcn_image_gather4_c_b_o_2d, IMAGE_GATHER4_C_B_O, AMDGPUDim2D }, // 129
  { Intrinsic::amdgcn_image_gather4_c_b_o_2darray, IMAGE_GATHER4_C_B_O, AMDGPUDim2DArray }, // 130
  { Intrinsic::amdgcn_image_gather4_c_b_o_cube, IMAGE_GATHER4_C_B_O, AMDGPUDimCube }, // 131
  { Intrinsic::amdgcn_image_gather4_c_cl_2d, IMAGE_GATHER4_C_CL, AMDGPUDim2D }, // 132
  { Intrinsic::amdgcn_image_gather4_c_cl_2darray, IMAGE_GATHER4_C_CL, AMDGPUDim2DArray }, // 133
  { Intrinsic::amdgcn_image_gather4_c_cl_cube, IMAGE_GATHER4_C_CL, AMDGPUDimCube }, // 134
  { Intrinsic::amdgcn_image_gather4_c_cl_o_2d, IMAGE_GATHER4_C_CL_O, AMDGPUDim2D }, // 135
  { Intrinsic::amdgcn_image_gather4_c_cl_o_2darray, IMAGE_GATHER4_C_CL_O, AMDGPUDim2DArray }, // 136
  { Intrinsic::amdgcn_image_gather4_c_cl_o_cube, IMAGE_GATHER4_C_CL_O, AMDGPUDimCube }, // 137
  { Intrinsic::amdgcn_image_gather4_c_cube, IMAGE_GATHER4_C, AMDGPUDimCube }, // 138
  { Intrinsic::amdgcn_image_gather4_c_l_2d, IMAGE_GATHER4_C_L, AMDGPUDim2D }, // 139
  { Intrinsic::amdgcn_image_gather4_c_l_2darray, IMAGE_GATHER4_C_L, AMDGPUDim2DArray }, // 140
  { Intrinsic::amdgcn_image_gather4_c_l_cube, IMAGE_GATHER4_C_L, AMDGPUDimCube }, // 141
  { Intrinsic::amdgcn_image_gather4_c_l_o_2d, IMAGE_GATHER4_C_L_O, AMDGPUDim2D }, // 142
  { Intrinsic::amdgcn_image_gather4_c_l_o_2darray, IMAGE_GATHER4_C_L_O, AMDGPUDim2DArray }, // 143
  { Intrinsic::amdgcn_image_gather4_c_l_o_cube, IMAGE_GATHER4_C_L_O, AMDGPUDimCube }, // 144
  { Intrinsic::amdgcn_image_gather4_c_lz_2d, IMAGE_GATHER4_C_LZ, AMDGPUDim2D }, // 145
  { Intrinsic::amdgcn_image_gather4_c_lz_2darray, IMAGE_GATHER4_C_LZ, AMDGPUDim2DArray }, // 146
  { Intrinsic::amdgcn_image_gather4_c_lz_cube, IMAGE_GATHER4_C_LZ, AMDGPUDimCube }, // 147
  { Intrinsic::amdgcn_image_gather4_c_lz_o_2d, IMAGE_GATHER4_C_LZ_O, AMDGPUDim2D }, // 148
  { Intrinsic::amdgcn_image_gather4_c_lz_o_2darray, IMAGE_GATHER4_C_LZ_O, AMDGPUDim2DArray }, // 149
  { Intrinsic::amdgcn_image_gather4_c_lz_o_cube, IMAGE_GATHER4_C_LZ_O, AMDGPUDimCube }, // 150
  { Intrinsic::amdgcn_image_gather4_c_o_2d, IMAGE_GATHER4_C_O, AMDGPUDim2D }, // 151
  { Intrinsic::amdgcn_image_gather4_c_o_2darray, IMAGE_GATHER4_C_O, AMDGPUDim2DArray }, // 152
  { Intrinsic::amdgcn_image_gather4_c_o_cube, IMAGE_GATHER4_C_O, AMDGPUDimCube }, // 153
  { Intrinsic::amdgcn_image_gather4_cl_2d, IMAGE_GATHER4_CL, AMDGPUDim2D }, // 154
  { Intrinsic::amdgcn_image_gather4_cl_2darray, IMAGE_GATHER4_CL, AMDGPUDim2DArray }, // 155
  { Intrinsic::amdgcn_image_gather4_cl_cube, IMAGE_GATHER4_CL, AMDGPUDimCube }, // 156
  { Intrinsic::amdgcn_image_gather4_cl_o_2d, IMAGE_GATHER4_CL_O, AMDGPUDim2D }, // 157
  { Intrinsic::amdgcn_image_gather4_cl_o_2darray, IMAGE_GATHER4_CL_O, AMDGPUDim2DArray }, // 158
  { Intrinsic::amdgcn_image_gather4_cl_o_cube, IMAGE_GATHER4_CL_O, AMDGPUDimCube }, // 159
  { Intrinsic::amdgcn_image_gather4_cube, IMAGE_GATHER4, AMDGPUDimCube }, // 160
  { Intrinsic::amdgcn_image_gather4_l_2d, IMAGE_GATHER4_L, AMDGPUDim2D }, // 161
  { Intrinsic::amdgcn_image_gather4_l_2darray, IMAGE_GATHER4_L, AMDGPUDim2DArray }, // 162
  { Intrinsic::amdgcn_image_gather4_l_cube, IMAGE_GATHER4_L, AMDGPUDimCube }, // 163
  { Intrinsic::amdgcn_image_gather4_l_o_2d, IMAGE_GATHER4_L_O, AMDGPUDim2D }, // 164
  { Intrinsic::amdgcn_image_gather4_l_o_2darray, IMAGE_GATHER4_L_O, AMDGPUDim2DArray }, // 165
  { Intrinsic::amdgcn_image_gather4_l_o_cube, IMAGE_GATHER4_L_O, AMDGPUDimCube }, // 166
  { Intrinsic::amdgcn_image_gather4_lz_2d, IMAGE_GATHER4_LZ, AMDGPUDim2D }, // 167
  { Intrinsic::amdgcn_image_gather4_lz_2darray, IMAGE_GATHER4_LZ, AMDGPUDim2DArray }, // 168
  { Intrinsic::amdgcn_image_gather4_lz_cube, IMAGE_GATHER4_LZ, AMDGPUDimCube }, // 169
  { Intrinsic::amdgcn_image_gather4_lz_o_2d, IMAGE_GATHER4_LZ_O, AMDGPUDim2D }, // 170
  { Intrinsic::amdgcn_image_gather4_lz_o_2darray, IMAGE_GATHER4_LZ_O, AMDGPUDim2DArray }, // 171
  { Intrinsic::amdgcn_image_gather4_lz_o_cube, IMAGE_GATHER4_LZ_O, AMDGPUDimCube }, // 172
  { Intrinsic::amdgcn_image_gather4_o_2d, IMAGE_GATHER4_O, AMDGPUDim2D }, // 173
  { Intrinsic::amdgcn_image_gather4_o_2darray, IMAGE_GATHER4_O, AMDGPUDim2DArray }, // 174
  { Intrinsic::amdgcn_image_gather4_o_cube, IMAGE_GATHER4_O, AMDGPUDimCube }, // 175
  { Intrinsic::amdgcn_image_getlod_1d, IMAGE_GET_LOD, AMDGPUDim1D }, // 176
  { Intrinsic::amdgcn_image_getlod_1darray, IMAGE_GET_LOD, AMDGPUDim1DArray }, // 177
  { Intrinsic::amdgcn_image_getlod_2d, IMAGE_GET_LOD, AMDGPUDim2D }, // 178
  { Intrinsic::amdgcn_image_getlod_2darray, IMAGE_GET_LOD, AMDGPUDim2DArray }, // 179
  { Intrinsic::amdgcn_image_getlod_3d, IMAGE_GET_LOD, AMDGPUDim3D }, // 180
  { Intrinsic::amdgcn_image_getlod_cube, IMAGE_GET_LOD, AMDGPUDimCube }, // 181
  { Intrinsic::amdgcn_image_getresinfo_1d, IMAGE_GET_RESINFO, AMDGPUDim1D }, // 182
  { Intrinsic::amdgcn_image_getresinfo_1darray, IMAGE_GET_RESINFO, AMDGPUDim1DArray }, // 183
  { Intrinsic::amdgcn_image_getresinfo_2d, IMAGE_GET_RESINFO, AMDGPUDim2D }, // 184
  { Intrinsic::amdgcn_image_getresinfo_2darray, IMAGE_GET_RESINFO, AMDGPUDim2DArray }, // 185
  { Intrinsic::amdgcn_image_getresinfo_2darraymsaa, IMAGE_GET_RESINFO, AMDGPUDim2DArrayMsaa }, // 186
  { Intrinsic::amdgcn_image_getresinfo_2dmsaa, IMAGE_GET_RESINFO, AMDGPUDim2DMsaa }, // 187
  { Intrinsic::amdgcn_image_getresinfo_3d, IMAGE_GET_RESINFO, AMDGPUDim3D }, // 188
  { Intrinsic::amdgcn_image_getresinfo_cube, IMAGE_GET_RESINFO, AMDGPUDimCube }, // 189
  { Intrinsic::amdgcn_image_load_1d, IMAGE_LOAD, AMDGPUDim1D }, // 190
  { Intrinsic::amdgcn_image_load_1darray, IMAGE_LOAD, AMDGPUDim1DArray }, // 191
  { Intrinsic::amdgcn_image_load_2d, IMAGE_LOAD, AMDGPUDim2D }, // 192
  { Intrinsic::amdgcn_image_load_2darray, IMAGE_LOAD, AMDGPUDim2DArray }, // 193
  { Intrinsic::amdgcn_image_load_2darraymsaa, IMAGE_LOAD, AMDGPUDim2DArrayMsaa }, // 194
  { Intrinsic::amdgcn_image_load_2dmsaa, IMAGE_LOAD, AMDGPUDim2DMsaa }, // 195
  { Intrinsic::amdgcn_image_load_3d, IMAGE_LOAD, AMDGPUDim3D }, // 196
  { Intrinsic::amdgcn_image_load_cube, IMAGE_LOAD, AMDGPUDimCube }, // 197
  { Intrinsic::amdgcn_image_load_mip_1d, IMAGE_LOAD_MIP, AMDGPUDim1D }, // 198
  { Intrinsic::amdgcn_image_load_mip_1darray, IMAGE_LOAD_MIP, AMDGPUDim1DArray }, // 199
  { Intrinsic::amdgcn_image_load_mip_2d, IMAGE_LOAD_MIP, AMDGPUDim2D }, // 200
  { Intrinsic::amdgcn_image_load_mip_2darray, IMAGE_LOAD_MIP, AMDGPUDim2DArray }, // 201
  { Intrinsic::amdgcn_image_load_mip_3d, IMAGE_LOAD_MIP, AMDGPUDim3D }, // 202
  { Intrinsic::amdgcn_image_load_mip_cube, IMAGE_LOAD_MIP, AMDGPUDimCube }, // 203
  { Intrinsic::amdgcn_image_sample_1d, IMAGE_SAMPLE, AMDGPUDim1D }, // 204
  { Intrinsic::amdgcn_image_sample_1darray, IMAGE_SAMPLE, AMDGPUDim1DArray }, // 205
  { Intrinsic::amdgcn_image_sample_2d, IMAGE_SAMPLE, AMDGPUDim2D }, // 206
  { Intrinsic::amdgcn_image_sample_2darray, IMAGE_SAMPLE, AMDGPUDim2DArray }, // 207
  { Intrinsic::amdgcn_image_sample_3d, IMAGE_SAMPLE, AMDGPUDim3D }, // 208
  { Intrinsic::amdgcn_image_sample_b_1d, IMAGE_SAMPLE_B, AMDGPUDim1D }, // 209
  { Intrinsic::amdgcn_image_sample_b_1darray, IMAGE_SAMPLE_B, AMDGPUDim1DArray }, // 210
  { Intrinsic::amdgcn_image_sample_b_2d, IMAGE_SAMPLE_B, AMDGPUDim2D }, // 211
  { Intrinsic::amdgcn_image_sample_b_2darray, IMAGE_SAMPLE_B, AMDGPUDim2DArray }, // 212
  { Intrinsic::amdgcn_image_sample_b_3d, IMAGE_SAMPLE_B, AMDGPUDim3D }, // 213
  { Intrinsic::amdgcn_image_sample_b_cl_1d, IMAGE_SAMPLE_B_CL, AMDGPUDim1D }, // 214
  { Intrinsic::amdgcn_image_sample_b_cl_1darray, IMAGE_SAMPLE_B_CL, AMDGPUDim1DArray }, // 215
  { Intrinsic::amdgcn_image_sample_b_cl_2d, IMAGE_SAMPLE_B_CL, AMDGPUDim2D }, // 216
  { Intrinsic::amdgcn_image_sample_b_cl_2darray, IMAGE_SAMPLE_B_CL, AMDGPUDim2DArray }, // 217
  { Intrinsic::amdgcn_image_sample_b_cl_3d, IMAGE_SAMPLE_B_CL, AMDGPUDim3D }, // 218
  { Intrinsic::amdgcn_image_sample_b_cl_cube, IMAGE_SAMPLE_B_CL, AMDGPUDimCube }, // 219
  { Intrinsic::amdgcn_image_sample_b_cl_o_1d, IMAGE_SAMPLE_B_CL_O, AMDGPUDim1D }, // 220
  { Intrinsic::amdgcn_image_sample_b_cl_o_1darray, IMAGE_SAMPLE_B_CL_O, AMDGPUDim1DArray }, // 221
  { Intrinsic::amdgcn_image_sample_b_cl_o_2d, IMAGE_SAMPLE_B_CL_O, AMDGPUDim2D }, // 222
  { Intrinsic::amdgcn_image_sample_b_cl_o_2darray, IMAGE_SAMPLE_B_CL_O, AMDGPUDim2DArray }, // 223
  { Intrinsic::amdgcn_image_sample_b_cl_o_3d, IMAGE_SAMPLE_B_CL_O, AMDGPUDim3D }, // 224
  { Intrinsic::amdgcn_image_sample_b_cl_o_cube, IMAGE_SAMPLE_B_CL_O, AMDGPUDimCube }, // 225
  { Intrinsic::amdgcn_image_sample_b_cube, IMAGE_SAMPLE_B, AMDGPUDimCube }, // 226
  { Intrinsic::amdgcn_image_sample_b_o_1d, IMAGE_SAMPLE_B_O, AMDGPUDim1D }, // 227
  { Intrinsic::amdgcn_image_sample_b_o_1darray, IMAGE_SAMPLE_B_O, AMDGPUDim1DArray }, // 228
  { Intrinsic::amdgcn_image_sample_b_o_2d, IMAGE_SAMPLE_B_O, AMDGPUDim2D }, // 229
  { Intrinsic::amdgcn_image_sample_b_o_2darray, IMAGE_SAMPLE_B_O, AMDGPUDim2DArray }, // 230
  { Intrinsic::amdgcn_image_sample_b_o_3d, IMAGE_SAMPLE_B_O, AMDGPUDim3D }, // 231
  { Intrinsic::amdgcn_image_sample_b_o_cube, IMAGE_SAMPLE_B_O, AMDGPUDimCube }, // 232
  { Intrinsic::amdgcn_image_sample_c_1d, IMAGE_SAMPLE_C, AMDGPUDim1D }, // 233
  { Intrinsic::amdgcn_image_sample_c_1darray, IMAGE_SAMPLE_C, AMDGPUDim1DArray }, // 234
  { Intrinsic::amdgcn_image_sample_c_2d, IMAGE_SAMPLE_C, AMDGPUDim2D }, // 235
  { Intrinsic::amdgcn_image_sample_c_2darray, IMAGE_SAMPLE_C, AMDGPUDim2DArray }, // 236
  { Intrinsic::amdgcn_image_sample_c_3d, IMAGE_SAMPLE_C, AMDGPUDim3D }, // 237
  { Intrinsic::amdgcn_image_sample_c_b_1d, IMAGE_SAMPLE_C_B, AMDGPUDim1D }, // 238
  { Intrinsic::amdgcn_image_sample_c_b_1darray, IMAGE_SAMPLE_C_B, AMDGPUDim1DArray }, // 239
  { Intrinsic::amdgcn_image_sample_c_b_2d, IMAGE_SAMPLE_C_B, AMDGPUDim2D }, // 240
  { Intrinsic::amdgcn_image_sample_c_b_2darray, IMAGE_SAMPLE_C_B, AMDGPUDim2DArray }, // 241
  { Intrinsic::amdgcn_image_sample_c_b_3d, IMAGE_SAMPLE_C_B, AMDGPUDim3D }, // 242
  { Intrinsic::amdgcn_image_sample_c_b_cl_1d, IMAGE_SAMPLE_C_B_CL, AMDGPUDim1D }, // 243
  { Intrinsic::amdgcn_image_sample_c_b_cl_1darray, IMAGE_SAMPLE_C_B_CL, AMDGPUDim1DArray }, // 244
  { Intrinsic::amdgcn_image_sample_c_b_cl_2d, IMAGE_SAMPLE_C_B_CL, AMDGPUDim2D }, // 245
  { Intrinsic::amdgcn_image_sample_c_b_cl_2darray, IMAGE_SAMPLE_C_B_CL, AMDGPUDim2DArray }, // 246
  { Intrinsic::amdgcn_image_sample_c_b_cl_3d, IMAGE_SAMPLE_C_B_CL, AMDGPUDim3D }, // 247
  { Intrinsic::amdgcn_image_sample_c_b_cl_cube, IMAGE_SAMPLE_C_B_CL, AMDGPUDimCube }, // 248
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_1d, IMAGE_SAMPLE_C_B_CL_O, AMDGPUDim1D }, // 249
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_1darray, IMAGE_SAMPLE_C_B_CL_O, AMDGPUDim1DArray }, // 250
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_2d, IMAGE_SAMPLE_C_B_CL_O, AMDGPUDim2D }, // 251
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_2darray, IMAGE_SAMPLE_C_B_CL_O, AMDGPUDim2DArray }, // 252
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_3d, IMAGE_SAMPLE_C_B_CL_O, AMDGPUDim3D }, // 253
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_cube, IMAGE_SAMPLE_C_B_CL_O, AMDGPUDimCube }, // 254
  { Intrinsic::amdgcn_image_sample_c_b_cube, IMAGE_SAMPLE_C_B, AMDGPUDimCube }, // 255
  { Intrinsic::amdgcn_image_sample_c_b_o_1d, IMAGE_SAMPLE_C_B_O, AMDGPUDim1D }, // 256
  { Intrinsic::amdgcn_image_sample_c_b_o_1darray, IMAGE_SAMPLE_C_B_O, AMDGPUDim1DArray }, // 257
  { Intrinsic::amdgcn_image_sample_c_b_o_2d, IMAGE_SAMPLE_C_B_O, AMDGPUDim2D }, // 258
  { Intrinsic::amdgcn_image_sample_c_b_o_2darray, IMAGE_SAMPLE_C_B_O, AMDGPUDim2DArray }, // 259
  { Intrinsic::amdgcn_image_sample_c_b_o_3d, IMAGE_SAMPLE_C_B_O, AMDGPUDim3D }, // 260
  { Intrinsic::amdgcn_image_sample_c_b_o_cube, IMAGE_SAMPLE_C_B_O, AMDGPUDimCube }, // 261
  { Intrinsic::amdgcn_image_sample_c_cd_1d, IMAGE_SAMPLE_C_CD, AMDGPUDim1D }, // 262
  { Intrinsic::amdgcn_image_sample_c_cd_1darray, IMAGE_SAMPLE_C_CD, AMDGPUDim1DArray }, // 263
  { Intrinsic::amdgcn_image_sample_c_cd_2d, IMAGE_SAMPLE_C_CD, AMDGPUDim2D }, // 264
  { Intrinsic::amdgcn_image_sample_c_cd_2darray, IMAGE_SAMPLE_C_CD, AMDGPUDim2DArray }, // 265
  { Intrinsic::amdgcn_image_sample_c_cd_3d, IMAGE_SAMPLE_C_CD, AMDGPUDim3D }, // 266
  { Intrinsic::amdgcn_image_sample_c_cd_cl_1d, IMAGE_SAMPLE_C_CD_CL, AMDGPUDim1D }, // 267
  { Intrinsic::amdgcn_image_sample_c_cd_cl_1darray, IMAGE_SAMPLE_C_CD_CL, AMDGPUDim1DArray }, // 268
  { Intrinsic::amdgcn_image_sample_c_cd_cl_2d, IMAGE_SAMPLE_C_CD_CL, AMDGPUDim2D }, // 269
  { Intrinsic::amdgcn_image_sample_c_cd_cl_2darray, IMAGE_SAMPLE_C_CD_CL, AMDGPUDim2DArray }, // 270
  { Intrinsic::amdgcn_image_sample_c_cd_cl_3d, IMAGE_SAMPLE_C_CD_CL, AMDGPUDim3D }, // 271
  { Intrinsic::amdgcn_image_sample_c_cd_cl_cube, IMAGE_SAMPLE_C_CD_CL, AMDGPUDimCube }, // 272
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_1d, IMAGE_SAMPLE_C_CD_CL_O, AMDGPUDim1D }, // 273
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_1darray, IMAGE_SAMPLE_C_CD_CL_O, AMDGPUDim1DArray }, // 274
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_2d, IMAGE_SAMPLE_C_CD_CL_O, AMDGPUDim2D }, // 275
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_2darray, IMAGE_SAMPLE_C_CD_CL_O, AMDGPUDim2DArray }, // 276
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_3d, IMAGE_SAMPLE_C_CD_CL_O, AMDGPUDim3D }, // 277
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_cube, IMAGE_SAMPLE_C_CD_CL_O, AMDGPUDimCube }, // 278
  { Intrinsic::amdgcn_image_sample_c_cd_cube, IMAGE_SAMPLE_C_CD, AMDGPUDimCube }, // 279
  { Intrinsic::amdgcn_image_sample_c_cd_o_1d, IMAGE_SAMPLE_C_CD_O, AMDGPUDim1D }, // 280
  { Intrinsic::amdgcn_image_sample_c_cd_o_1darray, IMAGE_SAMPLE_C_CD_O, AMDGPUDim1DArray }, // 281
  { Intrinsic::amdgcn_image_sample_c_cd_o_2d, IMAGE_SAMPLE_C_CD_O, AMDGPUDim2D }, // 282
  { Intrinsic::amdgcn_image_sample_c_cd_o_2darray, IMAGE_SAMPLE_C_CD_O, AMDGPUDim2DArray }, // 283
  { Intrinsic::amdgcn_image_sample_c_cd_o_3d, IMAGE_SAMPLE_C_CD_O, AMDGPUDim3D }, // 284
  { Intrinsic::amdgcn_image_sample_c_cd_o_cube, IMAGE_SAMPLE_C_CD_O, AMDGPUDimCube }, // 285
  { Intrinsic::amdgcn_image_sample_c_cl_1d, IMAGE_SAMPLE_C_CL, AMDGPUDim1D }, // 286
  { Intrinsic::amdgcn_image_sample_c_cl_1darray, IMAGE_SAMPLE_C_CL, AMDGPUDim1DArray }, // 287
  { Intrinsic::amdgcn_image_sample_c_cl_2d, IMAGE_SAMPLE_C_CL, AMDGPUDim2D }, // 288
  { Intrinsic::amdgcn_image_sample_c_cl_2darray, IMAGE_SAMPLE_C_CL, AMDGPUDim2DArray }, // 289
  { Intrinsic::amdgcn_image_sample_c_cl_3d, IMAGE_SAMPLE_C_CL, AMDGPUDim3D }, // 290
  { Intrinsic::amdgcn_image_sample_c_cl_cube, IMAGE_SAMPLE_C_CL, AMDGPUDimCube }, // 291
  { Intrinsic::amdgcn_image_sample_c_cl_o_1d, IMAGE_SAMPLE_C_CL_O, AMDGPUDim1D }, // 292
  { Intrinsic::amdgcn_image_sample_c_cl_o_1darray, IMAGE_SAMPLE_C_CL_O, AMDGPUDim1DArray }, // 293
  { Intrinsic::amdgcn_image_sample_c_cl_o_2d, IMAGE_SAMPLE_C_CL_O, AMDGPUDim2D }, // 294
  { Intrinsic::amdgcn_image_sample_c_cl_o_2darray, IMAGE_SAMPLE_C_CL_O, AMDGPUDim2DArray }, // 295
  { Intrinsic::amdgcn_image_sample_c_cl_o_3d, IMAGE_SAMPLE_C_CL_O, AMDGPUDim3D }, // 296
  { Intrinsic::amdgcn_image_sample_c_cl_o_cube, IMAGE_SAMPLE_C_CL_O, AMDGPUDimCube }, // 297
  { Intrinsic::amdgcn_image_sample_c_cube, IMAGE_SAMPLE_C, AMDGPUDimCube }, // 298
  { Intrinsic::amdgcn_image_sample_c_d_1d, IMAGE_SAMPLE_C_D, AMDGPUDim1D }, // 299
  { Intrinsic::amdgcn_image_sample_c_d_1darray, IMAGE_SAMPLE_C_D, AMDGPUDim1DArray }, // 300
  { Intrinsic::amdgcn_image_sample_c_d_2d, IMAGE_SAMPLE_C_D, AMDGPUDim2D }, // 301
  { Intrinsic::amdgcn_image_sample_c_d_2darray, IMAGE_SAMPLE_C_D, AMDGPUDim2DArray }, // 302
  { Intrinsic::amdgcn_image_sample_c_d_3d, IMAGE_SAMPLE_C_D, AMDGPUDim3D }, // 303
  { Intrinsic::amdgcn_image_sample_c_d_cl_1d, IMAGE_SAMPLE_C_D_CL, AMDGPUDim1D }, // 304
  { Intrinsic::amdgcn_image_sample_c_d_cl_1darray, IMAGE_SAMPLE_C_D_CL, AMDGPUDim1DArray }, // 305
  { Intrinsic::amdgcn_image_sample_c_d_cl_2d, IMAGE_SAMPLE_C_D_CL, AMDGPUDim2D }, // 306
  { Intrinsic::amdgcn_image_sample_c_d_cl_2darray, IMAGE_SAMPLE_C_D_CL, AMDGPUDim2DArray }, // 307
  { Intrinsic::amdgcn_image_sample_c_d_cl_3d, IMAGE_SAMPLE_C_D_CL, AMDGPUDim3D }, // 308
  { Intrinsic::amdgcn_image_sample_c_d_cl_cube, IMAGE_SAMPLE_C_D_CL, AMDGPUDimCube }, // 309
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_1d, IMAGE_SAMPLE_C_D_CL_O, AMDGPUDim1D }, // 310
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_1darray, IMAGE_SAMPLE_C_D_CL_O, AMDGPUDim1DArray }, // 311
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_2d, IMAGE_SAMPLE_C_D_CL_O, AMDGPUDim2D }, // 312
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_2darray, IMAGE_SAMPLE_C_D_CL_O, AMDGPUDim2DArray }, // 313
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_3d, IMAGE_SAMPLE_C_D_CL_O, AMDGPUDim3D }, // 314
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_cube, IMAGE_SAMPLE_C_D_CL_O, AMDGPUDimCube }, // 315
  { Intrinsic::amdgcn_image_sample_c_d_cube, IMAGE_SAMPLE_C_D, AMDGPUDimCube }, // 316
  { Intrinsic::amdgcn_image_sample_c_d_o_1d, IMAGE_SAMPLE_C_D_O, AMDGPUDim1D }, // 317
  { Intrinsic::amdgcn_image_sample_c_d_o_1darray, IMAGE_SAMPLE_C_D_O, AMDGPUDim1DArray }, // 318
  { Intrinsic::amdgcn_image_sample_c_d_o_2d, IMAGE_SAMPLE_C_D_O, AMDGPUDim2D }, // 319
  { Intrinsic::amdgcn_image_sample_c_d_o_2darray, IMAGE_SAMPLE_C_D_O, AMDGPUDim2DArray }, // 320
  { Intrinsic::amdgcn_image_sample_c_d_o_3d, IMAGE_SAMPLE_C_D_O, AMDGPUDim3D }, // 321
  { Intrinsic::amdgcn_image_sample_c_d_o_cube, IMAGE_SAMPLE_C_D_O, AMDGPUDimCube }, // 322
  { Intrinsic::amdgcn_image_sample_c_l_1d, IMAGE_SAMPLE_C_L, AMDGPUDim1D }, // 323
  { Intrinsic::amdgcn_image_sample_c_l_1darray, IMAGE_SAMPLE_C_L, AMDGPUDim1DArray }, // 324
  { Intrinsic::amdgcn_image_sample_c_l_2d, IMAGE_SAMPLE_C_L, AMDGPUDim2D }, // 325
  { Intrinsic::amdgcn_image_sample_c_l_2darray, IMAGE_SAMPLE_C_L, AMDGPUDim2DArray }, // 326
  { Intrinsic::amdgcn_image_sample_c_l_3d, IMAGE_SAMPLE_C_L, AMDGPUDim3D }, // 327
  { Intrinsic::amdgcn_image_sample_c_l_cube, IMAGE_SAMPLE_C_L, AMDGPUDimCube }, // 328
  { Intrinsic::amdgcn_image_sample_c_l_o_1d, IMAGE_SAMPLE_C_L_O, AMDGPUDim1D }, // 329
  { Intrinsic::amdgcn_image_sample_c_l_o_1darray, IMAGE_SAMPLE_C_L_O, AMDGPUDim1DArray }, // 330
  { Intrinsic::amdgcn_image_sample_c_l_o_2d, IMAGE_SAMPLE_C_L_O, AMDGPUDim2D }, // 331
  { Intrinsic::amdgcn_image_sample_c_l_o_2darray, IMAGE_SAMPLE_C_L_O, AMDGPUDim2DArray }, // 332
  { Intrinsic::amdgcn_image_sample_c_l_o_3d, IMAGE_SAMPLE_C_L_O, AMDGPUDim3D }, // 333
  { Intrinsic::amdgcn_image_sample_c_l_o_cube, IMAGE_SAMPLE_C_L_O, AMDGPUDimCube }, // 334
  { Intrinsic::amdgcn_image_sample_c_lz_1d, IMAGE_SAMPLE_C_LZ, AMDGPUDim1D }, // 335
  { Intrinsic::amdgcn_image_sample_c_lz_1darray, IMAGE_SAMPLE_C_LZ, AMDGPUDim1DArray }, // 336
  { Intrinsic::amdgcn_image_sample_c_lz_2d, IMAGE_SAMPLE_C_LZ, AMDGPUDim2D }, // 337
  { Intrinsic::amdgcn_image_sample_c_lz_2darray, IMAGE_SAMPLE_C_LZ, AMDGPUDim2DArray }, // 338
  { Intrinsic::amdgcn_image_sample_c_lz_3d, IMAGE_SAMPLE_C_LZ, AMDGPUDim3D }, // 339
  { Intrinsic::amdgcn_image_sample_c_lz_cube, IMAGE_SAMPLE_C_LZ, AMDGPUDimCube }, // 340
  { Intrinsic::amdgcn_image_sample_c_lz_o_1d, IMAGE_SAMPLE_C_LZ_O, AMDGPUDim1D }, // 341
  { Intrinsic::amdgcn_image_sample_c_lz_o_1darray, IMAGE_SAMPLE_C_LZ_O, AMDGPUDim1DArray }, // 342
  { Intrinsic::amdgcn_image_sample_c_lz_o_2d, IMAGE_SAMPLE_C_LZ_O, AMDGPUDim2D }, // 343
  { Intrinsic::amdgcn_image_sample_c_lz_o_2darray, IMAGE_SAMPLE_C_LZ_O, AMDGPUDim2DArray }, // 344
  { Intrinsic::amdgcn_image_sample_c_lz_o_3d, IMAGE_SAMPLE_C_LZ_O, AMDGPUDim3D }, // 345
  { Intrinsic::amdgcn_image_sample_c_lz_o_cube, IMAGE_SAMPLE_C_LZ_O, AMDGPUDimCube }, // 346
  { Intrinsic::amdgcn_image_sample_c_o_1d, IMAGE_SAMPLE_C_O, AMDGPUDim1D }, // 347
  { Intrinsic::amdgcn_image_sample_c_o_1darray, IMAGE_SAMPLE_C_O, AMDGPUDim1DArray }, // 348
  { Intrinsic::amdgcn_image_sample_c_o_2d, IMAGE_SAMPLE_C_O, AMDGPUDim2D }, // 349
  { Intrinsic::amdgcn_image_sample_c_o_2darray, IMAGE_SAMPLE_C_O, AMDGPUDim2DArray }, // 350
  { Intrinsic::amdgcn_image_sample_c_o_3d, IMAGE_SAMPLE_C_O, AMDGPUDim3D }, // 351
  { Intrinsic::amdgcn_image_sample_c_o_cube, IMAGE_SAMPLE_C_O, AMDGPUDimCube }, // 352
  { Intrinsic::amdgcn_image_sample_cd_1d, IMAGE_SAMPLE_CD, AMDGPUDim1D }, // 353
  { Intrinsic::amdgcn_image_sample_cd_1darray, IMAGE_SAMPLE_CD, AMDGPUDim1DArray }, // 354
  { Intrinsic::amdgcn_image_sample_cd_2d, IMAGE_SAMPLE_CD, AMDGPUDim2D }, // 355
  { Intrinsic::amdgcn_image_sample_cd_2darray, IMAGE_SAMPLE_CD, AMDGPUDim2DArray }, // 356
  { Intrinsic::amdgcn_image_sample_cd_3d, IMAGE_SAMPLE_CD, AMDGPUDim3D }, // 357
  { Intrinsic::amdgcn_image_sample_cd_cl_1d, IMAGE_SAMPLE_CD_CL, AMDGPUDim1D }, // 358
  { Intrinsic::amdgcn_image_sample_cd_cl_1darray, IMAGE_SAMPLE_CD_CL, AMDGPUDim1DArray }, // 359
  { Intrinsic::amdgcn_image_sample_cd_cl_2d, IMAGE_SAMPLE_CD_CL, AMDGPUDim2D }, // 360
  { Intrinsic::amdgcn_image_sample_cd_cl_2darray, IMAGE_SAMPLE_CD_CL, AMDGPUDim2DArray }, // 361
  { Intrinsic::amdgcn_image_sample_cd_cl_3d, IMAGE_SAMPLE_CD_CL, AMDGPUDim3D }, // 362
  { Intrinsic::amdgcn_image_sample_cd_cl_cube, IMAGE_SAMPLE_CD_CL, AMDGPUDimCube }, // 363
  { Intrinsic::amdgcn_image_sample_cd_cl_o_1d, IMAGE_SAMPLE_CD_CL_O, AMDGPUDim1D }, // 364
  { Intrinsic::amdgcn_image_sample_cd_cl_o_1darray, IMAGE_SAMPLE_CD_CL_O, AMDGPUDim1DArray }, // 365
  { Intrinsic::amdgcn_image_sample_cd_cl_o_2d, IMAGE_SAMPLE_CD_CL_O, AMDGPUDim2D }, // 366
  { Intrinsic::amdgcn_image_sample_cd_cl_o_2darray, IMAGE_SAMPLE_CD_CL_O, AMDGPUDim2DArray }, // 367
  { Intrinsic::amdgcn_image_sample_cd_cl_o_3d, IMAGE_SAMPLE_CD_CL_O, AMDGPUDim3D }, // 368
  { Intrinsic::amdgcn_image_sample_cd_cl_o_cube, IMAGE_SAMPLE_CD_CL_O, AMDGPUDimCube }, // 369
  { Intrinsic::amdgcn_image_sample_cd_cube, IMAGE_SAMPLE_CD, AMDGPUDimCube }, // 370
  { Intrinsic::amdgcn_image_sample_cd_o_1d, IMAGE_SAMPLE_CD_O, AMDGPUDim1D }, // 371
  { Intrinsic::amdgcn_image_sample_cd_o_1darray, IMAGE_SAMPLE_CD_O, AMDGPUDim1DArray }, // 372
  { Intrinsic::amdgcn_image_sample_cd_o_2d, IMAGE_SAMPLE_CD_O, AMDGPUDim2D }, // 373
  { Intrinsic::amdgcn_image_sample_cd_o_2darray, IMAGE_SAMPLE_CD_O, AMDGPUDim2DArray }, // 374
  { Intrinsic::amdgcn_image_sample_cd_o_3d, IMAGE_SAMPLE_CD_O, AMDGPUDim3D }, // 375
  { Intrinsic::amdgcn_image_sample_cd_o_cube, IMAGE_SAMPLE_CD_O, AMDGPUDimCube }, // 376
  { Intrinsic::amdgcn_image_sample_cl_1d, IMAGE_SAMPLE_CL, AMDGPUDim1D }, // 377
  { Intrinsic::amdgcn_image_sample_cl_1darray, IMAGE_SAMPLE_CL, AMDGPUDim1DArray }, // 378
  { Intrinsic::amdgcn_image_sample_cl_2d, IMAGE_SAMPLE_CL, AMDGPUDim2D }, // 379
  { Intrinsic::amdgcn_image_sample_cl_2darray, IMAGE_SAMPLE_CL, AMDGPUDim2DArray }, // 380
  { Intrinsic::amdgcn_image_sample_cl_3d, IMAGE_SAMPLE_CL, AMDGPUDim3D }, // 381
  { Intrinsic::amdgcn_image_sample_cl_cube, IMAGE_SAMPLE_CL, AMDGPUDimCube }, // 382
  { Intrinsic::amdgcn_image_sample_cl_o_1d, IMAGE_SAMPLE_CL_O, AMDGPUDim1D }, // 383
  { Intrinsic::amdgcn_image_sample_cl_o_1darray, IMAGE_SAMPLE_CL_O, AMDGPUDim1DArray }, // 384
  { Intrinsic::amdgcn_image_sample_cl_o_2d, IMAGE_SAMPLE_CL_O, AMDGPUDim2D }, // 385
  { Intrinsic::amdgcn_image_sample_cl_o_2darray, IMAGE_SAMPLE_CL_O, AMDGPUDim2DArray }, // 386
  { Intrinsic::amdgcn_image_sample_cl_o_3d, IMAGE_SAMPLE_CL_O, AMDGPUDim3D }, // 387
  { Intrinsic::amdgcn_image_sample_cl_o_cube, IMAGE_SAMPLE_CL_O, AMDGPUDimCube }, // 388
  { Intrinsic::amdgcn_image_sample_cube, IMAGE_SAMPLE, AMDGPUDimCube }, // 389
  { Intrinsic::amdgcn_image_sample_d_1d, IMAGE_SAMPLE_D, AMDGPUDim1D }, // 390
  { Intrinsic::amdgcn_image_sample_d_1darray, IMAGE_SAMPLE_D, AMDGPUDim1DArray }, // 391
  { Intrinsic::amdgcn_image_sample_d_2d, IMAGE_SAMPLE_D, AMDGPUDim2D }, // 392
  { Intrinsic::amdgcn_image_sample_d_2darray, IMAGE_SAMPLE_D, AMDGPUDim2DArray }, // 393
  { Intrinsic::amdgcn_image_sample_d_3d, IMAGE_SAMPLE_D, AMDGPUDim3D }, // 394
  { Intrinsic::amdgcn_image_sample_d_cl_1d, IMAGE_SAMPLE_D_CL, AMDGPUDim1D }, // 395
  { Intrinsic::amdgcn_image_sample_d_cl_1darray, IMAGE_SAMPLE_D_CL, AMDGPUDim1DArray }, // 396
  { Intrinsic::amdgcn_image_sample_d_cl_2d, IMAGE_SAMPLE_D_CL, AMDGPUDim2D }, // 397
  { Intrinsic::amdgcn_image_sample_d_cl_2darray, IMAGE_SAMPLE_D_CL, AMDGPUDim2DArray }, // 398
  { Intrinsic::amdgcn_image_sample_d_cl_3d, IMAGE_SAMPLE_D_CL, AMDGPUDim3D }, // 399
  { Intrinsic::amdgcn_image_sample_d_cl_cube, IMAGE_SAMPLE_D_CL, AMDGPUDimCube }, // 400
  { Intrinsic::amdgcn_image_sample_d_cl_o_1d, IMAGE_SAMPLE_D_CL_O, AMDGPUDim1D }, // 401
  { Intrinsic::amdgcn_image_sample_d_cl_o_1darray, IMAGE_SAMPLE_D_CL_O, AMDGPUDim1DArray }, // 402
  { Intrinsic::amdgcn_image_sample_d_cl_o_2d, IMAGE_SAMPLE_D_CL_O, AMDGPUDim2D }, // 403
  { Intrinsic::amdgcn_image_sample_d_cl_o_2darray, IMAGE_SAMPLE_D_CL_O, AMDGPUDim2DArray }, // 404
  { Intrinsic::amdgcn_image_sample_d_cl_o_3d, IMAGE_SAMPLE_D_CL_O, AMDGPUDim3D }, // 405
  { Intrinsic::amdgcn_image_sample_d_cl_o_cube, IMAGE_SAMPLE_D_CL_O, AMDGPUDimCube }, // 406
  { Intrinsic::amdgcn_image_sample_d_cube, IMAGE_SAMPLE_D, AMDGPUDimCube }, // 407
  { Intrinsic::amdgcn_image_sample_d_o_1d, IMAGE_SAMPLE_D_O, AMDGPUDim1D }, // 408
  { Intrinsic::amdgcn_image_sample_d_o_1darray, IMAGE_SAMPLE_D_O, AMDGPUDim1DArray }, // 409
  { Intrinsic::amdgcn_image_sample_d_o_2d, IMAGE_SAMPLE_D_O, AMDGPUDim2D }, // 410
  { Intrinsic::amdgcn_image_sample_d_o_2darray, IMAGE_SAMPLE_D_O, AMDGPUDim2DArray }, // 411
  { Intrinsic::amdgcn_image_sample_d_o_3d, IMAGE_SAMPLE_D_O, AMDGPUDim3D }, // 412
  { Intrinsic::amdgcn_image_sample_d_o_cube, IMAGE_SAMPLE_D_O, AMDGPUDimCube }, // 413
  { Intrinsic::amdgcn_image_sample_l_1d, IMAGE_SAMPLE_L, AMDGPUDim1D }, // 414
  { Intrinsic::amdgcn_image_sample_l_1darray, IMAGE_SAMPLE_L, AMDGPUDim1DArray }, // 415
  { Intrinsic::amdgcn_image_sample_l_2d, IMAGE_SAMPLE_L, AMDGPUDim2D }, // 416
  { Intrinsic::amdgcn_image_sample_l_2darray, IMAGE_SAMPLE_L, AMDGPUDim2DArray }, // 417
  { Intrinsic::amdgcn_image_sample_l_3d, IMAGE_SAMPLE_L, AMDGPUDim3D }, // 418
  { Intrinsic::amdgcn_image_sample_l_cube, IMAGE_SAMPLE_L, AMDGPUDimCube }, // 419
  { Intrinsic::amdgcn_image_sample_l_o_1d, IMAGE_SAMPLE_L_O, AMDGPUDim1D }, // 420
  { Intrinsic::amdgcn_image_sample_l_o_1darray, IMAGE_SAMPLE_L_O, AMDGPUDim1DArray }, // 421
  { Intrinsic::amdgcn_image_sample_l_o_2d, IMAGE_SAMPLE_L_O, AMDGPUDim2D }, // 422
  { Intrinsic::amdgcn_image_sample_l_o_2darray, IMAGE_SAMPLE_L_O, AMDGPUDim2DArray }, // 423
  { Intrinsic::amdgcn_image_sample_l_o_3d, IMAGE_SAMPLE_L_O, AMDGPUDim3D }, // 424
  { Intrinsic::amdgcn_image_sample_l_o_cube, IMAGE_SAMPLE_L_O, AMDGPUDimCube }, // 425
  { Intrinsic::amdgcn_image_sample_lz_1d, IMAGE_SAMPLE_LZ, AMDGPUDim1D }, // 426
  { Intrinsic::amdgcn_image_sample_lz_1darray, IMAGE_SAMPLE_LZ, AMDGPUDim1DArray }, // 427
  { Intrinsic::amdgcn_image_sample_lz_2d, IMAGE_SAMPLE_LZ, AMDGPUDim2D }, // 428
  { Intrinsic::amdgcn_image_sample_lz_2darray, IMAGE_SAMPLE_LZ, AMDGPUDim2DArray }, // 429
  { Intrinsic::amdgcn_image_sample_lz_3d, IMAGE_SAMPLE_LZ, AMDGPUDim3D }, // 430
  { Intrinsic::amdgcn_image_sample_lz_cube, IMAGE_SAMPLE_LZ, AMDGPUDimCube }, // 431
  { Intrinsic::amdgcn_image_sample_lz_o_1d, IMAGE_SAMPLE_LZ_O, AMDGPUDim1D }, // 432
  { Intrinsic::amdgcn_image_sample_lz_o_1darray, IMAGE_SAMPLE_LZ_O, AMDGPUDim1DArray }, // 433
  { Intrinsic::amdgcn_image_sample_lz_o_2d, IMAGE_SAMPLE_LZ_O, AMDGPUDim2D }, // 434
  { Intrinsic::amdgcn_image_sample_lz_o_2darray, IMAGE_SAMPLE_LZ_O, AMDGPUDim2DArray }, // 435
  { Intrinsic::amdgcn_image_sample_lz_o_3d, IMAGE_SAMPLE_LZ_O, AMDGPUDim3D }, // 436
  { Intrinsic::amdgcn_image_sample_lz_o_cube, IMAGE_SAMPLE_LZ_O, AMDGPUDimCube }, // 437
  { Intrinsic::amdgcn_image_sample_o_1d, IMAGE_SAMPLE_O, AMDGPUDim1D }, // 438
  { Intrinsic::amdgcn_image_sample_o_1darray, IMAGE_SAMPLE_O, AMDGPUDim1DArray }, // 439
  { Intrinsic::amdgcn_image_sample_o_2d, IMAGE_SAMPLE_O, AMDGPUDim2D }, // 440
  { Intrinsic::amdgcn_image_sample_o_2darray, IMAGE_SAMPLE_O, AMDGPUDim2DArray }, // 441
  { Intrinsic::amdgcn_image_sample_o_3d, IMAGE_SAMPLE_O, AMDGPUDim3D }, // 442
  { Intrinsic::amdgcn_image_sample_o_cube, IMAGE_SAMPLE_O, AMDGPUDimCube }, // 443
  { Intrinsic::amdgcn_image_store_1d, IMAGE_STORE, AMDGPUDim1D }, // 444
  { Intrinsic::amdgcn_image_store_1darray, IMAGE_STORE, AMDGPUDim1DArray }, // 445
  { Intrinsic::amdgcn_image_store_2d, IMAGE_STORE, AMDGPUDim2D }, // 446
  { Intrinsic::amdgcn_image_store_2darray, IMAGE_STORE, AMDGPUDim2DArray }, // 447
  { Intrinsic::amdgcn_image_store_2darraymsaa, IMAGE_STORE, AMDGPUDim2DArrayMsaa }, // 448
  { Intrinsic::amdgcn_image_store_2dmsaa, IMAGE_STORE, AMDGPUDim2DMsaa }, // 449
  { Intrinsic::amdgcn_image_store_3d, IMAGE_STORE, AMDGPUDim3D }, // 450
  { Intrinsic::amdgcn_image_store_cube, IMAGE_STORE, AMDGPUDimCube }, // 451
  { Intrinsic::amdgcn_image_store_mip_1d, IMAGE_STORE_MIP, AMDGPUDim1D }, // 452
  { Intrinsic::amdgcn_image_store_mip_1darray, IMAGE_STORE_MIP, AMDGPUDim1DArray }, // 453
  { Intrinsic::amdgcn_image_store_mip_2d, IMAGE_STORE_MIP, AMDGPUDim2D }, // 454
  { Intrinsic::amdgcn_image_store_mip_2darray, IMAGE_STORE_MIP, AMDGPUDim2DArray }, // 455
  { Intrinsic::amdgcn_image_store_mip_3d, IMAGE_STORE_MIP, AMDGPUDim3D }, // 456
  { Intrinsic::amdgcn_image_store_mip_cube, IMAGE_STORE_MIP, AMDGPUDimCube }, // 457
 };

const ImageDimIntrinsicInfo *getImageDimIntrinsicInfo(unsigned Intr) {
  if ((Intr < Intrinsic::amdgcn_image_atomic_add_1d) ||
      (Intr > Intrinsic::amdgcn_image_store_mip_cube))
    return nullptr;

  struct KeyType {
    unsigned Intr;
  };
  KeyType Key = { Intr };
  auto Table = makeArrayRef(ImageDimIntrinsicTable);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const ImageDimIntrinsicInfo &LHS, const KeyType &RHS) {
      if (LHS.Intr < RHS.Intr)
        return true;
      if (LHS.Intr > RHS.Intr)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Intr != Idx->Intr)
    return nullptr;
  return &*Idx;
}
#endif

#ifdef GET_MIMGBaseOpcodesTable_DECL
const MIMGBaseOpcodeInfo *getMIMGBaseOpcodeInfo(unsigned BaseOpcode);
#endif

#ifdef GET_MIMGBaseOpcodesTable_IMPL
constexpr MIMGBaseOpcodeInfo MIMGBaseOpcodesTable[] = {
  { IMAGE_ATOMIC_ADD, false, true, false, false, false, 0x0, false, true, false, false }, // 0
  { IMAGE_ATOMIC_AND, false, true, false, false, false, 0x0, false, true, false, false }, // 1
  { IMAGE_ATOMIC_CMPSWAP, false, true, true, false, false, 0x0, false, true, false, false }, // 2
  { IMAGE_ATOMIC_DEC, false, true, false, false, false, 0x0, false, true, false, false }, // 3
  { IMAGE_ATOMIC_INC, false, true, false, false, false, 0x0, false, true, false, false }, // 4
  { IMAGE_ATOMIC_OR, false, true, false, false, false, 0x0, false, true, false, false }, // 5
  { IMAGE_ATOMIC_SMAX, false, true, false, false, false, 0x0, false, true, false, false }, // 6
  { IMAGE_ATOMIC_SMIN, false, true, false, false, false, 0x0, false, true, false, false }, // 7
  { IMAGE_ATOMIC_SUB, false, true, false, false, false, 0x0, false, true, false, false }, // 8
  { IMAGE_ATOMIC_SWAP, false, true, false, false, false, 0x0, false, true, false, false }, // 9
  { IMAGE_ATOMIC_UMAX, false, true, false, false, false, 0x0, false, true, false, false }, // 10
  { IMAGE_ATOMIC_UMIN, false, true, false, false, false, 0x0, false, true, false, false }, // 11
  { IMAGE_ATOMIC_XOR, false, true, false, false, false, 0x0, false, true, false, false }, // 12
  { IMAGE_GATHER4, false, false, false, true, true, 0x0, false, true, false, true }, // 13
  { IMAGE_GATHER4_B, false, false, false, true, true, 0x1, false, true, false, true }, // 14
  { IMAGE_GATHER4_B_CL, false, false, false, true, true, 0x1, false, true, true, true }, // 15
  { IMAGE_GATHER4_B_CL_O, false, false, false, true, true, 0x2, false, true, true, true }, // 16
  { IMAGE_GATHER4_B_O, false, false, false, true, true, 0x2, false, true, false, true }, // 17
  { IMAGE_GATHER4_C, false, false, false, true, true, 0x1, false, true, false, true }, // 18
  { IMAGE_GATHER4_CL, false, false, false, true, true, 0x0, false, true, true, true }, // 19
  { IMAGE_GATHER4_CL_O, false, false, false, true, true, 0x1, false, true, true, true }, // 20
  { IMAGE_GATHER4_C_B, false, false, false, true, true, 0x2, false, true, false, true }, // 21
  { IMAGE_GATHER4_C_B_CL, false, false, false, true, true, 0x2, false, true, true, true }, // 22
  { IMAGE_GATHER4_C_B_CL_O, false, false, false, true, true, 0x3, false, true, true, true }, // 23
  { IMAGE_GATHER4_C_B_O, false, false, false, true, true, 0x3, false, true, false, true }, // 24
  { IMAGE_GATHER4_C_CL, false, false, false, true, true, 0x1, false, true, true, true }, // 25
  { IMAGE_GATHER4_C_CL_O, false, false, false, true, true, 0x2, false, true, true, true }, // 26
  { IMAGE_GATHER4_C_L, false, false, false, true, true, 0x1, false, true, true, true }, // 27
  { IMAGE_GATHER4_C_LZ, false, false, false, true, true, 0x1, false, true, false, true }, // 28
  { IMAGE_GATHER4_C_LZ_O, false, false, false, true, true, 0x2, false, true, false, true }, // 29
  { IMAGE_GATHER4_C_L_O, false, false, false, true, true, 0x2, false, true, true, true }, // 30
  { IMAGE_GATHER4_C_O, false, false, false, true, true, 0x2, false, true, false, true }, // 31
  { IMAGE_GATHER4_L, false, false, false, true, true, 0x0, false, true, true, true }, // 32
  { IMAGE_GATHER4_LZ, false, false, false, true, true, 0x0, false, true, false, true }, // 33
  { IMAGE_GATHER4_LZ_O, false, false, false, true, true, 0x1, false, true, false, true }, // 34
  { IMAGE_GATHER4_L_O, false, false, false, true, true, 0x1, false, true, true, true }, // 35
  { IMAGE_GATHER4_O, false, false, false, true, true, 0x1, false, true, false, true }, // 36
  { IMAGE_GET_LOD, false, false, false, true, false, 0x0, false, true, false, false }, // 37
  { IMAGE_GET_RESINFO, false, false, false, false, false, 0x0, false, false, true, false }, // 38
  { IMAGE_LOAD, false, false, false, false, false, 0x0, false, true, false, true }, // 39
  { IMAGE_LOAD_MIP, false, false, false, false, false, 0x0, false, true, true, true }, // 40
  { IMAGE_LOAD_MIP_PCK, false, false, false, false, false, 0x0, false, true, true, false }, // 41
  { IMAGE_LOAD_MIP_PCK_SGN, false, false, false, false, false, 0x0, false, true, true, false }, // 42
  { IMAGE_LOAD_PCK, false, false, false, false, false, 0x0, false, true, false, false }, // 43
  { IMAGE_LOAD_PCK_SGN, false, false, false, false, false, 0x0, false, true, false, false }, // 44
  { IMAGE_SAMPLE, false, false, false, true, false, 0x0, false, true, false, true }, // 45
  { IMAGE_SAMPLE_B, false, false, false, true, false, 0x1, false, true, false, true }, // 46
  { IMAGE_SAMPLE_B_CL, false, false, false, true, false, 0x1, false, true, true, true }, // 47
  { IMAGE_SAMPLE_B_CL_O, false, false, false, true, false, 0x2, false, true, true, true }, // 48
  { IMAGE_SAMPLE_B_O, false, false, false, true, false, 0x2, false, true, false, true }, // 49
  { IMAGE_SAMPLE_C, false, false, false, true, false, 0x1, false, true, false, true }, // 50
  { IMAGE_SAMPLE_CD, false, false, false, true, false, 0x0, true, true, false, true }, // 51
  { IMAGE_SAMPLE_CD_CL, false, false, false, true, false, 0x0, true, true, true, true }, // 52
  { IMAGE_SAMPLE_CD_CL_O, false, false, false, true, false, 0x1, true, true, true, true }, // 53
  { IMAGE_SAMPLE_CD_O, false, false, false, true, false, 0x1, true, true, false, true }, // 54
  { IMAGE_SAMPLE_CL, false, false, false, true, false, 0x0, false, true, true, true }, // 55
  { IMAGE_SAMPLE_CL_O, false, false, false, true, false, 0x1, false, true, true, true }, // 56
  { IMAGE_SAMPLE_C_B, false, false, false, true, false, 0x2, false, true, false, true }, // 57
  { IMAGE_SAMPLE_C_B_CL, false, false, false, true, false, 0x2, false, true, true, true }, // 58
  { IMAGE_SAMPLE_C_B_CL_O, false, false, false, true, false, 0x3, false, true, true, true }, // 59
  { IMAGE_SAMPLE_C_B_O, false, false, false, true, false, 0x3, false, true, false, true }, // 60
  { IMAGE_SAMPLE_C_CD, false, false, false, true, false, 0x1, true, true, false, true }, // 61
  { IMAGE_SAMPLE_C_CD_CL, false, false, false, true, false, 0x1, true, true, true, true }, // 62
  { IMAGE_SAMPLE_C_CD_CL_O, false, false, false, true, false, 0x2, true, true, true, true }, // 63
  { IMAGE_SAMPLE_C_CD_O, false, false, false, true, false, 0x2, true, true, false, true }, // 64
  { IMAGE_SAMPLE_C_CL, false, false, false, true, false, 0x1, false, true, true, true }, // 65
  { IMAGE_SAMPLE_C_CL_O, false, false, false, true, false, 0x2, false, true, true, true }, // 66
  { IMAGE_SAMPLE_C_D, false, false, false, true, false, 0x1, true, true, false, true }, // 67
  { IMAGE_SAMPLE_C_D_CL, false, false, false, true, false, 0x1, true, true, true, true }, // 68
  { IMAGE_SAMPLE_C_D_CL_O, false, false, false, true, false, 0x2, true, true, true, true }, // 69
  { IMAGE_SAMPLE_C_D_O, false, false, false, true, false, 0x2, true, true, false, true }, // 70
  { IMAGE_SAMPLE_C_L, false, false, false, true, false, 0x1, false, true, true, true }, // 71
  { IMAGE_SAMPLE_C_LZ, false, false, false, true, false, 0x1, false, true, false, true }, // 72
  { IMAGE_SAMPLE_C_LZ_O, false, false, false, true, false, 0x2, false, true, false, true }, // 73
  { IMAGE_SAMPLE_C_L_O, false, false, false, true, false, 0x2, false, true, true, true }, // 74
  { IMAGE_SAMPLE_C_O, false, false, false, true, false, 0x2, false, true, false, true }, // 75
  { IMAGE_SAMPLE_D, false, false, false, true, false, 0x0, true, true, false, true }, // 76
  { IMAGE_SAMPLE_D_CL, false, false, false, true, false, 0x0, true, true, true, true }, // 77
  { IMAGE_SAMPLE_D_CL_O, false, false, false, true, false, 0x1, true, true, true, true }, // 78
  { IMAGE_SAMPLE_D_O, false, false, false, true, false, 0x1, true, true, false, true }, // 79
  { IMAGE_SAMPLE_L, false, false, false, true, false, 0x0, false, true, true, true }, // 80
  { IMAGE_SAMPLE_LZ, false, false, false, true, false, 0x0, false, true, false, true }, // 81
  { IMAGE_SAMPLE_LZ_O, false, false, false, true, false, 0x1, false, true, false, true }, // 82
  { IMAGE_SAMPLE_L_O, false, false, false, true, false, 0x1, false, true, true, true }, // 83
  { IMAGE_SAMPLE_O, false, false, false, true, false, 0x1, false, true, false, true }, // 84
  { IMAGE_STORE, true, false, false, false, false, 0x0, false, true, false, true }, // 85
  { IMAGE_STORE_MIP, true, false, false, false, false, 0x0, false, true, true, true }, // 86
  { IMAGE_STORE_MIP_PCK, true, false, false, false, false, 0x0, false, true, true, false }, // 87
  { IMAGE_STORE_PCK, true, false, false, false, false, 0x0, false, true, false, false }, // 88
 };

const MIMGBaseOpcodeInfo *getMIMGBaseOpcodeInfo(unsigned BaseOpcode) {
  auto Table = makeArrayRef(MIMGBaseOpcodesTable);
  size_t Idx = BaseOpcode;
  return Idx >= Table.size() ? nullptr : &Table[Idx];
}
#endif

#ifdef GET_MIMGDimInfoTable_DECL
const MIMGDimInfo *getMIMGDimInfo(unsigned Dim);
const MIMGDimInfo *getMIMGDimInfoByAsmSuffix(StringRef AsmSuffix);
const MIMGDimInfo *getMIMGDimInfoByEncoding(uint8_t Encoding);
#endif

#ifdef GET_MIMGDimInfoTable_IMPL
constexpr MIMGDimInfo MIMGDimInfoTable[] = {
  { AMDGPUDim1D, 0x1, 0x2, false, 0x0, "1D" }, // 0
  { AMDGPUDim1DArray, 0x2, 0x2, true, 0x4, "1D_ARRAY" }, // 1
  { AMDGPUDim2D, 0x2, 0x4, false, 0x1, "2D" }, // 2
  { AMDGPUDim2DArray, 0x3, 0x4, true, 0x5, "2D_ARRAY" }, // 3
  { AMDGPUDim2DArrayMsaa, 0x4, 0x4, true, 0x7, "2D_MSAA_ARRAY" }, // 4
  { AMDGPUDim2DMsaa, 0x3, 0x4, false, 0x6, "2D_MSAA" }, // 5
  { AMDGPUDim3D, 0x3, 0x6, false, 0x2, "3D" }, // 6
  { AMDGPUDimCube, 0x3, 0x4, true, 0x3, "CUBE" }, // 7
 };

const MIMGDimInfo *getMIMGDimInfo(unsigned Dim) {
  auto Table = makeArrayRef(MIMGDimInfoTable);
  size_t Idx = Dim;
  return Idx >= Table.size() ? nullptr : &Table[Idx];
}

const MIMGDimInfo *getMIMGDimInfoByAsmSuffix(StringRef AsmSuffix) {
  struct IndexType {
    const char * AsmSuffix;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { "1D", 0 },
    { "1D_ARRAY", 1 },
    { "2D", 2 },
    { "2D_ARRAY", 3 },
    { "2D_MSAA", 5 },
    { "2D_MSAA_ARRAY", 4 },
    { "3D", 6 },
    { "CUBE", 7 },
  };

  struct KeyType {
    std::string AsmSuffix;
  };
  KeyType Key = { AsmSuffix.upper() };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      int CmpAsmSuffix = StringRef(LHS.AsmSuffix).compare(RHS.AsmSuffix);
      if (CmpAsmSuffix < 0) return true;
      if (CmpAsmSuffix > 0) return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.AsmSuffix != Idx->AsmSuffix)
    return nullptr;
  return &MIMGDimInfoTable[Idx->_index];
}

const MIMGDimInfo *getMIMGDimInfoByEncoding(uint8_t Encoding) {
  struct IndexType {
    uint8_t Encoding;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { 0x0, 0 },
    { 0x1, 2 },
    { 0x2, 6 },
    { 0x3, 7 },
    { 0x4, 1 },
    { 0x5, 3 },
    { 0x6, 5 },
    { 0x7, 4 },
  };

  auto Table = makeArrayRef(Index);
  size_t Idx = Encoding;
  return Idx >= Table.size() ? nullptr : &MIMGDimInfoTable[Table[Idx]._index];
}
#endif

#ifdef GET_MIMGInfoTable_DECL
const MIMGInfo *getMIMGOpcodeHelper(unsigned BaseOpcode, unsigned MIMGEncoding, uint8_t VDataDwords, uint8_t VAddrDwords);
const MIMGInfo *getMIMGInfo(unsigned Opcode);
#endif

#ifdef GET_MIMGInfoTable_IMPL
constexpr MIMGInfo MIMGInfoTable[] = {
  { IMAGE_ATOMIC_ADD_V1_V1_gfx10, IMAGE_ATOMIC_ADD, MIMGEncGfx10Default, 0x1, 0x1 }, // 0
  { IMAGE_ATOMIC_ADD_V1_V2_gfx10, IMAGE_ATOMIC_ADD, MIMGEncGfx10Default, 0x1, 0x2 }, // 1
  { IMAGE_ATOMIC_ADD_V1_V3_gfx10, IMAGE_ATOMIC_ADD, MIMGEncGfx10Default, 0x1, 0x3 }, // 2
  { IMAGE_ATOMIC_ADD_V1_V4_gfx10, IMAGE_ATOMIC_ADD, MIMGEncGfx10Default, 0x1, 0x4 }, // 3
  { IMAGE_ATOMIC_ADD_V2_V1_gfx10, IMAGE_ATOMIC_ADD, MIMGEncGfx10Default, 0x2, 0x1 }, // 4
  { IMAGE_ATOMIC_ADD_V2_V2_gfx10, IMAGE_ATOMIC_ADD, MIMGEncGfx10Default, 0x2, 0x2 }, // 5
  { IMAGE_ATOMIC_ADD_V2_V3_gfx10, IMAGE_ATOMIC_ADD, MIMGEncGfx10Default, 0x2, 0x3 }, // 6
  { IMAGE_ATOMIC_ADD_V2_V4_gfx10, IMAGE_ATOMIC_ADD, MIMGEncGfx10Default, 0x2, 0x4 }, // 7
  { IMAGE_ATOMIC_ADD_V1_V2_nsa_gfx10, IMAGE_ATOMIC_ADD, MIMGEncGfx10NSA, 0x1, 0x2 }, // 8
  { IMAGE_ATOMIC_ADD_V1_V3_nsa_gfx10, IMAGE_ATOMIC_ADD, MIMGEncGfx10NSA, 0x1, 0x3 }, // 9
  { IMAGE_ATOMIC_ADD_V1_V4_nsa_gfx10, IMAGE_ATOMIC_ADD, MIMGEncGfx10NSA, 0x1, 0x4 }, // 10
  { IMAGE_ATOMIC_ADD_V2_V2_nsa_gfx10, IMAGE_ATOMIC_ADD, MIMGEncGfx10NSA, 0x2, 0x2 }, // 11
  { IMAGE_ATOMIC_ADD_V2_V3_nsa_gfx10, IMAGE_ATOMIC_ADD, MIMGEncGfx10NSA, 0x2, 0x3 }, // 12
  { IMAGE_ATOMIC_ADD_V2_V4_nsa_gfx10, IMAGE_ATOMIC_ADD, MIMGEncGfx10NSA, 0x2, 0x4 }, // 13
  { IMAGE_ATOMIC_ADD_V1_V1_si, IMAGE_ATOMIC_ADD, MIMGEncGfx6, 0x1, 0x1 }, // 14
  { IMAGE_ATOMIC_ADD_V1_V2_si, IMAGE_ATOMIC_ADD, MIMGEncGfx6, 0x1, 0x2 }, // 15
  { IMAGE_ATOMIC_ADD_V1_V3_si, IMAGE_ATOMIC_ADD, MIMGEncGfx6, 0x1, 0x3 }, // 16
  { IMAGE_ATOMIC_ADD_V1_V4_si, IMAGE_ATOMIC_ADD, MIMGEncGfx6, 0x1, 0x4 }, // 17
  { IMAGE_ATOMIC_ADD_V2_V1_si, IMAGE_ATOMIC_ADD, MIMGEncGfx6, 0x2, 0x1 }, // 18
  { IMAGE_ATOMIC_ADD_V2_V2_si, IMAGE_ATOMIC_ADD, MIMGEncGfx6, 0x2, 0x2 }, // 19
  { IMAGE_ATOMIC_ADD_V2_V3_si, IMAGE_ATOMIC_ADD, MIMGEncGfx6, 0x2, 0x3 }, // 20
  { IMAGE_ATOMIC_ADD_V2_V4_si, IMAGE_ATOMIC_ADD, MIMGEncGfx6, 0x2, 0x4 }, // 21
  { IMAGE_ATOMIC_ADD_V1_V1_vi, IMAGE_ATOMIC_ADD, MIMGEncGfx8, 0x1, 0x1 }, // 22
  { IMAGE_ATOMIC_ADD_V1_V2_vi, IMAGE_ATOMIC_ADD, MIMGEncGfx8, 0x1, 0x2 }, // 23
  { IMAGE_ATOMIC_ADD_V1_V3_vi, IMAGE_ATOMIC_ADD, MIMGEncGfx8, 0x1, 0x3 }, // 24
  { IMAGE_ATOMIC_ADD_V1_V4_vi, IMAGE_ATOMIC_ADD, MIMGEncGfx8, 0x1, 0x4 }, // 25
  { IMAGE_ATOMIC_ADD_V2_V1_vi, IMAGE_ATOMIC_ADD, MIMGEncGfx8, 0x2, 0x1 }, // 26
  { IMAGE_ATOMIC_ADD_V2_V2_vi, IMAGE_ATOMIC_ADD, MIMGEncGfx8, 0x2, 0x2 }, // 27
  { IMAGE_ATOMIC_ADD_V2_V3_vi, IMAGE_ATOMIC_ADD, MIMGEncGfx8, 0x2, 0x3 }, // 28
  { IMAGE_ATOMIC_ADD_V2_V4_vi, IMAGE_ATOMIC_ADD, MIMGEncGfx8, 0x2, 0x4 }, // 29
  { IMAGE_ATOMIC_AND_V1_V1_gfx10, IMAGE_ATOMIC_AND, MIMGEncGfx10Default, 0x1, 0x1 }, // 30
  { IMAGE_ATOMIC_AND_V1_V2_gfx10, IMAGE_ATOMIC_AND, MIMGEncGfx10Default, 0x1, 0x2 }, // 31
  { IMAGE_ATOMIC_AND_V1_V3_gfx10, IMAGE_ATOMIC_AND, MIMGEncGfx10Default, 0x1, 0x3 }, // 32
  { IMAGE_ATOMIC_AND_V1_V4_gfx10, IMAGE_ATOMIC_AND, MIMGEncGfx10Default, 0x1, 0x4 }, // 33
  { IMAGE_ATOMIC_AND_V2_V1_gfx10, IMAGE_ATOMIC_AND, MIMGEncGfx10Default, 0x2, 0x1 }, // 34
  { IMAGE_ATOMIC_AND_V2_V2_gfx10, IMAGE_ATOMIC_AND, MIMGEncGfx10Default, 0x2, 0x2 }, // 35
  { IMAGE_ATOMIC_AND_V2_V3_gfx10, IMAGE_ATOMIC_AND, MIMGEncGfx10Default, 0x2, 0x3 }, // 36
  { IMAGE_ATOMIC_AND_V2_V4_gfx10, IMAGE_ATOMIC_AND, MIMGEncGfx10Default, 0x2, 0x4 }, // 37
  { IMAGE_ATOMIC_AND_V1_V2_nsa_gfx10, IMAGE_ATOMIC_AND, MIMGEncGfx10NSA, 0x1, 0x2 }, // 38
  { IMAGE_ATOMIC_AND_V1_V3_nsa_gfx10, IMAGE_ATOMIC_AND, MIMGEncGfx10NSA, 0x1, 0x3 }, // 39
  { IMAGE_ATOMIC_AND_V1_V4_nsa_gfx10, IMAGE_ATOMIC_AND, MIMGEncGfx10NSA, 0x1, 0x4 }, // 40
  { IMAGE_ATOMIC_AND_V2_V2_nsa_gfx10, IMAGE_ATOMIC_AND, MIMGEncGfx10NSA, 0x2, 0x2 }, // 41
  { IMAGE_ATOMIC_AND_V2_V3_nsa_gfx10, IMAGE_ATOMIC_AND, MIMGEncGfx10NSA, 0x2, 0x3 }, // 42
  { IMAGE_ATOMIC_AND_V2_V4_nsa_gfx10, IMAGE_ATOMIC_AND, MIMGEncGfx10NSA, 0x2, 0x4 }, // 43
  { IMAGE_ATOMIC_AND_V1_V1_si, IMAGE_ATOMIC_AND, MIMGEncGfx6, 0x1, 0x1 }, // 44
  { IMAGE_ATOMIC_AND_V1_V2_si, IMAGE_ATOMIC_AND, MIMGEncGfx6, 0x1, 0x2 }, // 45
  { IMAGE_ATOMIC_AND_V1_V3_si, IMAGE_ATOMIC_AND, MIMGEncGfx6, 0x1, 0x3 }, // 46
  { IMAGE_ATOMIC_AND_V1_V4_si, IMAGE_ATOMIC_AND, MIMGEncGfx6, 0x1, 0x4 }, // 47
  { IMAGE_ATOMIC_AND_V2_V1_si, IMAGE_ATOMIC_AND, MIMGEncGfx6, 0x2, 0x1 }, // 48
  { IMAGE_ATOMIC_AND_V2_V2_si, IMAGE_ATOMIC_AND, MIMGEncGfx6, 0x2, 0x2 }, // 49
  { IMAGE_ATOMIC_AND_V2_V3_si, IMAGE_ATOMIC_AND, MIMGEncGfx6, 0x2, 0x3 }, // 50
  { IMAGE_ATOMIC_AND_V2_V4_si, IMAGE_ATOMIC_AND, MIMGEncGfx6, 0x2, 0x4 }, // 51
  { IMAGE_ATOMIC_AND_V1_V1_vi, IMAGE_ATOMIC_AND, MIMGEncGfx8, 0x1, 0x1 }, // 52
  { IMAGE_ATOMIC_AND_V1_V2_vi, IMAGE_ATOMIC_AND, MIMGEncGfx8, 0x1, 0x2 }, // 53
  { IMAGE_ATOMIC_AND_V1_V3_vi, IMAGE_ATOMIC_AND, MIMGEncGfx8, 0x1, 0x3 }, // 54
  { IMAGE_ATOMIC_AND_V1_V4_vi, IMAGE_ATOMIC_AND, MIMGEncGfx8, 0x1, 0x4 }, // 55
  { IMAGE_ATOMIC_AND_V2_V1_vi, IMAGE_ATOMIC_AND, MIMGEncGfx8, 0x2, 0x1 }, // 56
  { IMAGE_ATOMIC_AND_V2_V2_vi, IMAGE_ATOMIC_AND, MIMGEncGfx8, 0x2, 0x2 }, // 57
  { IMAGE_ATOMIC_AND_V2_V3_vi, IMAGE_ATOMIC_AND, MIMGEncGfx8, 0x2, 0x3 }, // 58
  { IMAGE_ATOMIC_AND_V2_V4_vi, IMAGE_ATOMIC_AND, MIMGEncGfx8, 0x2, 0x4 }, // 59
  { IMAGE_ATOMIC_CMPSWAP_V1_V1_gfx10, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx10Default, 0x2, 0x1 }, // 60
  { IMAGE_ATOMIC_CMPSWAP_V1_V2_gfx10, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx10Default, 0x2, 0x2 }, // 61
  { IMAGE_ATOMIC_CMPSWAP_V1_V3_gfx10, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx10Default, 0x2, 0x3 }, // 62
  { IMAGE_ATOMIC_CMPSWAP_V1_V4_gfx10, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx10Default, 0x2, 0x4 }, // 63
  { IMAGE_ATOMIC_CMPSWAP_V2_V1_gfx10, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx10Default, 0x4, 0x1 }, // 64
  { IMAGE_ATOMIC_CMPSWAP_V2_V2_gfx10, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx10Default, 0x4, 0x2 }, // 65
  { IMAGE_ATOMIC_CMPSWAP_V2_V3_gfx10, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx10Default, 0x4, 0x3 }, // 66
  { IMAGE_ATOMIC_CMPSWAP_V2_V4_gfx10, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx10Default, 0x4, 0x4 }, // 67
  { IMAGE_ATOMIC_CMPSWAP_V1_V2_nsa_gfx10, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx10NSA, 0x2, 0x2 }, // 68
  { IMAGE_ATOMIC_CMPSWAP_V1_V3_nsa_gfx10, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx10NSA, 0x2, 0x3 }, // 69
  { IMAGE_ATOMIC_CMPSWAP_V1_V4_nsa_gfx10, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx10NSA, 0x2, 0x4 }, // 70
  { IMAGE_ATOMIC_CMPSWAP_V2_V2_nsa_gfx10, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx10NSA, 0x4, 0x2 }, // 71
  { IMAGE_ATOMIC_CMPSWAP_V2_V3_nsa_gfx10, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx10NSA, 0x4, 0x3 }, // 72
  { IMAGE_ATOMIC_CMPSWAP_V2_V4_nsa_gfx10, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx10NSA, 0x4, 0x4 }, // 73
  { IMAGE_ATOMIC_CMPSWAP_V1_V1_si, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx6, 0x2, 0x1 }, // 74
  { IMAGE_ATOMIC_CMPSWAP_V1_V2_si, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx6, 0x2, 0x2 }, // 75
  { IMAGE_ATOMIC_CMPSWAP_V1_V3_si, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx6, 0x2, 0x3 }, // 76
  { IMAGE_ATOMIC_CMPSWAP_V1_V4_si, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx6, 0x2, 0x4 }, // 77
  { IMAGE_ATOMIC_CMPSWAP_V2_V1_si, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx6, 0x4, 0x1 }, // 78
  { IMAGE_ATOMIC_CMPSWAP_V2_V2_si, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx6, 0x4, 0x2 }, // 79
  { IMAGE_ATOMIC_CMPSWAP_V2_V3_si, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx6, 0x4, 0x3 }, // 80
  { IMAGE_ATOMIC_CMPSWAP_V2_V4_si, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx6, 0x4, 0x4 }, // 81
  { IMAGE_ATOMIC_CMPSWAP_V1_V1_vi, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx8, 0x2, 0x1 }, // 82
  { IMAGE_ATOMIC_CMPSWAP_V1_V2_vi, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx8, 0x2, 0x2 }, // 83
  { IMAGE_ATOMIC_CMPSWAP_V1_V3_vi, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx8, 0x2, 0x3 }, // 84
  { IMAGE_ATOMIC_CMPSWAP_V1_V4_vi, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx8, 0x2, 0x4 }, // 85
  { IMAGE_ATOMIC_CMPSWAP_V2_V1_vi, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx8, 0x4, 0x1 }, // 86
  { IMAGE_ATOMIC_CMPSWAP_V2_V2_vi, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx8, 0x4, 0x2 }, // 87
  { IMAGE_ATOMIC_CMPSWAP_V2_V3_vi, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx8, 0x4, 0x3 }, // 88
  { IMAGE_ATOMIC_CMPSWAP_V2_V4_vi, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx8, 0x4, 0x4 }, // 89
  { IMAGE_ATOMIC_DEC_V1_V1_gfx10, IMAGE_ATOMIC_DEC, MIMGEncGfx10Default, 0x1, 0x1 }, // 90
  { IMAGE_ATOMIC_DEC_V1_V2_gfx10, IMAGE_ATOMIC_DEC, MIMGEncGfx10Default, 0x1, 0x2 }, // 91
  { IMAGE_ATOMIC_DEC_V1_V3_gfx10, IMAGE_ATOMIC_DEC, MIMGEncGfx10Default, 0x1, 0x3 }, // 92
  { IMAGE_ATOMIC_DEC_V1_V4_gfx10, IMAGE_ATOMIC_DEC, MIMGEncGfx10Default, 0x1, 0x4 }, // 93
  { IMAGE_ATOMIC_DEC_V2_V1_gfx10, IMAGE_ATOMIC_DEC, MIMGEncGfx10Default, 0x2, 0x1 }, // 94
  { IMAGE_ATOMIC_DEC_V2_V2_gfx10, IMAGE_ATOMIC_DEC, MIMGEncGfx10Default, 0x2, 0x2 }, // 95
  { IMAGE_ATOMIC_DEC_V2_V3_gfx10, IMAGE_ATOMIC_DEC, MIMGEncGfx10Default, 0x2, 0x3 }, // 96
  { IMAGE_ATOMIC_DEC_V2_V4_gfx10, IMAGE_ATOMIC_DEC, MIMGEncGfx10Default, 0x2, 0x4 }, // 97
  { IMAGE_ATOMIC_DEC_V1_V2_nsa_gfx10, IMAGE_ATOMIC_DEC, MIMGEncGfx10NSA, 0x1, 0x2 }, // 98
  { IMAGE_ATOMIC_DEC_V1_V3_nsa_gfx10, IMAGE_ATOMIC_DEC, MIMGEncGfx10NSA, 0x1, 0x3 }, // 99
  { IMAGE_ATOMIC_DEC_V1_V4_nsa_gfx10, IMAGE_ATOMIC_DEC, MIMGEncGfx10NSA, 0x1, 0x4 }, // 100
  { IMAGE_ATOMIC_DEC_V2_V2_nsa_gfx10, IMAGE_ATOMIC_DEC, MIMGEncGfx10NSA, 0x2, 0x2 }, // 101
  { IMAGE_ATOMIC_DEC_V2_V3_nsa_gfx10, IMAGE_ATOMIC_DEC, MIMGEncGfx10NSA, 0x2, 0x3 }, // 102
  { IMAGE_ATOMIC_DEC_V2_V4_nsa_gfx10, IMAGE_ATOMIC_DEC, MIMGEncGfx10NSA, 0x2, 0x4 }, // 103
  { IMAGE_ATOMIC_DEC_V1_V1_si, IMAGE_ATOMIC_DEC, MIMGEncGfx6, 0x1, 0x1 }, // 104
  { IMAGE_ATOMIC_DEC_V1_V2_si, IMAGE_ATOMIC_DEC, MIMGEncGfx6, 0x1, 0x2 }, // 105
  { IMAGE_ATOMIC_DEC_V1_V3_si, IMAGE_ATOMIC_DEC, MIMGEncGfx6, 0x1, 0x3 }, // 106
  { IMAGE_ATOMIC_DEC_V1_V4_si, IMAGE_ATOMIC_DEC, MIMGEncGfx6, 0x1, 0x4 }, // 107
  { IMAGE_ATOMIC_DEC_V2_V1_si, IMAGE_ATOMIC_DEC, MIMGEncGfx6, 0x2, 0x1 }, // 108
  { IMAGE_ATOMIC_DEC_V2_V2_si, IMAGE_ATOMIC_DEC, MIMGEncGfx6, 0x2, 0x2 }, // 109
  { IMAGE_ATOMIC_DEC_V2_V3_si, IMAGE_ATOMIC_DEC, MIMGEncGfx6, 0x2, 0x3 }, // 110
  { IMAGE_ATOMIC_DEC_V2_V4_si, IMAGE_ATOMIC_DEC, MIMGEncGfx6, 0x2, 0x4 }, // 111
  { IMAGE_ATOMIC_DEC_V1_V1_vi, IMAGE_ATOMIC_DEC, MIMGEncGfx8, 0x1, 0x1 }, // 112
  { IMAGE_ATOMIC_DEC_V1_V2_vi, IMAGE_ATOMIC_DEC, MIMGEncGfx8, 0x1, 0x2 }, // 113
  { IMAGE_ATOMIC_DEC_V1_V3_vi, IMAGE_ATOMIC_DEC, MIMGEncGfx8, 0x1, 0x3 }, // 114
  { IMAGE_ATOMIC_DEC_V1_V4_vi, IMAGE_ATOMIC_DEC, MIMGEncGfx8, 0x1, 0x4 }, // 115
  { IMAGE_ATOMIC_DEC_V2_V1_vi, IMAGE_ATOMIC_DEC, MIMGEncGfx8, 0x2, 0x1 }, // 116
  { IMAGE_ATOMIC_DEC_V2_V2_vi, IMAGE_ATOMIC_DEC, MIMGEncGfx8, 0x2, 0x2 }, // 117
  { IMAGE_ATOMIC_DEC_V2_V3_vi, IMAGE_ATOMIC_DEC, MIMGEncGfx8, 0x2, 0x3 }, // 118
  { IMAGE_ATOMIC_DEC_V2_V4_vi, IMAGE_ATOMIC_DEC, MIMGEncGfx8, 0x2, 0x4 }, // 119
  { IMAGE_ATOMIC_INC_V1_V1_gfx10, IMAGE_ATOMIC_INC, MIMGEncGfx10Default, 0x1, 0x1 }, // 120
  { IMAGE_ATOMIC_INC_V1_V2_gfx10, IMAGE_ATOMIC_INC, MIMGEncGfx10Default, 0x1, 0x2 }, // 121
  { IMAGE_ATOMIC_INC_V1_V3_gfx10, IMAGE_ATOMIC_INC, MIMGEncGfx10Default, 0x1, 0x3 }, // 122
  { IMAGE_ATOMIC_INC_V1_V4_gfx10, IMAGE_ATOMIC_INC, MIMGEncGfx10Default, 0x1, 0x4 }, // 123
  { IMAGE_ATOMIC_INC_V2_V1_gfx10, IMAGE_ATOMIC_INC, MIMGEncGfx10Default, 0x2, 0x1 }, // 124
  { IMAGE_ATOMIC_INC_V2_V2_gfx10, IMAGE_ATOMIC_INC, MIMGEncGfx10Default, 0x2, 0x2 }, // 125
  { IMAGE_ATOMIC_INC_V2_V3_gfx10, IMAGE_ATOMIC_INC, MIMGEncGfx10Default, 0x2, 0x3 }, // 126
  { IMAGE_ATOMIC_INC_V2_V4_gfx10, IMAGE_ATOMIC_INC, MIMGEncGfx10Default, 0x2, 0x4 }, // 127
  { IMAGE_ATOMIC_INC_V1_V2_nsa_gfx10, IMAGE_ATOMIC_INC, MIMGEncGfx10NSA, 0x1, 0x2 }, // 128
  { IMAGE_ATOMIC_INC_V1_V3_nsa_gfx10, IMAGE_ATOMIC_INC, MIMGEncGfx10NSA, 0x1, 0x3 }, // 129
  { IMAGE_ATOMIC_INC_V1_V4_nsa_gfx10, IMAGE_ATOMIC_INC, MIMGEncGfx10NSA, 0x1, 0x4 }, // 130
  { IMAGE_ATOMIC_INC_V2_V2_nsa_gfx10, IMAGE_ATOMIC_INC, MIMGEncGfx10NSA, 0x2, 0x2 }, // 131
  { IMAGE_ATOMIC_INC_V2_V3_nsa_gfx10, IMAGE_ATOMIC_INC, MIMGEncGfx10NSA, 0x2, 0x3 }, // 132
  { IMAGE_ATOMIC_INC_V2_V4_nsa_gfx10, IMAGE_ATOMIC_INC, MIMGEncGfx10NSA, 0x2, 0x4 }, // 133
  { IMAGE_ATOMIC_INC_V1_V1_si, IMAGE_ATOMIC_INC, MIMGEncGfx6, 0x1, 0x1 }, // 134
  { IMAGE_ATOMIC_INC_V1_V2_si, IMAGE_ATOMIC_INC, MIMGEncGfx6, 0x1, 0x2 }, // 135
  { IMAGE_ATOMIC_INC_V1_V3_si, IMAGE_ATOMIC_INC, MIMGEncGfx6, 0x1, 0x3 }, // 136
  { IMAGE_ATOMIC_INC_V1_V4_si, IMAGE_ATOMIC_INC, MIMGEncGfx6, 0x1, 0x4 }, // 137
  { IMAGE_ATOMIC_INC_V2_V1_si, IMAGE_ATOMIC_INC, MIMGEncGfx6, 0x2, 0x1 }, // 138
  { IMAGE_ATOMIC_INC_V2_V2_si, IMAGE_ATOMIC_INC, MIMGEncGfx6, 0x2, 0x2 }, // 139
  { IMAGE_ATOMIC_INC_V2_V3_si, IMAGE_ATOMIC_INC, MIMGEncGfx6, 0x2, 0x3 }, // 140
  { IMAGE_ATOMIC_INC_V2_V4_si, IMAGE_ATOMIC_INC, MIMGEncGfx6, 0x2, 0x4 }, // 141
  { IMAGE_ATOMIC_INC_V1_V1_vi, IMAGE_ATOMIC_INC, MIMGEncGfx8, 0x1, 0x1 }, // 142
  { IMAGE_ATOMIC_INC_V1_V2_vi, IMAGE_ATOMIC_INC, MIMGEncGfx8, 0x1, 0x2 }, // 143
  { IMAGE_ATOMIC_INC_V1_V3_vi, IMAGE_ATOMIC_INC, MIMGEncGfx8, 0x1, 0x3 }, // 144
  { IMAGE_ATOMIC_INC_V1_V4_vi, IMAGE_ATOMIC_INC, MIMGEncGfx8, 0x1, 0x4 }, // 145
  { IMAGE_ATOMIC_INC_V2_V1_vi, IMAGE_ATOMIC_INC, MIMGEncGfx8, 0x2, 0x1 }, // 146
  { IMAGE_ATOMIC_INC_V2_V2_vi, IMAGE_ATOMIC_INC, MIMGEncGfx8, 0x2, 0x2 }, // 147
  { IMAGE_ATOMIC_INC_V2_V3_vi, IMAGE_ATOMIC_INC, MIMGEncGfx8, 0x2, 0x3 }, // 148
  { IMAGE_ATOMIC_INC_V2_V4_vi, IMAGE_ATOMIC_INC, MIMGEncGfx8, 0x2, 0x4 }, // 149
  { IMAGE_ATOMIC_OR_V1_V1_gfx10, IMAGE_ATOMIC_OR, MIMGEncGfx10Default, 0x1, 0x1 }, // 150
  { IMAGE_ATOMIC_OR_V1_V2_gfx10, IMAGE_ATOMIC_OR, MIMGEncGfx10Default, 0x1, 0x2 }, // 151
  { IMAGE_ATOMIC_OR_V1_V3_gfx10, IMAGE_ATOMIC_OR, MIMGEncGfx10Default, 0x1, 0x3 }, // 152
  { IMAGE_ATOMIC_OR_V1_V4_gfx10, IMAGE_ATOMIC_OR, MIMGEncGfx10Default, 0x1, 0x4 }, // 153
  { IMAGE_ATOMIC_OR_V2_V1_gfx10, IMAGE_ATOMIC_OR, MIMGEncGfx10Default, 0x2, 0x1 }, // 154
  { IMAGE_ATOMIC_OR_V2_V2_gfx10, IMAGE_ATOMIC_OR, MIMGEncGfx10Default, 0x2, 0x2 }, // 155
  { IMAGE_ATOMIC_OR_V2_V3_gfx10, IMAGE_ATOMIC_OR, MIMGEncGfx10Default, 0x2, 0x3 }, // 156
  { IMAGE_ATOMIC_OR_V2_V4_gfx10, IMAGE_ATOMIC_OR, MIMGEncGfx10Default, 0x2, 0x4 }, // 157
  { IMAGE_ATOMIC_OR_V1_V2_nsa_gfx10, IMAGE_ATOMIC_OR, MIMGEncGfx10NSA, 0x1, 0x2 }, // 158
  { IMAGE_ATOMIC_OR_V1_V3_nsa_gfx10, IMAGE_ATOMIC_OR, MIMGEncGfx10NSA, 0x1, 0x3 }, // 159
  { IMAGE_ATOMIC_OR_V1_V4_nsa_gfx10, IMAGE_ATOMIC_OR, MIMGEncGfx10NSA, 0x1, 0x4 }, // 160
  { IMAGE_ATOMIC_OR_V2_V2_nsa_gfx10, IMAGE_ATOMIC_OR, MIMGEncGfx10NSA, 0x2, 0x2 }, // 161
  { IMAGE_ATOMIC_OR_V2_V3_nsa_gfx10, IMAGE_ATOMIC_OR, MIMGEncGfx10NSA, 0x2, 0x3 }, // 162
  { IMAGE_ATOMIC_OR_V2_V4_nsa_gfx10, IMAGE_ATOMIC_OR, MIMGEncGfx10NSA, 0x2, 0x4 }, // 163
  { IMAGE_ATOMIC_OR_V1_V1_si, IMAGE_ATOMIC_OR, MIMGEncGfx6, 0x1, 0x1 }, // 164
  { IMAGE_ATOMIC_OR_V1_V2_si, IMAGE_ATOMIC_OR, MIMGEncGfx6, 0x1, 0x2 }, // 165
  { IMAGE_ATOMIC_OR_V1_V3_si, IMAGE_ATOMIC_OR, MIMGEncGfx6, 0x1, 0x3 }, // 166
  { IMAGE_ATOMIC_OR_V1_V4_si, IMAGE_ATOMIC_OR, MIMGEncGfx6, 0x1, 0x4 }, // 167
  { IMAGE_ATOMIC_OR_V2_V1_si, IMAGE_ATOMIC_OR, MIMGEncGfx6, 0x2, 0x1 }, // 168
  { IMAGE_ATOMIC_OR_V2_V2_si, IMAGE_ATOMIC_OR, MIMGEncGfx6, 0x2, 0x2 }, // 169
  { IMAGE_ATOMIC_OR_V2_V3_si, IMAGE_ATOMIC_OR, MIMGEncGfx6, 0x2, 0x3 }, // 170
  { IMAGE_ATOMIC_OR_V2_V4_si, IMAGE_ATOMIC_OR, MIMGEncGfx6, 0x2, 0x4 }, // 171
  { IMAGE_ATOMIC_OR_V1_V1_vi, IMAGE_ATOMIC_OR, MIMGEncGfx8, 0x1, 0x1 }, // 172
  { IMAGE_ATOMIC_OR_V1_V2_vi, IMAGE_ATOMIC_OR, MIMGEncGfx8, 0x1, 0x2 }, // 173
  { IMAGE_ATOMIC_OR_V1_V3_vi, IMAGE_ATOMIC_OR, MIMGEncGfx8, 0x1, 0x3 }, // 174
  { IMAGE_ATOMIC_OR_V1_V4_vi, IMAGE_ATOMIC_OR, MIMGEncGfx8, 0x1, 0x4 }, // 175
  { IMAGE_ATOMIC_OR_V2_V1_vi, IMAGE_ATOMIC_OR, MIMGEncGfx8, 0x2, 0x1 }, // 176
  { IMAGE_ATOMIC_OR_V2_V2_vi, IMAGE_ATOMIC_OR, MIMGEncGfx8, 0x2, 0x2 }, // 177
  { IMAGE_ATOMIC_OR_V2_V3_vi, IMAGE_ATOMIC_OR, MIMGEncGfx8, 0x2, 0x3 }, // 178
  { IMAGE_ATOMIC_OR_V2_V4_vi, IMAGE_ATOMIC_OR, MIMGEncGfx8, 0x2, 0x4 }, // 179
  { IMAGE_ATOMIC_SMAX_V1_V1_gfx10, IMAGE_ATOMIC_SMAX, MIMGEncGfx10Default, 0x1, 0x1 }, // 180
  { IMAGE_ATOMIC_SMAX_V1_V2_gfx10, IMAGE_ATOMIC_SMAX, MIMGEncGfx10Default, 0x1, 0x2 }, // 181
  { IMAGE_ATOMIC_SMAX_V1_V3_gfx10, IMAGE_ATOMIC_SMAX, MIMGEncGfx10Default, 0x1, 0x3 }, // 182
  { IMAGE_ATOMIC_SMAX_V1_V4_gfx10, IMAGE_ATOMIC_SMAX, MIMGEncGfx10Default, 0x1, 0x4 }, // 183
  { IMAGE_ATOMIC_SMAX_V2_V1_gfx10, IMAGE_ATOMIC_SMAX, MIMGEncGfx10Default, 0x2, 0x1 }, // 184
  { IMAGE_ATOMIC_SMAX_V2_V2_gfx10, IMAGE_ATOMIC_SMAX, MIMGEncGfx10Default, 0x2, 0x2 }, // 185
  { IMAGE_ATOMIC_SMAX_V2_V3_gfx10, IMAGE_ATOMIC_SMAX, MIMGEncGfx10Default, 0x2, 0x3 }, // 186
  { IMAGE_ATOMIC_SMAX_V2_V4_gfx10, IMAGE_ATOMIC_SMAX, MIMGEncGfx10Default, 0x2, 0x4 }, // 187
  { IMAGE_ATOMIC_SMAX_V1_V2_nsa_gfx10, IMAGE_ATOMIC_SMAX, MIMGEncGfx10NSA, 0x1, 0x2 }, // 188
  { IMAGE_ATOMIC_SMAX_V1_V3_nsa_gfx10, IMAGE_ATOMIC_SMAX, MIMGEncGfx10NSA, 0x1, 0x3 }, // 189
  { IMAGE_ATOMIC_SMAX_V1_V4_nsa_gfx10, IMAGE_ATOMIC_SMAX, MIMGEncGfx10NSA, 0x1, 0x4 }, // 190
  { IMAGE_ATOMIC_SMAX_V2_V2_nsa_gfx10, IMAGE_ATOMIC_SMAX, MIMGEncGfx10NSA, 0x2, 0x2 }, // 191
  { IMAGE_ATOMIC_SMAX_V2_V3_nsa_gfx10, IMAGE_ATOMIC_SMAX, MIMGEncGfx10NSA, 0x2, 0x3 }, // 192
  { IMAGE_ATOMIC_SMAX_V2_V4_nsa_gfx10, IMAGE_ATOMIC_SMAX, MIMGEncGfx10NSA, 0x2, 0x4 }, // 193
  { IMAGE_ATOMIC_SMAX_V1_V1_si, IMAGE_ATOMIC_SMAX, MIMGEncGfx6, 0x1, 0x1 }, // 194
  { IMAGE_ATOMIC_SMAX_V1_V2_si, IMAGE_ATOMIC_SMAX, MIMGEncGfx6, 0x1, 0x2 }, // 195
  { IMAGE_ATOMIC_SMAX_V1_V3_si, IMAGE_ATOMIC_SMAX, MIMGEncGfx6, 0x1, 0x3 }, // 196
  { IMAGE_ATOMIC_SMAX_V1_V4_si, IMAGE_ATOMIC_SMAX, MIMGEncGfx6, 0x1, 0x4 }, // 197
  { IMAGE_ATOMIC_SMAX_V2_V1_si, IMAGE_ATOMIC_SMAX, MIMGEncGfx6, 0x2, 0x1 }, // 198
  { IMAGE_ATOMIC_SMAX_V2_V2_si, IMAGE_ATOMIC_SMAX, MIMGEncGfx6, 0x2, 0x2 }, // 199
  { IMAGE_ATOMIC_SMAX_V2_V3_si, IMAGE_ATOMIC_SMAX, MIMGEncGfx6, 0x2, 0x3 }, // 200
  { IMAGE_ATOMIC_SMAX_V2_V4_si, IMAGE_ATOMIC_SMAX, MIMGEncGfx6, 0x2, 0x4 }, // 201
  { IMAGE_ATOMIC_SMAX_V1_V1_vi, IMAGE_ATOMIC_SMAX, MIMGEncGfx8, 0x1, 0x1 }, // 202
  { IMAGE_ATOMIC_SMAX_V1_V2_vi, IMAGE_ATOMIC_SMAX, MIMGEncGfx8, 0x1, 0x2 }, // 203
  { IMAGE_ATOMIC_SMAX_V1_V3_vi, IMAGE_ATOMIC_SMAX, MIMGEncGfx8, 0x1, 0x3 }, // 204
  { IMAGE_ATOMIC_SMAX_V1_V4_vi, IMAGE_ATOMIC_SMAX, MIMGEncGfx8, 0x1, 0x4 }, // 205
  { IMAGE_ATOMIC_SMAX_V2_V1_vi, IMAGE_ATOMIC_SMAX, MIMGEncGfx8, 0x2, 0x1 }, // 206
  { IMAGE_ATOMIC_SMAX_V2_V2_vi, IMAGE_ATOMIC_SMAX, MIMGEncGfx8, 0x2, 0x2 }, // 207
  { IMAGE_ATOMIC_SMAX_V2_V3_vi, IMAGE_ATOMIC_SMAX, MIMGEncGfx8, 0x2, 0x3 }, // 208
  { IMAGE_ATOMIC_SMAX_V2_V4_vi, IMAGE_ATOMIC_SMAX, MIMGEncGfx8, 0x2, 0x4 }, // 209
  { IMAGE_ATOMIC_SMIN_V1_V1_gfx10, IMAGE_ATOMIC_SMIN, MIMGEncGfx10Default, 0x1, 0x1 }, // 210
  { IMAGE_ATOMIC_SMIN_V1_V2_gfx10, IMAGE_ATOMIC_SMIN, MIMGEncGfx10Default, 0x1, 0x2 }, // 211
  { IMAGE_ATOMIC_SMIN_V1_V3_gfx10, IMAGE_ATOMIC_SMIN, MIMGEncGfx10Default, 0x1, 0x3 }, // 212
  { IMAGE_ATOMIC_SMIN_V1_V4_gfx10, IMAGE_ATOMIC_SMIN, MIMGEncGfx10Default, 0x1, 0x4 }, // 213
  { IMAGE_ATOMIC_SMIN_V2_V1_gfx10, IMAGE_ATOMIC_SMIN, MIMGEncGfx10Default, 0x2, 0x1 }, // 214
  { IMAGE_ATOMIC_SMIN_V2_V2_gfx10, IMAGE_ATOMIC_SMIN, MIMGEncGfx10Default, 0x2, 0x2 }, // 215
  { IMAGE_ATOMIC_SMIN_V2_V3_gfx10, IMAGE_ATOMIC_SMIN, MIMGEncGfx10Default, 0x2, 0x3 }, // 216
  { IMAGE_ATOMIC_SMIN_V2_V4_gfx10, IMAGE_ATOMIC_SMIN, MIMGEncGfx10Default, 0x2, 0x4 }, // 217
  { IMAGE_ATOMIC_SMIN_V1_V2_nsa_gfx10, IMAGE_ATOMIC_SMIN, MIMGEncGfx10NSA, 0x1, 0x2 }, // 218
  { IMAGE_ATOMIC_SMIN_V1_V3_nsa_gfx10, IMAGE_ATOMIC_SMIN, MIMGEncGfx10NSA, 0x1, 0x3 }, // 219
  { IMAGE_ATOMIC_SMIN_V1_V4_nsa_gfx10, IMAGE_ATOMIC_SMIN, MIMGEncGfx10NSA, 0x1, 0x4 }, // 220
  { IMAGE_ATOMIC_SMIN_V2_V2_nsa_gfx10, IMAGE_ATOMIC_SMIN, MIMGEncGfx10NSA, 0x2, 0x2 }, // 221
  { IMAGE_ATOMIC_SMIN_V2_V3_nsa_gfx10, IMAGE_ATOMIC_SMIN, MIMGEncGfx10NSA, 0x2, 0x3 }, // 222
  { IMAGE_ATOMIC_SMIN_V2_V4_nsa_gfx10, IMAGE_ATOMIC_SMIN, MIMGEncGfx10NSA, 0x2, 0x4 }, // 223
  { IMAGE_ATOMIC_SMIN_V1_V1_si, IMAGE_ATOMIC_SMIN, MIMGEncGfx6, 0x1, 0x1 }, // 224
  { IMAGE_ATOMIC_SMIN_V1_V2_si, IMAGE_ATOMIC_SMIN, MIMGEncGfx6, 0x1, 0x2 }, // 225
  { IMAGE_ATOMIC_SMIN_V1_V3_si, IMAGE_ATOMIC_SMIN, MIMGEncGfx6, 0x1, 0x3 }, // 226
  { IMAGE_ATOMIC_SMIN_V1_V4_si, IMAGE_ATOMIC_SMIN, MIMGEncGfx6, 0x1, 0x4 }, // 227
  { IMAGE_ATOMIC_SMIN_V2_V1_si, IMAGE_ATOMIC_SMIN, MIMGEncGfx6, 0x2, 0x1 }, // 228
  { IMAGE_ATOMIC_SMIN_V2_V2_si, IMAGE_ATOMIC_SMIN, MIMGEncGfx6, 0x2, 0x2 }, // 229
  { IMAGE_ATOMIC_SMIN_V2_V3_si, IMAGE_ATOMIC_SMIN, MIMGEncGfx6, 0x2, 0x3 }, // 230
  { IMAGE_ATOMIC_SMIN_V2_V4_si, IMAGE_ATOMIC_SMIN, MIMGEncGfx6, 0x2, 0x4 }, // 231
  { IMAGE_ATOMIC_SMIN_V1_V1_vi, IMAGE_ATOMIC_SMIN, MIMGEncGfx8, 0x1, 0x1 }, // 232
  { IMAGE_ATOMIC_SMIN_V1_V2_vi, IMAGE_ATOMIC_SMIN, MIMGEncGfx8, 0x1, 0x2 }, // 233
  { IMAGE_ATOMIC_SMIN_V1_V3_vi, IMAGE_ATOMIC_SMIN, MIMGEncGfx8, 0x1, 0x3 }, // 234
  { IMAGE_ATOMIC_SMIN_V1_V4_vi, IMAGE_ATOMIC_SMIN, MIMGEncGfx8, 0x1, 0x4 }, // 235
  { IMAGE_ATOMIC_SMIN_V2_V1_vi, IMAGE_ATOMIC_SMIN, MIMGEncGfx8, 0x2, 0x1 }, // 236
  { IMAGE_ATOMIC_SMIN_V2_V2_vi, IMAGE_ATOMIC_SMIN, MIMGEncGfx8, 0x2, 0x2 }, // 237
  { IMAGE_ATOMIC_SMIN_V2_V3_vi, IMAGE_ATOMIC_SMIN, MIMGEncGfx8, 0x2, 0x3 }, // 238
  { IMAGE_ATOMIC_SMIN_V2_V4_vi, IMAGE_ATOMIC_SMIN, MIMGEncGfx8, 0x2, 0x4 }, // 239
  { IMAGE_ATOMIC_SUB_V1_V1_gfx10, IMAGE_ATOMIC_SUB, MIMGEncGfx10Default, 0x1, 0x1 }, // 240
  { IMAGE_ATOMIC_SUB_V1_V2_gfx10, IMAGE_ATOMIC_SUB, MIMGEncGfx10Default, 0x1, 0x2 }, // 241
  { IMAGE_ATOMIC_SUB_V1_V3_gfx10, IMAGE_ATOMIC_SUB, MIMGEncGfx10Default, 0x1, 0x3 }, // 242
  { IMAGE_ATOMIC_SUB_V1_V4_gfx10, IMAGE_ATOMIC_SUB, MIMGEncGfx10Default, 0x1, 0x4 }, // 243
  { IMAGE_ATOMIC_SUB_V2_V1_gfx10, IMAGE_ATOMIC_SUB, MIMGEncGfx10Default, 0x2, 0x1 }, // 244
  { IMAGE_ATOMIC_SUB_V2_V2_gfx10, IMAGE_ATOMIC_SUB, MIMGEncGfx10Default, 0x2, 0x2 }, // 245
  { IMAGE_ATOMIC_SUB_V2_V3_gfx10, IMAGE_ATOMIC_SUB, MIMGEncGfx10Default, 0x2, 0x3 }, // 246
  { IMAGE_ATOMIC_SUB_V2_V4_gfx10, IMAGE_ATOMIC_SUB, MIMGEncGfx10Default, 0x2, 0x4 }, // 247
  { IMAGE_ATOMIC_SUB_V1_V2_nsa_gfx10, IMAGE_ATOMIC_SUB, MIMGEncGfx10NSA, 0x1, 0x2 }, // 248
  { IMAGE_ATOMIC_SUB_V1_V3_nsa_gfx10, IMAGE_ATOMIC_SUB, MIMGEncGfx10NSA, 0x1, 0x3 }, // 249
  { IMAGE_ATOMIC_SUB_V1_V4_nsa_gfx10, IMAGE_ATOMIC_SUB, MIMGEncGfx10NSA, 0x1, 0x4 }, // 250
  { IMAGE_ATOMIC_SUB_V2_V2_nsa_gfx10, IMAGE_ATOMIC_SUB, MIMGEncGfx10NSA, 0x2, 0x2 }, // 251
  { IMAGE_ATOMIC_SUB_V2_V3_nsa_gfx10, IMAGE_ATOMIC_SUB, MIMGEncGfx10NSA, 0x2, 0x3 }, // 252
  { IMAGE_ATOMIC_SUB_V2_V4_nsa_gfx10, IMAGE_ATOMIC_SUB, MIMGEncGfx10NSA, 0x2, 0x4 }, // 253
  { IMAGE_ATOMIC_SUB_V1_V1_si, IMAGE_ATOMIC_SUB, MIMGEncGfx6, 0x1, 0x1 }, // 254
  { IMAGE_ATOMIC_SUB_V1_V2_si, IMAGE_ATOMIC_SUB, MIMGEncGfx6, 0x1, 0x2 }, // 255
  { IMAGE_ATOMIC_SUB_V1_V3_si, IMAGE_ATOMIC_SUB, MIMGEncGfx6, 0x1, 0x3 }, // 256
  { IMAGE_ATOMIC_SUB_V1_V4_si, IMAGE_ATOMIC_SUB, MIMGEncGfx6, 0x1, 0x4 }, // 257
  { IMAGE_ATOMIC_SUB_V2_V1_si, IMAGE_ATOMIC_SUB, MIMGEncGfx6, 0x2, 0x1 }, // 258
  { IMAGE_ATOMIC_SUB_V2_V2_si, IMAGE_ATOMIC_SUB, MIMGEncGfx6, 0x2, 0x2 }, // 259
  { IMAGE_ATOMIC_SUB_V2_V3_si, IMAGE_ATOMIC_SUB, MIMGEncGfx6, 0x2, 0x3 }, // 260
  { IMAGE_ATOMIC_SUB_V2_V4_si, IMAGE_ATOMIC_SUB, MIMGEncGfx6, 0x2, 0x4 }, // 261
  { IMAGE_ATOMIC_SUB_V1_V1_vi, IMAGE_ATOMIC_SUB, MIMGEncGfx8, 0x1, 0x1 }, // 262
  { IMAGE_ATOMIC_SUB_V1_V2_vi, IMAGE_ATOMIC_SUB, MIMGEncGfx8, 0x1, 0x2 }, // 263
  { IMAGE_ATOMIC_SUB_V1_V3_vi, IMAGE_ATOMIC_SUB, MIMGEncGfx8, 0x1, 0x3 }, // 264
  { IMAGE_ATOMIC_SUB_V1_V4_vi, IMAGE_ATOMIC_SUB, MIMGEncGfx8, 0x1, 0x4 }, // 265
  { IMAGE_ATOMIC_SUB_V2_V1_vi, IMAGE_ATOMIC_SUB, MIMGEncGfx8, 0x2, 0x1 }, // 266
  { IMAGE_ATOMIC_SUB_V2_V2_vi, IMAGE_ATOMIC_SUB, MIMGEncGfx8, 0x2, 0x2 }, // 267
  { IMAGE_ATOMIC_SUB_V2_V3_vi, IMAGE_ATOMIC_SUB, MIMGEncGfx8, 0x2, 0x3 }, // 268
  { IMAGE_ATOMIC_SUB_V2_V4_vi, IMAGE_ATOMIC_SUB, MIMGEncGfx8, 0x2, 0x4 }, // 269
  { IMAGE_ATOMIC_SWAP_V1_V1_gfx10, IMAGE_ATOMIC_SWAP, MIMGEncGfx10Default, 0x1, 0x1 }, // 270
  { IMAGE_ATOMIC_SWAP_V1_V2_gfx10, IMAGE_ATOMIC_SWAP, MIMGEncGfx10Default, 0x1, 0x2 }, // 271
  { IMAGE_ATOMIC_SWAP_V1_V3_gfx10, IMAGE_ATOMIC_SWAP, MIMGEncGfx10Default, 0x1, 0x3 }, // 272
  { IMAGE_ATOMIC_SWAP_V1_V4_gfx10, IMAGE_ATOMIC_SWAP, MIMGEncGfx10Default, 0x1, 0x4 }, // 273
  { IMAGE_ATOMIC_SWAP_V2_V1_gfx10, IMAGE_ATOMIC_SWAP, MIMGEncGfx10Default, 0x2, 0x1 }, // 274
  { IMAGE_ATOMIC_SWAP_V2_V2_gfx10, IMAGE_ATOMIC_SWAP, MIMGEncGfx10Default, 0x2, 0x2 }, // 275
  { IMAGE_ATOMIC_SWAP_V2_V3_gfx10, IMAGE_ATOMIC_SWAP, MIMGEncGfx10Default, 0x2, 0x3 }, // 276
  { IMAGE_ATOMIC_SWAP_V2_V4_gfx10, IMAGE_ATOMIC_SWAP, MIMGEncGfx10Default, 0x2, 0x4 }, // 277
  { IMAGE_ATOMIC_SWAP_V1_V2_nsa_gfx10, IMAGE_ATOMIC_SWAP, MIMGEncGfx10NSA, 0x1, 0x2 }, // 278
  { IMAGE_ATOMIC_SWAP_V1_V3_nsa_gfx10, IMAGE_ATOMIC_SWAP, MIMGEncGfx10NSA, 0x1, 0x3 }, // 279
  { IMAGE_ATOMIC_SWAP_V1_V4_nsa_gfx10, IMAGE_ATOMIC_SWAP, MIMGEncGfx10NSA, 0x1, 0x4 }, // 280
  { IMAGE_ATOMIC_SWAP_V2_V2_nsa_gfx10, IMAGE_ATOMIC_SWAP, MIMGEncGfx10NSA, 0x2, 0x2 }, // 281
  { IMAGE_ATOMIC_SWAP_V2_V3_nsa_gfx10, IMAGE_ATOMIC_SWAP, MIMGEncGfx10NSA, 0x2, 0x3 }, // 282
  { IMAGE_ATOMIC_SWAP_V2_V4_nsa_gfx10, IMAGE_ATOMIC_SWAP, MIMGEncGfx10NSA, 0x2, 0x4 }, // 283
  { IMAGE_ATOMIC_SWAP_V1_V1_si, IMAGE_ATOMIC_SWAP, MIMGEncGfx6, 0x1, 0x1 }, // 284
  { IMAGE_ATOMIC_SWAP_V1_V2_si, IMAGE_ATOMIC_SWAP, MIMGEncGfx6, 0x1, 0x2 }, // 285
  { IMAGE_ATOMIC_SWAP_V1_V3_si, IMAGE_ATOMIC_SWAP, MIMGEncGfx6, 0x1, 0x3 }, // 286
  { IMAGE_ATOMIC_SWAP_V1_V4_si, IMAGE_ATOMIC_SWAP, MIMGEncGfx6, 0x1, 0x4 }, // 287
  { IMAGE_ATOMIC_SWAP_V2_V1_si, IMAGE_ATOMIC_SWAP, MIMGEncGfx6, 0x2, 0x1 }, // 288
  { IMAGE_ATOMIC_SWAP_V2_V2_si, IMAGE_ATOMIC_SWAP, MIMGEncGfx6, 0x2, 0x2 }, // 289
  { IMAGE_ATOMIC_SWAP_V2_V3_si, IMAGE_ATOMIC_SWAP, MIMGEncGfx6, 0x2, 0x3 }, // 290
  { IMAGE_ATOMIC_SWAP_V2_V4_si, IMAGE_ATOMIC_SWAP, MIMGEncGfx6, 0x2, 0x4 }, // 291
  { IMAGE_ATOMIC_SWAP_V1_V1_vi, IMAGE_ATOMIC_SWAP, MIMGEncGfx8, 0x1, 0x1 }, // 292
  { IMAGE_ATOMIC_SWAP_V1_V2_vi, IMAGE_ATOMIC_SWAP, MIMGEncGfx8, 0x1, 0x2 }, // 293
  { IMAGE_ATOMIC_SWAP_V1_V3_vi, IMAGE_ATOMIC_SWAP, MIMGEncGfx8, 0x1, 0x3 }, // 294
  { IMAGE_ATOMIC_SWAP_V1_V4_vi, IMAGE_ATOMIC_SWAP, MIMGEncGfx8, 0x1, 0x4 }, // 295
  { IMAGE_ATOMIC_SWAP_V2_V1_vi, IMAGE_ATOMIC_SWAP, MIMGEncGfx8, 0x2, 0x1 }, // 296
  { IMAGE_ATOMIC_SWAP_V2_V2_vi, IMAGE_ATOMIC_SWAP, MIMGEncGfx8, 0x2, 0x2 }, // 297
  { IMAGE_ATOMIC_SWAP_V2_V3_vi, IMAGE_ATOMIC_SWAP, MIMGEncGfx8, 0x2, 0x3 }, // 298
  { IMAGE_ATOMIC_SWAP_V2_V4_vi, IMAGE_ATOMIC_SWAP, MIMGEncGfx8, 0x2, 0x4 }, // 299
  { IMAGE_ATOMIC_UMAX_V1_V1_gfx10, IMAGE_ATOMIC_UMAX, MIMGEncGfx10Default, 0x1, 0x1 }, // 300
  { IMAGE_ATOMIC_UMAX_V1_V2_gfx10, IMAGE_ATOMIC_UMAX, MIMGEncGfx10Default, 0x1, 0x2 }, // 301
  { IMAGE_ATOMIC_UMAX_V1_V3_gfx10, IMAGE_ATOMIC_UMAX, MIMGEncGfx10Default, 0x1, 0x3 }, // 302
  { IMAGE_ATOMIC_UMAX_V1_V4_gfx10, IMAGE_ATOMIC_UMAX, MIMGEncGfx10Default, 0x1, 0x4 }, // 303
  { IMAGE_ATOMIC_UMAX_V2_V1_gfx10, IMAGE_ATOMIC_UMAX, MIMGEncGfx10Default, 0x2, 0x1 }, // 304
  { IMAGE_ATOMIC_UMAX_V2_V2_gfx10, IMAGE_ATOMIC_UMAX, MIMGEncGfx10Default, 0x2, 0x2 }, // 305
  { IMAGE_ATOMIC_UMAX_V2_V3_gfx10, IMAGE_ATOMIC_UMAX, MIMGEncGfx10Default, 0x2, 0x3 }, // 306
  { IMAGE_ATOMIC_UMAX_V2_V4_gfx10, IMAGE_ATOMIC_UMAX, MIMGEncGfx10Default, 0x2, 0x4 }, // 307
  { IMAGE_ATOMIC_UMAX_V1_V2_nsa_gfx10, IMAGE_ATOMIC_UMAX, MIMGEncGfx10NSA, 0x1, 0x2 }, // 308
  { IMAGE_ATOMIC_UMAX_V1_V3_nsa_gfx10, IMAGE_ATOMIC_UMAX, MIMGEncGfx10NSA, 0x1, 0x3 }, // 309
  { IMAGE_ATOMIC_UMAX_V1_V4_nsa_gfx10, IMAGE_ATOMIC_UMAX, MIMGEncGfx10NSA, 0x1, 0x4 }, // 310
  { IMAGE_ATOMIC_UMAX_V2_V2_nsa_gfx10, IMAGE_ATOMIC_UMAX, MIMGEncGfx10NSA, 0x2, 0x2 }, // 311
  { IMAGE_ATOMIC_UMAX_V2_V3_nsa_gfx10, IMAGE_ATOMIC_UMAX, MIMGEncGfx10NSA, 0x2, 0x3 }, // 312
  { IMAGE_ATOMIC_UMAX_V2_V4_nsa_gfx10, IMAGE_ATOMIC_UMAX, MIMGEncGfx10NSA, 0x2, 0x4 }, // 313
  { IMAGE_ATOMIC_UMAX_V1_V1_si, IMAGE_ATOMIC_UMAX, MIMGEncGfx6, 0x1, 0x1 }, // 314
  { IMAGE_ATOMIC_UMAX_V1_V2_si, IMAGE_ATOMIC_UMAX, MIMGEncGfx6, 0x1, 0x2 }, // 315
  { IMAGE_ATOMIC_UMAX_V1_V3_si, IMAGE_ATOMIC_UMAX, MIMGEncGfx6, 0x1, 0x3 }, // 316
  { IMAGE_ATOMIC_UMAX_V1_V4_si, IMAGE_ATOMIC_UMAX, MIMGEncGfx6, 0x1, 0x4 }, // 317
  { IMAGE_ATOMIC_UMAX_V2_V1_si, IMAGE_ATOMIC_UMAX, MIMGEncGfx6, 0x2, 0x1 }, // 318
  { IMAGE_ATOMIC_UMAX_V2_V2_si, IMAGE_ATOMIC_UMAX, MIMGEncGfx6, 0x2, 0x2 }, // 319
  { IMAGE_ATOMIC_UMAX_V2_V3_si, IMAGE_ATOMIC_UMAX, MIMGEncGfx6, 0x2, 0x3 }, // 320
  { IMAGE_ATOMIC_UMAX_V2_V4_si, IMAGE_ATOMIC_UMAX, MIMGEncGfx6, 0x2, 0x4 }, // 321
  { IMAGE_ATOMIC_UMAX_V1_V1_vi, IMAGE_ATOMIC_UMAX, MIMGEncGfx8, 0x1, 0x1 }, // 322
  { IMAGE_ATOMIC_UMAX_V1_V2_vi, IMAGE_ATOMIC_UMAX, MIMGEncGfx8, 0x1, 0x2 }, // 323
  { IMAGE_ATOMIC_UMAX_V1_V3_vi, IMAGE_ATOMIC_UMAX, MIMGEncGfx8, 0x1, 0x3 }, // 324
  { IMAGE_ATOMIC_UMAX_V1_V4_vi, IMAGE_ATOMIC_UMAX, MIMGEncGfx8, 0x1, 0x4 }, // 325
  { IMAGE_ATOMIC_UMAX_V2_V1_vi, IMAGE_ATOMIC_UMAX, MIMGEncGfx8, 0x2, 0x1 }, // 326
  { IMAGE_ATOMIC_UMAX_V2_V2_vi, IMAGE_ATOMIC_UMAX, MIMGEncGfx8, 0x2, 0x2 }, // 327
  { IMAGE_ATOMIC_UMAX_V2_V3_vi, IMAGE_ATOMIC_UMAX, MIMGEncGfx8, 0x2, 0x3 }, // 328
  { IMAGE_ATOMIC_UMAX_V2_V4_vi, IMAGE_ATOMIC_UMAX, MIMGEncGfx8, 0x2, 0x4 }, // 329
  { IMAGE_ATOMIC_UMIN_V1_V1_gfx10, IMAGE_ATOMIC_UMIN, MIMGEncGfx10Default, 0x1, 0x1 }, // 330
  { IMAGE_ATOMIC_UMIN_V1_V2_gfx10, IMAGE_ATOMIC_UMIN, MIMGEncGfx10Default, 0x1, 0x2 }, // 331
  { IMAGE_ATOMIC_UMIN_V1_V3_gfx10, IMAGE_ATOMIC_UMIN, MIMGEncGfx10Default, 0x1, 0x3 }, // 332
  { IMAGE_ATOMIC_UMIN_V1_V4_gfx10, IMAGE_ATOMIC_UMIN, MIMGEncGfx10Default, 0x1, 0x4 }, // 333
  { IMAGE_ATOMIC_UMIN_V2_V1_gfx10, IMAGE_ATOMIC_UMIN, MIMGEncGfx10Default, 0x2, 0x1 }, // 334
  { IMAGE_ATOMIC_UMIN_V2_V2_gfx10, IMAGE_ATOMIC_UMIN, MIMGEncGfx10Default, 0x2, 0x2 }, // 335
  { IMAGE_ATOMIC_UMIN_V2_V3_gfx10, IMAGE_ATOMIC_UMIN, MIMGEncGfx10Default, 0x2, 0x3 }, // 336
  { IMAGE_ATOMIC_UMIN_V2_V4_gfx10, IMAGE_ATOMIC_UMIN, MIMGEncGfx10Default, 0x2, 0x4 }, // 337
  { IMAGE_ATOMIC_UMIN_V1_V2_nsa_gfx10, IMAGE_ATOMIC_UMIN, MIMGEncGfx10NSA, 0x1, 0x2 }, // 338
  { IMAGE_ATOMIC_UMIN_V1_V3_nsa_gfx10, IMAGE_ATOMIC_UMIN, MIMGEncGfx10NSA, 0x1, 0x3 }, // 339
  { IMAGE_ATOMIC_UMIN_V1_V4_nsa_gfx10, IMAGE_ATOMIC_UMIN, MIMGEncGfx10NSA, 0x1, 0x4 }, // 340
  { IMAGE_ATOMIC_UMIN_V2_V2_nsa_gfx10, IMAGE_ATOMIC_UMIN, MIMGEncGfx10NSA, 0x2, 0x2 }, // 341
  { IMAGE_ATOMIC_UMIN_V2_V3_nsa_gfx10, IMAGE_ATOMIC_UMIN, MIMGEncGfx10NSA, 0x2, 0x3 }, // 342
  { IMAGE_ATOMIC_UMIN_V2_V4_nsa_gfx10, IMAGE_ATOMIC_UMIN, MIMGEncGfx10NSA, 0x2, 0x4 }, // 343
  { IMAGE_ATOMIC_UMIN_V1_V1_si, IMAGE_ATOMIC_UMIN, MIMGEncGfx6, 0x1, 0x1 }, // 344
  { IMAGE_ATOMIC_UMIN_V1_V2_si, IMAGE_ATOMIC_UMIN, MIMGEncGfx6, 0x1, 0x2 }, // 345
  { IMAGE_ATOMIC_UMIN_V1_V3_si, IMAGE_ATOMIC_UMIN, MIMGEncGfx6, 0x1, 0x3 }, // 346
  { IMAGE_ATOMIC_UMIN_V1_V4_si, IMAGE_ATOMIC_UMIN, MIMGEncGfx6, 0x1, 0x4 }, // 347
  { IMAGE_ATOMIC_UMIN_V2_V1_si, IMAGE_ATOMIC_UMIN, MIMGEncGfx6, 0x2, 0x1 }, // 348
  { IMAGE_ATOMIC_UMIN_V2_V2_si, IMAGE_ATOMIC_UMIN, MIMGEncGfx6, 0x2, 0x2 }, // 349
  { IMAGE_ATOMIC_UMIN_V2_V3_si, IMAGE_ATOMIC_UMIN, MIMGEncGfx6, 0x2, 0x3 }, // 350
  { IMAGE_ATOMIC_UMIN_V2_V4_si, IMAGE_ATOMIC_UMIN, MIMGEncGfx6, 0x2, 0x4 }, // 351
  { IMAGE_ATOMIC_UMIN_V1_V1_vi, IMAGE_ATOMIC_UMIN, MIMGEncGfx8, 0x1, 0x1 }, // 352
  { IMAGE_ATOMIC_UMIN_V1_V2_vi, IMAGE_ATOMIC_UMIN, MIMGEncGfx8, 0x1, 0x2 }, // 353
  { IMAGE_ATOMIC_UMIN_V1_V3_vi, IMAGE_ATOMIC_UMIN, MIMGEncGfx8, 0x1, 0x3 }, // 354
  { IMAGE_ATOMIC_UMIN_V1_V4_vi, IMAGE_ATOMIC_UMIN, MIMGEncGfx8, 0x1, 0x4 }, // 355
  { IMAGE_ATOMIC_UMIN_V2_V1_vi, IMAGE_ATOMIC_UMIN, MIMGEncGfx8, 0x2, 0x1 }, // 356
  { IMAGE_ATOMIC_UMIN_V2_V2_vi, IMAGE_ATOMIC_UMIN, MIMGEncGfx8, 0x2, 0x2 }, // 357
  { IMAGE_ATOMIC_UMIN_V2_V3_vi, IMAGE_ATOMIC_UMIN, MIMGEncGfx8, 0x2, 0x3 }, // 358
  { IMAGE_ATOMIC_UMIN_V2_V4_vi, IMAGE_ATOMIC_UMIN, MIMGEncGfx8, 0x2, 0x4 }, // 359
  { IMAGE_ATOMIC_XOR_V1_V1_gfx10, IMAGE_ATOMIC_XOR, MIMGEncGfx10Default, 0x1, 0x1 }, // 360
  { IMAGE_ATOMIC_XOR_V1_V2_gfx10, IMAGE_ATOMIC_XOR, MIMGEncGfx10Default, 0x1, 0x2 }, // 361
  { IMAGE_ATOMIC_XOR_V1_V3_gfx10, IMAGE_ATOMIC_XOR, MIMGEncGfx10Default, 0x1, 0x3 }, // 362
  { IMAGE_ATOMIC_XOR_V1_V4_gfx10, IMAGE_ATOMIC_XOR, MIMGEncGfx10Default, 0x1, 0x4 }, // 363
  { IMAGE_ATOMIC_XOR_V2_V1_gfx10, IMAGE_ATOMIC_XOR, MIMGEncGfx10Default, 0x2, 0x1 }, // 364
  { IMAGE_ATOMIC_XOR_V2_V2_gfx10, IMAGE_ATOMIC_XOR, MIMGEncGfx10Default, 0x2, 0x2 }, // 365
  { IMAGE_ATOMIC_XOR_V2_V3_gfx10, IMAGE_ATOMIC_XOR, MIMGEncGfx10Default, 0x2, 0x3 }, // 366
  { IMAGE_ATOMIC_XOR_V2_V4_gfx10, IMAGE_ATOMIC_XOR, MIMGEncGfx10Default, 0x2, 0x4 }, // 367
  { IMAGE_ATOMIC_XOR_V1_V2_nsa_gfx10, IMAGE_ATOMIC_XOR, MIMGEncGfx10NSA, 0x1, 0x2 }, // 368
  { IMAGE_ATOMIC_XOR_V1_V3_nsa_gfx10, IMAGE_ATOMIC_XOR, MIMGEncGfx10NSA, 0x1, 0x3 }, // 369
  { IMAGE_ATOMIC_XOR_V1_V4_nsa_gfx10, IMAGE_ATOMIC_XOR, MIMGEncGfx10NSA, 0x1, 0x4 }, // 370
  { IMAGE_ATOMIC_XOR_V2_V2_nsa_gfx10, IMAGE_ATOMIC_XOR, MIMGEncGfx10NSA, 0x2, 0x2 }, // 371
  { IMAGE_ATOMIC_XOR_V2_V3_nsa_gfx10, IMAGE_ATOMIC_XOR, MIMGEncGfx10NSA, 0x2, 0x3 }, // 372
  { IMAGE_ATOMIC_XOR_V2_V4_nsa_gfx10, IMAGE_ATOMIC_XOR, MIMGEncGfx10NSA, 0x2, 0x4 }, // 373
  { IMAGE_ATOMIC_XOR_V1_V1_si, IMAGE_ATOMIC_XOR, MIMGEncGfx6, 0x1, 0x1 }, // 374
  { IMAGE_ATOMIC_XOR_V1_V2_si, IMAGE_ATOMIC_XOR, MIMGEncGfx6, 0x1, 0x2 }, // 375
  { IMAGE_ATOMIC_XOR_V1_V3_si, IMAGE_ATOMIC_XOR, MIMGEncGfx6, 0x1, 0x3 }, // 376
  { IMAGE_ATOMIC_XOR_V1_V4_si, IMAGE_ATOMIC_XOR, MIMGEncGfx6, 0x1, 0x4 }, // 377
  { IMAGE_ATOMIC_XOR_V2_V1_si, IMAGE_ATOMIC_XOR, MIMGEncGfx6, 0x2, 0x1 }, // 378
  { IMAGE_ATOMIC_XOR_V2_V2_si, IMAGE_ATOMIC_XOR, MIMGEncGfx6, 0x2, 0x2 }, // 379
  { IMAGE_ATOMIC_XOR_V2_V3_si, IMAGE_ATOMIC_XOR, MIMGEncGfx6, 0x2, 0x3 }, // 380
  { IMAGE_ATOMIC_XOR_V2_V4_si, IMAGE_ATOMIC_XOR, MIMGEncGfx6, 0x2, 0x4 }, // 381
  { IMAGE_ATOMIC_XOR_V1_V1_vi, IMAGE_ATOMIC_XOR, MIMGEncGfx8, 0x1, 0x1 }, // 382
  { IMAGE_ATOMIC_XOR_V1_V2_vi, IMAGE_ATOMIC_XOR, MIMGEncGfx8, 0x1, 0x2 }, // 383
  { IMAGE_ATOMIC_XOR_V1_V3_vi, IMAGE_ATOMIC_XOR, MIMGEncGfx8, 0x1, 0x3 }, // 384
  { IMAGE_ATOMIC_XOR_V1_V4_vi, IMAGE_ATOMIC_XOR, MIMGEncGfx8, 0x1, 0x4 }, // 385
  { IMAGE_ATOMIC_XOR_V2_V1_vi, IMAGE_ATOMIC_XOR, MIMGEncGfx8, 0x2, 0x1 }, // 386
  { IMAGE_ATOMIC_XOR_V2_V2_vi, IMAGE_ATOMIC_XOR, MIMGEncGfx8, 0x2, 0x2 }, // 387
  { IMAGE_ATOMIC_XOR_V2_V3_vi, IMAGE_ATOMIC_XOR, MIMGEncGfx8, 0x2, 0x3 }, // 388
  { IMAGE_ATOMIC_XOR_V2_V4_vi, IMAGE_ATOMIC_XOR, MIMGEncGfx8, 0x2, 0x4 }, // 389
  { IMAGE_GATHER4_V2_V1_gfx10, IMAGE_GATHER4, MIMGEncGfx10Default, 0x2, 0x1 }, // 390
  { IMAGE_GATHER4_V2_V2_gfx10, IMAGE_GATHER4, MIMGEncGfx10Default, 0x2, 0x2 }, // 391
  { IMAGE_GATHER4_V2_V3_gfx10, IMAGE_GATHER4, MIMGEncGfx10Default, 0x2, 0x3 }, // 392
  { IMAGE_GATHER4_V2_V4_gfx10, IMAGE_GATHER4, MIMGEncGfx10Default, 0x2, 0x4 }, // 393
  { IMAGE_GATHER4_V4_V1_gfx10, IMAGE_GATHER4, MIMGEncGfx10Default, 0x4, 0x1 }, // 394
  { IMAGE_GATHER4_V4_V2_gfx10, IMAGE_GATHER4, MIMGEncGfx10Default, 0x4, 0x2 }, // 395
  { IMAGE_GATHER4_V4_V3_gfx10, IMAGE_GATHER4, MIMGEncGfx10Default, 0x4, 0x3 }, // 396
  { IMAGE_GATHER4_V4_V4_gfx10, IMAGE_GATHER4, MIMGEncGfx10Default, 0x4, 0x4 }, // 397
  { IMAGE_GATHER4_V5_V1_gfx10, IMAGE_GATHER4, MIMGEncGfx10Default, 0x5, 0x1 }, // 398
  { IMAGE_GATHER4_V5_V2_gfx10, IMAGE_GATHER4, MIMGEncGfx10Default, 0x5, 0x2 }, // 399
  { IMAGE_GATHER4_V5_V3_gfx10, IMAGE_GATHER4, MIMGEncGfx10Default, 0x5, 0x3 }, // 400
  { IMAGE_GATHER4_V5_V4_gfx10, IMAGE_GATHER4, MIMGEncGfx10Default, 0x5, 0x4 }, // 401
  { IMAGE_GATHER4_V2_V2_nsa_gfx10, IMAGE_GATHER4, MIMGEncGfx10NSA, 0x2, 0x2 }, // 402
  { IMAGE_GATHER4_V2_V3_nsa_gfx10, IMAGE_GATHER4, MIMGEncGfx10NSA, 0x2, 0x3 }, // 403
  { IMAGE_GATHER4_V4_V2_nsa_gfx10, IMAGE_GATHER4, MIMGEncGfx10NSA, 0x4, 0x2 }, // 404
  { IMAGE_GATHER4_V4_V3_nsa_gfx10, IMAGE_GATHER4, MIMGEncGfx10NSA, 0x4, 0x3 }, // 405
  { IMAGE_GATHER4_V5_V2_nsa_gfx10, IMAGE_GATHER4, MIMGEncGfx10NSA, 0x5, 0x2 }, // 406
  { IMAGE_GATHER4_V5_V3_nsa_gfx10, IMAGE_GATHER4, MIMGEncGfx10NSA, 0x5, 0x3 }, // 407
  { IMAGE_GATHER4_V2_V1, IMAGE_GATHER4, MIMGEncGfx6, 0x2, 0x1 }, // 408
  { IMAGE_GATHER4_V2_V2, IMAGE_GATHER4, MIMGEncGfx6, 0x2, 0x2 }, // 409
  { IMAGE_GATHER4_V2_V3, IMAGE_GATHER4, MIMGEncGfx6, 0x2, 0x3 }, // 410
  { IMAGE_GATHER4_V2_V4, IMAGE_GATHER4, MIMGEncGfx6, 0x2, 0x4 }, // 411
  { IMAGE_GATHER4_V4_V1, IMAGE_GATHER4, MIMGEncGfx6, 0x4, 0x1 }, // 412
  { IMAGE_GATHER4_V4_V2, IMAGE_GATHER4, MIMGEncGfx6, 0x4, 0x2 }, // 413
  { IMAGE_GATHER4_V4_V3, IMAGE_GATHER4, MIMGEncGfx6, 0x4, 0x3 }, // 414
  { IMAGE_GATHER4_V4_V4, IMAGE_GATHER4, MIMGEncGfx6, 0x4, 0x4 }, // 415
  { IMAGE_GATHER4_V5_V1, IMAGE_GATHER4, MIMGEncGfx6, 0x5, 0x1 }, // 416
  { IMAGE_GATHER4_V5_V2, IMAGE_GATHER4, MIMGEncGfx6, 0x5, 0x2 }, // 417
  { IMAGE_GATHER4_V5_V3, IMAGE_GATHER4, MIMGEncGfx6, 0x5, 0x3 }, // 418
  { IMAGE_GATHER4_V5_V4, IMAGE_GATHER4, MIMGEncGfx6, 0x5, 0x4 }, // 419
  { IMAGE_GATHER4_B_V2_V2_gfx10, IMAGE_GATHER4_B, MIMGEncGfx10Default, 0x2, 0x2 }, // 420
  { IMAGE_GATHER4_B_V2_V3_gfx10, IMAGE_GATHER4_B, MIMGEncGfx10Default, 0x2, 0x3 }, // 421
  { IMAGE_GATHER4_B_V2_V4_gfx10, IMAGE_GATHER4_B, MIMGEncGfx10Default, 0x2, 0x4 }, // 422
  { IMAGE_GATHER4_B_V4_V2_gfx10, IMAGE_GATHER4_B, MIMGEncGfx10Default, 0x4, 0x2 }, // 423
  { IMAGE_GATHER4_B_V4_V3_gfx10, IMAGE_GATHER4_B, MIMGEncGfx10Default, 0x4, 0x3 }, // 424
  { IMAGE_GATHER4_B_V4_V4_gfx10, IMAGE_GATHER4_B, MIMGEncGfx10Default, 0x4, 0x4 }, // 425
  { IMAGE_GATHER4_B_V5_V2_gfx10, IMAGE_GATHER4_B, MIMGEncGfx10Default, 0x5, 0x2 }, // 426
  { IMAGE_GATHER4_B_V5_V3_gfx10, IMAGE_GATHER4_B, MIMGEncGfx10Default, 0x5, 0x3 }, // 427
  { IMAGE_GATHER4_B_V5_V4_gfx10, IMAGE_GATHER4_B, MIMGEncGfx10Default, 0x5, 0x4 }, // 428
  { IMAGE_GATHER4_B_V2_V2_nsa_gfx10, IMAGE_GATHER4_B, MIMGEncGfx10NSA, 0x2, 0x2 }, // 429
  { IMAGE_GATHER4_B_V2_V3_nsa_gfx10, IMAGE_GATHER4_B, MIMGEncGfx10NSA, 0x2, 0x3 }, // 430
  { IMAGE_GATHER4_B_V2_V4_nsa_gfx10, IMAGE_GATHER4_B, MIMGEncGfx10NSA, 0x2, 0x4 }, // 431
  { IMAGE_GATHER4_B_V4_V2_nsa_gfx10, IMAGE_GATHER4_B, MIMGEncGfx10NSA, 0x4, 0x2 }, // 432
  { IMAGE_GATHER4_B_V4_V3_nsa_gfx10, IMAGE_GATHER4_B, MIMGEncGfx10NSA, 0x4, 0x3 }, // 433
  { IMAGE_GATHER4_B_V4_V4_nsa_gfx10, IMAGE_GATHER4_B, MIMGEncGfx10NSA, 0x4, 0x4 }, // 434
  { IMAGE_GATHER4_B_V5_V2_nsa_gfx10, IMAGE_GATHER4_B, MIMGEncGfx10NSA, 0x5, 0x2 }, // 435
  { IMAGE_GATHER4_B_V5_V3_nsa_gfx10, IMAGE_GATHER4_B, MIMGEncGfx10NSA, 0x5, 0x3 }, // 436
  { IMAGE_GATHER4_B_V5_V4_nsa_gfx10, IMAGE_GATHER4_B, MIMGEncGfx10NSA, 0x5, 0x4 }, // 437
  { IMAGE_GATHER4_B_V2_V2, IMAGE_GATHER4_B, MIMGEncGfx6, 0x2, 0x2 }, // 438
  { IMAGE_GATHER4_B_V2_V3, IMAGE_GATHER4_B, MIMGEncGfx6, 0x2, 0x3 }, // 439
  { IMAGE_GATHER4_B_V2_V4, IMAGE_GATHER4_B, MIMGEncGfx6, 0x2, 0x4 }, // 440
  { IMAGE_GATHER4_B_V4_V2, IMAGE_GATHER4_B, MIMGEncGfx6, 0x4, 0x2 }, // 441
  { IMAGE_GATHER4_B_V4_V3, IMAGE_GATHER4_B, MIMGEncGfx6, 0x4, 0x3 }, // 442
  { IMAGE_GATHER4_B_V4_V4, IMAGE_GATHER4_B, MIMGEncGfx6, 0x4, 0x4 }, // 443
  { IMAGE_GATHER4_B_V5_V2, IMAGE_GATHER4_B, MIMGEncGfx6, 0x5, 0x2 }, // 444
  { IMAGE_GATHER4_B_V5_V3, IMAGE_GATHER4_B, MIMGEncGfx6, 0x5, 0x3 }, // 445
  { IMAGE_GATHER4_B_V5_V4, IMAGE_GATHER4_B, MIMGEncGfx6, 0x5, 0x4 }, // 446
  { IMAGE_GATHER4_B_CL_V2_V2_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10Default, 0x2, 0x2 }, // 447
  { IMAGE_GATHER4_B_CL_V2_V3_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10Default, 0x2, 0x3 }, // 448
  { IMAGE_GATHER4_B_CL_V2_V4_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10Default, 0x2, 0x4 }, // 449
  { IMAGE_GATHER4_B_CL_V2_V8_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10Default, 0x2, 0x8 }, // 450
  { IMAGE_GATHER4_B_CL_V4_V2_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10Default, 0x4, 0x2 }, // 451
  { IMAGE_GATHER4_B_CL_V4_V3_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10Default, 0x4, 0x3 }, // 452
  { IMAGE_GATHER4_B_CL_V4_V4_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10Default, 0x4, 0x4 }, // 453
  { IMAGE_GATHER4_B_CL_V4_V8_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10Default, 0x4, 0x8 }, // 454
  { IMAGE_GATHER4_B_CL_V5_V2_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10Default, 0x5, 0x2 }, // 455
  { IMAGE_GATHER4_B_CL_V5_V3_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10Default, 0x5, 0x3 }, // 456
  { IMAGE_GATHER4_B_CL_V5_V4_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10Default, 0x5, 0x4 }, // 457
  { IMAGE_GATHER4_B_CL_V5_V8_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10Default, 0x5, 0x8 }, // 458
  { IMAGE_GATHER4_B_CL_V2_V2_nsa_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10NSA, 0x2, 0x2 }, // 459
  { IMAGE_GATHER4_B_CL_V2_V3_nsa_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10NSA, 0x2, 0x3 }, // 460
  { IMAGE_GATHER4_B_CL_V2_V4_nsa_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10NSA, 0x2, 0x4 }, // 461
  { IMAGE_GATHER4_B_CL_V2_V5_nsa_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10NSA, 0x2, 0x5 }, // 462
  { IMAGE_GATHER4_B_CL_V4_V2_nsa_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10NSA, 0x4, 0x2 }, // 463
  { IMAGE_GATHER4_B_CL_V4_V3_nsa_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10NSA, 0x4, 0x3 }, // 464
  { IMAGE_GATHER4_B_CL_V4_V4_nsa_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10NSA, 0x4, 0x4 }, // 465
  { IMAGE_GATHER4_B_CL_V4_V5_nsa_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10NSA, 0x4, 0x5 }, // 466
  { IMAGE_GATHER4_B_CL_V5_V2_nsa_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10NSA, 0x5, 0x2 }, // 467
  { IMAGE_GATHER4_B_CL_V5_V3_nsa_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10NSA, 0x5, 0x3 }, // 468
  { IMAGE_GATHER4_B_CL_V5_V4_nsa_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10NSA, 0x5, 0x4 }, // 469
  { IMAGE_GATHER4_B_CL_V5_V5_nsa_gfx10, IMAGE_GATHER4_B_CL, MIMGEncGfx10NSA, 0x5, 0x5 }, // 470
  { IMAGE_GATHER4_B_CL_V2_V2, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x2, 0x2 }, // 471
  { IMAGE_GATHER4_B_CL_V2_V3, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x2, 0x3 }, // 472
  { IMAGE_GATHER4_B_CL_V2_V4, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x2, 0x4 }, // 473
  { IMAGE_GATHER4_B_CL_V2_V8, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x2, 0x8 }, // 474
  { IMAGE_GATHER4_B_CL_V4_V2, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x4, 0x2 }, // 475
  { IMAGE_GATHER4_B_CL_V4_V3, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x4, 0x3 }, // 476
  { IMAGE_GATHER4_B_CL_V4_V4, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x4, 0x4 }, // 477
  { IMAGE_GATHER4_B_CL_V4_V8, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x4, 0x8 }, // 478
  { IMAGE_GATHER4_B_CL_V5_V2, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x5, 0x2 }, // 479
  { IMAGE_GATHER4_B_CL_V5_V3, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x5, 0x3 }, // 480
  { IMAGE_GATHER4_B_CL_V5_V4, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x5, 0x4 }, // 481
  { IMAGE_GATHER4_B_CL_V5_V8, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x5, 0x8 }, // 482
  { IMAGE_GATHER4_B_CL_O_V2_V3_gfx10, IMAGE_GATHER4_B_CL_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 483
  { IMAGE_GATHER4_B_CL_O_V2_V4_gfx10, IMAGE_GATHER4_B_CL_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 484
  { IMAGE_GATHER4_B_CL_O_V2_V8_gfx10, IMAGE_GATHER4_B_CL_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 485
  { IMAGE_GATHER4_B_CL_O_V4_V3_gfx10, IMAGE_GATHER4_B_CL_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 486
  { IMAGE_GATHER4_B_CL_O_V4_V4_gfx10, IMAGE_GATHER4_B_CL_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 487
  { IMAGE_GATHER4_B_CL_O_V4_V8_gfx10, IMAGE_GATHER4_B_CL_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 488
  { IMAGE_GATHER4_B_CL_O_V5_V3_gfx10, IMAGE_GATHER4_B_CL_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 489
  { IMAGE_GATHER4_B_CL_O_V5_V4_gfx10, IMAGE_GATHER4_B_CL_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 490
  { IMAGE_GATHER4_B_CL_O_V5_V8_gfx10, IMAGE_GATHER4_B_CL_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 491
  { IMAGE_GATHER4_B_CL_O_V2_V3_nsa_gfx10, IMAGE_GATHER4_B_CL_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 492
  { IMAGE_GATHER4_B_CL_O_V2_V4_nsa_gfx10, IMAGE_GATHER4_B_CL_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 493
  { IMAGE_GATHER4_B_CL_O_V2_V5_nsa_gfx10, IMAGE_GATHER4_B_CL_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 494
  { IMAGE_GATHER4_B_CL_O_V2_V6_nsa_gfx10, IMAGE_GATHER4_B_CL_O, MIMGEncGfx10NSA, 0x2, 0x6 }, // 495
  { IMAGE_GATHER4_B_CL_O_V4_V3_nsa_gfx10, IMAGE_GATHER4_B_CL_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 496
  { IMAGE_GATHER4_B_CL_O_V4_V4_nsa_gfx10, IMAGE_GATHER4_B_CL_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 497
  { IMAGE_GATHER4_B_CL_O_V4_V5_nsa_gfx10, IMAGE_GATHER4_B_CL_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 498
  { IMAGE_GATHER4_B_CL_O_V4_V6_nsa_gfx10, IMAGE_GATHER4_B_CL_O, MIMGEncGfx10NSA, 0x4, 0x6 }, // 499
  { IMAGE_GATHER4_B_CL_O_V5_V3_nsa_gfx10, IMAGE_GATHER4_B_CL_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 500
  { IMAGE_GATHER4_B_CL_O_V5_V4_nsa_gfx10, IMAGE_GATHER4_B_CL_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 501
  { IMAGE_GATHER4_B_CL_O_V5_V5_nsa_gfx10, IMAGE_GATHER4_B_CL_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 502
  { IMAGE_GATHER4_B_CL_O_V5_V6_nsa_gfx10, IMAGE_GATHER4_B_CL_O, MIMGEncGfx10NSA, 0x5, 0x6 }, // 503
  { IMAGE_GATHER4_B_CL_O_V2_V3, IMAGE_GATHER4_B_CL_O, MIMGEncGfx6, 0x2, 0x3 }, // 504
  { IMAGE_GATHER4_B_CL_O_V2_V4, IMAGE_GATHER4_B_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 505
  { IMAGE_GATHER4_B_CL_O_V2_V8, IMAGE_GATHER4_B_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 506
  { IMAGE_GATHER4_B_CL_O_V4_V3, IMAGE_GATHER4_B_CL_O, MIMGEncGfx6, 0x4, 0x3 }, // 507
  { IMAGE_GATHER4_B_CL_O_V4_V4, IMAGE_GATHER4_B_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 508
  { IMAGE_GATHER4_B_CL_O_V4_V8, IMAGE_GATHER4_B_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 509
  { IMAGE_GATHER4_B_CL_O_V5_V3, IMAGE_GATHER4_B_CL_O, MIMGEncGfx6, 0x5, 0x3 }, // 510
  { IMAGE_GATHER4_B_CL_O_V5_V4, IMAGE_GATHER4_B_CL_O, MIMGEncGfx6, 0x5, 0x4 }, // 511
  { IMAGE_GATHER4_B_CL_O_V5_V8, IMAGE_GATHER4_B_CL_O, MIMGEncGfx6, 0x5, 0x8 }, // 512
  { IMAGE_GATHER4_B_O_V2_V3_gfx10, IMAGE_GATHER4_B_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 513
  { IMAGE_GATHER4_B_O_V2_V4_gfx10, IMAGE_GATHER4_B_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 514
  { IMAGE_GATHER4_B_O_V2_V8_gfx10, IMAGE_GATHER4_B_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 515
  { IMAGE_GATHER4_B_O_V4_V3_gfx10, IMAGE_GATHER4_B_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 516
  { IMAGE_GATHER4_B_O_V4_V4_gfx10, IMAGE_GATHER4_B_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 517
  { IMAGE_GATHER4_B_O_V4_V8_gfx10, IMAGE_GATHER4_B_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 518
  { IMAGE_GATHER4_B_O_V5_V3_gfx10, IMAGE_GATHER4_B_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 519
  { IMAGE_GATHER4_B_O_V5_V4_gfx10, IMAGE_GATHER4_B_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 520
  { IMAGE_GATHER4_B_O_V5_V8_gfx10, IMAGE_GATHER4_B_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 521
  { IMAGE_GATHER4_B_O_V2_V3_nsa_gfx10, IMAGE_GATHER4_B_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 522
  { IMAGE_GATHER4_B_O_V2_V4_nsa_gfx10, IMAGE_GATHER4_B_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 523
  { IMAGE_GATHER4_B_O_V2_V5_nsa_gfx10, IMAGE_GATHER4_B_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 524
  { IMAGE_GATHER4_B_O_V4_V3_nsa_gfx10, IMAGE_GATHER4_B_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 525
  { IMAGE_GATHER4_B_O_V4_V4_nsa_gfx10, IMAGE_GATHER4_B_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 526
  { IMAGE_GATHER4_B_O_V4_V5_nsa_gfx10, IMAGE_GATHER4_B_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 527
  { IMAGE_GATHER4_B_O_V5_V3_nsa_gfx10, IMAGE_GATHER4_B_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 528
  { IMAGE_GATHER4_B_O_V5_V4_nsa_gfx10, IMAGE_GATHER4_B_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 529
  { IMAGE_GATHER4_B_O_V5_V5_nsa_gfx10, IMAGE_GATHER4_B_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 530
  { IMAGE_GATHER4_B_O_V2_V3, IMAGE_GATHER4_B_O, MIMGEncGfx6, 0x2, 0x3 }, // 531
  { IMAGE_GATHER4_B_O_V2_V4, IMAGE_GATHER4_B_O, MIMGEncGfx6, 0x2, 0x4 }, // 532
  { IMAGE_GATHER4_B_O_V2_V8, IMAGE_GATHER4_B_O, MIMGEncGfx6, 0x2, 0x8 }, // 533
  { IMAGE_GATHER4_B_O_V4_V3, IMAGE_GATHER4_B_O, MIMGEncGfx6, 0x4, 0x3 }, // 534
  { IMAGE_GATHER4_B_O_V4_V4, IMAGE_GATHER4_B_O, MIMGEncGfx6, 0x4, 0x4 }, // 535
  { IMAGE_GATHER4_B_O_V4_V8, IMAGE_GATHER4_B_O, MIMGEncGfx6, 0x4, 0x8 }, // 536
  { IMAGE_GATHER4_B_O_V5_V3, IMAGE_GATHER4_B_O, MIMGEncGfx6, 0x5, 0x3 }, // 537
  { IMAGE_GATHER4_B_O_V5_V4, IMAGE_GATHER4_B_O, MIMGEncGfx6, 0x5, 0x4 }, // 538
  { IMAGE_GATHER4_B_O_V5_V8, IMAGE_GATHER4_B_O, MIMGEncGfx6, 0x5, 0x8 }, // 539
  { IMAGE_GATHER4_C_V2_V2_gfx10, IMAGE_GATHER4_C, MIMGEncGfx10Default, 0x2, 0x2 }, // 540
  { IMAGE_GATHER4_C_V2_V3_gfx10, IMAGE_GATHER4_C, MIMGEncGfx10Default, 0x2, 0x3 }, // 541
  { IMAGE_GATHER4_C_V2_V4_gfx10, IMAGE_GATHER4_C, MIMGEncGfx10Default, 0x2, 0x4 }, // 542
  { IMAGE_GATHER4_C_V4_V2_gfx10, IMAGE_GATHER4_C, MIMGEncGfx10Default, 0x4, 0x2 }, // 543
  { IMAGE_GATHER4_C_V4_V3_gfx10, IMAGE_GATHER4_C, MIMGEncGfx10Default, 0x4, 0x3 }, // 544
  { IMAGE_GATHER4_C_V4_V4_gfx10, IMAGE_GATHER4_C, MIMGEncGfx10Default, 0x4, 0x4 }, // 545
  { IMAGE_GATHER4_C_V5_V2_gfx10, IMAGE_GATHER4_C, MIMGEncGfx10Default, 0x5, 0x2 }, // 546
  { IMAGE_GATHER4_C_V5_V3_gfx10, IMAGE_GATHER4_C, MIMGEncGfx10Default, 0x5, 0x3 }, // 547
  { IMAGE_GATHER4_C_V5_V4_gfx10, IMAGE_GATHER4_C, MIMGEncGfx10Default, 0x5, 0x4 }, // 548
  { IMAGE_GATHER4_C_V2_V2_nsa_gfx10, IMAGE_GATHER4_C, MIMGEncGfx10NSA, 0x2, 0x2 }, // 549
  { IMAGE_GATHER4_C_V2_V3_nsa_gfx10, IMAGE_GATHER4_C, MIMGEncGfx10NSA, 0x2, 0x3 }, // 550
  { IMAGE_GATHER4_C_V2_V4_nsa_gfx10, IMAGE_GATHER4_C, MIMGEncGfx10NSA, 0x2, 0x4 }, // 551
  { IMAGE_GATHER4_C_V4_V2_nsa_gfx10, IMAGE_GATHER4_C, MIMGEncGfx10NSA, 0x4, 0x2 }, // 552
  { IMAGE_GATHER4_C_V4_V3_nsa_gfx10, IMAGE_GATHER4_C, MIMGEncGfx10NSA, 0x4, 0x3 }, // 553
  { IMAGE_GATHER4_C_V4_V4_nsa_gfx10, IMAGE_GATHER4_C, MIMGEncGfx10NSA, 0x4, 0x4 }, // 554
  { IMAGE_GATHER4_C_V5_V2_nsa_gfx10, IMAGE_GATHER4_C, MIMGEncGfx10NSA, 0x5, 0x2 }, // 555
  { IMAGE_GATHER4_C_V5_V3_nsa_gfx10, IMAGE_GATHER4_C, MIMGEncGfx10NSA, 0x5, 0x3 }, // 556
  { IMAGE_GATHER4_C_V5_V4_nsa_gfx10, IMAGE_GATHER4_C, MIMGEncGfx10NSA, 0x5, 0x4 }, // 557
  { IMAGE_GATHER4_C_V2_V2, IMAGE_GATHER4_C, MIMGEncGfx6, 0x2, 0x2 }, // 558
  { IMAGE_GATHER4_C_V2_V3, IMAGE_GATHER4_C, MIMGEncGfx6, 0x2, 0x3 }, // 559
  { IMAGE_GATHER4_C_V2_V4, IMAGE_GATHER4_C, MIMGEncGfx6, 0x2, 0x4 }, // 560
  { IMAGE_GATHER4_C_V4_V2, IMAGE_GATHER4_C, MIMGEncGfx6, 0x4, 0x2 }, // 561
  { IMAGE_GATHER4_C_V4_V3, IMAGE_GATHER4_C, MIMGEncGfx6, 0x4, 0x3 }, // 562
  { IMAGE_GATHER4_C_V4_V4, IMAGE_GATHER4_C, MIMGEncGfx6, 0x4, 0x4 }, // 563
  { IMAGE_GATHER4_C_V5_V2, IMAGE_GATHER4_C, MIMGEncGfx6, 0x5, 0x2 }, // 564
  { IMAGE_GATHER4_C_V5_V3, IMAGE_GATHER4_C, MIMGEncGfx6, 0x5, 0x3 }, // 565
  { IMAGE_GATHER4_C_V5_V4, IMAGE_GATHER4_C, MIMGEncGfx6, 0x5, 0x4 }, // 566
  { IMAGE_GATHER4_CL_V2_V1_gfx10, IMAGE_GATHER4_CL, MIMGEncGfx10Default, 0x2, 0x1 }, // 567
  { IMAGE_GATHER4_CL_V2_V2_gfx10, IMAGE_GATHER4_CL, MIMGEncGfx10Default, 0x2, 0x2 }, // 568
  { IMAGE_GATHER4_CL_V2_V3_gfx10, IMAGE_GATHER4_CL, MIMGEncGfx10Default, 0x2, 0x3 }, // 569
  { IMAGE_GATHER4_CL_V2_V4_gfx10, IMAGE_GATHER4_CL, MIMGEncGfx10Default, 0x2, 0x4 }, // 570
  { IMAGE_GATHER4_CL_V4_V1_gfx10, IMAGE_GATHER4_CL, MIMGEncGfx10Default, 0x4, 0x1 }, // 571
  { IMAGE_GATHER4_CL_V4_V2_gfx10, IMAGE_GATHER4_CL, MIMGEncGfx10Default, 0x4, 0x2 }, // 572
  { IMAGE_GATHER4_CL_V4_V3_gfx10, IMAGE_GATHER4_CL, MIMGEncGfx10Default, 0x4, 0x3 }, // 573
  { IMAGE_GATHER4_CL_V4_V4_gfx10, IMAGE_GATHER4_CL, MIMGEncGfx10Default, 0x4, 0x4 }, // 574
  { IMAGE_GATHER4_CL_V5_V1_gfx10, IMAGE_GATHER4_CL, MIMGEncGfx10Default, 0x5, 0x1 }, // 575
  { IMAGE_GATHER4_CL_V5_V2_gfx10, IMAGE_GATHER4_CL, MIMGEncGfx10Default, 0x5, 0x2 }, // 576
  { IMAGE_GATHER4_CL_V5_V3_gfx10, IMAGE_GATHER4_CL, MIMGEncGfx10Default, 0x5, 0x3 }, // 577
  { IMAGE_GATHER4_CL_V5_V4_gfx10, IMAGE_GATHER4_CL, MIMGEncGfx10Default, 0x5, 0x4 }, // 578
  { IMAGE_GATHER4_CL_V2_V2_nsa_gfx10, IMAGE_GATHER4_CL, MIMGEncGfx10NSA, 0x2, 0x2 }, // 579
  { IMAGE_GATHER4_CL_V2_V3_nsa_gfx10, IMAGE_GATHER4_CL, MIMGEncGfx10NSA, 0x2, 0x3 }, // 580
  { IMAGE_GATHER4_CL_V2_V4_nsa_gfx10, IMAGE_GATHER4_CL, MIMGEncGfx10NSA, 0x2, 0x4 }, // 581
  { IMAGE_GATHER4_CL_V4_V2_nsa_gfx10, IMAGE_GATHER4_CL, MIMGEncGfx10NSA, 0x4, 0x2 }, // 582
  { IMAGE_GATHER4_CL_V4_V3_nsa_gfx10, IMAGE_GATHER4_CL, MIMGEncGfx10NSA, 0x4, 0x3 }, // 583
  { IMAGE_GATHER4_CL_V4_V4_nsa_gfx10, IMAGE_GATHER4_CL, MIMGEncGfx10NSA, 0x4, 0x4 }, // 584
  { IMAGE_GATHER4_CL_V5_V2_nsa_gfx10, IMAGE_GATHER4_CL, MIMGEncGfx10NSA, 0x5, 0x2 }, // 585
  { IMAGE_GATHER4_CL_V5_V3_nsa_gfx10, IMAGE_GATHER4_CL, MIMGEncGfx10NSA, 0x5, 0x3 }, // 586
  { IMAGE_GATHER4_CL_V5_V4_nsa_gfx10, IMAGE_GATHER4_CL, MIMGEncGfx10NSA, 0x5, 0x4 }, // 587
  { IMAGE_GATHER4_CL_V2_V1, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x2, 0x1 }, // 588
  { IMAGE_GATHER4_CL_V2_V2, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x2, 0x2 }, // 589
  { IMAGE_GATHER4_CL_V2_V3, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x2, 0x3 }, // 590
  { IMAGE_GATHER4_CL_V2_V4, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x2, 0x4 }, // 591
  { IMAGE_GATHER4_CL_V4_V1, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x4, 0x1 }, // 592
  { IMAGE_GATHER4_CL_V4_V2, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x4, 0x2 }, // 593
  { IMAGE_GATHER4_CL_V4_V3, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x4, 0x3 }, // 594
  { IMAGE_GATHER4_CL_V4_V4, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x4, 0x4 }, // 595
  { IMAGE_GATHER4_CL_V5_V1, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x5, 0x1 }, // 596
  { IMAGE_GATHER4_CL_V5_V2, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x5, 0x2 }, // 597
  { IMAGE_GATHER4_CL_V5_V3, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x5, 0x3 }, // 598
  { IMAGE_GATHER4_CL_V5_V4, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x5, 0x4 }, // 599
  { IMAGE_GATHER4_CL_O_V2_V2_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10Default, 0x2, 0x2 }, // 600
  { IMAGE_GATHER4_CL_O_V2_V3_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 601
  { IMAGE_GATHER4_CL_O_V2_V4_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 602
  { IMAGE_GATHER4_CL_O_V2_V8_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 603
  { IMAGE_GATHER4_CL_O_V4_V2_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10Default, 0x4, 0x2 }, // 604
  { IMAGE_GATHER4_CL_O_V4_V3_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 605
  { IMAGE_GATHER4_CL_O_V4_V4_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 606
  { IMAGE_GATHER4_CL_O_V4_V8_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 607
  { IMAGE_GATHER4_CL_O_V5_V2_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10Default, 0x5, 0x2 }, // 608
  { IMAGE_GATHER4_CL_O_V5_V3_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 609
  { IMAGE_GATHER4_CL_O_V5_V4_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 610
  { IMAGE_GATHER4_CL_O_V5_V8_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 611
  { IMAGE_GATHER4_CL_O_V2_V2_nsa_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10NSA, 0x2, 0x2 }, // 612
  { IMAGE_GATHER4_CL_O_V2_V3_nsa_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 613
  { IMAGE_GATHER4_CL_O_V2_V4_nsa_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 614
  { IMAGE_GATHER4_CL_O_V2_V5_nsa_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 615
  { IMAGE_GATHER4_CL_O_V4_V2_nsa_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10NSA, 0x4, 0x2 }, // 616
  { IMAGE_GATHER4_CL_O_V4_V3_nsa_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 617
  { IMAGE_GATHER4_CL_O_V4_V4_nsa_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 618
  { IMAGE_GATHER4_CL_O_V4_V5_nsa_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 619
  { IMAGE_GATHER4_CL_O_V5_V2_nsa_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10NSA, 0x5, 0x2 }, // 620
  { IMAGE_GATHER4_CL_O_V5_V3_nsa_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 621
  { IMAGE_GATHER4_CL_O_V5_V4_nsa_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 622
  { IMAGE_GATHER4_CL_O_V5_V5_nsa_gfx10, IMAGE_GATHER4_CL_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 623
  { IMAGE_GATHER4_CL_O_V2_V2, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x2, 0x2 }, // 624
  { IMAGE_GATHER4_CL_O_V2_V3, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x2, 0x3 }, // 625
  { IMAGE_GATHER4_CL_O_V2_V4, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 626
  { IMAGE_GATHER4_CL_O_V2_V8, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 627
  { IMAGE_GATHER4_CL_O_V4_V2, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x4, 0x2 }, // 628
  { IMAGE_GATHER4_CL_O_V4_V3, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x4, 0x3 }, // 629
  { IMAGE_GATHER4_CL_O_V4_V4, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 630
  { IMAGE_GATHER4_CL_O_V4_V8, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 631
  { IMAGE_GATHER4_CL_O_V5_V2, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x5, 0x2 }, // 632
  { IMAGE_GATHER4_CL_O_V5_V3, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x5, 0x3 }, // 633
  { IMAGE_GATHER4_CL_O_V5_V4, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x5, 0x4 }, // 634
  { IMAGE_GATHER4_CL_O_V5_V8, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x5, 0x8 }, // 635
  { IMAGE_GATHER4_C_B_V2_V3_gfx10, IMAGE_GATHER4_C_B, MIMGEncGfx10Default, 0x2, 0x3 }, // 636
  { IMAGE_GATHER4_C_B_V2_V4_gfx10, IMAGE_GATHER4_C_B, MIMGEncGfx10Default, 0x2, 0x4 }, // 637
  { IMAGE_GATHER4_C_B_V2_V8_gfx10, IMAGE_GATHER4_C_B, MIMGEncGfx10Default, 0x2, 0x8 }, // 638
  { IMAGE_GATHER4_C_B_V4_V3_gfx10, IMAGE_GATHER4_C_B, MIMGEncGfx10Default, 0x4, 0x3 }, // 639
  { IMAGE_GATHER4_C_B_V4_V4_gfx10, IMAGE_GATHER4_C_B, MIMGEncGfx10Default, 0x4, 0x4 }, // 640
  { IMAGE_GATHER4_C_B_V4_V8_gfx10, IMAGE_GATHER4_C_B, MIMGEncGfx10Default, 0x4, 0x8 }, // 641
  { IMAGE_GATHER4_C_B_V5_V3_gfx10, IMAGE_GATHER4_C_B, MIMGEncGfx10Default, 0x5, 0x3 }, // 642
  { IMAGE_GATHER4_C_B_V5_V4_gfx10, IMAGE_GATHER4_C_B, MIMGEncGfx10Default, 0x5, 0x4 }, // 643
  { IMAGE_GATHER4_C_B_V5_V8_gfx10, IMAGE_GATHER4_C_B, MIMGEncGfx10Default, 0x5, 0x8 }, // 644
  { IMAGE_GATHER4_C_B_V2_V3_nsa_gfx10, IMAGE_GATHER4_C_B, MIMGEncGfx10NSA, 0x2, 0x3 }, // 645
  { IMAGE_GATHER4_C_B_V2_V4_nsa_gfx10, IMAGE_GATHER4_C_B, MIMGEncGfx10NSA, 0x2, 0x4 }, // 646
  { IMAGE_GATHER4_C_B_V2_V5_nsa_gfx10, IMAGE_GATHER4_C_B, MIMGEncGfx10NSA, 0x2, 0x5 }, // 647
  { IMAGE_GATHER4_C_B_V4_V3_nsa_gfx10, IMAGE_GATHER4_C_B, MIMGEncGfx10NSA, 0x4, 0x3 }, // 648
  { IMAGE_GATHER4_C_B_V4_V4_nsa_gfx10, IMAGE_GATHER4_C_B, MIMGEncGfx10NSA, 0x4, 0x4 }, // 649
  { IMAGE_GATHER4_C_B_V4_V5_nsa_gfx10, IMAGE_GATHER4_C_B, MIMGEncGfx10NSA, 0x4, 0x5 }, // 650
  { IMAGE_GATHER4_C_B_V5_V3_nsa_gfx10, IMAGE_GATHER4_C_B, MIMGEncGfx10NSA, 0x5, 0x3 }, // 651
  { IMAGE_GATHER4_C_B_V5_V4_nsa_gfx10, IMAGE_GATHER4_C_B, MIMGEncGfx10NSA, 0x5, 0x4 }, // 652
  { IMAGE_GATHER4_C_B_V5_V5_nsa_gfx10, IMAGE_GATHER4_C_B, MIMGEncGfx10NSA, 0x5, 0x5 }, // 653
  { IMAGE_GATHER4_C_B_V2_V3, IMAGE_GATHER4_C_B, MIMGEncGfx6, 0x2, 0x3 }, // 654
  { IMAGE_GATHER4_C_B_V2_V4, IMAGE_GATHER4_C_B, MIMGEncGfx6, 0x2, 0x4 }, // 655
  { IMAGE_GATHER4_C_B_V2_V8, IMAGE_GATHER4_C_B, MIMGEncGfx6, 0x2, 0x8 }, // 656
  { IMAGE_GATHER4_C_B_V4_V3, IMAGE_GATHER4_C_B, MIMGEncGfx6, 0x4, 0x3 }, // 657
  { IMAGE_GATHER4_C_B_V4_V4, IMAGE_GATHER4_C_B, MIMGEncGfx6, 0x4, 0x4 }, // 658
  { IMAGE_GATHER4_C_B_V4_V8, IMAGE_GATHER4_C_B, MIMGEncGfx6, 0x4, 0x8 }, // 659
  { IMAGE_GATHER4_C_B_V5_V3, IMAGE_GATHER4_C_B, MIMGEncGfx6, 0x5, 0x3 }, // 660
  { IMAGE_GATHER4_C_B_V5_V4, IMAGE_GATHER4_C_B, MIMGEncGfx6, 0x5, 0x4 }, // 661
  { IMAGE_GATHER4_C_B_V5_V8, IMAGE_GATHER4_C_B, MIMGEncGfx6, 0x5, 0x8 }, // 662
  { IMAGE_GATHER4_C_B_CL_V2_V3_gfx10, IMAGE_GATHER4_C_B_CL, MIMGEncGfx10Default, 0x2, 0x3 }, // 663
  { IMAGE_GATHER4_C_B_CL_V2_V4_gfx10, IMAGE_GATHER4_C_B_CL, MIMGEncGfx10Default, 0x2, 0x4 }, // 664
  { IMAGE_GATHER4_C_B_CL_V2_V8_gfx10, IMAGE_GATHER4_C_B_CL, MIMGEncGfx10Default, 0x2, 0x8 }, // 665
  { IMAGE_GATHER4_C_B_CL_V4_V3_gfx10, IMAGE_GATHER4_C_B_CL, MIMGEncGfx10Default, 0x4, 0x3 }, // 666
  { IMAGE_GATHER4_C_B_CL_V4_V4_gfx10, IMAGE_GATHER4_C_B_CL, MIMGEncGfx10Default, 0x4, 0x4 }, // 667
  { IMAGE_GATHER4_C_B_CL_V4_V8_gfx10, IMAGE_GATHER4_C_B_CL, MIMGEncGfx10Default, 0x4, 0x8 }, // 668
  { IMAGE_GATHER4_C_B_CL_V5_V3_gfx10, IMAGE_GATHER4_C_B_CL, MIMGEncGfx10Default, 0x5, 0x3 }, // 669
  { IMAGE_GATHER4_C_B_CL_V5_V4_gfx10, IMAGE_GATHER4_C_B_CL, MIMGEncGfx10Default, 0x5, 0x4 }, // 670
  { IMAGE_GATHER4_C_B_CL_V5_V8_gfx10, IMAGE_GATHER4_C_B_CL, MIMGEncGfx10Default, 0x5, 0x8 }, // 671
  { IMAGE_GATHER4_C_B_CL_V2_V3_nsa_gfx10, IMAGE_GATHER4_C_B_CL, MIMGEncGfx10NSA, 0x2, 0x3 }, // 672
  { IMAGE_GATHER4_C_B_CL_V2_V4_nsa_gfx10, IMAGE_GATHER4_C_B_CL, MIMGEncGfx10NSA, 0x2, 0x4 }, // 673
  { IMAGE_GATHER4_C_B_CL_V2_V5_nsa_gfx10, IMAGE_GATHER4_C_B_CL, MIMGEncGfx10NSA, 0x2, 0x5 }, // 674
  { IMAGE_GATHER4_C_B_CL_V2_V6_nsa_gfx10, IMAGE_GATHER4_C_B_CL, MIMGEncGfx10NSA, 0x2, 0x6 }, // 675
  { IMAGE_GATHER4_C_B_CL_V4_V3_nsa_gfx10, IMAGE_GATHER4_C_B_CL, MIMGEncGfx10NSA, 0x4, 0x3 }, // 676
  { IMAGE_GATHER4_C_B_CL_V4_V4_nsa_gfx10, IMAGE_GATHER4_C_B_CL, MIMGEncGfx10NSA, 0x4, 0x4 }, // 677
  { IMAGE_GATHER4_C_B_CL_V4_V5_nsa_gfx10, IMAGE_GATHER4_C_B_CL, MIMGEncGfx10NSA, 0x4, 0x5 }, // 678
  { IMAGE_GATHER4_C_B_CL_V4_V6_nsa_gfx10, IMAGE_GATHER4_C_B_CL, MIMGEncGfx10NSA, 0x4, 0x6 }, // 679
  { IMAGE_GATHER4_C_B_CL_V5_V3_nsa_gfx10, IMAGE_GATHER4_C_B_CL, MIMGEncGfx10NSA, 0x5, 0x3 }, // 680
  { IMAGE_GATHER4_C_B_CL_V5_V4_nsa_gfx10, IMAGE_GATHER4_C_B_CL, MIMGEncGfx10NSA, 0x5, 0x4 }, // 681
  { IMAGE_GATHER4_C_B_CL_V5_V5_nsa_gfx10, IMAGE_GATHER4_C_B_CL, MIMGEncGfx10NSA, 0x5, 0x5 }, // 682
  { IMAGE_GATHER4_C_B_CL_V5_V6_nsa_gfx10, IMAGE_GATHER4_C_B_CL, MIMGEncGfx10NSA, 0x5, 0x6 }, // 683
  { IMAGE_GATHER4_C_B_CL_V2_V3, IMAGE_GATHER4_C_B_CL, MIMGEncGfx6, 0x2, 0x3 }, // 684
  { IMAGE_GATHER4_C_B_CL_V2_V4, IMAGE_GATHER4_C_B_CL, MIMGEncGfx6, 0x2, 0x4 }, // 685
  { IMAGE_GATHER4_C_B_CL_V2_V8, IMAGE_GATHER4_C_B_CL, MIMGEncGfx6, 0x2, 0x8 }, // 686
  { IMAGE_GATHER4_C_B_CL_V4_V3, IMAGE_GATHER4_C_B_CL, MIMGEncGfx6, 0x4, 0x3 }, // 687
  { IMAGE_GATHER4_C_B_CL_V4_V4, IMAGE_GATHER4_C_B_CL, MIMGEncGfx6, 0x4, 0x4 }, // 688
  { IMAGE_GATHER4_C_B_CL_V4_V8, IMAGE_GATHER4_C_B_CL, MIMGEncGfx6, 0x4, 0x8 }, // 689
  { IMAGE_GATHER4_C_B_CL_V5_V3, IMAGE_GATHER4_C_B_CL, MIMGEncGfx6, 0x5, 0x3 }, // 690
  { IMAGE_GATHER4_C_B_CL_V5_V4, IMAGE_GATHER4_C_B_CL, MIMGEncGfx6, 0x5, 0x4 }, // 691
  { IMAGE_GATHER4_C_B_CL_V5_V8, IMAGE_GATHER4_C_B_CL, MIMGEncGfx6, 0x5, 0x8 }, // 692
  { IMAGE_GATHER4_C_B_CL_O_V2_V4_gfx10, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 693
  { IMAGE_GATHER4_C_B_CL_O_V2_V8_gfx10, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 694
  { IMAGE_GATHER4_C_B_CL_O_V4_V4_gfx10, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 695
  { IMAGE_GATHER4_C_B_CL_O_V4_V8_gfx10, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 696
  { IMAGE_GATHER4_C_B_CL_O_V5_V4_gfx10, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 697
  { IMAGE_GATHER4_C_B_CL_O_V5_V8_gfx10, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 698
  { IMAGE_GATHER4_C_B_CL_O_V2_V4_nsa_gfx10, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 699
  { IMAGE_GATHER4_C_B_CL_O_V2_V5_nsa_gfx10, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 700
  { IMAGE_GATHER4_C_B_CL_O_V2_V6_nsa_gfx10, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx10NSA, 0x2, 0x6 }, // 701
  { IMAGE_GATHER4_C_B_CL_O_V2_V7_nsa_gfx10, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx10NSA, 0x2, 0x7 }, // 702
  { IMAGE_GATHER4_C_B_CL_O_V4_V4_nsa_gfx10, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 703
  { IMAGE_GATHER4_C_B_CL_O_V4_V5_nsa_gfx10, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 704
  { IMAGE_GATHER4_C_B_CL_O_V4_V6_nsa_gfx10, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx10NSA, 0x4, 0x6 }, // 705
  { IMAGE_GATHER4_C_B_CL_O_V4_V7_nsa_gfx10, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx10NSA, 0x4, 0x7 }, // 706
  { IMAGE_GATHER4_C_B_CL_O_V5_V4_nsa_gfx10, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 707
  { IMAGE_GATHER4_C_B_CL_O_V5_V5_nsa_gfx10, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 708
  { IMAGE_GATHER4_C_B_CL_O_V5_V6_nsa_gfx10, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx10NSA, 0x5, 0x6 }, // 709
  { IMAGE_GATHER4_C_B_CL_O_V5_V7_nsa_gfx10, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx10NSA, 0x5, 0x7 }, // 710
  { IMAGE_GATHER4_C_B_CL_O_V2_V4, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 711
  { IMAGE_GATHER4_C_B_CL_O_V2_V8, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 712
  { IMAGE_GATHER4_C_B_CL_O_V4_V4, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 713
  { IMAGE_GATHER4_C_B_CL_O_V4_V8, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 714
  { IMAGE_GATHER4_C_B_CL_O_V5_V4, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx6, 0x5, 0x4 }, // 715
  { IMAGE_GATHER4_C_B_CL_O_V5_V8, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx6, 0x5, 0x8 }, // 716
  { IMAGE_GATHER4_C_B_O_V2_V4_gfx10, IMAGE_GATHER4_C_B_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 717
  { IMAGE_GATHER4_C_B_O_V2_V8_gfx10, IMAGE_GATHER4_C_B_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 718
  { IMAGE_GATHER4_C_B_O_V4_V4_gfx10, IMAGE_GATHER4_C_B_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 719
  { IMAGE_GATHER4_C_B_O_V4_V8_gfx10, IMAGE_GATHER4_C_B_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 720
  { IMAGE_GATHER4_C_B_O_V5_V4_gfx10, IMAGE_GATHER4_C_B_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 721
  { IMAGE_GATHER4_C_B_O_V5_V8_gfx10, IMAGE_GATHER4_C_B_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 722
  { IMAGE_GATHER4_C_B_O_V2_V4_nsa_gfx10, IMAGE_GATHER4_C_B_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 723
  { IMAGE_GATHER4_C_B_O_V2_V5_nsa_gfx10, IMAGE_GATHER4_C_B_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 724
  { IMAGE_GATHER4_C_B_O_V2_V6_nsa_gfx10, IMAGE_GATHER4_C_B_O, MIMGEncGfx10NSA, 0x2, 0x6 }, // 725
  { IMAGE_GATHER4_C_B_O_V4_V4_nsa_gfx10, IMAGE_GATHER4_C_B_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 726
  { IMAGE_GATHER4_C_B_O_V4_V5_nsa_gfx10, IMAGE_GATHER4_C_B_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 727
  { IMAGE_GATHER4_C_B_O_V4_V6_nsa_gfx10, IMAGE_GATHER4_C_B_O, MIMGEncGfx10NSA, 0x4, 0x6 }, // 728
  { IMAGE_GATHER4_C_B_O_V5_V4_nsa_gfx10, IMAGE_GATHER4_C_B_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 729
  { IMAGE_GATHER4_C_B_O_V5_V5_nsa_gfx10, IMAGE_GATHER4_C_B_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 730
  { IMAGE_GATHER4_C_B_O_V5_V6_nsa_gfx10, IMAGE_GATHER4_C_B_O, MIMGEncGfx10NSA, 0x5, 0x6 }, // 731
  { IMAGE_GATHER4_C_B_O_V2_V4, IMAGE_GATHER4_C_B_O, MIMGEncGfx6, 0x2, 0x4 }, // 732
  { IMAGE_GATHER4_C_B_O_V2_V8, IMAGE_GATHER4_C_B_O, MIMGEncGfx6, 0x2, 0x8 }, // 733
  { IMAGE_GATHER4_C_B_O_V4_V4, IMAGE_GATHER4_C_B_O, MIMGEncGfx6, 0x4, 0x4 }, // 734
  { IMAGE_GATHER4_C_B_O_V4_V8, IMAGE_GATHER4_C_B_O, MIMGEncGfx6, 0x4, 0x8 }, // 735
  { IMAGE_GATHER4_C_B_O_V5_V4, IMAGE_GATHER4_C_B_O, MIMGEncGfx6, 0x5, 0x4 }, // 736
  { IMAGE_GATHER4_C_B_O_V5_V8, IMAGE_GATHER4_C_B_O, MIMGEncGfx6, 0x5, 0x8 }, // 737
  { IMAGE_GATHER4_C_CL_V2_V2_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10Default, 0x2, 0x2 }, // 738
  { IMAGE_GATHER4_C_CL_V2_V3_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10Default, 0x2, 0x3 }, // 739
  { IMAGE_GATHER4_C_CL_V2_V4_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10Default, 0x2, 0x4 }, // 740
  { IMAGE_GATHER4_C_CL_V2_V8_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10Default, 0x2, 0x8 }, // 741
  { IMAGE_GATHER4_C_CL_V4_V2_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10Default, 0x4, 0x2 }, // 742
  { IMAGE_GATHER4_C_CL_V4_V3_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10Default, 0x4, 0x3 }, // 743
  { IMAGE_GATHER4_C_CL_V4_V4_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10Default, 0x4, 0x4 }, // 744
  { IMAGE_GATHER4_C_CL_V4_V8_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10Default, 0x4, 0x8 }, // 745
  { IMAGE_GATHER4_C_CL_V5_V2_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10Default, 0x5, 0x2 }, // 746
  { IMAGE_GATHER4_C_CL_V5_V3_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10Default, 0x5, 0x3 }, // 747
  { IMAGE_GATHER4_C_CL_V5_V4_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10Default, 0x5, 0x4 }, // 748
  { IMAGE_GATHER4_C_CL_V5_V8_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10Default, 0x5, 0x8 }, // 749
  { IMAGE_GATHER4_C_CL_V2_V2_nsa_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10NSA, 0x2, 0x2 }, // 750
  { IMAGE_GATHER4_C_CL_V2_V3_nsa_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10NSA, 0x2, 0x3 }, // 751
  { IMAGE_GATHER4_C_CL_V2_V4_nsa_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10NSA, 0x2, 0x4 }, // 752
  { IMAGE_GATHER4_C_CL_V2_V5_nsa_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10NSA, 0x2, 0x5 }, // 753
  { IMAGE_GATHER4_C_CL_V4_V2_nsa_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10NSA, 0x4, 0x2 }, // 754
  { IMAGE_GATHER4_C_CL_V4_V3_nsa_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10NSA, 0x4, 0x3 }, // 755
  { IMAGE_GATHER4_C_CL_V4_V4_nsa_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10NSA, 0x4, 0x4 }, // 756
  { IMAGE_GATHER4_C_CL_V4_V5_nsa_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10NSA, 0x4, 0x5 }, // 757
  { IMAGE_GATHER4_C_CL_V5_V2_nsa_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10NSA, 0x5, 0x2 }, // 758
  { IMAGE_GATHER4_C_CL_V5_V3_nsa_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10NSA, 0x5, 0x3 }, // 759
  { IMAGE_GATHER4_C_CL_V5_V4_nsa_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10NSA, 0x5, 0x4 }, // 760
  { IMAGE_GATHER4_C_CL_V5_V5_nsa_gfx10, IMAGE_GATHER4_C_CL, MIMGEncGfx10NSA, 0x5, 0x5 }, // 761
  { IMAGE_GATHER4_C_CL_V2_V2, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x2, 0x2 }, // 762
  { IMAGE_GATHER4_C_CL_V2_V3, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x2, 0x3 }, // 763
  { IMAGE_GATHER4_C_CL_V2_V4, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x2, 0x4 }, // 764
  { IMAGE_GATHER4_C_CL_V2_V8, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x2, 0x8 }, // 765
  { IMAGE_GATHER4_C_CL_V4_V2, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x4, 0x2 }, // 766
  { IMAGE_GATHER4_C_CL_V4_V3, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x4, 0x3 }, // 767
  { IMAGE_GATHER4_C_CL_V4_V4, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x4, 0x4 }, // 768
  { IMAGE_GATHER4_C_CL_V4_V8, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x4, 0x8 }, // 769
  { IMAGE_GATHER4_C_CL_V5_V2, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x5, 0x2 }, // 770
  { IMAGE_GATHER4_C_CL_V5_V3, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x5, 0x3 }, // 771
  { IMAGE_GATHER4_C_CL_V5_V4, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x5, 0x4 }, // 772
  { IMAGE_GATHER4_C_CL_V5_V8, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x5, 0x8 }, // 773
  { IMAGE_GATHER4_C_CL_O_V2_V3_gfx10, IMAGE_GATHER4_C_CL_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 774
  { IMAGE_GATHER4_C_CL_O_V2_V4_gfx10, IMAGE_GATHER4_C_CL_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 775
  { IMAGE_GATHER4_C_CL_O_V2_V8_gfx10, IMAGE_GATHER4_C_CL_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 776
  { IMAGE_GATHER4_C_CL_O_V4_V3_gfx10, IMAGE_GATHER4_C_CL_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 777
  { IMAGE_GATHER4_C_CL_O_V4_V4_gfx10, IMAGE_GATHER4_C_CL_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 778
  { IMAGE_GATHER4_C_CL_O_V4_V8_gfx10, IMAGE_GATHER4_C_CL_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 779
  { IMAGE_GATHER4_C_CL_O_V5_V3_gfx10, IMAGE_GATHER4_C_CL_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 780
  { IMAGE_GATHER4_C_CL_O_V5_V4_gfx10, IMAGE_GATHER4_C_CL_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 781
  { IMAGE_GATHER4_C_CL_O_V5_V8_gfx10, IMAGE_GATHER4_C_CL_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 782
  { IMAGE_GATHER4_C_CL_O_V2_V3_nsa_gfx10, IMAGE_GATHER4_C_CL_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 783
  { IMAGE_GATHER4_C_CL_O_V2_V4_nsa_gfx10, IMAGE_GATHER4_C_CL_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 784
  { IMAGE_GATHER4_C_CL_O_V2_V5_nsa_gfx10, IMAGE_GATHER4_C_CL_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 785
  { IMAGE_GATHER4_C_CL_O_V2_V6_nsa_gfx10, IMAGE_GATHER4_C_CL_O, MIMGEncGfx10NSA, 0x2, 0x6 }, // 786
  { IMAGE_GATHER4_C_CL_O_V4_V3_nsa_gfx10, IMAGE_GATHER4_C_CL_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 787
  { IMAGE_GATHER4_C_CL_O_V4_V4_nsa_gfx10, IMAGE_GATHER4_C_CL_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 788
  { IMAGE_GATHER4_C_CL_O_V4_V5_nsa_gfx10, IMAGE_GATHER4_C_CL_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 789
  { IMAGE_GATHER4_C_CL_O_V4_V6_nsa_gfx10, IMAGE_GATHER4_C_CL_O, MIMGEncGfx10NSA, 0x4, 0x6 }, // 790
  { IMAGE_GATHER4_C_CL_O_V5_V3_nsa_gfx10, IMAGE_GATHER4_C_CL_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 791
  { IMAGE_GATHER4_C_CL_O_V5_V4_nsa_gfx10, IMAGE_GATHER4_C_CL_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 792
  { IMAGE_GATHER4_C_CL_O_V5_V5_nsa_gfx10, IMAGE_GATHER4_C_CL_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 793
  { IMAGE_GATHER4_C_CL_O_V5_V6_nsa_gfx10, IMAGE_GATHER4_C_CL_O, MIMGEncGfx10NSA, 0x5, 0x6 }, // 794
  { IMAGE_GATHER4_C_CL_O_V2_V3, IMAGE_GATHER4_C_CL_O, MIMGEncGfx6, 0x2, 0x3 }, // 795
  { IMAGE_GATHER4_C_CL_O_V2_V4, IMAGE_GATHER4_C_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 796
  { IMAGE_GATHER4_C_CL_O_V2_V8, IMAGE_GATHER4_C_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 797
  { IMAGE_GATHER4_C_CL_O_V4_V3, IMAGE_GATHER4_C_CL_O, MIMGEncGfx6, 0x4, 0x3 }, // 798
  { IMAGE_GATHER4_C_CL_O_V4_V4, IMAGE_GATHER4_C_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 799
  { IMAGE_GATHER4_C_CL_O_V4_V8, IMAGE_GATHER4_C_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 800
  { IMAGE_GATHER4_C_CL_O_V5_V3, IMAGE_GATHER4_C_CL_O, MIMGEncGfx6, 0x5, 0x3 }, // 801
  { IMAGE_GATHER4_C_CL_O_V5_V4, IMAGE_GATHER4_C_CL_O, MIMGEncGfx6, 0x5, 0x4 }, // 802
  { IMAGE_GATHER4_C_CL_O_V5_V8, IMAGE_GATHER4_C_CL_O, MIMGEncGfx6, 0x5, 0x8 }, // 803
  { IMAGE_GATHER4_C_L_V2_V2_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10Default, 0x2, 0x2 }, // 804
  { IMAGE_GATHER4_C_L_V2_V3_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10Default, 0x2, 0x3 }, // 805
  { IMAGE_GATHER4_C_L_V2_V4_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10Default, 0x2, 0x4 }, // 806
  { IMAGE_GATHER4_C_L_V2_V8_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10Default, 0x2, 0x8 }, // 807
  { IMAGE_GATHER4_C_L_V4_V2_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10Default, 0x4, 0x2 }, // 808
  { IMAGE_GATHER4_C_L_V4_V3_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10Default, 0x4, 0x3 }, // 809
  { IMAGE_GATHER4_C_L_V4_V4_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10Default, 0x4, 0x4 }, // 810
  { IMAGE_GATHER4_C_L_V4_V8_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10Default, 0x4, 0x8 }, // 811
  { IMAGE_GATHER4_C_L_V5_V2_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10Default, 0x5, 0x2 }, // 812
  { IMAGE_GATHER4_C_L_V5_V3_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10Default, 0x5, 0x3 }, // 813
  { IMAGE_GATHER4_C_L_V5_V4_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10Default, 0x5, 0x4 }, // 814
  { IMAGE_GATHER4_C_L_V5_V8_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10Default, 0x5, 0x8 }, // 815
  { IMAGE_GATHER4_C_L_V2_V2_nsa_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10NSA, 0x2, 0x2 }, // 816
  { IMAGE_GATHER4_C_L_V2_V3_nsa_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10NSA, 0x2, 0x3 }, // 817
  { IMAGE_GATHER4_C_L_V2_V4_nsa_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10NSA, 0x2, 0x4 }, // 818
  { IMAGE_GATHER4_C_L_V2_V5_nsa_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10NSA, 0x2, 0x5 }, // 819
  { IMAGE_GATHER4_C_L_V4_V2_nsa_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10NSA, 0x4, 0x2 }, // 820
  { IMAGE_GATHER4_C_L_V4_V3_nsa_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10NSA, 0x4, 0x3 }, // 821
  { IMAGE_GATHER4_C_L_V4_V4_nsa_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10NSA, 0x4, 0x4 }, // 822
  { IMAGE_GATHER4_C_L_V4_V5_nsa_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10NSA, 0x4, 0x5 }, // 823
  { IMAGE_GATHER4_C_L_V5_V2_nsa_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10NSA, 0x5, 0x2 }, // 824
  { IMAGE_GATHER4_C_L_V5_V3_nsa_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10NSA, 0x5, 0x3 }, // 825
  { IMAGE_GATHER4_C_L_V5_V4_nsa_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10NSA, 0x5, 0x4 }, // 826
  { IMAGE_GATHER4_C_L_V5_V5_nsa_gfx10, IMAGE_GATHER4_C_L, MIMGEncGfx10NSA, 0x5, 0x5 }, // 827
  { IMAGE_GATHER4_C_L_V2_V2, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x2, 0x2 }, // 828
  { IMAGE_GATHER4_C_L_V2_V3, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x2, 0x3 }, // 829
  { IMAGE_GATHER4_C_L_V2_V4, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x2, 0x4 }, // 830
  { IMAGE_GATHER4_C_L_V2_V8, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x2, 0x8 }, // 831
  { IMAGE_GATHER4_C_L_V4_V2, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x4, 0x2 }, // 832
  { IMAGE_GATHER4_C_L_V4_V3, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x4, 0x3 }, // 833
  { IMAGE_GATHER4_C_L_V4_V4, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x4, 0x4 }, // 834
  { IMAGE_GATHER4_C_L_V4_V8, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x4, 0x8 }, // 835
  { IMAGE_GATHER4_C_L_V5_V2, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x5, 0x2 }, // 836
  { IMAGE_GATHER4_C_L_V5_V3, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x5, 0x3 }, // 837
  { IMAGE_GATHER4_C_L_V5_V4, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x5, 0x4 }, // 838
  { IMAGE_GATHER4_C_L_V5_V8, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x5, 0x8 }, // 839
  { IMAGE_GATHER4_C_LZ_V2_V2_gfx10, IMAGE_GATHER4_C_LZ, MIMGEncGfx10Default, 0x2, 0x2 }, // 840
  { IMAGE_GATHER4_C_LZ_V2_V3_gfx10, IMAGE_GATHER4_C_LZ, MIMGEncGfx10Default, 0x2, 0x3 }, // 841
  { IMAGE_GATHER4_C_LZ_V2_V4_gfx10, IMAGE_GATHER4_C_LZ, MIMGEncGfx10Default, 0x2, 0x4 }, // 842
  { IMAGE_GATHER4_C_LZ_V4_V2_gfx10, IMAGE_GATHER4_C_LZ, MIMGEncGfx10Default, 0x4, 0x2 }, // 843
  { IMAGE_GATHER4_C_LZ_V4_V3_gfx10, IMAGE_GATHER4_C_LZ, MIMGEncGfx10Default, 0x4, 0x3 }, // 844
  { IMAGE_GATHER4_C_LZ_V4_V4_gfx10, IMAGE_GATHER4_C_LZ, MIMGEncGfx10Default, 0x4, 0x4 }, // 845
  { IMAGE_GATHER4_C_LZ_V5_V2_gfx10, IMAGE_GATHER4_C_LZ, MIMGEncGfx10Default, 0x5, 0x2 }, // 846
  { IMAGE_GATHER4_C_LZ_V5_V3_gfx10, IMAGE_GATHER4_C_LZ, MIMGEncGfx10Default, 0x5, 0x3 }, // 847
  { IMAGE_GATHER4_C_LZ_V5_V4_gfx10, IMAGE_GATHER4_C_LZ, MIMGEncGfx10Default, 0x5, 0x4 }, // 848
  { IMAGE_GATHER4_C_LZ_V2_V2_nsa_gfx10, IMAGE_GATHER4_C_LZ, MIMGEncGfx10NSA, 0x2, 0x2 }, // 849
  { IMAGE_GATHER4_C_LZ_V2_V3_nsa_gfx10, IMAGE_GATHER4_C_LZ, MIMGEncGfx10NSA, 0x2, 0x3 }, // 850
  { IMAGE_GATHER4_C_LZ_V2_V4_nsa_gfx10, IMAGE_GATHER4_C_LZ, MIMGEncGfx10NSA, 0x2, 0x4 }, // 851
  { IMAGE_GATHER4_C_LZ_V4_V2_nsa_gfx10, IMAGE_GATHER4_C_LZ, MIMGEncGfx10NSA, 0x4, 0x2 }, // 852
  { IMAGE_GATHER4_C_LZ_V4_V3_nsa_gfx10, IMAGE_GATHER4_C_LZ, MIMGEncGfx10NSA, 0x4, 0x3 }, // 853
  { IMAGE_GATHER4_C_LZ_V4_V4_nsa_gfx10, IMAGE_GATHER4_C_LZ, MIMGEncGfx10NSA, 0x4, 0x4 }, // 854
  { IMAGE_GATHER4_C_LZ_V5_V2_nsa_gfx10, IMAGE_GATHER4_C_LZ, MIMGEncGfx10NSA, 0x5, 0x2 }, // 855
  { IMAGE_GATHER4_C_LZ_V5_V3_nsa_gfx10, IMAGE_GATHER4_C_LZ, MIMGEncGfx10NSA, 0x5, 0x3 }, // 856
  { IMAGE_GATHER4_C_LZ_V5_V4_nsa_gfx10, IMAGE_GATHER4_C_LZ, MIMGEncGfx10NSA, 0x5, 0x4 }, // 857
  { IMAGE_GATHER4_C_LZ_V2_V2, IMAGE_GATHER4_C_LZ, MIMGEncGfx6, 0x2, 0x2 }, // 858
  { IMAGE_GATHER4_C_LZ_V2_V3, IMAGE_GATHER4_C_LZ, MIMGEncGfx6, 0x2, 0x3 }, // 859
  { IMAGE_GATHER4_C_LZ_V2_V4, IMAGE_GATHER4_C_LZ, MIMGEncGfx6, 0x2, 0x4 }, // 860
  { IMAGE_GATHER4_C_LZ_V4_V2, IMAGE_GATHER4_C_LZ, MIMGEncGfx6, 0x4, 0x2 }, // 861
  { IMAGE_GATHER4_C_LZ_V4_V3, IMAGE_GATHER4_C_LZ, MIMGEncGfx6, 0x4, 0x3 }, // 862
  { IMAGE_GATHER4_C_LZ_V4_V4, IMAGE_GATHER4_C_LZ, MIMGEncGfx6, 0x4, 0x4 }, // 863
  { IMAGE_GATHER4_C_LZ_V5_V2, IMAGE_GATHER4_C_LZ, MIMGEncGfx6, 0x5, 0x2 }, // 864
  { IMAGE_GATHER4_C_LZ_V5_V3, IMAGE_GATHER4_C_LZ, MIMGEncGfx6, 0x5, 0x3 }, // 865
  { IMAGE_GATHER4_C_LZ_V5_V4, IMAGE_GATHER4_C_LZ, MIMGEncGfx6, 0x5, 0x4 }, // 866
  { IMAGE_GATHER4_C_LZ_O_V2_V3_gfx10, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 867
  { IMAGE_GATHER4_C_LZ_O_V2_V4_gfx10, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 868
  { IMAGE_GATHER4_C_LZ_O_V2_V8_gfx10, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 869
  { IMAGE_GATHER4_C_LZ_O_V4_V3_gfx10, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 870
  { IMAGE_GATHER4_C_LZ_O_V4_V4_gfx10, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 871
  { IMAGE_GATHER4_C_LZ_O_V4_V8_gfx10, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 872
  { IMAGE_GATHER4_C_LZ_O_V5_V3_gfx10, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 873
  { IMAGE_GATHER4_C_LZ_O_V5_V4_gfx10, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 874
  { IMAGE_GATHER4_C_LZ_O_V5_V8_gfx10, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 875
  { IMAGE_GATHER4_C_LZ_O_V2_V3_nsa_gfx10, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 876
  { IMAGE_GATHER4_C_LZ_O_V2_V4_nsa_gfx10, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 877
  { IMAGE_GATHER4_C_LZ_O_V2_V5_nsa_gfx10, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 878
  { IMAGE_GATHER4_C_LZ_O_V4_V3_nsa_gfx10, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 879
  { IMAGE_GATHER4_C_LZ_O_V4_V4_nsa_gfx10, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 880
  { IMAGE_GATHER4_C_LZ_O_V4_V5_nsa_gfx10, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 881
  { IMAGE_GATHER4_C_LZ_O_V5_V3_nsa_gfx10, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 882
  { IMAGE_GATHER4_C_LZ_O_V5_V4_nsa_gfx10, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 883
  { IMAGE_GATHER4_C_LZ_O_V5_V5_nsa_gfx10, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 884
  { IMAGE_GATHER4_C_LZ_O_V2_V3, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx6, 0x2, 0x3 }, // 885
  { IMAGE_GATHER4_C_LZ_O_V2_V4, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx6, 0x2, 0x4 }, // 886
  { IMAGE_GATHER4_C_LZ_O_V2_V8, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx6, 0x2, 0x8 }, // 887
  { IMAGE_GATHER4_C_LZ_O_V4_V3, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx6, 0x4, 0x3 }, // 888
  { IMAGE_GATHER4_C_LZ_O_V4_V4, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx6, 0x4, 0x4 }, // 889
  { IMAGE_GATHER4_C_LZ_O_V4_V8, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx6, 0x4, 0x8 }, // 890
  { IMAGE_GATHER4_C_LZ_O_V5_V3, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx6, 0x5, 0x3 }, // 891
  { IMAGE_GATHER4_C_LZ_O_V5_V4, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx6, 0x5, 0x4 }, // 892
  { IMAGE_GATHER4_C_LZ_O_V5_V8, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx6, 0x5, 0x8 }, // 893
  { IMAGE_GATHER4_C_L_O_V2_V3_gfx10, IMAGE_GATHER4_C_L_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 894
  { IMAGE_GATHER4_C_L_O_V2_V4_gfx10, IMAGE_GATHER4_C_L_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 895
  { IMAGE_GATHER4_C_L_O_V2_V8_gfx10, IMAGE_GATHER4_C_L_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 896
  { IMAGE_GATHER4_C_L_O_V4_V3_gfx10, IMAGE_GATHER4_C_L_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 897
  { IMAGE_GATHER4_C_L_O_V4_V4_gfx10, IMAGE_GATHER4_C_L_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 898
  { IMAGE_GATHER4_C_L_O_V4_V8_gfx10, IMAGE_GATHER4_C_L_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 899
  { IMAGE_GATHER4_C_L_O_V5_V3_gfx10, IMAGE_GATHER4_C_L_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 900
  { IMAGE_GATHER4_C_L_O_V5_V4_gfx10, IMAGE_GATHER4_C_L_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 901
  { IMAGE_GATHER4_C_L_O_V5_V8_gfx10, IMAGE_GATHER4_C_L_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 902
  { IMAGE_GATHER4_C_L_O_V2_V3_nsa_gfx10, IMAGE_GATHER4_C_L_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 903
  { IMAGE_GATHER4_C_L_O_V2_V4_nsa_gfx10, IMAGE_GATHER4_C_L_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 904
  { IMAGE_GATHER4_C_L_O_V2_V5_nsa_gfx10, IMAGE_GATHER4_C_L_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 905
  { IMAGE_GATHER4_C_L_O_V2_V6_nsa_gfx10, IMAGE_GATHER4_C_L_O, MIMGEncGfx10NSA, 0x2, 0x6 }, // 906
  { IMAGE_GATHER4_C_L_O_V4_V3_nsa_gfx10, IMAGE_GATHER4_C_L_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 907
  { IMAGE_GATHER4_C_L_O_V4_V4_nsa_gfx10, IMAGE_GATHER4_C_L_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 908
  { IMAGE_GATHER4_C_L_O_V4_V5_nsa_gfx10, IMAGE_GATHER4_C_L_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 909
  { IMAGE_GATHER4_C_L_O_V4_V6_nsa_gfx10, IMAGE_GATHER4_C_L_O, MIMGEncGfx10NSA, 0x4, 0x6 }, // 910
  { IMAGE_GATHER4_C_L_O_V5_V3_nsa_gfx10, IMAGE_GATHER4_C_L_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 911
  { IMAGE_GATHER4_C_L_O_V5_V4_nsa_gfx10, IMAGE_GATHER4_C_L_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 912
  { IMAGE_GATHER4_C_L_O_V5_V5_nsa_gfx10, IMAGE_GATHER4_C_L_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 913
  { IMAGE_GATHER4_C_L_O_V5_V6_nsa_gfx10, IMAGE_GATHER4_C_L_O, MIMGEncGfx10NSA, 0x5, 0x6 }, // 914
  { IMAGE_GATHER4_C_L_O_V2_V3, IMAGE_GATHER4_C_L_O, MIMGEncGfx6, 0x2, 0x3 }, // 915
  { IMAGE_GATHER4_C_L_O_V2_V4, IMAGE_GATHER4_C_L_O, MIMGEncGfx6, 0x2, 0x4 }, // 916
  { IMAGE_GATHER4_C_L_O_V2_V8, IMAGE_GATHER4_C_L_O, MIMGEncGfx6, 0x2, 0x8 }, // 917
  { IMAGE_GATHER4_C_L_O_V4_V3, IMAGE_GATHER4_C_L_O, MIMGEncGfx6, 0x4, 0x3 }, // 918
  { IMAGE_GATHER4_C_L_O_V4_V4, IMAGE_GATHER4_C_L_O, MIMGEncGfx6, 0x4, 0x4 }, // 919
  { IMAGE_GATHER4_C_L_O_V4_V8, IMAGE_GATHER4_C_L_O, MIMGEncGfx6, 0x4, 0x8 }, // 920
  { IMAGE_GATHER4_C_L_O_V5_V3, IMAGE_GATHER4_C_L_O, MIMGEncGfx6, 0x5, 0x3 }, // 921
  { IMAGE_GATHER4_C_L_O_V5_V4, IMAGE_GATHER4_C_L_O, MIMGEncGfx6, 0x5, 0x4 }, // 922
  { IMAGE_GATHER4_C_L_O_V5_V8, IMAGE_GATHER4_C_L_O, MIMGEncGfx6, 0x5, 0x8 }, // 923
  { IMAGE_GATHER4_C_O_V2_V3_gfx10, IMAGE_GATHER4_C_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 924
  { IMAGE_GATHER4_C_O_V2_V4_gfx10, IMAGE_GATHER4_C_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 925
  { IMAGE_GATHER4_C_O_V2_V8_gfx10, IMAGE_GATHER4_C_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 926
  { IMAGE_GATHER4_C_O_V4_V3_gfx10, IMAGE_GATHER4_C_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 927
  { IMAGE_GATHER4_C_O_V4_V4_gfx10, IMAGE_GATHER4_C_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 928
  { IMAGE_GATHER4_C_O_V4_V8_gfx10, IMAGE_GATHER4_C_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 929
  { IMAGE_GATHER4_C_O_V5_V3_gfx10, IMAGE_GATHER4_C_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 930
  { IMAGE_GATHER4_C_O_V5_V4_gfx10, IMAGE_GATHER4_C_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 931
  { IMAGE_GATHER4_C_O_V5_V8_gfx10, IMAGE_GATHER4_C_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 932
  { IMAGE_GATHER4_C_O_V2_V3_nsa_gfx10, IMAGE_GATHER4_C_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 933
  { IMAGE_GATHER4_C_O_V2_V4_nsa_gfx10, IMAGE_GATHER4_C_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 934
  { IMAGE_GATHER4_C_O_V2_V5_nsa_gfx10, IMAGE_GATHER4_C_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 935
  { IMAGE_GATHER4_C_O_V4_V3_nsa_gfx10, IMAGE_GATHER4_C_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 936
  { IMAGE_GATHER4_C_O_V4_V4_nsa_gfx10, IMAGE_GATHER4_C_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 937
  { IMAGE_GATHER4_C_O_V4_V5_nsa_gfx10, IMAGE_GATHER4_C_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 938
  { IMAGE_GATHER4_C_O_V5_V3_nsa_gfx10, IMAGE_GATHER4_C_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 939
  { IMAGE_GATHER4_C_O_V5_V4_nsa_gfx10, IMAGE_GATHER4_C_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 940
  { IMAGE_GATHER4_C_O_V5_V5_nsa_gfx10, IMAGE_GATHER4_C_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 941
  { IMAGE_GATHER4_C_O_V2_V3, IMAGE_GATHER4_C_O, MIMGEncGfx6, 0x2, 0x3 }, // 942
  { IMAGE_GATHER4_C_O_V2_V4, IMAGE_GATHER4_C_O, MIMGEncGfx6, 0x2, 0x4 }, // 943
  { IMAGE_GATHER4_C_O_V2_V8, IMAGE_GATHER4_C_O, MIMGEncGfx6, 0x2, 0x8 }, // 944
  { IMAGE_GATHER4_C_O_V4_V3, IMAGE_GATHER4_C_O, MIMGEncGfx6, 0x4, 0x3 }, // 945
  { IMAGE_GATHER4_C_O_V4_V4, IMAGE_GATHER4_C_O, MIMGEncGfx6, 0x4, 0x4 }, // 946
  { IMAGE_GATHER4_C_O_V4_V8, IMAGE_GATHER4_C_O, MIMGEncGfx6, 0x4, 0x8 }, // 947
  { IMAGE_GATHER4_C_O_V5_V3, IMAGE_GATHER4_C_O, MIMGEncGfx6, 0x5, 0x3 }, // 948
  { IMAGE_GATHER4_C_O_V5_V4, IMAGE_GATHER4_C_O, MIMGEncGfx6, 0x5, 0x4 }, // 949
  { IMAGE_GATHER4_C_O_V5_V8, IMAGE_GATHER4_C_O, MIMGEncGfx6, 0x5, 0x8 }, // 950
  { IMAGE_GATHER4_L_V2_V1_gfx10, IMAGE_GATHER4_L, MIMGEncGfx10Default, 0x2, 0x1 }, // 951
  { IMAGE_GATHER4_L_V2_V2_gfx10, IMAGE_GATHER4_L, MIMGEncGfx10Default, 0x2, 0x2 }, // 952
  { IMAGE_GATHER4_L_V2_V3_gfx10, IMAGE_GATHER4_L, MIMGEncGfx10Default, 0x2, 0x3 }, // 953
  { IMAGE_GATHER4_L_V2_V4_gfx10, IMAGE_GATHER4_L, MIMGEncGfx10Default, 0x2, 0x4 }, // 954
  { IMAGE_GATHER4_L_V4_V1_gfx10, IMAGE_GATHER4_L, MIMGEncGfx10Default, 0x4, 0x1 }, // 955
  { IMAGE_GATHER4_L_V4_V2_gfx10, IMAGE_GATHER4_L, MIMGEncGfx10Default, 0x4, 0x2 }, // 956
  { IMAGE_GATHER4_L_V4_V3_gfx10, IMAGE_GATHER4_L, MIMGEncGfx10Default, 0x4, 0x3 }, // 957
  { IMAGE_GATHER4_L_V4_V4_gfx10, IMAGE_GATHER4_L, MIMGEncGfx10Default, 0x4, 0x4 }, // 958
  { IMAGE_GATHER4_L_V5_V1_gfx10, IMAGE_GATHER4_L, MIMGEncGfx10Default, 0x5, 0x1 }, // 959
  { IMAGE_GATHER4_L_V5_V2_gfx10, IMAGE_GATHER4_L, MIMGEncGfx10Default, 0x5, 0x2 }, // 960
  { IMAGE_GATHER4_L_V5_V3_gfx10, IMAGE_GATHER4_L, MIMGEncGfx10Default, 0x5, 0x3 }, // 961
  { IMAGE_GATHER4_L_V5_V4_gfx10, IMAGE_GATHER4_L, MIMGEncGfx10Default, 0x5, 0x4 }, // 962
  { IMAGE_GATHER4_L_V2_V2_nsa_gfx10, IMAGE_GATHER4_L, MIMGEncGfx10NSA, 0x2, 0x2 }, // 963
  { IMAGE_GATHER4_L_V2_V3_nsa_gfx10, IMAGE_GATHER4_L, MIMGEncGfx10NSA, 0x2, 0x3 }, // 964
  { IMAGE_GATHER4_L_V2_V4_nsa_gfx10, IMAGE_GATHER4_L, MIMGEncGfx10NSA, 0x2, 0x4 }, // 965
  { IMAGE_GATHER4_L_V4_V2_nsa_gfx10, IMAGE_GATHER4_L, MIMGEncGfx10NSA, 0x4, 0x2 }, // 966
  { IMAGE_GATHER4_L_V4_V3_nsa_gfx10, IMAGE_GATHER4_L, MIMGEncGfx10NSA, 0x4, 0x3 }, // 967
  { IMAGE_GATHER4_L_V4_V4_nsa_gfx10, IMAGE_GATHER4_L, MIMGEncGfx10NSA, 0x4, 0x4 }, // 968
  { IMAGE_GATHER4_L_V5_V2_nsa_gfx10, IMAGE_GATHER4_L, MIMGEncGfx10NSA, 0x5, 0x2 }, // 969
  { IMAGE_GATHER4_L_V5_V3_nsa_gfx10, IMAGE_GATHER4_L, MIMGEncGfx10NSA, 0x5, 0x3 }, // 970
  { IMAGE_GATHER4_L_V5_V4_nsa_gfx10, IMAGE_GATHER4_L, MIMGEncGfx10NSA, 0x5, 0x4 }, // 971
  { IMAGE_GATHER4_L_V2_V1, IMAGE_GATHER4_L, MIMGEncGfx6, 0x2, 0x1 }, // 972
  { IMAGE_GATHER4_L_V2_V2, IMAGE_GATHER4_L, MIMGEncGfx6, 0x2, 0x2 }, // 973
  { IMAGE_GATHER4_L_V2_V3, IMAGE_GATHER4_L, MIMGEncGfx6, 0x2, 0x3 }, // 974
  { IMAGE_GATHER4_L_V2_V4, IMAGE_GATHER4_L, MIMGEncGfx6, 0x2, 0x4 }, // 975
  { IMAGE_GATHER4_L_V4_V1, IMAGE_GATHER4_L, MIMGEncGfx6, 0x4, 0x1 }, // 976
  { IMAGE_GATHER4_L_V4_V2, IMAGE_GATHER4_L, MIMGEncGfx6, 0x4, 0x2 }, // 977
  { IMAGE_GATHER4_L_V4_V3, IMAGE_GATHER4_L, MIMGEncGfx6, 0x4, 0x3 }, // 978
  { IMAGE_GATHER4_L_V4_V4, IMAGE_GATHER4_L, MIMGEncGfx6, 0x4, 0x4 }, // 979
  { IMAGE_GATHER4_L_V5_V1, IMAGE_GATHER4_L, MIMGEncGfx6, 0x5, 0x1 }, // 980
  { IMAGE_GATHER4_L_V5_V2, IMAGE_GATHER4_L, MIMGEncGfx6, 0x5, 0x2 }, // 981
  { IMAGE_GATHER4_L_V5_V3, IMAGE_GATHER4_L, MIMGEncGfx6, 0x5, 0x3 }, // 982
  { IMAGE_GATHER4_L_V5_V4, IMAGE_GATHER4_L, MIMGEncGfx6, 0x5, 0x4 }, // 983
  { IMAGE_GATHER4_LZ_V2_V1_gfx10, IMAGE_GATHER4_LZ, MIMGEncGfx10Default, 0x2, 0x1 }, // 984
  { IMAGE_GATHER4_LZ_V2_V2_gfx10, IMAGE_GATHER4_LZ, MIMGEncGfx10Default, 0x2, 0x2 }, // 985
  { IMAGE_GATHER4_LZ_V2_V3_gfx10, IMAGE_GATHER4_LZ, MIMGEncGfx10Default, 0x2, 0x3 }, // 986
  { IMAGE_GATHER4_LZ_V2_V4_gfx10, IMAGE_GATHER4_LZ, MIMGEncGfx10Default, 0x2, 0x4 }, // 987
  { IMAGE_GATHER4_LZ_V4_V1_gfx10, IMAGE_GATHER4_LZ, MIMGEncGfx10Default, 0x4, 0x1 }, // 988
  { IMAGE_GATHER4_LZ_V4_V2_gfx10, IMAGE_GATHER4_LZ, MIMGEncGfx10Default, 0x4, 0x2 }, // 989
  { IMAGE_GATHER4_LZ_V4_V3_gfx10, IMAGE_GATHER4_LZ, MIMGEncGfx10Default, 0x4, 0x3 }, // 990
  { IMAGE_GATHER4_LZ_V4_V4_gfx10, IMAGE_GATHER4_LZ, MIMGEncGfx10Default, 0x4, 0x4 }, // 991
  { IMAGE_GATHER4_LZ_V5_V1_gfx10, IMAGE_GATHER4_LZ, MIMGEncGfx10Default, 0x5, 0x1 }, // 992
  { IMAGE_GATHER4_LZ_V5_V2_gfx10, IMAGE_GATHER4_LZ, MIMGEncGfx10Default, 0x5, 0x2 }, // 993
  { IMAGE_GATHER4_LZ_V5_V3_gfx10, IMAGE_GATHER4_LZ, MIMGEncGfx10Default, 0x5, 0x3 }, // 994
  { IMAGE_GATHER4_LZ_V5_V4_gfx10, IMAGE_GATHER4_LZ, MIMGEncGfx10Default, 0x5, 0x4 }, // 995
  { IMAGE_GATHER4_LZ_V2_V2_nsa_gfx10, IMAGE_GATHER4_LZ, MIMGEncGfx10NSA, 0x2, 0x2 }, // 996
  { IMAGE_GATHER4_LZ_V2_V3_nsa_gfx10, IMAGE_GATHER4_LZ, MIMGEncGfx10NSA, 0x2, 0x3 }, // 997
  { IMAGE_GATHER4_LZ_V4_V2_nsa_gfx10, IMAGE_GATHER4_LZ, MIMGEncGfx10NSA, 0x4, 0x2 }, // 998
  { IMAGE_GATHER4_LZ_V4_V3_nsa_gfx10, IMAGE_GATHER4_LZ, MIMGEncGfx10NSA, 0x4, 0x3 }, // 999
  { IMAGE_GATHER4_LZ_V5_V2_nsa_gfx10, IMAGE_GATHER4_LZ, MIMGEncGfx10NSA, 0x5, 0x2 }, // 1000
  { IMAGE_GATHER4_LZ_V5_V3_nsa_gfx10, IMAGE_GATHER4_LZ, MIMGEncGfx10NSA, 0x5, 0x3 }, // 1001
  { IMAGE_GATHER4_LZ_V2_V1, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x2, 0x1 }, // 1002
  { IMAGE_GATHER4_LZ_V2_V2, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x2, 0x2 }, // 1003
  { IMAGE_GATHER4_LZ_V2_V3, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x2, 0x3 }, // 1004
  { IMAGE_GATHER4_LZ_V2_V4, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x2, 0x4 }, // 1005
  { IMAGE_GATHER4_LZ_V4_V1, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x4, 0x1 }, // 1006
  { IMAGE_GATHER4_LZ_V4_V2, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x4, 0x2 }, // 1007
  { IMAGE_GATHER4_LZ_V4_V3, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x4, 0x3 }, // 1008
  { IMAGE_GATHER4_LZ_V4_V4, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x4, 0x4 }, // 1009
  { IMAGE_GATHER4_LZ_V5_V1, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x5, 0x1 }, // 1010
  { IMAGE_GATHER4_LZ_V5_V2, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x5, 0x2 }, // 1011
  { IMAGE_GATHER4_LZ_V5_V3, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x5, 0x3 }, // 1012
  { IMAGE_GATHER4_LZ_V5_V4, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x5, 0x4 }, // 1013
  { IMAGE_GATHER4_LZ_O_V2_V2_gfx10, IMAGE_GATHER4_LZ_O, MIMGEncGfx10Default, 0x2, 0x2 }, // 1014
  { IMAGE_GATHER4_LZ_O_V2_V3_gfx10, IMAGE_GATHER4_LZ_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 1015
  { IMAGE_GATHER4_LZ_O_V2_V4_gfx10, IMAGE_GATHER4_LZ_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 1016
  { IMAGE_GATHER4_LZ_O_V4_V2_gfx10, IMAGE_GATHER4_LZ_O, MIMGEncGfx10Default, 0x4, 0x2 }, // 1017
  { IMAGE_GATHER4_LZ_O_V4_V3_gfx10, IMAGE_GATHER4_LZ_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 1018
  { IMAGE_GATHER4_LZ_O_V4_V4_gfx10, IMAGE_GATHER4_LZ_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 1019
  { IMAGE_GATHER4_LZ_O_V5_V2_gfx10, IMAGE_GATHER4_LZ_O, MIMGEncGfx10Default, 0x5, 0x2 }, // 1020
  { IMAGE_GATHER4_LZ_O_V5_V3_gfx10, IMAGE_GATHER4_LZ_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 1021
  { IMAGE_GATHER4_LZ_O_V5_V4_gfx10, IMAGE_GATHER4_LZ_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 1022
  { IMAGE_GATHER4_LZ_O_V2_V2_nsa_gfx10, IMAGE_GATHER4_LZ_O, MIMGEncGfx10NSA, 0x2, 0x2 }, // 1023
  { IMAGE_GATHER4_LZ_O_V2_V3_nsa_gfx10, IMAGE_GATHER4_LZ_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 1024
  { IMAGE_GATHER4_LZ_O_V2_V4_nsa_gfx10, IMAGE_GATHER4_LZ_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 1025
  { IMAGE_GATHER4_LZ_O_V4_V2_nsa_gfx10, IMAGE_GATHER4_LZ_O, MIMGEncGfx10NSA, 0x4, 0x2 }, // 1026
  { IMAGE_GATHER4_LZ_O_V4_V3_nsa_gfx10, IMAGE_GATHER4_LZ_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 1027
  { IMAGE_GATHER4_LZ_O_V4_V4_nsa_gfx10, IMAGE_GATHER4_LZ_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 1028
  { IMAGE_GATHER4_LZ_O_V5_V2_nsa_gfx10, IMAGE_GATHER4_LZ_O, MIMGEncGfx10NSA, 0x5, 0x2 }, // 1029
  { IMAGE_GATHER4_LZ_O_V5_V3_nsa_gfx10, IMAGE_GATHER4_LZ_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 1030
  { IMAGE_GATHER4_LZ_O_V5_V4_nsa_gfx10, IMAGE_GATHER4_LZ_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 1031
  { IMAGE_GATHER4_LZ_O_V2_V2, IMAGE_GATHER4_LZ_O, MIMGEncGfx6, 0x2, 0x2 }, // 1032
  { IMAGE_GATHER4_LZ_O_V2_V3, IMAGE_GATHER4_LZ_O, MIMGEncGfx6, 0x2, 0x3 }, // 1033
  { IMAGE_GATHER4_LZ_O_V2_V4, IMAGE_GATHER4_LZ_O, MIMGEncGfx6, 0x2, 0x4 }, // 1034
  { IMAGE_GATHER4_LZ_O_V4_V2, IMAGE_GATHER4_LZ_O, MIMGEncGfx6, 0x4, 0x2 }, // 1035
  { IMAGE_GATHER4_LZ_O_V4_V3, IMAGE_GATHER4_LZ_O, MIMGEncGfx6, 0x4, 0x3 }, // 1036
  { IMAGE_GATHER4_LZ_O_V4_V4, IMAGE_GATHER4_LZ_O, MIMGEncGfx6, 0x4, 0x4 }, // 1037
  { IMAGE_GATHER4_LZ_O_V5_V2, IMAGE_GATHER4_LZ_O, MIMGEncGfx6, 0x5, 0x2 }, // 1038
  { IMAGE_GATHER4_LZ_O_V5_V3, IMAGE_GATHER4_LZ_O, MIMGEncGfx6, 0x5, 0x3 }, // 1039
  { IMAGE_GATHER4_LZ_O_V5_V4, IMAGE_GATHER4_LZ_O, MIMGEncGfx6, 0x5, 0x4 }, // 1040
  { IMAGE_GATHER4_L_O_V2_V2_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10Default, 0x2, 0x2 }, // 1041
  { IMAGE_GATHER4_L_O_V2_V3_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 1042
  { IMAGE_GATHER4_L_O_V2_V4_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 1043
  { IMAGE_GATHER4_L_O_V2_V8_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 1044
  { IMAGE_GATHER4_L_O_V4_V2_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10Default, 0x4, 0x2 }, // 1045
  { IMAGE_GATHER4_L_O_V4_V3_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 1046
  { IMAGE_GATHER4_L_O_V4_V4_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 1047
  { IMAGE_GATHER4_L_O_V4_V8_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 1048
  { IMAGE_GATHER4_L_O_V5_V2_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10Default, 0x5, 0x2 }, // 1049
  { IMAGE_GATHER4_L_O_V5_V3_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 1050
  { IMAGE_GATHER4_L_O_V5_V4_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 1051
  { IMAGE_GATHER4_L_O_V5_V8_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 1052
  { IMAGE_GATHER4_L_O_V2_V2_nsa_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10NSA, 0x2, 0x2 }, // 1053
  { IMAGE_GATHER4_L_O_V2_V3_nsa_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 1054
  { IMAGE_GATHER4_L_O_V2_V4_nsa_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 1055
  { IMAGE_GATHER4_L_O_V2_V5_nsa_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 1056
  { IMAGE_GATHER4_L_O_V4_V2_nsa_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10NSA, 0x4, 0x2 }, // 1057
  { IMAGE_GATHER4_L_O_V4_V3_nsa_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 1058
  { IMAGE_GATHER4_L_O_V4_V4_nsa_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 1059
  { IMAGE_GATHER4_L_O_V4_V5_nsa_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 1060
  { IMAGE_GATHER4_L_O_V5_V2_nsa_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10NSA, 0x5, 0x2 }, // 1061
  { IMAGE_GATHER4_L_O_V5_V3_nsa_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 1062
  { IMAGE_GATHER4_L_O_V5_V4_nsa_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 1063
  { IMAGE_GATHER4_L_O_V5_V5_nsa_gfx10, IMAGE_GATHER4_L_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 1064
  { IMAGE_GATHER4_L_O_V2_V2, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x2, 0x2 }, // 1065
  { IMAGE_GATHER4_L_O_V2_V3, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x2, 0x3 }, // 1066
  { IMAGE_GATHER4_L_O_V2_V4, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x2, 0x4 }, // 1067
  { IMAGE_GATHER4_L_O_V2_V8, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x2, 0x8 }, // 1068
  { IMAGE_GATHER4_L_O_V4_V2, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x4, 0x2 }, // 1069
  { IMAGE_GATHER4_L_O_V4_V3, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x4, 0x3 }, // 1070
  { IMAGE_GATHER4_L_O_V4_V4, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x4, 0x4 }, // 1071
  { IMAGE_GATHER4_L_O_V4_V8, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x4, 0x8 }, // 1072
  { IMAGE_GATHER4_L_O_V5_V2, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x5, 0x2 }, // 1073
  { IMAGE_GATHER4_L_O_V5_V3, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x5, 0x3 }, // 1074
  { IMAGE_GATHER4_L_O_V5_V4, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x5, 0x4 }, // 1075
  { IMAGE_GATHER4_L_O_V5_V8, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x5, 0x8 }, // 1076
  { IMAGE_GATHER4_O_V2_V2_gfx10, IMAGE_GATHER4_O, MIMGEncGfx10Default, 0x2, 0x2 }, // 1077
  { IMAGE_GATHER4_O_V2_V3_gfx10, IMAGE_GATHER4_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 1078
  { IMAGE_GATHER4_O_V2_V4_gfx10, IMAGE_GATHER4_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 1079
  { IMAGE_GATHER4_O_V4_V2_gfx10, IMAGE_GATHER4_O, MIMGEncGfx10Default, 0x4, 0x2 }, // 1080
  { IMAGE_GATHER4_O_V4_V3_gfx10, IMAGE_GATHER4_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 1081
  { IMAGE_GATHER4_O_V4_V4_gfx10, IMAGE_GATHER4_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 1082
  { IMAGE_GATHER4_O_V5_V2_gfx10, IMAGE_GATHER4_O, MIMGEncGfx10Default, 0x5, 0x2 }, // 1083
  { IMAGE_GATHER4_O_V5_V3_gfx10, IMAGE_GATHER4_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 1084
  { IMAGE_GATHER4_O_V5_V4_gfx10, IMAGE_GATHER4_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 1085
  { IMAGE_GATHER4_O_V2_V2_nsa_gfx10, IMAGE_GATHER4_O, MIMGEncGfx10NSA, 0x2, 0x2 }, // 1086
  { IMAGE_GATHER4_O_V2_V3_nsa_gfx10, IMAGE_GATHER4_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 1087
  { IMAGE_GATHER4_O_V2_V4_nsa_gfx10, IMAGE_GATHER4_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 1088
  { IMAGE_GATHER4_O_V4_V2_nsa_gfx10, IMAGE_GATHER4_O, MIMGEncGfx10NSA, 0x4, 0x2 }, // 1089
  { IMAGE_GATHER4_O_V4_V3_nsa_gfx10, IMAGE_GATHER4_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 1090
  { IMAGE_GATHER4_O_V4_V4_nsa_gfx10, IMAGE_GATHER4_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 1091
  { IMAGE_GATHER4_O_V5_V2_nsa_gfx10, IMAGE_GATHER4_O, MIMGEncGfx10NSA, 0x5, 0x2 }, // 1092
  { IMAGE_GATHER4_O_V5_V3_nsa_gfx10, IMAGE_GATHER4_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 1093
  { IMAGE_GATHER4_O_V5_V4_nsa_gfx10, IMAGE_GATHER4_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 1094
  { IMAGE_GATHER4_O_V2_V2, IMAGE_GATHER4_O, MIMGEncGfx6, 0x2, 0x2 }, // 1095
  { IMAGE_GATHER4_O_V2_V3, IMAGE_GATHER4_O, MIMGEncGfx6, 0x2, 0x3 }, // 1096
  { IMAGE_GATHER4_O_V2_V4, IMAGE_GATHER4_O, MIMGEncGfx6, 0x2, 0x4 }, // 1097
  { IMAGE_GATHER4_O_V4_V2, IMAGE_GATHER4_O, MIMGEncGfx6, 0x4, 0x2 }, // 1098
  { IMAGE_GATHER4_O_V4_V3, IMAGE_GATHER4_O, MIMGEncGfx6, 0x4, 0x3 }, // 1099
  { IMAGE_GATHER4_O_V4_V4, IMAGE_GATHER4_O, MIMGEncGfx6, 0x4, 0x4 }, // 1100
  { IMAGE_GATHER4_O_V5_V2, IMAGE_GATHER4_O, MIMGEncGfx6, 0x5, 0x2 }, // 1101
  { IMAGE_GATHER4_O_V5_V3, IMAGE_GATHER4_O, MIMGEncGfx6, 0x5, 0x3 }, // 1102
  { IMAGE_GATHER4_O_V5_V4, IMAGE_GATHER4_O, MIMGEncGfx6, 0x5, 0x4 }, // 1103
  { IMAGE_GET_LOD_V1_V1_gfx10, IMAGE_GET_LOD, MIMGEncGfx10Default, 0x1, 0x1 }, // 1104
  { IMAGE_GET_LOD_V1_V2_gfx10, IMAGE_GET_LOD, MIMGEncGfx10Default, 0x1, 0x2 }, // 1105
  { IMAGE_GET_LOD_V1_V3_gfx10, IMAGE_GET_LOD, MIMGEncGfx10Default, 0x1, 0x3 }, // 1106
  { IMAGE_GET_LOD_V1_V4_gfx10, IMAGE_GET_LOD, MIMGEncGfx10Default, 0x1, 0x4 }, // 1107
  { IMAGE_GET_LOD_V2_V1_gfx10, IMAGE_GET_LOD, MIMGEncGfx10Default, 0x2, 0x1 }, // 1108
  { IMAGE_GET_LOD_V2_V2_gfx10, IMAGE_GET_LOD, MIMGEncGfx10Default, 0x2, 0x2 }, // 1109
  { IMAGE_GET_LOD_V2_V3_gfx10, IMAGE_GET_LOD, MIMGEncGfx10Default, 0x2, 0x3 }, // 1110
  { IMAGE_GET_LOD_V2_V4_gfx10, IMAGE_GET_LOD, MIMGEncGfx10Default, 0x2, 0x4 }, // 1111
  { IMAGE_GET_LOD_V3_V1_gfx10, IMAGE_GET_LOD, MIMGEncGfx10Default, 0x3, 0x1 }, // 1112
  { IMAGE_GET_LOD_V3_V2_gfx10, IMAGE_GET_LOD, MIMGEncGfx10Default, 0x3, 0x2 }, // 1113
  { IMAGE_GET_LOD_V3_V3_gfx10, IMAGE_GET_LOD, MIMGEncGfx10Default, 0x3, 0x3 }, // 1114
  { IMAGE_GET_LOD_V3_V4_gfx10, IMAGE_GET_LOD, MIMGEncGfx10Default, 0x3, 0x4 }, // 1115
  { IMAGE_GET_LOD_V4_V1_gfx10, IMAGE_GET_LOD, MIMGEncGfx10Default, 0x4, 0x1 }, // 1116
  { IMAGE_GET_LOD_V4_V2_gfx10, IMAGE_GET_LOD, MIMGEncGfx10Default, 0x4, 0x2 }, // 1117
  { IMAGE_GET_LOD_V4_V3_gfx10, IMAGE_GET_LOD, MIMGEncGfx10Default, 0x4, 0x3 }, // 1118
  { IMAGE_GET_LOD_V4_V4_gfx10, IMAGE_GET_LOD, MIMGEncGfx10Default, 0x4, 0x4 }, // 1119
  { IMAGE_GET_LOD_V5_V1_gfx10, IMAGE_GET_LOD, MIMGEncGfx10Default, 0x5, 0x1 }, // 1120
  { IMAGE_GET_LOD_V5_V2_gfx10, IMAGE_GET_LOD, MIMGEncGfx10Default, 0x5, 0x2 }, // 1121
  { IMAGE_GET_LOD_V5_V3_gfx10, IMAGE_GET_LOD, MIMGEncGfx10Default, 0x5, 0x3 }, // 1122
  { IMAGE_GET_LOD_V5_V4_gfx10, IMAGE_GET_LOD, MIMGEncGfx10Default, 0x5, 0x4 }, // 1123
  { IMAGE_GET_LOD_V1_V2_nsa_gfx10, IMAGE_GET_LOD, MIMGEncGfx10NSA, 0x1, 0x2 }, // 1124
  { IMAGE_GET_LOD_V1_V3_nsa_gfx10, IMAGE_GET_LOD, MIMGEncGfx10NSA, 0x1, 0x3 }, // 1125
  { IMAGE_GET_LOD_V2_V2_nsa_gfx10, IMAGE_GET_LOD, MIMGEncGfx10NSA, 0x2, 0x2 }, // 1126
  { IMAGE_GET_LOD_V2_V3_nsa_gfx10, IMAGE_GET_LOD, MIMGEncGfx10NSA, 0x2, 0x3 }, // 1127
  { IMAGE_GET_LOD_V3_V2_nsa_gfx10, IMAGE_GET_LOD, MIMGEncGfx10NSA, 0x3, 0x2 }, // 1128
  { IMAGE_GET_LOD_V3_V3_nsa_gfx10, IMAGE_GET_LOD, MIMGEncGfx10NSA, 0x3, 0x3 }, // 1129
  { IMAGE_GET_LOD_V4_V2_nsa_gfx10, IMAGE_GET_LOD, MIMGEncGfx10NSA, 0x4, 0x2 }, // 1130
  { IMAGE_GET_LOD_V4_V3_nsa_gfx10, IMAGE_GET_LOD, MIMGEncGfx10NSA, 0x4, 0x3 }, // 1131
  { IMAGE_GET_LOD_V5_V2_nsa_gfx10, IMAGE_GET_LOD, MIMGEncGfx10NSA, 0x5, 0x2 }, // 1132
  { IMAGE_GET_LOD_V5_V3_nsa_gfx10, IMAGE_GET_LOD, MIMGEncGfx10NSA, 0x5, 0x3 }, // 1133
  { IMAGE_GET_LOD_V1_V1, IMAGE_GET_LOD, MIMGEncGfx6, 0x1, 0x1 }, // 1134
  { IMAGE_GET_LOD_V1_V2, IMAGE_GET_LOD, MIMGEncGfx6, 0x1, 0x2 }, // 1135
  { IMAGE_GET_LOD_V1_V3, IMAGE_GET_LOD, MIMGEncGfx6, 0x1, 0x3 }, // 1136
  { IMAGE_GET_LOD_V1_V4, IMAGE_GET_LOD, MIMGEncGfx6, 0x1, 0x4 }, // 1137
  { IMAGE_GET_LOD_V2_V1, IMAGE_GET_LOD, MIMGEncGfx6, 0x2, 0x1 }, // 1138
  { IMAGE_GET_LOD_V2_V2, IMAGE_GET_LOD, MIMGEncGfx6, 0x2, 0x2 }, // 1139
  { IMAGE_GET_LOD_V2_V3, IMAGE_GET_LOD, MIMGEncGfx6, 0x2, 0x3 }, // 1140
  { IMAGE_GET_LOD_V2_V4, IMAGE_GET_LOD, MIMGEncGfx6, 0x2, 0x4 }, // 1141
  { IMAGE_GET_LOD_V3_V1, IMAGE_GET_LOD, MIMGEncGfx6, 0x3, 0x1 }, // 1142
  { IMAGE_GET_LOD_V3_V2, IMAGE_GET_LOD, MIMGEncGfx6, 0x3, 0x2 }, // 1143
  { IMAGE_GET_LOD_V3_V3, IMAGE_GET_LOD, MIMGEncGfx6, 0x3, 0x3 }, // 1144
  { IMAGE_GET_LOD_V3_V4, IMAGE_GET_LOD, MIMGEncGfx6, 0x3, 0x4 }, // 1145
  { IMAGE_GET_LOD_V4_V1, IMAGE_GET_LOD, MIMGEncGfx6, 0x4, 0x1 }, // 1146
  { IMAGE_GET_LOD_V4_V2, IMAGE_GET_LOD, MIMGEncGfx6, 0x4, 0x2 }, // 1147
  { IMAGE_GET_LOD_V4_V3, IMAGE_GET_LOD, MIMGEncGfx6, 0x4, 0x3 }, // 1148
  { IMAGE_GET_LOD_V4_V4, IMAGE_GET_LOD, MIMGEncGfx6, 0x4, 0x4 }, // 1149
  { IMAGE_GET_LOD_V5_V1, IMAGE_GET_LOD, MIMGEncGfx6, 0x5, 0x1 }, // 1150
  { IMAGE_GET_LOD_V5_V2, IMAGE_GET_LOD, MIMGEncGfx6, 0x5, 0x2 }, // 1151
  { IMAGE_GET_LOD_V5_V3, IMAGE_GET_LOD, MIMGEncGfx6, 0x5, 0x3 }, // 1152
  { IMAGE_GET_LOD_V5_V4, IMAGE_GET_LOD, MIMGEncGfx6, 0x5, 0x4 }, // 1153
  { IMAGE_GET_RESINFO_V1_V1_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10Default, 0x1, 0x1 }, // 1154
  { IMAGE_GET_RESINFO_V1_V2_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10Default, 0x1, 0x2 }, // 1155
  { IMAGE_GET_RESINFO_V1_V3_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10Default, 0x1, 0x3 }, // 1156
  { IMAGE_GET_RESINFO_V1_V4_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10Default, 0x1, 0x4 }, // 1157
  { IMAGE_GET_RESINFO_V2_V1_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10Default, 0x2, 0x1 }, // 1158
  { IMAGE_GET_RESINFO_V2_V2_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10Default, 0x2, 0x2 }, // 1159
  { IMAGE_GET_RESINFO_V2_V3_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10Default, 0x2, 0x3 }, // 1160
  { IMAGE_GET_RESINFO_V2_V4_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10Default, 0x2, 0x4 }, // 1161
  { IMAGE_GET_RESINFO_V3_V1_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10Default, 0x3, 0x1 }, // 1162
  { IMAGE_GET_RESINFO_V3_V2_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10Default, 0x3, 0x2 }, // 1163
  { IMAGE_GET_RESINFO_V3_V3_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10Default, 0x3, 0x3 }, // 1164
  { IMAGE_GET_RESINFO_V3_V4_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10Default, 0x3, 0x4 }, // 1165
  { IMAGE_GET_RESINFO_V4_V1_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10Default, 0x4, 0x1 }, // 1166
  { IMAGE_GET_RESINFO_V4_V2_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10Default, 0x4, 0x2 }, // 1167
  { IMAGE_GET_RESINFO_V4_V3_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10Default, 0x4, 0x3 }, // 1168
  { IMAGE_GET_RESINFO_V4_V4_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10Default, 0x4, 0x4 }, // 1169
  { IMAGE_GET_RESINFO_V5_V1_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10Default, 0x5, 0x1 }, // 1170
  { IMAGE_GET_RESINFO_V5_V2_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10Default, 0x5, 0x2 }, // 1171
  { IMAGE_GET_RESINFO_V5_V3_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10Default, 0x5, 0x3 }, // 1172
  { IMAGE_GET_RESINFO_V5_V4_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10Default, 0x5, 0x4 }, // 1173
  { IMAGE_GET_RESINFO_V1_V2_nsa_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10NSA, 0x1, 0x2 }, // 1174
  { IMAGE_GET_RESINFO_V1_V3_nsa_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10NSA, 0x1, 0x3 }, // 1175
  { IMAGE_GET_RESINFO_V1_V4_nsa_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10NSA, 0x1, 0x4 }, // 1176
  { IMAGE_GET_RESINFO_V2_V2_nsa_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10NSA, 0x2, 0x2 }, // 1177
  { IMAGE_GET_RESINFO_V2_V3_nsa_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10NSA, 0x2, 0x3 }, // 1178
  { IMAGE_GET_RESINFO_V2_V4_nsa_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10NSA, 0x2, 0x4 }, // 1179
  { IMAGE_GET_RESINFO_V3_V2_nsa_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10NSA, 0x3, 0x2 }, // 1180
  { IMAGE_GET_RESINFO_V3_V3_nsa_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10NSA, 0x3, 0x3 }, // 1181
  { IMAGE_GET_RESINFO_V3_V4_nsa_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10NSA, 0x3, 0x4 }, // 1182
  { IMAGE_GET_RESINFO_V4_V2_nsa_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10NSA, 0x4, 0x2 }, // 1183
  { IMAGE_GET_RESINFO_V4_V3_nsa_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10NSA, 0x4, 0x3 }, // 1184
  { IMAGE_GET_RESINFO_V4_V4_nsa_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10NSA, 0x4, 0x4 }, // 1185
  { IMAGE_GET_RESINFO_V5_V2_nsa_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10NSA, 0x5, 0x2 }, // 1186
  { IMAGE_GET_RESINFO_V5_V3_nsa_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10NSA, 0x5, 0x3 }, // 1187
  { IMAGE_GET_RESINFO_V5_V4_nsa_gfx10, IMAGE_GET_RESINFO, MIMGEncGfx10NSA, 0x5, 0x4 }, // 1188
  { IMAGE_GET_RESINFO_V1_V1, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x1, 0x1 }, // 1189
  { IMAGE_GET_RESINFO_V1_V2, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x1, 0x2 }, // 1190
  { IMAGE_GET_RESINFO_V1_V3, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x1, 0x3 }, // 1191
  { IMAGE_GET_RESINFO_V1_V4, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x1, 0x4 }, // 1192
  { IMAGE_GET_RESINFO_V2_V1, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x2, 0x1 }, // 1193
  { IMAGE_GET_RESINFO_V2_V2, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x2, 0x2 }, // 1194
  { IMAGE_GET_RESINFO_V2_V3, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x2, 0x3 }, // 1195
  { IMAGE_GET_RESINFO_V2_V4, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x2, 0x4 }, // 1196
  { IMAGE_GET_RESINFO_V3_V1, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x3, 0x1 }, // 1197
  { IMAGE_GET_RESINFO_V3_V2, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x3, 0x2 }, // 1198
  { IMAGE_GET_RESINFO_V3_V3, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x3, 0x3 }, // 1199
  { IMAGE_GET_RESINFO_V3_V4, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x3, 0x4 }, // 1200
  { IMAGE_GET_RESINFO_V4_V1, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x4, 0x1 }, // 1201
  { IMAGE_GET_RESINFO_V4_V2, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x4, 0x2 }, // 1202
  { IMAGE_GET_RESINFO_V4_V3, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x4, 0x3 }, // 1203
  { IMAGE_GET_RESINFO_V4_V4, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x4, 0x4 }, // 1204
  { IMAGE_GET_RESINFO_V5_V1, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x5, 0x1 }, // 1205
  { IMAGE_GET_RESINFO_V5_V2, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x5, 0x2 }, // 1206
  { IMAGE_GET_RESINFO_V5_V3, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x5, 0x3 }, // 1207
  { IMAGE_GET_RESINFO_V5_V4, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x5, 0x4 }, // 1208
  { IMAGE_LOAD_V1_V1_gfx10, IMAGE_LOAD, MIMGEncGfx10Default, 0x1, 0x1 }, // 1209
  { IMAGE_LOAD_V1_V2_gfx10, IMAGE_LOAD, MIMGEncGfx10Default, 0x1, 0x2 }, // 1210
  { IMAGE_LOAD_V1_V3_gfx10, IMAGE_LOAD, MIMGEncGfx10Default, 0x1, 0x3 }, // 1211
  { IMAGE_LOAD_V1_V4_gfx10, IMAGE_LOAD, MIMGEncGfx10Default, 0x1, 0x4 }, // 1212
  { IMAGE_LOAD_V2_V1_gfx10, IMAGE_LOAD, MIMGEncGfx10Default, 0x2, 0x1 }, // 1213
  { IMAGE_LOAD_V2_V2_gfx10, IMAGE_LOAD, MIMGEncGfx10Default, 0x2, 0x2 }, // 1214
  { IMAGE_LOAD_V2_V3_gfx10, IMAGE_LOAD, MIMGEncGfx10Default, 0x2, 0x3 }, // 1215
  { IMAGE_LOAD_V2_V4_gfx10, IMAGE_LOAD, MIMGEncGfx10Default, 0x2, 0x4 }, // 1216
  { IMAGE_LOAD_V3_V1_gfx10, IMAGE_LOAD, MIMGEncGfx10Default, 0x3, 0x1 }, // 1217
  { IMAGE_LOAD_V3_V2_gfx10, IMAGE_LOAD, MIMGEncGfx10Default, 0x3, 0x2 }, // 1218
  { IMAGE_LOAD_V3_V3_gfx10, IMAGE_LOAD, MIMGEncGfx10Default, 0x3, 0x3 }, // 1219
  { IMAGE_LOAD_V3_V4_gfx10, IMAGE_LOAD, MIMGEncGfx10Default, 0x3, 0x4 }, // 1220
  { IMAGE_LOAD_V4_V1_gfx10, IMAGE_LOAD, MIMGEncGfx10Default, 0x4, 0x1 }, // 1221
  { IMAGE_LOAD_V4_V2_gfx10, IMAGE_LOAD, MIMGEncGfx10Default, 0x4, 0x2 }, // 1222
  { IMAGE_LOAD_V4_V3_gfx10, IMAGE_LOAD, MIMGEncGfx10Default, 0x4, 0x3 }, // 1223
  { IMAGE_LOAD_V4_V4_gfx10, IMAGE_LOAD, MIMGEncGfx10Default, 0x4, 0x4 }, // 1224
  { IMAGE_LOAD_V5_V1_gfx10, IMAGE_LOAD, MIMGEncGfx10Default, 0x5, 0x1 }, // 1225
  { IMAGE_LOAD_V5_V2_gfx10, IMAGE_LOAD, MIMGEncGfx10Default, 0x5, 0x2 }, // 1226
  { IMAGE_LOAD_V5_V3_gfx10, IMAGE_LOAD, MIMGEncGfx10Default, 0x5, 0x3 }, // 1227
  { IMAGE_LOAD_V5_V4_gfx10, IMAGE_LOAD, MIMGEncGfx10Default, 0x5, 0x4 }, // 1228
  { IMAGE_LOAD_V1_V2_nsa_gfx10, IMAGE_LOAD, MIMGEncGfx10NSA, 0x1, 0x2 }, // 1229
  { IMAGE_LOAD_V1_V3_nsa_gfx10, IMAGE_LOAD, MIMGEncGfx10NSA, 0x1, 0x3 }, // 1230
  { IMAGE_LOAD_V1_V4_nsa_gfx10, IMAGE_LOAD, MIMGEncGfx10NSA, 0x1, 0x4 }, // 1231
  { IMAGE_LOAD_V2_V2_nsa_gfx10, IMAGE_LOAD, MIMGEncGfx10NSA, 0x2, 0x2 }, // 1232
  { IMAGE_LOAD_V2_V3_nsa_gfx10, IMAGE_LOAD, MIMGEncGfx10NSA, 0x2, 0x3 }, // 1233
  { IMAGE_LOAD_V2_V4_nsa_gfx10, IMAGE_LOAD, MIMGEncGfx10NSA, 0x2, 0x4 }, // 1234
  { IMAGE_LOAD_V3_V2_nsa_gfx10, IMAGE_LOAD, MIMGEncGfx10NSA, 0x3, 0x2 }, // 1235
  { IMAGE_LOAD_V3_V3_nsa_gfx10, IMAGE_LOAD, MIMGEncGfx10NSA, 0x3, 0x3 }, // 1236
  { IMAGE_LOAD_V3_V4_nsa_gfx10, IMAGE_LOAD, MIMGEncGfx10NSA, 0x3, 0x4 }, // 1237
  { IMAGE_LOAD_V4_V2_nsa_gfx10, IMAGE_LOAD, MIMGEncGfx10NSA, 0x4, 0x2 }, // 1238
  { IMAGE_LOAD_V4_V3_nsa_gfx10, IMAGE_LOAD, MIMGEncGfx10NSA, 0x4, 0x3 }, // 1239
  { IMAGE_LOAD_V4_V4_nsa_gfx10, IMAGE_LOAD, MIMGEncGfx10NSA, 0x4, 0x4 }, // 1240
  { IMAGE_LOAD_V5_V2_nsa_gfx10, IMAGE_LOAD, MIMGEncGfx10NSA, 0x5, 0x2 }, // 1241
  { IMAGE_LOAD_V5_V3_nsa_gfx10, IMAGE_LOAD, MIMGEncGfx10NSA, 0x5, 0x3 }, // 1242
  { IMAGE_LOAD_V5_V4_nsa_gfx10, IMAGE_LOAD, MIMGEncGfx10NSA, 0x5, 0x4 }, // 1243
  { IMAGE_LOAD_V1_V1, IMAGE_LOAD, MIMGEncGfx6, 0x1, 0x1 }, // 1244
  { IMAGE_LOAD_V1_V2, IMAGE_LOAD, MIMGEncGfx6, 0x1, 0x2 }, // 1245
  { IMAGE_LOAD_V1_V3, IMAGE_LOAD, MIMGEncGfx6, 0x1, 0x3 }, // 1246
  { IMAGE_LOAD_V1_V4, IMAGE_LOAD, MIMGEncGfx6, 0x1, 0x4 }, // 1247
  { IMAGE_LOAD_V2_V1, IMAGE_LOAD, MIMGEncGfx6, 0x2, 0x1 }, // 1248
  { IMAGE_LOAD_V2_V2, IMAGE_LOAD, MIMGEncGfx6, 0x2, 0x2 }, // 1249
  { IMAGE_LOAD_V2_V3, IMAGE_LOAD, MIMGEncGfx6, 0x2, 0x3 }, // 1250
  { IMAGE_LOAD_V2_V4, IMAGE_LOAD, MIMGEncGfx6, 0x2, 0x4 }, // 1251
  { IMAGE_LOAD_V3_V1, IMAGE_LOAD, MIMGEncGfx6, 0x3, 0x1 }, // 1252
  { IMAGE_LOAD_V3_V2, IMAGE_LOAD, MIMGEncGfx6, 0x3, 0x2 }, // 1253
  { IMAGE_LOAD_V3_V3, IMAGE_LOAD, MIMGEncGfx6, 0x3, 0x3 }, // 1254
  { IMAGE_LOAD_V3_V4, IMAGE_LOAD, MIMGEncGfx6, 0x3, 0x4 }, // 1255
  { IMAGE_LOAD_V4_V1, IMAGE_LOAD, MIMGEncGfx6, 0x4, 0x1 }, // 1256
  { IMAGE_LOAD_V4_V2, IMAGE_LOAD, MIMGEncGfx6, 0x4, 0x2 }, // 1257
  { IMAGE_LOAD_V4_V3, IMAGE_LOAD, MIMGEncGfx6, 0x4, 0x3 }, // 1258
  { IMAGE_LOAD_V4_V4, IMAGE_LOAD, MIMGEncGfx6, 0x4, 0x4 }, // 1259
  { IMAGE_LOAD_V5_V1, IMAGE_LOAD, MIMGEncGfx6, 0x5, 0x1 }, // 1260
  { IMAGE_LOAD_V5_V2, IMAGE_LOAD, MIMGEncGfx6, 0x5, 0x2 }, // 1261
  { IMAGE_LOAD_V5_V3, IMAGE_LOAD, MIMGEncGfx6, 0x5, 0x3 }, // 1262
  { IMAGE_LOAD_V5_V4, IMAGE_LOAD, MIMGEncGfx6, 0x5, 0x4 }, // 1263
  { IMAGE_LOAD_MIP_V1_V1_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10Default, 0x1, 0x1 }, // 1264
  { IMAGE_LOAD_MIP_V1_V2_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10Default, 0x1, 0x2 }, // 1265
  { IMAGE_LOAD_MIP_V1_V3_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10Default, 0x1, 0x3 }, // 1266
  { IMAGE_LOAD_MIP_V1_V4_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10Default, 0x1, 0x4 }, // 1267
  { IMAGE_LOAD_MIP_V2_V1_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10Default, 0x2, 0x1 }, // 1268
  { IMAGE_LOAD_MIP_V2_V2_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10Default, 0x2, 0x2 }, // 1269
  { IMAGE_LOAD_MIP_V2_V3_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10Default, 0x2, 0x3 }, // 1270
  { IMAGE_LOAD_MIP_V2_V4_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10Default, 0x2, 0x4 }, // 1271
  { IMAGE_LOAD_MIP_V3_V1_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10Default, 0x3, 0x1 }, // 1272
  { IMAGE_LOAD_MIP_V3_V2_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10Default, 0x3, 0x2 }, // 1273
  { IMAGE_LOAD_MIP_V3_V3_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10Default, 0x3, 0x3 }, // 1274
  { IMAGE_LOAD_MIP_V3_V4_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10Default, 0x3, 0x4 }, // 1275
  { IMAGE_LOAD_MIP_V4_V1_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10Default, 0x4, 0x1 }, // 1276
  { IMAGE_LOAD_MIP_V4_V2_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10Default, 0x4, 0x2 }, // 1277
  { IMAGE_LOAD_MIP_V4_V3_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10Default, 0x4, 0x3 }, // 1278
  { IMAGE_LOAD_MIP_V4_V4_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10Default, 0x4, 0x4 }, // 1279
  { IMAGE_LOAD_MIP_V5_V1_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10Default, 0x5, 0x1 }, // 1280
  { IMAGE_LOAD_MIP_V5_V2_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10Default, 0x5, 0x2 }, // 1281
  { IMAGE_LOAD_MIP_V5_V3_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10Default, 0x5, 0x3 }, // 1282
  { IMAGE_LOAD_MIP_V5_V4_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10Default, 0x5, 0x4 }, // 1283
  { IMAGE_LOAD_MIP_V1_V2_nsa_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10NSA, 0x1, 0x2 }, // 1284
  { IMAGE_LOAD_MIP_V1_V3_nsa_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10NSA, 0x1, 0x3 }, // 1285
  { IMAGE_LOAD_MIP_V1_V4_nsa_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10NSA, 0x1, 0x4 }, // 1286
  { IMAGE_LOAD_MIP_V2_V2_nsa_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10NSA, 0x2, 0x2 }, // 1287
  { IMAGE_LOAD_MIP_V2_V3_nsa_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10NSA, 0x2, 0x3 }, // 1288
  { IMAGE_LOAD_MIP_V2_V4_nsa_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10NSA, 0x2, 0x4 }, // 1289
  { IMAGE_LOAD_MIP_V3_V2_nsa_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10NSA, 0x3, 0x2 }, // 1290
  { IMAGE_LOAD_MIP_V3_V3_nsa_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10NSA, 0x3, 0x3 }, // 1291
  { IMAGE_LOAD_MIP_V3_V4_nsa_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10NSA, 0x3, 0x4 }, // 1292
  { IMAGE_LOAD_MIP_V4_V2_nsa_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10NSA, 0x4, 0x2 }, // 1293
  { IMAGE_LOAD_MIP_V4_V3_nsa_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10NSA, 0x4, 0x3 }, // 1294
  { IMAGE_LOAD_MIP_V4_V4_nsa_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10NSA, 0x4, 0x4 }, // 1295
  { IMAGE_LOAD_MIP_V5_V2_nsa_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10NSA, 0x5, 0x2 }, // 1296
  { IMAGE_LOAD_MIP_V5_V3_nsa_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10NSA, 0x5, 0x3 }, // 1297
  { IMAGE_LOAD_MIP_V5_V4_nsa_gfx10, IMAGE_LOAD_MIP, MIMGEncGfx10NSA, 0x5, 0x4 }, // 1298
  { IMAGE_LOAD_MIP_V1_V1, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x1, 0x1 }, // 1299
  { IMAGE_LOAD_MIP_V1_V2, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x1, 0x2 }, // 1300
  { IMAGE_LOAD_MIP_V1_V3, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x1, 0x3 }, // 1301
  { IMAGE_LOAD_MIP_V1_V4, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x1, 0x4 }, // 1302
  { IMAGE_LOAD_MIP_V2_V1, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x2, 0x1 }, // 1303
  { IMAGE_LOAD_MIP_V2_V2, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x2, 0x2 }, // 1304
  { IMAGE_LOAD_MIP_V2_V3, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x2, 0x3 }, // 1305
  { IMAGE_LOAD_MIP_V2_V4, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x2, 0x4 }, // 1306
  { IMAGE_LOAD_MIP_V3_V1, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x3, 0x1 }, // 1307
  { IMAGE_LOAD_MIP_V3_V2, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x3, 0x2 }, // 1308
  { IMAGE_LOAD_MIP_V3_V3, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x3, 0x3 }, // 1309
  { IMAGE_LOAD_MIP_V3_V4, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x3, 0x4 }, // 1310
  { IMAGE_LOAD_MIP_V4_V1, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x4, 0x1 }, // 1311
  { IMAGE_LOAD_MIP_V4_V2, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x4, 0x2 }, // 1312
  { IMAGE_LOAD_MIP_V4_V3, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x4, 0x3 }, // 1313
  { IMAGE_LOAD_MIP_V4_V4, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x4, 0x4 }, // 1314
  { IMAGE_LOAD_MIP_V5_V1, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x5, 0x1 }, // 1315
  { IMAGE_LOAD_MIP_V5_V2, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x5, 0x2 }, // 1316
  { IMAGE_LOAD_MIP_V5_V3, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x5, 0x3 }, // 1317
  { IMAGE_LOAD_MIP_V5_V4, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x5, 0x4 }, // 1318
  { IMAGE_LOAD_MIP_PCK_V1_V1_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10Default, 0x1, 0x1 }, // 1319
  { IMAGE_LOAD_MIP_PCK_V1_V2_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10Default, 0x1, 0x2 }, // 1320
  { IMAGE_LOAD_MIP_PCK_V1_V3_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10Default, 0x1, 0x3 }, // 1321
  { IMAGE_LOAD_MIP_PCK_V1_V4_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10Default, 0x1, 0x4 }, // 1322
  { IMAGE_LOAD_MIP_PCK_V2_V1_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10Default, 0x2, 0x1 }, // 1323
  { IMAGE_LOAD_MIP_PCK_V2_V2_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10Default, 0x2, 0x2 }, // 1324
  { IMAGE_LOAD_MIP_PCK_V2_V3_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10Default, 0x2, 0x3 }, // 1325
  { IMAGE_LOAD_MIP_PCK_V2_V4_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10Default, 0x2, 0x4 }, // 1326
  { IMAGE_LOAD_MIP_PCK_V3_V1_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10Default, 0x3, 0x1 }, // 1327
  { IMAGE_LOAD_MIP_PCK_V3_V2_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10Default, 0x3, 0x2 }, // 1328
  { IMAGE_LOAD_MIP_PCK_V3_V3_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10Default, 0x3, 0x3 }, // 1329
  { IMAGE_LOAD_MIP_PCK_V3_V4_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10Default, 0x3, 0x4 }, // 1330
  { IMAGE_LOAD_MIP_PCK_V4_V1_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10Default, 0x4, 0x1 }, // 1331
  { IMAGE_LOAD_MIP_PCK_V4_V2_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10Default, 0x4, 0x2 }, // 1332
  { IMAGE_LOAD_MIP_PCK_V4_V3_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10Default, 0x4, 0x3 }, // 1333
  { IMAGE_LOAD_MIP_PCK_V4_V4_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10Default, 0x4, 0x4 }, // 1334
  { IMAGE_LOAD_MIP_PCK_V5_V1_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10Default, 0x5, 0x1 }, // 1335
  { IMAGE_LOAD_MIP_PCK_V5_V2_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10Default, 0x5, 0x2 }, // 1336
  { IMAGE_LOAD_MIP_PCK_V5_V3_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10Default, 0x5, 0x3 }, // 1337
  { IMAGE_LOAD_MIP_PCK_V5_V4_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10Default, 0x5, 0x4 }, // 1338
  { IMAGE_LOAD_MIP_PCK_V1_V2_nsa_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10NSA, 0x1, 0x2 }, // 1339
  { IMAGE_LOAD_MIP_PCK_V1_V3_nsa_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10NSA, 0x1, 0x3 }, // 1340
  { IMAGE_LOAD_MIP_PCK_V1_V4_nsa_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10NSA, 0x1, 0x4 }, // 1341
  { IMAGE_LOAD_MIP_PCK_V2_V2_nsa_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10NSA, 0x2, 0x2 }, // 1342
  { IMAGE_LOAD_MIP_PCK_V2_V3_nsa_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10NSA, 0x2, 0x3 }, // 1343
  { IMAGE_LOAD_MIP_PCK_V2_V4_nsa_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10NSA, 0x2, 0x4 }, // 1344
  { IMAGE_LOAD_MIP_PCK_V3_V2_nsa_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10NSA, 0x3, 0x2 }, // 1345
  { IMAGE_LOAD_MIP_PCK_V3_V3_nsa_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10NSA, 0x3, 0x3 }, // 1346
  { IMAGE_LOAD_MIP_PCK_V3_V4_nsa_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10NSA, 0x3, 0x4 }, // 1347
  { IMAGE_LOAD_MIP_PCK_V4_V2_nsa_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10NSA, 0x4, 0x2 }, // 1348
  { IMAGE_LOAD_MIP_PCK_V4_V3_nsa_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10NSA, 0x4, 0x3 }, // 1349
  { IMAGE_LOAD_MIP_PCK_V4_V4_nsa_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10NSA, 0x4, 0x4 }, // 1350
  { IMAGE_LOAD_MIP_PCK_V5_V2_nsa_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10NSA, 0x5, 0x2 }, // 1351
  { IMAGE_LOAD_MIP_PCK_V5_V3_nsa_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10NSA, 0x5, 0x3 }, // 1352
  { IMAGE_LOAD_MIP_PCK_V5_V4_nsa_gfx10, IMAGE_LOAD_MIP_PCK, MIMGEncGfx10NSA, 0x5, 0x4 }, // 1353
  { IMAGE_LOAD_MIP_PCK_V1_V1, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x1, 0x1 }, // 1354
  { IMAGE_LOAD_MIP_PCK_V1_V2, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x1, 0x2 }, // 1355
  { IMAGE_LOAD_MIP_PCK_V1_V3, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x1, 0x3 }, // 1356
  { IMAGE_LOAD_MIP_PCK_V1_V4, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x1, 0x4 }, // 1357
  { IMAGE_LOAD_MIP_PCK_V2_V1, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x2, 0x1 }, // 1358
  { IMAGE_LOAD_MIP_PCK_V2_V2, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x2, 0x2 }, // 1359
  { IMAGE_LOAD_MIP_PCK_V2_V3, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x2, 0x3 }, // 1360
  { IMAGE_LOAD_MIP_PCK_V2_V4, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x2, 0x4 }, // 1361
  { IMAGE_LOAD_MIP_PCK_V3_V1, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x3, 0x1 }, // 1362
  { IMAGE_LOAD_MIP_PCK_V3_V2, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x3, 0x2 }, // 1363
  { IMAGE_LOAD_MIP_PCK_V3_V3, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x3, 0x3 }, // 1364
  { IMAGE_LOAD_MIP_PCK_V3_V4, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x3, 0x4 }, // 1365
  { IMAGE_LOAD_MIP_PCK_V4_V1, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x4, 0x1 }, // 1366
  { IMAGE_LOAD_MIP_PCK_V4_V2, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x4, 0x2 }, // 1367
  { IMAGE_LOAD_MIP_PCK_V4_V3, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x4, 0x3 }, // 1368
  { IMAGE_LOAD_MIP_PCK_V4_V4, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x4, 0x4 }, // 1369
  { IMAGE_LOAD_MIP_PCK_V5_V1, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x5, 0x1 }, // 1370
  { IMAGE_LOAD_MIP_PCK_V5_V2, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x5, 0x2 }, // 1371
  { IMAGE_LOAD_MIP_PCK_V5_V3, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x5, 0x3 }, // 1372
  { IMAGE_LOAD_MIP_PCK_V5_V4, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x5, 0x4 }, // 1373
  { IMAGE_LOAD_MIP_PCK_SGN_V1_V1_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10Default, 0x1, 0x1 }, // 1374
  { IMAGE_LOAD_MIP_PCK_SGN_V1_V2_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10Default, 0x1, 0x2 }, // 1375
  { IMAGE_LOAD_MIP_PCK_SGN_V1_V3_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10Default, 0x1, 0x3 }, // 1376
  { IMAGE_LOAD_MIP_PCK_SGN_V1_V4_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10Default, 0x1, 0x4 }, // 1377
  { IMAGE_LOAD_MIP_PCK_SGN_V2_V1_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10Default, 0x2, 0x1 }, // 1378
  { IMAGE_LOAD_MIP_PCK_SGN_V2_V2_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10Default, 0x2, 0x2 }, // 1379
  { IMAGE_LOAD_MIP_PCK_SGN_V2_V3_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10Default, 0x2, 0x3 }, // 1380
  { IMAGE_LOAD_MIP_PCK_SGN_V2_V4_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10Default, 0x2, 0x4 }, // 1381
  { IMAGE_LOAD_MIP_PCK_SGN_V3_V1_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10Default, 0x3, 0x1 }, // 1382
  { IMAGE_LOAD_MIP_PCK_SGN_V3_V2_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10Default, 0x3, 0x2 }, // 1383
  { IMAGE_LOAD_MIP_PCK_SGN_V3_V3_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10Default, 0x3, 0x3 }, // 1384
  { IMAGE_LOAD_MIP_PCK_SGN_V3_V4_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10Default, 0x3, 0x4 }, // 1385
  { IMAGE_LOAD_MIP_PCK_SGN_V4_V1_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10Default, 0x4, 0x1 }, // 1386
  { IMAGE_LOAD_MIP_PCK_SGN_V4_V2_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10Default, 0x4, 0x2 }, // 1387
  { IMAGE_LOAD_MIP_PCK_SGN_V4_V3_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10Default, 0x4, 0x3 }, // 1388
  { IMAGE_LOAD_MIP_PCK_SGN_V4_V4_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10Default, 0x4, 0x4 }, // 1389
  { IMAGE_LOAD_MIP_PCK_SGN_V5_V1_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10Default, 0x5, 0x1 }, // 1390
  { IMAGE_LOAD_MIP_PCK_SGN_V5_V2_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10Default, 0x5, 0x2 }, // 1391
  { IMAGE_LOAD_MIP_PCK_SGN_V5_V3_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10Default, 0x5, 0x3 }, // 1392
  { IMAGE_LOAD_MIP_PCK_SGN_V5_V4_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10Default, 0x5, 0x4 }, // 1393
  { IMAGE_LOAD_MIP_PCK_SGN_V1_V2_nsa_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10NSA, 0x1, 0x2 }, // 1394
  { IMAGE_LOAD_MIP_PCK_SGN_V1_V3_nsa_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10NSA, 0x1, 0x3 }, // 1395
  { IMAGE_LOAD_MIP_PCK_SGN_V1_V4_nsa_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10NSA, 0x1, 0x4 }, // 1396
  { IMAGE_LOAD_MIP_PCK_SGN_V2_V2_nsa_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10NSA, 0x2, 0x2 }, // 1397
  { IMAGE_LOAD_MIP_PCK_SGN_V2_V3_nsa_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10NSA, 0x2, 0x3 }, // 1398
  { IMAGE_LOAD_MIP_PCK_SGN_V2_V4_nsa_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10NSA, 0x2, 0x4 }, // 1399
  { IMAGE_LOAD_MIP_PCK_SGN_V3_V2_nsa_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10NSA, 0x3, 0x2 }, // 1400
  { IMAGE_LOAD_MIP_PCK_SGN_V3_V3_nsa_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10NSA, 0x3, 0x3 }, // 1401
  { IMAGE_LOAD_MIP_PCK_SGN_V3_V4_nsa_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10NSA, 0x3, 0x4 }, // 1402
  { IMAGE_LOAD_MIP_PCK_SGN_V4_V2_nsa_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10NSA, 0x4, 0x2 }, // 1403
  { IMAGE_LOAD_MIP_PCK_SGN_V4_V3_nsa_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10NSA, 0x4, 0x3 }, // 1404
  { IMAGE_LOAD_MIP_PCK_SGN_V4_V4_nsa_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10NSA, 0x4, 0x4 }, // 1405
  { IMAGE_LOAD_MIP_PCK_SGN_V5_V2_nsa_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10NSA, 0x5, 0x2 }, // 1406
  { IMAGE_LOAD_MIP_PCK_SGN_V5_V3_nsa_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10NSA, 0x5, 0x3 }, // 1407
  { IMAGE_LOAD_MIP_PCK_SGN_V5_V4_nsa_gfx10, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx10NSA, 0x5, 0x4 }, // 1408
  { IMAGE_LOAD_MIP_PCK_SGN_V1_V1, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x1, 0x1 }, // 1409
  { IMAGE_LOAD_MIP_PCK_SGN_V1_V2, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x1, 0x2 }, // 1410
  { IMAGE_LOAD_MIP_PCK_SGN_V1_V3, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x1, 0x3 }, // 1411
  { IMAGE_LOAD_MIP_PCK_SGN_V1_V4, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x1, 0x4 }, // 1412
  { IMAGE_LOAD_MIP_PCK_SGN_V2_V1, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x2, 0x1 }, // 1413
  { IMAGE_LOAD_MIP_PCK_SGN_V2_V2, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x2, 0x2 }, // 1414
  { IMAGE_LOAD_MIP_PCK_SGN_V2_V3, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x2, 0x3 }, // 1415
  { IMAGE_LOAD_MIP_PCK_SGN_V2_V4, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x2, 0x4 }, // 1416
  { IMAGE_LOAD_MIP_PCK_SGN_V3_V1, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x3, 0x1 }, // 1417
  { IMAGE_LOAD_MIP_PCK_SGN_V3_V2, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x3, 0x2 }, // 1418
  { IMAGE_LOAD_MIP_PCK_SGN_V3_V3, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x3, 0x3 }, // 1419
  { IMAGE_LOAD_MIP_PCK_SGN_V3_V4, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x3, 0x4 }, // 1420
  { IMAGE_LOAD_MIP_PCK_SGN_V4_V1, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x4, 0x1 }, // 1421
  { IMAGE_LOAD_MIP_PCK_SGN_V4_V2, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x4, 0x2 }, // 1422
  { IMAGE_LOAD_MIP_PCK_SGN_V4_V3, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x4, 0x3 }, // 1423
  { IMAGE_LOAD_MIP_PCK_SGN_V4_V4, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x4, 0x4 }, // 1424
  { IMAGE_LOAD_MIP_PCK_SGN_V5_V1, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x5, 0x1 }, // 1425
  { IMAGE_LOAD_MIP_PCK_SGN_V5_V2, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x5, 0x2 }, // 1426
  { IMAGE_LOAD_MIP_PCK_SGN_V5_V3, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x5, 0x3 }, // 1427
  { IMAGE_LOAD_MIP_PCK_SGN_V5_V4, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x5, 0x4 }, // 1428
  { IMAGE_LOAD_PCK_V1_V1_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10Default, 0x1, 0x1 }, // 1429
  { IMAGE_LOAD_PCK_V1_V2_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10Default, 0x1, 0x2 }, // 1430
  { IMAGE_LOAD_PCK_V1_V3_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10Default, 0x1, 0x3 }, // 1431
  { IMAGE_LOAD_PCK_V1_V4_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10Default, 0x1, 0x4 }, // 1432
  { IMAGE_LOAD_PCK_V2_V1_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10Default, 0x2, 0x1 }, // 1433
  { IMAGE_LOAD_PCK_V2_V2_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10Default, 0x2, 0x2 }, // 1434
  { IMAGE_LOAD_PCK_V2_V3_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10Default, 0x2, 0x3 }, // 1435
  { IMAGE_LOAD_PCK_V2_V4_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10Default, 0x2, 0x4 }, // 1436
  { IMAGE_LOAD_PCK_V3_V1_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10Default, 0x3, 0x1 }, // 1437
  { IMAGE_LOAD_PCK_V3_V2_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10Default, 0x3, 0x2 }, // 1438
  { IMAGE_LOAD_PCK_V3_V3_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10Default, 0x3, 0x3 }, // 1439
  { IMAGE_LOAD_PCK_V3_V4_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10Default, 0x3, 0x4 }, // 1440
  { IMAGE_LOAD_PCK_V4_V1_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10Default, 0x4, 0x1 }, // 1441
  { IMAGE_LOAD_PCK_V4_V2_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10Default, 0x4, 0x2 }, // 1442
  { IMAGE_LOAD_PCK_V4_V3_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10Default, 0x4, 0x3 }, // 1443
  { IMAGE_LOAD_PCK_V4_V4_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10Default, 0x4, 0x4 }, // 1444
  { IMAGE_LOAD_PCK_V5_V1_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10Default, 0x5, 0x1 }, // 1445
  { IMAGE_LOAD_PCK_V5_V2_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10Default, 0x5, 0x2 }, // 1446
  { IMAGE_LOAD_PCK_V5_V3_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10Default, 0x5, 0x3 }, // 1447
  { IMAGE_LOAD_PCK_V5_V4_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10Default, 0x5, 0x4 }, // 1448
  { IMAGE_LOAD_PCK_V1_V2_nsa_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10NSA, 0x1, 0x2 }, // 1449
  { IMAGE_LOAD_PCK_V1_V3_nsa_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10NSA, 0x1, 0x3 }, // 1450
  { IMAGE_LOAD_PCK_V1_V4_nsa_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10NSA, 0x1, 0x4 }, // 1451
  { IMAGE_LOAD_PCK_V2_V2_nsa_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10NSA, 0x2, 0x2 }, // 1452
  { IMAGE_LOAD_PCK_V2_V3_nsa_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10NSA, 0x2, 0x3 }, // 1453
  { IMAGE_LOAD_PCK_V2_V4_nsa_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10NSA, 0x2, 0x4 }, // 1454
  { IMAGE_LOAD_PCK_V3_V2_nsa_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10NSA, 0x3, 0x2 }, // 1455
  { IMAGE_LOAD_PCK_V3_V3_nsa_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10NSA, 0x3, 0x3 }, // 1456
  { IMAGE_LOAD_PCK_V3_V4_nsa_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10NSA, 0x3, 0x4 }, // 1457
  { IMAGE_LOAD_PCK_V4_V2_nsa_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10NSA, 0x4, 0x2 }, // 1458
  { IMAGE_LOAD_PCK_V4_V3_nsa_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10NSA, 0x4, 0x3 }, // 1459
  { IMAGE_LOAD_PCK_V4_V4_nsa_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10NSA, 0x4, 0x4 }, // 1460
  { IMAGE_LOAD_PCK_V5_V2_nsa_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10NSA, 0x5, 0x2 }, // 1461
  { IMAGE_LOAD_PCK_V5_V3_nsa_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10NSA, 0x5, 0x3 }, // 1462
  { IMAGE_LOAD_PCK_V5_V4_nsa_gfx10, IMAGE_LOAD_PCK, MIMGEncGfx10NSA, 0x5, 0x4 }, // 1463
  { IMAGE_LOAD_PCK_V1_V1, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x1, 0x1 }, // 1464
  { IMAGE_LOAD_PCK_V1_V2, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x1, 0x2 }, // 1465
  { IMAGE_LOAD_PCK_V1_V3, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x1, 0x3 }, // 1466
  { IMAGE_LOAD_PCK_V1_V4, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x1, 0x4 }, // 1467
  { IMAGE_LOAD_PCK_V2_V1, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x2, 0x1 }, // 1468
  { IMAGE_LOAD_PCK_V2_V2, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x2, 0x2 }, // 1469
  { IMAGE_LOAD_PCK_V2_V3, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x2, 0x3 }, // 1470
  { IMAGE_LOAD_PCK_V2_V4, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x2, 0x4 }, // 1471
  { IMAGE_LOAD_PCK_V3_V1, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x3, 0x1 }, // 1472
  { IMAGE_LOAD_PCK_V3_V2, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x3, 0x2 }, // 1473
  { IMAGE_LOAD_PCK_V3_V3, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x3, 0x3 }, // 1474
  { IMAGE_LOAD_PCK_V3_V4, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x3, 0x4 }, // 1475
  { IMAGE_LOAD_PCK_V4_V1, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x4, 0x1 }, // 1476
  { IMAGE_LOAD_PCK_V4_V2, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x4, 0x2 }, // 1477
  { IMAGE_LOAD_PCK_V4_V3, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x4, 0x3 }, // 1478
  { IMAGE_LOAD_PCK_V4_V4, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x4, 0x4 }, // 1479
  { IMAGE_LOAD_PCK_V5_V1, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x5, 0x1 }, // 1480
  { IMAGE_LOAD_PCK_V5_V2, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x5, 0x2 }, // 1481
  { IMAGE_LOAD_PCK_V5_V3, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x5, 0x3 }, // 1482
  { IMAGE_LOAD_PCK_V5_V4, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x5, 0x4 }, // 1483
  { IMAGE_LOAD_PCK_SGN_V1_V1_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10Default, 0x1, 0x1 }, // 1484
  { IMAGE_LOAD_PCK_SGN_V1_V2_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10Default, 0x1, 0x2 }, // 1485
  { IMAGE_LOAD_PCK_SGN_V1_V3_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10Default, 0x1, 0x3 }, // 1486
  { IMAGE_LOAD_PCK_SGN_V1_V4_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10Default, 0x1, 0x4 }, // 1487
  { IMAGE_LOAD_PCK_SGN_V2_V1_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10Default, 0x2, 0x1 }, // 1488
  { IMAGE_LOAD_PCK_SGN_V2_V2_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10Default, 0x2, 0x2 }, // 1489
  { IMAGE_LOAD_PCK_SGN_V2_V3_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10Default, 0x2, 0x3 }, // 1490
  { IMAGE_LOAD_PCK_SGN_V2_V4_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10Default, 0x2, 0x4 }, // 1491
  { IMAGE_LOAD_PCK_SGN_V3_V1_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10Default, 0x3, 0x1 }, // 1492
  { IMAGE_LOAD_PCK_SGN_V3_V2_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10Default, 0x3, 0x2 }, // 1493
  { IMAGE_LOAD_PCK_SGN_V3_V3_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10Default, 0x3, 0x3 }, // 1494
  { IMAGE_LOAD_PCK_SGN_V3_V4_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10Default, 0x3, 0x4 }, // 1495
  { IMAGE_LOAD_PCK_SGN_V4_V1_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10Default, 0x4, 0x1 }, // 1496
  { IMAGE_LOAD_PCK_SGN_V4_V2_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10Default, 0x4, 0x2 }, // 1497
  { IMAGE_LOAD_PCK_SGN_V4_V3_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10Default, 0x4, 0x3 }, // 1498
  { IMAGE_LOAD_PCK_SGN_V4_V4_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10Default, 0x4, 0x4 }, // 1499
  { IMAGE_LOAD_PCK_SGN_V5_V1_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10Default, 0x5, 0x1 }, // 1500
  { IMAGE_LOAD_PCK_SGN_V5_V2_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10Default, 0x5, 0x2 }, // 1501
  { IMAGE_LOAD_PCK_SGN_V5_V3_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10Default, 0x5, 0x3 }, // 1502
  { IMAGE_LOAD_PCK_SGN_V5_V4_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10Default, 0x5, 0x4 }, // 1503
  { IMAGE_LOAD_PCK_SGN_V1_V2_nsa_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10NSA, 0x1, 0x2 }, // 1504
  { IMAGE_LOAD_PCK_SGN_V1_V3_nsa_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10NSA, 0x1, 0x3 }, // 1505
  { IMAGE_LOAD_PCK_SGN_V1_V4_nsa_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10NSA, 0x1, 0x4 }, // 1506
  { IMAGE_LOAD_PCK_SGN_V2_V2_nsa_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10NSA, 0x2, 0x2 }, // 1507
  { IMAGE_LOAD_PCK_SGN_V2_V3_nsa_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10NSA, 0x2, 0x3 }, // 1508
  { IMAGE_LOAD_PCK_SGN_V2_V4_nsa_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10NSA, 0x2, 0x4 }, // 1509
  { IMAGE_LOAD_PCK_SGN_V3_V2_nsa_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10NSA, 0x3, 0x2 }, // 1510
  { IMAGE_LOAD_PCK_SGN_V3_V3_nsa_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10NSA, 0x3, 0x3 }, // 1511
  { IMAGE_LOAD_PCK_SGN_V3_V4_nsa_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10NSA, 0x3, 0x4 }, // 1512
  { IMAGE_LOAD_PCK_SGN_V4_V2_nsa_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10NSA, 0x4, 0x2 }, // 1513
  { IMAGE_LOAD_PCK_SGN_V4_V3_nsa_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10NSA, 0x4, 0x3 }, // 1514
  { IMAGE_LOAD_PCK_SGN_V4_V4_nsa_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10NSA, 0x4, 0x4 }, // 1515
  { IMAGE_LOAD_PCK_SGN_V5_V2_nsa_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10NSA, 0x5, 0x2 }, // 1516
  { IMAGE_LOAD_PCK_SGN_V5_V3_nsa_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10NSA, 0x5, 0x3 }, // 1517
  { IMAGE_LOAD_PCK_SGN_V5_V4_nsa_gfx10, IMAGE_LOAD_PCK_SGN, MIMGEncGfx10NSA, 0x5, 0x4 }, // 1518
  { IMAGE_LOAD_PCK_SGN_V1_V1, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x1, 0x1 }, // 1519
  { IMAGE_LOAD_PCK_SGN_V1_V2, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x1, 0x2 }, // 1520
  { IMAGE_LOAD_PCK_SGN_V1_V3, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x1, 0x3 }, // 1521
  { IMAGE_LOAD_PCK_SGN_V1_V4, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x1, 0x4 }, // 1522
  { IMAGE_LOAD_PCK_SGN_V2_V1, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x2, 0x1 }, // 1523
  { IMAGE_LOAD_PCK_SGN_V2_V2, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x2, 0x2 }, // 1524
  { IMAGE_LOAD_PCK_SGN_V2_V3, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x2, 0x3 }, // 1525
  { IMAGE_LOAD_PCK_SGN_V2_V4, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x2, 0x4 }, // 1526
  { IMAGE_LOAD_PCK_SGN_V3_V1, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x3, 0x1 }, // 1527
  { IMAGE_LOAD_PCK_SGN_V3_V2, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x3, 0x2 }, // 1528
  { IMAGE_LOAD_PCK_SGN_V3_V3, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x3, 0x3 }, // 1529
  { IMAGE_LOAD_PCK_SGN_V3_V4, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x3, 0x4 }, // 1530
  { IMAGE_LOAD_PCK_SGN_V4_V1, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x4, 0x1 }, // 1531
  { IMAGE_LOAD_PCK_SGN_V4_V2, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x4, 0x2 }, // 1532
  { IMAGE_LOAD_PCK_SGN_V4_V3, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x4, 0x3 }, // 1533
  { IMAGE_LOAD_PCK_SGN_V4_V4, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x4, 0x4 }, // 1534
  { IMAGE_LOAD_PCK_SGN_V5_V1, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x5, 0x1 }, // 1535
  { IMAGE_LOAD_PCK_SGN_V5_V2, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x5, 0x2 }, // 1536
  { IMAGE_LOAD_PCK_SGN_V5_V3, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x5, 0x3 }, // 1537
  { IMAGE_LOAD_PCK_SGN_V5_V4, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x5, 0x4 }, // 1538
  { IMAGE_SAMPLE_V1_V1_gfx10, IMAGE_SAMPLE, MIMGEncGfx10Default, 0x1, 0x1 }, // 1539
  { IMAGE_SAMPLE_V1_V2_gfx10, IMAGE_SAMPLE, MIMGEncGfx10Default, 0x1, 0x2 }, // 1540
  { IMAGE_SAMPLE_V1_V3_gfx10, IMAGE_SAMPLE, MIMGEncGfx10Default, 0x1, 0x3 }, // 1541
  { IMAGE_SAMPLE_V1_V4_gfx10, IMAGE_SAMPLE, MIMGEncGfx10Default, 0x1, 0x4 }, // 1542
  { IMAGE_SAMPLE_V2_V1_gfx10, IMAGE_SAMPLE, MIMGEncGfx10Default, 0x2, 0x1 }, // 1543
  { IMAGE_SAMPLE_V2_V2_gfx10, IMAGE_SAMPLE, MIMGEncGfx10Default, 0x2, 0x2 }, // 1544
  { IMAGE_SAMPLE_V2_V3_gfx10, IMAGE_SAMPLE, MIMGEncGfx10Default, 0x2, 0x3 }, // 1545
  { IMAGE_SAMPLE_V2_V4_gfx10, IMAGE_SAMPLE, MIMGEncGfx10Default, 0x2, 0x4 }, // 1546
  { IMAGE_SAMPLE_V3_V1_gfx10, IMAGE_SAMPLE, MIMGEncGfx10Default, 0x3, 0x1 }, // 1547
  { IMAGE_SAMPLE_V3_V2_gfx10, IMAGE_SAMPLE, MIMGEncGfx10Default, 0x3, 0x2 }, // 1548
  { IMAGE_SAMPLE_V3_V3_gfx10, IMAGE_SAMPLE, MIMGEncGfx10Default, 0x3, 0x3 }, // 1549
  { IMAGE_SAMPLE_V3_V4_gfx10, IMAGE_SAMPLE, MIMGEncGfx10Default, 0x3, 0x4 }, // 1550
  { IMAGE_SAMPLE_V4_V1_gfx10, IMAGE_SAMPLE, MIMGEncGfx10Default, 0x4, 0x1 }, // 1551
  { IMAGE_SAMPLE_V4_V2_gfx10, IMAGE_SAMPLE, MIMGEncGfx10Default, 0x4, 0x2 }, // 1552
  { IMAGE_SAMPLE_V4_V3_gfx10, IMAGE_SAMPLE, MIMGEncGfx10Default, 0x4, 0x3 }, // 1553
  { IMAGE_SAMPLE_V4_V4_gfx10, IMAGE_SAMPLE, MIMGEncGfx10Default, 0x4, 0x4 }, // 1554
  { IMAGE_SAMPLE_V5_V1_gfx10, IMAGE_SAMPLE, MIMGEncGfx10Default, 0x5, 0x1 }, // 1555
  { IMAGE_SAMPLE_V5_V2_gfx10, IMAGE_SAMPLE, MIMGEncGfx10Default, 0x5, 0x2 }, // 1556
  { IMAGE_SAMPLE_V5_V3_gfx10, IMAGE_SAMPLE, MIMGEncGfx10Default, 0x5, 0x3 }, // 1557
  { IMAGE_SAMPLE_V5_V4_gfx10, IMAGE_SAMPLE, MIMGEncGfx10Default, 0x5, 0x4 }, // 1558
  { IMAGE_SAMPLE_V1_V2_nsa_gfx10, IMAGE_SAMPLE, MIMGEncGfx10NSA, 0x1, 0x2 }, // 1559
  { IMAGE_SAMPLE_V1_V3_nsa_gfx10, IMAGE_SAMPLE, MIMGEncGfx10NSA, 0x1, 0x3 }, // 1560
  { IMAGE_SAMPLE_V2_V2_nsa_gfx10, IMAGE_SAMPLE, MIMGEncGfx10NSA, 0x2, 0x2 }, // 1561
  { IMAGE_SAMPLE_V2_V3_nsa_gfx10, IMAGE_SAMPLE, MIMGEncGfx10NSA, 0x2, 0x3 }, // 1562
  { IMAGE_SAMPLE_V3_V2_nsa_gfx10, IMAGE_SAMPLE, MIMGEncGfx10NSA, 0x3, 0x2 }, // 1563
  { IMAGE_SAMPLE_V3_V3_nsa_gfx10, IMAGE_SAMPLE, MIMGEncGfx10NSA, 0x3, 0x3 }, // 1564
  { IMAGE_SAMPLE_V4_V2_nsa_gfx10, IMAGE_SAMPLE, MIMGEncGfx10NSA, 0x4, 0x2 }, // 1565
  { IMAGE_SAMPLE_V4_V3_nsa_gfx10, IMAGE_SAMPLE, MIMGEncGfx10NSA, 0x4, 0x3 }, // 1566
  { IMAGE_SAMPLE_V5_V2_nsa_gfx10, IMAGE_SAMPLE, MIMGEncGfx10NSA, 0x5, 0x2 }, // 1567
  { IMAGE_SAMPLE_V5_V3_nsa_gfx10, IMAGE_SAMPLE, MIMGEncGfx10NSA, 0x5, 0x3 }, // 1568
  { IMAGE_SAMPLE_V1_V1, IMAGE_SAMPLE, MIMGEncGfx6, 0x1, 0x1 }, // 1569
  { IMAGE_SAMPLE_V1_V2, IMAGE_SAMPLE, MIMGEncGfx6, 0x1, 0x2 }, // 1570
  { IMAGE_SAMPLE_V1_V3, IMAGE_SAMPLE, MIMGEncGfx6, 0x1, 0x3 }, // 1571
  { IMAGE_SAMPLE_V1_V4, IMAGE_SAMPLE, MIMGEncGfx6, 0x1, 0x4 }, // 1572
  { IMAGE_SAMPLE_V2_V1, IMAGE_SAMPLE, MIMGEncGfx6, 0x2, 0x1 }, // 1573
  { IMAGE_SAMPLE_V2_V2, IMAGE_SAMPLE, MIMGEncGfx6, 0x2, 0x2 }, // 1574
  { IMAGE_SAMPLE_V2_V3, IMAGE_SAMPLE, MIMGEncGfx6, 0x2, 0x3 }, // 1575
  { IMAGE_SAMPLE_V2_V4, IMAGE_SAMPLE, MIMGEncGfx6, 0x2, 0x4 }, // 1576
  { IMAGE_SAMPLE_V3_V1, IMAGE_SAMPLE, MIMGEncGfx6, 0x3, 0x1 }, // 1577
  { IMAGE_SAMPLE_V3_V2, IMAGE_SAMPLE, MIMGEncGfx6, 0x3, 0x2 }, // 1578
  { IMAGE_SAMPLE_V3_V3, IMAGE_SAMPLE, MIMGEncGfx6, 0x3, 0x3 }, // 1579
  { IMAGE_SAMPLE_V3_V4, IMAGE_SAMPLE, MIMGEncGfx6, 0x3, 0x4 }, // 1580
  { IMAGE_SAMPLE_V4_V1, IMAGE_SAMPLE, MIMGEncGfx6, 0x4, 0x1 }, // 1581
  { IMAGE_SAMPLE_V4_V2, IMAGE_SAMPLE, MIMGEncGfx6, 0x4, 0x2 }, // 1582
  { IMAGE_SAMPLE_V4_V3, IMAGE_SAMPLE, MIMGEncGfx6, 0x4, 0x3 }, // 1583
  { IMAGE_SAMPLE_V4_V4, IMAGE_SAMPLE, MIMGEncGfx6, 0x4, 0x4 }, // 1584
  { IMAGE_SAMPLE_V5_V1, IMAGE_SAMPLE, MIMGEncGfx6, 0x5, 0x1 }, // 1585
  { IMAGE_SAMPLE_V5_V2, IMAGE_SAMPLE, MIMGEncGfx6, 0x5, 0x2 }, // 1586
  { IMAGE_SAMPLE_V5_V3, IMAGE_SAMPLE, MIMGEncGfx6, 0x5, 0x3 }, // 1587
  { IMAGE_SAMPLE_V5_V4, IMAGE_SAMPLE, MIMGEncGfx6, 0x5, 0x4 }, // 1588
  { IMAGE_SAMPLE_B_V1_V2_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10Default, 0x1, 0x2 }, // 1589
  { IMAGE_SAMPLE_B_V1_V3_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10Default, 0x1, 0x3 }, // 1590
  { IMAGE_SAMPLE_B_V1_V4_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10Default, 0x1, 0x4 }, // 1591
  { IMAGE_SAMPLE_B_V2_V2_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10Default, 0x2, 0x2 }, // 1592
  { IMAGE_SAMPLE_B_V2_V3_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10Default, 0x2, 0x3 }, // 1593
  { IMAGE_SAMPLE_B_V2_V4_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10Default, 0x2, 0x4 }, // 1594
  { IMAGE_SAMPLE_B_V3_V2_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10Default, 0x3, 0x2 }, // 1595
  { IMAGE_SAMPLE_B_V3_V3_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10Default, 0x3, 0x3 }, // 1596
  { IMAGE_SAMPLE_B_V3_V4_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10Default, 0x3, 0x4 }, // 1597
  { IMAGE_SAMPLE_B_V4_V2_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10Default, 0x4, 0x2 }, // 1598
  { IMAGE_SAMPLE_B_V4_V3_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10Default, 0x4, 0x3 }, // 1599
  { IMAGE_SAMPLE_B_V4_V4_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10Default, 0x4, 0x4 }, // 1600
  { IMAGE_SAMPLE_B_V5_V2_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10Default, 0x5, 0x2 }, // 1601
  { IMAGE_SAMPLE_B_V5_V3_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10Default, 0x5, 0x3 }, // 1602
  { IMAGE_SAMPLE_B_V5_V4_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10Default, 0x5, 0x4 }, // 1603
  { IMAGE_SAMPLE_B_V1_V2_nsa_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10NSA, 0x1, 0x2 }, // 1604
  { IMAGE_SAMPLE_B_V1_V3_nsa_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10NSA, 0x1, 0x3 }, // 1605
  { IMAGE_SAMPLE_B_V1_V4_nsa_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10NSA, 0x1, 0x4 }, // 1606
  { IMAGE_SAMPLE_B_V2_V2_nsa_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10NSA, 0x2, 0x2 }, // 1607
  { IMAGE_SAMPLE_B_V2_V3_nsa_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10NSA, 0x2, 0x3 }, // 1608
  { IMAGE_SAMPLE_B_V2_V4_nsa_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10NSA, 0x2, 0x4 }, // 1609
  { IMAGE_SAMPLE_B_V3_V2_nsa_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10NSA, 0x3, 0x2 }, // 1610
  { IMAGE_SAMPLE_B_V3_V3_nsa_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10NSA, 0x3, 0x3 }, // 1611
  { IMAGE_SAMPLE_B_V3_V4_nsa_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10NSA, 0x3, 0x4 }, // 1612
  { IMAGE_SAMPLE_B_V4_V2_nsa_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10NSA, 0x4, 0x2 }, // 1613
  { IMAGE_SAMPLE_B_V4_V3_nsa_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10NSA, 0x4, 0x3 }, // 1614
  { IMAGE_SAMPLE_B_V4_V4_nsa_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10NSA, 0x4, 0x4 }, // 1615
  { IMAGE_SAMPLE_B_V5_V2_nsa_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10NSA, 0x5, 0x2 }, // 1616
  { IMAGE_SAMPLE_B_V5_V3_nsa_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10NSA, 0x5, 0x3 }, // 1617
  { IMAGE_SAMPLE_B_V5_V4_nsa_gfx10, IMAGE_SAMPLE_B, MIMGEncGfx10NSA, 0x5, 0x4 }, // 1618
  { IMAGE_SAMPLE_B_V1_V2, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x1, 0x2 }, // 1619
  { IMAGE_SAMPLE_B_V1_V3, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x1, 0x3 }, // 1620
  { IMAGE_SAMPLE_B_V1_V4, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x1, 0x4 }, // 1621
  { IMAGE_SAMPLE_B_V2_V2, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x2, 0x2 }, // 1622
  { IMAGE_SAMPLE_B_V2_V3, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x2, 0x3 }, // 1623
  { IMAGE_SAMPLE_B_V2_V4, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x2, 0x4 }, // 1624
  { IMAGE_SAMPLE_B_V3_V2, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x3, 0x2 }, // 1625
  { IMAGE_SAMPLE_B_V3_V3, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x3, 0x3 }, // 1626
  { IMAGE_SAMPLE_B_V3_V4, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x3, 0x4 }, // 1627
  { IMAGE_SAMPLE_B_V4_V2, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x4, 0x2 }, // 1628
  { IMAGE_SAMPLE_B_V4_V3, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x4, 0x3 }, // 1629
  { IMAGE_SAMPLE_B_V4_V4, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x4, 0x4 }, // 1630
  { IMAGE_SAMPLE_B_V5_V2, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x5, 0x2 }, // 1631
  { IMAGE_SAMPLE_B_V5_V3, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x5, 0x3 }, // 1632
  { IMAGE_SAMPLE_B_V5_V4, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x5, 0x4 }, // 1633
  { IMAGE_SAMPLE_B_CL_V1_V2_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10Default, 0x1, 0x2 }, // 1634
  { IMAGE_SAMPLE_B_CL_V1_V3_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10Default, 0x1, 0x3 }, // 1635
  { IMAGE_SAMPLE_B_CL_V1_V4_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10Default, 0x1, 0x4 }, // 1636
  { IMAGE_SAMPLE_B_CL_V1_V8_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10Default, 0x1, 0x8 }, // 1637
  { IMAGE_SAMPLE_B_CL_V2_V2_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10Default, 0x2, 0x2 }, // 1638
  { IMAGE_SAMPLE_B_CL_V2_V3_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10Default, 0x2, 0x3 }, // 1639
  { IMAGE_SAMPLE_B_CL_V2_V4_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10Default, 0x2, 0x4 }, // 1640
  { IMAGE_SAMPLE_B_CL_V2_V8_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10Default, 0x2, 0x8 }, // 1641
  { IMAGE_SAMPLE_B_CL_V3_V2_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10Default, 0x3, 0x2 }, // 1642
  { IMAGE_SAMPLE_B_CL_V3_V3_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10Default, 0x3, 0x3 }, // 1643
  { IMAGE_SAMPLE_B_CL_V3_V4_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10Default, 0x3, 0x4 }, // 1644
  { IMAGE_SAMPLE_B_CL_V3_V8_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10Default, 0x3, 0x8 }, // 1645
  { IMAGE_SAMPLE_B_CL_V4_V2_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10Default, 0x4, 0x2 }, // 1646
  { IMAGE_SAMPLE_B_CL_V4_V3_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10Default, 0x4, 0x3 }, // 1647
  { IMAGE_SAMPLE_B_CL_V4_V4_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10Default, 0x4, 0x4 }, // 1648
  { IMAGE_SAMPLE_B_CL_V4_V8_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10Default, 0x4, 0x8 }, // 1649
  { IMAGE_SAMPLE_B_CL_V5_V2_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10Default, 0x5, 0x2 }, // 1650
  { IMAGE_SAMPLE_B_CL_V5_V3_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10Default, 0x5, 0x3 }, // 1651
  { IMAGE_SAMPLE_B_CL_V5_V4_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10Default, 0x5, 0x4 }, // 1652
  { IMAGE_SAMPLE_B_CL_V5_V8_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10Default, 0x5, 0x8 }, // 1653
  { IMAGE_SAMPLE_B_CL_V1_V2_nsa_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10NSA, 0x1, 0x2 }, // 1654
  { IMAGE_SAMPLE_B_CL_V1_V3_nsa_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10NSA, 0x1, 0x3 }, // 1655
  { IMAGE_SAMPLE_B_CL_V1_V4_nsa_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10NSA, 0x1, 0x4 }, // 1656
  { IMAGE_SAMPLE_B_CL_V1_V5_nsa_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10NSA, 0x1, 0x5 }, // 1657
  { IMAGE_SAMPLE_B_CL_V2_V2_nsa_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10NSA, 0x2, 0x2 }, // 1658
  { IMAGE_SAMPLE_B_CL_V2_V3_nsa_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10NSA, 0x2, 0x3 }, // 1659
  { IMAGE_SAMPLE_B_CL_V2_V4_nsa_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10NSA, 0x2, 0x4 }, // 1660
  { IMAGE_SAMPLE_B_CL_V2_V5_nsa_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10NSA, 0x2, 0x5 }, // 1661
  { IMAGE_SAMPLE_B_CL_V3_V2_nsa_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10NSA, 0x3, 0x2 }, // 1662
  { IMAGE_SAMPLE_B_CL_V3_V3_nsa_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10NSA, 0x3, 0x3 }, // 1663
  { IMAGE_SAMPLE_B_CL_V3_V4_nsa_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10NSA, 0x3, 0x4 }, // 1664
  { IMAGE_SAMPLE_B_CL_V3_V5_nsa_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10NSA, 0x3, 0x5 }, // 1665
  { IMAGE_SAMPLE_B_CL_V4_V2_nsa_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10NSA, 0x4, 0x2 }, // 1666
  { IMAGE_SAMPLE_B_CL_V4_V3_nsa_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10NSA, 0x4, 0x3 }, // 1667
  { IMAGE_SAMPLE_B_CL_V4_V4_nsa_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10NSA, 0x4, 0x4 }, // 1668
  { IMAGE_SAMPLE_B_CL_V4_V5_nsa_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10NSA, 0x4, 0x5 }, // 1669
  { IMAGE_SAMPLE_B_CL_V5_V2_nsa_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10NSA, 0x5, 0x2 }, // 1670
  { IMAGE_SAMPLE_B_CL_V5_V3_nsa_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10NSA, 0x5, 0x3 }, // 1671
  { IMAGE_SAMPLE_B_CL_V5_V4_nsa_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10NSA, 0x5, 0x4 }, // 1672
  { IMAGE_SAMPLE_B_CL_V5_V5_nsa_gfx10, IMAGE_SAMPLE_B_CL, MIMGEncGfx10NSA, 0x5, 0x5 }, // 1673
  { IMAGE_SAMPLE_B_CL_V1_V2, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x1, 0x2 }, // 1674
  { IMAGE_SAMPLE_B_CL_V1_V3, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x1, 0x3 }, // 1675
  { IMAGE_SAMPLE_B_CL_V1_V4, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x1, 0x4 }, // 1676
  { IMAGE_SAMPLE_B_CL_V1_V8, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x1, 0x8 }, // 1677
  { IMAGE_SAMPLE_B_CL_V2_V2, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x2, 0x2 }, // 1678
  { IMAGE_SAMPLE_B_CL_V2_V3, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x2, 0x3 }, // 1679
  { IMAGE_SAMPLE_B_CL_V2_V4, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x2, 0x4 }, // 1680
  { IMAGE_SAMPLE_B_CL_V2_V8, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x2, 0x8 }, // 1681
  { IMAGE_SAMPLE_B_CL_V3_V2, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x3, 0x2 }, // 1682
  { IMAGE_SAMPLE_B_CL_V3_V3, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x3, 0x3 }, // 1683
  { IMAGE_SAMPLE_B_CL_V3_V4, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x3, 0x4 }, // 1684
  { IMAGE_SAMPLE_B_CL_V3_V8, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x3, 0x8 }, // 1685
  { IMAGE_SAMPLE_B_CL_V4_V2, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x4, 0x2 }, // 1686
  { IMAGE_SAMPLE_B_CL_V4_V3, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x4, 0x3 }, // 1687
  { IMAGE_SAMPLE_B_CL_V4_V4, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x4, 0x4 }, // 1688
  { IMAGE_SAMPLE_B_CL_V4_V8, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x4, 0x8 }, // 1689
  { IMAGE_SAMPLE_B_CL_V5_V2, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x5, 0x2 }, // 1690
  { IMAGE_SAMPLE_B_CL_V5_V3, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x5, 0x3 }, // 1691
  { IMAGE_SAMPLE_B_CL_V5_V4, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x5, 0x4 }, // 1692
  { IMAGE_SAMPLE_B_CL_V5_V8, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x5, 0x8 }, // 1693
  { IMAGE_SAMPLE_B_CL_O_V1_V3_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10Default, 0x1, 0x3 }, // 1694
  { IMAGE_SAMPLE_B_CL_O_V1_V4_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10Default, 0x1, 0x4 }, // 1695
  { IMAGE_SAMPLE_B_CL_O_V1_V8_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10Default, 0x1, 0x8 }, // 1696
  { IMAGE_SAMPLE_B_CL_O_V2_V3_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 1697
  { IMAGE_SAMPLE_B_CL_O_V2_V4_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 1698
  { IMAGE_SAMPLE_B_CL_O_V2_V8_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 1699
  { IMAGE_SAMPLE_B_CL_O_V3_V3_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10Default, 0x3, 0x3 }, // 1700
  { IMAGE_SAMPLE_B_CL_O_V3_V4_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10Default, 0x3, 0x4 }, // 1701
  { IMAGE_SAMPLE_B_CL_O_V3_V8_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10Default, 0x3, 0x8 }, // 1702
  { IMAGE_SAMPLE_B_CL_O_V4_V3_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 1703
  { IMAGE_SAMPLE_B_CL_O_V4_V4_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 1704
  { IMAGE_SAMPLE_B_CL_O_V4_V8_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 1705
  { IMAGE_SAMPLE_B_CL_O_V5_V3_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 1706
  { IMAGE_SAMPLE_B_CL_O_V5_V4_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 1707
  { IMAGE_SAMPLE_B_CL_O_V5_V8_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 1708
  { IMAGE_SAMPLE_B_CL_O_V1_V3_nsa_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10NSA, 0x1, 0x3 }, // 1709
  { IMAGE_SAMPLE_B_CL_O_V1_V4_nsa_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10NSA, 0x1, 0x4 }, // 1710
  { IMAGE_SAMPLE_B_CL_O_V1_V5_nsa_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10NSA, 0x1, 0x5 }, // 1711
  { IMAGE_SAMPLE_B_CL_O_V1_V6_nsa_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10NSA, 0x1, 0x6 }, // 1712
  { IMAGE_SAMPLE_B_CL_O_V2_V3_nsa_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 1713
  { IMAGE_SAMPLE_B_CL_O_V2_V4_nsa_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 1714
  { IMAGE_SAMPLE_B_CL_O_V2_V5_nsa_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 1715
  { IMAGE_SAMPLE_B_CL_O_V2_V6_nsa_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10NSA, 0x2, 0x6 }, // 1716
  { IMAGE_SAMPLE_B_CL_O_V3_V3_nsa_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10NSA, 0x3, 0x3 }, // 1717
  { IMAGE_SAMPLE_B_CL_O_V3_V4_nsa_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10NSA, 0x3, 0x4 }, // 1718
  { IMAGE_SAMPLE_B_CL_O_V3_V5_nsa_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10NSA, 0x3, 0x5 }, // 1719
  { IMAGE_SAMPLE_B_CL_O_V3_V6_nsa_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10NSA, 0x3, 0x6 }, // 1720
  { IMAGE_SAMPLE_B_CL_O_V4_V3_nsa_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 1721
  { IMAGE_SAMPLE_B_CL_O_V4_V4_nsa_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 1722
  { IMAGE_SAMPLE_B_CL_O_V4_V5_nsa_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 1723
  { IMAGE_SAMPLE_B_CL_O_V4_V6_nsa_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10NSA, 0x4, 0x6 }, // 1724
  { IMAGE_SAMPLE_B_CL_O_V5_V3_nsa_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 1725
  { IMAGE_SAMPLE_B_CL_O_V5_V4_nsa_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 1726
  { IMAGE_SAMPLE_B_CL_O_V5_V5_nsa_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 1727
  { IMAGE_SAMPLE_B_CL_O_V5_V6_nsa_gfx10, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx10NSA, 0x5, 0x6 }, // 1728
  { IMAGE_SAMPLE_B_CL_O_V1_V3, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x1, 0x3 }, // 1729
  { IMAGE_SAMPLE_B_CL_O_V1_V4, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x1, 0x4 }, // 1730
  { IMAGE_SAMPLE_B_CL_O_V1_V8, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x1, 0x8 }, // 1731
  { IMAGE_SAMPLE_B_CL_O_V2_V3, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x2, 0x3 }, // 1732
  { IMAGE_SAMPLE_B_CL_O_V2_V4, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 1733
  { IMAGE_SAMPLE_B_CL_O_V2_V8, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 1734
  { IMAGE_SAMPLE_B_CL_O_V3_V3, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x3, 0x3 }, // 1735
  { IMAGE_SAMPLE_B_CL_O_V3_V4, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x3, 0x4 }, // 1736
  { IMAGE_SAMPLE_B_CL_O_V3_V8, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x3, 0x8 }, // 1737
  { IMAGE_SAMPLE_B_CL_O_V4_V3, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x4, 0x3 }, // 1738
  { IMAGE_SAMPLE_B_CL_O_V4_V4, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 1739
  { IMAGE_SAMPLE_B_CL_O_V4_V8, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 1740
  { IMAGE_SAMPLE_B_CL_O_V5_V3, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x5, 0x3 }, // 1741
  { IMAGE_SAMPLE_B_CL_O_V5_V4, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x5, 0x4 }, // 1742
  { IMAGE_SAMPLE_B_CL_O_V5_V8, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x5, 0x8 }, // 1743
  { IMAGE_SAMPLE_B_O_V1_V3_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10Default, 0x1, 0x3 }, // 1744
  { IMAGE_SAMPLE_B_O_V1_V4_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10Default, 0x1, 0x4 }, // 1745
  { IMAGE_SAMPLE_B_O_V1_V8_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10Default, 0x1, 0x8 }, // 1746
  { IMAGE_SAMPLE_B_O_V2_V3_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 1747
  { IMAGE_SAMPLE_B_O_V2_V4_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 1748
  { IMAGE_SAMPLE_B_O_V2_V8_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 1749
  { IMAGE_SAMPLE_B_O_V3_V3_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10Default, 0x3, 0x3 }, // 1750
  { IMAGE_SAMPLE_B_O_V3_V4_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10Default, 0x3, 0x4 }, // 1751
  { IMAGE_SAMPLE_B_O_V3_V8_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10Default, 0x3, 0x8 }, // 1752
  { IMAGE_SAMPLE_B_O_V4_V3_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 1753
  { IMAGE_SAMPLE_B_O_V4_V4_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 1754
  { IMAGE_SAMPLE_B_O_V4_V8_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 1755
  { IMAGE_SAMPLE_B_O_V5_V3_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 1756
  { IMAGE_SAMPLE_B_O_V5_V4_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 1757
  { IMAGE_SAMPLE_B_O_V5_V8_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 1758
  { IMAGE_SAMPLE_B_O_V1_V3_nsa_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10NSA, 0x1, 0x3 }, // 1759
  { IMAGE_SAMPLE_B_O_V1_V4_nsa_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10NSA, 0x1, 0x4 }, // 1760
  { IMAGE_SAMPLE_B_O_V1_V5_nsa_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10NSA, 0x1, 0x5 }, // 1761
  { IMAGE_SAMPLE_B_O_V2_V3_nsa_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 1762
  { IMAGE_SAMPLE_B_O_V2_V4_nsa_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 1763
  { IMAGE_SAMPLE_B_O_V2_V5_nsa_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 1764
  { IMAGE_SAMPLE_B_O_V3_V3_nsa_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10NSA, 0x3, 0x3 }, // 1765
  { IMAGE_SAMPLE_B_O_V3_V4_nsa_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10NSA, 0x3, 0x4 }, // 1766
  { IMAGE_SAMPLE_B_O_V3_V5_nsa_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10NSA, 0x3, 0x5 }, // 1767
  { IMAGE_SAMPLE_B_O_V4_V3_nsa_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 1768
  { IMAGE_SAMPLE_B_O_V4_V4_nsa_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 1769
  { IMAGE_SAMPLE_B_O_V4_V5_nsa_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 1770
  { IMAGE_SAMPLE_B_O_V5_V3_nsa_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 1771
  { IMAGE_SAMPLE_B_O_V5_V4_nsa_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 1772
  { IMAGE_SAMPLE_B_O_V5_V5_nsa_gfx10, IMAGE_SAMPLE_B_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 1773
  { IMAGE_SAMPLE_B_O_V1_V3, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x1, 0x3 }, // 1774
  { IMAGE_SAMPLE_B_O_V1_V4, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x1, 0x4 }, // 1775
  { IMAGE_SAMPLE_B_O_V1_V8, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x1, 0x8 }, // 1776
  { IMAGE_SAMPLE_B_O_V2_V3, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x2, 0x3 }, // 1777
  { IMAGE_SAMPLE_B_O_V2_V4, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x2, 0x4 }, // 1778
  { IMAGE_SAMPLE_B_O_V2_V8, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x2, 0x8 }, // 1779
  { IMAGE_SAMPLE_B_O_V3_V3, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x3, 0x3 }, // 1780
  { IMAGE_SAMPLE_B_O_V3_V4, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x3, 0x4 }, // 1781
  { IMAGE_SAMPLE_B_O_V3_V8, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x3, 0x8 }, // 1782
  { IMAGE_SAMPLE_B_O_V4_V3, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x4, 0x3 }, // 1783
  { IMAGE_SAMPLE_B_O_V4_V4, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x4, 0x4 }, // 1784
  { IMAGE_SAMPLE_B_O_V4_V8, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x4, 0x8 }, // 1785
  { IMAGE_SAMPLE_B_O_V5_V3, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x5, 0x3 }, // 1786
  { IMAGE_SAMPLE_B_O_V5_V4, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x5, 0x4 }, // 1787
  { IMAGE_SAMPLE_B_O_V5_V8, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x5, 0x8 }, // 1788
  { IMAGE_SAMPLE_C_V1_V2_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10Default, 0x1, 0x2 }, // 1789
  { IMAGE_SAMPLE_C_V1_V3_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10Default, 0x1, 0x3 }, // 1790
  { IMAGE_SAMPLE_C_V1_V4_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10Default, 0x1, 0x4 }, // 1791
  { IMAGE_SAMPLE_C_V2_V2_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10Default, 0x2, 0x2 }, // 1792
  { IMAGE_SAMPLE_C_V2_V3_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10Default, 0x2, 0x3 }, // 1793
  { IMAGE_SAMPLE_C_V2_V4_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10Default, 0x2, 0x4 }, // 1794
  { IMAGE_SAMPLE_C_V3_V2_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10Default, 0x3, 0x2 }, // 1795
  { IMAGE_SAMPLE_C_V3_V3_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10Default, 0x3, 0x3 }, // 1796
  { IMAGE_SAMPLE_C_V3_V4_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10Default, 0x3, 0x4 }, // 1797
  { IMAGE_SAMPLE_C_V4_V2_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10Default, 0x4, 0x2 }, // 1798
  { IMAGE_SAMPLE_C_V4_V3_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10Default, 0x4, 0x3 }, // 1799
  { IMAGE_SAMPLE_C_V4_V4_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10Default, 0x4, 0x4 }, // 1800
  { IMAGE_SAMPLE_C_V5_V2_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10Default, 0x5, 0x2 }, // 1801
  { IMAGE_SAMPLE_C_V5_V3_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10Default, 0x5, 0x3 }, // 1802
  { IMAGE_SAMPLE_C_V5_V4_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10Default, 0x5, 0x4 }, // 1803
  { IMAGE_SAMPLE_C_V1_V2_nsa_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10NSA, 0x1, 0x2 }, // 1804
  { IMAGE_SAMPLE_C_V1_V3_nsa_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10NSA, 0x1, 0x3 }, // 1805
  { IMAGE_SAMPLE_C_V1_V4_nsa_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10NSA, 0x1, 0x4 }, // 1806
  { IMAGE_SAMPLE_C_V2_V2_nsa_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10NSA, 0x2, 0x2 }, // 1807
  { IMAGE_SAMPLE_C_V2_V3_nsa_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10NSA, 0x2, 0x3 }, // 1808
  { IMAGE_SAMPLE_C_V2_V4_nsa_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10NSA, 0x2, 0x4 }, // 1809
  { IMAGE_SAMPLE_C_V3_V2_nsa_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10NSA, 0x3, 0x2 }, // 1810
  { IMAGE_SAMPLE_C_V3_V3_nsa_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10NSA, 0x3, 0x3 }, // 1811
  { IMAGE_SAMPLE_C_V3_V4_nsa_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10NSA, 0x3, 0x4 }, // 1812
  { IMAGE_SAMPLE_C_V4_V2_nsa_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10NSA, 0x4, 0x2 }, // 1813
  { IMAGE_SAMPLE_C_V4_V3_nsa_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10NSA, 0x4, 0x3 }, // 1814
  { IMAGE_SAMPLE_C_V4_V4_nsa_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10NSA, 0x4, 0x4 }, // 1815
  { IMAGE_SAMPLE_C_V5_V2_nsa_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10NSA, 0x5, 0x2 }, // 1816
  { IMAGE_SAMPLE_C_V5_V3_nsa_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10NSA, 0x5, 0x3 }, // 1817
  { IMAGE_SAMPLE_C_V5_V4_nsa_gfx10, IMAGE_SAMPLE_C, MIMGEncGfx10NSA, 0x5, 0x4 }, // 1818
  { IMAGE_SAMPLE_C_V1_V2, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x1, 0x2 }, // 1819
  { IMAGE_SAMPLE_C_V1_V3, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x1, 0x3 }, // 1820
  { IMAGE_SAMPLE_C_V1_V4, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x1, 0x4 }, // 1821
  { IMAGE_SAMPLE_C_V2_V2, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x2, 0x2 }, // 1822
  { IMAGE_SAMPLE_C_V2_V3, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x2, 0x3 }, // 1823
  { IMAGE_SAMPLE_C_V2_V4, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x2, 0x4 }, // 1824
  { IMAGE_SAMPLE_C_V3_V2, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x3, 0x2 }, // 1825
  { IMAGE_SAMPLE_C_V3_V3, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x3, 0x3 }, // 1826
  { IMAGE_SAMPLE_C_V3_V4, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x3, 0x4 }, // 1827
  { IMAGE_SAMPLE_C_V4_V2, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x4, 0x2 }, // 1828
  { IMAGE_SAMPLE_C_V4_V3, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x4, 0x3 }, // 1829
  { IMAGE_SAMPLE_C_V4_V4, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x4, 0x4 }, // 1830
  { IMAGE_SAMPLE_C_V5_V2, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x5, 0x2 }, // 1831
  { IMAGE_SAMPLE_C_V5_V3, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x5, 0x3 }, // 1832
  { IMAGE_SAMPLE_C_V5_V4, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x5, 0x4 }, // 1833
  { IMAGE_SAMPLE_CD_V1_V2_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x1, 0x2 }, // 1834
  { IMAGE_SAMPLE_CD_V1_V3_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x1, 0x3 }, // 1835
  { IMAGE_SAMPLE_CD_V1_V4_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x1, 0x4 }, // 1836
  { IMAGE_SAMPLE_CD_V1_V8_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x1, 0x8 }, // 1837
  { IMAGE_SAMPLE_CD_V1_V16_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x1, 0x10 }, // 1838
  { IMAGE_SAMPLE_CD_V2_V2_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x2, 0x2 }, // 1839
  { IMAGE_SAMPLE_CD_V2_V3_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x2, 0x3 }, // 1840
  { IMAGE_SAMPLE_CD_V2_V4_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x2, 0x4 }, // 1841
  { IMAGE_SAMPLE_CD_V2_V8_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x2, 0x8 }, // 1842
  { IMAGE_SAMPLE_CD_V2_V16_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x2, 0x10 }, // 1843
  { IMAGE_SAMPLE_CD_V3_V2_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x3, 0x2 }, // 1844
  { IMAGE_SAMPLE_CD_V3_V3_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x3, 0x3 }, // 1845
  { IMAGE_SAMPLE_CD_V3_V4_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x3, 0x4 }, // 1846
  { IMAGE_SAMPLE_CD_V3_V8_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x3, 0x8 }, // 1847
  { IMAGE_SAMPLE_CD_V3_V16_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x3, 0x10 }, // 1848
  { IMAGE_SAMPLE_CD_V4_V2_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x4, 0x2 }, // 1849
  { IMAGE_SAMPLE_CD_V4_V3_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x4, 0x3 }, // 1850
  { IMAGE_SAMPLE_CD_V4_V4_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x4, 0x4 }, // 1851
  { IMAGE_SAMPLE_CD_V4_V8_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x4, 0x8 }, // 1852
  { IMAGE_SAMPLE_CD_V4_V16_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x4, 0x10 }, // 1853
  { IMAGE_SAMPLE_CD_V5_V2_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x5, 0x2 }, // 1854
  { IMAGE_SAMPLE_CD_V5_V3_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x5, 0x3 }, // 1855
  { IMAGE_SAMPLE_CD_V5_V4_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x5, 0x4 }, // 1856
  { IMAGE_SAMPLE_CD_V5_V8_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x5, 0x8 }, // 1857
  { IMAGE_SAMPLE_CD_V5_V16_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10Default, 0x5, 0x10 }, // 1858
  { IMAGE_SAMPLE_CD_V1_V2_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x1, 0x2 }, // 1859
  { IMAGE_SAMPLE_CD_V1_V3_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x1, 0x3 }, // 1860
  { IMAGE_SAMPLE_CD_V1_V4_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x1, 0x4 }, // 1861
  { IMAGE_SAMPLE_CD_V1_V5_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x1, 0x5 }, // 1862
  { IMAGE_SAMPLE_CD_V1_V6_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x1, 0x6 }, // 1863
  { IMAGE_SAMPLE_CD_V1_V7_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x1, 0x7 }, // 1864
  { IMAGE_SAMPLE_CD_V1_V9_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x1, 0x9 }, // 1865
  { IMAGE_SAMPLE_CD_V2_V2_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x2, 0x2 }, // 1866
  { IMAGE_SAMPLE_CD_V2_V3_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x2, 0x3 }, // 1867
  { IMAGE_SAMPLE_CD_V2_V4_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x2, 0x4 }, // 1868
  { IMAGE_SAMPLE_CD_V2_V5_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x2, 0x5 }, // 1869
  { IMAGE_SAMPLE_CD_V2_V6_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x2, 0x6 }, // 1870
  { IMAGE_SAMPLE_CD_V2_V7_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x2, 0x7 }, // 1871
  { IMAGE_SAMPLE_CD_V2_V9_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x2, 0x9 }, // 1872
  { IMAGE_SAMPLE_CD_V3_V2_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x3, 0x2 }, // 1873
  { IMAGE_SAMPLE_CD_V3_V3_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x3, 0x3 }, // 1874
  { IMAGE_SAMPLE_CD_V3_V4_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x3, 0x4 }, // 1875
  { IMAGE_SAMPLE_CD_V3_V5_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x3, 0x5 }, // 1876
  { IMAGE_SAMPLE_CD_V3_V6_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x3, 0x6 }, // 1877
  { IMAGE_SAMPLE_CD_V3_V7_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x3, 0x7 }, // 1878
  { IMAGE_SAMPLE_CD_V3_V9_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x3, 0x9 }, // 1879
  { IMAGE_SAMPLE_CD_V4_V2_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x4, 0x2 }, // 1880
  { IMAGE_SAMPLE_CD_V4_V3_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x4, 0x3 }, // 1881
  { IMAGE_SAMPLE_CD_V4_V4_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x4, 0x4 }, // 1882
  { IMAGE_SAMPLE_CD_V4_V5_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x4, 0x5 }, // 1883
  { IMAGE_SAMPLE_CD_V4_V6_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x4, 0x6 }, // 1884
  { IMAGE_SAMPLE_CD_V4_V7_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x4, 0x7 }, // 1885
  { IMAGE_SAMPLE_CD_V4_V9_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x4, 0x9 }, // 1886
  { IMAGE_SAMPLE_CD_V5_V2_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x5, 0x2 }, // 1887
  { IMAGE_SAMPLE_CD_V5_V3_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x5, 0x3 }, // 1888
  { IMAGE_SAMPLE_CD_V5_V4_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x5, 0x4 }, // 1889
  { IMAGE_SAMPLE_CD_V5_V5_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x5, 0x5 }, // 1890
  { IMAGE_SAMPLE_CD_V5_V6_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x5, 0x6 }, // 1891
  { IMAGE_SAMPLE_CD_V5_V7_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x5, 0x7 }, // 1892
  { IMAGE_SAMPLE_CD_V5_V9_nsa_gfx10, IMAGE_SAMPLE_CD, MIMGEncGfx10NSA, 0x5, 0x9 }, // 1893
  { IMAGE_SAMPLE_CD_V1_V2, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x1, 0x2 }, // 1894
  { IMAGE_SAMPLE_CD_V1_V3, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x1, 0x3 }, // 1895
  { IMAGE_SAMPLE_CD_V1_V4, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x1, 0x4 }, // 1896
  { IMAGE_SAMPLE_CD_V1_V8, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x1, 0x8 }, // 1897
  { IMAGE_SAMPLE_CD_V1_V16, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x1, 0x10 }, // 1898
  { IMAGE_SAMPLE_CD_V2_V2, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x2, 0x2 }, // 1899
  { IMAGE_SAMPLE_CD_V2_V3, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x2, 0x3 }, // 1900
  { IMAGE_SAMPLE_CD_V2_V4, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x2, 0x4 }, // 1901
  { IMAGE_SAMPLE_CD_V2_V8, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x2, 0x8 }, // 1902
  { IMAGE_SAMPLE_CD_V2_V16, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x2, 0x10 }, // 1903
  { IMAGE_SAMPLE_CD_V3_V2, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x3, 0x2 }, // 1904
  { IMAGE_SAMPLE_CD_V3_V3, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x3, 0x3 }, // 1905
  { IMAGE_SAMPLE_CD_V3_V4, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x3, 0x4 }, // 1906
  { IMAGE_SAMPLE_CD_V3_V8, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x3, 0x8 }, // 1907
  { IMAGE_SAMPLE_CD_V3_V16, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x3, 0x10 }, // 1908
  { IMAGE_SAMPLE_CD_V4_V2, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x4, 0x2 }, // 1909
  { IMAGE_SAMPLE_CD_V4_V3, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x4, 0x3 }, // 1910
  { IMAGE_SAMPLE_CD_V4_V4, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x4, 0x4 }, // 1911
  { IMAGE_SAMPLE_CD_V4_V8, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x4, 0x8 }, // 1912
  { IMAGE_SAMPLE_CD_V4_V16, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x4, 0x10 }, // 1913
  { IMAGE_SAMPLE_CD_V5_V2, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x5, 0x2 }, // 1914
  { IMAGE_SAMPLE_CD_V5_V3, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x5, 0x3 }, // 1915
  { IMAGE_SAMPLE_CD_V5_V4, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x5, 0x4 }, // 1916
  { IMAGE_SAMPLE_CD_V5_V8, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x5, 0x8 }, // 1917
  { IMAGE_SAMPLE_CD_V5_V16, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x5, 0x10 }, // 1918
  { IMAGE_SAMPLE_CD_CL_V1_V2_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x1, 0x2 }, // 1919
  { IMAGE_SAMPLE_CD_CL_V1_V3_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x1, 0x3 }, // 1920
  { IMAGE_SAMPLE_CD_CL_V1_V4_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x1, 0x4 }, // 1921
  { IMAGE_SAMPLE_CD_CL_V1_V8_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x1, 0x8 }, // 1922
  { IMAGE_SAMPLE_CD_CL_V1_V16_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x1, 0x10 }, // 1923
  { IMAGE_SAMPLE_CD_CL_V2_V2_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x2, 0x2 }, // 1924
  { IMAGE_SAMPLE_CD_CL_V2_V3_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x2, 0x3 }, // 1925
  { IMAGE_SAMPLE_CD_CL_V2_V4_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x2, 0x4 }, // 1926
  { IMAGE_SAMPLE_CD_CL_V2_V8_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x2, 0x8 }, // 1927
  { IMAGE_SAMPLE_CD_CL_V2_V16_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x2, 0x10 }, // 1928
  { IMAGE_SAMPLE_CD_CL_V3_V2_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x3, 0x2 }, // 1929
  { IMAGE_SAMPLE_CD_CL_V3_V3_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x3, 0x3 }, // 1930
  { IMAGE_SAMPLE_CD_CL_V3_V4_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x3, 0x4 }, // 1931
  { IMAGE_SAMPLE_CD_CL_V3_V8_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x3, 0x8 }, // 1932
  { IMAGE_SAMPLE_CD_CL_V3_V16_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x3, 0x10 }, // 1933
  { IMAGE_SAMPLE_CD_CL_V4_V2_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x4, 0x2 }, // 1934
  { IMAGE_SAMPLE_CD_CL_V4_V3_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x4, 0x3 }, // 1935
  { IMAGE_SAMPLE_CD_CL_V4_V4_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x4, 0x4 }, // 1936
  { IMAGE_SAMPLE_CD_CL_V4_V8_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x4, 0x8 }, // 1937
  { IMAGE_SAMPLE_CD_CL_V4_V16_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x4, 0x10 }, // 1938
  { IMAGE_SAMPLE_CD_CL_V5_V2_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x5, 0x2 }, // 1939
  { IMAGE_SAMPLE_CD_CL_V5_V3_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x5, 0x3 }, // 1940
  { IMAGE_SAMPLE_CD_CL_V5_V4_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x5, 0x4 }, // 1941
  { IMAGE_SAMPLE_CD_CL_V5_V8_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x5, 0x8 }, // 1942
  { IMAGE_SAMPLE_CD_CL_V5_V16_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10Default, 0x5, 0x10 }, // 1943
  { IMAGE_SAMPLE_CD_CL_V1_V2_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x1, 0x2 }, // 1944
  { IMAGE_SAMPLE_CD_CL_V1_V3_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x1, 0x3 }, // 1945
  { IMAGE_SAMPLE_CD_CL_V1_V4_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x1, 0x4 }, // 1946
  { IMAGE_SAMPLE_CD_CL_V1_V5_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x1, 0x5 }, // 1947
  { IMAGE_SAMPLE_CD_CL_V1_V7_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x1, 0x7 }, // 1948
  { IMAGE_SAMPLE_CD_CL_V1_V8_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x1, 0x8 }, // 1949
  { IMAGE_SAMPLE_CD_CL_V1_V10_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x1, 0xA }, // 1950
  { IMAGE_SAMPLE_CD_CL_V2_V2_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x2, 0x2 }, // 1951
  { IMAGE_SAMPLE_CD_CL_V2_V3_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x2, 0x3 }, // 1952
  { IMAGE_SAMPLE_CD_CL_V2_V4_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x2, 0x4 }, // 1953
  { IMAGE_SAMPLE_CD_CL_V2_V5_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x2, 0x5 }, // 1954
  { IMAGE_SAMPLE_CD_CL_V2_V7_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x2, 0x7 }, // 1955
  { IMAGE_SAMPLE_CD_CL_V2_V8_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x2, 0x8 }, // 1956
  { IMAGE_SAMPLE_CD_CL_V2_V10_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x2, 0xA }, // 1957
  { IMAGE_SAMPLE_CD_CL_V3_V2_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x3, 0x2 }, // 1958
  { IMAGE_SAMPLE_CD_CL_V3_V3_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x3, 0x3 }, // 1959
  { IMAGE_SAMPLE_CD_CL_V3_V4_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x3, 0x4 }, // 1960
  { IMAGE_SAMPLE_CD_CL_V3_V5_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x3, 0x5 }, // 1961
  { IMAGE_SAMPLE_CD_CL_V3_V7_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x3, 0x7 }, // 1962
  { IMAGE_SAMPLE_CD_CL_V3_V8_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x3, 0x8 }, // 1963
  { IMAGE_SAMPLE_CD_CL_V3_V10_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x3, 0xA }, // 1964
  { IMAGE_SAMPLE_CD_CL_V4_V2_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x4, 0x2 }, // 1965
  { IMAGE_SAMPLE_CD_CL_V4_V3_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x4, 0x3 }, // 1966
  { IMAGE_SAMPLE_CD_CL_V4_V4_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x4, 0x4 }, // 1967
  { IMAGE_SAMPLE_CD_CL_V4_V5_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x4, 0x5 }, // 1968
  { IMAGE_SAMPLE_CD_CL_V4_V7_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x4, 0x7 }, // 1969
  { IMAGE_SAMPLE_CD_CL_V4_V8_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x4, 0x8 }, // 1970
  { IMAGE_SAMPLE_CD_CL_V4_V10_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x4, 0xA }, // 1971
  { IMAGE_SAMPLE_CD_CL_V5_V2_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x5, 0x2 }, // 1972
  { IMAGE_SAMPLE_CD_CL_V5_V3_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x5, 0x3 }, // 1973
  { IMAGE_SAMPLE_CD_CL_V5_V4_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x5, 0x4 }, // 1974
  { IMAGE_SAMPLE_CD_CL_V5_V5_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x5, 0x5 }, // 1975
  { IMAGE_SAMPLE_CD_CL_V5_V7_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x5, 0x7 }, // 1976
  { IMAGE_SAMPLE_CD_CL_V5_V8_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x5, 0x8 }, // 1977
  { IMAGE_SAMPLE_CD_CL_V5_V10_nsa_gfx10, IMAGE_SAMPLE_CD_CL, MIMGEncGfx10NSA, 0x5, 0xA }, // 1978
  { IMAGE_SAMPLE_CD_CL_V1_V2, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x1, 0x2 }, // 1979
  { IMAGE_SAMPLE_CD_CL_V1_V3, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x1, 0x3 }, // 1980
  { IMAGE_SAMPLE_CD_CL_V1_V4, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x1, 0x4 }, // 1981
  { IMAGE_SAMPLE_CD_CL_V1_V8, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x1, 0x8 }, // 1982
  { IMAGE_SAMPLE_CD_CL_V1_V16, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x1, 0x10 }, // 1983
  { IMAGE_SAMPLE_CD_CL_V2_V2, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x2, 0x2 }, // 1984
  { IMAGE_SAMPLE_CD_CL_V2_V3, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x2, 0x3 }, // 1985
  { IMAGE_SAMPLE_CD_CL_V2_V4, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x2, 0x4 }, // 1986
  { IMAGE_SAMPLE_CD_CL_V2_V8, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x2, 0x8 }, // 1987
  { IMAGE_SAMPLE_CD_CL_V2_V16, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x2, 0x10 }, // 1988
  { IMAGE_SAMPLE_CD_CL_V3_V2, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x3, 0x2 }, // 1989
  { IMAGE_SAMPLE_CD_CL_V3_V3, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x3, 0x3 }, // 1990
  { IMAGE_SAMPLE_CD_CL_V3_V4, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x3, 0x4 }, // 1991
  { IMAGE_SAMPLE_CD_CL_V3_V8, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x3, 0x8 }, // 1992
  { IMAGE_SAMPLE_CD_CL_V3_V16, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x3, 0x10 }, // 1993
  { IMAGE_SAMPLE_CD_CL_V4_V2, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x4, 0x2 }, // 1994
  { IMAGE_SAMPLE_CD_CL_V4_V3, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x4, 0x3 }, // 1995
  { IMAGE_SAMPLE_CD_CL_V4_V4, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x4, 0x4 }, // 1996
  { IMAGE_SAMPLE_CD_CL_V4_V8, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x4, 0x8 }, // 1997
  { IMAGE_SAMPLE_CD_CL_V4_V16, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x4, 0x10 }, // 1998
  { IMAGE_SAMPLE_CD_CL_V5_V2, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x5, 0x2 }, // 1999
  { IMAGE_SAMPLE_CD_CL_V5_V3, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x5, 0x3 }, // 2000
  { IMAGE_SAMPLE_CD_CL_V5_V4, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x5, 0x4 }, // 2001
  { IMAGE_SAMPLE_CD_CL_V5_V8, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x5, 0x8 }, // 2002
  { IMAGE_SAMPLE_CD_CL_V5_V16, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x5, 0x10 }, // 2003
  { IMAGE_SAMPLE_CD_CL_O_V1_V3_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10Default, 0x1, 0x3 }, // 2004
  { IMAGE_SAMPLE_CD_CL_O_V1_V4_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10Default, 0x1, 0x4 }, // 2005
  { IMAGE_SAMPLE_CD_CL_O_V1_V8_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10Default, 0x1, 0x8 }, // 2006
  { IMAGE_SAMPLE_CD_CL_O_V1_V16_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10Default, 0x1, 0x10 }, // 2007
  { IMAGE_SAMPLE_CD_CL_O_V2_V3_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 2008
  { IMAGE_SAMPLE_CD_CL_O_V2_V4_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 2009
  { IMAGE_SAMPLE_CD_CL_O_V2_V8_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 2010
  { IMAGE_SAMPLE_CD_CL_O_V2_V16_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10Default, 0x2, 0x10 }, // 2011
  { IMAGE_SAMPLE_CD_CL_O_V3_V3_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10Default, 0x3, 0x3 }, // 2012
  { IMAGE_SAMPLE_CD_CL_O_V3_V4_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10Default, 0x3, 0x4 }, // 2013
  { IMAGE_SAMPLE_CD_CL_O_V3_V8_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10Default, 0x3, 0x8 }, // 2014
  { IMAGE_SAMPLE_CD_CL_O_V3_V16_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10Default, 0x3, 0x10 }, // 2015
  { IMAGE_SAMPLE_CD_CL_O_V4_V3_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 2016
  { IMAGE_SAMPLE_CD_CL_O_V4_V4_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 2017
  { IMAGE_SAMPLE_CD_CL_O_V4_V8_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 2018
  { IMAGE_SAMPLE_CD_CL_O_V4_V16_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10Default, 0x4, 0x10 }, // 2019
  { IMAGE_SAMPLE_CD_CL_O_V5_V3_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 2020
  { IMAGE_SAMPLE_CD_CL_O_V5_V4_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 2021
  { IMAGE_SAMPLE_CD_CL_O_V5_V8_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 2022
  { IMAGE_SAMPLE_CD_CL_O_V5_V16_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10Default, 0x5, 0x10 }, // 2023
  { IMAGE_SAMPLE_CD_CL_O_V1_V3_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x1, 0x3 }, // 2024
  { IMAGE_SAMPLE_CD_CL_O_V1_V4_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x1, 0x4 }, // 2025
  { IMAGE_SAMPLE_CD_CL_O_V1_V5_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x1, 0x5 }, // 2026
  { IMAGE_SAMPLE_CD_CL_O_V1_V6_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x1, 0x6 }, // 2027
  { IMAGE_SAMPLE_CD_CL_O_V1_V8_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x1, 0x8 }, // 2028
  { IMAGE_SAMPLE_CD_CL_O_V1_V9_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x1, 0x9 }, // 2029
  { IMAGE_SAMPLE_CD_CL_O_V1_V11_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x1, 0xB }, // 2030
  { IMAGE_SAMPLE_CD_CL_O_V2_V3_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 2031
  { IMAGE_SAMPLE_CD_CL_O_V2_V4_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 2032
  { IMAGE_SAMPLE_CD_CL_O_V2_V5_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 2033
  { IMAGE_SAMPLE_CD_CL_O_V2_V6_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x2, 0x6 }, // 2034
  { IMAGE_SAMPLE_CD_CL_O_V2_V8_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x2, 0x8 }, // 2035
  { IMAGE_SAMPLE_CD_CL_O_V2_V9_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x2, 0x9 }, // 2036
  { IMAGE_SAMPLE_CD_CL_O_V2_V11_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x2, 0xB }, // 2037
  { IMAGE_SAMPLE_CD_CL_O_V3_V3_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x3, 0x3 }, // 2038
  { IMAGE_SAMPLE_CD_CL_O_V3_V4_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x3, 0x4 }, // 2039
  { IMAGE_SAMPLE_CD_CL_O_V3_V5_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x3, 0x5 }, // 2040
  { IMAGE_SAMPLE_CD_CL_O_V3_V6_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x3, 0x6 }, // 2041
  { IMAGE_SAMPLE_CD_CL_O_V3_V8_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x3, 0x8 }, // 2042
  { IMAGE_SAMPLE_CD_CL_O_V3_V9_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x3, 0x9 }, // 2043
  { IMAGE_SAMPLE_CD_CL_O_V3_V11_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x3, 0xB }, // 2044
  { IMAGE_SAMPLE_CD_CL_O_V4_V3_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 2045
  { IMAGE_SAMPLE_CD_CL_O_V4_V4_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 2046
  { IMAGE_SAMPLE_CD_CL_O_V4_V5_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 2047
  { IMAGE_SAMPLE_CD_CL_O_V4_V6_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x4, 0x6 }, // 2048
  { IMAGE_SAMPLE_CD_CL_O_V4_V8_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x4, 0x8 }, // 2049
  { IMAGE_SAMPLE_CD_CL_O_V4_V9_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x4, 0x9 }, // 2050
  { IMAGE_SAMPLE_CD_CL_O_V4_V11_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x4, 0xB }, // 2051
  { IMAGE_SAMPLE_CD_CL_O_V5_V3_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 2052
  { IMAGE_SAMPLE_CD_CL_O_V5_V4_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 2053
  { IMAGE_SAMPLE_CD_CL_O_V5_V5_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 2054
  { IMAGE_SAMPLE_CD_CL_O_V5_V6_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x5, 0x6 }, // 2055
  { IMAGE_SAMPLE_CD_CL_O_V5_V8_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x5, 0x8 }, // 2056
  { IMAGE_SAMPLE_CD_CL_O_V5_V9_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x5, 0x9 }, // 2057
  { IMAGE_SAMPLE_CD_CL_O_V5_V11_nsa_gfx10, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx10NSA, 0x5, 0xB }, // 2058
  { IMAGE_SAMPLE_CD_CL_O_V1_V3, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x1, 0x3 }, // 2059
  { IMAGE_SAMPLE_CD_CL_O_V1_V4, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x1, 0x4 }, // 2060
  { IMAGE_SAMPLE_CD_CL_O_V1_V8, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x1, 0x8 }, // 2061
  { IMAGE_SAMPLE_CD_CL_O_V1_V16, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x1, 0x10 }, // 2062
  { IMAGE_SAMPLE_CD_CL_O_V2_V3, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x2, 0x3 }, // 2063
  { IMAGE_SAMPLE_CD_CL_O_V2_V4, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 2064
  { IMAGE_SAMPLE_CD_CL_O_V2_V8, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 2065
  { IMAGE_SAMPLE_CD_CL_O_V2_V16, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x2, 0x10 }, // 2066
  { IMAGE_SAMPLE_CD_CL_O_V3_V3, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x3, 0x3 }, // 2067
  { IMAGE_SAMPLE_CD_CL_O_V3_V4, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x3, 0x4 }, // 2068
  { IMAGE_SAMPLE_CD_CL_O_V3_V8, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x3, 0x8 }, // 2069
  { IMAGE_SAMPLE_CD_CL_O_V3_V16, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x3, 0x10 }, // 2070
  { IMAGE_SAMPLE_CD_CL_O_V4_V3, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x4, 0x3 }, // 2071
  { IMAGE_SAMPLE_CD_CL_O_V4_V4, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 2072
  { IMAGE_SAMPLE_CD_CL_O_V4_V8, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 2073
  { IMAGE_SAMPLE_CD_CL_O_V4_V16, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x4, 0x10 }, // 2074
  { IMAGE_SAMPLE_CD_CL_O_V5_V3, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x5, 0x3 }, // 2075
  { IMAGE_SAMPLE_CD_CL_O_V5_V4, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x5, 0x4 }, // 2076
  { IMAGE_SAMPLE_CD_CL_O_V5_V8, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x5, 0x8 }, // 2077
  { IMAGE_SAMPLE_CD_CL_O_V5_V16, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x5, 0x10 }, // 2078
  { IMAGE_SAMPLE_CD_O_V1_V3_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10Default, 0x1, 0x3 }, // 2079
  { IMAGE_SAMPLE_CD_O_V1_V4_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10Default, 0x1, 0x4 }, // 2080
  { IMAGE_SAMPLE_CD_O_V1_V8_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10Default, 0x1, 0x8 }, // 2081
  { IMAGE_SAMPLE_CD_O_V1_V16_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10Default, 0x1, 0x10 }, // 2082
  { IMAGE_SAMPLE_CD_O_V2_V3_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 2083
  { IMAGE_SAMPLE_CD_O_V2_V4_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 2084
  { IMAGE_SAMPLE_CD_O_V2_V8_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 2085
  { IMAGE_SAMPLE_CD_O_V2_V16_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10Default, 0x2, 0x10 }, // 2086
  { IMAGE_SAMPLE_CD_O_V3_V3_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10Default, 0x3, 0x3 }, // 2087
  { IMAGE_SAMPLE_CD_O_V3_V4_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10Default, 0x3, 0x4 }, // 2088
  { IMAGE_SAMPLE_CD_O_V3_V8_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10Default, 0x3, 0x8 }, // 2089
  { IMAGE_SAMPLE_CD_O_V3_V16_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10Default, 0x3, 0x10 }, // 2090
  { IMAGE_SAMPLE_CD_O_V4_V3_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 2091
  { IMAGE_SAMPLE_CD_O_V4_V4_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 2092
  { IMAGE_SAMPLE_CD_O_V4_V8_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 2093
  { IMAGE_SAMPLE_CD_O_V4_V16_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10Default, 0x4, 0x10 }, // 2094
  { IMAGE_SAMPLE_CD_O_V5_V3_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 2095
  { IMAGE_SAMPLE_CD_O_V5_V4_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 2096
  { IMAGE_SAMPLE_CD_O_V5_V8_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 2097
  { IMAGE_SAMPLE_CD_O_V5_V16_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10Default, 0x5, 0x10 }, // 2098
  { IMAGE_SAMPLE_CD_O_V1_V3_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x1, 0x3 }, // 2099
  { IMAGE_SAMPLE_CD_O_V1_V4_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x1, 0x4 }, // 2100
  { IMAGE_SAMPLE_CD_O_V1_V5_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x1, 0x5 }, // 2101
  { IMAGE_SAMPLE_CD_O_V1_V6_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x1, 0x6 }, // 2102
  { IMAGE_SAMPLE_CD_O_V1_V7_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x1, 0x7 }, // 2103
  { IMAGE_SAMPLE_CD_O_V1_V8_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x1, 0x8 }, // 2104
  { IMAGE_SAMPLE_CD_O_V1_V10_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x1, 0xA }, // 2105
  { IMAGE_SAMPLE_CD_O_V2_V3_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 2106
  { IMAGE_SAMPLE_CD_O_V2_V4_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 2107
  { IMAGE_SAMPLE_CD_O_V2_V5_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 2108
  { IMAGE_SAMPLE_CD_O_V2_V6_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x2, 0x6 }, // 2109
  { IMAGE_SAMPLE_CD_O_V2_V7_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x2, 0x7 }, // 2110
  { IMAGE_SAMPLE_CD_O_V2_V8_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x2, 0x8 }, // 2111
  { IMAGE_SAMPLE_CD_O_V2_V10_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x2, 0xA }, // 2112
  { IMAGE_SAMPLE_CD_O_V3_V3_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x3, 0x3 }, // 2113
  { IMAGE_SAMPLE_CD_O_V3_V4_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x3, 0x4 }, // 2114
  { IMAGE_SAMPLE_CD_O_V3_V5_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x3, 0x5 }, // 2115
  { IMAGE_SAMPLE_CD_O_V3_V6_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x3, 0x6 }, // 2116
  { IMAGE_SAMPLE_CD_O_V3_V7_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x3, 0x7 }, // 2117
  { IMAGE_SAMPLE_CD_O_V3_V8_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x3, 0x8 }, // 2118
  { IMAGE_SAMPLE_CD_O_V3_V10_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x3, 0xA }, // 2119
  { IMAGE_SAMPLE_CD_O_V4_V3_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 2120
  { IMAGE_SAMPLE_CD_O_V4_V4_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 2121
  { IMAGE_SAMPLE_CD_O_V4_V5_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 2122
  { IMAGE_SAMPLE_CD_O_V4_V6_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x4, 0x6 }, // 2123
  { IMAGE_SAMPLE_CD_O_V4_V7_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x4, 0x7 }, // 2124
  { IMAGE_SAMPLE_CD_O_V4_V8_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x4, 0x8 }, // 2125
  { IMAGE_SAMPLE_CD_O_V4_V10_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x4, 0xA }, // 2126
  { IMAGE_SAMPLE_CD_O_V5_V3_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 2127
  { IMAGE_SAMPLE_CD_O_V5_V4_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 2128
  { IMAGE_SAMPLE_CD_O_V5_V5_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 2129
  { IMAGE_SAMPLE_CD_O_V5_V6_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x5, 0x6 }, // 2130
  { IMAGE_SAMPLE_CD_O_V5_V7_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x5, 0x7 }, // 2131
  { IMAGE_SAMPLE_CD_O_V5_V8_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x5, 0x8 }, // 2132
  { IMAGE_SAMPLE_CD_O_V5_V10_nsa_gfx10, IMAGE_SAMPLE_CD_O, MIMGEncGfx10NSA, 0x5, 0xA }, // 2133
  { IMAGE_SAMPLE_CD_O_V1_V3, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x1, 0x3 }, // 2134
  { IMAGE_SAMPLE_CD_O_V1_V4, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x1, 0x4 }, // 2135
  { IMAGE_SAMPLE_CD_O_V1_V8, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x1, 0x8 }, // 2136
  { IMAGE_SAMPLE_CD_O_V1_V16, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x1, 0x10 }, // 2137
  { IMAGE_SAMPLE_CD_O_V2_V3, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x2, 0x3 }, // 2138
  { IMAGE_SAMPLE_CD_O_V2_V4, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x2, 0x4 }, // 2139
  { IMAGE_SAMPLE_CD_O_V2_V8, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x2, 0x8 }, // 2140
  { IMAGE_SAMPLE_CD_O_V2_V16, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x2, 0x10 }, // 2141
  { IMAGE_SAMPLE_CD_O_V3_V3, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x3, 0x3 }, // 2142
  { IMAGE_SAMPLE_CD_O_V3_V4, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x3, 0x4 }, // 2143
  { IMAGE_SAMPLE_CD_O_V3_V8, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x3, 0x8 }, // 2144
  { IMAGE_SAMPLE_CD_O_V3_V16, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x3, 0x10 }, // 2145
  { IMAGE_SAMPLE_CD_O_V4_V3, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x4, 0x3 }, // 2146
  { IMAGE_SAMPLE_CD_O_V4_V4, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x4, 0x4 }, // 2147
  { IMAGE_SAMPLE_CD_O_V4_V8, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x4, 0x8 }, // 2148
  { IMAGE_SAMPLE_CD_O_V4_V16, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x4, 0x10 }, // 2149
  { IMAGE_SAMPLE_CD_O_V5_V3, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x5, 0x3 }, // 2150
  { IMAGE_SAMPLE_CD_O_V5_V4, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x5, 0x4 }, // 2151
  { IMAGE_SAMPLE_CD_O_V5_V8, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x5, 0x8 }, // 2152
  { IMAGE_SAMPLE_CD_O_V5_V16, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x5, 0x10 }, // 2153
  { IMAGE_SAMPLE_CL_V1_V1_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10Default, 0x1, 0x1 }, // 2154
  { IMAGE_SAMPLE_CL_V1_V2_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10Default, 0x1, 0x2 }, // 2155
  { IMAGE_SAMPLE_CL_V1_V3_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10Default, 0x1, 0x3 }, // 2156
  { IMAGE_SAMPLE_CL_V1_V4_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10Default, 0x1, 0x4 }, // 2157
  { IMAGE_SAMPLE_CL_V2_V1_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10Default, 0x2, 0x1 }, // 2158
  { IMAGE_SAMPLE_CL_V2_V2_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10Default, 0x2, 0x2 }, // 2159
  { IMAGE_SAMPLE_CL_V2_V3_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10Default, 0x2, 0x3 }, // 2160
  { IMAGE_SAMPLE_CL_V2_V4_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10Default, 0x2, 0x4 }, // 2161
  { IMAGE_SAMPLE_CL_V3_V1_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10Default, 0x3, 0x1 }, // 2162
  { IMAGE_SAMPLE_CL_V3_V2_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10Default, 0x3, 0x2 }, // 2163
  { IMAGE_SAMPLE_CL_V3_V3_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10Default, 0x3, 0x3 }, // 2164
  { IMAGE_SAMPLE_CL_V3_V4_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10Default, 0x3, 0x4 }, // 2165
  { IMAGE_SAMPLE_CL_V4_V1_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10Default, 0x4, 0x1 }, // 2166
  { IMAGE_SAMPLE_CL_V4_V2_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10Default, 0x4, 0x2 }, // 2167
  { IMAGE_SAMPLE_CL_V4_V3_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10Default, 0x4, 0x3 }, // 2168
  { IMAGE_SAMPLE_CL_V4_V4_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10Default, 0x4, 0x4 }, // 2169
  { IMAGE_SAMPLE_CL_V5_V1_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10Default, 0x5, 0x1 }, // 2170
  { IMAGE_SAMPLE_CL_V5_V2_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10Default, 0x5, 0x2 }, // 2171
  { IMAGE_SAMPLE_CL_V5_V3_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10Default, 0x5, 0x3 }, // 2172
  { IMAGE_SAMPLE_CL_V5_V4_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10Default, 0x5, 0x4 }, // 2173
  { IMAGE_SAMPLE_CL_V1_V2_nsa_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10NSA, 0x1, 0x2 }, // 2174
  { IMAGE_SAMPLE_CL_V1_V3_nsa_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10NSA, 0x1, 0x3 }, // 2175
  { IMAGE_SAMPLE_CL_V1_V4_nsa_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10NSA, 0x1, 0x4 }, // 2176
  { IMAGE_SAMPLE_CL_V2_V2_nsa_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10NSA, 0x2, 0x2 }, // 2177
  { IMAGE_SAMPLE_CL_V2_V3_nsa_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10NSA, 0x2, 0x3 }, // 2178
  { IMAGE_SAMPLE_CL_V2_V4_nsa_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10NSA, 0x2, 0x4 }, // 2179
  { IMAGE_SAMPLE_CL_V3_V2_nsa_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10NSA, 0x3, 0x2 }, // 2180
  { IMAGE_SAMPLE_CL_V3_V3_nsa_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10NSA, 0x3, 0x3 }, // 2181
  { IMAGE_SAMPLE_CL_V3_V4_nsa_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10NSA, 0x3, 0x4 }, // 2182
  { IMAGE_SAMPLE_CL_V4_V2_nsa_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10NSA, 0x4, 0x2 }, // 2183
  { IMAGE_SAMPLE_CL_V4_V3_nsa_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10NSA, 0x4, 0x3 }, // 2184
  { IMAGE_SAMPLE_CL_V4_V4_nsa_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10NSA, 0x4, 0x4 }, // 2185
  { IMAGE_SAMPLE_CL_V5_V2_nsa_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10NSA, 0x5, 0x2 }, // 2186
  { IMAGE_SAMPLE_CL_V5_V3_nsa_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10NSA, 0x5, 0x3 }, // 2187
  { IMAGE_SAMPLE_CL_V5_V4_nsa_gfx10, IMAGE_SAMPLE_CL, MIMGEncGfx10NSA, 0x5, 0x4 }, // 2188
  { IMAGE_SAMPLE_CL_V1_V1, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x1, 0x1 }, // 2189
  { IMAGE_SAMPLE_CL_V1_V2, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x1, 0x2 }, // 2190
  { IMAGE_SAMPLE_CL_V1_V3, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x1, 0x3 }, // 2191
  { IMAGE_SAMPLE_CL_V1_V4, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x1, 0x4 }, // 2192
  { IMAGE_SAMPLE_CL_V2_V1, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x2, 0x1 }, // 2193
  { IMAGE_SAMPLE_CL_V2_V2, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x2, 0x2 }, // 2194
  { IMAGE_SAMPLE_CL_V2_V3, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x2, 0x3 }, // 2195
  { IMAGE_SAMPLE_CL_V2_V4, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x2, 0x4 }, // 2196
  { IMAGE_SAMPLE_CL_V3_V1, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x3, 0x1 }, // 2197
  { IMAGE_SAMPLE_CL_V3_V2, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x3, 0x2 }, // 2198
  { IMAGE_SAMPLE_CL_V3_V3, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x3, 0x3 }, // 2199
  { IMAGE_SAMPLE_CL_V3_V4, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x3, 0x4 }, // 2200
  { IMAGE_SAMPLE_CL_V4_V1, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x4, 0x1 }, // 2201
  { IMAGE_SAMPLE_CL_V4_V2, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x4, 0x2 }, // 2202
  { IMAGE_SAMPLE_CL_V4_V3, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x4, 0x3 }, // 2203
  { IMAGE_SAMPLE_CL_V4_V4, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x4, 0x4 }, // 2204
  { IMAGE_SAMPLE_CL_V5_V1, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x5, 0x1 }, // 2205
  { IMAGE_SAMPLE_CL_V5_V2, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x5, 0x2 }, // 2206
  { IMAGE_SAMPLE_CL_V5_V3, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x5, 0x3 }, // 2207
  { IMAGE_SAMPLE_CL_V5_V4, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x5, 0x4 }, // 2208
  { IMAGE_SAMPLE_CL_O_V1_V2_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10Default, 0x1, 0x2 }, // 2209
  { IMAGE_SAMPLE_CL_O_V1_V3_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10Default, 0x1, 0x3 }, // 2210
  { IMAGE_SAMPLE_CL_O_V1_V4_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10Default, 0x1, 0x4 }, // 2211
  { IMAGE_SAMPLE_CL_O_V1_V8_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10Default, 0x1, 0x8 }, // 2212
  { IMAGE_SAMPLE_CL_O_V2_V2_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10Default, 0x2, 0x2 }, // 2213
  { IMAGE_SAMPLE_CL_O_V2_V3_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 2214
  { IMAGE_SAMPLE_CL_O_V2_V4_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 2215
  { IMAGE_SAMPLE_CL_O_V2_V8_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 2216
  { IMAGE_SAMPLE_CL_O_V3_V2_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10Default, 0x3, 0x2 }, // 2217
  { IMAGE_SAMPLE_CL_O_V3_V3_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10Default, 0x3, 0x3 }, // 2218
  { IMAGE_SAMPLE_CL_O_V3_V4_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10Default, 0x3, 0x4 }, // 2219
  { IMAGE_SAMPLE_CL_O_V3_V8_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10Default, 0x3, 0x8 }, // 2220
  { IMAGE_SAMPLE_CL_O_V4_V2_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10Default, 0x4, 0x2 }, // 2221
  { IMAGE_SAMPLE_CL_O_V4_V3_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 2222
  { IMAGE_SAMPLE_CL_O_V4_V4_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 2223
  { IMAGE_SAMPLE_CL_O_V4_V8_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 2224
  { IMAGE_SAMPLE_CL_O_V5_V2_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10Default, 0x5, 0x2 }, // 2225
  { IMAGE_SAMPLE_CL_O_V5_V3_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 2226
  { IMAGE_SAMPLE_CL_O_V5_V4_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 2227
  { IMAGE_SAMPLE_CL_O_V5_V8_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 2228
  { IMAGE_SAMPLE_CL_O_V1_V2_nsa_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10NSA, 0x1, 0x2 }, // 2229
  { IMAGE_SAMPLE_CL_O_V1_V3_nsa_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10NSA, 0x1, 0x3 }, // 2230
  { IMAGE_SAMPLE_CL_O_V1_V4_nsa_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10NSA, 0x1, 0x4 }, // 2231
  { IMAGE_SAMPLE_CL_O_V1_V5_nsa_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10NSA, 0x1, 0x5 }, // 2232
  { IMAGE_SAMPLE_CL_O_V2_V2_nsa_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10NSA, 0x2, 0x2 }, // 2233
  { IMAGE_SAMPLE_CL_O_V2_V3_nsa_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 2234
  { IMAGE_SAMPLE_CL_O_V2_V4_nsa_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 2235
  { IMAGE_SAMPLE_CL_O_V2_V5_nsa_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 2236
  { IMAGE_SAMPLE_CL_O_V3_V2_nsa_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10NSA, 0x3, 0x2 }, // 2237
  { IMAGE_SAMPLE_CL_O_V3_V3_nsa_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10NSA, 0x3, 0x3 }, // 2238
  { IMAGE_SAMPLE_CL_O_V3_V4_nsa_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10NSA, 0x3, 0x4 }, // 2239
  { IMAGE_SAMPLE_CL_O_V3_V5_nsa_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10NSA, 0x3, 0x5 }, // 2240
  { IMAGE_SAMPLE_CL_O_V4_V2_nsa_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10NSA, 0x4, 0x2 }, // 2241
  { IMAGE_SAMPLE_CL_O_V4_V3_nsa_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 2242
  { IMAGE_SAMPLE_CL_O_V4_V4_nsa_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 2243
  { IMAGE_SAMPLE_CL_O_V4_V5_nsa_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 2244
  { IMAGE_SAMPLE_CL_O_V5_V2_nsa_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10NSA, 0x5, 0x2 }, // 2245
  { IMAGE_SAMPLE_CL_O_V5_V3_nsa_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 2246
  { IMAGE_SAMPLE_CL_O_V5_V4_nsa_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 2247
  { IMAGE_SAMPLE_CL_O_V5_V5_nsa_gfx10, IMAGE_SAMPLE_CL_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 2248
  { IMAGE_SAMPLE_CL_O_V1_V2, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x1, 0x2 }, // 2249
  { IMAGE_SAMPLE_CL_O_V1_V3, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x1, 0x3 }, // 2250
  { IMAGE_SAMPLE_CL_O_V1_V4, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x1, 0x4 }, // 2251
  { IMAGE_SAMPLE_CL_O_V1_V8, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x1, 0x8 }, // 2252
  { IMAGE_SAMPLE_CL_O_V2_V2, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x2, 0x2 }, // 2253
  { IMAGE_SAMPLE_CL_O_V2_V3, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x2, 0x3 }, // 2254
  { IMAGE_SAMPLE_CL_O_V2_V4, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 2255
  { IMAGE_SAMPLE_CL_O_V2_V8, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 2256
  { IMAGE_SAMPLE_CL_O_V3_V2, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x3, 0x2 }, // 2257
  { IMAGE_SAMPLE_CL_O_V3_V3, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x3, 0x3 }, // 2258
  { IMAGE_SAMPLE_CL_O_V3_V4, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x3, 0x4 }, // 2259
  { IMAGE_SAMPLE_CL_O_V3_V8, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x3, 0x8 }, // 2260
  { IMAGE_SAMPLE_CL_O_V4_V2, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x4, 0x2 }, // 2261
  { IMAGE_SAMPLE_CL_O_V4_V3, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x4, 0x3 }, // 2262
  { IMAGE_SAMPLE_CL_O_V4_V4, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 2263
  { IMAGE_SAMPLE_CL_O_V4_V8, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 2264
  { IMAGE_SAMPLE_CL_O_V5_V2, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x5, 0x2 }, // 2265
  { IMAGE_SAMPLE_CL_O_V5_V3, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x5, 0x3 }, // 2266
  { IMAGE_SAMPLE_CL_O_V5_V4, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x5, 0x4 }, // 2267
  { IMAGE_SAMPLE_CL_O_V5_V8, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x5, 0x8 }, // 2268
  { IMAGE_SAMPLE_C_B_V1_V3_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10Default, 0x1, 0x3 }, // 2269
  { IMAGE_SAMPLE_C_B_V1_V4_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10Default, 0x1, 0x4 }, // 2270
  { IMAGE_SAMPLE_C_B_V1_V8_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10Default, 0x1, 0x8 }, // 2271
  { IMAGE_SAMPLE_C_B_V2_V3_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10Default, 0x2, 0x3 }, // 2272
  { IMAGE_SAMPLE_C_B_V2_V4_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10Default, 0x2, 0x4 }, // 2273
  { IMAGE_SAMPLE_C_B_V2_V8_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10Default, 0x2, 0x8 }, // 2274
  { IMAGE_SAMPLE_C_B_V3_V3_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10Default, 0x3, 0x3 }, // 2275
  { IMAGE_SAMPLE_C_B_V3_V4_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10Default, 0x3, 0x4 }, // 2276
  { IMAGE_SAMPLE_C_B_V3_V8_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10Default, 0x3, 0x8 }, // 2277
  { IMAGE_SAMPLE_C_B_V4_V3_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10Default, 0x4, 0x3 }, // 2278
  { IMAGE_SAMPLE_C_B_V4_V4_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10Default, 0x4, 0x4 }, // 2279
  { IMAGE_SAMPLE_C_B_V4_V8_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10Default, 0x4, 0x8 }, // 2280
  { IMAGE_SAMPLE_C_B_V5_V3_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10Default, 0x5, 0x3 }, // 2281
  { IMAGE_SAMPLE_C_B_V5_V4_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10Default, 0x5, 0x4 }, // 2282
  { IMAGE_SAMPLE_C_B_V5_V8_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10Default, 0x5, 0x8 }, // 2283
  { IMAGE_SAMPLE_C_B_V1_V3_nsa_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10NSA, 0x1, 0x3 }, // 2284
  { IMAGE_SAMPLE_C_B_V1_V4_nsa_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10NSA, 0x1, 0x4 }, // 2285
  { IMAGE_SAMPLE_C_B_V1_V5_nsa_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10NSA, 0x1, 0x5 }, // 2286
  { IMAGE_SAMPLE_C_B_V2_V3_nsa_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10NSA, 0x2, 0x3 }, // 2287
  { IMAGE_SAMPLE_C_B_V2_V4_nsa_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10NSA, 0x2, 0x4 }, // 2288
  { IMAGE_SAMPLE_C_B_V2_V5_nsa_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10NSA, 0x2, 0x5 }, // 2289
  { IMAGE_SAMPLE_C_B_V3_V3_nsa_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10NSA, 0x3, 0x3 }, // 2290
  { IMAGE_SAMPLE_C_B_V3_V4_nsa_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10NSA, 0x3, 0x4 }, // 2291
  { IMAGE_SAMPLE_C_B_V3_V5_nsa_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10NSA, 0x3, 0x5 }, // 2292
  { IMAGE_SAMPLE_C_B_V4_V3_nsa_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10NSA, 0x4, 0x3 }, // 2293
  { IMAGE_SAMPLE_C_B_V4_V4_nsa_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10NSA, 0x4, 0x4 }, // 2294
  { IMAGE_SAMPLE_C_B_V4_V5_nsa_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10NSA, 0x4, 0x5 }, // 2295
  { IMAGE_SAMPLE_C_B_V5_V3_nsa_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10NSA, 0x5, 0x3 }, // 2296
  { IMAGE_SAMPLE_C_B_V5_V4_nsa_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10NSA, 0x5, 0x4 }, // 2297
  { IMAGE_SAMPLE_C_B_V5_V5_nsa_gfx10, IMAGE_SAMPLE_C_B, MIMGEncGfx10NSA, 0x5, 0x5 }, // 2298
  { IMAGE_SAMPLE_C_B_V1_V3, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x1, 0x3 }, // 2299
  { IMAGE_SAMPLE_C_B_V1_V4, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x1, 0x4 }, // 2300
  { IMAGE_SAMPLE_C_B_V1_V8, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x1, 0x8 }, // 2301
  { IMAGE_SAMPLE_C_B_V2_V3, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x2, 0x3 }, // 2302
  { IMAGE_SAMPLE_C_B_V2_V4, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x2, 0x4 }, // 2303
  { IMAGE_SAMPLE_C_B_V2_V8, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x2, 0x8 }, // 2304
  { IMAGE_SAMPLE_C_B_V3_V3, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x3, 0x3 }, // 2305
  { IMAGE_SAMPLE_C_B_V3_V4, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x3, 0x4 }, // 2306
  { IMAGE_SAMPLE_C_B_V3_V8, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x3, 0x8 }, // 2307
  { IMAGE_SAMPLE_C_B_V4_V3, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x4, 0x3 }, // 2308
  { IMAGE_SAMPLE_C_B_V4_V4, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x4, 0x4 }, // 2309
  { IMAGE_SAMPLE_C_B_V4_V8, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x4, 0x8 }, // 2310
  { IMAGE_SAMPLE_C_B_V5_V3, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x5, 0x3 }, // 2311
  { IMAGE_SAMPLE_C_B_V5_V4, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x5, 0x4 }, // 2312
  { IMAGE_SAMPLE_C_B_V5_V8, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x5, 0x8 }, // 2313
  { IMAGE_SAMPLE_C_B_CL_V1_V3_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10Default, 0x1, 0x3 }, // 2314
  { IMAGE_SAMPLE_C_B_CL_V1_V4_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10Default, 0x1, 0x4 }, // 2315
  { IMAGE_SAMPLE_C_B_CL_V1_V8_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10Default, 0x1, 0x8 }, // 2316
  { IMAGE_SAMPLE_C_B_CL_V2_V3_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10Default, 0x2, 0x3 }, // 2317
  { IMAGE_SAMPLE_C_B_CL_V2_V4_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10Default, 0x2, 0x4 }, // 2318
  { IMAGE_SAMPLE_C_B_CL_V2_V8_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10Default, 0x2, 0x8 }, // 2319
  { IMAGE_SAMPLE_C_B_CL_V3_V3_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10Default, 0x3, 0x3 }, // 2320
  { IMAGE_SAMPLE_C_B_CL_V3_V4_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10Default, 0x3, 0x4 }, // 2321
  { IMAGE_SAMPLE_C_B_CL_V3_V8_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10Default, 0x3, 0x8 }, // 2322
  { IMAGE_SAMPLE_C_B_CL_V4_V3_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10Default, 0x4, 0x3 }, // 2323
  { IMAGE_SAMPLE_C_B_CL_V4_V4_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10Default, 0x4, 0x4 }, // 2324
  { IMAGE_SAMPLE_C_B_CL_V4_V8_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10Default, 0x4, 0x8 }, // 2325
  { IMAGE_SAMPLE_C_B_CL_V5_V3_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10Default, 0x5, 0x3 }, // 2326
  { IMAGE_SAMPLE_C_B_CL_V5_V4_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10Default, 0x5, 0x4 }, // 2327
  { IMAGE_SAMPLE_C_B_CL_V5_V8_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10Default, 0x5, 0x8 }, // 2328
  { IMAGE_SAMPLE_C_B_CL_V1_V3_nsa_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10NSA, 0x1, 0x3 }, // 2329
  { IMAGE_SAMPLE_C_B_CL_V1_V4_nsa_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10NSA, 0x1, 0x4 }, // 2330
  { IMAGE_SAMPLE_C_B_CL_V1_V5_nsa_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10NSA, 0x1, 0x5 }, // 2331
  { IMAGE_SAMPLE_C_B_CL_V1_V6_nsa_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10NSA, 0x1, 0x6 }, // 2332
  { IMAGE_SAMPLE_C_B_CL_V2_V3_nsa_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10NSA, 0x2, 0x3 }, // 2333
  { IMAGE_SAMPLE_C_B_CL_V2_V4_nsa_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10NSA, 0x2, 0x4 }, // 2334
  { IMAGE_SAMPLE_C_B_CL_V2_V5_nsa_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10NSA, 0x2, 0x5 }, // 2335
  { IMAGE_SAMPLE_C_B_CL_V2_V6_nsa_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10NSA, 0x2, 0x6 }, // 2336
  { IMAGE_SAMPLE_C_B_CL_V3_V3_nsa_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10NSA, 0x3, 0x3 }, // 2337
  { IMAGE_SAMPLE_C_B_CL_V3_V4_nsa_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10NSA, 0x3, 0x4 }, // 2338
  { IMAGE_SAMPLE_C_B_CL_V3_V5_nsa_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10NSA, 0x3, 0x5 }, // 2339
  { IMAGE_SAMPLE_C_B_CL_V3_V6_nsa_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10NSA, 0x3, 0x6 }, // 2340
  { IMAGE_SAMPLE_C_B_CL_V4_V3_nsa_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10NSA, 0x4, 0x3 }, // 2341
  { IMAGE_SAMPLE_C_B_CL_V4_V4_nsa_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10NSA, 0x4, 0x4 }, // 2342
  { IMAGE_SAMPLE_C_B_CL_V4_V5_nsa_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10NSA, 0x4, 0x5 }, // 2343
  { IMAGE_SAMPLE_C_B_CL_V4_V6_nsa_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10NSA, 0x4, 0x6 }, // 2344
  { IMAGE_SAMPLE_C_B_CL_V5_V3_nsa_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10NSA, 0x5, 0x3 }, // 2345
  { IMAGE_SAMPLE_C_B_CL_V5_V4_nsa_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10NSA, 0x5, 0x4 }, // 2346
  { IMAGE_SAMPLE_C_B_CL_V5_V5_nsa_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10NSA, 0x5, 0x5 }, // 2347
  { IMAGE_SAMPLE_C_B_CL_V5_V6_nsa_gfx10, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx10NSA, 0x5, 0x6 }, // 2348
  { IMAGE_SAMPLE_C_B_CL_V1_V3, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x1, 0x3 }, // 2349
  { IMAGE_SAMPLE_C_B_CL_V1_V4, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x1, 0x4 }, // 2350
  { IMAGE_SAMPLE_C_B_CL_V1_V8, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x1, 0x8 }, // 2351
  { IMAGE_SAMPLE_C_B_CL_V2_V3, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x2, 0x3 }, // 2352
  { IMAGE_SAMPLE_C_B_CL_V2_V4, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x2, 0x4 }, // 2353
  { IMAGE_SAMPLE_C_B_CL_V2_V8, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x2, 0x8 }, // 2354
  { IMAGE_SAMPLE_C_B_CL_V3_V3, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x3, 0x3 }, // 2355
  { IMAGE_SAMPLE_C_B_CL_V3_V4, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x3, 0x4 }, // 2356
  { IMAGE_SAMPLE_C_B_CL_V3_V8, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x3, 0x8 }, // 2357
  { IMAGE_SAMPLE_C_B_CL_V4_V3, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x4, 0x3 }, // 2358
  { IMAGE_SAMPLE_C_B_CL_V4_V4, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x4, 0x4 }, // 2359
  { IMAGE_SAMPLE_C_B_CL_V4_V8, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x4, 0x8 }, // 2360
  { IMAGE_SAMPLE_C_B_CL_V5_V3, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x5, 0x3 }, // 2361
  { IMAGE_SAMPLE_C_B_CL_V5_V4, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x5, 0x4 }, // 2362
  { IMAGE_SAMPLE_C_B_CL_V5_V8, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x5, 0x8 }, // 2363
  { IMAGE_SAMPLE_C_B_CL_O_V1_V4_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10Default, 0x1, 0x4 }, // 2364
  { IMAGE_SAMPLE_C_B_CL_O_V1_V8_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10Default, 0x1, 0x8 }, // 2365
  { IMAGE_SAMPLE_C_B_CL_O_V2_V4_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 2366
  { IMAGE_SAMPLE_C_B_CL_O_V2_V8_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 2367
  { IMAGE_SAMPLE_C_B_CL_O_V3_V4_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10Default, 0x3, 0x4 }, // 2368
  { IMAGE_SAMPLE_C_B_CL_O_V3_V8_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10Default, 0x3, 0x8 }, // 2369
  { IMAGE_SAMPLE_C_B_CL_O_V4_V4_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 2370
  { IMAGE_SAMPLE_C_B_CL_O_V4_V8_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 2371
  { IMAGE_SAMPLE_C_B_CL_O_V5_V4_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 2372
  { IMAGE_SAMPLE_C_B_CL_O_V5_V8_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 2373
  { IMAGE_SAMPLE_C_B_CL_O_V1_V4_nsa_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10NSA, 0x1, 0x4 }, // 2374
  { IMAGE_SAMPLE_C_B_CL_O_V1_V5_nsa_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10NSA, 0x1, 0x5 }, // 2375
  { IMAGE_SAMPLE_C_B_CL_O_V1_V6_nsa_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10NSA, 0x1, 0x6 }, // 2376
  { IMAGE_SAMPLE_C_B_CL_O_V1_V7_nsa_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10NSA, 0x1, 0x7 }, // 2377
  { IMAGE_SAMPLE_C_B_CL_O_V2_V4_nsa_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 2378
  { IMAGE_SAMPLE_C_B_CL_O_V2_V5_nsa_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 2379
  { IMAGE_SAMPLE_C_B_CL_O_V2_V6_nsa_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10NSA, 0x2, 0x6 }, // 2380
  { IMAGE_SAMPLE_C_B_CL_O_V2_V7_nsa_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10NSA, 0x2, 0x7 }, // 2381
  { IMAGE_SAMPLE_C_B_CL_O_V3_V4_nsa_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10NSA, 0x3, 0x4 }, // 2382
  { IMAGE_SAMPLE_C_B_CL_O_V3_V5_nsa_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10NSA, 0x3, 0x5 }, // 2383
  { IMAGE_SAMPLE_C_B_CL_O_V3_V6_nsa_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10NSA, 0x3, 0x6 }, // 2384
  { IMAGE_SAMPLE_C_B_CL_O_V3_V7_nsa_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10NSA, 0x3, 0x7 }, // 2385
  { IMAGE_SAMPLE_C_B_CL_O_V4_V4_nsa_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 2386
  { IMAGE_SAMPLE_C_B_CL_O_V4_V5_nsa_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 2387
  { IMAGE_SAMPLE_C_B_CL_O_V4_V6_nsa_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10NSA, 0x4, 0x6 }, // 2388
  { IMAGE_SAMPLE_C_B_CL_O_V4_V7_nsa_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10NSA, 0x4, 0x7 }, // 2389
  { IMAGE_SAMPLE_C_B_CL_O_V5_V4_nsa_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 2390
  { IMAGE_SAMPLE_C_B_CL_O_V5_V5_nsa_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 2391
  { IMAGE_SAMPLE_C_B_CL_O_V5_V6_nsa_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10NSA, 0x5, 0x6 }, // 2392
  { IMAGE_SAMPLE_C_B_CL_O_V5_V7_nsa_gfx10, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx10NSA, 0x5, 0x7 }, // 2393
  { IMAGE_SAMPLE_C_B_CL_O_V1_V4, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx6, 0x1, 0x4 }, // 2394
  { IMAGE_SAMPLE_C_B_CL_O_V1_V8, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx6, 0x1, 0x8 }, // 2395
  { IMAGE_SAMPLE_C_B_CL_O_V2_V4, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 2396
  { IMAGE_SAMPLE_C_B_CL_O_V2_V8, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 2397
  { IMAGE_SAMPLE_C_B_CL_O_V3_V4, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx6, 0x3, 0x4 }, // 2398
  { IMAGE_SAMPLE_C_B_CL_O_V3_V8, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx6, 0x3, 0x8 }, // 2399
  { IMAGE_SAMPLE_C_B_CL_O_V4_V4, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 2400
  { IMAGE_SAMPLE_C_B_CL_O_V4_V8, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 2401
  { IMAGE_SAMPLE_C_B_CL_O_V5_V4, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx6, 0x5, 0x4 }, // 2402
  { IMAGE_SAMPLE_C_B_CL_O_V5_V8, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx6, 0x5, 0x8 }, // 2403
  { IMAGE_SAMPLE_C_B_O_V1_V4_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10Default, 0x1, 0x4 }, // 2404
  { IMAGE_SAMPLE_C_B_O_V1_V8_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10Default, 0x1, 0x8 }, // 2405
  { IMAGE_SAMPLE_C_B_O_V2_V4_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 2406
  { IMAGE_SAMPLE_C_B_O_V2_V8_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 2407
  { IMAGE_SAMPLE_C_B_O_V3_V4_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10Default, 0x3, 0x4 }, // 2408
  { IMAGE_SAMPLE_C_B_O_V3_V8_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10Default, 0x3, 0x8 }, // 2409
  { IMAGE_SAMPLE_C_B_O_V4_V4_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 2410
  { IMAGE_SAMPLE_C_B_O_V4_V8_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 2411
  { IMAGE_SAMPLE_C_B_O_V5_V4_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 2412
  { IMAGE_SAMPLE_C_B_O_V5_V8_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 2413
  { IMAGE_SAMPLE_C_B_O_V1_V4_nsa_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10NSA, 0x1, 0x4 }, // 2414
  { IMAGE_SAMPLE_C_B_O_V1_V5_nsa_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10NSA, 0x1, 0x5 }, // 2415
  { IMAGE_SAMPLE_C_B_O_V1_V6_nsa_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10NSA, 0x1, 0x6 }, // 2416
  { IMAGE_SAMPLE_C_B_O_V2_V4_nsa_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 2417
  { IMAGE_SAMPLE_C_B_O_V2_V5_nsa_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 2418
  { IMAGE_SAMPLE_C_B_O_V2_V6_nsa_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10NSA, 0x2, 0x6 }, // 2419
  { IMAGE_SAMPLE_C_B_O_V3_V4_nsa_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10NSA, 0x3, 0x4 }, // 2420
  { IMAGE_SAMPLE_C_B_O_V3_V5_nsa_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10NSA, 0x3, 0x5 }, // 2421
  { IMAGE_SAMPLE_C_B_O_V3_V6_nsa_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10NSA, 0x3, 0x6 }, // 2422
  { IMAGE_SAMPLE_C_B_O_V4_V4_nsa_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 2423
  { IMAGE_SAMPLE_C_B_O_V4_V5_nsa_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 2424
  { IMAGE_SAMPLE_C_B_O_V4_V6_nsa_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10NSA, 0x4, 0x6 }, // 2425
  { IMAGE_SAMPLE_C_B_O_V5_V4_nsa_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 2426
  { IMAGE_SAMPLE_C_B_O_V5_V5_nsa_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 2427
  { IMAGE_SAMPLE_C_B_O_V5_V6_nsa_gfx10, IMAGE_SAMPLE_C_B_O, MIMGEncGfx10NSA, 0x5, 0x6 }, // 2428
  { IMAGE_SAMPLE_C_B_O_V1_V4, IMAGE_SAMPLE_C_B_O, MIMGEncGfx6, 0x1, 0x4 }, // 2429
  { IMAGE_SAMPLE_C_B_O_V1_V8, IMAGE_SAMPLE_C_B_O, MIMGEncGfx6, 0x1, 0x8 }, // 2430
  { IMAGE_SAMPLE_C_B_O_V2_V4, IMAGE_SAMPLE_C_B_O, MIMGEncGfx6, 0x2, 0x4 }, // 2431
  { IMAGE_SAMPLE_C_B_O_V2_V8, IMAGE_SAMPLE_C_B_O, MIMGEncGfx6, 0x2, 0x8 }, // 2432
  { IMAGE_SAMPLE_C_B_O_V3_V4, IMAGE_SAMPLE_C_B_O, MIMGEncGfx6, 0x3, 0x4 }, // 2433
  { IMAGE_SAMPLE_C_B_O_V3_V8, IMAGE_SAMPLE_C_B_O, MIMGEncGfx6, 0x3, 0x8 }, // 2434
  { IMAGE_SAMPLE_C_B_O_V4_V4, IMAGE_SAMPLE_C_B_O, MIMGEncGfx6, 0x4, 0x4 }, // 2435
  { IMAGE_SAMPLE_C_B_O_V4_V8, IMAGE_SAMPLE_C_B_O, MIMGEncGfx6, 0x4, 0x8 }, // 2436
  { IMAGE_SAMPLE_C_B_O_V5_V4, IMAGE_SAMPLE_C_B_O, MIMGEncGfx6, 0x5, 0x4 }, // 2437
  { IMAGE_SAMPLE_C_B_O_V5_V8, IMAGE_SAMPLE_C_B_O, MIMGEncGfx6, 0x5, 0x8 }, // 2438
  { IMAGE_SAMPLE_C_CD_V1_V3_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10Default, 0x1, 0x3 }, // 2439
  { IMAGE_SAMPLE_C_CD_V1_V4_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10Default, 0x1, 0x4 }, // 2440
  { IMAGE_SAMPLE_C_CD_V1_V8_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10Default, 0x1, 0x8 }, // 2441
  { IMAGE_SAMPLE_C_CD_V1_V16_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10Default, 0x1, 0x10 }, // 2442
  { IMAGE_SAMPLE_C_CD_V2_V3_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10Default, 0x2, 0x3 }, // 2443
  { IMAGE_SAMPLE_C_CD_V2_V4_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10Default, 0x2, 0x4 }, // 2444
  { IMAGE_SAMPLE_C_CD_V2_V8_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10Default, 0x2, 0x8 }, // 2445
  { IMAGE_SAMPLE_C_CD_V2_V16_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10Default, 0x2, 0x10 }, // 2446
  { IMAGE_SAMPLE_C_CD_V3_V3_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10Default, 0x3, 0x3 }, // 2447
  { IMAGE_SAMPLE_C_CD_V3_V4_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10Default, 0x3, 0x4 }, // 2448
  { IMAGE_SAMPLE_C_CD_V3_V8_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10Default, 0x3, 0x8 }, // 2449
  { IMAGE_SAMPLE_C_CD_V3_V16_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10Default, 0x3, 0x10 }, // 2450
  { IMAGE_SAMPLE_C_CD_V4_V3_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10Default, 0x4, 0x3 }, // 2451
  { IMAGE_SAMPLE_C_CD_V4_V4_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10Default, 0x4, 0x4 }, // 2452
  { IMAGE_SAMPLE_C_CD_V4_V8_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10Default, 0x4, 0x8 }, // 2453
  { IMAGE_SAMPLE_C_CD_V4_V16_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10Default, 0x4, 0x10 }, // 2454
  { IMAGE_SAMPLE_C_CD_V5_V3_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10Default, 0x5, 0x3 }, // 2455
  { IMAGE_SAMPLE_C_CD_V5_V4_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10Default, 0x5, 0x4 }, // 2456
  { IMAGE_SAMPLE_C_CD_V5_V8_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10Default, 0x5, 0x8 }, // 2457
  { IMAGE_SAMPLE_C_CD_V5_V16_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10Default, 0x5, 0x10 }, // 2458
  { IMAGE_SAMPLE_C_CD_V1_V3_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x1, 0x3 }, // 2459
  { IMAGE_SAMPLE_C_CD_V1_V4_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x1, 0x4 }, // 2460
  { IMAGE_SAMPLE_C_CD_V1_V5_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x1, 0x5 }, // 2461
  { IMAGE_SAMPLE_C_CD_V1_V6_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x1, 0x6 }, // 2462
  { IMAGE_SAMPLE_C_CD_V1_V7_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x1, 0x7 }, // 2463
  { IMAGE_SAMPLE_C_CD_V1_V8_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x1, 0x8 }, // 2464
  { IMAGE_SAMPLE_C_CD_V1_V10_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x1, 0xA }, // 2465
  { IMAGE_SAMPLE_C_CD_V2_V3_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x2, 0x3 }, // 2466
  { IMAGE_SAMPLE_C_CD_V2_V4_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x2, 0x4 }, // 2467
  { IMAGE_SAMPLE_C_CD_V2_V5_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x2, 0x5 }, // 2468
  { IMAGE_SAMPLE_C_CD_V2_V6_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x2, 0x6 }, // 2469
  { IMAGE_SAMPLE_C_CD_V2_V7_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x2, 0x7 }, // 2470
  { IMAGE_SAMPLE_C_CD_V2_V8_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x2, 0x8 }, // 2471
  { IMAGE_SAMPLE_C_CD_V2_V10_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x2, 0xA }, // 2472
  { IMAGE_SAMPLE_C_CD_V3_V3_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x3, 0x3 }, // 2473
  { IMAGE_SAMPLE_C_CD_V3_V4_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x3, 0x4 }, // 2474
  { IMAGE_SAMPLE_C_CD_V3_V5_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x3, 0x5 }, // 2475
  { IMAGE_SAMPLE_C_CD_V3_V6_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x3, 0x6 }, // 2476
  { IMAGE_SAMPLE_C_CD_V3_V7_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x3, 0x7 }, // 2477
  { IMAGE_SAMPLE_C_CD_V3_V8_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x3, 0x8 }, // 2478
  { IMAGE_SAMPLE_C_CD_V3_V10_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x3, 0xA }, // 2479
  { IMAGE_SAMPLE_C_CD_V4_V3_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x4, 0x3 }, // 2480
  { IMAGE_SAMPLE_C_CD_V4_V4_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x4, 0x4 }, // 2481
  { IMAGE_SAMPLE_C_CD_V4_V5_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x4, 0x5 }, // 2482
  { IMAGE_SAMPLE_C_CD_V4_V6_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x4, 0x6 }, // 2483
  { IMAGE_SAMPLE_C_CD_V4_V7_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x4, 0x7 }, // 2484
  { IMAGE_SAMPLE_C_CD_V4_V8_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x4, 0x8 }, // 2485
  { IMAGE_SAMPLE_C_CD_V4_V10_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x4, 0xA }, // 2486
  { IMAGE_SAMPLE_C_CD_V5_V3_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x5, 0x3 }, // 2487
  { IMAGE_SAMPLE_C_CD_V5_V4_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x5, 0x4 }, // 2488
  { IMAGE_SAMPLE_C_CD_V5_V5_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x5, 0x5 }, // 2489
  { IMAGE_SAMPLE_C_CD_V5_V6_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x5, 0x6 }, // 2490
  { IMAGE_SAMPLE_C_CD_V5_V7_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x5, 0x7 }, // 2491
  { IMAGE_SAMPLE_C_CD_V5_V8_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x5, 0x8 }, // 2492
  { IMAGE_SAMPLE_C_CD_V5_V10_nsa_gfx10, IMAGE_SAMPLE_C_CD, MIMGEncGfx10NSA, 0x5, 0xA }, // 2493
  { IMAGE_SAMPLE_C_CD_V1_V3, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x1, 0x3 }, // 2494
  { IMAGE_SAMPLE_C_CD_V1_V4, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x1, 0x4 }, // 2495
  { IMAGE_SAMPLE_C_CD_V1_V8, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x1, 0x8 }, // 2496
  { IMAGE_SAMPLE_C_CD_V1_V16, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x1, 0x10 }, // 2497
  { IMAGE_SAMPLE_C_CD_V2_V3, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x2, 0x3 }, // 2498
  { IMAGE_SAMPLE_C_CD_V2_V4, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x2, 0x4 }, // 2499
  { IMAGE_SAMPLE_C_CD_V2_V8, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x2, 0x8 }, // 2500
  { IMAGE_SAMPLE_C_CD_V2_V16, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x2, 0x10 }, // 2501
  { IMAGE_SAMPLE_C_CD_V3_V3, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x3, 0x3 }, // 2502
  { IMAGE_SAMPLE_C_CD_V3_V4, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x3, 0x4 }, // 2503
  { IMAGE_SAMPLE_C_CD_V3_V8, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x3, 0x8 }, // 2504
  { IMAGE_SAMPLE_C_CD_V3_V16, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x3, 0x10 }, // 2505
  { IMAGE_SAMPLE_C_CD_V4_V3, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x4, 0x3 }, // 2506
  { IMAGE_SAMPLE_C_CD_V4_V4, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x4, 0x4 }, // 2507
  { IMAGE_SAMPLE_C_CD_V4_V8, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x4, 0x8 }, // 2508
  { IMAGE_SAMPLE_C_CD_V4_V16, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x4, 0x10 }, // 2509
  { IMAGE_SAMPLE_C_CD_V5_V3, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x5, 0x3 }, // 2510
  { IMAGE_SAMPLE_C_CD_V5_V4, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x5, 0x4 }, // 2511
  { IMAGE_SAMPLE_C_CD_V5_V8, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x5, 0x8 }, // 2512
  { IMAGE_SAMPLE_C_CD_V5_V16, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x5, 0x10 }, // 2513
  { IMAGE_SAMPLE_C_CD_CL_V1_V3_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10Default, 0x1, 0x3 }, // 2514
  { IMAGE_SAMPLE_C_CD_CL_V1_V4_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10Default, 0x1, 0x4 }, // 2515
  { IMAGE_SAMPLE_C_CD_CL_V1_V8_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10Default, 0x1, 0x8 }, // 2516
  { IMAGE_SAMPLE_C_CD_CL_V1_V16_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10Default, 0x1, 0x10 }, // 2517
  { IMAGE_SAMPLE_C_CD_CL_V2_V3_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10Default, 0x2, 0x3 }, // 2518
  { IMAGE_SAMPLE_C_CD_CL_V2_V4_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10Default, 0x2, 0x4 }, // 2519
  { IMAGE_SAMPLE_C_CD_CL_V2_V8_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10Default, 0x2, 0x8 }, // 2520
  { IMAGE_SAMPLE_C_CD_CL_V2_V16_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10Default, 0x2, 0x10 }, // 2521
  { IMAGE_SAMPLE_C_CD_CL_V3_V3_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10Default, 0x3, 0x3 }, // 2522
  { IMAGE_SAMPLE_C_CD_CL_V3_V4_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10Default, 0x3, 0x4 }, // 2523
  { IMAGE_SAMPLE_C_CD_CL_V3_V8_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10Default, 0x3, 0x8 }, // 2524
  { IMAGE_SAMPLE_C_CD_CL_V3_V16_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10Default, 0x3, 0x10 }, // 2525
  { IMAGE_SAMPLE_C_CD_CL_V4_V3_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10Default, 0x4, 0x3 }, // 2526
  { IMAGE_SAMPLE_C_CD_CL_V4_V4_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10Default, 0x4, 0x4 }, // 2527
  { IMAGE_SAMPLE_C_CD_CL_V4_V8_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10Default, 0x4, 0x8 }, // 2528
  { IMAGE_SAMPLE_C_CD_CL_V4_V16_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10Default, 0x4, 0x10 }, // 2529
  { IMAGE_SAMPLE_C_CD_CL_V5_V3_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10Default, 0x5, 0x3 }, // 2530
  { IMAGE_SAMPLE_C_CD_CL_V5_V4_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10Default, 0x5, 0x4 }, // 2531
  { IMAGE_SAMPLE_C_CD_CL_V5_V8_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10Default, 0x5, 0x8 }, // 2532
  { IMAGE_SAMPLE_C_CD_CL_V5_V16_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10Default, 0x5, 0x10 }, // 2533
  { IMAGE_SAMPLE_C_CD_CL_V1_V3_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x1, 0x3 }, // 2534
  { IMAGE_SAMPLE_C_CD_CL_V1_V4_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x1, 0x4 }, // 2535
  { IMAGE_SAMPLE_C_CD_CL_V1_V5_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x1, 0x5 }, // 2536
  { IMAGE_SAMPLE_C_CD_CL_V1_V6_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x1, 0x6 }, // 2537
  { IMAGE_SAMPLE_C_CD_CL_V1_V8_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x1, 0x8 }, // 2538
  { IMAGE_SAMPLE_C_CD_CL_V1_V9_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x1, 0x9 }, // 2539
  { IMAGE_SAMPLE_C_CD_CL_V1_V11_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x1, 0xB }, // 2540
  { IMAGE_SAMPLE_C_CD_CL_V2_V3_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x2, 0x3 }, // 2541
  { IMAGE_SAMPLE_C_CD_CL_V2_V4_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x2, 0x4 }, // 2542
  { IMAGE_SAMPLE_C_CD_CL_V2_V5_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x2, 0x5 }, // 2543
  { IMAGE_SAMPLE_C_CD_CL_V2_V6_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x2, 0x6 }, // 2544
  { IMAGE_SAMPLE_C_CD_CL_V2_V8_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x2, 0x8 }, // 2545
  { IMAGE_SAMPLE_C_CD_CL_V2_V9_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x2, 0x9 }, // 2546
  { IMAGE_SAMPLE_C_CD_CL_V2_V11_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x2, 0xB }, // 2547
  { IMAGE_SAMPLE_C_CD_CL_V3_V3_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x3, 0x3 }, // 2548
  { IMAGE_SAMPLE_C_CD_CL_V3_V4_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x3, 0x4 }, // 2549
  { IMAGE_SAMPLE_C_CD_CL_V3_V5_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x3, 0x5 }, // 2550
  { IMAGE_SAMPLE_C_CD_CL_V3_V6_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x3, 0x6 }, // 2551
  { IMAGE_SAMPLE_C_CD_CL_V3_V8_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x3, 0x8 }, // 2552
  { IMAGE_SAMPLE_C_CD_CL_V3_V9_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x3, 0x9 }, // 2553
  { IMAGE_SAMPLE_C_CD_CL_V3_V11_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x3, 0xB }, // 2554
  { IMAGE_SAMPLE_C_CD_CL_V4_V3_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x4, 0x3 }, // 2555
  { IMAGE_SAMPLE_C_CD_CL_V4_V4_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x4, 0x4 }, // 2556
  { IMAGE_SAMPLE_C_CD_CL_V4_V5_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x4, 0x5 }, // 2557
  { IMAGE_SAMPLE_C_CD_CL_V4_V6_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x4, 0x6 }, // 2558
  { IMAGE_SAMPLE_C_CD_CL_V4_V8_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x4, 0x8 }, // 2559
  { IMAGE_SAMPLE_C_CD_CL_V4_V9_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x4, 0x9 }, // 2560
  { IMAGE_SAMPLE_C_CD_CL_V4_V11_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x4, 0xB }, // 2561
  { IMAGE_SAMPLE_C_CD_CL_V5_V3_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x5, 0x3 }, // 2562
  { IMAGE_SAMPLE_C_CD_CL_V5_V4_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x5, 0x4 }, // 2563
  { IMAGE_SAMPLE_C_CD_CL_V5_V5_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x5, 0x5 }, // 2564
  { IMAGE_SAMPLE_C_CD_CL_V5_V6_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x5, 0x6 }, // 2565
  { IMAGE_SAMPLE_C_CD_CL_V5_V8_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x5, 0x8 }, // 2566
  { IMAGE_SAMPLE_C_CD_CL_V5_V9_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x5, 0x9 }, // 2567
  { IMAGE_SAMPLE_C_CD_CL_V5_V11_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx10NSA, 0x5, 0xB }, // 2568
  { IMAGE_SAMPLE_C_CD_CL_V1_V3, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x1, 0x3 }, // 2569
  { IMAGE_SAMPLE_C_CD_CL_V1_V4, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x1, 0x4 }, // 2570
  { IMAGE_SAMPLE_C_CD_CL_V1_V8, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x1, 0x8 }, // 2571
  { IMAGE_SAMPLE_C_CD_CL_V1_V16, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x1, 0x10 }, // 2572
  { IMAGE_SAMPLE_C_CD_CL_V2_V3, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x2, 0x3 }, // 2573
  { IMAGE_SAMPLE_C_CD_CL_V2_V4, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x2, 0x4 }, // 2574
  { IMAGE_SAMPLE_C_CD_CL_V2_V8, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x2, 0x8 }, // 2575
  { IMAGE_SAMPLE_C_CD_CL_V2_V16, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x2, 0x10 }, // 2576
  { IMAGE_SAMPLE_C_CD_CL_V3_V3, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x3, 0x3 }, // 2577
  { IMAGE_SAMPLE_C_CD_CL_V3_V4, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x3, 0x4 }, // 2578
  { IMAGE_SAMPLE_C_CD_CL_V3_V8, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x3, 0x8 }, // 2579
  { IMAGE_SAMPLE_C_CD_CL_V3_V16, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x3, 0x10 }, // 2580
  { IMAGE_SAMPLE_C_CD_CL_V4_V3, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x4, 0x3 }, // 2581
  { IMAGE_SAMPLE_C_CD_CL_V4_V4, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x4, 0x4 }, // 2582
  { IMAGE_SAMPLE_C_CD_CL_V4_V8, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x4, 0x8 }, // 2583
  { IMAGE_SAMPLE_C_CD_CL_V4_V16, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x4, 0x10 }, // 2584
  { IMAGE_SAMPLE_C_CD_CL_V5_V3, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x5, 0x3 }, // 2585
  { IMAGE_SAMPLE_C_CD_CL_V5_V4, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x5, 0x4 }, // 2586
  { IMAGE_SAMPLE_C_CD_CL_V5_V8, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x5, 0x8 }, // 2587
  { IMAGE_SAMPLE_C_CD_CL_V5_V16, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x5, 0x10 }, // 2588
  { IMAGE_SAMPLE_C_CD_CL_O_V1_V4_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10Default, 0x1, 0x4 }, // 2589
  { IMAGE_SAMPLE_C_CD_CL_O_V1_V8_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10Default, 0x1, 0x8 }, // 2590
  { IMAGE_SAMPLE_C_CD_CL_O_V1_V16_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10Default, 0x1, 0x10 }, // 2591
  { IMAGE_SAMPLE_C_CD_CL_O_V2_V4_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 2592
  { IMAGE_SAMPLE_C_CD_CL_O_V2_V8_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 2593
  { IMAGE_SAMPLE_C_CD_CL_O_V2_V16_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10Default, 0x2, 0x10 }, // 2594
  { IMAGE_SAMPLE_C_CD_CL_O_V3_V4_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10Default, 0x3, 0x4 }, // 2595
  { IMAGE_SAMPLE_C_CD_CL_O_V3_V8_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10Default, 0x3, 0x8 }, // 2596
  { IMAGE_SAMPLE_C_CD_CL_O_V3_V16_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10Default, 0x3, 0x10 }, // 2597
  { IMAGE_SAMPLE_C_CD_CL_O_V4_V4_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 2598
  { IMAGE_SAMPLE_C_CD_CL_O_V4_V8_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 2599
  { IMAGE_SAMPLE_C_CD_CL_O_V4_V16_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10Default, 0x4, 0x10 }, // 2600
  { IMAGE_SAMPLE_C_CD_CL_O_V5_V4_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 2601
  { IMAGE_SAMPLE_C_CD_CL_O_V5_V8_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 2602
  { IMAGE_SAMPLE_C_CD_CL_O_V5_V16_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10Default, 0x5, 0x10 }, // 2603
  { IMAGE_SAMPLE_C_CD_CL_O_V1_V4_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x1, 0x4 }, // 2604
  { IMAGE_SAMPLE_C_CD_CL_O_V1_V5_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x1, 0x5 }, // 2605
  { IMAGE_SAMPLE_C_CD_CL_O_V1_V6_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x1, 0x6 }, // 2606
  { IMAGE_SAMPLE_C_CD_CL_O_V1_V7_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x1, 0x7 }, // 2607
  { IMAGE_SAMPLE_C_CD_CL_O_V1_V9_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x1, 0x9 }, // 2608
  { IMAGE_SAMPLE_C_CD_CL_O_V1_V10_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x1, 0xA }, // 2609
  { IMAGE_SAMPLE_C_CD_CL_O_V1_V12_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x1, 0xC }, // 2610
  { IMAGE_SAMPLE_C_CD_CL_O_V2_V4_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 2611
  { IMAGE_SAMPLE_C_CD_CL_O_V2_V5_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 2612
  { IMAGE_SAMPLE_C_CD_CL_O_V2_V6_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x2, 0x6 }, // 2613
  { IMAGE_SAMPLE_C_CD_CL_O_V2_V7_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x2, 0x7 }, // 2614
  { IMAGE_SAMPLE_C_CD_CL_O_V2_V9_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x2, 0x9 }, // 2615
  { IMAGE_SAMPLE_C_CD_CL_O_V2_V10_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x2, 0xA }, // 2616
  { IMAGE_SAMPLE_C_CD_CL_O_V2_V12_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x2, 0xC }, // 2617
  { IMAGE_SAMPLE_C_CD_CL_O_V3_V4_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x3, 0x4 }, // 2618
  { IMAGE_SAMPLE_C_CD_CL_O_V3_V5_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x3, 0x5 }, // 2619
  { IMAGE_SAMPLE_C_CD_CL_O_V3_V6_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x3, 0x6 }, // 2620
  { IMAGE_SAMPLE_C_CD_CL_O_V3_V7_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x3, 0x7 }, // 2621
  { IMAGE_SAMPLE_C_CD_CL_O_V3_V9_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x3, 0x9 }, // 2622
  { IMAGE_SAMPLE_C_CD_CL_O_V3_V10_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x3, 0xA }, // 2623
  { IMAGE_SAMPLE_C_CD_CL_O_V3_V12_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x3, 0xC }, // 2624
  { IMAGE_SAMPLE_C_CD_CL_O_V4_V4_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 2625
  { IMAGE_SAMPLE_C_CD_CL_O_V4_V5_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 2626
  { IMAGE_SAMPLE_C_CD_CL_O_V4_V6_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x4, 0x6 }, // 2627
  { IMAGE_SAMPLE_C_CD_CL_O_V4_V7_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x4, 0x7 }, // 2628
  { IMAGE_SAMPLE_C_CD_CL_O_V4_V9_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x4, 0x9 }, // 2629
  { IMAGE_SAMPLE_C_CD_CL_O_V4_V10_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x4, 0xA }, // 2630
  { IMAGE_SAMPLE_C_CD_CL_O_V4_V12_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x4, 0xC }, // 2631
  { IMAGE_SAMPLE_C_CD_CL_O_V5_V4_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 2632
  { IMAGE_SAMPLE_C_CD_CL_O_V5_V5_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 2633
  { IMAGE_SAMPLE_C_CD_CL_O_V5_V6_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x5, 0x6 }, // 2634
  { IMAGE_SAMPLE_C_CD_CL_O_V5_V7_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x5, 0x7 }, // 2635
  { IMAGE_SAMPLE_C_CD_CL_O_V5_V9_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x5, 0x9 }, // 2636
  { IMAGE_SAMPLE_C_CD_CL_O_V5_V10_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x5, 0xA }, // 2637
  { IMAGE_SAMPLE_C_CD_CL_O_V5_V12_nsa_gfx10, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx10NSA, 0x5, 0xC }, // 2638
  { IMAGE_SAMPLE_C_CD_CL_O_V1_V4, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x1, 0x4 }, // 2639
  { IMAGE_SAMPLE_C_CD_CL_O_V1_V8, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x1, 0x8 }, // 2640
  { IMAGE_SAMPLE_C_CD_CL_O_V1_V16, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x1, 0x10 }, // 2641
  { IMAGE_SAMPLE_C_CD_CL_O_V2_V4, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 2642
  { IMAGE_SAMPLE_C_CD_CL_O_V2_V8, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 2643
  { IMAGE_SAMPLE_C_CD_CL_O_V2_V16, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x2, 0x10 }, // 2644
  { IMAGE_SAMPLE_C_CD_CL_O_V3_V4, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x3, 0x4 }, // 2645
  { IMAGE_SAMPLE_C_CD_CL_O_V3_V8, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x3, 0x8 }, // 2646
  { IMAGE_SAMPLE_C_CD_CL_O_V3_V16, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x3, 0x10 }, // 2647
  { IMAGE_SAMPLE_C_CD_CL_O_V4_V4, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 2648
  { IMAGE_SAMPLE_C_CD_CL_O_V4_V8, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 2649
  { IMAGE_SAMPLE_C_CD_CL_O_V4_V16, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x4, 0x10 }, // 2650
  { IMAGE_SAMPLE_C_CD_CL_O_V5_V4, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x5, 0x4 }, // 2651
  { IMAGE_SAMPLE_C_CD_CL_O_V5_V8, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x5, 0x8 }, // 2652
  { IMAGE_SAMPLE_C_CD_CL_O_V5_V16, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x5, 0x10 }, // 2653
  { IMAGE_SAMPLE_C_CD_O_V1_V4_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10Default, 0x1, 0x4 }, // 2654
  { IMAGE_SAMPLE_C_CD_O_V1_V8_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10Default, 0x1, 0x8 }, // 2655
  { IMAGE_SAMPLE_C_CD_O_V1_V16_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10Default, 0x1, 0x10 }, // 2656
  { IMAGE_SAMPLE_C_CD_O_V2_V4_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 2657
  { IMAGE_SAMPLE_C_CD_O_V2_V8_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 2658
  { IMAGE_SAMPLE_C_CD_O_V2_V16_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10Default, 0x2, 0x10 }, // 2659
  { IMAGE_SAMPLE_C_CD_O_V3_V4_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10Default, 0x3, 0x4 }, // 2660
  { IMAGE_SAMPLE_C_CD_O_V3_V8_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10Default, 0x3, 0x8 }, // 2661
  { IMAGE_SAMPLE_C_CD_O_V3_V16_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10Default, 0x3, 0x10 }, // 2662
  { IMAGE_SAMPLE_C_CD_O_V4_V4_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 2663
  { IMAGE_SAMPLE_C_CD_O_V4_V8_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 2664
  { IMAGE_SAMPLE_C_CD_O_V4_V16_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10Default, 0x4, 0x10 }, // 2665
  { IMAGE_SAMPLE_C_CD_O_V5_V4_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 2666
  { IMAGE_SAMPLE_C_CD_O_V5_V8_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 2667
  { IMAGE_SAMPLE_C_CD_O_V5_V16_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10Default, 0x5, 0x10 }, // 2668
  { IMAGE_SAMPLE_C_CD_O_V1_V4_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x1, 0x4 }, // 2669
  { IMAGE_SAMPLE_C_CD_O_V1_V5_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x1, 0x5 }, // 2670
  { IMAGE_SAMPLE_C_CD_O_V1_V6_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x1, 0x6 }, // 2671
  { IMAGE_SAMPLE_C_CD_O_V1_V7_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x1, 0x7 }, // 2672
  { IMAGE_SAMPLE_C_CD_O_V1_V8_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x1, 0x8 }, // 2673
  { IMAGE_SAMPLE_C_CD_O_V1_V9_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x1, 0x9 }, // 2674
  { IMAGE_SAMPLE_C_CD_O_V1_V11_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x1, 0xB }, // 2675
  { IMAGE_SAMPLE_C_CD_O_V2_V4_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 2676
  { IMAGE_SAMPLE_C_CD_O_V2_V5_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 2677
  { IMAGE_SAMPLE_C_CD_O_V2_V6_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x2, 0x6 }, // 2678
  { IMAGE_SAMPLE_C_CD_O_V2_V7_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x2, 0x7 }, // 2679
  { IMAGE_SAMPLE_C_CD_O_V2_V8_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x2, 0x8 }, // 2680
  { IMAGE_SAMPLE_C_CD_O_V2_V9_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x2, 0x9 }, // 2681
  { IMAGE_SAMPLE_C_CD_O_V2_V11_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x2, 0xB }, // 2682
  { IMAGE_SAMPLE_C_CD_O_V3_V4_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x3, 0x4 }, // 2683
  { IMAGE_SAMPLE_C_CD_O_V3_V5_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x3, 0x5 }, // 2684
  { IMAGE_SAMPLE_C_CD_O_V3_V6_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x3, 0x6 }, // 2685
  { IMAGE_SAMPLE_C_CD_O_V3_V7_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x3, 0x7 }, // 2686
  { IMAGE_SAMPLE_C_CD_O_V3_V8_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x3, 0x8 }, // 2687
  { IMAGE_SAMPLE_C_CD_O_V3_V9_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x3, 0x9 }, // 2688
  { IMAGE_SAMPLE_C_CD_O_V3_V11_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x3, 0xB }, // 2689
  { IMAGE_SAMPLE_C_CD_O_V4_V4_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 2690
  { IMAGE_SAMPLE_C_CD_O_V4_V5_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 2691
  { IMAGE_SAMPLE_C_CD_O_V4_V6_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x4, 0x6 }, // 2692
  { IMAGE_SAMPLE_C_CD_O_V4_V7_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x4, 0x7 }, // 2693
  { IMAGE_SAMPLE_C_CD_O_V4_V8_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x4, 0x8 }, // 2694
  { IMAGE_SAMPLE_C_CD_O_V4_V9_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x4, 0x9 }, // 2695
  { IMAGE_SAMPLE_C_CD_O_V4_V11_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x4, 0xB }, // 2696
  { IMAGE_SAMPLE_C_CD_O_V5_V4_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 2697
  { IMAGE_SAMPLE_C_CD_O_V5_V5_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 2698
  { IMAGE_SAMPLE_C_CD_O_V5_V6_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x5, 0x6 }, // 2699
  { IMAGE_SAMPLE_C_CD_O_V5_V7_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x5, 0x7 }, // 2700
  { IMAGE_SAMPLE_C_CD_O_V5_V8_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x5, 0x8 }, // 2701
  { IMAGE_SAMPLE_C_CD_O_V5_V9_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x5, 0x9 }, // 2702
  { IMAGE_SAMPLE_C_CD_O_V5_V11_nsa_gfx10, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx10NSA, 0x5, 0xB }, // 2703
  { IMAGE_SAMPLE_C_CD_O_V1_V4, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x1, 0x4 }, // 2704
  { IMAGE_SAMPLE_C_CD_O_V1_V8, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x1, 0x8 }, // 2705
  { IMAGE_SAMPLE_C_CD_O_V1_V16, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x1, 0x10 }, // 2706
  { IMAGE_SAMPLE_C_CD_O_V2_V4, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x2, 0x4 }, // 2707
  { IMAGE_SAMPLE_C_CD_O_V2_V8, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x2, 0x8 }, // 2708
  { IMAGE_SAMPLE_C_CD_O_V2_V16, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x2, 0x10 }, // 2709
  { IMAGE_SAMPLE_C_CD_O_V3_V4, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x3, 0x4 }, // 2710
  { IMAGE_SAMPLE_C_CD_O_V3_V8, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x3, 0x8 }, // 2711
  { IMAGE_SAMPLE_C_CD_O_V3_V16, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x3, 0x10 }, // 2712
  { IMAGE_SAMPLE_C_CD_O_V4_V4, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x4, 0x4 }, // 2713
  { IMAGE_SAMPLE_C_CD_O_V4_V8, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x4, 0x8 }, // 2714
  { IMAGE_SAMPLE_C_CD_O_V4_V16, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x4, 0x10 }, // 2715
  { IMAGE_SAMPLE_C_CD_O_V5_V4, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x5, 0x4 }, // 2716
  { IMAGE_SAMPLE_C_CD_O_V5_V8, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x5, 0x8 }, // 2717
  { IMAGE_SAMPLE_C_CD_O_V5_V16, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x5, 0x10 }, // 2718
  { IMAGE_SAMPLE_C_CL_V1_V2_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10Default, 0x1, 0x2 }, // 2719
  { IMAGE_SAMPLE_C_CL_V1_V3_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10Default, 0x1, 0x3 }, // 2720
  { IMAGE_SAMPLE_C_CL_V1_V4_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10Default, 0x1, 0x4 }, // 2721
  { IMAGE_SAMPLE_C_CL_V1_V8_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10Default, 0x1, 0x8 }, // 2722
  { IMAGE_SAMPLE_C_CL_V2_V2_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10Default, 0x2, 0x2 }, // 2723
  { IMAGE_SAMPLE_C_CL_V2_V3_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10Default, 0x2, 0x3 }, // 2724
  { IMAGE_SAMPLE_C_CL_V2_V4_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10Default, 0x2, 0x4 }, // 2725
  { IMAGE_SAMPLE_C_CL_V2_V8_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10Default, 0x2, 0x8 }, // 2726
  { IMAGE_SAMPLE_C_CL_V3_V2_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10Default, 0x3, 0x2 }, // 2727
  { IMAGE_SAMPLE_C_CL_V3_V3_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10Default, 0x3, 0x3 }, // 2728
  { IMAGE_SAMPLE_C_CL_V3_V4_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10Default, 0x3, 0x4 }, // 2729
  { IMAGE_SAMPLE_C_CL_V3_V8_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10Default, 0x3, 0x8 }, // 2730
  { IMAGE_SAMPLE_C_CL_V4_V2_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10Default, 0x4, 0x2 }, // 2731
  { IMAGE_SAMPLE_C_CL_V4_V3_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10Default, 0x4, 0x3 }, // 2732
  { IMAGE_SAMPLE_C_CL_V4_V4_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10Default, 0x4, 0x4 }, // 2733
  { IMAGE_SAMPLE_C_CL_V4_V8_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10Default, 0x4, 0x8 }, // 2734
  { IMAGE_SAMPLE_C_CL_V5_V2_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10Default, 0x5, 0x2 }, // 2735
  { IMAGE_SAMPLE_C_CL_V5_V3_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10Default, 0x5, 0x3 }, // 2736
  { IMAGE_SAMPLE_C_CL_V5_V4_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10Default, 0x5, 0x4 }, // 2737
  { IMAGE_SAMPLE_C_CL_V5_V8_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10Default, 0x5, 0x8 }, // 2738
  { IMAGE_SAMPLE_C_CL_V1_V2_nsa_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10NSA, 0x1, 0x2 }, // 2739
  { IMAGE_SAMPLE_C_CL_V1_V3_nsa_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10NSA, 0x1, 0x3 }, // 2740
  { IMAGE_SAMPLE_C_CL_V1_V4_nsa_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10NSA, 0x1, 0x4 }, // 2741
  { IMAGE_SAMPLE_C_CL_V1_V5_nsa_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10NSA, 0x1, 0x5 }, // 2742
  { IMAGE_SAMPLE_C_CL_V2_V2_nsa_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10NSA, 0x2, 0x2 }, // 2743
  { IMAGE_SAMPLE_C_CL_V2_V3_nsa_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10NSA, 0x2, 0x3 }, // 2744
  { IMAGE_SAMPLE_C_CL_V2_V4_nsa_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10NSA, 0x2, 0x4 }, // 2745
  { IMAGE_SAMPLE_C_CL_V2_V5_nsa_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10NSA, 0x2, 0x5 }, // 2746
  { IMAGE_SAMPLE_C_CL_V3_V2_nsa_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10NSA, 0x3, 0x2 }, // 2747
  { IMAGE_SAMPLE_C_CL_V3_V3_nsa_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10NSA, 0x3, 0x3 }, // 2748
  { IMAGE_SAMPLE_C_CL_V3_V4_nsa_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10NSA, 0x3, 0x4 }, // 2749
  { IMAGE_SAMPLE_C_CL_V3_V5_nsa_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10NSA, 0x3, 0x5 }, // 2750
  { IMAGE_SAMPLE_C_CL_V4_V2_nsa_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10NSA, 0x4, 0x2 }, // 2751
  { IMAGE_SAMPLE_C_CL_V4_V3_nsa_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10NSA, 0x4, 0x3 }, // 2752
  { IMAGE_SAMPLE_C_CL_V4_V4_nsa_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10NSA, 0x4, 0x4 }, // 2753
  { IMAGE_SAMPLE_C_CL_V4_V5_nsa_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10NSA, 0x4, 0x5 }, // 2754
  { IMAGE_SAMPLE_C_CL_V5_V2_nsa_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10NSA, 0x5, 0x2 }, // 2755
  { IMAGE_SAMPLE_C_CL_V5_V3_nsa_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10NSA, 0x5, 0x3 }, // 2756
  { IMAGE_SAMPLE_C_CL_V5_V4_nsa_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10NSA, 0x5, 0x4 }, // 2757
  { IMAGE_SAMPLE_C_CL_V5_V5_nsa_gfx10, IMAGE_SAMPLE_C_CL, MIMGEncGfx10NSA, 0x5, 0x5 }, // 2758
  { IMAGE_SAMPLE_C_CL_V1_V2, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x1, 0x2 }, // 2759
  { IMAGE_SAMPLE_C_CL_V1_V3, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x1, 0x3 }, // 2760
  { IMAGE_SAMPLE_C_CL_V1_V4, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x1, 0x4 }, // 2761
  { IMAGE_SAMPLE_C_CL_V1_V8, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x1, 0x8 }, // 2762
  { IMAGE_SAMPLE_C_CL_V2_V2, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x2, 0x2 }, // 2763
  { IMAGE_SAMPLE_C_CL_V2_V3, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x2, 0x3 }, // 2764
  { IMAGE_SAMPLE_C_CL_V2_V4, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x2, 0x4 }, // 2765
  { IMAGE_SAMPLE_C_CL_V2_V8, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x2, 0x8 }, // 2766
  { IMAGE_SAMPLE_C_CL_V3_V2, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x3, 0x2 }, // 2767
  { IMAGE_SAMPLE_C_CL_V3_V3, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x3, 0x3 }, // 2768
  { IMAGE_SAMPLE_C_CL_V3_V4, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x3, 0x4 }, // 2769
  { IMAGE_SAMPLE_C_CL_V3_V8, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x3, 0x8 }, // 2770
  { IMAGE_SAMPLE_C_CL_V4_V2, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x4, 0x2 }, // 2771
  { IMAGE_SAMPLE_C_CL_V4_V3, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x4, 0x3 }, // 2772
  { IMAGE_SAMPLE_C_CL_V4_V4, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x4, 0x4 }, // 2773
  { IMAGE_SAMPLE_C_CL_V4_V8, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x4, 0x8 }, // 2774
  { IMAGE_SAMPLE_C_CL_V5_V2, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x5, 0x2 }, // 2775
  { IMAGE_SAMPLE_C_CL_V5_V3, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x5, 0x3 }, // 2776
  { IMAGE_SAMPLE_C_CL_V5_V4, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x5, 0x4 }, // 2777
  { IMAGE_SAMPLE_C_CL_V5_V8, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x5, 0x8 }, // 2778
  { IMAGE_SAMPLE_C_CL_O_V1_V3_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10Default, 0x1, 0x3 }, // 2779
  { IMAGE_SAMPLE_C_CL_O_V1_V4_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10Default, 0x1, 0x4 }, // 2780
  { IMAGE_SAMPLE_C_CL_O_V1_V8_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10Default, 0x1, 0x8 }, // 2781
  { IMAGE_SAMPLE_C_CL_O_V2_V3_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 2782
  { IMAGE_SAMPLE_C_CL_O_V2_V4_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 2783
  { IMAGE_SAMPLE_C_CL_O_V2_V8_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 2784
  { IMAGE_SAMPLE_C_CL_O_V3_V3_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10Default, 0x3, 0x3 }, // 2785
  { IMAGE_SAMPLE_C_CL_O_V3_V4_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10Default, 0x3, 0x4 }, // 2786
  { IMAGE_SAMPLE_C_CL_O_V3_V8_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10Default, 0x3, 0x8 }, // 2787
  { IMAGE_SAMPLE_C_CL_O_V4_V3_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 2788
  { IMAGE_SAMPLE_C_CL_O_V4_V4_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 2789
  { IMAGE_SAMPLE_C_CL_O_V4_V8_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 2790
  { IMAGE_SAMPLE_C_CL_O_V5_V3_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 2791
  { IMAGE_SAMPLE_C_CL_O_V5_V4_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 2792
  { IMAGE_SAMPLE_C_CL_O_V5_V8_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 2793
  { IMAGE_SAMPLE_C_CL_O_V1_V3_nsa_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10NSA, 0x1, 0x3 }, // 2794
  { IMAGE_SAMPLE_C_CL_O_V1_V4_nsa_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10NSA, 0x1, 0x4 }, // 2795
  { IMAGE_SAMPLE_C_CL_O_V1_V5_nsa_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10NSA, 0x1, 0x5 }, // 2796
  { IMAGE_SAMPLE_C_CL_O_V1_V6_nsa_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10NSA, 0x1, 0x6 }, // 2797
  { IMAGE_SAMPLE_C_CL_O_V2_V3_nsa_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 2798
  { IMAGE_SAMPLE_C_CL_O_V2_V4_nsa_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 2799
  { IMAGE_SAMPLE_C_CL_O_V2_V5_nsa_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 2800
  { IMAGE_SAMPLE_C_CL_O_V2_V6_nsa_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10NSA, 0x2, 0x6 }, // 2801
  { IMAGE_SAMPLE_C_CL_O_V3_V3_nsa_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10NSA, 0x3, 0x3 }, // 2802
  { IMAGE_SAMPLE_C_CL_O_V3_V4_nsa_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10NSA, 0x3, 0x4 }, // 2803
  { IMAGE_SAMPLE_C_CL_O_V3_V5_nsa_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10NSA, 0x3, 0x5 }, // 2804
  { IMAGE_SAMPLE_C_CL_O_V3_V6_nsa_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10NSA, 0x3, 0x6 }, // 2805
  { IMAGE_SAMPLE_C_CL_O_V4_V3_nsa_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 2806
  { IMAGE_SAMPLE_C_CL_O_V4_V4_nsa_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 2807
  { IMAGE_SAMPLE_C_CL_O_V4_V5_nsa_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 2808
  { IMAGE_SAMPLE_C_CL_O_V4_V6_nsa_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10NSA, 0x4, 0x6 }, // 2809
  { IMAGE_SAMPLE_C_CL_O_V5_V3_nsa_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 2810
  { IMAGE_SAMPLE_C_CL_O_V5_V4_nsa_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 2811
  { IMAGE_SAMPLE_C_CL_O_V5_V5_nsa_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 2812
  { IMAGE_SAMPLE_C_CL_O_V5_V6_nsa_gfx10, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx10NSA, 0x5, 0x6 }, // 2813
  { IMAGE_SAMPLE_C_CL_O_V1_V3, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x1, 0x3 }, // 2814
  { IMAGE_SAMPLE_C_CL_O_V1_V4, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x1, 0x4 }, // 2815
  { IMAGE_SAMPLE_C_CL_O_V1_V8, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x1, 0x8 }, // 2816
  { IMAGE_SAMPLE_C_CL_O_V2_V3, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x2, 0x3 }, // 2817
  { IMAGE_SAMPLE_C_CL_O_V2_V4, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 2818
  { IMAGE_SAMPLE_C_CL_O_V2_V8, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 2819
  { IMAGE_SAMPLE_C_CL_O_V3_V3, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x3, 0x3 }, // 2820
  { IMAGE_SAMPLE_C_CL_O_V3_V4, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x3, 0x4 }, // 2821
  { IMAGE_SAMPLE_C_CL_O_V3_V8, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x3, 0x8 }, // 2822
  { IMAGE_SAMPLE_C_CL_O_V4_V3, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x4, 0x3 }, // 2823
  { IMAGE_SAMPLE_C_CL_O_V4_V4, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 2824
  { IMAGE_SAMPLE_C_CL_O_V4_V8, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 2825
  { IMAGE_SAMPLE_C_CL_O_V5_V3, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x5, 0x3 }, // 2826
  { IMAGE_SAMPLE_C_CL_O_V5_V4, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x5, 0x4 }, // 2827
  { IMAGE_SAMPLE_C_CL_O_V5_V8, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x5, 0x8 }, // 2828
  { IMAGE_SAMPLE_C_D_V1_V3_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10Default, 0x1, 0x3 }, // 2829
  { IMAGE_SAMPLE_C_D_V1_V4_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10Default, 0x1, 0x4 }, // 2830
  { IMAGE_SAMPLE_C_D_V1_V8_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10Default, 0x1, 0x8 }, // 2831
  { IMAGE_SAMPLE_C_D_V1_V16_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10Default, 0x1, 0x10 }, // 2832
  { IMAGE_SAMPLE_C_D_V2_V3_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10Default, 0x2, 0x3 }, // 2833
  { IMAGE_SAMPLE_C_D_V2_V4_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10Default, 0x2, 0x4 }, // 2834
  { IMAGE_SAMPLE_C_D_V2_V8_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10Default, 0x2, 0x8 }, // 2835
  { IMAGE_SAMPLE_C_D_V2_V16_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10Default, 0x2, 0x10 }, // 2836
  { IMAGE_SAMPLE_C_D_V3_V3_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10Default, 0x3, 0x3 }, // 2837
  { IMAGE_SAMPLE_C_D_V3_V4_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10Default, 0x3, 0x4 }, // 2838
  { IMAGE_SAMPLE_C_D_V3_V8_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10Default, 0x3, 0x8 }, // 2839
  { IMAGE_SAMPLE_C_D_V3_V16_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10Default, 0x3, 0x10 }, // 2840
  { IMAGE_SAMPLE_C_D_V4_V3_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10Default, 0x4, 0x3 }, // 2841
  { IMAGE_SAMPLE_C_D_V4_V4_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10Default, 0x4, 0x4 }, // 2842
  { IMAGE_SAMPLE_C_D_V4_V8_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10Default, 0x4, 0x8 }, // 2843
  { IMAGE_SAMPLE_C_D_V4_V16_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10Default, 0x4, 0x10 }, // 2844
  { IMAGE_SAMPLE_C_D_V5_V3_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10Default, 0x5, 0x3 }, // 2845
  { IMAGE_SAMPLE_C_D_V5_V4_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10Default, 0x5, 0x4 }, // 2846
  { IMAGE_SAMPLE_C_D_V5_V8_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10Default, 0x5, 0x8 }, // 2847
  { IMAGE_SAMPLE_C_D_V5_V16_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10Default, 0x5, 0x10 }, // 2848
  { IMAGE_SAMPLE_C_D_V1_V3_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x1, 0x3 }, // 2849
  { IMAGE_SAMPLE_C_D_V1_V4_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x1, 0x4 }, // 2850
  { IMAGE_SAMPLE_C_D_V1_V5_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x1, 0x5 }, // 2851
  { IMAGE_SAMPLE_C_D_V1_V6_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x1, 0x6 }, // 2852
  { IMAGE_SAMPLE_C_D_V1_V7_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x1, 0x7 }, // 2853
  { IMAGE_SAMPLE_C_D_V1_V8_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x1, 0x8 }, // 2854
  { IMAGE_SAMPLE_C_D_V1_V10_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x1, 0xA }, // 2855
  { IMAGE_SAMPLE_C_D_V2_V3_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x2, 0x3 }, // 2856
  { IMAGE_SAMPLE_C_D_V2_V4_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x2, 0x4 }, // 2857
  { IMAGE_SAMPLE_C_D_V2_V5_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x2, 0x5 }, // 2858
  { IMAGE_SAMPLE_C_D_V2_V6_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x2, 0x6 }, // 2859
  { IMAGE_SAMPLE_C_D_V2_V7_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x2, 0x7 }, // 2860
  { IMAGE_SAMPLE_C_D_V2_V8_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x2, 0x8 }, // 2861
  { IMAGE_SAMPLE_C_D_V2_V10_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x2, 0xA }, // 2862
  { IMAGE_SAMPLE_C_D_V3_V3_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x3, 0x3 }, // 2863
  { IMAGE_SAMPLE_C_D_V3_V4_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x3, 0x4 }, // 2864
  { IMAGE_SAMPLE_C_D_V3_V5_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x3, 0x5 }, // 2865
  { IMAGE_SAMPLE_C_D_V3_V6_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x3, 0x6 }, // 2866
  { IMAGE_SAMPLE_C_D_V3_V7_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x3, 0x7 }, // 2867
  { IMAGE_SAMPLE_C_D_V3_V8_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x3, 0x8 }, // 2868
  { IMAGE_SAMPLE_C_D_V3_V10_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x3, 0xA }, // 2869
  { IMAGE_SAMPLE_C_D_V4_V3_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x4, 0x3 }, // 2870
  { IMAGE_SAMPLE_C_D_V4_V4_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x4, 0x4 }, // 2871
  { IMAGE_SAMPLE_C_D_V4_V5_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x4, 0x5 }, // 2872
  { IMAGE_SAMPLE_C_D_V4_V6_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x4, 0x6 }, // 2873
  { IMAGE_SAMPLE_C_D_V4_V7_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x4, 0x7 }, // 2874
  { IMAGE_SAMPLE_C_D_V4_V8_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x4, 0x8 }, // 2875
  { IMAGE_SAMPLE_C_D_V4_V10_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x4, 0xA }, // 2876
  { IMAGE_SAMPLE_C_D_V5_V3_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x5, 0x3 }, // 2877
  { IMAGE_SAMPLE_C_D_V5_V4_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x5, 0x4 }, // 2878
  { IMAGE_SAMPLE_C_D_V5_V5_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x5, 0x5 }, // 2879
  { IMAGE_SAMPLE_C_D_V5_V6_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x5, 0x6 }, // 2880
  { IMAGE_SAMPLE_C_D_V5_V7_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x5, 0x7 }, // 2881
  { IMAGE_SAMPLE_C_D_V5_V8_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x5, 0x8 }, // 2882
  { IMAGE_SAMPLE_C_D_V5_V10_nsa_gfx10, IMAGE_SAMPLE_C_D, MIMGEncGfx10NSA, 0x5, 0xA }, // 2883
  { IMAGE_SAMPLE_C_D_V1_V3, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x1, 0x3 }, // 2884
  { IMAGE_SAMPLE_C_D_V1_V4, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x1, 0x4 }, // 2885
  { IMAGE_SAMPLE_C_D_V1_V8, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x1, 0x8 }, // 2886
  { IMAGE_SAMPLE_C_D_V1_V16, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x1, 0x10 }, // 2887
  { IMAGE_SAMPLE_C_D_V2_V3, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x2, 0x3 }, // 2888
  { IMAGE_SAMPLE_C_D_V2_V4, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x2, 0x4 }, // 2889
  { IMAGE_SAMPLE_C_D_V2_V8, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x2, 0x8 }, // 2890
  { IMAGE_SAMPLE_C_D_V2_V16, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x2, 0x10 }, // 2891
  { IMAGE_SAMPLE_C_D_V3_V3, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x3, 0x3 }, // 2892
  { IMAGE_SAMPLE_C_D_V3_V4, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x3, 0x4 }, // 2893
  { IMAGE_SAMPLE_C_D_V3_V8, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x3, 0x8 }, // 2894
  { IMAGE_SAMPLE_C_D_V3_V16, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x3, 0x10 }, // 2895
  { IMAGE_SAMPLE_C_D_V4_V3, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x4, 0x3 }, // 2896
  { IMAGE_SAMPLE_C_D_V4_V4, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x4, 0x4 }, // 2897
  { IMAGE_SAMPLE_C_D_V4_V8, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x4, 0x8 }, // 2898
  { IMAGE_SAMPLE_C_D_V4_V16, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x4, 0x10 }, // 2899
  { IMAGE_SAMPLE_C_D_V5_V3, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x5, 0x3 }, // 2900
  { IMAGE_SAMPLE_C_D_V5_V4, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x5, 0x4 }, // 2901
  { IMAGE_SAMPLE_C_D_V5_V8, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x5, 0x8 }, // 2902
  { IMAGE_SAMPLE_C_D_V5_V16, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x5, 0x10 }, // 2903
  { IMAGE_SAMPLE_C_D_CL_V1_V3_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10Default, 0x1, 0x3 }, // 2904
  { IMAGE_SAMPLE_C_D_CL_V1_V4_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10Default, 0x1, 0x4 }, // 2905
  { IMAGE_SAMPLE_C_D_CL_V1_V8_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10Default, 0x1, 0x8 }, // 2906
  { IMAGE_SAMPLE_C_D_CL_V1_V16_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10Default, 0x1, 0x10 }, // 2907
  { IMAGE_SAMPLE_C_D_CL_V2_V3_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10Default, 0x2, 0x3 }, // 2908
  { IMAGE_SAMPLE_C_D_CL_V2_V4_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10Default, 0x2, 0x4 }, // 2909
  { IMAGE_SAMPLE_C_D_CL_V2_V8_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10Default, 0x2, 0x8 }, // 2910
  { IMAGE_SAMPLE_C_D_CL_V2_V16_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10Default, 0x2, 0x10 }, // 2911
  { IMAGE_SAMPLE_C_D_CL_V3_V3_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10Default, 0x3, 0x3 }, // 2912
  { IMAGE_SAMPLE_C_D_CL_V3_V4_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10Default, 0x3, 0x4 }, // 2913
  { IMAGE_SAMPLE_C_D_CL_V3_V8_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10Default, 0x3, 0x8 }, // 2914
  { IMAGE_SAMPLE_C_D_CL_V3_V16_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10Default, 0x3, 0x10 }, // 2915
  { IMAGE_SAMPLE_C_D_CL_V4_V3_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10Default, 0x4, 0x3 }, // 2916
  { IMAGE_SAMPLE_C_D_CL_V4_V4_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10Default, 0x4, 0x4 }, // 2917
  { IMAGE_SAMPLE_C_D_CL_V4_V8_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10Default, 0x4, 0x8 }, // 2918
  { IMAGE_SAMPLE_C_D_CL_V4_V16_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10Default, 0x4, 0x10 }, // 2919
  { IMAGE_SAMPLE_C_D_CL_V5_V3_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10Default, 0x5, 0x3 }, // 2920
  { IMAGE_SAMPLE_C_D_CL_V5_V4_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10Default, 0x5, 0x4 }, // 2921
  { IMAGE_SAMPLE_C_D_CL_V5_V8_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10Default, 0x5, 0x8 }, // 2922
  { IMAGE_SAMPLE_C_D_CL_V5_V16_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10Default, 0x5, 0x10 }, // 2923
  { IMAGE_SAMPLE_C_D_CL_V1_V3_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x1, 0x3 }, // 2924
  { IMAGE_SAMPLE_C_D_CL_V1_V4_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x1, 0x4 }, // 2925
  { IMAGE_SAMPLE_C_D_CL_V1_V5_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x1, 0x5 }, // 2926
  { IMAGE_SAMPLE_C_D_CL_V1_V6_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x1, 0x6 }, // 2927
  { IMAGE_SAMPLE_C_D_CL_V1_V8_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x1, 0x8 }, // 2928
  { IMAGE_SAMPLE_C_D_CL_V1_V9_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x1, 0x9 }, // 2929
  { IMAGE_SAMPLE_C_D_CL_V1_V11_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x1, 0xB }, // 2930
  { IMAGE_SAMPLE_C_D_CL_V2_V3_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x2, 0x3 }, // 2931
  { IMAGE_SAMPLE_C_D_CL_V2_V4_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x2, 0x4 }, // 2932
  { IMAGE_SAMPLE_C_D_CL_V2_V5_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x2, 0x5 }, // 2933
  { IMAGE_SAMPLE_C_D_CL_V2_V6_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x2, 0x6 }, // 2934
  { IMAGE_SAMPLE_C_D_CL_V2_V8_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x2, 0x8 }, // 2935
  { IMAGE_SAMPLE_C_D_CL_V2_V9_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x2, 0x9 }, // 2936
  { IMAGE_SAMPLE_C_D_CL_V2_V11_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x2, 0xB }, // 2937
  { IMAGE_SAMPLE_C_D_CL_V3_V3_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x3, 0x3 }, // 2938
  { IMAGE_SAMPLE_C_D_CL_V3_V4_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x3, 0x4 }, // 2939
  { IMAGE_SAMPLE_C_D_CL_V3_V5_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x3, 0x5 }, // 2940
  { IMAGE_SAMPLE_C_D_CL_V3_V6_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x3, 0x6 }, // 2941
  { IMAGE_SAMPLE_C_D_CL_V3_V8_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x3, 0x8 }, // 2942
  { IMAGE_SAMPLE_C_D_CL_V3_V9_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x3, 0x9 }, // 2943
  { IMAGE_SAMPLE_C_D_CL_V3_V11_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x3, 0xB }, // 2944
  { IMAGE_SAMPLE_C_D_CL_V4_V3_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x4, 0x3 }, // 2945
  { IMAGE_SAMPLE_C_D_CL_V4_V4_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x4, 0x4 }, // 2946
  { IMAGE_SAMPLE_C_D_CL_V4_V5_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x4, 0x5 }, // 2947
  { IMAGE_SAMPLE_C_D_CL_V4_V6_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x4, 0x6 }, // 2948
  { IMAGE_SAMPLE_C_D_CL_V4_V8_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x4, 0x8 }, // 2949
  { IMAGE_SAMPLE_C_D_CL_V4_V9_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x4, 0x9 }, // 2950
  { IMAGE_SAMPLE_C_D_CL_V4_V11_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x4, 0xB }, // 2951
  { IMAGE_SAMPLE_C_D_CL_V5_V3_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x5, 0x3 }, // 2952
  { IMAGE_SAMPLE_C_D_CL_V5_V4_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x5, 0x4 }, // 2953
  { IMAGE_SAMPLE_C_D_CL_V5_V5_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x5, 0x5 }, // 2954
  { IMAGE_SAMPLE_C_D_CL_V5_V6_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x5, 0x6 }, // 2955
  { IMAGE_SAMPLE_C_D_CL_V5_V8_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x5, 0x8 }, // 2956
  { IMAGE_SAMPLE_C_D_CL_V5_V9_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x5, 0x9 }, // 2957
  { IMAGE_SAMPLE_C_D_CL_V5_V11_nsa_gfx10, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx10NSA, 0x5, 0xB }, // 2958
  { IMAGE_SAMPLE_C_D_CL_V1_V3, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x1, 0x3 }, // 2959
  { IMAGE_SAMPLE_C_D_CL_V1_V4, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x1, 0x4 }, // 2960
  { IMAGE_SAMPLE_C_D_CL_V1_V8, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x1, 0x8 }, // 2961
  { IMAGE_SAMPLE_C_D_CL_V1_V16, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x1, 0x10 }, // 2962
  { IMAGE_SAMPLE_C_D_CL_V2_V3, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x2, 0x3 }, // 2963
  { IMAGE_SAMPLE_C_D_CL_V2_V4, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x2, 0x4 }, // 2964
  { IMAGE_SAMPLE_C_D_CL_V2_V8, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x2, 0x8 }, // 2965
  { IMAGE_SAMPLE_C_D_CL_V2_V16, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x2, 0x10 }, // 2966
  { IMAGE_SAMPLE_C_D_CL_V3_V3, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x3, 0x3 }, // 2967
  { IMAGE_SAMPLE_C_D_CL_V3_V4, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x3, 0x4 }, // 2968
  { IMAGE_SAMPLE_C_D_CL_V3_V8, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x3, 0x8 }, // 2969
  { IMAGE_SAMPLE_C_D_CL_V3_V16, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x3, 0x10 }, // 2970
  { IMAGE_SAMPLE_C_D_CL_V4_V3, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x4, 0x3 }, // 2971
  { IMAGE_SAMPLE_C_D_CL_V4_V4, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x4, 0x4 }, // 2972
  { IMAGE_SAMPLE_C_D_CL_V4_V8, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x4, 0x8 }, // 2973
  { IMAGE_SAMPLE_C_D_CL_V4_V16, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x4, 0x10 }, // 2974
  { IMAGE_SAMPLE_C_D_CL_V5_V3, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x5, 0x3 }, // 2975
  { IMAGE_SAMPLE_C_D_CL_V5_V4, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x5, 0x4 }, // 2976
  { IMAGE_SAMPLE_C_D_CL_V5_V8, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x5, 0x8 }, // 2977
  { IMAGE_SAMPLE_C_D_CL_V5_V16, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x5, 0x10 }, // 2978
  { IMAGE_SAMPLE_C_D_CL_O_V1_V4_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10Default, 0x1, 0x4 }, // 2979
  { IMAGE_SAMPLE_C_D_CL_O_V1_V8_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10Default, 0x1, 0x8 }, // 2980
  { IMAGE_SAMPLE_C_D_CL_O_V1_V16_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10Default, 0x1, 0x10 }, // 2981
  { IMAGE_SAMPLE_C_D_CL_O_V2_V4_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 2982
  { IMAGE_SAMPLE_C_D_CL_O_V2_V8_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 2983
  { IMAGE_SAMPLE_C_D_CL_O_V2_V16_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10Default, 0x2, 0x10 }, // 2984
  { IMAGE_SAMPLE_C_D_CL_O_V3_V4_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10Default, 0x3, 0x4 }, // 2985
  { IMAGE_SAMPLE_C_D_CL_O_V3_V8_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10Default, 0x3, 0x8 }, // 2986
  { IMAGE_SAMPLE_C_D_CL_O_V3_V16_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10Default, 0x3, 0x10 }, // 2987
  { IMAGE_SAMPLE_C_D_CL_O_V4_V4_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 2988
  { IMAGE_SAMPLE_C_D_CL_O_V4_V8_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 2989
  { IMAGE_SAMPLE_C_D_CL_O_V4_V16_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10Default, 0x4, 0x10 }, // 2990
  { IMAGE_SAMPLE_C_D_CL_O_V5_V4_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 2991
  { IMAGE_SAMPLE_C_D_CL_O_V5_V8_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 2992
  { IMAGE_SAMPLE_C_D_CL_O_V5_V16_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10Default, 0x5, 0x10 }, // 2993
  { IMAGE_SAMPLE_C_D_CL_O_V1_V4_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x1, 0x4 }, // 2994
  { IMAGE_SAMPLE_C_D_CL_O_V1_V5_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x1, 0x5 }, // 2995
  { IMAGE_SAMPLE_C_D_CL_O_V1_V6_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x1, 0x6 }, // 2996
  { IMAGE_SAMPLE_C_D_CL_O_V1_V7_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x1, 0x7 }, // 2997
  { IMAGE_SAMPLE_C_D_CL_O_V1_V9_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x1, 0x9 }, // 2998
  { IMAGE_SAMPLE_C_D_CL_O_V1_V10_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x1, 0xA }, // 2999
  { IMAGE_SAMPLE_C_D_CL_O_V1_V12_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x1, 0xC }, // 3000
  { IMAGE_SAMPLE_C_D_CL_O_V2_V4_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 3001
  { IMAGE_SAMPLE_C_D_CL_O_V2_V5_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 3002
  { IMAGE_SAMPLE_C_D_CL_O_V2_V6_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x2, 0x6 }, // 3003
  { IMAGE_SAMPLE_C_D_CL_O_V2_V7_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x2, 0x7 }, // 3004
  { IMAGE_SAMPLE_C_D_CL_O_V2_V9_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x2, 0x9 }, // 3005
  { IMAGE_SAMPLE_C_D_CL_O_V2_V10_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x2, 0xA }, // 3006
  { IMAGE_SAMPLE_C_D_CL_O_V2_V12_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x2, 0xC }, // 3007
  { IMAGE_SAMPLE_C_D_CL_O_V3_V4_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x3, 0x4 }, // 3008
  { IMAGE_SAMPLE_C_D_CL_O_V3_V5_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x3, 0x5 }, // 3009
  { IMAGE_SAMPLE_C_D_CL_O_V3_V6_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x3, 0x6 }, // 3010
  { IMAGE_SAMPLE_C_D_CL_O_V3_V7_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x3, 0x7 }, // 3011
  { IMAGE_SAMPLE_C_D_CL_O_V3_V9_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x3, 0x9 }, // 3012
  { IMAGE_SAMPLE_C_D_CL_O_V3_V10_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x3, 0xA }, // 3013
  { IMAGE_SAMPLE_C_D_CL_O_V3_V12_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x3, 0xC }, // 3014
  { IMAGE_SAMPLE_C_D_CL_O_V4_V4_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 3015
  { IMAGE_SAMPLE_C_D_CL_O_V4_V5_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 3016
  { IMAGE_SAMPLE_C_D_CL_O_V4_V6_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x4, 0x6 }, // 3017
  { IMAGE_SAMPLE_C_D_CL_O_V4_V7_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x4, 0x7 }, // 3018
  { IMAGE_SAMPLE_C_D_CL_O_V4_V9_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x4, 0x9 }, // 3019
  { IMAGE_SAMPLE_C_D_CL_O_V4_V10_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x4, 0xA }, // 3020
  { IMAGE_SAMPLE_C_D_CL_O_V4_V12_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x4, 0xC }, // 3021
  { IMAGE_SAMPLE_C_D_CL_O_V5_V4_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 3022
  { IMAGE_SAMPLE_C_D_CL_O_V5_V5_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 3023
  { IMAGE_SAMPLE_C_D_CL_O_V5_V6_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x5, 0x6 }, // 3024
  { IMAGE_SAMPLE_C_D_CL_O_V5_V7_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x5, 0x7 }, // 3025
  { IMAGE_SAMPLE_C_D_CL_O_V5_V9_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x5, 0x9 }, // 3026
  { IMAGE_SAMPLE_C_D_CL_O_V5_V10_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x5, 0xA }, // 3027
  { IMAGE_SAMPLE_C_D_CL_O_V5_V12_nsa_gfx10, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx10NSA, 0x5, 0xC }, // 3028
  { IMAGE_SAMPLE_C_D_CL_O_V1_V4, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x1, 0x4 }, // 3029
  { IMAGE_SAMPLE_C_D_CL_O_V1_V8, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x1, 0x8 }, // 3030
  { IMAGE_SAMPLE_C_D_CL_O_V1_V16, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x1, 0x10 }, // 3031
  { IMAGE_SAMPLE_C_D_CL_O_V2_V4, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 3032
  { IMAGE_SAMPLE_C_D_CL_O_V2_V8, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 3033
  { IMAGE_SAMPLE_C_D_CL_O_V2_V16, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x2, 0x10 }, // 3034
  { IMAGE_SAMPLE_C_D_CL_O_V3_V4, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x3, 0x4 }, // 3035
  { IMAGE_SAMPLE_C_D_CL_O_V3_V8, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x3, 0x8 }, // 3036
  { IMAGE_SAMPLE_C_D_CL_O_V3_V16, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x3, 0x10 }, // 3037
  { IMAGE_SAMPLE_C_D_CL_O_V4_V4, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 3038
  { IMAGE_SAMPLE_C_D_CL_O_V4_V8, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 3039
  { IMAGE_SAMPLE_C_D_CL_O_V4_V16, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x4, 0x10 }, // 3040
  { IMAGE_SAMPLE_C_D_CL_O_V5_V4, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x5, 0x4 }, // 3041
  { IMAGE_SAMPLE_C_D_CL_O_V5_V8, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x5, 0x8 }, // 3042
  { IMAGE_SAMPLE_C_D_CL_O_V5_V16, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x5, 0x10 }, // 3043
  { IMAGE_SAMPLE_C_D_O_V1_V4_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10Default, 0x1, 0x4 }, // 3044
  { IMAGE_SAMPLE_C_D_O_V1_V8_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10Default, 0x1, 0x8 }, // 3045
  { IMAGE_SAMPLE_C_D_O_V1_V16_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10Default, 0x1, 0x10 }, // 3046
  { IMAGE_SAMPLE_C_D_O_V2_V4_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 3047
  { IMAGE_SAMPLE_C_D_O_V2_V8_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 3048
  { IMAGE_SAMPLE_C_D_O_V2_V16_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10Default, 0x2, 0x10 }, // 3049
  { IMAGE_SAMPLE_C_D_O_V3_V4_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10Default, 0x3, 0x4 }, // 3050
  { IMAGE_SAMPLE_C_D_O_V3_V8_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10Default, 0x3, 0x8 }, // 3051
  { IMAGE_SAMPLE_C_D_O_V3_V16_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10Default, 0x3, 0x10 }, // 3052
  { IMAGE_SAMPLE_C_D_O_V4_V4_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 3053
  { IMAGE_SAMPLE_C_D_O_V4_V8_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 3054
  { IMAGE_SAMPLE_C_D_O_V4_V16_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10Default, 0x4, 0x10 }, // 3055
  { IMAGE_SAMPLE_C_D_O_V5_V4_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 3056
  { IMAGE_SAMPLE_C_D_O_V5_V8_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 3057
  { IMAGE_SAMPLE_C_D_O_V5_V16_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10Default, 0x5, 0x10 }, // 3058
  { IMAGE_SAMPLE_C_D_O_V1_V4_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x1, 0x4 }, // 3059
  { IMAGE_SAMPLE_C_D_O_V1_V5_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x1, 0x5 }, // 3060
  { IMAGE_SAMPLE_C_D_O_V1_V6_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x1, 0x6 }, // 3061
  { IMAGE_SAMPLE_C_D_O_V1_V7_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x1, 0x7 }, // 3062
  { IMAGE_SAMPLE_C_D_O_V1_V8_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x1, 0x8 }, // 3063
  { IMAGE_SAMPLE_C_D_O_V1_V9_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x1, 0x9 }, // 3064
  { IMAGE_SAMPLE_C_D_O_V1_V11_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x1, 0xB }, // 3065
  { IMAGE_SAMPLE_C_D_O_V2_V4_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 3066
  { IMAGE_SAMPLE_C_D_O_V2_V5_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 3067
  { IMAGE_SAMPLE_C_D_O_V2_V6_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x2, 0x6 }, // 3068
  { IMAGE_SAMPLE_C_D_O_V2_V7_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x2, 0x7 }, // 3069
  { IMAGE_SAMPLE_C_D_O_V2_V8_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x2, 0x8 }, // 3070
  { IMAGE_SAMPLE_C_D_O_V2_V9_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x2, 0x9 }, // 3071
  { IMAGE_SAMPLE_C_D_O_V2_V11_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x2, 0xB }, // 3072
  { IMAGE_SAMPLE_C_D_O_V3_V4_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x3, 0x4 }, // 3073
  { IMAGE_SAMPLE_C_D_O_V3_V5_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x3, 0x5 }, // 3074
  { IMAGE_SAMPLE_C_D_O_V3_V6_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x3, 0x6 }, // 3075
  { IMAGE_SAMPLE_C_D_O_V3_V7_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x3, 0x7 }, // 3076
  { IMAGE_SAMPLE_C_D_O_V3_V8_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x3, 0x8 }, // 3077
  { IMAGE_SAMPLE_C_D_O_V3_V9_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x3, 0x9 }, // 3078
  { IMAGE_SAMPLE_C_D_O_V3_V11_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x3, 0xB }, // 3079
  { IMAGE_SAMPLE_C_D_O_V4_V4_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 3080
  { IMAGE_SAMPLE_C_D_O_V4_V5_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 3081
  { IMAGE_SAMPLE_C_D_O_V4_V6_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x4, 0x6 }, // 3082
  { IMAGE_SAMPLE_C_D_O_V4_V7_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x4, 0x7 }, // 3083
  { IMAGE_SAMPLE_C_D_O_V4_V8_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x4, 0x8 }, // 3084
  { IMAGE_SAMPLE_C_D_O_V4_V9_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x4, 0x9 }, // 3085
  { IMAGE_SAMPLE_C_D_O_V4_V11_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x4, 0xB }, // 3086
  { IMAGE_SAMPLE_C_D_O_V5_V4_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 3087
  { IMAGE_SAMPLE_C_D_O_V5_V5_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 3088
  { IMAGE_SAMPLE_C_D_O_V5_V6_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x5, 0x6 }, // 3089
  { IMAGE_SAMPLE_C_D_O_V5_V7_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x5, 0x7 }, // 3090
  { IMAGE_SAMPLE_C_D_O_V5_V8_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x5, 0x8 }, // 3091
  { IMAGE_SAMPLE_C_D_O_V5_V9_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x5, 0x9 }, // 3092
  { IMAGE_SAMPLE_C_D_O_V5_V11_nsa_gfx10, IMAGE_SAMPLE_C_D_O, MIMGEncGfx10NSA, 0x5, 0xB }, // 3093
  { IMAGE_SAMPLE_C_D_O_V1_V4, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x1, 0x4 }, // 3094
  { IMAGE_SAMPLE_C_D_O_V1_V8, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x1, 0x8 }, // 3095
  { IMAGE_SAMPLE_C_D_O_V1_V16, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x1, 0x10 }, // 3096
  { IMAGE_SAMPLE_C_D_O_V2_V4, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x2, 0x4 }, // 3097
  { IMAGE_SAMPLE_C_D_O_V2_V8, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x2, 0x8 }, // 3098
  { IMAGE_SAMPLE_C_D_O_V2_V16, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x2, 0x10 }, // 3099
  { IMAGE_SAMPLE_C_D_O_V3_V4, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x3, 0x4 }, // 3100
  { IMAGE_SAMPLE_C_D_O_V3_V8, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x3, 0x8 }, // 3101
  { IMAGE_SAMPLE_C_D_O_V3_V16, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x3, 0x10 }, // 3102
  { IMAGE_SAMPLE_C_D_O_V4_V4, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x4, 0x4 }, // 3103
  { IMAGE_SAMPLE_C_D_O_V4_V8, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x4, 0x8 }, // 3104
  { IMAGE_SAMPLE_C_D_O_V4_V16, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x4, 0x10 }, // 3105
  { IMAGE_SAMPLE_C_D_O_V5_V4, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x5, 0x4 }, // 3106
  { IMAGE_SAMPLE_C_D_O_V5_V8, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x5, 0x8 }, // 3107
  { IMAGE_SAMPLE_C_D_O_V5_V16, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x5, 0x10 }, // 3108
  { IMAGE_SAMPLE_C_L_V1_V2_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10Default, 0x1, 0x2 }, // 3109
  { IMAGE_SAMPLE_C_L_V1_V3_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10Default, 0x1, 0x3 }, // 3110
  { IMAGE_SAMPLE_C_L_V1_V4_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10Default, 0x1, 0x4 }, // 3111
  { IMAGE_SAMPLE_C_L_V1_V8_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10Default, 0x1, 0x8 }, // 3112
  { IMAGE_SAMPLE_C_L_V2_V2_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10Default, 0x2, 0x2 }, // 3113
  { IMAGE_SAMPLE_C_L_V2_V3_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10Default, 0x2, 0x3 }, // 3114
  { IMAGE_SAMPLE_C_L_V2_V4_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10Default, 0x2, 0x4 }, // 3115
  { IMAGE_SAMPLE_C_L_V2_V8_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10Default, 0x2, 0x8 }, // 3116
  { IMAGE_SAMPLE_C_L_V3_V2_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10Default, 0x3, 0x2 }, // 3117
  { IMAGE_SAMPLE_C_L_V3_V3_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10Default, 0x3, 0x3 }, // 3118
  { IMAGE_SAMPLE_C_L_V3_V4_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10Default, 0x3, 0x4 }, // 3119
  { IMAGE_SAMPLE_C_L_V3_V8_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10Default, 0x3, 0x8 }, // 3120
  { IMAGE_SAMPLE_C_L_V4_V2_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10Default, 0x4, 0x2 }, // 3121
  { IMAGE_SAMPLE_C_L_V4_V3_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10Default, 0x4, 0x3 }, // 3122
  { IMAGE_SAMPLE_C_L_V4_V4_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10Default, 0x4, 0x4 }, // 3123
  { IMAGE_SAMPLE_C_L_V4_V8_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10Default, 0x4, 0x8 }, // 3124
  { IMAGE_SAMPLE_C_L_V5_V2_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10Default, 0x5, 0x2 }, // 3125
  { IMAGE_SAMPLE_C_L_V5_V3_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10Default, 0x5, 0x3 }, // 3126
  { IMAGE_SAMPLE_C_L_V5_V4_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10Default, 0x5, 0x4 }, // 3127
  { IMAGE_SAMPLE_C_L_V5_V8_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10Default, 0x5, 0x8 }, // 3128
  { IMAGE_SAMPLE_C_L_V1_V2_nsa_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10NSA, 0x1, 0x2 }, // 3129
  { IMAGE_SAMPLE_C_L_V1_V3_nsa_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10NSA, 0x1, 0x3 }, // 3130
  { IMAGE_SAMPLE_C_L_V1_V4_nsa_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10NSA, 0x1, 0x4 }, // 3131
  { IMAGE_SAMPLE_C_L_V1_V5_nsa_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10NSA, 0x1, 0x5 }, // 3132
  { IMAGE_SAMPLE_C_L_V2_V2_nsa_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10NSA, 0x2, 0x2 }, // 3133
  { IMAGE_SAMPLE_C_L_V2_V3_nsa_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10NSA, 0x2, 0x3 }, // 3134
  { IMAGE_SAMPLE_C_L_V2_V4_nsa_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10NSA, 0x2, 0x4 }, // 3135
  { IMAGE_SAMPLE_C_L_V2_V5_nsa_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10NSA, 0x2, 0x5 }, // 3136
  { IMAGE_SAMPLE_C_L_V3_V2_nsa_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10NSA, 0x3, 0x2 }, // 3137
  { IMAGE_SAMPLE_C_L_V3_V3_nsa_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10NSA, 0x3, 0x3 }, // 3138
  { IMAGE_SAMPLE_C_L_V3_V4_nsa_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10NSA, 0x3, 0x4 }, // 3139
  { IMAGE_SAMPLE_C_L_V3_V5_nsa_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10NSA, 0x3, 0x5 }, // 3140
  { IMAGE_SAMPLE_C_L_V4_V2_nsa_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10NSA, 0x4, 0x2 }, // 3141
  { IMAGE_SAMPLE_C_L_V4_V3_nsa_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10NSA, 0x4, 0x3 }, // 3142
  { IMAGE_SAMPLE_C_L_V4_V4_nsa_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10NSA, 0x4, 0x4 }, // 3143
  { IMAGE_SAMPLE_C_L_V4_V5_nsa_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10NSA, 0x4, 0x5 }, // 3144
  { IMAGE_SAMPLE_C_L_V5_V2_nsa_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10NSA, 0x5, 0x2 }, // 3145
  { IMAGE_SAMPLE_C_L_V5_V3_nsa_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10NSA, 0x5, 0x3 }, // 3146
  { IMAGE_SAMPLE_C_L_V5_V4_nsa_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10NSA, 0x5, 0x4 }, // 3147
  { IMAGE_SAMPLE_C_L_V5_V5_nsa_gfx10, IMAGE_SAMPLE_C_L, MIMGEncGfx10NSA, 0x5, 0x5 }, // 3148
  { IMAGE_SAMPLE_C_L_V1_V2, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x1, 0x2 }, // 3149
  { IMAGE_SAMPLE_C_L_V1_V3, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x1, 0x3 }, // 3150
  { IMAGE_SAMPLE_C_L_V1_V4, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x1, 0x4 }, // 3151
  { IMAGE_SAMPLE_C_L_V1_V8, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x1, 0x8 }, // 3152
  { IMAGE_SAMPLE_C_L_V2_V2, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x2, 0x2 }, // 3153
  { IMAGE_SAMPLE_C_L_V2_V3, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x2, 0x3 }, // 3154
  { IMAGE_SAMPLE_C_L_V2_V4, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x2, 0x4 }, // 3155
  { IMAGE_SAMPLE_C_L_V2_V8, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x2, 0x8 }, // 3156
  { IMAGE_SAMPLE_C_L_V3_V2, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x3, 0x2 }, // 3157
  { IMAGE_SAMPLE_C_L_V3_V3, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x3, 0x3 }, // 3158
  { IMAGE_SAMPLE_C_L_V3_V4, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x3, 0x4 }, // 3159
  { IMAGE_SAMPLE_C_L_V3_V8, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x3, 0x8 }, // 3160
  { IMAGE_SAMPLE_C_L_V4_V2, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x4, 0x2 }, // 3161
  { IMAGE_SAMPLE_C_L_V4_V3, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x4, 0x3 }, // 3162
  { IMAGE_SAMPLE_C_L_V4_V4, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x4, 0x4 }, // 3163
  { IMAGE_SAMPLE_C_L_V4_V8, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x4, 0x8 }, // 3164
  { IMAGE_SAMPLE_C_L_V5_V2, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x5, 0x2 }, // 3165
  { IMAGE_SAMPLE_C_L_V5_V3, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x5, 0x3 }, // 3166
  { IMAGE_SAMPLE_C_L_V5_V4, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x5, 0x4 }, // 3167
  { IMAGE_SAMPLE_C_L_V5_V8, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x5, 0x8 }, // 3168
  { IMAGE_SAMPLE_C_LZ_V1_V2_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10Default, 0x1, 0x2 }, // 3169
  { IMAGE_SAMPLE_C_LZ_V1_V3_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10Default, 0x1, 0x3 }, // 3170
  { IMAGE_SAMPLE_C_LZ_V1_V4_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10Default, 0x1, 0x4 }, // 3171
  { IMAGE_SAMPLE_C_LZ_V2_V2_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10Default, 0x2, 0x2 }, // 3172
  { IMAGE_SAMPLE_C_LZ_V2_V3_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10Default, 0x2, 0x3 }, // 3173
  { IMAGE_SAMPLE_C_LZ_V2_V4_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10Default, 0x2, 0x4 }, // 3174
  { IMAGE_SAMPLE_C_LZ_V3_V2_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10Default, 0x3, 0x2 }, // 3175
  { IMAGE_SAMPLE_C_LZ_V3_V3_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10Default, 0x3, 0x3 }, // 3176
  { IMAGE_SAMPLE_C_LZ_V3_V4_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10Default, 0x3, 0x4 }, // 3177
  { IMAGE_SAMPLE_C_LZ_V4_V2_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10Default, 0x4, 0x2 }, // 3178
  { IMAGE_SAMPLE_C_LZ_V4_V3_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10Default, 0x4, 0x3 }, // 3179
  { IMAGE_SAMPLE_C_LZ_V4_V4_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10Default, 0x4, 0x4 }, // 3180
  { IMAGE_SAMPLE_C_LZ_V5_V2_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10Default, 0x5, 0x2 }, // 3181
  { IMAGE_SAMPLE_C_LZ_V5_V3_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10Default, 0x5, 0x3 }, // 3182
  { IMAGE_SAMPLE_C_LZ_V5_V4_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10Default, 0x5, 0x4 }, // 3183
  { IMAGE_SAMPLE_C_LZ_V1_V2_nsa_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10NSA, 0x1, 0x2 }, // 3184
  { IMAGE_SAMPLE_C_LZ_V1_V3_nsa_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10NSA, 0x1, 0x3 }, // 3185
  { IMAGE_SAMPLE_C_LZ_V1_V4_nsa_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10NSA, 0x1, 0x4 }, // 3186
  { IMAGE_SAMPLE_C_LZ_V2_V2_nsa_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10NSA, 0x2, 0x2 }, // 3187
  { IMAGE_SAMPLE_C_LZ_V2_V3_nsa_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10NSA, 0x2, 0x3 }, // 3188
  { IMAGE_SAMPLE_C_LZ_V2_V4_nsa_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10NSA, 0x2, 0x4 }, // 3189
  { IMAGE_SAMPLE_C_LZ_V3_V2_nsa_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10NSA, 0x3, 0x2 }, // 3190
  { IMAGE_SAMPLE_C_LZ_V3_V3_nsa_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10NSA, 0x3, 0x3 }, // 3191
  { IMAGE_SAMPLE_C_LZ_V3_V4_nsa_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10NSA, 0x3, 0x4 }, // 3192
  { IMAGE_SAMPLE_C_LZ_V4_V2_nsa_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10NSA, 0x4, 0x2 }, // 3193
  { IMAGE_SAMPLE_C_LZ_V4_V3_nsa_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10NSA, 0x4, 0x3 }, // 3194
  { IMAGE_SAMPLE_C_LZ_V4_V4_nsa_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10NSA, 0x4, 0x4 }, // 3195
  { IMAGE_SAMPLE_C_LZ_V5_V2_nsa_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10NSA, 0x5, 0x2 }, // 3196
  { IMAGE_SAMPLE_C_LZ_V5_V3_nsa_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10NSA, 0x5, 0x3 }, // 3197
  { IMAGE_SAMPLE_C_LZ_V5_V4_nsa_gfx10, IMAGE_SAMPLE_C_LZ, MIMGEncGfx10NSA, 0x5, 0x4 }, // 3198
  { IMAGE_SAMPLE_C_LZ_V1_V2, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x1, 0x2 }, // 3199
  { IMAGE_SAMPLE_C_LZ_V1_V3, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x1, 0x3 }, // 3200
  { IMAGE_SAMPLE_C_LZ_V1_V4, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x1, 0x4 }, // 3201
  { IMAGE_SAMPLE_C_LZ_V2_V2, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x2, 0x2 }, // 3202
  { IMAGE_SAMPLE_C_LZ_V2_V3, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x2, 0x3 }, // 3203
  { IMAGE_SAMPLE_C_LZ_V2_V4, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x2, 0x4 }, // 3204
  { IMAGE_SAMPLE_C_LZ_V3_V2, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x3, 0x2 }, // 3205
  { IMAGE_SAMPLE_C_LZ_V3_V3, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x3, 0x3 }, // 3206
  { IMAGE_SAMPLE_C_LZ_V3_V4, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x3, 0x4 }, // 3207
  { IMAGE_SAMPLE_C_LZ_V4_V2, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x4, 0x2 }, // 3208
  { IMAGE_SAMPLE_C_LZ_V4_V3, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x4, 0x3 }, // 3209
  { IMAGE_SAMPLE_C_LZ_V4_V4, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x4, 0x4 }, // 3210
  { IMAGE_SAMPLE_C_LZ_V5_V2, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x5, 0x2 }, // 3211
  { IMAGE_SAMPLE_C_LZ_V5_V3, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x5, 0x3 }, // 3212
  { IMAGE_SAMPLE_C_LZ_V5_V4, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x5, 0x4 }, // 3213
  { IMAGE_SAMPLE_C_LZ_O_V1_V3_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10Default, 0x1, 0x3 }, // 3214
  { IMAGE_SAMPLE_C_LZ_O_V1_V4_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10Default, 0x1, 0x4 }, // 3215
  { IMAGE_SAMPLE_C_LZ_O_V1_V8_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10Default, 0x1, 0x8 }, // 3216
  { IMAGE_SAMPLE_C_LZ_O_V2_V3_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 3217
  { IMAGE_SAMPLE_C_LZ_O_V2_V4_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 3218
  { IMAGE_SAMPLE_C_LZ_O_V2_V8_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 3219
  { IMAGE_SAMPLE_C_LZ_O_V3_V3_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10Default, 0x3, 0x3 }, // 3220
  { IMAGE_SAMPLE_C_LZ_O_V3_V4_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10Default, 0x3, 0x4 }, // 3221
  { IMAGE_SAMPLE_C_LZ_O_V3_V8_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10Default, 0x3, 0x8 }, // 3222
  { IMAGE_SAMPLE_C_LZ_O_V4_V3_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 3223
  { IMAGE_SAMPLE_C_LZ_O_V4_V4_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 3224
  { IMAGE_SAMPLE_C_LZ_O_V4_V8_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 3225
  { IMAGE_SAMPLE_C_LZ_O_V5_V3_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 3226
  { IMAGE_SAMPLE_C_LZ_O_V5_V4_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 3227
  { IMAGE_SAMPLE_C_LZ_O_V5_V8_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 3228
  { IMAGE_SAMPLE_C_LZ_O_V1_V3_nsa_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10NSA, 0x1, 0x3 }, // 3229
  { IMAGE_SAMPLE_C_LZ_O_V1_V4_nsa_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10NSA, 0x1, 0x4 }, // 3230
  { IMAGE_SAMPLE_C_LZ_O_V1_V5_nsa_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10NSA, 0x1, 0x5 }, // 3231
  { IMAGE_SAMPLE_C_LZ_O_V2_V3_nsa_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 3232
  { IMAGE_SAMPLE_C_LZ_O_V2_V4_nsa_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 3233
  { IMAGE_SAMPLE_C_LZ_O_V2_V5_nsa_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 3234
  { IMAGE_SAMPLE_C_LZ_O_V3_V3_nsa_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10NSA, 0x3, 0x3 }, // 3235
  { IMAGE_SAMPLE_C_LZ_O_V3_V4_nsa_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10NSA, 0x3, 0x4 }, // 3236
  { IMAGE_SAMPLE_C_LZ_O_V3_V5_nsa_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10NSA, 0x3, 0x5 }, // 3237
  { IMAGE_SAMPLE_C_LZ_O_V4_V3_nsa_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 3238
  { IMAGE_SAMPLE_C_LZ_O_V4_V4_nsa_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 3239
  { IMAGE_SAMPLE_C_LZ_O_V4_V5_nsa_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 3240
  { IMAGE_SAMPLE_C_LZ_O_V5_V3_nsa_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 3241
  { IMAGE_SAMPLE_C_LZ_O_V5_V4_nsa_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 3242
  { IMAGE_SAMPLE_C_LZ_O_V5_V5_nsa_gfx10, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 3243
  { IMAGE_SAMPLE_C_LZ_O_V1_V3, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x1, 0x3 }, // 3244
  { IMAGE_SAMPLE_C_LZ_O_V1_V4, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x1, 0x4 }, // 3245
  { IMAGE_SAMPLE_C_LZ_O_V1_V8, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x1, 0x8 }, // 3246
  { IMAGE_SAMPLE_C_LZ_O_V2_V3, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x2, 0x3 }, // 3247
  { IMAGE_SAMPLE_C_LZ_O_V2_V4, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x2, 0x4 }, // 3248
  { IMAGE_SAMPLE_C_LZ_O_V2_V8, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x2, 0x8 }, // 3249
  { IMAGE_SAMPLE_C_LZ_O_V3_V3, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x3, 0x3 }, // 3250
  { IMAGE_SAMPLE_C_LZ_O_V3_V4, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x3, 0x4 }, // 3251
  { IMAGE_SAMPLE_C_LZ_O_V3_V8, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x3, 0x8 }, // 3252
  { IMAGE_SAMPLE_C_LZ_O_V4_V3, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x4, 0x3 }, // 3253
  { IMAGE_SAMPLE_C_LZ_O_V4_V4, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x4, 0x4 }, // 3254
  { IMAGE_SAMPLE_C_LZ_O_V4_V8, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x4, 0x8 }, // 3255
  { IMAGE_SAMPLE_C_LZ_O_V5_V3, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x5, 0x3 }, // 3256
  { IMAGE_SAMPLE_C_LZ_O_V5_V4, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x5, 0x4 }, // 3257
  { IMAGE_SAMPLE_C_LZ_O_V5_V8, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x5, 0x8 }, // 3258
  { IMAGE_SAMPLE_C_L_O_V1_V3_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10Default, 0x1, 0x3 }, // 3259
  { IMAGE_SAMPLE_C_L_O_V1_V4_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10Default, 0x1, 0x4 }, // 3260
  { IMAGE_SAMPLE_C_L_O_V1_V8_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10Default, 0x1, 0x8 }, // 3261
  { IMAGE_SAMPLE_C_L_O_V2_V3_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 3262
  { IMAGE_SAMPLE_C_L_O_V2_V4_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 3263
  { IMAGE_SAMPLE_C_L_O_V2_V8_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 3264
  { IMAGE_SAMPLE_C_L_O_V3_V3_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10Default, 0x3, 0x3 }, // 3265
  { IMAGE_SAMPLE_C_L_O_V3_V4_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10Default, 0x3, 0x4 }, // 3266
  { IMAGE_SAMPLE_C_L_O_V3_V8_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10Default, 0x3, 0x8 }, // 3267
  { IMAGE_SAMPLE_C_L_O_V4_V3_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 3268
  { IMAGE_SAMPLE_C_L_O_V4_V4_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 3269
  { IMAGE_SAMPLE_C_L_O_V4_V8_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 3270
  { IMAGE_SAMPLE_C_L_O_V5_V3_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 3271
  { IMAGE_SAMPLE_C_L_O_V5_V4_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 3272
  { IMAGE_SAMPLE_C_L_O_V5_V8_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 3273
  { IMAGE_SAMPLE_C_L_O_V1_V3_nsa_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10NSA, 0x1, 0x3 }, // 3274
  { IMAGE_SAMPLE_C_L_O_V1_V4_nsa_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10NSA, 0x1, 0x4 }, // 3275
  { IMAGE_SAMPLE_C_L_O_V1_V5_nsa_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10NSA, 0x1, 0x5 }, // 3276
  { IMAGE_SAMPLE_C_L_O_V1_V6_nsa_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10NSA, 0x1, 0x6 }, // 3277
  { IMAGE_SAMPLE_C_L_O_V2_V3_nsa_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 3278
  { IMAGE_SAMPLE_C_L_O_V2_V4_nsa_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 3279
  { IMAGE_SAMPLE_C_L_O_V2_V5_nsa_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 3280
  { IMAGE_SAMPLE_C_L_O_V2_V6_nsa_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10NSA, 0x2, 0x6 }, // 3281
  { IMAGE_SAMPLE_C_L_O_V3_V3_nsa_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10NSA, 0x3, 0x3 }, // 3282
  { IMAGE_SAMPLE_C_L_O_V3_V4_nsa_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10NSA, 0x3, 0x4 }, // 3283
  { IMAGE_SAMPLE_C_L_O_V3_V5_nsa_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10NSA, 0x3, 0x5 }, // 3284
  { IMAGE_SAMPLE_C_L_O_V3_V6_nsa_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10NSA, 0x3, 0x6 }, // 3285
  { IMAGE_SAMPLE_C_L_O_V4_V3_nsa_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 3286
  { IMAGE_SAMPLE_C_L_O_V4_V4_nsa_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 3287
  { IMAGE_SAMPLE_C_L_O_V4_V5_nsa_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 3288
  { IMAGE_SAMPLE_C_L_O_V4_V6_nsa_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10NSA, 0x4, 0x6 }, // 3289
  { IMAGE_SAMPLE_C_L_O_V5_V3_nsa_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 3290
  { IMAGE_SAMPLE_C_L_O_V5_V4_nsa_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 3291
  { IMAGE_SAMPLE_C_L_O_V5_V5_nsa_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 3292
  { IMAGE_SAMPLE_C_L_O_V5_V6_nsa_gfx10, IMAGE_SAMPLE_C_L_O, MIMGEncGfx10NSA, 0x5, 0x6 }, // 3293
  { IMAGE_SAMPLE_C_L_O_V1_V3, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x1, 0x3 }, // 3294
  { IMAGE_SAMPLE_C_L_O_V1_V4, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x1, 0x4 }, // 3295
  { IMAGE_SAMPLE_C_L_O_V1_V8, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x1, 0x8 }, // 3296
  { IMAGE_SAMPLE_C_L_O_V2_V3, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x2, 0x3 }, // 3297
  { IMAGE_SAMPLE_C_L_O_V2_V4, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x2, 0x4 }, // 3298
  { IMAGE_SAMPLE_C_L_O_V2_V8, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x2, 0x8 }, // 3299
  { IMAGE_SAMPLE_C_L_O_V3_V3, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x3, 0x3 }, // 3300
  { IMAGE_SAMPLE_C_L_O_V3_V4, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x3, 0x4 }, // 3301
  { IMAGE_SAMPLE_C_L_O_V3_V8, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x3, 0x8 }, // 3302
  { IMAGE_SAMPLE_C_L_O_V4_V3, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x4, 0x3 }, // 3303
  { IMAGE_SAMPLE_C_L_O_V4_V4, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x4, 0x4 }, // 3304
  { IMAGE_SAMPLE_C_L_O_V4_V8, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x4, 0x8 }, // 3305
  { IMAGE_SAMPLE_C_L_O_V5_V3, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x5, 0x3 }, // 3306
  { IMAGE_SAMPLE_C_L_O_V5_V4, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x5, 0x4 }, // 3307
  { IMAGE_SAMPLE_C_L_O_V5_V8, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x5, 0x8 }, // 3308
  { IMAGE_SAMPLE_C_O_V1_V3_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10Default, 0x1, 0x3 }, // 3309
  { IMAGE_SAMPLE_C_O_V1_V4_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10Default, 0x1, 0x4 }, // 3310
  { IMAGE_SAMPLE_C_O_V1_V8_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10Default, 0x1, 0x8 }, // 3311
  { IMAGE_SAMPLE_C_O_V2_V3_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 3312
  { IMAGE_SAMPLE_C_O_V2_V4_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 3313
  { IMAGE_SAMPLE_C_O_V2_V8_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 3314
  { IMAGE_SAMPLE_C_O_V3_V3_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10Default, 0x3, 0x3 }, // 3315
  { IMAGE_SAMPLE_C_O_V3_V4_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10Default, 0x3, 0x4 }, // 3316
  { IMAGE_SAMPLE_C_O_V3_V8_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10Default, 0x3, 0x8 }, // 3317
  { IMAGE_SAMPLE_C_O_V4_V3_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 3318
  { IMAGE_SAMPLE_C_O_V4_V4_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 3319
  { IMAGE_SAMPLE_C_O_V4_V8_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 3320
  { IMAGE_SAMPLE_C_O_V5_V3_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 3321
  { IMAGE_SAMPLE_C_O_V5_V4_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 3322
  { IMAGE_SAMPLE_C_O_V5_V8_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 3323
  { IMAGE_SAMPLE_C_O_V1_V3_nsa_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10NSA, 0x1, 0x3 }, // 3324
  { IMAGE_SAMPLE_C_O_V1_V4_nsa_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10NSA, 0x1, 0x4 }, // 3325
  { IMAGE_SAMPLE_C_O_V1_V5_nsa_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10NSA, 0x1, 0x5 }, // 3326
  { IMAGE_SAMPLE_C_O_V2_V3_nsa_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 3327
  { IMAGE_SAMPLE_C_O_V2_V4_nsa_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 3328
  { IMAGE_SAMPLE_C_O_V2_V5_nsa_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 3329
  { IMAGE_SAMPLE_C_O_V3_V3_nsa_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10NSA, 0x3, 0x3 }, // 3330
  { IMAGE_SAMPLE_C_O_V3_V4_nsa_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10NSA, 0x3, 0x4 }, // 3331
  { IMAGE_SAMPLE_C_O_V3_V5_nsa_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10NSA, 0x3, 0x5 }, // 3332
  { IMAGE_SAMPLE_C_O_V4_V3_nsa_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 3333
  { IMAGE_SAMPLE_C_O_V4_V4_nsa_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 3334
  { IMAGE_SAMPLE_C_O_V4_V5_nsa_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 3335
  { IMAGE_SAMPLE_C_O_V5_V3_nsa_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 3336
  { IMAGE_SAMPLE_C_O_V5_V4_nsa_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 3337
  { IMAGE_SAMPLE_C_O_V5_V5_nsa_gfx10, IMAGE_SAMPLE_C_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 3338
  { IMAGE_SAMPLE_C_O_V1_V3, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x1, 0x3 }, // 3339
  { IMAGE_SAMPLE_C_O_V1_V4, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x1, 0x4 }, // 3340
  { IMAGE_SAMPLE_C_O_V1_V8, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x1, 0x8 }, // 3341
  { IMAGE_SAMPLE_C_O_V2_V3, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x2, 0x3 }, // 3342
  { IMAGE_SAMPLE_C_O_V2_V4, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x2, 0x4 }, // 3343
  { IMAGE_SAMPLE_C_O_V2_V8, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x2, 0x8 }, // 3344
  { IMAGE_SAMPLE_C_O_V3_V3, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x3, 0x3 }, // 3345
  { IMAGE_SAMPLE_C_O_V3_V4, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x3, 0x4 }, // 3346
  { IMAGE_SAMPLE_C_O_V3_V8, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x3, 0x8 }, // 3347
  { IMAGE_SAMPLE_C_O_V4_V3, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x4, 0x3 }, // 3348
  { IMAGE_SAMPLE_C_O_V4_V4, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x4, 0x4 }, // 3349
  { IMAGE_SAMPLE_C_O_V4_V8, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x4, 0x8 }, // 3350
  { IMAGE_SAMPLE_C_O_V5_V3, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x5, 0x3 }, // 3351
  { IMAGE_SAMPLE_C_O_V5_V4, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x5, 0x4 }, // 3352
  { IMAGE_SAMPLE_C_O_V5_V8, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x5, 0x8 }, // 3353
  { IMAGE_SAMPLE_D_V1_V2_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x1, 0x2 }, // 3354
  { IMAGE_SAMPLE_D_V1_V3_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x1, 0x3 }, // 3355
  { IMAGE_SAMPLE_D_V1_V4_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x1, 0x4 }, // 3356
  { IMAGE_SAMPLE_D_V1_V8_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x1, 0x8 }, // 3357
  { IMAGE_SAMPLE_D_V1_V16_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x1, 0x10 }, // 3358
  { IMAGE_SAMPLE_D_V2_V2_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x2, 0x2 }, // 3359
  { IMAGE_SAMPLE_D_V2_V3_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x2, 0x3 }, // 3360
  { IMAGE_SAMPLE_D_V2_V4_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x2, 0x4 }, // 3361
  { IMAGE_SAMPLE_D_V2_V8_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x2, 0x8 }, // 3362
  { IMAGE_SAMPLE_D_V2_V16_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x2, 0x10 }, // 3363
  { IMAGE_SAMPLE_D_V3_V2_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x3, 0x2 }, // 3364
  { IMAGE_SAMPLE_D_V3_V3_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x3, 0x3 }, // 3365
  { IMAGE_SAMPLE_D_V3_V4_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x3, 0x4 }, // 3366
  { IMAGE_SAMPLE_D_V3_V8_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x3, 0x8 }, // 3367
  { IMAGE_SAMPLE_D_V3_V16_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x3, 0x10 }, // 3368
  { IMAGE_SAMPLE_D_V4_V2_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x4, 0x2 }, // 3369
  { IMAGE_SAMPLE_D_V4_V3_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x4, 0x3 }, // 3370
  { IMAGE_SAMPLE_D_V4_V4_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x4, 0x4 }, // 3371
  { IMAGE_SAMPLE_D_V4_V8_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x4, 0x8 }, // 3372
  { IMAGE_SAMPLE_D_V4_V16_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x4, 0x10 }, // 3373
  { IMAGE_SAMPLE_D_V5_V2_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x5, 0x2 }, // 3374
  { IMAGE_SAMPLE_D_V5_V3_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x5, 0x3 }, // 3375
  { IMAGE_SAMPLE_D_V5_V4_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x5, 0x4 }, // 3376
  { IMAGE_SAMPLE_D_V5_V8_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x5, 0x8 }, // 3377
  { IMAGE_SAMPLE_D_V5_V16_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10Default, 0x5, 0x10 }, // 3378
  { IMAGE_SAMPLE_D_V1_V2_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x1, 0x2 }, // 3379
  { IMAGE_SAMPLE_D_V1_V3_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x1, 0x3 }, // 3380
  { IMAGE_SAMPLE_D_V1_V4_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x1, 0x4 }, // 3381
  { IMAGE_SAMPLE_D_V1_V5_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x1, 0x5 }, // 3382
  { IMAGE_SAMPLE_D_V1_V6_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x1, 0x6 }, // 3383
  { IMAGE_SAMPLE_D_V1_V7_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x1, 0x7 }, // 3384
  { IMAGE_SAMPLE_D_V1_V9_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x1, 0x9 }, // 3385
  { IMAGE_SAMPLE_D_V2_V2_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x2, 0x2 }, // 3386
  { IMAGE_SAMPLE_D_V2_V3_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x2, 0x3 }, // 3387
  { IMAGE_SAMPLE_D_V2_V4_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x2, 0x4 }, // 3388
  { IMAGE_SAMPLE_D_V2_V5_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x2, 0x5 }, // 3389
  { IMAGE_SAMPLE_D_V2_V6_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x2, 0x6 }, // 3390
  { IMAGE_SAMPLE_D_V2_V7_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x2, 0x7 }, // 3391
  { IMAGE_SAMPLE_D_V2_V9_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x2, 0x9 }, // 3392
  { IMAGE_SAMPLE_D_V3_V2_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x3, 0x2 }, // 3393
  { IMAGE_SAMPLE_D_V3_V3_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x3, 0x3 }, // 3394
  { IMAGE_SAMPLE_D_V3_V4_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x3, 0x4 }, // 3395
  { IMAGE_SAMPLE_D_V3_V5_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x3, 0x5 }, // 3396
  { IMAGE_SAMPLE_D_V3_V6_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x3, 0x6 }, // 3397
  { IMAGE_SAMPLE_D_V3_V7_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x3, 0x7 }, // 3398
  { IMAGE_SAMPLE_D_V3_V9_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x3, 0x9 }, // 3399
  { IMAGE_SAMPLE_D_V4_V2_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x4, 0x2 }, // 3400
  { IMAGE_SAMPLE_D_V4_V3_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x4, 0x3 }, // 3401
  { IMAGE_SAMPLE_D_V4_V4_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x4, 0x4 }, // 3402
  { IMAGE_SAMPLE_D_V4_V5_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x4, 0x5 }, // 3403
  { IMAGE_SAMPLE_D_V4_V6_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x4, 0x6 }, // 3404
  { IMAGE_SAMPLE_D_V4_V7_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x4, 0x7 }, // 3405
  { IMAGE_SAMPLE_D_V4_V9_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x4, 0x9 }, // 3406
  { IMAGE_SAMPLE_D_V5_V2_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x5, 0x2 }, // 3407
  { IMAGE_SAMPLE_D_V5_V3_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x5, 0x3 }, // 3408
  { IMAGE_SAMPLE_D_V5_V4_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x5, 0x4 }, // 3409
  { IMAGE_SAMPLE_D_V5_V5_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x5, 0x5 }, // 3410
  { IMAGE_SAMPLE_D_V5_V6_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x5, 0x6 }, // 3411
  { IMAGE_SAMPLE_D_V5_V7_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x5, 0x7 }, // 3412
  { IMAGE_SAMPLE_D_V5_V9_nsa_gfx10, IMAGE_SAMPLE_D, MIMGEncGfx10NSA, 0x5, 0x9 }, // 3413
  { IMAGE_SAMPLE_D_V1_V2, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x1, 0x2 }, // 3414
  { IMAGE_SAMPLE_D_V1_V3, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x1, 0x3 }, // 3415
  { IMAGE_SAMPLE_D_V1_V4, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x1, 0x4 }, // 3416
  { IMAGE_SAMPLE_D_V1_V8, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x1, 0x8 }, // 3417
  { IMAGE_SAMPLE_D_V1_V16, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x1, 0x10 }, // 3418
  { IMAGE_SAMPLE_D_V2_V2, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x2, 0x2 }, // 3419
  { IMAGE_SAMPLE_D_V2_V3, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x2, 0x3 }, // 3420
  { IMAGE_SAMPLE_D_V2_V4, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x2, 0x4 }, // 3421
  { IMAGE_SAMPLE_D_V2_V8, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x2, 0x8 }, // 3422
  { IMAGE_SAMPLE_D_V2_V16, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x2, 0x10 }, // 3423
  { IMAGE_SAMPLE_D_V3_V2, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x3, 0x2 }, // 3424
  { IMAGE_SAMPLE_D_V3_V3, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x3, 0x3 }, // 3425
  { IMAGE_SAMPLE_D_V3_V4, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x3, 0x4 }, // 3426
  { IMAGE_SAMPLE_D_V3_V8, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x3, 0x8 }, // 3427
  { IMAGE_SAMPLE_D_V3_V16, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x3, 0x10 }, // 3428
  { IMAGE_SAMPLE_D_V4_V2, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x4, 0x2 }, // 3429
  { IMAGE_SAMPLE_D_V4_V3, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x4, 0x3 }, // 3430
  { IMAGE_SAMPLE_D_V4_V4, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x4, 0x4 }, // 3431
  { IMAGE_SAMPLE_D_V4_V8, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x4, 0x8 }, // 3432
  { IMAGE_SAMPLE_D_V4_V16, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x4, 0x10 }, // 3433
  { IMAGE_SAMPLE_D_V5_V2, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x5, 0x2 }, // 3434
  { IMAGE_SAMPLE_D_V5_V3, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x5, 0x3 }, // 3435
  { IMAGE_SAMPLE_D_V5_V4, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x5, 0x4 }, // 3436
  { IMAGE_SAMPLE_D_V5_V8, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x5, 0x8 }, // 3437
  { IMAGE_SAMPLE_D_V5_V16, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x5, 0x10 }, // 3438
  { IMAGE_SAMPLE_D_CL_V1_V2_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x1, 0x2 }, // 3439
  { IMAGE_SAMPLE_D_CL_V1_V3_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x1, 0x3 }, // 3440
  { IMAGE_SAMPLE_D_CL_V1_V4_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x1, 0x4 }, // 3441
  { IMAGE_SAMPLE_D_CL_V1_V8_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x1, 0x8 }, // 3442
  { IMAGE_SAMPLE_D_CL_V1_V16_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x1, 0x10 }, // 3443
  { IMAGE_SAMPLE_D_CL_V2_V2_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x2, 0x2 }, // 3444
  { IMAGE_SAMPLE_D_CL_V2_V3_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x2, 0x3 }, // 3445
  { IMAGE_SAMPLE_D_CL_V2_V4_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x2, 0x4 }, // 3446
  { IMAGE_SAMPLE_D_CL_V2_V8_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x2, 0x8 }, // 3447
  { IMAGE_SAMPLE_D_CL_V2_V16_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x2, 0x10 }, // 3448
  { IMAGE_SAMPLE_D_CL_V3_V2_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x3, 0x2 }, // 3449
  { IMAGE_SAMPLE_D_CL_V3_V3_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x3, 0x3 }, // 3450
  { IMAGE_SAMPLE_D_CL_V3_V4_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x3, 0x4 }, // 3451
  { IMAGE_SAMPLE_D_CL_V3_V8_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x3, 0x8 }, // 3452
  { IMAGE_SAMPLE_D_CL_V3_V16_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x3, 0x10 }, // 3453
  { IMAGE_SAMPLE_D_CL_V4_V2_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x4, 0x2 }, // 3454
  { IMAGE_SAMPLE_D_CL_V4_V3_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x4, 0x3 }, // 3455
  { IMAGE_SAMPLE_D_CL_V4_V4_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x4, 0x4 }, // 3456
  { IMAGE_SAMPLE_D_CL_V4_V8_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x4, 0x8 }, // 3457
  { IMAGE_SAMPLE_D_CL_V4_V16_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x4, 0x10 }, // 3458
  { IMAGE_SAMPLE_D_CL_V5_V2_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x5, 0x2 }, // 3459
  { IMAGE_SAMPLE_D_CL_V5_V3_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x5, 0x3 }, // 3460
  { IMAGE_SAMPLE_D_CL_V5_V4_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x5, 0x4 }, // 3461
  { IMAGE_SAMPLE_D_CL_V5_V8_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x5, 0x8 }, // 3462
  { IMAGE_SAMPLE_D_CL_V5_V16_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10Default, 0x5, 0x10 }, // 3463
  { IMAGE_SAMPLE_D_CL_V1_V2_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x1, 0x2 }, // 3464
  { IMAGE_SAMPLE_D_CL_V1_V3_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x1, 0x3 }, // 3465
  { IMAGE_SAMPLE_D_CL_V1_V4_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x1, 0x4 }, // 3466
  { IMAGE_SAMPLE_D_CL_V1_V5_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x1, 0x5 }, // 3467
  { IMAGE_SAMPLE_D_CL_V1_V7_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x1, 0x7 }, // 3468
  { IMAGE_SAMPLE_D_CL_V1_V8_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x1, 0x8 }, // 3469
  { IMAGE_SAMPLE_D_CL_V1_V10_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x1, 0xA }, // 3470
  { IMAGE_SAMPLE_D_CL_V2_V2_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x2, 0x2 }, // 3471
  { IMAGE_SAMPLE_D_CL_V2_V3_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x2, 0x3 }, // 3472
  { IMAGE_SAMPLE_D_CL_V2_V4_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x2, 0x4 }, // 3473
  { IMAGE_SAMPLE_D_CL_V2_V5_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x2, 0x5 }, // 3474
  { IMAGE_SAMPLE_D_CL_V2_V7_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x2, 0x7 }, // 3475
  { IMAGE_SAMPLE_D_CL_V2_V8_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x2, 0x8 }, // 3476
  { IMAGE_SAMPLE_D_CL_V2_V10_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x2, 0xA }, // 3477
  { IMAGE_SAMPLE_D_CL_V3_V2_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x3, 0x2 }, // 3478
  { IMAGE_SAMPLE_D_CL_V3_V3_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x3, 0x3 }, // 3479
  { IMAGE_SAMPLE_D_CL_V3_V4_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x3, 0x4 }, // 3480
  { IMAGE_SAMPLE_D_CL_V3_V5_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x3, 0x5 }, // 3481
  { IMAGE_SAMPLE_D_CL_V3_V7_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x3, 0x7 }, // 3482
  { IMAGE_SAMPLE_D_CL_V3_V8_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x3, 0x8 }, // 3483
  { IMAGE_SAMPLE_D_CL_V3_V10_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x3, 0xA }, // 3484
  { IMAGE_SAMPLE_D_CL_V4_V2_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x4, 0x2 }, // 3485
  { IMAGE_SAMPLE_D_CL_V4_V3_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x4, 0x3 }, // 3486
  { IMAGE_SAMPLE_D_CL_V4_V4_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x4, 0x4 }, // 3487
  { IMAGE_SAMPLE_D_CL_V4_V5_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x4, 0x5 }, // 3488
  { IMAGE_SAMPLE_D_CL_V4_V7_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x4, 0x7 }, // 3489
  { IMAGE_SAMPLE_D_CL_V4_V8_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x4, 0x8 }, // 3490
  { IMAGE_SAMPLE_D_CL_V4_V10_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x4, 0xA }, // 3491
  { IMAGE_SAMPLE_D_CL_V5_V2_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x5, 0x2 }, // 3492
  { IMAGE_SAMPLE_D_CL_V5_V3_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x5, 0x3 }, // 3493
  { IMAGE_SAMPLE_D_CL_V5_V4_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x5, 0x4 }, // 3494
  { IMAGE_SAMPLE_D_CL_V5_V5_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x5, 0x5 }, // 3495
  { IMAGE_SAMPLE_D_CL_V5_V7_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x5, 0x7 }, // 3496
  { IMAGE_SAMPLE_D_CL_V5_V8_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x5, 0x8 }, // 3497
  { IMAGE_SAMPLE_D_CL_V5_V10_nsa_gfx10, IMAGE_SAMPLE_D_CL, MIMGEncGfx10NSA, 0x5, 0xA }, // 3498
  { IMAGE_SAMPLE_D_CL_V1_V2, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x1, 0x2 }, // 3499
  { IMAGE_SAMPLE_D_CL_V1_V3, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x1, 0x3 }, // 3500
  { IMAGE_SAMPLE_D_CL_V1_V4, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x1, 0x4 }, // 3501
  { IMAGE_SAMPLE_D_CL_V1_V8, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x1, 0x8 }, // 3502
  { IMAGE_SAMPLE_D_CL_V1_V16, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x1, 0x10 }, // 3503
  { IMAGE_SAMPLE_D_CL_V2_V2, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x2, 0x2 }, // 3504
  { IMAGE_SAMPLE_D_CL_V2_V3, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x2, 0x3 }, // 3505
  { IMAGE_SAMPLE_D_CL_V2_V4, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x2, 0x4 }, // 3506
  { IMAGE_SAMPLE_D_CL_V2_V8, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x2, 0x8 }, // 3507
  { IMAGE_SAMPLE_D_CL_V2_V16, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x2, 0x10 }, // 3508
  { IMAGE_SAMPLE_D_CL_V3_V2, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x3, 0x2 }, // 3509
  { IMAGE_SAMPLE_D_CL_V3_V3, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x3, 0x3 }, // 3510
  { IMAGE_SAMPLE_D_CL_V3_V4, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x3, 0x4 }, // 3511
  { IMAGE_SAMPLE_D_CL_V3_V8, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x3, 0x8 }, // 3512
  { IMAGE_SAMPLE_D_CL_V3_V16, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x3, 0x10 }, // 3513
  { IMAGE_SAMPLE_D_CL_V4_V2, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x4, 0x2 }, // 3514
  { IMAGE_SAMPLE_D_CL_V4_V3, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x4, 0x3 }, // 3515
  { IMAGE_SAMPLE_D_CL_V4_V4, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x4, 0x4 }, // 3516
  { IMAGE_SAMPLE_D_CL_V4_V8, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x4, 0x8 }, // 3517
  { IMAGE_SAMPLE_D_CL_V4_V16, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x4, 0x10 }, // 3518
  { IMAGE_SAMPLE_D_CL_V5_V2, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x5, 0x2 }, // 3519
  { IMAGE_SAMPLE_D_CL_V5_V3, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x5, 0x3 }, // 3520
  { IMAGE_SAMPLE_D_CL_V5_V4, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x5, 0x4 }, // 3521
  { IMAGE_SAMPLE_D_CL_V5_V8, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x5, 0x8 }, // 3522
  { IMAGE_SAMPLE_D_CL_V5_V16, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x5, 0x10 }, // 3523
  { IMAGE_SAMPLE_D_CL_O_V1_V3_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10Default, 0x1, 0x3 }, // 3524
  { IMAGE_SAMPLE_D_CL_O_V1_V4_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10Default, 0x1, 0x4 }, // 3525
  { IMAGE_SAMPLE_D_CL_O_V1_V8_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10Default, 0x1, 0x8 }, // 3526
  { IMAGE_SAMPLE_D_CL_O_V1_V16_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10Default, 0x1, 0x10 }, // 3527
  { IMAGE_SAMPLE_D_CL_O_V2_V3_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 3528
  { IMAGE_SAMPLE_D_CL_O_V2_V4_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 3529
  { IMAGE_SAMPLE_D_CL_O_V2_V8_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 3530
  { IMAGE_SAMPLE_D_CL_O_V2_V16_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10Default, 0x2, 0x10 }, // 3531
  { IMAGE_SAMPLE_D_CL_O_V3_V3_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10Default, 0x3, 0x3 }, // 3532
  { IMAGE_SAMPLE_D_CL_O_V3_V4_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10Default, 0x3, 0x4 }, // 3533
  { IMAGE_SAMPLE_D_CL_O_V3_V8_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10Default, 0x3, 0x8 }, // 3534
  { IMAGE_SAMPLE_D_CL_O_V3_V16_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10Default, 0x3, 0x10 }, // 3535
  { IMAGE_SAMPLE_D_CL_O_V4_V3_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 3536
  { IMAGE_SAMPLE_D_CL_O_V4_V4_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 3537
  { IMAGE_SAMPLE_D_CL_O_V4_V8_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 3538
  { IMAGE_SAMPLE_D_CL_O_V4_V16_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10Default, 0x4, 0x10 }, // 3539
  { IMAGE_SAMPLE_D_CL_O_V5_V3_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 3540
  { IMAGE_SAMPLE_D_CL_O_V5_V4_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 3541
  { IMAGE_SAMPLE_D_CL_O_V5_V8_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 3542
  { IMAGE_SAMPLE_D_CL_O_V5_V16_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10Default, 0x5, 0x10 }, // 3543
  { IMAGE_SAMPLE_D_CL_O_V1_V3_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x1, 0x3 }, // 3544
  { IMAGE_SAMPLE_D_CL_O_V1_V4_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x1, 0x4 }, // 3545
  { IMAGE_SAMPLE_D_CL_O_V1_V5_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x1, 0x5 }, // 3546
  { IMAGE_SAMPLE_D_CL_O_V1_V6_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x1, 0x6 }, // 3547
  { IMAGE_SAMPLE_D_CL_O_V1_V8_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x1, 0x8 }, // 3548
  { IMAGE_SAMPLE_D_CL_O_V1_V9_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x1, 0x9 }, // 3549
  { IMAGE_SAMPLE_D_CL_O_V1_V11_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x1, 0xB }, // 3550
  { IMAGE_SAMPLE_D_CL_O_V2_V3_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 3551
  { IMAGE_SAMPLE_D_CL_O_V2_V4_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 3552
  { IMAGE_SAMPLE_D_CL_O_V2_V5_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 3553
  { IMAGE_SAMPLE_D_CL_O_V2_V6_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x2, 0x6 }, // 3554
  { IMAGE_SAMPLE_D_CL_O_V2_V8_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x2, 0x8 }, // 3555
  { IMAGE_SAMPLE_D_CL_O_V2_V9_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x2, 0x9 }, // 3556
  { IMAGE_SAMPLE_D_CL_O_V2_V11_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x2, 0xB }, // 3557
  { IMAGE_SAMPLE_D_CL_O_V3_V3_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x3, 0x3 }, // 3558
  { IMAGE_SAMPLE_D_CL_O_V3_V4_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x3, 0x4 }, // 3559
  { IMAGE_SAMPLE_D_CL_O_V3_V5_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x3, 0x5 }, // 3560
  { IMAGE_SAMPLE_D_CL_O_V3_V6_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x3, 0x6 }, // 3561
  { IMAGE_SAMPLE_D_CL_O_V3_V8_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x3, 0x8 }, // 3562
  { IMAGE_SAMPLE_D_CL_O_V3_V9_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x3, 0x9 }, // 3563
  { IMAGE_SAMPLE_D_CL_O_V3_V11_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x3, 0xB }, // 3564
  { IMAGE_SAMPLE_D_CL_O_V4_V3_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 3565
  { IMAGE_SAMPLE_D_CL_O_V4_V4_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 3566
  { IMAGE_SAMPLE_D_CL_O_V4_V5_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 3567
  { IMAGE_SAMPLE_D_CL_O_V4_V6_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x4, 0x6 }, // 3568
  { IMAGE_SAMPLE_D_CL_O_V4_V8_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x4, 0x8 }, // 3569
  { IMAGE_SAMPLE_D_CL_O_V4_V9_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x4, 0x9 }, // 3570
  { IMAGE_SAMPLE_D_CL_O_V4_V11_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x4, 0xB }, // 3571
  { IMAGE_SAMPLE_D_CL_O_V5_V3_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 3572
  { IMAGE_SAMPLE_D_CL_O_V5_V4_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 3573
  { IMAGE_SAMPLE_D_CL_O_V5_V5_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 3574
  { IMAGE_SAMPLE_D_CL_O_V5_V6_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x5, 0x6 }, // 3575
  { IMAGE_SAMPLE_D_CL_O_V5_V8_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x5, 0x8 }, // 3576
  { IMAGE_SAMPLE_D_CL_O_V5_V9_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x5, 0x9 }, // 3577
  { IMAGE_SAMPLE_D_CL_O_V5_V11_nsa_gfx10, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx10NSA, 0x5, 0xB }, // 3578
  { IMAGE_SAMPLE_D_CL_O_V1_V3, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x1, 0x3 }, // 3579
  { IMAGE_SAMPLE_D_CL_O_V1_V4, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x1, 0x4 }, // 3580
  { IMAGE_SAMPLE_D_CL_O_V1_V8, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x1, 0x8 }, // 3581
  { IMAGE_SAMPLE_D_CL_O_V1_V16, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x1, 0x10 }, // 3582
  { IMAGE_SAMPLE_D_CL_O_V2_V3, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x2, 0x3 }, // 3583
  { IMAGE_SAMPLE_D_CL_O_V2_V4, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 3584
  { IMAGE_SAMPLE_D_CL_O_V2_V8, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 3585
  { IMAGE_SAMPLE_D_CL_O_V2_V16, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x2, 0x10 }, // 3586
  { IMAGE_SAMPLE_D_CL_O_V3_V3, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x3, 0x3 }, // 3587
  { IMAGE_SAMPLE_D_CL_O_V3_V4, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x3, 0x4 }, // 3588
  { IMAGE_SAMPLE_D_CL_O_V3_V8, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x3, 0x8 }, // 3589
  { IMAGE_SAMPLE_D_CL_O_V3_V16, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x3, 0x10 }, // 3590
  { IMAGE_SAMPLE_D_CL_O_V4_V3, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x4, 0x3 }, // 3591
  { IMAGE_SAMPLE_D_CL_O_V4_V4, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 3592
  { IMAGE_SAMPLE_D_CL_O_V4_V8, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 3593
  { IMAGE_SAMPLE_D_CL_O_V4_V16, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x4, 0x10 }, // 3594
  { IMAGE_SAMPLE_D_CL_O_V5_V3, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x5, 0x3 }, // 3595
  { IMAGE_SAMPLE_D_CL_O_V5_V4, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x5, 0x4 }, // 3596
  { IMAGE_SAMPLE_D_CL_O_V5_V8, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x5, 0x8 }, // 3597
  { IMAGE_SAMPLE_D_CL_O_V5_V16, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x5, 0x10 }, // 3598
  { IMAGE_SAMPLE_D_O_V1_V3_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10Default, 0x1, 0x3 }, // 3599
  { IMAGE_SAMPLE_D_O_V1_V4_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10Default, 0x1, 0x4 }, // 3600
  { IMAGE_SAMPLE_D_O_V1_V8_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10Default, 0x1, 0x8 }, // 3601
  { IMAGE_SAMPLE_D_O_V1_V16_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10Default, 0x1, 0x10 }, // 3602
  { IMAGE_SAMPLE_D_O_V2_V3_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 3603
  { IMAGE_SAMPLE_D_O_V2_V4_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 3604
  { IMAGE_SAMPLE_D_O_V2_V8_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 3605
  { IMAGE_SAMPLE_D_O_V2_V16_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10Default, 0x2, 0x10 }, // 3606
  { IMAGE_SAMPLE_D_O_V3_V3_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10Default, 0x3, 0x3 }, // 3607
  { IMAGE_SAMPLE_D_O_V3_V4_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10Default, 0x3, 0x4 }, // 3608
  { IMAGE_SAMPLE_D_O_V3_V8_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10Default, 0x3, 0x8 }, // 3609
  { IMAGE_SAMPLE_D_O_V3_V16_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10Default, 0x3, 0x10 }, // 3610
  { IMAGE_SAMPLE_D_O_V4_V3_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 3611
  { IMAGE_SAMPLE_D_O_V4_V4_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 3612
  { IMAGE_SAMPLE_D_O_V4_V8_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 3613
  { IMAGE_SAMPLE_D_O_V4_V16_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10Default, 0x4, 0x10 }, // 3614
  { IMAGE_SAMPLE_D_O_V5_V3_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 3615
  { IMAGE_SAMPLE_D_O_V5_V4_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 3616
  { IMAGE_SAMPLE_D_O_V5_V8_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 3617
  { IMAGE_SAMPLE_D_O_V5_V16_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10Default, 0x5, 0x10 }, // 3618
  { IMAGE_SAMPLE_D_O_V1_V3_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x1, 0x3 }, // 3619
  { IMAGE_SAMPLE_D_O_V1_V4_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x1, 0x4 }, // 3620
  { IMAGE_SAMPLE_D_O_V1_V5_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x1, 0x5 }, // 3621
  { IMAGE_SAMPLE_D_O_V1_V6_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x1, 0x6 }, // 3622
  { IMAGE_SAMPLE_D_O_V1_V7_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x1, 0x7 }, // 3623
  { IMAGE_SAMPLE_D_O_V1_V8_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x1, 0x8 }, // 3624
  { IMAGE_SAMPLE_D_O_V1_V10_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x1, 0xA }, // 3625
  { IMAGE_SAMPLE_D_O_V2_V3_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 3626
  { IMAGE_SAMPLE_D_O_V2_V4_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 3627
  { IMAGE_SAMPLE_D_O_V2_V5_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 3628
  { IMAGE_SAMPLE_D_O_V2_V6_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x2, 0x6 }, // 3629
  { IMAGE_SAMPLE_D_O_V2_V7_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x2, 0x7 }, // 3630
  { IMAGE_SAMPLE_D_O_V2_V8_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x2, 0x8 }, // 3631
  { IMAGE_SAMPLE_D_O_V2_V10_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x2, 0xA }, // 3632
  { IMAGE_SAMPLE_D_O_V3_V3_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x3, 0x3 }, // 3633
  { IMAGE_SAMPLE_D_O_V3_V4_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x3, 0x4 }, // 3634
  { IMAGE_SAMPLE_D_O_V3_V5_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x3, 0x5 }, // 3635
  { IMAGE_SAMPLE_D_O_V3_V6_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x3, 0x6 }, // 3636
  { IMAGE_SAMPLE_D_O_V3_V7_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x3, 0x7 }, // 3637
  { IMAGE_SAMPLE_D_O_V3_V8_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x3, 0x8 }, // 3638
  { IMAGE_SAMPLE_D_O_V3_V10_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x3, 0xA }, // 3639
  { IMAGE_SAMPLE_D_O_V4_V3_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 3640
  { IMAGE_SAMPLE_D_O_V4_V4_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 3641
  { IMAGE_SAMPLE_D_O_V4_V5_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 3642
  { IMAGE_SAMPLE_D_O_V4_V6_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x4, 0x6 }, // 3643
  { IMAGE_SAMPLE_D_O_V4_V7_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x4, 0x7 }, // 3644
  { IMAGE_SAMPLE_D_O_V4_V8_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x4, 0x8 }, // 3645
  { IMAGE_SAMPLE_D_O_V4_V10_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x4, 0xA }, // 3646
  { IMAGE_SAMPLE_D_O_V5_V3_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 3647
  { IMAGE_SAMPLE_D_O_V5_V4_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 3648
  { IMAGE_SAMPLE_D_O_V5_V5_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 3649
  { IMAGE_SAMPLE_D_O_V5_V6_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x5, 0x6 }, // 3650
  { IMAGE_SAMPLE_D_O_V5_V7_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x5, 0x7 }, // 3651
  { IMAGE_SAMPLE_D_O_V5_V8_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x5, 0x8 }, // 3652
  { IMAGE_SAMPLE_D_O_V5_V10_nsa_gfx10, IMAGE_SAMPLE_D_O, MIMGEncGfx10NSA, 0x5, 0xA }, // 3653
  { IMAGE_SAMPLE_D_O_V1_V3, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x1, 0x3 }, // 3654
  { IMAGE_SAMPLE_D_O_V1_V4, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x1, 0x4 }, // 3655
  { IMAGE_SAMPLE_D_O_V1_V8, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x1, 0x8 }, // 3656
  { IMAGE_SAMPLE_D_O_V1_V16, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x1, 0x10 }, // 3657
  { IMAGE_SAMPLE_D_O_V2_V3, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x2, 0x3 }, // 3658
  { IMAGE_SAMPLE_D_O_V2_V4, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x2, 0x4 }, // 3659
  { IMAGE_SAMPLE_D_O_V2_V8, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x2, 0x8 }, // 3660
  { IMAGE_SAMPLE_D_O_V2_V16, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x2, 0x10 }, // 3661
  { IMAGE_SAMPLE_D_O_V3_V3, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x3, 0x3 }, // 3662
  { IMAGE_SAMPLE_D_O_V3_V4, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x3, 0x4 }, // 3663
  { IMAGE_SAMPLE_D_O_V3_V8, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x3, 0x8 }, // 3664
  { IMAGE_SAMPLE_D_O_V3_V16, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x3, 0x10 }, // 3665
  { IMAGE_SAMPLE_D_O_V4_V3, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x4, 0x3 }, // 3666
  { IMAGE_SAMPLE_D_O_V4_V4, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x4, 0x4 }, // 3667
  { IMAGE_SAMPLE_D_O_V4_V8, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x4, 0x8 }, // 3668
  { IMAGE_SAMPLE_D_O_V4_V16, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x4, 0x10 }, // 3669
  { IMAGE_SAMPLE_D_O_V5_V3, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x5, 0x3 }, // 3670
  { IMAGE_SAMPLE_D_O_V5_V4, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x5, 0x4 }, // 3671
  { IMAGE_SAMPLE_D_O_V5_V8, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x5, 0x8 }, // 3672
  { IMAGE_SAMPLE_D_O_V5_V16, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x5, 0x10 }, // 3673
  { IMAGE_SAMPLE_L_V1_V1_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10Default, 0x1, 0x1 }, // 3674
  { IMAGE_SAMPLE_L_V1_V2_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10Default, 0x1, 0x2 }, // 3675
  { IMAGE_SAMPLE_L_V1_V3_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10Default, 0x1, 0x3 }, // 3676
  { IMAGE_SAMPLE_L_V1_V4_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10Default, 0x1, 0x4 }, // 3677
  { IMAGE_SAMPLE_L_V2_V1_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10Default, 0x2, 0x1 }, // 3678
  { IMAGE_SAMPLE_L_V2_V2_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10Default, 0x2, 0x2 }, // 3679
  { IMAGE_SAMPLE_L_V2_V3_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10Default, 0x2, 0x3 }, // 3680
  { IMAGE_SAMPLE_L_V2_V4_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10Default, 0x2, 0x4 }, // 3681
  { IMAGE_SAMPLE_L_V3_V1_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10Default, 0x3, 0x1 }, // 3682
  { IMAGE_SAMPLE_L_V3_V2_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10Default, 0x3, 0x2 }, // 3683
  { IMAGE_SAMPLE_L_V3_V3_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10Default, 0x3, 0x3 }, // 3684
  { IMAGE_SAMPLE_L_V3_V4_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10Default, 0x3, 0x4 }, // 3685
  { IMAGE_SAMPLE_L_V4_V1_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10Default, 0x4, 0x1 }, // 3686
  { IMAGE_SAMPLE_L_V4_V2_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10Default, 0x4, 0x2 }, // 3687
  { IMAGE_SAMPLE_L_V4_V3_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10Default, 0x4, 0x3 }, // 3688
  { IMAGE_SAMPLE_L_V4_V4_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10Default, 0x4, 0x4 }, // 3689
  { IMAGE_SAMPLE_L_V5_V1_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10Default, 0x5, 0x1 }, // 3690
  { IMAGE_SAMPLE_L_V5_V2_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10Default, 0x5, 0x2 }, // 3691
  { IMAGE_SAMPLE_L_V5_V3_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10Default, 0x5, 0x3 }, // 3692
  { IMAGE_SAMPLE_L_V5_V4_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10Default, 0x5, 0x4 }, // 3693
  { IMAGE_SAMPLE_L_V1_V2_nsa_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10NSA, 0x1, 0x2 }, // 3694
  { IMAGE_SAMPLE_L_V1_V3_nsa_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10NSA, 0x1, 0x3 }, // 3695
  { IMAGE_SAMPLE_L_V1_V4_nsa_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10NSA, 0x1, 0x4 }, // 3696
  { IMAGE_SAMPLE_L_V2_V2_nsa_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10NSA, 0x2, 0x2 }, // 3697
  { IMAGE_SAMPLE_L_V2_V3_nsa_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10NSA, 0x2, 0x3 }, // 3698
  { IMAGE_SAMPLE_L_V2_V4_nsa_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10NSA, 0x2, 0x4 }, // 3699
  { IMAGE_SAMPLE_L_V3_V2_nsa_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10NSA, 0x3, 0x2 }, // 3700
  { IMAGE_SAMPLE_L_V3_V3_nsa_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10NSA, 0x3, 0x3 }, // 3701
  { IMAGE_SAMPLE_L_V3_V4_nsa_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10NSA, 0x3, 0x4 }, // 3702
  { IMAGE_SAMPLE_L_V4_V2_nsa_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10NSA, 0x4, 0x2 }, // 3703
  { IMAGE_SAMPLE_L_V4_V3_nsa_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10NSA, 0x4, 0x3 }, // 3704
  { IMAGE_SAMPLE_L_V4_V4_nsa_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10NSA, 0x4, 0x4 }, // 3705
  { IMAGE_SAMPLE_L_V5_V2_nsa_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10NSA, 0x5, 0x2 }, // 3706
  { IMAGE_SAMPLE_L_V5_V3_nsa_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10NSA, 0x5, 0x3 }, // 3707
  { IMAGE_SAMPLE_L_V5_V4_nsa_gfx10, IMAGE_SAMPLE_L, MIMGEncGfx10NSA, 0x5, 0x4 }, // 3708
  { IMAGE_SAMPLE_L_V1_V1, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x1, 0x1 }, // 3709
  { IMAGE_SAMPLE_L_V1_V2, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x1, 0x2 }, // 3710
  { IMAGE_SAMPLE_L_V1_V3, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x1, 0x3 }, // 3711
  { IMAGE_SAMPLE_L_V1_V4, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x1, 0x4 }, // 3712
  { IMAGE_SAMPLE_L_V2_V1, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x2, 0x1 }, // 3713
  { IMAGE_SAMPLE_L_V2_V2, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x2, 0x2 }, // 3714
  { IMAGE_SAMPLE_L_V2_V3, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x2, 0x3 }, // 3715
  { IMAGE_SAMPLE_L_V2_V4, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x2, 0x4 }, // 3716
  { IMAGE_SAMPLE_L_V3_V1, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x3, 0x1 }, // 3717
  { IMAGE_SAMPLE_L_V3_V2, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x3, 0x2 }, // 3718
  { IMAGE_SAMPLE_L_V3_V3, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x3, 0x3 }, // 3719
  { IMAGE_SAMPLE_L_V3_V4, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x3, 0x4 }, // 3720
  { IMAGE_SAMPLE_L_V4_V1, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x4, 0x1 }, // 3721
  { IMAGE_SAMPLE_L_V4_V2, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x4, 0x2 }, // 3722
  { IMAGE_SAMPLE_L_V4_V3, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x4, 0x3 }, // 3723
  { IMAGE_SAMPLE_L_V4_V4, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x4, 0x4 }, // 3724
  { IMAGE_SAMPLE_L_V5_V1, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x5, 0x1 }, // 3725
  { IMAGE_SAMPLE_L_V5_V2, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x5, 0x2 }, // 3726
  { IMAGE_SAMPLE_L_V5_V3, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x5, 0x3 }, // 3727
  { IMAGE_SAMPLE_L_V5_V4, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x5, 0x4 }, // 3728
  { IMAGE_SAMPLE_LZ_V1_V1_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10Default, 0x1, 0x1 }, // 3729
  { IMAGE_SAMPLE_LZ_V1_V2_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10Default, 0x1, 0x2 }, // 3730
  { IMAGE_SAMPLE_LZ_V1_V3_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10Default, 0x1, 0x3 }, // 3731
  { IMAGE_SAMPLE_LZ_V1_V4_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10Default, 0x1, 0x4 }, // 3732
  { IMAGE_SAMPLE_LZ_V2_V1_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10Default, 0x2, 0x1 }, // 3733
  { IMAGE_SAMPLE_LZ_V2_V2_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10Default, 0x2, 0x2 }, // 3734
  { IMAGE_SAMPLE_LZ_V2_V3_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10Default, 0x2, 0x3 }, // 3735
  { IMAGE_SAMPLE_LZ_V2_V4_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10Default, 0x2, 0x4 }, // 3736
  { IMAGE_SAMPLE_LZ_V3_V1_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10Default, 0x3, 0x1 }, // 3737
  { IMAGE_SAMPLE_LZ_V3_V2_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10Default, 0x3, 0x2 }, // 3738
  { IMAGE_SAMPLE_LZ_V3_V3_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10Default, 0x3, 0x3 }, // 3739
  { IMAGE_SAMPLE_LZ_V3_V4_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10Default, 0x3, 0x4 }, // 3740
  { IMAGE_SAMPLE_LZ_V4_V1_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10Default, 0x4, 0x1 }, // 3741
  { IMAGE_SAMPLE_LZ_V4_V2_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10Default, 0x4, 0x2 }, // 3742
  { IMAGE_SAMPLE_LZ_V4_V3_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10Default, 0x4, 0x3 }, // 3743
  { IMAGE_SAMPLE_LZ_V4_V4_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10Default, 0x4, 0x4 }, // 3744
  { IMAGE_SAMPLE_LZ_V5_V1_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10Default, 0x5, 0x1 }, // 3745
  { IMAGE_SAMPLE_LZ_V5_V2_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10Default, 0x5, 0x2 }, // 3746
  { IMAGE_SAMPLE_LZ_V5_V3_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10Default, 0x5, 0x3 }, // 3747
  { IMAGE_SAMPLE_LZ_V5_V4_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10Default, 0x5, 0x4 }, // 3748
  { IMAGE_SAMPLE_LZ_V1_V2_nsa_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10NSA, 0x1, 0x2 }, // 3749
  { IMAGE_SAMPLE_LZ_V1_V3_nsa_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10NSA, 0x1, 0x3 }, // 3750
  { IMAGE_SAMPLE_LZ_V2_V2_nsa_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10NSA, 0x2, 0x2 }, // 3751
  { IMAGE_SAMPLE_LZ_V2_V3_nsa_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10NSA, 0x2, 0x3 }, // 3752
  { IMAGE_SAMPLE_LZ_V3_V2_nsa_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10NSA, 0x3, 0x2 }, // 3753
  { IMAGE_SAMPLE_LZ_V3_V3_nsa_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10NSA, 0x3, 0x3 }, // 3754
  { IMAGE_SAMPLE_LZ_V4_V2_nsa_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10NSA, 0x4, 0x2 }, // 3755
  { IMAGE_SAMPLE_LZ_V4_V3_nsa_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10NSA, 0x4, 0x3 }, // 3756
  { IMAGE_SAMPLE_LZ_V5_V2_nsa_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10NSA, 0x5, 0x2 }, // 3757
  { IMAGE_SAMPLE_LZ_V5_V3_nsa_gfx10, IMAGE_SAMPLE_LZ, MIMGEncGfx10NSA, 0x5, 0x3 }, // 3758
  { IMAGE_SAMPLE_LZ_V1_V1, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x1, 0x1 }, // 3759
  { IMAGE_SAMPLE_LZ_V1_V2, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x1, 0x2 }, // 3760
  { IMAGE_SAMPLE_LZ_V1_V3, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x1, 0x3 }, // 3761
  { IMAGE_SAMPLE_LZ_V1_V4, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x1, 0x4 }, // 3762
  { IMAGE_SAMPLE_LZ_V2_V1, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x2, 0x1 }, // 3763
  { IMAGE_SAMPLE_LZ_V2_V2, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x2, 0x2 }, // 3764
  { IMAGE_SAMPLE_LZ_V2_V3, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x2, 0x3 }, // 3765
  { IMAGE_SAMPLE_LZ_V2_V4, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x2, 0x4 }, // 3766
  { IMAGE_SAMPLE_LZ_V3_V1, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x3, 0x1 }, // 3767
  { IMAGE_SAMPLE_LZ_V3_V2, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x3, 0x2 }, // 3768
  { IMAGE_SAMPLE_LZ_V3_V3, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x3, 0x3 }, // 3769
  { IMAGE_SAMPLE_LZ_V3_V4, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x3, 0x4 }, // 3770
  { IMAGE_SAMPLE_LZ_V4_V1, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x4, 0x1 }, // 3771
  { IMAGE_SAMPLE_LZ_V4_V2, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x4, 0x2 }, // 3772
  { IMAGE_SAMPLE_LZ_V4_V3, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x4, 0x3 }, // 3773
  { IMAGE_SAMPLE_LZ_V4_V4, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x4, 0x4 }, // 3774
  { IMAGE_SAMPLE_LZ_V5_V1, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x5, 0x1 }, // 3775
  { IMAGE_SAMPLE_LZ_V5_V2, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x5, 0x2 }, // 3776
  { IMAGE_SAMPLE_LZ_V5_V3, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x5, 0x3 }, // 3777
  { IMAGE_SAMPLE_LZ_V5_V4, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x5, 0x4 }, // 3778
  { IMAGE_SAMPLE_LZ_O_V1_V2_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10Default, 0x1, 0x2 }, // 3779
  { IMAGE_SAMPLE_LZ_O_V1_V3_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10Default, 0x1, 0x3 }, // 3780
  { IMAGE_SAMPLE_LZ_O_V1_V4_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10Default, 0x1, 0x4 }, // 3781
  { IMAGE_SAMPLE_LZ_O_V2_V2_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10Default, 0x2, 0x2 }, // 3782
  { IMAGE_SAMPLE_LZ_O_V2_V3_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 3783
  { IMAGE_SAMPLE_LZ_O_V2_V4_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 3784
  { IMAGE_SAMPLE_LZ_O_V3_V2_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10Default, 0x3, 0x2 }, // 3785
  { IMAGE_SAMPLE_LZ_O_V3_V3_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10Default, 0x3, 0x3 }, // 3786
  { IMAGE_SAMPLE_LZ_O_V3_V4_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10Default, 0x3, 0x4 }, // 3787
  { IMAGE_SAMPLE_LZ_O_V4_V2_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10Default, 0x4, 0x2 }, // 3788
  { IMAGE_SAMPLE_LZ_O_V4_V3_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 3789
  { IMAGE_SAMPLE_LZ_O_V4_V4_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 3790
  { IMAGE_SAMPLE_LZ_O_V5_V2_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10Default, 0x5, 0x2 }, // 3791
  { IMAGE_SAMPLE_LZ_O_V5_V3_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 3792
  { IMAGE_SAMPLE_LZ_O_V5_V4_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 3793
  { IMAGE_SAMPLE_LZ_O_V1_V2_nsa_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10NSA, 0x1, 0x2 }, // 3794
  { IMAGE_SAMPLE_LZ_O_V1_V3_nsa_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10NSA, 0x1, 0x3 }, // 3795
  { IMAGE_SAMPLE_LZ_O_V1_V4_nsa_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10NSA, 0x1, 0x4 }, // 3796
  { IMAGE_SAMPLE_LZ_O_V2_V2_nsa_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10NSA, 0x2, 0x2 }, // 3797
  { IMAGE_SAMPLE_LZ_O_V2_V3_nsa_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 3798
  { IMAGE_SAMPLE_LZ_O_V2_V4_nsa_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 3799
  { IMAGE_SAMPLE_LZ_O_V3_V2_nsa_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10NSA, 0x3, 0x2 }, // 3800
  { IMAGE_SAMPLE_LZ_O_V3_V3_nsa_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10NSA, 0x3, 0x3 }, // 3801
  { IMAGE_SAMPLE_LZ_O_V3_V4_nsa_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10NSA, 0x3, 0x4 }, // 3802
  { IMAGE_SAMPLE_LZ_O_V4_V2_nsa_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10NSA, 0x4, 0x2 }, // 3803
  { IMAGE_SAMPLE_LZ_O_V4_V3_nsa_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 3804
  { IMAGE_SAMPLE_LZ_O_V4_V4_nsa_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 3805
  { IMAGE_SAMPLE_LZ_O_V5_V2_nsa_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10NSA, 0x5, 0x2 }, // 3806
  { IMAGE_SAMPLE_LZ_O_V5_V3_nsa_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 3807
  { IMAGE_SAMPLE_LZ_O_V5_V4_nsa_gfx10, IMAGE_SAMPLE_LZ_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 3808
  { IMAGE_SAMPLE_LZ_O_V1_V2, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x1, 0x2 }, // 3809
  { IMAGE_SAMPLE_LZ_O_V1_V3, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x1, 0x3 }, // 3810
  { IMAGE_SAMPLE_LZ_O_V1_V4, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x1, 0x4 }, // 3811
  { IMAGE_SAMPLE_LZ_O_V2_V2, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x2, 0x2 }, // 3812
  { IMAGE_SAMPLE_LZ_O_V2_V3, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x2, 0x3 }, // 3813
  { IMAGE_SAMPLE_LZ_O_V2_V4, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x2, 0x4 }, // 3814
  { IMAGE_SAMPLE_LZ_O_V3_V2, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x3, 0x2 }, // 3815
  { IMAGE_SAMPLE_LZ_O_V3_V3, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x3, 0x3 }, // 3816
  { IMAGE_SAMPLE_LZ_O_V3_V4, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x3, 0x4 }, // 3817
  { IMAGE_SAMPLE_LZ_O_V4_V2, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x4, 0x2 }, // 3818
  { IMAGE_SAMPLE_LZ_O_V4_V3, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x4, 0x3 }, // 3819
  { IMAGE_SAMPLE_LZ_O_V4_V4, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x4, 0x4 }, // 3820
  { IMAGE_SAMPLE_LZ_O_V5_V2, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x5, 0x2 }, // 3821
  { IMAGE_SAMPLE_LZ_O_V5_V3, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x5, 0x3 }, // 3822
  { IMAGE_SAMPLE_LZ_O_V5_V4, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x5, 0x4 }, // 3823
  { IMAGE_SAMPLE_L_O_V1_V2_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10Default, 0x1, 0x2 }, // 3824
  { IMAGE_SAMPLE_L_O_V1_V3_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10Default, 0x1, 0x3 }, // 3825
  { IMAGE_SAMPLE_L_O_V1_V4_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10Default, 0x1, 0x4 }, // 3826
  { IMAGE_SAMPLE_L_O_V1_V8_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10Default, 0x1, 0x8 }, // 3827
  { IMAGE_SAMPLE_L_O_V2_V2_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10Default, 0x2, 0x2 }, // 3828
  { IMAGE_SAMPLE_L_O_V2_V3_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 3829
  { IMAGE_SAMPLE_L_O_V2_V4_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 3830
  { IMAGE_SAMPLE_L_O_V2_V8_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10Default, 0x2, 0x8 }, // 3831
  { IMAGE_SAMPLE_L_O_V3_V2_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10Default, 0x3, 0x2 }, // 3832
  { IMAGE_SAMPLE_L_O_V3_V3_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10Default, 0x3, 0x3 }, // 3833
  { IMAGE_SAMPLE_L_O_V3_V4_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10Default, 0x3, 0x4 }, // 3834
  { IMAGE_SAMPLE_L_O_V3_V8_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10Default, 0x3, 0x8 }, // 3835
  { IMAGE_SAMPLE_L_O_V4_V2_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10Default, 0x4, 0x2 }, // 3836
  { IMAGE_SAMPLE_L_O_V4_V3_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 3837
  { IMAGE_SAMPLE_L_O_V4_V4_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 3838
  { IMAGE_SAMPLE_L_O_V4_V8_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10Default, 0x4, 0x8 }, // 3839
  { IMAGE_SAMPLE_L_O_V5_V2_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10Default, 0x5, 0x2 }, // 3840
  { IMAGE_SAMPLE_L_O_V5_V3_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 3841
  { IMAGE_SAMPLE_L_O_V5_V4_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 3842
  { IMAGE_SAMPLE_L_O_V5_V8_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10Default, 0x5, 0x8 }, // 3843
  { IMAGE_SAMPLE_L_O_V1_V2_nsa_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10NSA, 0x1, 0x2 }, // 3844
  { IMAGE_SAMPLE_L_O_V1_V3_nsa_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10NSA, 0x1, 0x3 }, // 3845
  { IMAGE_SAMPLE_L_O_V1_V4_nsa_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10NSA, 0x1, 0x4 }, // 3846
  { IMAGE_SAMPLE_L_O_V1_V5_nsa_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10NSA, 0x1, 0x5 }, // 3847
  { IMAGE_SAMPLE_L_O_V2_V2_nsa_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10NSA, 0x2, 0x2 }, // 3848
  { IMAGE_SAMPLE_L_O_V2_V3_nsa_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 3849
  { IMAGE_SAMPLE_L_O_V2_V4_nsa_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 3850
  { IMAGE_SAMPLE_L_O_V2_V5_nsa_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10NSA, 0x2, 0x5 }, // 3851
  { IMAGE_SAMPLE_L_O_V3_V2_nsa_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10NSA, 0x3, 0x2 }, // 3852
  { IMAGE_SAMPLE_L_O_V3_V3_nsa_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10NSA, 0x3, 0x3 }, // 3853
  { IMAGE_SAMPLE_L_O_V3_V4_nsa_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10NSA, 0x3, 0x4 }, // 3854
  { IMAGE_SAMPLE_L_O_V3_V5_nsa_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10NSA, 0x3, 0x5 }, // 3855
  { IMAGE_SAMPLE_L_O_V4_V2_nsa_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10NSA, 0x4, 0x2 }, // 3856
  { IMAGE_SAMPLE_L_O_V4_V3_nsa_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 3857
  { IMAGE_SAMPLE_L_O_V4_V4_nsa_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 3858
  { IMAGE_SAMPLE_L_O_V4_V5_nsa_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10NSA, 0x4, 0x5 }, // 3859
  { IMAGE_SAMPLE_L_O_V5_V2_nsa_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10NSA, 0x5, 0x2 }, // 3860
  { IMAGE_SAMPLE_L_O_V5_V3_nsa_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 3861
  { IMAGE_SAMPLE_L_O_V5_V4_nsa_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 3862
  { IMAGE_SAMPLE_L_O_V5_V5_nsa_gfx10, IMAGE_SAMPLE_L_O, MIMGEncGfx10NSA, 0x5, 0x5 }, // 3863
  { IMAGE_SAMPLE_L_O_V1_V2, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x1, 0x2 }, // 3864
  { IMAGE_SAMPLE_L_O_V1_V3, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x1, 0x3 }, // 3865
  { IMAGE_SAMPLE_L_O_V1_V4, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x1, 0x4 }, // 3866
  { IMAGE_SAMPLE_L_O_V1_V8, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x1, 0x8 }, // 3867
  { IMAGE_SAMPLE_L_O_V2_V2, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x2, 0x2 }, // 3868
  { IMAGE_SAMPLE_L_O_V2_V3, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x2, 0x3 }, // 3869
  { IMAGE_SAMPLE_L_O_V2_V4, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x2, 0x4 }, // 3870
  { IMAGE_SAMPLE_L_O_V2_V8, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x2, 0x8 }, // 3871
  { IMAGE_SAMPLE_L_O_V3_V2, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x3, 0x2 }, // 3872
  { IMAGE_SAMPLE_L_O_V3_V3, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x3, 0x3 }, // 3873
  { IMAGE_SAMPLE_L_O_V3_V4, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x3, 0x4 }, // 3874
  { IMAGE_SAMPLE_L_O_V3_V8, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x3, 0x8 }, // 3875
  { IMAGE_SAMPLE_L_O_V4_V2, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x4, 0x2 }, // 3876
  { IMAGE_SAMPLE_L_O_V4_V3, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x4, 0x3 }, // 3877
  { IMAGE_SAMPLE_L_O_V4_V4, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x4, 0x4 }, // 3878
  { IMAGE_SAMPLE_L_O_V4_V8, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x4, 0x8 }, // 3879
  { IMAGE_SAMPLE_L_O_V5_V2, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x5, 0x2 }, // 3880
  { IMAGE_SAMPLE_L_O_V5_V3, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x5, 0x3 }, // 3881
  { IMAGE_SAMPLE_L_O_V5_V4, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x5, 0x4 }, // 3882
  { IMAGE_SAMPLE_L_O_V5_V8, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x5, 0x8 }, // 3883
  { IMAGE_SAMPLE_O_V1_V2_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10Default, 0x1, 0x2 }, // 3884
  { IMAGE_SAMPLE_O_V1_V3_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10Default, 0x1, 0x3 }, // 3885
  { IMAGE_SAMPLE_O_V1_V4_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10Default, 0x1, 0x4 }, // 3886
  { IMAGE_SAMPLE_O_V2_V2_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10Default, 0x2, 0x2 }, // 3887
  { IMAGE_SAMPLE_O_V2_V3_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10Default, 0x2, 0x3 }, // 3888
  { IMAGE_SAMPLE_O_V2_V4_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10Default, 0x2, 0x4 }, // 3889
  { IMAGE_SAMPLE_O_V3_V2_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10Default, 0x3, 0x2 }, // 3890
  { IMAGE_SAMPLE_O_V3_V3_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10Default, 0x3, 0x3 }, // 3891
  { IMAGE_SAMPLE_O_V3_V4_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10Default, 0x3, 0x4 }, // 3892
  { IMAGE_SAMPLE_O_V4_V2_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10Default, 0x4, 0x2 }, // 3893
  { IMAGE_SAMPLE_O_V4_V3_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10Default, 0x4, 0x3 }, // 3894
  { IMAGE_SAMPLE_O_V4_V4_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10Default, 0x4, 0x4 }, // 3895
  { IMAGE_SAMPLE_O_V5_V2_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10Default, 0x5, 0x2 }, // 3896
  { IMAGE_SAMPLE_O_V5_V3_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10Default, 0x5, 0x3 }, // 3897
  { IMAGE_SAMPLE_O_V5_V4_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10Default, 0x5, 0x4 }, // 3898
  { IMAGE_SAMPLE_O_V1_V2_nsa_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10NSA, 0x1, 0x2 }, // 3899
  { IMAGE_SAMPLE_O_V1_V3_nsa_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10NSA, 0x1, 0x3 }, // 3900
  { IMAGE_SAMPLE_O_V1_V4_nsa_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10NSA, 0x1, 0x4 }, // 3901
  { IMAGE_SAMPLE_O_V2_V2_nsa_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10NSA, 0x2, 0x2 }, // 3902
  { IMAGE_SAMPLE_O_V2_V3_nsa_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10NSA, 0x2, 0x3 }, // 3903
  { IMAGE_SAMPLE_O_V2_V4_nsa_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10NSA, 0x2, 0x4 }, // 3904
  { IMAGE_SAMPLE_O_V3_V2_nsa_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10NSA, 0x3, 0x2 }, // 3905
  { IMAGE_SAMPLE_O_V3_V3_nsa_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10NSA, 0x3, 0x3 }, // 3906
  { IMAGE_SAMPLE_O_V3_V4_nsa_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10NSA, 0x3, 0x4 }, // 3907
  { IMAGE_SAMPLE_O_V4_V2_nsa_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10NSA, 0x4, 0x2 }, // 3908
  { IMAGE_SAMPLE_O_V4_V3_nsa_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10NSA, 0x4, 0x3 }, // 3909
  { IMAGE_SAMPLE_O_V4_V4_nsa_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10NSA, 0x4, 0x4 }, // 3910
  { IMAGE_SAMPLE_O_V5_V2_nsa_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10NSA, 0x5, 0x2 }, // 3911
  { IMAGE_SAMPLE_O_V5_V3_nsa_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10NSA, 0x5, 0x3 }, // 3912
  { IMAGE_SAMPLE_O_V5_V4_nsa_gfx10, IMAGE_SAMPLE_O, MIMGEncGfx10NSA, 0x5, 0x4 }, // 3913
  { IMAGE_SAMPLE_O_V1_V2, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x1, 0x2 }, // 3914
  { IMAGE_SAMPLE_O_V1_V3, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x1, 0x3 }, // 3915
  { IMAGE_SAMPLE_O_V1_V4, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x1, 0x4 }, // 3916
  { IMAGE_SAMPLE_O_V2_V2, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x2, 0x2 }, // 3917
  { IMAGE_SAMPLE_O_V2_V3, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x2, 0x3 }, // 3918
  { IMAGE_SAMPLE_O_V2_V4, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x2, 0x4 }, // 3919
  { IMAGE_SAMPLE_O_V3_V2, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x3, 0x2 }, // 3920
  { IMAGE_SAMPLE_O_V3_V3, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x3, 0x3 }, // 3921
  { IMAGE_SAMPLE_O_V3_V4, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x3, 0x4 }, // 3922
  { IMAGE_SAMPLE_O_V4_V2, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x4, 0x2 }, // 3923
  { IMAGE_SAMPLE_O_V4_V3, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x4, 0x3 }, // 3924
  { IMAGE_SAMPLE_O_V4_V4, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x4, 0x4 }, // 3925
  { IMAGE_SAMPLE_O_V5_V2, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x5, 0x2 }, // 3926
  { IMAGE_SAMPLE_O_V5_V3, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x5, 0x3 }, // 3927
  { IMAGE_SAMPLE_O_V5_V4, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x5, 0x4 }, // 3928
  { IMAGE_STORE_V1_V1_gfx10, IMAGE_STORE, MIMGEncGfx10Default, 0x1, 0x1 }, // 3929
  { IMAGE_STORE_V1_V2_gfx10, IMAGE_STORE, MIMGEncGfx10Default, 0x1, 0x2 }, // 3930
  { IMAGE_STORE_V1_V3_gfx10, IMAGE_STORE, MIMGEncGfx10Default, 0x1, 0x3 }, // 3931
  { IMAGE_STORE_V1_V4_gfx10, IMAGE_STORE, MIMGEncGfx10Default, 0x1, 0x4 }, // 3932
  { IMAGE_STORE_V2_V1_gfx10, IMAGE_STORE, MIMGEncGfx10Default, 0x2, 0x1 }, // 3933
  { IMAGE_STORE_V2_V2_gfx10, IMAGE_STORE, MIMGEncGfx10Default, 0x2, 0x2 }, // 3934
  { IMAGE_STORE_V2_V3_gfx10, IMAGE_STORE, MIMGEncGfx10Default, 0x2, 0x3 }, // 3935
  { IMAGE_STORE_V2_V4_gfx10, IMAGE_STORE, MIMGEncGfx10Default, 0x2, 0x4 }, // 3936
  { IMAGE_STORE_V3_V1_gfx10, IMAGE_STORE, MIMGEncGfx10Default, 0x3, 0x1 }, // 3937
  { IMAGE_STORE_V3_V2_gfx10, IMAGE_STORE, MIMGEncGfx10Default, 0x3, 0x2 }, // 3938
  { IMAGE_STORE_V3_V3_gfx10, IMAGE_STORE, MIMGEncGfx10Default, 0x3, 0x3 }, // 3939
  { IMAGE_STORE_V3_V4_gfx10, IMAGE_STORE, MIMGEncGfx10Default, 0x3, 0x4 }, // 3940
  { IMAGE_STORE_V4_V1_gfx10, IMAGE_STORE, MIMGEncGfx10Default, 0x4, 0x1 }, // 3941
  { IMAGE_STORE_V4_V2_gfx10, IMAGE_STORE, MIMGEncGfx10Default, 0x4, 0x2 }, // 3942
  { IMAGE_STORE_V4_V3_gfx10, IMAGE_STORE, MIMGEncGfx10Default, 0x4, 0x3 }, // 3943
  { IMAGE_STORE_V4_V4_gfx10, IMAGE_STORE, MIMGEncGfx10Default, 0x4, 0x4 }, // 3944
  { IMAGE_STORE_V1_V2_nsa_gfx10, IMAGE_STORE, MIMGEncGfx10NSA, 0x1, 0x2 }, // 3945
  { IMAGE_STORE_V1_V3_nsa_gfx10, IMAGE_STORE, MIMGEncGfx10NSA, 0x1, 0x3 }, // 3946
  { IMAGE_STORE_V1_V4_nsa_gfx10, IMAGE_STORE, MIMGEncGfx10NSA, 0x1, 0x4 }, // 3947
  { IMAGE_STORE_V2_V2_nsa_gfx10, IMAGE_STORE, MIMGEncGfx10NSA, 0x2, 0x2 }, // 3948
  { IMAGE_STORE_V2_V3_nsa_gfx10, IMAGE_STORE, MIMGEncGfx10NSA, 0x2, 0x3 }, // 3949
  { IMAGE_STORE_V2_V4_nsa_gfx10, IMAGE_STORE, MIMGEncGfx10NSA, 0x2, 0x4 }, // 3950
  { IMAGE_STORE_V3_V2_nsa_gfx10, IMAGE_STORE, MIMGEncGfx10NSA, 0x3, 0x2 }, // 3951
  { IMAGE_STORE_V3_V3_nsa_gfx10, IMAGE_STORE, MIMGEncGfx10NSA, 0x3, 0x3 }, // 3952
  { IMAGE_STORE_V3_V4_nsa_gfx10, IMAGE_STORE, MIMGEncGfx10NSA, 0x3, 0x4 }, // 3953
  { IMAGE_STORE_V4_V2_nsa_gfx10, IMAGE_STORE, MIMGEncGfx10NSA, 0x4, 0x2 }, // 3954
  { IMAGE_STORE_V4_V3_nsa_gfx10, IMAGE_STORE, MIMGEncGfx10NSA, 0x4, 0x3 }, // 3955
  { IMAGE_STORE_V4_V4_nsa_gfx10, IMAGE_STORE, MIMGEncGfx10NSA, 0x4, 0x4 }, // 3956
  { IMAGE_STORE_V1_V1, IMAGE_STORE, MIMGEncGfx6, 0x1, 0x1 }, // 3957
  { IMAGE_STORE_V1_V2, IMAGE_STORE, MIMGEncGfx6, 0x1, 0x2 }, // 3958
  { IMAGE_STORE_V1_V3, IMAGE_STORE, MIMGEncGfx6, 0x1, 0x3 }, // 3959
  { IMAGE_STORE_V1_V4, IMAGE_STORE, MIMGEncGfx6, 0x1, 0x4 }, // 3960
  { IMAGE_STORE_V2_V1, IMAGE_STORE, MIMGEncGfx6, 0x2, 0x1 }, // 3961
  { IMAGE_STORE_V2_V2, IMAGE_STORE, MIMGEncGfx6, 0x2, 0x2 }, // 3962
  { IMAGE_STORE_V2_V3, IMAGE_STORE, MIMGEncGfx6, 0x2, 0x3 }, // 3963
  { IMAGE_STORE_V2_V4, IMAGE_STORE, MIMGEncGfx6, 0x2, 0x4 }, // 3964
  { IMAGE_STORE_V3_V1, IMAGE_STORE, MIMGEncGfx6, 0x3, 0x1 }, // 3965
  { IMAGE_STORE_V3_V2, IMAGE_STORE, MIMGEncGfx6, 0x3, 0x2 }, // 3966
  { IMAGE_STORE_V3_V3, IMAGE_STORE, MIMGEncGfx6, 0x3, 0x3 }, // 3967
  { IMAGE_STORE_V3_V4, IMAGE_STORE, MIMGEncGfx6, 0x3, 0x4 }, // 3968
  { IMAGE_STORE_V4_V1, IMAGE_STORE, MIMGEncGfx6, 0x4, 0x1 }, // 3969
  { IMAGE_STORE_V4_V2, IMAGE_STORE, MIMGEncGfx6, 0x4, 0x2 }, // 3970
  { IMAGE_STORE_V4_V3, IMAGE_STORE, MIMGEncGfx6, 0x4, 0x3 }, // 3971
  { IMAGE_STORE_V4_V4, IMAGE_STORE, MIMGEncGfx6, 0x4, 0x4 }, // 3972
  { IMAGE_STORE_MIP_V1_V1_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10Default, 0x1, 0x1 }, // 3973
  { IMAGE_STORE_MIP_V1_V2_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10Default, 0x1, 0x2 }, // 3974
  { IMAGE_STORE_MIP_V1_V3_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10Default, 0x1, 0x3 }, // 3975
  { IMAGE_STORE_MIP_V1_V4_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10Default, 0x1, 0x4 }, // 3976
  { IMAGE_STORE_MIP_V2_V1_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10Default, 0x2, 0x1 }, // 3977
  { IMAGE_STORE_MIP_V2_V2_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10Default, 0x2, 0x2 }, // 3978
  { IMAGE_STORE_MIP_V2_V3_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10Default, 0x2, 0x3 }, // 3979
  { IMAGE_STORE_MIP_V2_V4_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10Default, 0x2, 0x4 }, // 3980
  { IMAGE_STORE_MIP_V3_V1_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10Default, 0x3, 0x1 }, // 3981
  { IMAGE_STORE_MIP_V3_V2_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10Default, 0x3, 0x2 }, // 3982
  { IMAGE_STORE_MIP_V3_V3_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10Default, 0x3, 0x3 }, // 3983
  { IMAGE_STORE_MIP_V3_V4_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10Default, 0x3, 0x4 }, // 3984
  { IMAGE_STORE_MIP_V4_V1_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10Default, 0x4, 0x1 }, // 3985
  { IMAGE_STORE_MIP_V4_V2_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10Default, 0x4, 0x2 }, // 3986
  { IMAGE_STORE_MIP_V4_V3_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10Default, 0x4, 0x3 }, // 3987
  { IMAGE_STORE_MIP_V4_V4_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10Default, 0x4, 0x4 }, // 3988
  { IMAGE_STORE_MIP_V1_V2_nsa_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10NSA, 0x1, 0x2 }, // 3989
  { IMAGE_STORE_MIP_V1_V3_nsa_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10NSA, 0x1, 0x3 }, // 3990
  { IMAGE_STORE_MIP_V1_V4_nsa_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10NSA, 0x1, 0x4 }, // 3991
  { IMAGE_STORE_MIP_V2_V2_nsa_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10NSA, 0x2, 0x2 }, // 3992
  { IMAGE_STORE_MIP_V2_V3_nsa_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10NSA, 0x2, 0x3 }, // 3993
  { IMAGE_STORE_MIP_V2_V4_nsa_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10NSA, 0x2, 0x4 }, // 3994
  { IMAGE_STORE_MIP_V3_V2_nsa_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10NSA, 0x3, 0x2 }, // 3995
  { IMAGE_STORE_MIP_V3_V3_nsa_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10NSA, 0x3, 0x3 }, // 3996
  { IMAGE_STORE_MIP_V3_V4_nsa_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10NSA, 0x3, 0x4 }, // 3997
  { IMAGE_STORE_MIP_V4_V2_nsa_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10NSA, 0x4, 0x2 }, // 3998
  { IMAGE_STORE_MIP_V4_V3_nsa_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10NSA, 0x4, 0x3 }, // 3999
  { IMAGE_STORE_MIP_V4_V4_nsa_gfx10, IMAGE_STORE_MIP, MIMGEncGfx10NSA, 0x4, 0x4 }, // 4000
  { IMAGE_STORE_MIP_V1_V1, IMAGE_STORE_MIP, MIMGEncGfx6, 0x1, 0x1 }, // 4001
  { IMAGE_STORE_MIP_V1_V2, IMAGE_STORE_MIP, MIMGEncGfx6, 0x1, 0x2 }, // 4002
  { IMAGE_STORE_MIP_V1_V3, IMAGE_STORE_MIP, MIMGEncGfx6, 0x1, 0x3 }, // 4003
  { IMAGE_STORE_MIP_V1_V4, IMAGE_STORE_MIP, MIMGEncGfx6, 0x1, 0x4 }, // 4004
  { IMAGE_STORE_MIP_V2_V1, IMAGE_STORE_MIP, MIMGEncGfx6, 0x2, 0x1 }, // 4005
  { IMAGE_STORE_MIP_V2_V2, IMAGE_STORE_MIP, MIMGEncGfx6, 0x2, 0x2 }, // 4006
  { IMAGE_STORE_MIP_V2_V3, IMAGE_STORE_MIP, MIMGEncGfx6, 0x2, 0x3 }, // 4007
  { IMAGE_STORE_MIP_V2_V4, IMAGE_STORE_MIP, MIMGEncGfx6, 0x2, 0x4 }, // 4008
  { IMAGE_STORE_MIP_V3_V1, IMAGE_STORE_MIP, MIMGEncGfx6, 0x3, 0x1 }, // 4009
  { IMAGE_STORE_MIP_V3_V2, IMAGE_STORE_MIP, MIMGEncGfx6, 0x3, 0x2 }, // 4010
  { IMAGE_STORE_MIP_V3_V3, IMAGE_STORE_MIP, MIMGEncGfx6, 0x3, 0x3 }, // 4011
  { IMAGE_STORE_MIP_V3_V4, IMAGE_STORE_MIP, MIMGEncGfx6, 0x3, 0x4 }, // 4012
  { IMAGE_STORE_MIP_V4_V1, IMAGE_STORE_MIP, MIMGEncGfx6, 0x4, 0x1 }, // 4013
  { IMAGE_STORE_MIP_V4_V2, IMAGE_STORE_MIP, MIMGEncGfx6, 0x4, 0x2 }, // 4014
  { IMAGE_STORE_MIP_V4_V3, IMAGE_STORE_MIP, MIMGEncGfx6, 0x4, 0x3 }, // 4015
  { IMAGE_STORE_MIP_V4_V4, IMAGE_STORE_MIP, MIMGEncGfx6, 0x4, 0x4 }, // 4016
  { IMAGE_STORE_MIP_PCK_V1_V1_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10Default, 0x1, 0x1 }, // 4017
  { IMAGE_STORE_MIP_PCK_V1_V2_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10Default, 0x1, 0x2 }, // 4018
  { IMAGE_STORE_MIP_PCK_V1_V3_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10Default, 0x1, 0x3 }, // 4019
  { IMAGE_STORE_MIP_PCK_V1_V4_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10Default, 0x1, 0x4 }, // 4020
  { IMAGE_STORE_MIP_PCK_V2_V1_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10Default, 0x2, 0x1 }, // 4021
  { IMAGE_STORE_MIP_PCK_V2_V2_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10Default, 0x2, 0x2 }, // 4022
  { IMAGE_STORE_MIP_PCK_V2_V3_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10Default, 0x2, 0x3 }, // 4023
  { IMAGE_STORE_MIP_PCK_V2_V4_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10Default, 0x2, 0x4 }, // 4024
  { IMAGE_STORE_MIP_PCK_V3_V1_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10Default, 0x3, 0x1 }, // 4025
  { IMAGE_STORE_MIP_PCK_V3_V2_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10Default, 0x3, 0x2 }, // 4026
  { IMAGE_STORE_MIP_PCK_V3_V3_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10Default, 0x3, 0x3 }, // 4027
  { IMAGE_STORE_MIP_PCK_V3_V4_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10Default, 0x3, 0x4 }, // 4028
  { IMAGE_STORE_MIP_PCK_V4_V1_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10Default, 0x4, 0x1 }, // 4029
  { IMAGE_STORE_MIP_PCK_V4_V2_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10Default, 0x4, 0x2 }, // 4030
  { IMAGE_STORE_MIP_PCK_V4_V3_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10Default, 0x4, 0x3 }, // 4031
  { IMAGE_STORE_MIP_PCK_V4_V4_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10Default, 0x4, 0x4 }, // 4032
  { IMAGE_STORE_MIP_PCK_V1_V2_nsa_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10NSA, 0x1, 0x2 }, // 4033
  { IMAGE_STORE_MIP_PCK_V1_V3_nsa_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10NSA, 0x1, 0x3 }, // 4034
  { IMAGE_STORE_MIP_PCK_V1_V4_nsa_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10NSA, 0x1, 0x4 }, // 4035
  { IMAGE_STORE_MIP_PCK_V2_V2_nsa_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10NSA, 0x2, 0x2 }, // 4036
  { IMAGE_STORE_MIP_PCK_V2_V3_nsa_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10NSA, 0x2, 0x3 }, // 4037
  { IMAGE_STORE_MIP_PCK_V2_V4_nsa_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10NSA, 0x2, 0x4 }, // 4038
  { IMAGE_STORE_MIP_PCK_V3_V2_nsa_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10NSA, 0x3, 0x2 }, // 4039
  { IMAGE_STORE_MIP_PCK_V3_V3_nsa_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10NSA, 0x3, 0x3 }, // 4040
  { IMAGE_STORE_MIP_PCK_V3_V4_nsa_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10NSA, 0x3, 0x4 }, // 4041
  { IMAGE_STORE_MIP_PCK_V4_V2_nsa_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10NSA, 0x4, 0x2 }, // 4042
  { IMAGE_STORE_MIP_PCK_V4_V3_nsa_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10NSA, 0x4, 0x3 }, // 4043
  { IMAGE_STORE_MIP_PCK_V4_V4_nsa_gfx10, IMAGE_STORE_MIP_PCK, MIMGEncGfx10NSA, 0x4, 0x4 }, // 4044
  { IMAGE_STORE_MIP_PCK_V1_V1, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x1, 0x1 }, // 4045
  { IMAGE_STORE_MIP_PCK_V1_V2, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x1, 0x2 }, // 4046
  { IMAGE_STORE_MIP_PCK_V1_V3, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x1, 0x3 }, // 4047
  { IMAGE_STORE_MIP_PCK_V1_V4, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x1, 0x4 }, // 4048
  { IMAGE_STORE_MIP_PCK_V2_V1, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x2, 0x1 }, // 4049
  { IMAGE_STORE_MIP_PCK_V2_V2, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x2, 0x2 }, // 4050
  { IMAGE_STORE_MIP_PCK_V2_V3, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x2, 0x3 }, // 4051
  { IMAGE_STORE_MIP_PCK_V2_V4, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x2, 0x4 }, // 4052
  { IMAGE_STORE_MIP_PCK_V3_V1, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x3, 0x1 }, // 4053
  { IMAGE_STORE_MIP_PCK_V3_V2, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x3, 0x2 }, // 4054
  { IMAGE_STORE_MIP_PCK_V3_V3, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x3, 0x3 }, // 4055
  { IMAGE_STORE_MIP_PCK_V3_V4, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x3, 0x4 }, // 4056
  { IMAGE_STORE_MIP_PCK_V4_V1, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x4, 0x1 }, // 4057
  { IMAGE_STORE_MIP_PCK_V4_V2, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x4, 0x2 }, // 4058
  { IMAGE_STORE_MIP_PCK_V4_V3, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x4, 0x3 }, // 4059
  { IMAGE_STORE_MIP_PCK_V4_V4, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x4, 0x4 }, // 4060
  { IMAGE_STORE_PCK_V1_V1_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10Default, 0x1, 0x1 }, // 4061
  { IMAGE_STORE_PCK_V1_V2_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10Default, 0x1, 0x2 }, // 4062
  { IMAGE_STORE_PCK_V1_V3_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10Default, 0x1, 0x3 }, // 4063
  { IMAGE_STORE_PCK_V1_V4_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10Default, 0x1, 0x4 }, // 4064
  { IMAGE_STORE_PCK_V2_V1_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10Default, 0x2, 0x1 }, // 4065
  { IMAGE_STORE_PCK_V2_V2_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10Default, 0x2, 0x2 }, // 4066
  { IMAGE_STORE_PCK_V2_V3_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10Default, 0x2, 0x3 }, // 4067
  { IMAGE_STORE_PCK_V2_V4_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10Default, 0x2, 0x4 }, // 4068
  { IMAGE_STORE_PCK_V3_V1_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10Default, 0x3, 0x1 }, // 4069
  { IMAGE_STORE_PCK_V3_V2_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10Default, 0x3, 0x2 }, // 4070
  { IMAGE_STORE_PCK_V3_V3_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10Default, 0x3, 0x3 }, // 4071
  { IMAGE_STORE_PCK_V3_V4_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10Default, 0x3, 0x4 }, // 4072
  { IMAGE_STORE_PCK_V4_V1_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10Default, 0x4, 0x1 }, // 4073
  { IMAGE_STORE_PCK_V4_V2_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10Default, 0x4, 0x2 }, // 4074
  { IMAGE_STORE_PCK_V4_V3_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10Default, 0x4, 0x3 }, // 4075
  { IMAGE_STORE_PCK_V4_V4_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10Default, 0x4, 0x4 }, // 4076
  { IMAGE_STORE_PCK_V1_V2_nsa_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10NSA, 0x1, 0x2 }, // 4077
  { IMAGE_STORE_PCK_V1_V3_nsa_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10NSA, 0x1, 0x3 }, // 4078
  { IMAGE_STORE_PCK_V1_V4_nsa_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10NSA, 0x1, 0x4 }, // 4079
  { IMAGE_STORE_PCK_V2_V2_nsa_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10NSA, 0x2, 0x2 }, // 4080
  { IMAGE_STORE_PCK_V2_V3_nsa_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10NSA, 0x2, 0x3 }, // 4081
  { IMAGE_STORE_PCK_V2_V4_nsa_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10NSA, 0x2, 0x4 }, // 4082
  { IMAGE_STORE_PCK_V3_V2_nsa_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10NSA, 0x3, 0x2 }, // 4083
  { IMAGE_STORE_PCK_V3_V3_nsa_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10NSA, 0x3, 0x3 }, // 4084
  { IMAGE_STORE_PCK_V3_V4_nsa_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10NSA, 0x3, 0x4 }, // 4085
  { IMAGE_STORE_PCK_V4_V2_nsa_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10NSA, 0x4, 0x2 }, // 4086
  { IMAGE_STORE_PCK_V4_V3_nsa_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10NSA, 0x4, 0x3 }, // 4087
  { IMAGE_STORE_PCK_V4_V4_nsa_gfx10, IMAGE_STORE_PCK, MIMGEncGfx10NSA, 0x4, 0x4 }, // 4088
  { IMAGE_STORE_PCK_V1_V1, IMAGE_STORE_PCK, MIMGEncGfx6, 0x1, 0x1 }, // 4089
  { IMAGE_STORE_PCK_V1_V2, IMAGE_STORE_PCK, MIMGEncGfx6, 0x1, 0x2 }, // 4090
  { IMAGE_STORE_PCK_V1_V3, IMAGE_STORE_PCK, MIMGEncGfx6, 0x1, 0x3 }, // 4091
  { IMAGE_STORE_PCK_V1_V4, IMAGE_STORE_PCK, MIMGEncGfx6, 0x1, 0x4 }, // 4092
  { IMAGE_STORE_PCK_V2_V1, IMAGE_STORE_PCK, MIMGEncGfx6, 0x2, 0x1 }, // 4093
  { IMAGE_STORE_PCK_V2_V2, IMAGE_STORE_PCK, MIMGEncGfx6, 0x2, 0x2 }, // 4094
  { IMAGE_STORE_PCK_V2_V3, IMAGE_STORE_PCK, MIMGEncGfx6, 0x2, 0x3 }, // 4095
  { IMAGE_STORE_PCK_V2_V4, IMAGE_STORE_PCK, MIMGEncGfx6, 0x2, 0x4 }, // 4096
  { IMAGE_STORE_PCK_V3_V1, IMAGE_STORE_PCK, MIMGEncGfx6, 0x3, 0x1 }, // 4097
  { IMAGE_STORE_PCK_V3_V2, IMAGE_STORE_PCK, MIMGEncGfx6, 0x3, 0x2 }, // 4098
  { IMAGE_STORE_PCK_V3_V3, IMAGE_STORE_PCK, MIMGEncGfx6, 0x3, 0x3 }, // 4099
  { IMAGE_STORE_PCK_V3_V4, IMAGE_STORE_PCK, MIMGEncGfx6, 0x3, 0x4 }, // 4100
  { IMAGE_STORE_PCK_V4_V1, IMAGE_STORE_PCK, MIMGEncGfx6, 0x4, 0x1 }, // 4101
  { IMAGE_STORE_PCK_V4_V2, IMAGE_STORE_PCK, MIMGEncGfx6, 0x4, 0x2 }, // 4102
  { IMAGE_STORE_PCK_V4_V3, IMAGE_STORE_PCK, MIMGEncGfx6, 0x4, 0x3 }, // 4103
  { IMAGE_STORE_PCK_V4_V4, IMAGE_STORE_PCK, MIMGEncGfx6, 0x4, 0x4 }, // 4104
 };

const MIMGInfo *getMIMGOpcodeHelper(unsigned BaseOpcode, unsigned MIMGEncoding, uint8_t VDataDwords, uint8_t VAddrDwords) {
  struct KeyType {
    unsigned BaseOpcode;
    unsigned MIMGEncoding;
    uint8_t VDataDwords;
    uint8_t VAddrDwords;
  };
  KeyType Key = { BaseOpcode, MIMGEncoding, VDataDwords, VAddrDwords };
  auto Table = makeArrayRef(MIMGInfoTable);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const MIMGInfo &LHS, const KeyType &RHS) {
      if ((unsigned)LHS.BaseOpcode < (unsigned)RHS.BaseOpcode)
        return true;
      if ((unsigned)LHS.BaseOpcode > (unsigned)RHS.BaseOpcode)
        return false;
      if ((unsigned)LHS.MIMGEncoding < (unsigned)RHS.MIMGEncoding)
        return true;
      if ((unsigned)LHS.MIMGEncoding > (unsigned)RHS.MIMGEncoding)
        return false;
      if (LHS.VDataDwords < RHS.VDataDwords)
        return true;
      if (LHS.VDataDwords > RHS.VDataDwords)
        return false;
      if (LHS.VAddrDwords < RHS.VAddrDwords)
        return true;
      if (LHS.VAddrDwords > RHS.VAddrDwords)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.BaseOpcode != Idx->BaseOpcode ||
      Key.MIMGEncoding != Idx->MIMGEncoding ||
      Key.VDataDwords != Idx->VDataDwords ||
      Key.VAddrDwords != Idx->VAddrDwords)
    return nullptr;
  return &*Idx;
}

const MIMGInfo *getMIMGInfo(unsigned Opcode) {
  struct IndexType {
    unsigned Opcode;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { IMAGE_ATOMIC_ADD_V1_V1_gfx10, 0 },
    { IMAGE_ATOMIC_ADD_V1_V1_si, 14 },
    { IMAGE_ATOMIC_ADD_V1_V1_vi, 22 },
    { IMAGE_ATOMIC_ADD_V1_V2_gfx10, 1 },
    { IMAGE_ATOMIC_ADD_V1_V2_nsa_gfx10, 8 },
    { IMAGE_ATOMIC_ADD_V1_V2_si, 15 },
    { IMAGE_ATOMIC_ADD_V1_V2_vi, 23 },
    { IMAGE_ATOMIC_ADD_V1_V3_gfx10, 2 },
    { IMAGE_ATOMIC_ADD_V1_V3_nsa_gfx10, 9 },
    { IMAGE_ATOMIC_ADD_V1_V3_si, 16 },
    { IMAGE_ATOMIC_ADD_V1_V3_vi, 24 },
    { IMAGE_ATOMIC_ADD_V1_V4_gfx10, 3 },
    { IMAGE_ATOMIC_ADD_V1_V4_nsa_gfx10, 10 },
    { IMAGE_ATOMIC_ADD_V1_V4_si, 17 },
    { IMAGE_ATOMIC_ADD_V1_V4_vi, 25 },
    { IMAGE_ATOMIC_ADD_V2_V1_gfx10, 4 },
    { IMAGE_ATOMIC_ADD_V2_V1_si, 18 },
    { IMAGE_ATOMIC_ADD_V2_V1_vi, 26 },
    { IMAGE_ATOMIC_ADD_V2_V2_gfx10, 5 },
    { IMAGE_ATOMIC_ADD_V2_V2_nsa_gfx10, 11 },
    { IMAGE_ATOMIC_ADD_V2_V2_si, 19 },
    { IMAGE_ATOMIC_ADD_V2_V2_vi, 27 },
    { IMAGE_ATOMIC_ADD_V2_V3_gfx10, 6 },
    { IMAGE_ATOMIC_ADD_V2_V3_nsa_gfx10, 12 },
    { IMAGE_ATOMIC_ADD_V2_V3_si, 20 },
    { IMAGE_ATOMIC_ADD_V2_V3_vi, 28 },
    { IMAGE_ATOMIC_ADD_V2_V4_gfx10, 7 },
    { IMAGE_ATOMIC_ADD_V2_V4_nsa_gfx10, 13 },
    { IMAGE_ATOMIC_ADD_V2_V4_si, 21 },
    { IMAGE_ATOMIC_ADD_V2_V4_vi, 29 },
    { IMAGE_ATOMIC_AND_V1_V1_gfx10, 30 },
    { IMAGE_ATOMIC_AND_V1_V1_si, 44 },
    { IMAGE_ATOMIC_AND_V1_V1_vi, 52 },
    { IMAGE_ATOMIC_AND_V1_V2_gfx10, 31 },
    { IMAGE_ATOMIC_AND_V1_V2_nsa_gfx10, 38 },
    { IMAGE_ATOMIC_AND_V1_V2_si, 45 },
    { IMAGE_ATOMIC_AND_V1_V2_vi, 53 },
    { IMAGE_ATOMIC_AND_V1_V3_gfx10, 32 },
    { IMAGE_ATOMIC_AND_V1_V3_nsa_gfx10, 39 },
    { IMAGE_ATOMIC_AND_V1_V3_si, 46 },
    { IMAGE_ATOMIC_AND_V1_V3_vi, 54 },
    { IMAGE_ATOMIC_AND_V1_V4_gfx10, 33 },
    { IMAGE_ATOMIC_AND_V1_V4_nsa_gfx10, 40 },
    { IMAGE_ATOMIC_AND_V1_V4_si, 47 },
    { IMAGE_ATOMIC_AND_V1_V4_vi, 55 },
    { IMAGE_ATOMIC_AND_V2_V1_gfx10, 34 },
    { IMAGE_ATOMIC_AND_V2_V1_si, 48 },
    { IMAGE_ATOMIC_AND_V2_V1_vi, 56 },
    { IMAGE_ATOMIC_AND_V2_V2_gfx10, 35 },
    { IMAGE_ATOMIC_AND_V2_V2_nsa_gfx10, 41 },
    { IMAGE_ATOMIC_AND_V2_V2_si, 49 },
    { IMAGE_ATOMIC_AND_V2_V2_vi, 57 },
    { IMAGE_ATOMIC_AND_V2_V3_gfx10, 36 },
    { IMAGE_ATOMIC_AND_V2_V3_nsa_gfx10, 42 },
    { IMAGE_ATOMIC_AND_V2_V3_si, 50 },
    { IMAGE_ATOMIC_AND_V2_V3_vi, 58 },
    { IMAGE_ATOMIC_AND_V2_V4_gfx10, 37 },
    { IMAGE_ATOMIC_AND_V2_V4_nsa_gfx10, 43 },
    { IMAGE_ATOMIC_AND_V2_V4_si, 51 },
    { IMAGE_ATOMIC_AND_V2_V4_vi, 59 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V1_gfx10, 60 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V1_si, 74 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V1_vi, 82 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V2_gfx10, 61 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V2_nsa_gfx10, 68 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V2_si, 75 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V2_vi, 83 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V3_gfx10, 62 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V3_nsa_gfx10, 69 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V3_si, 76 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V3_vi, 84 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V4_gfx10, 63 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V4_nsa_gfx10, 70 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V4_si, 77 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V4_vi, 85 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V1_gfx10, 64 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V1_si, 78 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V1_vi, 86 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V2_gfx10, 65 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V2_nsa_gfx10, 71 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V2_si, 79 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V2_vi, 87 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V3_gfx10, 66 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V3_nsa_gfx10, 72 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V3_si, 80 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V3_vi, 88 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V4_gfx10, 67 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V4_nsa_gfx10, 73 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V4_si, 81 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V4_vi, 89 },
    { IMAGE_ATOMIC_DEC_V1_V1_gfx10, 90 },
    { IMAGE_ATOMIC_DEC_V1_V1_si, 104 },
    { IMAGE_ATOMIC_DEC_V1_V1_vi, 112 },
    { IMAGE_ATOMIC_DEC_V1_V2_gfx10, 91 },
    { IMAGE_ATOMIC_DEC_V1_V2_nsa_gfx10, 98 },
    { IMAGE_ATOMIC_DEC_V1_V2_si, 105 },
    { IMAGE_ATOMIC_DEC_V1_V2_vi, 113 },
    { IMAGE_ATOMIC_DEC_V1_V3_gfx10, 92 },
    { IMAGE_ATOMIC_DEC_V1_V3_nsa_gfx10, 99 },
    { IMAGE_ATOMIC_DEC_V1_V3_si, 106 },
    { IMAGE_ATOMIC_DEC_V1_V3_vi, 114 },
    { IMAGE_ATOMIC_DEC_V1_V4_gfx10, 93 },
    { IMAGE_ATOMIC_DEC_V1_V4_nsa_gfx10, 100 },
    { IMAGE_ATOMIC_DEC_V1_V4_si, 107 },
    { IMAGE_ATOMIC_DEC_V1_V4_vi, 115 },
    { IMAGE_ATOMIC_DEC_V2_V1_gfx10, 94 },
    { IMAGE_ATOMIC_DEC_V2_V1_si, 108 },
    { IMAGE_ATOMIC_DEC_V2_V1_vi, 116 },
    { IMAGE_ATOMIC_DEC_V2_V2_gfx10, 95 },
    { IMAGE_ATOMIC_DEC_V2_V2_nsa_gfx10, 101 },
    { IMAGE_ATOMIC_DEC_V2_V2_si, 109 },
    { IMAGE_ATOMIC_DEC_V2_V2_vi, 117 },
    { IMAGE_ATOMIC_DEC_V2_V3_gfx10, 96 },
    { IMAGE_ATOMIC_DEC_V2_V3_nsa_gfx10, 102 },
    { IMAGE_ATOMIC_DEC_V2_V3_si, 110 },
    { IMAGE_ATOMIC_DEC_V2_V3_vi, 118 },
    { IMAGE_ATOMIC_DEC_V2_V4_gfx10, 97 },
    { IMAGE_ATOMIC_DEC_V2_V4_nsa_gfx10, 103 },
    { IMAGE_ATOMIC_DEC_V2_V4_si, 111 },
    { IMAGE_ATOMIC_DEC_V2_V4_vi, 119 },
    { IMAGE_ATOMIC_INC_V1_V1_gfx10, 120 },
    { IMAGE_ATOMIC_INC_V1_V1_si, 134 },
    { IMAGE_ATOMIC_INC_V1_V1_vi, 142 },
    { IMAGE_ATOMIC_INC_V1_V2_gfx10, 121 },
    { IMAGE_ATOMIC_INC_V1_V2_nsa_gfx10, 128 },
    { IMAGE_ATOMIC_INC_V1_V2_si, 135 },
    { IMAGE_ATOMIC_INC_V1_V2_vi, 143 },
    { IMAGE_ATOMIC_INC_V1_V3_gfx10, 122 },
    { IMAGE_ATOMIC_INC_V1_V3_nsa_gfx10, 129 },
    { IMAGE_ATOMIC_INC_V1_V3_si, 136 },
    { IMAGE_ATOMIC_INC_V1_V3_vi, 144 },
    { IMAGE_ATOMIC_INC_V1_V4_gfx10, 123 },
    { IMAGE_ATOMIC_INC_V1_V4_nsa_gfx10, 130 },
    { IMAGE_ATOMIC_INC_V1_V4_si, 137 },
    { IMAGE_ATOMIC_INC_V1_V4_vi, 145 },
    { IMAGE_ATOMIC_INC_V2_V1_gfx10, 124 },
    { IMAGE_ATOMIC_INC_V2_V1_si, 138 },
    { IMAGE_ATOMIC_INC_V2_V1_vi, 146 },
    { IMAGE_ATOMIC_INC_V2_V2_gfx10, 125 },
    { IMAGE_ATOMIC_INC_V2_V2_nsa_gfx10, 131 },
    { IMAGE_ATOMIC_INC_V2_V2_si, 139 },
    { IMAGE_ATOMIC_INC_V2_V2_vi, 147 },
    { IMAGE_ATOMIC_INC_V2_V3_gfx10, 126 },
    { IMAGE_ATOMIC_INC_V2_V3_nsa_gfx10, 132 },
    { IMAGE_ATOMIC_INC_V2_V3_si, 140 },
    { IMAGE_ATOMIC_INC_V2_V3_vi, 148 },
    { IMAGE_ATOMIC_INC_V2_V4_gfx10, 127 },
    { IMAGE_ATOMIC_INC_V2_V4_nsa_gfx10, 133 },
    { IMAGE_ATOMIC_INC_V2_V4_si, 141 },
    { IMAGE_ATOMIC_INC_V2_V4_vi, 149 },
    { IMAGE_ATOMIC_OR_V1_V1_gfx10, 150 },
    { IMAGE_ATOMIC_OR_V1_V1_si, 164 },
    { IMAGE_ATOMIC_OR_V1_V1_vi, 172 },
    { IMAGE_ATOMIC_OR_V1_V2_gfx10, 151 },
    { IMAGE_ATOMIC_OR_V1_V2_nsa_gfx10, 158 },
    { IMAGE_ATOMIC_OR_V1_V2_si, 165 },
    { IMAGE_ATOMIC_OR_V1_V2_vi, 173 },
    { IMAGE_ATOMIC_OR_V1_V3_gfx10, 152 },
    { IMAGE_ATOMIC_OR_V1_V3_nsa_gfx10, 159 },
    { IMAGE_ATOMIC_OR_V1_V3_si, 166 },
    { IMAGE_ATOMIC_OR_V1_V3_vi, 174 },
    { IMAGE_ATOMIC_OR_V1_V4_gfx10, 153 },
    { IMAGE_ATOMIC_OR_V1_V4_nsa_gfx10, 160 },
    { IMAGE_ATOMIC_OR_V1_V4_si, 167 },
    { IMAGE_ATOMIC_OR_V1_V4_vi, 175 },
    { IMAGE_ATOMIC_OR_V2_V1_gfx10, 154 },
    { IMAGE_ATOMIC_OR_V2_V1_si, 168 },
    { IMAGE_ATOMIC_OR_V2_V1_vi, 176 },
    { IMAGE_ATOMIC_OR_V2_V2_gfx10, 155 },
    { IMAGE_ATOMIC_OR_V2_V2_nsa_gfx10, 161 },
    { IMAGE_ATOMIC_OR_V2_V2_si, 169 },
    { IMAGE_ATOMIC_OR_V2_V2_vi, 177 },
    { IMAGE_ATOMIC_OR_V2_V3_gfx10, 156 },
    { IMAGE_ATOMIC_OR_V2_V3_nsa_gfx10, 162 },
    { IMAGE_ATOMIC_OR_V2_V3_si, 170 },
    { IMAGE_ATOMIC_OR_V2_V3_vi, 178 },
    { IMAGE_ATOMIC_OR_V2_V4_gfx10, 157 },
    { IMAGE_ATOMIC_OR_V2_V4_nsa_gfx10, 163 },
    { IMAGE_ATOMIC_OR_V2_V4_si, 171 },
    { IMAGE_ATOMIC_OR_V2_V4_vi, 179 },
    { IMAGE_ATOMIC_SMAX_V1_V1_gfx10, 180 },
    { IMAGE_ATOMIC_SMAX_V1_V1_si, 194 },
    { IMAGE_ATOMIC_SMAX_V1_V1_vi, 202 },
    { IMAGE_ATOMIC_SMAX_V1_V2_gfx10, 181 },
    { IMAGE_ATOMIC_SMAX_V1_V2_nsa_gfx10, 188 },
    { IMAGE_ATOMIC_SMAX_V1_V2_si, 195 },
    { IMAGE_ATOMIC_SMAX_V1_V2_vi, 203 },
    { IMAGE_ATOMIC_SMAX_V1_V3_gfx10, 182 },
    { IMAGE_ATOMIC_SMAX_V1_V3_nsa_gfx10, 189 },
    { IMAGE_ATOMIC_SMAX_V1_V3_si, 196 },
    { IMAGE_ATOMIC_SMAX_V1_V3_vi, 204 },
    { IMAGE_ATOMIC_SMAX_V1_V4_gfx10, 183 },
    { IMAGE_ATOMIC_SMAX_V1_V4_nsa_gfx10, 190 },
    { IMAGE_ATOMIC_SMAX_V1_V4_si, 197 },
    { IMAGE_ATOMIC_SMAX_V1_V4_vi, 205 },
    { IMAGE_ATOMIC_SMAX_V2_V1_gfx10, 184 },
    { IMAGE_ATOMIC_SMAX_V2_V1_si, 198 },
    { IMAGE_ATOMIC_SMAX_V2_V1_vi, 206 },
    { IMAGE_ATOMIC_SMAX_V2_V2_gfx10, 185 },
    { IMAGE_ATOMIC_SMAX_V2_V2_nsa_gfx10, 191 },
    { IMAGE_ATOMIC_SMAX_V2_V2_si, 199 },
    { IMAGE_ATOMIC_SMAX_V2_V2_vi, 207 },
    { IMAGE_ATOMIC_SMAX_V2_V3_gfx10, 186 },
    { IMAGE_ATOMIC_SMAX_V2_V3_nsa_gfx10, 192 },
    { IMAGE_ATOMIC_SMAX_V2_V3_si, 200 },
    { IMAGE_ATOMIC_SMAX_V2_V3_vi, 208 },
    { IMAGE_ATOMIC_SMAX_V2_V4_gfx10, 187 },
    { IMAGE_ATOMIC_SMAX_V2_V4_nsa_gfx10, 193 },
    { IMAGE_ATOMIC_SMAX_V2_V4_si, 201 },
    { IMAGE_ATOMIC_SMAX_V2_V4_vi, 209 },
    { IMAGE_ATOMIC_SMIN_V1_V1_gfx10, 210 },
    { IMAGE_ATOMIC_SMIN_V1_V1_si, 224 },
    { IMAGE_ATOMIC_SMIN_V1_V1_vi, 232 },
    { IMAGE_ATOMIC_SMIN_V1_V2_gfx10, 211 },
    { IMAGE_ATOMIC_SMIN_V1_V2_nsa_gfx10, 218 },
    { IMAGE_ATOMIC_SMIN_V1_V2_si, 225 },
    { IMAGE_ATOMIC_SMIN_V1_V2_vi, 233 },
    { IMAGE_ATOMIC_SMIN_V1_V3_gfx10, 212 },
    { IMAGE_ATOMIC_SMIN_V1_V3_nsa_gfx10, 219 },
    { IMAGE_ATOMIC_SMIN_V1_V3_si, 226 },
    { IMAGE_ATOMIC_SMIN_V1_V3_vi, 234 },
    { IMAGE_ATOMIC_SMIN_V1_V4_gfx10, 213 },
    { IMAGE_ATOMIC_SMIN_V1_V4_nsa_gfx10, 220 },
    { IMAGE_ATOMIC_SMIN_V1_V4_si, 227 },
    { IMAGE_ATOMIC_SMIN_V1_V4_vi, 235 },
    { IMAGE_ATOMIC_SMIN_V2_V1_gfx10, 214 },
    { IMAGE_ATOMIC_SMIN_V2_V1_si, 228 },
    { IMAGE_ATOMIC_SMIN_V2_V1_vi, 236 },
    { IMAGE_ATOMIC_SMIN_V2_V2_gfx10, 215 },
    { IMAGE_ATOMIC_SMIN_V2_V2_nsa_gfx10, 221 },
    { IMAGE_ATOMIC_SMIN_V2_V2_si, 229 },
    { IMAGE_ATOMIC_SMIN_V2_V2_vi, 237 },
    { IMAGE_ATOMIC_SMIN_V2_V3_gfx10, 216 },
    { IMAGE_ATOMIC_SMIN_V2_V3_nsa_gfx10, 222 },
    { IMAGE_ATOMIC_SMIN_V2_V3_si, 230 },
    { IMAGE_ATOMIC_SMIN_V2_V3_vi, 238 },
    { IMAGE_ATOMIC_SMIN_V2_V4_gfx10, 217 },
    { IMAGE_ATOMIC_SMIN_V2_V4_nsa_gfx10, 223 },
    { IMAGE_ATOMIC_SMIN_V2_V4_si, 231 },
    { IMAGE_ATOMIC_SMIN_V2_V4_vi, 239 },
    { IMAGE_ATOMIC_SUB_V1_V1_gfx10, 240 },
    { IMAGE_ATOMIC_SUB_V1_V1_si, 254 },
    { IMAGE_ATOMIC_SUB_V1_V1_vi, 262 },
    { IMAGE_ATOMIC_SUB_V1_V2_gfx10, 241 },
    { IMAGE_ATOMIC_SUB_V1_V2_nsa_gfx10, 248 },
    { IMAGE_ATOMIC_SUB_V1_V2_si, 255 },
    { IMAGE_ATOMIC_SUB_V1_V2_vi, 263 },
    { IMAGE_ATOMIC_SUB_V1_V3_gfx10, 242 },
    { IMAGE_ATOMIC_SUB_V1_V3_nsa_gfx10, 249 },
    { IMAGE_ATOMIC_SUB_V1_V3_si, 256 },
    { IMAGE_ATOMIC_SUB_V1_V3_vi, 264 },
    { IMAGE_ATOMIC_SUB_V1_V4_gfx10, 243 },
    { IMAGE_ATOMIC_SUB_V1_V4_nsa_gfx10, 250 },
    { IMAGE_ATOMIC_SUB_V1_V4_si, 257 },
    { IMAGE_ATOMIC_SUB_V1_V4_vi, 265 },
    { IMAGE_ATOMIC_SUB_V2_V1_gfx10, 244 },
    { IMAGE_ATOMIC_SUB_V2_V1_si, 258 },
    { IMAGE_ATOMIC_SUB_V2_V1_vi, 266 },
    { IMAGE_ATOMIC_SUB_V2_V2_gfx10, 245 },
    { IMAGE_ATOMIC_SUB_V2_V2_nsa_gfx10, 251 },
    { IMAGE_ATOMIC_SUB_V2_V2_si, 259 },
    { IMAGE_ATOMIC_SUB_V2_V2_vi, 267 },
    { IMAGE_ATOMIC_SUB_V2_V3_gfx10, 246 },
    { IMAGE_ATOMIC_SUB_V2_V3_nsa_gfx10, 252 },
    { IMAGE_ATOMIC_SUB_V2_V3_si, 260 },
    { IMAGE_ATOMIC_SUB_V2_V3_vi, 268 },
    { IMAGE_ATOMIC_SUB_V2_V4_gfx10, 247 },
    { IMAGE_ATOMIC_SUB_V2_V4_nsa_gfx10, 253 },
    { IMAGE_ATOMIC_SUB_V2_V4_si, 261 },
    { IMAGE_ATOMIC_SUB_V2_V4_vi, 269 },
    { IMAGE_ATOMIC_SWAP_V1_V1_gfx10, 270 },
    { IMAGE_ATOMIC_SWAP_V1_V1_si, 284 },
    { IMAGE_ATOMIC_SWAP_V1_V1_vi, 292 },
    { IMAGE_ATOMIC_SWAP_V1_V2_gfx10, 271 },
    { IMAGE_ATOMIC_SWAP_V1_V2_nsa_gfx10, 278 },
    { IMAGE_ATOMIC_SWAP_V1_V2_si, 285 },
    { IMAGE_ATOMIC_SWAP_V1_V2_vi, 293 },
    { IMAGE_ATOMIC_SWAP_V1_V3_gfx10, 272 },
    { IMAGE_ATOMIC_SWAP_V1_V3_nsa_gfx10, 279 },
    { IMAGE_ATOMIC_SWAP_V1_V3_si, 286 },
    { IMAGE_ATOMIC_SWAP_V1_V3_vi, 294 },
    { IMAGE_ATOMIC_SWAP_V1_V4_gfx10, 273 },
    { IMAGE_ATOMIC_SWAP_V1_V4_nsa_gfx10, 280 },
    { IMAGE_ATOMIC_SWAP_V1_V4_si, 287 },
    { IMAGE_ATOMIC_SWAP_V1_V4_vi, 295 },
    { IMAGE_ATOMIC_SWAP_V2_V1_gfx10, 274 },
    { IMAGE_ATOMIC_SWAP_V2_V1_si, 288 },
    { IMAGE_ATOMIC_SWAP_V2_V1_vi, 296 },
    { IMAGE_ATOMIC_SWAP_V2_V2_gfx10, 275 },
    { IMAGE_ATOMIC_SWAP_V2_V2_nsa_gfx10, 281 },
    { IMAGE_ATOMIC_SWAP_V2_V2_si, 289 },
    { IMAGE_ATOMIC_SWAP_V2_V2_vi, 297 },
    { IMAGE_ATOMIC_SWAP_V2_V3_gfx10, 276 },
    { IMAGE_ATOMIC_SWAP_V2_V3_nsa_gfx10, 282 },
    { IMAGE_ATOMIC_SWAP_V2_V3_si, 290 },
    { IMAGE_ATOMIC_SWAP_V2_V3_vi, 298 },
    { IMAGE_ATOMIC_SWAP_V2_V4_gfx10, 277 },
    { IMAGE_ATOMIC_SWAP_V2_V4_nsa_gfx10, 283 },
    { IMAGE_ATOMIC_SWAP_V2_V4_si, 291 },
    { IMAGE_ATOMIC_SWAP_V2_V4_vi, 299 },
    { IMAGE_ATOMIC_UMAX_V1_V1_gfx10, 300 },
    { IMAGE_ATOMIC_UMAX_V1_V1_si, 314 },
    { IMAGE_ATOMIC_UMAX_V1_V1_vi, 322 },
    { IMAGE_ATOMIC_UMAX_V1_V2_gfx10, 301 },
    { IMAGE_ATOMIC_UMAX_V1_V2_nsa_gfx10, 308 },
    { IMAGE_ATOMIC_UMAX_V1_V2_si, 315 },
    { IMAGE_ATOMIC_UMAX_V1_V2_vi, 323 },
    { IMAGE_ATOMIC_UMAX_V1_V3_gfx10, 302 },
    { IMAGE_ATOMIC_UMAX_V1_V3_nsa_gfx10, 309 },
    { IMAGE_ATOMIC_UMAX_V1_V3_si, 316 },
    { IMAGE_ATOMIC_UMAX_V1_V3_vi, 324 },
    { IMAGE_ATOMIC_UMAX_V1_V4_gfx10, 303 },
    { IMAGE_ATOMIC_UMAX_V1_V4_nsa_gfx10, 310 },
    { IMAGE_ATOMIC_UMAX_V1_V4_si, 317 },
    { IMAGE_ATOMIC_UMAX_V1_V4_vi, 325 },
    { IMAGE_ATOMIC_UMAX_V2_V1_gfx10, 304 },
    { IMAGE_ATOMIC_UMAX_V2_V1_si, 318 },
    { IMAGE_ATOMIC_UMAX_V2_V1_vi, 326 },
    { IMAGE_ATOMIC_UMAX_V2_V2_gfx10, 305 },
    { IMAGE_ATOMIC_UMAX_V2_V2_nsa_gfx10, 311 },
    { IMAGE_ATOMIC_UMAX_V2_V2_si, 319 },
    { IMAGE_ATOMIC_UMAX_V2_V2_vi, 327 },
    { IMAGE_ATOMIC_UMAX_V2_V3_gfx10, 306 },
    { IMAGE_ATOMIC_UMAX_V2_V3_nsa_gfx10, 312 },
    { IMAGE_ATOMIC_UMAX_V2_V3_si, 320 },
    { IMAGE_ATOMIC_UMAX_V2_V3_vi, 328 },
    { IMAGE_ATOMIC_UMAX_V2_V4_gfx10, 307 },
    { IMAGE_ATOMIC_UMAX_V2_V4_nsa_gfx10, 313 },
    { IMAGE_ATOMIC_UMAX_V2_V4_si, 321 },
    { IMAGE_ATOMIC_UMAX_V2_V4_vi, 329 },
    { IMAGE_ATOMIC_UMIN_V1_V1_gfx10, 330 },
    { IMAGE_ATOMIC_UMIN_V1_V1_si, 344 },
    { IMAGE_ATOMIC_UMIN_V1_V1_vi, 352 },
    { IMAGE_ATOMIC_UMIN_V1_V2_gfx10, 331 },
    { IMAGE_ATOMIC_UMIN_V1_V2_nsa_gfx10, 338 },
    { IMAGE_ATOMIC_UMIN_V1_V2_si, 345 },
    { IMAGE_ATOMIC_UMIN_V1_V2_vi, 353 },
    { IMAGE_ATOMIC_UMIN_V1_V3_gfx10, 332 },
    { IMAGE_ATOMIC_UMIN_V1_V3_nsa_gfx10, 339 },
    { IMAGE_ATOMIC_UMIN_V1_V3_si, 346 },
    { IMAGE_ATOMIC_UMIN_V1_V3_vi, 354 },
    { IMAGE_ATOMIC_UMIN_V1_V4_gfx10, 333 },
    { IMAGE_ATOMIC_UMIN_V1_V4_nsa_gfx10, 340 },
    { IMAGE_ATOMIC_UMIN_V1_V4_si, 347 },
    { IMAGE_ATOMIC_UMIN_V1_V4_vi, 355 },
    { IMAGE_ATOMIC_UMIN_V2_V1_gfx10, 334 },
    { IMAGE_ATOMIC_UMIN_V2_V1_si, 348 },
    { IMAGE_ATOMIC_UMIN_V2_V1_vi, 356 },
    { IMAGE_ATOMIC_UMIN_V2_V2_gfx10, 335 },
    { IMAGE_ATOMIC_UMIN_V2_V2_nsa_gfx10, 341 },
    { IMAGE_ATOMIC_UMIN_V2_V2_si, 349 },
    { IMAGE_ATOMIC_UMIN_V2_V2_vi, 357 },
    { IMAGE_ATOMIC_UMIN_V2_V3_gfx10, 336 },
    { IMAGE_ATOMIC_UMIN_V2_V3_nsa_gfx10, 342 },
    { IMAGE_ATOMIC_UMIN_V2_V3_si, 350 },
    { IMAGE_ATOMIC_UMIN_V2_V3_vi, 358 },
    { IMAGE_ATOMIC_UMIN_V2_V4_gfx10, 337 },
    { IMAGE_ATOMIC_UMIN_V2_V4_nsa_gfx10, 343 },
    { IMAGE_ATOMIC_UMIN_V2_V4_si, 351 },
    { IMAGE_ATOMIC_UMIN_V2_V4_vi, 359 },
    { IMAGE_ATOMIC_XOR_V1_V1_gfx10, 360 },
    { IMAGE_ATOMIC_XOR_V1_V1_si, 374 },
    { IMAGE_ATOMIC_XOR_V1_V1_vi, 382 },
    { IMAGE_ATOMIC_XOR_V1_V2_gfx10, 361 },
    { IMAGE_ATOMIC_XOR_V1_V2_nsa_gfx10, 368 },
    { IMAGE_ATOMIC_XOR_V1_V2_si, 375 },
    { IMAGE_ATOMIC_XOR_V1_V2_vi, 383 },
    { IMAGE_ATOMIC_XOR_V1_V3_gfx10, 362 },
    { IMAGE_ATOMIC_XOR_V1_V3_nsa_gfx10, 369 },
    { IMAGE_ATOMIC_XOR_V1_V3_si, 376 },
    { IMAGE_ATOMIC_XOR_V1_V3_vi, 384 },
    { IMAGE_ATOMIC_XOR_V1_V4_gfx10, 363 },
    { IMAGE_ATOMIC_XOR_V1_V4_nsa_gfx10, 370 },
    { IMAGE_ATOMIC_XOR_V1_V4_si, 377 },
    { IMAGE_ATOMIC_XOR_V1_V4_vi, 385 },
    { IMAGE_ATOMIC_XOR_V2_V1_gfx10, 364 },
    { IMAGE_ATOMIC_XOR_V2_V1_si, 378 },
    { IMAGE_ATOMIC_XOR_V2_V1_vi, 386 },
    { IMAGE_ATOMIC_XOR_V2_V2_gfx10, 365 },
    { IMAGE_ATOMIC_XOR_V2_V2_nsa_gfx10, 371 },
    { IMAGE_ATOMIC_XOR_V2_V2_si, 379 },
    { IMAGE_ATOMIC_XOR_V2_V2_vi, 387 },
    { IMAGE_ATOMIC_XOR_V2_V3_gfx10, 366 },
    { IMAGE_ATOMIC_XOR_V2_V3_nsa_gfx10, 372 },
    { IMAGE_ATOMIC_XOR_V2_V3_si, 380 },
    { IMAGE_ATOMIC_XOR_V2_V3_vi, 388 },
    { IMAGE_ATOMIC_XOR_V2_V4_gfx10, 367 },
    { IMAGE_ATOMIC_XOR_V2_V4_nsa_gfx10, 373 },
    { IMAGE_ATOMIC_XOR_V2_V4_si, 381 },
    { IMAGE_ATOMIC_XOR_V2_V4_vi, 389 },
    { IMAGE_GATHER4_B_CL_O_V2_V3, 504 },
    { IMAGE_GATHER4_B_CL_O_V2_V3_gfx10, 483 },
    { IMAGE_GATHER4_B_CL_O_V2_V3_nsa_gfx10, 492 },
    { IMAGE_GATHER4_B_CL_O_V2_V4, 505 },
    { IMAGE_GATHER4_B_CL_O_V2_V4_gfx10, 484 },
    { IMAGE_GATHER4_B_CL_O_V2_V4_nsa_gfx10, 493 },
    { IMAGE_GATHER4_B_CL_O_V2_V5_nsa_gfx10, 494 },
    { IMAGE_GATHER4_B_CL_O_V2_V6_nsa_gfx10, 495 },
    { IMAGE_GATHER4_B_CL_O_V2_V8, 506 },
    { IMAGE_GATHER4_B_CL_O_V2_V8_gfx10, 485 },
    { IMAGE_GATHER4_B_CL_O_V4_V3, 507 },
    { IMAGE_GATHER4_B_CL_O_V4_V3_gfx10, 486 },
    { IMAGE_GATHER4_B_CL_O_V4_V3_nsa_gfx10, 496 },
    { IMAGE_GATHER4_B_CL_O_V4_V4, 508 },
    { IMAGE_GATHER4_B_CL_O_V4_V4_gfx10, 487 },
    { IMAGE_GATHER4_B_CL_O_V4_V4_nsa_gfx10, 497 },
    { IMAGE_GATHER4_B_CL_O_V4_V5_nsa_gfx10, 498 },
    { IMAGE_GATHER4_B_CL_O_V4_V6_nsa_gfx10, 499 },
    { IMAGE_GATHER4_B_CL_O_V4_V8, 509 },
    { IMAGE_GATHER4_B_CL_O_V4_V8_gfx10, 488 },
    { IMAGE_GATHER4_B_CL_O_V5_V3, 510 },
    { IMAGE_GATHER4_B_CL_O_V5_V3_gfx10, 489 },
    { IMAGE_GATHER4_B_CL_O_V5_V3_nsa_gfx10, 500 },
    { IMAGE_GATHER4_B_CL_O_V5_V4, 511 },
    { IMAGE_GATHER4_B_CL_O_V5_V4_gfx10, 490 },
    { IMAGE_GATHER4_B_CL_O_V5_V4_nsa_gfx10, 501 },
    { IMAGE_GATHER4_B_CL_O_V5_V5_nsa_gfx10, 502 },
    { IMAGE_GATHER4_B_CL_O_V5_V6_nsa_gfx10, 503 },
    { IMAGE_GATHER4_B_CL_O_V5_V8, 512 },
    { IMAGE_GATHER4_B_CL_O_V5_V8_gfx10, 491 },
    { IMAGE_GATHER4_B_CL_V2_V2, 471 },
    { IMAGE_GATHER4_B_CL_V2_V2_gfx10, 447 },
    { IMAGE_GATHER4_B_CL_V2_V2_nsa_gfx10, 459 },
    { IMAGE_GATHER4_B_CL_V2_V3, 472 },
    { IMAGE_GATHER4_B_CL_V2_V3_gfx10, 448 },
    { IMAGE_GATHER4_B_CL_V2_V3_nsa_gfx10, 460 },
    { IMAGE_GATHER4_B_CL_V2_V4, 473 },
    { IMAGE_GATHER4_B_CL_V2_V4_gfx10, 449 },
    { IMAGE_GATHER4_B_CL_V2_V4_nsa_gfx10, 461 },
    { IMAGE_GATHER4_B_CL_V2_V5_nsa_gfx10, 462 },
    { IMAGE_GATHER4_B_CL_V2_V8, 474 },
    { IMAGE_GATHER4_B_CL_V2_V8_gfx10, 450 },
    { IMAGE_GATHER4_B_CL_V4_V2, 475 },
    { IMAGE_GATHER4_B_CL_V4_V2_gfx10, 451 },
    { IMAGE_GATHER4_B_CL_V4_V2_nsa_gfx10, 463 },
    { IMAGE_GATHER4_B_CL_V4_V3, 476 },
    { IMAGE_GATHER4_B_CL_V4_V3_gfx10, 452 },
    { IMAGE_GATHER4_B_CL_V4_V3_nsa_gfx10, 464 },
    { IMAGE_GATHER4_B_CL_V4_V4, 477 },
    { IMAGE_GATHER4_B_CL_V4_V4_gfx10, 453 },
    { IMAGE_GATHER4_B_CL_V4_V4_nsa_gfx10, 465 },
    { IMAGE_GATHER4_B_CL_V4_V5_nsa_gfx10, 466 },
    { IMAGE_GATHER4_B_CL_V4_V8, 478 },
    { IMAGE_GATHER4_B_CL_V4_V8_gfx10, 454 },
    { IMAGE_GATHER4_B_CL_V5_V2, 479 },
    { IMAGE_GATHER4_B_CL_V5_V2_gfx10, 455 },
    { IMAGE_GATHER4_B_CL_V5_V2_nsa_gfx10, 467 },
    { IMAGE_GATHER4_B_CL_V5_V3, 480 },
    { IMAGE_GATHER4_B_CL_V5_V3_gfx10, 456 },
    { IMAGE_GATHER4_B_CL_V5_V3_nsa_gfx10, 468 },
    { IMAGE_GATHER4_B_CL_V5_V4, 481 },
    { IMAGE_GATHER4_B_CL_V5_V4_gfx10, 457 },
    { IMAGE_GATHER4_B_CL_V5_V4_nsa_gfx10, 469 },
    { IMAGE_GATHER4_B_CL_V5_V5_nsa_gfx10, 470 },
    { IMAGE_GATHER4_B_CL_V5_V8, 482 },
    { IMAGE_GATHER4_B_CL_V5_V8_gfx10, 458 },
    { IMAGE_GATHER4_B_O_V2_V3, 531 },
    { IMAGE_GATHER4_B_O_V2_V3_gfx10, 513 },
    { IMAGE_GATHER4_B_O_V2_V3_nsa_gfx10, 522 },
    { IMAGE_GATHER4_B_O_V2_V4, 532 },
    { IMAGE_GATHER4_B_O_V2_V4_gfx10, 514 },
    { IMAGE_GATHER4_B_O_V2_V4_nsa_gfx10, 523 },
    { IMAGE_GATHER4_B_O_V2_V5_nsa_gfx10, 524 },
    { IMAGE_GATHER4_B_O_V2_V8, 533 },
    { IMAGE_GATHER4_B_O_V2_V8_gfx10, 515 },
    { IMAGE_GATHER4_B_O_V4_V3, 534 },
    { IMAGE_GATHER4_B_O_V4_V3_gfx10, 516 },
    { IMAGE_GATHER4_B_O_V4_V3_nsa_gfx10, 525 },
    { IMAGE_GATHER4_B_O_V4_V4, 535 },
    { IMAGE_GATHER4_B_O_V4_V4_gfx10, 517 },
    { IMAGE_GATHER4_B_O_V4_V4_nsa_gfx10, 526 },
    { IMAGE_GATHER4_B_O_V4_V5_nsa_gfx10, 527 },
    { IMAGE_GATHER4_B_O_V4_V8, 536 },
    { IMAGE_GATHER4_B_O_V4_V8_gfx10, 518 },
    { IMAGE_GATHER4_B_O_V5_V3, 537 },
    { IMAGE_GATHER4_B_O_V5_V3_gfx10, 519 },
    { IMAGE_GATHER4_B_O_V5_V3_nsa_gfx10, 528 },
    { IMAGE_GATHER4_B_O_V5_V4, 538 },
    { IMAGE_GATHER4_B_O_V5_V4_gfx10, 520 },
    { IMAGE_GATHER4_B_O_V5_V4_nsa_gfx10, 529 },
    { IMAGE_GATHER4_B_O_V5_V5_nsa_gfx10, 530 },
    { IMAGE_GATHER4_B_O_V5_V8, 539 },
    { IMAGE_GATHER4_B_O_V5_V8_gfx10, 521 },
    { IMAGE_GATHER4_B_V2_V2, 438 },
    { IMAGE_GATHER4_B_V2_V2_gfx10, 420 },
    { IMAGE_GATHER4_B_V2_V2_nsa_gfx10, 429 },
    { IMAGE_GATHER4_B_V2_V3, 439 },
    { IMAGE_GATHER4_B_V2_V3_gfx10, 421 },
    { IMAGE_GATHER4_B_V2_V3_nsa_gfx10, 430 },
    { IMAGE_GATHER4_B_V2_V4, 440 },
    { IMAGE_GATHER4_B_V2_V4_gfx10, 422 },
    { IMAGE_GATHER4_B_V2_V4_nsa_gfx10, 431 },
    { IMAGE_GATHER4_B_V4_V2, 441 },
    { IMAGE_GATHER4_B_V4_V2_gfx10, 423 },
    { IMAGE_GATHER4_B_V4_V2_nsa_gfx10, 432 },
    { IMAGE_GATHER4_B_V4_V3, 442 },
    { IMAGE_GATHER4_B_V4_V3_gfx10, 424 },
    { IMAGE_GATHER4_B_V4_V3_nsa_gfx10, 433 },
    { IMAGE_GATHER4_B_V4_V4, 443 },
    { IMAGE_GATHER4_B_V4_V4_gfx10, 425 },
    { IMAGE_GATHER4_B_V4_V4_nsa_gfx10, 434 },
    { IMAGE_GATHER4_B_V5_V2, 444 },
    { IMAGE_GATHER4_B_V5_V2_gfx10, 426 },
    { IMAGE_GATHER4_B_V5_V2_nsa_gfx10, 435 },
    { IMAGE_GATHER4_B_V5_V3, 445 },
    { IMAGE_GATHER4_B_V5_V3_gfx10, 427 },
    { IMAGE_GATHER4_B_V5_V3_nsa_gfx10, 436 },
    { IMAGE_GATHER4_B_V5_V4, 446 },
    { IMAGE_GATHER4_B_V5_V4_gfx10, 428 },
    { IMAGE_GATHER4_B_V5_V4_nsa_gfx10, 437 },
    { IMAGE_GATHER4_CL_O_V2_V2, 624 },
    { IMAGE_GATHER4_CL_O_V2_V2_gfx10, 600 },
    { IMAGE_GATHER4_CL_O_V2_V2_nsa_gfx10, 612 },
    { IMAGE_GATHER4_CL_O_V2_V3, 625 },
    { IMAGE_GATHER4_CL_O_V2_V3_gfx10, 601 },
    { IMAGE_GATHER4_CL_O_V2_V3_nsa_gfx10, 613 },
    { IMAGE_GATHER4_CL_O_V2_V4, 626 },
    { IMAGE_GATHER4_CL_O_V2_V4_gfx10, 602 },
    { IMAGE_GATHER4_CL_O_V2_V4_nsa_gfx10, 614 },
    { IMAGE_GATHER4_CL_O_V2_V5_nsa_gfx10, 615 },
    { IMAGE_GATHER4_CL_O_V2_V8, 627 },
    { IMAGE_GATHER4_CL_O_V2_V8_gfx10, 603 },
    { IMAGE_GATHER4_CL_O_V4_V2, 628 },
    { IMAGE_GATHER4_CL_O_V4_V2_gfx10, 604 },
    { IMAGE_GATHER4_CL_O_V4_V2_nsa_gfx10, 616 },
    { IMAGE_GATHER4_CL_O_V4_V3, 629 },
    { IMAGE_GATHER4_CL_O_V4_V3_gfx10, 605 },
    { IMAGE_GATHER4_CL_O_V4_V3_nsa_gfx10, 617 },
    { IMAGE_GATHER4_CL_O_V4_V4, 630 },
    { IMAGE_GATHER4_CL_O_V4_V4_gfx10, 606 },
    { IMAGE_GATHER4_CL_O_V4_V4_nsa_gfx10, 618 },
    { IMAGE_GATHER4_CL_O_V4_V5_nsa_gfx10, 619 },
    { IMAGE_GATHER4_CL_O_V4_V8, 631 },
    { IMAGE_GATHER4_CL_O_V4_V8_gfx10, 607 },
    { IMAGE_GATHER4_CL_O_V5_V2, 632 },
    { IMAGE_GATHER4_CL_O_V5_V2_gfx10, 608 },
    { IMAGE_GATHER4_CL_O_V5_V2_nsa_gfx10, 620 },
    { IMAGE_GATHER4_CL_O_V5_V3, 633 },
    { IMAGE_GATHER4_CL_O_V5_V3_gfx10, 609 },
    { IMAGE_GATHER4_CL_O_V5_V3_nsa_gfx10, 621 },
    { IMAGE_GATHER4_CL_O_V5_V4, 634 },
    { IMAGE_GATHER4_CL_O_V5_V4_gfx10, 610 },
    { IMAGE_GATHER4_CL_O_V5_V4_nsa_gfx10, 622 },
    { IMAGE_GATHER4_CL_O_V5_V5_nsa_gfx10, 623 },
    { IMAGE_GATHER4_CL_O_V5_V8, 635 },
    { IMAGE_GATHER4_CL_O_V5_V8_gfx10, 611 },
    { IMAGE_GATHER4_CL_V2_V1, 588 },
    { IMAGE_GATHER4_CL_V2_V1_gfx10, 567 },
    { IMAGE_GATHER4_CL_V2_V2, 589 },
    { IMAGE_GATHER4_CL_V2_V2_gfx10, 568 },
    { IMAGE_GATHER4_CL_V2_V2_nsa_gfx10, 579 },
    { IMAGE_GATHER4_CL_V2_V3, 590 },
    { IMAGE_GATHER4_CL_V2_V3_gfx10, 569 },
    { IMAGE_GATHER4_CL_V2_V3_nsa_gfx10, 580 },
    { IMAGE_GATHER4_CL_V2_V4, 591 },
    { IMAGE_GATHER4_CL_V2_V4_gfx10, 570 },
    { IMAGE_GATHER4_CL_V2_V4_nsa_gfx10, 581 },
    { IMAGE_GATHER4_CL_V4_V1, 592 },
    { IMAGE_GATHER4_CL_V4_V1_gfx10, 571 },
    { IMAGE_GATHER4_CL_V4_V2, 593 },
    { IMAGE_GATHER4_CL_V4_V2_gfx10, 572 },
    { IMAGE_GATHER4_CL_V4_V2_nsa_gfx10, 582 },
    { IMAGE_GATHER4_CL_V4_V3, 594 },
    { IMAGE_GATHER4_CL_V4_V3_gfx10, 573 },
    { IMAGE_GATHER4_CL_V4_V3_nsa_gfx10, 583 },
    { IMAGE_GATHER4_CL_V4_V4, 595 },
    { IMAGE_GATHER4_CL_V4_V4_gfx10, 574 },
    { IMAGE_GATHER4_CL_V4_V4_nsa_gfx10, 584 },
    { IMAGE_GATHER4_CL_V5_V1, 596 },
    { IMAGE_GATHER4_CL_V5_V1_gfx10, 575 },
    { IMAGE_GATHER4_CL_V5_V2, 597 },
    { IMAGE_GATHER4_CL_V5_V2_gfx10, 576 },
    { IMAGE_GATHER4_CL_V5_V2_nsa_gfx10, 585 },
    { IMAGE_GATHER4_CL_V5_V3, 598 },
    { IMAGE_GATHER4_CL_V5_V3_gfx10, 577 },
    { IMAGE_GATHER4_CL_V5_V3_nsa_gfx10, 586 },
    { IMAGE_GATHER4_CL_V5_V4, 599 },
    { IMAGE_GATHER4_CL_V5_V4_gfx10, 578 },
    { IMAGE_GATHER4_CL_V5_V4_nsa_gfx10, 587 },
    { IMAGE_GATHER4_C_B_CL_O_V2_V4, 711 },
    { IMAGE_GATHER4_C_B_CL_O_V2_V4_gfx10, 693 },
    { IMAGE_GATHER4_C_B_CL_O_V2_V4_nsa_gfx10, 699 },
    { IMAGE_GATHER4_C_B_CL_O_V2_V5_nsa_gfx10, 700 },
    { IMAGE_GATHER4_C_B_CL_O_V2_V6_nsa_gfx10, 701 },
    { IMAGE_GATHER4_C_B_CL_O_V2_V7_nsa_gfx10, 702 },
    { IMAGE_GATHER4_C_B_CL_O_V2_V8, 712 },
    { IMAGE_GATHER4_C_B_CL_O_V2_V8_gfx10, 694 },
    { IMAGE_GATHER4_C_B_CL_O_V4_V4, 713 },
    { IMAGE_GATHER4_C_B_CL_O_V4_V4_gfx10, 695 },
    { IMAGE_GATHER4_C_B_CL_O_V4_V4_nsa_gfx10, 703 },
    { IMAGE_GATHER4_C_B_CL_O_V4_V5_nsa_gfx10, 704 },
    { IMAGE_GATHER4_C_B_CL_O_V4_V6_nsa_gfx10, 705 },
    { IMAGE_GATHER4_C_B_CL_O_V4_V7_nsa_gfx10, 706 },
    { IMAGE_GATHER4_C_B_CL_O_V4_V8, 714 },
    { IMAGE_GATHER4_C_B_CL_O_V4_V8_gfx10, 696 },
    { IMAGE_GATHER4_C_B_CL_O_V5_V4, 715 },
    { IMAGE_GATHER4_C_B_CL_O_V5_V4_gfx10, 697 },
    { IMAGE_GATHER4_C_B_CL_O_V5_V4_nsa_gfx10, 707 },
    { IMAGE_GATHER4_C_B_CL_O_V5_V5_nsa_gfx10, 708 },
    { IMAGE_GATHER4_C_B_CL_O_V5_V6_nsa_gfx10, 709 },
    { IMAGE_GATHER4_C_B_CL_O_V5_V7_nsa_gfx10, 710 },
    { IMAGE_GATHER4_C_B_CL_O_V5_V8, 716 },
    { IMAGE_GATHER4_C_B_CL_O_V5_V8_gfx10, 698 },
    { IMAGE_GATHER4_C_B_CL_V2_V3, 684 },
    { IMAGE_GATHER4_C_B_CL_V2_V3_gfx10, 663 },
    { IMAGE_GATHER4_C_B_CL_V2_V3_nsa_gfx10, 672 },
    { IMAGE_GATHER4_C_B_CL_V2_V4, 685 },
    { IMAGE_GATHER4_C_B_CL_V2_V4_gfx10, 664 },
    { IMAGE_GATHER4_C_B_CL_V2_V4_nsa_gfx10, 673 },
    { IMAGE_GATHER4_C_B_CL_V2_V5_nsa_gfx10, 674 },
    { IMAGE_GATHER4_C_B_CL_V2_V6_nsa_gfx10, 675 },
    { IMAGE_GATHER4_C_B_CL_V2_V8, 686 },
    { IMAGE_GATHER4_C_B_CL_V2_V8_gfx10, 665 },
    { IMAGE_GATHER4_C_B_CL_V4_V3, 687 },
    { IMAGE_GATHER4_C_B_CL_V4_V3_gfx10, 666 },
    { IMAGE_GATHER4_C_B_CL_V4_V3_nsa_gfx10, 676 },
    { IMAGE_GATHER4_C_B_CL_V4_V4, 688 },
    { IMAGE_GATHER4_C_B_CL_V4_V4_gfx10, 667 },
    { IMAGE_GATHER4_C_B_CL_V4_V4_nsa_gfx10, 677 },
    { IMAGE_GATHER4_C_B_CL_V4_V5_nsa_gfx10, 678 },
    { IMAGE_GATHER4_C_B_CL_V4_V6_nsa_gfx10, 679 },
    { IMAGE_GATHER4_C_B_CL_V4_V8, 689 },
    { IMAGE_GATHER4_C_B_CL_V4_V8_gfx10, 668 },
    { IMAGE_GATHER4_C_B_CL_V5_V3, 690 },
    { IMAGE_GATHER4_C_B_CL_V5_V3_gfx10, 669 },
    { IMAGE_GATHER4_C_B_CL_V5_V3_nsa_gfx10, 680 },
    { IMAGE_GATHER4_C_B_CL_V5_V4, 691 },
    { IMAGE_GATHER4_C_B_CL_V5_V4_gfx10, 670 },
    { IMAGE_GATHER4_C_B_CL_V5_V4_nsa_gfx10, 681 },
    { IMAGE_GATHER4_C_B_CL_V5_V5_nsa_gfx10, 682 },
    { IMAGE_GATHER4_C_B_CL_V5_V6_nsa_gfx10, 683 },
    { IMAGE_GATHER4_C_B_CL_V5_V8, 692 },
    { IMAGE_GATHER4_C_B_CL_V5_V8_gfx10, 671 },
    { IMAGE_GATHER4_C_B_O_V2_V4, 732 },
    { IMAGE_GATHER4_C_B_O_V2_V4_gfx10, 717 },
    { IMAGE_GATHER4_C_B_O_V2_V4_nsa_gfx10, 723 },
    { IMAGE_GATHER4_C_B_O_V2_V5_nsa_gfx10, 724 },
    { IMAGE_GATHER4_C_B_O_V2_V6_nsa_gfx10, 725 },
    { IMAGE_GATHER4_C_B_O_V2_V8, 733 },
    { IMAGE_GATHER4_C_B_O_V2_V8_gfx10, 718 },
    { IMAGE_GATHER4_C_B_O_V4_V4, 734 },
    { IMAGE_GATHER4_C_B_O_V4_V4_gfx10, 719 },
    { IMAGE_GATHER4_C_B_O_V4_V4_nsa_gfx10, 726 },
    { IMAGE_GATHER4_C_B_O_V4_V5_nsa_gfx10, 727 },
    { IMAGE_GATHER4_C_B_O_V4_V6_nsa_gfx10, 728 },
    { IMAGE_GATHER4_C_B_O_V4_V8, 735 },
    { IMAGE_GATHER4_C_B_O_V4_V8_gfx10, 720 },
    { IMAGE_GATHER4_C_B_O_V5_V4, 736 },
    { IMAGE_GATHER4_C_B_O_V5_V4_gfx10, 721 },
    { IMAGE_GATHER4_C_B_O_V5_V4_nsa_gfx10, 729 },
    { IMAGE_GATHER4_C_B_O_V5_V5_nsa_gfx10, 730 },
    { IMAGE_GATHER4_C_B_O_V5_V6_nsa_gfx10, 731 },
    { IMAGE_GATHER4_C_B_O_V5_V8, 737 },
    { IMAGE_GATHER4_C_B_O_V5_V8_gfx10, 722 },
    { IMAGE_GATHER4_C_B_V2_V3, 654 },
    { IMAGE_GATHER4_C_B_V2_V3_gfx10, 636 },
    { IMAGE_GATHER4_C_B_V2_V3_nsa_gfx10, 645 },
    { IMAGE_GATHER4_C_B_V2_V4, 655 },
    { IMAGE_GATHER4_C_B_V2_V4_gfx10, 637 },
    { IMAGE_GATHER4_C_B_V2_V4_nsa_gfx10, 646 },
    { IMAGE_GATHER4_C_B_V2_V5_nsa_gfx10, 647 },
    { IMAGE_GATHER4_C_B_V2_V8, 656 },
    { IMAGE_GATHER4_C_B_V2_V8_gfx10, 638 },
    { IMAGE_GATHER4_C_B_V4_V3, 657 },
    { IMAGE_GATHER4_C_B_V4_V3_gfx10, 639 },
    { IMAGE_GATHER4_C_B_V4_V3_nsa_gfx10, 648 },
    { IMAGE_GATHER4_C_B_V4_V4, 658 },
    { IMAGE_GATHER4_C_B_V4_V4_gfx10, 640 },
    { IMAGE_GATHER4_C_B_V4_V4_nsa_gfx10, 649 },
    { IMAGE_GATHER4_C_B_V4_V5_nsa_gfx10, 650 },
    { IMAGE_GATHER4_C_B_V4_V8, 659 },
    { IMAGE_GATHER4_C_B_V4_V8_gfx10, 641 },
    { IMAGE_GATHER4_C_B_V5_V3, 660 },
    { IMAGE_GATHER4_C_B_V5_V3_gfx10, 642 },
    { IMAGE_GATHER4_C_B_V5_V3_nsa_gfx10, 651 },
    { IMAGE_GATHER4_C_B_V5_V4, 661 },
    { IMAGE_GATHER4_C_B_V5_V4_gfx10, 643 },
    { IMAGE_GATHER4_C_B_V5_V4_nsa_gfx10, 652 },
    { IMAGE_GATHER4_C_B_V5_V5_nsa_gfx10, 653 },
    { IMAGE_GATHER4_C_B_V5_V8, 662 },
    { IMAGE_GATHER4_C_B_V5_V8_gfx10, 644 },
    { IMAGE_GATHER4_C_CL_O_V2_V3, 795 },
    { IMAGE_GATHER4_C_CL_O_V2_V3_gfx10, 774 },
    { IMAGE_GATHER4_C_CL_O_V2_V3_nsa_gfx10, 783 },
    { IMAGE_GATHER4_C_CL_O_V2_V4, 796 },
    { IMAGE_GATHER4_C_CL_O_V2_V4_gfx10, 775 },
    { IMAGE_GATHER4_C_CL_O_V2_V4_nsa_gfx10, 784 },
    { IMAGE_GATHER4_C_CL_O_V2_V5_nsa_gfx10, 785 },
    { IMAGE_GATHER4_C_CL_O_V2_V6_nsa_gfx10, 786 },
    { IMAGE_GATHER4_C_CL_O_V2_V8, 797 },
    { IMAGE_GATHER4_C_CL_O_V2_V8_gfx10, 776 },
    { IMAGE_GATHER4_C_CL_O_V4_V3, 798 },
    { IMAGE_GATHER4_C_CL_O_V4_V3_gfx10, 777 },
    { IMAGE_GATHER4_C_CL_O_V4_V3_nsa_gfx10, 787 },
    { IMAGE_GATHER4_C_CL_O_V4_V4, 799 },
    { IMAGE_GATHER4_C_CL_O_V4_V4_gfx10, 778 },
    { IMAGE_GATHER4_C_CL_O_V4_V4_nsa_gfx10, 788 },
    { IMAGE_GATHER4_C_CL_O_V4_V5_nsa_gfx10, 789 },
    { IMAGE_GATHER4_C_CL_O_V4_V6_nsa_gfx10, 790 },
    { IMAGE_GATHER4_C_CL_O_V4_V8, 800 },
    { IMAGE_GATHER4_C_CL_O_V4_V8_gfx10, 779 },
    { IMAGE_GATHER4_C_CL_O_V5_V3, 801 },
    { IMAGE_GATHER4_C_CL_O_V5_V3_gfx10, 780 },
    { IMAGE_GATHER4_C_CL_O_V5_V3_nsa_gfx10, 791 },
    { IMAGE_GATHER4_C_CL_O_V5_V4, 802 },
    { IMAGE_GATHER4_C_CL_O_V5_V4_gfx10, 781 },
    { IMAGE_GATHER4_C_CL_O_V5_V4_nsa_gfx10, 792 },
    { IMAGE_GATHER4_C_CL_O_V5_V5_nsa_gfx10, 793 },
    { IMAGE_GATHER4_C_CL_O_V5_V6_nsa_gfx10, 794 },
    { IMAGE_GATHER4_C_CL_O_V5_V8, 803 },
    { IMAGE_GATHER4_C_CL_O_V5_V8_gfx10, 782 },
    { IMAGE_GATHER4_C_CL_V2_V2, 762 },
    { IMAGE_GATHER4_C_CL_V2_V2_gfx10, 738 },
    { IMAGE_GATHER4_C_CL_V2_V2_nsa_gfx10, 750 },
    { IMAGE_GATHER4_C_CL_V2_V3, 763 },
    { IMAGE_GATHER4_C_CL_V2_V3_gfx10, 739 },
    { IMAGE_GATHER4_C_CL_V2_V3_nsa_gfx10, 751 },
    { IMAGE_GATHER4_C_CL_V2_V4, 764 },
    { IMAGE_GATHER4_C_CL_V2_V4_gfx10, 740 },
    { IMAGE_GATHER4_C_CL_V2_V4_nsa_gfx10, 752 },
    { IMAGE_GATHER4_C_CL_V2_V5_nsa_gfx10, 753 },
    { IMAGE_GATHER4_C_CL_V2_V8, 765 },
    { IMAGE_GATHER4_C_CL_V2_V8_gfx10, 741 },
    { IMAGE_GATHER4_C_CL_V4_V2, 766 },
    { IMAGE_GATHER4_C_CL_V4_V2_gfx10, 742 },
    { IMAGE_GATHER4_C_CL_V4_V2_nsa_gfx10, 754 },
    { IMAGE_GATHER4_C_CL_V4_V3, 767 },
    { IMAGE_GATHER4_C_CL_V4_V3_gfx10, 743 },
    { IMAGE_GATHER4_C_CL_V4_V3_nsa_gfx10, 755 },
    { IMAGE_GATHER4_C_CL_V4_V4, 768 },
    { IMAGE_GATHER4_C_CL_V4_V4_gfx10, 744 },
    { IMAGE_GATHER4_C_CL_V4_V4_nsa_gfx10, 756 },
    { IMAGE_GATHER4_C_CL_V4_V5_nsa_gfx10, 757 },
    { IMAGE_GATHER4_C_CL_V4_V8, 769 },
    { IMAGE_GATHER4_C_CL_V4_V8_gfx10, 745 },
    { IMAGE_GATHER4_C_CL_V5_V2, 770 },
    { IMAGE_GATHER4_C_CL_V5_V2_gfx10, 746 },
    { IMAGE_GATHER4_C_CL_V5_V2_nsa_gfx10, 758 },
    { IMAGE_GATHER4_C_CL_V5_V3, 771 },
    { IMAGE_GATHER4_C_CL_V5_V3_gfx10, 747 },
    { IMAGE_GATHER4_C_CL_V5_V3_nsa_gfx10, 759 },
    { IMAGE_GATHER4_C_CL_V5_V4, 772 },
    { IMAGE_GATHER4_C_CL_V5_V4_gfx10, 748 },
    { IMAGE_GATHER4_C_CL_V5_V4_nsa_gfx10, 760 },
    { IMAGE_GATHER4_C_CL_V5_V5_nsa_gfx10, 761 },
    { IMAGE_GATHER4_C_CL_V5_V8, 773 },
    { IMAGE_GATHER4_C_CL_V5_V8_gfx10, 749 },
    { IMAGE_GATHER4_C_LZ_O_V2_V3, 885 },
    { IMAGE_GATHER4_C_LZ_O_V2_V3_gfx10, 867 },
    { IMAGE_GATHER4_C_LZ_O_V2_V3_nsa_gfx10, 876 },
    { IMAGE_GATHER4_C_LZ_O_V2_V4, 886 },
    { IMAGE_GATHER4_C_LZ_O_V2_V4_gfx10, 868 },
    { IMAGE_GATHER4_C_LZ_O_V2_V4_nsa_gfx10, 877 },
    { IMAGE_GATHER4_C_LZ_O_V2_V5_nsa_gfx10, 878 },
    { IMAGE_GATHER4_C_LZ_O_V2_V8, 887 },
    { IMAGE_GATHER4_C_LZ_O_V2_V8_gfx10, 869 },
    { IMAGE_GATHER4_C_LZ_O_V4_V3, 888 },
    { IMAGE_GATHER4_C_LZ_O_V4_V3_gfx10, 870 },
    { IMAGE_GATHER4_C_LZ_O_V4_V3_nsa_gfx10, 879 },
    { IMAGE_GATHER4_C_LZ_O_V4_V4, 889 },
    { IMAGE_GATHER4_C_LZ_O_V4_V4_gfx10, 871 },
    { IMAGE_GATHER4_C_LZ_O_V4_V4_nsa_gfx10, 880 },
    { IMAGE_GATHER4_C_LZ_O_V4_V5_nsa_gfx10, 881 },
    { IMAGE_GATHER4_C_LZ_O_V4_V8, 890 },
    { IMAGE_GATHER4_C_LZ_O_V4_V8_gfx10, 872 },
    { IMAGE_GATHER4_C_LZ_O_V5_V3, 891 },
    { IMAGE_GATHER4_C_LZ_O_V5_V3_gfx10, 873 },
    { IMAGE_GATHER4_C_LZ_O_V5_V3_nsa_gfx10, 882 },
    { IMAGE_GATHER4_C_LZ_O_V5_V4, 892 },
    { IMAGE_GATHER4_C_LZ_O_V5_V4_gfx10, 874 },
    { IMAGE_GATHER4_C_LZ_O_V5_V4_nsa_gfx10, 883 },
    { IMAGE_GATHER4_C_LZ_O_V5_V5_nsa_gfx10, 884 },
    { IMAGE_GATHER4_C_LZ_O_V5_V8, 893 },
    { IMAGE_GATHER4_C_LZ_O_V5_V8_gfx10, 875 },
    { IMAGE_GATHER4_C_LZ_V2_V2, 858 },
    { IMAGE_GATHER4_C_LZ_V2_V2_gfx10, 840 },
    { IMAGE_GATHER4_C_LZ_V2_V2_nsa_gfx10, 849 },
    { IMAGE_GATHER4_C_LZ_V2_V3, 859 },
    { IMAGE_GATHER4_C_LZ_V2_V3_gfx10, 841 },
    { IMAGE_GATHER4_C_LZ_V2_V3_nsa_gfx10, 850 },
    { IMAGE_GATHER4_C_LZ_V2_V4, 860 },
    { IMAGE_GATHER4_C_LZ_V2_V4_gfx10, 842 },
    { IMAGE_GATHER4_C_LZ_V2_V4_nsa_gfx10, 851 },
    { IMAGE_GATHER4_C_LZ_V4_V2, 861 },
    { IMAGE_GATHER4_C_LZ_V4_V2_gfx10, 843 },
    { IMAGE_GATHER4_C_LZ_V4_V2_nsa_gfx10, 852 },
    { IMAGE_GATHER4_C_LZ_V4_V3, 862 },
    { IMAGE_GATHER4_C_LZ_V4_V3_gfx10, 844 },
    { IMAGE_GATHER4_C_LZ_V4_V3_nsa_gfx10, 853 },
    { IMAGE_GATHER4_C_LZ_V4_V4, 863 },
    { IMAGE_GATHER4_C_LZ_V4_V4_gfx10, 845 },
    { IMAGE_GATHER4_C_LZ_V4_V4_nsa_gfx10, 854 },
    { IMAGE_GATHER4_C_LZ_V5_V2, 864 },
    { IMAGE_GATHER4_C_LZ_V5_V2_gfx10, 846 },
    { IMAGE_GATHER4_C_LZ_V5_V2_nsa_gfx10, 855 },
    { IMAGE_GATHER4_C_LZ_V5_V3, 865 },
    { IMAGE_GATHER4_C_LZ_V5_V3_gfx10, 847 },
    { IMAGE_GATHER4_C_LZ_V5_V3_nsa_gfx10, 856 },
    { IMAGE_GATHER4_C_LZ_V5_V4, 866 },
    { IMAGE_GATHER4_C_LZ_V5_V4_gfx10, 848 },
    { IMAGE_GATHER4_C_LZ_V5_V4_nsa_gfx10, 857 },
    { IMAGE_GATHER4_C_L_O_V2_V3, 915 },
    { IMAGE_GATHER4_C_L_O_V2_V3_gfx10, 894 },
    { IMAGE_GATHER4_C_L_O_V2_V3_nsa_gfx10, 903 },
    { IMAGE_GATHER4_C_L_O_V2_V4, 916 },
    { IMAGE_GATHER4_C_L_O_V2_V4_gfx10, 895 },
    { IMAGE_GATHER4_C_L_O_V2_V4_nsa_gfx10, 904 },
    { IMAGE_GATHER4_C_L_O_V2_V5_nsa_gfx10, 905 },
    { IMAGE_GATHER4_C_L_O_V2_V6_nsa_gfx10, 906 },
    { IMAGE_GATHER4_C_L_O_V2_V8, 917 },
    { IMAGE_GATHER4_C_L_O_V2_V8_gfx10, 896 },
    { IMAGE_GATHER4_C_L_O_V4_V3, 918 },
    { IMAGE_GATHER4_C_L_O_V4_V3_gfx10, 897 },
    { IMAGE_GATHER4_C_L_O_V4_V3_nsa_gfx10, 907 },
    { IMAGE_GATHER4_C_L_O_V4_V4, 919 },
    { IMAGE_GATHER4_C_L_O_V4_V4_gfx10, 898 },
    { IMAGE_GATHER4_C_L_O_V4_V4_nsa_gfx10, 908 },
    { IMAGE_GATHER4_C_L_O_V4_V5_nsa_gfx10, 909 },
    { IMAGE_GATHER4_C_L_O_V4_V6_nsa_gfx10, 910 },
    { IMAGE_GATHER4_C_L_O_V4_V8, 920 },
    { IMAGE_GATHER4_C_L_O_V4_V8_gfx10, 899 },
    { IMAGE_GATHER4_C_L_O_V5_V3, 921 },
    { IMAGE_GATHER4_C_L_O_V5_V3_gfx10, 900 },
    { IMAGE_GATHER4_C_L_O_V5_V3_nsa_gfx10, 911 },
    { IMAGE_GATHER4_C_L_O_V5_V4, 922 },
    { IMAGE_GATHER4_C_L_O_V5_V4_gfx10, 901 },
    { IMAGE_GATHER4_C_L_O_V5_V4_nsa_gfx10, 912 },
    { IMAGE_GATHER4_C_L_O_V5_V5_nsa_gfx10, 913 },
    { IMAGE_GATHER4_C_L_O_V5_V6_nsa_gfx10, 914 },
    { IMAGE_GATHER4_C_L_O_V5_V8, 923 },
    { IMAGE_GATHER4_C_L_O_V5_V8_gfx10, 902 },
    { IMAGE_GATHER4_C_L_V2_V2, 828 },
    { IMAGE_GATHER4_C_L_V2_V2_gfx10, 804 },
    { IMAGE_GATHER4_C_L_V2_V2_nsa_gfx10, 816 },
    { IMAGE_GATHER4_C_L_V2_V3, 829 },
    { IMAGE_GATHER4_C_L_V2_V3_gfx10, 805 },
    { IMAGE_GATHER4_C_L_V2_V3_nsa_gfx10, 817 },
    { IMAGE_GATHER4_C_L_V2_V4, 830 },
    { IMAGE_GATHER4_C_L_V2_V4_gfx10, 806 },
    { IMAGE_GATHER4_C_L_V2_V4_nsa_gfx10, 818 },
    { IMAGE_GATHER4_C_L_V2_V5_nsa_gfx10, 819 },
    { IMAGE_GATHER4_C_L_V2_V8, 831 },
    { IMAGE_GATHER4_C_L_V2_V8_gfx10, 807 },
    { IMAGE_GATHER4_C_L_V4_V2, 832 },
    { IMAGE_GATHER4_C_L_V4_V2_gfx10, 808 },
    { IMAGE_GATHER4_C_L_V4_V2_nsa_gfx10, 820 },
    { IMAGE_GATHER4_C_L_V4_V3, 833 },
    { IMAGE_GATHER4_C_L_V4_V3_gfx10, 809 },
    { IMAGE_GATHER4_C_L_V4_V3_nsa_gfx10, 821 },
    { IMAGE_GATHER4_C_L_V4_V4, 834 },
    { IMAGE_GATHER4_C_L_V4_V4_gfx10, 810 },
    { IMAGE_GATHER4_C_L_V4_V4_nsa_gfx10, 822 },
    { IMAGE_GATHER4_C_L_V4_V5_nsa_gfx10, 823 },
    { IMAGE_GATHER4_C_L_V4_V8, 835 },
    { IMAGE_GATHER4_C_L_V4_V8_gfx10, 811 },
    { IMAGE_GATHER4_C_L_V5_V2, 836 },
    { IMAGE_GATHER4_C_L_V5_V2_gfx10, 812 },
    { IMAGE_GATHER4_C_L_V5_V2_nsa_gfx10, 824 },
    { IMAGE_GATHER4_C_L_V5_V3, 837 },
    { IMAGE_GATHER4_C_L_V5_V3_gfx10, 813 },
    { IMAGE_GATHER4_C_L_V5_V3_nsa_gfx10, 825 },
    { IMAGE_GATHER4_C_L_V5_V4, 838 },
    { IMAGE_GATHER4_C_L_V5_V4_gfx10, 814 },
    { IMAGE_GATHER4_C_L_V5_V4_nsa_gfx10, 826 },
    { IMAGE_GATHER4_C_L_V5_V5_nsa_gfx10, 827 },
    { IMAGE_GATHER4_C_L_V5_V8, 839 },
    { IMAGE_GATHER4_C_L_V5_V8_gfx10, 815 },
    { IMAGE_GATHER4_C_O_V2_V3, 942 },
    { IMAGE_GATHER4_C_O_V2_V3_gfx10, 924 },
    { IMAGE_GATHER4_C_O_V2_V3_nsa_gfx10, 933 },
    { IMAGE_GATHER4_C_O_V2_V4, 943 },
    { IMAGE_GATHER4_C_O_V2_V4_gfx10, 925 },
    { IMAGE_GATHER4_C_O_V2_V4_nsa_gfx10, 934 },
    { IMAGE_GATHER4_C_O_V2_V5_nsa_gfx10, 935 },
    { IMAGE_GATHER4_C_O_V2_V8, 944 },
    { IMAGE_GATHER4_C_O_V2_V8_gfx10, 926 },
    { IMAGE_GATHER4_C_O_V4_V3, 945 },
    { IMAGE_GATHER4_C_O_V4_V3_gfx10, 927 },
    { IMAGE_GATHER4_C_O_V4_V3_nsa_gfx10, 936 },
    { IMAGE_GATHER4_C_O_V4_V4, 946 },
    { IMAGE_GATHER4_C_O_V4_V4_gfx10, 928 },
    { IMAGE_GATHER4_C_O_V4_V4_nsa_gfx10, 937 },
    { IMAGE_GATHER4_C_O_V4_V5_nsa_gfx10, 938 },
    { IMAGE_GATHER4_C_O_V4_V8, 947 },
    { IMAGE_GATHER4_C_O_V4_V8_gfx10, 929 },
    { IMAGE_GATHER4_C_O_V5_V3, 948 },
    { IMAGE_GATHER4_C_O_V5_V3_gfx10, 930 },
    { IMAGE_GATHER4_C_O_V5_V3_nsa_gfx10, 939 },
    { IMAGE_GATHER4_C_O_V5_V4, 949 },
    { IMAGE_GATHER4_C_O_V5_V4_gfx10, 931 },
    { IMAGE_GATHER4_C_O_V5_V4_nsa_gfx10, 940 },
    { IMAGE_GATHER4_C_O_V5_V5_nsa_gfx10, 941 },
    { IMAGE_GATHER4_C_O_V5_V8, 950 },
    { IMAGE_GATHER4_C_O_V5_V8_gfx10, 932 },
    { IMAGE_GATHER4_C_V2_V2, 558 },
    { IMAGE_GATHER4_C_V2_V2_gfx10, 540 },
    { IMAGE_GATHER4_C_V2_V2_nsa_gfx10, 549 },
    { IMAGE_GATHER4_C_V2_V3, 559 },
    { IMAGE_GATHER4_C_V2_V3_gfx10, 541 },
    { IMAGE_GATHER4_C_V2_V3_nsa_gfx10, 550 },
    { IMAGE_GATHER4_C_V2_V4, 560 },
    { IMAGE_GATHER4_C_V2_V4_gfx10, 542 },
    { IMAGE_GATHER4_C_V2_V4_nsa_gfx10, 551 },
    { IMAGE_GATHER4_C_V4_V2, 561 },
    { IMAGE_GATHER4_C_V4_V2_gfx10, 543 },
    { IMAGE_GATHER4_C_V4_V2_nsa_gfx10, 552 },
    { IMAGE_GATHER4_C_V4_V3, 562 },
    { IMAGE_GATHER4_C_V4_V3_gfx10, 544 },
    { IMAGE_GATHER4_C_V4_V3_nsa_gfx10, 553 },
    { IMAGE_GATHER4_C_V4_V4, 563 },
    { IMAGE_GATHER4_C_V4_V4_gfx10, 545 },
    { IMAGE_GATHER4_C_V4_V4_nsa_gfx10, 554 },
    { IMAGE_GATHER4_C_V5_V2, 564 },
    { IMAGE_GATHER4_C_V5_V2_gfx10, 546 },
    { IMAGE_GATHER4_C_V5_V2_nsa_gfx10, 555 },
    { IMAGE_GATHER4_C_V5_V3, 565 },
    { IMAGE_GATHER4_C_V5_V3_gfx10, 547 },
    { IMAGE_GATHER4_C_V5_V3_nsa_gfx10, 556 },
    { IMAGE_GATHER4_C_V5_V4, 566 },
    { IMAGE_GATHER4_C_V5_V4_gfx10, 548 },
    { IMAGE_GATHER4_C_V5_V4_nsa_gfx10, 557 },
    { IMAGE_GATHER4_LZ_O_V2_V2, 1032 },
    { IMAGE_GATHER4_LZ_O_V2_V2_gfx10, 1014 },
    { IMAGE_GATHER4_LZ_O_V2_V2_nsa_gfx10, 1023 },
    { IMAGE_GATHER4_LZ_O_V2_V3, 1033 },
    { IMAGE_GATHER4_LZ_O_V2_V3_gfx10, 1015 },
    { IMAGE_GATHER4_LZ_O_V2_V3_nsa_gfx10, 1024 },
    { IMAGE_GATHER4_LZ_O_V2_V4, 1034 },
    { IMAGE_GATHER4_LZ_O_V2_V4_gfx10, 1016 },
    { IMAGE_GATHER4_LZ_O_V2_V4_nsa_gfx10, 1025 },
    { IMAGE_GATHER4_LZ_O_V4_V2, 1035 },
    { IMAGE_GATHER4_LZ_O_V4_V2_gfx10, 1017 },
    { IMAGE_GATHER4_LZ_O_V4_V2_nsa_gfx10, 1026 },
    { IMAGE_GATHER4_LZ_O_V4_V3, 1036 },
    { IMAGE_GATHER4_LZ_O_V4_V3_gfx10, 1018 },
    { IMAGE_GATHER4_LZ_O_V4_V3_nsa_gfx10, 1027 },
    { IMAGE_GATHER4_LZ_O_V4_V4, 1037 },
    { IMAGE_GATHER4_LZ_O_V4_V4_gfx10, 1019 },
    { IMAGE_GATHER4_LZ_O_V4_V4_nsa_gfx10, 1028 },
    { IMAGE_GATHER4_LZ_O_V5_V2, 1038 },
    { IMAGE_GATHER4_LZ_O_V5_V2_gfx10, 1020 },
    { IMAGE_GATHER4_LZ_O_V5_V2_nsa_gfx10, 1029 },
    { IMAGE_GATHER4_LZ_O_V5_V3, 1039 },
    { IMAGE_GATHER4_LZ_O_V5_V3_gfx10, 1021 },
    { IMAGE_GATHER4_LZ_O_V5_V3_nsa_gfx10, 1030 },
    { IMAGE_GATHER4_LZ_O_V5_V4, 1040 },
    { IMAGE_GATHER4_LZ_O_V5_V4_gfx10, 1022 },
    { IMAGE_GATHER4_LZ_O_V5_V4_nsa_gfx10, 1031 },
    { IMAGE_GATHER4_LZ_V2_V1, 1002 },
    { IMAGE_GATHER4_LZ_V2_V1_gfx10, 984 },
    { IMAGE_GATHER4_LZ_V2_V2, 1003 },
    { IMAGE_GATHER4_LZ_V2_V2_gfx10, 985 },
    { IMAGE_GATHER4_LZ_V2_V2_nsa_gfx10, 996 },
    { IMAGE_GATHER4_LZ_V2_V3, 1004 },
    { IMAGE_GATHER4_LZ_V2_V3_gfx10, 986 },
    { IMAGE_GATHER4_LZ_V2_V3_nsa_gfx10, 997 },
    { IMAGE_GATHER4_LZ_V2_V4, 1005 },
    { IMAGE_GATHER4_LZ_V2_V4_gfx10, 987 },
    { IMAGE_GATHER4_LZ_V4_V1, 1006 },
    { IMAGE_GATHER4_LZ_V4_V1_gfx10, 988 },
    { IMAGE_GATHER4_LZ_V4_V2, 1007 },
    { IMAGE_GATHER4_LZ_V4_V2_gfx10, 989 },
    { IMAGE_GATHER4_LZ_V4_V2_nsa_gfx10, 998 },
    { IMAGE_GATHER4_LZ_V4_V3, 1008 },
    { IMAGE_GATHER4_LZ_V4_V3_gfx10, 990 },
    { IMAGE_GATHER4_LZ_V4_V3_nsa_gfx10, 999 },
    { IMAGE_GATHER4_LZ_V4_V4, 1009 },
    { IMAGE_GATHER4_LZ_V4_V4_gfx10, 991 },
    { IMAGE_GATHER4_LZ_V5_V1, 1010 },
    { IMAGE_GATHER4_LZ_V5_V1_gfx10, 992 },
    { IMAGE_GATHER4_LZ_V5_V2, 1011 },
    { IMAGE_GATHER4_LZ_V5_V2_gfx10, 993 },
    { IMAGE_GATHER4_LZ_V5_V2_nsa_gfx10, 1000 },
    { IMAGE_GATHER4_LZ_V5_V3, 1012 },
    { IMAGE_GATHER4_LZ_V5_V3_gfx10, 994 },
    { IMAGE_GATHER4_LZ_V5_V3_nsa_gfx10, 1001 },
    { IMAGE_GATHER4_LZ_V5_V4, 1013 },
    { IMAGE_GATHER4_LZ_V5_V4_gfx10, 995 },
    { IMAGE_GATHER4_L_O_V2_V2, 1065 },
    { IMAGE_GATHER4_L_O_V2_V2_gfx10, 1041 },
    { IMAGE_GATHER4_L_O_V2_V2_nsa_gfx10, 1053 },
    { IMAGE_GATHER4_L_O_V2_V3, 1066 },
    { IMAGE_GATHER4_L_O_V2_V3_gfx10, 1042 },
    { IMAGE_GATHER4_L_O_V2_V3_nsa_gfx10, 1054 },
    { IMAGE_GATHER4_L_O_V2_V4, 1067 },
    { IMAGE_GATHER4_L_O_V2_V4_gfx10, 1043 },
    { IMAGE_GATHER4_L_O_V2_V4_nsa_gfx10, 1055 },
    { IMAGE_GATHER4_L_O_V2_V5_nsa_gfx10, 1056 },
    { IMAGE_GATHER4_L_O_V2_V8, 1068 },
    { IMAGE_GATHER4_L_O_V2_V8_gfx10, 1044 },
    { IMAGE_GATHER4_L_O_V4_V2, 1069 },
    { IMAGE_GATHER4_L_O_V4_V2_gfx10, 1045 },
    { IMAGE_GATHER4_L_O_V4_V2_nsa_gfx10, 1057 },
    { IMAGE_GATHER4_L_O_V4_V3, 1070 },
    { IMAGE_GATHER4_L_O_V4_V3_gfx10, 1046 },
    { IMAGE_GATHER4_L_O_V4_V3_nsa_gfx10, 1058 },
    { IMAGE_GATHER4_L_O_V4_V4, 1071 },
    { IMAGE_GATHER4_L_O_V4_V4_gfx10, 1047 },
    { IMAGE_GATHER4_L_O_V4_V4_nsa_gfx10, 1059 },
    { IMAGE_GATHER4_L_O_V4_V5_nsa_gfx10, 1060 },
    { IMAGE_GATHER4_L_O_V4_V8, 1072 },
    { IMAGE_GATHER4_L_O_V4_V8_gfx10, 1048 },
    { IMAGE_GATHER4_L_O_V5_V2, 1073 },
    { IMAGE_GATHER4_L_O_V5_V2_gfx10, 1049 },
    { IMAGE_GATHER4_L_O_V5_V2_nsa_gfx10, 1061 },
    { IMAGE_GATHER4_L_O_V5_V3, 1074 },
    { IMAGE_GATHER4_L_O_V5_V3_gfx10, 1050 },
    { IMAGE_GATHER4_L_O_V5_V3_nsa_gfx10, 1062 },
    { IMAGE_GATHER4_L_O_V5_V4, 1075 },
    { IMAGE_GATHER4_L_O_V5_V4_gfx10, 1051 },
    { IMAGE_GATHER4_L_O_V5_V4_nsa_gfx10, 1063 },
    { IMAGE_GATHER4_L_O_V5_V5_nsa_gfx10, 1064 },
    { IMAGE_GATHER4_L_O_V5_V8, 1076 },
    { IMAGE_GATHER4_L_O_V5_V8_gfx10, 1052 },
    { IMAGE_GATHER4_L_V2_V1, 972 },
    { IMAGE_GATHER4_L_V2_V1_gfx10, 951 },
    { IMAGE_GATHER4_L_V2_V2, 973 },
    { IMAGE_GATHER4_L_V2_V2_gfx10, 952 },
    { IMAGE_GATHER4_L_V2_V2_nsa_gfx10, 963 },
    { IMAGE_GATHER4_L_V2_V3, 974 },
    { IMAGE_GATHER4_L_V2_V3_gfx10, 953 },
    { IMAGE_GATHER4_L_V2_V3_nsa_gfx10, 964 },
    { IMAGE_GATHER4_L_V2_V4, 975 },
    { IMAGE_GATHER4_L_V2_V4_gfx10, 954 },
    { IMAGE_GATHER4_L_V2_V4_nsa_gfx10, 965 },
    { IMAGE_GATHER4_L_V4_V1, 976 },
    { IMAGE_GATHER4_L_V4_V1_gfx10, 955 },
    { IMAGE_GATHER4_L_V4_V2, 977 },
    { IMAGE_GATHER4_L_V4_V2_gfx10, 956 },
    { IMAGE_GATHER4_L_V4_V2_nsa_gfx10, 966 },
    { IMAGE_GATHER4_L_V4_V3, 978 },
    { IMAGE_GATHER4_L_V4_V3_gfx10, 957 },
    { IMAGE_GATHER4_L_V4_V3_nsa_gfx10, 967 },
    { IMAGE_GATHER4_L_V4_V4, 979 },
    { IMAGE_GATHER4_L_V4_V4_gfx10, 958 },
    { IMAGE_GATHER4_L_V4_V4_nsa_gfx10, 968 },
    { IMAGE_GATHER4_L_V5_V1, 980 },
    { IMAGE_GATHER4_L_V5_V1_gfx10, 959 },
    { IMAGE_GATHER4_L_V5_V2, 981 },
    { IMAGE_GATHER4_L_V5_V2_gfx10, 960 },
    { IMAGE_GATHER4_L_V5_V2_nsa_gfx10, 969 },
    { IMAGE_GATHER4_L_V5_V3, 982 },
    { IMAGE_GATHER4_L_V5_V3_gfx10, 961 },
    { IMAGE_GATHER4_L_V5_V3_nsa_gfx10, 970 },
    { IMAGE_GATHER4_L_V5_V4, 983 },
    { IMAGE_GATHER4_L_V5_V4_gfx10, 962 },
    { IMAGE_GATHER4_L_V5_V4_nsa_gfx10, 971 },
    { IMAGE_GATHER4_O_V2_V2, 1095 },
    { IMAGE_GATHER4_O_V2_V2_gfx10, 1077 },
    { IMAGE_GATHER4_O_V2_V2_nsa_gfx10, 1086 },
    { IMAGE_GATHER4_O_V2_V3, 1096 },
    { IMAGE_GATHER4_O_V2_V3_gfx10, 1078 },
    { IMAGE_GATHER4_O_V2_V3_nsa_gfx10, 1087 },
    { IMAGE_GATHER4_O_V2_V4, 1097 },
    { IMAGE_GATHER4_O_V2_V4_gfx10, 1079 },
    { IMAGE_GATHER4_O_V2_V4_nsa_gfx10, 1088 },
    { IMAGE_GATHER4_O_V4_V2, 1098 },
    { IMAGE_GATHER4_O_V4_V2_gfx10, 1080 },
    { IMAGE_GATHER4_O_V4_V2_nsa_gfx10, 1089 },
    { IMAGE_GATHER4_O_V4_V3, 1099 },
    { IMAGE_GATHER4_O_V4_V3_gfx10, 1081 },
    { IMAGE_GATHER4_O_V4_V3_nsa_gfx10, 1090 },
    { IMAGE_GATHER4_O_V4_V4, 1100 },
    { IMAGE_GATHER4_O_V4_V4_gfx10, 1082 },
    { IMAGE_GATHER4_O_V4_V4_nsa_gfx10, 1091 },
    { IMAGE_GATHER4_O_V5_V2, 1101 },
    { IMAGE_GATHER4_O_V5_V2_gfx10, 1083 },
    { IMAGE_GATHER4_O_V5_V2_nsa_gfx10, 1092 },
    { IMAGE_GATHER4_O_V5_V3, 1102 },
    { IMAGE_GATHER4_O_V5_V3_gfx10, 1084 },
    { IMAGE_GATHER4_O_V5_V3_nsa_gfx10, 1093 },
    { IMAGE_GATHER4_O_V5_V4, 1103 },
    { IMAGE_GATHER4_O_V5_V4_gfx10, 1085 },
    { IMAGE_GATHER4_O_V5_V4_nsa_gfx10, 1094 },
    { IMAGE_GATHER4_V2_V1, 408 },
    { IMAGE_GATHER4_V2_V1_gfx10, 390 },
    { IMAGE_GATHER4_V2_V2, 409 },
    { IMAGE_GATHER4_V2_V2_gfx10, 391 },
    { IMAGE_GATHER4_V2_V2_nsa_gfx10, 402 },
    { IMAGE_GATHER4_V2_V3, 410 },
    { IMAGE_GATHER4_V2_V3_gfx10, 392 },
    { IMAGE_GATHER4_V2_V3_nsa_gfx10, 403 },
    { IMAGE_GATHER4_V2_V4, 411 },
    { IMAGE_GATHER4_V2_V4_gfx10, 393 },
    { IMAGE_GATHER4_V4_V1, 412 },
    { IMAGE_GATHER4_V4_V1_gfx10, 394 },
    { IMAGE_GATHER4_V4_V2, 413 },
    { IMAGE_GATHER4_V4_V2_gfx10, 395 },
    { IMAGE_GATHER4_V4_V2_nsa_gfx10, 404 },
    { IMAGE_GATHER4_V4_V3, 414 },
    { IMAGE_GATHER4_V4_V3_gfx10, 396 },
    { IMAGE_GATHER4_V4_V3_nsa_gfx10, 405 },
    { IMAGE_GATHER4_V4_V4, 415 },
    { IMAGE_GATHER4_V4_V4_gfx10, 397 },
    { IMAGE_GATHER4_V5_V1, 416 },
    { IMAGE_GATHER4_V5_V1_gfx10, 398 },
    { IMAGE_GATHER4_V5_V2, 417 },
    { IMAGE_GATHER4_V5_V2_gfx10, 399 },
    { IMAGE_GATHER4_V5_V2_nsa_gfx10, 406 },
    { IMAGE_GATHER4_V5_V3, 418 },
    { IMAGE_GATHER4_V5_V3_gfx10, 400 },
    { IMAGE_GATHER4_V5_V3_nsa_gfx10, 407 },
    { IMAGE_GATHER4_V5_V4, 419 },
    { IMAGE_GATHER4_V5_V4_gfx10, 401 },
    { IMAGE_GET_LOD_V1_V1, 1134 },
    { IMAGE_GET_LOD_V1_V1_gfx10, 1104 },
    { IMAGE_GET_LOD_V1_V2, 1135 },
    { IMAGE_GET_LOD_V1_V2_gfx10, 1105 },
    { IMAGE_GET_LOD_V1_V2_nsa_gfx10, 1124 },
    { IMAGE_GET_LOD_V1_V3, 1136 },
    { IMAGE_GET_LOD_V1_V3_gfx10, 1106 },
    { IMAGE_GET_LOD_V1_V3_nsa_gfx10, 1125 },
    { IMAGE_GET_LOD_V1_V4, 1137 },
    { IMAGE_GET_LOD_V1_V4_gfx10, 1107 },
    { IMAGE_GET_LOD_V2_V1, 1138 },
    { IMAGE_GET_LOD_V2_V1_gfx10, 1108 },
    { IMAGE_GET_LOD_V2_V2, 1139 },
    { IMAGE_GET_LOD_V2_V2_gfx10, 1109 },
    { IMAGE_GET_LOD_V2_V2_nsa_gfx10, 1126 },
    { IMAGE_GET_LOD_V2_V3, 1140 },
    { IMAGE_GET_LOD_V2_V3_gfx10, 1110 },
    { IMAGE_GET_LOD_V2_V3_nsa_gfx10, 1127 },
    { IMAGE_GET_LOD_V2_V4, 1141 },
    { IMAGE_GET_LOD_V2_V4_gfx10, 1111 },
    { IMAGE_GET_LOD_V3_V1, 1142 },
    { IMAGE_GET_LOD_V3_V1_gfx10, 1112 },
    { IMAGE_GET_LOD_V3_V2, 1143 },
    { IMAGE_GET_LOD_V3_V2_gfx10, 1113 },
    { IMAGE_GET_LOD_V3_V2_nsa_gfx10, 1128 },
    { IMAGE_GET_LOD_V3_V3, 1144 },
    { IMAGE_GET_LOD_V3_V3_gfx10, 1114 },
    { IMAGE_GET_LOD_V3_V3_nsa_gfx10, 1129 },
    { IMAGE_GET_LOD_V3_V4, 1145 },
    { IMAGE_GET_LOD_V3_V4_gfx10, 1115 },
    { IMAGE_GET_LOD_V4_V1, 1146 },
    { IMAGE_GET_LOD_V4_V1_gfx10, 1116 },
    { IMAGE_GET_LOD_V4_V2, 1147 },
    { IMAGE_GET_LOD_V4_V2_gfx10, 1117 },
    { IMAGE_GET_LOD_V4_V2_nsa_gfx10, 1130 },
    { IMAGE_GET_LOD_V4_V3, 1148 },
    { IMAGE_GET_LOD_V4_V3_gfx10, 1118 },
    { IMAGE_GET_LOD_V4_V3_nsa_gfx10, 1131 },
    { IMAGE_GET_LOD_V4_V4, 1149 },
    { IMAGE_GET_LOD_V4_V4_gfx10, 1119 },
    { IMAGE_GET_LOD_V5_V1, 1150 },
    { IMAGE_GET_LOD_V5_V1_gfx10, 1120 },
    { IMAGE_GET_LOD_V5_V2, 1151 },
    { IMAGE_GET_LOD_V5_V2_gfx10, 1121 },
    { IMAGE_GET_LOD_V5_V2_nsa_gfx10, 1132 },
    { IMAGE_GET_LOD_V5_V3, 1152 },
    { IMAGE_GET_LOD_V5_V3_gfx10, 1122 },
    { IMAGE_GET_LOD_V5_V3_nsa_gfx10, 1133 },
    { IMAGE_GET_LOD_V5_V4, 1153 },
    { IMAGE_GET_LOD_V5_V4_gfx10, 1123 },
    { IMAGE_GET_RESINFO_V1_V1, 1189 },
    { IMAGE_GET_RESINFO_V1_V1_gfx10, 1154 },
    { IMAGE_GET_RESINFO_V1_V2, 1190 },
    { IMAGE_GET_RESINFO_V1_V2_gfx10, 1155 },
    { IMAGE_GET_RESINFO_V1_V2_nsa_gfx10, 1174 },
    { IMAGE_GET_RESINFO_V1_V3, 1191 },
    { IMAGE_GET_RESINFO_V1_V3_gfx10, 1156 },
    { IMAGE_GET_RESINFO_V1_V3_nsa_gfx10, 1175 },
    { IMAGE_GET_RESINFO_V1_V4, 1192 },
    { IMAGE_GET_RESINFO_V1_V4_gfx10, 1157 },
    { IMAGE_GET_RESINFO_V1_V4_nsa_gfx10, 1176 },
    { IMAGE_GET_RESINFO_V2_V1, 1193 },
    { IMAGE_GET_RESINFO_V2_V1_gfx10, 1158 },
    { IMAGE_GET_RESINFO_V2_V2, 1194 },
    { IMAGE_GET_RESINFO_V2_V2_gfx10, 1159 },
    { IMAGE_GET_RESINFO_V2_V2_nsa_gfx10, 1177 },
    { IMAGE_GET_RESINFO_V2_V3, 1195 },
    { IMAGE_GET_RESINFO_V2_V3_gfx10, 1160 },
    { IMAGE_GET_RESINFO_V2_V3_nsa_gfx10, 1178 },
    { IMAGE_GET_RESINFO_V2_V4, 1196 },
    { IMAGE_GET_RESINFO_V2_V4_gfx10, 1161 },
    { IMAGE_GET_RESINFO_V2_V4_nsa_gfx10, 1179 },
    { IMAGE_GET_RESINFO_V3_V1, 1197 },
    { IMAGE_GET_RESINFO_V3_V1_gfx10, 1162 },
    { IMAGE_GET_RESINFO_V3_V2, 1198 },
    { IMAGE_GET_RESINFO_V3_V2_gfx10, 1163 },
    { IMAGE_GET_RESINFO_V3_V2_nsa_gfx10, 1180 },
    { IMAGE_GET_RESINFO_V3_V3, 1199 },
    { IMAGE_GET_RESINFO_V3_V3_gfx10, 1164 },
    { IMAGE_GET_RESINFO_V3_V3_nsa_gfx10, 1181 },
    { IMAGE_GET_RESINFO_V3_V4, 1200 },
    { IMAGE_GET_RESINFO_V3_V4_gfx10, 1165 },
    { IMAGE_GET_RESINFO_V3_V4_nsa_gfx10, 1182 },
    { IMAGE_GET_RESINFO_V4_V1, 1201 },
    { IMAGE_GET_RESINFO_V4_V1_gfx10, 1166 },
    { IMAGE_GET_RESINFO_V4_V2, 1202 },
    { IMAGE_GET_RESINFO_V4_V2_gfx10, 1167 },
    { IMAGE_GET_RESINFO_V4_V2_nsa_gfx10, 1183 },
    { IMAGE_GET_RESINFO_V4_V3, 1203 },
    { IMAGE_GET_RESINFO_V4_V3_gfx10, 1168 },
    { IMAGE_GET_RESINFO_V4_V3_nsa_gfx10, 1184 },
    { IMAGE_GET_RESINFO_V4_V4, 1204 },
    { IMAGE_GET_RESINFO_V4_V4_gfx10, 1169 },
    { IMAGE_GET_RESINFO_V4_V4_nsa_gfx10, 1185 },
    { IMAGE_GET_RESINFO_V5_V1, 1205 },
    { IMAGE_GET_RESINFO_V5_V1_gfx10, 1170 },
    { IMAGE_GET_RESINFO_V5_V2, 1206 },
    { IMAGE_GET_RESINFO_V5_V2_gfx10, 1171 },
    { IMAGE_GET_RESINFO_V5_V2_nsa_gfx10, 1186 },
    { IMAGE_GET_RESINFO_V5_V3, 1207 },
    { IMAGE_GET_RESINFO_V5_V3_gfx10, 1172 },
    { IMAGE_GET_RESINFO_V5_V3_nsa_gfx10, 1187 },
    { IMAGE_GET_RESINFO_V5_V4, 1208 },
    { IMAGE_GET_RESINFO_V5_V4_gfx10, 1173 },
    { IMAGE_GET_RESINFO_V5_V4_nsa_gfx10, 1188 },
    { IMAGE_LOAD_MIP_PCK_SGN_V1_V1, 1409 },
    { IMAGE_LOAD_MIP_PCK_SGN_V1_V1_gfx10, 1374 },
    { IMAGE_LOAD_MIP_PCK_SGN_V1_V2, 1410 },
    { IMAGE_LOAD_MIP_PCK_SGN_V1_V2_gfx10, 1375 },
    { IMAGE_LOAD_MIP_PCK_SGN_V1_V2_nsa_gfx10, 1394 },
    { IMAGE_LOAD_MIP_PCK_SGN_V1_V3, 1411 },
    { IMAGE_LOAD_MIP_PCK_SGN_V1_V3_gfx10, 1376 },
    { IMAGE_LOAD_MIP_PCK_SGN_V1_V3_nsa_gfx10, 1395 },
    { IMAGE_LOAD_MIP_PCK_SGN_V1_V4, 1412 },
    { IMAGE_LOAD_MIP_PCK_SGN_V1_V4_gfx10, 1377 },
    { IMAGE_LOAD_MIP_PCK_SGN_V1_V4_nsa_gfx10, 1396 },
    { IMAGE_LOAD_MIP_PCK_SGN_V2_V1, 1413 },
    { IMAGE_LOAD_MIP_PCK_SGN_V2_V1_gfx10, 1378 },
    { IMAGE_LOAD_MIP_PCK_SGN_V2_V2, 1414 },
    { IMAGE_LOAD_MIP_PCK_SGN_V2_V2_gfx10, 1379 },
    { IMAGE_LOAD_MIP_PCK_SGN_V2_V2_nsa_gfx10, 1397 },
    { IMAGE_LOAD_MIP_PCK_SGN_V2_V3, 1415 },
    { IMAGE_LOAD_MIP_PCK_SGN_V2_V3_gfx10, 1380 },
    { IMAGE_LOAD_MIP_PCK_SGN_V2_V3_nsa_gfx10, 1398 },
    { IMAGE_LOAD_MIP_PCK_SGN_V2_V4, 1416 },
    { IMAGE_LOAD_MIP_PCK_SGN_V2_V4_gfx10, 1381 },
    { IMAGE_LOAD_MIP_PCK_SGN_V2_V4_nsa_gfx10, 1399 },
    { IMAGE_LOAD_MIP_PCK_SGN_V3_V1, 1417 },
    { IMAGE_LOAD_MIP_PCK_SGN_V3_V1_gfx10, 1382 },
    { IMAGE_LOAD_MIP_PCK_SGN_V3_V2, 1418 },
    { IMAGE_LOAD_MIP_PCK_SGN_V3_V2_gfx10, 1383 },
    { IMAGE_LOAD_MIP_PCK_SGN_V3_V2_nsa_gfx10, 1400 },
    { IMAGE_LOAD_MIP_PCK_SGN_V3_V3, 1419 },
    { IMAGE_LOAD_MIP_PCK_SGN_V3_V3_gfx10, 1384 },
    { IMAGE_LOAD_MIP_PCK_SGN_V3_V3_nsa_gfx10, 1401 },
    { IMAGE_LOAD_MIP_PCK_SGN_V3_V4, 1420 },
    { IMAGE_LOAD_MIP_PCK_SGN_V3_V4_gfx10, 1385 },
    { IMAGE_LOAD_MIP_PCK_SGN_V3_V4_nsa_gfx10, 1402 },
    { IMAGE_LOAD_MIP_PCK_SGN_V4_V1, 1421 },
    { IMAGE_LOAD_MIP_PCK_SGN_V4_V1_gfx10, 1386 },
    { IMAGE_LOAD_MIP_PCK_SGN_V4_V2, 1422 },
    { IMAGE_LOAD_MIP_PCK_SGN_V4_V2_gfx10, 1387 },
    { IMAGE_LOAD_MIP_PCK_SGN_V4_V2_nsa_gfx10, 1403 },
    { IMAGE_LOAD_MIP_PCK_SGN_V4_V3, 1423 },
    { IMAGE_LOAD_MIP_PCK_SGN_V4_V3_gfx10, 1388 },
    { IMAGE_LOAD_MIP_PCK_SGN_V4_V3_nsa_gfx10, 1404 },
    { IMAGE_LOAD_MIP_PCK_SGN_V4_V4, 1424 },
    { IMAGE_LOAD_MIP_PCK_SGN_V4_V4_gfx10, 1389 },
    { IMAGE_LOAD_MIP_PCK_SGN_V4_V4_nsa_gfx10, 1405 },
    { IMAGE_LOAD_MIP_PCK_SGN_V5_V1, 1425 },
    { IMAGE_LOAD_MIP_PCK_SGN_V5_V1_gfx10, 1390 },
    { IMAGE_LOAD_MIP_PCK_SGN_V5_V2, 1426 },
    { IMAGE_LOAD_MIP_PCK_SGN_V5_V2_gfx10, 1391 },
    { IMAGE_LOAD_MIP_PCK_SGN_V5_V2_nsa_gfx10, 1406 },
    { IMAGE_LOAD_MIP_PCK_SGN_V5_V3, 1427 },
    { IMAGE_LOAD_MIP_PCK_SGN_V5_V3_gfx10, 1392 },
    { IMAGE_LOAD_MIP_PCK_SGN_V5_V3_nsa_gfx10, 1407 },
    { IMAGE_LOAD_MIP_PCK_SGN_V5_V4, 1428 },
    { IMAGE_LOAD_MIP_PCK_SGN_V5_V4_gfx10, 1393 },
    { IMAGE_LOAD_MIP_PCK_SGN_V5_V4_nsa_gfx10, 1408 },
    { IMAGE_LOAD_MIP_PCK_V1_V1, 1354 },
    { IMAGE_LOAD_MIP_PCK_V1_V1_gfx10, 1319 },
    { IMAGE_LOAD_MIP_PCK_V1_V2, 1355 },
    { IMAGE_LOAD_MIP_PCK_V1_V2_gfx10, 1320 },
    { IMAGE_LOAD_MIP_PCK_V1_V2_nsa_gfx10, 1339 },
    { IMAGE_LOAD_MIP_PCK_V1_V3, 1356 },
    { IMAGE_LOAD_MIP_PCK_V1_V3_gfx10, 1321 },
    { IMAGE_LOAD_MIP_PCK_V1_V3_nsa_gfx10, 1340 },
    { IMAGE_LOAD_MIP_PCK_V1_V4, 1357 },
    { IMAGE_LOAD_MIP_PCK_V1_V4_gfx10, 1322 },
    { IMAGE_LOAD_MIP_PCK_V1_V4_nsa_gfx10, 1341 },
    { IMAGE_LOAD_MIP_PCK_V2_V1, 1358 },
    { IMAGE_LOAD_MIP_PCK_V2_V1_gfx10, 1323 },
    { IMAGE_LOAD_MIP_PCK_V2_V2, 1359 },
    { IMAGE_LOAD_MIP_PCK_V2_V2_gfx10, 1324 },
    { IMAGE_LOAD_MIP_PCK_V2_V2_nsa_gfx10, 1342 },
    { IMAGE_LOAD_MIP_PCK_V2_V3, 1360 },
    { IMAGE_LOAD_MIP_PCK_V2_V3_gfx10, 1325 },
    { IMAGE_LOAD_MIP_PCK_V2_V3_nsa_gfx10, 1343 },
    { IMAGE_LOAD_MIP_PCK_V2_V4, 1361 },
    { IMAGE_LOAD_MIP_PCK_V2_V4_gfx10, 1326 },
    { IMAGE_LOAD_MIP_PCK_V2_V4_nsa_gfx10, 1344 },
    { IMAGE_LOAD_MIP_PCK_V3_V1, 1362 },
    { IMAGE_LOAD_MIP_PCK_V3_V1_gfx10, 1327 },
    { IMAGE_LOAD_MIP_PCK_V3_V2, 1363 },
    { IMAGE_LOAD_MIP_PCK_V3_V2_gfx10, 1328 },
    { IMAGE_LOAD_MIP_PCK_V3_V2_nsa_gfx10, 1345 },
    { IMAGE_LOAD_MIP_PCK_V3_V3, 1364 },
    { IMAGE_LOAD_MIP_PCK_V3_V3_gfx10, 1329 },
    { IMAGE_LOAD_MIP_PCK_V3_V3_nsa_gfx10, 1346 },
    { IMAGE_LOAD_MIP_PCK_V3_V4, 1365 },
    { IMAGE_LOAD_MIP_PCK_V3_V4_gfx10, 1330 },
    { IMAGE_LOAD_MIP_PCK_V3_V4_nsa_gfx10, 1347 },
    { IMAGE_LOAD_MIP_PCK_V4_V1, 1366 },
    { IMAGE_LOAD_MIP_PCK_V4_V1_gfx10, 1331 },
    { IMAGE_LOAD_MIP_PCK_V4_V2, 1367 },
    { IMAGE_LOAD_MIP_PCK_V4_V2_gfx10, 1332 },
    { IMAGE_LOAD_MIP_PCK_V4_V2_nsa_gfx10, 1348 },
    { IMAGE_LOAD_MIP_PCK_V4_V3, 1368 },
    { IMAGE_LOAD_MIP_PCK_V4_V3_gfx10, 1333 },
    { IMAGE_LOAD_MIP_PCK_V4_V3_nsa_gfx10, 1349 },
    { IMAGE_LOAD_MIP_PCK_V4_V4, 1369 },
    { IMAGE_LOAD_MIP_PCK_V4_V4_gfx10, 1334 },
    { IMAGE_LOAD_MIP_PCK_V4_V4_nsa_gfx10, 1350 },
    { IMAGE_LOAD_MIP_PCK_V5_V1, 1370 },
    { IMAGE_LOAD_MIP_PCK_V5_V1_gfx10, 1335 },
    { IMAGE_LOAD_MIP_PCK_V5_V2, 1371 },
    { IMAGE_LOAD_MIP_PCK_V5_V2_gfx10, 1336 },
    { IMAGE_LOAD_MIP_PCK_V5_V2_nsa_gfx10, 1351 },
    { IMAGE_LOAD_MIP_PCK_V5_V3, 1372 },
    { IMAGE_LOAD_MIP_PCK_V5_V3_gfx10, 1337 },
    { IMAGE_LOAD_MIP_PCK_V5_V3_nsa_gfx10, 1352 },
    { IMAGE_LOAD_MIP_PCK_V5_V4, 1373 },
    { IMAGE_LOAD_MIP_PCK_V5_V4_gfx10, 1338 },
    { IMAGE_LOAD_MIP_PCK_V5_V4_nsa_gfx10, 1353 },
    { IMAGE_LOAD_MIP_V1_V1, 1299 },
    { IMAGE_LOAD_MIP_V1_V1_gfx10, 1264 },
    { IMAGE_LOAD_MIP_V1_V2, 1300 },
    { IMAGE_LOAD_MIP_V1_V2_gfx10, 1265 },
    { IMAGE_LOAD_MIP_V1_V2_nsa_gfx10, 1284 },
    { IMAGE_LOAD_MIP_V1_V3, 1301 },
    { IMAGE_LOAD_MIP_V1_V3_gfx10, 1266 },
    { IMAGE_LOAD_MIP_V1_V3_nsa_gfx10, 1285 },
    { IMAGE_LOAD_MIP_V1_V4, 1302 },
    { IMAGE_LOAD_MIP_V1_V4_gfx10, 1267 },
    { IMAGE_LOAD_MIP_V1_V4_nsa_gfx10, 1286 },
    { IMAGE_LOAD_MIP_V2_V1, 1303 },
    { IMAGE_LOAD_MIP_V2_V1_gfx10, 1268 },
    { IMAGE_LOAD_MIP_V2_V2, 1304 },
    { IMAGE_LOAD_MIP_V2_V2_gfx10, 1269 },
    { IMAGE_LOAD_MIP_V2_V2_nsa_gfx10, 1287 },
    { IMAGE_LOAD_MIP_V2_V3, 1305 },
    { IMAGE_LOAD_MIP_V2_V3_gfx10, 1270 },
    { IMAGE_LOAD_MIP_V2_V3_nsa_gfx10, 1288 },
    { IMAGE_LOAD_MIP_V2_V4, 1306 },
    { IMAGE_LOAD_MIP_V2_V4_gfx10, 1271 },
    { IMAGE_LOAD_MIP_V2_V4_nsa_gfx10, 1289 },
    { IMAGE_LOAD_MIP_V3_V1, 1307 },
    { IMAGE_LOAD_MIP_V3_V1_gfx10, 1272 },
    { IMAGE_LOAD_MIP_V3_V2, 1308 },
    { IMAGE_LOAD_MIP_V3_V2_gfx10, 1273 },
    { IMAGE_LOAD_MIP_V3_V2_nsa_gfx10, 1290 },
    { IMAGE_LOAD_MIP_V3_V3, 1309 },
    { IMAGE_LOAD_MIP_V3_V3_gfx10, 1274 },
    { IMAGE_LOAD_MIP_V3_V3_nsa_gfx10, 1291 },
    { IMAGE_LOAD_MIP_V3_V4, 1310 },
    { IMAGE_LOAD_MIP_V3_V4_gfx10, 1275 },
    { IMAGE_LOAD_MIP_V3_V4_nsa_gfx10, 1292 },
    { IMAGE_LOAD_MIP_V4_V1, 1311 },
    { IMAGE_LOAD_MIP_V4_V1_gfx10, 1276 },
    { IMAGE_LOAD_MIP_V4_V2, 1312 },
    { IMAGE_LOAD_MIP_V4_V2_gfx10, 1277 },
    { IMAGE_LOAD_MIP_V4_V2_nsa_gfx10, 1293 },
    { IMAGE_LOAD_MIP_V4_V3, 1313 },
    { IMAGE_LOAD_MIP_V4_V3_gfx10, 1278 },
    { IMAGE_LOAD_MIP_V4_V3_nsa_gfx10, 1294 },
    { IMAGE_LOAD_MIP_V4_V4, 1314 },
    { IMAGE_LOAD_MIP_V4_V4_gfx10, 1279 },
    { IMAGE_LOAD_MIP_V4_V4_nsa_gfx10, 1295 },
    { IMAGE_LOAD_MIP_V5_V1, 1315 },
    { IMAGE_LOAD_MIP_V5_V1_gfx10, 1280 },
    { IMAGE_LOAD_MIP_V5_V2, 1316 },
    { IMAGE_LOAD_MIP_V5_V2_gfx10, 1281 },
    { IMAGE_LOAD_MIP_V5_V2_nsa_gfx10, 1296 },
    { IMAGE_LOAD_MIP_V5_V3, 1317 },
    { IMAGE_LOAD_MIP_V5_V3_gfx10, 1282 },
    { IMAGE_LOAD_MIP_V5_V3_nsa_gfx10, 1297 },
    { IMAGE_LOAD_MIP_V5_V4, 1318 },
    { IMAGE_LOAD_MIP_V5_V4_gfx10, 1283 },
    { IMAGE_LOAD_MIP_V5_V4_nsa_gfx10, 1298 },
    { IMAGE_LOAD_PCK_SGN_V1_V1, 1519 },
    { IMAGE_LOAD_PCK_SGN_V1_V1_gfx10, 1484 },
    { IMAGE_LOAD_PCK_SGN_V1_V2, 1520 },
    { IMAGE_LOAD_PCK_SGN_V1_V2_gfx10, 1485 },
    { IMAGE_LOAD_PCK_SGN_V1_V2_nsa_gfx10, 1504 },
    { IMAGE_LOAD_PCK_SGN_V1_V3, 1521 },
    { IMAGE_LOAD_PCK_SGN_V1_V3_gfx10, 1486 },
    { IMAGE_LOAD_PCK_SGN_V1_V3_nsa_gfx10, 1505 },
    { IMAGE_LOAD_PCK_SGN_V1_V4, 1522 },
    { IMAGE_LOAD_PCK_SGN_V1_V4_gfx10, 1487 },
    { IMAGE_LOAD_PCK_SGN_V1_V4_nsa_gfx10, 1506 },
    { IMAGE_LOAD_PCK_SGN_V2_V1, 1523 },
    { IMAGE_LOAD_PCK_SGN_V2_V1_gfx10, 1488 },
    { IMAGE_LOAD_PCK_SGN_V2_V2, 1524 },
    { IMAGE_LOAD_PCK_SGN_V2_V2_gfx10, 1489 },
    { IMAGE_LOAD_PCK_SGN_V2_V2_nsa_gfx10, 1507 },
    { IMAGE_LOAD_PCK_SGN_V2_V3, 1525 },
    { IMAGE_LOAD_PCK_SGN_V2_V3_gfx10, 1490 },
    { IMAGE_LOAD_PCK_SGN_V2_V3_nsa_gfx10, 1508 },
    { IMAGE_LOAD_PCK_SGN_V2_V4, 1526 },
    { IMAGE_LOAD_PCK_SGN_V2_V4_gfx10, 1491 },
    { IMAGE_LOAD_PCK_SGN_V2_V4_nsa_gfx10, 1509 },
    { IMAGE_LOAD_PCK_SGN_V3_V1, 1527 },
    { IMAGE_LOAD_PCK_SGN_V3_V1_gfx10, 1492 },
    { IMAGE_LOAD_PCK_SGN_V3_V2, 1528 },
    { IMAGE_LOAD_PCK_SGN_V3_V2_gfx10, 1493 },
    { IMAGE_LOAD_PCK_SGN_V3_V2_nsa_gfx10, 1510 },
    { IMAGE_LOAD_PCK_SGN_V3_V3, 1529 },
    { IMAGE_LOAD_PCK_SGN_V3_V3_gfx10, 1494 },
    { IMAGE_LOAD_PCK_SGN_V3_V3_nsa_gfx10, 1511 },
    { IMAGE_LOAD_PCK_SGN_V3_V4, 1530 },
    { IMAGE_LOAD_PCK_SGN_V3_V4_gfx10, 1495 },
    { IMAGE_LOAD_PCK_SGN_V3_V4_nsa_gfx10, 1512 },
    { IMAGE_LOAD_PCK_SGN_V4_V1, 1531 },
    { IMAGE_LOAD_PCK_SGN_V4_V1_gfx10, 1496 },
    { IMAGE_LOAD_PCK_SGN_V4_V2, 1532 },
    { IMAGE_LOAD_PCK_SGN_V4_V2_gfx10, 1497 },
    { IMAGE_LOAD_PCK_SGN_V4_V2_nsa_gfx10, 1513 },
    { IMAGE_LOAD_PCK_SGN_V4_V3, 1533 },
    { IMAGE_LOAD_PCK_SGN_V4_V3_gfx10, 1498 },
    { IMAGE_LOAD_PCK_SGN_V4_V3_nsa_gfx10, 1514 },
    { IMAGE_LOAD_PCK_SGN_V4_V4, 1534 },
    { IMAGE_LOAD_PCK_SGN_V4_V4_gfx10, 1499 },
    { IMAGE_LOAD_PCK_SGN_V4_V4_nsa_gfx10, 1515 },
    { IMAGE_LOAD_PCK_SGN_V5_V1, 1535 },
    { IMAGE_LOAD_PCK_SGN_V5_V1_gfx10, 1500 },
    { IMAGE_LOAD_PCK_SGN_V5_V2, 1536 },
    { IMAGE_LOAD_PCK_SGN_V5_V2_gfx10, 1501 },
    { IMAGE_LOAD_PCK_SGN_V5_V2_nsa_gfx10, 1516 },
    { IMAGE_LOAD_PCK_SGN_V5_V3, 1537 },
    { IMAGE_LOAD_PCK_SGN_V5_V3_gfx10, 1502 },
    { IMAGE_LOAD_PCK_SGN_V5_V3_nsa_gfx10, 1517 },
    { IMAGE_LOAD_PCK_SGN_V5_V4, 1538 },
    { IMAGE_LOAD_PCK_SGN_V5_V4_gfx10, 1503 },
    { IMAGE_LOAD_PCK_SGN_V5_V4_nsa_gfx10, 1518 },
    { IMAGE_LOAD_PCK_V1_V1, 1464 },
    { IMAGE_LOAD_PCK_V1_V1_gfx10, 1429 },
    { IMAGE_LOAD_PCK_V1_V2, 1465 },
    { IMAGE_LOAD_PCK_V1_V2_gfx10, 1430 },
    { IMAGE_LOAD_PCK_V1_V2_nsa_gfx10, 1449 },
    { IMAGE_LOAD_PCK_V1_V3, 1466 },
    { IMAGE_LOAD_PCK_V1_V3_gfx10, 1431 },
    { IMAGE_LOAD_PCK_V1_V3_nsa_gfx10, 1450 },
    { IMAGE_LOAD_PCK_V1_V4, 1467 },
    { IMAGE_LOAD_PCK_V1_V4_gfx10, 1432 },
    { IMAGE_LOAD_PCK_V1_V4_nsa_gfx10, 1451 },
    { IMAGE_LOAD_PCK_V2_V1, 1468 },
    { IMAGE_LOAD_PCK_V2_V1_gfx10, 1433 },
    { IMAGE_LOAD_PCK_V2_V2, 1469 },
    { IMAGE_LOAD_PCK_V2_V2_gfx10, 1434 },
    { IMAGE_LOAD_PCK_V2_V2_nsa_gfx10, 1452 },
    { IMAGE_LOAD_PCK_V2_V3, 1470 },
    { IMAGE_LOAD_PCK_V2_V3_gfx10, 1435 },
    { IMAGE_LOAD_PCK_V2_V3_nsa_gfx10, 1453 },
    { IMAGE_LOAD_PCK_V2_V4, 1471 },
    { IMAGE_LOAD_PCK_V2_V4_gfx10, 1436 },
    { IMAGE_LOAD_PCK_V2_V4_nsa_gfx10, 1454 },
    { IMAGE_LOAD_PCK_V3_V1, 1472 },
    { IMAGE_LOAD_PCK_V3_V1_gfx10, 1437 },
    { IMAGE_LOAD_PCK_V3_V2, 1473 },
    { IMAGE_LOAD_PCK_V3_V2_gfx10, 1438 },
    { IMAGE_LOAD_PCK_V3_V2_nsa_gfx10, 1455 },
    { IMAGE_LOAD_PCK_V3_V3, 1474 },
    { IMAGE_LOAD_PCK_V3_V3_gfx10, 1439 },
    { IMAGE_LOAD_PCK_V3_V3_nsa_gfx10, 1456 },
    { IMAGE_LOAD_PCK_V3_V4, 1475 },
    { IMAGE_LOAD_PCK_V3_V4_gfx10, 1440 },
    { IMAGE_LOAD_PCK_V3_V4_nsa_gfx10, 1457 },
    { IMAGE_LOAD_PCK_V4_V1, 1476 },
    { IMAGE_LOAD_PCK_V4_V1_gfx10, 1441 },
    { IMAGE_LOAD_PCK_V4_V2, 1477 },
    { IMAGE_LOAD_PCK_V4_V2_gfx10, 1442 },
    { IMAGE_LOAD_PCK_V4_V2_nsa_gfx10, 1458 },
    { IMAGE_LOAD_PCK_V4_V3, 1478 },
    { IMAGE_LOAD_PCK_V4_V3_gfx10, 1443 },
    { IMAGE_LOAD_PCK_V4_V3_nsa_gfx10, 1459 },
    { IMAGE_LOAD_PCK_V4_V4, 1479 },
    { IMAGE_LOAD_PCK_V4_V4_gfx10, 1444 },
    { IMAGE_LOAD_PCK_V4_V4_nsa_gfx10, 1460 },
    { IMAGE_LOAD_PCK_V5_V1, 1480 },
    { IMAGE_LOAD_PCK_V5_V1_gfx10, 1445 },
    { IMAGE_LOAD_PCK_V5_V2, 1481 },
    { IMAGE_LOAD_PCK_V5_V2_gfx10, 1446 },
    { IMAGE_LOAD_PCK_V5_V2_nsa_gfx10, 1461 },
    { IMAGE_LOAD_PCK_V5_V3, 1482 },
    { IMAGE_LOAD_PCK_V5_V3_gfx10, 1447 },
    { IMAGE_LOAD_PCK_V5_V3_nsa_gfx10, 1462 },
    { IMAGE_LOAD_PCK_V5_V4, 1483 },
    { IMAGE_LOAD_PCK_V5_V4_gfx10, 1448 },
    { IMAGE_LOAD_PCK_V5_V4_nsa_gfx10, 1463 },
    { IMAGE_LOAD_V1_V1, 1244 },
    { IMAGE_LOAD_V1_V1_gfx10, 1209 },
    { IMAGE_LOAD_V1_V2, 1245 },
    { IMAGE_LOAD_V1_V2_gfx10, 1210 },
    { IMAGE_LOAD_V1_V2_nsa_gfx10, 1229 },
    { IMAGE_LOAD_V1_V3, 1246 },
    { IMAGE_LOAD_V1_V3_gfx10, 1211 },
    { IMAGE_LOAD_V1_V3_nsa_gfx10, 1230 },
    { IMAGE_LOAD_V1_V4, 1247 },
    { IMAGE_LOAD_V1_V4_gfx10, 1212 },
    { IMAGE_LOAD_V1_V4_nsa_gfx10, 1231 },
    { IMAGE_LOAD_V2_V1, 1248 },
    { IMAGE_LOAD_V2_V1_gfx10, 1213 },
    { IMAGE_LOAD_V2_V2, 1249 },
    { IMAGE_LOAD_V2_V2_gfx10, 1214 },
    { IMAGE_LOAD_V2_V2_nsa_gfx10, 1232 },
    { IMAGE_LOAD_V2_V3, 1250 },
    { IMAGE_LOAD_V2_V3_gfx10, 1215 },
    { IMAGE_LOAD_V2_V3_nsa_gfx10, 1233 },
    { IMAGE_LOAD_V2_V4, 1251 },
    { IMAGE_LOAD_V2_V4_gfx10, 1216 },
    { IMAGE_LOAD_V2_V4_nsa_gfx10, 1234 },
    { IMAGE_LOAD_V3_V1, 1252 },
    { IMAGE_LOAD_V3_V1_gfx10, 1217 },
    { IMAGE_LOAD_V3_V2, 1253 },
    { IMAGE_LOAD_V3_V2_gfx10, 1218 },
    { IMAGE_LOAD_V3_V2_nsa_gfx10, 1235 },
    { IMAGE_LOAD_V3_V3, 1254 },
    { IMAGE_LOAD_V3_V3_gfx10, 1219 },
    { IMAGE_LOAD_V3_V3_nsa_gfx10, 1236 },
    { IMAGE_LOAD_V3_V4, 1255 },
    { IMAGE_LOAD_V3_V4_gfx10, 1220 },
    { IMAGE_LOAD_V3_V4_nsa_gfx10, 1237 },
    { IMAGE_LOAD_V4_V1, 1256 },
    { IMAGE_LOAD_V4_V1_gfx10, 1221 },
    { IMAGE_LOAD_V4_V2, 1257 },
    { IMAGE_LOAD_V4_V2_gfx10, 1222 },
    { IMAGE_LOAD_V4_V2_nsa_gfx10, 1238 },
    { IMAGE_LOAD_V4_V3, 1258 },
    { IMAGE_LOAD_V4_V3_gfx10, 1223 },
    { IMAGE_LOAD_V4_V3_nsa_gfx10, 1239 },
    { IMAGE_LOAD_V4_V4, 1259 },
    { IMAGE_LOAD_V4_V4_gfx10, 1224 },
    { IMAGE_LOAD_V4_V4_nsa_gfx10, 1240 },
    { IMAGE_LOAD_V5_V1, 1260 },
    { IMAGE_LOAD_V5_V1_gfx10, 1225 },
    { IMAGE_LOAD_V5_V2, 1261 },
    { IMAGE_LOAD_V5_V2_gfx10, 1226 },
    { IMAGE_LOAD_V5_V2_nsa_gfx10, 1241 },
    { IMAGE_LOAD_V5_V3, 1262 },
    { IMAGE_LOAD_V5_V3_gfx10, 1227 },
    { IMAGE_LOAD_V5_V3_nsa_gfx10, 1242 },
    { IMAGE_LOAD_V5_V4, 1263 },
    { IMAGE_LOAD_V5_V4_gfx10, 1228 },
    { IMAGE_LOAD_V5_V4_nsa_gfx10, 1243 },
    { IMAGE_SAMPLE_B_CL_O_V1_V3, 1729 },
    { IMAGE_SAMPLE_B_CL_O_V1_V3_gfx10, 1694 },
    { IMAGE_SAMPLE_B_CL_O_V1_V3_nsa_gfx10, 1709 },
    { IMAGE_SAMPLE_B_CL_O_V1_V4, 1730 },
    { IMAGE_SAMPLE_B_CL_O_V1_V4_gfx10, 1695 },
    { IMAGE_SAMPLE_B_CL_O_V1_V4_nsa_gfx10, 1710 },
    { IMAGE_SAMPLE_B_CL_O_V1_V5_nsa_gfx10, 1711 },
    { IMAGE_SAMPLE_B_CL_O_V1_V6_nsa_gfx10, 1712 },
    { IMAGE_SAMPLE_B_CL_O_V1_V8, 1731 },
    { IMAGE_SAMPLE_B_CL_O_V1_V8_gfx10, 1696 },
    { IMAGE_SAMPLE_B_CL_O_V2_V3, 1732 },
    { IMAGE_SAMPLE_B_CL_O_V2_V3_gfx10, 1697 },
    { IMAGE_SAMPLE_B_CL_O_V2_V3_nsa_gfx10, 1713 },
    { IMAGE_SAMPLE_B_CL_O_V2_V4, 1733 },
    { IMAGE_SAMPLE_B_CL_O_V2_V4_gfx10, 1698 },
    { IMAGE_SAMPLE_B_CL_O_V2_V4_nsa_gfx10, 1714 },
    { IMAGE_SAMPLE_B_CL_O_V2_V5_nsa_gfx10, 1715 },
    { IMAGE_SAMPLE_B_CL_O_V2_V6_nsa_gfx10, 1716 },
    { IMAGE_SAMPLE_B_CL_O_V2_V8, 1734 },
    { IMAGE_SAMPLE_B_CL_O_V2_V8_gfx10, 1699 },
    { IMAGE_SAMPLE_B_CL_O_V3_V3, 1735 },
    { IMAGE_SAMPLE_B_CL_O_V3_V3_gfx10, 1700 },
    { IMAGE_SAMPLE_B_CL_O_V3_V3_nsa_gfx10, 1717 },
    { IMAGE_SAMPLE_B_CL_O_V3_V4, 1736 },
    { IMAGE_SAMPLE_B_CL_O_V3_V4_gfx10, 1701 },
    { IMAGE_SAMPLE_B_CL_O_V3_V4_nsa_gfx10, 1718 },
    { IMAGE_SAMPLE_B_CL_O_V3_V5_nsa_gfx10, 1719 },
    { IMAGE_SAMPLE_B_CL_O_V3_V6_nsa_gfx10, 1720 },
    { IMAGE_SAMPLE_B_CL_O_V3_V8, 1737 },
    { IMAGE_SAMPLE_B_CL_O_V3_V8_gfx10, 1702 },
    { IMAGE_SAMPLE_B_CL_O_V4_V3, 1738 },
    { IMAGE_SAMPLE_B_CL_O_V4_V3_gfx10, 1703 },
    { IMAGE_SAMPLE_B_CL_O_V4_V3_nsa_gfx10, 1721 },
    { IMAGE_SAMPLE_B_CL_O_V4_V4, 1739 },
    { IMAGE_SAMPLE_B_CL_O_V4_V4_gfx10, 1704 },
    { IMAGE_SAMPLE_B_CL_O_V4_V4_nsa_gfx10, 1722 },
    { IMAGE_SAMPLE_B_CL_O_V4_V5_nsa_gfx10, 1723 },
    { IMAGE_SAMPLE_B_CL_O_V4_V6_nsa_gfx10, 1724 },
    { IMAGE_SAMPLE_B_CL_O_V4_V8, 1740 },
    { IMAGE_SAMPLE_B_CL_O_V4_V8_gfx10, 1705 },
    { IMAGE_SAMPLE_B_CL_O_V5_V3, 1741 },
    { IMAGE_SAMPLE_B_CL_O_V5_V3_gfx10, 1706 },
    { IMAGE_SAMPLE_B_CL_O_V5_V3_nsa_gfx10, 1725 },
    { IMAGE_SAMPLE_B_CL_O_V5_V4, 1742 },
    { IMAGE_SAMPLE_B_CL_O_V5_V4_gfx10, 1707 },
    { IMAGE_SAMPLE_B_CL_O_V5_V4_nsa_gfx10, 1726 },
    { IMAGE_SAMPLE_B_CL_O_V5_V5_nsa_gfx10, 1727 },
    { IMAGE_SAMPLE_B_CL_O_V5_V6_nsa_gfx10, 1728 },
    { IMAGE_SAMPLE_B_CL_O_V5_V8, 1743 },
    { IMAGE_SAMPLE_B_CL_O_V5_V8_gfx10, 1708 },
    { IMAGE_SAMPLE_B_CL_V1_V2, 1674 },
    { IMAGE_SAMPLE_B_CL_V1_V2_gfx10, 1634 },
    { IMAGE_SAMPLE_B_CL_V1_V2_nsa_gfx10, 1654 },
    { IMAGE_SAMPLE_B_CL_V1_V3, 1675 },
    { IMAGE_SAMPLE_B_CL_V1_V3_gfx10, 1635 },
    { IMAGE_SAMPLE_B_CL_V1_V3_nsa_gfx10, 1655 },
    { IMAGE_SAMPLE_B_CL_V1_V4, 1676 },
    { IMAGE_SAMPLE_B_CL_V1_V4_gfx10, 1636 },
    { IMAGE_SAMPLE_B_CL_V1_V4_nsa_gfx10, 1656 },
    { IMAGE_SAMPLE_B_CL_V1_V5_nsa_gfx10, 1657 },
    { IMAGE_SAMPLE_B_CL_V1_V8, 1677 },
    { IMAGE_SAMPLE_B_CL_V1_V8_gfx10, 1637 },
    { IMAGE_SAMPLE_B_CL_V2_V2, 1678 },
    { IMAGE_SAMPLE_B_CL_V2_V2_gfx10, 1638 },
    { IMAGE_SAMPLE_B_CL_V2_V2_nsa_gfx10, 1658 },
    { IMAGE_SAMPLE_B_CL_V2_V3, 1679 },
    { IMAGE_SAMPLE_B_CL_V2_V3_gfx10, 1639 },
    { IMAGE_SAMPLE_B_CL_V2_V3_nsa_gfx10, 1659 },
    { IMAGE_SAMPLE_B_CL_V2_V4, 1680 },
    { IMAGE_SAMPLE_B_CL_V2_V4_gfx10, 1640 },
    { IMAGE_SAMPLE_B_CL_V2_V4_nsa_gfx10, 1660 },
    { IMAGE_SAMPLE_B_CL_V2_V5_nsa_gfx10, 1661 },
    { IMAGE_SAMPLE_B_CL_V2_V8, 1681 },
    { IMAGE_SAMPLE_B_CL_V2_V8_gfx10, 1641 },
    { IMAGE_SAMPLE_B_CL_V3_V2, 1682 },
    { IMAGE_SAMPLE_B_CL_V3_V2_gfx10, 1642 },
    { IMAGE_SAMPLE_B_CL_V3_V2_nsa_gfx10, 1662 },
    { IMAGE_SAMPLE_B_CL_V3_V3, 1683 },
    { IMAGE_SAMPLE_B_CL_V3_V3_gfx10, 1643 },
    { IMAGE_SAMPLE_B_CL_V3_V3_nsa_gfx10, 1663 },
    { IMAGE_SAMPLE_B_CL_V3_V4, 1684 },
    { IMAGE_SAMPLE_B_CL_V3_V4_gfx10, 1644 },
    { IMAGE_SAMPLE_B_CL_V3_V4_nsa_gfx10, 1664 },
    { IMAGE_SAMPLE_B_CL_V3_V5_nsa_gfx10, 1665 },
    { IMAGE_SAMPLE_B_CL_V3_V8, 1685 },
    { IMAGE_SAMPLE_B_CL_V3_V8_gfx10, 1645 },
    { IMAGE_SAMPLE_B_CL_V4_V2, 1686 },
    { IMAGE_SAMPLE_B_CL_V4_V2_gfx10, 1646 },
    { IMAGE_SAMPLE_B_CL_V4_V2_nsa_gfx10, 1666 },
    { IMAGE_SAMPLE_B_CL_V4_V3, 1687 },
    { IMAGE_SAMPLE_B_CL_V4_V3_gfx10, 1647 },
    { IMAGE_SAMPLE_B_CL_V4_V3_nsa_gfx10, 1667 },
    { IMAGE_SAMPLE_B_CL_V4_V4, 1688 },
    { IMAGE_SAMPLE_B_CL_V4_V4_gfx10, 1648 },
    { IMAGE_SAMPLE_B_CL_V4_V4_nsa_gfx10, 1668 },
    { IMAGE_SAMPLE_B_CL_V4_V5_nsa_gfx10, 1669 },
    { IMAGE_SAMPLE_B_CL_V4_V8, 1689 },
    { IMAGE_SAMPLE_B_CL_V4_V8_gfx10, 1649 },
    { IMAGE_SAMPLE_B_CL_V5_V2, 1690 },
    { IMAGE_SAMPLE_B_CL_V5_V2_gfx10, 1650 },
    { IMAGE_SAMPLE_B_CL_V5_V2_nsa_gfx10, 1670 },
    { IMAGE_SAMPLE_B_CL_V5_V3, 1691 },
    { IMAGE_SAMPLE_B_CL_V5_V3_gfx10, 1651 },
    { IMAGE_SAMPLE_B_CL_V5_V3_nsa_gfx10, 1671 },
    { IMAGE_SAMPLE_B_CL_V5_V4, 1692 },
    { IMAGE_SAMPLE_B_CL_V5_V4_gfx10, 1652 },
    { IMAGE_SAMPLE_B_CL_V5_V4_nsa_gfx10, 1672 },
    { IMAGE_SAMPLE_B_CL_V5_V5_nsa_gfx10, 1673 },
    { IMAGE_SAMPLE_B_CL_V5_V8, 1693 },
    { IMAGE_SAMPLE_B_CL_V5_V8_gfx10, 1653 },
    { IMAGE_SAMPLE_B_O_V1_V3, 1774 },
    { IMAGE_SAMPLE_B_O_V1_V3_gfx10, 1744 },
    { IMAGE_SAMPLE_B_O_V1_V3_nsa_gfx10, 1759 },
    { IMAGE_SAMPLE_B_O_V1_V4, 1775 },
    { IMAGE_SAMPLE_B_O_V1_V4_gfx10, 1745 },
    { IMAGE_SAMPLE_B_O_V1_V4_nsa_gfx10, 1760 },
    { IMAGE_SAMPLE_B_O_V1_V5_nsa_gfx10, 1761 },
    { IMAGE_SAMPLE_B_O_V1_V8, 1776 },
    { IMAGE_SAMPLE_B_O_V1_V8_gfx10, 1746 },
    { IMAGE_SAMPLE_B_O_V2_V3, 1777 },
    { IMAGE_SAMPLE_B_O_V2_V3_gfx10, 1747 },
    { IMAGE_SAMPLE_B_O_V2_V3_nsa_gfx10, 1762 },
    { IMAGE_SAMPLE_B_O_V2_V4, 1778 },
    { IMAGE_SAMPLE_B_O_V2_V4_gfx10, 1748 },
    { IMAGE_SAMPLE_B_O_V2_V4_nsa_gfx10, 1763 },
    { IMAGE_SAMPLE_B_O_V2_V5_nsa_gfx10, 1764 },
    { IMAGE_SAMPLE_B_O_V2_V8, 1779 },
    { IMAGE_SAMPLE_B_O_V2_V8_gfx10, 1749 },
    { IMAGE_SAMPLE_B_O_V3_V3, 1780 },
    { IMAGE_SAMPLE_B_O_V3_V3_gfx10, 1750 },
    { IMAGE_SAMPLE_B_O_V3_V3_nsa_gfx10, 1765 },
    { IMAGE_SAMPLE_B_O_V3_V4, 1781 },
    { IMAGE_SAMPLE_B_O_V3_V4_gfx10, 1751 },
    { IMAGE_SAMPLE_B_O_V3_V4_nsa_gfx10, 1766 },
    { IMAGE_SAMPLE_B_O_V3_V5_nsa_gfx10, 1767 },
    { IMAGE_SAMPLE_B_O_V3_V8, 1782 },
    { IMAGE_SAMPLE_B_O_V3_V8_gfx10, 1752 },
    { IMAGE_SAMPLE_B_O_V4_V3, 1783 },
    { IMAGE_SAMPLE_B_O_V4_V3_gfx10, 1753 },
    { IMAGE_SAMPLE_B_O_V4_V3_nsa_gfx10, 1768 },
    { IMAGE_SAMPLE_B_O_V4_V4, 1784 },
    { IMAGE_SAMPLE_B_O_V4_V4_gfx10, 1754 },
    { IMAGE_SAMPLE_B_O_V4_V4_nsa_gfx10, 1769 },
    { IMAGE_SAMPLE_B_O_V4_V5_nsa_gfx10, 1770 },
    { IMAGE_SAMPLE_B_O_V4_V8, 1785 },
    { IMAGE_SAMPLE_B_O_V4_V8_gfx10, 1755 },
    { IMAGE_SAMPLE_B_O_V5_V3, 1786 },
    { IMAGE_SAMPLE_B_O_V5_V3_gfx10, 1756 },
    { IMAGE_SAMPLE_B_O_V5_V3_nsa_gfx10, 1771 },
    { IMAGE_SAMPLE_B_O_V5_V4, 1787 },
    { IMAGE_SAMPLE_B_O_V5_V4_gfx10, 1757 },
    { IMAGE_SAMPLE_B_O_V5_V4_nsa_gfx10, 1772 },
    { IMAGE_SAMPLE_B_O_V5_V5_nsa_gfx10, 1773 },
    { IMAGE_SAMPLE_B_O_V5_V8, 1788 },
    { IMAGE_SAMPLE_B_O_V5_V8_gfx10, 1758 },
    { IMAGE_SAMPLE_B_V1_V2, 1619 },
    { IMAGE_SAMPLE_B_V1_V2_gfx10, 1589 },
    { IMAGE_SAMPLE_B_V1_V2_nsa_gfx10, 1604 },
    { IMAGE_SAMPLE_B_V1_V3, 1620 },
    { IMAGE_SAMPLE_B_V1_V3_gfx10, 1590 },
    { IMAGE_SAMPLE_B_V1_V3_nsa_gfx10, 1605 },
    { IMAGE_SAMPLE_B_V1_V4, 1621 },
    { IMAGE_SAMPLE_B_V1_V4_gfx10, 1591 },
    { IMAGE_SAMPLE_B_V1_V4_nsa_gfx10, 1606 },
    { IMAGE_SAMPLE_B_V2_V2, 1622 },
    { IMAGE_SAMPLE_B_V2_V2_gfx10, 1592 },
    { IMAGE_SAMPLE_B_V2_V2_nsa_gfx10, 1607 },
    { IMAGE_SAMPLE_B_V2_V3, 1623 },
    { IMAGE_SAMPLE_B_V2_V3_gfx10, 1593 },
    { IMAGE_SAMPLE_B_V2_V3_nsa_gfx10, 1608 },
    { IMAGE_SAMPLE_B_V2_V4, 1624 },
    { IMAGE_SAMPLE_B_V2_V4_gfx10, 1594 },
    { IMAGE_SAMPLE_B_V2_V4_nsa_gfx10, 1609 },
    { IMAGE_SAMPLE_B_V3_V2, 1625 },
    { IMAGE_SAMPLE_B_V3_V2_gfx10, 1595 },
    { IMAGE_SAMPLE_B_V3_V2_nsa_gfx10, 1610 },
    { IMAGE_SAMPLE_B_V3_V3, 1626 },
    { IMAGE_SAMPLE_B_V3_V3_gfx10, 1596 },
    { IMAGE_SAMPLE_B_V3_V3_nsa_gfx10, 1611 },
    { IMAGE_SAMPLE_B_V3_V4, 1627 },
    { IMAGE_SAMPLE_B_V3_V4_gfx10, 1597 },
    { IMAGE_SAMPLE_B_V3_V4_nsa_gfx10, 1612 },
    { IMAGE_SAMPLE_B_V4_V2, 1628 },
    { IMAGE_SAMPLE_B_V4_V2_gfx10, 1598 },
    { IMAGE_SAMPLE_B_V4_V2_nsa_gfx10, 1613 },
    { IMAGE_SAMPLE_B_V4_V3, 1629 },
    { IMAGE_SAMPLE_B_V4_V3_gfx10, 1599 },
    { IMAGE_SAMPLE_B_V4_V3_nsa_gfx10, 1614 },
    { IMAGE_SAMPLE_B_V4_V4, 1630 },
    { IMAGE_SAMPLE_B_V4_V4_gfx10, 1600 },
    { IMAGE_SAMPLE_B_V4_V4_nsa_gfx10, 1615 },
    { IMAGE_SAMPLE_B_V5_V2, 1631 },
    { IMAGE_SAMPLE_B_V5_V2_gfx10, 1601 },
    { IMAGE_SAMPLE_B_V5_V2_nsa_gfx10, 1616 },
    { IMAGE_SAMPLE_B_V5_V3, 1632 },
    { IMAGE_SAMPLE_B_V5_V3_gfx10, 1602 },
    { IMAGE_SAMPLE_B_V5_V3_nsa_gfx10, 1617 },
    { IMAGE_SAMPLE_B_V5_V4, 1633 },
    { IMAGE_SAMPLE_B_V5_V4_gfx10, 1603 },
    { IMAGE_SAMPLE_B_V5_V4_nsa_gfx10, 1618 },
    { IMAGE_SAMPLE_CD_CL_O_V1_V11_nsa_gfx10, 2030 },
    { IMAGE_SAMPLE_CD_CL_O_V1_V16, 2062 },
    { IMAGE_SAMPLE_CD_CL_O_V1_V16_gfx10, 2007 },
    { IMAGE_SAMPLE_CD_CL_O_V1_V3, 2059 },
    { IMAGE_SAMPLE_CD_CL_O_V1_V3_gfx10, 2004 },
    { IMAGE_SAMPLE_CD_CL_O_V1_V3_nsa_gfx10, 2024 },
    { IMAGE_SAMPLE_CD_CL_O_V1_V4, 2060 },
    { IMAGE_SAMPLE_CD_CL_O_V1_V4_gfx10, 2005 },
    { IMAGE_SAMPLE_CD_CL_O_V1_V4_nsa_gfx10, 2025 },
    { IMAGE_SAMPLE_CD_CL_O_V1_V5_nsa_gfx10, 2026 },
    { IMAGE_SAMPLE_CD_CL_O_V1_V6_nsa_gfx10, 2027 },
    { IMAGE_SAMPLE_CD_CL_O_V1_V8, 2061 },
    { IMAGE_SAMPLE_CD_CL_O_V1_V8_gfx10, 2006 },
    { IMAGE_SAMPLE_CD_CL_O_V1_V8_nsa_gfx10, 2028 },
    { IMAGE_SAMPLE_CD_CL_O_V1_V9_nsa_gfx10, 2029 },
    { IMAGE_SAMPLE_CD_CL_O_V2_V11_nsa_gfx10, 2037 },
    { IMAGE_SAMPLE_CD_CL_O_V2_V16, 2066 },
    { IMAGE_SAMPLE_CD_CL_O_V2_V16_gfx10, 2011 },
    { IMAGE_SAMPLE_CD_CL_O_V2_V3, 2063 },
    { IMAGE_SAMPLE_CD_CL_O_V2_V3_gfx10, 2008 },
    { IMAGE_SAMPLE_CD_CL_O_V2_V3_nsa_gfx10, 2031 },
    { IMAGE_SAMPLE_CD_CL_O_V2_V4, 2064 },
    { IMAGE_SAMPLE_CD_CL_O_V2_V4_gfx10, 2009 },
    { IMAGE_SAMPLE_CD_CL_O_V2_V4_nsa_gfx10, 2032 },
    { IMAGE_SAMPLE_CD_CL_O_V2_V5_nsa_gfx10, 2033 },
    { IMAGE_SAMPLE_CD_CL_O_V2_V6_nsa_gfx10, 2034 },
    { IMAGE_SAMPLE_CD_CL_O_V2_V8, 2065 },
    { IMAGE_SAMPLE_CD_CL_O_V2_V8_gfx10, 2010 },
    { IMAGE_SAMPLE_CD_CL_O_V2_V8_nsa_gfx10, 2035 },
    { IMAGE_SAMPLE_CD_CL_O_V2_V9_nsa_gfx10, 2036 },
    { IMAGE_SAMPLE_CD_CL_O_V3_V11_nsa_gfx10, 2044 },
    { IMAGE_SAMPLE_CD_CL_O_V3_V16, 2070 },
    { IMAGE_SAMPLE_CD_CL_O_V3_V16_gfx10, 2015 },
    { IMAGE_SAMPLE_CD_CL_O_V3_V3, 2067 },
    { IMAGE_SAMPLE_CD_CL_O_V3_V3_gfx10, 2012 },
    { IMAGE_SAMPLE_CD_CL_O_V3_V3_nsa_gfx10, 2038 },
    { IMAGE_SAMPLE_CD_CL_O_V3_V4, 2068 },
    { IMAGE_SAMPLE_CD_CL_O_V3_V4_gfx10, 2013 },
    { IMAGE_SAMPLE_CD_CL_O_V3_V4_nsa_gfx10, 2039 },
    { IMAGE_SAMPLE_CD_CL_O_V3_V5_nsa_gfx10, 2040 },
    { IMAGE_SAMPLE_CD_CL_O_V3_V6_nsa_gfx10, 2041 },
    { IMAGE_SAMPLE_CD_CL_O_V3_V8, 2069 },
    { IMAGE_SAMPLE_CD_CL_O_V3_V8_gfx10, 2014 },
    { IMAGE_SAMPLE_CD_CL_O_V3_V8_nsa_gfx10, 2042 },
    { IMAGE_SAMPLE_CD_CL_O_V3_V9_nsa_gfx10, 2043 },
    { IMAGE_SAMPLE_CD_CL_O_V4_V11_nsa_gfx10, 2051 },
    { IMAGE_SAMPLE_CD_CL_O_V4_V16, 2074 },
    { IMAGE_SAMPLE_CD_CL_O_V4_V16_gfx10, 2019 },
    { IMAGE_SAMPLE_CD_CL_O_V4_V3, 2071 },
    { IMAGE_SAMPLE_CD_CL_O_V4_V3_gfx10, 2016 },
    { IMAGE_SAMPLE_CD_CL_O_V4_V3_nsa_gfx10, 2045 },
    { IMAGE_SAMPLE_CD_CL_O_V4_V4, 2072 },
    { IMAGE_SAMPLE_CD_CL_O_V4_V4_gfx10, 2017 },
    { IMAGE_SAMPLE_CD_CL_O_V4_V4_nsa_gfx10, 2046 },
    { IMAGE_SAMPLE_CD_CL_O_V4_V5_nsa_gfx10, 2047 },
    { IMAGE_SAMPLE_CD_CL_O_V4_V6_nsa_gfx10, 2048 },
    { IMAGE_SAMPLE_CD_CL_O_V4_V8, 2073 },
    { IMAGE_SAMPLE_CD_CL_O_V4_V8_gfx10, 2018 },
    { IMAGE_SAMPLE_CD_CL_O_V4_V8_nsa_gfx10, 2049 },
    { IMAGE_SAMPLE_CD_CL_O_V4_V9_nsa_gfx10, 2050 },
    { IMAGE_SAMPLE_CD_CL_O_V5_V11_nsa_gfx10, 2058 },
    { IMAGE_SAMPLE_CD_CL_O_V5_V16, 2078 },
    { IMAGE_SAMPLE_CD_CL_O_V5_V16_gfx10, 2023 },
    { IMAGE_SAMPLE_CD_CL_O_V5_V3, 2075 },
    { IMAGE_SAMPLE_CD_CL_O_V5_V3_gfx10, 2020 },
    { IMAGE_SAMPLE_CD_CL_O_V5_V3_nsa_gfx10, 2052 },
    { IMAGE_SAMPLE_CD_CL_O_V5_V4, 2076 },
    { IMAGE_SAMPLE_CD_CL_O_V5_V4_gfx10, 2021 },
    { IMAGE_SAMPLE_CD_CL_O_V5_V4_nsa_gfx10, 2053 },
    { IMAGE_SAMPLE_CD_CL_O_V5_V5_nsa_gfx10, 2054 },
    { IMAGE_SAMPLE_CD_CL_O_V5_V6_nsa_gfx10, 2055 },
    { IMAGE_SAMPLE_CD_CL_O_V5_V8, 2077 },
    { IMAGE_SAMPLE_CD_CL_O_V5_V8_gfx10, 2022 },
    { IMAGE_SAMPLE_CD_CL_O_V5_V8_nsa_gfx10, 2056 },
    { IMAGE_SAMPLE_CD_CL_O_V5_V9_nsa_gfx10, 2057 },
    { IMAGE_SAMPLE_CD_CL_V1_V10_nsa_gfx10, 1950 },
    { IMAGE_SAMPLE_CD_CL_V1_V16, 1983 },
    { IMAGE_SAMPLE_CD_CL_V1_V16_gfx10, 1923 },
    { IMAGE_SAMPLE_CD_CL_V1_V2, 1979 },
    { IMAGE_SAMPLE_CD_CL_V1_V2_gfx10, 1919 },
    { IMAGE_SAMPLE_CD_CL_V1_V2_nsa_gfx10, 1944 },
    { IMAGE_SAMPLE_CD_CL_V1_V3, 1980 },
    { IMAGE_SAMPLE_CD_CL_V1_V3_gfx10, 1920 },
    { IMAGE_SAMPLE_CD_CL_V1_V3_nsa_gfx10, 1945 },
    { IMAGE_SAMPLE_CD_CL_V1_V4, 1981 },
    { IMAGE_SAMPLE_CD_CL_V1_V4_gfx10, 1921 },
    { IMAGE_SAMPLE_CD_CL_V1_V4_nsa_gfx10, 1946 },
    { IMAGE_SAMPLE_CD_CL_V1_V5_nsa_gfx10, 1947 },
    { IMAGE_SAMPLE_CD_CL_V1_V7_nsa_gfx10, 1948 },
    { IMAGE_SAMPLE_CD_CL_V1_V8, 1982 },
    { IMAGE_SAMPLE_CD_CL_V1_V8_gfx10, 1922 },
    { IMAGE_SAMPLE_CD_CL_V1_V8_nsa_gfx10, 1949 },
    { IMAGE_SAMPLE_CD_CL_V2_V10_nsa_gfx10, 1957 },
    { IMAGE_SAMPLE_CD_CL_V2_V16, 1988 },
    { IMAGE_SAMPLE_CD_CL_V2_V16_gfx10, 1928 },
    { IMAGE_SAMPLE_CD_CL_V2_V2, 1984 },
    { IMAGE_SAMPLE_CD_CL_V2_V2_gfx10, 1924 },
    { IMAGE_SAMPLE_CD_CL_V2_V2_nsa_gfx10, 1951 },
    { IMAGE_SAMPLE_CD_CL_V2_V3, 1985 },
    { IMAGE_SAMPLE_CD_CL_V2_V3_gfx10, 1925 },
    { IMAGE_SAMPLE_CD_CL_V2_V3_nsa_gfx10, 1952 },
    { IMAGE_SAMPLE_CD_CL_V2_V4, 1986 },
    { IMAGE_SAMPLE_CD_CL_V2_V4_gfx10, 1926 },
    { IMAGE_SAMPLE_CD_CL_V2_V4_nsa_gfx10, 1953 },
    { IMAGE_SAMPLE_CD_CL_V2_V5_nsa_gfx10, 1954 },
    { IMAGE_SAMPLE_CD_CL_V2_V7_nsa_gfx10, 1955 },
    { IMAGE_SAMPLE_CD_CL_V2_V8, 1987 },
    { IMAGE_SAMPLE_CD_CL_V2_V8_gfx10, 1927 },
    { IMAGE_SAMPLE_CD_CL_V2_V8_nsa_gfx10, 1956 },
    { IMAGE_SAMPLE_CD_CL_V3_V10_nsa_gfx10, 1964 },
    { IMAGE_SAMPLE_CD_CL_V3_V16, 1993 },
    { IMAGE_SAMPLE_CD_CL_V3_V16_gfx10, 1933 },
    { IMAGE_SAMPLE_CD_CL_V3_V2, 1989 },
    { IMAGE_SAMPLE_CD_CL_V3_V2_gfx10, 1929 },
    { IMAGE_SAMPLE_CD_CL_V3_V2_nsa_gfx10, 1958 },
    { IMAGE_SAMPLE_CD_CL_V3_V3, 1990 },
    { IMAGE_SAMPLE_CD_CL_V3_V3_gfx10, 1930 },
    { IMAGE_SAMPLE_CD_CL_V3_V3_nsa_gfx10, 1959 },
    { IMAGE_SAMPLE_CD_CL_V3_V4, 1991 },
    { IMAGE_SAMPLE_CD_CL_V3_V4_gfx10, 1931 },
    { IMAGE_SAMPLE_CD_CL_V3_V4_nsa_gfx10, 1960 },
    { IMAGE_SAMPLE_CD_CL_V3_V5_nsa_gfx10, 1961 },
    { IMAGE_SAMPLE_CD_CL_V3_V7_nsa_gfx10, 1962 },
    { IMAGE_SAMPLE_CD_CL_V3_V8, 1992 },
    { IMAGE_SAMPLE_CD_CL_V3_V8_gfx10, 1932 },
    { IMAGE_SAMPLE_CD_CL_V3_V8_nsa_gfx10, 1963 },
    { IMAGE_SAMPLE_CD_CL_V4_V10_nsa_gfx10, 1971 },
    { IMAGE_SAMPLE_CD_CL_V4_V16, 1998 },
    { IMAGE_SAMPLE_CD_CL_V4_V16_gfx10, 1938 },
    { IMAGE_SAMPLE_CD_CL_V4_V2, 1994 },
    { IMAGE_SAMPLE_CD_CL_V4_V2_gfx10, 1934 },
    { IMAGE_SAMPLE_CD_CL_V4_V2_nsa_gfx10, 1965 },
    { IMAGE_SAMPLE_CD_CL_V4_V3, 1995 },
    { IMAGE_SAMPLE_CD_CL_V4_V3_gfx10, 1935 },
    { IMAGE_SAMPLE_CD_CL_V4_V3_nsa_gfx10, 1966 },
    { IMAGE_SAMPLE_CD_CL_V4_V4, 1996 },
    { IMAGE_SAMPLE_CD_CL_V4_V4_gfx10, 1936 },
    { IMAGE_SAMPLE_CD_CL_V4_V4_nsa_gfx10, 1967 },
    { IMAGE_SAMPLE_CD_CL_V4_V5_nsa_gfx10, 1968 },
    { IMAGE_SAMPLE_CD_CL_V4_V7_nsa_gfx10, 1969 },
    { IMAGE_SAMPLE_CD_CL_V4_V8, 1997 },
    { IMAGE_SAMPLE_CD_CL_V4_V8_gfx10, 1937 },
    { IMAGE_SAMPLE_CD_CL_V4_V8_nsa_gfx10, 1970 },
    { IMAGE_SAMPLE_CD_CL_V5_V10_nsa_gfx10, 1978 },
    { IMAGE_SAMPLE_CD_CL_V5_V16, 2003 },
    { IMAGE_SAMPLE_CD_CL_V5_V16_gfx10, 1943 },
    { IMAGE_SAMPLE_CD_CL_V5_V2, 1999 },
    { IMAGE_SAMPLE_CD_CL_V5_V2_gfx10, 1939 },
    { IMAGE_SAMPLE_CD_CL_V5_V2_nsa_gfx10, 1972 },
    { IMAGE_SAMPLE_CD_CL_V5_V3, 2000 },
    { IMAGE_SAMPLE_CD_CL_V5_V3_gfx10, 1940 },
    { IMAGE_SAMPLE_CD_CL_V5_V3_nsa_gfx10, 1973 },
    { IMAGE_SAMPLE_CD_CL_V5_V4, 2001 },
    { IMAGE_SAMPLE_CD_CL_V5_V4_gfx10, 1941 },
    { IMAGE_SAMPLE_CD_CL_V5_V4_nsa_gfx10, 1974 },
    { IMAGE_SAMPLE_CD_CL_V5_V5_nsa_gfx10, 1975 },
    { IMAGE_SAMPLE_CD_CL_V5_V7_nsa_gfx10, 1976 },
    { IMAGE_SAMPLE_CD_CL_V5_V8, 2002 },
    { IMAGE_SAMPLE_CD_CL_V5_V8_gfx10, 1942 },
    { IMAGE_SAMPLE_CD_CL_V5_V8_nsa_gfx10, 1977 },
    { IMAGE_SAMPLE_CD_O_V1_V10_nsa_gfx10, 2105 },
    { IMAGE_SAMPLE_CD_O_V1_V16, 2137 },
    { IMAGE_SAMPLE_CD_O_V1_V16_gfx10, 2082 },
    { IMAGE_SAMPLE_CD_O_V1_V3, 2134 },
    { IMAGE_SAMPLE_CD_O_V1_V3_gfx10, 2079 },
    { IMAGE_SAMPLE_CD_O_V1_V3_nsa_gfx10, 2099 },
    { IMAGE_SAMPLE_CD_O_V1_V4, 2135 },
    { IMAGE_SAMPLE_CD_O_V1_V4_gfx10, 2080 },
    { IMAGE_SAMPLE_CD_O_V1_V4_nsa_gfx10, 2100 },
    { IMAGE_SAMPLE_CD_O_V1_V5_nsa_gfx10, 2101 },
    { IMAGE_SAMPLE_CD_O_V1_V6_nsa_gfx10, 2102 },
    { IMAGE_SAMPLE_CD_O_V1_V7_nsa_gfx10, 2103 },
    { IMAGE_SAMPLE_CD_O_V1_V8, 2136 },
    { IMAGE_SAMPLE_CD_O_V1_V8_gfx10, 2081 },
    { IMAGE_SAMPLE_CD_O_V1_V8_nsa_gfx10, 2104 },
    { IMAGE_SAMPLE_CD_O_V2_V10_nsa_gfx10, 2112 },
    { IMAGE_SAMPLE_CD_O_V2_V16, 2141 },
    { IMAGE_SAMPLE_CD_O_V2_V16_gfx10, 2086 },
    { IMAGE_SAMPLE_CD_O_V2_V3, 2138 },
    { IMAGE_SAMPLE_CD_O_V2_V3_gfx10, 2083 },
    { IMAGE_SAMPLE_CD_O_V2_V3_nsa_gfx10, 2106 },
    { IMAGE_SAMPLE_CD_O_V2_V4, 2139 },
    { IMAGE_SAMPLE_CD_O_V2_V4_gfx10, 2084 },
    { IMAGE_SAMPLE_CD_O_V2_V4_nsa_gfx10, 2107 },
    { IMAGE_SAMPLE_CD_O_V2_V5_nsa_gfx10, 2108 },
    { IMAGE_SAMPLE_CD_O_V2_V6_nsa_gfx10, 2109 },
    { IMAGE_SAMPLE_CD_O_V2_V7_nsa_gfx10, 2110 },
    { IMAGE_SAMPLE_CD_O_V2_V8, 2140 },
    { IMAGE_SAMPLE_CD_O_V2_V8_gfx10, 2085 },
    { IMAGE_SAMPLE_CD_O_V2_V8_nsa_gfx10, 2111 },
    { IMAGE_SAMPLE_CD_O_V3_V10_nsa_gfx10, 2119 },
    { IMAGE_SAMPLE_CD_O_V3_V16, 2145 },
    { IMAGE_SAMPLE_CD_O_V3_V16_gfx10, 2090 },
    { IMAGE_SAMPLE_CD_O_V3_V3, 2142 },
    { IMAGE_SAMPLE_CD_O_V3_V3_gfx10, 2087 },
    { IMAGE_SAMPLE_CD_O_V3_V3_nsa_gfx10, 2113 },
    { IMAGE_SAMPLE_CD_O_V3_V4, 2143 },
    { IMAGE_SAMPLE_CD_O_V3_V4_gfx10, 2088 },
    { IMAGE_SAMPLE_CD_O_V3_V4_nsa_gfx10, 2114 },
    { IMAGE_SAMPLE_CD_O_V3_V5_nsa_gfx10, 2115 },
    { IMAGE_SAMPLE_CD_O_V3_V6_nsa_gfx10, 2116 },
    { IMAGE_SAMPLE_CD_O_V3_V7_nsa_gfx10, 2117 },
    { IMAGE_SAMPLE_CD_O_V3_V8, 2144 },
    { IMAGE_SAMPLE_CD_O_V3_V8_gfx10, 2089 },
    { IMAGE_SAMPLE_CD_O_V3_V8_nsa_gfx10, 2118 },
    { IMAGE_SAMPLE_CD_O_V4_V10_nsa_gfx10, 2126 },
    { IMAGE_SAMPLE_CD_O_V4_V16, 2149 },
    { IMAGE_SAMPLE_CD_O_V4_V16_gfx10, 2094 },
    { IMAGE_SAMPLE_CD_O_V4_V3, 2146 },
    { IMAGE_SAMPLE_CD_O_V4_V3_gfx10, 2091 },
    { IMAGE_SAMPLE_CD_O_V4_V3_nsa_gfx10, 2120 },
    { IMAGE_SAMPLE_CD_O_V4_V4, 2147 },
    { IMAGE_SAMPLE_CD_O_V4_V4_gfx10, 2092 },
    { IMAGE_SAMPLE_CD_O_V4_V4_nsa_gfx10, 2121 },
    { IMAGE_SAMPLE_CD_O_V4_V5_nsa_gfx10, 2122 },
    { IMAGE_SAMPLE_CD_O_V4_V6_nsa_gfx10, 2123 },
    { IMAGE_SAMPLE_CD_O_V4_V7_nsa_gfx10, 2124 },
    { IMAGE_SAMPLE_CD_O_V4_V8, 2148 },
    { IMAGE_SAMPLE_CD_O_V4_V8_gfx10, 2093 },
    { IMAGE_SAMPLE_CD_O_V4_V8_nsa_gfx10, 2125 },
    { IMAGE_SAMPLE_CD_O_V5_V10_nsa_gfx10, 2133 },
    { IMAGE_SAMPLE_CD_O_V5_V16, 2153 },
    { IMAGE_SAMPLE_CD_O_V5_V16_gfx10, 2098 },
    { IMAGE_SAMPLE_CD_O_V5_V3, 2150 },
    { IMAGE_SAMPLE_CD_O_V5_V3_gfx10, 2095 },
    { IMAGE_SAMPLE_CD_O_V5_V3_nsa_gfx10, 2127 },
    { IMAGE_SAMPLE_CD_O_V5_V4, 2151 },
    { IMAGE_SAMPLE_CD_O_V5_V4_gfx10, 2096 },
    { IMAGE_SAMPLE_CD_O_V5_V4_nsa_gfx10, 2128 },
    { IMAGE_SAMPLE_CD_O_V5_V5_nsa_gfx10, 2129 },
    { IMAGE_SAMPLE_CD_O_V5_V6_nsa_gfx10, 2130 },
    { IMAGE_SAMPLE_CD_O_V5_V7_nsa_gfx10, 2131 },
    { IMAGE_SAMPLE_CD_O_V5_V8, 2152 },
    { IMAGE_SAMPLE_CD_O_V5_V8_gfx10, 2097 },
    { IMAGE_SAMPLE_CD_O_V5_V8_nsa_gfx10, 2132 },
    { IMAGE_SAMPLE_CD_V1_V16, 1898 },
    { IMAGE_SAMPLE_CD_V1_V16_gfx10, 1838 },
    { IMAGE_SAMPLE_CD_V1_V2, 1894 },
    { IMAGE_SAMPLE_CD_V1_V2_gfx10, 1834 },
    { IMAGE_SAMPLE_CD_V1_V2_nsa_gfx10, 1859 },
    { IMAGE_SAMPLE_CD_V1_V3, 1895 },
    { IMAGE_SAMPLE_CD_V1_V3_gfx10, 1835 },
    { IMAGE_SAMPLE_CD_V1_V3_nsa_gfx10, 1860 },
    { IMAGE_SAMPLE_CD_V1_V4, 1896 },
    { IMAGE_SAMPLE_CD_V1_V4_gfx10, 1836 },
    { IMAGE_SAMPLE_CD_V1_V4_nsa_gfx10, 1861 },
    { IMAGE_SAMPLE_CD_V1_V5_nsa_gfx10, 1862 },
    { IMAGE_SAMPLE_CD_V1_V6_nsa_gfx10, 1863 },
    { IMAGE_SAMPLE_CD_V1_V7_nsa_gfx10, 1864 },
    { IMAGE_SAMPLE_CD_V1_V8, 1897 },
    { IMAGE_SAMPLE_CD_V1_V8_gfx10, 1837 },
    { IMAGE_SAMPLE_CD_V1_V9_nsa_gfx10, 1865 },
    { IMAGE_SAMPLE_CD_V2_V16, 1903 },
    { IMAGE_SAMPLE_CD_V2_V16_gfx10, 1843 },
    { IMAGE_SAMPLE_CD_V2_V2, 1899 },
    { IMAGE_SAMPLE_CD_V2_V2_gfx10, 1839 },
    { IMAGE_SAMPLE_CD_V2_V2_nsa_gfx10, 1866 },
    { IMAGE_SAMPLE_CD_V2_V3, 1900 },
    { IMAGE_SAMPLE_CD_V2_V3_gfx10, 1840 },
    { IMAGE_SAMPLE_CD_V2_V3_nsa_gfx10, 1867 },
    { IMAGE_SAMPLE_CD_V2_V4, 1901 },
    { IMAGE_SAMPLE_CD_V2_V4_gfx10, 1841 },
    { IMAGE_SAMPLE_CD_V2_V4_nsa_gfx10, 1868 },
    { IMAGE_SAMPLE_CD_V2_V5_nsa_gfx10, 1869 },
    { IMAGE_SAMPLE_CD_V2_V6_nsa_gfx10, 1870 },
    { IMAGE_SAMPLE_CD_V2_V7_nsa_gfx10, 1871 },
    { IMAGE_SAMPLE_CD_V2_V8, 1902 },
    { IMAGE_SAMPLE_CD_V2_V8_gfx10, 1842 },
    { IMAGE_SAMPLE_CD_V2_V9_nsa_gfx10, 1872 },
    { IMAGE_SAMPLE_CD_V3_V16, 1908 },
    { IMAGE_SAMPLE_CD_V3_V16_gfx10, 1848 },
    { IMAGE_SAMPLE_CD_V3_V2, 1904 },
    { IMAGE_SAMPLE_CD_V3_V2_gfx10, 1844 },
    { IMAGE_SAMPLE_CD_V3_V2_nsa_gfx10, 1873 },
    { IMAGE_SAMPLE_CD_V3_V3, 1905 },
    { IMAGE_SAMPLE_CD_V3_V3_gfx10, 1845 },
    { IMAGE_SAMPLE_CD_V3_V3_nsa_gfx10, 1874 },
    { IMAGE_SAMPLE_CD_V3_V4, 1906 },
    { IMAGE_SAMPLE_CD_V3_V4_gfx10, 1846 },
    { IMAGE_SAMPLE_CD_V3_V4_nsa_gfx10, 1875 },
    { IMAGE_SAMPLE_CD_V3_V5_nsa_gfx10, 1876 },
    { IMAGE_SAMPLE_CD_V3_V6_nsa_gfx10, 1877 },
    { IMAGE_SAMPLE_CD_V3_V7_nsa_gfx10, 1878 },
    { IMAGE_SAMPLE_CD_V3_V8, 1907 },
    { IMAGE_SAMPLE_CD_V3_V8_gfx10, 1847 },
    { IMAGE_SAMPLE_CD_V3_V9_nsa_gfx10, 1879 },
    { IMAGE_SAMPLE_CD_V4_V16, 1913 },
    { IMAGE_SAMPLE_CD_V4_V16_gfx10, 1853 },
    { IMAGE_SAMPLE_CD_V4_V2, 1909 },
    { IMAGE_SAMPLE_CD_V4_V2_gfx10, 1849 },
    { IMAGE_SAMPLE_CD_V4_V2_nsa_gfx10, 1880 },
    { IMAGE_SAMPLE_CD_V4_V3, 1910 },
    { IMAGE_SAMPLE_CD_V4_V3_gfx10, 1850 },
    { IMAGE_SAMPLE_CD_V4_V3_nsa_gfx10, 1881 },
    { IMAGE_SAMPLE_CD_V4_V4, 1911 },
    { IMAGE_SAMPLE_CD_V4_V4_gfx10, 1851 },
    { IMAGE_SAMPLE_CD_V4_V4_nsa_gfx10, 1882 },
    { IMAGE_SAMPLE_CD_V4_V5_nsa_gfx10, 1883 },
    { IMAGE_SAMPLE_CD_V4_V6_nsa_gfx10, 1884 },
    { IMAGE_SAMPLE_CD_V4_V7_nsa_gfx10, 1885 },
    { IMAGE_SAMPLE_CD_V4_V8, 1912 },
    { IMAGE_SAMPLE_CD_V4_V8_gfx10, 1852 },
    { IMAGE_SAMPLE_CD_V4_V9_nsa_gfx10, 1886 },
    { IMAGE_SAMPLE_CD_V5_V16, 1918 },
    { IMAGE_SAMPLE_CD_V5_V16_gfx10, 1858 },
    { IMAGE_SAMPLE_CD_V5_V2, 1914 },
    { IMAGE_SAMPLE_CD_V5_V2_gfx10, 1854 },
    { IMAGE_SAMPLE_CD_V5_V2_nsa_gfx10, 1887 },
    { IMAGE_SAMPLE_CD_V5_V3, 1915 },
    { IMAGE_SAMPLE_CD_V5_V3_gfx10, 1855 },
    { IMAGE_SAMPLE_CD_V5_V3_nsa_gfx10, 1888 },
    { IMAGE_SAMPLE_CD_V5_V4, 1916 },
    { IMAGE_SAMPLE_CD_V5_V4_gfx10, 1856 },
    { IMAGE_SAMPLE_CD_V5_V4_nsa_gfx10, 1889 },
    { IMAGE_SAMPLE_CD_V5_V5_nsa_gfx10, 1890 },
    { IMAGE_SAMPLE_CD_V5_V6_nsa_gfx10, 1891 },
    { IMAGE_SAMPLE_CD_V5_V7_nsa_gfx10, 1892 },
    { IMAGE_SAMPLE_CD_V5_V8, 1917 },
    { IMAGE_SAMPLE_CD_V5_V8_gfx10, 1857 },
    { IMAGE_SAMPLE_CD_V5_V9_nsa_gfx10, 1893 },
    { IMAGE_SAMPLE_CL_O_V1_V2, 2249 },
    { IMAGE_SAMPLE_CL_O_V1_V2_gfx10, 2209 },
    { IMAGE_SAMPLE_CL_O_V1_V2_nsa_gfx10, 2229 },
    { IMAGE_SAMPLE_CL_O_V1_V3, 2250 },
    { IMAGE_SAMPLE_CL_O_V1_V3_gfx10, 2210 },
    { IMAGE_SAMPLE_CL_O_V1_V3_nsa_gfx10, 2230 },
    { IMAGE_SAMPLE_CL_O_V1_V4, 2251 },
    { IMAGE_SAMPLE_CL_O_V1_V4_gfx10, 2211 },
    { IMAGE_SAMPLE_CL_O_V1_V4_nsa_gfx10, 2231 },
    { IMAGE_SAMPLE_CL_O_V1_V5_nsa_gfx10, 2232 },
    { IMAGE_SAMPLE_CL_O_V1_V8, 2252 },
    { IMAGE_SAMPLE_CL_O_V1_V8_gfx10, 2212 },
    { IMAGE_SAMPLE_CL_O_V2_V2, 2253 },
    { IMAGE_SAMPLE_CL_O_V2_V2_gfx10, 2213 },
    { IMAGE_SAMPLE_CL_O_V2_V2_nsa_gfx10, 2233 },
    { IMAGE_SAMPLE_CL_O_V2_V3, 2254 },
    { IMAGE_SAMPLE_CL_O_V2_V3_gfx10, 2214 },
    { IMAGE_SAMPLE_CL_O_V2_V3_nsa_gfx10, 2234 },
    { IMAGE_SAMPLE_CL_O_V2_V4, 2255 },
    { IMAGE_SAMPLE_CL_O_V2_V4_gfx10, 2215 },
    { IMAGE_SAMPLE_CL_O_V2_V4_nsa_gfx10, 2235 },
    { IMAGE_SAMPLE_CL_O_V2_V5_nsa_gfx10, 2236 },
    { IMAGE_SAMPLE_CL_O_V2_V8, 2256 },
    { IMAGE_SAMPLE_CL_O_V2_V8_gfx10, 2216 },
    { IMAGE_SAMPLE_CL_O_V3_V2, 2257 },
    { IMAGE_SAMPLE_CL_O_V3_V2_gfx10, 2217 },
    { IMAGE_SAMPLE_CL_O_V3_V2_nsa_gfx10, 2237 },
    { IMAGE_SAMPLE_CL_O_V3_V3, 2258 },
    { IMAGE_SAMPLE_CL_O_V3_V3_gfx10, 2218 },
    { IMAGE_SAMPLE_CL_O_V3_V3_nsa_gfx10, 2238 },
    { IMAGE_SAMPLE_CL_O_V3_V4, 2259 },
    { IMAGE_SAMPLE_CL_O_V3_V4_gfx10, 2219 },
    { IMAGE_SAMPLE_CL_O_V3_V4_nsa_gfx10, 2239 },
    { IMAGE_SAMPLE_CL_O_V3_V5_nsa_gfx10, 2240 },
    { IMAGE_SAMPLE_CL_O_V3_V8, 2260 },
    { IMAGE_SAMPLE_CL_O_V3_V8_gfx10, 2220 },
    { IMAGE_SAMPLE_CL_O_V4_V2, 2261 },
    { IMAGE_SAMPLE_CL_O_V4_V2_gfx10, 2221 },
    { IMAGE_SAMPLE_CL_O_V4_V2_nsa_gfx10, 2241 },
    { IMAGE_SAMPLE_CL_O_V4_V3, 2262 },
    { IMAGE_SAMPLE_CL_O_V4_V3_gfx10, 2222 },
    { IMAGE_SAMPLE_CL_O_V4_V3_nsa_gfx10, 2242 },
    { IMAGE_SAMPLE_CL_O_V4_V4, 2263 },
    { IMAGE_SAMPLE_CL_O_V4_V4_gfx10, 2223 },
    { IMAGE_SAMPLE_CL_O_V4_V4_nsa_gfx10, 2243 },
    { IMAGE_SAMPLE_CL_O_V4_V5_nsa_gfx10, 2244 },
    { IMAGE_SAMPLE_CL_O_V4_V8, 2264 },
    { IMAGE_SAMPLE_CL_O_V4_V8_gfx10, 2224 },
    { IMAGE_SAMPLE_CL_O_V5_V2, 2265 },
    { IMAGE_SAMPLE_CL_O_V5_V2_gfx10, 2225 },
    { IMAGE_SAMPLE_CL_O_V5_V2_nsa_gfx10, 2245 },
    { IMAGE_SAMPLE_CL_O_V5_V3, 2266 },
    { IMAGE_SAMPLE_CL_O_V5_V3_gfx10, 2226 },
    { IMAGE_SAMPLE_CL_O_V5_V3_nsa_gfx10, 2246 },
    { IMAGE_SAMPLE_CL_O_V5_V4, 2267 },
    { IMAGE_SAMPLE_CL_O_V5_V4_gfx10, 2227 },
    { IMAGE_SAMPLE_CL_O_V5_V4_nsa_gfx10, 2247 },
    { IMAGE_SAMPLE_CL_O_V5_V5_nsa_gfx10, 2248 },
    { IMAGE_SAMPLE_CL_O_V5_V8, 2268 },
    { IMAGE_SAMPLE_CL_O_V5_V8_gfx10, 2228 },
    { IMAGE_SAMPLE_CL_V1_V1, 2189 },
    { IMAGE_SAMPLE_CL_V1_V1_gfx10, 2154 },
    { IMAGE_SAMPLE_CL_V1_V2, 2190 },
    { IMAGE_SAMPLE_CL_V1_V2_gfx10, 2155 },
    { IMAGE_SAMPLE_CL_V1_V2_nsa_gfx10, 2174 },
    { IMAGE_SAMPLE_CL_V1_V3, 2191 },
    { IMAGE_SAMPLE_CL_V1_V3_gfx10, 2156 },
    { IMAGE_SAMPLE_CL_V1_V3_nsa_gfx10, 2175 },
    { IMAGE_SAMPLE_CL_V1_V4, 2192 },
    { IMAGE_SAMPLE_CL_V1_V4_gfx10, 2157 },
    { IMAGE_SAMPLE_CL_V1_V4_nsa_gfx10, 2176 },
    { IMAGE_SAMPLE_CL_V2_V1, 2193 },
    { IMAGE_SAMPLE_CL_V2_V1_gfx10, 2158 },
    { IMAGE_SAMPLE_CL_V2_V2, 2194 },
    { IMAGE_SAMPLE_CL_V2_V2_gfx10, 2159 },
    { IMAGE_SAMPLE_CL_V2_V2_nsa_gfx10, 2177 },
    { IMAGE_SAMPLE_CL_V2_V3, 2195 },
    { IMAGE_SAMPLE_CL_V2_V3_gfx10, 2160 },
    { IMAGE_SAMPLE_CL_V2_V3_nsa_gfx10, 2178 },
    { IMAGE_SAMPLE_CL_V2_V4, 2196 },
    { IMAGE_SAMPLE_CL_V2_V4_gfx10, 2161 },
    { IMAGE_SAMPLE_CL_V2_V4_nsa_gfx10, 2179 },
    { IMAGE_SAMPLE_CL_V3_V1, 2197 },
    { IMAGE_SAMPLE_CL_V3_V1_gfx10, 2162 },
    { IMAGE_SAMPLE_CL_V3_V2, 2198 },
    { IMAGE_SAMPLE_CL_V3_V2_gfx10, 2163 },
    { IMAGE_SAMPLE_CL_V3_V2_nsa_gfx10, 2180 },
    { IMAGE_SAMPLE_CL_V3_V3, 2199 },
    { IMAGE_SAMPLE_CL_V3_V3_gfx10, 2164 },
    { IMAGE_SAMPLE_CL_V3_V3_nsa_gfx10, 2181 },
    { IMAGE_SAMPLE_CL_V3_V4, 2200 },
    { IMAGE_SAMPLE_CL_V3_V4_gfx10, 2165 },
    { IMAGE_SAMPLE_CL_V3_V4_nsa_gfx10, 2182 },
    { IMAGE_SAMPLE_CL_V4_V1, 2201 },
    { IMAGE_SAMPLE_CL_V4_V1_gfx10, 2166 },
    { IMAGE_SAMPLE_CL_V4_V2, 2202 },
    { IMAGE_SAMPLE_CL_V4_V2_gfx10, 2167 },
    { IMAGE_SAMPLE_CL_V4_V2_nsa_gfx10, 2183 },
    { IMAGE_SAMPLE_CL_V4_V3, 2203 },
    { IMAGE_SAMPLE_CL_V4_V3_gfx10, 2168 },
    { IMAGE_SAMPLE_CL_V4_V3_nsa_gfx10, 2184 },
    { IMAGE_SAMPLE_CL_V4_V4, 2204 },
    { IMAGE_SAMPLE_CL_V4_V4_gfx10, 2169 },
    { IMAGE_SAMPLE_CL_V4_V4_nsa_gfx10, 2185 },
    { IMAGE_SAMPLE_CL_V5_V1, 2205 },
    { IMAGE_SAMPLE_CL_V5_V1_gfx10, 2170 },
    { IMAGE_SAMPLE_CL_V5_V2, 2206 },
    { IMAGE_SAMPLE_CL_V5_V2_gfx10, 2171 },
    { IMAGE_SAMPLE_CL_V5_V2_nsa_gfx10, 2186 },
    { IMAGE_SAMPLE_CL_V5_V3, 2207 },
    { IMAGE_SAMPLE_CL_V5_V3_gfx10, 2172 },
    { IMAGE_SAMPLE_CL_V5_V3_nsa_gfx10, 2187 },
    { IMAGE_SAMPLE_CL_V5_V4, 2208 },
    { IMAGE_SAMPLE_CL_V5_V4_gfx10, 2173 },
    { IMAGE_SAMPLE_CL_V5_V4_nsa_gfx10, 2188 },
    { IMAGE_SAMPLE_C_B_CL_O_V1_V4, 2394 },
    { IMAGE_SAMPLE_C_B_CL_O_V1_V4_gfx10, 2364 },
    { IMAGE_SAMPLE_C_B_CL_O_V1_V4_nsa_gfx10, 2374 },
    { IMAGE_SAMPLE_C_B_CL_O_V1_V5_nsa_gfx10, 2375 },
    { IMAGE_SAMPLE_C_B_CL_O_V1_V6_nsa_gfx10, 2376 },
    { IMAGE_SAMPLE_C_B_CL_O_V1_V7_nsa_gfx10, 2377 },
    { IMAGE_SAMPLE_C_B_CL_O_V1_V8, 2395 },
    { IMAGE_SAMPLE_C_B_CL_O_V1_V8_gfx10, 2365 },
    { IMAGE_SAMPLE_C_B_CL_O_V2_V4, 2396 },
    { IMAGE_SAMPLE_C_B_CL_O_V2_V4_gfx10, 2366 },
    { IMAGE_SAMPLE_C_B_CL_O_V2_V4_nsa_gfx10, 2378 },
    { IMAGE_SAMPLE_C_B_CL_O_V2_V5_nsa_gfx10, 2379 },
    { IMAGE_SAMPLE_C_B_CL_O_V2_V6_nsa_gfx10, 2380 },
    { IMAGE_SAMPLE_C_B_CL_O_V2_V7_nsa_gfx10, 2381 },
    { IMAGE_SAMPLE_C_B_CL_O_V2_V8, 2397 },
    { IMAGE_SAMPLE_C_B_CL_O_V2_V8_gfx10, 2367 },
    { IMAGE_SAMPLE_C_B_CL_O_V3_V4, 2398 },
    { IMAGE_SAMPLE_C_B_CL_O_V3_V4_gfx10, 2368 },
    { IMAGE_SAMPLE_C_B_CL_O_V3_V4_nsa_gfx10, 2382 },
    { IMAGE_SAMPLE_C_B_CL_O_V3_V5_nsa_gfx10, 2383 },
    { IMAGE_SAMPLE_C_B_CL_O_V3_V6_nsa_gfx10, 2384 },
    { IMAGE_SAMPLE_C_B_CL_O_V3_V7_nsa_gfx10, 2385 },
    { IMAGE_SAMPLE_C_B_CL_O_V3_V8, 2399 },
    { IMAGE_SAMPLE_C_B_CL_O_V3_V8_gfx10, 2369 },
    { IMAGE_SAMPLE_C_B_CL_O_V4_V4, 2400 },
    { IMAGE_SAMPLE_C_B_CL_O_V4_V4_gfx10, 2370 },
    { IMAGE_SAMPLE_C_B_CL_O_V4_V4_nsa_gfx10, 2386 },
    { IMAGE_SAMPLE_C_B_CL_O_V4_V5_nsa_gfx10, 2387 },
    { IMAGE_SAMPLE_C_B_CL_O_V4_V6_nsa_gfx10, 2388 },
    { IMAGE_SAMPLE_C_B_CL_O_V4_V7_nsa_gfx10, 2389 },
    { IMAGE_SAMPLE_C_B_CL_O_V4_V8, 2401 },
    { IMAGE_SAMPLE_C_B_CL_O_V4_V8_gfx10, 2371 },
    { IMAGE_SAMPLE_C_B_CL_O_V5_V4, 2402 },
    { IMAGE_SAMPLE_C_B_CL_O_V5_V4_gfx10, 2372 },
    { IMAGE_SAMPLE_C_B_CL_O_V5_V4_nsa_gfx10, 2390 },
    { IMAGE_SAMPLE_C_B_CL_O_V5_V5_nsa_gfx10, 2391 },
    { IMAGE_SAMPLE_C_B_CL_O_V5_V6_nsa_gfx10, 2392 },
    { IMAGE_SAMPLE_C_B_CL_O_V5_V7_nsa_gfx10, 2393 },
    { IMAGE_SAMPLE_C_B_CL_O_V5_V8, 2403 },
    { IMAGE_SAMPLE_C_B_CL_O_V5_V8_gfx10, 2373 },
    { IMAGE_SAMPLE_C_B_CL_V1_V3, 2349 },
    { IMAGE_SAMPLE_C_B_CL_V1_V3_gfx10, 2314 },
    { IMAGE_SAMPLE_C_B_CL_V1_V3_nsa_gfx10, 2329 },
    { IMAGE_SAMPLE_C_B_CL_V1_V4, 2350 },
    { IMAGE_SAMPLE_C_B_CL_V1_V4_gfx10, 2315 },
    { IMAGE_SAMPLE_C_B_CL_V1_V4_nsa_gfx10, 2330 },
    { IMAGE_SAMPLE_C_B_CL_V1_V5_nsa_gfx10, 2331 },
    { IMAGE_SAMPLE_C_B_CL_V1_V6_nsa_gfx10, 2332 },
    { IMAGE_SAMPLE_C_B_CL_V1_V8, 2351 },
    { IMAGE_SAMPLE_C_B_CL_V1_V8_gfx10, 2316 },
    { IMAGE_SAMPLE_C_B_CL_V2_V3, 2352 },
    { IMAGE_SAMPLE_C_B_CL_V2_V3_gfx10, 2317 },
    { IMAGE_SAMPLE_C_B_CL_V2_V3_nsa_gfx10, 2333 },
    { IMAGE_SAMPLE_C_B_CL_V2_V4, 2353 },
    { IMAGE_SAMPLE_C_B_CL_V2_V4_gfx10, 2318 },
    { IMAGE_SAMPLE_C_B_CL_V2_V4_nsa_gfx10, 2334 },
    { IMAGE_SAMPLE_C_B_CL_V2_V5_nsa_gfx10, 2335 },
    { IMAGE_SAMPLE_C_B_CL_V2_V6_nsa_gfx10, 2336 },
    { IMAGE_SAMPLE_C_B_CL_V2_V8, 2354 },
    { IMAGE_SAMPLE_C_B_CL_V2_V8_gfx10, 2319 },
    { IMAGE_SAMPLE_C_B_CL_V3_V3, 2355 },
    { IMAGE_SAMPLE_C_B_CL_V3_V3_gfx10, 2320 },
    { IMAGE_SAMPLE_C_B_CL_V3_V3_nsa_gfx10, 2337 },
    { IMAGE_SAMPLE_C_B_CL_V3_V4, 2356 },
    { IMAGE_SAMPLE_C_B_CL_V3_V4_gfx10, 2321 },
    { IMAGE_SAMPLE_C_B_CL_V3_V4_nsa_gfx10, 2338 },
    { IMAGE_SAMPLE_C_B_CL_V3_V5_nsa_gfx10, 2339 },
    { IMAGE_SAMPLE_C_B_CL_V3_V6_nsa_gfx10, 2340 },
    { IMAGE_SAMPLE_C_B_CL_V3_V8, 2357 },
    { IMAGE_SAMPLE_C_B_CL_V3_V8_gfx10, 2322 },
    { IMAGE_SAMPLE_C_B_CL_V4_V3, 2358 },
    { IMAGE_SAMPLE_C_B_CL_V4_V3_gfx10, 2323 },
    { IMAGE_SAMPLE_C_B_CL_V4_V3_nsa_gfx10, 2341 },
    { IMAGE_SAMPLE_C_B_CL_V4_V4, 2359 },
    { IMAGE_SAMPLE_C_B_CL_V4_V4_gfx10, 2324 },
    { IMAGE_SAMPLE_C_B_CL_V4_V4_nsa_gfx10, 2342 },
    { IMAGE_SAMPLE_C_B_CL_V4_V5_nsa_gfx10, 2343 },
    { IMAGE_SAMPLE_C_B_CL_V4_V6_nsa_gfx10, 2344 },
    { IMAGE_SAMPLE_C_B_CL_V4_V8, 2360 },
    { IMAGE_SAMPLE_C_B_CL_V4_V8_gfx10, 2325 },
    { IMAGE_SAMPLE_C_B_CL_V5_V3, 2361 },
    { IMAGE_SAMPLE_C_B_CL_V5_V3_gfx10, 2326 },
    { IMAGE_SAMPLE_C_B_CL_V5_V3_nsa_gfx10, 2345 },
    { IMAGE_SAMPLE_C_B_CL_V5_V4, 2362 },
    { IMAGE_SAMPLE_C_B_CL_V5_V4_gfx10, 2327 },
    { IMAGE_SAMPLE_C_B_CL_V5_V4_nsa_gfx10, 2346 },
    { IMAGE_SAMPLE_C_B_CL_V5_V5_nsa_gfx10, 2347 },
    { IMAGE_SAMPLE_C_B_CL_V5_V6_nsa_gfx10, 2348 },
    { IMAGE_SAMPLE_C_B_CL_V5_V8, 2363 },
    { IMAGE_SAMPLE_C_B_CL_V5_V8_gfx10, 2328 },
    { IMAGE_SAMPLE_C_B_O_V1_V4, 2429 },
    { IMAGE_SAMPLE_C_B_O_V1_V4_gfx10, 2404 },
    { IMAGE_SAMPLE_C_B_O_V1_V4_nsa_gfx10, 2414 },
    { IMAGE_SAMPLE_C_B_O_V1_V5_nsa_gfx10, 2415 },
    { IMAGE_SAMPLE_C_B_O_V1_V6_nsa_gfx10, 2416 },
    { IMAGE_SAMPLE_C_B_O_V1_V8, 2430 },
    { IMAGE_SAMPLE_C_B_O_V1_V8_gfx10, 2405 },
    { IMAGE_SAMPLE_C_B_O_V2_V4, 2431 },
    { IMAGE_SAMPLE_C_B_O_V2_V4_gfx10, 2406 },
    { IMAGE_SAMPLE_C_B_O_V2_V4_nsa_gfx10, 2417 },
    { IMAGE_SAMPLE_C_B_O_V2_V5_nsa_gfx10, 2418 },
    { IMAGE_SAMPLE_C_B_O_V2_V6_nsa_gfx10, 2419 },
    { IMAGE_SAMPLE_C_B_O_V2_V8, 2432 },
    { IMAGE_SAMPLE_C_B_O_V2_V8_gfx10, 2407 },
    { IMAGE_SAMPLE_C_B_O_V3_V4, 2433 },
    { IMAGE_SAMPLE_C_B_O_V3_V4_gfx10, 2408 },
    { IMAGE_SAMPLE_C_B_O_V3_V4_nsa_gfx10, 2420 },
    { IMAGE_SAMPLE_C_B_O_V3_V5_nsa_gfx10, 2421 },
    { IMAGE_SAMPLE_C_B_O_V3_V6_nsa_gfx10, 2422 },
    { IMAGE_SAMPLE_C_B_O_V3_V8, 2434 },
    { IMAGE_SAMPLE_C_B_O_V3_V8_gfx10, 2409 },
    { IMAGE_SAMPLE_C_B_O_V4_V4, 2435 },
    { IMAGE_SAMPLE_C_B_O_V4_V4_gfx10, 2410 },
    { IMAGE_SAMPLE_C_B_O_V4_V4_nsa_gfx10, 2423 },
    { IMAGE_SAMPLE_C_B_O_V4_V5_nsa_gfx10, 2424 },
    { IMAGE_SAMPLE_C_B_O_V4_V6_nsa_gfx10, 2425 },
    { IMAGE_SAMPLE_C_B_O_V4_V8, 2436 },
    { IMAGE_SAMPLE_C_B_O_V4_V8_gfx10, 2411 },
    { IMAGE_SAMPLE_C_B_O_V5_V4, 2437 },
    { IMAGE_SAMPLE_C_B_O_V5_V4_gfx10, 2412 },
    { IMAGE_SAMPLE_C_B_O_V5_V4_nsa_gfx10, 2426 },
    { IMAGE_SAMPLE_C_B_O_V5_V5_nsa_gfx10, 2427 },
    { IMAGE_SAMPLE_C_B_O_V5_V6_nsa_gfx10, 2428 },
    { IMAGE_SAMPLE_C_B_O_V5_V8, 2438 },
    { IMAGE_SAMPLE_C_B_O_V5_V8_gfx10, 2413 },
    { IMAGE_SAMPLE_C_B_V1_V3, 2299 },
    { IMAGE_SAMPLE_C_B_V1_V3_gfx10, 2269 },
    { IMAGE_SAMPLE_C_B_V1_V3_nsa_gfx10, 2284 },
    { IMAGE_SAMPLE_C_B_V1_V4, 2300 },
    { IMAGE_SAMPLE_C_B_V1_V4_gfx10, 2270 },
    { IMAGE_SAMPLE_C_B_V1_V4_nsa_gfx10, 2285 },
    { IMAGE_SAMPLE_C_B_V1_V5_nsa_gfx10, 2286 },
    { IMAGE_SAMPLE_C_B_V1_V8, 2301 },
    { IMAGE_SAMPLE_C_B_V1_V8_gfx10, 2271 },
    { IMAGE_SAMPLE_C_B_V2_V3, 2302 },
    { IMAGE_SAMPLE_C_B_V2_V3_gfx10, 2272 },
    { IMAGE_SAMPLE_C_B_V2_V3_nsa_gfx10, 2287 },
    { IMAGE_SAMPLE_C_B_V2_V4, 2303 },
    { IMAGE_SAMPLE_C_B_V2_V4_gfx10, 2273 },
    { IMAGE_SAMPLE_C_B_V2_V4_nsa_gfx10, 2288 },
    { IMAGE_SAMPLE_C_B_V2_V5_nsa_gfx10, 2289 },
    { IMAGE_SAMPLE_C_B_V2_V8, 2304 },
    { IMAGE_SAMPLE_C_B_V2_V8_gfx10, 2274 },
    { IMAGE_SAMPLE_C_B_V3_V3, 2305 },
    { IMAGE_SAMPLE_C_B_V3_V3_gfx10, 2275 },
    { IMAGE_SAMPLE_C_B_V3_V3_nsa_gfx10, 2290 },
    { IMAGE_SAMPLE_C_B_V3_V4, 2306 },
    { IMAGE_SAMPLE_C_B_V3_V4_gfx10, 2276 },
    { IMAGE_SAMPLE_C_B_V3_V4_nsa_gfx10, 2291 },
    { IMAGE_SAMPLE_C_B_V3_V5_nsa_gfx10, 2292 },
    { IMAGE_SAMPLE_C_B_V3_V8, 2307 },
    { IMAGE_SAMPLE_C_B_V3_V8_gfx10, 2277 },
    { IMAGE_SAMPLE_C_B_V4_V3, 2308 },
    { IMAGE_SAMPLE_C_B_V4_V3_gfx10, 2278 },
    { IMAGE_SAMPLE_C_B_V4_V3_nsa_gfx10, 2293 },
    { IMAGE_SAMPLE_C_B_V4_V4, 2309 },
    { IMAGE_SAMPLE_C_B_V4_V4_gfx10, 2279 },
    { IMAGE_SAMPLE_C_B_V4_V4_nsa_gfx10, 2294 },
    { IMAGE_SAMPLE_C_B_V4_V5_nsa_gfx10, 2295 },
    { IMAGE_SAMPLE_C_B_V4_V8, 2310 },
    { IMAGE_SAMPLE_C_B_V4_V8_gfx10, 2280 },
    { IMAGE_SAMPLE_C_B_V5_V3, 2311 },
    { IMAGE_SAMPLE_C_B_V5_V3_gfx10, 2281 },
    { IMAGE_SAMPLE_C_B_V5_V3_nsa_gfx10, 2296 },
    { IMAGE_SAMPLE_C_B_V5_V4, 2312 },
    { IMAGE_SAMPLE_C_B_V5_V4_gfx10, 2282 },
    { IMAGE_SAMPLE_C_B_V5_V4_nsa_gfx10, 2297 },
    { IMAGE_SAMPLE_C_B_V5_V5_nsa_gfx10, 2298 },
    { IMAGE_SAMPLE_C_B_V5_V8, 2313 },
    { IMAGE_SAMPLE_C_B_V5_V8_gfx10, 2283 },
    { IMAGE_SAMPLE_C_CD_CL_O_V1_V10_nsa_gfx10, 2609 },
    { IMAGE_SAMPLE_C_CD_CL_O_V1_V12_nsa_gfx10, 2610 },
    { IMAGE_SAMPLE_C_CD_CL_O_V1_V16, 2641 },
    { IMAGE_SAMPLE_C_CD_CL_O_V1_V16_gfx10, 2591 },
    { IMAGE_SAMPLE_C_CD_CL_O_V1_V4, 2639 },
    { IMAGE_SAMPLE_C_CD_CL_O_V1_V4_gfx10, 2589 },
    { IMAGE_SAMPLE_C_CD_CL_O_V1_V4_nsa_gfx10, 2604 },
    { IMAGE_SAMPLE_C_CD_CL_O_V1_V5_nsa_gfx10, 2605 },
    { IMAGE_SAMPLE_C_CD_CL_O_V1_V6_nsa_gfx10, 2606 },
    { IMAGE_SAMPLE_C_CD_CL_O_V1_V7_nsa_gfx10, 2607 },
    { IMAGE_SAMPLE_C_CD_CL_O_V1_V8, 2640 },
    { IMAGE_SAMPLE_C_CD_CL_O_V1_V8_gfx10, 2590 },
    { IMAGE_SAMPLE_C_CD_CL_O_V1_V9_nsa_gfx10, 2608 },
    { IMAGE_SAMPLE_C_CD_CL_O_V2_V10_nsa_gfx10, 2616 },
    { IMAGE_SAMPLE_C_CD_CL_O_V2_V12_nsa_gfx10, 2617 },
    { IMAGE_SAMPLE_C_CD_CL_O_V2_V16, 2644 },
    { IMAGE_SAMPLE_C_CD_CL_O_V2_V16_gfx10, 2594 },
    { IMAGE_SAMPLE_C_CD_CL_O_V2_V4, 2642 },
    { IMAGE_SAMPLE_C_CD_CL_O_V2_V4_gfx10, 2592 },
    { IMAGE_SAMPLE_C_CD_CL_O_V2_V4_nsa_gfx10, 2611 },
    { IMAGE_SAMPLE_C_CD_CL_O_V2_V5_nsa_gfx10, 2612 },
    { IMAGE_SAMPLE_C_CD_CL_O_V2_V6_nsa_gfx10, 2613 },
    { IMAGE_SAMPLE_C_CD_CL_O_V2_V7_nsa_gfx10, 2614 },
    { IMAGE_SAMPLE_C_CD_CL_O_V2_V8, 2643 },
    { IMAGE_SAMPLE_C_CD_CL_O_V2_V8_gfx10, 2593 },
    { IMAGE_SAMPLE_C_CD_CL_O_V2_V9_nsa_gfx10, 2615 },
    { IMAGE_SAMPLE_C_CD_CL_O_V3_V10_nsa_gfx10, 2623 },
    { IMAGE_SAMPLE_C_CD_CL_O_V3_V12_nsa_gfx10, 2624 },
    { IMAGE_SAMPLE_C_CD_CL_O_V3_V16, 2647 },
    { IMAGE_SAMPLE_C_CD_CL_O_V3_V16_gfx10, 2597 },
    { IMAGE_SAMPLE_C_CD_CL_O_V3_V4, 2645 },
    { IMAGE_SAMPLE_C_CD_CL_O_V3_V4_gfx10, 2595 },
    { IMAGE_SAMPLE_C_CD_CL_O_V3_V4_nsa_gfx10, 2618 },
    { IMAGE_SAMPLE_C_CD_CL_O_V3_V5_nsa_gfx10, 2619 },
    { IMAGE_SAMPLE_C_CD_CL_O_V3_V6_nsa_gfx10, 2620 },
    { IMAGE_SAMPLE_C_CD_CL_O_V3_V7_nsa_gfx10, 2621 },
    { IMAGE_SAMPLE_C_CD_CL_O_V3_V8, 2646 },
    { IMAGE_SAMPLE_C_CD_CL_O_V3_V8_gfx10, 2596 },
    { IMAGE_SAMPLE_C_CD_CL_O_V3_V9_nsa_gfx10, 2622 },
    { IMAGE_SAMPLE_C_CD_CL_O_V4_V10_nsa_gfx10, 2630 },
    { IMAGE_SAMPLE_C_CD_CL_O_V4_V12_nsa_gfx10, 2631 },
    { IMAGE_SAMPLE_C_CD_CL_O_V4_V16, 2650 },
    { IMAGE_SAMPLE_C_CD_CL_O_V4_V16_gfx10, 2600 },
    { IMAGE_SAMPLE_C_CD_CL_O_V4_V4, 2648 },
    { IMAGE_SAMPLE_C_CD_CL_O_V4_V4_gfx10, 2598 },
    { IMAGE_SAMPLE_C_CD_CL_O_V4_V4_nsa_gfx10, 2625 },
    { IMAGE_SAMPLE_C_CD_CL_O_V4_V5_nsa_gfx10, 2626 },
    { IMAGE_SAMPLE_C_CD_CL_O_V4_V6_nsa_gfx10, 2627 },
    { IMAGE_SAMPLE_C_CD_CL_O_V4_V7_nsa_gfx10, 2628 },
    { IMAGE_SAMPLE_C_CD_CL_O_V4_V8, 2649 },
    { IMAGE_SAMPLE_C_CD_CL_O_V4_V8_gfx10, 2599 },
    { IMAGE_SAMPLE_C_CD_CL_O_V4_V9_nsa_gfx10, 2629 },
    { IMAGE_SAMPLE_C_CD_CL_O_V5_V10_nsa_gfx10, 2637 },
    { IMAGE_SAMPLE_C_CD_CL_O_V5_V12_nsa_gfx10, 2638 },
    { IMAGE_SAMPLE_C_CD_CL_O_V5_V16, 2653 },
    { IMAGE_SAMPLE_C_CD_CL_O_V5_V16_gfx10, 2603 },
    { IMAGE_SAMPLE_C_CD_CL_O_V5_V4, 2651 },
    { IMAGE_SAMPLE_C_CD_CL_O_V5_V4_gfx10, 2601 },
    { IMAGE_SAMPLE_C_CD_CL_O_V5_V4_nsa_gfx10, 2632 },
    { IMAGE_SAMPLE_C_CD_CL_O_V5_V5_nsa_gfx10, 2633 },
    { IMAGE_SAMPLE_C_CD_CL_O_V5_V6_nsa_gfx10, 2634 },
    { IMAGE_SAMPLE_C_CD_CL_O_V5_V7_nsa_gfx10, 2635 },
    { IMAGE_SAMPLE_C_CD_CL_O_V5_V8, 2652 },
    { IMAGE_SAMPLE_C_CD_CL_O_V5_V8_gfx10, 2602 },
    { IMAGE_SAMPLE_C_CD_CL_O_V5_V9_nsa_gfx10, 2636 },
    { IMAGE_SAMPLE_C_CD_CL_V1_V11_nsa_gfx10, 2540 },
    { IMAGE_SAMPLE_C_CD_CL_V1_V16, 2572 },
    { IMAGE_SAMPLE_C_CD_CL_V1_V16_gfx10, 2517 },
    { IMAGE_SAMPLE_C_CD_CL_V1_V3, 2569 },
    { IMAGE_SAMPLE_C_CD_CL_V1_V3_gfx10, 2514 },
    { IMAGE_SAMPLE_C_CD_CL_V1_V3_nsa_gfx10, 2534 },
    { IMAGE_SAMPLE_C_CD_CL_V1_V4, 2570 },
    { IMAGE_SAMPLE_C_CD_CL_V1_V4_gfx10, 2515 },
    { IMAGE_SAMPLE_C_CD_CL_V1_V4_nsa_gfx10, 2535 },
    { IMAGE_SAMPLE_C_CD_CL_V1_V5_nsa_gfx10, 2536 },
    { IMAGE_SAMPLE_C_CD_CL_V1_V6_nsa_gfx10, 2537 },
    { IMAGE_SAMPLE_C_CD_CL_V1_V8, 2571 },
    { IMAGE_SAMPLE_C_CD_CL_V1_V8_gfx10, 2516 },
    { IMAGE_SAMPLE_C_CD_CL_V1_V8_nsa_gfx10, 2538 },
    { IMAGE_SAMPLE_C_CD_CL_V1_V9_nsa_gfx10, 2539 },
    { IMAGE_SAMPLE_C_CD_CL_V2_V11_nsa_gfx10, 2547 },
    { IMAGE_SAMPLE_C_CD_CL_V2_V16, 2576 },
    { IMAGE_SAMPLE_C_CD_CL_V2_V16_gfx10, 2521 },
    { IMAGE_SAMPLE_C_CD_CL_V2_V3, 2573 },
    { IMAGE_SAMPLE_C_CD_CL_V2_V3_gfx10, 2518 },
    { IMAGE_SAMPLE_C_CD_CL_V2_V3_nsa_gfx10, 2541 },
    { IMAGE_SAMPLE_C_CD_CL_V2_V4, 2574 },
    { IMAGE_SAMPLE_C_CD_CL_V2_V4_gfx10, 2519 },
    { IMAGE_SAMPLE_C_CD_CL_V2_V4_nsa_gfx10, 2542 },
    { IMAGE_SAMPLE_C_CD_CL_V2_V5_nsa_gfx10, 2543 },
    { IMAGE_SAMPLE_C_CD_CL_V2_V6_nsa_gfx10, 2544 },
    { IMAGE_SAMPLE_C_CD_CL_V2_V8, 2575 },
    { IMAGE_SAMPLE_C_CD_CL_V2_V8_gfx10, 2520 },
    { IMAGE_SAMPLE_C_CD_CL_V2_V8_nsa_gfx10, 2545 },
    { IMAGE_SAMPLE_C_CD_CL_V2_V9_nsa_gfx10, 2546 },
    { IMAGE_SAMPLE_C_CD_CL_V3_V11_nsa_gfx10, 2554 },
    { IMAGE_SAMPLE_C_CD_CL_V3_V16, 2580 },
    { IMAGE_SAMPLE_C_CD_CL_V3_V16_gfx10, 2525 },
    { IMAGE_SAMPLE_C_CD_CL_V3_V3, 2577 },
    { IMAGE_SAMPLE_C_CD_CL_V3_V3_gfx10, 2522 },
    { IMAGE_SAMPLE_C_CD_CL_V3_V3_nsa_gfx10, 2548 },
    { IMAGE_SAMPLE_C_CD_CL_V3_V4, 2578 },
    { IMAGE_SAMPLE_C_CD_CL_V3_V4_gfx10, 2523 },
    { IMAGE_SAMPLE_C_CD_CL_V3_V4_nsa_gfx10, 2549 },
    { IMAGE_SAMPLE_C_CD_CL_V3_V5_nsa_gfx10, 2550 },
    { IMAGE_SAMPLE_C_CD_CL_V3_V6_nsa_gfx10, 2551 },
    { IMAGE_SAMPLE_C_CD_CL_V3_V8, 2579 },
    { IMAGE_SAMPLE_C_CD_CL_V3_V8_gfx10, 2524 },
    { IMAGE_SAMPLE_C_CD_CL_V3_V8_nsa_gfx10, 2552 },
    { IMAGE_SAMPLE_C_CD_CL_V3_V9_nsa_gfx10, 2553 },
    { IMAGE_SAMPLE_C_CD_CL_V4_V11_nsa_gfx10, 2561 },
    { IMAGE_SAMPLE_C_CD_CL_V4_V16, 2584 },
    { IMAGE_SAMPLE_C_CD_CL_V4_V16_gfx10, 2529 },
    { IMAGE_SAMPLE_C_CD_CL_V4_V3, 2581 },
    { IMAGE_SAMPLE_C_CD_CL_V4_V3_gfx10, 2526 },
    { IMAGE_SAMPLE_C_CD_CL_V4_V3_nsa_gfx10, 2555 },
    { IMAGE_SAMPLE_C_CD_CL_V4_V4, 2582 },
    { IMAGE_SAMPLE_C_CD_CL_V4_V4_gfx10, 2527 },
    { IMAGE_SAMPLE_C_CD_CL_V4_V4_nsa_gfx10, 2556 },
    { IMAGE_SAMPLE_C_CD_CL_V4_V5_nsa_gfx10, 2557 },
    { IMAGE_SAMPLE_C_CD_CL_V4_V6_nsa_gfx10, 2558 },
    { IMAGE_SAMPLE_C_CD_CL_V4_V8, 2583 },
    { IMAGE_SAMPLE_C_CD_CL_V4_V8_gfx10, 2528 },
    { IMAGE_SAMPLE_C_CD_CL_V4_V8_nsa_gfx10, 2559 },
    { IMAGE_SAMPLE_C_CD_CL_V4_V9_nsa_gfx10, 2560 },
    { IMAGE_SAMPLE_C_CD_CL_V5_V11_nsa_gfx10, 2568 },
    { IMAGE_SAMPLE_C_CD_CL_V5_V16, 2588 },
    { IMAGE_SAMPLE_C_CD_CL_V5_V16_gfx10, 2533 },
    { IMAGE_SAMPLE_C_CD_CL_V5_V3, 2585 },
    { IMAGE_SAMPLE_C_CD_CL_V5_V3_gfx10, 2530 },
    { IMAGE_SAMPLE_C_CD_CL_V5_V3_nsa_gfx10, 2562 },
    { IMAGE_SAMPLE_C_CD_CL_V5_V4, 2586 },
    { IMAGE_SAMPLE_C_CD_CL_V5_V4_gfx10, 2531 },
    { IMAGE_SAMPLE_C_CD_CL_V5_V4_nsa_gfx10, 2563 },
    { IMAGE_SAMPLE_C_CD_CL_V5_V5_nsa_gfx10, 2564 },
    { IMAGE_SAMPLE_C_CD_CL_V5_V6_nsa_gfx10, 2565 },
    { IMAGE_SAMPLE_C_CD_CL_V5_V8, 2587 },
    { IMAGE_SAMPLE_C_CD_CL_V5_V8_gfx10, 2532 },
    { IMAGE_SAMPLE_C_CD_CL_V5_V8_nsa_gfx10, 2566 },
    { IMAGE_SAMPLE_C_CD_CL_V5_V9_nsa_gfx10, 2567 },
    { IMAGE_SAMPLE_C_CD_O_V1_V11_nsa_gfx10, 2675 },
    { IMAGE_SAMPLE_C_CD_O_V1_V16, 2706 },
    { IMAGE_SAMPLE_C_CD_O_V1_V16_gfx10, 2656 },
    { IMAGE_SAMPLE_C_CD_O_V1_V4, 2704 },
    { IMAGE_SAMPLE_C_CD_O_V1_V4_gfx10, 2654 },
    { IMAGE_SAMPLE_C_CD_O_V1_V4_nsa_gfx10, 2669 },
    { IMAGE_SAMPLE_C_CD_O_V1_V5_nsa_gfx10, 2670 },
    { IMAGE_SAMPLE_C_CD_O_V1_V6_nsa_gfx10, 2671 },
    { IMAGE_SAMPLE_C_CD_O_V1_V7_nsa_gfx10, 2672 },
    { IMAGE_SAMPLE_C_CD_O_V1_V8, 2705 },
    { IMAGE_SAMPLE_C_CD_O_V1_V8_gfx10, 2655 },
    { IMAGE_SAMPLE_C_CD_O_V1_V8_nsa_gfx10, 2673 },
    { IMAGE_SAMPLE_C_CD_O_V1_V9_nsa_gfx10, 2674 },
    { IMAGE_SAMPLE_C_CD_O_V2_V11_nsa_gfx10, 2682 },
    { IMAGE_SAMPLE_C_CD_O_V2_V16, 2709 },
    { IMAGE_SAMPLE_C_CD_O_V2_V16_gfx10, 2659 },
    { IMAGE_SAMPLE_C_CD_O_V2_V4, 2707 },
    { IMAGE_SAMPLE_C_CD_O_V2_V4_gfx10, 2657 },
    { IMAGE_SAMPLE_C_CD_O_V2_V4_nsa_gfx10, 2676 },
    { IMAGE_SAMPLE_C_CD_O_V2_V5_nsa_gfx10, 2677 },
    { IMAGE_SAMPLE_C_CD_O_V2_V6_nsa_gfx10, 2678 },
    { IMAGE_SAMPLE_C_CD_O_V2_V7_nsa_gfx10, 2679 },
    { IMAGE_SAMPLE_C_CD_O_V2_V8, 2708 },
    { IMAGE_SAMPLE_C_CD_O_V2_V8_gfx10, 2658 },
    { IMAGE_SAMPLE_C_CD_O_V2_V8_nsa_gfx10, 2680 },
    { IMAGE_SAMPLE_C_CD_O_V2_V9_nsa_gfx10, 2681 },
    { IMAGE_SAMPLE_C_CD_O_V3_V11_nsa_gfx10, 2689 },
    { IMAGE_SAMPLE_C_CD_O_V3_V16, 2712 },
    { IMAGE_SAMPLE_C_CD_O_V3_V16_gfx10, 2662 },
    { IMAGE_SAMPLE_C_CD_O_V3_V4, 2710 },
    { IMAGE_SAMPLE_C_CD_O_V3_V4_gfx10, 2660 },
    { IMAGE_SAMPLE_C_CD_O_V3_V4_nsa_gfx10, 2683 },
    { IMAGE_SAMPLE_C_CD_O_V3_V5_nsa_gfx10, 2684 },
    { IMAGE_SAMPLE_C_CD_O_V3_V6_nsa_gfx10, 2685 },
    { IMAGE_SAMPLE_C_CD_O_V3_V7_nsa_gfx10, 2686 },
    { IMAGE_SAMPLE_C_CD_O_V3_V8, 2711 },
    { IMAGE_SAMPLE_C_CD_O_V3_V8_gfx10, 2661 },
    { IMAGE_SAMPLE_C_CD_O_V3_V8_nsa_gfx10, 2687 },
    { IMAGE_SAMPLE_C_CD_O_V3_V9_nsa_gfx10, 2688 },
    { IMAGE_SAMPLE_C_CD_O_V4_V11_nsa_gfx10, 2696 },
    { IMAGE_SAMPLE_C_CD_O_V4_V16, 2715 },
    { IMAGE_SAMPLE_C_CD_O_V4_V16_gfx10, 2665 },
    { IMAGE_SAMPLE_C_CD_O_V4_V4, 2713 },
    { IMAGE_SAMPLE_C_CD_O_V4_V4_gfx10, 2663 },
    { IMAGE_SAMPLE_C_CD_O_V4_V4_nsa_gfx10, 2690 },
    { IMAGE_SAMPLE_C_CD_O_V4_V5_nsa_gfx10, 2691 },
    { IMAGE_SAMPLE_C_CD_O_V4_V6_nsa_gfx10, 2692 },
    { IMAGE_SAMPLE_C_CD_O_V4_V7_nsa_gfx10, 2693 },
    { IMAGE_SAMPLE_C_CD_O_V4_V8, 2714 },
    { IMAGE_SAMPLE_C_CD_O_V4_V8_gfx10, 2664 },
    { IMAGE_SAMPLE_C_CD_O_V4_V8_nsa_gfx10, 2694 },
    { IMAGE_SAMPLE_C_CD_O_V4_V9_nsa_gfx10, 2695 },
    { IMAGE_SAMPLE_C_CD_O_V5_V11_nsa_gfx10, 2703 },
    { IMAGE_SAMPLE_C_CD_O_V5_V16, 2718 },
    { IMAGE_SAMPLE_C_CD_O_V5_V16_gfx10, 2668 },
    { IMAGE_SAMPLE_C_CD_O_V5_V4, 2716 },
    { IMAGE_SAMPLE_C_CD_O_V5_V4_gfx10, 2666 },
    { IMAGE_SAMPLE_C_CD_O_V5_V4_nsa_gfx10, 2697 },
    { IMAGE_SAMPLE_C_CD_O_V5_V5_nsa_gfx10, 2698 },
    { IMAGE_SAMPLE_C_CD_O_V5_V6_nsa_gfx10, 2699 },
    { IMAGE_SAMPLE_C_CD_O_V5_V7_nsa_gfx10, 2700 },
    { IMAGE_SAMPLE_C_CD_O_V5_V8, 2717 },
    { IMAGE_SAMPLE_C_CD_O_V5_V8_gfx10, 2667 },
    { IMAGE_SAMPLE_C_CD_O_V5_V8_nsa_gfx10, 2701 },
    { IMAGE_SAMPLE_C_CD_O_V5_V9_nsa_gfx10, 2702 },
    { IMAGE_SAMPLE_C_CD_V1_V10_nsa_gfx10, 2465 },
    { IMAGE_SAMPLE_C_CD_V1_V16, 2497 },
    { IMAGE_SAMPLE_C_CD_V1_V16_gfx10, 2442 },
    { IMAGE_SAMPLE_C_CD_V1_V3, 2494 },
    { IMAGE_SAMPLE_C_CD_V1_V3_gfx10, 2439 },
    { IMAGE_SAMPLE_C_CD_V1_V3_nsa_gfx10, 2459 },
    { IMAGE_SAMPLE_C_CD_V1_V4, 2495 },
    { IMAGE_SAMPLE_C_CD_V1_V4_gfx10, 2440 },
    { IMAGE_SAMPLE_C_CD_V1_V4_nsa_gfx10, 2460 },
    { IMAGE_SAMPLE_C_CD_V1_V5_nsa_gfx10, 2461 },
    { IMAGE_SAMPLE_C_CD_V1_V6_nsa_gfx10, 2462 },
    { IMAGE_SAMPLE_C_CD_V1_V7_nsa_gfx10, 2463 },
    { IMAGE_SAMPLE_C_CD_V1_V8, 2496 },
    { IMAGE_SAMPLE_C_CD_V1_V8_gfx10, 2441 },
    { IMAGE_SAMPLE_C_CD_V1_V8_nsa_gfx10, 2464 },
    { IMAGE_SAMPLE_C_CD_V2_V10_nsa_gfx10, 2472 },
    { IMAGE_SAMPLE_C_CD_V2_V16, 2501 },
    { IMAGE_SAMPLE_C_CD_V2_V16_gfx10, 2446 },
    { IMAGE_SAMPLE_C_CD_V2_V3, 2498 },
    { IMAGE_SAMPLE_C_CD_V2_V3_gfx10, 2443 },
    { IMAGE_SAMPLE_C_CD_V2_V3_nsa_gfx10, 2466 },
    { IMAGE_SAMPLE_C_CD_V2_V4, 2499 },
    { IMAGE_SAMPLE_C_CD_V2_V4_gfx10, 2444 },
    { IMAGE_SAMPLE_C_CD_V2_V4_nsa_gfx10, 2467 },
    { IMAGE_SAMPLE_C_CD_V2_V5_nsa_gfx10, 2468 },
    { IMAGE_SAMPLE_C_CD_V2_V6_nsa_gfx10, 2469 },
    { IMAGE_SAMPLE_C_CD_V2_V7_nsa_gfx10, 2470 },
    { IMAGE_SAMPLE_C_CD_V2_V8, 2500 },
    { IMAGE_SAMPLE_C_CD_V2_V8_gfx10, 2445 },
    { IMAGE_SAMPLE_C_CD_V2_V8_nsa_gfx10, 2471 },
    { IMAGE_SAMPLE_C_CD_V3_V10_nsa_gfx10, 2479 },
    { IMAGE_SAMPLE_C_CD_V3_V16, 2505 },
    { IMAGE_SAMPLE_C_CD_V3_V16_gfx10, 2450 },
    { IMAGE_SAMPLE_C_CD_V3_V3, 2502 },
    { IMAGE_SAMPLE_C_CD_V3_V3_gfx10, 2447 },
    { IMAGE_SAMPLE_C_CD_V3_V3_nsa_gfx10, 2473 },
    { IMAGE_SAMPLE_C_CD_V3_V4, 2503 },
    { IMAGE_SAMPLE_C_CD_V3_V4_gfx10, 2448 },
    { IMAGE_SAMPLE_C_CD_V3_V4_nsa_gfx10, 2474 },
    { IMAGE_SAMPLE_C_CD_V3_V5_nsa_gfx10, 2475 },
    { IMAGE_SAMPLE_C_CD_V3_V6_nsa_gfx10, 2476 },
    { IMAGE_SAMPLE_C_CD_V3_V7_nsa_gfx10, 2477 },
    { IMAGE_SAMPLE_C_CD_V3_V8, 2504 },
    { IMAGE_SAMPLE_C_CD_V3_V8_gfx10, 2449 },
    { IMAGE_SAMPLE_C_CD_V3_V8_nsa_gfx10, 2478 },
    { IMAGE_SAMPLE_C_CD_V4_V10_nsa_gfx10, 2486 },
    { IMAGE_SAMPLE_C_CD_V4_V16, 2509 },
    { IMAGE_SAMPLE_C_CD_V4_V16_gfx10, 2454 },
    { IMAGE_SAMPLE_C_CD_V4_V3, 2506 },
    { IMAGE_SAMPLE_C_CD_V4_V3_gfx10, 2451 },
    { IMAGE_SAMPLE_C_CD_V4_V3_nsa_gfx10, 2480 },
    { IMAGE_SAMPLE_C_CD_V4_V4, 2507 },
    { IMAGE_SAMPLE_C_CD_V4_V4_gfx10, 2452 },
    { IMAGE_SAMPLE_C_CD_V4_V4_nsa_gfx10, 2481 },
    { IMAGE_SAMPLE_C_CD_V4_V5_nsa_gfx10, 2482 },
    { IMAGE_SAMPLE_C_CD_V4_V6_nsa_gfx10, 2483 },
    { IMAGE_SAMPLE_C_CD_V4_V7_nsa_gfx10, 2484 },
    { IMAGE_SAMPLE_C_CD_V4_V8, 2508 },
    { IMAGE_SAMPLE_C_CD_V4_V8_gfx10, 2453 },
    { IMAGE_SAMPLE_C_CD_V4_V8_nsa_gfx10, 2485 },
    { IMAGE_SAMPLE_C_CD_V5_V10_nsa_gfx10, 2493 },
    { IMAGE_SAMPLE_C_CD_V5_V16, 2513 },
    { IMAGE_SAMPLE_C_CD_V5_V16_gfx10, 2458 },
    { IMAGE_SAMPLE_C_CD_V5_V3, 2510 },
    { IMAGE_SAMPLE_C_CD_V5_V3_gfx10, 2455 },
    { IMAGE_SAMPLE_C_CD_V5_V3_nsa_gfx10, 2487 },
    { IMAGE_SAMPLE_C_CD_V5_V4, 2511 },
    { IMAGE_SAMPLE_C_CD_V5_V4_gfx10, 2456 },
    { IMAGE_SAMPLE_C_CD_V5_V4_nsa_gfx10, 2488 },
    { IMAGE_SAMPLE_C_CD_V5_V5_nsa_gfx10, 2489 },
    { IMAGE_SAMPLE_C_CD_V5_V6_nsa_gfx10, 2490 },
    { IMAGE_SAMPLE_C_CD_V5_V7_nsa_gfx10, 2491 },
    { IMAGE_SAMPLE_C_CD_V5_V8, 2512 },
    { IMAGE_SAMPLE_C_CD_V5_V8_gfx10, 2457 },
    { IMAGE_SAMPLE_C_CD_V5_V8_nsa_gfx10, 2492 },
    { IMAGE_SAMPLE_C_CL_O_V1_V3, 2814 },
    { IMAGE_SAMPLE_C_CL_O_V1_V3_gfx10, 2779 },
    { IMAGE_SAMPLE_C_CL_O_V1_V3_nsa_gfx10, 2794 },
    { IMAGE_SAMPLE_C_CL_O_V1_V4, 2815 },
    { IMAGE_SAMPLE_C_CL_O_V1_V4_gfx10, 2780 },
    { IMAGE_SAMPLE_C_CL_O_V1_V4_nsa_gfx10, 2795 },
    { IMAGE_SAMPLE_C_CL_O_V1_V5_nsa_gfx10, 2796 },
    { IMAGE_SAMPLE_C_CL_O_V1_V6_nsa_gfx10, 2797 },
    { IMAGE_SAMPLE_C_CL_O_V1_V8, 2816 },
    { IMAGE_SAMPLE_C_CL_O_V1_V8_gfx10, 2781 },
    { IMAGE_SAMPLE_C_CL_O_V2_V3, 2817 },
    { IMAGE_SAMPLE_C_CL_O_V2_V3_gfx10, 2782 },
    { IMAGE_SAMPLE_C_CL_O_V2_V3_nsa_gfx10, 2798 },
    { IMAGE_SAMPLE_C_CL_O_V2_V4, 2818 },
    { IMAGE_SAMPLE_C_CL_O_V2_V4_gfx10, 2783 },
    { IMAGE_SAMPLE_C_CL_O_V2_V4_nsa_gfx10, 2799 },
    { IMAGE_SAMPLE_C_CL_O_V2_V5_nsa_gfx10, 2800 },
    { IMAGE_SAMPLE_C_CL_O_V2_V6_nsa_gfx10, 2801 },
    { IMAGE_SAMPLE_C_CL_O_V2_V8, 2819 },
    { IMAGE_SAMPLE_C_CL_O_V2_V8_gfx10, 2784 },
    { IMAGE_SAMPLE_C_CL_O_V3_V3, 2820 },
    { IMAGE_SAMPLE_C_CL_O_V3_V3_gfx10, 2785 },
    { IMAGE_SAMPLE_C_CL_O_V3_V3_nsa_gfx10, 2802 },
    { IMAGE_SAMPLE_C_CL_O_V3_V4, 2821 },
    { IMAGE_SAMPLE_C_CL_O_V3_V4_gfx10, 2786 },
    { IMAGE_SAMPLE_C_CL_O_V3_V4_nsa_gfx10, 2803 },
    { IMAGE_SAMPLE_C_CL_O_V3_V5_nsa_gfx10, 2804 },
    { IMAGE_SAMPLE_C_CL_O_V3_V6_nsa_gfx10, 2805 },
    { IMAGE_SAMPLE_C_CL_O_V3_V8, 2822 },
    { IMAGE_SAMPLE_C_CL_O_V3_V8_gfx10, 2787 },
    { IMAGE_SAMPLE_C_CL_O_V4_V3, 2823 },
    { IMAGE_SAMPLE_C_CL_O_V4_V3_gfx10, 2788 },
    { IMAGE_SAMPLE_C_CL_O_V4_V3_nsa_gfx10, 2806 },
    { IMAGE_SAMPLE_C_CL_O_V4_V4, 2824 },
    { IMAGE_SAMPLE_C_CL_O_V4_V4_gfx10, 2789 },
    { IMAGE_SAMPLE_C_CL_O_V4_V4_nsa_gfx10, 2807 },
    { IMAGE_SAMPLE_C_CL_O_V4_V5_nsa_gfx10, 2808 },
    { IMAGE_SAMPLE_C_CL_O_V4_V6_nsa_gfx10, 2809 },
    { IMAGE_SAMPLE_C_CL_O_V4_V8, 2825 },
    { IMAGE_SAMPLE_C_CL_O_V4_V8_gfx10, 2790 },
    { IMAGE_SAMPLE_C_CL_O_V5_V3, 2826 },
    { IMAGE_SAMPLE_C_CL_O_V5_V3_gfx10, 2791 },
    { IMAGE_SAMPLE_C_CL_O_V5_V3_nsa_gfx10, 2810 },
    { IMAGE_SAMPLE_C_CL_O_V5_V4, 2827 },
    { IMAGE_SAMPLE_C_CL_O_V5_V4_gfx10, 2792 },
    { IMAGE_SAMPLE_C_CL_O_V5_V4_nsa_gfx10, 2811 },
    { IMAGE_SAMPLE_C_CL_O_V5_V5_nsa_gfx10, 2812 },
    { IMAGE_SAMPLE_C_CL_O_V5_V6_nsa_gfx10, 2813 },
    { IMAGE_SAMPLE_C_CL_O_V5_V8, 2828 },
    { IMAGE_SAMPLE_C_CL_O_V5_V8_gfx10, 2793 },
    { IMAGE_SAMPLE_C_CL_V1_V2, 2759 },
    { IMAGE_SAMPLE_C_CL_V1_V2_gfx10, 2719 },
    { IMAGE_SAMPLE_C_CL_V1_V2_nsa_gfx10, 2739 },
    { IMAGE_SAMPLE_C_CL_V1_V3, 2760 },
    { IMAGE_SAMPLE_C_CL_V1_V3_gfx10, 2720 },
    { IMAGE_SAMPLE_C_CL_V1_V3_nsa_gfx10, 2740 },
    { IMAGE_SAMPLE_C_CL_V1_V4, 2761 },
    { IMAGE_SAMPLE_C_CL_V1_V4_gfx10, 2721 },
    { IMAGE_SAMPLE_C_CL_V1_V4_nsa_gfx10, 2741 },
    { IMAGE_SAMPLE_C_CL_V1_V5_nsa_gfx10, 2742 },
    { IMAGE_SAMPLE_C_CL_V1_V8, 2762 },
    { IMAGE_SAMPLE_C_CL_V1_V8_gfx10, 2722 },
    { IMAGE_SAMPLE_C_CL_V2_V2, 2763 },
    { IMAGE_SAMPLE_C_CL_V2_V2_gfx10, 2723 },
    { IMAGE_SAMPLE_C_CL_V2_V2_nsa_gfx10, 2743 },
    { IMAGE_SAMPLE_C_CL_V2_V3, 2764 },
    { IMAGE_SAMPLE_C_CL_V2_V3_gfx10, 2724 },
    { IMAGE_SAMPLE_C_CL_V2_V3_nsa_gfx10, 2744 },
    { IMAGE_SAMPLE_C_CL_V2_V4, 2765 },
    { IMAGE_SAMPLE_C_CL_V2_V4_gfx10, 2725 },
    { IMAGE_SAMPLE_C_CL_V2_V4_nsa_gfx10, 2745 },
    { IMAGE_SAMPLE_C_CL_V2_V5_nsa_gfx10, 2746 },
    { IMAGE_SAMPLE_C_CL_V2_V8, 2766 },
    { IMAGE_SAMPLE_C_CL_V2_V8_gfx10, 2726 },
    { IMAGE_SAMPLE_C_CL_V3_V2, 2767 },
    { IMAGE_SAMPLE_C_CL_V3_V2_gfx10, 2727 },
    { IMAGE_SAMPLE_C_CL_V3_V2_nsa_gfx10, 2747 },
    { IMAGE_SAMPLE_C_CL_V3_V3, 2768 },
    { IMAGE_SAMPLE_C_CL_V3_V3_gfx10, 2728 },
    { IMAGE_SAMPLE_C_CL_V3_V3_nsa_gfx10, 2748 },
    { IMAGE_SAMPLE_C_CL_V3_V4, 2769 },
    { IMAGE_SAMPLE_C_CL_V3_V4_gfx10, 2729 },
    { IMAGE_SAMPLE_C_CL_V3_V4_nsa_gfx10, 2749 },
    { IMAGE_SAMPLE_C_CL_V3_V5_nsa_gfx10, 2750 },
    { IMAGE_SAMPLE_C_CL_V3_V8, 2770 },
    { IMAGE_SAMPLE_C_CL_V3_V8_gfx10, 2730 },
    { IMAGE_SAMPLE_C_CL_V4_V2, 2771 },
    { IMAGE_SAMPLE_C_CL_V4_V2_gfx10, 2731 },
    { IMAGE_SAMPLE_C_CL_V4_V2_nsa_gfx10, 2751 },
    { IMAGE_SAMPLE_C_CL_V4_V3, 2772 },
    { IMAGE_SAMPLE_C_CL_V4_V3_gfx10, 2732 },
    { IMAGE_SAMPLE_C_CL_V4_V3_nsa_gfx10, 2752 },
    { IMAGE_SAMPLE_C_CL_V4_V4, 2773 },
    { IMAGE_SAMPLE_C_CL_V4_V4_gfx10, 2733 },
    { IMAGE_SAMPLE_C_CL_V4_V4_nsa_gfx10, 2753 },
    { IMAGE_SAMPLE_C_CL_V4_V5_nsa_gfx10, 2754 },
    { IMAGE_SAMPLE_C_CL_V4_V8, 2774 },
    { IMAGE_SAMPLE_C_CL_V4_V8_gfx10, 2734 },
    { IMAGE_SAMPLE_C_CL_V5_V2, 2775 },
    { IMAGE_SAMPLE_C_CL_V5_V2_gfx10, 2735 },
    { IMAGE_SAMPLE_C_CL_V5_V2_nsa_gfx10, 2755 },
    { IMAGE_SAMPLE_C_CL_V5_V3, 2776 },
    { IMAGE_SAMPLE_C_CL_V5_V3_gfx10, 2736 },
    { IMAGE_SAMPLE_C_CL_V5_V3_nsa_gfx10, 2756 },
    { IMAGE_SAMPLE_C_CL_V5_V4, 2777 },
    { IMAGE_SAMPLE_C_CL_V5_V4_gfx10, 2737 },
    { IMAGE_SAMPLE_C_CL_V5_V4_nsa_gfx10, 2757 },
    { IMAGE_SAMPLE_C_CL_V5_V5_nsa_gfx10, 2758 },
    { IMAGE_SAMPLE_C_CL_V5_V8, 2778 },
    { IMAGE_SAMPLE_C_CL_V5_V8_gfx10, 2738 },
    { IMAGE_SAMPLE_C_D_CL_O_V1_V10_nsa_gfx10, 2999 },
    { IMAGE_SAMPLE_C_D_CL_O_V1_V12_nsa_gfx10, 3000 },
    { IMAGE_SAMPLE_C_D_CL_O_V1_V16, 3031 },
    { IMAGE_SAMPLE_C_D_CL_O_V1_V16_gfx10, 2981 },
    { IMAGE_SAMPLE_C_D_CL_O_V1_V4, 3029 },
    { IMAGE_SAMPLE_C_D_CL_O_V1_V4_gfx10, 2979 },
    { IMAGE_SAMPLE_C_D_CL_O_V1_V4_nsa_gfx10, 2994 },
    { IMAGE_SAMPLE_C_D_CL_O_V1_V5_nsa_gfx10, 2995 },
    { IMAGE_SAMPLE_C_D_CL_O_V1_V6_nsa_gfx10, 2996 },
    { IMAGE_SAMPLE_C_D_CL_O_V1_V7_nsa_gfx10, 2997 },
    { IMAGE_SAMPLE_C_D_CL_O_V1_V8, 3030 },
    { IMAGE_SAMPLE_C_D_CL_O_V1_V8_gfx10, 2980 },
    { IMAGE_SAMPLE_C_D_CL_O_V1_V9_nsa_gfx10, 2998 },
    { IMAGE_SAMPLE_C_D_CL_O_V2_V10_nsa_gfx10, 3006 },
    { IMAGE_SAMPLE_C_D_CL_O_V2_V12_nsa_gfx10, 3007 },
    { IMAGE_SAMPLE_C_D_CL_O_V2_V16, 3034 },
    { IMAGE_SAMPLE_C_D_CL_O_V2_V16_gfx10, 2984 },
    { IMAGE_SAMPLE_C_D_CL_O_V2_V4, 3032 },
    { IMAGE_SAMPLE_C_D_CL_O_V2_V4_gfx10, 2982 },
    { IMAGE_SAMPLE_C_D_CL_O_V2_V4_nsa_gfx10, 3001 },
    { IMAGE_SAMPLE_C_D_CL_O_V2_V5_nsa_gfx10, 3002 },
    { IMAGE_SAMPLE_C_D_CL_O_V2_V6_nsa_gfx10, 3003 },
    { IMAGE_SAMPLE_C_D_CL_O_V2_V7_nsa_gfx10, 3004 },
    { IMAGE_SAMPLE_C_D_CL_O_V2_V8, 3033 },
    { IMAGE_SAMPLE_C_D_CL_O_V2_V8_gfx10, 2983 },
    { IMAGE_SAMPLE_C_D_CL_O_V2_V9_nsa_gfx10, 3005 },
    { IMAGE_SAMPLE_C_D_CL_O_V3_V10_nsa_gfx10, 3013 },
    { IMAGE_SAMPLE_C_D_CL_O_V3_V12_nsa_gfx10, 3014 },
    { IMAGE_SAMPLE_C_D_CL_O_V3_V16, 3037 },
    { IMAGE_SAMPLE_C_D_CL_O_V3_V16_gfx10, 2987 },
    { IMAGE_SAMPLE_C_D_CL_O_V3_V4, 3035 },
    { IMAGE_SAMPLE_C_D_CL_O_V3_V4_gfx10, 2985 },
    { IMAGE_SAMPLE_C_D_CL_O_V3_V4_nsa_gfx10, 3008 },
    { IMAGE_SAMPLE_C_D_CL_O_V3_V5_nsa_gfx10, 3009 },
    { IMAGE_SAMPLE_C_D_CL_O_V3_V6_nsa_gfx10, 3010 },
    { IMAGE_SAMPLE_C_D_CL_O_V3_V7_nsa_gfx10, 3011 },
    { IMAGE_SAMPLE_C_D_CL_O_V3_V8, 3036 },
    { IMAGE_SAMPLE_C_D_CL_O_V3_V8_gfx10, 2986 },
    { IMAGE_SAMPLE_C_D_CL_O_V3_V9_nsa_gfx10, 3012 },
    { IMAGE_SAMPLE_C_D_CL_O_V4_V10_nsa_gfx10, 3020 },
    { IMAGE_SAMPLE_C_D_CL_O_V4_V12_nsa_gfx10, 3021 },
    { IMAGE_SAMPLE_C_D_CL_O_V4_V16, 3040 },
    { IMAGE_SAMPLE_C_D_CL_O_V4_V16_gfx10, 2990 },
    { IMAGE_SAMPLE_C_D_CL_O_V4_V4, 3038 },
    { IMAGE_SAMPLE_C_D_CL_O_V4_V4_gfx10, 2988 },
    { IMAGE_SAMPLE_C_D_CL_O_V4_V4_nsa_gfx10, 3015 },
    { IMAGE_SAMPLE_C_D_CL_O_V4_V5_nsa_gfx10, 3016 },
    { IMAGE_SAMPLE_C_D_CL_O_V4_V6_nsa_gfx10, 3017 },
    { IMAGE_SAMPLE_C_D_CL_O_V4_V7_nsa_gfx10, 3018 },
    { IMAGE_SAMPLE_C_D_CL_O_V4_V8, 3039 },
    { IMAGE_SAMPLE_C_D_CL_O_V4_V8_gfx10, 2989 },
    { IMAGE_SAMPLE_C_D_CL_O_V4_V9_nsa_gfx10, 3019 },
    { IMAGE_SAMPLE_C_D_CL_O_V5_V10_nsa_gfx10, 3027 },
    { IMAGE_SAMPLE_C_D_CL_O_V5_V12_nsa_gfx10, 3028 },
    { IMAGE_SAMPLE_C_D_CL_O_V5_V16, 3043 },
    { IMAGE_SAMPLE_C_D_CL_O_V5_V16_gfx10, 2993 },
    { IMAGE_SAMPLE_C_D_CL_O_V5_V4, 3041 },
    { IMAGE_SAMPLE_C_D_CL_O_V5_V4_gfx10, 2991 },
    { IMAGE_SAMPLE_C_D_CL_O_V5_V4_nsa_gfx10, 3022 },
    { IMAGE_SAMPLE_C_D_CL_O_V5_V5_nsa_gfx10, 3023 },
    { IMAGE_SAMPLE_C_D_CL_O_V5_V6_nsa_gfx10, 3024 },
    { IMAGE_SAMPLE_C_D_CL_O_V5_V7_nsa_gfx10, 3025 },
    { IMAGE_SAMPLE_C_D_CL_O_V5_V8, 3042 },
    { IMAGE_SAMPLE_C_D_CL_O_V5_V8_gfx10, 2992 },
    { IMAGE_SAMPLE_C_D_CL_O_V5_V9_nsa_gfx10, 3026 },
    { IMAGE_SAMPLE_C_D_CL_V1_V11_nsa_gfx10, 2930 },
    { IMAGE_SAMPLE_C_D_CL_V1_V16, 2962 },
    { IMAGE_SAMPLE_C_D_CL_V1_V16_gfx10, 2907 },
    { IMAGE_SAMPLE_C_D_CL_V1_V3, 2959 },
    { IMAGE_SAMPLE_C_D_CL_V1_V3_gfx10, 2904 },
    { IMAGE_SAMPLE_C_D_CL_V1_V3_nsa_gfx10, 2924 },
    { IMAGE_SAMPLE_C_D_CL_V1_V4, 2960 },
    { IMAGE_SAMPLE_C_D_CL_V1_V4_gfx10, 2905 },
    { IMAGE_SAMPLE_C_D_CL_V1_V4_nsa_gfx10, 2925 },
    { IMAGE_SAMPLE_C_D_CL_V1_V5_nsa_gfx10, 2926 },
    { IMAGE_SAMPLE_C_D_CL_V1_V6_nsa_gfx10, 2927 },
    { IMAGE_SAMPLE_C_D_CL_V1_V8, 2961 },
    { IMAGE_SAMPLE_C_D_CL_V1_V8_gfx10, 2906 },
    { IMAGE_SAMPLE_C_D_CL_V1_V8_nsa_gfx10, 2928 },
    { IMAGE_SAMPLE_C_D_CL_V1_V9_nsa_gfx10, 2929 },
    { IMAGE_SAMPLE_C_D_CL_V2_V11_nsa_gfx10, 2937 },
    { IMAGE_SAMPLE_C_D_CL_V2_V16, 2966 },
    { IMAGE_SAMPLE_C_D_CL_V2_V16_gfx10, 2911 },
    { IMAGE_SAMPLE_C_D_CL_V2_V3, 2963 },
    { IMAGE_SAMPLE_C_D_CL_V2_V3_gfx10, 2908 },
    { IMAGE_SAMPLE_C_D_CL_V2_V3_nsa_gfx10, 2931 },
    { IMAGE_SAMPLE_C_D_CL_V2_V4, 2964 },
    { IMAGE_SAMPLE_C_D_CL_V2_V4_gfx10, 2909 },
    { IMAGE_SAMPLE_C_D_CL_V2_V4_nsa_gfx10, 2932 },
    { IMAGE_SAMPLE_C_D_CL_V2_V5_nsa_gfx10, 2933 },
    { IMAGE_SAMPLE_C_D_CL_V2_V6_nsa_gfx10, 2934 },
    { IMAGE_SAMPLE_C_D_CL_V2_V8, 2965 },
    { IMAGE_SAMPLE_C_D_CL_V2_V8_gfx10, 2910 },
    { IMAGE_SAMPLE_C_D_CL_V2_V8_nsa_gfx10, 2935 },
    { IMAGE_SAMPLE_C_D_CL_V2_V9_nsa_gfx10, 2936 },
    { IMAGE_SAMPLE_C_D_CL_V3_V11_nsa_gfx10, 2944 },
    { IMAGE_SAMPLE_C_D_CL_V3_V16, 2970 },
    { IMAGE_SAMPLE_C_D_CL_V3_V16_gfx10, 2915 },
    { IMAGE_SAMPLE_C_D_CL_V3_V3, 2967 },
    { IMAGE_SAMPLE_C_D_CL_V3_V3_gfx10, 2912 },
    { IMAGE_SAMPLE_C_D_CL_V3_V3_nsa_gfx10, 2938 },
    { IMAGE_SAMPLE_C_D_CL_V3_V4, 2968 },
    { IMAGE_SAMPLE_C_D_CL_V3_V4_gfx10, 2913 },
    { IMAGE_SAMPLE_C_D_CL_V3_V4_nsa_gfx10, 2939 },
    { IMAGE_SAMPLE_C_D_CL_V3_V5_nsa_gfx10, 2940 },
    { IMAGE_SAMPLE_C_D_CL_V3_V6_nsa_gfx10, 2941 },
    { IMAGE_SAMPLE_C_D_CL_V3_V8, 2969 },
    { IMAGE_SAMPLE_C_D_CL_V3_V8_gfx10, 2914 },
    { IMAGE_SAMPLE_C_D_CL_V3_V8_nsa_gfx10, 2942 },
    { IMAGE_SAMPLE_C_D_CL_V3_V9_nsa_gfx10, 2943 },
    { IMAGE_SAMPLE_C_D_CL_V4_V11_nsa_gfx10, 2951 },
    { IMAGE_SAMPLE_C_D_CL_V4_V16, 2974 },
    { IMAGE_SAMPLE_C_D_CL_V4_V16_gfx10, 2919 },
    { IMAGE_SAMPLE_C_D_CL_V4_V3, 2971 },
    { IMAGE_SAMPLE_C_D_CL_V4_V3_gfx10, 2916 },
    { IMAGE_SAMPLE_C_D_CL_V4_V3_nsa_gfx10, 2945 },
    { IMAGE_SAMPLE_C_D_CL_V4_V4, 2972 },
    { IMAGE_SAMPLE_C_D_CL_V4_V4_gfx10, 2917 },
    { IMAGE_SAMPLE_C_D_CL_V4_V4_nsa_gfx10, 2946 },
    { IMAGE_SAMPLE_C_D_CL_V4_V5_nsa_gfx10, 2947 },
    { IMAGE_SAMPLE_C_D_CL_V4_V6_nsa_gfx10, 2948 },
    { IMAGE_SAMPLE_C_D_CL_V4_V8, 2973 },
    { IMAGE_SAMPLE_C_D_CL_V4_V8_gfx10, 2918 },
    { IMAGE_SAMPLE_C_D_CL_V4_V8_nsa_gfx10, 2949 },
    { IMAGE_SAMPLE_C_D_CL_V4_V9_nsa_gfx10, 2950 },
    { IMAGE_SAMPLE_C_D_CL_V5_V11_nsa_gfx10, 2958 },
    { IMAGE_SAMPLE_C_D_CL_V5_V16, 2978 },
    { IMAGE_SAMPLE_C_D_CL_V5_V16_gfx10, 2923 },
    { IMAGE_SAMPLE_C_D_CL_V5_V3, 2975 },
    { IMAGE_SAMPLE_C_D_CL_V5_V3_gfx10, 2920 },
    { IMAGE_SAMPLE_C_D_CL_V5_V3_nsa_gfx10, 2952 },
    { IMAGE_SAMPLE_C_D_CL_V5_V4, 2976 },
    { IMAGE_SAMPLE_C_D_CL_V5_V4_gfx10, 2921 },
    { IMAGE_SAMPLE_C_D_CL_V5_V4_nsa_gfx10, 2953 },
    { IMAGE_SAMPLE_C_D_CL_V5_V5_nsa_gfx10, 2954 },
    { IMAGE_SAMPLE_C_D_CL_V5_V6_nsa_gfx10, 2955 },
    { IMAGE_SAMPLE_C_D_CL_V5_V8, 2977 },
    { IMAGE_SAMPLE_C_D_CL_V5_V8_gfx10, 2922 },
    { IMAGE_SAMPLE_C_D_CL_V5_V8_nsa_gfx10, 2956 },
    { IMAGE_SAMPLE_C_D_CL_V5_V9_nsa_gfx10, 2957 },
    { IMAGE_SAMPLE_C_D_O_V1_V11_nsa_gfx10, 3065 },
    { IMAGE_SAMPLE_C_D_O_V1_V16, 3096 },
    { IMAGE_SAMPLE_C_D_O_V1_V16_gfx10, 3046 },
    { IMAGE_SAMPLE_C_D_O_V1_V4, 3094 },
    { IMAGE_SAMPLE_C_D_O_V1_V4_gfx10, 3044 },
    { IMAGE_SAMPLE_C_D_O_V1_V4_nsa_gfx10, 3059 },
    { IMAGE_SAMPLE_C_D_O_V1_V5_nsa_gfx10, 3060 },
    { IMAGE_SAMPLE_C_D_O_V1_V6_nsa_gfx10, 3061 },
    { IMAGE_SAMPLE_C_D_O_V1_V7_nsa_gfx10, 3062 },
    { IMAGE_SAMPLE_C_D_O_V1_V8, 3095 },
    { IMAGE_SAMPLE_C_D_O_V1_V8_gfx10, 3045 },
    { IMAGE_SAMPLE_C_D_O_V1_V8_nsa_gfx10, 3063 },
    { IMAGE_SAMPLE_C_D_O_V1_V9_nsa_gfx10, 3064 },
    { IMAGE_SAMPLE_C_D_O_V2_V11_nsa_gfx10, 3072 },
    { IMAGE_SAMPLE_C_D_O_V2_V16, 3099 },
    { IMAGE_SAMPLE_C_D_O_V2_V16_gfx10, 3049 },
    { IMAGE_SAMPLE_C_D_O_V2_V4, 3097 },
    { IMAGE_SAMPLE_C_D_O_V2_V4_gfx10, 3047 },
    { IMAGE_SAMPLE_C_D_O_V2_V4_nsa_gfx10, 3066 },
    { IMAGE_SAMPLE_C_D_O_V2_V5_nsa_gfx10, 3067 },
    { IMAGE_SAMPLE_C_D_O_V2_V6_nsa_gfx10, 3068 },
    { IMAGE_SAMPLE_C_D_O_V2_V7_nsa_gfx10, 3069 },
    { IMAGE_SAMPLE_C_D_O_V2_V8, 3098 },
    { IMAGE_SAMPLE_C_D_O_V2_V8_gfx10, 3048 },
    { IMAGE_SAMPLE_C_D_O_V2_V8_nsa_gfx10, 3070 },
    { IMAGE_SAMPLE_C_D_O_V2_V9_nsa_gfx10, 3071 },
    { IMAGE_SAMPLE_C_D_O_V3_V11_nsa_gfx10, 3079 },
    { IMAGE_SAMPLE_C_D_O_V3_V16, 3102 },
    { IMAGE_SAMPLE_C_D_O_V3_V16_gfx10, 3052 },
    { IMAGE_SAMPLE_C_D_O_V3_V4, 3100 },
    { IMAGE_SAMPLE_C_D_O_V3_V4_gfx10, 3050 },
    { IMAGE_SAMPLE_C_D_O_V3_V4_nsa_gfx10, 3073 },
    { IMAGE_SAMPLE_C_D_O_V3_V5_nsa_gfx10, 3074 },
    { IMAGE_SAMPLE_C_D_O_V3_V6_nsa_gfx10, 3075 },
    { IMAGE_SAMPLE_C_D_O_V3_V7_nsa_gfx10, 3076 },
    { IMAGE_SAMPLE_C_D_O_V3_V8, 3101 },
    { IMAGE_SAMPLE_C_D_O_V3_V8_gfx10, 3051 },
    { IMAGE_SAMPLE_C_D_O_V3_V8_nsa_gfx10, 3077 },
    { IMAGE_SAMPLE_C_D_O_V3_V9_nsa_gfx10, 3078 },
    { IMAGE_SAMPLE_C_D_O_V4_V11_nsa_gfx10, 3086 },
    { IMAGE_SAMPLE_C_D_O_V4_V16, 3105 },
    { IMAGE_SAMPLE_C_D_O_V4_V16_gfx10, 3055 },
    { IMAGE_SAMPLE_C_D_O_V4_V4, 3103 },
    { IMAGE_SAMPLE_C_D_O_V4_V4_gfx10, 3053 },
    { IMAGE_SAMPLE_C_D_O_V4_V4_nsa_gfx10, 3080 },
    { IMAGE_SAMPLE_C_D_O_V4_V5_nsa_gfx10, 3081 },
    { IMAGE_SAMPLE_C_D_O_V4_V6_nsa_gfx10, 3082 },
    { IMAGE_SAMPLE_C_D_O_V4_V7_nsa_gfx10, 3083 },
    { IMAGE_SAMPLE_C_D_O_V4_V8, 3104 },
    { IMAGE_SAMPLE_C_D_O_V4_V8_gfx10, 3054 },
    { IMAGE_SAMPLE_C_D_O_V4_V8_nsa_gfx10, 3084 },
    { IMAGE_SAMPLE_C_D_O_V4_V9_nsa_gfx10, 3085 },
    { IMAGE_SAMPLE_C_D_O_V5_V11_nsa_gfx10, 3093 },
    { IMAGE_SAMPLE_C_D_O_V5_V16, 3108 },
    { IMAGE_SAMPLE_C_D_O_V5_V16_gfx10, 3058 },
    { IMAGE_SAMPLE_C_D_O_V5_V4, 3106 },
    { IMAGE_SAMPLE_C_D_O_V5_V4_gfx10, 3056 },
    { IMAGE_SAMPLE_C_D_O_V5_V4_nsa_gfx10, 3087 },
    { IMAGE_SAMPLE_C_D_O_V5_V5_nsa_gfx10, 3088 },
    { IMAGE_SAMPLE_C_D_O_V5_V6_nsa_gfx10, 3089 },
    { IMAGE_SAMPLE_C_D_O_V5_V7_nsa_gfx10, 3090 },
    { IMAGE_SAMPLE_C_D_O_V5_V8, 3107 },
    { IMAGE_SAMPLE_C_D_O_V5_V8_gfx10, 3057 },
    { IMAGE_SAMPLE_C_D_O_V5_V8_nsa_gfx10, 3091 },
    { IMAGE_SAMPLE_C_D_O_V5_V9_nsa_gfx10, 3092 },
    { IMAGE_SAMPLE_C_D_V1_V10_nsa_gfx10, 2855 },
    { IMAGE_SAMPLE_C_D_V1_V16, 2887 },
    { IMAGE_SAMPLE_C_D_V1_V16_gfx10, 2832 },
    { IMAGE_SAMPLE_C_D_V1_V3, 2884 },
    { IMAGE_SAMPLE_C_D_V1_V3_gfx10, 2829 },
    { IMAGE_SAMPLE_C_D_V1_V3_nsa_gfx10, 2849 },
    { IMAGE_SAMPLE_C_D_V1_V4, 2885 },
    { IMAGE_SAMPLE_C_D_V1_V4_gfx10, 2830 },
    { IMAGE_SAMPLE_C_D_V1_V4_nsa_gfx10, 2850 },
    { IMAGE_SAMPLE_C_D_V1_V5_nsa_gfx10, 2851 },
    { IMAGE_SAMPLE_C_D_V1_V6_nsa_gfx10, 2852 },
    { IMAGE_SAMPLE_C_D_V1_V7_nsa_gfx10, 2853 },
    { IMAGE_SAMPLE_C_D_V1_V8, 2886 },
    { IMAGE_SAMPLE_C_D_V1_V8_gfx10, 2831 },
    { IMAGE_SAMPLE_C_D_V1_V8_nsa_gfx10, 2854 },
    { IMAGE_SAMPLE_C_D_V2_V10_nsa_gfx10, 2862 },
    { IMAGE_SAMPLE_C_D_V2_V16, 2891 },
    { IMAGE_SAMPLE_C_D_V2_V16_gfx10, 2836 },
    { IMAGE_SAMPLE_C_D_V2_V3, 2888 },
    { IMAGE_SAMPLE_C_D_V2_V3_gfx10, 2833 },
    { IMAGE_SAMPLE_C_D_V2_V3_nsa_gfx10, 2856 },
    { IMAGE_SAMPLE_C_D_V2_V4, 2889 },
    { IMAGE_SAMPLE_C_D_V2_V4_gfx10, 2834 },
    { IMAGE_SAMPLE_C_D_V2_V4_nsa_gfx10, 2857 },
    { IMAGE_SAMPLE_C_D_V2_V5_nsa_gfx10, 2858 },
    { IMAGE_SAMPLE_C_D_V2_V6_nsa_gfx10, 2859 },
    { IMAGE_SAMPLE_C_D_V2_V7_nsa_gfx10, 2860 },
    { IMAGE_SAMPLE_C_D_V2_V8, 2890 },
    { IMAGE_SAMPLE_C_D_V2_V8_gfx10, 2835 },
    { IMAGE_SAMPLE_C_D_V2_V8_nsa_gfx10, 2861 },
    { IMAGE_SAMPLE_C_D_V3_V10_nsa_gfx10, 2869 },
    { IMAGE_SAMPLE_C_D_V3_V16, 2895 },
    { IMAGE_SAMPLE_C_D_V3_V16_gfx10, 2840 },
    { IMAGE_SAMPLE_C_D_V3_V3, 2892 },
    { IMAGE_SAMPLE_C_D_V3_V3_gfx10, 2837 },
    { IMAGE_SAMPLE_C_D_V3_V3_nsa_gfx10, 2863 },
    { IMAGE_SAMPLE_C_D_V3_V4, 2893 },
    { IMAGE_SAMPLE_C_D_V3_V4_gfx10, 2838 },
    { IMAGE_SAMPLE_C_D_V3_V4_nsa_gfx10, 2864 },
    { IMAGE_SAMPLE_C_D_V3_V5_nsa_gfx10, 2865 },
    { IMAGE_SAMPLE_C_D_V3_V6_nsa_gfx10, 2866 },
    { IMAGE_SAMPLE_C_D_V3_V7_nsa_gfx10, 2867 },
    { IMAGE_SAMPLE_C_D_V3_V8, 2894 },
    { IMAGE_SAMPLE_C_D_V3_V8_gfx10, 2839 },
    { IMAGE_SAMPLE_C_D_V3_V8_nsa_gfx10, 2868 },
    { IMAGE_SAMPLE_C_D_V4_V10_nsa_gfx10, 2876 },
    { IMAGE_SAMPLE_C_D_V4_V16, 2899 },
    { IMAGE_SAMPLE_C_D_V4_V16_gfx10, 2844 },
    { IMAGE_SAMPLE_C_D_V4_V3, 2896 },
    { IMAGE_SAMPLE_C_D_V4_V3_gfx10, 2841 },
    { IMAGE_SAMPLE_C_D_V4_V3_nsa_gfx10, 2870 },
    { IMAGE_SAMPLE_C_D_V4_V4, 2897 },
    { IMAGE_SAMPLE_C_D_V4_V4_gfx10, 2842 },
    { IMAGE_SAMPLE_C_D_V4_V4_nsa_gfx10, 2871 },
    { IMAGE_SAMPLE_C_D_V4_V5_nsa_gfx10, 2872 },
    { IMAGE_SAMPLE_C_D_V4_V6_nsa_gfx10, 2873 },
    { IMAGE_SAMPLE_C_D_V4_V7_nsa_gfx10, 2874 },
    { IMAGE_SAMPLE_C_D_V4_V8, 2898 },
    { IMAGE_SAMPLE_C_D_V4_V8_gfx10, 2843 },
    { IMAGE_SAMPLE_C_D_V4_V8_nsa_gfx10, 2875 },
    { IMAGE_SAMPLE_C_D_V5_V10_nsa_gfx10, 2883 },
    { IMAGE_SAMPLE_C_D_V5_V16, 2903 },
    { IMAGE_SAMPLE_C_D_V5_V16_gfx10, 2848 },
    { IMAGE_SAMPLE_C_D_V5_V3, 2900 },
    { IMAGE_SAMPLE_C_D_V5_V3_gfx10, 2845 },
    { IMAGE_SAMPLE_C_D_V5_V3_nsa_gfx10, 2877 },
    { IMAGE_SAMPLE_C_D_V5_V4, 2901 },
    { IMAGE_SAMPLE_C_D_V5_V4_gfx10, 2846 },
    { IMAGE_SAMPLE_C_D_V5_V4_nsa_gfx10, 2878 },
    { IMAGE_SAMPLE_C_D_V5_V5_nsa_gfx10, 2879 },
    { IMAGE_SAMPLE_C_D_V5_V6_nsa_gfx10, 2880 },
    { IMAGE_SAMPLE_C_D_V5_V7_nsa_gfx10, 2881 },
    { IMAGE_SAMPLE_C_D_V5_V8, 2902 },
    { IMAGE_SAMPLE_C_D_V5_V8_gfx10, 2847 },
    { IMAGE_SAMPLE_C_D_V5_V8_nsa_gfx10, 2882 },
    { IMAGE_SAMPLE_C_LZ_O_V1_V3, 3244 },
    { IMAGE_SAMPLE_C_LZ_O_V1_V3_gfx10, 3214 },
    { IMAGE_SAMPLE_C_LZ_O_V1_V3_nsa_gfx10, 3229 },
    { IMAGE_SAMPLE_C_LZ_O_V1_V4, 3245 },
    { IMAGE_SAMPLE_C_LZ_O_V1_V4_gfx10, 3215 },
    { IMAGE_SAMPLE_C_LZ_O_V1_V4_nsa_gfx10, 3230 },
    { IMAGE_SAMPLE_C_LZ_O_V1_V5_nsa_gfx10, 3231 },
    { IMAGE_SAMPLE_C_LZ_O_V1_V8, 3246 },
    { IMAGE_SAMPLE_C_LZ_O_V1_V8_gfx10, 3216 },
    { IMAGE_SAMPLE_C_LZ_O_V2_V3, 3247 },
    { IMAGE_SAMPLE_C_LZ_O_V2_V3_gfx10, 3217 },
    { IMAGE_SAMPLE_C_LZ_O_V2_V3_nsa_gfx10, 3232 },
    { IMAGE_SAMPLE_C_LZ_O_V2_V4, 3248 },
    { IMAGE_SAMPLE_C_LZ_O_V2_V4_gfx10, 3218 },
    { IMAGE_SAMPLE_C_LZ_O_V2_V4_nsa_gfx10, 3233 },
    { IMAGE_SAMPLE_C_LZ_O_V2_V5_nsa_gfx10, 3234 },
    { IMAGE_SAMPLE_C_LZ_O_V2_V8, 3249 },
    { IMAGE_SAMPLE_C_LZ_O_V2_V8_gfx10, 3219 },
    { IMAGE_SAMPLE_C_LZ_O_V3_V3, 3250 },
    { IMAGE_SAMPLE_C_LZ_O_V3_V3_gfx10, 3220 },
    { IMAGE_SAMPLE_C_LZ_O_V3_V3_nsa_gfx10, 3235 },
    { IMAGE_SAMPLE_C_LZ_O_V3_V4, 3251 },
    { IMAGE_SAMPLE_C_LZ_O_V3_V4_gfx10, 3221 },
    { IMAGE_SAMPLE_C_LZ_O_V3_V4_nsa_gfx10, 3236 },
    { IMAGE_SAMPLE_C_LZ_O_V3_V5_nsa_gfx10, 3237 },
    { IMAGE_SAMPLE_C_LZ_O_V3_V8, 3252 },
    { IMAGE_SAMPLE_C_LZ_O_V3_V8_gfx10, 3222 },
    { IMAGE_SAMPLE_C_LZ_O_V4_V3, 3253 },
    { IMAGE_SAMPLE_C_LZ_O_V4_V3_gfx10, 3223 },
    { IMAGE_SAMPLE_C_LZ_O_V4_V3_nsa_gfx10, 3238 },
    { IMAGE_SAMPLE_C_LZ_O_V4_V4, 3254 },
    { IMAGE_SAMPLE_C_LZ_O_V4_V4_gfx10, 3224 },
    { IMAGE_SAMPLE_C_LZ_O_V4_V4_nsa_gfx10, 3239 },
    { IMAGE_SAMPLE_C_LZ_O_V4_V5_nsa_gfx10, 3240 },
    { IMAGE_SAMPLE_C_LZ_O_V4_V8, 3255 },
    { IMAGE_SAMPLE_C_LZ_O_V4_V8_gfx10, 3225 },
    { IMAGE_SAMPLE_C_LZ_O_V5_V3, 3256 },
    { IMAGE_SAMPLE_C_LZ_O_V5_V3_gfx10, 3226 },
    { IMAGE_SAMPLE_C_LZ_O_V5_V3_nsa_gfx10, 3241 },
    { IMAGE_SAMPLE_C_LZ_O_V5_V4, 3257 },
    { IMAGE_SAMPLE_C_LZ_O_V5_V4_gfx10, 3227 },
    { IMAGE_SAMPLE_C_LZ_O_V5_V4_nsa_gfx10, 3242 },
    { IMAGE_SAMPLE_C_LZ_O_V5_V5_nsa_gfx10, 3243 },
    { IMAGE_SAMPLE_C_LZ_O_V5_V8, 3258 },
    { IMAGE_SAMPLE_C_LZ_O_V5_V8_gfx10, 3228 },
    { IMAGE_SAMPLE_C_LZ_V1_V2, 3199 },
    { IMAGE_SAMPLE_C_LZ_V1_V2_gfx10, 3169 },
    { IMAGE_SAMPLE_C_LZ_V1_V2_nsa_gfx10, 3184 },
    { IMAGE_SAMPLE_C_LZ_V1_V3, 3200 },
    { IMAGE_SAMPLE_C_LZ_V1_V3_gfx10, 3170 },
    { IMAGE_SAMPLE_C_LZ_V1_V3_nsa_gfx10, 3185 },
    { IMAGE_SAMPLE_C_LZ_V1_V4, 3201 },
    { IMAGE_SAMPLE_C_LZ_V1_V4_gfx10, 3171 },
    { IMAGE_SAMPLE_C_LZ_V1_V4_nsa_gfx10, 3186 },
    { IMAGE_SAMPLE_C_LZ_V2_V2, 3202 },
    { IMAGE_SAMPLE_C_LZ_V2_V2_gfx10, 3172 },
    { IMAGE_SAMPLE_C_LZ_V2_V2_nsa_gfx10, 3187 },
    { IMAGE_SAMPLE_C_LZ_V2_V3, 3203 },
    { IMAGE_SAMPLE_C_LZ_V2_V3_gfx10, 3173 },
    { IMAGE_SAMPLE_C_LZ_V2_V3_nsa_gfx10, 3188 },
    { IMAGE_SAMPLE_C_LZ_V2_V4, 3204 },
    { IMAGE_SAMPLE_C_LZ_V2_V4_gfx10, 3174 },
    { IMAGE_SAMPLE_C_LZ_V2_V4_nsa_gfx10, 3189 },
    { IMAGE_SAMPLE_C_LZ_V3_V2, 3205 },
    { IMAGE_SAMPLE_C_LZ_V3_V2_gfx10, 3175 },
    { IMAGE_SAMPLE_C_LZ_V3_V2_nsa_gfx10, 3190 },
    { IMAGE_SAMPLE_C_LZ_V3_V3, 3206 },
    { IMAGE_SAMPLE_C_LZ_V3_V3_gfx10, 3176 },
    { IMAGE_SAMPLE_C_LZ_V3_V3_nsa_gfx10, 3191 },
    { IMAGE_SAMPLE_C_LZ_V3_V4, 3207 },
    { IMAGE_SAMPLE_C_LZ_V3_V4_gfx10, 3177 },
    { IMAGE_SAMPLE_C_LZ_V3_V4_nsa_gfx10, 3192 },
    { IMAGE_SAMPLE_C_LZ_V4_V2, 3208 },
    { IMAGE_SAMPLE_C_LZ_V4_V2_gfx10, 3178 },
    { IMAGE_SAMPLE_C_LZ_V4_V2_nsa_gfx10, 3193 },
    { IMAGE_SAMPLE_C_LZ_V4_V3, 3209 },
    { IMAGE_SAMPLE_C_LZ_V4_V3_gfx10, 3179 },
    { IMAGE_SAMPLE_C_LZ_V4_V3_nsa_gfx10, 3194 },
    { IMAGE_SAMPLE_C_LZ_V4_V4, 3210 },
    { IMAGE_SAMPLE_C_LZ_V4_V4_gfx10, 3180 },
    { IMAGE_SAMPLE_C_LZ_V4_V4_nsa_gfx10, 3195 },
    { IMAGE_SAMPLE_C_LZ_V5_V2, 3211 },
    { IMAGE_SAMPLE_C_LZ_V5_V2_gfx10, 3181 },
    { IMAGE_SAMPLE_C_LZ_V5_V2_nsa_gfx10, 3196 },
    { IMAGE_SAMPLE_C_LZ_V5_V3, 3212 },
    { IMAGE_SAMPLE_C_LZ_V5_V3_gfx10, 3182 },
    { IMAGE_SAMPLE_C_LZ_V5_V3_nsa_gfx10, 3197 },
    { IMAGE_SAMPLE_C_LZ_V5_V4, 3213 },
    { IMAGE_SAMPLE_C_LZ_V5_V4_gfx10, 3183 },
    { IMAGE_SAMPLE_C_LZ_V5_V4_nsa_gfx10, 3198 },
    { IMAGE_SAMPLE_C_L_O_V1_V3, 3294 },
    { IMAGE_SAMPLE_C_L_O_V1_V3_gfx10, 3259 },
    { IMAGE_SAMPLE_C_L_O_V1_V3_nsa_gfx10, 3274 },
    { IMAGE_SAMPLE_C_L_O_V1_V4, 3295 },
    { IMAGE_SAMPLE_C_L_O_V1_V4_gfx10, 3260 },
    { IMAGE_SAMPLE_C_L_O_V1_V4_nsa_gfx10, 3275 },
    { IMAGE_SAMPLE_C_L_O_V1_V5_nsa_gfx10, 3276 },
    { IMAGE_SAMPLE_C_L_O_V1_V6_nsa_gfx10, 3277 },
    { IMAGE_SAMPLE_C_L_O_V1_V8, 3296 },
    { IMAGE_SAMPLE_C_L_O_V1_V8_gfx10, 3261 },
    { IMAGE_SAMPLE_C_L_O_V2_V3, 3297 },
    { IMAGE_SAMPLE_C_L_O_V2_V3_gfx10, 3262 },
    { IMAGE_SAMPLE_C_L_O_V2_V3_nsa_gfx10, 3278 },
    { IMAGE_SAMPLE_C_L_O_V2_V4, 3298 },
    { IMAGE_SAMPLE_C_L_O_V2_V4_gfx10, 3263 },
    { IMAGE_SAMPLE_C_L_O_V2_V4_nsa_gfx10, 3279 },
    { IMAGE_SAMPLE_C_L_O_V2_V5_nsa_gfx10, 3280 },
    { IMAGE_SAMPLE_C_L_O_V2_V6_nsa_gfx10, 3281 },
    { IMAGE_SAMPLE_C_L_O_V2_V8, 3299 },
    { IMAGE_SAMPLE_C_L_O_V2_V8_gfx10, 3264 },
    { IMAGE_SAMPLE_C_L_O_V3_V3, 3300 },
    { IMAGE_SAMPLE_C_L_O_V3_V3_gfx10, 3265 },
    { IMAGE_SAMPLE_C_L_O_V3_V3_nsa_gfx10, 3282 },
    { IMAGE_SAMPLE_C_L_O_V3_V4, 3301 },
    { IMAGE_SAMPLE_C_L_O_V3_V4_gfx10, 3266 },
    { IMAGE_SAMPLE_C_L_O_V3_V4_nsa_gfx10, 3283 },
    { IMAGE_SAMPLE_C_L_O_V3_V5_nsa_gfx10, 3284 },
    { IMAGE_SAMPLE_C_L_O_V3_V6_nsa_gfx10, 3285 },
    { IMAGE_SAMPLE_C_L_O_V3_V8, 3302 },
    { IMAGE_SAMPLE_C_L_O_V3_V8_gfx10, 3267 },
    { IMAGE_SAMPLE_C_L_O_V4_V3, 3303 },
    { IMAGE_SAMPLE_C_L_O_V4_V3_gfx10, 3268 },
    { IMAGE_SAMPLE_C_L_O_V4_V3_nsa_gfx10, 3286 },
    { IMAGE_SAMPLE_C_L_O_V4_V4, 3304 },
    { IMAGE_SAMPLE_C_L_O_V4_V4_gfx10, 3269 },
    { IMAGE_SAMPLE_C_L_O_V4_V4_nsa_gfx10, 3287 },
    { IMAGE_SAMPLE_C_L_O_V4_V5_nsa_gfx10, 3288 },
    { IMAGE_SAMPLE_C_L_O_V4_V6_nsa_gfx10, 3289 },
    { IMAGE_SAMPLE_C_L_O_V4_V8, 3305 },
    { IMAGE_SAMPLE_C_L_O_V4_V8_gfx10, 3270 },
    { IMAGE_SAMPLE_C_L_O_V5_V3, 3306 },
    { IMAGE_SAMPLE_C_L_O_V5_V3_gfx10, 3271 },
    { IMAGE_SAMPLE_C_L_O_V5_V3_nsa_gfx10, 3290 },
    { IMAGE_SAMPLE_C_L_O_V5_V4, 3307 },
    { IMAGE_SAMPLE_C_L_O_V5_V4_gfx10, 3272 },
    { IMAGE_SAMPLE_C_L_O_V5_V4_nsa_gfx10, 3291 },
    { IMAGE_SAMPLE_C_L_O_V5_V5_nsa_gfx10, 3292 },
    { IMAGE_SAMPLE_C_L_O_V5_V6_nsa_gfx10, 3293 },
    { IMAGE_SAMPLE_C_L_O_V5_V8, 3308 },
    { IMAGE_SAMPLE_C_L_O_V5_V8_gfx10, 3273 },
    { IMAGE_SAMPLE_C_L_V1_V2, 3149 },
    { IMAGE_SAMPLE_C_L_V1_V2_gfx10, 3109 },
    { IMAGE_SAMPLE_C_L_V1_V2_nsa_gfx10, 3129 },
    { IMAGE_SAMPLE_C_L_V1_V3, 3150 },
    { IMAGE_SAMPLE_C_L_V1_V3_gfx10, 3110 },
    { IMAGE_SAMPLE_C_L_V1_V3_nsa_gfx10, 3130 },
    { IMAGE_SAMPLE_C_L_V1_V4, 3151 },
    { IMAGE_SAMPLE_C_L_V1_V4_gfx10, 3111 },
    { IMAGE_SAMPLE_C_L_V1_V4_nsa_gfx10, 3131 },
    { IMAGE_SAMPLE_C_L_V1_V5_nsa_gfx10, 3132 },
    { IMAGE_SAMPLE_C_L_V1_V8, 3152 },
    { IMAGE_SAMPLE_C_L_V1_V8_gfx10, 3112 },
    { IMAGE_SAMPLE_C_L_V2_V2, 3153 },
    { IMAGE_SAMPLE_C_L_V2_V2_gfx10, 3113 },
    { IMAGE_SAMPLE_C_L_V2_V2_nsa_gfx10, 3133 },
    { IMAGE_SAMPLE_C_L_V2_V3, 3154 },
    { IMAGE_SAMPLE_C_L_V2_V3_gfx10, 3114 },
    { IMAGE_SAMPLE_C_L_V2_V3_nsa_gfx10, 3134 },
    { IMAGE_SAMPLE_C_L_V2_V4, 3155 },
    { IMAGE_SAMPLE_C_L_V2_V4_gfx10, 3115 },
    { IMAGE_SAMPLE_C_L_V2_V4_nsa_gfx10, 3135 },
    { IMAGE_SAMPLE_C_L_V2_V5_nsa_gfx10, 3136 },
    { IMAGE_SAMPLE_C_L_V2_V8, 3156 },
    { IMAGE_SAMPLE_C_L_V2_V8_gfx10, 3116 },
    { IMAGE_SAMPLE_C_L_V3_V2, 3157 },
    { IMAGE_SAMPLE_C_L_V3_V2_gfx10, 3117 },
    { IMAGE_SAMPLE_C_L_V3_V2_nsa_gfx10, 3137 },
    { IMAGE_SAMPLE_C_L_V3_V3, 3158 },
    { IMAGE_SAMPLE_C_L_V3_V3_gfx10, 3118 },
    { IMAGE_SAMPLE_C_L_V3_V3_nsa_gfx10, 3138 },
    { IMAGE_SAMPLE_C_L_V3_V4, 3159 },
    { IMAGE_SAMPLE_C_L_V3_V4_gfx10, 3119 },
    { IMAGE_SAMPLE_C_L_V3_V4_nsa_gfx10, 3139 },
    { IMAGE_SAMPLE_C_L_V3_V5_nsa_gfx10, 3140 },
    { IMAGE_SAMPLE_C_L_V3_V8, 3160 },
    { IMAGE_SAMPLE_C_L_V3_V8_gfx10, 3120 },
    { IMAGE_SAMPLE_C_L_V4_V2, 3161 },
    { IMAGE_SAMPLE_C_L_V4_V2_gfx10, 3121 },
    { IMAGE_SAMPLE_C_L_V4_V2_nsa_gfx10, 3141 },
    { IMAGE_SAMPLE_C_L_V4_V3, 3162 },
    { IMAGE_SAMPLE_C_L_V4_V3_gfx10, 3122 },
    { IMAGE_SAMPLE_C_L_V4_V3_nsa_gfx10, 3142 },
    { IMAGE_SAMPLE_C_L_V4_V4, 3163 },
    { IMAGE_SAMPLE_C_L_V4_V4_gfx10, 3123 },
    { IMAGE_SAMPLE_C_L_V4_V4_nsa_gfx10, 3143 },
    { IMAGE_SAMPLE_C_L_V4_V5_nsa_gfx10, 3144 },
    { IMAGE_SAMPLE_C_L_V4_V8, 3164 },
    { IMAGE_SAMPLE_C_L_V4_V8_gfx10, 3124 },
    { IMAGE_SAMPLE_C_L_V5_V2, 3165 },
    { IMAGE_SAMPLE_C_L_V5_V2_gfx10, 3125 },
    { IMAGE_SAMPLE_C_L_V5_V2_nsa_gfx10, 3145 },
    { IMAGE_SAMPLE_C_L_V5_V3, 3166 },
    { IMAGE_SAMPLE_C_L_V5_V3_gfx10, 3126 },
    { IMAGE_SAMPLE_C_L_V5_V3_nsa_gfx10, 3146 },
    { IMAGE_SAMPLE_C_L_V5_V4, 3167 },
    { IMAGE_SAMPLE_C_L_V5_V4_gfx10, 3127 },
    { IMAGE_SAMPLE_C_L_V5_V4_nsa_gfx10, 3147 },
    { IMAGE_SAMPLE_C_L_V5_V5_nsa_gfx10, 3148 },
    { IMAGE_SAMPLE_C_L_V5_V8, 3168 },
    { IMAGE_SAMPLE_C_L_V5_V8_gfx10, 3128 },
    { IMAGE_SAMPLE_C_O_V1_V3, 3339 },
    { IMAGE_SAMPLE_C_O_V1_V3_gfx10, 3309 },
    { IMAGE_SAMPLE_C_O_V1_V3_nsa_gfx10, 3324 },
    { IMAGE_SAMPLE_C_O_V1_V4, 3340 },
    { IMAGE_SAMPLE_C_O_V1_V4_gfx10, 3310 },
    { IMAGE_SAMPLE_C_O_V1_V4_nsa_gfx10, 3325 },
    { IMAGE_SAMPLE_C_O_V1_V5_nsa_gfx10, 3326 },
    { IMAGE_SAMPLE_C_O_V1_V8, 3341 },
    { IMAGE_SAMPLE_C_O_V1_V8_gfx10, 3311 },
    { IMAGE_SAMPLE_C_O_V2_V3, 3342 },
    { IMAGE_SAMPLE_C_O_V2_V3_gfx10, 3312 },
    { IMAGE_SAMPLE_C_O_V2_V3_nsa_gfx10, 3327 },
    { IMAGE_SAMPLE_C_O_V2_V4, 3343 },
    { IMAGE_SAMPLE_C_O_V2_V4_gfx10, 3313 },
    { IMAGE_SAMPLE_C_O_V2_V4_nsa_gfx10, 3328 },
    { IMAGE_SAMPLE_C_O_V2_V5_nsa_gfx10, 3329 },
    { IMAGE_SAMPLE_C_O_V2_V8, 3344 },
    { IMAGE_SAMPLE_C_O_V2_V8_gfx10, 3314 },
    { IMAGE_SAMPLE_C_O_V3_V3, 3345 },
    { IMAGE_SAMPLE_C_O_V3_V3_gfx10, 3315 },
    { IMAGE_SAMPLE_C_O_V3_V3_nsa_gfx10, 3330 },
    { IMAGE_SAMPLE_C_O_V3_V4, 3346 },
    { IMAGE_SAMPLE_C_O_V3_V4_gfx10, 3316 },
    { IMAGE_SAMPLE_C_O_V3_V4_nsa_gfx10, 3331 },
    { IMAGE_SAMPLE_C_O_V3_V5_nsa_gfx10, 3332 },
    { IMAGE_SAMPLE_C_O_V3_V8, 3347 },
    { IMAGE_SAMPLE_C_O_V3_V8_gfx10, 3317 },
    { IMAGE_SAMPLE_C_O_V4_V3, 3348 },
    { IMAGE_SAMPLE_C_O_V4_V3_gfx10, 3318 },
    { IMAGE_SAMPLE_C_O_V4_V3_nsa_gfx10, 3333 },
    { IMAGE_SAMPLE_C_O_V4_V4, 3349 },
    { IMAGE_SAMPLE_C_O_V4_V4_gfx10, 3319 },
    { IMAGE_SAMPLE_C_O_V4_V4_nsa_gfx10, 3334 },
    { IMAGE_SAMPLE_C_O_V4_V5_nsa_gfx10, 3335 },
    { IMAGE_SAMPLE_C_O_V4_V8, 3350 },
    { IMAGE_SAMPLE_C_O_V4_V8_gfx10, 3320 },
    { IMAGE_SAMPLE_C_O_V5_V3, 3351 },
    { IMAGE_SAMPLE_C_O_V5_V3_gfx10, 3321 },
    { IMAGE_SAMPLE_C_O_V5_V3_nsa_gfx10, 3336 },
    { IMAGE_SAMPLE_C_O_V5_V4, 3352 },
    { IMAGE_SAMPLE_C_O_V5_V4_gfx10, 3322 },
    { IMAGE_SAMPLE_C_O_V5_V4_nsa_gfx10, 3337 },
    { IMAGE_SAMPLE_C_O_V5_V5_nsa_gfx10, 3338 },
    { IMAGE_SAMPLE_C_O_V5_V8, 3353 },
    { IMAGE_SAMPLE_C_O_V5_V8_gfx10, 3323 },
    { IMAGE_SAMPLE_C_V1_V2, 1819 },
    { IMAGE_SAMPLE_C_V1_V2_gfx10, 1789 },
    { IMAGE_SAMPLE_C_V1_V2_nsa_gfx10, 1804 },
    { IMAGE_SAMPLE_C_V1_V3, 1820 },
    { IMAGE_SAMPLE_C_V1_V3_gfx10, 1790 },
    { IMAGE_SAMPLE_C_V1_V3_nsa_gfx10, 1805 },
    { IMAGE_SAMPLE_C_V1_V4, 1821 },
    { IMAGE_SAMPLE_C_V1_V4_gfx10, 1791 },
    { IMAGE_SAMPLE_C_V1_V4_nsa_gfx10, 1806 },
    { IMAGE_SAMPLE_C_V2_V2, 1822 },
    { IMAGE_SAMPLE_C_V2_V2_gfx10, 1792 },
    { IMAGE_SAMPLE_C_V2_V2_nsa_gfx10, 1807 },
    { IMAGE_SAMPLE_C_V2_V3, 1823 },
    { IMAGE_SAMPLE_C_V2_V3_gfx10, 1793 },
    { IMAGE_SAMPLE_C_V2_V3_nsa_gfx10, 1808 },
    { IMAGE_SAMPLE_C_V2_V4, 1824 },
    { IMAGE_SAMPLE_C_V2_V4_gfx10, 1794 },
    { IMAGE_SAMPLE_C_V2_V4_nsa_gfx10, 1809 },
    { IMAGE_SAMPLE_C_V3_V2, 1825 },
    { IMAGE_SAMPLE_C_V3_V2_gfx10, 1795 },
    { IMAGE_SAMPLE_C_V3_V2_nsa_gfx10, 1810 },
    { IMAGE_SAMPLE_C_V3_V3, 1826 },
    { IMAGE_SAMPLE_C_V3_V3_gfx10, 1796 },
    { IMAGE_SAMPLE_C_V3_V3_nsa_gfx10, 1811 },
    { IMAGE_SAMPLE_C_V3_V4, 1827 },
    { IMAGE_SAMPLE_C_V3_V4_gfx10, 1797 },
    { IMAGE_SAMPLE_C_V3_V4_nsa_gfx10, 1812 },
    { IMAGE_SAMPLE_C_V4_V2, 1828 },
    { IMAGE_SAMPLE_C_V4_V2_gfx10, 1798 },
    { IMAGE_SAMPLE_C_V4_V2_nsa_gfx10, 1813 },
    { IMAGE_SAMPLE_C_V4_V3, 1829 },
    { IMAGE_SAMPLE_C_V4_V3_gfx10, 1799 },
    { IMAGE_SAMPLE_C_V4_V3_nsa_gfx10, 1814 },
    { IMAGE_SAMPLE_C_V4_V4, 1830 },
    { IMAGE_SAMPLE_C_V4_V4_gfx10, 1800 },
    { IMAGE_SAMPLE_C_V4_V4_nsa_gfx10, 1815 },
    { IMAGE_SAMPLE_C_V5_V2, 1831 },
    { IMAGE_SAMPLE_C_V5_V2_gfx10, 1801 },
    { IMAGE_SAMPLE_C_V5_V2_nsa_gfx10, 1816 },
    { IMAGE_SAMPLE_C_V5_V3, 1832 },
    { IMAGE_SAMPLE_C_V5_V3_gfx10, 1802 },
    { IMAGE_SAMPLE_C_V5_V3_nsa_gfx10, 1817 },
    { IMAGE_SAMPLE_C_V5_V4, 1833 },
    { IMAGE_SAMPLE_C_V5_V4_gfx10, 1803 },
    { IMAGE_SAMPLE_C_V5_V4_nsa_gfx10, 1818 },
    { IMAGE_SAMPLE_D_CL_O_V1_V11_nsa_gfx10, 3550 },
    { IMAGE_SAMPLE_D_CL_O_V1_V16, 3582 },
    { IMAGE_SAMPLE_D_CL_O_V1_V16_gfx10, 3527 },
    { IMAGE_SAMPLE_D_CL_O_V1_V3, 3579 },
    { IMAGE_SAMPLE_D_CL_O_V1_V3_gfx10, 3524 },
    { IMAGE_SAMPLE_D_CL_O_V1_V3_nsa_gfx10, 3544 },
    { IMAGE_SAMPLE_D_CL_O_V1_V4, 3580 },
    { IMAGE_SAMPLE_D_CL_O_V1_V4_gfx10, 3525 },
    { IMAGE_SAMPLE_D_CL_O_V1_V4_nsa_gfx10, 3545 },
    { IMAGE_SAMPLE_D_CL_O_V1_V5_nsa_gfx10, 3546 },
    { IMAGE_SAMPLE_D_CL_O_V1_V6_nsa_gfx10, 3547 },
    { IMAGE_SAMPLE_D_CL_O_V1_V8, 3581 },
    { IMAGE_SAMPLE_D_CL_O_V1_V8_gfx10, 3526 },
    { IMAGE_SAMPLE_D_CL_O_V1_V8_nsa_gfx10, 3548 },
    { IMAGE_SAMPLE_D_CL_O_V1_V9_nsa_gfx10, 3549 },
    { IMAGE_SAMPLE_D_CL_O_V2_V11_nsa_gfx10, 3557 },
    { IMAGE_SAMPLE_D_CL_O_V2_V16, 3586 },
    { IMAGE_SAMPLE_D_CL_O_V2_V16_gfx10, 3531 },
    { IMAGE_SAMPLE_D_CL_O_V2_V3, 3583 },
    { IMAGE_SAMPLE_D_CL_O_V2_V3_gfx10, 3528 },
    { IMAGE_SAMPLE_D_CL_O_V2_V3_nsa_gfx10, 3551 },
    { IMAGE_SAMPLE_D_CL_O_V2_V4, 3584 },
    { IMAGE_SAMPLE_D_CL_O_V2_V4_gfx10, 3529 },
    { IMAGE_SAMPLE_D_CL_O_V2_V4_nsa_gfx10, 3552 },
    { IMAGE_SAMPLE_D_CL_O_V2_V5_nsa_gfx10, 3553 },
    { IMAGE_SAMPLE_D_CL_O_V2_V6_nsa_gfx10, 3554 },
    { IMAGE_SAMPLE_D_CL_O_V2_V8, 3585 },
    { IMAGE_SAMPLE_D_CL_O_V2_V8_gfx10, 3530 },
    { IMAGE_SAMPLE_D_CL_O_V2_V8_nsa_gfx10, 3555 },
    { IMAGE_SAMPLE_D_CL_O_V2_V9_nsa_gfx10, 3556 },
    { IMAGE_SAMPLE_D_CL_O_V3_V11_nsa_gfx10, 3564 },
    { IMAGE_SAMPLE_D_CL_O_V3_V16, 3590 },
    { IMAGE_SAMPLE_D_CL_O_V3_V16_gfx10, 3535 },
    { IMAGE_SAMPLE_D_CL_O_V3_V3, 3587 },
    { IMAGE_SAMPLE_D_CL_O_V3_V3_gfx10, 3532 },
    { IMAGE_SAMPLE_D_CL_O_V3_V3_nsa_gfx10, 3558 },
    { IMAGE_SAMPLE_D_CL_O_V3_V4, 3588 },
    { IMAGE_SAMPLE_D_CL_O_V3_V4_gfx10, 3533 },
    { IMAGE_SAMPLE_D_CL_O_V3_V4_nsa_gfx10, 3559 },
    { IMAGE_SAMPLE_D_CL_O_V3_V5_nsa_gfx10, 3560 },
    { IMAGE_SAMPLE_D_CL_O_V3_V6_nsa_gfx10, 3561 },
    { IMAGE_SAMPLE_D_CL_O_V3_V8, 3589 },
    { IMAGE_SAMPLE_D_CL_O_V3_V8_gfx10, 3534 },
    { IMAGE_SAMPLE_D_CL_O_V3_V8_nsa_gfx10, 3562 },
    { IMAGE_SAMPLE_D_CL_O_V3_V9_nsa_gfx10, 3563 },
    { IMAGE_SAMPLE_D_CL_O_V4_V11_nsa_gfx10, 3571 },
    { IMAGE_SAMPLE_D_CL_O_V4_V16, 3594 },
    { IMAGE_SAMPLE_D_CL_O_V4_V16_gfx10, 3539 },
    { IMAGE_SAMPLE_D_CL_O_V4_V3, 3591 },
    { IMAGE_SAMPLE_D_CL_O_V4_V3_gfx10, 3536 },
    { IMAGE_SAMPLE_D_CL_O_V4_V3_nsa_gfx10, 3565 },
    { IMAGE_SAMPLE_D_CL_O_V4_V4, 3592 },
    { IMAGE_SAMPLE_D_CL_O_V4_V4_gfx10, 3537 },
    { IMAGE_SAMPLE_D_CL_O_V4_V4_nsa_gfx10, 3566 },
    { IMAGE_SAMPLE_D_CL_O_V4_V5_nsa_gfx10, 3567 },
    { IMAGE_SAMPLE_D_CL_O_V4_V6_nsa_gfx10, 3568 },
    { IMAGE_SAMPLE_D_CL_O_V4_V8, 3593 },
    { IMAGE_SAMPLE_D_CL_O_V4_V8_gfx10, 3538 },
    { IMAGE_SAMPLE_D_CL_O_V4_V8_nsa_gfx10, 3569 },
    { IMAGE_SAMPLE_D_CL_O_V4_V9_nsa_gfx10, 3570 },
    { IMAGE_SAMPLE_D_CL_O_V5_V11_nsa_gfx10, 3578 },
    { IMAGE_SAMPLE_D_CL_O_V5_V16, 3598 },
    { IMAGE_SAMPLE_D_CL_O_V5_V16_gfx10, 3543 },
    { IMAGE_SAMPLE_D_CL_O_V5_V3, 3595 },
    { IMAGE_SAMPLE_D_CL_O_V5_V3_gfx10, 3540 },
    { IMAGE_SAMPLE_D_CL_O_V5_V3_nsa_gfx10, 3572 },
    { IMAGE_SAMPLE_D_CL_O_V5_V4, 3596 },
    { IMAGE_SAMPLE_D_CL_O_V5_V4_gfx10, 3541 },
    { IMAGE_SAMPLE_D_CL_O_V5_V4_nsa_gfx10, 3573 },
    { IMAGE_SAMPLE_D_CL_O_V5_V5_nsa_gfx10, 3574 },
    { IMAGE_SAMPLE_D_CL_O_V5_V6_nsa_gfx10, 3575 },
    { IMAGE_SAMPLE_D_CL_O_V5_V8, 3597 },
    { IMAGE_SAMPLE_D_CL_O_V5_V8_gfx10, 3542 },
    { IMAGE_SAMPLE_D_CL_O_V5_V8_nsa_gfx10, 3576 },
    { IMAGE_SAMPLE_D_CL_O_V5_V9_nsa_gfx10, 3577 },
    { IMAGE_SAMPLE_D_CL_V1_V10_nsa_gfx10, 3470 },
    { IMAGE_SAMPLE_D_CL_V1_V16, 3503 },
    { IMAGE_SAMPLE_D_CL_V1_V16_gfx10, 3443 },
    { IMAGE_SAMPLE_D_CL_V1_V2, 3499 },
    { IMAGE_SAMPLE_D_CL_V1_V2_gfx10, 3439 },
    { IMAGE_SAMPLE_D_CL_V1_V2_nsa_gfx10, 3464 },
    { IMAGE_SAMPLE_D_CL_V1_V3, 3500 },
    { IMAGE_SAMPLE_D_CL_V1_V3_gfx10, 3440 },
    { IMAGE_SAMPLE_D_CL_V1_V3_nsa_gfx10, 3465 },
    { IMAGE_SAMPLE_D_CL_V1_V4, 3501 },
    { IMAGE_SAMPLE_D_CL_V1_V4_gfx10, 3441 },
    { IMAGE_SAMPLE_D_CL_V1_V4_nsa_gfx10, 3466 },
    { IMAGE_SAMPLE_D_CL_V1_V5_nsa_gfx10, 3467 },
    { IMAGE_SAMPLE_D_CL_V1_V7_nsa_gfx10, 3468 },
    { IMAGE_SAMPLE_D_CL_V1_V8, 3502 },
    { IMAGE_SAMPLE_D_CL_V1_V8_gfx10, 3442 },
    { IMAGE_SAMPLE_D_CL_V1_V8_nsa_gfx10, 3469 },
    { IMAGE_SAMPLE_D_CL_V2_V10_nsa_gfx10, 3477 },
    { IMAGE_SAMPLE_D_CL_V2_V16, 3508 },
    { IMAGE_SAMPLE_D_CL_V2_V16_gfx10, 3448 },
    { IMAGE_SAMPLE_D_CL_V2_V2, 3504 },
    { IMAGE_SAMPLE_D_CL_V2_V2_gfx10, 3444 },
    { IMAGE_SAMPLE_D_CL_V2_V2_nsa_gfx10, 3471 },
    { IMAGE_SAMPLE_D_CL_V2_V3, 3505 },
    { IMAGE_SAMPLE_D_CL_V2_V3_gfx10, 3445 },
    { IMAGE_SAMPLE_D_CL_V2_V3_nsa_gfx10, 3472 },
    { IMAGE_SAMPLE_D_CL_V2_V4, 3506 },
    { IMAGE_SAMPLE_D_CL_V2_V4_gfx10, 3446 },
    { IMAGE_SAMPLE_D_CL_V2_V4_nsa_gfx10, 3473 },
    { IMAGE_SAMPLE_D_CL_V2_V5_nsa_gfx10, 3474 },
    { IMAGE_SAMPLE_D_CL_V2_V7_nsa_gfx10, 3475 },
    { IMAGE_SAMPLE_D_CL_V2_V8, 3507 },
    { IMAGE_SAMPLE_D_CL_V2_V8_gfx10, 3447 },
    { IMAGE_SAMPLE_D_CL_V2_V8_nsa_gfx10, 3476 },
    { IMAGE_SAMPLE_D_CL_V3_V10_nsa_gfx10, 3484 },
    { IMAGE_SAMPLE_D_CL_V3_V16, 3513 },
    { IMAGE_SAMPLE_D_CL_V3_V16_gfx10, 3453 },
    { IMAGE_SAMPLE_D_CL_V3_V2, 3509 },
    { IMAGE_SAMPLE_D_CL_V3_V2_gfx10, 3449 },
    { IMAGE_SAMPLE_D_CL_V3_V2_nsa_gfx10, 3478 },
    { IMAGE_SAMPLE_D_CL_V3_V3, 3510 },
    { IMAGE_SAMPLE_D_CL_V3_V3_gfx10, 3450 },
    { IMAGE_SAMPLE_D_CL_V3_V3_nsa_gfx10, 3479 },
    { IMAGE_SAMPLE_D_CL_V3_V4, 3511 },
    { IMAGE_SAMPLE_D_CL_V3_V4_gfx10, 3451 },
    { IMAGE_SAMPLE_D_CL_V3_V4_nsa_gfx10, 3480 },
    { IMAGE_SAMPLE_D_CL_V3_V5_nsa_gfx10, 3481 },
    { IMAGE_SAMPLE_D_CL_V3_V7_nsa_gfx10, 3482 },
    { IMAGE_SAMPLE_D_CL_V3_V8, 3512 },
    { IMAGE_SAMPLE_D_CL_V3_V8_gfx10, 3452 },
    { IMAGE_SAMPLE_D_CL_V3_V8_nsa_gfx10, 3483 },
    { IMAGE_SAMPLE_D_CL_V4_V10_nsa_gfx10, 3491 },
    { IMAGE_SAMPLE_D_CL_V4_V16, 3518 },
    { IMAGE_SAMPLE_D_CL_V4_V16_gfx10, 3458 },
    { IMAGE_SAMPLE_D_CL_V4_V2, 3514 },
    { IMAGE_SAMPLE_D_CL_V4_V2_gfx10, 3454 },
    { IMAGE_SAMPLE_D_CL_V4_V2_nsa_gfx10, 3485 },
    { IMAGE_SAMPLE_D_CL_V4_V3, 3515 },
    { IMAGE_SAMPLE_D_CL_V4_V3_gfx10, 3455 },
    { IMAGE_SAMPLE_D_CL_V4_V3_nsa_gfx10, 3486 },
    { IMAGE_SAMPLE_D_CL_V4_V4, 3516 },
    { IMAGE_SAMPLE_D_CL_V4_V4_gfx10, 3456 },
    { IMAGE_SAMPLE_D_CL_V4_V4_nsa_gfx10, 3487 },
    { IMAGE_SAMPLE_D_CL_V4_V5_nsa_gfx10, 3488 },
    { IMAGE_SAMPLE_D_CL_V4_V7_nsa_gfx10, 3489 },
    { IMAGE_SAMPLE_D_CL_V4_V8, 3517 },
    { IMAGE_SAMPLE_D_CL_V4_V8_gfx10, 3457 },
    { IMAGE_SAMPLE_D_CL_V4_V8_nsa_gfx10, 3490 },
    { IMAGE_SAMPLE_D_CL_V5_V10_nsa_gfx10, 3498 },
    { IMAGE_SAMPLE_D_CL_V5_V16, 3523 },
    { IMAGE_SAMPLE_D_CL_V5_V16_gfx10, 3463 },
    { IMAGE_SAMPLE_D_CL_V5_V2, 3519 },
    { IMAGE_SAMPLE_D_CL_V5_V2_gfx10, 3459 },
    { IMAGE_SAMPLE_D_CL_V5_V2_nsa_gfx10, 3492 },
    { IMAGE_SAMPLE_D_CL_V5_V3, 3520 },
    { IMAGE_SAMPLE_D_CL_V5_V3_gfx10, 3460 },
    { IMAGE_SAMPLE_D_CL_V5_V3_nsa_gfx10, 3493 },
    { IMAGE_SAMPLE_D_CL_V5_V4, 3521 },
    { IMAGE_SAMPLE_D_CL_V5_V4_gfx10, 3461 },
    { IMAGE_SAMPLE_D_CL_V5_V4_nsa_gfx10, 3494 },
    { IMAGE_SAMPLE_D_CL_V5_V5_nsa_gfx10, 3495 },
    { IMAGE_SAMPLE_D_CL_V5_V7_nsa_gfx10, 3496 },
    { IMAGE_SAMPLE_D_CL_V5_V8, 3522 },
    { IMAGE_SAMPLE_D_CL_V5_V8_gfx10, 3462 },
    { IMAGE_SAMPLE_D_CL_V5_V8_nsa_gfx10, 3497 },
    { IMAGE_SAMPLE_D_O_V1_V10_nsa_gfx10, 3625 },
    { IMAGE_SAMPLE_D_O_V1_V16, 3657 },
    { IMAGE_SAMPLE_D_O_V1_V16_gfx10, 3602 },
    { IMAGE_SAMPLE_D_O_V1_V3, 3654 },
    { IMAGE_SAMPLE_D_O_V1_V3_gfx10, 3599 },
    { IMAGE_SAMPLE_D_O_V1_V3_nsa_gfx10, 3619 },
    { IMAGE_SAMPLE_D_O_V1_V4, 3655 },
    { IMAGE_SAMPLE_D_O_V1_V4_gfx10, 3600 },
    { IMAGE_SAMPLE_D_O_V1_V4_nsa_gfx10, 3620 },
    { IMAGE_SAMPLE_D_O_V1_V5_nsa_gfx10, 3621 },
    { IMAGE_SAMPLE_D_O_V1_V6_nsa_gfx10, 3622 },
    { IMAGE_SAMPLE_D_O_V1_V7_nsa_gfx10, 3623 },
    { IMAGE_SAMPLE_D_O_V1_V8, 3656 },
    { IMAGE_SAMPLE_D_O_V1_V8_gfx10, 3601 },
    { IMAGE_SAMPLE_D_O_V1_V8_nsa_gfx10, 3624 },
    { IMAGE_SAMPLE_D_O_V2_V10_nsa_gfx10, 3632 },
    { IMAGE_SAMPLE_D_O_V2_V16, 3661 },
    { IMAGE_SAMPLE_D_O_V2_V16_gfx10, 3606 },
    { IMAGE_SAMPLE_D_O_V2_V3, 3658 },
    { IMAGE_SAMPLE_D_O_V2_V3_gfx10, 3603 },
    { IMAGE_SAMPLE_D_O_V2_V3_nsa_gfx10, 3626 },
    { IMAGE_SAMPLE_D_O_V2_V4, 3659 },
    { IMAGE_SAMPLE_D_O_V2_V4_gfx10, 3604 },
    { IMAGE_SAMPLE_D_O_V2_V4_nsa_gfx10, 3627 },
    { IMAGE_SAMPLE_D_O_V2_V5_nsa_gfx10, 3628 },
    { IMAGE_SAMPLE_D_O_V2_V6_nsa_gfx10, 3629 },
    { IMAGE_SAMPLE_D_O_V2_V7_nsa_gfx10, 3630 },
    { IMAGE_SAMPLE_D_O_V2_V8, 3660 },
    { IMAGE_SAMPLE_D_O_V2_V8_gfx10, 3605 },
    { IMAGE_SAMPLE_D_O_V2_V8_nsa_gfx10, 3631 },
    { IMAGE_SAMPLE_D_O_V3_V10_nsa_gfx10, 3639 },
    { IMAGE_SAMPLE_D_O_V3_V16, 3665 },
    { IMAGE_SAMPLE_D_O_V3_V16_gfx10, 3610 },
    { IMAGE_SAMPLE_D_O_V3_V3, 3662 },
    { IMAGE_SAMPLE_D_O_V3_V3_gfx10, 3607 },
    { IMAGE_SAMPLE_D_O_V3_V3_nsa_gfx10, 3633 },
    { IMAGE_SAMPLE_D_O_V3_V4, 3663 },
    { IMAGE_SAMPLE_D_O_V3_V4_gfx10, 3608 },
    { IMAGE_SAMPLE_D_O_V3_V4_nsa_gfx10, 3634 },
    { IMAGE_SAMPLE_D_O_V3_V5_nsa_gfx10, 3635 },
    { IMAGE_SAMPLE_D_O_V3_V6_nsa_gfx10, 3636 },
    { IMAGE_SAMPLE_D_O_V3_V7_nsa_gfx10, 3637 },
    { IMAGE_SAMPLE_D_O_V3_V8, 3664 },
    { IMAGE_SAMPLE_D_O_V3_V8_gfx10, 3609 },
    { IMAGE_SAMPLE_D_O_V3_V8_nsa_gfx10, 3638 },
    { IMAGE_SAMPLE_D_O_V4_V10_nsa_gfx10, 3646 },
    { IMAGE_SAMPLE_D_O_V4_V16, 3669 },
    { IMAGE_SAMPLE_D_O_V4_V16_gfx10, 3614 },
    { IMAGE_SAMPLE_D_O_V4_V3, 3666 },
    { IMAGE_SAMPLE_D_O_V4_V3_gfx10, 3611 },
    { IMAGE_SAMPLE_D_O_V4_V3_nsa_gfx10, 3640 },
    { IMAGE_SAMPLE_D_O_V4_V4, 3667 },
    { IMAGE_SAMPLE_D_O_V4_V4_gfx10, 3612 },
    { IMAGE_SAMPLE_D_O_V4_V4_nsa_gfx10, 3641 },
    { IMAGE_SAMPLE_D_O_V4_V5_nsa_gfx10, 3642 },
    { IMAGE_SAMPLE_D_O_V4_V6_nsa_gfx10, 3643 },
    { IMAGE_SAMPLE_D_O_V4_V7_nsa_gfx10, 3644 },
    { IMAGE_SAMPLE_D_O_V4_V8, 3668 },
    { IMAGE_SAMPLE_D_O_V4_V8_gfx10, 3613 },
    { IMAGE_SAMPLE_D_O_V4_V8_nsa_gfx10, 3645 },
    { IMAGE_SAMPLE_D_O_V5_V10_nsa_gfx10, 3653 },
    { IMAGE_SAMPLE_D_O_V5_V16, 3673 },
    { IMAGE_SAMPLE_D_O_V5_V16_gfx10, 3618 },
    { IMAGE_SAMPLE_D_O_V5_V3, 3670 },
    { IMAGE_SAMPLE_D_O_V5_V3_gfx10, 3615 },
    { IMAGE_SAMPLE_D_O_V5_V3_nsa_gfx10, 3647 },
    { IMAGE_SAMPLE_D_O_V5_V4, 3671 },
    { IMAGE_SAMPLE_D_O_V5_V4_gfx10, 3616 },
    { IMAGE_SAMPLE_D_O_V5_V4_nsa_gfx10, 3648 },
    { IMAGE_SAMPLE_D_O_V5_V5_nsa_gfx10, 3649 },
    { IMAGE_SAMPLE_D_O_V5_V6_nsa_gfx10, 3650 },
    { IMAGE_SAMPLE_D_O_V5_V7_nsa_gfx10, 3651 },
    { IMAGE_SAMPLE_D_O_V5_V8, 3672 },
    { IMAGE_SAMPLE_D_O_V5_V8_gfx10, 3617 },
    { IMAGE_SAMPLE_D_O_V5_V8_nsa_gfx10, 3652 },
    { IMAGE_SAMPLE_D_V1_V16, 3418 },
    { IMAGE_SAMPLE_D_V1_V16_gfx10, 3358 },
    { IMAGE_SAMPLE_D_V1_V2, 3414 },
    { IMAGE_SAMPLE_D_V1_V2_gfx10, 3354 },
    { IMAGE_SAMPLE_D_V1_V2_nsa_gfx10, 3379 },
    { IMAGE_SAMPLE_D_V1_V3, 3415 },
    { IMAGE_SAMPLE_D_V1_V3_gfx10, 3355 },
    { IMAGE_SAMPLE_D_V1_V3_nsa_gfx10, 3380 },
    { IMAGE_SAMPLE_D_V1_V4, 3416 },
    { IMAGE_SAMPLE_D_V1_V4_gfx10, 3356 },
    { IMAGE_SAMPLE_D_V1_V4_nsa_gfx10, 3381 },
    { IMAGE_SAMPLE_D_V1_V5_nsa_gfx10, 3382 },
    { IMAGE_SAMPLE_D_V1_V6_nsa_gfx10, 3383 },
    { IMAGE_SAMPLE_D_V1_V7_nsa_gfx10, 3384 },
    { IMAGE_SAMPLE_D_V1_V8, 3417 },
    { IMAGE_SAMPLE_D_V1_V8_gfx10, 3357 },
    { IMAGE_SAMPLE_D_V1_V9_nsa_gfx10, 3385 },
    { IMAGE_SAMPLE_D_V2_V16, 3423 },
    { IMAGE_SAMPLE_D_V2_V16_gfx10, 3363 },
    { IMAGE_SAMPLE_D_V2_V2, 3419 },
    { IMAGE_SAMPLE_D_V2_V2_gfx10, 3359 },
    { IMAGE_SAMPLE_D_V2_V2_nsa_gfx10, 3386 },
    { IMAGE_SAMPLE_D_V2_V3, 3420 },
    { IMAGE_SAMPLE_D_V2_V3_gfx10, 3360 },
    { IMAGE_SAMPLE_D_V2_V3_nsa_gfx10, 3387 },
    { IMAGE_SAMPLE_D_V2_V4, 3421 },
    { IMAGE_SAMPLE_D_V2_V4_gfx10, 3361 },
    { IMAGE_SAMPLE_D_V2_V4_nsa_gfx10, 3388 },
    { IMAGE_SAMPLE_D_V2_V5_nsa_gfx10, 3389 },
    { IMAGE_SAMPLE_D_V2_V6_nsa_gfx10, 3390 },
    { IMAGE_SAMPLE_D_V2_V7_nsa_gfx10, 3391 },
    { IMAGE_SAMPLE_D_V2_V8, 3422 },
    { IMAGE_SAMPLE_D_V2_V8_gfx10, 3362 },
    { IMAGE_SAMPLE_D_V2_V9_nsa_gfx10, 3392 },
    { IMAGE_SAMPLE_D_V3_V16, 3428 },
    { IMAGE_SAMPLE_D_V3_V16_gfx10, 3368 },
    { IMAGE_SAMPLE_D_V3_V2, 3424 },
    { IMAGE_SAMPLE_D_V3_V2_gfx10, 3364 },
    { IMAGE_SAMPLE_D_V3_V2_nsa_gfx10, 3393 },
    { IMAGE_SAMPLE_D_V3_V3, 3425 },
    { IMAGE_SAMPLE_D_V3_V3_gfx10, 3365 },
    { IMAGE_SAMPLE_D_V3_V3_nsa_gfx10, 3394 },
    { IMAGE_SAMPLE_D_V3_V4, 3426 },
    { IMAGE_SAMPLE_D_V3_V4_gfx10, 3366 },
    { IMAGE_SAMPLE_D_V3_V4_nsa_gfx10, 3395 },
    { IMAGE_SAMPLE_D_V3_V5_nsa_gfx10, 3396 },
    { IMAGE_SAMPLE_D_V3_V6_nsa_gfx10, 3397 },
    { IMAGE_SAMPLE_D_V3_V7_nsa_gfx10, 3398 },
    { IMAGE_SAMPLE_D_V3_V8, 3427 },
    { IMAGE_SAMPLE_D_V3_V8_gfx10, 3367 },
    { IMAGE_SAMPLE_D_V3_V9_nsa_gfx10, 3399 },
    { IMAGE_SAMPLE_D_V4_V16, 3433 },
    { IMAGE_SAMPLE_D_V4_V16_gfx10, 3373 },
    { IMAGE_SAMPLE_D_V4_V2, 3429 },
    { IMAGE_SAMPLE_D_V4_V2_gfx10, 3369 },
    { IMAGE_SAMPLE_D_V4_V2_nsa_gfx10, 3400 },
    { IMAGE_SAMPLE_D_V4_V3, 3430 },
    { IMAGE_SAMPLE_D_V4_V3_gfx10, 3370 },
    { IMAGE_SAMPLE_D_V4_V3_nsa_gfx10, 3401 },
    { IMAGE_SAMPLE_D_V4_V4, 3431 },
    { IMAGE_SAMPLE_D_V4_V4_gfx10, 3371 },
    { IMAGE_SAMPLE_D_V4_V4_nsa_gfx10, 3402 },
    { IMAGE_SAMPLE_D_V4_V5_nsa_gfx10, 3403 },
    { IMAGE_SAMPLE_D_V4_V6_nsa_gfx10, 3404 },
    { IMAGE_SAMPLE_D_V4_V7_nsa_gfx10, 3405 },
    { IMAGE_SAMPLE_D_V4_V8, 3432 },
    { IMAGE_SAMPLE_D_V4_V8_gfx10, 3372 },
    { IMAGE_SAMPLE_D_V4_V9_nsa_gfx10, 3406 },
    { IMAGE_SAMPLE_D_V5_V16, 3438 },
    { IMAGE_SAMPLE_D_V5_V16_gfx10, 3378 },
    { IMAGE_SAMPLE_D_V5_V2, 3434 },
    { IMAGE_SAMPLE_D_V5_V2_gfx10, 3374 },
    { IMAGE_SAMPLE_D_V5_V2_nsa_gfx10, 3407 },
    { IMAGE_SAMPLE_D_V5_V3, 3435 },
    { IMAGE_SAMPLE_D_V5_V3_gfx10, 3375 },
    { IMAGE_SAMPLE_D_V5_V3_nsa_gfx10, 3408 },
    { IMAGE_SAMPLE_D_V5_V4, 3436 },
    { IMAGE_SAMPLE_D_V5_V4_gfx10, 3376 },
    { IMAGE_SAMPLE_D_V5_V4_nsa_gfx10, 3409 },
    { IMAGE_SAMPLE_D_V5_V5_nsa_gfx10, 3410 },
    { IMAGE_SAMPLE_D_V5_V6_nsa_gfx10, 3411 },
    { IMAGE_SAMPLE_D_V5_V7_nsa_gfx10, 3412 },
    { IMAGE_SAMPLE_D_V5_V8, 3437 },
    { IMAGE_SAMPLE_D_V5_V8_gfx10, 3377 },
    { IMAGE_SAMPLE_D_V5_V9_nsa_gfx10, 3413 },
    { IMAGE_SAMPLE_LZ_O_V1_V2, 3809 },
    { IMAGE_SAMPLE_LZ_O_V1_V2_gfx10, 3779 },
    { IMAGE_SAMPLE_LZ_O_V1_V2_nsa_gfx10, 3794 },
    { IMAGE_SAMPLE_LZ_O_V1_V3, 3810 },
    { IMAGE_SAMPLE_LZ_O_V1_V3_gfx10, 3780 },
    { IMAGE_SAMPLE_LZ_O_V1_V3_nsa_gfx10, 3795 },
    { IMAGE_SAMPLE_LZ_O_V1_V4, 3811 },
    { IMAGE_SAMPLE_LZ_O_V1_V4_gfx10, 3781 },
    { IMAGE_SAMPLE_LZ_O_V1_V4_nsa_gfx10, 3796 },
    { IMAGE_SAMPLE_LZ_O_V2_V2, 3812 },
    { IMAGE_SAMPLE_LZ_O_V2_V2_gfx10, 3782 },
    { IMAGE_SAMPLE_LZ_O_V2_V2_nsa_gfx10, 3797 },
    { IMAGE_SAMPLE_LZ_O_V2_V3, 3813 },
    { IMAGE_SAMPLE_LZ_O_V2_V3_gfx10, 3783 },
    { IMAGE_SAMPLE_LZ_O_V2_V3_nsa_gfx10, 3798 },
    { IMAGE_SAMPLE_LZ_O_V2_V4, 3814 },
    { IMAGE_SAMPLE_LZ_O_V2_V4_gfx10, 3784 },
    { IMAGE_SAMPLE_LZ_O_V2_V4_nsa_gfx10, 3799 },
    { IMAGE_SAMPLE_LZ_O_V3_V2, 3815 },
    { IMAGE_SAMPLE_LZ_O_V3_V2_gfx10, 3785 },
    { IMAGE_SAMPLE_LZ_O_V3_V2_nsa_gfx10, 3800 },
    { IMAGE_SAMPLE_LZ_O_V3_V3, 3816 },
    { IMAGE_SAMPLE_LZ_O_V3_V3_gfx10, 3786 },
    { IMAGE_SAMPLE_LZ_O_V3_V3_nsa_gfx10, 3801 },
    { IMAGE_SAMPLE_LZ_O_V3_V4, 3817 },
    { IMAGE_SAMPLE_LZ_O_V3_V4_gfx10, 3787 },
    { IMAGE_SAMPLE_LZ_O_V3_V4_nsa_gfx10, 3802 },
    { IMAGE_SAMPLE_LZ_O_V4_V2, 3818 },
    { IMAGE_SAMPLE_LZ_O_V4_V2_gfx10, 3788 },
    { IMAGE_SAMPLE_LZ_O_V4_V2_nsa_gfx10, 3803 },
    { IMAGE_SAMPLE_LZ_O_V4_V3, 3819 },
    { IMAGE_SAMPLE_LZ_O_V4_V3_gfx10, 3789 },
    { IMAGE_SAMPLE_LZ_O_V4_V3_nsa_gfx10, 3804 },
    { IMAGE_SAMPLE_LZ_O_V4_V4, 3820 },
    { IMAGE_SAMPLE_LZ_O_V4_V4_gfx10, 3790 },
    { IMAGE_SAMPLE_LZ_O_V4_V4_nsa_gfx10, 3805 },
    { IMAGE_SAMPLE_LZ_O_V5_V2, 3821 },
    { IMAGE_SAMPLE_LZ_O_V5_V2_gfx10, 3791 },
    { IMAGE_SAMPLE_LZ_O_V5_V2_nsa_gfx10, 3806 },
    { IMAGE_SAMPLE_LZ_O_V5_V3, 3822 },
    { IMAGE_SAMPLE_LZ_O_V5_V3_gfx10, 3792 },
    { IMAGE_SAMPLE_LZ_O_V5_V3_nsa_gfx10, 3807 },
    { IMAGE_SAMPLE_LZ_O_V5_V4, 3823 },
    { IMAGE_SAMPLE_LZ_O_V5_V4_gfx10, 3793 },
    { IMAGE_SAMPLE_LZ_O_V5_V4_nsa_gfx10, 3808 },
    { IMAGE_SAMPLE_LZ_V1_V1, 3759 },
    { IMAGE_SAMPLE_LZ_V1_V1_gfx10, 3729 },
    { IMAGE_SAMPLE_LZ_V1_V2, 3760 },
    { IMAGE_SAMPLE_LZ_V1_V2_gfx10, 3730 },
    { IMAGE_SAMPLE_LZ_V1_V2_nsa_gfx10, 3749 },
    { IMAGE_SAMPLE_LZ_V1_V3, 3761 },
    { IMAGE_SAMPLE_LZ_V1_V3_gfx10, 3731 },
    { IMAGE_SAMPLE_LZ_V1_V3_nsa_gfx10, 3750 },
    { IMAGE_SAMPLE_LZ_V1_V4, 3762 },
    { IMAGE_SAMPLE_LZ_V1_V4_gfx10, 3732 },
    { IMAGE_SAMPLE_LZ_V2_V1, 3763 },
    { IMAGE_SAMPLE_LZ_V2_V1_gfx10, 3733 },
    { IMAGE_SAMPLE_LZ_V2_V2, 3764 },
    { IMAGE_SAMPLE_LZ_V2_V2_gfx10, 3734 },
    { IMAGE_SAMPLE_LZ_V2_V2_nsa_gfx10, 3751 },
    { IMAGE_SAMPLE_LZ_V2_V3, 3765 },
    { IMAGE_SAMPLE_LZ_V2_V3_gfx10, 3735 },
    { IMAGE_SAMPLE_LZ_V2_V3_nsa_gfx10, 3752 },
    { IMAGE_SAMPLE_LZ_V2_V4, 3766 },
    { IMAGE_SAMPLE_LZ_V2_V4_gfx10, 3736 },
    { IMAGE_SAMPLE_LZ_V3_V1, 3767 },
    { IMAGE_SAMPLE_LZ_V3_V1_gfx10, 3737 },
    { IMAGE_SAMPLE_LZ_V3_V2, 3768 },
    { IMAGE_SAMPLE_LZ_V3_V2_gfx10, 3738 },
    { IMAGE_SAMPLE_LZ_V3_V2_nsa_gfx10, 3753 },
    { IMAGE_SAMPLE_LZ_V3_V3, 3769 },
    { IMAGE_SAMPLE_LZ_V3_V3_gfx10, 3739 },
    { IMAGE_SAMPLE_LZ_V3_V3_nsa_gfx10, 3754 },
    { IMAGE_SAMPLE_LZ_V3_V4, 3770 },
    { IMAGE_SAMPLE_LZ_V3_V4_gfx10, 3740 },
    { IMAGE_SAMPLE_LZ_V4_V1, 3771 },
    { IMAGE_SAMPLE_LZ_V4_V1_gfx10, 3741 },
    { IMAGE_SAMPLE_LZ_V4_V2, 3772 },
    { IMAGE_SAMPLE_LZ_V4_V2_gfx10, 3742 },
    { IMAGE_SAMPLE_LZ_V4_V2_nsa_gfx10, 3755 },
    { IMAGE_SAMPLE_LZ_V4_V3, 3773 },
    { IMAGE_SAMPLE_LZ_V4_V3_gfx10, 3743 },
    { IMAGE_SAMPLE_LZ_V4_V3_nsa_gfx10, 3756 },
    { IMAGE_SAMPLE_LZ_V4_V4, 3774 },
    { IMAGE_SAMPLE_LZ_V4_V4_gfx10, 3744 },
    { IMAGE_SAMPLE_LZ_V5_V1, 3775 },
    { IMAGE_SAMPLE_LZ_V5_V1_gfx10, 3745 },
    { IMAGE_SAMPLE_LZ_V5_V2, 3776 },
    { IMAGE_SAMPLE_LZ_V5_V2_gfx10, 3746 },
    { IMAGE_SAMPLE_LZ_V5_V2_nsa_gfx10, 3757 },
    { IMAGE_SAMPLE_LZ_V5_V3, 3777 },
    { IMAGE_SAMPLE_LZ_V5_V3_gfx10, 3747 },
    { IMAGE_SAMPLE_LZ_V5_V3_nsa_gfx10, 3758 },
    { IMAGE_SAMPLE_LZ_V5_V4, 3778 },
    { IMAGE_SAMPLE_LZ_V5_V4_gfx10, 3748 },
    { IMAGE_SAMPLE_L_O_V1_V2, 3864 },
    { IMAGE_SAMPLE_L_O_V1_V2_gfx10, 3824 },
    { IMAGE_SAMPLE_L_O_V1_V2_nsa_gfx10, 3844 },
    { IMAGE_SAMPLE_L_O_V1_V3, 3865 },
    { IMAGE_SAMPLE_L_O_V1_V3_gfx10, 3825 },
    { IMAGE_SAMPLE_L_O_V1_V3_nsa_gfx10, 3845 },
    { IMAGE_SAMPLE_L_O_V1_V4, 3866 },
    { IMAGE_SAMPLE_L_O_V1_V4_gfx10, 3826 },
    { IMAGE_SAMPLE_L_O_V1_V4_nsa_gfx10, 3846 },
    { IMAGE_SAMPLE_L_O_V1_V5_nsa_gfx10, 3847 },
    { IMAGE_SAMPLE_L_O_V1_V8, 3867 },
    { IMAGE_SAMPLE_L_O_V1_V8_gfx10, 3827 },
    { IMAGE_SAMPLE_L_O_V2_V2, 3868 },
    { IMAGE_SAMPLE_L_O_V2_V2_gfx10, 3828 },
    { IMAGE_SAMPLE_L_O_V2_V2_nsa_gfx10, 3848 },
    { IMAGE_SAMPLE_L_O_V2_V3, 3869 },
    { IMAGE_SAMPLE_L_O_V2_V3_gfx10, 3829 },
    { IMAGE_SAMPLE_L_O_V2_V3_nsa_gfx10, 3849 },
    { IMAGE_SAMPLE_L_O_V2_V4, 3870 },
    { IMAGE_SAMPLE_L_O_V2_V4_gfx10, 3830 },
    { IMAGE_SAMPLE_L_O_V2_V4_nsa_gfx10, 3850 },
    { IMAGE_SAMPLE_L_O_V2_V5_nsa_gfx10, 3851 },
    { IMAGE_SAMPLE_L_O_V2_V8, 3871 },
    { IMAGE_SAMPLE_L_O_V2_V8_gfx10, 3831 },
    { IMAGE_SAMPLE_L_O_V3_V2, 3872 },
    { IMAGE_SAMPLE_L_O_V3_V2_gfx10, 3832 },
    { IMAGE_SAMPLE_L_O_V3_V2_nsa_gfx10, 3852 },
    { IMAGE_SAMPLE_L_O_V3_V3, 3873 },
    { IMAGE_SAMPLE_L_O_V3_V3_gfx10, 3833 },
    { IMAGE_SAMPLE_L_O_V3_V3_nsa_gfx10, 3853 },
    { IMAGE_SAMPLE_L_O_V3_V4, 3874 },
    { IMAGE_SAMPLE_L_O_V3_V4_gfx10, 3834 },
    { IMAGE_SAMPLE_L_O_V3_V4_nsa_gfx10, 3854 },
    { IMAGE_SAMPLE_L_O_V3_V5_nsa_gfx10, 3855 },
    { IMAGE_SAMPLE_L_O_V3_V8, 3875 },
    { IMAGE_SAMPLE_L_O_V3_V8_gfx10, 3835 },
    { IMAGE_SAMPLE_L_O_V4_V2, 3876 },
    { IMAGE_SAMPLE_L_O_V4_V2_gfx10, 3836 },
    { IMAGE_SAMPLE_L_O_V4_V2_nsa_gfx10, 3856 },
    { IMAGE_SAMPLE_L_O_V4_V3, 3877 },
    { IMAGE_SAMPLE_L_O_V4_V3_gfx10, 3837 },
    { IMAGE_SAMPLE_L_O_V4_V3_nsa_gfx10, 3857 },
    { IMAGE_SAMPLE_L_O_V4_V4, 3878 },
    { IMAGE_SAMPLE_L_O_V4_V4_gfx10, 3838 },
    { IMAGE_SAMPLE_L_O_V4_V4_nsa_gfx10, 3858 },
    { IMAGE_SAMPLE_L_O_V4_V5_nsa_gfx10, 3859 },
    { IMAGE_SAMPLE_L_O_V4_V8, 3879 },
    { IMAGE_SAMPLE_L_O_V4_V8_gfx10, 3839 },
    { IMAGE_SAMPLE_L_O_V5_V2, 3880 },
    { IMAGE_SAMPLE_L_O_V5_V2_gfx10, 3840 },
    { IMAGE_SAMPLE_L_O_V5_V2_nsa_gfx10, 3860 },
    { IMAGE_SAMPLE_L_O_V5_V3, 3881 },
    { IMAGE_SAMPLE_L_O_V5_V3_gfx10, 3841 },
    { IMAGE_SAMPLE_L_O_V5_V3_nsa_gfx10, 3861 },
    { IMAGE_SAMPLE_L_O_V5_V4, 3882 },
    { IMAGE_SAMPLE_L_O_V5_V4_gfx10, 3842 },
    { IMAGE_SAMPLE_L_O_V5_V4_nsa_gfx10, 3862 },
    { IMAGE_SAMPLE_L_O_V5_V5_nsa_gfx10, 3863 },
    { IMAGE_SAMPLE_L_O_V5_V8, 3883 },
    { IMAGE_SAMPLE_L_O_V5_V8_gfx10, 3843 },
    { IMAGE_SAMPLE_L_V1_V1, 3709 },
    { IMAGE_SAMPLE_L_V1_V1_gfx10, 3674 },
    { IMAGE_SAMPLE_L_V1_V2, 3710 },
    { IMAGE_SAMPLE_L_V1_V2_gfx10, 3675 },
    { IMAGE_SAMPLE_L_V1_V2_nsa_gfx10, 3694 },
    { IMAGE_SAMPLE_L_V1_V3, 3711 },
    { IMAGE_SAMPLE_L_V1_V3_gfx10, 3676 },
    { IMAGE_SAMPLE_L_V1_V3_nsa_gfx10, 3695 },
    { IMAGE_SAMPLE_L_V1_V4, 3712 },
    { IMAGE_SAMPLE_L_V1_V4_gfx10, 3677 },
    { IMAGE_SAMPLE_L_V1_V4_nsa_gfx10, 3696 },
    { IMAGE_SAMPLE_L_V2_V1, 3713 },
    { IMAGE_SAMPLE_L_V2_V1_gfx10, 3678 },
    { IMAGE_SAMPLE_L_V2_V2, 3714 },
    { IMAGE_SAMPLE_L_V2_V2_gfx10, 3679 },
    { IMAGE_SAMPLE_L_V2_V2_nsa_gfx10, 3697 },
    { IMAGE_SAMPLE_L_V2_V3, 3715 },
    { IMAGE_SAMPLE_L_V2_V3_gfx10, 3680 },
    { IMAGE_SAMPLE_L_V2_V3_nsa_gfx10, 3698 },
    { IMAGE_SAMPLE_L_V2_V4, 3716 },
    { IMAGE_SAMPLE_L_V2_V4_gfx10, 3681 },
    { IMAGE_SAMPLE_L_V2_V4_nsa_gfx10, 3699 },
    { IMAGE_SAMPLE_L_V3_V1, 3717 },
    { IMAGE_SAMPLE_L_V3_V1_gfx10, 3682 },
    { IMAGE_SAMPLE_L_V3_V2, 3718 },
    { IMAGE_SAMPLE_L_V3_V2_gfx10, 3683 },
    { IMAGE_SAMPLE_L_V3_V2_nsa_gfx10, 3700 },
    { IMAGE_SAMPLE_L_V3_V3, 3719 },
    { IMAGE_SAMPLE_L_V3_V3_gfx10, 3684 },
    { IMAGE_SAMPLE_L_V3_V3_nsa_gfx10, 3701 },
    { IMAGE_SAMPLE_L_V3_V4, 3720 },
    { IMAGE_SAMPLE_L_V3_V4_gfx10, 3685 },
    { IMAGE_SAMPLE_L_V3_V4_nsa_gfx10, 3702 },
    { IMAGE_SAMPLE_L_V4_V1, 3721 },
    { IMAGE_SAMPLE_L_V4_V1_gfx10, 3686 },
    { IMAGE_SAMPLE_L_V4_V2, 3722 },
    { IMAGE_SAMPLE_L_V4_V2_gfx10, 3687 },
    { IMAGE_SAMPLE_L_V4_V2_nsa_gfx10, 3703 },
    { IMAGE_SAMPLE_L_V4_V3, 3723 },
    { IMAGE_SAMPLE_L_V4_V3_gfx10, 3688 },
    { IMAGE_SAMPLE_L_V4_V3_nsa_gfx10, 3704 },
    { IMAGE_SAMPLE_L_V4_V4, 3724 },
    { IMAGE_SAMPLE_L_V4_V4_gfx10, 3689 },
    { IMAGE_SAMPLE_L_V4_V4_nsa_gfx10, 3705 },
    { IMAGE_SAMPLE_L_V5_V1, 3725 },
    { IMAGE_SAMPLE_L_V5_V1_gfx10, 3690 },
    { IMAGE_SAMPLE_L_V5_V2, 3726 },
    { IMAGE_SAMPLE_L_V5_V2_gfx10, 3691 },
    { IMAGE_SAMPLE_L_V5_V2_nsa_gfx10, 3706 },
    { IMAGE_SAMPLE_L_V5_V3, 3727 },
    { IMAGE_SAMPLE_L_V5_V3_gfx10, 3692 },
    { IMAGE_SAMPLE_L_V5_V3_nsa_gfx10, 3707 },
    { IMAGE_SAMPLE_L_V5_V4, 3728 },
    { IMAGE_SAMPLE_L_V5_V4_gfx10, 3693 },
    { IMAGE_SAMPLE_L_V5_V4_nsa_gfx10, 3708 },
    { IMAGE_SAMPLE_O_V1_V2, 3914 },
    { IMAGE_SAMPLE_O_V1_V2_gfx10, 3884 },
    { IMAGE_SAMPLE_O_V1_V2_nsa_gfx10, 3899 },
    { IMAGE_SAMPLE_O_V1_V3, 3915 },
    { IMAGE_SAMPLE_O_V1_V3_gfx10, 3885 },
    { IMAGE_SAMPLE_O_V1_V3_nsa_gfx10, 3900 },
    { IMAGE_SAMPLE_O_V1_V4, 3916 },
    { IMAGE_SAMPLE_O_V1_V4_gfx10, 3886 },
    { IMAGE_SAMPLE_O_V1_V4_nsa_gfx10, 3901 },
    { IMAGE_SAMPLE_O_V2_V2, 3917 },
    { IMAGE_SAMPLE_O_V2_V2_gfx10, 3887 },
    { IMAGE_SAMPLE_O_V2_V2_nsa_gfx10, 3902 },
    { IMAGE_SAMPLE_O_V2_V3, 3918 },
    { IMAGE_SAMPLE_O_V2_V3_gfx10, 3888 },
    { IMAGE_SAMPLE_O_V2_V3_nsa_gfx10, 3903 },
    { IMAGE_SAMPLE_O_V2_V4, 3919 },
    { IMAGE_SAMPLE_O_V2_V4_gfx10, 3889 },
    { IMAGE_SAMPLE_O_V2_V4_nsa_gfx10, 3904 },
    { IMAGE_SAMPLE_O_V3_V2, 3920 },
    { IMAGE_SAMPLE_O_V3_V2_gfx10, 3890 },
    { IMAGE_SAMPLE_O_V3_V2_nsa_gfx10, 3905 },
    { IMAGE_SAMPLE_O_V3_V3, 3921 },
    { IMAGE_SAMPLE_O_V3_V3_gfx10, 3891 },
    { IMAGE_SAMPLE_O_V3_V3_nsa_gfx10, 3906 },
    { IMAGE_SAMPLE_O_V3_V4, 3922 },
    { IMAGE_SAMPLE_O_V3_V4_gfx10, 3892 },
    { IMAGE_SAMPLE_O_V3_V4_nsa_gfx10, 3907 },
    { IMAGE_SAMPLE_O_V4_V2, 3923 },
    { IMAGE_SAMPLE_O_V4_V2_gfx10, 3893 },
    { IMAGE_SAMPLE_O_V4_V2_nsa_gfx10, 3908 },
    { IMAGE_SAMPLE_O_V4_V3, 3924 },
    { IMAGE_SAMPLE_O_V4_V3_gfx10, 3894 },
    { IMAGE_SAMPLE_O_V4_V3_nsa_gfx10, 3909 },
    { IMAGE_SAMPLE_O_V4_V4, 3925 },
    { IMAGE_SAMPLE_O_V4_V4_gfx10, 3895 },
    { IMAGE_SAMPLE_O_V4_V4_nsa_gfx10, 3910 },
    { IMAGE_SAMPLE_O_V5_V2, 3926 },
    { IMAGE_SAMPLE_O_V5_V2_gfx10, 3896 },
    { IMAGE_SAMPLE_O_V5_V2_nsa_gfx10, 3911 },
    { IMAGE_SAMPLE_O_V5_V3, 3927 },
    { IMAGE_SAMPLE_O_V5_V3_gfx10, 3897 },
    { IMAGE_SAMPLE_O_V5_V3_nsa_gfx10, 3912 },
    { IMAGE_SAMPLE_O_V5_V4, 3928 },
    { IMAGE_SAMPLE_O_V5_V4_gfx10, 3898 },
    { IMAGE_SAMPLE_O_V5_V4_nsa_gfx10, 3913 },
    { IMAGE_SAMPLE_V1_V1, 1569 },
    { IMAGE_SAMPLE_V1_V1_gfx10, 1539 },
    { IMAGE_SAMPLE_V1_V2, 1570 },
    { IMAGE_SAMPLE_V1_V2_gfx10, 1540 },
    { IMAGE_SAMPLE_V1_V2_nsa_gfx10, 1559 },
    { IMAGE_SAMPLE_V1_V3, 1571 },
    { IMAGE_SAMPLE_V1_V3_gfx10, 1541 },
    { IMAGE_SAMPLE_V1_V3_nsa_gfx10, 1560 },
    { IMAGE_SAMPLE_V1_V4, 1572 },
    { IMAGE_SAMPLE_V1_V4_gfx10, 1542 },
    { IMAGE_SAMPLE_V2_V1, 1573 },
    { IMAGE_SAMPLE_V2_V1_gfx10, 1543 },
    { IMAGE_SAMPLE_V2_V2, 1574 },
    { IMAGE_SAMPLE_V2_V2_gfx10, 1544 },
    { IMAGE_SAMPLE_V2_V2_nsa_gfx10, 1561 },
    { IMAGE_SAMPLE_V2_V3, 1575 },
    { IMAGE_SAMPLE_V2_V3_gfx10, 1545 },
    { IMAGE_SAMPLE_V2_V3_nsa_gfx10, 1562 },
    { IMAGE_SAMPLE_V2_V4, 1576 },
    { IMAGE_SAMPLE_V2_V4_gfx10, 1546 },
    { IMAGE_SAMPLE_V3_V1, 1577 },
    { IMAGE_SAMPLE_V3_V1_gfx10, 1547 },
    { IMAGE_SAMPLE_V3_V2, 1578 },
    { IMAGE_SAMPLE_V3_V2_gfx10, 1548 },
    { IMAGE_SAMPLE_V3_V2_nsa_gfx10, 1563 },
    { IMAGE_SAMPLE_V3_V3, 1579 },
    { IMAGE_SAMPLE_V3_V3_gfx10, 1549 },
    { IMAGE_SAMPLE_V3_V3_nsa_gfx10, 1564 },
    { IMAGE_SAMPLE_V3_V4, 1580 },
    { IMAGE_SAMPLE_V3_V4_gfx10, 1550 },
    { IMAGE_SAMPLE_V4_V1, 1581 },
    { IMAGE_SAMPLE_V4_V1_gfx10, 1551 },
    { IMAGE_SAMPLE_V4_V2, 1582 },
    { IMAGE_SAMPLE_V4_V2_gfx10, 1552 },
    { IMAGE_SAMPLE_V4_V2_nsa_gfx10, 1565 },
    { IMAGE_SAMPLE_V4_V3, 1583 },
    { IMAGE_SAMPLE_V4_V3_gfx10, 1553 },
    { IMAGE_SAMPLE_V4_V3_nsa_gfx10, 1566 },
    { IMAGE_SAMPLE_V4_V4, 1584 },
    { IMAGE_SAMPLE_V4_V4_gfx10, 1554 },
    { IMAGE_SAMPLE_V5_V1, 1585 },
    { IMAGE_SAMPLE_V5_V1_gfx10, 1555 },
    { IMAGE_SAMPLE_V5_V2, 1586 },
    { IMAGE_SAMPLE_V5_V2_gfx10, 1556 },
    { IMAGE_SAMPLE_V5_V2_nsa_gfx10, 1567 },
    { IMAGE_SAMPLE_V5_V3, 1587 },
    { IMAGE_SAMPLE_V5_V3_gfx10, 1557 },
    { IMAGE_SAMPLE_V5_V3_nsa_gfx10, 1568 },
    { IMAGE_SAMPLE_V5_V4, 1588 },
    { IMAGE_SAMPLE_V5_V4_gfx10, 1558 },
    { IMAGE_STORE_MIP_PCK_V1_V1, 4045 },
    { IMAGE_STORE_MIP_PCK_V1_V1_gfx10, 4017 },
    { IMAGE_STORE_MIP_PCK_V1_V2, 4046 },
    { IMAGE_STORE_MIP_PCK_V1_V2_gfx10, 4018 },
    { IMAGE_STORE_MIP_PCK_V1_V2_nsa_gfx10, 4033 },
    { IMAGE_STORE_MIP_PCK_V1_V3, 4047 },
    { IMAGE_STORE_MIP_PCK_V1_V3_gfx10, 4019 },
    { IMAGE_STORE_MIP_PCK_V1_V3_nsa_gfx10, 4034 },
    { IMAGE_STORE_MIP_PCK_V1_V4, 4048 },
    { IMAGE_STORE_MIP_PCK_V1_V4_gfx10, 4020 },
    { IMAGE_STORE_MIP_PCK_V1_V4_nsa_gfx10, 4035 },
    { IMAGE_STORE_MIP_PCK_V2_V1, 4049 },
    { IMAGE_STORE_MIP_PCK_V2_V1_gfx10, 4021 },
    { IMAGE_STORE_MIP_PCK_V2_V2, 4050 },
    { IMAGE_STORE_MIP_PCK_V2_V2_gfx10, 4022 },
    { IMAGE_STORE_MIP_PCK_V2_V2_nsa_gfx10, 4036 },
    { IMAGE_STORE_MIP_PCK_V2_V3, 4051 },
    { IMAGE_STORE_MIP_PCK_V2_V3_gfx10, 4023 },
    { IMAGE_STORE_MIP_PCK_V2_V3_nsa_gfx10, 4037 },
    { IMAGE_STORE_MIP_PCK_V2_V4, 4052 },
    { IMAGE_STORE_MIP_PCK_V2_V4_gfx10, 4024 },
    { IMAGE_STORE_MIP_PCK_V2_V4_nsa_gfx10, 4038 },
    { IMAGE_STORE_MIP_PCK_V3_V1, 4053 },
    { IMAGE_STORE_MIP_PCK_V3_V1_gfx10, 4025 },
    { IMAGE_STORE_MIP_PCK_V3_V2, 4054 },
    { IMAGE_STORE_MIP_PCK_V3_V2_gfx10, 4026 },
    { IMAGE_STORE_MIP_PCK_V3_V2_nsa_gfx10, 4039 },
    { IMAGE_STORE_MIP_PCK_V3_V3, 4055 },
    { IMAGE_STORE_MIP_PCK_V3_V3_gfx10, 4027 },
    { IMAGE_STORE_MIP_PCK_V3_V3_nsa_gfx10, 4040 },
    { IMAGE_STORE_MIP_PCK_V3_V4, 4056 },
    { IMAGE_STORE_MIP_PCK_V3_V4_gfx10, 4028 },
    { IMAGE_STORE_MIP_PCK_V3_V4_nsa_gfx10, 4041 },
    { IMAGE_STORE_MIP_PCK_V4_V1, 4057 },
    { IMAGE_STORE_MIP_PCK_V4_V1_gfx10, 4029 },
    { IMAGE_STORE_MIP_PCK_V4_V2, 4058 },
    { IMAGE_STORE_MIP_PCK_V4_V2_gfx10, 4030 },
    { IMAGE_STORE_MIP_PCK_V4_V2_nsa_gfx10, 4042 },
    { IMAGE_STORE_MIP_PCK_V4_V3, 4059 },
    { IMAGE_STORE_MIP_PCK_V4_V3_gfx10, 4031 },
    { IMAGE_STORE_MIP_PCK_V4_V3_nsa_gfx10, 4043 },
    { IMAGE_STORE_MIP_PCK_V4_V4, 4060 },
    { IMAGE_STORE_MIP_PCK_V4_V4_gfx10, 4032 },
    { IMAGE_STORE_MIP_PCK_V4_V4_nsa_gfx10, 4044 },
    { IMAGE_STORE_MIP_V1_V1, 4001 },
    { IMAGE_STORE_MIP_V1_V1_gfx10, 3973 },
    { IMAGE_STORE_MIP_V1_V2, 4002 },
    { IMAGE_STORE_MIP_V1_V2_gfx10, 3974 },
    { IMAGE_STORE_MIP_V1_V2_nsa_gfx10, 3989 },
    { IMAGE_STORE_MIP_V1_V3, 4003 },
    { IMAGE_STORE_MIP_V1_V3_gfx10, 3975 },
    { IMAGE_STORE_MIP_V1_V3_nsa_gfx10, 3990 },
    { IMAGE_STORE_MIP_V1_V4, 4004 },
    { IMAGE_STORE_MIP_V1_V4_gfx10, 3976 },
    { IMAGE_STORE_MIP_V1_V4_nsa_gfx10, 3991 },
    { IMAGE_STORE_MIP_V2_V1, 4005 },
    { IMAGE_STORE_MIP_V2_V1_gfx10, 3977 },
    { IMAGE_STORE_MIP_V2_V2, 4006 },
    { IMAGE_STORE_MIP_V2_V2_gfx10, 3978 },
    { IMAGE_STORE_MIP_V2_V2_nsa_gfx10, 3992 },
    { IMAGE_STORE_MIP_V2_V3, 4007 },
    { IMAGE_STORE_MIP_V2_V3_gfx10, 3979 },
    { IMAGE_STORE_MIP_V2_V3_nsa_gfx10, 3993 },
    { IMAGE_STORE_MIP_V2_V4, 4008 },
    { IMAGE_STORE_MIP_V2_V4_gfx10, 3980 },
    { IMAGE_STORE_MIP_V2_V4_nsa_gfx10, 3994 },
    { IMAGE_STORE_MIP_V3_V1, 4009 },
    { IMAGE_STORE_MIP_V3_V1_gfx10, 3981 },
    { IMAGE_STORE_MIP_V3_V2, 4010 },
    { IMAGE_STORE_MIP_V3_V2_gfx10, 3982 },
    { IMAGE_STORE_MIP_V3_V2_nsa_gfx10, 3995 },
    { IMAGE_STORE_MIP_V3_V3, 4011 },
    { IMAGE_STORE_MIP_V3_V3_gfx10, 3983 },
    { IMAGE_STORE_MIP_V3_V3_nsa_gfx10, 3996 },
    { IMAGE_STORE_MIP_V3_V4, 4012 },
    { IMAGE_STORE_MIP_V3_V4_gfx10, 3984 },
    { IMAGE_STORE_MIP_V3_V4_nsa_gfx10, 3997 },
    { IMAGE_STORE_MIP_V4_V1, 4013 },
    { IMAGE_STORE_MIP_V4_V1_gfx10, 3985 },
    { IMAGE_STORE_MIP_V4_V2, 4014 },
    { IMAGE_STORE_MIP_V4_V2_gfx10, 3986 },
    { IMAGE_STORE_MIP_V4_V2_nsa_gfx10, 3998 },
    { IMAGE_STORE_MIP_V4_V3, 4015 },
    { IMAGE_STORE_MIP_V4_V3_gfx10, 3987 },
    { IMAGE_STORE_MIP_V4_V3_nsa_gfx10, 3999 },
    { IMAGE_STORE_MIP_V4_V4, 4016 },
    { IMAGE_STORE_MIP_V4_V4_gfx10, 3988 },
    { IMAGE_STORE_MIP_V4_V4_nsa_gfx10, 4000 },
    { IMAGE_STORE_PCK_V1_V1, 4089 },
    { IMAGE_STORE_PCK_V1_V1_gfx10, 4061 },
    { IMAGE_STORE_PCK_V1_V2, 4090 },
    { IMAGE_STORE_PCK_V1_V2_gfx10, 4062 },
    { IMAGE_STORE_PCK_V1_V2_nsa_gfx10, 4077 },
    { IMAGE_STORE_PCK_V1_V3, 4091 },
    { IMAGE_STORE_PCK_V1_V3_gfx10, 4063 },
    { IMAGE_STORE_PCK_V1_V3_nsa_gfx10, 4078 },
    { IMAGE_STORE_PCK_V1_V4, 4092 },
    { IMAGE_STORE_PCK_V1_V4_gfx10, 4064 },
    { IMAGE_STORE_PCK_V1_V4_nsa_gfx10, 4079 },
    { IMAGE_STORE_PCK_V2_V1, 4093 },
    { IMAGE_STORE_PCK_V2_V1_gfx10, 4065 },
    { IMAGE_STORE_PCK_V2_V2, 4094 },
    { IMAGE_STORE_PCK_V2_V2_gfx10, 4066 },
    { IMAGE_STORE_PCK_V2_V2_nsa_gfx10, 4080 },
    { IMAGE_STORE_PCK_V2_V3, 4095 },
    { IMAGE_STORE_PCK_V2_V3_gfx10, 4067 },
    { IMAGE_STORE_PCK_V2_V3_nsa_gfx10, 4081 },
    { IMAGE_STORE_PCK_V2_V4, 4096 },
    { IMAGE_STORE_PCK_V2_V4_gfx10, 4068 },
    { IMAGE_STORE_PCK_V2_V4_nsa_gfx10, 4082 },
    { IMAGE_STORE_PCK_V3_V1, 4097 },
    { IMAGE_STORE_PCK_V3_V1_gfx10, 4069 },
    { IMAGE_STORE_PCK_V3_V2, 4098 },
    { IMAGE_STORE_PCK_V3_V2_gfx10, 4070 },
    { IMAGE_STORE_PCK_V3_V2_nsa_gfx10, 4083 },
    { IMAGE_STORE_PCK_V3_V3, 4099 },
    { IMAGE_STORE_PCK_V3_V3_gfx10, 4071 },
    { IMAGE_STORE_PCK_V3_V3_nsa_gfx10, 4084 },
    { IMAGE_STORE_PCK_V3_V4, 4100 },
    { IMAGE_STORE_PCK_V3_V4_gfx10, 4072 },
    { IMAGE_STORE_PCK_V3_V4_nsa_gfx10, 4085 },
    { IMAGE_STORE_PCK_V4_V1, 4101 },
    { IMAGE_STORE_PCK_V4_V1_gfx10, 4073 },
    { IMAGE_STORE_PCK_V4_V2, 4102 },
    { IMAGE_STORE_PCK_V4_V2_gfx10, 4074 },
    { IMAGE_STORE_PCK_V4_V2_nsa_gfx10, 4086 },
    { IMAGE_STORE_PCK_V4_V3, 4103 },
    { IMAGE_STORE_PCK_V4_V3_gfx10, 4075 },
    { IMAGE_STORE_PCK_V4_V3_nsa_gfx10, 4087 },
    { IMAGE_STORE_PCK_V4_V4, 4104 },
    { IMAGE_STORE_PCK_V4_V4_gfx10, 4076 },
    { IMAGE_STORE_PCK_V4_V4_nsa_gfx10, 4088 },
    { IMAGE_STORE_V1_V1, 3957 },
    { IMAGE_STORE_V1_V1_gfx10, 3929 },
    { IMAGE_STORE_V1_V2, 3958 },
    { IMAGE_STORE_V1_V2_gfx10, 3930 },
    { IMAGE_STORE_V1_V2_nsa_gfx10, 3945 },
    { IMAGE_STORE_V1_V3, 3959 },
    { IMAGE_STORE_V1_V3_gfx10, 3931 },
    { IMAGE_STORE_V1_V3_nsa_gfx10, 3946 },
    { IMAGE_STORE_V1_V4, 3960 },
    { IMAGE_STORE_V1_V4_gfx10, 3932 },
    { IMAGE_STORE_V1_V4_nsa_gfx10, 3947 },
    { IMAGE_STORE_V2_V1, 3961 },
    { IMAGE_STORE_V2_V1_gfx10, 3933 },
    { IMAGE_STORE_V2_V2, 3962 },
    { IMAGE_STORE_V2_V2_gfx10, 3934 },
    { IMAGE_STORE_V2_V2_nsa_gfx10, 3948 },
    { IMAGE_STORE_V2_V3, 3963 },
    { IMAGE_STORE_V2_V3_gfx10, 3935 },
    { IMAGE_STORE_V2_V3_nsa_gfx10, 3949 },
    { IMAGE_STORE_V2_V4, 3964 },
    { IMAGE_STORE_V2_V4_gfx10, 3936 },
    { IMAGE_STORE_V2_V4_nsa_gfx10, 3950 },
    { IMAGE_STORE_V3_V1, 3965 },
    { IMAGE_STORE_V3_V1_gfx10, 3937 },
    { IMAGE_STORE_V3_V2, 3966 },
    { IMAGE_STORE_V3_V2_gfx10, 3938 },
    { IMAGE_STORE_V3_V2_nsa_gfx10, 3951 },
    { IMAGE_STORE_V3_V3, 3967 },
    { IMAGE_STORE_V3_V3_gfx10, 3939 },
    { IMAGE_STORE_V3_V3_nsa_gfx10, 3952 },
    { IMAGE_STORE_V3_V4, 3968 },
    { IMAGE_STORE_V3_V4_gfx10, 3940 },
    { IMAGE_STORE_V3_V4_nsa_gfx10, 3953 },
    { IMAGE_STORE_V4_V1, 3969 },
    { IMAGE_STORE_V4_V1_gfx10, 3941 },
    { IMAGE_STORE_V4_V2, 3970 },
    { IMAGE_STORE_V4_V2_gfx10, 3942 },
    { IMAGE_STORE_V4_V2_nsa_gfx10, 3954 },
    { IMAGE_STORE_V4_V3, 3971 },
    { IMAGE_STORE_V4_V3_gfx10, 3943 },
    { IMAGE_STORE_V4_V3_nsa_gfx10, 3955 },
    { IMAGE_STORE_V4_V4, 3972 },
    { IMAGE_STORE_V4_V4_gfx10, 3944 },
    { IMAGE_STORE_V4_V4_nsa_gfx10, 3956 },
  };

  struct KeyType {
    unsigned Opcode;
  };
  KeyType Key = { Opcode };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.Opcode < RHS.Opcode)
        return true;
      if (LHS.Opcode > RHS.Opcode)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Opcode != Idx->Opcode)
    return nullptr;
  return &MIMGInfoTable[Idx->_index];
}
#endif

#ifdef GET_MIMGLZMappingTable_DECL
const MIMGLZMappingInfo *getMIMGLZMappingInfo(unsigned L);
#endif

#ifdef GET_MIMGLZMappingTable_IMPL
constexpr MIMGLZMappingInfo MIMGLZMappingTable[] = {
  { IMAGE_GATHER4_C_L, IMAGE_GATHER4_C_LZ }, // 0
  { IMAGE_GATHER4_C_L_O, IMAGE_GATHER4_C_LZ_O }, // 1
  { IMAGE_GATHER4_L, IMAGE_GATHER4_LZ }, // 2
  { IMAGE_GATHER4_L_O, IMAGE_GATHER4_LZ_O }, // 3
  { IMAGE_SAMPLE_C_L, IMAGE_SAMPLE_C_LZ }, // 4
  { IMAGE_SAMPLE_C_L_O, IMAGE_SAMPLE_C_LZ_O }, // 5
  { IMAGE_SAMPLE_L, IMAGE_SAMPLE_LZ }, // 6
  { IMAGE_SAMPLE_L_O, IMAGE_SAMPLE_LZ_O }, // 7
 };

const MIMGLZMappingInfo *getMIMGLZMappingInfo(unsigned L) {
  struct KeyType {
    unsigned L;
  };
  KeyType Key = { L };
  auto Table = makeArrayRef(MIMGLZMappingTable);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const MIMGLZMappingInfo &LHS, const KeyType &RHS) {
      if ((unsigned)LHS.L < (unsigned)RHS.L)
        return true;
      if ((unsigned)LHS.L > (unsigned)RHS.L)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.L != Idx->L)
    return nullptr;
  return &*Idx;
}
#endif

#ifdef GET_MIMGMIPMappingTable_DECL
const MIMGMIPMappingInfo *getMIMGMIPMappingInfo(unsigned MIP);
#endif

#ifdef GET_MIMGMIPMappingTable_IMPL
constexpr MIMGMIPMappingInfo MIMGMIPMappingTable[] = {
  { IMAGE_LOAD_MIP, IMAGE_LOAD }, // 0
  { IMAGE_STORE_MIP, IMAGE_STORE }, // 1
 };

const MIMGMIPMappingInfo *getMIMGMIPMappingInfo(unsigned MIP) {
  struct KeyType {
    unsigned MIP;
  };
  KeyType Key = { MIP };
  auto Table = makeArrayRef(MIMGMIPMappingTable);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const MIMGMIPMappingInfo &LHS, const KeyType &RHS) {
      if ((unsigned)LHS.MIP < (unsigned)RHS.MIP)
        return true;
      if ((unsigned)LHS.MIP > (unsigned)RHS.MIP)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.MIP != Idx->MIP)
    return nullptr;
  return &*Idx;
}
#endif

#ifdef GET_MTBUFInfoTable_DECL
const MTBUFInfo *getMTBUFOpcodeHelper(unsigned Opcode);
const MTBUFInfo *getMTBUFInfoFromBaseOpcodeAndElements(unsigned BaseOpcode, uint8_t elements);
const MTBUFInfo *getMTBUFInfoFromOpcode(unsigned Opcode);
#endif

#ifdef GET_MTBUFInfoTable_IMPL
constexpr MTBUFInfo MTBUFInfoTable[] = {
  { TBUFFER_LOAD_FORMAT_D16_XYZW_ADDR64, TBUFFER_LOAD_FORMAT_D16_XYZW_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 0
  { TBUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN, TBUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 1
  { TBUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN_exact, TBUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 2
  { TBUFFER_LOAD_FORMAT_D16_XYZW_IDXEN, TBUFFER_LOAD_FORMAT_D16_XYZW_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 3
  { TBUFFER_LOAD_FORMAT_D16_XYZW_IDXEN_exact, TBUFFER_LOAD_FORMAT_D16_XYZW_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 4
  { TBUFFER_LOAD_FORMAT_D16_XYZW_OFFEN, TBUFFER_LOAD_FORMAT_D16_XYZW_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 5
  { TBUFFER_LOAD_FORMAT_D16_XYZW_OFFEN_exact, TBUFFER_LOAD_FORMAT_D16_XYZW_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 6
  { TBUFFER_LOAD_FORMAT_D16_XYZW_OFFSET, TBUFFER_LOAD_FORMAT_D16_XYZW_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 7
  { TBUFFER_LOAD_FORMAT_D16_XYZW_OFFSET_exact, TBUFFER_LOAD_FORMAT_D16_XYZW_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 8
  { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_ADDR64, TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 9
  { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN, TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 10
  { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 11
  { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN, TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 12
  { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN_exact, TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 13
  { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN, TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 14
  { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN_exact, TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 15
  { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET, TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 16
  { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET_exact, TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 17
  { TBUFFER_LOAD_FORMAT_D16_XYZ_ADDR64, TBUFFER_LOAD_FORMAT_D16_XYZ_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 18
  { TBUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN, TBUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 19
  { TBUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN_exact, TBUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 20
  { TBUFFER_LOAD_FORMAT_D16_XYZ_IDXEN, TBUFFER_LOAD_FORMAT_D16_XYZ_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 21
  { TBUFFER_LOAD_FORMAT_D16_XYZ_IDXEN_exact, TBUFFER_LOAD_FORMAT_D16_XYZ_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 22
  { TBUFFER_LOAD_FORMAT_D16_XYZ_OFFEN, TBUFFER_LOAD_FORMAT_D16_XYZ_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 23
  { TBUFFER_LOAD_FORMAT_D16_XYZ_OFFEN_exact, TBUFFER_LOAD_FORMAT_D16_XYZ_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 24
  { TBUFFER_LOAD_FORMAT_D16_XYZ_OFFSET, TBUFFER_LOAD_FORMAT_D16_XYZ_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 25
  { TBUFFER_LOAD_FORMAT_D16_XYZ_OFFSET_exact, TBUFFER_LOAD_FORMAT_D16_XYZ_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 26
  { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_ADDR64, TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 27
  { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN, TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 28
  { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 29
  { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN, TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 30
  { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN_exact, TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 31
  { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN, TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 32
  { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN_exact, TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 33
  { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET, TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 34
  { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET_exact, TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 35
  { TBUFFER_LOAD_FORMAT_D16_XY_ADDR64, TBUFFER_LOAD_FORMAT_D16_XY_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 36
  { TBUFFER_LOAD_FORMAT_D16_XY_BOTHEN, TBUFFER_LOAD_FORMAT_D16_XY_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 37
  { TBUFFER_LOAD_FORMAT_D16_XY_BOTHEN_exact, TBUFFER_LOAD_FORMAT_D16_XY_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 38
  { TBUFFER_LOAD_FORMAT_D16_XY_IDXEN, TBUFFER_LOAD_FORMAT_D16_XY_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 39
  { TBUFFER_LOAD_FORMAT_D16_XY_IDXEN_exact, TBUFFER_LOAD_FORMAT_D16_XY_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 40
  { TBUFFER_LOAD_FORMAT_D16_XY_OFFEN, TBUFFER_LOAD_FORMAT_D16_XY_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 41
  { TBUFFER_LOAD_FORMAT_D16_XY_OFFEN_exact, TBUFFER_LOAD_FORMAT_D16_XY_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 42
  { TBUFFER_LOAD_FORMAT_D16_XY_OFFSET, TBUFFER_LOAD_FORMAT_D16_XY_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 43
  { TBUFFER_LOAD_FORMAT_D16_XY_OFFSET_exact, TBUFFER_LOAD_FORMAT_D16_XY_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 44
  { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_ADDR64, TBUFFER_LOAD_FORMAT_D16_XY_gfx80_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 45
  { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN, TBUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 46
  { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN_exact, TBUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 47
  { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN, TBUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 48
  { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN_exact, TBUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 49
  { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN, TBUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 50
  { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN_exact, TBUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 51
  { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET, TBUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 52
  { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET_exact, TBUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 53
  { TBUFFER_LOAD_FORMAT_D16_X_ADDR64, TBUFFER_LOAD_FORMAT_D16_X_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 54
  { TBUFFER_LOAD_FORMAT_D16_X_BOTHEN, TBUFFER_LOAD_FORMAT_D16_X_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 55
  { TBUFFER_LOAD_FORMAT_D16_X_BOTHEN_exact, TBUFFER_LOAD_FORMAT_D16_X_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 56
  { TBUFFER_LOAD_FORMAT_D16_X_IDXEN, TBUFFER_LOAD_FORMAT_D16_X_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 57
  { TBUFFER_LOAD_FORMAT_D16_X_IDXEN_exact, TBUFFER_LOAD_FORMAT_D16_X_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 58
  { TBUFFER_LOAD_FORMAT_D16_X_OFFEN, TBUFFER_LOAD_FORMAT_D16_X_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 59
  { TBUFFER_LOAD_FORMAT_D16_X_OFFEN_exact, TBUFFER_LOAD_FORMAT_D16_X_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 60
  { TBUFFER_LOAD_FORMAT_D16_X_OFFSET, TBUFFER_LOAD_FORMAT_D16_X_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 61
  { TBUFFER_LOAD_FORMAT_D16_X_OFFSET_exact, TBUFFER_LOAD_FORMAT_D16_X_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 62
  { TBUFFER_LOAD_FORMAT_D16_X_gfx80_ADDR64, TBUFFER_LOAD_FORMAT_D16_X_gfx80_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 63
  { TBUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN, TBUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 64
  { TBUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN_exact, TBUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 65
  { TBUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN, TBUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 66
  { TBUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN_exact, TBUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 67
  { TBUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN, TBUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 68
  { TBUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN_exact, TBUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 69
  { TBUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET, TBUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 70
  { TBUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET_exact, TBUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 71
  { TBUFFER_LOAD_FORMAT_XYZW_ADDR64, TBUFFER_LOAD_FORMAT_X_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 72
  { TBUFFER_LOAD_FORMAT_XYZW_BOTHEN, TBUFFER_LOAD_FORMAT_X_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 73
  { TBUFFER_LOAD_FORMAT_XYZW_BOTHEN_exact, TBUFFER_LOAD_FORMAT_X_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 74
  { TBUFFER_LOAD_FORMAT_XYZW_IDXEN, TBUFFER_LOAD_FORMAT_X_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 75
  { TBUFFER_LOAD_FORMAT_XYZW_IDXEN_exact, TBUFFER_LOAD_FORMAT_X_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 76
  { TBUFFER_LOAD_FORMAT_XYZW_OFFEN, TBUFFER_LOAD_FORMAT_X_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 77
  { TBUFFER_LOAD_FORMAT_XYZW_OFFEN_exact, TBUFFER_LOAD_FORMAT_X_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 78
  { TBUFFER_LOAD_FORMAT_XYZW_OFFSET, TBUFFER_LOAD_FORMAT_X_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 79
  { TBUFFER_LOAD_FORMAT_XYZW_OFFSET_exact, TBUFFER_LOAD_FORMAT_X_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 80
  { TBUFFER_LOAD_FORMAT_XYZ_ADDR64, TBUFFER_LOAD_FORMAT_X_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 81
  { TBUFFER_LOAD_FORMAT_XYZ_BOTHEN, TBUFFER_LOAD_FORMAT_X_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 82
  { TBUFFER_LOAD_FORMAT_XYZ_BOTHEN_exact, TBUFFER_LOAD_FORMAT_X_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 83
  { TBUFFER_LOAD_FORMAT_XYZ_IDXEN, TBUFFER_LOAD_FORMAT_X_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 84
  { TBUFFER_LOAD_FORMAT_XYZ_IDXEN_exact, TBUFFER_LOAD_FORMAT_X_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 85
  { TBUFFER_LOAD_FORMAT_XYZ_OFFEN, TBUFFER_LOAD_FORMAT_X_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 86
  { TBUFFER_LOAD_FORMAT_XYZ_OFFEN_exact, TBUFFER_LOAD_FORMAT_X_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 87
  { TBUFFER_LOAD_FORMAT_XYZ_OFFSET, TBUFFER_LOAD_FORMAT_X_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 88
  { TBUFFER_LOAD_FORMAT_XYZ_OFFSET_exact, TBUFFER_LOAD_FORMAT_X_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 89
  { TBUFFER_LOAD_FORMAT_XY_ADDR64, TBUFFER_LOAD_FORMAT_X_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 90
  { TBUFFER_LOAD_FORMAT_XY_BOTHEN, TBUFFER_LOAD_FORMAT_X_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 91
  { TBUFFER_LOAD_FORMAT_XY_BOTHEN_exact, TBUFFER_LOAD_FORMAT_X_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 92
  { TBUFFER_LOAD_FORMAT_XY_IDXEN, TBUFFER_LOAD_FORMAT_X_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 93
  { TBUFFER_LOAD_FORMAT_XY_IDXEN_exact, TBUFFER_LOAD_FORMAT_X_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 94
  { TBUFFER_LOAD_FORMAT_XY_OFFEN, TBUFFER_LOAD_FORMAT_X_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 95
  { TBUFFER_LOAD_FORMAT_XY_OFFEN_exact, TBUFFER_LOAD_FORMAT_X_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 96
  { TBUFFER_LOAD_FORMAT_XY_OFFSET, TBUFFER_LOAD_FORMAT_X_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 97
  { TBUFFER_LOAD_FORMAT_XY_OFFSET_exact, TBUFFER_LOAD_FORMAT_X_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 98
  { TBUFFER_LOAD_FORMAT_X_ADDR64, TBUFFER_LOAD_FORMAT_X_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 99
  { TBUFFER_LOAD_FORMAT_X_BOTHEN, TBUFFER_LOAD_FORMAT_X_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 100
  { TBUFFER_LOAD_FORMAT_X_BOTHEN_exact, TBUFFER_LOAD_FORMAT_X_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 101
  { TBUFFER_LOAD_FORMAT_X_IDXEN, TBUFFER_LOAD_FORMAT_X_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 102
  { TBUFFER_LOAD_FORMAT_X_IDXEN_exact, TBUFFER_LOAD_FORMAT_X_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 103
  { TBUFFER_LOAD_FORMAT_X_OFFEN, TBUFFER_LOAD_FORMAT_X_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 104
  { TBUFFER_LOAD_FORMAT_X_OFFEN_exact, TBUFFER_LOAD_FORMAT_X_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 105
  { TBUFFER_LOAD_FORMAT_X_OFFSET, TBUFFER_LOAD_FORMAT_X_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 106
  { TBUFFER_LOAD_FORMAT_X_OFFSET_exact, TBUFFER_LOAD_FORMAT_X_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 107
  { TBUFFER_STORE_FORMAT_D16_XYZW_ADDR64, TBUFFER_STORE_FORMAT_D16_XYZW_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 108
  { TBUFFER_STORE_FORMAT_D16_XYZW_BOTHEN, TBUFFER_STORE_FORMAT_D16_XYZW_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 109
  { TBUFFER_STORE_FORMAT_D16_XYZW_BOTHEN_exact, TBUFFER_STORE_FORMAT_D16_XYZW_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 110
  { TBUFFER_STORE_FORMAT_D16_XYZW_IDXEN, TBUFFER_STORE_FORMAT_D16_XYZW_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 111
  { TBUFFER_STORE_FORMAT_D16_XYZW_IDXEN_exact, TBUFFER_STORE_FORMAT_D16_XYZW_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 112
  { TBUFFER_STORE_FORMAT_D16_XYZW_OFFEN, TBUFFER_STORE_FORMAT_D16_XYZW_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 113
  { TBUFFER_STORE_FORMAT_D16_XYZW_OFFEN_exact, TBUFFER_STORE_FORMAT_D16_XYZW_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 114
  { TBUFFER_STORE_FORMAT_D16_XYZW_OFFSET, TBUFFER_STORE_FORMAT_D16_XYZW_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 115
  { TBUFFER_STORE_FORMAT_D16_XYZW_OFFSET_exact, TBUFFER_STORE_FORMAT_D16_XYZW_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 116
  { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_ADDR64, TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 117
  { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN, TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 118
  { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 119
  { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN, TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 120
  { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN_exact, TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 121
  { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN, TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 122
  { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN_exact, TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 123
  { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET, TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 124
  { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET_exact, TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 125
  { TBUFFER_STORE_FORMAT_D16_XYZ_ADDR64, TBUFFER_STORE_FORMAT_D16_XYZ_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 126
  { TBUFFER_STORE_FORMAT_D16_XYZ_BOTHEN, TBUFFER_STORE_FORMAT_D16_XYZ_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 127
  { TBUFFER_STORE_FORMAT_D16_XYZ_BOTHEN_exact, TBUFFER_STORE_FORMAT_D16_XYZ_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 128
  { TBUFFER_STORE_FORMAT_D16_XYZ_IDXEN, TBUFFER_STORE_FORMAT_D16_XYZ_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 129
  { TBUFFER_STORE_FORMAT_D16_XYZ_IDXEN_exact, TBUFFER_STORE_FORMAT_D16_XYZ_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 130
  { TBUFFER_STORE_FORMAT_D16_XYZ_OFFEN, TBUFFER_STORE_FORMAT_D16_XYZ_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 131
  { TBUFFER_STORE_FORMAT_D16_XYZ_OFFEN_exact, TBUFFER_STORE_FORMAT_D16_XYZ_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 132
  { TBUFFER_STORE_FORMAT_D16_XYZ_OFFSET, TBUFFER_STORE_FORMAT_D16_XYZ_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 133
  { TBUFFER_STORE_FORMAT_D16_XYZ_OFFSET_exact, TBUFFER_STORE_FORMAT_D16_XYZ_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 134
  { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_ADDR64, TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 135
  { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN, TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 136
  { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 137
  { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN, TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 138
  { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN_exact, TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 139
  { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN, TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 140
  { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN_exact, TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 141
  { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET, TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 142
  { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET_exact, TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 143
  { TBUFFER_STORE_FORMAT_D16_XY_ADDR64, TBUFFER_STORE_FORMAT_D16_XY_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 144
  { TBUFFER_STORE_FORMAT_D16_XY_BOTHEN, TBUFFER_STORE_FORMAT_D16_XY_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 145
  { TBUFFER_STORE_FORMAT_D16_XY_BOTHEN_exact, TBUFFER_STORE_FORMAT_D16_XY_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 146
  { TBUFFER_STORE_FORMAT_D16_XY_IDXEN, TBUFFER_STORE_FORMAT_D16_XY_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 147
  { TBUFFER_STORE_FORMAT_D16_XY_IDXEN_exact, TBUFFER_STORE_FORMAT_D16_XY_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 148
  { TBUFFER_STORE_FORMAT_D16_XY_OFFEN, TBUFFER_STORE_FORMAT_D16_XY_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 149
  { TBUFFER_STORE_FORMAT_D16_XY_OFFEN_exact, TBUFFER_STORE_FORMAT_D16_XY_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 150
  { TBUFFER_STORE_FORMAT_D16_XY_OFFSET, TBUFFER_STORE_FORMAT_D16_XY_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 151
  { TBUFFER_STORE_FORMAT_D16_XY_OFFSET_exact, TBUFFER_STORE_FORMAT_D16_XY_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 152
  { TBUFFER_STORE_FORMAT_D16_XY_gfx80_ADDR64, TBUFFER_STORE_FORMAT_D16_XY_gfx80_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 153
  { TBUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN, TBUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 154
  { TBUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN_exact, TBUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 155
  { TBUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN, TBUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 156
  { TBUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN_exact, TBUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 157
  { TBUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN, TBUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 158
  { TBUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN_exact, TBUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 159
  { TBUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET, TBUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 160
  { TBUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET_exact, TBUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 161
  { TBUFFER_STORE_FORMAT_D16_X_ADDR64, TBUFFER_STORE_FORMAT_D16_X_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 162
  { TBUFFER_STORE_FORMAT_D16_X_BOTHEN, TBUFFER_STORE_FORMAT_D16_X_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 163
  { TBUFFER_STORE_FORMAT_D16_X_BOTHEN_exact, TBUFFER_STORE_FORMAT_D16_X_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 164
  { TBUFFER_STORE_FORMAT_D16_X_IDXEN, TBUFFER_STORE_FORMAT_D16_X_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 165
  { TBUFFER_STORE_FORMAT_D16_X_IDXEN_exact, TBUFFER_STORE_FORMAT_D16_X_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 166
  { TBUFFER_STORE_FORMAT_D16_X_OFFEN, TBUFFER_STORE_FORMAT_D16_X_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 167
  { TBUFFER_STORE_FORMAT_D16_X_OFFEN_exact, TBUFFER_STORE_FORMAT_D16_X_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 168
  { TBUFFER_STORE_FORMAT_D16_X_OFFSET, TBUFFER_STORE_FORMAT_D16_X_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 169
  { TBUFFER_STORE_FORMAT_D16_X_OFFSET_exact, TBUFFER_STORE_FORMAT_D16_X_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 170
  { TBUFFER_STORE_FORMAT_D16_X_gfx80_ADDR64, TBUFFER_STORE_FORMAT_D16_X_gfx80_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 171
  { TBUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN, TBUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 172
  { TBUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN_exact, TBUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 173
  { TBUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN, TBUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 174
  { TBUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN_exact, TBUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 175
  { TBUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN, TBUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 176
  { TBUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN_exact, TBUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 177
  { TBUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET, TBUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 178
  { TBUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET_exact, TBUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 179
  { TBUFFER_STORE_FORMAT_XYZW_ADDR64, TBUFFER_STORE_FORMAT_X_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 180
  { TBUFFER_STORE_FORMAT_XYZW_BOTHEN, TBUFFER_STORE_FORMAT_X_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 181
  { TBUFFER_STORE_FORMAT_XYZW_BOTHEN_exact, TBUFFER_STORE_FORMAT_X_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 182
  { TBUFFER_STORE_FORMAT_XYZW_IDXEN, TBUFFER_STORE_FORMAT_X_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 183
  { TBUFFER_STORE_FORMAT_XYZW_IDXEN_exact, TBUFFER_STORE_FORMAT_X_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 184
  { TBUFFER_STORE_FORMAT_XYZW_OFFEN, TBUFFER_STORE_FORMAT_X_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 185
  { TBUFFER_STORE_FORMAT_XYZW_OFFEN_exact, TBUFFER_STORE_FORMAT_X_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 186
  { TBUFFER_STORE_FORMAT_XYZW_OFFSET, TBUFFER_STORE_FORMAT_X_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 187
  { TBUFFER_STORE_FORMAT_XYZW_OFFSET_exact, TBUFFER_STORE_FORMAT_X_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 188
  { TBUFFER_STORE_FORMAT_XYZ_ADDR64, TBUFFER_STORE_FORMAT_X_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 189
  { TBUFFER_STORE_FORMAT_XYZ_BOTHEN, TBUFFER_STORE_FORMAT_X_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 190
  { TBUFFER_STORE_FORMAT_XYZ_BOTHEN_exact, TBUFFER_STORE_FORMAT_X_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 191
  { TBUFFER_STORE_FORMAT_XYZ_IDXEN, TBUFFER_STORE_FORMAT_X_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 192
  { TBUFFER_STORE_FORMAT_XYZ_IDXEN_exact, TBUFFER_STORE_FORMAT_X_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 193
  { TBUFFER_STORE_FORMAT_XYZ_OFFEN, TBUFFER_STORE_FORMAT_X_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 194
  { TBUFFER_STORE_FORMAT_XYZ_OFFEN_exact, TBUFFER_STORE_FORMAT_X_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 195
  { TBUFFER_STORE_FORMAT_XYZ_OFFSET, TBUFFER_STORE_FORMAT_X_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 196
  { TBUFFER_STORE_FORMAT_XYZ_OFFSET_exact, TBUFFER_STORE_FORMAT_X_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 197
  { TBUFFER_STORE_FORMAT_XY_ADDR64, TBUFFER_STORE_FORMAT_X_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 198
  { TBUFFER_STORE_FORMAT_XY_BOTHEN, TBUFFER_STORE_FORMAT_X_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 199
  { TBUFFER_STORE_FORMAT_XY_BOTHEN_exact, TBUFFER_STORE_FORMAT_X_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 200
  { TBUFFER_STORE_FORMAT_XY_IDXEN, TBUFFER_STORE_FORMAT_X_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 201
  { TBUFFER_STORE_FORMAT_XY_IDXEN_exact, TBUFFER_STORE_FORMAT_X_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 202
  { TBUFFER_STORE_FORMAT_XY_OFFEN, TBUFFER_STORE_FORMAT_X_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 203
  { TBUFFER_STORE_FORMAT_XY_OFFEN_exact, TBUFFER_STORE_FORMAT_X_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 204
  { TBUFFER_STORE_FORMAT_XY_OFFSET, TBUFFER_STORE_FORMAT_X_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 205
  { TBUFFER_STORE_FORMAT_XY_OFFSET_exact, TBUFFER_STORE_FORMAT_X_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 206
  { TBUFFER_STORE_FORMAT_X_ADDR64, TBUFFER_STORE_FORMAT_X_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 207
  { TBUFFER_STORE_FORMAT_X_BOTHEN, TBUFFER_STORE_FORMAT_X_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 208
  { TBUFFER_STORE_FORMAT_X_BOTHEN_exact, TBUFFER_STORE_FORMAT_X_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 209
  { TBUFFER_STORE_FORMAT_X_IDXEN, TBUFFER_STORE_FORMAT_X_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 210
  { TBUFFER_STORE_FORMAT_X_IDXEN_exact, TBUFFER_STORE_FORMAT_X_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 211
  { TBUFFER_STORE_FORMAT_X_OFFEN, TBUFFER_STORE_FORMAT_X_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 212
  { TBUFFER_STORE_FORMAT_X_OFFEN_exact, TBUFFER_STORE_FORMAT_X_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 213
  { TBUFFER_STORE_FORMAT_X_OFFSET, TBUFFER_STORE_FORMAT_X_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 214
  { TBUFFER_STORE_FORMAT_X_OFFSET_exact, TBUFFER_STORE_FORMAT_X_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 215
 };

const MTBUFInfo *getMTBUFOpcodeHelper(unsigned Opcode) {
  struct KeyType {
    unsigned Opcode;
  };
  KeyType Key = { Opcode };
  auto Table = makeArrayRef(MTBUFInfoTable);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const MTBUFInfo &LHS, const KeyType &RHS) {
      if (LHS.Opcode < RHS.Opcode)
        return true;
      if (LHS.Opcode > RHS.Opcode)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Opcode != Idx->Opcode)
    return nullptr;
  return &*Idx;
}

const MTBUFInfo *getMTBUFInfoFromBaseOpcodeAndElements(unsigned BaseOpcode, uint8_t elements) {
  struct IndexType {
    unsigned BaseOpcode;
    uint8_t elements;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { TBUFFER_LOAD_FORMAT_D16_XYZW_ADDR64, 0x4, 0 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN, 0x4, 1 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN_exact, 0x4, 2 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_IDXEN, 0x4, 3 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_IDXEN_exact, 0x4, 4 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_OFFEN, 0x4, 5 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_OFFEN_exact, 0x4, 6 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_OFFSET, 0x4, 7 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_OFFSET_exact, 0x4, 8 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_ADDR64, 0x4, 9 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN, 0x4, 10 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, 0x4, 11 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN, 0x4, 12 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN_exact, 0x4, 13 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN, 0x4, 14 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN_exact, 0x4, 15 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET, 0x4, 16 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET_exact, 0x4, 17 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_ADDR64, 0x3, 18 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN, 0x3, 19 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN_exact, 0x3, 20 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_IDXEN, 0x3, 21 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_IDXEN_exact, 0x3, 22 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_OFFEN, 0x3, 23 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_OFFEN_exact, 0x3, 24 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_OFFSET, 0x3, 25 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_OFFSET_exact, 0x3, 26 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_ADDR64, 0x3, 27 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN, 0x3, 28 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, 0x3, 29 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN, 0x3, 30 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN_exact, 0x3, 31 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN, 0x3, 32 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN_exact, 0x3, 33 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET, 0x3, 34 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET_exact, 0x3, 35 },
    { TBUFFER_LOAD_FORMAT_D16_XY_ADDR64, 0x2, 36 },
    { TBUFFER_LOAD_FORMAT_D16_XY_BOTHEN, 0x2, 37 },
    { TBUFFER_LOAD_FORMAT_D16_XY_BOTHEN_exact, 0x2, 38 },
    { TBUFFER_LOAD_FORMAT_D16_XY_IDXEN, 0x2, 39 },
    { TBUFFER_LOAD_FORMAT_D16_XY_IDXEN_exact, 0x2, 40 },
    { TBUFFER_LOAD_FORMAT_D16_XY_OFFEN, 0x2, 41 },
    { TBUFFER_LOAD_FORMAT_D16_XY_OFFEN_exact, 0x2, 42 },
    { TBUFFER_LOAD_FORMAT_D16_XY_OFFSET, 0x2, 43 },
    { TBUFFER_LOAD_FORMAT_D16_XY_OFFSET_exact, 0x2, 44 },
    { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_ADDR64, 0x2, 45 },
    { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN, 0x2, 46 },
    { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN_exact, 0x2, 47 },
    { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN, 0x2, 48 },
    { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN_exact, 0x2, 49 },
    { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN, 0x2, 50 },
    { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN_exact, 0x2, 51 },
    { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET, 0x2, 52 },
    { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET_exact, 0x2, 53 },
    { TBUFFER_LOAD_FORMAT_D16_X_ADDR64, 0x1, 54 },
    { TBUFFER_LOAD_FORMAT_D16_X_BOTHEN, 0x1, 55 },
    { TBUFFER_LOAD_FORMAT_D16_X_BOTHEN_exact, 0x1, 56 },
    { TBUFFER_LOAD_FORMAT_D16_X_IDXEN, 0x1, 57 },
    { TBUFFER_LOAD_FORMAT_D16_X_IDXEN_exact, 0x1, 58 },
    { TBUFFER_LOAD_FORMAT_D16_X_OFFEN, 0x1, 59 },
    { TBUFFER_LOAD_FORMAT_D16_X_OFFEN_exact, 0x1, 60 },
    { TBUFFER_LOAD_FORMAT_D16_X_OFFSET, 0x1, 61 },
    { TBUFFER_LOAD_FORMAT_D16_X_OFFSET_exact, 0x1, 62 },
    { TBUFFER_LOAD_FORMAT_D16_X_gfx80_ADDR64, 0x1, 63 },
    { TBUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN, 0x1, 64 },
    { TBUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN_exact, 0x1, 65 },
    { TBUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN, 0x1, 66 },
    { TBUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN_exact, 0x1, 67 },
    { TBUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN, 0x1, 68 },
    { TBUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN_exact, 0x1, 69 },
    { TBUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET, 0x1, 70 },
    { TBUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET_exact, 0x1, 71 },
    { TBUFFER_LOAD_FORMAT_X_ADDR64, 0x1, 99 },
    { TBUFFER_LOAD_FORMAT_X_ADDR64, 0x2, 90 },
    { TBUFFER_LOAD_FORMAT_X_ADDR64, 0x3, 81 },
    { TBUFFER_LOAD_FORMAT_X_ADDR64, 0x4, 72 },
    { TBUFFER_LOAD_FORMAT_X_BOTHEN, 0x1, 100 },
    { TBUFFER_LOAD_FORMAT_X_BOTHEN, 0x2, 91 },
    { TBUFFER_LOAD_FORMAT_X_BOTHEN, 0x3, 82 },
    { TBUFFER_LOAD_FORMAT_X_BOTHEN, 0x4, 73 },
    { TBUFFER_LOAD_FORMAT_X_BOTHEN_exact, 0x1, 101 },
    { TBUFFER_LOAD_FORMAT_X_BOTHEN_exact, 0x2, 92 },
    { TBUFFER_LOAD_FORMAT_X_BOTHEN_exact, 0x3, 83 },
    { TBUFFER_LOAD_FORMAT_X_BOTHEN_exact, 0x4, 74 },
    { TBUFFER_LOAD_FORMAT_X_IDXEN, 0x1, 102 },
    { TBUFFER_LOAD_FORMAT_X_IDXEN, 0x2, 93 },
    { TBUFFER_LOAD_FORMAT_X_IDXEN, 0x3, 84 },
    { TBUFFER_LOAD_FORMAT_X_IDXEN, 0x4, 75 },
    { TBUFFER_LOAD_FORMAT_X_IDXEN_exact, 0x1, 103 },
    { TBUFFER_LOAD_FORMAT_X_IDXEN_exact, 0x2, 94 },
    { TBUFFER_LOAD_FORMAT_X_IDXEN_exact, 0x3, 85 },
    { TBUFFER_LOAD_FORMAT_X_IDXEN_exact, 0x4, 76 },
    { TBUFFER_LOAD_FORMAT_X_OFFEN, 0x1, 104 },
    { TBUFFER_LOAD_FORMAT_X_OFFEN, 0x2, 95 },
    { TBUFFER_LOAD_FORMAT_X_OFFEN, 0x3, 86 },
    { TBUFFER_LOAD_FORMAT_X_OFFEN, 0x4, 77 },
    { TBUFFER_LOAD_FORMAT_X_OFFEN_exact, 0x1, 105 },
    { TBUFFER_LOAD_FORMAT_X_OFFEN_exact, 0x2, 96 },
    { TBUFFER_LOAD_FORMAT_X_OFFEN_exact, 0x3, 87 },
    { TBUFFER_LOAD_FORMAT_X_OFFEN_exact, 0x4, 78 },
    { TBUFFER_LOAD_FORMAT_X_OFFSET, 0x1, 106 },
    { TBUFFER_LOAD_FORMAT_X_OFFSET, 0x2, 97 },
    { TBUFFER_LOAD_FORMAT_X_OFFSET, 0x3, 88 },
    { TBUFFER_LOAD_FORMAT_X_OFFSET, 0x4, 79 },
    { TBUFFER_LOAD_FORMAT_X_OFFSET_exact, 0x1, 107 },
    { TBUFFER_LOAD_FORMAT_X_OFFSET_exact, 0x2, 98 },
    { TBUFFER_LOAD_FORMAT_X_OFFSET_exact, 0x3, 89 },
    { TBUFFER_LOAD_FORMAT_X_OFFSET_exact, 0x4, 80 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_ADDR64, 0x4, 108 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_BOTHEN, 0x4, 109 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_BOTHEN_exact, 0x4, 110 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_IDXEN, 0x4, 111 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_IDXEN_exact, 0x4, 112 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_OFFEN, 0x4, 113 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_OFFEN_exact, 0x4, 114 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_OFFSET, 0x4, 115 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_OFFSET_exact, 0x4, 116 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_ADDR64, 0x4, 117 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN, 0x4, 118 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, 0x4, 119 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN, 0x4, 120 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN_exact, 0x4, 121 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN, 0x4, 122 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN_exact, 0x4, 123 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET, 0x4, 124 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET_exact, 0x4, 125 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_ADDR64, 0x3, 126 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_BOTHEN, 0x3, 127 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_BOTHEN_exact, 0x3, 128 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_IDXEN, 0x3, 129 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_IDXEN_exact, 0x3, 130 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_OFFEN, 0x3, 131 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_OFFEN_exact, 0x3, 132 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_OFFSET, 0x3, 133 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_OFFSET_exact, 0x3, 134 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_ADDR64, 0x3, 135 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN, 0x3, 136 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, 0x3, 137 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN, 0x3, 138 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN_exact, 0x3, 139 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN, 0x3, 140 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN_exact, 0x3, 141 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET, 0x3, 142 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET_exact, 0x3, 143 },
    { TBUFFER_STORE_FORMAT_D16_XY_ADDR64, 0x2, 144 },
    { TBUFFER_STORE_FORMAT_D16_XY_BOTHEN, 0x2, 145 },
    { TBUFFER_STORE_FORMAT_D16_XY_BOTHEN_exact, 0x2, 146 },
    { TBUFFER_STORE_FORMAT_D16_XY_IDXEN, 0x2, 147 },
    { TBUFFER_STORE_FORMAT_D16_XY_IDXEN_exact, 0x2, 148 },
    { TBUFFER_STORE_FORMAT_D16_XY_OFFEN, 0x2, 149 },
    { TBUFFER_STORE_FORMAT_D16_XY_OFFEN_exact, 0x2, 150 },
    { TBUFFER_STORE_FORMAT_D16_XY_OFFSET, 0x2, 151 },
    { TBUFFER_STORE_FORMAT_D16_XY_OFFSET_exact, 0x2, 152 },
    { TBUFFER_STORE_FORMAT_D16_XY_gfx80_ADDR64, 0x2, 153 },
    { TBUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN, 0x2, 154 },
    { TBUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN_exact, 0x2, 155 },
    { TBUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN, 0x2, 156 },
    { TBUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN_exact, 0x2, 157 },
    { TBUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN, 0x2, 158 },
    { TBUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN_exact, 0x2, 159 },
    { TBUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET, 0x2, 160 },
    { TBUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET_exact, 0x2, 161 },
    { TBUFFER_STORE_FORMAT_D16_X_ADDR64, 0x1, 162 },
    { TBUFFER_STORE_FORMAT_D16_X_BOTHEN, 0x1, 163 },
    { TBUFFER_STORE_FORMAT_D16_X_BOTHEN_exact, 0x1, 164 },
    { TBUFFER_STORE_FORMAT_D16_X_IDXEN, 0x1, 165 },
    { TBUFFER_STORE_FORMAT_D16_X_IDXEN_exact, 0x1, 166 },
    { TBUFFER_STORE_FORMAT_D16_X_OFFEN, 0x1, 167 },
    { TBUFFER_STORE_FORMAT_D16_X_OFFEN_exact, 0x1, 168 },
    { TBUFFER_STORE_FORMAT_D16_X_OFFSET, 0x1, 169 },
    { TBUFFER_STORE_FORMAT_D16_X_OFFSET_exact, 0x1, 170 },
    { TBUFFER_STORE_FORMAT_D16_X_gfx80_ADDR64, 0x1, 171 },
    { TBUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN, 0x1, 172 },
    { TBUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN_exact, 0x1, 173 },
    { TBUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN, 0x1, 174 },
    { TBUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN_exact, 0x1, 175 },
    { TBUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN, 0x1, 176 },
    { TBUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN_exact, 0x1, 177 },
    { TBUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET, 0x1, 178 },
    { TBUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET_exact, 0x1, 179 },
    { TBUFFER_STORE_FORMAT_X_ADDR64, 0x1, 207 },
    { TBUFFER_STORE_FORMAT_X_ADDR64, 0x2, 198 },
    { TBUFFER_STORE_FORMAT_X_ADDR64, 0x3, 189 },
    { TBUFFER_STORE_FORMAT_X_ADDR64, 0x4, 180 },
    { TBUFFER_STORE_FORMAT_X_BOTHEN, 0x1, 208 },
    { TBUFFER_STORE_FORMAT_X_BOTHEN, 0x2, 199 },
    { TBUFFER_STORE_FORMAT_X_BOTHEN, 0x3, 190 },
    { TBUFFER_STORE_FORMAT_X_BOTHEN, 0x4, 181 },
    { TBUFFER_STORE_FORMAT_X_BOTHEN_exact, 0x1, 209 },
    { TBUFFER_STORE_FORMAT_X_BOTHEN_exact, 0x2, 200 },
    { TBUFFER_STORE_FORMAT_X_BOTHEN_exact, 0x3, 191 },
    { TBUFFER_STORE_FORMAT_X_BOTHEN_exact, 0x4, 182 },
    { TBUFFER_STORE_FORMAT_X_IDXEN, 0x1, 210 },
    { TBUFFER_STORE_FORMAT_X_IDXEN, 0x2, 201 },
    { TBUFFER_STORE_FORMAT_X_IDXEN, 0x3, 192 },
    { TBUFFER_STORE_FORMAT_X_IDXEN, 0x4, 183 },
    { TBUFFER_STORE_FORMAT_X_IDXEN_exact, 0x1, 211 },
    { TBUFFER_STORE_FORMAT_X_IDXEN_exact, 0x2, 202 },
    { TBUFFER_STORE_FORMAT_X_IDXEN_exact, 0x3, 193 },
    { TBUFFER_STORE_FORMAT_X_IDXEN_exact, 0x4, 184 },
    { TBUFFER_STORE_FORMAT_X_OFFEN, 0x1, 212 },
    { TBUFFER_STORE_FORMAT_X_OFFEN, 0x2, 203 },
    { TBUFFER_STORE_FORMAT_X_OFFEN, 0x3, 194 },
    { TBUFFER_STORE_FORMAT_X_OFFEN, 0x4, 185 },
    { TBUFFER_STORE_FORMAT_X_OFFEN_exact, 0x1, 213 },
    { TBUFFER_STORE_FORMAT_X_OFFEN_exact, 0x2, 204 },
    { TBUFFER_STORE_FORMAT_X_OFFEN_exact, 0x3, 195 },
    { TBUFFER_STORE_FORMAT_X_OFFEN_exact, 0x4, 186 },
    { TBUFFER_STORE_FORMAT_X_OFFSET, 0x1, 214 },
    { TBUFFER_STORE_FORMAT_X_OFFSET, 0x2, 205 },
    { TBUFFER_STORE_FORMAT_X_OFFSET, 0x3, 196 },
    { TBUFFER_STORE_FORMAT_X_OFFSET, 0x4, 187 },
    { TBUFFER_STORE_FORMAT_X_OFFSET_exact, 0x1, 215 },
    { TBUFFER_STORE_FORMAT_X_OFFSET_exact, 0x2, 206 },
    { TBUFFER_STORE_FORMAT_X_OFFSET_exact, 0x3, 197 },
    { TBUFFER_STORE_FORMAT_X_OFFSET_exact, 0x4, 188 },
  };

  struct KeyType {
    unsigned BaseOpcode;
    uint8_t elements;
  };
  KeyType Key = { BaseOpcode, elements };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.BaseOpcode < RHS.BaseOpcode)
        return true;
      if (LHS.BaseOpcode > RHS.BaseOpcode)
        return false;
      if (LHS.elements < RHS.elements)
        return true;
      if (LHS.elements > RHS.elements)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.BaseOpcode != Idx->BaseOpcode ||
      Key.elements != Idx->elements)
    return nullptr;
  return &MTBUFInfoTable[Idx->_index];
}

const MTBUFInfo *getMTBUFInfoFromOpcode(unsigned Opcode) {
  struct IndexType {
    unsigned Opcode;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { TBUFFER_LOAD_FORMAT_D16_XYZW_ADDR64, 0 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN, 1 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN_exact, 2 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_IDXEN, 3 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_IDXEN_exact, 4 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_OFFEN, 5 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_OFFEN_exact, 6 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_OFFSET, 7 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_OFFSET_exact, 8 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_ADDR64, 9 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN, 10 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, 11 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN, 12 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN_exact, 13 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN, 14 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN_exact, 15 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET, 16 },
    { TBUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET_exact, 17 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_ADDR64, 18 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN, 19 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN_exact, 20 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_IDXEN, 21 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_IDXEN_exact, 22 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_OFFEN, 23 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_OFFEN_exact, 24 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_OFFSET, 25 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_OFFSET_exact, 26 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_ADDR64, 27 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN, 28 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, 29 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN, 30 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN_exact, 31 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN, 32 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN_exact, 33 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET, 34 },
    { TBUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET_exact, 35 },
    { TBUFFER_LOAD_FORMAT_D16_XY_ADDR64, 36 },
    { TBUFFER_LOAD_FORMAT_D16_XY_BOTHEN, 37 },
    { TBUFFER_LOAD_FORMAT_D16_XY_BOTHEN_exact, 38 },
    { TBUFFER_LOAD_FORMAT_D16_XY_IDXEN, 39 },
    { TBUFFER_LOAD_FORMAT_D16_XY_IDXEN_exact, 40 },
    { TBUFFER_LOAD_FORMAT_D16_XY_OFFEN, 41 },
    { TBUFFER_LOAD_FORMAT_D16_XY_OFFEN_exact, 42 },
    { TBUFFER_LOAD_FORMAT_D16_XY_OFFSET, 43 },
    { TBUFFER_LOAD_FORMAT_D16_XY_OFFSET_exact, 44 },
    { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_ADDR64, 45 },
    { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN, 46 },
    { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN_exact, 47 },
    { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN, 48 },
    { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN_exact, 49 },
    { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN, 50 },
    { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN_exact, 51 },
    { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET, 52 },
    { TBUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET_exact, 53 },
    { TBUFFER_LOAD_FORMAT_D16_X_ADDR64, 54 },
    { TBUFFER_LOAD_FORMAT_D16_X_BOTHEN, 55 },
    { TBUFFER_LOAD_FORMAT_D16_X_BOTHEN_exact, 56 },
    { TBUFFER_LOAD_FORMAT_D16_X_IDXEN, 57 },
    { TBUFFER_LOAD_FORMAT_D16_X_IDXEN_exact, 58 },
    { TBUFFER_LOAD_FORMAT_D16_X_OFFEN, 59 },
    { TBUFFER_LOAD_FORMAT_D16_X_OFFEN_exact, 60 },
    { TBUFFER_LOAD_FORMAT_D16_X_OFFSET, 61 },
    { TBUFFER_LOAD_FORMAT_D16_X_OFFSET_exact, 62 },
    { TBUFFER_LOAD_FORMAT_D16_X_gfx80_ADDR64, 63 },
    { TBUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN, 64 },
    { TBUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN_exact, 65 },
    { TBUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN, 66 },
    { TBUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN_exact, 67 },
    { TBUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN, 68 },
    { TBUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN_exact, 69 },
    { TBUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET, 70 },
    { TBUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET_exact, 71 },
    { TBUFFER_LOAD_FORMAT_XYZW_ADDR64, 72 },
    { TBUFFER_LOAD_FORMAT_XYZW_BOTHEN, 73 },
    { TBUFFER_LOAD_FORMAT_XYZW_BOTHEN_exact, 74 },
    { TBUFFER_LOAD_FORMAT_XYZW_IDXEN, 75 },
    { TBUFFER_LOAD_FORMAT_XYZW_IDXEN_exact, 76 },
    { TBUFFER_LOAD_FORMAT_XYZW_OFFEN, 77 },
    { TBUFFER_LOAD_FORMAT_XYZW_OFFEN_exact, 78 },
    { TBUFFER_LOAD_FORMAT_XYZW_OFFSET, 79 },
    { TBUFFER_LOAD_FORMAT_XYZW_OFFSET_exact, 80 },
    { TBUFFER_LOAD_FORMAT_XYZ_ADDR64, 81 },
    { TBUFFER_LOAD_FORMAT_XYZ_BOTHEN, 82 },
    { TBUFFER_LOAD_FORMAT_XYZ_BOTHEN_exact, 83 },
    { TBUFFER_LOAD_FORMAT_XYZ_IDXEN, 84 },
    { TBUFFER_LOAD_FORMAT_XYZ_IDXEN_exact, 85 },
    { TBUFFER_LOAD_FORMAT_XYZ_OFFEN, 86 },
    { TBUFFER_LOAD_FORMAT_XYZ_OFFEN_exact, 87 },
    { TBUFFER_LOAD_FORMAT_XYZ_OFFSET, 88 },
    { TBUFFER_LOAD_FORMAT_XYZ_OFFSET_exact, 89 },
    { TBUFFER_LOAD_FORMAT_XY_ADDR64, 90 },
    { TBUFFER_LOAD_FORMAT_XY_BOTHEN, 91 },
    { TBUFFER_LOAD_FORMAT_XY_BOTHEN_exact, 92 },
    { TBUFFER_LOAD_FORMAT_XY_IDXEN, 93 },
    { TBUFFER_LOAD_FORMAT_XY_IDXEN_exact, 94 },
    { TBUFFER_LOAD_FORMAT_XY_OFFEN, 95 },
    { TBUFFER_LOAD_FORMAT_XY_OFFEN_exact, 96 },
    { TBUFFER_LOAD_FORMAT_XY_OFFSET, 97 },
    { TBUFFER_LOAD_FORMAT_XY_OFFSET_exact, 98 },
    { TBUFFER_LOAD_FORMAT_X_ADDR64, 99 },
    { TBUFFER_LOAD_FORMAT_X_BOTHEN, 100 },
    { TBUFFER_LOAD_FORMAT_X_BOTHEN_exact, 101 },
    { TBUFFER_LOAD_FORMAT_X_IDXEN, 102 },
    { TBUFFER_LOAD_FORMAT_X_IDXEN_exact, 103 },
    { TBUFFER_LOAD_FORMAT_X_OFFEN, 104 },
    { TBUFFER_LOAD_FORMAT_X_OFFEN_exact, 105 },
    { TBUFFER_LOAD_FORMAT_X_OFFSET, 106 },
    { TBUFFER_LOAD_FORMAT_X_OFFSET_exact, 107 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_ADDR64, 108 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_BOTHEN, 109 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_BOTHEN_exact, 110 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_IDXEN, 111 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_IDXEN_exact, 112 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_OFFEN, 113 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_OFFEN_exact, 114 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_OFFSET, 115 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_OFFSET_exact, 116 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_ADDR64, 117 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN, 118 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, 119 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN, 120 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN_exact, 121 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN, 122 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN_exact, 123 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET, 124 },
    { TBUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET_exact, 125 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_ADDR64, 126 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_BOTHEN, 127 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_BOTHEN_exact, 128 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_IDXEN, 129 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_IDXEN_exact, 130 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_OFFEN, 131 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_OFFEN_exact, 132 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_OFFSET, 133 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_OFFSET_exact, 134 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_ADDR64, 135 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN, 136 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, 137 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN, 138 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN_exact, 139 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN, 140 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN_exact, 141 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET, 142 },
    { TBUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET_exact, 143 },
    { TBUFFER_STORE_FORMAT_D16_XY_ADDR64, 144 },
    { TBUFFER_STORE_FORMAT_D16_XY_BOTHEN, 145 },
    { TBUFFER_STORE_FORMAT_D16_XY_BOTHEN_exact, 146 },
    { TBUFFER_STORE_FORMAT_D16_XY_IDXEN, 147 },
    { TBUFFER_STORE_FORMAT_D16_XY_IDXEN_exact, 148 },
    { TBUFFER_STORE_FORMAT_D16_XY_OFFEN, 149 },
    { TBUFFER_STORE_FORMAT_D16_XY_OFFEN_exact, 150 },
    { TBUFFER_STORE_FORMAT_D16_XY_OFFSET, 151 },
    { TBUFFER_STORE_FORMAT_D16_XY_OFFSET_exact, 152 },
    { TBUFFER_STORE_FORMAT_D16_XY_gfx80_ADDR64, 153 },
    { TBUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN, 154 },
    { TBUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN_exact, 155 },
    { TBUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN, 156 },
    { TBUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN_exact, 157 },
    { TBUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN, 158 },
    { TBUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN_exact, 159 },
    { TBUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET, 160 },
    { TBUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET_exact, 161 },
    { TBUFFER_STORE_FORMAT_D16_X_ADDR64, 162 },
    { TBUFFER_STORE_FORMAT_D16_X_BOTHEN, 163 },
    { TBUFFER_STORE_FORMAT_D16_X_BOTHEN_exact, 164 },
    { TBUFFER_STORE_FORMAT_D16_X_IDXEN, 165 },
    { TBUFFER_STORE_FORMAT_D16_X_IDXEN_exact, 166 },
    { TBUFFER_STORE_FORMAT_D16_X_OFFEN, 167 },
    { TBUFFER_STORE_FORMAT_D16_X_OFFEN_exact, 168 },
    { TBUFFER_STORE_FORMAT_D16_X_OFFSET, 169 },
    { TBUFFER_STORE_FORMAT_D16_X_OFFSET_exact, 170 },
    { TBUFFER_STORE_FORMAT_D16_X_gfx80_ADDR64, 171 },
    { TBUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN, 172 },
    { TBUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN_exact, 173 },
    { TBUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN, 174 },
    { TBUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN_exact, 175 },
    { TBUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN, 176 },
    { TBUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN_exact, 177 },
    { TBUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET, 178 },
    { TBUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET_exact, 179 },
    { TBUFFER_STORE_FORMAT_XYZW_ADDR64, 180 },
    { TBUFFER_STORE_FORMAT_XYZW_BOTHEN, 181 },
    { TBUFFER_STORE_FORMAT_XYZW_BOTHEN_exact, 182 },
    { TBUFFER_STORE_FORMAT_XYZW_IDXEN, 183 },
    { TBUFFER_STORE_FORMAT_XYZW_IDXEN_exact, 184 },
    { TBUFFER_STORE_FORMAT_XYZW_OFFEN, 185 },
    { TBUFFER_STORE_FORMAT_XYZW_OFFEN_exact, 186 },
    { TBUFFER_STORE_FORMAT_XYZW_OFFSET, 187 },
    { TBUFFER_STORE_FORMAT_XYZW_OFFSET_exact, 188 },
    { TBUFFER_STORE_FORMAT_XYZ_ADDR64, 189 },
    { TBUFFER_STORE_FORMAT_XYZ_BOTHEN, 190 },
    { TBUFFER_STORE_FORMAT_XYZ_BOTHEN_exact, 191 },
    { TBUFFER_STORE_FORMAT_XYZ_IDXEN, 192 },
    { TBUFFER_STORE_FORMAT_XYZ_IDXEN_exact, 193 },
    { TBUFFER_STORE_FORMAT_XYZ_OFFEN, 194 },
    { TBUFFER_STORE_FORMAT_XYZ_OFFEN_exact, 195 },
    { TBUFFER_STORE_FORMAT_XYZ_OFFSET, 196 },
    { TBUFFER_STORE_FORMAT_XYZ_OFFSET_exact, 197 },
    { TBUFFER_STORE_FORMAT_XY_ADDR64, 198 },
    { TBUFFER_STORE_FORMAT_XY_BOTHEN, 199 },
    { TBUFFER_STORE_FORMAT_XY_BOTHEN_exact, 200 },
    { TBUFFER_STORE_FORMAT_XY_IDXEN, 201 },
    { TBUFFER_STORE_FORMAT_XY_IDXEN_exact, 202 },
    { TBUFFER_STORE_FORMAT_XY_OFFEN, 203 },
    { TBUFFER_STORE_FORMAT_XY_OFFEN_exact, 204 },
    { TBUFFER_STORE_FORMAT_XY_OFFSET, 205 },
    { TBUFFER_STORE_FORMAT_XY_OFFSET_exact, 206 },
    { TBUFFER_STORE_FORMAT_X_ADDR64, 207 },
    { TBUFFER_STORE_FORMAT_X_BOTHEN, 208 },
    { TBUFFER_STORE_FORMAT_X_BOTHEN_exact, 209 },
    { TBUFFER_STORE_FORMAT_X_IDXEN, 210 },
    { TBUFFER_STORE_FORMAT_X_IDXEN_exact, 211 },
    { TBUFFER_STORE_FORMAT_X_OFFEN, 212 },
    { TBUFFER_STORE_FORMAT_X_OFFEN_exact, 213 },
    { TBUFFER_STORE_FORMAT_X_OFFSET, 214 },
    { TBUFFER_STORE_FORMAT_X_OFFSET_exact, 215 },
  };

  struct KeyType {
    unsigned Opcode;
  };
  KeyType Key = { Opcode };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.Opcode < RHS.Opcode)
        return true;
      if (LHS.Opcode > RHS.Opcode)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Opcode != Idx->Opcode)
    return nullptr;
  return &MTBUFInfoTable[Idx->_index];
}
#endif

#ifdef GET_MUBUFInfoTable_DECL
const MUBUFInfo *getMUBUFOpcodeHelper(unsigned Opcode);
const MUBUFInfo *getMUBUFInfoFromBaseOpcodeAndElements(unsigned BaseOpcode, uint8_t elements);
const MUBUFInfo *getMUBUFInfoFromOpcode(unsigned Opcode);
#endif

#ifdef GET_MUBUFInfoTable_IMPL
constexpr MUBUFInfo MUBUFInfoTable[] = {
  { BUFFER_ATOMIC_ADD_ADDR64, BUFFER_ATOMIC_ADD_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 0
  { BUFFER_ATOMIC_ADD_ADDR64_RTN, BUFFER_ATOMIC_ADD_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 1
  { BUFFER_ATOMIC_ADD_BOTHEN, BUFFER_ATOMIC_ADD_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 2
  { BUFFER_ATOMIC_ADD_BOTHEN_RTN, BUFFER_ATOMIC_ADD_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 3
  { BUFFER_ATOMIC_ADD_F32_ADDR64, BUFFER_ATOMIC_ADD_F32_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 4
  { BUFFER_ATOMIC_ADD_F32_BOTHEN, BUFFER_ATOMIC_ADD_F32_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 5
  { BUFFER_ATOMIC_ADD_F32_IDXEN, BUFFER_ATOMIC_ADD_F32_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 6
  { BUFFER_ATOMIC_ADD_F32_OFFEN, BUFFER_ATOMIC_ADD_F32_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 7
  { BUFFER_ATOMIC_ADD_F32_OFFSET, BUFFER_ATOMIC_ADD_F32_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 8
  { BUFFER_ATOMIC_ADD_IDXEN, BUFFER_ATOMIC_ADD_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 9
  { BUFFER_ATOMIC_ADD_IDXEN_RTN, BUFFER_ATOMIC_ADD_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 10
  { BUFFER_ATOMIC_ADD_OFFEN, BUFFER_ATOMIC_ADD_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 11
  { BUFFER_ATOMIC_ADD_OFFEN_RTN, BUFFER_ATOMIC_ADD_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 12
  { BUFFER_ATOMIC_ADD_OFFSET, BUFFER_ATOMIC_ADD_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 13
  { BUFFER_ATOMIC_ADD_OFFSET_RTN, BUFFER_ATOMIC_ADD_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 14
  { BUFFER_ATOMIC_ADD_X2_ADDR64, BUFFER_ATOMIC_ADD_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 15
  { BUFFER_ATOMIC_ADD_X2_ADDR64_RTN, BUFFER_ATOMIC_ADD_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 16
  { BUFFER_ATOMIC_ADD_X2_BOTHEN, BUFFER_ATOMIC_ADD_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 17
  { BUFFER_ATOMIC_ADD_X2_BOTHEN_RTN, BUFFER_ATOMIC_ADD_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 18
  { BUFFER_ATOMIC_ADD_X2_IDXEN, BUFFER_ATOMIC_ADD_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 19
  { BUFFER_ATOMIC_ADD_X2_IDXEN_RTN, BUFFER_ATOMIC_ADD_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 20
  { BUFFER_ATOMIC_ADD_X2_OFFEN, BUFFER_ATOMIC_ADD_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 21
  { BUFFER_ATOMIC_ADD_X2_OFFEN_RTN, BUFFER_ATOMIC_ADD_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 22
  { BUFFER_ATOMIC_ADD_X2_OFFSET, BUFFER_ATOMIC_ADD_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 23
  { BUFFER_ATOMIC_ADD_X2_OFFSET_RTN, BUFFER_ATOMIC_ADD_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 24
  { BUFFER_ATOMIC_AND_ADDR64, BUFFER_ATOMIC_AND_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 25
  { BUFFER_ATOMIC_AND_ADDR64_RTN, BUFFER_ATOMIC_AND_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 26
  { BUFFER_ATOMIC_AND_BOTHEN, BUFFER_ATOMIC_AND_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 27
  { BUFFER_ATOMIC_AND_BOTHEN_RTN, BUFFER_ATOMIC_AND_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 28
  { BUFFER_ATOMIC_AND_IDXEN, BUFFER_ATOMIC_AND_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 29
  { BUFFER_ATOMIC_AND_IDXEN_RTN, BUFFER_ATOMIC_AND_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 30
  { BUFFER_ATOMIC_AND_OFFEN, BUFFER_ATOMIC_AND_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 31
  { BUFFER_ATOMIC_AND_OFFEN_RTN, BUFFER_ATOMIC_AND_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 32
  { BUFFER_ATOMIC_AND_OFFSET, BUFFER_ATOMIC_AND_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 33
  { BUFFER_ATOMIC_AND_OFFSET_RTN, BUFFER_ATOMIC_AND_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 34
  { BUFFER_ATOMIC_AND_X2_ADDR64, BUFFER_ATOMIC_AND_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 35
  { BUFFER_ATOMIC_AND_X2_ADDR64_RTN, BUFFER_ATOMIC_AND_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 36
  { BUFFER_ATOMIC_AND_X2_BOTHEN, BUFFER_ATOMIC_AND_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 37
  { BUFFER_ATOMIC_AND_X2_BOTHEN_RTN, BUFFER_ATOMIC_AND_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 38
  { BUFFER_ATOMIC_AND_X2_IDXEN, BUFFER_ATOMIC_AND_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 39
  { BUFFER_ATOMIC_AND_X2_IDXEN_RTN, BUFFER_ATOMIC_AND_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 40
  { BUFFER_ATOMIC_AND_X2_OFFEN, BUFFER_ATOMIC_AND_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 41
  { BUFFER_ATOMIC_AND_X2_OFFEN_RTN, BUFFER_ATOMIC_AND_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 42
  { BUFFER_ATOMIC_AND_X2_OFFSET, BUFFER_ATOMIC_AND_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 43
  { BUFFER_ATOMIC_AND_X2_OFFSET_RTN, BUFFER_ATOMIC_AND_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 44
  { BUFFER_ATOMIC_CMPSWAP_ADDR64, BUFFER_ATOMIC_CMPSWAP_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 45
  { BUFFER_ATOMIC_CMPSWAP_ADDR64_RTN, BUFFER_ATOMIC_CMPSWAP_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 46
  { BUFFER_ATOMIC_CMPSWAP_BOTHEN, BUFFER_ATOMIC_CMPSWAP_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 47
  { BUFFER_ATOMIC_CMPSWAP_BOTHEN_RTN, BUFFER_ATOMIC_CMPSWAP_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 48
  { BUFFER_ATOMIC_CMPSWAP_IDXEN, BUFFER_ATOMIC_CMPSWAP_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 49
  { BUFFER_ATOMIC_CMPSWAP_IDXEN_RTN, BUFFER_ATOMIC_CMPSWAP_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 50
  { BUFFER_ATOMIC_CMPSWAP_OFFEN, BUFFER_ATOMIC_CMPSWAP_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 51
  { BUFFER_ATOMIC_CMPSWAP_OFFEN_RTN, BUFFER_ATOMIC_CMPSWAP_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 52
  { BUFFER_ATOMIC_CMPSWAP_OFFSET, BUFFER_ATOMIC_CMPSWAP_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 53
  { BUFFER_ATOMIC_CMPSWAP_OFFSET_RTN, BUFFER_ATOMIC_CMPSWAP_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 54
  { BUFFER_ATOMIC_CMPSWAP_X2_ADDR64, BUFFER_ATOMIC_CMPSWAP_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 55
  { BUFFER_ATOMIC_CMPSWAP_X2_ADDR64_RTN, BUFFER_ATOMIC_CMPSWAP_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 56
  { BUFFER_ATOMIC_CMPSWAP_X2_BOTHEN, BUFFER_ATOMIC_CMPSWAP_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 57
  { BUFFER_ATOMIC_CMPSWAP_X2_BOTHEN_RTN, BUFFER_ATOMIC_CMPSWAP_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 58
  { BUFFER_ATOMIC_CMPSWAP_X2_IDXEN, BUFFER_ATOMIC_CMPSWAP_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 59
  { BUFFER_ATOMIC_CMPSWAP_X2_IDXEN_RTN, BUFFER_ATOMIC_CMPSWAP_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 60
  { BUFFER_ATOMIC_CMPSWAP_X2_OFFEN, BUFFER_ATOMIC_CMPSWAP_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 61
  { BUFFER_ATOMIC_CMPSWAP_X2_OFFEN_RTN, BUFFER_ATOMIC_CMPSWAP_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 62
  { BUFFER_ATOMIC_CMPSWAP_X2_OFFSET, BUFFER_ATOMIC_CMPSWAP_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 63
  { BUFFER_ATOMIC_CMPSWAP_X2_OFFSET_RTN, BUFFER_ATOMIC_CMPSWAP_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 64
  { BUFFER_ATOMIC_DEC_ADDR64, BUFFER_ATOMIC_DEC_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 65
  { BUFFER_ATOMIC_DEC_ADDR64_RTN, BUFFER_ATOMIC_DEC_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 66
  { BUFFER_ATOMIC_DEC_BOTHEN, BUFFER_ATOMIC_DEC_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 67
  { BUFFER_ATOMIC_DEC_BOTHEN_RTN, BUFFER_ATOMIC_DEC_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 68
  { BUFFER_ATOMIC_DEC_IDXEN, BUFFER_ATOMIC_DEC_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 69
  { BUFFER_ATOMIC_DEC_IDXEN_RTN, BUFFER_ATOMIC_DEC_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 70
  { BUFFER_ATOMIC_DEC_OFFEN, BUFFER_ATOMIC_DEC_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 71
  { BUFFER_ATOMIC_DEC_OFFEN_RTN, BUFFER_ATOMIC_DEC_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 72
  { BUFFER_ATOMIC_DEC_OFFSET, BUFFER_ATOMIC_DEC_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 73
  { BUFFER_ATOMIC_DEC_OFFSET_RTN, BUFFER_ATOMIC_DEC_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 74
  { BUFFER_ATOMIC_DEC_X2_ADDR64, BUFFER_ATOMIC_DEC_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 75
  { BUFFER_ATOMIC_DEC_X2_ADDR64_RTN, BUFFER_ATOMIC_DEC_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 76
  { BUFFER_ATOMIC_DEC_X2_BOTHEN, BUFFER_ATOMIC_DEC_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 77
  { BUFFER_ATOMIC_DEC_X2_BOTHEN_RTN, BUFFER_ATOMIC_DEC_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 78
  { BUFFER_ATOMIC_DEC_X2_IDXEN, BUFFER_ATOMIC_DEC_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 79
  { BUFFER_ATOMIC_DEC_X2_IDXEN_RTN, BUFFER_ATOMIC_DEC_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 80
  { BUFFER_ATOMIC_DEC_X2_OFFEN, BUFFER_ATOMIC_DEC_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 81
  { BUFFER_ATOMIC_DEC_X2_OFFEN_RTN, BUFFER_ATOMIC_DEC_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 82
  { BUFFER_ATOMIC_DEC_X2_OFFSET, BUFFER_ATOMIC_DEC_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 83
  { BUFFER_ATOMIC_DEC_X2_OFFSET_RTN, BUFFER_ATOMIC_DEC_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 84
  { BUFFER_ATOMIC_FCMPSWAP_ADDR64, BUFFER_ATOMIC_FCMPSWAP_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 85
  { BUFFER_ATOMIC_FCMPSWAP_ADDR64_RTN, BUFFER_ATOMIC_FCMPSWAP_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 86
  { BUFFER_ATOMIC_FCMPSWAP_BOTHEN, BUFFER_ATOMIC_FCMPSWAP_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 87
  { BUFFER_ATOMIC_FCMPSWAP_BOTHEN_RTN, BUFFER_ATOMIC_FCMPSWAP_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 88
  { BUFFER_ATOMIC_FCMPSWAP_IDXEN, BUFFER_ATOMIC_FCMPSWAP_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 89
  { BUFFER_ATOMIC_FCMPSWAP_IDXEN_RTN, BUFFER_ATOMIC_FCMPSWAP_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 90
  { BUFFER_ATOMIC_FCMPSWAP_OFFEN, BUFFER_ATOMIC_FCMPSWAP_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 91
  { BUFFER_ATOMIC_FCMPSWAP_OFFEN_RTN, BUFFER_ATOMIC_FCMPSWAP_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 92
  { BUFFER_ATOMIC_FCMPSWAP_OFFSET, BUFFER_ATOMIC_FCMPSWAP_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 93
  { BUFFER_ATOMIC_FCMPSWAP_OFFSET_RTN, BUFFER_ATOMIC_FCMPSWAP_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 94
  { BUFFER_ATOMIC_FCMPSWAP_X2_ADDR64, BUFFER_ATOMIC_FCMPSWAP_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 95
  { BUFFER_ATOMIC_FCMPSWAP_X2_ADDR64_RTN, BUFFER_ATOMIC_FCMPSWAP_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 96
  { BUFFER_ATOMIC_FCMPSWAP_X2_BOTHEN, BUFFER_ATOMIC_FCMPSWAP_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 97
  { BUFFER_ATOMIC_FCMPSWAP_X2_BOTHEN_RTN, BUFFER_ATOMIC_FCMPSWAP_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 98
  { BUFFER_ATOMIC_FCMPSWAP_X2_IDXEN, BUFFER_ATOMIC_FCMPSWAP_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 99
  { BUFFER_ATOMIC_FCMPSWAP_X2_IDXEN_RTN, BUFFER_ATOMIC_FCMPSWAP_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 100
  { BUFFER_ATOMIC_FCMPSWAP_X2_OFFEN, BUFFER_ATOMIC_FCMPSWAP_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 101
  { BUFFER_ATOMIC_FCMPSWAP_X2_OFFEN_RTN, BUFFER_ATOMIC_FCMPSWAP_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 102
  { BUFFER_ATOMIC_FCMPSWAP_X2_OFFSET, BUFFER_ATOMIC_FCMPSWAP_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 103
  { BUFFER_ATOMIC_FCMPSWAP_X2_OFFSET_RTN, BUFFER_ATOMIC_FCMPSWAP_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 104
  { BUFFER_ATOMIC_FMAX_ADDR64, BUFFER_ATOMIC_FMAX_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 105
  { BUFFER_ATOMIC_FMAX_ADDR64_RTN, BUFFER_ATOMIC_FMAX_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 106
  { BUFFER_ATOMIC_FMAX_BOTHEN, BUFFER_ATOMIC_FMAX_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 107
  { BUFFER_ATOMIC_FMAX_BOTHEN_RTN, BUFFER_ATOMIC_FMAX_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 108
  { BUFFER_ATOMIC_FMAX_IDXEN, BUFFER_ATOMIC_FMAX_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 109
  { BUFFER_ATOMIC_FMAX_IDXEN_RTN, BUFFER_ATOMIC_FMAX_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 110
  { BUFFER_ATOMIC_FMAX_OFFEN, BUFFER_ATOMIC_FMAX_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 111
  { BUFFER_ATOMIC_FMAX_OFFEN_RTN, BUFFER_ATOMIC_FMAX_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 112
  { BUFFER_ATOMIC_FMAX_OFFSET, BUFFER_ATOMIC_FMAX_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 113
  { BUFFER_ATOMIC_FMAX_OFFSET_RTN, BUFFER_ATOMIC_FMAX_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 114
  { BUFFER_ATOMIC_FMAX_X2_ADDR64, BUFFER_ATOMIC_FMAX_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 115
  { BUFFER_ATOMIC_FMAX_X2_ADDR64_RTN, BUFFER_ATOMIC_FMAX_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 116
  { BUFFER_ATOMIC_FMAX_X2_BOTHEN, BUFFER_ATOMIC_FMAX_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 117
  { BUFFER_ATOMIC_FMAX_X2_BOTHEN_RTN, BUFFER_ATOMIC_FMAX_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 118
  { BUFFER_ATOMIC_FMAX_X2_IDXEN, BUFFER_ATOMIC_FMAX_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 119
  { BUFFER_ATOMIC_FMAX_X2_IDXEN_RTN, BUFFER_ATOMIC_FMAX_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 120
  { BUFFER_ATOMIC_FMAX_X2_OFFEN, BUFFER_ATOMIC_FMAX_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 121
  { BUFFER_ATOMIC_FMAX_X2_OFFEN_RTN, BUFFER_ATOMIC_FMAX_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 122
  { BUFFER_ATOMIC_FMAX_X2_OFFSET, BUFFER_ATOMIC_FMAX_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 123
  { BUFFER_ATOMIC_FMAX_X2_OFFSET_RTN, BUFFER_ATOMIC_FMAX_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 124
  { BUFFER_ATOMIC_FMIN_ADDR64, BUFFER_ATOMIC_FMIN_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 125
  { BUFFER_ATOMIC_FMIN_ADDR64_RTN, BUFFER_ATOMIC_FMIN_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 126
  { BUFFER_ATOMIC_FMIN_BOTHEN, BUFFER_ATOMIC_FMIN_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 127
  { BUFFER_ATOMIC_FMIN_BOTHEN_RTN, BUFFER_ATOMIC_FMIN_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 128
  { BUFFER_ATOMIC_FMIN_IDXEN, BUFFER_ATOMIC_FMIN_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 129
  { BUFFER_ATOMIC_FMIN_IDXEN_RTN, BUFFER_ATOMIC_FMIN_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 130
  { BUFFER_ATOMIC_FMIN_OFFEN, BUFFER_ATOMIC_FMIN_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 131
  { BUFFER_ATOMIC_FMIN_OFFEN_RTN, BUFFER_ATOMIC_FMIN_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 132
  { BUFFER_ATOMIC_FMIN_OFFSET, BUFFER_ATOMIC_FMIN_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 133
  { BUFFER_ATOMIC_FMIN_OFFSET_RTN, BUFFER_ATOMIC_FMIN_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 134
  { BUFFER_ATOMIC_FMIN_X2_ADDR64, BUFFER_ATOMIC_FMIN_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 135
  { BUFFER_ATOMIC_FMIN_X2_ADDR64_RTN, BUFFER_ATOMIC_FMIN_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 136
  { BUFFER_ATOMIC_FMIN_X2_BOTHEN, BUFFER_ATOMIC_FMIN_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 137
  { BUFFER_ATOMIC_FMIN_X2_BOTHEN_RTN, BUFFER_ATOMIC_FMIN_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 138
  { BUFFER_ATOMIC_FMIN_X2_IDXEN, BUFFER_ATOMIC_FMIN_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 139
  { BUFFER_ATOMIC_FMIN_X2_IDXEN_RTN, BUFFER_ATOMIC_FMIN_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 140
  { BUFFER_ATOMIC_FMIN_X2_OFFEN, BUFFER_ATOMIC_FMIN_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 141
  { BUFFER_ATOMIC_FMIN_X2_OFFEN_RTN, BUFFER_ATOMIC_FMIN_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 142
  { BUFFER_ATOMIC_FMIN_X2_OFFSET, BUFFER_ATOMIC_FMIN_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 143
  { BUFFER_ATOMIC_FMIN_X2_OFFSET_RTN, BUFFER_ATOMIC_FMIN_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 144
  { BUFFER_ATOMIC_INC_ADDR64, BUFFER_ATOMIC_INC_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 145
  { BUFFER_ATOMIC_INC_ADDR64_RTN, BUFFER_ATOMIC_INC_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 146
  { BUFFER_ATOMIC_INC_BOTHEN, BUFFER_ATOMIC_INC_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 147
  { BUFFER_ATOMIC_INC_BOTHEN_RTN, BUFFER_ATOMIC_INC_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 148
  { BUFFER_ATOMIC_INC_IDXEN, BUFFER_ATOMIC_INC_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 149
  { BUFFER_ATOMIC_INC_IDXEN_RTN, BUFFER_ATOMIC_INC_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 150
  { BUFFER_ATOMIC_INC_OFFEN, BUFFER_ATOMIC_INC_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 151
  { BUFFER_ATOMIC_INC_OFFEN_RTN, BUFFER_ATOMIC_INC_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 152
  { BUFFER_ATOMIC_INC_OFFSET, BUFFER_ATOMIC_INC_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 153
  { BUFFER_ATOMIC_INC_OFFSET_RTN, BUFFER_ATOMIC_INC_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 154
  { BUFFER_ATOMIC_INC_X2_ADDR64, BUFFER_ATOMIC_INC_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 155
  { BUFFER_ATOMIC_INC_X2_ADDR64_RTN, BUFFER_ATOMIC_INC_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 156
  { BUFFER_ATOMIC_INC_X2_BOTHEN, BUFFER_ATOMIC_INC_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 157
  { BUFFER_ATOMIC_INC_X2_BOTHEN_RTN, BUFFER_ATOMIC_INC_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 158
  { BUFFER_ATOMIC_INC_X2_IDXEN, BUFFER_ATOMIC_INC_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 159
  { BUFFER_ATOMIC_INC_X2_IDXEN_RTN, BUFFER_ATOMIC_INC_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 160
  { BUFFER_ATOMIC_INC_X2_OFFEN, BUFFER_ATOMIC_INC_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 161
  { BUFFER_ATOMIC_INC_X2_OFFEN_RTN, BUFFER_ATOMIC_INC_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 162
  { BUFFER_ATOMIC_INC_X2_OFFSET, BUFFER_ATOMIC_INC_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 163
  { BUFFER_ATOMIC_INC_X2_OFFSET_RTN, BUFFER_ATOMIC_INC_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 164
  { BUFFER_ATOMIC_OR_ADDR64, BUFFER_ATOMIC_OR_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 165
  { BUFFER_ATOMIC_OR_ADDR64_RTN, BUFFER_ATOMIC_OR_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 166
  { BUFFER_ATOMIC_OR_BOTHEN, BUFFER_ATOMIC_OR_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 167
  { BUFFER_ATOMIC_OR_BOTHEN_RTN, BUFFER_ATOMIC_OR_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 168
  { BUFFER_ATOMIC_OR_IDXEN, BUFFER_ATOMIC_OR_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 169
  { BUFFER_ATOMIC_OR_IDXEN_RTN, BUFFER_ATOMIC_OR_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 170
  { BUFFER_ATOMIC_OR_OFFEN, BUFFER_ATOMIC_OR_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 171
  { BUFFER_ATOMIC_OR_OFFEN_RTN, BUFFER_ATOMIC_OR_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 172
  { BUFFER_ATOMIC_OR_OFFSET, BUFFER_ATOMIC_OR_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 173
  { BUFFER_ATOMIC_OR_OFFSET_RTN, BUFFER_ATOMIC_OR_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 174
  { BUFFER_ATOMIC_OR_X2_ADDR64, BUFFER_ATOMIC_OR_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 175
  { BUFFER_ATOMIC_OR_X2_ADDR64_RTN, BUFFER_ATOMIC_OR_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 176
  { BUFFER_ATOMIC_OR_X2_BOTHEN, BUFFER_ATOMIC_OR_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 177
  { BUFFER_ATOMIC_OR_X2_BOTHEN_RTN, BUFFER_ATOMIC_OR_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 178
  { BUFFER_ATOMIC_OR_X2_IDXEN, BUFFER_ATOMIC_OR_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 179
  { BUFFER_ATOMIC_OR_X2_IDXEN_RTN, BUFFER_ATOMIC_OR_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 180
  { BUFFER_ATOMIC_OR_X2_OFFEN, BUFFER_ATOMIC_OR_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 181
  { BUFFER_ATOMIC_OR_X2_OFFEN_RTN, BUFFER_ATOMIC_OR_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 182
  { BUFFER_ATOMIC_OR_X2_OFFSET, BUFFER_ATOMIC_OR_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 183
  { BUFFER_ATOMIC_OR_X2_OFFSET_RTN, BUFFER_ATOMIC_OR_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 184
  { BUFFER_ATOMIC_PK_ADD_F16_ADDR64, BUFFER_ATOMIC_PK_ADD_F16_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 185
  { BUFFER_ATOMIC_PK_ADD_F16_BOTHEN, BUFFER_ATOMIC_PK_ADD_F16_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 186
  { BUFFER_ATOMIC_PK_ADD_F16_IDXEN, BUFFER_ATOMIC_PK_ADD_F16_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 187
  { BUFFER_ATOMIC_PK_ADD_F16_OFFEN, BUFFER_ATOMIC_PK_ADD_F16_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 188
  { BUFFER_ATOMIC_PK_ADD_F16_OFFSET, BUFFER_ATOMIC_PK_ADD_F16_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 189
  { BUFFER_ATOMIC_SMAX_ADDR64, BUFFER_ATOMIC_SMAX_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 190
  { BUFFER_ATOMIC_SMAX_ADDR64_RTN, BUFFER_ATOMIC_SMAX_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 191
  { BUFFER_ATOMIC_SMAX_BOTHEN, BUFFER_ATOMIC_SMAX_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 192
  { BUFFER_ATOMIC_SMAX_BOTHEN_RTN, BUFFER_ATOMIC_SMAX_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 193
  { BUFFER_ATOMIC_SMAX_IDXEN, BUFFER_ATOMIC_SMAX_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 194
  { BUFFER_ATOMIC_SMAX_IDXEN_RTN, BUFFER_ATOMIC_SMAX_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 195
  { BUFFER_ATOMIC_SMAX_OFFEN, BUFFER_ATOMIC_SMAX_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 196
  { BUFFER_ATOMIC_SMAX_OFFEN_RTN, BUFFER_ATOMIC_SMAX_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 197
  { BUFFER_ATOMIC_SMAX_OFFSET, BUFFER_ATOMIC_SMAX_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 198
  { BUFFER_ATOMIC_SMAX_OFFSET_RTN, BUFFER_ATOMIC_SMAX_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 199
  { BUFFER_ATOMIC_SMAX_X2_ADDR64, BUFFER_ATOMIC_SMAX_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 200
  { BUFFER_ATOMIC_SMAX_X2_ADDR64_RTN, BUFFER_ATOMIC_SMAX_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 201
  { BUFFER_ATOMIC_SMAX_X2_BOTHEN, BUFFER_ATOMIC_SMAX_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 202
  { BUFFER_ATOMIC_SMAX_X2_BOTHEN_RTN, BUFFER_ATOMIC_SMAX_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 203
  { BUFFER_ATOMIC_SMAX_X2_IDXEN, BUFFER_ATOMIC_SMAX_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 204
  { BUFFER_ATOMIC_SMAX_X2_IDXEN_RTN, BUFFER_ATOMIC_SMAX_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 205
  { BUFFER_ATOMIC_SMAX_X2_OFFEN, BUFFER_ATOMIC_SMAX_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 206
  { BUFFER_ATOMIC_SMAX_X2_OFFEN_RTN, BUFFER_ATOMIC_SMAX_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 207
  { BUFFER_ATOMIC_SMAX_X2_OFFSET, BUFFER_ATOMIC_SMAX_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 208
  { BUFFER_ATOMIC_SMAX_X2_OFFSET_RTN, BUFFER_ATOMIC_SMAX_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 209
  { BUFFER_ATOMIC_SMIN_ADDR64, BUFFER_ATOMIC_SMIN_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 210
  { BUFFER_ATOMIC_SMIN_ADDR64_RTN, BUFFER_ATOMIC_SMIN_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 211
  { BUFFER_ATOMIC_SMIN_BOTHEN, BUFFER_ATOMIC_SMIN_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 212
  { BUFFER_ATOMIC_SMIN_BOTHEN_RTN, BUFFER_ATOMIC_SMIN_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 213
  { BUFFER_ATOMIC_SMIN_IDXEN, BUFFER_ATOMIC_SMIN_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 214
  { BUFFER_ATOMIC_SMIN_IDXEN_RTN, BUFFER_ATOMIC_SMIN_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 215
  { BUFFER_ATOMIC_SMIN_OFFEN, BUFFER_ATOMIC_SMIN_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 216
  { BUFFER_ATOMIC_SMIN_OFFEN_RTN, BUFFER_ATOMIC_SMIN_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 217
  { BUFFER_ATOMIC_SMIN_OFFSET, BUFFER_ATOMIC_SMIN_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 218
  { BUFFER_ATOMIC_SMIN_OFFSET_RTN, BUFFER_ATOMIC_SMIN_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 219
  { BUFFER_ATOMIC_SMIN_X2_ADDR64, BUFFER_ATOMIC_SMIN_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 220
  { BUFFER_ATOMIC_SMIN_X2_ADDR64_RTN, BUFFER_ATOMIC_SMIN_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 221
  { BUFFER_ATOMIC_SMIN_X2_BOTHEN, BUFFER_ATOMIC_SMIN_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 222
  { BUFFER_ATOMIC_SMIN_X2_BOTHEN_RTN, BUFFER_ATOMIC_SMIN_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 223
  { BUFFER_ATOMIC_SMIN_X2_IDXEN, BUFFER_ATOMIC_SMIN_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 224
  { BUFFER_ATOMIC_SMIN_X2_IDXEN_RTN, BUFFER_ATOMIC_SMIN_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 225
  { BUFFER_ATOMIC_SMIN_X2_OFFEN, BUFFER_ATOMIC_SMIN_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 226
  { BUFFER_ATOMIC_SMIN_X2_OFFEN_RTN, BUFFER_ATOMIC_SMIN_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 227
  { BUFFER_ATOMIC_SMIN_X2_OFFSET, BUFFER_ATOMIC_SMIN_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 228
  { BUFFER_ATOMIC_SMIN_X2_OFFSET_RTN, BUFFER_ATOMIC_SMIN_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 229
  { BUFFER_ATOMIC_SUB_ADDR64, BUFFER_ATOMIC_SUB_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 230
  { BUFFER_ATOMIC_SUB_ADDR64_RTN, BUFFER_ATOMIC_SUB_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 231
  { BUFFER_ATOMIC_SUB_BOTHEN, BUFFER_ATOMIC_SUB_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 232
  { BUFFER_ATOMIC_SUB_BOTHEN_RTN, BUFFER_ATOMIC_SUB_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 233
  { BUFFER_ATOMIC_SUB_IDXEN, BUFFER_ATOMIC_SUB_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 234
  { BUFFER_ATOMIC_SUB_IDXEN_RTN, BUFFER_ATOMIC_SUB_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 235
  { BUFFER_ATOMIC_SUB_OFFEN, BUFFER_ATOMIC_SUB_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 236
  { BUFFER_ATOMIC_SUB_OFFEN_RTN, BUFFER_ATOMIC_SUB_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 237
  { BUFFER_ATOMIC_SUB_OFFSET, BUFFER_ATOMIC_SUB_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 238
  { BUFFER_ATOMIC_SUB_OFFSET_RTN, BUFFER_ATOMIC_SUB_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 239
  { BUFFER_ATOMIC_SUB_X2_ADDR64, BUFFER_ATOMIC_SUB_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 240
  { BUFFER_ATOMIC_SUB_X2_ADDR64_RTN, BUFFER_ATOMIC_SUB_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 241
  { BUFFER_ATOMIC_SUB_X2_BOTHEN, BUFFER_ATOMIC_SUB_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 242
  { BUFFER_ATOMIC_SUB_X2_BOTHEN_RTN, BUFFER_ATOMIC_SUB_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 243
  { BUFFER_ATOMIC_SUB_X2_IDXEN, BUFFER_ATOMIC_SUB_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 244
  { BUFFER_ATOMIC_SUB_X2_IDXEN_RTN, BUFFER_ATOMIC_SUB_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 245
  { BUFFER_ATOMIC_SUB_X2_OFFEN, BUFFER_ATOMIC_SUB_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 246
  { BUFFER_ATOMIC_SUB_X2_OFFEN_RTN, BUFFER_ATOMIC_SUB_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 247
  { BUFFER_ATOMIC_SUB_X2_OFFSET, BUFFER_ATOMIC_SUB_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 248
  { BUFFER_ATOMIC_SUB_X2_OFFSET_RTN, BUFFER_ATOMIC_SUB_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 249
  { BUFFER_ATOMIC_SWAP_ADDR64, BUFFER_ATOMIC_SWAP_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 250
  { BUFFER_ATOMIC_SWAP_ADDR64_RTN, BUFFER_ATOMIC_SWAP_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 251
  { BUFFER_ATOMIC_SWAP_BOTHEN, BUFFER_ATOMIC_SWAP_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 252
  { BUFFER_ATOMIC_SWAP_BOTHEN_RTN, BUFFER_ATOMIC_SWAP_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 253
  { BUFFER_ATOMIC_SWAP_IDXEN, BUFFER_ATOMIC_SWAP_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 254
  { BUFFER_ATOMIC_SWAP_IDXEN_RTN, BUFFER_ATOMIC_SWAP_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 255
  { BUFFER_ATOMIC_SWAP_OFFEN, BUFFER_ATOMIC_SWAP_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 256
  { BUFFER_ATOMIC_SWAP_OFFEN_RTN, BUFFER_ATOMIC_SWAP_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 257
  { BUFFER_ATOMIC_SWAP_OFFSET, BUFFER_ATOMIC_SWAP_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 258
  { BUFFER_ATOMIC_SWAP_OFFSET_RTN, BUFFER_ATOMIC_SWAP_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 259
  { BUFFER_ATOMIC_SWAP_X2_ADDR64, BUFFER_ATOMIC_SWAP_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 260
  { BUFFER_ATOMIC_SWAP_X2_ADDR64_RTN, BUFFER_ATOMIC_SWAP_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 261
  { BUFFER_ATOMIC_SWAP_X2_BOTHEN, BUFFER_ATOMIC_SWAP_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 262
  { BUFFER_ATOMIC_SWAP_X2_BOTHEN_RTN, BUFFER_ATOMIC_SWAP_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 263
  { BUFFER_ATOMIC_SWAP_X2_IDXEN, BUFFER_ATOMIC_SWAP_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 264
  { BUFFER_ATOMIC_SWAP_X2_IDXEN_RTN, BUFFER_ATOMIC_SWAP_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 265
  { BUFFER_ATOMIC_SWAP_X2_OFFEN, BUFFER_ATOMIC_SWAP_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 266
  { BUFFER_ATOMIC_SWAP_X2_OFFEN_RTN, BUFFER_ATOMIC_SWAP_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 267
  { BUFFER_ATOMIC_SWAP_X2_OFFSET, BUFFER_ATOMIC_SWAP_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 268
  { BUFFER_ATOMIC_SWAP_X2_OFFSET_RTN, BUFFER_ATOMIC_SWAP_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 269
  { BUFFER_ATOMIC_UMAX_ADDR64, BUFFER_ATOMIC_UMAX_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 270
  { BUFFER_ATOMIC_UMAX_ADDR64_RTN, BUFFER_ATOMIC_UMAX_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 271
  { BUFFER_ATOMIC_UMAX_BOTHEN, BUFFER_ATOMIC_UMAX_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 272
  { BUFFER_ATOMIC_UMAX_BOTHEN_RTN, BUFFER_ATOMIC_UMAX_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 273
  { BUFFER_ATOMIC_UMAX_IDXEN, BUFFER_ATOMIC_UMAX_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 274
  { BUFFER_ATOMIC_UMAX_IDXEN_RTN, BUFFER_ATOMIC_UMAX_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 275
  { BUFFER_ATOMIC_UMAX_OFFEN, BUFFER_ATOMIC_UMAX_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 276
  { BUFFER_ATOMIC_UMAX_OFFEN_RTN, BUFFER_ATOMIC_UMAX_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 277
  { BUFFER_ATOMIC_UMAX_OFFSET, BUFFER_ATOMIC_UMAX_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 278
  { BUFFER_ATOMIC_UMAX_OFFSET_RTN, BUFFER_ATOMIC_UMAX_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 279
  { BUFFER_ATOMIC_UMAX_X2_ADDR64, BUFFER_ATOMIC_UMAX_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 280
  { BUFFER_ATOMIC_UMAX_X2_ADDR64_RTN, BUFFER_ATOMIC_UMAX_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 281
  { BUFFER_ATOMIC_UMAX_X2_BOTHEN, BUFFER_ATOMIC_UMAX_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 282
  { BUFFER_ATOMIC_UMAX_X2_BOTHEN_RTN, BUFFER_ATOMIC_UMAX_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 283
  { BUFFER_ATOMIC_UMAX_X2_IDXEN, BUFFER_ATOMIC_UMAX_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 284
  { BUFFER_ATOMIC_UMAX_X2_IDXEN_RTN, BUFFER_ATOMIC_UMAX_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 285
  { BUFFER_ATOMIC_UMAX_X2_OFFEN, BUFFER_ATOMIC_UMAX_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 286
  { BUFFER_ATOMIC_UMAX_X2_OFFEN_RTN, BUFFER_ATOMIC_UMAX_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 287
  { BUFFER_ATOMIC_UMAX_X2_OFFSET, BUFFER_ATOMIC_UMAX_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 288
  { BUFFER_ATOMIC_UMAX_X2_OFFSET_RTN, BUFFER_ATOMIC_UMAX_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 289
  { BUFFER_ATOMIC_UMIN_ADDR64, BUFFER_ATOMIC_UMIN_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 290
  { BUFFER_ATOMIC_UMIN_ADDR64_RTN, BUFFER_ATOMIC_UMIN_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 291
  { BUFFER_ATOMIC_UMIN_BOTHEN, BUFFER_ATOMIC_UMIN_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 292
  { BUFFER_ATOMIC_UMIN_BOTHEN_RTN, BUFFER_ATOMIC_UMIN_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 293
  { BUFFER_ATOMIC_UMIN_IDXEN, BUFFER_ATOMIC_UMIN_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 294
  { BUFFER_ATOMIC_UMIN_IDXEN_RTN, BUFFER_ATOMIC_UMIN_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 295
  { BUFFER_ATOMIC_UMIN_OFFEN, BUFFER_ATOMIC_UMIN_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 296
  { BUFFER_ATOMIC_UMIN_OFFEN_RTN, BUFFER_ATOMIC_UMIN_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 297
  { BUFFER_ATOMIC_UMIN_OFFSET, BUFFER_ATOMIC_UMIN_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 298
  { BUFFER_ATOMIC_UMIN_OFFSET_RTN, BUFFER_ATOMIC_UMIN_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 299
  { BUFFER_ATOMIC_UMIN_X2_ADDR64, BUFFER_ATOMIC_UMIN_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 300
  { BUFFER_ATOMIC_UMIN_X2_ADDR64_RTN, BUFFER_ATOMIC_UMIN_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 301
  { BUFFER_ATOMIC_UMIN_X2_BOTHEN, BUFFER_ATOMIC_UMIN_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 302
  { BUFFER_ATOMIC_UMIN_X2_BOTHEN_RTN, BUFFER_ATOMIC_UMIN_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 303
  { BUFFER_ATOMIC_UMIN_X2_IDXEN, BUFFER_ATOMIC_UMIN_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 304
  { BUFFER_ATOMIC_UMIN_X2_IDXEN_RTN, BUFFER_ATOMIC_UMIN_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 305
  { BUFFER_ATOMIC_UMIN_X2_OFFEN, BUFFER_ATOMIC_UMIN_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 306
  { BUFFER_ATOMIC_UMIN_X2_OFFEN_RTN, BUFFER_ATOMIC_UMIN_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 307
  { BUFFER_ATOMIC_UMIN_X2_OFFSET, BUFFER_ATOMIC_UMIN_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 308
  { BUFFER_ATOMIC_UMIN_X2_OFFSET_RTN, BUFFER_ATOMIC_UMIN_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 309
  { BUFFER_ATOMIC_XOR_ADDR64, BUFFER_ATOMIC_XOR_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 310
  { BUFFER_ATOMIC_XOR_ADDR64_RTN, BUFFER_ATOMIC_XOR_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 311
  { BUFFER_ATOMIC_XOR_BOTHEN, BUFFER_ATOMIC_XOR_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 312
  { BUFFER_ATOMIC_XOR_BOTHEN_RTN, BUFFER_ATOMIC_XOR_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 313
  { BUFFER_ATOMIC_XOR_IDXEN, BUFFER_ATOMIC_XOR_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 314
  { BUFFER_ATOMIC_XOR_IDXEN_RTN, BUFFER_ATOMIC_XOR_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 315
  { BUFFER_ATOMIC_XOR_OFFEN, BUFFER_ATOMIC_XOR_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 316
  { BUFFER_ATOMIC_XOR_OFFEN_RTN, BUFFER_ATOMIC_XOR_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 317
  { BUFFER_ATOMIC_XOR_OFFSET, BUFFER_ATOMIC_XOR_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 318
  { BUFFER_ATOMIC_XOR_OFFSET_RTN, BUFFER_ATOMIC_XOR_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 319
  { BUFFER_ATOMIC_XOR_X2_ADDR64, BUFFER_ATOMIC_XOR_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 320
  { BUFFER_ATOMIC_XOR_X2_ADDR64_RTN, BUFFER_ATOMIC_XOR_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 321
  { BUFFER_ATOMIC_XOR_X2_BOTHEN, BUFFER_ATOMIC_XOR_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 322
  { BUFFER_ATOMIC_XOR_X2_BOTHEN_RTN, BUFFER_ATOMIC_XOR_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 323
  { BUFFER_ATOMIC_XOR_X2_IDXEN, BUFFER_ATOMIC_XOR_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 324
  { BUFFER_ATOMIC_XOR_X2_IDXEN_RTN, BUFFER_ATOMIC_XOR_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 325
  { BUFFER_ATOMIC_XOR_X2_OFFEN, BUFFER_ATOMIC_XOR_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 326
  { BUFFER_ATOMIC_XOR_X2_OFFEN_RTN, BUFFER_ATOMIC_XOR_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 327
  { BUFFER_ATOMIC_XOR_X2_OFFSET, BUFFER_ATOMIC_XOR_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 328
  { BUFFER_ATOMIC_XOR_X2_OFFSET_RTN, BUFFER_ATOMIC_XOR_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 329
  { BUFFER_GL0_INV, BUFFER_GL0_INV, 0x0, 0x0, 0x0, 0x0 }, // 330
  { BUFFER_GL1_INV, BUFFER_GL1_INV, 0x0, 0x0, 0x0, 0x0 }, // 331
  { BUFFER_LOAD_DWORDX2_ADDR64, BUFFER_LOAD_DWORD_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 332
  { BUFFER_LOAD_DWORDX2_BOTHEN, BUFFER_LOAD_DWORD_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 333
  { BUFFER_LOAD_DWORDX2_BOTHEN_exact, BUFFER_LOAD_DWORD_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 334
  { BUFFER_LOAD_DWORDX2_IDXEN, BUFFER_LOAD_DWORD_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 335
  { BUFFER_LOAD_DWORDX2_IDXEN_exact, BUFFER_LOAD_DWORD_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 336
  { BUFFER_LOAD_DWORDX2_LDS_ADDR64, BUFFER_LOAD_DWORD_LDS_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 337
  { BUFFER_LOAD_DWORDX2_LDS_BOTHEN, BUFFER_LOAD_DWORD_LDS_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 338
  { BUFFER_LOAD_DWORDX2_LDS_BOTHEN_exact, BUFFER_LOAD_DWORD_LDS_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 339
  { BUFFER_LOAD_DWORDX2_LDS_IDXEN, BUFFER_LOAD_DWORD_LDS_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 340
  { BUFFER_LOAD_DWORDX2_LDS_IDXEN_exact, BUFFER_LOAD_DWORD_LDS_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 341
  { BUFFER_LOAD_DWORDX2_LDS_OFFEN, BUFFER_LOAD_DWORD_LDS_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 342
  { BUFFER_LOAD_DWORDX2_LDS_OFFEN_exact, BUFFER_LOAD_DWORD_LDS_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 343
  { BUFFER_LOAD_DWORDX2_LDS_OFFSET, BUFFER_LOAD_DWORD_LDS_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 344
  { BUFFER_LOAD_DWORDX2_LDS_OFFSET_exact, BUFFER_LOAD_DWORD_LDS_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 345
  { BUFFER_LOAD_DWORDX2_OFFEN, BUFFER_LOAD_DWORD_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 346
  { BUFFER_LOAD_DWORDX2_OFFEN_exact, BUFFER_LOAD_DWORD_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 347
  { BUFFER_LOAD_DWORDX2_OFFSET, BUFFER_LOAD_DWORD_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 348
  { BUFFER_LOAD_DWORDX2_OFFSET_exact, BUFFER_LOAD_DWORD_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 349
  { BUFFER_LOAD_DWORDX3_ADDR64, BUFFER_LOAD_DWORD_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 350
  { BUFFER_LOAD_DWORDX3_BOTHEN, BUFFER_LOAD_DWORD_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 351
  { BUFFER_LOAD_DWORDX3_BOTHEN_exact, BUFFER_LOAD_DWORD_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 352
  { BUFFER_LOAD_DWORDX3_IDXEN, BUFFER_LOAD_DWORD_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 353
  { BUFFER_LOAD_DWORDX3_IDXEN_exact, BUFFER_LOAD_DWORD_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 354
  { BUFFER_LOAD_DWORDX3_LDS_ADDR64, BUFFER_LOAD_DWORD_LDS_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 355
  { BUFFER_LOAD_DWORDX3_LDS_BOTHEN, BUFFER_LOAD_DWORD_LDS_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 356
  { BUFFER_LOAD_DWORDX3_LDS_BOTHEN_exact, BUFFER_LOAD_DWORD_LDS_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 357
  { BUFFER_LOAD_DWORDX3_LDS_IDXEN, BUFFER_LOAD_DWORD_LDS_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 358
  { BUFFER_LOAD_DWORDX3_LDS_IDXEN_exact, BUFFER_LOAD_DWORD_LDS_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 359
  { BUFFER_LOAD_DWORDX3_LDS_OFFEN, BUFFER_LOAD_DWORD_LDS_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 360
  { BUFFER_LOAD_DWORDX3_LDS_OFFEN_exact, BUFFER_LOAD_DWORD_LDS_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 361
  { BUFFER_LOAD_DWORDX3_LDS_OFFSET, BUFFER_LOAD_DWORD_LDS_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 362
  { BUFFER_LOAD_DWORDX3_LDS_OFFSET_exact, BUFFER_LOAD_DWORD_LDS_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 363
  { BUFFER_LOAD_DWORDX3_OFFEN, BUFFER_LOAD_DWORD_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 364
  { BUFFER_LOAD_DWORDX3_OFFEN_exact, BUFFER_LOAD_DWORD_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 365
  { BUFFER_LOAD_DWORDX3_OFFSET, BUFFER_LOAD_DWORD_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 366
  { BUFFER_LOAD_DWORDX3_OFFSET_exact, BUFFER_LOAD_DWORD_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 367
  { BUFFER_LOAD_DWORDX4_ADDR64, BUFFER_LOAD_DWORD_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 368
  { BUFFER_LOAD_DWORDX4_BOTHEN, BUFFER_LOAD_DWORD_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 369
  { BUFFER_LOAD_DWORDX4_BOTHEN_exact, BUFFER_LOAD_DWORD_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 370
  { BUFFER_LOAD_DWORDX4_IDXEN, BUFFER_LOAD_DWORD_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 371
  { BUFFER_LOAD_DWORDX4_IDXEN_exact, BUFFER_LOAD_DWORD_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 372
  { BUFFER_LOAD_DWORDX4_LDS_ADDR64, BUFFER_LOAD_DWORD_LDS_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 373
  { BUFFER_LOAD_DWORDX4_LDS_BOTHEN, BUFFER_LOAD_DWORD_LDS_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 374
  { BUFFER_LOAD_DWORDX4_LDS_BOTHEN_exact, BUFFER_LOAD_DWORD_LDS_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 375
  { BUFFER_LOAD_DWORDX4_LDS_IDXEN, BUFFER_LOAD_DWORD_LDS_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 376
  { BUFFER_LOAD_DWORDX4_LDS_IDXEN_exact, BUFFER_LOAD_DWORD_LDS_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 377
  { BUFFER_LOAD_DWORDX4_LDS_OFFEN, BUFFER_LOAD_DWORD_LDS_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 378
  { BUFFER_LOAD_DWORDX4_LDS_OFFEN_exact, BUFFER_LOAD_DWORD_LDS_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 379
  { BUFFER_LOAD_DWORDX4_LDS_OFFSET, BUFFER_LOAD_DWORD_LDS_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 380
  { BUFFER_LOAD_DWORDX4_LDS_OFFSET_exact, BUFFER_LOAD_DWORD_LDS_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 381
  { BUFFER_LOAD_DWORDX4_OFFEN, BUFFER_LOAD_DWORD_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 382
  { BUFFER_LOAD_DWORDX4_OFFEN_exact, BUFFER_LOAD_DWORD_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 383
  { BUFFER_LOAD_DWORDX4_OFFSET, BUFFER_LOAD_DWORD_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 384
  { BUFFER_LOAD_DWORDX4_OFFSET_exact, BUFFER_LOAD_DWORD_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 385
  { BUFFER_LOAD_DWORD_ADDR64, BUFFER_LOAD_DWORD_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 386
  { BUFFER_LOAD_DWORD_BOTHEN, BUFFER_LOAD_DWORD_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 387
  { BUFFER_LOAD_DWORD_BOTHEN_exact, BUFFER_LOAD_DWORD_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 388
  { BUFFER_LOAD_DWORD_IDXEN, BUFFER_LOAD_DWORD_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 389
  { BUFFER_LOAD_DWORD_IDXEN_exact, BUFFER_LOAD_DWORD_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 390
  { BUFFER_LOAD_DWORD_LDS_ADDR64, BUFFER_LOAD_DWORD_LDS_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 391
  { BUFFER_LOAD_DWORD_LDS_BOTHEN, BUFFER_LOAD_DWORD_LDS_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 392
  { BUFFER_LOAD_DWORD_LDS_BOTHEN_exact, BUFFER_LOAD_DWORD_LDS_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 393
  { BUFFER_LOAD_DWORD_LDS_IDXEN, BUFFER_LOAD_DWORD_LDS_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 394
  { BUFFER_LOAD_DWORD_LDS_IDXEN_exact, BUFFER_LOAD_DWORD_LDS_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 395
  { BUFFER_LOAD_DWORD_LDS_OFFEN, BUFFER_LOAD_DWORD_LDS_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 396
  { BUFFER_LOAD_DWORD_LDS_OFFEN_exact, BUFFER_LOAD_DWORD_LDS_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 397
  { BUFFER_LOAD_DWORD_LDS_OFFSET, BUFFER_LOAD_DWORD_LDS_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 398
  { BUFFER_LOAD_DWORD_LDS_OFFSET_exact, BUFFER_LOAD_DWORD_LDS_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 399
  { BUFFER_LOAD_DWORD_OFFEN, BUFFER_LOAD_DWORD_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 400
  { BUFFER_LOAD_DWORD_OFFEN_exact, BUFFER_LOAD_DWORD_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 401
  { BUFFER_LOAD_DWORD_OFFSET, BUFFER_LOAD_DWORD_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 402
  { BUFFER_LOAD_DWORD_OFFSET_exact, BUFFER_LOAD_DWORD_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 403
  { BUFFER_LOAD_FORMAT_D16_HI_X_ADDR64, BUFFER_LOAD_FORMAT_D16_HI_X_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 404
  { BUFFER_LOAD_FORMAT_D16_HI_X_BOTHEN, BUFFER_LOAD_FORMAT_D16_HI_X_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 405
  { BUFFER_LOAD_FORMAT_D16_HI_X_BOTHEN_exact, BUFFER_LOAD_FORMAT_D16_HI_X_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 406
  { BUFFER_LOAD_FORMAT_D16_HI_X_IDXEN, BUFFER_LOAD_FORMAT_D16_HI_X_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 407
  { BUFFER_LOAD_FORMAT_D16_HI_X_IDXEN_exact, BUFFER_LOAD_FORMAT_D16_HI_X_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 408
  { BUFFER_LOAD_FORMAT_D16_HI_X_OFFEN, BUFFER_LOAD_FORMAT_D16_HI_X_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 409
  { BUFFER_LOAD_FORMAT_D16_HI_X_OFFEN_exact, BUFFER_LOAD_FORMAT_D16_HI_X_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 410
  { BUFFER_LOAD_FORMAT_D16_HI_X_OFFSET, BUFFER_LOAD_FORMAT_D16_HI_X_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 411
  { BUFFER_LOAD_FORMAT_D16_HI_X_OFFSET_exact, BUFFER_LOAD_FORMAT_D16_HI_X_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 412
  { BUFFER_LOAD_FORMAT_D16_XYZW_ADDR64, BUFFER_LOAD_FORMAT_D16_XYZW_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 413
  { BUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN, BUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 414
  { BUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN_exact, BUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 415
  { BUFFER_LOAD_FORMAT_D16_XYZW_IDXEN, BUFFER_LOAD_FORMAT_D16_XYZW_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 416
  { BUFFER_LOAD_FORMAT_D16_XYZW_IDXEN_exact, BUFFER_LOAD_FORMAT_D16_XYZW_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 417
  { BUFFER_LOAD_FORMAT_D16_XYZW_OFFEN, BUFFER_LOAD_FORMAT_D16_XYZW_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 418
  { BUFFER_LOAD_FORMAT_D16_XYZW_OFFEN_exact, BUFFER_LOAD_FORMAT_D16_XYZW_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 419
  { BUFFER_LOAD_FORMAT_D16_XYZW_OFFSET, BUFFER_LOAD_FORMAT_D16_XYZW_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 420
  { BUFFER_LOAD_FORMAT_D16_XYZW_OFFSET_exact, BUFFER_LOAD_FORMAT_D16_XYZW_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 421
  { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_ADDR64, BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 422
  { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN, BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 423
  { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 424
  { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN, BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 425
  { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN_exact, BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 426
  { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN, BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 427
  { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN_exact, BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 428
  { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET, BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 429
  { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET_exact, BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 430
  { BUFFER_LOAD_FORMAT_D16_XYZ_ADDR64, BUFFER_LOAD_FORMAT_D16_XYZ_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 431
  { BUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN, BUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 432
  { BUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN_exact, BUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 433
  { BUFFER_LOAD_FORMAT_D16_XYZ_IDXEN, BUFFER_LOAD_FORMAT_D16_XYZ_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 434
  { BUFFER_LOAD_FORMAT_D16_XYZ_IDXEN_exact, BUFFER_LOAD_FORMAT_D16_XYZ_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 435
  { BUFFER_LOAD_FORMAT_D16_XYZ_OFFEN, BUFFER_LOAD_FORMAT_D16_XYZ_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 436
  { BUFFER_LOAD_FORMAT_D16_XYZ_OFFEN_exact, BUFFER_LOAD_FORMAT_D16_XYZ_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 437
  { BUFFER_LOAD_FORMAT_D16_XYZ_OFFSET, BUFFER_LOAD_FORMAT_D16_XYZ_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 438
  { BUFFER_LOAD_FORMAT_D16_XYZ_OFFSET_exact, BUFFER_LOAD_FORMAT_D16_XYZ_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 439
  { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_ADDR64, BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 440
  { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN, BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 441
  { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 442
  { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN, BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 443
  { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN_exact, BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 444
  { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN, BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 445
  { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN_exact, BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 446
  { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET, BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 447
  { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET_exact, BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 448
  { BUFFER_LOAD_FORMAT_D16_XY_ADDR64, BUFFER_LOAD_FORMAT_D16_XY_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 449
  { BUFFER_LOAD_FORMAT_D16_XY_BOTHEN, BUFFER_LOAD_FORMAT_D16_XY_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 450
  { BUFFER_LOAD_FORMAT_D16_XY_BOTHEN_exact, BUFFER_LOAD_FORMAT_D16_XY_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 451
  { BUFFER_LOAD_FORMAT_D16_XY_IDXEN, BUFFER_LOAD_FORMAT_D16_XY_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 452
  { BUFFER_LOAD_FORMAT_D16_XY_IDXEN_exact, BUFFER_LOAD_FORMAT_D16_XY_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 453
  { BUFFER_LOAD_FORMAT_D16_XY_OFFEN, BUFFER_LOAD_FORMAT_D16_XY_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 454
  { BUFFER_LOAD_FORMAT_D16_XY_OFFEN_exact, BUFFER_LOAD_FORMAT_D16_XY_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 455
  { BUFFER_LOAD_FORMAT_D16_XY_OFFSET, BUFFER_LOAD_FORMAT_D16_XY_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 456
  { BUFFER_LOAD_FORMAT_D16_XY_OFFSET_exact, BUFFER_LOAD_FORMAT_D16_XY_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 457
  { BUFFER_LOAD_FORMAT_D16_XY_gfx80_ADDR64, BUFFER_LOAD_FORMAT_D16_XY_gfx80_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 458
  { BUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN, BUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 459
  { BUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN_exact, BUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 460
  { BUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN, BUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 461
  { BUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN_exact, BUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 462
  { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN, BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 463
  { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN_exact, BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 464
  { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET, BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 465
  { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET_exact, BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 466
  { BUFFER_LOAD_FORMAT_D16_X_ADDR64, BUFFER_LOAD_FORMAT_D16_X_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 467
  { BUFFER_LOAD_FORMAT_D16_X_BOTHEN, BUFFER_LOAD_FORMAT_D16_X_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 468
  { BUFFER_LOAD_FORMAT_D16_X_BOTHEN_exact, BUFFER_LOAD_FORMAT_D16_X_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 469
  { BUFFER_LOAD_FORMAT_D16_X_IDXEN, BUFFER_LOAD_FORMAT_D16_X_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 470
  { BUFFER_LOAD_FORMAT_D16_X_IDXEN_exact, BUFFER_LOAD_FORMAT_D16_X_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 471
  { BUFFER_LOAD_FORMAT_D16_X_OFFEN, BUFFER_LOAD_FORMAT_D16_X_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 472
  { BUFFER_LOAD_FORMAT_D16_X_OFFEN_exact, BUFFER_LOAD_FORMAT_D16_X_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 473
  { BUFFER_LOAD_FORMAT_D16_X_OFFSET, BUFFER_LOAD_FORMAT_D16_X_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 474
  { BUFFER_LOAD_FORMAT_D16_X_OFFSET_exact, BUFFER_LOAD_FORMAT_D16_X_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 475
  { BUFFER_LOAD_FORMAT_D16_X_gfx80_ADDR64, BUFFER_LOAD_FORMAT_D16_X_gfx80_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 476
  { BUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN, BUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 477
  { BUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN_exact, BUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 478
  { BUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN, BUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 479
  { BUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN_exact, BUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 480
  { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN, BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 481
  { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN_exact, BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 482
  { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET, BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 483
  { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET_exact, BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 484
  { BUFFER_LOAD_FORMAT_XYZW_ADDR64, BUFFER_LOAD_FORMAT_XYZW_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 485
  { BUFFER_LOAD_FORMAT_XYZW_BOTHEN, BUFFER_LOAD_FORMAT_XYZW_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 486
  { BUFFER_LOAD_FORMAT_XYZW_BOTHEN_exact, BUFFER_LOAD_FORMAT_XYZW_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 487
  { BUFFER_LOAD_FORMAT_XYZW_IDXEN, BUFFER_LOAD_FORMAT_XYZW_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 488
  { BUFFER_LOAD_FORMAT_XYZW_IDXEN_exact, BUFFER_LOAD_FORMAT_XYZW_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 489
  { BUFFER_LOAD_FORMAT_XYZW_OFFEN, BUFFER_LOAD_FORMAT_XYZW_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 490
  { BUFFER_LOAD_FORMAT_XYZW_OFFEN_exact, BUFFER_LOAD_FORMAT_XYZW_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 491
  { BUFFER_LOAD_FORMAT_XYZW_OFFSET, BUFFER_LOAD_FORMAT_XYZW_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 492
  { BUFFER_LOAD_FORMAT_XYZW_OFFSET_exact, BUFFER_LOAD_FORMAT_XYZW_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 493
  { BUFFER_LOAD_FORMAT_XYZ_ADDR64, BUFFER_LOAD_FORMAT_XYZ_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 494
  { BUFFER_LOAD_FORMAT_XYZ_BOTHEN, BUFFER_LOAD_FORMAT_XYZ_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 495
  { BUFFER_LOAD_FORMAT_XYZ_BOTHEN_exact, BUFFER_LOAD_FORMAT_XYZ_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 496
  { BUFFER_LOAD_FORMAT_XYZ_IDXEN, BUFFER_LOAD_FORMAT_XYZ_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 497
  { BUFFER_LOAD_FORMAT_XYZ_IDXEN_exact, BUFFER_LOAD_FORMAT_XYZ_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 498
  { BUFFER_LOAD_FORMAT_XYZ_OFFEN, BUFFER_LOAD_FORMAT_XYZ_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 499
  { BUFFER_LOAD_FORMAT_XYZ_OFFEN_exact, BUFFER_LOAD_FORMAT_XYZ_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 500
  { BUFFER_LOAD_FORMAT_XYZ_OFFSET, BUFFER_LOAD_FORMAT_XYZ_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 501
  { BUFFER_LOAD_FORMAT_XYZ_OFFSET_exact, BUFFER_LOAD_FORMAT_XYZ_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 502
  { BUFFER_LOAD_FORMAT_XY_ADDR64, BUFFER_LOAD_FORMAT_XY_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 503
  { BUFFER_LOAD_FORMAT_XY_BOTHEN, BUFFER_LOAD_FORMAT_XY_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 504
  { BUFFER_LOAD_FORMAT_XY_BOTHEN_exact, BUFFER_LOAD_FORMAT_XY_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 505
  { BUFFER_LOAD_FORMAT_XY_IDXEN, BUFFER_LOAD_FORMAT_XY_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 506
  { BUFFER_LOAD_FORMAT_XY_IDXEN_exact, BUFFER_LOAD_FORMAT_XY_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 507
  { BUFFER_LOAD_FORMAT_XY_OFFEN, BUFFER_LOAD_FORMAT_XY_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 508
  { BUFFER_LOAD_FORMAT_XY_OFFEN_exact, BUFFER_LOAD_FORMAT_XY_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 509
  { BUFFER_LOAD_FORMAT_XY_OFFSET, BUFFER_LOAD_FORMAT_XY_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 510
  { BUFFER_LOAD_FORMAT_XY_OFFSET_exact, BUFFER_LOAD_FORMAT_XY_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 511
  { BUFFER_LOAD_FORMAT_X_ADDR64, BUFFER_LOAD_FORMAT_X_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 512
  { BUFFER_LOAD_FORMAT_X_BOTHEN, BUFFER_LOAD_FORMAT_X_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 513
  { BUFFER_LOAD_FORMAT_X_BOTHEN_exact, BUFFER_LOAD_FORMAT_X_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 514
  { BUFFER_LOAD_FORMAT_X_IDXEN, BUFFER_LOAD_FORMAT_X_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 515
  { BUFFER_LOAD_FORMAT_X_IDXEN_exact, BUFFER_LOAD_FORMAT_X_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 516
  { BUFFER_LOAD_FORMAT_X_LDS_ADDR64, BUFFER_LOAD_FORMAT_X_LDS_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 517
  { BUFFER_LOAD_FORMAT_X_LDS_BOTHEN, BUFFER_LOAD_FORMAT_X_LDS_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 518
  { BUFFER_LOAD_FORMAT_X_LDS_BOTHEN_exact, BUFFER_LOAD_FORMAT_X_LDS_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 519
  { BUFFER_LOAD_FORMAT_X_LDS_IDXEN, BUFFER_LOAD_FORMAT_X_LDS_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 520
  { BUFFER_LOAD_FORMAT_X_LDS_IDXEN_exact, BUFFER_LOAD_FORMAT_X_LDS_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 521
  { BUFFER_LOAD_FORMAT_X_LDS_OFFEN, BUFFER_LOAD_FORMAT_X_LDS_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 522
  { BUFFER_LOAD_FORMAT_X_LDS_OFFEN_exact, BUFFER_LOAD_FORMAT_X_LDS_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 523
  { BUFFER_LOAD_FORMAT_X_LDS_OFFSET, BUFFER_LOAD_FORMAT_X_LDS_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 524
  { BUFFER_LOAD_FORMAT_X_LDS_OFFSET_exact, BUFFER_LOAD_FORMAT_X_LDS_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 525
  { BUFFER_LOAD_FORMAT_X_OFFEN, BUFFER_LOAD_FORMAT_X_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 526
  { BUFFER_LOAD_FORMAT_X_OFFEN_exact, BUFFER_LOAD_FORMAT_X_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 527
  { BUFFER_LOAD_FORMAT_X_OFFSET, BUFFER_LOAD_FORMAT_X_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 528
  { BUFFER_LOAD_FORMAT_X_OFFSET_exact, BUFFER_LOAD_FORMAT_X_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 529
  { BUFFER_LOAD_SBYTE_ADDR64, BUFFER_LOAD_SBYTE_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 530
  { BUFFER_LOAD_SBYTE_BOTHEN, BUFFER_LOAD_SBYTE_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 531
  { BUFFER_LOAD_SBYTE_BOTHEN_exact, BUFFER_LOAD_SBYTE_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 532
  { BUFFER_LOAD_SBYTE_D16_ADDR64, BUFFER_LOAD_SBYTE_D16_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 533
  { BUFFER_LOAD_SBYTE_D16_BOTHEN, BUFFER_LOAD_SBYTE_D16_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 534
  { BUFFER_LOAD_SBYTE_D16_BOTHEN_exact, BUFFER_LOAD_SBYTE_D16_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 535
  { BUFFER_LOAD_SBYTE_D16_HI_ADDR64, BUFFER_LOAD_SBYTE_D16_HI_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 536
  { BUFFER_LOAD_SBYTE_D16_HI_BOTHEN, BUFFER_LOAD_SBYTE_D16_HI_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 537
  { BUFFER_LOAD_SBYTE_D16_HI_BOTHEN_exact, BUFFER_LOAD_SBYTE_D16_HI_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 538
  { BUFFER_LOAD_SBYTE_D16_HI_IDXEN, BUFFER_LOAD_SBYTE_D16_HI_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 539
  { BUFFER_LOAD_SBYTE_D16_HI_IDXEN_exact, BUFFER_LOAD_SBYTE_D16_HI_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 540
  { BUFFER_LOAD_SBYTE_D16_HI_OFFEN, BUFFER_LOAD_SBYTE_D16_HI_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 541
  { BUFFER_LOAD_SBYTE_D16_HI_OFFEN_exact, BUFFER_LOAD_SBYTE_D16_HI_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 542
  { BUFFER_LOAD_SBYTE_D16_HI_OFFSET, BUFFER_LOAD_SBYTE_D16_HI_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 543
  { BUFFER_LOAD_SBYTE_D16_HI_OFFSET_exact, BUFFER_LOAD_SBYTE_D16_HI_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 544
  { BUFFER_LOAD_SBYTE_D16_IDXEN, BUFFER_LOAD_SBYTE_D16_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 545
  { BUFFER_LOAD_SBYTE_D16_IDXEN_exact, BUFFER_LOAD_SBYTE_D16_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 546
  { BUFFER_LOAD_SBYTE_D16_OFFEN, BUFFER_LOAD_SBYTE_D16_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 547
  { BUFFER_LOAD_SBYTE_D16_OFFEN_exact, BUFFER_LOAD_SBYTE_D16_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 548
  { BUFFER_LOAD_SBYTE_D16_OFFSET, BUFFER_LOAD_SBYTE_D16_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 549
  { BUFFER_LOAD_SBYTE_D16_OFFSET_exact, BUFFER_LOAD_SBYTE_D16_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 550
  { BUFFER_LOAD_SBYTE_IDXEN, BUFFER_LOAD_SBYTE_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 551
  { BUFFER_LOAD_SBYTE_IDXEN_exact, BUFFER_LOAD_SBYTE_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 552
  { BUFFER_LOAD_SBYTE_LDS_ADDR64, BUFFER_LOAD_SBYTE_LDS_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 553
  { BUFFER_LOAD_SBYTE_LDS_BOTHEN, BUFFER_LOAD_SBYTE_LDS_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 554
  { BUFFER_LOAD_SBYTE_LDS_BOTHEN_exact, BUFFER_LOAD_SBYTE_LDS_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 555
  { BUFFER_LOAD_SBYTE_LDS_IDXEN, BUFFER_LOAD_SBYTE_LDS_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 556
  { BUFFER_LOAD_SBYTE_LDS_IDXEN_exact, BUFFER_LOAD_SBYTE_LDS_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 557
  { BUFFER_LOAD_SBYTE_LDS_OFFEN, BUFFER_LOAD_SBYTE_LDS_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 558
  { BUFFER_LOAD_SBYTE_LDS_OFFEN_exact, BUFFER_LOAD_SBYTE_LDS_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 559
  { BUFFER_LOAD_SBYTE_LDS_OFFSET, BUFFER_LOAD_SBYTE_LDS_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 560
  { BUFFER_LOAD_SBYTE_LDS_OFFSET_exact, BUFFER_LOAD_SBYTE_LDS_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 561
  { BUFFER_LOAD_SBYTE_OFFEN, BUFFER_LOAD_SBYTE_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 562
  { BUFFER_LOAD_SBYTE_OFFEN_exact, BUFFER_LOAD_SBYTE_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 563
  { BUFFER_LOAD_SBYTE_OFFSET, BUFFER_LOAD_SBYTE_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 564
  { BUFFER_LOAD_SBYTE_OFFSET_exact, BUFFER_LOAD_SBYTE_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 565
  { BUFFER_LOAD_SHORT_D16_ADDR64, BUFFER_LOAD_SHORT_D16_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 566
  { BUFFER_LOAD_SHORT_D16_BOTHEN, BUFFER_LOAD_SHORT_D16_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 567
  { BUFFER_LOAD_SHORT_D16_BOTHEN_exact, BUFFER_LOAD_SHORT_D16_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 568
  { BUFFER_LOAD_SHORT_D16_HI_ADDR64, BUFFER_LOAD_SHORT_D16_HI_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 569
  { BUFFER_LOAD_SHORT_D16_HI_BOTHEN, BUFFER_LOAD_SHORT_D16_HI_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 570
  { BUFFER_LOAD_SHORT_D16_HI_BOTHEN_exact, BUFFER_LOAD_SHORT_D16_HI_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 571
  { BUFFER_LOAD_SHORT_D16_HI_IDXEN, BUFFER_LOAD_SHORT_D16_HI_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 572
  { BUFFER_LOAD_SHORT_D16_HI_IDXEN_exact, BUFFER_LOAD_SHORT_D16_HI_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 573
  { BUFFER_LOAD_SHORT_D16_HI_OFFEN, BUFFER_LOAD_SHORT_D16_HI_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 574
  { BUFFER_LOAD_SHORT_D16_HI_OFFEN_exact, BUFFER_LOAD_SHORT_D16_HI_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 575
  { BUFFER_LOAD_SHORT_D16_HI_OFFSET, BUFFER_LOAD_SHORT_D16_HI_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 576
  { BUFFER_LOAD_SHORT_D16_HI_OFFSET_exact, BUFFER_LOAD_SHORT_D16_HI_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 577
  { BUFFER_LOAD_SHORT_D16_IDXEN, BUFFER_LOAD_SHORT_D16_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 578
  { BUFFER_LOAD_SHORT_D16_IDXEN_exact, BUFFER_LOAD_SHORT_D16_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 579
  { BUFFER_LOAD_SHORT_D16_OFFEN, BUFFER_LOAD_SHORT_D16_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 580
  { BUFFER_LOAD_SHORT_D16_OFFEN_exact, BUFFER_LOAD_SHORT_D16_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 581
  { BUFFER_LOAD_SHORT_D16_OFFSET, BUFFER_LOAD_SHORT_D16_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 582
  { BUFFER_LOAD_SHORT_D16_OFFSET_exact, BUFFER_LOAD_SHORT_D16_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 583
  { BUFFER_LOAD_SSHORT_ADDR64, BUFFER_LOAD_SSHORT_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 584
  { BUFFER_LOAD_SSHORT_BOTHEN, BUFFER_LOAD_SSHORT_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 585
  { BUFFER_LOAD_SSHORT_BOTHEN_exact, BUFFER_LOAD_SSHORT_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 586
  { BUFFER_LOAD_SSHORT_IDXEN, BUFFER_LOAD_SSHORT_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 587
  { BUFFER_LOAD_SSHORT_IDXEN_exact, BUFFER_LOAD_SSHORT_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 588
  { BUFFER_LOAD_SSHORT_LDS_ADDR64, BUFFER_LOAD_SSHORT_LDS_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 589
  { BUFFER_LOAD_SSHORT_LDS_BOTHEN, BUFFER_LOAD_SSHORT_LDS_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 590
  { BUFFER_LOAD_SSHORT_LDS_BOTHEN_exact, BUFFER_LOAD_SSHORT_LDS_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 591
  { BUFFER_LOAD_SSHORT_LDS_IDXEN, BUFFER_LOAD_SSHORT_LDS_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 592
  { BUFFER_LOAD_SSHORT_LDS_IDXEN_exact, BUFFER_LOAD_SSHORT_LDS_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 593
  { BUFFER_LOAD_SSHORT_LDS_OFFEN, BUFFER_LOAD_SSHORT_LDS_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 594
  { BUFFER_LOAD_SSHORT_LDS_OFFEN_exact, BUFFER_LOAD_SSHORT_LDS_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 595
  { BUFFER_LOAD_SSHORT_LDS_OFFSET, BUFFER_LOAD_SSHORT_LDS_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 596
  { BUFFER_LOAD_SSHORT_LDS_OFFSET_exact, BUFFER_LOAD_SSHORT_LDS_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 597
  { BUFFER_LOAD_SSHORT_OFFEN, BUFFER_LOAD_SSHORT_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 598
  { BUFFER_LOAD_SSHORT_OFFEN_exact, BUFFER_LOAD_SSHORT_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 599
  { BUFFER_LOAD_SSHORT_OFFSET, BUFFER_LOAD_SSHORT_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 600
  { BUFFER_LOAD_SSHORT_OFFSET_exact, BUFFER_LOAD_SSHORT_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 601
  { BUFFER_LOAD_UBYTE_ADDR64, BUFFER_LOAD_UBYTE_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 602
  { BUFFER_LOAD_UBYTE_BOTHEN, BUFFER_LOAD_UBYTE_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 603
  { BUFFER_LOAD_UBYTE_BOTHEN_exact, BUFFER_LOAD_UBYTE_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 604
  { BUFFER_LOAD_UBYTE_D16_ADDR64, BUFFER_LOAD_UBYTE_D16_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 605
  { BUFFER_LOAD_UBYTE_D16_BOTHEN, BUFFER_LOAD_UBYTE_D16_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 606
  { BUFFER_LOAD_UBYTE_D16_BOTHEN_exact, BUFFER_LOAD_UBYTE_D16_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 607
  { BUFFER_LOAD_UBYTE_D16_HI_ADDR64, BUFFER_LOAD_UBYTE_D16_HI_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 608
  { BUFFER_LOAD_UBYTE_D16_HI_BOTHEN, BUFFER_LOAD_UBYTE_D16_HI_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 609
  { BUFFER_LOAD_UBYTE_D16_HI_BOTHEN_exact, BUFFER_LOAD_UBYTE_D16_HI_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 610
  { BUFFER_LOAD_UBYTE_D16_HI_IDXEN, BUFFER_LOAD_UBYTE_D16_HI_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 611
  { BUFFER_LOAD_UBYTE_D16_HI_IDXEN_exact, BUFFER_LOAD_UBYTE_D16_HI_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 612
  { BUFFER_LOAD_UBYTE_D16_HI_OFFEN, BUFFER_LOAD_UBYTE_D16_HI_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 613
  { BUFFER_LOAD_UBYTE_D16_HI_OFFEN_exact, BUFFER_LOAD_UBYTE_D16_HI_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 614
  { BUFFER_LOAD_UBYTE_D16_HI_OFFSET, BUFFER_LOAD_UBYTE_D16_HI_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 615
  { BUFFER_LOAD_UBYTE_D16_HI_OFFSET_exact, BUFFER_LOAD_UBYTE_D16_HI_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 616
  { BUFFER_LOAD_UBYTE_D16_IDXEN, BUFFER_LOAD_UBYTE_D16_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 617
  { BUFFER_LOAD_UBYTE_D16_IDXEN_exact, BUFFER_LOAD_UBYTE_D16_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 618
  { BUFFER_LOAD_UBYTE_D16_OFFEN, BUFFER_LOAD_UBYTE_D16_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 619
  { BUFFER_LOAD_UBYTE_D16_OFFEN_exact, BUFFER_LOAD_UBYTE_D16_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 620
  { BUFFER_LOAD_UBYTE_D16_OFFSET, BUFFER_LOAD_UBYTE_D16_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 621
  { BUFFER_LOAD_UBYTE_D16_OFFSET_exact, BUFFER_LOAD_UBYTE_D16_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 622
  { BUFFER_LOAD_UBYTE_IDXEN, BUFFER_LOAD_UBYTE_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 623
  { BUFFER_LOAD_UBYTE_IDXEN_exact, BUFFER_LOAD_UBYTE_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 624
  { BUFFER_LOAD_UBYTE_LDS_ADDR64, BUFFER_LOAD_UBYTE_LDS_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 625
  { BUFFER_LOAD_UBYTE_LDS_BOTHEN, BUFFER_LOAD_UBYTE_LDS_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 626
  { BUFFER_LOAD_UBYTE_LDS_BOTHEN_exact, BUFFER_LOAD_UBYTE_LDS_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 627
  { BUFFER_LOAD_UBYTE_LDS_IDXEN, BUFFER_LOAD_UBYTE_LDS_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 628
  { BUFFER_LOAD_UBYTE_LDS_IDXEN_exact, BUFFER_LOAD_UBYTE_LDS_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 629
  { BUFFER_LOAD_UBYTE_LDS_OFFEN, BUFFER_LOAD_UBYTE_LDS_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 630
  { BUFFER_LOAD_UBYTE_LDS_OFFEN_exact, BUFFER_LOAD_UBYTE_LDS_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 631
  { BUFFER_LOAD_UBYTE_LDS_OFFSET, BUFFER_LOAD_UBYTE_LDS_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 632
  { BUFFER_LOAD_UBYTE_LDS_OFFSET_exact, BUFFER_LOAD_UBYTE_LDS_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 633
  { BUFFER_LOAD_UBYTE_OFFEN, BUFFER_LOAD_UBYTE_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 634
  { BUFFER_LOAD_UBYTE_OFFEN_exact, BUFFER_LOAD_UBYTE_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 635
  { BUFFER_LOAD_UBYTE_OFFSET, BUFFER_LOAD_UBYTE_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 636
  { BUFFER_LOAD_UBYTE_OFFSET_exact, BUFFER_LOAD_UBYTE_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 637
  { BUFFER_LOAD_USHORT_ADDR64, BUFFER_LOAD_USHORT_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 638
  { BUFFER_LOAD_USHORT_BOTHEN, BUFFER_LOAD_USHORT_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 639
  { BUFFER_LOAD_USHORT_BOTHEN_exact, BUFFER_LOAD_USHORT_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 640
  { BUFFER_LOAD_USHORT_IDXEN, BUFFER_LOAD_USHORT_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 641
  { BUFFER_LOAD_USHORT_IDXEN_exact, BUFFER_LOAD_USHORT_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 642
  { BUFFER_LOAD_USHORT_LDS_ADDR64, BUFFER_LOAD_USHORT_LDS_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 643
  { BUFFER_LOAD_USHORT_LDS_BOTHEN, BUFFER_LOAD_USHORT_LDS_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 644
  { BUFFER_LOAD_USHORT_LDS_BOTHEN_exact, BUFFER_LOAD_USHORT_LDS_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 645
  { BUFFER_LOAD_USHORT_LDS_IDXEN, BUFFER_LOAD_USHORT_LDS_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 646
  { BUFFER_LOAD_USHORT_LDS_IDXEN_exact, BUFFER_LOAD_USHORT_LDS_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 647
  { BUFFER_LOAD_USHORT_LDS_OFFEN, BUFFER_LOAD_USHORT_LDS_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 648
  { BUFFER_LOAD_USHORT_LDS_OFFEN_exact, BUFFER_LOAD_USHORT_LDS_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 649
  { BUFFER_LOAD_USHORT_LDS_OFFSET, BUFFER_LOAD_USHORT_LDS_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 650
  { BUFFER_LOAD_USHORT_LDS_OFFSET_exact, BUFFER_LOAD_USHORT_LDS_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 651
  { BUFFER_LOAD_USHORT_OFFEN, BUFFER_LOAD_USHORT_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 652
  { BUFFER_LOAD_USHORT_OFFEN_exact, BUFFER_LOAD_USHORT_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 653
  { BUFFER_LOAD_USHORT_OFFSET, BUFFER_LOAD_USHORT_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 654
  { BUFFER_LOAD_USHORT_OFFSET_exact, BUFFER_LOAD_USHORT_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 655
  { BUFFER_STORE_BYTE_ADDR64, BUFFER_STORE_BYTE_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 656
  { BUFFER_STORE_BYTE_BOTHEN, BUFFER_STORE_BYTE_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 657
  { BUFFER_STORE_BYTE_BOTHEN_exact, BUFFER_STORE_BYTE_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 658
  { BUFFER_STORE_BYTE_D16_HI_ADDR64, BUFFER_STORE_BYTE_D16_HI_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 659
  { BUFFER_STORE_BYTE_D16_HI_BOTHEN, BUFFER_STORE_BYTE_D16_HI_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 660
  { BUFFER_STORE_BYTE_D16_HI_BOTHEN_exact, BUFFER_STORE_BYTE_D16_HI_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 661
  { BUFFER_STORE_BYTE_D16_HI_IDXEN, BUFFER_STORE_BYTE_D16_HI_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 662
  { BUFFER_STORE_BYTE_D16_HI_IDXEN_exact, BUFFER_STORE_BYTE_D16_HI_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 663
  { BUFFER_STORE_BYTE_D16_HI_OFFEN, BUFFER_STORE_BYTE_D16_HI_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 664
  { BUFFER_STORE_BYTE_D16_HI_OFFEN_exact, BUFFER_STORE_BYTE_D16_HI_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 665
  { BUFFER_STORE_BYTE_D16_HI_OFFSET, BUFFER_STORE_BYTE_D16_HI_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 666
  { BUFFER_STORE_BYTE_D16_HI_OFFSET_exact, BUFFER_STORE_BYTE_D16_HI_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 667
  { BUFFER_STORE_BYTE_IDXEN, BUFFER_STORE_BYTE_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 668
  { BUFFER_STORE_BYTE_IDXEN_exact, BUFFER_STORE_BYTE_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 669
  { BUFFER_STORE_BYTE_OFFEN, BUFFER_STORE_BYTE_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 670
  { BUFFER_STORE_BYTE_OFFEN_exact, BUFFER_STORE_BYTE_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 671
  { BUFFER_STORE_BYTE_OFFSET, BUFFER_STORE_BYTE_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 672
  { BUFFER_STORE_BYTE_OFFSET_exact, BUFFER_STORE_BYTE_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 673
  { BUFFER_STORE_DWORDX2_ADDR64, BUFFER_STORE_DWORD_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 674
  { BUFFER_STORE_DWORDX2_BOTHEN, BUFFER_STORE_DWORD_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 675
  { BUFFER_STORE_DWORDX2_BOTHEN_exact, BUFFER_STORE_DWORD_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 676
  { BUFFER_STORE_DWORDX2_IDXEN, BUFFER_STORE_DWORD_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 677
  { BUFFER_STORE_DWORDX2_IDXEN_exact, BUFFER_STORE_DWORD_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 678
  { BUFFER_STORE_DWORDX2_OFFEN, BUFFER_STORE_DWORD_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 679
  { BUFFER_STORE_DWORDX2_OFFEN_exact, BUFFER_STORE_DWORD_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 680
  { BUFFER_STORE_DWORDX2_OFFSET, BUFFER_STORE_DWORD_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 681
  { BUFFER_STORE_DWORDX2_OFFSET_exact, BUFFER_STORE_DWORD_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 682
  { BUFFER_STORE_DWORDX3_ADDR64, BUFFER_STORE_DWORD_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 683
  { BUFFER_STORE_DWORDX3_BOTHEN, BUFFER_STORE_DWORD_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 684
  { BUFFER_STORE_DWORDX3_BOTHEN_exact, BUFFER_STORE_DWORD_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 685
  { BUFFER_STORE_DWORDX3_IDXEN, BUFFER_STORE_DWORD_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 686
  { BUFFER_STORE_DWORDX3_IDXEN_exact, BUFFER_STORE_DWORD_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 687
  { BUFFER_STORE_DWORDX3_OFFEN, BUFFER_STORE_DWORD_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 688
  { BUFFER_STORE_DWORDX3_OFFEN_exact, BUFFER_STORE_DWORD_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 689
  { BUFFER_STORE_DWORDX3_OFFSET, BUFFER_STORE_DWORD_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 690
  { BUFFER_STORE_DWORDX3_OFFSET_exact, BUFFER_STORE_DWORD_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 691
  { BUFFER_STORE_DWORDX4_ADDR64, BUFFER_STORE_DWORD_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 692
  { BUFFER_STORE_DWORDX4_BOTHEN, BUFFER_STORE_DWORD_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 693
  { BUFFER_STORE_DWORDX4_BOTHEN_exact, BUFFER_STORE_DWORD_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 694
  { BUFFER_STORE_DWORDX4_IDXEN, BUFFER_STORE_DWORD_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 695
  { BUFFER_STORE_DWORDX4_IDXEN_exact, BUFFER_STORE_DWORD_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 696
  { BUFFER_STORE_DWORDX4_OFFEN, BUFFER_STORE_DWORD_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 697
  { BUFFER_STORE_DWORDX4_OFFEN_exact, BUFFER_STORE_DWORD_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 698
  { BUFFER_STORE_DWORDX4_OFFSET, BUFFER_STORE_DWORD_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 699
  { BUFFER_STORE_DWORDX4_OFFSET_exact, BUFFER_STORE_DWORD_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 700
  { BUFFER_STORE_DWORD_ADDR64, BUFFER_STORE_DWORD_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 701
  { BUFFER_STORE_DWORD_BOTHEN, BUFFER_STORE_DWORD_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 702
  { BUFFER_STORE_DWORD_BOTHEN_exact, BUFFER_STORE_DWORD_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 703
  { BUFFER_STORE_DWORD_IDXEN, BUFFER_STORE_DWORD_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 704
  { BUFFER_STORE_DWORD_IDXEN_exact, BUFFER_STORE_DWORD_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 705
  { BUFFER_STORE_DWORD_OFFEN, BUFFER_STORE_DWORD_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 706
  { BUFFER_STORE_DWORD_OFFEN_exact, BUFFER_STORE_DWORD_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 707
  { BUFFER_STORE_DWORD_OFFSET, BUFFER_STORE_DWORD_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 708
  { BUFFER_STORE_DWORD_OFFSET_exact, BUFFER_STORE_DWORD_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 709
  { BUFFER_STORE_FORMAT_D16_HI_X_ADDR64, BUFFER_STORE_FORMAT_D16_HI_X_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 710
  { BUFFER_STORE_FORMAT_D16_HI_X_BOTHEN, BUFFER_STORE_FORMAT_D16_HI_X_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 711
  { BUFFER_STORE_FORMAT_D16_HI_X_BOTHEN_exact, BUFFER_STORE_FORMAT_D16_HI_X_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 712
  { BUFFER_STORE_FORMAT_D16_HI_X_IDXEN, BUFFER_STORE_FORMAT_D16_HI_X_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 713
  { BUFFER_STORE_FORMAT_D16_HI_X_IDXEN_exact, BUFFER_STORE_FORMAT_D16_HI_X_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 714
  { BUFFER_STORE_FORMAT_D16_HI_X_OFFEN, BUFFER_STORE_FORMAT_D16_HI_X_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 715
  { BUFFER_STORE_FORMAT_D16_HI_X_OFFEN_exact, BUFFER_STORE_FORMAT_D16_HI_X_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 716
  { BUFFER_STORE_FORMAT_D16_HI_X_OFFSET, BUFFER_STORE_FORMAT_D16_HI_X_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 717
  { BUFFER_STORE_FORMAT_D16_HI_X_OFFSET_exact, BUFFER_STORE_FORMAT_D16_HI_X_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 718
  { BUFFER_STORE_FORMAT_D16_XYZW_ADDR64, BUFFER_STORE_FORMAT_D16_XYZW_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 719
  { BUFFER_STORE_FORMAT_D16_XYZW_BOTHEN, BUFFER_STORE_FORMAT_D16_XYZW_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 720
  { BUFFER_STORE_FORMAT_D16_XYZW_BOTHEN_exact, BUFFER_STORE_FORMAT_D16_XYZW_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 721
  { BUFFER_STORE_FORMAT_D16_XYZW_IDXEN, BUFFER_STORE_FORMAT_D16_XYZW_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 722
  { BUFFER_STORE_FORMAT_D16_XYZW_IDXEN_exact, BUFFER_STORE_FORMAT_D16_XYZW_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 723
  { BUFFER_STORE_FORMAT_D16_XYZW_OFFEN, BUFFER_STORE_FORMAT_D16_XYZW_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 724
  { BUFFER_STORE_FORMAT_D16_XYZW_OFFEN_exact, BUFFER_STORE_FORMAT_D16_XYZW_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 725
  { BUFFER_STORE_FORMAT_D16_XYZW_OFFSET, BUFFER_STORE_FORMAT_D16_XYZW_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 726
  { BUFFER_STORE_FORMAT_D16_XYZW_OFFSET_exact, BUFFER_STORE_FORMAT_D16_XYZW_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 727
  { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_ADDR64, BUFFER_STORE_FORMAT_D16_XYZW_gfx80_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 728
  { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN, BUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 729
  { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, BUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 730
  { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN, BUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 731
  { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN_exact, BUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 732
  { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN, BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 733
  { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN_exact, BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 734
  { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET, BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 735
  { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET_exact, BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 736
  { BUFFER_STORE_FORMAT_D16_XYZ_ADDR64, BUFFER_STORE_FORMAT_D16_XYZ_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 737
  { BUFFER_STORE_FORMAT_D16_XYZ_BOTHEN, BUFFER_STORE_FORMAT_D16_XYZ_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 738
  { BUFFER_STORE_FORMAT_D16_XYZ_BOTHEN_exact, BUFFER_STORE_FORMAT_D16_XYZ_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 739
  { BUFFER_STORE_FORMAT_D16_XYZ_IDXEN, BUFFER_STORE_FORMAT_D16_XYZ_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 740
  { BUFFER_STORE_FORMAT_D16_XYZ_IDXEN_exact, BUFFER_STORE_FORMAT_D16_XYZ_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 741
  { BUFFER_STORE_FORMAT_D16_XYZ_OFFEN, BUFFER_STORE_FORMAT_D16_XYZ_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 742
  { BUFFER_STORE_FORMAT_D16_XYZ_OFFEN_exact, BUFFER_STORE_FORMAT_D16_XYZ_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 743
  { BUFFER_STORE_FORMAT_D16_XYZ_OFFSET, BUFFER_STORE_FORMAT_D16_XYZ_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 744
  { BUFFER_STORE_FORMAT_D16_XYZ_OFFSET_exact, BUFFER_STORE_FORMAT_D16_XYZ_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 745
  { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_ADDR64, BUFFER_STORE_FORMAT_D16_XYZ_gfx80_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 746
  { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN, BUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 747
  { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, BUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 748
  { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN, BUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 749
  { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN_exact, BUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 750
  { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN, BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 751
  { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN_exact, BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 752
  { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET, BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 753
  { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET_exact, BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 754
  { BUFFER_STORE_FORMAT_D16_XY_ADDR64, BUFFER_STORE_FORMAT_D16_XY_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 755
  { BUFFER_STORE_FORMAT_D16_XY_BOTHEN, BUFFER_STORE_FORMAT_D16_XY_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 756
  { BUFFER_STORE_FORMAT_D16_XY_BOTHEN_exact, BUFFER_STORE_FORMAT_D16_XY_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 757
  { BUFFER_STORE_FORMAT_D16_XY_IDXEN, BUFFER_STORE_FORMAT_D16_XY_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 758
  { BUFFER_STORE_FORMAT_D16_XY_IDXEN_exact, BUFFER_STORE_FORMAT_D16_XY_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 759
  { BUFFER_STORE_FORMAT_D16_XY_OFFEN, BUFFER_STORE_FORMAT_D16_XY_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 760
  { BUFFER_STORE_FORMAT_D16_XY_OFFEN_exact, BUFFER_STORE_FORMAT_D16_XY_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 761
  { BUFFER_STORE_FORMAT_D16_XY_OFFSET, BUFFER_STORE_FORMAT_D16_XY_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 762
  { BUFFER_STORE_FORMAT_D16_XY_OFFSET_exact, BUFFER_STORE_FORMAT_D16_XY_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 763
  { BUFFER_STORE_FORMAT_D16_XY_gfx80_ADDR64, BUFFER_STORE_FORMAT_D16_XY_gfx80_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 764
  { BUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN, BUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 765
  { BUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN_exact, BUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 766
  { BUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN, BUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 767
  { BUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN_exact, BUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 768
  { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN, BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 769
  { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN_exact, BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 770
  { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET, BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 771
  { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET_exact, BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 772
  { BUFFER_STORE_FORMAT_D16_X_ADDR64, BUFFER_STORE_FORMAT_D16_X_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 773
  { BUFFER_STORE_FORMAT_D16_X_BOTHEN, BUFFER_STORE_FORMAT_D16_X_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 774
  { BUFFER_STORE_FORMAT_D16_X_BOTHEN_exact, BUFFER_STORE_FORMAT_D16_X_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 775
  { BUFFER_STORE_FORMAT_D16_X_IDXEN, BUFFER_STORE_FORMAT_D16_X_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 776
  { BUFFER_STORE_FORMAT_D16_X_IDXEN_exact, BUFFER_STORE_FORMAT_D16_X_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 777
  { BUFFER_STORE_FORMAT_D16_X_OFFEN, BUFFER_STORE_FORMAT_D16_X_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 778
  { BUFFER_STORE_FORMAT_D16_X_OFFEN_exact, BUFFER_STORE_FORMAT_D16_X_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 779
  { BUFFER_STORE_FORMAT_D16_X_OFFSET, BUFFER_STORE_FORMAT_D16_X_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 780
  { BUFFER_STORE_FORMAT_D16_X_OFFSET_exact, BUFFER_STORE_FORMAT_D16_X_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 781
  { BUFFER_STORE_FORMAT_D16_X_gfx80_ADDR64, BUFFER_STORE_FORMAT_D16_X_gfx80_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 782
  { BUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN, BUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 783
  { BUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN_exact, BUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 784
  { BUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN, BUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 785
  { BUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN_exact, BUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 786
  { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN, BUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 787
  { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN_exact, BUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 788
  { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET, BUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 789
  { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET_exact, BUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 790
  { BUFFER_STORE_FORMAT_XYZW_ADDR64, BUFFER_STORE_FORMAT_XYZW_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 791
  { BUFFER_STORE_FORMAT_XYZW_BOTHEN, BUFFER_STORE_FORMAT_XYZW_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 792
  { BUFFER_STORE_FORMAT_XYZW_BOTHEN_exact, BUFFER_STORE_FORMAT_XYZW_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 793
  { BUFFER_STORE_FORMAT_XYZW_IDXEN, BUFFER_STORE_FORMAT_XYZW_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 794
  { BUFFER_STORE_FORMAT_XYZW_IDXEN_exact, BUFFER_STORE_FORMAT_XYZW_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 795
  { BUFFER_STORE_FORMAT_XYZW_OFFEN, BUFFER_STORE_FORMAT_XYZW_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 796
  { BUFFER_STORE_FORMAT_XYZW_OFFEN_exact, BUFFER_STORE_FORMAT_XYZW_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 797
  { BUFFER_STORE_FORMAT_XYZW_OFFSET, BUFFER_STORE_FORMAT_XYZW_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 798
  { BUFFER_STORE_FORMAT_XYZW_OFFSET_exact, BUFFER_STORE_FORMAT_XYZW_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 799
  { BUFFER_STORE_FORMAT_XYZ_ADDR64, BUFFER_STORE_FORMAT_XYZ_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 800
  { BUFFER_STORE_FORMAT_XYZ_BOTHEN, BUFFER_STORE_FORMAT_XYZ_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 801
  { BUFFER_STORE_FORMAT_XYZ_BOTHEN_exact, BUFFER_STORE_FORMAT_XYZ_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 802
  { BUFFER_STORE_FORMAT_XYZ_IDXEN, BUFFER_STORE_FORMAT_XYZ_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 803
  { BUFFER_STORE_FORMAT_XYZ_IDXEN_exact, BUFFER_STORE_FORMAT_XYZ_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 804
  { BUFFER_STORE_FORMAT_XYZ_OFFEN, BUFFER_STORE_FORMAT_XYZ_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 805
  { BUFFER_STORE_FORMAT_XYZ_OFFEN_exact, BUFFER_STORE_FORMAT_XYZ_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 806
  { BUFFER_STORE_FORMAT_XYZ_OFFSET, BUFFER_STORE_FORMAT_XYZ_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 807
  { BUFFER_STORE_FORMAT_XYZ_OFFSET_exact, BUFFER_STORE_FORMAT_XYZ_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 808
  { BUFFER_STORE_FORMAT_XY_ADDR64, BUFFER_STORE_FORMAT_XY_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 809
  { BUFFER_STORE_FORMAT_XY_BOTHEN, BUFFER_STORE_FORMAT_XY_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 810
  { BUFFER_STORE_FORMAT_XY_BOTHEN_exact, BUFFER_STORE_FORMAT_XY_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 811
  { BUFFER_STORE_FORMAT_XY_IDXEN, BUFFER_STORE_FORMAT_XY_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 812
  { BUFFER_STORE_FORMAT_XY_IDXEN_exact, BUFFER_STORE_FORMAT_XY_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 813
  { BUFFER_STORE_FORMAT_XY_OFFEN, BUFFER_STORE_FORMAT_XY_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 814
  { BUFFER_STORE_FORMAT_XY_OFFEN_exact, BUFFER_STORE_FORMAT_XY_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 815
  { BUFFER_STORE_FORMAT_XY_OFFSET, BUFFER_STORE_FORMAT_XY_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 816
  { BUFFER_STORE_FORMAT_XY_OFFSET_exact, BUFFER_STORE_FORMAT_XY_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 817
  { BUFFER_STORE_FORMAT_X_ADDR64, BUFFER_STORE_FORMAT_X_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 818
  { BUFFER_STORE_FORMAT_X_BOTHEN, BUFFER_STORE_FORMAT_X_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 819
  { BUFFER_STORE_FORMAT_X_BOTHEN_exact, BUFFER_STORE_FORMAT_X_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 820
  { BUFFER_STORE_FORMAT_X_IDXEN, BUFFER_STORE_FORMAT_X_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 821
  { BUFFER_STORE_FORMAT_X_IDXEN_exact, BUFFER_STORE_FORMAT_X_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 822
  { BUFFER_STORE_FORMAT_X_OFFEN, BUFFER_STORE_FORMAT_X_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 823
  { BUFFER_STORE_FORMAT_X_OFFEN_exact, BUFFER_STORE_FORMAT_X_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 824
  { BUFFER_STORE_FORMAT_X_OFFSET, BUFFER_STORE_FORMAT_X_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 825
  { BUFFER_STORE_FORMAT_X_OFFSET_exact, BUFFER_STORE_FORMAT_X_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 826
  { BUFFER_STORE_LDS_DWORD, BUFFER_STORE_LDS_DWORD, 0x0, 0x0, 0x1, 0x1 }, // 827
  { BUFFER_STORE_SHORT_ADDR64, BUFFER_STORE_SHORT_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 828
  { BUFFER_STORE_SHORT_BOTHEN, BUFFER_STORE_SHORT_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 829
  { BUFFER_STORE_SHORT_BOTHEN_exact, BUFFER_STORE_SHORT_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 830
  { BUFFER_STORE_SHORT_D16_HI_ADDR64, BUFFER_STORE_SHORT_D16_HI_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 831
  { BUFFER_STORE_SHORT_D16_HI_BOTHEN, BUFFER_STORE_SHORT_D16_HI_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 832
  { BUFFER_STORE_SHORT_D16_HI_BOTHEN_exact, BUFFER_STORE_SHORT_D16_HI_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 833
  { BUFFER_STORE_SHORT_D16_HI_IDXEN, BUFFER_STORE_SHORT_D16_HI_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 834
  { BUFFER_STORE_SHORT_D16_HI_IDXEN_exact, BUFFER_STORE_SHORT_D16_HI_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 835
  { BUFFER_STORE_SHORT_D16_HI_OFFEN, BUFFER_STORE_SHORT_D16_HI_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 836
  { BUFFER_STORE_SHORT_D16_HI_OFFEN_exact, BUFFER_STORE_SHORT_D16_HI_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 837
  { BUFFER_STORE_SHORT_D16_HI_OFFSET, BUFFER_STORE_SHORT_D16_HI_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 838
  { BUFFER_STORE_SHORT_D16_HI_OFFSET_exact, BUFFER_STORE_SHORT_D16_HI_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 839
  { BUFFER_STORE_SHORT_IDXEN, BUFFER_STORE_SHORT_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 840
  { BUFFER_STORE_SHORT_IDXEN_exact, BUFFER_STORE_SHORT_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 841
  { BUFFER_STORE_SHORT_OFFEN, BUFFER_STORE_SHORT_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 842
  { BUFFER_STORE_SHORT_OFFEN_exact, BUFFER_STORE_SHORT_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 843
  { BUFFER_STORE_SHORT_OFFSET, BUFFER_STORE_SHORT_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 844
  { BUFFER_STORE_SHORT_OFFSET_exact, BUFFER_STORE_SHORT_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 845
  { BUFFER_WBINVL1, BUFFER_WBINVL1, 0x0, 0x0, 0x0, 0x0 }, // 846
  { BUFFER_WBINVL1_SC, BUFFER_WBINVL1_SC, 0x0, 0x0, 0x0, 0x0 }, // 847
  { BUFFER_WBINVL1_VOL, BUFFER_WBINVL1_VOL, 0x0, 0x0, 0x0, 0x0 }, // 848
 };

const MUBUFInfo *getMUBUFOpcodeHelper(unsigned Opcode) {
  struct KeyType {
    unsigned Opcode;
  };
  KeyType Key = { Opcode };
  auto Table = makeArrayRef(MUBUFInfoTable);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const MUBUFInfo &LHS, const KeyType &RHS) {
      if (LHS.Opcode < RHS.Opcode)
        return true;
      if (LHS.Opcode > RHS.Opcode)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Opcode != Idx->Opcode)
    return nullptr;
  return &*Idx;
}

const MUBUFInfo *getMUBUFInfoFromBaseOpcodeAndElements(unsigned BaseOpcode, uint8_t elements) {
  struct IndexType {
    unsigned BaseOpcode;
    uint8_t elements;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { BUFFER_ATOMIC_ADD_ADDR64, 0x0, 0 },
    { BUFFER_ATOMIC_ADD_ADDR64_RTN, 0x0, 1 },
    { BUFFER_ATOMIC_ADD_BOTHEN, 0x0, 2 },
    { BUFFER_ATOMIC_ADD_BOTHEN_RTN, 0x0, 3 },
    { BUFFER_ATOMIC_ADD_F32_ADDR64, 0x0, 4 },
    { BUFFER_ATOMIC_ADD_F32_BOTHEN, 0x0, 5 },
    { BUFFER_ATOMIC_ADD_F32_IDXEN, 0x0, 6 },
    { BUFFER_ATOMIC_ADD_F32_OFFEN, 0x0, 7 },
    { BUFFER_ATOMIC_ADD_F32_OFFSET, 0x0, 8 },
    { BUFFER_ATOMIC_ADD_IDXEN, 0x0, 9 },
    { BUFFER_ATOMIC_ADD_IDXEN_RTN, 0x0, 10 },
    { BUFFER_ATOMIC_ADD_OFFEN, 0x0, 11 },
    { BUFFER_ATOMIC_ADD_OFFEN_RTN, 0x0, 12 },
    { BUFFER_ATOMIC_ADD_OFFSET, 0x0, 13 },
    { BUFFER_ATOMIC_ADD_OFFSET_RTN, 0x0, 14 },
    { BUFFER_ATOMIC_ADD_X2_ADDR64, 0x0, 15 },
    { BUFFER_ATOMIC_ADD_X2_ADDR64_RTN, 0x0, 16 },
    { BUFFER_ATOMIC_ADD_X2_BOTHEN, 0x0, 17 },
    { BUFFER_ATOMIC_ADD_X2_BOTHEN_RTN, 0x0, 18 },
    { BUFFER_ATOMIC_ADD_X2_IDXEN, 0x0, 19 },
    { BUFFER_ATOMIC_ADD_X2_IDXEN_RTN, 0x0, 20 },
    { BUFFER_ATOMIC_ADD_X2_OFFEN, 0x0, 21 },
    { BUFFER_ATOMIC_ADD_X2_OFFEN_RTN, 0x0, 22 },
    { BUFFER_ATOMIC_ADD_X2_OFFSET, 0x0, 23 },
    { BUFFER_ATOMIC_ADD_X2_OFFSET_RTN, 0x0, 24 },
    { BUFFER_ATOMIC_AND_ADDR64, 0x0, 25 },
    { BUFFER_ATOMIC_AND_ADDR64_RTN, 0x0, 26 },
    { BUFFER_ATOMIC_AND_BOTHEN, 0x0, 27 },
    { BUFFER_ATOMIC_AND_BOTHEN_RTN, 0x0, 28 },
    { BUFFER_ATOMIC_AND_IDXEN, 0x0, 29 },
    { BUFFER_ATOMIC_AND_IDXEN_RTN, 0x0, 30 },
    { BUFFER_ATOMIC_AND_OFFEN, 0x0, 31 },
    { BUFFER_ATOMIC_AND_OFFEN_RTN, 0x0, 32 },
    { BUFFER_ATOMIC_AND_OFFSET, 0x0, 33 },
    { BUFFER_ATOMIC_AND_OFFSET_RTN, 0x0, 34 },
    { BUFFER_ATOMIC_AND_X2_ADDR64, 0x0, 35 },
    { BUFFER_ATOMIC_AND_X2_ADDR64_RTN, 0x0, 36 },
    { BUFFER_ATOMIC_AND_X2_BOTHEN, 0x0, 37 },
    { BUFFER_ATOMIC_AND_X2_BOTHEN_RTN, 0x0, 38 },
    { BUFFER_ATOMIC_AND_X2_IDXEN, 0x0, 39 },
    { BUFFER_ATOMIC_AND_X2_IDXEN_RTN, 0x0, 40 },
    { BUFFER_ATOMIC_AND_X2_OFFEN, 0x0, 41 },
    { BUFFER_ATOMIC_AND_X2_OFFEN_RTN, 0x0, 42 },
    { BUFFER_ATOMIC_AND_X2_OFFSET, 0x0, 43 },
    { BUFFER_ATOMIC_AND_X2_OFFSET_RTN, 0x0, 44 },
    { BUFFER_ATOMIC_CMPSWAP_ADDR64, 0x0, 45 },
    { BUFFER_ATOMIC_CMPSWAP_ADDR64_RTN, 0x0, 46 },
    { BUFFER_ATOMIC_CMPSWAP_BOTHEN, 0x0, 47 },
    { BUFFER_ATOMIC_CMPSWAP_BOTHEN_RTN, 0x0, 48 },
    { BUFFER_ATOMIC_CMPSWAP_IDXEN, 0x0, 49 },
    { BUFFER_ATOMIC_CMPSWAP_IDXEN_RTN, 0x0, 50 },
    { BUFFER_ATOMIC_CMPSWAP_OFFEN, 0x0, 51 },
    { BUFFER_ATOMIC_CMPSWAP_OFFEN_RTN, 0x0, 52 },
    { BUFFER_ATOMIC_CMPSWAP_OFFSET, 0x0, 53 },
    { BUFFER_ATOMIC_CMPSWAP_OFFSET_RTN, 0x0, 54 },
    { BUFFER_ATOMIC_CMPSWAP_X2_ADDR64, 0x0, 55 },
    { BUFFER_ATOMIC_CMPSWAP_X2_ADDR64_RTN, 0x0, 56 },
    { BUFFER_ATOMIC_CMPSWAP_X2_BOTHEN, 0x0, 57 },
    { BUFFER_ATOMIC_CMPSWAP_X2_BOTHEN_RTN, 0x0, 58 },
    { BUFFER_ATOMIC_CMPSWAP_X2_IDXEN, 0x0, 59 },
    { BUFFER_ATOMIC_CMPSWAP_X2_IDXEN_RTN, 0x0, 60 },
    { BUFFER_ATOMIC_CMPSWAP_X2_OFFEN, 0x0, 61 },
    { BUFFER_ATOMIC_CMPSWAP_X2_OFFEN_RTN, 0x0, 62 },
    { BUFFER_ATOMIC_CMPSWAP_X2_OFFSET, 0x0, 63 },
    { BUFFER_ATOMIC_CMPSWAP_X2_OFFSET_RTN, 0x0, 64 },
    { BUFFER_ATOMIC_DEC_ADDR64, 0x0, 65 },
    { BUFFER_ATOMIC_DEC_ADDR64_RTN, 0x0, 66 },
    { BUFFER_ATOMIC_DEC_BOTHEN, 0x0, 67 },
    { BUFFER_ATOMIC_DEC_BOTHEN_RTN, 0x0, 68 },
    { BUFFER_ATOMIC_DEC_IDXEN, 0x0, 69 },
    { BUFFER_ATOMIC_DEC_IDXEN_RTN, 0x0, 70 },
    { BUFFER_ATOMIC_DEC_OFFEN, 0x0, 71 },
    { BUFFER_ATOMIC_DEC_OFFEN_RTN, 0x0, 72 },
    { BUFFER_ATOMIC_DEC_OFFSET, 0x0, 73 },
    { BUFFER_ATOMIC_DEC_OFFSET_RTN, 0x0, 74 },
    { BUFFER_ATOMIC_DEC_X2_ADDR64, 0x0, 75 },
    { BUFFER_ATOMIC_DEC_X2_ADDR64_RTN, 0x0, 76 },
    { BUFFER_ATOMIC_DEC_X2_BOTHEN, 0x0, 77 },
    { BUFFER_ATOMIC_DEC_X2_BOTHEN_RTN, 0x0, 78 },
    { BUFFER_ATOMIC_DEC_X2_IDXEN, 0x0, 79 },
    { BUFFER_ATOMIC_DEC_X2_IDXEN_RTN, 0x0, 80 },
    { BUFFER_ATOMIC_DEC_X2_OFFEN, 0x0, 81 },
    { BUFFER_ATOMIC_DEC_X2_OFFEN_RTN, 0x0, 82 },
    { BUFFER_ATOMIC_DEC_X2_OFFSET, 0x0, 83 },
    { BUFFER_ATOMIC_DEC_X2_OFFSET_RTN, 0x0, 84 },
    { BUFFER_ATOMIC_FCMPSWAP_ADDR64, 0x0, 85 },
    { BUFFER_ATOMIC_FCMPSWAP_ADDR64_RTN, 0x0, 86 },
    { BUFFER_ATOMIC_FCMPSWAP_BOTHEN, 0x0, 87 },
    { BUFFER_ATOMIC_FCMPSWAP_BOTHEN_RTN, 0x0, 88 },
    { BUFFER_ATOMIC_FCMPSWAP_IDXEN, 0x0, 89 },
    { BUFFER_ATOMIC_FCMPSWAP_IDXEN_RTN, 0x0, 90 },
    { BUFFER_ATOMIC_FCMPSWAP_OFFEN, 0x0, 91 },
    { BUFFER_ATOMIC_FCMPSWAP_OFFEN_RTN, 0x0, 92 },
    { BUFFER_ATOMIC_FCMPSWAP_OFFSET, 0x0, 93 },
    { BUFFER_ATOMIC_FCMPSWAP_OFFSET_RTN, 0x0, 94 },
    { BUFFER_ATOMIC_FCMPSWAP_X2_ADDR64, 0x0, 95 },
    { BUFFER_ATOMIC_FCMPSWAP_X2_ADDR64_RTN, 0x0, 96 },
    { BUFFER_ATOMIC_FCMPSWAP_X2_BOTHEN, 0x0, 97 },
    { BUFFER_ATOMIC_FCMPSWAP_X2_BOTHEN_RTN, 0x0, 98 },
    { BUFFER_ATOMIC_FCMPSWAP_X2_IDXEN, 0x0, 99 },
    { BUFFER_ATOMIC_FCMPSWAP_X2_IDXEN_RTN, 0x0, 100 },
    { BUFFER_ATOMIC_FCMPSWAP_X2_OFFEN, 0x0, 101 },
    { BUFFER_ATOMIC_FCMPSWAP_X2_OFFEN_RTN, 0x0, 102 },
    { BUFFER_ATOMIC_FCMPSWAP_X2_OFFSET, 0x0, 103 },
    { BUFFER_ATOMIC_FCMPSWAP_X2_OFFSET_RTN, 0x0, 104 },
    { BUFFER_ATOMIC_FMAX_ADDR64, 0x0, 105 },
    { BUFFER_ATOMIC_FMAX_ADDR64_RTN, 0x0, 106 },
    { BUFFER_ATOMIC_FMAX_BOTHEN, 0x0, 107 },
    { BUFFER_ATOMIC_FMAX_BOTHEN_RTN, 0x0, 108 },
    { BUFFER_ATOMIC_FMAX_IDXEN, 0x0, 109 },
    { BUFFER_ATOMIC_FMAX_IDXEN_RTN, 0x0, 110 },
    { BUFFER_ATOMIC_FMAX_OFFEN, 0x0, 111 },
    { BUFFER_ATOMIC_FMAX_OFFEN_RTN, 0x0, 112 },
    { BUFFER_ATOMIC_FMAX_OFFSET, 0x0, 113 },
    { BUFFER_ATOMIC_FMAX_OFFSET_RTN, 0x0, 114 },
    { BUFFER_ATOMIC_FMAX_X2_ADDR64, 0x0, 115 },
    { BUFFER_ATOMIC_FMAX_X2_ADDR64_RTN, 0x0, 116 },
    { BUFFER_ATOMIC_FMAX_X2_BOTHEN, 0x0, 117 },
    { BUFFER_ATOMIC_FMAX_X2_BOTHEN_RTN, 0x0, 118 },
    { BUFFER_ATOMIC_FMAX_X2_IDXEN, 0x0, 119 },
    { BUFFER_ATOMIC_FMAX_X2_IDXEN_RTN, 0x0, 120 },
    { BUFFER_ATOMIC_FMAX_X2_OFFEN, 0x0, 121 },
    { BUFFER_ATOMIC_FMAX_X2_OFFEN_RTN, 0x0, 122 },
    { BUFFER_ATOMIC_FMAX_X2_OFFSET, 0x0, 123 },
    { BUFFER_ATOMIC_FMAX_X2_OFFSET_RTN, 0x0, 124 },
    { BUFFER_ATOMIC_FMIN_ADDR64, 0x0, 125 },
    { BUFFER_ATOMIC_FMIN_ADDR64_RTN, 0x0, 126 },
    { BUFFER_ATOMIC_FMIN_BOTHEN, 0x0, 127 },
    { BUFFER_ATOMIC_FMIN_BOTHEN_RTN, 0x0, 128 },
    { BUFFER_ATOMIC_FMIN_IDXEN, 0x0, 129 },
    { BUFFER_ATOMIC_FMIN_IDXEN_RTN, 0x0, 130 },
    { BUFFER_ATOMIC_FMIN_OFFEN, 0x0, 131 },
    { BUFFER_ATOMIC_FMIN_OFFEN_RTN, 0x0, 132 },
    { BUFFER_ATOMIC_FMIN_OFFSET, 0x0, 133 },
    { BUFFER_ATOMIC_FMIN_OFFSET_RTN, 0x0, 134 },
    { BUFFER_ATOMIC_FMIN_X2_ADDR64, 0x0, 135 },
    { BUFFER_ATOMIC_FMIN_X2_ADDR64_RTN, 0x0, 136 },
    { BUFFER_ATOMIC_FMIN_X2_BOTHEN, 0x0, 137 },
    { BUFFER_ATOMIC_FMIN_X2_BOTHEN_RTN, 0x0, 138 },
    { BUFFER_ATOMIC_FMIN_X2_IDXEN, 0x0, 139 },
    { BUFFER_ATOMIC_FMIN_X2_IDXEN_RTN, 0x0, 140 },
    { BUFFER_ATOMIC_FMIN_X2_OFFEN, 0x0, 141 },
    { BUFFER_ATOMIC_FMIN_X2_OFFEN_RTN, 0x0, 142 },
    { BUFFER_ATOMIC_FMIN_X2_OFFSET, 0x0, 143 },
    { BUFFER_ATOMIC_FMIN_X2_OFFSET_RTN, 0x0, 144 },
    { BUFFER_ATOMIC_INC_ADDR64, 0x0, 145 },
    { BUFFER_ATOMIC_INC_ADDR64_RTN, 0x0, 146 },
    { BUFFER_ATOMIC_INC_BOTHEN, 0x0, 147 },
    { BUFFER_ATOMIC_INC_BOTHEN_RTN, 0x0, 148 },
    { BUFFER_ATOMIC_INC_IDXEN, 0x0, 149 },
    { BUFFER_ATOMIC_INC_IDXEN_RTN, 0x0, 150 },
    { BUFFER_ATOMIC_INC_OFFEN, 0x0, 151 },
    { BUFFER_ATOMIC_INC_OFFEN_RTN, 0x0, 152 },
    { BUFFER_ATOMIC_INC_OFFSET, 0x0, 153 },
    { BUFFER_ATOMIC_INC_OFFSET_RTN, 0x0, 154 },
    { BUFFER_ATOMIC_INC_X2_ADDR64, 0x0, 155 },
    { BUFFER_ATOMIC_INC_X2_ADDR64_RTN, 0x0, 156 },
    { BUFFER_ATOMIC_INC_X2_BOTHEN, 0x0, 157 },
    { BUFFER_ATOMIC_INC_X2_BOTHEN_RTN, 0x0, 158 },
    { BUFFER_ATOMIC_INC_X2_IDXEN, 0x0, 159 },
    { BUFFER_ATOMIC_INC_X2_IDXEN_RTN, 0x0, 160 },
    { BUFFER_ATOMIC_INC_X2_OFFEN, 0x0, 161 },
    { BUFFER_ATOMIC_INC_X2_OFFEN_RTN, 0x0, 162 },
    { BUFFER_ATOMIC_INC_X2_OFFSET, 0x0, 163 },
    { BUFFER_ATOMIC_INC_X2_OFFSET_RTN, 0x0, 164 },
    { BUFFER_ATOMIC_OR_ADDR64, 0x0, 165 },
    { BUFFER_ATOMIC_OR_ADDR64_RTN, 0x0, 166 },
    { BUFFER_ATOMIC_OR_BOTHEN, 0x0, 167 },
    { BUFFER_ATOMIC_OR_BOTHEN_RTN, 0x0, 168 },
    { BUFFER_ATOMIC_OR_IDXEN, 0x0, 169 },
    { BUFFER_ATOMIC_OR_IDXEN_RTN, 0x0, 170 },
    { BUFFER_ATOMIC_OR_OFFEN, 0x0, 171 },
    { BUFFER_ATOMIC_OR_OFFEN_RTN, 0x0, 172 },
    { BUFFER_ATOMIC_OR_OFFSET, 0x0, 173 },
    { BUFFER_ATOMIC_OR_OFFSET_RTN, 0x0, 174 },
    { BUFFER_ATOMIC_OR_X2_ADDR64, 0x0, 175 },
    { BUFFER_ATOMIC_OR_X2_ADDR64_RTN, 0x0, 176 },
    { BUFFER_ATOMIC_OR_X2_BOTHEN, 0x0, 177 },
    { BUFFER_ATOMIC_OR_X2_BOTHEN_RTN, 0x0, 178 },
    { BUFFER_ATOMIC_OR_X2_IDXEN, 0x0, 179 },
    { BUFFER_ATOMIC_OR_X2_IDXEN_RTN, 0x0, 180 },
    { BUFFER_ATOMIC_OR_X2_OFFEN, 0x0, 181 },
    { BUFFER_ATOMIC_OR_X2_OFFEN_RTN, 0x0, 182 },
    { BUFFER_ATOMIC_OR_X2_OFFSET, 0x0, 183 },
    { BUFFER_ATOMIC_OR_X2_OFFSET_RTN, 0x0, 184 },
    { BUFFER_ATOMIC_PK_ADD_F16_ADDR64, 0x0, 185 },
    { BUFFER_ATOMIC_PK_ADD_F16_BOTHEN, 0x0, 186 },
    { BUFFER_ATOMIC_PK_ADD_F16_IDXEN, 0x0, 187 },
    { BUFFER_ATOMIC_PK_ADD_F16_OFFEN, 0x0, 188 },
    { BUFFER_ATOMIC_PK_ADD_F16_OFFSET, 0x0, 189 },
    { BUFFER_ATOMIC_SMAX_ADDR64, 0x0, 190 },
    { BUFFER_ATOMIC_SMAX_ADDR64_RTN, 0x0, 191 },
    { BUFFER_ATOMIC_SMAX_BOTHEN, 0x0, 192 },
    { BUFFER_ATOMIC_SMAX_BOTHEN_RTN, 0x0, 193 },
    { BUFFER_ATOMIC_SMAX_IDXEN, 0x0, 194 },
    { BUFFER_ATOMIC_SMAX_IDXEN_RTN, 0x0, 195 },
    { BUFFER_ATOMIC_SMAX_OFFEN, 0x0, 196 },
    { BUFFER_ATOMIC_SMAX_OFFEN_RTN, 0x0, 197 },
    { BUFFER_ATOMIC_SMAX_OFFSET, 0x0, 198 },
    { BUFFER_ATOMIC_SMAX_OFFSET_RTN, 0x0, 199 },
    { BUFFER_ATOMIC_SMAX_X2_ADDR64, 0x0, 200 },
    { BUFFER_ATOMIC_SMAX_X2_ADDR64_RTN, 0x0, 201 },
    { BUFFER_ATOMIC_SMAX_X2_BOTHEN, 0x0, 202 },
    { BUFFER_ATOMIC_SMAX_X2_BOTHEN_RTN, 0x0, 203 },
    { BUFFER_ATOMIC_SMAX_X2_IDXEN, 0x0, 204 },
    { BUFFER_ATOMIC_SMAX_X2_IDXEN_RTN, 0x0, 205 },
    { BUFFER_ATOMIC_SMAX_X2_OFFEN, 0x0, 206 },
    { BUFFER_ATOMIC_SMAX_X2_OFFEN_RTN, 0x0, 207 },
    { BUFFER_ATOMIC_SMAX_X2_OFFSET, 0x0, 208 },
    { BUFFER_ATOMIC_SMAX_X2_OFFSET_RTN, 0x0, 209 },
    { BUFFER_ATOMIC_SMIN_ADDR64, 0x0, 210 },
    { BUFFER_ATOMIC_SMIN_ADDR64_RTN, 0x0, 211 },
    { BUFFER_ATOMIC_SMIN_BOTHEN, 0x0, 212 },
    { BUFFER_ATOMIC_SMIN_BOTHEN_RTN, 0x0, 213 },
    { BUFFER_ATOMIC_SMIN_IDXEN, 0x0, 214 },
    { BUFFER_ATOMIC_SMIN_IDXEN_RTN, 0x0, 215 },
    { BUFFER_ATOMIC_SMIN_OFFEN, 0x0, 216 },
    { BUFFER_ATOMIC_SMIN_OFFEN_RTN, 0x0, 217 },
    { BUFFER_ATOMIC_SMIN_OFFSET, 0x0, 218 },
    { BUFFER_ATOMIC_SMIN_OFFSET_RTN, 0x0, 219 },
    { BUFFER_ATOMIC_SMIN_X2_ADDR64, 0x0, 220 },
    { BUFFER_ATOMIC_SMIN_X2_ADDR64_RTN, 0x0, 221 },
    { BUFFER_ATOMIC_SMIN_X2_BOTHEN, 0x0, 222 },
    { BUFFER_ATOMIC_SMIN_X2_BOTHEN_RTN, 0x0, 223 },
    { BUFFER_ATOMIC_SMIN_X2_IDXEN, 0x0, 224 },
    { BUFFER_ATOMIC_SMIN_X2_IDXEN_RTN, 0x0, 225 },
    { BUFFER_ATOMIC_SMIN_X2_OFFEN, 0x0, 226 },
    { BUFFER_ATOMIC_SMIN_X2_OFFEN_RTN, 0x0, 227 },
    { BUFFER_ATOMIC_SMIN_X2_OFFSET, 0x0, 228 },
    { BUFFER_ATOMIC_SMIN_X2_OFFSET_RTN, 0x0, 229 },
    { BUFFER_ATOMIC_SUB_ADDR64, 0x0, 230 },
    { BUFFER_ATOMIC_SUB_ADDR64_RTN, 0x0, 231 },
    { BUFFER_ATOMIC_SUB_BOTHEN, 0x0, 232 },
    { BUFFER_ATOMIC_SUB_BOTHEN_RTN, 0x0, 233 },
    { BUFFER_ATOMIC_SUB_IDXEN, 0x0, 234 },
    { BUFFER_ATOMIC_SUB_IDXEN_RTN, 0x0, 235 },
    { BUFFER_ATOMIC_SUB_OFFEN, 0x0, 236 },
    { BUFFER_ATOMIC_SUB_OFFEN_RTN, 0x0, 237 },
    { BUFFER_ATOMIC_SUB_OFFSET, 0x0, 238 },
    { BUFFER_ATOMIC_SUB_OFFSET_RTN, 0x0, 239 },
    { BUFFER_ATOMIC_SUB_X2_ADDR64, 0x0, 240 },
    { BUFFER_ATOMIC_SUB_X2_ADDR64_RTN, 0x0, 241 },
    { BUFFER_ATOMIC_SUB_X2_BOTHEN, 0x0, 242 },
    { BUFFER_ATOMIC_SUB_X2_BOTHEN_RTN, 0x0, 243 },
    { BUFFER_ATOMIC_SUB_X2_IDXEN, 0x0, 244 },
    { BUFFER_ATOMIC_SUB_X2_IDXEN_RTN, 0x0, 245 },
    { BUFFER_ATOMIC_SUB_X2_OFFEN, 0x0, 246 },
    { BUFFER_ATOMIC_SUB_X2_OFFEN_RTN, 0x0, 247 },
    { BUFFER_ATOMIC_SUB_X2_OFFSET, 0x0, 248 },
    { BUFFER_ATOMIC_SUB_X2_OFFSET_RTN, 0x0, 249 },
    { BUFFER_ATOMIC_SWAP_ADDR64, 0x0, 250 },
    { BUFFER_ATOMIC_SWAP_ADDR64_RTN, 0x0, 251 },
    { BUFFER_ATOMIC_SWAP_BOTHEN, 0x0, 252 },
    { BUFFER_ATOMIC_SWAP_BOTHEN_RTN, 0x0, 253 },
    { BUFFER_ATOMIC_SWAP_IDXEN, 0x0, 254 },
    { BUFFER_ATOMIC_SWAP_IDXEN_RTN, 0x0, 255 },
    { BUFFER_ATOMIC_SWAP_OFFEN, 0x0, 256 },
    { BUFFER_ATOMIC_SWAP_OFFEN_RTN, 0x0, 257 },
    { BUFFER_ATOMIC_SWAP_OFFSET, 0x0, 258 },
    { BUFFER_ATOMIC_SWAP_OFFSET_RTN, 0x0, 259 },
    { BUFFER_ATOMIC_SWAP_X2_ADDR64, 0x0, 260 },
    { BUFFER_ATOMIC_SWAP_X2_ADDR64_RTN, 0x0, 261 },
    { BUFFER_ATOMIC_SWAP_X2_BOTHEN, 0x0, 262 },
    { BUFFER_ATOMIC_SWAP_X2_BOTHEN_RTN, 0x0, 263 },
    { BUFFER_ATOMIC_SWAP_X2_IDXEN, 0x0, 264 },
    { BUFFER_ATOMIC_SWAP_X2_IDXEN_RTN, 0x0, 265 },
    { BUFFER_ATOMIC_SWAP_X2_OFFEN, 0x0, 266 },
    { BUFFER_ATOMIC_SWAP_X2_OFFEN_RTN, 0x0, 267 },
    { BUFFER_ATOMIC_SWAP_X2_OFFSET, 0x0, 268 },
    { BUFFER_ATOMIC_SWAP_X2_OFFSET_RTN, 0x0, 269 },
    { BUFFER_ATOMIC_UMAX_ADDR64, 0x0, 270 },
    { BUFFER_ATOMIC_UMAX_ADDR64_RTN, 0x0, 271 },
    { BUFFER_ATOMIC_UMAX_BOTHEN, 0x0, 272 },
    { BUFFER_ATOMIC_UMAX_BOTHEN_RTN, 0x0, 273 },
    { BUFFER_ATOMIC_UMAX_IDXEN, 0x0, 274 },
    { BUFFER_ATOMIC_UMAX_IDXEN_RTN, 0x0, 275 },
    { BUFFER_ATOMIC_UMAX_OFFEN, 0x0, 276 },
    { BUFFER_ATOMIC_UMAX_OFFEN_RTN, 0x0, 277 },
    { BUFFER_ATOMIC_UMAX_OFFSET, 0x0, 278 },
    { BUFFER_ATOMIC_UMAX_OFFSET_RTN, 0x0, 279 },
    { BUFFER_ATOMIC_UMAX_X2_ADDR64, 0x0, 280 },
    { BUFFER_ATOMIC_UMAX_X2_ADDR64_RTN, 0x0, 281 },
    { BUFFER_ATOMIC_UMAX_X2_BOTHEN, 0x0, 282 },
    { BUFFER_ATOMIC_UMAX_X2_BOTHEN_RTN, 0x0, 283 },
    { BUFFER_ATOMIC_UMAX_X2_IDXEN, 0x0, 284 },
    { BUFFER_ATOMIC_UMAX_X2_IDXEN_RTN, 0x0, 285 },
    { BUFFER_ATOMIC_UMAX_X2_OFFEN, 0x0, 286 },
    { BUFFER_ATOMIC_UMAX_X2_OFFEN_RTN, 0x0, 287 },
    { BUFFER_ATOMIC_UMAX_X2_OFFSET, 0x0, 288 },
    { BUFFER_ATOMIC_UMAX_X2_OFFSET_RTN, 0x0, 289 },
    { BUFFER_ATOMIC_UMIN_ADDR64, 0x0, 290 },
    { BUFFER_ATOMIC_UMIN_ADDR64_RTN, 0x0, 291 },
    { BUFFER_ATOMIC_UMIN_BOTHEN, 0x0, 292 },
    { BUFFER_ATOMIC_UMIN_BOTHEN_RTN, 0x0, 293 },
    { BUFFER_ATOMIC_UMIN_IDXEN, 0x0, 294 },
    { BUFFER_ATOMIC_UMIN_IDXEN_RTN, 0x0, 295 },
    { BUFFER_ATOMIC_UMIN_OFFEN, 0x0, 296 },
    { BUFFER_ATOMIC_UMIN_OFFEN_RTN, 0x0, 297 },
    { BUFFER_ATOMIC_UMIN_OFFSET, 0x0, 298 },
    { BUFFER_ATOMIC_UMIN_OFFSET_RTN, 0x0, 299 },
    { BUFFER_ATOMIC_UMIN_X2_ADDR64, 0x0, 300 },
    { BUFFER_ATOMIC_UMIN_X2_ADDR64_RTN, 0x0, 301 },
    { BUFFER_ATOMIC_UMIN_X2_BOTHEN, 0x0, 302 },
    { BUFFER_ATOMIC_UMIN_X2_BOTHEN_RTN, 0x0, 303 },
    { BUFFER_ATOMIC_UMIN_X2_IDXEN, 0x0, 304 },
    { BUFFER_ATOMIC_UMIN_X2_IDXEN_RTN, 0x0, 305 },
    { BUFFER_ATOMIC_UMIN_X2_OFFEN, 0x0, 306 },
    { BUFFER_ATOMIC_UMIN_X2_OFFEN_RTN, 0x0, 307 },
    { BUFFER_ATOMIC_UMIN_X2_OFFSET, 0x0, 308 },
    { BUFFER_ATOMIC_UMIN_X2_OFFSET_RTN, 0x0, 309 },
    { BUFFER_ATOMIC_XOR_ADDR64, 0x0, 310 },
    { BUFFER_ATOMIC_XOR_ADDR64_RTN, 0x0, 311 },
    { BUFFER_ATOMIC_XOR_BOTHEN, 0x0, 312 },
    { BUFFER_ATOMIC_XOR_BOTHEN_RTN, 0x0, 313 },
    { BUFFER_ATOMIC_XOR_IDXEN, 0x0, 314 },
    { BUFFER_ATOMIC_XOR_IDXEN_RTN, 0x0, 315 },
    { BUFFER_ATOMIC_XOR_OFFEN, 0x0, 316 },
    { BUFFER_ATOMIC_XOR_OFFEN_RTN, 0x0, 317 },
    { BUFFER_ATOMIC_XOR_OFFSET, 0x0, 318 },
    { BUFFER_ATOMIC_XOR_OFFSET_RTN, 0x0, 319 },
    { BUFFER_ATOMIC_XOR_X2_ADDR64, 0x0, 320 },
    { BUFFER_ATOMIC_XOR_X2_ADDR64_RTN, 0x0, 321 },
    { BUFFER_ATOMIC_XOR_X2_BOTHEN, 0x0, 322 },
    { BUFFER_ATOMIC_XOR_X2_BOTHEN_RTN, 0x0, 323 },
    { BUFFER_ATOMIC_XOR_X2_IDXEN, 0x0, 324 },
    { BUFFER_ATOMIC_XOR_X2_IDXEN_RTN, 0x0, 325 },
    { BUFFER_ATOMIC_XOR_X2_OFFEN, 0x0, 326 },
    { BUFFER_ATOMIC_XOR_X2_OFFEN_RTN, 0x0, 327 },
    { BUFFER_ATOMIC_XOR_X2_OFFSET, 0x0, 328 },
    { BUFFER_ATOMIC_XOR_X2_OFFSET_RTN, 0x0, 329 },
    { BUFFER_GL0_INV, 0x0, 330 },
    { BUFFER_GL1_INV, 0x0, 331 },
    { BUFFER_LOAD_DWORD_ADDR64, 0x1, 386 },
    { BUFFER_LOAD_DWORD_ADDR64, 0x2, 332 },
    { BUFFER_LOAD_DWORD_ADDR64, 0x3, 350 },
    { BUFFER_LOAD_DWORD_ADDR64, 0x4, 368 },
    { BUFFER_LOAD_DWORD_BOTHEN, 0x1, 387 },
    { BUFFER_LOAD_DWORD_BOTHEN, 0x2, 333 },
    { BUFFER_LOAD_DWORD_BOTHEN, 0x3, 351 },
    { BUFFER_LOAD_DWORD_BOTHEN, 0x4, 369 },
    { BUFFER_LOAD_DWORD_BOTHEN_exact, 0x1, 388 },
    { BUFFER_LOAD_DWORD_BOTHEN_exact, 0x2, 334 },
    { BUFFER_LOAD_DWORD_BOTHEN_exact, 0x3, 352 },
    { BUFFER_LOAD_DWORD_BOTHEN_exact, 0x4, 370 },
    { BUFFER_LOAD_DWORD_IDXEN, 0x1, 389 },
    { BUFFER_LOAD_DWORD_IDXEN, 0x2, 335 },
    { BUFFER_LOAD_DWORD_IDXEN, 0x3, 353 },
    { BUFFER_LOAD_DWORD_IDXEN, 0x4, 371 },
    { BUFFER_LOAD_DWORD_IDXEN_exact, 0x1, 390 },
    { BUFFER_LOAD_DWORD_IDXEN_exact, 0x2, 336 },
    { BUFFER_LOAD_DWORD_IDXEN_exact, 0x3, 354 },
    { BUFFER_LOAD_DWORD_IDXEN_exact, 0x4, 372 },
    { BUFFER_LOAD_DWORD_LDS_ADDR64, 0x1, 391 },
    { BUFFER_LOAD_DWORD_LDS_ADDR64, 0x2, 337 },
    { BUFFER_LOAD_DWORD_LDS_ADDR64, 0x3, 355 },
    { BUFFER_LOAD_DWORD_LDS_ADDR64, 0x4, 373 },
    { BUFFER_LOAD_DWORD_LDS_BOTHEN, 0x1, 392 },
    { BUFFER_LOAD_DWORD_LDS_BOTHEN, 0x2, 338 },
    { BUFFER_LOAD_DWORD_LDS_BOTHEN, 0x3, 356 },
    { BUFFER_LOAD_DWORD_LDS_BOTHEN, 0x4, 374 },
    { BUFFER_LOAD_DWORD_LDS_BOTHEN_exact, 0x1, 393 },
    { BUFFER_LOAD_DWORD_LDS_BOTHEN_exact, 0x2, 339 },
    { BUFFER_LOAD_DWORD_LDS_BOTHEN_exact, 0x3, 357 },
    { BUFFER_LOAD_DWORD_LDS_BOTHEN_exact, 0x4, 375 },
    { BUFFER_LOAD_DWORD_LDS_IDXEN, 0x1, 394 },
    { BUFFER_LOAD_DWORD_LDS_IDXEN, 0x2, 340 },
    { BUFFER_LOAD_DWORD_LDS_IDXEN, 0x3, 358 },
    { BUFFER_LOAD_DWORD_LDS_IDXEN, 0x4, 376 },
    { BUFFER_LOAD_DWORD_LDS_IDXEN_exact, 0x1, 395 },
    { BUFFER_LOAD_DWORD_LDS_IDXEN_exact, 0x2, 341 },
    { BUFFER_LOAD_DWORD_LDS_IDXEN_exact, 0x3, 359 },
    { BUFFER_LOAD_DWORD_LDS_IDXEN_exact, 0x4, 377 },
    { BUFFER_LOAD_DWORD_LDS_OFFEN, 0x1, 396 },
    { BUFFER_LOAD_DWORD_LDS_OFFEN, 0x2, 342 },
    { BUFFER_LOAD_DWORD_LDS_OFFEN, 0x3, 360 },
    { BUFFER_LOAD_DWORD_LDS_OFFEN, 0x4, 378 },
    { BUFFER_LOAD_DWORD_LDS_OFFEN_exact, 0x1, 397 },
    { BUFFER_LOAD_DWORD_LDS_OFFEN_exact, 0x2, 343 },
    { BUFFER_LOAD_DWORD_LDS_OFFEN_exact, 0x3, 361 },
    { BUFFER_LOAD_DWORD_LDS_OFFEN_exact, 0x4, 379 },
    { BUFFER_LOAD_DWORD_LDS_OFFSET, 0x1, 398 },
    { BUFFER_LOAD_DWORD_LDS_OFFSET, 0x2, 344 },
    { BUFFER_LOAD_DWORD_LDS_OFFSET, 0x3, 362 },
    { BUFFER_LOAD_DWORD_LDS_OFFSET, 0x4, 380 },
    { BUFFER_LOAD_DWORD_LDS_OFFSET_exact, 0x1, 399 },
    { BUFFER_LOAD_DWORD_LDS_OFFSET_exact, 0x2, 345 },
    { BUFFER_LOAD_DWORD_LDS_OFFSET_exact, 0x3, 363 },
    { BUFFER_LOAD_DWORD_LDS_OFFSET_exact, 0x4, 381 },
    { BUFFER_LOAD_DWORD_OFFEN, 0x1, 400 },
    { BUFFER_LOAD_DWORD_OFFEN, 0x2, 346 },
    { BUFFER_LOAD_DWORD_OFFEN, 0x3, 364 },
    { BUFFER_LOAD_DWORD_OFFEN, 0x4, 382 },
    { BUFFER_LOAD_DWORD_OFFEN_exact, 0x1, 401 },
    { BUFFER_LOAD_DWORD_OFFEN_exact, 0x2, 347 },
    { BUFFER_LOAD_DWORD_OFFEN_exact, 0x3, 365 },
    { BUFFER_LOAD_DWORD_OFFEN_exact, 0x4, 383 },
    { BUFFER_LOAD_DWORD_OFFSET, 0x1, 402 },
    { BUFFER_LOAD_DWORD_OFFSET, 0x2, 348 },
    { BUFFER_LOAD_DWORD_OFFSET, 0x3, 366 },
    { BUFFER_LOAD_DWORD_OFFSET, 0x4, 384 },
    { BUFFER_LOAD_DWORD_OFFSET_exact, 0x1, 403 },
    { BUFFER_LOAD_DWORD_OFFSET_exact, 0x2, 349 },
    { BUFFER_LOAD_DWORD_OFFSET_exact, 0x3, 367 },
    { BUFFER_LOAD_DWORD_OFFSET_exact, 0x4, 385 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_ADDR64, 0x1, 404 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_BOTHEN, 0x1, 405 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_BOTHEN_exact, 0x1, 406 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_IDXEN, 0x1, 407 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_IDXEN_exact, 0x1, 408 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_OFFEN, 0x1, 409 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_OFFEN_exact, 0x1, 410 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_OFFSET, 0x1, 411 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_OFFSET_exact, 0x1, 412 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_ADDR64, 0x4, 413 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN, 0x4, 414 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN_exact, 0x4, 415 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_IDXEN, 0x4, 416 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_IDXEN_exact, 0x4, 417 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_OFFEN, 0x4, 418 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_OFFEN_exact, 0x4, 419 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_OFFSET, 0x4, 420 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_OFFSET_exact, 0x4, 421 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_ADDR64, 0x4, 422 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN, 0x4, 423 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, 0x4, 424 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN, 0x4, 425 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN_exact, 0x4, 426 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN, 0x4, 427 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN_exact, 0x4, 428 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET, 0x4, 429 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET_exact, 0x4, 430 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_ADDR64, 0x3, 431 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN, 0x3, 432 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN_exact, 0x3, 433 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_IDXEN, 0x3, 434 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_IDXEN_exact, 0x3, 435 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_OFFEN, 0x3, 436 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_OFFEN_exact, 0x3, 437 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_OFFSET, 0x3, 438 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_OFFSET_exact, 0x3, 439 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_ADDR64, 0x3, 440 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN, 0x3, 441 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, 0x3, 442 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN, 0x3, 443 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN_exact, 0x3, 444 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN, 0x3, 445 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN_exact, 0x3, 446 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET, 0x3, 447 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET_exact, 0x3, 448 },
    { BUFFER_LOAD_FORMAT_D16_XY_ADDR64, 0x2, 449 },
    { BUFFER_LOAD_FORMAT_D16_XY_BOTHEN, 0x2, 450 },
    { BUFFER_LOAD_FORMAT_D16_XY_BOTHEN_exact, 0x2, 451 },
    { BUFFER_LOAD_FORMAT_D16_XY_IDXEN, 0x2, 452 },
    { BUFFER_LOAD_FORMAT_D16_XY_IDXEN_exact, 0x2, 453 },
    { BUFFER_LOAD_FORMAT_D16_XY_OFFEN, 0x2, 454 },
    { BUFFER_LOAD_FORMAT_D16_XY_OFFEN_exact, 0x2, 455 },
    { BUFFER_LOAD_FORMAT_D16_XY_OFFSET, 0x2, 456 },
    { BUFFER_LOAD_FORMAT_D16_XY_OFFSET_exact, 0x2, 457 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_ADDR64, 0x2, 458 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN, 0x2, 459 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN_exact, 0x2, 460 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN, 0x2, 461 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN_exact, 0x2, 462 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN, 0x2, 463 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN_exact, 0x2, 464 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET, 0x2, 465 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET_exact, 0x2, 466 },
    { BUFFER_LOAD_FORMAT_D16_X_ADDR64, 0x1, 467 },
    { BUFFER_LOAD_FORMAT_D16_X_BOTHEN, 0x1, 468 },
    { BUFFER_LOAD_FORMAT_D16_X_BOTHEN_exact, 0x1, 469 },
    { BUFFER_LOAD_FORMAT_D16_X_IDXEN, 0x1, 470 },
    { BUFFER_LOAD_FORMAT_D16_X_IDXEN_exact, 0x1, 471 },
    { BUFFER_LOAD_FORMAT_D16_X_OFFEN, 0x1, 472 },
    { BUFFER_LOAD_FORMAT_D16_X_OFFEN_exact, 0x1, 473 },
    { BUFFER_LOAD_FORMAT_D16_X_OFFSET, 0x1, 474 },
    { BUFFER_LOAD_FORMAT_D16_X_OFFSET_exact, 0x1, 475 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_ADDR64, 0x1, 476 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN, 0x1, 477 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN_exact, 0x1, 478 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN, 0x1, 479 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN_exact, 0x1, 480 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN, 0x1, 481 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN_exact, 0x1, 482 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET, 0x1, 483 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET_exact, 0x1, 484 },
    { BUFFER_LOAD_FORMAT_XYZW_ADDR64, 0x4, 485 },
    { BUFFER_LOAD_FORMAT_XYZW_BOTHEN, 0x4, 486 },
    { BUFFER_LOAD_FORMAT_XYZW_BOTHEN_exact, 0x4, 487 },
    { BUFFER_LOAD_FORMAT_XYZW_IDXEN, 0x4, 488 },
    { BUFFER_LOAD_FORMAT_XYZW_IDXEN_exact, 0x4, 489 },
    { BUFFER_LOAD_FORMAT_XYZW_OFFEN, 0x4, 490 },
    { BUFFER_LOAD_FORMAT_XYZW_OFFEN_exact, 0x4, 491 },
    { BUFFER_LOAD_FORMAT_XYZW_OFFSET, 0x4, 492 },
    { BUFFER_LOAD_FORMAT_XYZW_OFFSET_exact, 0x4, 493 },
    { BUFFER_LOAD_FORMAT_XYZ_ADDR64, 0x3, 494 },
    { BUFFER_LOAD_FORMAT_XYZ_BOTHEN, 0x3, 495 },
    { BUFFER_LOAD_FORMAT_XYZ_BOTHEN_exact, 0x3, 496 },
    { BUFFER_LOAD_FORMAT_XYZ_IDXEN, 0x3, 497 },
    { BUFFER_LOAD_FORMAT_XYZ_IDXEN_exact, 0x3, 498 },
    { BUFFER_LOAD_FORMAT_XYZ_OFFEN, 0x3, 499 },
    { BUFFER_LOAD_FORMAT_XYZ_OFFEN_exact, 0x3, 500 },
    { BUFFER_LOAD_FORMAT_XYZ_OFFSET, 0x3, 501 },
    { BUFFER_LOAD_FORMAT_XYZ_OFFSET_exact, 0x3, 502 },
    { BUFFER_LOAD_FORMAT_XY_ADDR64, 0x2, 503 },
    { BUFFER_LOAD_FORMAT_XY_BOTHEN, 0x2, 504 },
    { BUFFER_LOAD_FORMAT_XY_BOTHEN_exact, 0x2, 505 },
    { BUFFER_LOAD_FORMAT_XY_IDXEN, 0x2, 506 },
    { BUFFER_LOAD_FORMAT_XY_IDXEN_exact, 0x2, 507 },
    { BUFFER_LOAD_FORMAT_XY_OFFEN, 0x2, 508 },
    { BUFFER_LOAD_FORMAT_XY_OFFEN_exact, 0x2, 509 },
    { BUFFER_LOAD_FORMAT_XY_OFFSET, 0x2, 510 },
    { BUFFER_LOAD_FORMAT_XY_OFFSET_exact, 0x2, 511 },
    { BUFFER_LOAD_FORMAT_X_ADDR64, 0x1, 512 },
    { BUFFER_LOAD_FORMAT_X_BOTHEN, 0x1, 513 },
    { BUFFER_LOAD_FORMAT_X_BOTHEN_exact, 0x1, 514 },
    { BUFFER_LOAD_FORMAT_X_IDXEN, 0x1, 515 },
    { BUFFER_LOAD_FORMAT_X_IDXEN_exact, 0x1, 516 },
    { BUFFER_LOAD_FORMAT_X_LDS_ADDR64, 0x1, 517 },
    { BUFFER_LOAD_FORMAT_X_LDS_BOTHEN, 0x1, 518 },
    { BUFFER_LOAD_FORMAT_X_LDS_BOTHEN_exact, 0x1, 519 },
    { BUFFER_LOAD_FORMAT_X_LDS_IDXEN, 0x1, 520 },
    { BUFFER_LOAD_FORMAT_X_LDS_IDXEN_exact, 0x1, 521 },
    { BUFFER_LOAD_FORMAT_X_LDS_OFFEN, 0x1, 522 },
    { BUFFER_LOAD_FORMAT_X_LDS_OFFEN_exact, 0x1, 523 },
    { BUFFER_LOAD_FORMAT_X_LDS_OFFSET, 0x1, 524 },
    { BUFFER_LOAD_FORMAT_X_LDS_OFFSET_exact, 0x1, 525 },
    { BUFFER_LOAD_FORMAT_X_OFFEN, 0x1, 526 },
    { BUFFER_LOAD_FORMAT_X_OFFEN_exact, 0x1, 527 },
    { BUFFER_LOAD_FORMAT_X_OFFSET, 0x1, 528 },
    { BUFFER_LOAD_FORMAT_X_OFFSET_exact, 0x1, 529 },
    { BUFFER_LOAD_SBYTE_ADDR64, 0x1, 530 },
    { BUFFER_LOAD_SBYTE_BOTHEN, 0x1, 531 },
    { BUFFER_LOAD_SBYTE_BOTHEN_exact, 0x1, 532 },
    { BUFFER_LOAD_SBYTE_D16_ADDR64, 0x1, 533 },
    { BUFFER_LOAD_SBYTE_D16_BOTHEN, 0x1, 534 },
    { BUFFER_LOAD_SBYTE_D16_BOTHEN_exact, 0x1, 535 },
    { BUFFER_LOAD_SBYTE_D16_HI_ADDR64, 0x1, 536 },
    { BUFFER_LOAD_SBYTE_D16_HI_BOTHEN, 0x1, 537 },
    { BUFFER_LOAD_SBYTE_D16_HI_BOTHEN_exact, 0x1, 538 },
    { BUFFER_LOAD_SBYTE_D16_HI_IDXEN, 0x1, 539 },
    { BUFFER_LOAD_SBYTE_D16_HI_IDXEN_exact, 0x1, 540 },
    { BUFFER_LOAD_SBYTE_D16_HI_OFFEN, 0x1, 541 },
    { BUFFER_LOAD_SBYTE_D16_HI_OFFEN_exact, 0x1, 542 },
    { BUFFER_LOAD_SBYTE_D16_HI_OFFSET, 0x1, 543 },
    { BUFFER_LOAD_SBYTE_D16_HI_OFFSET_exact, 0x1, 544 },
    { BUFFER_LOAD_SBYTE_D16_IDXEN, 0x1, 545 },
    { BUFFER_LOAD_SBYTE_D16_IDXEN_exact, 0x1, 546 },
    { BUFFER_LOAD_SBYTE_D16_OFFEN, 0x1, 547 },
    { BUFFER_LOAD_SBYTE_D16_OFFEN_exact, 0x1, 548 },
    { BUFFER_LOAD_SBYTE_D16_OFFSET, 0x1, 549 },
    { BUFFER_LOAD_SBYTE_D16_OFFSET_exact, 0x1, 550 },
    { BUFFER_LOAD_SBYTE_IDXEN, 0x1, 551 },
    { BUFFER_LOAD_SBYTE_IDXEN_exact, 0x1, 552 },
    { BUFFER_LOAD_SBYTE_LDS_ADDR64, 0x1, 553 },
    { BUFFER_LOAD_SBYTE_LDS_BOTHEN, 0x1, 554 },
    { BUFFER_LOAD_SBYTE_LDS_BOTHEN_exact, 0x1, 555 },
    { BUFFER_LOAD_SBYTE_LDS_IDXEN, 0x1, 556 },
    { BUFFER_LOAD_SBYTE_LDS_IDXEN_exact, 0x1, 557 },
    { BUFFER_LOAD_SBYTE_LDS_OFFEN, 0x1, 558 },
    { BUFFER_LOAD_SBYTE_LDS_OFFEN_exact, 0x1, 559 },
    { BUFFER_LOAD_SBYTE_LDS_OFFSET, 0x1, 560 },
    { BUFFER_LOAD_SBYTE_LDS_OFFSET_exact, 0x1, 561 },
    { BUFFER_LOAD_SBYTE_OFFEN, 0x1, 562 },
    { BUFFER_LOAD_SBYTE_OFFEN_exact, 0x1, 563 },
    { BUFFER_LOAD_SBYTE_OFFSET, 0x1, 564 },
    { BUFFER_LOAD_SBYTE_OFFSET_exact, 0x1, 565 },
    { BUFFER_LOAD_SHORT_D16_ADDR64, 0x1, 566 },
    { BUFFER_LOAD_SHORT_D16_BOTHEN, 0x1, 567 },
    { BUFFER_LOAD_SHORT_D16_BOTHEN_exact, 0x1, 568 },
    { BUFFER_LOAD_SHORT_D16_HI_ADDR64, 0x1, 569 },
    { BUFFER_LOAD_SHORT_D16_HI_BOTHEN, 0x1, 570 },
    { BUFFER_LOAD_SHORT_D16_HI_BOTHEN_exact, 0x1, 571 },
    { BUFFER_LOAD_SHORT_D16_HI_IDXEN, 0x1, 572 },
    { BUFFER_LOAD_SHORT_D16_HI_IDXEN_exact, 0x1, 573 },
    { BUFFER_LOAD_SHORT_D16_HI_OFFEN, 0x1, 574 },
    { BUFFER_LOAD_SHORT_D16_HI_OFFEN_exact, 0x1, 575 },
    { BUFFER_LOAD_SHORT_D16_HI_OFFSET, 0x1, 576 },
    { BUFFER_LOAD_SHORT_D16_HI_OFFSET_exact, 0x1, 577 },
    { BUFFER_LOAD_SHORT_D16_IDXEN, 0x1, 578 },
    { BUFFER_LOAD_SHORT_D16_IDXEN_exact, 0x1, 579 },
    { BUFFER_LOAD_SHORT_D16_OFFEN, 0x1, 580 },
    { BUFFER_LOAD_SHORT_D16_OFFEN_exact, 0x1, 581 },
    { BUFFER_LOAD_SHORT_D16_OFFSET, 0x1, 582 },
    { BUFFER_LOAD_SHORT_D16_OFFSET_exact, 0x1, 583 },
    { BUFFER_LOAD_SSHORT_ADDR64, 0x1, 584 },
    { BUFFER_LOAD_SSHORT_BOTHEN, 0x1, 585 },
    { BUFFER_LOAD_SSHORT_BOTHEN_exact, 0x1, 586 },
    { BUFFER_LOAD_SSHORT_IDXEN, 0x1, 587 },
    { BUFFER_LOAD_SSHORT_IDXEN_exact, 0x1, 588 },
    { BUFFER_LOAD_SSHORT_LDS_ADDR64, 0x1, 589 },
    { BUFFER_LOAD_SSHORT_LDS_BOTHEN, 0x1, 590 },
    { BUFFER_LOAD_SSHORT_LDS_BOTHEN_exact, 0x1, 591 },
    { BUFFER_LOAD_SSHORT_LDS_IDXEN, 0x1, 592 },
    { BUFFER_LOAD_SSHORT_LDS_IDXEN_exact, 0x1, 593 },
    { BUFFER_LOAD_SSHORT_LDS_OFFEN, 0x1, 594 },
    { BUFFER_LOAD_SSHORT_LDS_OFFEN_exact, 0x1, 595 },
    { BUFFER_LOAD_SSHORT_LDS_OFFSET, 0x1, 596 },
    { BUFFER_LOAD_SSHORT_LDS_OFFSET_exact, 0x1, 597 },
    { BUFFER_LOAD_SSHORT_OFFEN, 0x1, 598 },
    { BUFFER_LOAD_SSHORT_OFFEN_exact, 0x1, 599 },
    { BUFFER_LOAD_SSHORT_OFFSET, 0x1, 600 },
    { BUFFER_LOAD_SSHORT_OFFSET_exact, 0x1, 601 },
    { BUFFER_LOAD_UBYTE_ADDR64, 0x1, 602 },
    { BUFFER_LOAD_UBYTE_BOTHEN, 0x1, 603 },
    { BUFFER_LOAD_UBYTE_BOTHEN_exact, 0x1, 604 },
    { BUFFER_LOAD_UBYTE_D16_ADDR64, 0x1, 605 },
    { BUFFER_LOAD_UBYTE_D16_BOTHEN, 0x1, 606 },
    { BUFFER_LOAD_UBYTE_D16_BOTHEN_exact, 0x1, 607 },
    { BUFFER_LOAD_UBYTE_D16_HI_ADDR64, 0x1, 608 },
    { BUFFER_LOAD_UBYTE_D16_HI_BOTHEN, 0x1, 609 },
    { BUFFER_LOAD_UBYTE_D16_HI_BOTHEN_exact, 0x1, 610 },
    { BUFFER_LOAD_UBYTE_D16_HI_IDXEN, 0x1, 611 },
    { BUFFER_LOAD_UBYTE_D16_HI_IDXEN_exact, 0x1, 612 },
    { BUFFER_LOAD_UBYTE_D16_HI_OFFEN, 0x1, 613 },
    { BUFFER_LOAD_UBYTE_D16_HI_OFFEN_exact, 0x1, 614 },
    { BUFFER_LOAD_UBYTE_D16_HI_OFFSET, 0x1, 615 },
    { BUFFER_LOAD_UBYTE_D16_HI_OFFSET_exact, 0x1, 616 },
    { BUFFER_LOAD_UBYTE_D16_IDXEN, 0x1, 617 },
    { BUFFER_LOAD_UBYTE_D16_IDXEN_exact, 0x1, 618 },
    { BUFFER_LOAD_UBYTE_D16_OFFEN, 0x1, 619 },
    { BUFFER_LOAD_UBYTE_D16_OFFEN_exact, 0x1, 620 },
    { BUFFER_LOAD_UBYTE_D16_OFFSET, 0x1, 621 },
    { BUFFER_LOAD_UBYTE_D16_OFFSET_exact, 0x1, 622 },
    { BUFFER_LOAD_UBYTE_IDXEN, 0x1, 623 },
    { BUFFER_LOAD_UBYTE_IDXEN_exact, 0x1, 624 },
    { BUFFER_LOAD_UBYTE_LDS_ADDR64, 0x1, 625 },
    { BUFFER_LOAD_UBYTE_LDS_BOTHEN, 0x1, 626 },
    { BUFFER_LOAD_UBYTE_LDS_BOTHEN_exact, 0x1, 627 },
    { BUFFER_LOAD_UBYTE_LDS_IDXEN, 0x1, 628 },
    { BUFFER_LOAD_UBYTE_LDS_IDXEN_exact, 0x1, 629 },
    { BUFFER_LOAD_UBYTE_LDS_OFFEN, 0x1, 630 },
    { BUFFER_LOAD_UBYTE_LDS_OFFEN_exact, 0x1, 631 },
    { BUFFER_LOAD_UBYTE_LDS_OFFSET, 0x1, 632 },
    { BUFFER_LOAD_UBYTE_LDS_OFFSET_exact, 0x1, 633 },
    { BUFFER_LOAD_UBYTE_OFFEN, 0x1, 634 },
    { BUFFER_LOAD_UBYTE_OFFEN_exact, 0x1, 635 },
    { BUFFER_LOAD_UBYTE_OFFSET, 0x1, 636 },
    { BUFFER_LOAD_UBYTE_OFFSET_exact, 0x1, 637 },
    { BUFFER_LOAD_USHORT_ADDR64, 0x1, 638 },
    { BUFFER_LOAD_USHORT_BOTHEN, 0x1, 639 },
    { BUFFER_LOAD_USHORT_BOTHEN_exact, 0x1, 640 },
    { BUFFER_LOAD_USHORT_IDXEN, 0x1, 641 },
    { BUFFER_LOAD_USHORT_IDXEN_exact, 0x1, 642 },
    { BUFFER_LOAD_USHORT_LDS_ADDR64, 0x1, 643 },
    { BUFFER_LOAD_USHORT_LDS_BOTHEN, 0x1, 644 },
    { BUFFER_LOAD_USHORT_LDS_BOTHEN_exact, 0x1, 645 },
    { BUFFER_LOAD_USHORT_LDS_IDXEN, 0x1, 646 },
    { BUFFER_LOAD_USHORT_LDS_IDXEN_exact, 0x1, 647 },
    { BUFFER_LOAD_USHORT_LDS_OFFEN, 0x1, 648 },
    { BUFFER_LOAD_USHORT_LDS_OFFEN_exact, 0x1, 649 },
    { BUFFER_LOAD_USHORT_LDS_OFFSET, 0x1, 650 },
    { BUFFER_LOAD_USHORT_LDS_OFFSET_exact, 0x1, 651 },
    { BUFFER_LOAD_USHORT_OFFEN, 0x1, 652 },
    { BUFFER_LOAD_USHORT_OFFEN_exact, 0x1, 653 },
    { BUFFER_LOAD_USHORT_OFFSET, 0x1, 654 },
    { BUFFER_LOAD_USHORT_OFFSET_exact, 0x1, 655 },
    { BUFFER_STORE_BYTE_ADDR64, 0x1, 656 },
    { BUFFER_STORE_BYTE_BOTHEN, 0x1, 657 },
    { BUFFER_STORE_BYTE_BOTHEN_exact, 0x1, 658 },
    { BUFFER_STORE_BYTE_D16_HI_ADDR64, 0x1, 659 },
    { BUFFER_STORE_BYTE_D16_HI_BOTHEN, 0x1, 660 },
    { BUFFER_STORE_BYTE_D16_HI_BOTHEN_exact, 0x1, 661 },
    { BUFFER_STORE_BYTE_D16_HI_IDXEN, 0x1, 662 },
    { BUFFER_STORE_BYTE_D16_HI_IDXEN_exact, 0x1, 663 },
    { BUFFER_STORE_BYTE_D16_HI_OFFEN, 0x1, 664 },
    { BUFFER_STORE_BYTE_D16_HI_OFFEN_exact, 0x1, 665 },
    { BUFFER_STORE_BYTE_D16_HI_OFFSET, 0x1, 666 },
    { BUFFER_STORE_BYTE_D16_HI_OFFSET_exact, 0x1, 667 },
    { BUFFER_STORE_BYTE_IDXEN, 0x1, 668 },
    { BUFFER_STORE_BYTE_IDXEN_exact, 0x1, 669 },
    { BUFFER_STORE_BYTE_OFFEN, 0x1, 670 },
    { BUFFER_STORE_BYTE_OFFEN_exact, 0x1, 671 },
    { BUFFER_STORE_BYTE_OFFSET, 0x1, 672 },
    { BUFFER_STORE_BYTE_OFFSET_exact, 0x1, 673 },
    { BUFFER_STORE_DWORD_ADDR64, 0x1, 701 },
    { BUFFER_STORE_DWORD_ADDR64, 0x2, 674 },
    { BUFFER_STORE_DWORD_ADDR64, 0x3, 683 },
    { BUFFER_STORE_DWORD_ADDR64, 0x4, 692 },
    { BUFFER_STORE_DWORD_BOTHEN, 0x1, 702 },
    { BUFFER_STORE_DWORD_BOTHEN, 0x2, 675 },
    { BUFFER_STORE_DWORD_BOTHEN, 0x3, 684 },
    { BUFFER_STORE_DWORD_BOTHEN, 0x4, 693 },
    { BUFFER_STORE_DWORD_BOTHEN_exact, 0x1, 703 },
    { BUFFER_STORE_DWORD_BOTHEN_exact, 0x2, 676 },
    { BUFFER_STORE_DWORD_BOTHEN_exact, 0x3, 685 },
    { BUFFER_STORE_DWORD_BOTHEN_exact, 0x4, 694 },
    { BUFFER_STORE_DWORD_IDXEN, 0x1, 704 },
    { BUFFER_STORE_DWORD_IDXEN, 0x2, 677 },
    { BUFFER_STORE_DWORD_IDXEN, 0x3, 686 },
    { BUFFER_STORE_DWORD_IDXEN, 0x4, 695 },
    { BUFFER_STORE_DWORD_IDXEN_exact, 0x1, 705 },
    { BUFFER_STORE_DWORD_IDXEN_exact, 0x2, 678 },
    { BUFFER_STORE_DWORD_IDXEN_exact, 0x3, 687 },
    { BUFFER_STORE_DWORD_IDXEN_exact, 0x4, 696 },
    { BUFFER_STORE_DWORD_OFFEN, 0x1, 706 },
    { BUFFER_STORE_DWORD_OFFEN, 0x2, 679 },
    { BUFFER_STORE_DWORD_OFFEN, 0x3, 688 },
    { BUFFER_STORE_DWORD_OFFEN, 0x4, 697 },
    { BUFFER_STORE_DWORD_OFFEN_exact, 0x1, 707 },
    { BUFFER_STORE_DWORD_OFFEN_exact, 0x2, 680 },
    { BUFFER_STORE_DWORD_OFFEN_exact, 0x3, 689 },
    { BUFFER_STORE_DWORD_OFFEN_exact, 0x4, 698 },
    { BUFFER_STORE_DWORD_OFFSET, 0x1, 708 },
    { BUFFER_STORE_DWORD_OFFSET, 0x2, 681 },
    { BUFFER_STORE_DWORD_OFFSET, 0x3, 690 },
    { BUFFER_STORE_DWORD_OFFSET, 0x4, 699 },
    { BUFFER_STORE_DWORD_OFFSET_exact, 0x1, 709 },
    { BUFFER_STORE_DWORD_OFFSET_exact, 0x2, 682 },
    { BUFFER_STORE_DWORD_OFFSET_exact, 0x3, 691 },
    { BUFFER_STORE_DWORD_OFFSET_exact, 0x4, 700 },
    { BUFFER_STORE_FORMAT_D16_HI_X_ADDR64, 0x1, 710 },
    { BUFFER_STORE_FORMAT_D16_HI_X_BOTHEN, 0x1, 711 },
    { BUFFER_STORE_FORMAT_D16_HI_X_BOTHEN_exact, 0x1, 712 },
    { BUFFER_STORE_FORMAT_D16_HI_X_IDXEN, 0x1, 713 },
    { BUFFER_STORE_FORMAT_D16_HI_X_IDXEN_exact, 0x1, 714 },
    { BUFFER_STORE_FORMAT_D16_HI_X_OFFEN, 0x1, 715 },
    { BUFFER_STORE_FORMAT_D16_HI_X_OFFEN_exact, 0x1, 716 },
    { BUFFER_STORE_FORMAT_D16_HI_X_OFFSET, 0x1, 717 },
    { BUFFER_STORE_FORMAT_D16_HI_X_OFFSET_exact, 0x1, 718 },
    { BUFFER_STORE_FORMAT_D16_XYZW_ADDR64, 0x4, 719 },
    { BUFFER_STORE_FORMAT_D16_XYZW_BOTHEN, 0x4, 720 },
    { BUFFER_STORE_FORMAT_D16_XYZW_BOTHEN_exact, 0x4, 721 },
    { BUFFER_STORE_FORMAT_D16_XYZW_IDXEN, 0x4, 722 },
    { BUFFER_STORE_FORMAT_D16_XYZW_IDXEN_exact, 0x4, 723 },
    { BUFFER_STORE_FORMAT_D16_XYZW_OFFEN, 0x4, 724 },
    { BUFFER_STORE_FORMAT_D16_XYZW_OFFEN_exact, 0x4, 725 },
    { BUFFER_STORE_FORMAT_D16_XYZW_OFFSET, 0x4, 726 },
    { BUFFER_STORE_FORMAT_D16_XYZW_OFFSET_exact, 0x4, 727 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_ADDR64, 0x4, 728 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN, 0x4, 729 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, 0x4, 730 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN, 0x4, 731 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN_exact, 0x4, 732 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN, 0x4, 733 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN_exact, 0x4, 734 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET, 0x4, 735 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET_exact, 0x4, 736 },
    { BUFFER_STORE_FORMAT_D16_XYZ_ADDR64, 0x3, 737 },
    { BUFFER_STORE_FORMAT_D16_XYZ_BOTHEN, 0x3, 738 },
    { BUFFER_STORE_FORMAT_D16_XYZ_BOTHEN_exact, 0x3, 739 },
    { BUFFER_STORE_FORMAT_D16_XYZ_IDXEN, 0x3, 740 },
    { BUFFER_STORE_FORMAT_D16_XYZ_IDXEN_exact, 0x3, 741 },
    { BUFFER_STORE_FORMAT_D16_XYZ_OFFEN, 0x3, 742 },
    { BUFFER_STORE_FORMAT_D16_XYZ_OFFEN_exact, 0x3, 743 },
    { BUFFER_STORE_FORMAT_D16_XYZ_OFFSET, 0x3, 744 },
    { BUFFER_STORE_FORMAT_D16_XYZ_OFFSET_exact, 0x3, 745 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_ADDR64, 0x3, 746 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN, 0x3, 747 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, 0x3, 748 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN, 0x3, 749 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN_exact, 0x3, 750 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN, 0x3, 751 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN_exact, 0x3, 752 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET, 0x3, 753 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET_exact, 0x3, 754 },
    { BUFFER_STORE_FORMAT_D16_XY_ADDR64, 0x2, 755 },
    { BUFFER_STORE_FORMAT_D16_XY_BOTHEN, 0x2, 756 },
    { BUFFER_STORE_FORMAT_D16_XY_BOTHEN_exact, 0x2, 757 },
    { BUFFER_STORE_FORMAT_D16_XY_IDXEN, 0x2, 758 },
    { BUFFER_STORE_FORMAT_D16_XY_IDXEN_exact, 0x2, 759 },
    { BUFFER_STORE_FORMAT_D16_XY_OFFEN, 0x2, 760 },
    { BUFFER_STORE_FORMAT_D16_XY_OFFEN_exact, 0x2, 761 },
    { BUFFER_STORE_FORMAT_D16_XY_OFFSET, 0x2, 762 },
    { BUFFER_STORE_FORMAT_D16_XY_OFFSET_exact, 0x2, 763 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_ADDR64, 0x2, 764 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN, 0x2, 765 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN_exact, 0x2, 766 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN, 0x2, 767 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN_exact, 0x2, 768 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN, 0x2, 769 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN_exact, 0x2, 770 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET, 0x2, 771 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET_exact, 0x2, 772 },
    { BUFFER_STORE_FORMAT_D16_X_ADDR64, 0x1, 773 },
    { BUFFER_STORE_FORMAT_D16_X_BOTHEN, 0x1, 774 },
    { BUFFER_STORE_FORMAT_D16_X_BOTHEN_exact, 0x1, 775 },
    { BUFFER_STORE_FORMAT_D16_X_IDXEN, 0x1, 776 },
    { BUFFER_STORE_FORMAT_D16_X_IDXEN_exact, 0x1, 777 },
    { BUFFER_STORE_FORMAT_D16_X_OFFEN, 0x1, 778 },
    { BUFFER_STORE_FORMAT_D16_X_OFFEN_exact, 0x1, 779 },
    { BUFFER_STORE_FORMAT_D16_X_OFFSET, 0x1, 780 },
    { BUFFER_STORE_FORMAT_D16_X_OFFSET_exact, 0x1, 781 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_ADDR64, 0x1, 782 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN, 0x1, 783 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN_exact, 0x1, 784 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN, 0x1, 785 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN_exact, 0x1, 786 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN, 0x1, 787 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN_exact, 0x1, 788 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET, 0x1, 789 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET_exact, 0x1, 790 },
    { BUFFER_STORE_FORMAT_XYZW_ADDR64, 0x4, 791 },
    { BUFFER_STORE_FORMAT_XYZW_BOTHEN, 0x4, 792 },
    { BUFFER_STORE_FORMAT_XYZW_BOTHEN_exact, 0x4, 793 },
    { BUFFER_STORE_FORMAT_XYZW_IDXEN, 0x4, 794 },
    { BUFFER_STORE_FORMAT_XYZW_IDXEN_exact, 0x4, 795 },
    { BUFFER_STORE_FORMAT_XYZW_OFFEN, 0x4, 796 },
    { BUFFER_STORE_FORMAT_XYZW_OFFEN_exact, 0x4, 797 },
    { BUFFER_STORE_FORMAT_XYZW_OFFSET, 0x4, 798 },
    { BUFFER_STORE_FORMAT_XYZW_OFFSET_exact, 0x4, 799 },
    { BUFFER_STORE_FORMAT_XYZ_ADDR64, 0x3, 800 },
    { BUFFER_STORE_FORMAT_XYZ_BOTHEN, 0x3, 801 },
    { BUFFER_STORE_FORMAT_XYZ_BOTHEN_exact, 0x3, 802 },
    { BUFFER_STORE_FORMAT_XYZ_IDXEN, 0x3, 803 },
    { BUFFER_STORE_FORMAT_XYZ_IDXEN_exact, 0x3, 804 },
    { BUFFER_STORE_FORMAT_XYZ_OFFEN, 0x3, 805 },
    { BUFFER_STORE_FORMAT_XYZ_OFFEN_exact, 0x3, 806 },
    { BUFFER_STORE_FORMAT_XYZ_OFFSET, 0x3, 807 },
    { BUFFER_STORE_FORMAT_XYZ_OFFSET_exact, 0x3, 808 },
    { BUFFER_STORE_FORMAT_XY_ADDR64, 0x2, 809 },
    { BUFFER_STORE_FORMAT_XY_BOTHEN, 0x2, 810 },
    { BUFFER_STORE_FORMAT_XY_BOTHEN_exact, 0x2, 811 },
    { BUFFER_STORE_FORMAT_XY_IDXEN, 0x2, 812 },
    { BUFFER_STORE_FORMAT_XY_IDXEN_exact, 0x2, 813 },
    { BUFFER_STORE_FORMAT_XY_OFFEN, 0x2, 814 },
    { BUFFER_STORE_FORMAT_XY_OFFEN_exact, 0x2, 815 },
    { BUFFER_STORE_FORMAT_XY_OFFSET, 0x2, 816 },
    { BUFFER_STORE_FORMAT_XY_OFFSET_exact, 0x2, 817 },
    { BUFFER_STORE_FORMAT_X_ADDR64, 0x1, 818 },
    { BUFFER_STORE_FORMAT_X_BOTHEN, 0x1, 819 },
    { BUFFER_STORE_FORMAT_X_BOTHEN_exact, 0x1, 820 },
    { BUFFER_STORE_FORMAT_X_IDXEN, 0x1, 821 },
    { BUFFER_STORE_FORMAT_X_IDXEN_exact, 0x1, 822 },
    { BUFFER_STORE_FORMAT_X_OFFEN, 0x1, 823 },
    { BUFFER_STORE_FORMAT_X_OFFEN_exact, 0x1, 824 },
    { BUFFER_STORE_FORMAT_X_OFFSET, 0x1, 825 },
    { BUFFER_STORE_FORMAT_X_OFFSET_exact, 0x1, 826 },
    { BUFFER_STORE_LDS_DWORD, 0x0, 827 },
    { BUFFER_STORE_SHORT_ADDR64, 0x1, 828 },
    { BUFFER_STORE_SHORT_BOTHEN, 0x1, 829 },
    { BUFFER_STORE_SHORT_BOTHEN_exact, 0x1, 830 },
    { BUFFER_STORE_SHORT_D16_HI_ADDR64, 0x1, 831 },
    { BUFFER_STORE_SHORT_D16_HI_BOTHEN, 0x1, 832 },
    { BUFFER_STORE_SHORT_D16_HI_BOTHEN_exact, 0x1, 833 },
    { BUFFER_STORE_SHORT_D16_HI_IDXEN, 0x1, 834 },
    { BUFFER_STORE_SHORT_D16_HI_IDXEN_exact, 0x1, 835 },
    { BUFFER_STORE_SHORT_D16_HI_OFFEN, 0x1, 836 },
    { BUFFER_STORE_SHORT_D16_HI_OFFEN_exact, 0x1, 837 },
    { BUFFER_STORE_SHORT_D16_HI_OFFSET, 0x1, 838 },
    { BUFFER_STORE_SHORT_D16_HI_OFFSET_exact, 0x1, 839 },
    { BUFFER_STORE_SHORT_IDXEN, 0x1, 840 },
    { BUFFER_STORE_SHORT_IDXEN_exact, 0x1, 841 },
    { BUFFER_STORE_SHORT_OFFEN, 0x1, 842 },
    { BUFFER_STORE_SHORT_OFFEN_exact, 0x1, 843 },
    { BUFFER_STORE_SHORT_OFFSET, 0x1, 844 },
    { BUFFER_STORE_SHORT_OFFSET_exact, 0x1, 845 },
    { BUFFER_WBINVL1, 0x0, 846 },
    { BUFFER_WBINVL1_SC, 0x0, 847 },
    { BUFFER_WBINVL1_VOL, 0x0, 848 },
  };

  struct KeyType {
    unsigned BaseOpcode;
    uint8_t elements;
  };
  KeyType Key = { BaseOpcode, elements };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.BaseOpcode < RHS.BaseOpcode)
        return true;
      if (LHS.BaseOpcode > RHS.BaseOpcode)
        return false;
      if (LHS.elements < RHS.elements)
        return true;
      if (LHS.elements > RHS.elements)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.BaseOpcode != Idx->BaseOpcode ||
      Key.elements != Idx->elements)
    return nullptr;
  return &MUBUFInfoTable[Idx->_index];
}

const MUBUFInfo *getMUBUFInfoFromOpcode(unsigned Opcode) {
  struct IndexType {
    unsigned Opcode;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { BUFFER_ATOMIC_ADD_ADDR64, 0 },
    { BUFFER_ATOMIC_ADD_ADDR64_RTN, 1 },
    { BUFFER_ATOMIC_ADD_BOTHEN, 2 },
    { BUFFER_ATOMIC_ADD_BOTHEN_RTN, 3 },
    { BUFFER_ATOMIC_ADD_F32_ADDR64, 4 },
    { BUFFER_ATOMIC_ADD_F32_BOTHEN, 5 },
    { BUFFER_ATOMIC_ADD_F32_IDXEN, 6 },
    { BUFFER_ATOMIC_ADD_F32_OFFEN, 7 },
    { BUFFER_ATOMIC_ADD_F32_OFFSET, 8 },
    { BUFFER_ATOMIC_ADD_IDXEN, 9 },
    { BUFFER_ATOMIC_ADD_IDXEN_RTN, 10 },
    { BUFFER_ATOMIC_ADD_OFFEN, 11 },
    { BUFFER_ATOMIC_ADD_OFFEN_RTN, 12 },
    { BUFFER_ATOMIC_ADD_OFFSET, 13 },
    { BUFFER_ATOMIC_ADD_OFFSET_RTN, 14 },
    { BUFFER_ATOMIC_ADD_X2_ADDR64, 15 },
    { BUFFER_ATOMIC_ADD_X2_ADDR64_RTN, 16 },
    { BUFFER_ATOMIC_ADD_X2_BOTHEN, 17 },
    { BUFFER_ATOMIC_ADD_X2_BOTHEN_RTN, 18 },
    { BUFFER_ATOMIC_ADD_X2_IDXEN, 19 },
    { BUFFER_ATOMIC_ADD_X2_IDXEN_RTN, 20 },
    { BUFFER_ATOMIC_ADD_X2_OFFEN, 21 },
    { BUFFER_ATOMIC_ADD_X2_OFFEN_RTN, 22 },
    { BUFFER_ATOMIC_ADD_X2_OFFSET, 23 },
    { BUFFER_ATOMIC_ADD_X2_OFFSET_RTN, 24 },
    { BUFFER_ATOMIC_AND_ADDR64, 25 },
    { BUFFER_ATOMIC_AND_ADDR64_RTN, 26 },
    { BUFFER_ATOMIC_AND_BOTHEN, 27 },
    { BUFFER_ATOMIC_AND_BOTHEN_RTN, 28 },
    { BUFFER_ATOMIC_AND_IDXEN, 29 },
    { BUFFER_ATOMIC_AND_IDXEN_RTN, 30 },
    { BUFFER_ATOMIC_AND_OFFEN, 31 },
    { BUFFER_ATOMIC_AND_OFFEN_RTN, 32 },
    { BUFFER_ATOMIC_AND_OFFSET, 33 },
    { BUFFER_ATOMIC_AND_OFFSET_RTN, 34 },
    { BUFFER_ATOMIC_AND_X2_ADDR64, 35 },
    { BUFFER_ATOMIC_AND_X2_ADDR64_RTN, 36 },
    { BUFFER_ATOMIC_AND_X2_BOTHEN, 37 },
    { BUFFER_ATOMIC_AND_X2_BOTHEN_RTN, 38 },
    { BUFFER_ATOMIC_AND_X2_IDXEN, 39 },
    { BUFFER_ATOMIC_AND_X2_IDXEN_RTN, 40 },
    { BUFFER_ATOMIC_AND_X2_OFFEN, 41 },
    { BUFFER_ATOMIC_AND_X2_OFFEN_RTN, 42 },
    { BUFFER_ATOMIC_AND_X2_OFFSET, 43 },
    { BUFFER_ATOMIC_AND_X2_OFFSET_RTN, 44 },
    { BUFFER_ATOMIC_CMPSWAP_ADDR64, 45 },
    { BUFFER_ATOMIC_CMPSWAP_ADDR64_RTN, 46 },
    { BUFFER_ATOMIC_CMPSWAP_BOTHEN, 47 },
    { BUFFER_ATOMIC_CMPSWAP_BOTHEN_RTN, 48 },
    { BUFFER_ATOMIC_CMPSWAP_IDXEN, 49 },
    { BUFFER_ATOMIC_CMPSWAP_IDXEN_RTN, 50 },
    { BUFFER_ATOMIC_CMPSWAP_OFFEN, 51 },
    { BUFFER_ATOMIC_CMPSWAP_OFFEN_RTN, 52 },
    { BUFFER_ATOMIC_CMPSWAP_OFFSET, 53 },
    { BUFFER_ATOMIC_CMPSWAP_OFFSET_RTN, 54 },
    { BUFFER_ATOMIC_CMPSWAP_X2_ADDR64, 55 },
    { BUFFER_ATOMIC_CMPSWAP_X2_ADDR64_RTN, 56 },
    { BUFFER_ATOMIC_CMPSWAP_X2_BOTHEN, 57 },
    { BUFFER_ATOMIC_CMPSWAP_X2_BOTHEN_RTN, 58 },
    { BUFFER_ATOMIC_CMPSWAP_X2_IDXEN, 59 },
    { BUFFER_ATOMIC_CMPSWAP_X2_IDXEN_RTN, 60 },
    { BUFFER_ATOMIC_CMPSWAP_X2_OFFEN, 61 },
    { BUFFER_ATOMIC_CMPSWAP_X2_OFFEN_RTN, 62 },
    { BUFFER_ATOMIC_CMPSWAP_X2_OFFSET, 63 },
    { BUFFER_ATOMIC_CMPSWAP_X2_OFFSET_RTN, 64 },
    { BUFFER_ATOMIC_DEC_ADDR64, 65 },
    { BUFFER_ATOMIC_DEC_ADDR64_RTN, 66 },
    { BUFFER_ATOMIC_DEC_BOTHEN, 67 },
    { BUFFER_ATOMIC_DEC_BOTHEN_RTN, 68 },
    { BUFFER_ATOMIC_DEC_IDXEN, 69 },
    { BUFFER_ATOMIC_DEC_IDXEN_RTN, 70 },
    { BUFFER_ATOMIC_DEC_OFFEN, 71 },
    { BUFFER_ATOMIC_DEC_OFFEN_RTN, 72 },
    { BUFFER_ATOMIC_DEC_OFFSET, 73 },
    { BUFFER_ATOMIC_DEC_OFFSET_RTN, 74 },
    { BUFFER_ATOMIC_DEC_X2_ADDR64, 75 },
    { BUFFER_ATOMIC_DEC_X2_ADDR64_RTN, 76 },
    { BUFFER_ATOMIC_DEC_X2_BOTHEN, 77 },
    { BUFFER_ATOMIC_DEC_X2_BOTHEN_RTN, 78 },
    { BUFFER_ATOMIC_DEC_X2_IDXEN, 79 },
    { BUFFER_ATOMIC_DEC_X2_IDXEN_RTN, 80 },
    { BUFFER_ATOMIC_DEC_X2_OFFEN, 81 },
    { BUFFER_ATOMIC_DEC_X2_OFFEN_RTN, 82 },
    { BUFFER_ATOMIC_DEC_X2_OFFSET, 83 },
    { BUFFER_ATOMIC_DEC_X2_OFFSET_RTN, 84 },
    { BUFFER_ATOMIC_FCMPSWAP_ADDR64, 85 },
    { BUFFER_ATOMIC_FCMPSWAP_ADDR64_RTN, 86 },
    { BUFFER_ATOMIC_FCMPSWAP_BOTHEN, 87 },
    { BUFFER_ATOMIC_FCMPSWAP_BOTHEN_RTN, 88 },
    { BUFFER_ATOMIC_FCMPSWAP_IDXEN, 89 },
    { BUFFER_ATOMIC_FCMPSWAP_IDXEN_RTN, 90 },
    { BUFFER_ATOMIC_FCMPSWAP_OFFEN, 91 },
    { BUFFER_ATOMIC_FCMPSWAP_OFFEN_RTN, 92 },
    { BUFFER_ATOMIC_FCMPSWAP_OFFSET, 93 },
    { BUFFER_ATOMIC_FCMPSWAP_OFFSET_RTN, 94 },
    { BUFFER_ATOMIC_FCMPSWAP_X2_ADDR64, 95 },
    { BUFFER_ATOMIC_FCMPSWAP_X2_ADDR64_RTN, 96 },
    { BUFFER_ATOMIC_FCMPSWAP_X2_BOTHEN, 97 },
    { BUFFER_ATOMIC_FCMPSWAP_X2_BOTHEN_RTN, 98 },
    { BUFFER_ATOMIC_FCMPSWAP_X2_IDXEN, 99 },
    { BUFFER_ATOMIC_FCMPSWAP_X2_IDXEN_RTN, 100 },
    { BUFFER_ATOMIC_FCMPSWAP_X2_OFFEN, 101 },
    { BUFFER_ATOMIC_FCMPSWAP_X2_OFFEN_RTN, 102 },
    { BUFFER_ATOMIC_FCMPSWAP_X2_OFFSET, 103 },
    { BUFFER_ATOMIC_FCMPSWAP_X2_OFFSET_RTN, 104 },
    { BUFFER_ATOMIC_FMAX_ADDR64, 105 },
    { BUFFER_ATOMIC_FMAX_ADDR64_RTN, 106 },
    { BUFFER_ATOMIC_FMAX_BOTHEN, 107 },
    { BUFFER_ATOMIC_FMAX_BOTHEN_RTN, 108 },
    { BUFFER_ATOMIC_FMAX_IDXEN, 109 },
    { BUFFER_ATOMIC_FMAX_IDXEN_RTN, 110 },
    { BUFFER_ATOMIC_FMAX_OFFEN, 111 },
    { BUFFER_ATOMIC_FMAX_OFFEN_RTN, 112 },
    { BUFFER_ATOMIC_FMAX_OFFSET, 113 },
    { BUFFER_ATOMIC_FMAX_OFFSET_RTN, 114 },
    { BUFFER_ATOMIC_FMAX_X2_ADDR64, 115 },
    { BUFFER_ATOMIC_FMAX_X2_ADDR64_RTN, 116 },
    { BUFFER_ATOMIC_FMAX_X2_BOTHEN, 117 },
    { BUFFER_ATOMIC_FMAX_X2_BOTHEN_RTN, 118 },
    { BUFFER_ATOMIC_FMAX_X2_IDXEN, 119 },
    { BUFFER_ATOMIC_FMAX_X2_IDXEN_RTN, 120 },
    { BUFFER_ATOMIC_FMAX_X2_OFFEN, 121 },
    { BUFFER_ATOMIC_FMAX_X2_OFFEN_RTN, 122 },
    { BUFFER_ATOMIC_FMAX_X2_OFFSET, 123 },
    { BUFFER_ATOMIC_FMAX_X2_OFFSET_RTN, 124 },
    { BUFFER_ATOMIC_FMIN_ADDR64, 125 },
    { BUFFER_ATOMIC_FMIN_ADDR64_RTN, 126 },
    { BUFFER_ATOMIC_FMIN_BOTHEN, 127 },
    { BUFFER_ATOMIC_FMIN_BOTHEN_RTN, 128 },
    { BUFFER_ATOMIC_FMIN_IDXEN, 129 },
    { BUFFER_ATOMIC_FMIN_IDXEN_RTN, 130 },
    { BUFFER_ATOMIC_FMIN_OFFEN, 131 },
    { BUFFER_ATOMIC_FMIN_OFFEN_RTN, 132 },
    { BUFFER_ATOMIC_FMIN_OFFSET, 133 },
    { BUFFER_ATOMIC_FMIN_OFFSET_RTN, 134 },
    { BUFFER_ATOMIC_FMIN_X2_ADDR64, 135 },
    { BUFFER_ATOMIC_FMIN_X2_ADDR64_RTN, 136 },
    { BUFFER_ATOMIC_FMIN_X2_BOTHEN, 137 },
    { BUFFER_ATOMIC_FMIN_X2_BOTHEN_RTN, 138 },
    { BUFFER_ATOMIC_FMIN_X2_IDXEN, 139 },
    { BUFFER_ATOMIC_FMIN_X2_IDXEN_RTN, 140 },
    { BUFFER_ATOMIC_FMIN_X2_OFFEN, 141 },
    { BUFFER_ATOMIC_FMIN_X2_OFFEN_RTN, 142 },
    { BUFFER_ATOMIC_FMIN_X2_OFFSET, 143 },
    { BUFFER_ATOMIC_FMIN_X2_OFFSET_RTN, 144 },
    { BUFFER_ATOMIC_INC_ADDR64, 145 },
    { BUFFER_ATOMIC_INC_ADDR64_RTN, 146 },
    { BUFFER_ATOMIC_INC_BOTHEN, 147 },
    { BUFFER_ATOMIC_INC_BOTHEN_RTN, 148 },
    { BUFFER_ATOMIC_INC_IDXEN, 149 },
    { BUFFER_ATOMIC_INC_IDXEN_RTN, 150 },
    { BUFFER_ATOMIC_INC_OFFEN, 151 },
    { BUFFER_ATOMIC_INC_OFFEN_RTN, 152 },
    { BUFFER_ATOMIC_INC_OFFSET, 153 },
    { BUFFER_ATOMIC_INC_OFFSET_RTN, 154 },
    { BUFFER_ATOMIC_INC_X2_ADDR64, 155 },
    { BUFFER_ATOMIC_INC_X2_ADDR64_RTN, 156 },
    { BUFFER_ATOMIC_INC_X2_BOTHEN, 157 },
    { BUFFER_ATOMIC_INC_X2_BOTHEN_RTN, 158 },
    { BUFFER_ATOMIC_INC_X2_IDXEN, 159 },
    { BUFFER_ATOMIC_INC_X2_IDXEN_RTN, 160 },
    { BUFFER_ATOMIC_INC_X2_OFFEN, 161 },
    { BUFFER_ATOMIC_INC_X2_OFFEN_RTN, 162 },
    { BUFFER_ATOMIC_INC_X2_OFFSET, 163 },
    { BUFFER_ATOMIC_INC_X2_OFFSET_RTN, 164 },
    { BUFFER_ATOMIC_OR_ADDR64, 165 },
    { BUFFER_ATOMIC_OR_ADDR64_RTN, 166 },
    { BUFFER_ATOMIC_OR_BOTHEN, 167 },
    { BUFFER_ATOMIC_OR_BOTHEN_RTN, 168 },
    { BUFFER_ATOMIC_OR_IDXEN, 169 },
    { BUFFER_ATOMIC_OR_IDXEN_RTN, 170 },
    { BUFFER_ATOMIC_OR_OFFEN, 171 },
    { BUFFER_ATOMIC_OR_OFFEN_RTN, 172 },
    { BUFFER_ATOMIC_OR_OFFSET, 173 },
    { BUFFER_ATOMIC_OR_OFFSET_RTN, 174 },
    { BUFFER_ATOMIC_OR_X2_ADDR64, 175 },
    { BUFFER_ATOMIC_OR_X2_ADDR64_RTN, 176 },
    { BUFFER_ATOMIC_OR_X2_BOTHEN, 177 },
    { BUFFER_ATOMIC_OR_X2_BOTHEN_RTN, 178 },
    { BUFFER_ATOMIC_OR_X2_IDXEN, 179 },
    { BUFFER_ATOMIC_OR_X2_IDXEN_RTN, 180 },
    { BUFFER_ATOMIC_OR_X2_OFFEN, 181 },
    { BUFFER_ATOMIC_OR_X2_OFFEN_RTN, 182 },
    { BUFFER_ATOMIC_OR_X2_OFFSET, 183 },
    { BUFFER_ATOMIC_OR_X2_OFFSET_RTN, 184 },
    { BUFFER_ATOMIC_PK_ADD_F16_ADDR64, 185 },
    { BUFFER_ATOMIC_PK_ADD_F16_BOTHEN, 186 },
    { BUFFER_ATOMIC_PK_ADD_F16_IDXEN, 187 },
    { BUFFER_ATOMIC_PK_ADD_F16_OFFEN, 188 },
    { BUFFER_ATOMIC_PK_ADD_F16_OFFSET, 189 },
    { BUFFER_ATOMIC_SMAX_ADDR64, 190 },
    { BUFFER_ATOMIC_SMAX_ADDR64_RTN, 191 },
    { BUFFER_ATOMIC_SMAX_BOTHEN, 192 },
    { BUFFER_ATOMIC_SMAX_BOTHEN_RTN, 193 },
    { BUFFER_ATOMIC_SMAX_IDXEN, 194 },
    { BUFFER_ATOMIC_SMAX_IDXEN_RTN, 195 },
    { BUFFER_ATOMIC_SMAX_OFFEN, 196 },
    { BUFFER_ATOMIC_SMAX_OFFEN_RTN, 197 },
    { BUFFER_ATOMIC_SMAX_OFFSET, 198 },
    { BUFFER_ATOMIC_SMAX_OFFSET_RTN, 199 },
    { BUFFER_ATOMIC_SMAX_X2_ADDR64, 200 },
    { BUFFER_ATOMIC_SMAX_X2_ADDR64_RTN, 201 },
    { BUFFER_ATOMIC_SMAX_X2_BOTHEN, 202 },
    { BUFFER_ATOMIC_SMAX_X2_BOTHEN_RTN, 203 },
    { BUFFER_ATOMIC_SMAX_X2_IDXEN, 204 },
    { BUFFER_ATOMIC_SMAX_X2_IDXEN_RTN, 205 },
    { BUFFER_ATOMIC_SMAX_X2_OFFEN, 206 },
    { BUFFER_ATOMIC_SMAX_X2_OFFEN_RTN, 207 },
    { BUFFER_ATOMIC_SMAX_X2_OFFSET, 208 },
    { BUFFER_ATOMIC_SMAX_X2_OFFSET_RTN, 209 },
    { BUFFER_ATOMIC_SMIN_ADDR64, 210 },
    { BUFFER_ATOMIC_SMIN_ADDR64_RTN, 211 },
    { BUFFER_ATOMIC_SMIN_BOTHEN, 212 },
    { BUFFER_ATOMIC_SMIN_BOTHEN_RTN, 213 },
    { BUFFER_ATOMIC_SMIN_IDXEN, 214 },
    { BUFFER_ATOMIC_SMIN_IDXEN_RTN, 215 },
    { BUFFER_ATOMIC_SMIN_OFFEN, 216 },
    { BUFFER_ATOMIC_SMIN_OFFEN_RTN, 217 },
    { BUFFER_ATOMIC_SMIN_OFFSET, 218 },
    { BUFFER_ATOMIC_SMIN_OFFSET_RTN, 219 },
    { BUFFER_ATOMIC_SMIN_X2_ADDR64, 220 },
    { BUFFER_ATOMIC_SMIN_X2_ADDR64_RTN, 221 },
    { BUFFER_ATOMIC_SMIN_X2_BOTHEN, 222 },
    { BUFFER_ATOMIC_SMIN_X2_BOTHEN_RTN, 223 },
    { BUFFER_ATOMIC_SMIN_X2_IDXEN, 224 },
    { BUFFER_ATOMIC_SMIN_X2_IDXEN_RTN, 225 },
    { BUFFER_ATOMIC_SMIN_X2_OFFEN, 226 },
    { BUFFER_ATOMIC_SMIN_X2_OFFEN_RTN, 227 },
    { BUFFER_ATOMIC_SMIN_X2_OFFSET, 228 },
    { BUFFER_ATOMIC_SMIN_X2_OFFSET_RTN, 229 },
    { BUFFER_ATOMIC_SUB_ADDR64, 230 },
    { BUFFER_ATOMIC_SUB_ADDR64_RTN, 231 },
    { BUFFER_ATOMIC_SUB_BOTHEN, 232 },
    { BUFFER_ATOMIC_SUB_BOTHEN_RTN, 233 },
    { BUFFER_ATOMIC_SUB_IDXEN, 234 },
    { BUFFER_ATOMIC_SUB_IDXEN_RTN, 235 },
    { BUFFER_ATOMIC_SUB_OFFEN, 236 },
    { BUFFER_ATOMIC_SUB_OFFEN_RTN, 237 },
    { BUFFER_ATOMIC_SUB_OFFSET, 238 },
    { BUFFER_ATOMIC_SUB_OFFSET_RTN, 239 },
    { BUFFER_ATOMIC_SUB_X2_ADDR64, 240 },
    { BUFFER_ATOMIC_SUB_X2_ADDR64_RTN, 241 },
    { BUFFER_ATOMIC_SUB_X2_BOTHEN, 242 },
    { BUFFER_ATOMIC_SUB_X2_BOTHEN_RTN, 243 },
    { BUFFER_ATOMIC_SUB_X2_IDXEN, 244 },
    { BUFFER_ATOMIC_SUB_X2_IDXEN_RTN, 245 },
    { BUFFER_ATOMIC_SUB_X2_OFFEN, 246 },
    { BUFFER_ATOMIC_SUB_X2_OFFEN_RTN, 247 },
    { BUFFER_ATOMIC_SUB_X2_OFFSET, 248 },
    { BUFFER_ATOMIC_SUB_X2_OFFSET_RTN, 249 },
    { BUFFER_ATOMIC_SWAP_ADDR64, 250 },
    { BUFFER_ATOMIC_SWAP_ADDR64_RTN, 251 },
    { BUFFER_ATOMIC_SWAP_BOTHEN, 252 },
    { BUFFER_ATOMIC_SWAP_BOTHEN_RTN, 253 },
    { BUFFER_ATOMIC_SWAP_IDXEN, 254 },
    { BUFFER_ATOMIC_SWAP_IDXEN_RTN, 255 },
    { BUFFER_ATOMIC_SWAP_OFFEN, 256 },
    { BUFFER_ATOMIC_SWAP_OFFEN_RTN, 257 },
    { BUFFER_ATOMIC_SWAP_OFFSET, 258 },
    { BUFFER_ATOMIC_SWAP_OFFSET_RTN, 259 },
    { BUFFER_ATOMIC_SWAP_X2_ADDR64, 260 },
    { BUFFER_ATOMIC_SWAP_X2_ADDR64_RTN, 261 },
    { BUFFER_ATOMIC_SWAP_X2_BOTHEN, 262 },
    { BUFFER_ATOMIC_SWAP_X2_BOTHEN_RTN, 263 },
    { BUFFER_ATOMIC_SWAP_X2_IDXEN, 264 },
    { BUFFER_ATOMIC_SWAP_X2_IDXEN_RTN, 265 },
    { BUFFER_ATOMIC_SWAP_X2_OFFEN, 266 },
    { BUFFER_ATOMIC_SWAP_X2_OFFEN_RTN, 267 },
    { BUFFER_ATOMIC_SWAP_X2_OFFSET, 268 },
    { BUFFER_ATOMIC_SWAP_X2_OFFSET_RTN, 269 },
    { BUFFER_ATOMIC_UMAX_ADDR64, 270 },
    { BUFFER_ATOMIC_UMAX_ADDR64_RTN, 271 },
    { BUFFER_ATOMIC_UMAX_BOTHEN, 272 },
    { BUFFER_ATOMIC_UMAX_BOTHEN_RTN, 273 },
    { BUFFER_ATOMIC_UMAX_IDXEN, 274 },
    { BUFFER_ATOMIC_UMAX_IDXEN_RTN, 275 },
    { BUFFER_ATOMIC_UMAX_OFFEN, 276 },
    { BUFFER_ATOMIC_UMAX_OFFEN_RTN, 277 },
    { BUFFER_ATOMIC_UMAX_OFFSET, 278 },
    { BUFFER_ATOMIC_UMAX_OFFSET_RTN, 279 },
    { BUFFER_ATOMIC_UMAX_X2_ADDR64, 280 },
    { BUFFER_ATOMIC_UMAX_X2_ADDR64_RTN, 281 },
    { BUFFER_ATOMIC_UMAX_X2_BOTHEN, 282 },
    { BUFFER_ATOMIC_UMAX_X2_BOTHEN_RTN, 283 },
    { BUFFER_ATOMIC_UMAX_X2_IDXEN, 284 },
    { BUFFER_ATOMIC_UMAX_X2_IDXEN_RTN, 285 },
    { BUFFER_ATOMIC_UMAX_X2_OFFEN, 286 },
    { BUFFER_ATOMIC_UMAX_X2_OFFEN_RTN, 287 },
    { BUFFER_ATOMIC_UMAX_X2_OFFSET, 288 },
    { BUFFER_ATOMIC_UMAX_X2_OFFSET_RTN, 289 },
    { BUFFER_ATOMIC_UMIN_ADDR64, 290 },
    { BUFFER_ATOMIC_UMIN_ADDR64_RTN, 291 },
    { BUFFER_ATOMIC_UMIN_BOTHEN, 292 },
    { BUFFER_ATOMIC_UMIN_BOTHEN_RTN, 293 },
    { BUFFER_ATOMIC_UMIN_IDXEN, 294 },
    { BUFFER_ATOMIC_UMIN_IDXEN_RTN, 295 },
    { BUFFER_ATOMIC_UMIN_OFFEN, 296 },
    { BUFFER_ATOMIC_UMIN_OFFEN_RTN, 297 },
    { BUFFER_ATOMIC_UMIN_OFFSET, 298 },
    { BUFFER_ATOMIC_UMIN_OFFSET_RTN, 299 },
    { BUFFER_ATOMIC_UMIN_X2_ADDR64, 300 },
    { BUFFER_ATOMIC_UMIN_X2_ADDR64_RTN, 301 },
    { BUFFER_ATOMIC_UMIN_X2_BOTHEN, 302 },
    { BUFFER_ATOMIC_UMIN_X2_BOTHEN_RTN, 303 },
    { BUFFER_ATOMIC_UMIN_X2_IDXEN, 304 },
    { BUFFER_ATOMIC_UMIN_X2_IDXEN_RTN, 305 },
    { BUFFER_ATOMIC_UMIN_X2_OFFEN, 306 },
    { BUFFER_ATOMIC_UMIN_X2_OFFEN_RTN, 307 },
    { BUFFER_ATOMIC_UMIN_X2_OFFSET, 308 },
    { BUFFER_ATOMIC_UMIN_X2_OFFSET_RTN, 309 },
    { BUFFER_ATOMIC_XOR_ADDR64, 310 },
    { BUFFER_ATOMIC_XOR_ADDR64_RTN, 311 },
    { BUFFER_ATOMIC_XOR_BOTHEN, 312 },
    { BUFFER_ATOMIC_XOR_BOTHEN_RTN, 313 },
    { BUFFER_ATOMIC_XOR_IDXEN, 314 },
    { BUFFER_ATOMIC_XOR_IDXEN_RTN, 315 },
    { BUFFER_ATOMIC_XOR_OFFEN, 316 },
    { BUFFER_ATOMIC_XOR_OFFEN_RTN, 317 },
    { BUFFER_ATOMIC_XOR_OFFSET, 318 },
    { BUFFER_ATOMIC_XOR_OFFSET_RTN, 319 },
    { BUFFER_ATOMIC_XOR_X2_ADDR64, 320 },
    { BUFFER_ATOMIC_XOR_X2_ADDR64_RTN, 321 },
    { BUFFER_ATOMIC_XOR_X2_BOTHEN, 322 },
    { BUFFER_ATOMIC_XOR_X2_BOTHEN_RTN, 323 },
    { BUFFER_ATOMIC_XOR_X2_IDXEN, 324 },
    { BUFFER_ATOMIC_XOR_X2_IDXEN_RTN, 325 },
    { BUFFER_ATOMIC_XOR_X2_OFFEN, 326 },
    { BUFFER_ATOMIC_XOR_X2_OFFEN_RTN, 327 },
    { BUFFER_ATOMIC_XOR_X2_OFFSET, 328 },
    { BUFFER_ATOMIC_XOR_X2_OFFSET_RTN, 329 },
    { BUFFER_GL0_INV, 330 },
    { BUFFER_GL1_INV, 331 },
    { BUFFER_LOAD_DWORDX2_ADDR64, 332 },
    { BUFFER_LOAD_DWORDX2_BOTHEN, 333 },
    { BUFFER_LOAD_DWORDX2_BOTHEN_exact, 334 },
    { BUFFER_LOAD_DWORDX2_IDXEN, 335 },
    { BUFFER_LOAD_DWORDX2_IDXEN_exact, 336 },
    { BUFFER_LOAD_DWORDX2_LDS_ADDR64, 337 },
    { BUFFER_LOAD_DWORDX2_LDS_BOTHEN, 338 },
    { BUFFER_LOAD_DWORDX2_LDS_BOTHEN_exact, 339 },
    { BUFFER_LOAD_DWORDX2_LDS_IDXEN, 340 },
    { BUFFER_LOAD_DWORDX2_LDS_IDXEN_exact, 341 },
    { BUFFER_LOAD_DWORDX2_LDS_OFFEN, 342 },
    { BUFFER_LOAD_DWORDX2_LDS_OFFEN_exact, 343 },
    { BUFFER_LOAD_DWORDX2_LDS_OFFSET, 344 },
    { BUFFER_LOAD_DWORDX2_LDS_OFFSET_exact, 345 },
    { BUFFER_LOAD_DWORDX2_OFFEN, 346 },
    { BUFFER_LOAD_DWORDX2_OFFEN_exact, 347 },
    { BUFFER_LOAD_DWORDX2_OFFSET, 348 },
    { BUFFER_LOAD_DWORDX2_OFFSET_exact, 349 },
    { BUFFER_LOAD_DWORDX3_ADDR64, 350 },
    { BUFFER_LOAD_DWORDX3_BOTHEN, 351 },
    { BUFFER_LOAD_DWORDX3_BOTHEN_exact, 352 },
    { BUFFER_LOAD_DWORDX3_IDXEN, 353 },
    { BUFFER_LOAD_DWORDX3_IDXEN_exact, 354 },
    { BUFFER_LOAD_DWORDX3_LDS_ADDR64, 355 },
    { BUFFER_LOAD_DWORDX3_LDS_BOTHEN, 356 },
    { BUFFER_LOAD_DWORDX3_LDS_BOTHEN_exact, 357 },
    { BUFFER_LOAD_DWORDX3_LDS_IDXEN, 358 },
    { BUFFER_LOAD_DWORDX3_LDS_IDXEN_exact, 359 },
    { BUFFER_LOAD_DWORDX3_LDS_OFFEN, 360 },
    { BUFFER_LOAD_DWORDX3_LDS_OFFEN_exact, 361 },
    { BUFFER_LOAD_DWORDX3_LDS_OFFSET, 362 },
    { BUFFER_LOAD_DWORDX3_LDS_OFFSET_exact, 363 },
    { BUFFER_LOAD_DWORDX3_OFFEN, 364 },
    { BUFFER_LOAD_DWORDX3_OFFEN_exact, 365 },
    { BUFFER_LOAD_DWORDX3_OFFSET, 366 },
    { BUFFER_LOAD_DWORDX3_OFFSET_exact, 367 },
    { BUFFER_LOAD_DWORDX4_ADDR64, 368 },
    { BUFFER_LOAD_DWORDX4_BOTHEN, 369 },
    { BUFFER_LOAD_DWORDX4_BOTHEN_exact, 370 },
    { BUFFER_LOAD_DWORDX4_IDXEN, 371 },
    { BUFFER_LOAD_DWORDX4_IDXEN_exact, 372 },
    { BUFFER_LOAD_DWORDX4_LDS_ADDR64, 373 },
    { BUFFER_LOAD_DWORDX4_LDS_BOTHEN, 374 },
    { BUFFER_LOAD_DWORDX4_LDS_BOTHEN_exact, 375 },
    { BUFFER_LOAD_DWORDX4_LDS_IDXEN, 376 },
    { BUFFER_LOAD_DWORDX4_LDS_IDXEN_exact, 377 },
    { BUFFER_LOAD_DWORDX4_LDS_OFFEN, 378 },
    { BUFFER_LOAD_DWORDX4_LDS_OFFEN_exact, 379 },
    { BUFFER_LOAD_DWORDX4_LDS_OFFSET, 380 },
    { BUFFER_LOAD_DWORDX4_LDS_OFFSET_exact, 381 },
    { BUFFER_LOAD_DWORDX4_OFFEN, 382 },
    { BUFFER_LOAD_DWORDX4_OFFEN_exact, 383 },
    { BUFFER_LOAD_DWORDX4_OFFSET, 384 },
    { BUFFER_LOAD_DWORDX4_OFFSET_exact, 385 },
    { BUFFER_LOAD_DWORD_ADDR64, 386 },
    { BUFFER_LOAD_DWORD_BOTHEN, 387 },
    { BUFFER_LOAD_DWORD_BOTHEN_exact, 388 },
    { BUFFER_LOAD_DWORD_IDXEN, 389 },
    { BUFFER_LOAD_DWORD_IDXEN_exact, 390 },
    { BUFFER_LOAD_DWORD_LDS_ADDR64, 391 },
    { BUFFER_LOAD_DWORD_LDS_BOTHEN, 392 },
    { BUFFER_LOAD_DWORD_LDS_BOTHEN_exact, 393 },
    { BUFFER_LOAD_DWORD_LDS_IDXEN, 394 },
    { BUFFER_LOAD_DWORD_LDS_IDXEN_exact, 395 },
    { BUFFER_LOAD_DWORD_LDS_OFFEN, 396 },
    { BUFFER_LOAD_DWORD_LDS_OFFEN_exact, 397 },
    { BUFFER_LOAD_DWORD_LDS_OFFSET, 398 },
    { BUFFER_LOAD_DWORD_LDS_OFFSET_exact, 399 },
    { BUFFER_LOAD_DWORD_OFFEN, 400 },
    { BUFFER_LOAD_DWORD_OFFEN_exact, 401 },
    { BUFFER_LOAD_DWORD_OFFSET, 402 },
    { BUFFER_LOAD_DWORD_OFFSET_exact, 403 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_ADDR64, 404 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_BOTHEN, 405 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_BOTHEN_exact, 406 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_IDXEN, 407 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_IDXEN_exact, 408 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_OFFEN, 409 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_OFFEN_exact, 410 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_OFFSET, 411 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_OFFSET_exact, 412 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_ADDR64, 413 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN, 414 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN_exact, 415 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_IDXEN, 416 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_IDXEN_exact, 417 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_OFFEN, 418 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_OFFEN_exact, 419 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_OFFSET, 420 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_OFFSET_exact, 421 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_ADDR64, 422 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN, 423 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, 424 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN, 425 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN_exact, 426 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN, 427 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN_exact, 428 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET, 429 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET_exact, 430 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_ADDR64, 431 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN, 432 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN_exact, 433 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_IDXEN, 434 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_IDXEN_exact, 435 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_OFFEN, 436 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_OFFEN_exact, 437 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_OFFSET, 438 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_OFFSET_exact, 439 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_ADDR64, 440 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN, 441 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, 442 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN, 443 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN_exact, 444 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN, 445 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN_exact, 446 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET, 447 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET_exact, 448 },
    { BUFFER_LOAD_FORMAT_D16_XY_ADDR64, 449 },
    { BUFFER_LOAD_FORMAT_D16_XY_BOTHEN, 450 },
    { BUFFER_LOAD_FORMAT_D16_XY_BOTHEN_exact, 451 },
    { BUFFER_LOAD_FORMAT_D16_XY_IDXEN, 452 },
    { BUFFER_LOAD_FORMAT_D16_XY_IDXEN_exact, 453 },
    { BUFFER_LOAD_FORMAT_D16_XY_OFFEN, 454 },
    { BUFFER_LOAD_FORMAT_D16_XY_OFFEN_exact, 455 },
    { BUFFER_LOAD_FORMAT_D16_XY_OFFSET, 456 },
    { BUFFER_LOAD_FORMAT_D16_XY_OFFSET_exact, 457 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_ADDR64, 458 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN, 459 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN_exact, 460 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN, 461 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN_exact, 462 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN, 463 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN_exact, 464 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET, 465 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET_exact, 466 },
    { BUFFER_LOAD_FORMAT_D16_X_ADDR64, 467 },
    { BUFFER_LOAD_FORMAT_D16_X_BOTHEN, 468 },
    { BUFFER_LOAD_FORMAT_D16_X_BOTHEN_exact, 469 },
    { BUFFER_LOAD_FORMAT_D16_X_IDXEN, 470 },
    { BUFFER_LOAD_FORMAT_D16_X_IDXEN_exact, 471 },
    { BUFFER_LOAD_FORMAT_D16_X_OFFEN, 472 },
    { BUFFER_LOAD_FORMAT_D16_X_OFFEN_exact, 473 },
    { BUFFER_LOAD_FORMAT_D16_X_OFFSET, 474 },
    { BUFFER_LOAD_FORMAT_D16_X_OFFSET_exact, 475 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_ADDR64, 476 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN, 477 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN_exact, 478 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN, 479 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN_exact, 480 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN, 481 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN_exact, 482 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET, 483 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET_exact, 484 },
    { BUFFER_LOAD_FORMAT_XYZW_ADDR64, 485 },
    { BUFFER_LOAD_FORMAT_XYZW_BOTHEN, 486 },
    { BUFFER_LOAD_FORMAT_XYZW_BOTHEN_exact, 487 },
    { BUFFER_LOAD_FORMAT_XYZW_IDXEN, 488 },
    { BUFFER_LOAD_FORMAT_XYZW_IDXEN_exact, 489 },
    { BUFFER_LOAD_FORMAT_XYZW_OFFEN, 490 },
    { BUFFER_LOAD_FORMAT_XYZW_OFFEN_exact, 491 },
    { BUFFER_LOAD_FORMAT_XYZW_OFFSET, 492 },
    { BUFFER_LOAD_FORMAT_XYZW_OFFSET_exact, 493 },
    { BUFFER_LOAD_FORMAT_XYZ_ADDR64, 494 },
    { BUFFER_LOAD_FORMAT_XYZ_BOTHEN, 495 },
    { BUFFER_LOAD_FORMAT_XYZ_BOTHEN_exact, 496 },
    { BUFFER_LOAD_FORMAT_XYZ_IDXEN, 497 },
    { BUFFER_LOAD_FORMAT_XYZ_IDXEN_exact, 498 },
    { BUFFER_LOAD_FORMAT_XYZ_OFFEN, 499 },
    { BUFFER_LOAD_FORMAT_XYZ_OFFEN_exact, 500 },
    { BUFFER_LOAD_FORMAT_XYZ_OFFSET, 501 },
    { BUFFER_LOAD_FORMAT_XYZ_OFFSET_exact, 502 },
    { BUFFER_LOAD_FORMAT_XY_ADDR64, 503 },
    { BUFFER_LOAD_FORMAT_XY_BOTHEN, 504 },
    { BUFFER_LOAD_FORMAT_XY_BOTHEN_exact, 505 },
    { BUFFER_LOAD_FORMAT_XY_IDXEN, 506 },
    { BUFFER_LOAD_FORMAT_XY_IDXEN_exact, 507 },
    { BUFFER_LOAD_FORMAT_XY_OFFEN, 508 },
    { BUFFER_LOAD_FORMAT_XY_OFFEN_exact, 509 },
    { BUFFER_LOAD_FORMAT_XY_OFFSET, 510 },
    { BUFFER_LOAD_FORMAT_XY_OFFSET_exact, 511 },
    { BUFFER_LOAD_FORMAT_X_ADDR64, 512 },
    { BUFFER_LOAD_FORMAT_X_BOTHEN, 513 },
    { BUFFER_LOAD_FORMAT_X_BOTHEN_exact, 514 },
    { BUFFER_LOAD_FORMAT_X_IDXEN, 515 },
    { BUFFER_LOAD_FORMAT_X_IDXEN_exact, 516 },
    { BUFFER_LOAD_FORMAT_X_LDS_ADDR64, 517 },
    { BUFFER_LOAD_FORMAT_X_LDS_BOTHEN, 518 },
    { BUFFER_LOAD_FORMAT_X_LDS_BOTHEN_exact, 519 },
    { BUFFER_LOAD_FORMAT_X_LDS_IDXEN, 520 },
    { BUFFER_LOAD_FORMAT_X_LDS_IDXEN_exact, 521 },
    { BUFFER_LOAD_FORMAT_X_LDS_OFFEN, 522 },
    { BUFFER_LOAD_FORMAT_X_LDS_OFFEN_exact, 523 },
    { BUFFER_LOAD_FORMAT_X_LDS_OFFSET, 524 },
    { BUFFER_LOAD_FORMAT_X_LDS_OFFSET_exact, 525 },
    { BUFFER_LOAD_FORMAT_X_OFFEN, 526 },
    { BUFFER_LOAD_FORMAT_X_OFFEN_exact, 527 },
    { BUFFER_LOAD_FORMAT_X_OFFSET, 528 },
    { BUFFER_LOAD_FORMAT_X_OFFSET_exact, 529 },
    { BUFFER_LOAD_SBYTE_ADDR64, 530 },
    { BUFFER_LOAD_SBYTE_BOTHEN, 531 },
    { BUFFER_LOAD_SBYTE_BOTHEN_exact, 532 },
    { BUFFER_LOAD_SBYTE_D16_ADDR64, 533 },
    { BUFFER_LOAD_SBYTE_D16_BOTHEN, 534 },
    { BUFFER_LOAD_SBYTE_D16_BOTHEN_exact, 535 },
    { BUFFER_LOAD_SBYTE_D16_HI_ADDR64, 536 },
    { BUFFER_LOAD_SBYTE_D16_HI_BOTHEN, 537 },
    { BUFFER_LOAD_SBYTE_D16_HI_BOTHEN_exact, 538 },
    { BUFFER_LOAD_SBYTE_D16_HI_IDXEN, 539 },
    { BUFFER_LOAD_SBYTE_D16_HI_IDXEN_exact, 540 },
    { BUFFER_LOAD_SBYTE_D16_HI_OFFEN, 541 },
    { BUFFER_LOAD_SBYTE_D16_HI_OFFEN_exact, 542 },
    { BUFFER_LOAD_SBYTE_D16_HI_OFFSET, 543 },
    { BUFFER_LOAD_SBYTE_D16_HI_OFFSET_exact, 544 },
    { BUFFER_LOAD_SBYTE_D16_IDXEN, 545 },
    { BUFFER_LOAD_SBYTE_D16_IDXEN_exact, 546 },
    { BUFFER_LOAD_SBYTE_D16_OFFEN, 547 },
    { BUFFER_LOAD_SBYTE_D16_OFFEN_exact, 548 },
    { BUFFER_LOAD_SBYTE_D16_OFFSET, 549 },
    { BUFFER_LOAD_SBYTE_D16_OFFSET_exact, 550 },
    { BUFFER_LOAD_SBYTE_IDXEN, 551 },
    { BUFFER_LOAD_SBYTE_IDXEN_exact, 552 },
    { BUFFER_LOAD_SBYTE_LDS_ADDR64, 553 },
    { BUFFER_LOAD_SBYTE_LDS_BOTHEN, 554 },
    { BUFFER_LOAD_SBYTE_LDS_BOTHEN_exact, 555 },
    { BUFFER_LOAD_SBYTE_LDS_IDXEN, 556 },
    { BUFFER_LOAD_SBYTE_LDS_IDXEN_exact, 557 },
    { BUFFER_LOAD_SBYTE_LDS_OFFEN, 558 },
    { BUFFER_LOAD_SBYTE_LDS_OFFEN_exact, 559 },
    { BUFFER_LOAD_SBYTE_LDS_OFFSET, 560 },
    { BUFFER_LOAD_SBYTE_LDS_OFFSET_exact, 561 },
    { BUFFER_LOAD_SBYTE_OFFEN, 562 },
    { BUFFER_LOAD_SBYTE_OFFEN_exact, 563 },
    { BUFFER_LOAD_SBYTE_OFFSET, 564 },
    { BUFFER_LOAD_SBYTE_OFFSET_exact, 565 },
    { BUFFER_LOAD_SHORT_D16_ADDR64, 566 },
    { BUFFER_LOAD_SHORT_D16_BOTHEN, 567 },
    { BUFFER_LOAD_SHORT_D16_BOTHEN_exact, 568 },
    { BUFFER_LOAD_SHORT_D16_HI_ADDR64, 569 },
    { BUFFER_LOAD_SHORT_D16_HI_BOTHEN, 570 },
    { BUFFER_LOAD_SHORT_D16_HI_BOTHEN_exact, 571 },
    { BUFFER_LOAD_SHORT_D16_HI_IDXEN, 572 },
    { BUFFER_LOAD_SHORT_D16_HI_IDXEN_exact, 573 },
    { BUFFER_LOAD_SHORT_D16_HI_OFFEN, 574 },
    { BUFFER_LOAD_SHORT_D16_HI_OFFEN_exact, 575 },
    { BUFFER_LOAD_SHORT_D16_HI_OFFSET, 576 },
    { BUFFER_LOAD_SHORT_D16_HI_OFFSET_exact, 577 },
    { BUFFER_LOAD_SHORT_D16_IDXEN, 578 },
    { BUFFER_LOAD_SHORT_D16_IDXEN_exact, 579 },
    { BUFFER_LOAD_SHORT_D16_OFFEN, 580 },
    { BUFFER_LOAD_SHORT_D16_OFFEN_exact, 581 },
    { BUFFER_LOAD_SHORT_D16_OFFSET, 582 },
    { BUFFER_LOAD_SHORT_D16_OFFSET_exact, 583 },
    { BUFFER_LOAD_SSHORT_ADDR64, 584 },
    { BUFFER_LOAD_SSHORT_BOTHEN, 585 },
    { BUFFER_LOAD_SSHORT_BOTHEN_exact, 586 },
    { BUFFER_LOAD_SSHORT_IDXEN, 587 },
    { BUFFER_LOAD_SSHORT_IDXEN_exact, 588 },
    { BUFFER_LOAD_SSHORT_LDS_ADDR64, 589 },
    { BUFFER_LOAD_SSHORT_LDS_BOTHEN, 590 },
    { BUFFER_LOAD_SSHORT_LDS_BOTHEN_exact, 591 },
    { BUFFER_LOAD_SSHORT_LDS_IDXEN, 592 },
    { BUFFER_LOAD_SSHORT_LDS_IDXEN_exact, 593 },
    { BUFFER_LOAD_SSHORT_LDS_OFFEN, 594 },
    { BUFFER_LOAD_SSHORT_LDS_OFFEN_exact, 595 },
    { BUFFER_LOAD_SSHORT_LDS_OFFSET, 596 },
    { BUFFER_LOAD_SSHORT_LDS_OFFSET_exact, 597 },
    { BUFFER_LOAD_SSHORT_OFFEN, 598 },
    { BUFFER_LOAD_SSHORT_OFFEN_exact, 599 },
    { BUFFER_LOAD_SSHORT_OFFSET, 600 },
    { BUFFER_LOAD_SSHORT_OFFSET_exact, 601 },
    { BUFFER_LOAD_UBYTE_ADDR64, 602 },
    { BUFFER_LOAD_UBYTE_BOTHEN, 603 },
    { BUFFER_LOAD_UBYTE_BOTHEN_exact, 604 },
    { BUFFER_LOAD_UBYTE_D16_ADDR64, 605 },
    { BUFFER_LOAD_UBYTE_D16_BOTHEN, 606 },
    { BUFFER_LOAD_UBYTE_D16_BOTHEN_exact, 607 },
    { BUFFER_LOAD_UBYTE_D16_HI_ADDR64, 608 },
    { BUFFER_LOAD_UBYTE_D16_HI_BOTHEN, 609 },
    { BUFFER_LOAD_UBYTE_D16_HI_BOTHEN_exact, 610 },
    { BUFFER_LOAD_UBYTE_D16_HI_IDXEN, 611 },
    { BUFFER_LOAD_UBYTE_D16_HI_IDXEN_exact, 612 },
    { BUFFER_LOAD_UBYTE_D16_HI_OFFEN, 613 },
    { BUFFER_LOAD_UBYTE_D16_HI_OFFEN_exact, 614 },
    { BUFFER_LOAD_UBYTE_D16_HI_OFFSET, 615 },
    { BUFFER_LOAD_UBYTE_D16_HI_OFFSET_exact, 616 },
    { BUFFER_LOAD_UBYTE_D16_IDXEN, 617 },
    { BUFFER_LOAD_UBYTE_D16_IDXEN_exact, 618 },
    { BUFFER_LOAD_UBYTE_D16_OFFEN, 619 },
    { BUFFER_LOAD_UBYTE_D16_OFFEN_exact, 620 },
    { BUFFER_LOAD_UBYTE_D16_OFFSET, 621 },
    { BUFFER_LOAD_UBYTE_D16_OFFSET_exact, 622 },
    { BUFFER_LOAD_UBYTE_IDXEN, 623 },
    { BUFFER_LOAD_UBYTE_IDXEN_exact, 624 },
    { BUFFER_LOAD_UBYTE_LDS_ADDR64, 625 },
    { BUFFER_LOAD_UBYTE_LDS_BOTHEN, 626 },
    { BUFFER_LOAD_UBYTE_LDS_BOTHEN_exact, 627 },
    { BUFFER_LOAD_UBYTE_LDS_IDXEN, 628 },
    { BUFFER_LOAD_UBYTE_LDS_IDXEN_exact, 629 },
    { BUFFER_LOAD_UBYTE_LDS_OFFEN, 630 },
    { BUFFER_LOAD_UBYTE_LDS_OFFEN_exact, 631 },
    { BUFFER_LOAD_UBYTE_LDS_OFFSET, 632 },
    { BUFFER_LOAD_UBYTE_LDS_OFFSET_exact, 633 },
    { BUFFER_LOAD_UBYTE_OFFEN, 634 },
    { BUFFER_LOAD_UBYTE_OFFEN_exact, 635 },
    { BUFFER_LOAD_UBYTE_OFFSET, 636 },
    { BUFFER_LOAD_UBYTE_OFFSET_exact, 637 },
    { BUFFER_LOAD_USHORT_ADDR64, 638 },
    { BUFFER_LOAD_USHORT_BOTHEN, 639 },
    { BUFFER_LOAD_USHORT_BOTHEN_exact, 640 },
    { BUFFER_LOAD_USHORT_IDXEN, 641 },
    { BUFFER_LOAD_USHORT_IDXEN_exact, 642 },
    { BUFFER_LOAD_USHORT_LDS_ADDR64, 643 },
    { BUFFER_LOAD_USHORT_LDS_BOTHEN, 644 },
    { BUFFER_LOAD_USHORT_LDS_BOTHEN_exact, 645 },
    { BUFFER_LOAD_USHORT_LDS_IDXEN, 646 },
    { BUFFER_LOAD_USHORT_LDS_IDXEN_exact, 647 },
    { BUFFER_LOAD_USHORT_LDS_OFFEN, 648 },
    { BUFFER_LOAD_USHORT_LDS_OFFEN_exact, 649 },
    { BUFFER_LOAD_USHORT_LDS_OFFSET, 650 },
    { BUFFER_LOAD_USHORT_LDS_OFFSET_exact, 651 },
    { BUFFER_LOAD_USHORT_OFFEN, 652 },
    { BUFFER_LOAD_USHORT_OFFEN_exact, 653 },
    { BUFFER_LOAD_USHORT_OFFSET, 654 },
    { BUFFER_LOAD_USHORT_OFFSET_exact, 655 },
    { BUFFER_STORE_BYTE_ADDR64, 656 },
    { BUFFER_STORE_BYTE_BOTHEN, 657 },
    { BUFFER_STORE_BYTE_BOTHEN_exact, 658 },
    { BUFFER_STORE_BYTE_D16_HI_ADDR64, 659 },
    { BUFFER_STORE_BYTE_D16_HI_BOTHEN, 660 },
    { BUFFER_STORE_BYTE_D16_HI_BOTHEN_exact, 661 },
    { BUFFER_STORE_BYTE_D16_HI_IDXEN, 662 },
    { BUFFER_STORE_BYTE_D16_HI_IDXEN_exact, 663 },
    { BUFFER_STORE_BYTE_D16_HI_OFFEN, 664 },
    { BUFFER_STORE_BYTE_D16_HI_OFFEN_exact, 665 },
    { BUFFER_STORE_BYTE_D16_HI_OFFSET, 666 },
    { BUFFER_STORE_BYTE_D16_HI_OFFSET_exact, 667 },
    { BUFFER_STORE_BYTE_IDXEN, 668 },
    { BUFFER_STORE_BYTE_IDXEN_exact, 669 },
    { BUFFER_STORE_BYTE_OFFEN, 670 },
    { BUFFER_STORE_BYTE_OFFEN_exact, 671 },
    { BUFFER_STORE_BYTE_OFFSET, 672 },
    { BUFFER_STORE_BYTE_OFFSET_exact, 673 },
    { BUFFER_STORE_DWORDX2_ADDR64, 674 },
    { BUFFER_STORE_DWORDX2_BOTHEN, 675 },
    { BUFFER_STORE_DWORDX2_BOTHEN_exact, 676 },
    { BUFFER_STORE_DWORDX2_IDXEN, 677 },
    { BUFFER_STORE_DWORDX2_IDXEN_exact, 678 },
    { BUFFER_STORE_DWORDX2_OFFEN, 679 },
    { BUFFER_STORE_DWORDX2_OFFEN_exact, 680 },
    { BUFFER_STORE_DWORDX2_OFFSET, 681 },
    { BUFFER_STORE_DWORDX2_OFFSET_exact, 682 },
    { BUFFER_STORE_DWORDX3_ADDR64, 683 },
    { BUFFER_STORE_DWORDX3_BOTHEN, 684 },
    { BUFFER_STORE_DWORDX3_BOTHEN_exact, 685 },
    { BUFFER_STORE_DWORDX3_IDXEN, 686 },
    { BUFFER_STORE_DWORDX3_IDXEN_exact, 687 },
    { BUFFER_STORE_DWORDX3_OFFEN, 688 },
    { BUFFER_STORE_DWORDX3_OFFEN_exact, 689 },
    { BUFFER_STORE_DWORDX3_OFFSET, 690 },
    { BUFFER_STORE_DWORDX3_OFFSET_exact, 691 },
    { BUFFER_STORE_DWORDX4_ADDR64, 692 },
    { BUFFER_STORE_DWORDX4_BOTHEN, 693 },
    { BUFFER_STORE_DWORDX4_BOTHEN_exact, 694 },
    { BUFFER_STORE_DWORDX4_IDXEN, 695 },
    { BUFFER_STORE_DWORDX4_IDXEN_exact, 696 },
    { BUFFER_STORE_DWORDX4_OFFEN, 697 },
    { BUFFER_STORE_DWORDX4_OFFEN_exact, 698 },
    { BUFFER_STORE_DWORDX4_OFFSET, 699 },
    { BUFFER_STORE_DWORDX4_OFFSET_exact, 700 },
    { BUFFER_STORE_DWORD_ADDR64, 701 },
    { BUFFER_STORE_DWORD_BOTHEN, 702 },
    { BUFFER_STORE_DWORD_BOTHEN_exact, 703 },
    { BUFFER_STORE_DWORD_IDXEN, 704 },
    { BUFFER_STORE_DWORD_IDXEN_exact, 705 },
    { BUFFER_STORE_DWORD_OFFEN, 706 },
    { BUFFER_STORE_DWORD_OFFEN_exact, 707 },
    { BUFFER_STORE_DWORD_OFFSET, 708 },
    { BUFFER_STORE_DWORD_OFFSET_exact, 709 },
    { BUFFER_STORE_FORMAT_D16_HI_X_ADDR64, 710 },
    { BUFFER_STORE_FORMAT_D16_HI_X_BOTHEN, 711 },
    { BUFFER_STORE_FORMAT_D16_HI_X_BOTHEN_exact, 712 },
    { BUFFER_STORE_FORMAT_D16_HI_X_IDXEN, 713 },
    { BUFFER_STORE_FORMAT_D16_HI_X_IDXEN_exact, 714 },
    { BUFFER_STORE_FORMAT_D16_HI_X_OFFEN, 715 },
    { BUFFER_STORE_FORMAT_D16_HI_X_OFFEN_exact, 716 },
    { BUFFER_STORE_FORMAT_D16_HI_X_OFFSET, 717 },
    { BUFFER_STORE_FORMAT_D16_HI_X_OFFSET_exact, 718 },
    { BUFFER_STORE_FORMAT_D16_XYZW_ADDR64, 719 },
    { BUFFER_STORE_FORMAT_D16_XYZW_BOTHEN, 720 },
    { BUFFER_STORE_FORMAT_D16_XYZW_BOTHEN_exact, 721 },
    { BUFFER_STORE_FORMAT_D16_XYZW_IDXEN, 722 },
    { BUFFER_STORE_FORMAT_D16_XYZW_IDXEN_exact, 723 },
    { BUFFER_STORE_FORMAT_D16_XYZW_OFFEN, 724 },
    { BUFFER_STORE_FORMAT_D16_XYZW_OFFEN_exact, 725 },
    { BUFFER_STORE_FORMAT_D16_XYZW_OFFSET, 726 },
    { BUFFER_STORE_FORMAT_D16_XYZW_OFFSET_exact, 727 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_ADDR64, 728 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN, 729 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, 730 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN, 731 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN_exact, 732 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN, 733 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN_exact, 734 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET, 735 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET_exact, 736 },
    { BUFFER_STORE_FORMAT_D16_XYZ_ADDR64, 737 },
    { BUFFER_STORE_FORMAT_D16_XYZ_BOTHEN, 738 },
    { BUFFER_STORE_FORMAT_D16_XYZ_BOTHEN_exact, 739 },
    { BUFFER_STORE_FORMAT_D16_XYZ_IDXEN, 740 },
    { BUFFER_STORE_FORMAT_D16_XYZ_IDXEN_exact, 741 },
    { BUFFER_STORE_FORMAT_D16_XYZ_OFFEN, 742 },
    { BUFFER_STORE_FORMAT_D16_XYZ_OFFEN_exact, 743 },
    { BUFFER_STORE_FORMAT_D16_XYZ_OFFSET, 744 },
    { BUFFER_STORE_FORMAT_D16_XYZ_OFFSET_exact, 745 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_ADDR64, 746 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN, 747 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, 748 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN, 749 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN_exact, 750 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN, 751 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN_exact, 752 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET, 753 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET_exact, 754 },
    { BUFFER_STORE_FORMAT_D16_XY_ADDR64, 755 },
    { BUFFER_STORE_FORMAT_D16_XY_BOTHEN, 756 },
    { BUFFER_STORE_FORMAT_D16_XY_BOTHEN_exact, 757 },
    { BUFFER_STORE_FORMAT_D16_XY_IDXEN, 758 },
    { BUFFER_STORE_FORMAT_D16_XY_IDXEN_exact, 759 },
    { BUFFER_STORE_FORMAT_D16_XY_OFFEN, 760 },
    { BUFFER_STORE_FORMAT_D16_XY_OFFEN_exact, 761 },
    { BUFFER_STORE_FORMAT_D16_XY_OFFSET, 762 },
    { BUFFER_STORE_FORMAT_D16_XY_OFFSET_exact, 763 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_ADDR64, 764 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN, 765 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN_exact, 766 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN, 767 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN_exact, 768 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN, 769 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN_exact, 770 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET, 771 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET_exact, 772 },
    { BUFFER_STORE_FORMAT_D16_X_ADDR64, 773 },
    { BUFFER_STORE_FORMAT_D16_X_BOTHEN, 774 },
    { BUFFER_STORE_FORMAT_D16_X_BOTHEN_exact, 775 },
    { BUFFER_STORE_FORMAT_D16_X_IDXEN, 776 },
    { BUFFER_STORE_FORMAT_D16_X_IDXEN_exact, 777 },
    { BUFFER_STORE_FORMAT_D16_X_OFFEN, 778 },
    { BUFFER_STORE_FORMAT_D16_X_OFFEN_exact, 779 },
    { BUFFER_STORE_FORMAT_D16_X_OFFSET, 780 },
    { BUFFER_STORE_FORMAT_D16_X_OFFSET_exact, 781 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_ADDR64, 782 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN, 783 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN_exact, 784 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN, 785 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN_exact, 786 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN, 787 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN_exact, 788 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET, 789 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET_exact, 790 },
    { BUFFER_STORE_FORMAT_XYZW_ADDR64, 791 },
    { BUFFER_STORE_FORMAT_XYZW_BOTHEN, 792 },
    { BUFFER_STORE_FORMAT_XYZW_BOTHEN_exact, 793 },
    { BUFFER_STORE_FORMAT_XYZW_IDXEN, 794 },
    { BUFFER_STORE_FORMAT_XYZW_IDXEN_exact, 795 },
    { BUFFER_STORE_FORMAT_XYZW_OFFEN, 796 },
    { BUFFER_STORE_FORMAT_XYZW_OFFEN_exact, 797 },
    { BUFFER_STORE_FORMAT_XYZW_OFFSET, 798 },
    { BUFFER_STORE_FORMAT_XYZW_OFFSET_exact, 799 },
    { BUFFER_STORE_FORMAT_XYZ_ADDR64, 800 },
    { BUFFER_STORE_FORMAT_XYZ_BOTHEN, 801 },
    { BUFFER_STORE_FORMAT_XYZ_BOTHEN_exact, 802 },
    { BUFFER_STORE_FORMAT_XYZ_IDXEN, 803 },
    { BUFFER_STORE_FORMAT_XYZ_IDXEN_exact, 804 },
    { BUFFER_STORE_FORMAT_XYZ_OFFEN, 805 },
    { BUFFER_STORE_FORMAT_XYZ_OFFEN_exact, 806 },
    { BUFFER_STORE_FORMAT_XYZ_OFFSET, 807 },
    { BUFFER_STORE_FORMAT_XYZ_OFFSET_exact, 808 },
    { BUFFER_STORE_FORMAT_XY_ADDR64, 809 },
    { BUFFER_STORE_FORMAT_XY_BOTHEN, 810 },
    { BUFFER_STORE_FORMAT_XY_BOTHEN_exact, 811 },
    { BUFFER_STORE_FORMAT_XY_IDXEN, 812 },
    { BUFFER_STORE_FORMAT_XY_IDXEN_exact, 813 },
    { BUFFER_STORE_FORMAT_XY_OFFEN, 814 },
    { BUFFER_STORE_FORMAT_XY_OFFEN_exact, 815 },
    { BUFFER_STORE_FORMAT_XY_OFFSET, 816 },
    { BUFFER_STORE_FORMAT_XY_OFFSET_exact, 817 },
    { BUFFER_STORE_FORMAT_X_ADDR64, 818 },
    { BUFFER_STORE_FORMAT_X_BOTHEN, 819 },
    { BUFFER_STORE_FORMAT_X_BOTHEN_exact, 820 },
    { BUFFER_STORE_FORMAT_X_IDXEN, 821 },
    { BUFFER_STORE_FORMAT_X_IDXEN_exact, 822 },
    { BUFFER_STORE_FORMAT_X_OFFEN, 823 },
    { BUFFER_STORE_FORMAT_X_OFFEN_exact, 824 },
    { BUFFER_STORE_FORMAT_X_OFFSET, 825 },
    { BUFFER_STORE_FORMAT_X_OFFSET_exact, 826 },
    { BUFFER_STORE_LDS_DWORD, 827 },
    { BUFFER_STORE_SHORT_ADDR64, 828 },
    { BUFFER_STORE_SHORT_BOTHEN, 829 },
    { BUFFER_STORE_SHORT_BOTHEN_exact, 830 },
    { BUFFER_STORE_SHORT_D16_HI_ADDR64, 831 },
    { BUFFER_STORE_SHORT_D16_HI_BOTHEN, 832 },
    { BUFFER_STORE_SHORT_D16_HI_BOTHEN_exact, 833 },
    { BUFFER_STORE_SHORT_D16_HI_IDXEN, 834 },
    { BUFFER_STORE_SHORT_D16_HI_IDXEN_exact, 835 },
    { BUFFER_STORE_SHORT_D16_HI_OFFEN, 836 },
    { BUFFER_STORE_SHORT_D16_HI_OFFEN_exact, 837 },
    { BUFFER_STORE_SHORT_D16_HI_OFFSET, 838 },
    { BUFFER_STORE_SHORT_D16_HI_OFFSET_exact, 839 },
    { BUFFER_STORE_SHORT_IDXEN, 840 },
    { BUFFER_STORE_SHORT_IDXEN_exact, 841 },
    { BUFFER_STORE_SHORT_OFFEN, 842 },
    { BUFFER_STORE_SHORT_OFFEN_exact, 843 },
    { BUFFER_STORE_SHORT_OFFSET, 844 },
    { BUFFER_STORE_SHORT_OFFSET_exact, 845 },
    { BUFFER_WBINVL1, 846 },
    { BUFFER_WBINVL1_SC, 847 },
    { BUFFER_WBINVL1_VOL, 848 },
  };

  struct KeyType {
    unsigned Opcode;
  };
  KeyType Key = { Opcode };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.Opcode < RHS.Opcode)
        return true;
      if (LHS.Opcode > RHS.Opcode)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Opcode != Idx->Opcode)
    return nullptr;
  return &MUBUFInfoTable[Idx->_index];
}
#endif

#ifdef GET_RsrcIntrinsics_DECL
const RsrcIntrinsic *lookupRsrcIntrinsic(unsigned Intr);
#endif

#ifdef GET_RsrcIntrinsics_IMPL
constexpr RsrcIntrinsic RsrcIntrinsics[] = {
  { Intrinsic::amdgcn_buffer_atomic_add, 0x1, false }, // 0
  { Intrinsic::amdgcn_buffer_atomic_and, 0x1, false }, // 1
  { Intrinsic::amdgcn_buffer_atomic_cmpswap, 0x2, false }, // 2
  { Intrinsic::amdgcn_buffer_atomic_or, 0x1, false }, // 3
  { Intrinsic::amdgcn_buffer_atomic_smax, 0x1, false }, // 4
  { Intrinsic::amdgcn_buffer_atomic_smin, 0x1, false }, // 5
  { Intrinsic::amdgcn_buffer_atomic_sub, 0x1, false }, // 6
  { Intrinsic::amdgcn_buffer_atomic_swap, 0x1, false }, // 7
  { Intrinsic::amdgcn_buffer_atomic_umax, 0x1, false }, // 8
  { Intrinsic::amdgcn_buffer_atomic_umin, 0x1, false }, // 9
  { Intrinsic::amdgcn_buffer_atomic_xor, 0x1, false }, // 10
  { Intrinsic::amdgcn_buffer_load, 0x0, false }, // 11
  { Intrinsic::amdgcn_buffer_load_format, 0x0, false }, // 12
  { Intrinsic::amdgcn_buffer_store, 0x1, false }, // 13
  { Intrinsic::amdgcn_buffer_store_format, 0x1, false }, // 14
  { Intrinsic::amdgcn_image_atomic_add_1d, 0x2, true }, // 15
  { Intrinsic::amdgcn_image_atomic_add_1darray, 0x3, true }, // 16
  { Intrinsic::amdgcn_image_atomic_add_2d, 0x3, true }, // 17
  { Intrinsic::amdgcn_image_atomic_add_2darray, 0x4, true }, // 18
  { Intrinsic::amdgcn_image_atomic_add_2darraymsaa, 0x5, true }, // 19
  { Intrinsic::amdgcn_image_atomic_add_2dmsaa, 0x4, true }, // 20
  { Intrinsic::amdgcn_image_atomic_add_3d, 0x4, true }, // 21
  { Intrinsic::amdgcn_image_atomic_add_cube, 0x4, true }, // 22
  { Intrinsic::amdgcn_image_atomic_and_1d, 0x2, true }, // 23
  { Intrinsic::amdgcn_image_atomic_and_1darray, 0x3, true }, // 24
  { Intrinsic::amdgcn_image_atomic_and_2d, 0x3, true }, // 25
  { Intrinsic::amdgcn_image_atomic_and_2darray, 0x4, true }, // 26
  { Intrinsic::amdgcn_image_atomic_and_2darraymsaa, 0x5, true }, // 27
  { Intrinsic::amdgcn_image_atomic_and_2dmsaa, 0x4, true }, // 28
  { Intrinsic::amdgcn_image_atomic_and_3d, 0x4, true }, // 29
  { Intrinsic::amdgcn_image_atomic_and_cube, 0x4, true }, // 30
  { Intrinsic::amdgcn_image_atomic_cmpswap_1d, 0x3, true }, // 31
  { Intrinsic::amdgcn_image_atomic_cmpswap_1darray, 0x4, true }, // 32
  { Intrinsic::amdgcn_image_atomic_cmpswap_2d, 0x4, true }, // 33
  { Intrinsic::amdgcn_image_atomic_cmpswap_2darray, 0x5, true }, // 34
  { Intrinsic::amdgcn_image_atomic_cmpswap_2darraymsaa, 0x6, true }, // 35
  { Intrinsic::amdgcn_image_atomic_cmpswap_2dmsaa, 0x5, true }, // 36
  { Intrinsic::amdgcn_image_atomic_cmpswap_3d, 0x5, true }, // 37
  { Intrinsic::amdgcn_image_atomic_cmpswap_cube, 0x5, true }, // 38
  { Intrinsic::amdgcn_image_atomic_dec_1d, 0x2, true }, // 39
  { Intrinsic::amdgcn_image_atomic_dec_1darray, 0x3, true }, // 40
  { Intrinsic::amdgcn_image_atomic_dec_2d, 0x3, true }, // 41
  { Intrinsic::amdgcn_image_atomic_dec_2darray, 0x4, true }, // 42
  { Intrinsic::amdgcn_image_atomic_dec_2darraymsaa, 0x5, true }, // 43
  { Intrinsic::amdgcn_image_atomic_dec_2dmsaa, 0x4, true }, // 44
  { Intrinsic::amdgcn_image_atomic_dec_3d, 0x4, true }, // 45
  { Intrinsic::amdgcn_image_atomic_dec_cube, 0x4, true }, // 46
  { Intrinsic::amdgcn_image_atomic_inc_1d, 0x2, true }, // 47
  { Intrinsic::amdgcn_image_atomic_inc_1darray, 0x3, true }, // 48
  { Intrinsic::amdgcn_image_atomic_inc_2d, 0x3, true }, // 49
  { Intrinsic::amdgcn_image_atomic_inc_2darray, 0x4, true }, // 50
  { Intrinsic::amdgcn_image_atomic_inc_2darraymsaa, 0x5, true }, // 51
  { Intrinsic::amdgcn_image_atomic_inc_2dmsaa, 0x4, true }, // 52
  { Intrinsic::amdgcn_image_atomic_inc_3d, 0x4, true }, // 53
  { Intrinsic::amdgcn_image_atomic_inc_cube, 0x4, true }, // 54
  { Intrinsic::amdgcn_image_atomic_or_1d, 0x2, true }, // 55
  { Intrinsic::amdgcn_image_atomic_or_1darray, 0x3, true }, // 56
  { Intrinsic::amdgcn_image_atomic_or_2d, 0x3, true }, // 57
  { Intrinsic::amdgcn_image_atomic_or_2darray, 0x4, true }, // 58
  { Intrinsic::amdgcn_image_atomic_or_2darraymsaa, 0x5, true }, // 59
  { Intrinsic::amdgcn_image_atomic_or_2dmsaa, 0x4, true }, // 60
  { Intrinsic::amdgcn_image_atomic_or_3d, 0x4, true }, // 61
  { Intrinsic::amdgcn_image_atomic_or_cube, 0x4, true }, // 62
  { Intrinsic::amdgcn_image_atomic_smax_1d, 0x2, true }, // 63
  { Intrinsic::amdgcn_image_atomic_smax_1darray, 0x3, true }, // 64
  { Intrinsic::amdgcn_image_atomic_smax_2d, 0x3, true }, // 65
  { Intrinsic::amdgcn_image_atomic_smax_2darray, 0x4, true }, // 66
  { Intrinsic::amdgcn_image_atomic_smax_2darraymsaa, 0x5, true }, // 67
  { Intrinsic::amdgcn_image_atomic_smax_2dmsaa, 0x4, true }, // 68
  { Intrinsic::amdgcn_image_atomic_smax_3d, 0x4, true }, // 69
  { Intrinsic::amdgcn_image_atomic_smax_cube, 0x4, true }, // 70
  { Intrinsic::amdgcn_image_atomic_smin_1d, 0x2, true }, // 71
  { Intrinsic::amdgcn_image_atomic_smin_1darray, 0x3, true }, // 72
  { Intrinsic::amdgcn_image_atomic_smin_2d, 0x3, true }, // 73
  { Intrinsic::amdgcn_image_atomic_smin_2darray, 0x4, true }, // 74
  { Intrinsic::amdgcn_image_atomic_smin_2darraymsaa, 0x5, true }, // 75
  { Intrinsic::amdgcn_image_atomic_smin_2dmsaa, 0x4, true }, // 76
  { Intrinsic::amdgcn_image_atomic_smin_3d, 0x4, true }, // 77
  { Intrinsic::amdgcn_image_atomic_smin_cube, 0x4, true }, // 78
  { Intrinsic::amdgcn_image_atomic_sub_1d, 0x2, true }, // 79
  { Intrinsic::amdgcn_image_atomic_sub_1darray, 0x3, true }, // 80
  { Intrinsic::amdgcn_image_atomic_sub_2d, 0x3, true }, // 81
  { Intrinsic::amdgcn_image_atomic_sub_2darray, 0x4, true }, // 82
  { Intrinsic::amdgcn_image_atomic_sub_2darraymsaa, 0x5, true }, // 83
  { Intrinsic::amdgcn_image_atomic_sub_2dmsaa, 0x4, true }, // 84
  { Intrinsic::amdgcn_image_atomic_sub_3d, 0x4, true }, // 85
  { Intrinsic::amdgcn_image_atomic_sub_cube, 0x4, true }, // 86
  { Intrinsic::amdgcn_image_atomic_swap_1d, 0x2, true }, // 87
  { Intrinsic::amdgcn_image_atomic_swap_1darray, 0x3, true }, // 88
  { Intrinsic::amdgcn_image_atomic_swap_2d, 0x3, true }, // 89
  { Intrinsic::amdgcn_image_atomic_swap_2darray, 0x4, true }, // 90
  { Intrinsic::amdgcn_image_atomic_swap_2darraymsaa, 0x5, true }, // 91
  { Intrinsic::amdgcn_image_atomic_swap_2dmsaa, 0x4, true }, // 92
  { Intrinsic::amdgcn_image_atomic_swap_3d, 0x4, true }, // 93
  { Intrinsic::amdgcn_image_atomic_swap_cube, 0x4, true }, // 94
  { Intrinsic::amdgcn_image_atomic_umax_1d, 0x2, true }, // 95
  { Intrinsic::amdgcn_image_atomic_umax_1darray, 0x3, true }, // 96
  { Intrinsic::amdgcn_image_atomic_umax_2d, 0x3, true }, // 97
  { Intrinsic::amdgcn_image_atomic_umax_2darray, 0x4, true }, // 98
  { Intrinsic::amdgcn_image_atomic_umax_2darraymsaa, 0x5, true }, // 99
  { Intrinsic::amdgcn_image_atomic_umax_2dmsaa, 0x4, true }, // 100
  { Intrinsic::amdgcn_image_atomic_umax_3d, 0x4, true }, // 101
  { Intrinsic::amdgcn_image_atomic_umax_cube, 0x4, true }, // 102
  { Intrinsic::amdgcn_image_atomic_umin_1d, 0x2, true }, // 103
  { Intrinsic::amdgcn_image_atomic_umin_1darray, 0x3, true }, // 104
  { Intrinsic::amdgcn_image_atomic_umin_2d, 0x3, true }, // 105
  { Intrinsic::amdgcn_image_atomic_umin_2darray, 0x4, true }, // 106
  { Intrinsic::amdgcn_image_atomic_umin_2darraymsaa, 0x5, true }, // 107
  { Intrinsic::amdgcn_image_atomic_umin_2dmsaa, 0x4, true }, // 108
  { Intrinsic::amdgcn_image_atomic_umin_3d, 0x4, true }, // 109
  { Intrinsic::amdgcn_image_atomic_umin_cube, 0x4, true }, // 110
  { Intrinsic::amdgcn_image_atomic_xor_1d, 0x2, true }, // 111
  { Intrinsic::amdgcn_image_atomic_xor_1darray, 0x3, true }, // 112
  { Intrinsic::amdgcn_image_atomic_xor_2d, 0x3, true }, // 113
  { Intrinsic::amdgcn_image_atomic_xor_2darray, 0x4, true }, // 114
  { Intrinsic::amdgcn_image_atomic_xor_2darraymsaa, 0x5, true }, // 115
  { Intrinsic::amdgcn_image_atomic_xor_2dmsaa, 0x4, true }, // 116
  { Intrinsic::amdgcn_image_atomic_xor_3d, 0x4, true }, // 117
  { Intrinsic::amdgcn_image_atomic_xor_cube, 0x4, true }, // 118
  { Intrinsic::amdgcn_image_gather4_2d, 0x3, true }, // 119
  { Intrinsic::amdgcn_image_gather4_2darray, 0x4, true }, // 120
  { Intrinsic::amdgcn_image_gather4_b_2d, 0x4, true }, // 121
  { Intrinsic::amdgcn_image_gather4_b_2darray, 0x5, true }, // 122
  { Intrinsic::amdgcn_image_gather4_b_cl_2d, 0x5, true }, // 123
  { Intrinsic::amdgcn_image_gather4_b_cl_2darray, 0x6, true }, // 124
  { Intrinsic::amdgcn_image_gather4_b_cl_cube, 0x6, true }, // 125
  { Intrinsic::amdgcn_image_gather4_b_cl_o_2d, 0x6, true }, // 126
  { Intrinsic::amdgcn_image_gather4_b_cl_o_2darray, 0x7, true }, // 127
  { Intrinsic::amdgcn_image_gather4_b_cl_o_cube, 0x7, true }, // 128
  { Intrinsic::amdgcn_image_gather4_b_cube, 0x5, true }, // 129
  { Intrinsic::amdgcn_image_gather4_b_o_2d, 0x5, true }, // 130
  { Intrinsic::amdgcn_image_gather4_b_o_2darray, 0x6, true }, // 131
  { Intrinsic::amdgcn_image_gather4_b_o_cube, 0x6, true }, // 132
  { Intrinsic::amdgcn_image_gather4_c_2d, 0x4, true }, // 133
  { Intrinsic::amdgcn_image_gather4_c_2darray, 0x5, true }, // 134
  { Intrinsic::amdgcn_image_gather4_c_b_2d, 0x5, true }, // 135
  { Intrinsic::amdgcn_image_gather4_c_b_2darray, 0x6, true }, // 136
  { Intrinsic::amdgcn_image_gather4_c_b_cl_2d, 0x6, true }, // 137
  { Intrinsic::amdgcn_image_gather4_c_b_cl_2darray, 0x7, true }, // 138
  { Intrinsic::amdgcn_image_gather4_c_b_cl_cube, 0x7, true }, // 139
  { Intrinsic::amdgcn_image_gather4_c_b_cl_o_2d, 0x7, true }, // 140
  { Intrinsic::amdgcn_image_gather4_c_b_cl_o_2darray, 0x8, true }, // 141
  { Intrinsic::amdgcn_image_gather4_c_b_cl_o_cube, 0x8, true }, // 142
  { Intrinsic::amdgcn_image_gather4_c_b_cube, 0x6, true }, // 143
  { Intrinsic::amdgcn_image_gather4_c_b_o_2d, 0x6, true }, // 144
  { Intrinsic::amdgcn_image_gather4_c_b_o_2darray, 0x7, true }, // 145
  { Intrinsic::amdgcn_image_gather4_c_b_o_cube, 0x7, true }, // 146
  { Intrinsic::amdgcn_image_gather4_c_cl_2d, 0x5, true }, // 147
  { Intrinsic::amdgcn_image_gather4_c_cl_2darray, 0x6, true }, // 148
  { Intrinsic::amdgcn_image_gather4_c_cl_cube, 0x6, true }, // 149
  { Intrinsic::amdgcn_image_gather4_c_cl_o_2d, 0x6, true }, // 150
  { Intrinsic::amdgcn_image_gather4_c_cl_o_2darray, 0x7, true }, // 151
  { Intrinsic::amdgcn_image_gather4_c_cl_o_cube, 0x7, true }, // 152
  { Intrinsic::amdgcn_image_gather4_c_cube, 0x5, true }, // 153
  { Intrinsic::amdgcn_image_gather4_c_l_2d, 0x5, true }, // 154
  { Intrinsic::amdgcn_image_gather4_c_l_2darray, 0x6, true }, // 155
  { Intrinsic::amdgcn_image_gather4_c_l_cube, 0x6, true }, // 156
  { Intrinsic::amdgcn_image_gather4_c_l_o_2d, 0x6, true }, // 157
  { Intrinsic::amdgcn_image_gather4_c_l_o_2darray, 0x7, true }, // 158
  { Intrinsic::amdgcn_image_gather4_c_l_o_cube, 0x7, true }, // 159
  { Intrinsic::amdgcn_image_gather4_c_lz_2d, 0x4, true }, // 160
  { Intrinsic::amdgcn_image_gather4_c_lz_2darray, 0x5, true }, // 161
  { Intrinsic::amdgcn_image_gather4_c_lz_cube, 0x5, true }, // 162
  { Intrinsic::amdgcn_image_gather4_c_lz_o_2d, 0x5, true }, // 163
  { Intrinsic::amdgcn_image_gather4_c_lz_o_2darray, 0x6, true }, // 164
  { Intrinsic::amdgcn_image_gather4_c_lz_o_cube, 0x6, true }, // 165
  { Intrinsic::amdgcn_image_gather4_c_o_2d, 0x5, true }, // 166
  { Intrinsic::amdgcn_image_gather4_c_o_2darray, 0x6, true }, // 167
  { Intrinsic::amdgcn_image_gather4_c_o_cube, 0x6, true }, // 168
  { Intrinsic::amdgcn_image_gather4_cl_2d, 0x4, true }, // 169
  { Intrinsic::amdgcn_image_gather4_cl_2darray, 0x5, true }, // 170
  { Intrinsic::amdgcn_image_gather4_cl_cube, 0x5, true }, // 171
  { Intrinsic::amdgcn_image_gather4_cl_o_2d, 0x5, true }, // 172
  { Intrinsic::amdgcn_image_gather4_cl_o_2darray, 0x6, true }, // 173
  { Intrinsic::amdgcn_image_gather4_cl_o_cube, 0x6, true }, // 174
  { Intrinsic::amdgcn_image_gather4_cube, 0x4, true }, // 175
  { Intrinsic::amdgcn_image_gather4_l_2d, 0x4, true }, // 176
  { Intrinsic::amdgcn_image_gather4_l_2darray, 0x5, true }, // 177
  { Intrinsic::amdgcn_image_gather4_l_cube, 0x5, true }, // 178
  { Intrinsic::amdgcn_image_gather4_l_o_2d, 0x5, true }, // 179
  { Intrinsic::amdgcn_image_gather4_l_o_2darray, 0x6, true }, // 180
  { Intrinsic::amdgcn_image_gather4_l_o_cube, 0x6, true }, // 181
  { Intrinsic::amdgcn_image_gather4_lz_2d, 0x3, true }, // 182
  { Intrinsic::amdgcn_image_gather4_lz_2darray, 0x4, true }, // 183
  { Intrinsic::amdgcn_image_gather4_lz_cube, 0x4, true }, // 184
  { Intrinsic::amdgcn_image_gather4_lz_o_2d, 0x4, true }, // 185
  { Intrinsic::amdgcn_image_gather4_lz_o_2darray, 0x5, true }, // 186
  { Intrinsic::amdgcn_image_gather4_lz_o_cube, 0x5, true }, // 187
  { Intrinsic::amdgcn_image_gather4_o_2d, 0x4, true }, // 188
  { Intrinsic::amdgcn_image_gather4_o_2darray, 0x5, true }, // 189
  { Intrinsic::amdgcn_image_gather4_o_cube, 0x5, true }, // 190
  { Intrinsic::amdgcn_image_getlod_1d, 0x2, true }, // 191
  { Intrinsic::amdgcn_image_getlod_1darray, 0x3, true }, // 192
  { Intrinsic::amdgcn_image_getlod_2d, 0x3, true }, // 193
  { Intrinsic::amdgcn_image_getlod_2darray, 0x4, true }, // 194
  { Intrinsic::amdgcn_image_getlod_3d, 0x4, true }, // 195
  { Intrinsic::amdgcn_image_getlod_cube, 0x4, true }, // 196
  { Intrinsic::amdgcn_image_getresinfo_1d, 0x2, true }, // 197
  { Intrinsic::amdgcn_image_getresinfo_1darray, 0x2, true }, // 198
  { Intrinsic::amdgcn_image_getresinfo_2d, 0x2, true }, // 199
  { Intrinsic::amdgcn_image_getresinfo_2darray, 0x2, true }, // 200
  { Intrinsic::amdgcn_image_getresinfo_2darraymsaa, 0x2, true }, // 201
  { Intrinsic::amdgcn_image_getresinfo_2dmsaa, 0x2, true }, // 202
  { Intrinsic::amdgcn_image_getresinfo_3d, 0x2, true }, // 203
  { Intrinsic::amdgcn_image_getresinfo_cube, 0x2, true }, // 204
  { Intrinsic::amdgcn_image_load_1d, 0x2, true }, // 205
  { Intrinsic::amdgcn_image_load_1darray, 0x3, true }, // 206
  { Intrinsic::amdgcn_image_load_2d, 0x3, true }, // 207
  { Intrinsic::amdgcn_image_load_2darray, 0x4, true }, // 208
  { Intrinsic::amdgcn_image_load_2darraymsaa, 0x5, true }, // 209
  { Intrinsic::amdgcn_image_load_2dmsaa, 0x4, true }, // 210
  { Intrinsic::amdgcn_image_load_3d, 0x4, true }, // 211
  { Intrinsic::amdgcn_image_load_cube, 0x4, true }, // 212
  { Intrinsic::amdgcn_image_load_mip_1d, 0x3, true }, // 213
  { Intrinsic::amdgcn_image_load_mip_1darray, 0x4, true }, // 214
  { Intrinsic::amdgcn_image_load_mip_2d, 0x4, true }, // 215
  { Intrinsic::amdgcn_image_load_mip_2darray, 0x5, true }, // 216
  { Intrinsic::amdgcn_image_load_mip_3d, 0x5, true }, // 217
  { Intrinsic::amdgcn_image_load_mip_cube, 0x5, true }, // 218
  { Intrinsic::amdgcn_image_sample_1d, 0x2, true }, // 219
  { Intrinsic::amdgcn_image_sample_1darray, 0x3, true }, // 220
  { Intrinsic::amdgcn_image_sample_2d, 0x3, true }, // 221
  { Intrinsic::amdgcn_image_sample_2darray, 0x4, true }, // 222
  { Intrinsic::amdgcn_image_sample_3d, 0x4, true }, // 223
  { Intrinsic::amdgcn_image_sample_b_1d, 0x3, true }, // 224
  { Intrinsic::amdgcn_image_sample_b_1darray, 0x4, true }, // 225
  { Intrinsic::amdgcn_image_sample_b_2d, 0x4, true }, // 226
  { Intrinsic::amdgcn_image_sample_b_2darray, 0x5, true }, // 227
  { Intrinsic::amdgcn_image_sample_b_3d, 0x5, true }, // 228
  { Intrinsic::amdgcn_image_sample_b_cl_1d, 0x4, true }, // 229
  { Intrinsic::amdgcn_image_sample_b_cl_1darray, 0x5, true }, // 230
  { Intrinsic::amdgcn_image_sample_b_cl_2d, 0x5, true }, // 231
  { Intrinsic::amdgcn_image_sample_b_cl_2darray, 0x6, true }, // 232
  { Intrinsic::amdgcn_image_sample_b_cl_3d, 0x6, true }, // 233
  { Intrinsic::amdgcn_image_sample_b_cl_cube, 0x6, true }, // 234
  { Intrinsic::amdgcn_image_sample_b_cl_o_1d, 0x5, true }, // 235
  { Intrinsic::amdgcn_image_sample_b_cl_o_1darray, 0x6, true }, // 236
  { Intrinsic::amdgcn_image_sample_b_cl_o_2d, 0x6, true }, // 237
  { Intrinsic::amdgcn_image_sample_b_cl_o_2darray, 0x7, true }, // 238
  { Intrinsic::amdgcn_image_sample_b_cl_o_3d, 0x7, true }, // 239
  { Intrinsic::amdgcn_image_sample_b_cl_o_cube, 0x7, true }, // 240
  { Intrinsic::amdgcn_image_sample_b_cube, 0x5, true }, // 241
  { Intrinsic::amdgcn_image_sample_b_o_1d, 0x4, true }, // 242
  { Intrinsic::amdgcn_image_sample_b_o_1darray, 0x5, true }, // 243
  { Intrinsic::amdgcn_image_sample_b_o_2d, 0x5, true }, // 244
  { Intrinsic::amdgcn_image_sample_b_o_2darray, 0x6, true }, // 245
  { Intrinsic::amdgcn_image_sample_b_o_3d, 0x6, true }, // 246
  { Intrinsic::amdgcn_image_sample_b_o_cube, 0x6, true }, // 247
  { Intrinsic::amdgcn_image_sample_c_1d, 0x3, true }, // 248
  { Intrinsic::amdgcn_image_sample_c_1darray, 0x4, true }, // 249
  { Intrinsic::amdgcn_image_sample_c_2d, 0x4, true }, // 250
  { Intrinsic::amdgcn_image_sample_c_2darray, 0x5, true }, // 251
  { Intrinsic::amdgcn_image_sample_c_3d, 0x5, true }, // 252
  { Intrinsic::amdgcn_image_sample_c_b_1d, 0x4, true }, // 253
  { Intrinsic::amdgcn_image_sample_c_b_1darray, 0x5, true }, // 254
  { Intrinsic::amdgcn_image_sample_c_b_2d, 0x5, true }, // 255
  { Intrinsic::amdgcn_image_sample_c_b_2darray, 0x6, true }, // 256
  { Intrinsic::amdgcn_image_sample_c_b_3d, 0x6, true }, // 257
  { Intrinsic::amdgcn_image_sample_c_b_cl_1d, 0x5, true }, // 258
  { Intrinsic::amdgcn_image_sample_c_b_cl_1darray, 0x6, true }, // 259
  { Intrinsic::amdgcn_image_sample_c_b_cl_2d, 0x6, true }, // 260
  { Intrinsic::amdgcn_image_sample_c_b_cl_2darray, 0x7, true }, // 261
  { Intrinsic::amdgcn_image_sample_c_b_cl_3d, 0x7, true }, // 262
  { Intrinsic::amdgcn_image_sample_c_b_cl_cube, 0x7, true }, // 263
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_1d, 0x6, true }, // 264
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_1darray, 0x7, true }, // 265
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_2d, 0x7, true }, // 266
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_2darray, 0x8, true }, // 267
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_3d, 0x8, true }, // 268
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_cube, 0x8, true }, // 269
  { Intrinsic::amdgcn_image_sample_c_b_cube, 0x6, true }, // 270
  { Intrinsic::amdgcn_image_sample_c_b_o_1d, 0x5, true }, // 271
  { Intrinsic::amdgcn_image_sample_c_b_o_1darray, 0x6, true }, // 272
  { Intrinsic::amdgcn_image_sample_c_b_o_2d, 0x6, true }, // 273
  { Intrinsic::amdgcn_image_sample_c_b_o_2darray, 0x7, true }, // 274
  { Intrinsic::amdgcn_image_sample_c_b_o_3d, 0x7, true }, // 275
  { Intrinsic::amdgcn_image_sample_c_b_o_cube, 0x7, true }, // 276
  { Intrinsic::amdgcn_image_sample_c_cd_1d, 0x5, true }, // 277
  { Intrinsic::amdgcn_image_sample_c_cd_1darray, 0x6, true }, // 278
  { Intrinsic::amdgcn_image_sample_c_cd_2d, 0x8, true }, // 279
  { Intrinsic::amdgcn_image_sample_c_cd_2darray, 0x9, true }, // 280
  { Intrinsic::amdgcn_image_sample_c_cd_3d, 0xB, true }, // 281
  { Intrinsic::amdgcn_image_sample_c_cd_cl_1d, 0x6, true }, // 282
  { Intrinsic::amdgcn_image_sample_c_cd_cl_1darray, 0x7, true }, // 283
  { Intrinsic::amdgcn_image_sample_c_cd_cl_2d, 0x9, true }, // 284
  { Intrinsic::amdgcn_image_sample_c_cd_cl_2darray, 0xA, true }, // 285
  { Intrinsic::amdgcn_image_sample_c_cd_cl_3d, 0xC, true }, // 286
  { Intrinsic::amdgcn_image_sample_c_cd_cl_cube, 0xA, true }, // 287
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_1d, 0x7, true }, // 288
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_1darray, 0x8, true }, // 289
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_2d, 0xA, true }, // 290
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_2darray, 0xB, true }, // 291
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_3d, 0xD, true }, // 292
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_cube, 0xB, true }, // 293
  { Intrinsic::amdgcn_image_sample_c_cd_cube, 0x9, true }, // 294
  { Intrinsic::amdgcn_image_sample_c_cd_o_1d, 0x6, true }, // 295
  { Intrinsic::amdgcn_image_sample_c_cd_o_1darray, 0x7, true }, // 296
  { Intrinsic::amdgcn_image_sample_c_cd_o_2d, 0x9, true }, // 297
  { Intrinsic::amdgcn_image_sample_c_cd_o_2darray, 0xA, true }, // 298
  { Intrinsic::amdgcn_image_sample_c_cd_o_3d, 0xC, true }, // 299
  { Intrinsic::amdgcn_image_sample_c_cd_o_cube, 0xA, true }, // 300
  { Intrinsic::amdgcn_image_sample_c_cl_1d, 0x4, true }, // 301
  { Intrinsic::amdgcn_image_sample_c_cl_1darray, 0x5, true }, // 302
  { Intrinsic::amdgcn_image_sample_c_cl_2d, 0x5, true }, // 303
  { Intrinsic::amdgcn_image_sample_c_cl_2darray, 0x6, true }, // 304
  { Intrinsic::amdgcn_image_sample_c_cl_3d, 0x6, true }, // 305
  { Intrinsic::amdgcn_image_sample_c_cl_cube, 0x6, true }, // 306
  { Intrinsic::amdgcn_image_sample_c_cl_o_1d, 0x5, true }, // 307
  { Intrinsic::amdgcn_image_sample_c_cl_o_1darray, 0x6, true }, // 308
  { Intrinsic::amdgcn_image_sample_c_cl_o_2d, 0x6, true }, // 309
  { Intrinsic::amdgcn_image_sample_c_cl_o_2darray, 0x7, true }, // 310
  { Intrinsic::amdgcn_image_sample_c_cl_o_3d, 0x7, true }, // 311
  { Intrinsic::amdgcn_image_sample_c_cl_o_cube, 0x7, true }, // 312
  { Intrinsic::amdgcn_image_sample_c_cube, 0x5, true }, // 313
  { Intrinsic::amdgcn_image_sample_c_d_1d, 0x5, true }, // 314
  { Intrinsic::amdgcn_image_sample_c_d_1darray, 0x6, true }, // 315
  { Intrinsic::amdgcn_image_sample_c_d_2d, 0x8, true }, // 316
  { Intrinsic::amdgcn_image_sample_c_d_2darray, 0x9, true }, // 317
  { Intrinsic::amdgcn_image_sample_c_d_3d, 0xB, true }, // 318
  { Intrinsic::amdgcn_image_sample_c_d_cl_1d, 0x6, true }, // 319
  { Intrinsic::amdgcn_image_sample_c_d_cl_1darray, 0x7, true }, // 320
  { Intrinsic::amdgcn_image_sample_c_d_cl_2d, 0x9, true }, // 321
  { Intrinsic::amdgcn_image_sample_c_d_cl_2darray, 0xA, true }, // 322
  { Intrinsic::amdgcn_image_sample_c_d_cl_3d, 0xC, true }, // 323
  { Intrinsic::amdgcn_image_sample_c_d_cl_cube, 0xA, true }, // 324
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_1d, 0x7, true }, // 325
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_1darray, 0x8, true }, // 326
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_2d, 0xA, true }, // 327
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_2darray, 0xB, true }, // 328
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_3d, 0xD, true }, // 329
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_cube, 0xB, true }, // 330
  { Intrinsic::amdgcn_image_sample_c_d_cube, 0x9, true }, // 331
  { Intrinsic::amdgcn_image_sample_c_d_o_1d, 0x6, true }, // 332
  { Intrinsic::amdgcn_image_sample_c_d_o_1darray, 0x7, true }, // 333
  { Intrinsic::amdgcn_image_sample_c_d_o_2d, 0x9, true }, // 334
  { Intrinsic::amdgcn_image_sample_c_d_o_2darray, 0xA, true }, // 335
  { Intrinsic::amdgcn_image_sample_c_d_o_3d, 0xC, true }, // 336
  { Intrinsic::amdgcn_image_sample_c_d_o_cube, 0xA, true }, // 337
  { Intrinsic::amdgcn_image_sample_c_l_1d, 0x4, true }, // 338
  { Intrinsic::amdgcn_image_sample_c_l_1darray, 0x5, true }, // 339
  { Intrinsic::amdgcn_image_sample_c_l_2d, 0x5, true }, // 340
  { Intrinsic::amdgcn_image_sample_c_l_2darray, 0x6, true }, // 341
  { Intrinsic::amdgcn_image_sample_c_l_3d, 0x6, true }, // 342
  { Intrinsic::amdgcn_image_sample_c_l_cube, 0x6, true }, // 343
  { Intrinsic::amdgcn_image_sample_c_l_o_1d, 0x5, true }, // 344
  { Intrinsic::amdgcn_image_sample_c_l_o_1darray, 0x6, true }, // 345
  { Intrinsic::amdgcn_image_sample_c_l_o_2d, 0x6, true }, // 346
  { Intrinsic::amdgcn_image_sample_c_l_o_2darray, 0x7, true }, // 347
  { Intrinsic::amdgcn_image_sample_c_l_o_3d, 0x7, true }, // 348
  { Intrinsic::amdgcn_image_sample_c_l_o_cube, 0x7, true }, // 349
  { Intrinsic::amdgcn_image_sample_c_lz_1d, 0x3, true }, // 350
  { Intrinsic::amdgcn_image_sample_c_lz_1darray, 0x4, true }, // 351
  { Intrinsic::amdgcn_image_sample_c_lz_2d, 0x4, true }, // 352
  { Intrinsic::amdgcn_image_sample_c_lz_2darray, 0x5, true }, // 353
  { Intrinsic::amdgcn_image_sample_c_lz_3d, 0x5, true }, // 354
  { Intrinsic::amdgcn_image_sample_c_lz_cube, 0x5, true }, // 355
  { Intrinsic::amdgcn_image_sample_c_lz_o_1d, 0x4, true }, // 356
  { Intrinsic::amdgcn_image_sample_c_lz_o_1darray, 0x5, true }, // 357
  { Intrinsic::amdgcn_image_sample_c_lz_o_2d, 0x5, true }, // 358
  { Intrinsic::amdgcn_image_sample_c_lz_o_2darray, 0x6, true }, // 359
  { Intrinsic::amdgcn_image_sample_c_lz_o_3d, 0x6, true }, // 360
  { Intrinsic::amdgcn_image_sample_c_lz_o_cube, 0x6, true }, // 361
  { Intrinsic::amdgcn_image_sample_c_o_1d, 0x4, true }, // 362
  { Intrinsic::amdgcn_image_sample_c_o_1darray, 0x5, true }, // 363
  { Intrinsic::amdgcn_image_sample_c_o_2d, 0x5, true }, // 364
  { Intrinsic::amdgcn_image_sample_c_o_2darray, 0x6, true }, // 365
  { Intrinsic::amdgcn_image_sample_c_o_3d, 0x6, true }, // 366
  { Intrinsic::amdgcn_image_sample_c_o_cube, 0x6, true }, // 367
  { Intrinsic::amdgcn_image_sample_cd_1d, 0x4, true }, // 368
  { Intrinsic::amdgcn_image_sample_cd_1darray, 0x5, true }, // 369
  { Intrinsic::amdgcn_image_sample_cd_2d, 0x7, true }, // 370
  { Intrinsic::amdgcn_image_sample_cd_2darray, 0x8, true }, // 371
  { Intrinsic::amdgcn_image_sample_cd_3d, 0xA, true }, // 372
  { Intrinsic::amdgcn_image_sample_cd_cl_1d, 0x5, true }, // 373
  { Intrinsic::amdgcn_image_sample_cd_cl_1darray, 0x6, true }, // 374
  { Intrinsic::amdgcn_image_sample_cd_cl_2d, 0x8, true }, // 375
  { Intrinsic::amdgcn_image_sample_cd_cl_2darray, 0x9, true }, // 376
  { Intrinsic::amdgcn_image_sample_cd_cl_3d, 0xB, true }, // 377
  { Intrinsic::amdgcn_image_sample_cd_cl_cube, 0x9, true }, // 378
  { Intrinsic::amdgcn_image_sample_cd_cl_o_1d, 0x6, true }, // 379
  { Intrinsic::amdgcn_image_sample_cd_cl_o_1darray, 0x7, true }, // 380
  { Intrinsic::amdgcn_image_sample_cd_cl_o_2d, 0x9, true }, // 381
  { Intrinsic::amdgcn_image_sample_cd_cl_o_2darray, 0xA, true }, // 382
  { Intrinsic::amdgcn_image_sample_cd_cl_o_3d, 0xC, true }, // 383
  { Intrinsic::amdgcn_image_sample_cd_cl_o_cube, 0xA, true }, // 384
  { Intrinsic::amdgcn_image_sample_cd_cube, 0x8, true }, // 385
  { Intrinsic::amdgcn_image_sample_cd_o_1d, 0x5, true }, // 386
  { Intrinsic::amdgcn_image_sample_cd_o_1darray, 0x6, true }, // 387
  { Intrinsic::amdgcn_image_sample_cd_o_2d, 0x8, true }, // 388
  { Intrinsic::amdgcn_image_sample_cd_o_2darray, 0x9, true }, // 389
  { Intrinsic::amdgcn_image_sample_cd_o_3d, 0xB, true }, // 390
  { Intrinsic::amdgcn_image_sample_cd_o_cube, 0x9, true }, // 391
  { Intrinsic::amdgcn_image_sample_cl_1d, 0x3, true }, // 392
  { Intrinsic::amdgcn_image_sample_cl_1darray, 0x4, true }, // 393
  { Intrinsic::amdgcn_image_sample_cl_2d, 0x4, true }, // 394
  { Intrinsic::amdgcn_image_sample_cl_2darray, 0x5, true }, // 395
  { Intrinsic::amdgcn_image_sample_cl_3d, 0x5, true }, // 396
  { Intrinsic::amdgcn_image_sample_cl_cube, 0x5, true }, // 397
  { Intrinsic::amdgcn_image_sample_cl_o_1d, 0x4, true }, // 398
  { Intrinsic::amdgcn_image_sample_cl_o_1darray, 0x5, true }, // 399
  { Intrinsic::amdgcn_image_sample_cl_o_2d, 0x5, true }, // 400
  { Intrinsic::amdgcn_image_sample_cl_o_2darray, 0x6, true }, // 401
  { Intrinsic::amdgcn_image_sample_cl_o_3d, 0x6, true }, // 402
  { Intrinsic::amdgcn_image_sample_cl_o_cube, 0x6, true }, // 403
  { Intrinsic::amdgcn_image_sample_cube, 0x4, true }, // 404
  { Intrinsic::amdgcn_image_sample_d_1d, 0x4, true }, // 405
  { Intrinsic::amdgcn_image_sample_d_1darray, 0x5, true }, // 406
  { Intrinsic::amdgcn_image_sample_d_2d, 0x7, true }, // 407
  { Intrinsic::amdgcn_image_sample_d_2darray, 0x8, true }, // 408
  { Intrinsic::amdgcn_image_sample_d_3d, 0xA, true }, // 409
  { Intrinsic::amdgcn_image_sample_d_cl_1d, 0x5, true }, // 410
  { Intrinsic::amdgcn_image_sample_d_cl_1darray, 0x6, true }, // 411
  { Intrinsic::amdgcn_image_sample_d_cl_2d, 0x8, true }, // 412
  { Intrinsic::amdgcn_image_sample_d_cl_2darray, 0x9, true }, // 413
  { Intrinsic::amdgcn_image_sample_d_cl_3d, 0xB, true }, // 414
  { Intrinsic::amdgcn_image_sample_d_cl_cube, 0x9, true }, // 415
  { Intrinsic::amdgcn_image_sample_d_cl_o_1d, 0x6, true }, // 416
  { Intrinsic::amdgcn_image_sample_d_cl_o_1darray, 0x7, true }, // 417
  { Intrinsic::amdgcn_image_sample_d_cl_o_2d, 0x9, true }, // 418
  { Intrinsic::amdgcn_image_sample_d_cl_o_2darray, 0xA, true }, // 419
  { Intrinsic::amdgcn_image_sample_d_cl_o_3d, 0xC, true }, // 420
  { Intrinsic::amdgcn_image_sample_d_cl_o_cube, 0xA, true }, // 421
  { Intrinsic::amdgcn_image_sample_d_cube, 0x8, true }, // 422
  { Intrinsic::amdgcn_image_sample_d_o_1d, 0x5, true }, // 423
  { Intrinsic::amdgcn_image_sample_d_o_1darray, 0x6, true }, // 424
  { Intrinsic::amdgcn_image_sample_d_o_2d, 0x8, true }, // 425
  { Intrinsic::amdgcn_image_sample_d_o_2darray, 0x9, true }, // 426
  { Intrinsic::amdgcn_image_sample_d_o_3d, 0xB, true }, // 427
  { Intrinsic::amdgcn_image_sample_d_o_cube, 0x9, true }, // 428
  { Intrinsic::amdgcn_image_sample_l_1d, 0x3, true }, // 429
  { Intrinsic::amdgcn_image_sample_l_1darray, 0x4, true }, // 430
  { Intrinsic::amdgcn_image_sample_l_2d, 0x4, true }, // 431
  { Intrinsic::amdgcn_image_sample_l_2darray, 0x5, true }, // 432
  { Intrinsic::amdgcn_image_sample_l_3d, 0x5, true }, // 433
  { Intrinsic::amdgcn_image_sample_l_cube, 0x5, true }, // 434
  { Intrinsic::amdgcn_image_sample_l_o_1d, 0x4, true }, // 435
  { Intrinsic::amdgcn_image_sample_l_o_1darray, 0x5, true }, // 436
  { Intrinsic::amdgcn_image_sample_l_o_2d, 0x5, true }, // 437
  { Intrinsic::amdgcn_image_sample_l_o_2darray, 0x6, true }, // 438
  { Intrinsic::amdgcn_image_sample_l_o_3d, 0x6, true }, // 439
  { Intrinsic::amdgcn_image_sample_l_o_cube, 0x6, true }, // 440
  { Intrinsic::amdgcn_image_sample_lz_1d, 0x2, true }, // 441
  { Intrinsic::amdgcn_image_sample_lz_1darray, 0x3, true }, // 442
  { Intrinsic::amdgcn_image_sample_lz_2d, 0x3, true }, // 443
  { Intrinsic::amdgcn_image_sample_lz_2darray, 0x4, true }, // 444
  { Intrinsic::amdgcn_image_sample_lz_3d, 0x4, true }, // 445
  { Intrinsic::amdgcn_image_sample_lz_cube, 0x4, true }, // 446
  { Intrinsic::amdgcn_image_sample_lz_o_1d, 0x3, true }, // 447
  { Intrinsic::amdgcn_image_sample_lz_o_1darray, 0x4, true }, // 448
  { Intrinsic::amdgcn_image_sample_lz_o_2d, 0x4, true }, // 449
  { Intrinsic::amdgcn_image_sample_lz_o_2darray, 0x5, true }, // 450
  { Intrinsic::amdgcn_image_sample_lz_o_3d, 0x5, true }, // 451
  { Intrinsic::amdgcn_image_sample_lz_o_cube, 0x5, true }, // 452
  { Intrinsic::amdgcn_image_sample_o_1d, 0x3, true }, // 453
  { Intrinsic::amdgcn_image_sample_o_1darray, 0x4, true }, // 454
  { Intrinsic::amdgcn_image_sample_o_2d, 0x4, true }, // 455
  { Intrinsic::amdgcn_image_sample_o_2darray, 0x5, true }, // 456
  { Intrinsic::amdgcn_image_sample_o_3d, 0x5, true }, // 457
  { Intrinsic::amdgcn_image_sample_o_cube, 0x5, true }, // 458
  { Intrinsic::amdgcn_image_store_1d, 0x3, true }, // 459
  { Intrinsic::amdgcn_image_store_1darray, 0x4, true }, // 460
  { Intrinsic::amdgcn_image_store_2d, 0x4, true }, // 461
  { Intrinsic::amdgcn_image_store_2darray, 0x5, true }, // 462
  { Intrinsic::amdgcn_image_store_2darraymsaa, 0x6, true }, // 463
  { Intrinsic::amdgcn_image_store_2dmsaa, 0x5, true }, // 464
  { Intrinsic::amdgcn_image_store_3d, 0x5, true }, // 465
  { Intrinsic::amdgcn_image_store_cube, 0x5, true }, // 466
  { Intrinsic::amdgcn_image_store_mip_1d, 0x4, true }, // 467
  { Intrinsic::amdgcn_image_store_mip_1darray, 0x5, true }, // 468
  { Intrinsic::amdgcn_image_store_mip_2d, 0x5, true }, // 469
  { Intrinsic::amdgcn_image_store_mip_2darray, 0x6, true }, // 470
  { Intrinsic::amdgcn_image_store_mip_3d, 0x6, true }, // 471
  { Intrinsic::amdgcn_image_store_mip_cube, 0x6, true }, // 472
  { Intrinsic::amdgcn_raw_buffer_atomic_add, 0x1, false }, // 473
  { Intrinsic::amdgcn_raw_buffer_atomic_and, 0x1, false }, // 474
  { Intrinsic::amdgcn_raw_buffer_atomic_cmpswap, 0x2, false }, // 475
  { Intrinsic::amdgcn_raw_buffer_atomic_dec, 0x1, false }, // 476
  { Intrinsic::amdgcn_raw_buffer_atomic_inc, 0x1, false }, // 477
  { Intrinsic::amdgcn_raw_buffer_atomic_or, 0x1, false }, // 478
  { Intrinsic::amdgcn_raw_buffer_atomic_smax, 0x1, false }, // 479
  { Intrinsic::amdgcn_raw_buffer_atomic_smin, 0x1, false }, // 480
  { Intrinsic::amdgcn_raw_buffer_atomic_sub, 0x1, false }, // 481
  { Intrinsic::amdgcn_raw_buffer_atomic_swap, 0x1, false }, // 482
  { Intrinsic::amdgcn_raw_buffer_atomic_umax, 0x1, false }, // 483
  { Intrinsic::amdgcn_raw_buffer_atomic_umin, 0x1, false }, // 484
  { Intrinsic::amdgcn_raw_buffer_atomic_xor, 0x1, false }, // 485
  { Intrinsic::amdgcn_raw_buffer_load, 0x0, false }, // 486
  { Intrinsic::amdgcn_raw_buffer_load_format, 0x0, false }, // 487
  { Intrinsic::amdgcn_raw_buffer_store, 0x1, false }, // 488
  { Intrinsic::amdgcn_raw_buffer_store_format, 0x1, false }, // 489
  { Intrinsic::amdgcn_raw_tbuffer_load, 0x0, false }, // 490
  { Intrinsic::amdgcn_raw_tbuffer_store, 0x1, false }, // 491
  { Intrinsic::amdgcn_s_buffer_load, 0x0, false }, // 492
  { Intrinsic::amdgcn_struct_buffer_atomic_add, 0x1, false }, // 493
  { Intrinsic::amdgcn_struct_buffer_atomic_and, 0x1, false }, // 494
  { Intrinsic::amdgcn_struct_buffer_atomic_cmpswap, 0x2, false }, // 495
  { Intrinsic::amdgcn_struct_buffer_atomic_dec, 0x1, false }, // 496
  { Intrinsic::amdgcn_struct_buffer_atomic_inc, 0x1, false }, // 497
  { Intrinsic::amdgcn_struct_buffer_atomic_or, 0x1, false }, // 498
  { Intrinsic::amdgcn_struct_buffer_atomic_smax, 0x1, false }, // 499
  { Intrinsic::amdgcn_struct_buffer_atomic_smin, 0x1, false }, // 500
  { Intrinsic::amdgcn_struct_buffer_atomic_sub, 0x1, false }, // 501
  { Intrinsic::amdgcn_struct_buffer_atomic_swap, 0x1, false }, // 502
  { Intrinsic::amdgcn_struct_buffer_atomic_umax, 0x1, false }, // 503
  { Intrinsic::amdgcn_struct_buffer_atomic_umin, 0x1, false }, // 504
  { Intrinsic::amdgcn_struct_buffer_atomic_xor, 0x1, false }, // 505
  { Intrinsic::amdgcn_struct_buffer_load, 0x0, false }, // 506
  { Intrinsic::amdgcn_struct_buffer_load_format, 0x0, false }, // 507
  { Intrinsic::amdgcn_struct_buffer_store, 0x1, false }, // 508
  { Intrinsic::amdgcn_struct_buffer_store_format, 0x1, false }, // 509
  { Intrinsic::amdgcn_struct_tbuffer_load, 0x0, false }, // 510
  { Intrinsic::amdgcn_struct_tbuffer_store, 0x1, false }, // 511
  { Intrinsic::amdgcn_tbuffer_load, 0x0, false }, // 512
  { Intrinsic::amdgcn_tbuffer_store, 0x1, false }, // 513
 };

const RsrcIntrinsic *lookupRsrcIntrinsic(unsigned Intr) {
  struct KeyType {
    unsigned Intr;
  };
  KeyType Key = { Intr };
  auto Table = makeArrayRef(RsrcIntrinsics);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const RsrcIntrinsic &LHS, const KeyType &RHS) {
      if (LHS.Intr < RHS.Intr)
        return true;
      if (LHS.Intr > RHS.Intr)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Intr != Idx->Intr)
    return nullptr;
  return &*Idx;
}
#endif

#ifdef GET_SourcesOfDivergence_DECL
const SourceOfDivergence *lookupSourceOfDivergence(unsigned Intr);
#endif

#ifdef GET_SourcesOfDivergence_IMPL
constexpr SourceOfDivergence SourcesOfDivergence[] = {
  { Intrinsic::amdgcn_atomic_dec }, // 0
  { Intrinsic::amdgcn_atomic_inc }, // 1
  { Intrinsic::amdgcn_buffer_atomic_add }, // 2
  { Intrinsic::amdgcn_buffer_atomic_and }, // 3
  { Intrinsic::amdgcn_buffer_atomic_cmpswap }, // 4
  { Intrinsic::amdgcn_buffer_atomic_or }, // 5
  { Intrinsic::amdgcn_buffer_atomic_smax }, // 6
  { Intrinsic::amdgcn_buffer_atomic_smin }, // 7
  { Intrinsic::amdgcn_buffer_atomic_sub }, // 8
  { Intrinsic::amdgcn_buffer_atomic_swap }, // 9
  { Intrinsic::amdgcn_buffer_atomic_umax }, // 10
  { Intrinsic::amdgcn_buffer_atomic_umin }, // 11
  { Intrinsic::amdgcn_buffer_atomic_xor }, // 12
  { Intrinsic::amdgcn_ds_fadd }, // 13
  { Intrinsic::amdgcn_ds_fmax }, // 14
  { Intrinsic::amdgcn_ds_fmin }, // 15
  { Intrinsic::amdgcn_ds_ordered_add }, // 16
  { Intrinsic::amdgcn_ds_ordered_swap }, // 17
  { Intrinsic::amdgcn_ds_swizzle }, // 18
  { Intrinsic::amdgcn_image_atomic_add_1d }, // 19
  { Intrinsic::amdgcn_image_atomic_add_1darray }, // 20
  { Intrinsic::amdgcn_image_atomic_add_2d }, // 21
  { Intrinsic::amdgcn_image_atomic_add_2darray }, // 22
  { Intrinsic::amdgcn_image_atomic_add_2darraymsaa }, // 23
  { Intrinsic::amdgcn_image_atomic_add_2dmsaa }, // 24
  { Intrinsic::amdgcn_image_atomic_add_3d }, // 25
  { Intrinsic::amdgcn_image_atomic_add_cube }, // 26
  { Intrinsic::amdgcn_image_atomic_and_1d }, // 27
  { Intrinsic::amdgcn_image_atomic_and_1darray }, // 28
  { Intrinsic::amdgcn_image_atomic_and_2d }, // 29
  { Intrinsic::amdgcn_image_atomic_and_2darray }, // 30
  { Intrinsic::amdgcn_image_atomic_and_2darraymsaa }, // 31
  { Intrinsic::amdgcn_image_atomic_and_2dmsaa }, // 32
  { Intrinsic::amdgcn_image_atomic_and_3d }, // 33
  { Intrinsic::amdgcn_image_atomic_and_cube }, // 34
  { Intrinsic::amdgcn_image_atomic_cmpswap_1d }, // 35
  { Intrinsic::amdgcn_image_atomic_cmpswap_1darray }, // 36
  { Intrinsic::amdgcn_image_atomic_cmpswap_2d }, // 37
  { Intrinsic::amdgcn_image_atomic_cmpswap_2darray }, // 38
  { Intrinsic::amdgcn_image_atomic_cmpswap_2darraymsaa }, // 39
  { Intrinsic::amdgcn_image_atomic_cmpswap_2dmsaa }, // 40
  { Intrinsic::amdgcn_image_atomic_cmpswap_3d }, // 41
  { Intrinsic::amdgcn_image_atomic_cmpswap_cube }, // 42
  { Intrinsic::amdgcn_image_atomic_dec_1d }, // 43
  { Intrinsic::amdgcn_image_atomic_dec_1darray }, // 44
  { Intrinsic::amdgcn_image_atomic_dec_2d }, // 45
  { Intrinsic::amdgcn_image_atomic_dec_2darray }, // 46
  { Intrinsic::amdgcn_image_atomic_dec_2darraymsaa }, // 47
  { Intrinsic::amdgcn_image_atomic_dec_2dmsaa }, // 48
  { Intrinsic::amdgcn_image_atomic_dec_3d }, // 49
  { Intrinsic::amdgcn_image_atomic_dec_cube }, // 50
  { Intrinsic::amdgcn_image_atomic_inc_1d }, // 51
  { Intrinsic::amdgcn_image_atomic_inc_1darray }, // 52
  { Intrinsic::amdgcn_image_atomic_inc_2d }, // 53
  { Intrinsic::amdgcn_image_atomic_inc_2darray }, // 54
  { Intrinsic::amdgcn_image_atomic_inc_2darraymsaa }, // 55
  { Intrinsic::amdgcn_image_atomic_inc_2dmsaa }, // 56
  { Intrinsic::amdgcn_image_atomic_inc_3d }, // 57
  { Intrinsic::amdgcn_image_atomic_inc_cube }, // 58
  { Intrinsic::amdgcn_image_atomic_or_1d }, // 59
  { Intrinsic::amdgcn_image_atomic_or_1darray }, // 60
  { Intrinsic::amdgcn_image_atomic_or_2d }, // 61
  { Intrinsic::amdgcn_image_atomic_or_2darray }, // 62
  { Intrinsic::amdgcn_image_atomic_or_2darraymsaa }, // 63
  { Intrinsic::amdgcn_image_atomic_or_2dmsaa }, // 64
  { Intrinsic::amdgcn_image_atomic_or_3d }, // 65
  { Intrinsic::amdgcn_image_atomic_or_cube }, // 66
  { Intrinsic::amdgcn_image_atomic_smax_1d }, // 67
  { Intrinsic::amdgcn_image_atomic_smax_1darray }, // 68
  { Intrinsic::amdgcn_image_atomic_smax_2d }, // 69
  { Intrinsic::amdgcn_image_atomic_smax_2darray }, // 70
  { Intrinsic::amdgcn_image_atomic_smax_2darraymsaa }, // 71
  { Intrinsic::amdgcn_image_atomic_smax_2dmsaa }, // 72
  { Intrinsic::amdgcn_image_atomic_smax_3d }, // 73
  { Intrinsic::amdgcn_image_atomic_smax_cube }, // 74
  { Intrinsic::amdgcn_image_atomic_smin_1d }, // 75
  { Intrinsic::amdgcn_image_atomic_smin_1darray }, // 76
  { Intrinsic::amdgcn_image_atomic_smin_2d }, // 77
  { Intrinsic::amdgcn_image_atomic_smin_2darray }, // 78
  { Intrinsic::amdgcn_image_atomic_smin_2darraymsaa }, // 79
  { Intrinsic::amdgcn_image_atomic_smin_2dmsaa }, // 80
  { Intrinsic::amdgcn_image_atomic_smin_3d }, // 81
  { Intrinsic::amdgcn_image_atomic_smin_cube }, // 82
  { Intrinsic::amdgcn_image_atomic_sub_1d }, // 83
  { Intrinsic::amdgcn_image_atomic_sub_1darray }, // 84
  { Intrinsic::amdgcn_image_atomic_sub_2d }, // 85
  { Intrinsic::amdgcn_image_atomic_sub_2darray }, // 86
  { Intrinsic::amdgcn_image_atomic_sub_2darraymsaa }, // 87
  { Intrinsic::amdgcn_image_atomic_sub_2dmsaa }, // 88
  { Intrinsic::amdgcn_image_atomic_sub_3d }, // 89
  { Intrinsic::amdgcn_image_atomic_sub_cube }, // 90
  { Intrinsic::amdgcn_image_atomic_swap_1d }, // 91
  { Intrinsic::amdgcn_image_atomic_swap_1darray }, // 92
  { Intrinsic::amdgcn_image_atomic_swap_2d }, // 93
  { Intrinsic::amdgcn_image_atomic_swap_2darray }, // 94
  { Intrinsic::amdgcn_image_atomic_swap_2darraymsaa }, // 95
  { Intrinsic::amdgcn_image_atomic_swap_2dmsaa }, // 96
  { Intrinsic::amdgcn_image_atomic_swap_3d }, // 97
  { Intrinsic::amdgcn_image_atomic_swap_cube }, // 98
  { Intrinsic::amdgcn_image_atomic_umax_1d }, // 99
  { Intrinsic::amdgcn_image_atomic_umax_1darray }, // 100
  { Intrinsic::amdgcn_image_atomic_umax_2d }, // 101
  { Intrinsic::amdgcn_image_atomic_umax_2darray }, // 102
  { Intrinsic::amdgcn_image_atomic_umax_2darraymsaa }, // 103
  { Intrinsic::amdgcn_image_atomic_umax_2dmsaa }, // 104
  { Intrinsic::amdgcn_image_atomic_umax_3d }, // 105
  { Intrinsic::amdgcn_image_atomic_umax_cube }, // 106
  { Intrinsic::amdgcn_image_atomic_umin_1d }, // 107
  { Intrinsic::amdgcn_image_atomic_umin_1darray }, // 108
  { Intrinsic::amdgcn_image_atomic_umin_2d }, // 109
  { Intrinsic::amdgcn_image_atomic_umin_2darray }, // 110
  { Intrinsic::amdgcn_image_atomic_umin_2darraymsaa }, // 111
  { Intrinsic::amdgcn_image_atomic_umin_2dmsaa }, // 112
  { Intrinsic::amdgcn_image_atomic_umin_3d }, // 113
  { Intrinsic::amdgcn_image_atomic_umin_cube }, // 114
  { Intrinsic::amdgcn_image_atomic_xor_1d }, // 115
  { Intrinsic::amdgcn_image_atomic_xor_1darray }, // 116
  { Intrinsic::amdgcn_image_atomic_xor_2d }, // 117
  { Intrinsic::amdgcn_image_atomic_xor_2darray }, // 118
  { Intrinsic::amdgcn_image_atomic_xor_2darraymsaa }, // 119
  { Intrinsic::amdgcn_image_atomic_xor_2dmsaa }, // 120
  { Intrinsic::amdgcn_image_atomic_xor_3d }, // 121
  { Intrinsic::amdgcn_image_atomic_xor_cube }, // 122
  { Intrinsic::amdgcn_interp_mov }, // 123
  { Intrinsic::amdgcn_interp_p1 }, // 124
  { Intrinsic::amdgcn_interp_p1_f16 }, // 125
  { Intrinsic::amdgcn_interp_p2 }, // 126
  { Intrinsic::amdgcn_interp_p2_f16 }, // 127
  { Intrinsic::amdgcn_mbcnt_hi }, // 128
  { Intrinsic::amdgcn_mbcnt_lo }, // 129
  { Intrinsic::amdgcn_mfma_f32_16x16x16f16 }, // 130
  { Intrinsic::amdgcn_mfma_f32_16x16x1f32 }, // 131
  { Intrinsic::amdgcn_mfma_f32_16x16x2bf16 }, // 132
  { Intrinsic::amdgcn_mfma_f32_16x16x4f16 }, // 133
  { Intrinsic::amdgcn_mfma_f32_16x16x4f32 }, // 134
  { Intrinsic::amdgcn_mfma_f32_16x16x8bf16 }, // 135
  { Intrinsic::amdgcn_mfma_f32_32x32x1f32 }, // 136
  { Intrinsic::amdgcn_mfma_f32_32x32x2bf16 }, // 137
  { Intrinsic::amdgcn_mfma_f32_32x32x2f32 }, // 138
  { Intrinsic::amdgcn_mfma_f32_32x32x4bf16 }, // 139
  { Intrinsic::amdgcn_mfma_f32_32x32x4f16 }, // 140
  { Intrinsic::amdgcn_mfma_f32_32x32x8f16 }, // 141
  { Intrinsic::amdgcn_mfma_f32_4x4x1f32 }, // 142
  { Intrinsic::amdgcn_mfma_f32_4x4x1f32 }, // 143
  { Intrinsic::amdgcn_mfma_f32_4x4x2bf16 }, // 144
  { Intrinsic::amdgcn_mfma_f32_4x4x4f16 }, // 145
  { Intrinsic::amdgcn_mfma_i32_16x16x16i8 }, // 146
  { Intrinsic::amdgcn_mfma_i32_16x16x4i8 }, // 147
  { Intrinsic::amdgcn_mfma_i32_32x32x4i8 }, // 148
  { Intrinsic::amdgcn_mfma_i32_32x32x8i8 }, // 149
  { Intrinsic::amdgcn_mfma_i32_4x4x4i8 }, // 150
  { Intrinsic::amdgcn_mov_dpp }, // 151
  { Intrinsic::amdgcn_mov_dpp8 }, // 152
  { Intrinsic::amdgcn_permlane16 }, // 153
  { Intrinsic::amdgcn_permlanex16 }, // 154
  { Intrinsic::amdgcn_ps_live }, // 155
  { Intrinsic::amdgcn_raw_buffer_atomic_add }, // 156
  { Intrinsic::amdgcn_raw_buffer_atomic_and }, // 157
  { Intrinsic::amdgcn_raw_buffer_atomic_cmpswap }, // 158
  { Intrinsic::amdgcn_raw_buffer_atomic_dec }, // 159
  { Intrinsic::amdgcn_raw_buffer_atomic_inc }, // 160
  { Intrinsic::amdgcn_raw_buffer_atomic_or }, // 161
  { Intrinsic::amdgcn_raw_buffer_atomic_smax }, // 162
  { Intrinsic::amdgcn_raw_buffer_atomic_smin }, // 163
  { Intrinsic::amdgcn_raw_buffer_atomic_sub }, // 164
  { Intrinsic::amdgcn_raw_buffer_atomic_swap }, // 165
  { Intrinsic::amdgcn_raw_buffer_atomic_umax }, // 166
  { Intrinsic::amdgcn_raw_buffer_atomic_umin }, // 167
  { Intrinsic::amdgcn_raw_buffer_atomic_xor }, // 168
  { Intrinsic::amdgcn_struct_buffer_atomic_add }, // 169
  { Intrinsic::amdgcn_struct_buffer_atomic_and }, // 170
  { Intrinsic::amdgcn_struct_buffer_atomic_cmpswap }, // 171
  { Intrinsic::amdgcn_struct_buffer_atomic_dec }, // 172
  { Intrinsic::amdgcn_struct_buffer_atomic_inc }, // 173
  { Intrinsic::amdgcn_struct_buffer_atomic_or }, // 174
  { Intrinsic::amdgcn_struct_buffer_atomic_smax }, // 175
  { Intrinsic::amdgcn_struct_buffer_atomic_smin }, // 176
  { Intrinsic::amdgcn_struct_buffer_atomic_sub }, // 177
  { Intrinsic::amdgcn_struct_buffer_atomic_swap }, // 178
  { Intrinsic::amdgcn_struct_buffer_atomic_umax }, // 179
  { Intrinsic::amdgcn_struct_buffer_atomic_umin }, // 180
  { Intrinsic::amdgcn_struct_buffer_atomic_xor }, // 181
  { Intrinsic::amdgcn_update_dpp }, // 182
  { Intrinsic::amdgcn_workitem_id_x }, // 183
  { Intrinsic::amdgcn_workitem_id_y }, // 184
  { Intrinsic::amdgcn_workitem_id_z }, // 185
  { Intrinsic::r600_read_tidig_x }, // 186
  { Intrinsic::r600_read_tidig_y }, // 187
  { Intrinsic::r600_read_tidig_z }, // 188
 };

const SourceOfDivergence *lookupSourceOfDivergence(unsigned Intr) {
  struct KeyType {
    unsigned Intr;
  };
  KeyType Key = { Intr };
  auto Table = makeArrayRef(SourcesOfDivergence);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const SourceOfDivergence &LHS, const KeyType &RHS) {
      if (LHS.Intr < RHS.Intr)
        return true;
      if (LHS.Intr > RHS.Intr)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Intr != Idx->Intr)
    return nullptr;
  return &*Idx;
}
#endif

#undef GET_Gfx10PlusBufferFormat_DECL
#undef GET_Gfx10PlusBufferFormat_IMPL
#undef GET_Gfx9BufferFormat_DECL
#undef GET_Gfx9BufferFormat_IMPL
#undef GET_ImageDimIntrinsicTable_DECL
#undef GET_ImageDimIntrinsicTable_IMPL
#undef GET_MIMGBaseOpcode_DECL
#undef GET_MIMGBaseOpcodesTable_DECL
#undef GET_MIMGBaseOpcodesTable_IMPL
#undef GET_MIMGDimInfoTable_DECL
#undef GET_MIMGDimInfoTable_IMPL
#undef GET_MIMGDim_DECL
#undef GET_MIMGEncoding_DECL
#undef GET_MIMGInfoTable_DECL
#undef GET_MIMGInfoTable_IMPL
#undef GET_MIMGLZMappingTable_DECL
#undef GET_MIMGLZMappingTable_IMPL
#undef GET_MIMGMIPMappingTable_DECL
#undef GET_MIMGMIPMappingTable_IMPL
#undef GET_MTBUFInfoTable_DECL
#undef GET_MTBUFInfoTable_IMPL
#undef GET_MUBUFInfoTable_DECL
#undef GET_MUBUFInfoTable_IMPL
#undef GET_RsrcIntrinsics_DECL
#undef GET_RsrcIntrinsics_IMPL
#undef GET_SourcesOfDivergence_DECL
#undef GET_SourcesOfDivergence_IMPL

#pragma once

#include "../dxgi/dxgi_include.h"

#include <d3d11_1.h>

// This is not defined in the mingw headers
#ifndef D3D11_1_UAV_SLOT_COUNT
#define D3D11_1_UAV_SLOT_COUNT 64
#endif

#ifndef D3D11_KEEP_RENDER_TARGETS_AND_DEPTH_STENCIL
#define D3D11_KEEP_RENDER_TARGETS_AND_DEPTH_STENCIL 0xFFFFFFFF
#endif

#ifndef D3D11_KEEP_UNORDERED_ACCESS_VIEWS
#define D3D11_KEEP_UNORDERED_ACCESS_VIEWS 0xFFFFFFFF
#endif

#define D3D11_DXVK_USE_REMAINING_LAYERS 0xFFFFFFFF
#define D3D11_DXVK_USE_REMAINING_LEVELS 0xFFFFFFFF

// Most of these were copied from d3d11.h
// For some strange reason, we cannot use the structures
// directly, although others from the same header work.
// Some structures are missing from the mingw headers.
#ifndef _MSC_VER
typedef enum D3D11_FORMAT_SUPPORT2 { 
  D3D11_FORMAT_SUPPORT2_UAV_ATOMIC_ADD                                = 0x1,
  D3D11_FORMAT_SUPPORT2_UAV_ATOMIC_BITWISE_OPS                        = 0x2,
  D3D11_FORMAT_SUPPORT2_UAV_ATOMIC_COMPARE_STORE_OR_COMPARE_EXCHANGE  = 0x4,
  D3D11_FORMAT_SUPPORT2_UAV_ATOMIC_EXCHANGE                           = 0x8,
  D3D11_FORMAT_SUPPORT2_UAV_ATOMIC_SIGNED_MIN_OR_MAX                  = 0x10,
  D3D11_FORMAT_SUPPORT2_UAV_ATOMIC_UNSIGNED_MIN_OR_MAX                = 0x20,
  D3D11_FORMAT_SUPPORT2_UAV_TYPED_LOAD                                = 0x40,
  D3D11_FORMAT_SUPPORT2_UAV_TYPED_STORE                               = 0x80,
  D3D11_FORMAT_SUPPORT2_OUTPUT_MERGER_LOGIC_OP                        = 0x100,
  D3D11_FORMAT_SUPPORT2_TILED                                         = 0x200,
  D3D11_FORMAT_SUPPORT2_SHAREABLE                                     = 0x400,
  D3D11_FORMAT_SUPPORT2_MULTIPLANE_OVERLAY                            = 0x4000
} D3D11_FORMAT_SUPPORT2;
#ifndef __WINE__
typedef struct D3D11_FEATURE_DATA_FORMAT_SUPPORT2 {
  DXGI_FORMAT InFormat;
  UINT        OutFormatSupport2;
} D3D11_FEATURE_DATA_FORMAT_SUPPORT2;
typedef struct D3D11_FEATURE_DATA_THREADING {
    BOOL DriverConcurrentCreates;
    BOOL DriverCommandLists;
} D3D11_FEATURE_DATA_THREADING;
typedef struct D3D11_FEATURE_DATA_DOUBLES {
    BOOL DoublePrecisionFloatShaderOps;
} D3D11_FEATURE_DATA_DOUBLES;
typedef struct D3D11_FEATURE_DATA_FORMAT_SUPPORT {
    DXGI_FORMAT InFormat;
    UINT OutFormatSupport;
} D3D11_FEATURE_DATA_FORMAT_SUPPORT;
typedef struct D3D11_FEATURE_DATA_D3D10_X_HARDWARE_OPTIONS {
  BOOL ComputeShaders_Plus_RawAndStructuredBuffers_Via_Shader_4_x;
} D3D11_FEATURE_DATA_D3D10_X_HARDWARE_OPTIONS;
typedef enum D3D11_BUFFEREX_SRV_FLAG { 
  D3D11_BUFFEREX_SRV_FLAG_RAW = 1
} D3D11_BUFFEREX_SRV_FLAG;
typedef enum D3D11_UAV_FLAG {
  D3D11_BUFFER_UAV_FLAG_RAW = 0x1,
  D3D11_BUFFER_UAV_FLAG_APPEND = 0x2,
  D3D11_BUFFER_UAV_FLAG_COUNTER = 0x4
} D3D11_UAV_FLAG;
typedef struct D3D11_QUERY_DATA_PIPELINE_STATISTICS {
  UINT64 IAVertices;
  UINT64 IAPrimitives;
  UINT64 VSInvocations;
  UINT64 GSInvocations;
  UINT64 GSPrimitives;
  UINT64 CInvocations;
  UINT64 CPrimitives;
  UINT64 PSInvocations;
  UINT64 HSInvocations;
  UINT64 DSInvocations;
  UINT64 CSInvocations;
} D3D11_QUERY_DATA_PIPELINE_STATISTICS;
typedef struct D3D11_FEATURE_DATA_ARCHITECTURE_INFO {
  BOOL TileBasedDeferredRenderer;
} D3D11_FEATURE_DATA_ARCHITECTURE_INFO;
typedef struct D3D11_FEATURE_DATA_SHADER_MIN_PRECISION_SUPPORT {
  UINT PixelShaderMinPrecision;
  UINT AllOtherShaderStagesMinPrecision;
} D3D11_FEATURE_DATA_SHADER_MIN_PRECISION_SUPPORT;
typedef struct D3D11_FEATURE_DATA_D3D9_SHADOW_SUPPORT {
  BOOL SupportsDepthAsTextureWithLessEqualComparisonFilter;
} D3D11_FEATURE_DATA_D3D9_SHADOW_SUPPORT;
#endif // __WINE__
#endif // _MSC_VER

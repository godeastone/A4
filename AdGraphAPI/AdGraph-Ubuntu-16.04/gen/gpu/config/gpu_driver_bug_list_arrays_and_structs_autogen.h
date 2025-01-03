// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is auto-generated from
//    gpu/config/process_json.py
// It's formatted by clang-format using chromium coding style:
//    clang-format -i -style=chromium filename
// DO NOT EDIT!

#ifndef GPU_CONFIG_GPU_DRIVER_BUG_LIST_ARRAYS_AND_STRUCTS_AUTOGEN_H_
#define GPU_CONFIG_GPU_DRIVER_BUG_LIST_ARRAYS_AND_STRUCTS_AUTOGEN_H_

#include "gpu/config/gpu_driver_bug_workaround_type.h"

namespace gpu {
const int kFeatureListForEntry19[1] = {
DISABLE_DEPTH_TEXTURE,
};

const char* const kDisabledExtensionsForEntry19[1] = {
"GL_OES_depth_texture",
};

const uint32_t kCrBugsForEntry19[1] = {
682075,
};

const GpuControlList::GLStrings kGLStringsForEntry19 = {
nullptr,
"Adreno \\(TM\\) [23].*",
nullptr,
nullptr,
};

const int kFeatureListForEntry31[1] = {
USE_VIRTUALIZED_GL_CONTEXTS,
};

const uint32_t kCrBugsForEntry31[5] = {
154715,
10068,
269829,
294779,
285292,
};

const GpuControlList::GLStrings kGLStringsForEntry31 = {
"ARM.*",
"Mali-T.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry33[1] = {
USE_VIRTUALIZED_GL_CONTEXTS,
};

const GpuControlList::GLStrings kGLStringsForEntry33 = {
"Imagination.*",
nullptr,
nullptr,
nullptr,
};

const int kFeatureListForEntry37[1] = {
INIT_GL_POSITION_IN_VERTEX_SHADER,
};

const uint32_t kCrBugsForEntry37[1] = {
286468,
};

const GpuControlList::GLStrings kGLStringsForEntry37 = {
"NVIDIA.*",
nullptr,
nullptr,
nullptr,
};

const int kFeatureListForEntry54[1] = {
CLEAR_UNIFORMS_BEFORE_FIRST_PROGRAM_USE,
};

const uint32_t kCrBugsForEntry54[2] = {
124764,
349137,
};

const int kFeatureListForEntry55[1] = {
COUNT_ALL_IN_VARYINGS_PACKING,
};

const uint32_t kCrBugsForEntry55[1] = {
333885,
};

const GpuControlList::DriverInfo kDriverInfoForEntry55 = {
"Mesa",  // driver_vendor
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const int kFeatureListForEntry59[1] = {
DISABLE_CHROMIUM_FRAMEBUFFER_MULTISAMPLE,
};

const uint32_t kCrBugsForEntry59[1] = {
116370,
};

const uint32_t kDeviceIDsForEntry59[5] = {
0x0152,
0x0156,
0x015a,
0x0162,
0x0166,
};

const int kFeatureListForEntry64[1] = {
INIT_TEXTURE_MAX_ANISOTROPY,
};

const uint32_t kCrBugsForEntry64[1] = {
348237,
};

const int kFeatureListForEntry65[1] = {
INIT_VERTEX_ATTRIBUTES,
};

const uint32_t kCrBugsForEntry65[1] = {
351528,
};

const GpuControlList::GLStrings kGLStringsForEntry65 = {
"NVIDIA.*",
nullptr,
nullptr,
nullptr,
};

const int kFeatureListForEntry68[1] = {
DISABLE_POST_SUB_BUFFERS_FOR_ONSCREEN_SURFACES,
};

const uint32_t kCrBugsForEntry68[1] = {
339493,
};

const GpuControlList::GLStrings kGLStringsForEntry68 = {
nullptr,
".*Mesa.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry69[3] = {
MAX_VARYING_VECTORS_16,
MAX_VERTEX_UNIFORM_VECTORS_256,
MAX_FRAGMENT_UNIFORM_VECTORS_32,
};

const uint32_t kCrBugsForEntry69[1] = {
174845,
};

const GpuControlList::DriverInfo kDriverInfoForEntry69 = {
"osmesa",  // driver_vendor
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const int kFeatureListForEntry88[1] = {
SCALARIZE_VEC_AND_MAT_CONSTRUCTOR_ARGS,
};

const uint32_t kCrBugsForEntry88[1] = {
398694,
};

const int kFeatureListForEntry90[1] = {
REGENERATE_STRUCT_NAMES,
};

const uint32_t kCrBugsForEntry90[1] = {
403957,
};

const int kFeatureListForEntry108[1] = {
DISABLE_GL_RGB_FORMAT,
};

const uint32_t kCrBugsForEntry108[1] = {
449150,
};

const GpuControlList::GLStrings kGLStringsForEntry108 = {
"ARM.*",
".*Mali-4.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry109[1] = {
USE_VIRTUALIZED_GL_CONTEXTS,
};

const uint32_t kCrBugsForEntry109[2] = {
449150,
514510,
};

const GpuControlList::GLStrings kGLStringsForEntry109 = {
"NVIDIA.*",
nullptr,
nullptr,
nullptr,
};

const int kFeatureListForEntry111[1] = {
DISABLE_DISCARD_FRAMEBUFFER,
};

const uint32_t kCrBugsForEntry111[1] = {
485814,
};

const GpuControlList::GLStrings kGLStringsForEntry111 = {
"ARM.*",
".*Mali-4.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry118[1] = {
REMOVE_POW_WITH_CONSTANT_EXPONENT,
};

const uint32_t kCrBugsForEntry118[1] = {
477306,
};

const GpuControlList::DriverInfo kDriverInfoForEntry118 = {
nullptr,  // driver_vendor
{GpuControlList::kLE, GpuControlList::kVersionStyleNumerical, "331", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::GLStrings kGLStringsForEntry118 = {
"NVIDIA.*",
nullptr,
nullptr,
nullptr,
};

const char* const kDisabledExtensionsForEntry123[1] = {
"GL_NV_path_rendering",
};

const uint32_t kCrBugsForEntry123[1] = {
344330,
};

const GpuControlList::DriverInfo kDriverInfoForEntry123 = {
nullptr,  // driver_vendor
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "346", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const int kFeatureListForEntry128[1] = {
FORCE_CUBE_MAP_POSITIVE_X_ALLOCATION,
};

const uint32_t kCrBugsForEntry128[1] = {
518889,
};

const int kFeatureListForEntry130[1] = {
FORCE_CUBE_COMPLETE,
};

const uint32_t kCrBugsForEntry130[1] = {
518889,
};

const GpuControlList::GLStrings kGLStringsForEntry130 = {
"NVIDIA.*",
nullptr,
nullptr,
nullptr,
};

const int kFeatureListForEntry131[1] = {
DISABLE_TEXTURE_STORAGE,
};

const uint32_t kCrBugsForEntry131[1] = {
521904,
};

const GpuControlList::DriverInfo kDriverInfoForEntry131 = {
"Mesa",  // driver_vendor
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "10.6", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const int kFeatureListForEntry132[1] = {
MSAA_IS_SLOW,
};

const uint32_t kCrBugsForEntry132[1] = {
527565,
};

const char* const kDisabledExtensionsForEntry139[1] = {
"GL_EXT_texture_rg",
};

const uint32_t kCrBugsForEntry139[1] = {
545904,
};

const GpuControlList::DriverInfo kDriverInfoForEntry139 = {
"Mesa",  // driver_vendor
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "11.1", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::More kMoreForEntry139 = {
GpuControlList::kGLTypeGLES,  // gl_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "3.0", nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
true,  // direct_rendering
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
0,  // test_group
};

const int kFeatureListForEntry142[1] = {
PACK_PARAMETERS_WORKAROUND_WITH_PACK_BUFFER,
};

const uint32_t kCrBugsForEntry142[1] = {
563714,
};

const GpuControlList::GLStrings kGLStringsForEntry142 = {
"NVIDIA.*",
nullptr,
nullptr,
nullptr,
};

const char* const kDisabledExtensionsForEntry143[2] = {
"GL_ARB_timer_query",
"GL_EXT_timer_query",
};

const uint32_t kCrBugsForEntry143[2] = {
540543,
576991,
};

const GpuControlList::DriverInfo kDriverInfoForEntry143 = {
"Mesa",  // driver_vendor
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const int kFeatureListForEntry150[1] = {
UNPACK_ALIGNMENT_WORKAROUND_WITH_UNPACK_BUFFER,
};

const uint32_t kCrBugsForEntry150[1] = {
563714,
};

const GpuControlList::GLStrings kGLStringsForEntry150 = {
"NVIDIA.*",
nullptr,
nullptr,
nullptr,
};

const char* const kDisabledExtensionsForEntry153[1] = {
"GL_EXT_multisampled_render_to_texture",
};

const uint32_t kCrBugsForEntry153[1] = {
594016,
};

const GpuControlList::GLStrings kGLStringsForEntry153 = {
"Vivante Corporation",
"Vivante GC1000",
nullptr,
nullptr,
};

const int kFeatureListForEntry159[1] = {
DISABLE_DISCARD_FRAMEBUFFER,
};

const uint32_t kCrBugsForEntry159[1] = {
570897,
};

const GpuControlList::GLStrings kGLStringsForEntry159 = {
"NVIDIA.*",
nullptr,
nullptr,
nullptr,
};

const int kFeatureListForEntry160[1] = {
DISABLE_DISCARD_FRAMEBUFFER,
};

const uint32_t kCrBugsForEntry160[1] = {
601753,
};

const GpuControlList::GLStrings kGLStringsForEntry160 = {
"NVIDIA.*",
nullptr,
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry160 = {
GpuControlList::kGLTypeGLES,  // gl_type
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "3.0", nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
true,  // direct_rendering
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
0,  // test_group
};

const int kFeatureListForEntry165[1] = {
UNPACK_OVERLAPPING_ROWS_SEPARATELY_UNPACK_BUFFER,
};

const uint32_t kCrBugsForEntry165[1] = {
596774,
};

const GpuControlList::GLStrings kGLStringsForEntry165 = {
"NVIDIA.*",
nullptr,
nullptr,
nullptr,
};

const int kFeatureListForEntry168[1] = {
DISABLE_POST_SUB_BUFFERS_FOR_ONSCREEN_SURFACES,
};

const uint32_t kCrBugsForEntry168[1] = {
613722,
};

const int kFeatureListForEntry172[1] = {
DISABLE_FRAMEBUFFER_CMAA,
};

const uint32_t kCrBugsForEntry172[1] = {
535198,
};

const GpuControlList::DriverInfo kDriverInfoForEntry172Exception0 = {
"Mesa",  // driver_vendor
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::GLStrings kGLStringsForEntry172Exception0 = {
"Intel.*",
nullptr,
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry172Exception0 = {
GpuControlList::kGLTypeGLES,  // gl_type
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "3.1", nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
true,  // direct_rendering
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
0,  // test_group
};

const int kFeatureListForEntry190[1] = {
DISABLE_POST_SUB_BUFFERS_FOR_ONSCREEN_SURFACES,
};

const uint32_t kCrBugsForEntry190[1] = {
339493,
};

const GpuControlList::GLStrings kGLStringsForEntry190 = {
nullptr,
nullptr,
nullptr,
".*Mesa.*",
};

const int kFeatureListForEntry192[1] = {
DECODE_ENCODE_SRGB_FOR_GENERATEMIPMAP,
};

const uint32_t kCrBugsForEntry192[1] = {
634519,
};

const GpuControlList::More kMoreForEntry192 = {
GpuControlList::kGLTypeGL,  // gl_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "4.4", nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
true,  // direct_rendering
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
0,  // test_group
};

const int kFeatureListForEntry198[1] = {
ADJUST_SRC_DST_REGION_FOR_BLITFRAMEBUFFER,
};

const uint32_t kCrBugsForEntry198[1] = {
664740,
};

const int kFeatureListForEntry199[1] = {
ADJUST_SRC_DST_REGION_FOR_BLITFRAMEBUFFER,
};

const uint32_t kCrBugsForEntry199[1] = {
664740,
};

const int kFeatureListForEntry201[2] = {
REMOVE_INVARIANT_AND_CENTROID_FOR_ESSL3,
DONT_REMOVE_INVARIANT_FOR_FRAGMENT_INPUT,
};

const uint32_t kCrBugsForEntry201[2] = {
659326,
639760,
};

const int kFeatureListForEntry203[1] = {
REMOVE_INVARIANT_AND_CENTROID_FOR_ESSL3,
};

const uint32_t kCrBugsForEntry203[2] = {
639760,
641129,
};

const GpuControlList::DriverInfo kDriverInfoForEntry203 = {
"Mesa",  // driver_vendor
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::More kMoreForEntry203 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kEQ, GpuControlList::kVersionStyleNumerical, "3.3", nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
true,  // direct_rendering
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
0,  // test_group
};

const char* const kDisabledExtensionsForEntry206[2] = {
"GL_KHR_blend_equation_advanced",
"GL_KHR_blend_equation_advanced_coherent",
};

const uint32_t kCrBugsForEntry206[1] = {
661715,
};

const int kFeatureListForEntry208[1] = {
DECODE_ENCODE_SRGB_FOR_GENERATEMIPMAP,
};

const uint32_t kCrBugsForEntry208[1] = {
634519,
};

const GpuControlList::GLStrings kGLStringsForEntry208 = {
nullptr,
"ANGLE.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry210[1] = {
DECODE_ENCODE_SRGB_FOR_GENERATEMIPMAP,
};

const uint32_t kCrBugsForEntry210[1] = {
634519,
};

const int kFeatureListForEntry213[1] = {
USE_VIRTUALIZED_GL_CONTEXTS,
};

const uint32_t kCrBugsForEntry213[1] = {
678508,
};

const GpuControlList::GLStrings kGLStringsForEntry213 = {
"ARM.*",
"Mali-G.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry214[2] = {
DISABLE_CHROMIUM_FRAMEBUFFER_MULTISAMPLE,
FORCE_UPDATE_SCISSOR_STATE_WHEN_BINDING_FBO0,
};

const uint32_t kCrBugsForEntry214[5] = {
670607,
682075,
696627,
698197,
707839,
};

const GpuControlList::GLStrings kGLStringsForEntry214 = {
nullptr,
"Adreno \\(TM\\) 3.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry215[1] = {
USE_GPU_DRIVER_WORKAROUND_FOR_TESTING,
};

const uint32_t kCrBugsForEntry215[1] = {
682912,
};

const GpuControlList::More kMoreForEntry215 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
true,  // direct_rendering
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
1,  // test_group
};

const int kFeatureListForEntry222[1] = {
DISABLE_SOFTWARE_TO_ACCELERATED_CANVAS_UPGRADE,
};

const uint32_t kCrBugsForEntry222[1] = {
710029,
};

const int kFeatureListForEntry223[1] = {
FORCE_INT_OR_SRGB_CUBE_TEXTURE_COMPLETE,
};

const uint32_t kCrBugsForEntry223[1] = {
712117,
};

const char* const kDisabledWebGLExtensionsForEntry256[2] = {
"EXT_disjoint_timer_query",
"EXT_disjoint_timer_query_webgl2",
};

const uint32_t kCrBugsForEntry256[1] = {
808744,
};

const char* const kDisabledWebGLExtensionsForEntry257[1] = {
"WEBGL_lose_context",
};

const uint32_t kCrBugsForEntry257[1] = {
808744,
};

const GpuControlList::More kMoreForEntry257 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
true,  // direct_rendering
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
2,  // test_group
};

const int kFeatureListForEntry265[1] = {
DISABLE_TIMESTAMP_QUERIES,
};

const char* const kDisabledExtensionsForEntry265[3] = {
"GL_ARB_timer_query",
"GL_EXT_disjoint_timer_query",
"GL_EXT_disjoint_timer_query_webgl2",
};

const uint32_t kCrBugsForEntry265[1] = {
811661,
};

const uint32_t kDeviceIDsForEntry265[1] = {
0x0405,
};

const int kFeatureListForEntry267[1] = {
DISABLE_CHROMIUM_FRAMEBUFFER_MULTISAMPLE,
};

const char* const kDisabledExtensionsForEntry267[1] = {
"GL_EXT_multisampled_render_to_texture",
};

const uint32_t kCrBugsForEntry267[1] = {
831781,
};

const GpuControlList::GLStrings kGLStringsForEntry267 = {
"ARM",
"Mali-TDVX",
nullptr,
nullptr,
};

}  // namespace gpu

#endif  // GPU_CONFIG_GPU_DRIVER_BUG_LIST_ARRAYS_AND_STRUCTS_AUTOGEN_H_

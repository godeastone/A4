// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is auto-generated from
//    gpu/config/process_json.py
// It's formatted by clang-format using chromium coding style:
//    clang-format -i -style=chromium filename
// DO NOT EDIT!

#ifndef GPU_CONFIG_SOFTWARE_RENDERING_LIST_ARRAYS_AND_STRUCTS_AUTOGEN_H_
#define GPU_CONFIG_SOFTWARE_RENDERING_LIST_ARRAYS_AND_STRUCTS_AUTOGEN_H_

#include "gpu/config/gpu_feature_type.h"

namespace gpu {
const int kFeatureListForEntry3[10] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForEntry3[2] = {
59302,
315217,
};

const GpuControlList::GLStrings kGLStringsForEntry3 = {
nullptr,
"(?i).*software.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry4[4] = {
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
};

const uint32_t kCrBugsForEntry4[1] = {
232035,
};

const uint32_t kDeviceIDsForEntry4[2] = {
0x27AE,
0x27A2,
};

const int kFeatureListForEntry5[10] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForEntry5[6] = {
71381,
76428,
73910,
101225,
136240,
357314,
};

const GpuControlList::DriverInfo kDriverInfoForEntry5Exception0 = {
".*AMD.*",  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleLexical, "8.98", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::DriverInfo kDriverInfoForEntry5Exception1 = {
"Mesa",  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "10.0.4", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::DriverInfo kDriverInfoForEntry5Exception2 = {
".*ANGLE.*",  // driver_vendor
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const int kFeatureListForEntry8[10] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForEntry8[1] = {
72938,
};

const uint32_t kDeviceIDsForEntry8[1] = {
0x0324,
};

const int kFeatureListForEntry17[10] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForEntry17[4] = {
76703,
164555,
225200,
340886,
};

const GpuControlList::DriverInfo kDriverInfoForEntry17 = {
"Mesa",  // driver_vendor
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "10.1", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const uint32_t kDeviceIDsForEntry17Exception0[12] = {
0x0102,
0x0106,
0x0112,
0x0116,
0x0122,
0x0126,
0x010a,
0x0152,
0x0156,
0x015a,
0x0162,
0x0166,
};

const GpuControlList::DriverInfo kDriverInfoForEntry17Exception0 = {
nullptr,  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "8.0", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const uint32_t kDeviceIDsForEntry17Exception1[16] = {
0xa001,
0xa002,
0xa011,
0xa012,
0x29a2,
0x2992,
0x2982,
0x2972,
0x2a12,
0x2a42,
0x2e02,
0x2e12,
0x2e22,
0x2e32,
0x2e42,
0x2e92,
};

const GpuControlList::DriverInfo kDriverInfoForEntry17Exception1 = {
nullptr,  // driver_vendor
{GpuControlList::kGT, GpuControlList::kVersionStyleNumerical, "8.0.2", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const uint32_t kDeviceIDsForEntry17Exception2[2] = {
0x0042,
0x0046,
};

const GpuControlList::DriverInfo kDriverInfoForEntry17Exception2 = {
nullptr,  // driver_vendor
{GpuControlList::kGT, GpuControlList::kVersionStyleNumerical, "8.0.4", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const uint32_t kDeviceIDsForEntry17Exception3[1] = {
0x2a02,
};

const GpuControlList::DriverInfo kDriverInfoForEntry17Exception3 = {
nullptr,  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "9.1", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const uint32_t kDeviceIDsForEntry17Exception4[2] = {
0x0a16,
0x0a26,
};

const GpuControlList::DriverInfo kDriverInfoForEntry17Exception4 = {
nullptr,  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "10.0.1", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const int kFeatureListForEntry18[10] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForEntry18[1] = {
84701,
};

const uint32_t kDeviceIDsForEntry18[1] = {
0x029e,
};

const int kFeatureListForEntry27[10] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForEntry27[4] = {
95934,
94973,
136240,
357314,
};

const GpuControlList::GLStrings kGLStringsForEntry27 = {
"ATI.*",
nullptr,
nullptr,
nullptr,
};

const GpuControlList::DriverInfo kDriverInfoForEntry27Exception0 = {
".*AMD.*",  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleLexical, "8.98", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::DriverInfo kDriverInfoForEntry27Exception1 = {
"Mesa",  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "10.0.4", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const int kFeatureListForEntry28[10] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForEntry28[3] = {
95934,
94973,
357314,
};

const GpuControlList::GLStrings kGLStringsForEntry28 = {
"X\\.Org.*",
".*AMD.*",
nullptr,
nullptr,
};

const GpuControlList::DriverInfo kDriverInfoForEntry28Exception0 = {
"Mesa",  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "10.0.4", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const int kFeatureListForEntry29[10] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForEntry29[3] = {
95934,
94973,
357314,
};

const GpuControlList::GLStrings kGLStringsForEntry29 = {
"X\\.Org.*",
".*ATI.*",
nullptr,
nullptr,
};

const GpuControlList::DriverInfo kDriverInfoForEntry29Exception0 = {
"Mesa",  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "10.0.4", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const int kFeatureListForEntry30[10] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForEntry30[1] = {
94103,
};

const GpuControlList::DriverInfo kDriverInfoForEntry30 = {
"Mesa",  // driver_vendor
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "10.1", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::GLStrings kGLStringsForEntry30 = {
"(?i)nouveau.*",
nullptr,
nullptr,
nullptr,
};

const int kFeatureListForEntry37[10] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForEntry37[2] = {
131308,
363418,
};

const GpuControlList::DriverInfo kDriverInfoForEntry37 = {
"Mesa",  // driver_vendor
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "10.1", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::GLStrings kGLStringsForEntry37 = {
"Intel.*",
nullptr,
nullptr,
nullptr,
};

const int kFeatureListForEntry47[10] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForEntry47[1] = {
78497,
};

const GpuControlList::DriverInfo kDriverInfoForEntry47 = {
"NVIDIA",  // driver_vendor
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "295", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const int kFeatureListForEntry48[1] = {
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
};

const uint32_t kCrBugsForEntry48[1] = {
137247,
};

const int kFeatureListForEntry50[10] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForEntry50[4] = {
145531,
332596,
571899,
629434,
};

const GpuControlList::GLStrings kGLStringsForEntry50 = {
"VMware.*",
nullptr,
nullptr,
nullptr,
};

const GpuControlList::DriverInfo kDriverInfoForEntry50Exception0 = {
"Mesa",  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "9.2.1", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::GLStrings kGLStringsForEntry50Exception0 = {
nullptr,
".*SVGA3D.*",
nullptr,
nullptr,
};

const GpuControlList::DriverInfo kDriverInfoForEntry50Exception1 = {
"Mesa",  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "10.1.3", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::GLStrings kGLStringsForEntry50Exception1 = {
nullptr,
".*Gallium.*llvmpipe.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry53[1] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
};

const uint32_t kCrBugsForEntry53[1] = {
152096,
};

const uint32_t kDeviceIDsForEntry53[2] = {
0x8108,
0x8109,
};

const int kFeatureListForEntry56[3] = {
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
};

const uint32_t kCrBugsForEntry56[1] = {
145600,
};

const GpuControlList::DriverInfo kDriverInfoForEntry56 = {
"NVIDIA",  // driver_vendor
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "331.38", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const int kFeatureListForEntry93[10] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForEntry93[1] = {
72373,
};

const GpuControlList::More kMoreForEntry93 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
false,  // direct_rendering
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
0,  // test_group
};

const int kFeatureListForEntry95[10] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForEntry95[1] = {
363378,
};

const GpuControlList::DriverInfo kDriverInfoForEntry95 = {
".*AMD.*",  // driver_vendor
{GpuControlList::kEQ, GpuControlList::kVersionStyleNumerical, "13.101", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const int kFeatureListForEntry107[10] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForEntry107[1] = {
463243,
};

const GpuControlList::GpuSeriesType kGpuSeriesForEntry107[1] = {
GpuControlList::GpuSeriesType::kIntelHaswell,
};

const int kFeatureListForEntry110[9] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForEntry110[1] = {
571899,
};

const GpuControlList::DriverInfo kDriverInfoForEntry110 = {
"Mesa",  // driver_vendor
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::GLStrings kGLStringsForEntry110 = {
"VMware.*",
".*Gallium.*llvmpipe.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry125[10] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForEntry125[2] = {
656572,
658668,
};

const uint32_t kDeviceIDsForEntry125[1] = {
0xbeef,
};

const int kFeatureListForEntry129[10] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForEntry129[1] = {
662909,
};

const int kFeatureListForEntry131[10] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForEntry131[1] = {
462426,
};

const uint32_t kDeviceIDsForEntry131[1] = {
0x2a02,
};

const GpuControlList::DriverInfo kDriverInfoForEntry131 = {
"Mesa",  // driver_vendor
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "10.4.3", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const int kFeatureListForEntry134[10] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForEntry134[1] = {
629434,
};

const GpuControlList::DriverInfo kDriverInfoForEntry134 = {
"Mesa",  // driver_vendor
{GpuControlList::kLE, GpuControlList::kVersionStyleNumerical, "10.1.3", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::GLStrings kGLStringsForEntry134Exception0 = {
nullptr,
".*SVGA3D.*",
nullptr,
nullptr,
};

const GpuControlList::GLStrings kGLStringsForEntry134Exception1 = {
nullptr,
".*Gallium.*llvmpipe.*",
nullptr,
nullptr,
};

const GpuControlList::GLStrings kGLStringsForEntry134Exception2 = {
nullptr,
"Mesa OffScreen",
nullptr,
nullptr,
};

const int kFeatureListForEntry140[1] = {
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
};

const uint32_t kCrBugsForEntry140[2] = {
449116,
698197,
};

const GpuControlList::GLStrings kGLStringsForEntry140 = {
nullptr,
"Adreno \\(TM\\) 3.*",
nullptr,
nullptr,
};

const int kFeatureListForEntry152[9] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const GpuControlList::More kMoreForEntry152 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
true,  // direct_rendering
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
1,  // test_group
};

const int kFeatureListForEntry153[1] = {
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
};

const GpuControlList::More kMoreForEntry153 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
true,  // direct_rendering
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
2,  // test_group
};

const int kFeatureListForEntry154[1] = {
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
};

}  // namespace gpu

#endif  // GPU_CONFIG_SOFTWARE_RENDERING_LIST_ARRAYS_AND_STRUCTS_AUTOGEN_H_

// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is auto-generated from
//    gpu/config/process_json.py
// It's formatted by clang-format using chromium coding style:
//    clang-format -i -style=chromium filename
// DO NOT EDIT!

#include "gpu/config/gpu_driver_bug_list_autogen.h"

#include "gpu/config/gpu_driver_bug_list_arrays_and_structs_autogen.h"
#include "gpu/config/gpu_driver_bug_list_exceptions_autogen.h"

namespace gpu {

const GpuControlList::Entry kGpuDriverBugListEntries[] = {
{
19,  // id
"Disable depth textures on older Qualcomm GPUs (legacy blacklist entry, original problem unclear)",
base::size(kFeatureListForEntry19),  // features size
kFeatureListForEntry19,  // features
base::size(kDisabledExtensionsForEntry19),  // DisabledExtensions size
kDisabledExtensionsForEntry19,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry19),  // CrBugs size
kCrBugsForEntry19,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry19,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
31,  // id
"The Mali-Txxx driver does not guarantee flush ordering",
base::size(kFeatureListForEntry31),  // features size
kFeatureListForEntry31,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry31),  // CrBugs size
kCrBugsForEntry31,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry31,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
33,  // id
"Share group-related crashes and poor context switching perf on Imagination drivers",
base::size(kFeatureListForEntry33),  // features size
kFeatureListForEntry33,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
0,  // CrBugs size
nullptr,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry33,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
37,  // id
"Program link fails in NVIDIA Linux if gl_Position is not set",
base::size(kFeatureListForEntry37),  // features size
kFeatureListForEntry37,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry37),  // CrBugs size
kCrBugsForEntry37,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry37,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
54,  // id
"Clear uniforms before first program use on all platforms",
base::size(kFeatureListForEntry54),  // features size
kFeatureListForEntry54,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry54),  // CrBugs size
kCrBugsForEntry54,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
base::size(kExceptionsForEntry54),  // exceptions count
kExceptionsForEntry54,  // exceptions
},
{
55,  // id
"Mesa drivers in Linux handle varyings without static use incorrectly",
base::size(kFeatureListForEntry55),  // features size
kFeatureListForEntry55,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry55),  // CrBugs size
kCrBugsForEntry55,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry55,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
59,  // id
"Multisampling is buggy in Intel IvyBridge",
base::size(kFeatureListForEntry59),  // features size
kFeatureListForEntry59,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry59),  // CrBugs size
kCrBugsForEntry59,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x8086,  // vendor_id
base::size(kDeviceIDsForEntry59),  // DeviceIDs size
kDeviceIDsForEntry59,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
64,  // id
"Linux AMD drivers incorrectly return initial value of 1 for TEXTURE_MAX_ANISOTROPY",
base::size(kFeatureListForEntry64),  // features size
kFeatureListForEntry64,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry64),  // CrBugs size
kCrBugsForEntry64,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x1002,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
65,  // id
"Linux NVIDIA drivers don't have the correct defaults for vertex attributes",
base::size(kFeatureListForEntry65),  // features size
kFeatureListForEntry65,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry65),  // CrBugs size
kCrBugsForEntry65,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry65,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
68,  // id
"Disable partial swaps on Mesa drivers (detected with GL_RENDERER)",
base::size(kFeatureListForEntry68),  // features size
kFeatureListForEntry68,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry68),  // CrBugs size
kCrBugsForEntry68,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry68,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
69,  // id
"Some shaders in Skia need more than the min available vertex and fragment shader uniform vectors in case of OSMesa",
base::size(kFeatureListForEntry69),  // features size
kFeatureListForEntry69,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry69),  // CrBugs size
kCrBugsForEntry69,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry69,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
88,  // id
"Always rewrite vec/mat constructors to be consistent",
base::size(kFeatureListForEntry88),  // features size
kFeatureListForEntry88,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry88),  // CrBugs size
kCrBugsForEntry88,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
90,  // id
"Linux AMD drivers handle struct scopes incorrectly",
base::size(kFeatureListForEntry90),  // features size
kFeatureListForEntry90,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry90),  // CrBugs size
kCrBugsForEntry90,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x1002,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
108,  // id
"Mali-4xx does not support GL_RGB format",
base::size(kFeatureListForEntry108),  // features size
kFeatureListForEntry108,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry108),  // CrBugs size
kCrBugsForEntry108,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry108,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
109,  // id
"MakeCurrent is slow on Linux with NVIDIA drivers",
base::size(kFeatureListForEntry109),  // features size
kFeatureListForEntry109,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry109),  // CrBugs size
kCrBugsForEntry109,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry109,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
111,  // id
"Discard Framebuffer breaks WebGL on Mali-4xx Linux",
base::size(kFeatureListForEntry111),  // features size
kFeatureListForEntry111,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry111),  // CrBugs size
kCrBugsForEntry111,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry111,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
118,  // id
"NVIDIA 331 series drivers shader compiler may crash when attempting to optimize pow()",
base::size(kFeatureListForEntry118),  // features size
kFeatureListForEntry118,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry118),  // CrBugs size
kCrBugsForEntry118,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry118,  // driver info
&kGLStringsForEntry118,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
123,  // id
"NVIDIA drivers before 346 lack features in NV_path_rendering and related extensions to implement driver level path rendering.",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry123),  // DisabledExtensions size
kDisabledExtensionsForEntry123,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry123),  // CrBugs size
kCrBugsForEntry123,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry123,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
128,  // id
"Linux ATI drivers crash on binding incomplete cube map texture to FBO",
base::size(kFeatureListForEntry128),  // features size
kFeatureListForEntry128,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry128),  // CrBugs size
kCrBugsForEntry128,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x1002,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
130,  // id
"NVIDIA fails glReadPixels from incomplete cube map texture",
base::size(kFeatureListForEntry130),  // features size
kFeatureListForEntry130,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry130),  // CrBugs size
kCrBugsForEntry130,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry130,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
131,  // id
"Linux Mesa drivers crash on glTexSubImage2D() to texture storage bound to FBO",
base::size(kFeatureListForEntry131),  // features size
kFeatureListForEntry131,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry131),  // CrBugs size
kCrBugsForEntry131,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry131,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
132,  // id
"On Intel GPUs MSAA performance is not acceptable for GPU rasterization",
base::size(kFeatureListForEntry132),  // features size
kFeatureListForEntry132,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry132),  // CrBugs size
kCrBugsForEntry132,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x8086,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryActive,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
139,  // id
"Mesa drivers wrongly report supporting GL_EXT_texture_rg with GLES 2.0 prior version 11.1",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry139),  // DisabledExtensions size
kDisabledExtensionsForEntry139,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry139),  // CrBugs size
kCrBugsForEntry139,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry139,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry139,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
142,  // id
"Pack parameters work incorrectly with pack buffer bound",
base::size(kFeatureListForEntry142),  // features size
kFeatureListForEntry142,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry142),  // CrBugs size
kCrBugsForEntry142,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry142,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
143,  // id
"Timer queries crash on Intel GPUs on Linux",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry143),  // DisabledExtensions size
kDisabledExtensionsForEntry143,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry143),  // CrBugs size
kCrBugsForEntry143,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x8086,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry143,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
150,  // id
"Alignment works incorrectly with unpack buffer bound",
base::size(kFeatureListForEntry150),  // features size
kFeatureListForEntry150,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry150),  // CrBugs size
kCrBugsForEntry150,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry150,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
153,  // id
"Vivante GC1000 with EXT_multisampled_render_to_texture fails glReadPixels",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry153),  // DisabledExtensions size
kDisabledExtensionsForEntry153,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry153),  // CrBugs size
kCrBugsForEntry153,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry153,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
159,  // id
"Framebuffer discarding can hurt performance on non-tilers",
base::size(kFeatureListForEntry159),  // features size
kFeatureListForEntry159,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry159),  // CrBugs size
kCrBugsForEntry159,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry159,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
160,  // id
"Framebuffer discarding not useful on NVIDIA Kepler architecture and later",
base::size(kFeatureListForEntry160),  // features size
kFeatureListForEntry160,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry160),  // CrBugs size
kCrBugsForEntry160,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry160,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry160,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
165,  // id
"Unpacking overlapping rows from unpack buffers is unstable on NVIDIA GL driver",
base::size(kFeatureListForEntry165),  // features size
kFeatureListForEntry165,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry165),  // CrBugs size
kCrBugsForEntry165,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry165,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
168,  // id
"VirtualBox driver doesn't correctly support partial swaps.",
base::size(kFeatureListForEntry168),  // features size
kFeatureListForEntry168,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry168),  // CrBugs size
kCrBugsForEntry168,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x80ee,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
172,  // id
"Use GL_INTEL_framebuffer_CMAA on ChromeOS",
base::size(kFeatureListForEntry172),  // features size
kFeatureListForEntry172,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry172),  // CrBugs size
kCrBugsForEntry172,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
base::size(kExceptionsForEntry172),  // exceptions count
kExceptionsForEntry172,  // exceptions
},
{
190,  // id
"Disable partial swaps on Mesa drivers (detected with GL_VERSION)",
base::size(kFeatureListForEntry190),  // features size
kFeatureListForEntry190,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry190),  // CrBugs size
kCrBugsForEntry190,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry190,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
192,  // id
"Decode and encode before generateMipmap for srgb format textures on os except macosx",
base::size(kFeatureListForEntry192),  // features size
kFeatureListForEntry192,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry192),  // CrBugs size
kCrBugsForEntry192,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry192,  // more data
},
base::size(kExceptionsForEntry192),  // exceptions count
kExceptionsForEntry192,  // exceptions
},
{
198,  // id
"adjust src/dst region if blitting pixels outside read framebuffer on Linux Intel",
base::size(kFeatureListForEntry198),  // features size
kFeatureListForEntry198,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry198),  // CrBugs size
kCrBugsForEntry198,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x8086,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
199,  // id
"adjust src/dst region if blitting pixels outside read framebuffer on Linux AMD",
base::size(kFeatureListForEntry199),  // features size
kFeatureListForEntry199,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry199),  // CrBugs size
kCrBugsForEntry199,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x1002,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
201,  // id
"AMD drivers in Linux require invariant qualifier to match between vertex and fragment shaders",
base::size(kFeatureListForEntry201),  // features size
kFeatureListForEntry201,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry201),  // CrBugs size
kCrBugsForEntry201,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x1002,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
203,  // id
"Mesa driver GL 3.3 requires invariant and centroid to match between shaders",
base::size(kFeatureListForEntry203),  // features size
kFeatureListForEntry203,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry203),  // CrBugs size
kCrBugsForEntry203,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry203,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry203,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
206,  // id
"Disable KHR_blend_equation_advanced until cc shaders are updated",
0,  // feature size
nullptr,  // features
base::size(kDisabledExtensionsForEntry206),  // DisabledExtensions size
kDisabledExtensionsForEntry206,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry206),  // CrBugs size
kCrBugsForEntry206,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
208,  // id
"Decode and Encode before generateMipmap for srgb format textures on Linux Mesa ANGLE path",
base::size(kFeatureListForEntry208),  // features size
kFeatureListForEntry208,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry208),  // CrBugs size
kCrBugsForEntry208,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x8086,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry208,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
210,  // id
"Decode and Encode before generateMipmap for srgb format textures on Linux AMD",
base::size(kFeatureListForEntry210),  // features size
kFeatureListForEntry210,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry210),  // CrBugs size
kCrBugsForEntry210,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x1002,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
213,  // id
"The Mali-Gxx driver does not guarantee flush ordering",
base::size(kFeatureListForEntry213),  // features size
kFeatureListForEntry213,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry213),  // CrBugs size
kCrBugsForEntry213,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry213,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
214,  // id
"Some Adreno 3xx don't setup scissor state correctly when FBO0 is bound, nor support MSAA properly.",
base::size(kFeatureListForEntry214),  // features size
kFeatureListForEntry214,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry214),  // CrBugs size
kCrBugsForEntry214,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry214,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
215,  // id
"Fake no-op GPU driver bug workaround for testing",
base::size(kFeatureListForEntry215),  // features size
kFeatureListForEntry215,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry215),  // CrBugs size
kCrBugsForEntry215,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry215,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
222,  // id
"Software to Accelerated canvas update breaks Linux AMD",
base::size(kFeatureListForEntry222),  // features size
kFeatureListForEntry222,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry222),  // CrBugs size
kCrBugsForEntry222,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x1002,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
223,  // id
"Force integer or srgb cube map texture complete on Linux AMD",
base::size(kFeatureListForEntry223),  // features size
kFeatureListForEntry223,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry223),  // CrBugs size
kCrBugsForEntry223,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x1002,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
256,  // id
"Don't expose disjoint_timer_query extensions to WebGL",
0,  // feature size
nullptr,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
base::size(kDisabledWebGLExtensionsForEntry256),  // DisabledWebGLExtensions size
kDisabledWebGLExtensionsForEntry256,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry256),  // CrBugs size
kCrBugsForEntry256,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
257,  // id
"Fake entry for testing disabling of WebGL extensions",
0,  // feature size
nullptr,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
base::size(kDisabledWebGLExtensionsForEntry257),  // DisabledWebGLExtensions size
kDisabledWebGLExtensionsForEntry257,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry257),  // CrBugs size
kCrBugsForEntry257,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry257,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
265,  // id
"Crash in glQueryCounter() in VMware driver",
base::size(kFeatureListForEntry265),  // features size
kFeatureListForEntry265,  // features
base::size(kDisabledExtensionsForEntry265),  // DisabledExtensions size
kDisabledExtensionsForEntry265,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry265),  // CrBugs size
kCrBugsForEntry265,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x15ad,  // vendor_id
base::size(kDeviceIDsForEntry265),  // DeviceIDs size
kDeviceIDsForEntry265,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
267,  // id
"WebGL with multisampling produces errors on Mali",
base::size(kFeatureListForEntry267),  // features size
kFeatureListForEntry267,  // features
base::size(kDisabledExtensionsForEntry267),  // DisabledExtensions size
kDisabledExtensionsForEntry267,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry267),  // CrBugs size
kCrBugsForEntry267,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry267,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
};
const size_t kGpuDriverBugListEntryCount = 50;
}  // namespace gpu

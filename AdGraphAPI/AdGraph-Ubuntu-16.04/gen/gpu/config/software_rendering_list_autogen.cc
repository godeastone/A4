// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is auto-generated from
//    gpu/config/process_json.py
// It's formatted by clang-format using chromium coding style:
//    clang-format -i -style=chromium filename
// DO NOT EDIT!

#include "gpu/config/software_rendering_list_autogen.h"

#include "gpu/config/software_rendering_list_arrays_and_structs_autogen.h"
#include "gpu/config/software_rendering_list_exceptions_autogen.h"

namespace gpu {

const GpuControlList::Entry kSoftwareRenderingListEntries[] = {
{
3,  // id
"GL driver is software rendered. GPU acceleration is disabled",
base::size(kFeatureListForEntry3),  // features size
kFeatureListForEntry3,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry3),  // CrBugs size
kCrBugsForEntry3,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry3,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
4,  // id
"The Intel Mobile 945 Express family of chipsets is not compatible with WebGL",
base::size(kFeatureListForEntry4),  // features size
kFeatureListForEntry4,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry4),  // CrBugs size
kCrBugsForEntry4,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x8086,  // vendor_id
base::size(kDeviceIDsForEntry4),  // DeviceIDs size
kDeviceIDsForEntry4,  // DeviceIDs
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
5,  // id
"ATI/AMD cards with older drivers in Linux are crash-prone",
base::size(kFeatureListForEntry5),  // features size
kFeatureListForEntry5,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry5),  // CrBugs size
kCrBugsForEntry5,  // CrBugs
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
base::size(kExceptionsForEntry5),  // exceptions count
kExceptionsForEntry5,  // exceptions
},
{
8,  // id
"NVIDIA GeForce FX Go5200 is assumed to be buggy",
base::size(kFeatureListForEntry8),  // features size
kFeatureListForEntry8,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry8),  // CrBugs size
kCrBugsForEntry8,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
base::size(kDeviceIDsForEntry8),  // DeviceIDs size
kDeviceIDsForEntry8,  // DeviceIDs
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
17,  // id
"Older Intel mesa drivers are crash-prone",
base::size(kFeatureListForEntry17),  // features size
kFeatureListForEntry17,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry17),  // CrBugs size
kCrBugsForEntry17,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x8086,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry17,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
base::size(kExceptionsForEntry17),  // exceptions count
kExceptionsForEntry17,  // exceptions
},
{
18,  // id
"NVIDIA Quadro FX 1500 is buggy",
base::size(kFeatureListForEntry18),  // features size
kFeatureListForEntry18,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry18),  // CrBugs size
kCrBugsForEntry18,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
base::size(kDeviceIDsForEntry18),  // DeviceIDs size
kDeviceIDsForEntry18,  // DeviceIDs
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
27,  // id
"ATI/AMD cards with older drivers in Linux are crash-prone",
base::size(kFeatureListForEntry27),  // features size
kFeatureListForEntry27,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry27),  // CrBugs size
kCrBugsForEntry27,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry27,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
base::size(kExceptionsForEntry27),  // exceptions count
kExceptionsForEntry27,  // exceptions
},
{
28,  // id
"ATI/AMD cards with third-party drivers in Linux are crash-prone",
base::size(kFeatureListForEntry28),  // features size
kFeatureListForEntry28,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry28),  // CrBugs size
kCrBugsForEntry28,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry28,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
base::size(kExceptionsForEntry28),  // exceptions count
kExceptionsForEntry28,  // exceptions
},
{
29,  // id
"ATI/AMD cards with third-party drivers in Linux are crash-prone",
base::size(kFeatureListForEntry29),  // features size
kFeatureListForEntry29,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry29),  // CrBugs size
kCrBugsForEntry29,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry29,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
base::size(kExceptionsForEntry29),  // exceptions count
kExceptionsForEntry29,  // exceptions
},
{
30,  // id
"NVIDIA cards with nouveau drivers in Linux are crash-prone",
base::size(kFeatureListForEntry30),  // features size
kFeatureListForEntry30,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry30),  // CrBugs size
kCrBugsForEntry30,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry30,  // driver info
&kGLStringsForEntry30,  // GL strings
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
"Older drivers are unreliable for Optimus on Linux",
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
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleOptimus,  // multi_gpu_style
&kDriverInfoForEntry37,  // driver info
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
47,  // id
"NVIDIA linux drivers older than 295.* are assumed to be buggy",
base::size(kFeatureListForEntry47),  // features size
kFeatureListForEntry47,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry47),  // CrBugs size
kCrBugsForEntry47,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry47,  // driver info
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
48,  // id
"Accelerated video decode is unavailable on Linux",
base::size(kFeatureListForEntry48),  // features size
kFeatureListForEntry48,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry48),  // CrBugs size
kCrBugsForEntry48,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
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
50,  // id
"Disable VMware software renderer on older Mesa",
base::size(kFeatureListForEntry50),  // features size
kFeatureListForEntry50,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry50),  // CrBugs size
kCrBugsForEntry50,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry50,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
base::size(kExceptionsForEntry50),  // exceptions count
kExceptionsForEntry50,  // exceptions
},
{
53,  // id
"The Intel GMA500 is too slow for Stage3D",
base::size(kFeatureListForEntry53),  // features size
kFeatureListForEntry53,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry53),  // CrBugs size
kCrBugsForEntry53,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x8086,  // vendor_id
base::size(kDeviceIDsForEntry53),  // DeviceIDs size
kDeviceIDsForEntry53,  // DeviceIDs
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
56,  // id
"NVIDIA linux drivers are unstable when using multiple Open GL contexts and with low memory",
base::size(kFeatureListForEntry56),  // features size
kFeatureListForEntry56,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry56),  // CrBugs size
kCrBugsForEntry56,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry56,  // driver info
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
93,  // id
"GLX indirect rendering (X remoting) is not supported",
base::size(kFeatureListForEntry93),  // features size
kFeatureListForEntry93,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry93),  // CrBugs size
kCrBugsForEntry93,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
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
&kMoreForEntry93,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
95,  // id
"AMD driver version 13.101 is unstable on linux.",
base::size(kFeatureListForEntry95),  // features size
kFeatureListForEntry95,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry95),  // CrBugs size
kCrBugsForEntry95,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x1002,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry95,  // driver info
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
107,  // id
"Haswell GT1 Intel drivers are buggy on kernels < 3.19.1",
base::size(kFeatureListForEntry107),  // features size
kFeatureListForEntry107,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry107),  // CrBugs size
kCrBugsForEntry107,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "3.19.1", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
base::size(kGpuSeriesForEntry107),  // gpu_series size
kGpuSeriesForEntry107,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
110,  // id
"Only enable WebGL for the Mesa Gallium llvmpipe driver",
base::size(kFeatureListForEntry110),  // features size
kFeatureListForEntry110,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry110),  // CrBugs size
kCrBugsForEntry110,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry110,  // driver info
&kGLStringsForEntry110,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
125,  // id
"VirtualBox driver is unstable on linux.",
base::size(kFeatureListForEntry125),  // features size
kFeatureListForEntry125,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry125),  // CrBugs size
kCrBugsForEntry125,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x80ee,  // vendor_id
base::size(kDeviceIDsForEntry125),  // DeviceIDs size
kDeviceIDsForEntry125,  // DeviceIDs
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
129,  // id
"Intel drivers are buggy on Linux 2.x",
base::size(kFeatureListForEntry129),  // features size
kFeatureListForEntry129,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry129),  // CrBugs size
kCrBugsForEntry129,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "3.0", nullptr},  // os_version
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
131,  // id
"Mesa drivers older than 10.4.3 is crash prone on Linux Intel i965gm",
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
0x1f96,  // vendor_id
base::size(kDeviceIDsForEntry131),  // DeviceIDs size
kDeviceIDsForEntry131,  // DeviceIDs
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
134,  // id
"Mesa driver 10.1.3 renders incorrectly and crashes on multiple vendors",
base::size(kFeatureListForEntry134),  // features size
kFeatureListForEntry134,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry134),  // CrBugs size
kCrBugsForEntry134,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForEntry134,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
base::size(kExceptionsForEntry134),  // exceptions count
kExceptionsForEntry134,  // exceptions
},
{
140,  // id
"MSAA and depth texture buggy on Adreno 3xx, also disable WebGL2",
base::size(kFeatureListForEntry140),  // features size
kFeatureListForEntry140,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForEntry140),  // CrBugs size
kCrBugsForEntry140,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForEntry140,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
0,  // exceptions count
nullptr,  // exceptions
},
{
152,  // id
"Test entry where all features except WebGL blacklisted",
base::size(kFeatureListForEntry152),  // features size
kFeatureListForEntry152,  // features
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
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry152,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
153,  // id
"Test entry where WebGL is blacklisted",
base::size(kFeatureListForEntry153),  // features size
kFeatureListForEntry153,  // features
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
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry153,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
154,  // id
"Protected video decoding with swap chain is for Windows and Intel only",
base::size(kFeatureListForEntry154),  // features size
kFeatureListForEntry154,  // features
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
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
nullptr,  // more conditions
},
base::size(kExceptionsForEntry154),  // exceptions count
kExceptionsForEntry154,  // exceptions
},
};
const size_t kSoftwareRenderingListEntryCount = 28;
}  // namespace gpu

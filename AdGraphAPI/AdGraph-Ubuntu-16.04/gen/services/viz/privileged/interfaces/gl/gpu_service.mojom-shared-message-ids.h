// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace viz {
namespace mojom {

namespace internal {


// The 2051857121 value is based on sha256(salt + "GpuService1").
constexpr uint32_t kGpuService_EstablishGpuChannel_Name = 2051857121;
// The 2061244542 value is based on sha256(salt + "GpuService2").
constexpr uint32_t kGpuService_CloseChannel_Name = 2061244542;
// The 865170673 value is based on sha256(salt + "GpuService3").
constexpr uint32_t kGpuService_CreateJpegDecodeAccelerator_Name = 865170673;
// The 130236699 value is based on sha256(salt + "GpuService4").
constexpr uint32_t kGpuService_CreateJpegEncodeAccelerator_Name = 130236699;
// The 940732144 value is based on sha256(salt + "GpuService5").
constexpr uint32_t kGpuService_CreateVideoEncodeAcceleratorProvider_Name = 940732144;
// The 1264841524 value is based on sha256(salt + "GpuService6").
constexpr uint32_t kGpuService_CreateGpuMemoryBuffer_Name = 1264841524;
// The 344792680 value is based on sha256(salt + "GpuService7").
constexpr uint32_t kGpuService_DestroyGpuMemoryBuffer_Name = 344792680;
// The 1462905674 value is based on sha256(salt + "GpuService8").
constexpr uint32_t kGpuService_GetVideoMemoryUsageStats_Name = 1462905674;
// The 855175645 value is based on sha256(salt + "GpuService9").
constexpr uint32_t kGpuService_RequestCompleteGpuInfo_Name = 855175645;
// The 1696297665 value is based on sha256(salt + "GpuService10").
constexpr uint32_t kGpuService_GetGpuSupportedRuntimeVersion_Name = 1696297665;
// The 290290387 value is based on sha256(salt + "GpuService11").
constexpr uint32_t kGpuService_RequestHDRStatus_Name = 290290387;
// The 1045022890 value is based on sha256(salt + "GpuService12").
constexpr uint32_t kGpuService_LoadedShader_Name = 1045022890;
// The 2097800633 value is based on sha256(salt + "GpuService13").
constexpr uint32_t kGpuService_DestroyingVideoSurface_Name = 2097800633;
// The 374609234 value is based on sha256(salt + "GpuService14").
constexpr uint32_t kGpuService_WakeUpGpu_Name = 374609234;
// The 1179331894 value is based on sha256(salt + "GpuService15").
constexpr uint32_t kGpuService_GpuSwitched_Name = 1179331894;
// The 97513086 value is based on sha256(salt + "GpuService16").
constexpr uint32_t kGpuService_DestroyAllChannels_Name = 97513086;
// The 253447893 value is based on sha256(salt + "GpuService17").
constexpr uint32_t kGpuService_OnBackgroundCleanup_Name = 253447893;
// The 2077220214 value is based on sha256(salt + "GpuService18").
constexpr uint32_t kGpuService_OnBackgrounded_Name = 2077220214;
// The 346495784 value is based on sha256(salt + "GpuService19").
constexpr uint32_t kGpuService_OnForegrounded_Name = 346495784;
// The 1850768895 value is based on sha256(salt + "GpuService20").
constexpr uint32_t kGpuService_Crash_Name = 1850768895;
// The 1636008310 value is based on sha256(salt + "GpuService21").
constexpr uint32_t kGpuService_Hang_Name = 1636008310;
// The 395888106 value is based on sha256(salt + "GpuService22").
constexpr uint32_t kGpuService_ThrowJavaException_Name = 395888106;
// The 213553540 value is based on sha256(salt + "GpuService23").
constexpr uint32_t kGpuService_Stop_Name = 213553540;

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
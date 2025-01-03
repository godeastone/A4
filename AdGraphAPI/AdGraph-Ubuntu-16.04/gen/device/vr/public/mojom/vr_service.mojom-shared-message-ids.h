// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 520697140 value is based on sha256(salt + "VRService1").
constexpr uint32_t kVRService_SetClient_Name = 520697140;
// The 685172606 value is based on sha256(salt + "VRService2").
constexpr uint32_t kVRService_SetListeningForActivate_Name = 685172606;
// The 854239978 value is based on sha256(salt + "VRServiceClient1").
constexpr uint32_t kVRServiceClient_OnDisplayConnected_Name = 854239978;
// The 69231622 value is based on sha256(salt + "VRSubmitFrameClient1").
constexpr uint32_t kVRSubmitFrameClient_OnSubmitFrameTransferred_Name = 69231622;
// The 834982627 value is based on sha256(salt + "VRSubmitFrameClient2").
constexpr uint32_t kVRSubmitFrameClient_OnSubmitFrameRendered_Name = 834982627;
// The 190212336 value is based on sha256(salt + "VRSubmitFrameClient3").
constexpr uint32_t kVRSubmitFrameClient_OnSubmitFrameGpuFence_Name = 190212336;
// The 699199928 value is based on sha256(salt + "VRDisplayHost1").
constexpr uint32_t kVRDisplayHost_RequestPresent_Name = 699199928;
// The 1420051041 value is based on sha256(salt + "VRDisplayHost2").
constexpr uint32_t kVRDisplayHost_ExitPresent_Name = 1420051041;
// The 1649454886 value is based on sha256(salt + "VRMagicWindowProvider1").
constexpr uint32_t kVRMagicWindowProvider_GetPose_Name = 1649454886;
// The 62983881 value is based on sha256(salt + "VRMagicWindowProvider2").
constexpr uint32_t kVRMagicWindowProvider_GetFrameData_Name = 62983881;
// The 1557126507 value is based on sha256(salt + "VRPresentationProvider1").
constexpr uint32_t kVRPresentationProvider_GetVSync_Name = 1557126507;
// The 1918344054 value is based on sha256(salt + "VRPresentationProvider2").
constexpr uint32_t kVRPresentationProvider_UpdateLayerBounds_Name = 1918344054;
// The 251029854 value is based on sha256(salt + "VRPresentationProvider3").
constexpr uint32_t kVRPresentationProvider_SubmitFrameMissing_Name = 251029854;
// The 1536308249 value is based on sha256(salt + "VRPresentationProvider4").
constexpr uint32_t kVRPresentationProvider_SubmitFrame_Name = 1536308249;
// The 1275405562 value is based on sha256(salt + "VRPresentationProvider5").
constexpr uint32_t kVRPresentationProvider_SubmitFrameWithTextureHandle_Name = 1275405562;
// The 424170091 value is based on sha256(salt + "VRPresentationProvider6").
constexpr uint32_t kVRPresentationProvider_SubmitFrameDrawnIntoTexture_Name = 424170091;
// The 23517852 value is based on sha256(salt + "VRDisplayClient1").
constexpr uint32_t kVRDisplayClient_OnChanged_Name = 23517852;
// The 1418631270 value is based on sha256(salt + "VRDisplayClient2").
constexpr uint32_t kVRDisplayClient_OnExitPresent_Name = 1418631270;
// The 518500412 value is based on sha256(salt + "VRDisplayClient3").
constexpr uint32_t kVRDisplayClient_OnBlur_Name = 518500412;
// The 1049695990 value is based on sha256(salt + "VRDisplayClient4").
constexpr uint32_t kVRDisplayClient_OnFocus_Name = 1049695990;
// The 249062929 value is based on sha256(salt + "VRDisplayClient5").
constexpr uint32_t kVRDisplayClient_OnActivate_Name = 249062929;
// The 1585737892 value is based on sha256(salt + "VRDisplayClient6").
constexpr uint32_t kVRDisplayClient_OnDeactivate_Name = 1585737892;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_AUDIO_PUBLIC_MOJOM_SYSTEM_INFO_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_AUDIO_PUBLIC_MOJOM_SYSTEM_INFO_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace audio {
namespace mojom {

namespace internal {


// The 1410512256 value is based on sha256(salt + "SystemInfo1").
constexpr uint32_t kSystemInfo_GetInputStreamParameters_Name = 1410512256;
// The 290612465 value is based on sha256(salt + "SystemInfo2").
constexpr uint32_t kSystemInfo_GetOutputStreamParameters_Name = 290612465;
// The 1982975734 value is based on sha256(salt + "SystemInfo3").
constexpr uint32_t kSystemInfo_HasInputDevices_Name = 1982975734;
// The 780770133 value is based on sha256(salt + "SystemInfo4").
constexpr uint32_t kSystemInfo_HasOutputDevices_Name = 780770133;
// The 907947424 value is based on sha256(salt + "SystemInfo5").
constexpr uint32_t kSystemInfo_GetInputDeviceDescriptions_Name = 907947424;
// The 1835833315 value is based on sha256(salt + "SystemInfo6").
constexpr uint32_t kSystemInfo_GetOutputDeviceDescriptions_Name = 1835833315;
// The 390323992 value is based on sha256(salt + "SystemInfo7").
constexpr uint32_t kSystemInfo_GetAssociatedOutputDeviceID_Name = 390323992;
// The 1241852900 value is based on sha256(salt + "SystemInfo8").
constexpr uint32_t kSystemInfo_GetInputDeviceInfo_Name = 1241852900;

}  // namespace internal
}  // namespace mojom
}  // namespace audio

#endif  // SERVICES_AUDIO_PUBLIC_MOJOM_SYSTEM_INFO_MOJOM_SHARED_MESSAGE_IDS_H_
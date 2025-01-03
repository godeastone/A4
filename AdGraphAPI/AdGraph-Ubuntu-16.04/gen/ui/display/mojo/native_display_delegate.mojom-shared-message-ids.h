// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_NATIVE_DISPLAY_DELEGATE_MOJOM_SHARED_MESSAGE_IDS_H_
#define UI_DISPLAY_MOJO_NATIVE_DISPLAY_DELEGATE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace display {
namespace mojom {

namespace internal {


// The 1904639121 value is based on sha256(salt + "NativeDisplayObserver1").
constexpr uint32_t kNativeDisplayObserver_OnConfigurationChanged_Name = 1904639121;
// The 2006440092 value is based on sha256(salt + "NativeDisplayDelegate1").
constexpr uint32_t kNativeDisplayDelegate_Initialize_Name = 2006440092;
// The 1397741610 value is based on sha256(salt + "NativeDisplayDelegate2").
constexpr uint32_t kNativeDisplayDelegate_TakeDisplayControl_Name = 1397741610;
// The 104122531 value is based on sha256(salt + "NativeDisplayDelegate3").
constexpr uint32_t kNativeDisplayDelegate_RelinquishDisplayControl_Name = 104122531;
// The 272993300 value is based on sha256(salt + "NativeDisplayDelegate4").
constexpr uint32_t kNativeDisplayDelegate_GetDisplays_Name = 272993300;
// The 840284099 value is based on sha256(salt + "NativeDisplayDelegate5").
constexpr uint32_t kNativeDisplayDelegate_Configure_Name = 840284099;
// The 1845563605 value is based on sha256(salt + "NativeDisplayDelegate6").
constexpr uint32_t kNativeDisplayDelegate_GetHDCPState_Name = 1845563605;
// The 363752367 value is based on sha256(salt + "NativeDisplayDelegate7").
constexpr uint32_t kNativeDisplayDelegate_SetHDCPState_Name = 363752367;
// The 1626169386 value is based on sha256(salt + "NativeDisplayDelegate8").
constexpr uint32_t kNativeDisplayDelegate_SetColorCorrection_Name = 1626169386;

}  // namespace internal
}  // namespace mojom
}  // namespace display

#endif  // UI_DISPLAY_MOJO_NATIVE_DISPLAY_DELEGATE_MOJOM_SHARED_MESSAGE_IDS_H_
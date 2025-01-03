// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_DISPLAY_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_DISPLAY_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace display {
namespace mojom {

namespace internal {


// The 990736016 value is based on sha256(salt + "DisplayController1").
constexpr uint32_t kDisplayController_IncreaseInternalDisplayZoom_Name = 990736016;
// The 643786694 value is based on sha256(salt + "DisplayController2").
constexpr uint32_t kDisplayController_DecreaseInternalDisplayZoom_Name = 643786694;
// The 1340808013 value is based on sha256(salt + "DisplayController3").
constexpr uint32_t kDisplayController_ResetInternalDisplayZoom_Name = 1340808013;
// The 299024122 value is based on sha256(salt + "DisplayController4").
constexpr uint32_t kDisplayController_RotateCurrentDisplayCW_Name = 299024122;
// The 1064718937 value is based on sha256(salt + "DisplayController5").
constexpr uint32_t kDisplayController_SwapPrimaryDisplay_Name = 1064718937;
// The 1510793238 value is based on sha256(salt + "DisplayController6").
constexpr uint32_t kDisplayController_ToggleMirrorMode_Name = 1510793238;
// The 1876903779 value is based on sha256(salt + "DisplayController7").
constexpr uint32_t kDisplayController_TakeDisplayControl_Name = 1876903779;
// The 1168941872 value is based on sha256(salt + "DisplayController8").
constexpr uint32_t kDisplayController_RelinquishDisplayControl_Name = 1168941872;
// The 960632813 value is based on sha256(salt + "DisplayController9").
constexpr uint32_t kDisplayController_SetDisplayWorkArea_Name = 960632813;

}  // namespace internal
}  // namespace mojom
}  // namespace display

#endif  // SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_DISPLAY_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_
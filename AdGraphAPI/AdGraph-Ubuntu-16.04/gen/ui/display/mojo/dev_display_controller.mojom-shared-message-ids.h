// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_DEV_DISPLAY_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_
#define UI_DISPLAY_MOJO_DEV_DISPLAY_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace display {
namespace mojom {

namespace internal {


// The 1388992157 value is based on sha256(salt + "DevDisplayController1").
constexpr uint32_t kDevDisplayController_ToggleAddRemoveDisplay_Name = 1388992157;

}  // namespace internal
}  // namespace mojom
}  // namespace display

#endif  // UI_DISPLAY_MOJO_DEV_DISPLAY_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_
// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_SERVER_TEST_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_SERVER_TEST_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ui {
namespace mojom {

namespace internal {


// The 225348360 value is based on sha256(salt + "WindowServerTest1").
constexpr uint32_t kWindowServerTest_EnsureClientHasDrawnWindow_Name = 225348360;

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_SERVER_TEST_MOJOM_SHARED_MESSAGE_IDS_H_
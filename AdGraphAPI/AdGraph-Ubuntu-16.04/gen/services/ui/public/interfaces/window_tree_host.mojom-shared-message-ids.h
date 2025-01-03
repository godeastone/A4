// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_HOST_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_HOST_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ui {
namespace mojom {

namespace internal {


// The 1077766214 value is based on sha256(salt + "WindowTreeHost1").
constexpr uint32_t kWindowTreeHost_SetSize_Name = 1077766214;
// The 2052341318 value is based on sha256(salt + "WindowTreeHost2").
constexpr uint32_t kWindowTreeHost_SetTitle_Name = 2052341318;

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_HOST_MOJOM_SHARED_MESSAGE_IDS_H_
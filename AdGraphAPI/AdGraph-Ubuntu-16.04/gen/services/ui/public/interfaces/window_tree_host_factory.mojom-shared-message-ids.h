// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_HOST_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_HOST_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ui {
namespace mojom {

namespace internal {


// The 1965109295 value is based on sha256(salt + "WindowTreeHostFactory1").
constexpr uint32_t kWindowTreeHostFactory_CreateWindowTreeHost_Name = 1965109295;

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_HOST_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_
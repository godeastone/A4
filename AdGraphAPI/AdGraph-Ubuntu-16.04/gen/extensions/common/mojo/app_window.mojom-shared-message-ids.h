// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EXTENSIONS_COMMON_MOJO_APP_WINDOW_MOJOM_SHARED_MESSAGE_IDS_H_
#define EXTENSIONS_COMMON_MOJO_APP_WINDOW_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace extensions {
namespace mojom {

namespace internal {


// The 1067874922 value is based on sha256(salt + "AppWindow1").
constexpr uint32_t kAppWindow_SetVisuallyDeemphasized_Name = 1067874922;

}  // namespace internal
}  // namespace mojom
}  // namespace extensions

#endif  // EXTENSIONS_COMMON_MOJO_APP_WINDOW_MOJOM_SHARED_MESSAGE_IDS_H_
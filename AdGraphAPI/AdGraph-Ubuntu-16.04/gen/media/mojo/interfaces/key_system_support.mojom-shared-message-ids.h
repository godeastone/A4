// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1867052781 value is based on sha256(salt + "KeySystemSupport1").
constexpr uint32_t kKeySystemSupport_IsKeySystemSupported_Name = 1867052781;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_SHARED_MESSAGE_IDS_H_
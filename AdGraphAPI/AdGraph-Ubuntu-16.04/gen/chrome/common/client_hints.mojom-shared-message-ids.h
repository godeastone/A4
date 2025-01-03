// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_CLIENT_HINTS_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_COMMON_CLIENT_HINTS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace client_hints {
namespace mojom {

namespace internal {


// The 1921773543 value is based on sha256(salt + "ClientHints1").
constexpr uint32_t kClientHints_PersistClientHints_Name = 1921773543;

}  // namespace internal
}  // namespace mojom
}  // namespace client_hints

#endif  // CHROME_COMMON_CLIENT_HINTS_MOJOM_SHARED_MESSAGE_IDS_H_
// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MASH_PUBLIC_MOJOM_LAUNCHABLE_MOJOM_SHARED_MESSAGE_IDS_H_
#define MASH_PUBLIC_MOJOM_LAUNCHABLE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace mash {
namespace mojom {

namespace internal {


// The 2048651060 value is based on sha256(salt + "Launchable1").
constexpr uint32_t kLaunchable_Launch_Name = 2048651060;

}  // namespace internal
}  // namespace mojom
}  // namespace mash

#endif  // MASH_PUBLIC_MOJOM_LAUNCHABLE_MOJOM_SHARED_MESSAGE_IDS_H_
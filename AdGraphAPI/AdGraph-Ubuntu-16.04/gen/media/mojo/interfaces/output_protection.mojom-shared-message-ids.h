// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1055117832 value is based on sha256(salt + "OutputProtection1").
constexpr uint32_t kOutputProtection_QueryStatus_Name = 1055117832;
// The 749122395 value is based on sha256(salt + "OutputProtection2").
constexpr uint32_t kOutputProtection_EnableProtection_Name = 749122395;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_SHARED_MESSAGE_IDS_H_
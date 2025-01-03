// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_JPEG_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_JPEG_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 650762961 value is based on sha256(salt + "JpegEncodeAccelerator1").
constexpr uint32_t kJpegEncodeAccelerator_Initialize_Name = 650762961;
// The 1924381468 value is based on sha256(salt + "JpegEncodeAccelerator2").
constexpr uint32_t kJpegEncodeAccelerator_EncodeWithFD_Name = 1924381468;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_JPEG_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_
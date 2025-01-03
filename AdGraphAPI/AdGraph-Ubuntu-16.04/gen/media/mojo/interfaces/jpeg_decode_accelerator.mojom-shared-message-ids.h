// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_JPEG_DECODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_JPEG_DECODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 379701457 value is based on sha256(salt + "JpegDecodeAccelerator1").
constexpr uint32_t kJpegDecodeAccelerator_Initialize_Name = 379701457;
// The 197334808 value is based on sha256(salt + "JpegDecodeAccelerator2").
constexpr uint32_t kJpegDecodeAccelerator_Decode_Name = 197334808;
// The 493603373 value is based on sha256(salt + "JpegDecodeAccelerator3").
constexpr uint32_t kJpegDecodeAccelerator_DecodeWithFD_Name = 493603373;
// The 416289598 value is based on sha256(salt + "JpegDecodeAccelerator4").
constexpr uint32_t kJpegDecodeAccelerator_Uninitialize_Name = 416289598;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_JPEG_DECODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_
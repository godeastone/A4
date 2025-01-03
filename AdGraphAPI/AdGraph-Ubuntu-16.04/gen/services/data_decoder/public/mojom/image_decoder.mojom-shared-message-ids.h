// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DATA_DECODER_PUBLIC_MOJOM_IMAGE_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DATA_DECODER_PUBLIC_MOJOM_IMAGE_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace data_decoder {
namespace mojom {

namespace internal {


// The 1627806450 value is based on sha256(salt + "ImageDecoder1").
constexpr uint32_t kImageDecoder_DecodeImage_Name = 1627806450;
// The 1414322001 value is based on sha256(salt + "ImageDecoder2").
constexpr uint32_t kImageDecoder_DecodeAnimation_Name = 1414322001;

}  // namespace internal
}  // namespace mojom
}  // namespace data_decoder

#endif  // SERVICES_DATA_DECODER_PUBLIC_MOJOM_IMAGE_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_
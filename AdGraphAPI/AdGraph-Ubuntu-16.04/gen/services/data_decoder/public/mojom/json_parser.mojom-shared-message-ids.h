// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DATA_DECODER_PUBLIC_MOJOM_JSON_PARSER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DATA_DECODER_PUBLIC_MOJOM_JSON_PARSER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace data_decoder {
namespace mojom {

namespace internal {


// The 1922389778 value is based on sha256(salt + "JsonParser1").
constexpr uint32_t kJsonParser_Parse_Name = 1922389778;

}  // namespace internal
}  // namespace mojom
}  // namespace data_decoder

#endif  // SERVICES_DATA_DECODER_PUBLIC_MOJOM_JSON_PARSER_MOJOM_SHARED_MESSAGE_IDS_H_
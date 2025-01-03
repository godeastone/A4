// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 676566874 value is based on sha256(salt + "BytesProvider1").
constexpr uint32_t kBytesProvider_RequestAsReply_Name = 676566874;
// The 846675526 value is based on sha256(salt + "BytesProvider2").
constexpr uint32_t kBytesProvider_RequestAsStream_Name = 846675526;
// The 1758180763 value is based on sha256(salt + "BytesProvider3").
constexpr uint32_t kBytesProvider_RequestAsFile_Name = 1758180763;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_SHARED_MESSAGE_IDS_H_
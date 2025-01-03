// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1863037787 value is based on sha256(salt + "BlobReaderClient1").
constexpr uint32_t kBlobReaderClient_OnCalculatedSize_Name = 1863037787;
// The 703455520 value is based on sha256(salt + "BlobReaderClient2").
constexpr uint32_t kBlobReaderClient_OnComplete_Name = 703455520;
// The 855345322 value is based on sha256(salt + "Blob1").
constexpr uint32_t kBlob_Clone_Name = 855345322;
// The 320556257 value is based on sha256(salt + "Blob2").
constexpr uint32_t kBlob_AsDataPipeGetter_Name = 320556257;
// The 178188403 value is based on sha256(salt + "Blob3").
constexpr uint32_t kBlob_ReadAll_Name = 178188403;
// The 35393406 value is based on sha256(salt + "Blob4").
constexpr uint32_t kBlob_ReadRange_Name = 35393406;
// The 982364260 value is based on sha256(salt + "Blob5").
constexpr uint32_t kBlob_ReadSideData_Name = 982364260;
// The 1535761694 value is based on sha256(salt + "Blob6").
constexpr uint32_t kBlob_GetInternalUUID_Name = 1535761694;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_SHARED_MESSAGE_IDS_H_
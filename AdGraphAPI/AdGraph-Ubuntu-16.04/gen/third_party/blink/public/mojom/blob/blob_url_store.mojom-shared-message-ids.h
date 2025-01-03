// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1633479105 value is based on sha256(salt + "BlobURLStore1").
constexpr uint32_t kBlobURLStore_Register_Name = 1633479105;
// The 55256330 value is based on sha256(salt + "BlobURLStore2").
constexpr uint32_t kBlobURLStore_Revoke_Name = 55256330;
// The 1862391295 value is based on sha256(salt + "BlobURLStore3").
constexpr uint32_t kBlobURLStore_Resolve_Name = 1862391295;
// The 719998540 value is based on sha256(salt + "BlobURLStore4").
constexpr uint32_t kBlobURLStore_ResolveAsURLLoaderFactory_Name = 719998540;
// The 1426550398 value is based on sha256(salt + "BlobURLStore5").
constexpr uint32_t kBlobURLStore_ResolveForNavigation_Name = 1426550398;
// The 1896748652 value is based on sha256(salt + "BlobURLToken1").
constexpr uint32_t kBlobURLToken_Clone_Name = 1896748652;
// The 1738817298 value is based on sha256(salt + "BlobURLToken2").
constexpr uint32_t kBlobURLToken_GetToken_Name = 1738817298;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_SHARED_MESSAGE_IDS_H_
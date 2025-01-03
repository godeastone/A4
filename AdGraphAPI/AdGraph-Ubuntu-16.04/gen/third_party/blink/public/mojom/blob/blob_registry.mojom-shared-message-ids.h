// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 932372963 value is based on sha256(salt + "ProgressClient1").
constexpr uint32_t kProgressClient_OnProgress_Name = 932372963;
// The 1352543627 value is based on sha256(salt + "BlobRegistry1").
constexpr uint32_t kBlobRegistry_Register_Name = 1352543627;
// The 1344976190 value is based on sha256(salt + "BlobRegistry2").
constexpr uint32_t kBlobRegistry_RegisterFromStream_Name = 1344976190;
// The 334941431 value is based on sha256(salt + "BlobRegistry3").
constexpr uint32_t kBlobRegistry_GetBlobFromUUID_Name = 334941431;
// The 129625147 value is based on sha256(salt + "BlobRegistry4").
constexpr uint32_t kBlobRegistry_URLStoreForOrigin_Name = 129625147;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_SHARED_MESSAGE_IDS_H_
// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_CATALOG_PUBLIC_MOJOM_CATALOG_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_CATALOG_PUBLIC_MOJOM_CATALOG_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace catalog {
namespace mojom {

namespace internal {


// The 2130494902 value is based on sha256(salt + "Catalog1").
constexpr uint32_t kCatalog_GetEntries_Name = 2130494902;
// The 989832459 value is based on sha256(salt + "Catalog2").
constexpr uint32_t kCatalog_GetEntriesProvidingCapability_Name = 989832459;

}  // namespace internal
}  // namespace mojom
}  // namespace catalog

#endif  // SERVICES_CATALOG_PUBLIC_MOJOM_CATALOG_MOJOM_SHARED_MESSAGE_IDS_H_
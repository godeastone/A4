// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MANIFEST_OBSERVER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_MANIFEST_OBSERVER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 2101770311 value is based on sha256(salt + "ManifestUrlChangeObserver1").
constexpr uint32_t kManifestUrlChangeObserver_ManifestUrlChanged_Name = 2101770311;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_MANIFEST_OBSERVER_MOJOM_SHARED_MESSAGE_IDS_H_
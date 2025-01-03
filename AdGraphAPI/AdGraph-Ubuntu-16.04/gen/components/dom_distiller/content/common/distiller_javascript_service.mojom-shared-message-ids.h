// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLER_JAVASCRIPT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLER_JAVASCRIPT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace dom_distiller {
namespace mojom {

namespace internal {


// The 16687804 value is based on sha256(salt + "DistillerJavaScriptService1").
constexpr uint32_t kDistillerJavaScriptService_HandleDistillerOpenSettingsCall_Name = 16687804;

}  // namespace internal
}  // namespace mojom
}  // namespace dom_distiller

#endif  // COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLER_JAVASCRIPT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
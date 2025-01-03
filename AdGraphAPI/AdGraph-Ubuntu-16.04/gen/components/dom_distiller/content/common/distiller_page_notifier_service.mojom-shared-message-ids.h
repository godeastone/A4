// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLER_PAGE_NOTIFIER_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLER_PAGE_NOTIFIER_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace dom_distiller {
namespace mojom {

namespace internal {


// The 1325306364 value is based on sha256(salt + "DistillerPageNotifierService1").
constexpr uint32_t kDistillerPageNotifierService_NotifyIsDistillerPage_Name = 1325306364;

}  // namespace internal
}  // namespace mojom
}  // namespace dom_distiller

#endif  // COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLER_PAGE_NOTIFIER_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
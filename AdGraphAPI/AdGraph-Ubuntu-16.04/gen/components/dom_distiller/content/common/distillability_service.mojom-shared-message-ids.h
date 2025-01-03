// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLABILITY_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLABILITY_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace dom_distiller {
namespace mojom {

namespace internal {


// The 267242321 value is based on sha256(salt + "DistillabilityService1").
constexpr uint32_t kDistillabilityService_NotifyIsDistillable_Name = 267242321;

}  // namespace internal
}  // namespace mojom
}  // namespace dom_distiller

#endif  // COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLABILITY_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
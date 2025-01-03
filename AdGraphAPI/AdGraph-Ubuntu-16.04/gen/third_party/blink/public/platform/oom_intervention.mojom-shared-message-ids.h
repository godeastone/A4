// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_OOM_INTERVENTION_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_OOM_INTERVENTION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 804447640 value is based on sha256(salt + "OomInterventionHost1").
constexpr uint32_t kOomInterventionHost_OnHighMemoryUsage_Name = 804447640;
// The 1734349864 value is based on sha256(salt + "OomIntervention1").
constexpr uint32_t kOomIntervention_StartDetection_Name = 1734349864;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_OOM_INTERVENTION_MOJOM_SHARED_MESSAGE_IDS_H_
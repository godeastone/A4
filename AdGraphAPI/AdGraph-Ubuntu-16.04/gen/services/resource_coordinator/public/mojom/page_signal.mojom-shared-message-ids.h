// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_PAGE_SIGNAL_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_PAGE_SIGNAL_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace resource_coordinator {
namespace mojom {

namespace internal {


// The 1805278766 value is based on sha256(salt + "PageSignalReceiver1").
constexpr uint32_t kPageSignalReceiver_NotifyPageAlmostIdle_Name = 1805278766;
// The 898496757 value is based on sha256(salt + "PageSignalReceiver2").
constexpr uint32_t kPageSignalReceiver_SetExpectedTaskQueueingDuration_Name = 898496757;
// The 2096912351 value is based on sha256(salt + "PageSignalReceiver3").
constexpr uint32_t kPageSignalReceiver_SetLifecycleState_Name = 2096912351;
// The 914315178 value is based on sha256(salt + "PageSignalGenerator1").
constexpr uint32_t kPageSignalGenerator_AddReceiver_Name = 914315178;

}  // namespace internal
}  // namespace mojom
}  // namespace resource_coordinator

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_PAGE_SIGNAL_MOJOM_SHARED_MESSAGE_IDS_H_
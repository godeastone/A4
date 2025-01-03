// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ukm {
namespace mojom {

namespace internal {


// The 1603797573 value is based on sha256(salt + "UkmRecorderInterface1").
constexpr uint32_t kUkmRecorderInterface_AddEntry_Name = 1603797573;
// The 1133429930 value is based on sha256(salt + "UkmRecorderInterface2").
constexpr uint32_t kUkmRecorderInterface_UpdateSourceURL_Name = 1133429930;

}  // namespace internal
}  // namespace mojom
}  // namespace ukm

#endif  // SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_SHARED_MESSAGE_IDS_H_
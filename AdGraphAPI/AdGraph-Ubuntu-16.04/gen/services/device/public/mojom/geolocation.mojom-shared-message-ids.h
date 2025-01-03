// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 354510794 value is based on sha256(salt + "Geolocation1").
constexpr uint32_t kGeolocation_SetHighAccuracy_Name = 354510794;
// The 1737137071 value is based on sha256(salt + "Geolocation2").
constexpr uint32_t kGeolocation_QueryNextPosition_Name = 1737137071;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_SHARED_MESSAGE_IDS_H_
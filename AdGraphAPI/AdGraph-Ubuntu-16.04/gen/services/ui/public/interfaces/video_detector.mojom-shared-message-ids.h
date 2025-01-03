// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_VIDEO_DETECTOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_UI_PUBLIC_INTERFACES_VIDEO_DETECTOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ui {
namespace mojom {

namespace internal {


// The 353635380 value is based on sha256(salt + "VideoDetector1").
constexpr uint32_t kVideoDetector_AddObserver_Name = 353635380;

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_VIDEO_DETECTOR_MOJOM_SHARED_MESSAGE_IDS_H_
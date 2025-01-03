// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_PRODUCER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_PRODUCER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace video_capture {
namespace mojom {

namespace internal {


// The 1801450093 value is based on sha256(salt + "Producer1").
constexpr uint32_t kProducer_OnNewBufferHandle_Name = 1801450093;
// The 964529519 value is based on sha256(salt + "Producer2").
constexpr uint32_t kProducer_OnBufferRetired_Name = 964529519;

}  // namespace internal
}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_PRODUCER_MOJOM_SHARED_MESSAGE_IDS_H_
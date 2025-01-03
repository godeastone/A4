// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_FULLSCREEN_VIDEO_ELEMENT_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_PUBLIC_COMMON_FULLSCREEN_VIDEO_ELEMENT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 1148376073 value is based on sha256(salt + "FullscreenVideoElementHandler1").
constexpr uint32_t kFullscreenVideoElementHandler_RequestFullscreenVideoElement_Name = 1148376073;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_FULLSCREEN_VIDEO_ELEMENT_MOJOM_SHARED_MESSAGE_IDS_H_
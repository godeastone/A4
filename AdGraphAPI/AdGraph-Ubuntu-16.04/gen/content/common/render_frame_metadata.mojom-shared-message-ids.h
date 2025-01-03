// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDER_FRAME_METADATA_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_RENDER_FRAME_METADATA_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 14184734 value is based on sha256(salt + "RenderFrameMetadataObserver1").
constexpr uint32_t kRenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Name = 14184734;
// The 1549248053 value is based on sha256(salt + "RenderFrameMetadataObserverClient1").
constexpr uint32_t kRenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Name = 1549248053;
// The 1084409284 value is based on sha256(salt + "RenderFrameMetadataObserverClient2").
constexpr uint32_t kRenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Name = 1084409284;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_RENDER_FRAME_METADATA_MOJOM_SHARED_MESSAGE_IDS_H_
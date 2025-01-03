// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_FRAME_SINK_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_FRAME_SINK_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 418802276 value is based on sha256(salt + "FrameSinkProvider1").
constexpr uint32_t kFrameSinkProvider_CreateForWidget_Name = 418802276;
// The 1691736101 value is based on sha256(salt + "FrameSinkProvider2").
constexpr uint32_t kFrameSinkProvider_RegisterRenderFrameMetadataObserver_Name = 1691736101;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_FRAME_SINK_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_
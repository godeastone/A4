// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 907963136 value is based on sha256(salt + "EmbeddedFrameSinkClient1").
constexpr uint32_t kEmbeddedFrameSinkClient_OnFirstSurfaceActivation_Name = 907963136;
// The 1401821348 value is based on sha256(salt + "EmbeddedFrameSinkProvider1").
constexpr uint32_t kEmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Name = 1401821348;
// The 1114417450 value is based on sha256(salt + "EmbeddedFrameSinkProvider2").
constexpr uint32_t kEmbeddedFrameSinkProvider_CreateCompositorFrameSink_Name = 1114417450;
// The 596060983 value is based on sha256(salt + "EmbeddedFrameSinkProvider3").
constexpr uint32_t kEmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Name = 596060983;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_
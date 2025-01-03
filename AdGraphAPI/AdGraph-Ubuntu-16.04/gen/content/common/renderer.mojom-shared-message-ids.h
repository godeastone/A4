// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDERER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_RENDERER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 296950658 value is based on sha256(salt + "Renderer1").
constexpr uint32_t kRenderer_CreateEmbedderRendererService_Name = 296950658;
// The 1962837039 value is based on sha256(salt + "Renderer2").
constexpr uint32_t kRenderer_CreateView_Name = 1962837039;
// The 101082141 value is based on sha256(salt + "Renderer3").
constexpr uint32_t kRenderer_CreateFrame_Name = 101082141;
// The 985547464 value is based on sha256(salt + "Renderer4").
constexpr uint32_t kRenderer_CreateFrameProxy_Name = 985547464;
// The 174756234 value is based on sha256(salt + "Renderer5").
constexpr uint32_t kRenderer_SetUpEmbeddedWorkerChannelForServiceWorker_Name = 174756234;
// The 987545218 value is based on sha256(salt + "Renderer6").
constexpr uint32_t kRenderer_OnNetworkConnectionChanged_Name = 987545218;
// The 572050759 value is based on sha256(salt + "Renderer7").
constexpr uint32_t kRenderer_OnNetworkQualityChanged_Name = 572050759;
// The 980133610 value is based on sha256(salt + "Renderer8").
constexpr uint32_t kRenderer_SetWebKitSharedTimersSuspended_Name = 980133610;
// The 884936316 value is based on sha256(salt + "Renderer9").
constexpr uint32_t kRenderer_SetUserAgent_Name = 884936316;
// The 1064927645 value is based on sha256(salt + "Renderer10").
constexpr uint32_t kRenderer_UpdateScrollbarTheme_Name = 1064927645;
// The 894354328 value is based on sha256(salt + "Renderer11").
constexpr uint32_t kRenderer_OnSystemColorsChanged_Name = 894354328;
// The 393975167 value is based on sha256(salt + "Renderer12").
constexpr uint32_t kRenderer_PurgePluginListCache_Name = 393975167;
// The 1502247587 value is based on sha256(salt + "Renderer13").
constexpr uint32_t kRenderer_SetProcessBackgrounded_Name = 1502247587;
// The 2094366040 value is based on sha256(salt + "Renderer14").
constexpr uint32_t kRenderer_SetSchedulerKeepActive_Name = 2094366040;
// The 1602097415 value is based on sha256(salt + "Renderer15").
constexpr uint32_t kRenderer_ProcessPurgeAndSuspend_Name = 1602097415;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_RENDERER_MOJOM_SHARED_MESSAGE_IDS_H_
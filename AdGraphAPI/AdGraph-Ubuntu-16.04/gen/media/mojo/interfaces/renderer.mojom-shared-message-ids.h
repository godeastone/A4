// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 296950658 value is based on sha256(salt + "Renderer1").
constexpr uint32_t kRenderer_Initialize_Name = 296950658;
// The 1962837039 value is based on sha256(salt + "Renderer2").
constexpr uint32_t kRenderer_Flush_Name = 1962837039;
// The 101082141 value is based on sha256(salt + "Renderer3").
constexpr uint32_t kRenderer_StartPlayingFrom_Name = 101082141;
// The 985547464 value is based on sha256(salt + "Renderer4").
constexpr uint32_t kRenderer_SetPlaybackRate_Name = 985547464;
// The 174756234 value is based on sha256(salt + "Renderer5").
constexpr uint32_t kRenderer_SetVolume_Name = 174756234;
// The 987545218 value is based on sha256(salt + "Renderer6").
constexpr uint32_t kRenderer_SetCdm_Name = 987545218;
// The 572050759 value is based on sha256(salt + "Renderer7").
constexpr uint32_t kRenderer_InitiateScopedSurfaceRequest_Name = 572050759;
// The 1484955645 value is based on sha256(salt + "RendererClient1").
constexpr uint32_t kRendererClient_OnTimeUpdate_Name = 1484955645;
// The 413926226 value is based on sha256(salt + "RendererClient2").
constexpr uint32_t kRendererClient_OnBufferingStateChange_Name = 413926226;
// The 96463507 value is based on sha256(salt + "RendererClient3").
constexpr uint32_t kRendererClient_OnEnded_Name = 96463507;
// The 1069495139 value is based on sha256(salt + "RendererClient4").
constexpr uint32_t kRendererClient_OnError_Name = 1069495139;
// The 890155742 value is based on sha256(salt + "RendererClient5").
constexpr uint32_t kRendererClient_OnAudioConfigChange_Name = 890155742;
// The 969957719 value is based on sha256(salt + "RendererClient6").
constexpr uint32_t kRendererClient_OnVideoConfigChange_Name = 969957719;
// The 2052726994 value is based on sha256(salt + "RendererClient7").
constexpr uint32_t kRendererClient_OnVideoNaturalSizeChange_Name = 2052726994;
// The 1275365027 value is based on sha256(salt + "RendererClient8").
constexpr uint32_t kRendererClient_OnVideoOpacityChange_Name = 1275365027;
// The 1159474325 value is based on sha256(salt + "RendererClient9").
constexpr uint32_t kRendererClient_OnStatisticsUpdate_Name = 1159474325;
// The 394327158 value is based on sha256(salt + "RendererClient10").
constexpr uint32_t kRendererClient_OnWaitingForDecryptionKey_Name = 394327158;
// The 1325767083 value is based on sha256(salt + "RendererClient11").
constexpr uint32_t kRendererClient_OnDurationChange_Name = 1325767083;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_SHARED_MESSAGE_IDS_H_
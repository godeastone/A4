// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MEDIA_RENDERER_AUDIO_INPUT_STREAM_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_MEDIA_RENDERER_AUDIO_INPUT_STREAM_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 2121011958 value is based on sha256(salt + "RendererAudioInputStreamFactory1").
constexpr uint32_t kRendererAudioInputStreamFactory_CreateStream_Name = 2121011958;
// The 582699031 value is based on sha256(salt + "RendererAudioInputStreamFactory2").
constexpr uint32_t kRendererAudioInputStreamFactory_AssociateInputAndOutputForAec_Name = 582699031;
// The 1796223778 value is based on sha256(salt + "RendererAudioInputStreamFactoryClient1").
constexpr uint32_t kRendererAudioInputStreamFactoryClient_StreamCreated_Name = 1796223778;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_MEDIA_RENDERER_AUDIO_INPUT_STREAM_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_
// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1769738675 value is based on sha256(salt + "AudioDecoder1").
constexpr uint32_t kAudioDecoder_Construct_Name = 1769738675;
// The 2106090477 value is based on sha256(salt + "AudioDecoder2").
constexpr uint32_t kAudioDecoder_Initialize_Name = 2106090477;
// The 1335594844 value is based on sha256(salt + "AudioDecoder3").
constexpr uint32_t kAudioDecoder_SetDataSource_Name = 1335594844;
// The 447208122 value is based on sha256(salt + "AudioDecoder4").
constexpr uint32_t kAudioDecoder_Decode_Name = 447208122;
// The 1150131670 value is based on sha256(salt + "AudioDecoder5").
constexpr uint32_t kAudioDecoder_Reset_Name = 1150131670;
// The 1250656831 value is based on sha256(salt + "AudioDecoderClient1").
constexpr uint32_t kAudioDecoderClient_OnBufferDecoded_Name = 1250656831;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_
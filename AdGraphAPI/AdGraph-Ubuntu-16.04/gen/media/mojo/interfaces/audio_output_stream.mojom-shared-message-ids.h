// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 437081419 value is based on sha256(salt + "AudioOutputStream1").
constexpr uint32_t kAudioOutputStream_Play_Name = 437081419;
// The 933913288 value is based on sha256(salt + "AudioOutputStream2").
constexpr uint32_t kAudioOutputStream_Pause_Name = 933913288;
// The 1793760978 value is based on sha256(salt + "AudioOutputStream3").
constexpr uint32_t kAudioOutputStream_SetVolume_Name = 1793760978;
// The 454246092 value is based on sha256(salt + "AudioOutputStreamObserver1").
constexpr uint32_t kAudioOutputStreamObserver_DidStartPlaying_Name = 454246092;
// The 1986165841 value is based on sha256(salt + "AudioOutputStreamObserver2").
constexpr uint32_t kAudioOutputStreamObserver_DidStopPlaying_Name = 1986165841;
// The 1956798209 value is based on sha256(salt + "AudioOutputStreamObserver3").
constexpr uint32_t kAudioOutputStreamObserver_DidChangeAudibleState_Name = 1956798209;
// The 1597961543 value is based on sha256(salt + "AudioOutputStreamProvider1").
constexpr uint32_t kAudioOutputStreamProvider_Acquire_Name = 1597961543;
// The 760488798 value is based on sha256(salt + "AudioOutputStreamProviderClient1").
constexpr uint32_t kAudioOutputStreamProviderClient_Created_Name = 760488798;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_
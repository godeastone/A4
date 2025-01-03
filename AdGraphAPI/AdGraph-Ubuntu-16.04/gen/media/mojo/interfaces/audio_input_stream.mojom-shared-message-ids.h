// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1723522769 value is based on sha256(salt + "AudioInputStream1").
constexpr uint32_t kAudioInputStream_Record_Name = 1723522769;
// The 1139526211 value is based on sha256(salt + "AudioInputStream2").
constexpr uint32_t kAudioInputStream_SetVolume_Name = 1139526211;
// The 1096152557 value is based on sha256(salt + "AudioInputStreamClient1").
constexpr uint32_t kAudioInputStreamClient_OnError_Name = 1096152557;
// The 322752918 value is based on sha256(salt + "AudioInputStreamClient2").
constexpr uint32_t kAudioInputStreamClient_OnMutedStateChanged_Name = 322752918;
// The 2097739210 value is based on sha256(salt + "AudioInputStreamObserver1").
constexpr uint32_t kAudioInputStreamObserver_DidStartRecording_Name = 2097739210;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_
// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 163423368 value is based on sha256(salt + "AudioLog1").
constexpr uint32_t kAudioLog_OnCreated_Name = 163423368;
// The 763481454 value is based on sha256(salt + "AudioLog2").
constexpr uint32_t kAudioLog_OnStarted_Name = 763481454;
// The 1189307856 value is based on sha256(salt + "AudioLog3").
constexpr uint32_t kAudioLog_OnStopped_Name = 1189307856;
// The 1368237997 value is based on sha256(salt + "AudioLog4").
constexpr uint32_t kAudioLog_OnClosed_Name = 1368237997;
// The 1389821388 value is based on sha256(salt + "AudioLog5").
constexpr uint32_t kAudioLog_OnError_Name = 1389821388;
// The 977495358 value is based on sha256(salt + "AudioLog6").
constexpr uint32_t kAudioLog_OnSetVolume_Name = 977495358;
// The 292270535 value is based on sha256(salt + "AudioLog7").
constexpr uint32_t kAudioLog_OnLogMessage_Name = 292270535;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_SHARED_MESSAGE_IDS_H_
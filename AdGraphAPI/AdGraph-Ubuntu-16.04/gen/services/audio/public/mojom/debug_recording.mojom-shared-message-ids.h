// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_AUDIO_PUBLIC_MOJOM_DEBUG_RECORDING_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_AUDIO_PUBLIC_MOJOM_DEBUG_RECORDING_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace audio {
namespace mojom {

namespace internal {


// The 1200255033 value is based on sha256(salt + "DebugRecordingFileProvider1").
constexpr uint32_t kDebugRecordingFileProvider_CreateWavFile_Name = 1200255033;
// The 1620926225 value is based on sha256(salt + "DebugRecording1").
constexpr uint32_t kDebugRecording_Enable_Name = 1620926225;

}  // namespace internal
}  // namespace mojom
}  // namespace audio

#endif  // SERVICES_AUDIO_PUBLIC_MOJOM_DEBUG_RECORDING_MOJOM_SHARED_MESSAGE_IDS_H_
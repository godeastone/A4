// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 2111182695 value is based on sha256(salt + "WatchTimeRecorder1").
constexpr uint32_t kWatchTimeRecorder_RecordWatchTime_Name = 2111182695;
// The 1165016582 value is based on sha256(salt + "WatchTimeRecorder2").
constexpr uint32_t kWatchTimeRecorder_FinalizeWatchTime_Name = 1165016582;
// The 1807592247 value is based on sha256(salt + "WatchTimeRecorder3").
constexpr uint32_t kWatchTimeRecorder_OnError_Name = 1807592247;
// The 847512903 value is based on sha256(salt + "WatchTimeRecorder4").
constexpr uint32_t kWatchTimeRecorder_SetAudioDecoderName_Name = 847512903;
// The 1207166149 value is based on sha256(salt + "WatchTimeRecorder5").
constexpr uint32_t kWatchTimeRecorder_SetVideoDecoderName_Name = 1207166149;
// The 533543695 value is based on sha256(salt + "WatchTimeRecorder6").
constexpr uint32_t kWatchTimeRecorder_SetAutoplayInitiated_Name = 533543695;
// The 521088931 value is based on sha256(salt + "WatchTimeRecorder7").
constexpr uint32_t kWatchTimeRecorder_UpdateUnderflowCount_Name = 521088931;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_
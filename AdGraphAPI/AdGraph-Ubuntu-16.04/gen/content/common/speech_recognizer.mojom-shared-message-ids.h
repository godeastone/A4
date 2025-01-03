// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SPEECH_RECOGNIZER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_SPEECH_RECOGNIZER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 1112276323 value is based on sha256(salt + "SpeechRecognizer1").
constexpr uint32_t kSpeechRecognizer_Start_Name = 1112276323;
// The 208235390 value is based on sha256(salt + "SpeechRecognitionSession1").
constexpr uint32_t kSpeechRecognitionSession_Abort_Name = 208235390;
// The 614695475 value is based on sha256(salt + "SpeechRecognitionSession2").
constexpr uint32_t kSpeechRecognitionSession_StopCapture_Name = 614695475;
// The 925058473 value is based on sha256(salt + "SpeechRecognitionSessionClient1").
constexpr uint32_t kSpeechRecognitionSessionClient_ResultRetrieved_Name = 925058473;
// The 382565794 value is based on sha256(salt + "SpeechRecognitionSessionClient2").
constexpr uint32_t kSpeechRecognitionSessionClient_ErrorOccurred_Name = 382565794;
// The 1107795139 value is based on sha256(salt + "SpeechRecognitionSessionClient3").
constexpr uint32_t kSpeechRecognitionSessionClient_Started_Name = 1107795139;
// The 1602696408 value is based on sha256(salt + "SpeechRecognitionSessionClient4").
constexpr uint32_t kSpeechRecognitionSessionClient_AudioStarted_Name = 1602696408;
// The 1999547659 value is based on sha256(salt + "SpeechRecognitionSessionClient5").
constexpr uint32_t kSpeechRecognitionSessionClient_SoundStarted_Name = 1999547659;
// The 1423694472 value is based on sha256(salt + "SpeechRecognitionSessionClient6").
constexpr uint32_t kSpeechRecognitionSessionClient_SoundEnded_Name = 1423694472;
// The 1470469694 value is based on sha256(salt + "SpeechRecognitionSessionClient7").
constexpr uint32_t kSpeechRecognitionSessionClient_AudioEnded_Name = 1470469694;
// The 1569023186 value is based on sha256(salt + "SpeechRecognitionSessionClient8").
constexpr uint32_t kSpeechRecognitionSessionClient_Ended_Name = 1569023186;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SPEECH_RECOGNIZER_MOJOM_SHARED_MESSAGE_IDS_H_
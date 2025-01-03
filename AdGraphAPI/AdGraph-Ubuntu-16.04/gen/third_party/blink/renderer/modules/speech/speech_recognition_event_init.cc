// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/speech/speech_recognition_event_init.h"

#include "third_party/blink/renderer/modules/speech/speech_recognition_result_list.h"

namespace blink {

SpeechRecognitionEventInit::SpeechRecognitionEventInit() {
}

SpeechRecognitionEventInit::~SpeechRecognitionEventInit() {}

SpeechRecognitionEventInit::SpeechRecognitionEventInit(const SpeechRecognitionEventInit&) = default;

SpeechRecognitionEventInit& SpeechRecognitionEventInit::operator=(const SpeechRecognitionEventInit&) = default;

void SpeechRecognitionEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(results_);
  EventInit::Trace(visitor);
}

}  // namespace blink

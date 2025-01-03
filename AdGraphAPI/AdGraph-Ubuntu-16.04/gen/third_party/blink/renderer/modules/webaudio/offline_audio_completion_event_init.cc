// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/webaudio/offline_audio_completion_event_init.h"

#include "third_party/blink/renderer/modules/webaudio/audio_buffer.h"

namespace blink {

OfflineAudioCompletionEventInit::OfflineAudioCompletionEventInit() {
}

OfflineAudioCompletionEventInit::~OfflineAudioCompletionEventInit() {}

OfflineAudioCompletionEventInit::OfflineAudioCompletionEventInit(const OfflineAudioCompletionEventInit&) = default;

OfflineAudioCompletionEventInit& OfflineAudioCompletionEventInit::operator=(const OfflineAudioCompletionEventInit&) = default;

void OfflineAudioCompletionEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(rendered_buffer_);
  EventInit::Trace(visitor);
}

}  // namespace blink

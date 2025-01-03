// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/media_capabilities/media_configuration.h"

namespace blink {

MediaConfiguration::MediaConfiguration() {
}

MediaConfiguration::~MediaConfiguration() {}

MediaConfiguration::MediaConfiguration(const MediaConfiguration&) = default;

MediaConfiguration& MediaConfiguration::operator=(const MediaConfiguration&) = default;

void MediaConfiguration::setAudio(const AudioConfiguration& value) {
  audio_ = value;
  has_audio_ = true;
}

void MediaConfiguration::setVideo(const VideoConfiguration& value) {
  video_ = value;
  has_video_ = true;
}

void MediaConfiguration::Trace(blink::Visitor* visitor) {
  visitor->Trace(audio_);
  visitor->Trace(video_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink

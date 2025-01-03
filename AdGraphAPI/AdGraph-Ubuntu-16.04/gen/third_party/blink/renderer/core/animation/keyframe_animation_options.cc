// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/animation/keyframe_animation_options.h"

namespace blink {

KeyframeAnimationOptions::KeyframeAnimationOptions() {
  setId(WTF::g_empty_string);
}

KeyframeAnimationOptions::~KeyframeAnimationOptions() {}

KeyframeAnimationOptions::KeyframeAnimationOptions(const KeyframeAnimationOptions&) = default;

KeyframeAnimationOptions& KeyframeAnimationOptions::operator=(const KeyframeAnimationOptions&) = default;

void KeyframeAnimationOptions::Trace(blink::Visitor* visitor) {
  KeyframeEffectOptions::Trace(visitor);
}

}  // namespace blink
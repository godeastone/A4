// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/events/animation_event_init.h"

namespace blink {

AnimationEventInit::AnimationEventInit() {
  setAnimationName(WTF::g_empty_string);
  setElapsedTime(0);
  setPseudoElement(WTF::g_empty_string);
}

AnimationEventInit::~AnimationEventInit() {}

AnimationEventInit::AnimationEventInit(const AnimationEventInit&) = default;

AnimationEventInit& AnimationEventInit::operator=(const AnimationEventInit&) = default;

void AnimationEventInit::Trace(blink::Visitor* visitor) {
  EventInit::Trace(visitor);
}

}  // namespace blink

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/dom/events/add_event_listener_options.h"

namespace blink {

AddEventListenerOptions::AddEventListenerOptions() {
  setOnce(false);
}

AddEventListenerOptions::~AddEventListenerOptions() {}

AddEventListenerOptions::AddEventListenerOptions(const AddEventListenerOptions&) = default;

AddEventListenerOptions& AddEventListenerOptions::operator=(const AddEventListenerOptions&) = default;

void AddEventListenerOptions::Trace(blink::Visitor* visitor) {
  EventListenerOptions::Trace(visitor);
}

}  // namespace blink

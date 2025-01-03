// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/notifications/notification_options.h"

namespace blink {

NotificationOptions::NotificationOptions() {
  setActions(HeapVector<NotificationAction>());
  setBody(WTF::g_empty_string);
  setDir("auto");
  setLang(WTF::g_empty_string);
  setRenotify(false);
  setRequireInteraction(false);
  setSilent(false);
  setTag(WTF::g_empty_string);
}

NotificationOptions::~NotificationOptions() {}

NotificationOptions::NotificationOptions(const NotificationOptions&) = default;

NotificationOptions& NotificationOptions::operator=(const NotificationOptions&) = default;

void NotificationOptions::setActions(const HeapVector<NotificationAction>& value) {
  actions_ = value;
  has_actions_ = true;
}

void NotificationOptions::setData(ScriptValue value) {
  data_ = value;
}

void NotificationOptions::setVibrate(const UnsignedLongOrUnsignedLongSequence& value) {
  vibrate_ = value;
}

void NotificationOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(actions_);
  visitor->Trace(vibrate_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink

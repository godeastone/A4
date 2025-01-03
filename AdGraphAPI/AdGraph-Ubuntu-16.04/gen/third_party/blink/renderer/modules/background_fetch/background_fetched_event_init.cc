// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/background_fetch/background_fetched_event_init.h"

#include "third_party/blink/renderer/modules/background_fetch/background_fetch_settled_fetch.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

BackgroundFetchedEventInit::BackgroundFetchedEventInit() {
}

BackgroundFetchedEventInit::~BackgroundFetchedEventInit() {}

BackgroundFetchedEventInit::BackgroundFetchedEventInit(const BackgroundFetchedEventInit&) = default;

BackgroundFetchedEventInit& BackgroundFetchedEventInit::operator=(const BackgroundFetchedEventInit&) = default;

void BackgroundFetchedEventInit::setFetches(const HeapVector<Member<BackgroundFetchSettledFetch>>& value) {
  fetches_ = value;
  has_fetches_ = true;
}

void BackgroundFetchedEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(fetches_);
  BackgroundFetchEventInit::Trace(visitor);
}

}  // namespace blink

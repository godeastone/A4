// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef BackgroundFetchSettledEventInit_h
#define BackgroundFetchSettledEventInit_h

#include "third_party/blink/renderer/modules/background_fetch/background_fetch_event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class BackgroundFetchSettledFetches;

class MODULES_EXPORT BackgroundFetchSettledEventInit : public BackgroundFetchEventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  BackgroundFetchSettledEventInit();
  virtual ~BackgroundFetchSettledEventInit();
  BackgroundFetchSettledEventInit(const BackgroundFetchSettledEventInit&);
  BackgroundFetchSettledEventInit& operator=(const BackgroundFetchSettledEventInit&);

  bool hasFetches() const { return fetches_; }
  BackgroundFetchSettledFetches* fetches() const {
    return fetches_;
  }
  inline void setFetches(BackgroundFetchSettledFetches*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<BackgroundFetchSettledFetches> fetches_;

  friend class V8BackgroundFetchSettledEventInit;
};

void BackgroundFetchSettledEventInit::setFetches(BackgroundFetchSettledFetches* value) {
  fetches_ = value;
}

}  // namespace blink

#endif  // BackgroundFetchSettledEventInit_h

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef BackgroundFetchFailEventInit_h
#define BackgroundFetchFailEventInit_h

#include "third_party/blink/renderer/modules/background_fetch/background_fetch_event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class BackgroundFetchSettledFetch;

class MODULES_EXPORT BackgroundFetchFailEventInit : public BackgroundFetchEventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  BackgroundFetchFailEventInit();
  virtual ~BackgroundFetchFailEventInit();
  BackgroundFetchFailEventInit(const BackgroundFetchFailEventInit&);
  BackgroundFetchFailEventInit& operator=(const BackgroundFetchFailEventInit&);

  bool hasFetches() const { return has_fetches_; }
  const HeapVector<Member<BackgroundFetchSettledFetch>>& fetches() const {
    DCHECK(has_fetches_);
    return fetches_;
  }
  void setFetches(const HeapVector<Member<BackgroundFetchSettledFetch>>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_fetches_ = false;

  HeapVector<Member<BackgroundFetchSettledFetch>> fetches_;

  friend class V8BackgroundFetchFailEventInit;
};

}  // namespace blink

#endif  // BackgroundFetchFailEventInit_h

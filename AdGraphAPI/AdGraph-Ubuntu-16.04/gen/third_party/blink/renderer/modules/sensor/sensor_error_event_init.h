// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef SensorErrorEventInit_h
#define SensorErrorEventInit_h

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class DOMException;

class MODULES_EXPORT SensorErrorEventInit : public EventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  SensorErrorEventInit();
  virtual ~SensorErrorEventInit();
  SensorErrorEventInit(const SensorErrorEventInit&);
  SensorErrorEventInit& operator=(const SensorErrorEventInit&);

  bool hasError() const { return error_; }
  DOMException* error() const {
    return error_;
  }
  inline void setError(DOMException*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<DOMException> error_;

  friend class V8SensorErrorEventInit;
};

void SensorErrorEventInit::setError(DOMException* value) {
  error_ = value;
}

}  // namespace blink

#endif  // SensorErrorEventInit_h

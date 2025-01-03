// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef CustomEventInit_h
#define CustomEventInit_h

#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT CustomEventInit : public EventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  CustomEventInit();
  virtual ~CustomEventInit();
  CustomEventInit(const CustomEventInit&);
  CustomEventInit& operator=(const CustomEventInit&);

  bool hasDetail() const { return !(detail_.IsEmpty() || detail_.IsUndefined()); }
  ScriptValue detail() const {
    return detail_;
  }
  void setDetail(ScriptValue);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  ScriptValue detail_;

  friend class V8CustomEventInit;
};

}  // namespace blink

#endif  // CustomEventInit_h

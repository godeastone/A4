// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef RTCDTMFToneChangeEventInit_h
#define RTCDTMFToneChangeEventInit_h

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT RTCDTMFToneChangeEventInit : public EventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  RTCDTMFToneChangeEventInit();
  virtual ~RTCDTMFToneChangeEventInit();
  RTCDTMFToneChangeEventInit(const RTCDTMFToneChangeEventInit&);
  RTCDTMFToneChangeEventInit& operator=(const RTCDTMFToneChangeEventInit&);

  bool hasTone() const { return !tone_.IsNull(); }
  const String& tone() const {
    return tone_;
  }
  inline void setTone(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String tone_;

  friend class V8RTCDTMFToneChangeEventInit;
};

void RTCDTMFToneChangeEventInit::setTone(const String& value) {
  tone_ = value;
}

}  // namespace blink

#endif  // RTCDTMFToneChangeEventInit_h

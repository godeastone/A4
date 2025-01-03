// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef VRDisplayEventInit_h
#define VRDisplayEventInit_h

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class VRDisplay;

class MODULES_EXPORT VRDisplayEventInit : public EventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  VRDisplayEventInit();
  virtual ~VRDisplayEventInit();
  VRDisplayEventInit(const VRDisplayEventInit&);
  VRDisplayEventInit& operator=(const VRDisplayEventInit&);

  bool hasDisplay() const { return display_; }
  VRDisplay* display() const {
    return display_;
  }
  inline void setDisplay(VRDisplay*);
  inline void setDisplayToNull();

  bool hasReason() const { return !reason_.IsNull(); }
  const String& reason() const {
    return reason_;
  }
  inline void setReason(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<VRDisplay> display_;
  String reason_;

  friend class V8VRDisplayEventInit;
};

void VRDisplayEventInit::setDisplay(VRDisplay* value) {
  display_ = value;
}
void VRDisplayEventInit::setDisplayToNull() {
  display_ = Member<VRDisplay>();
}

void VRDisplayEventInit::setReason(const String& value) {
  reason_ = value;
}

}  // namespace blink

#endif  // VRDisplayEventInit_h

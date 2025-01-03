// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef FocusEventInit_h
#define FocusEventInit_h

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/events/ui_event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class EventTarget;

class CORE_EXPORT FocusEventInit : public UIEventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  FocusEventInit();
  virtual ~FocusEventInit();
  FocusEventInit(const FocusEventInit&);
  FocusEventInit& operator=(const FocusEventInit&);

  bool hasRelatedTarget() const { return related_target_; }
  EventTarget* relatedTarget() const {
    return related_target_;
  }
  inline void setRelatedTarget(EventTarget*);
  inline void setRelatedTargetToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<EventTarget> related_target_;

  friend class V8FocusEventInit;
};

void FocusEventInit::setRelatedTarget(EventTarget* value) {
  related_target_ = value;
}
void FocusEventInit::setRelatedTargetToNull() {
  related_target_ = Member<EventTarget>();
}

}  // namespace blink

#endif  // FocusEventInit_h

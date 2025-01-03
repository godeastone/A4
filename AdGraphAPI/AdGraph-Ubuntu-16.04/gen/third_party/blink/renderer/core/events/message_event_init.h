// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef MessageEventInit_h
#define MessageEventInit_h

#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class EventTarget;
class MessagePort;

class CORE_EXPORT MessageEventInit : public EventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  MessageEventInit();
  virtual ~MessageEventInit();
  MessageEventInit(const MessageEventInit&);
  MessageEventInit& operator=(const MessageEventInit&);

  bool hasData() const { return !(data_.IsEmpty() || data_.IsUndefined()); }
  ScriptValue data() const {
    return data_;
  }
  void setData(ScriptValue);

  bool hasLastEventId() const { return !last_event_id_.IsNull(); }
  const String& lastEventId() const {
    return last_event_id_;
  }
  inline void setLastEventId(const String&);

  bool hasOrigin() const { return !origin_.IsNull(); }
  const String& origin() const {
    return origin_;
  }
  inline void setOrigin(const String&);

  bool hasPorts() const { return has_ports_; }
  const HeapVector<Member<MessagePort>>& ports() const {
    DCHECK(has_ports_);
    return ports_;
  }
  void setPorts(const HeapVector<Member<MessagePort>>&);

  bool hasSource() const { return source_; }
  EventTarget* source() const {
    return source_;
  }
  inline void setSource(EventTarget*);
  inline void setSourceToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_ports_ = false;

  ScriptValue data_;
  String last_event_id_;
  String origin_;
  HeapVector<Member<MessagePort>> ports_;
  Member<EventTarget> source_;

  friend class V8MessageEventInit;
};

void MessageEventInit::setLastEventId(const String& value) {
  last_event_id_ = value;
}

void MessageEventInit::setOrigin(const String& value) {
  origin_ = value;
}

void MessageEventInit::setSource(EventTarget* value) {
  source_ = value;
}
void MessageEventInit::setSourceToNull() {
  source_ = Member<EventTarget>();
}

}  // namespace blink

#endif  // MessageEventInit_h

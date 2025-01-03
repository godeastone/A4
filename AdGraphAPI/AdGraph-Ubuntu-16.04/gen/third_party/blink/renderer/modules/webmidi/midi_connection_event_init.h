// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef MIDIConnectionEventInit_h
#define MIDIConnectionEventInit_h

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MIDIPort;

class MODULES_EXPORT MIDIConnectionEventInit : public EventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  MIDIConnectionEventInit();
  virtual ~MIDIConnectionEventInit();
  MIDIConnectionEventInit(const MIDIConnectionEventInit&);
  MIDIConnectionEventInit& operator=(const MIDIConnectionEventInit&);

  bool hasPort() const { return port_; }
  MIDIPort* port() const {
    return port_;
  }
  inline void setPort(MIDIPort*);
  inline void setPortToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<MIDIPort> port_;

  friend class V8MIDIConnectionEventInit;
};

void MIDIConnectionEventInit::setPort(MIDIPort* value) {
  port_ = value;
}
void MIDIConnectionEventInit::setPortToNull() {
  port_ = Member<MIDIPort>();
}

}  // namespace blink

#endif  // MIDIConnectionEventInit_h

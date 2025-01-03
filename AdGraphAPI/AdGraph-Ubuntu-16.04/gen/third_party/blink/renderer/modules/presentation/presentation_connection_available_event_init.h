// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef PresentationConnectionAvailableEventInit_h
#define PresentationConnectionAvailableEventInit_h

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class PresentationConnection;

class MODULES_EXPORT PresentationConnectionAvailableEventInit : public EventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  PresentationConnectionAvailableEventInit();
  virtual ~PresentationConnectionAvailableEventInit();
  PresentationConnectionAvailableEventInit(const PresentationConnectionAvailableEventInit&);
  PresentationConnectionAvailableEventInit& operator=(const PresentationConnectionAvailableEventInit&);

  bool hasConnection() const { return connection_; }
  PresentationConnection* connection() const {
    return connection_;
  }
  inline void setConnection(PresentationConnection*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<PresentationConnection> connection_;

  friend class V8PresentationConnectionAvailableEventInit;
};

void PresentationConnectionAvailableEventInit::setConnection(PresentationConnection* value) {
  connection_ = value;
}

}  // namespace blink

#endif  // PresentationConnectionAvailableEventInit_h

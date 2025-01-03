// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef RTCPeerConnectionIceEventInit_h
#define RTCPeerConnectionIceEventInit_h

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class RTCIceCandidate;

class MODULES_EXPORT RTCPeerConnectionIceEventInit : public EventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  RTCPeerConnectionIceEventInit();
  virtual ~RTCPeerConnectionIceEventInit();
  RTCPeerConnectionIceEventInit(const RTCPeerConnectionIceEventInit&);
  RTCPeerConnectionIceEventInit& operator=(const RTCPeerConnectionIceEventInit&);

  bool hasCandidate() const { return candidate_; }
  RTCIceCandidate* candidate() const {
    return candidate_;
  }
  inline void setCandidate(RTCIceCandidate*);
  inline void setCandidateToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<RTCIceCandidate> candidate_;

  friend class V8RTCPeerConnectionIceEventInit;
};

void RTCPeerConnectionIceEventInit::setCandidate(RTCIceCandidate* value) {
  candidate_ = value;
}
void RTCPeerConnectionIceEventInit::setCandidateToNull() {
  candidate_ = Member<RTCIceCandidate>();
}

}  // namespace blink

#endif  // RTCPeerConnectionIceEventInit_h

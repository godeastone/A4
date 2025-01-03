// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef RTCDataChannelEventInit_h
#define RTCDataChannelEventInit_h

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class RTCDataChannel;

class MODULES_EXPORT RTCDataChannelEventInit : public EventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  RTCDataChannelEventInit();
  virtual ~RTCDataChannelEventInit();
  RTCDataChannelEventInit(const RTCDataChannelEventInit&);
  RTCDataChannelEventInit& operator=(const RTCDataChannelEventInit&);

  bool hasChannel() const { return channel_; }
  RTCDataChannel* channel() const {
    return channel_;
  }
  inline void setChannel(RTCDataChannel*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<RTCDataChannel> channel_;

  friend class V8RTCDataChannelEventInit;
};

void RTCDataChannelEventInit::setChannel(RTCDataChannel* value) {
  channel_ = value;
}

}  // namespace blink

#endif  // RTCDataChannelEventInit_h

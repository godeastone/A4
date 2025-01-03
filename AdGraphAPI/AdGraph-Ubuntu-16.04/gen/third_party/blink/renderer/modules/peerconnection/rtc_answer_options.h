// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef RTCAnswerOptions_h
#define RTCAnswerOptions_h

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/peerconnection/rtc_offer_answer_options.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT RTCAnswerOptions : public RTCOfferAnswerOptions {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  RTCAnswerOptions();
  virtual ~RTCAnswerOptions();
  RTCAnswerOptions(const RTCAnswerOptions&);
  RTCAnswerOptions& operator=(const RTCAnswerOptions&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  friend class V8RTCAnswerOptions;
};

}  // namespace blink

#endif  // RTCAnswerOptions_h

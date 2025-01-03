// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef RTCOfferAnswerOptions_h
#define RTCOfferAnswerOptions_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT RTCOfferAnswerOptions : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  RTCOfferAnswerOptions();
  virtual ~RTCOfferAnswerOptions();
  RTCOfferAnswerOptions(const RTCOfferAnswerOptions&);
  RTCOfferAnswerOptions& operator=(const RTCOfferAnswerOptions&);

  bool hasVoiceActivityDetection() const { return has_voice_activity_detection_; }
  bool voiceActivityDetection() const {
    DCHECK(has_voice_activity_detection_);
    return voice_activity_detection_;
  }
  inline void setVoiceActivityDetection(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_voice_activity_detection_ = false;

  bool voice_activity_detection_;

  friend class V8RTCOfferAnswerOptions;
};

void RTCOfferAnswerOptions::setVoiceActivityDetection(bool value) {
  voice_activity_detection_ = value;
  has_voice_activity_detection_ = true;
}

}  // namespace blink

#endif  // RTCOfferAnswerOptions_h

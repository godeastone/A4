// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef RTCRtpEncodingParameters_h
#define RTCRtpEncodingParameters_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT RTCRtpEncodingParameters : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  RTCRtpEncodingParameters();
  virtual ~RTCRtpEncodingParameters();
  RTCRtpEncodingParameters(const RTCRtpEncodingParameters&);
  RTCRtpEncodingParameters& operator=(const RTCRtpEncodingParameters&);

  bool hasActive() const { return has_active_; }
  bool active() const {
    DCHECK(has_active_);
    return active_;
  }
  inline void setActive(bool);

  bool hasMaxBitrate() const { return has_max_bitrate_; }
  uint32_t maxBitrate() const {
    DCHECK(has_max_bitrate_);
    return max_bitrate_;
  }
  inline void setMaxBitrate(uint32_t);

  bool hasPriority() const { return !priority_.IsNull(); }
  const String& priority() const {
    return priority_;
  }
  inline void setPriority(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_active_ = false;
  bool has_max_bitrate_ = false;

  bool active_;
  uint32_t max_bitrate_;
  String priority_;

  friend class V8RTCRtpEncodingParameters;
};

void RTCRtpEncodingParameters::setActive(bool value) {
  active_ = value;
  has_active_ = true;
}

void RTCRtpEncodingParameters::setMaxBitrate(uint32_t value) {
  max_bitrate_ = value;
  has_max_bitrate_ = true;
}

void RTCRtpEncodingParameters::setPriority(const String& value) {
  priority_ = value;
}

}  // namespace blink

#endif  // RTCRtpEncodingParameters_h

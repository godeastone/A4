// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef RTCIceCandidateInit_h
#define RTCIceCandidateInit_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT RTCIceCandidateInit : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  RTCIceCandidateInit();
  virtual ~RTCIceCandidateInit();
  RTCIceCandidateInit(const RTCIceCandidateInit&);
  RTCIceCandidateInit& operator=(const RTCIceCandidateInit&);

  bool hasCandidate() const { return !candidate_.IsNull(); }
  const String& candidate() const {
    return candidate_;
  }
  inline void setCandidate(const String&);

  bool hasSdpMLineIndex() const { return has_sdp_m_line_index_; }
  uint16_t sdpMLineIndex() const {
    DCHECK(has_sdp_m_line_index_);
    return sdp_m_line_index_;
  }
  inline void setSdpMLineIndex(uint16_t);

  bool hasSdpMid() const { return !sdp_mid_.IsNull(); }
  const String& sdpMid() const {
    return sdp_mid_;
  }
  inline void setSdpMid(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_sdp_m_line_index_ = false;

  String candidate_;
  uint16_t sdp_m_line_index_;
  String sdp_mid_;

  friend class V8RTCIceCandidateInit;
};

void RTCIceCandidateInit::setCandidate(const String& value) {
  candidate_ = value;
}

void RTCIceCandidateInit::setSdpMLineIndex(uint16_t value) {
  sdp_m_line_index_ = value;
  has_sdp_m_line_index_ = true;
}

void RTCIceCandidateInit::setSdpMid(const String& value) {
  sdp_mid_ = value;
}

}  // namespace blink

#endif  // RTCIceCandidateInit_h

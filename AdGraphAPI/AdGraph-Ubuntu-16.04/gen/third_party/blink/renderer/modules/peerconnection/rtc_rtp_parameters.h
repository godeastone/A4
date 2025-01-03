// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef RTCRtpParameters_h
#define RTCRtpParameters_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/peerconnection/rtc_rtp_codec_parameters.h"
#include "third_party/blink/renderer/modules/peerconnection/rtc_rtp_encoding_parameters.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT RTCRtpParameters : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  RTCRtpParameters();
  virtual ~RTCRtpParameters();
  RTCRtpParameters(const RTCRtpParameters&);
  RTCRtpParameters& operator=(const RTCRtpParameters&);

  bool hasCodecs() const { return has_codecs_; }
  const HeapVector<RTCRtpCodecParameters>& codecs() const {
    DCHECK(has_codecs_);
    return codecs_;
  }
  void setCodecs(const HeapVector<RTCRtpCodecParameters>&);

  bool hasEncodings() const { return has_encodings_; }
  const HeapVector<RTCRtpEncodingParameters>& encodings() const {
    DCHECK(has_encodings_);
    return encodings_;
  }
  void setEncodings(const HeapVector<RTCRtpEncodingParameters>&);

  bool hasTransactionId() const { return !transaction_id_.IsNull(); }
  const String& transactionId() const {
    return transaction_id_;
  }
  inline void setTransactionId(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_codecs_ = false;
  bool has_encodings_ = false;

  HeapVector<RTCRtpCodecParameters> codecs_;
  HeapVector<RTCRtpEncodingParameters> encodings_;
  String transaction_id_;

  friend class V8RTCRtpParameters;
};

void RTCRtpParameters::setTransactionId(const String& value) {
  transaction_id_ = value;
}

}  // namespace blink

#endif  // RTCRtpParameters_h

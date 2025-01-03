// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/peerconnection/rtc_rtp_parameters.h"

namespace blink {

RTCRtpParameters::RTCRtpParameters() {
}

RTCRtpParameters::~RTCRtpParameters() {}

RTCRtpParameters::RTCRtpParameters(const RTCRtpParameters&) = default;

RTCRtpParameters& RTCRtpParameters::operator=(const RTCRtpParameters&) = default;

void RTCRtpParameters::setCodecs(const HeapVector<RTCRtpCodecParameters>& value) {
  codecs_ = value;
  has_codecs_ = true;
}

void RTCRtpParameters::setEncodings(const HeapVector<RTCRtpEncodingParameters>& value) {
  encodings_ = value;
  has_encodings_ = true;
}

void RTCRtpParameters::Trace(blink::Visitor* visitor) {
  visitor->Trace(codecs_);
  visitor->Trace(encodings_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef RTCConfiguration_h
#define RTCConfiguration_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/peerconnection/rtc_ice_server.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class RTCCertificate;

class MODULES_EXPORT RTCConfiguration : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  RTCConfiguration();
  virtual ~RTCConfiguration();
  RTCConfiguration(const RTCConfiguration&);
  RTCConfiguration& operator=(const RTCConfiguration&);

  bool hasBundlePolicy() const { return !bundle_policy_.IsNull(); }
  const String& bundlePolicy() const {
    return bundle_policy_;
  }
  inline void setBundlePolicy(const String&);

  bool hasCertificates() const { return has_certificates_; }
  const HeapVector<Member<RTCCertificate>>& certificates() const {
    DCHECK(has_certificates_);
    return certificates_;
  }
  void setCertificates(const HeapVector<Member<RTCCertificate>>&);

  bool hasIceCandidatePoolSize() const { return has_ice_candidate_pool_size_; }
  uint8_t iceCandidatePoolSize() const {
    DCHECK(has_ice_candidate_pool_size_);
    return ice_candidate_pool_size_;
  }
  inline void setIceCandidatePoolSize(uint8_t);

  bool hasIceServers() const { return has_ice_servers_; }
  const HeapVector<RTCIceServer>& iceServers() const {
    DCHECK(has_ice_servers_);
    return ice_servers_;
  }
  void setIceServers(const HeapVector<RTCIceServer>&);

  bool hasIceTransportPolicy() const { return !ice_transport_policy_.IsNull(); }
  const String& iceTransportPolicy() const {
    return ice_transport_policy_;
  }
  inline void setIceTransportPolicy(const String&);

  bool hasIceTransports() const { return !ice_transports_.IsNull(); }
  const String& iceTransports() const {
    return ice_transports_;
  }
  inline void setIceTransports(const String&);

  bool hasRtcpMuxPolicy() const { return !rtcp_mux_policy_.IsNull(); }
  const String& rtcpMuxPolicy() const {
    return rtcp_mux_policy_;
  }
  inline void setRtcpMuxPolicy(const String&);

  bool hasSdpSemantics() const { return !sdp_semantics_.IsNull(); }
  const String& sdpSemantics() const {
    return sdp_semantics_;
  }
  inline void setSdpSemantics(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_certificates_ = false;
  bool has_ice_candidate_pool_size_ = false;
  bool has_ice_servers_ = false;

  String bundle_policy_;
  HeapVector<Member<RTCCertificate>> certificates_;
  uint8_t ice_candidate_pool_size_;
  HeapVector<RTCIceServer> ice_servers_;
  String ice_transport_policy_;
  String ice_transports_;
  String rtcp_mux_policy_;
  String sdp_semantics_;

  friend class V8RTCConfiguration;
};

void RTCConfiguration::setBundlePolicy(const String& value) {
  bundle_policy_ = value;
}

void RTCConfiguration::setIceCandidatePoolSize(uint8_t value) {
  ice_candidate_pool_size_ = value;
  has_ice_candidate_pool_size_ = true;
}

void RTCConfiguration::setIceTransportPolicy(const String& value) {
  ice_transport_policy_ = value;
}

void RTCConfiguration::setIceTransports(const String& value) {
  ice_transports_ = value;
}

void RTCConfiguration::setRtcpMuxPolicy(const String& value) {
  rtcp_mux_policy_ = value;
}

void RTCConfiguration::setSdpSemantics(const String& value) {
  sdp_semantics_ = value;
}

}  // namespace blink

#endif  // RTCConfiguration_h

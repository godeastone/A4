// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef RTCTrackEventInit_h
#define RTCTrackEventInit_h

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MediaStreamTrack;
class RTCRtpReceiver;
class MediaStream;

class MODULES_EXPORT RTCTrackEventInit : public EventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  RTCTrackEventInit();
  virtual ~RTCTrackEventInit();
  RTCTrackEventInit(const RTCTrackEventInit&);
  RTCTrackEventInit& operator=(const RTCTrackEventInit&);

  bool hasReceiver() const { return receiver_; }
  RTCRtpReceiver* receiver() const {
    return receiver_;
  }
  inline void setReceiver(RTCRtpReceiver*);

  bool hasStreams() const { return has_streams_; }
  const HeapVector<Member<MediaStream>>& streams() const {
    DCHECK(has_streams_);
    return streams_;
  }
  void setStreams(const HeapVector<Member<MediaStream>>&);

  bool hasTrack() const { return track_; }
  MediaStreamTrack* track() const {
    return track_;
  }
  inline void setTrack(MediaStreamTrack*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_streams_ = false;

  Member<RTCRtpReceiver> receiver_;
  HeapVector<Member<MediaStream>> streams_;
  Member<MediaStreamTrack> track_;

  friend class V8RTCTrackEventInit;
};

void RTCTrackEventInit::setReceiver(RTCRtpReceiver* value) {
  receiver_ = value;
}

void RTCTrackEventInit::setTrack(MediaStreamTrack* value) {
  track_ = value;
}

}  // namespace blink

#endif  // RTCTrackEventInit_h

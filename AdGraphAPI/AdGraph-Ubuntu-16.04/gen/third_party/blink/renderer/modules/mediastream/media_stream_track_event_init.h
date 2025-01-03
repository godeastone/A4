// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef MediaStreamTrackEventInit_h
#define MediaStreamTrackEventInit_h

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MediaStreamTrack;

class MODULES_EXPORT MediaStreamTrackEventInit : public EventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  MediaStreamTrackEventInit();
  virtual ~MediaStreamTrackEventInit();
  MediaStreamTrackEventInit(const MediaStreamTrackEventInit&);
  MediaStreamTrackEventInit& operator=(const MediaStreamTrackEventInit&);

  bool hasTrack() const { return track_; }
  MediaStreamTrack* track() const {
    return track_;
  }
  inline void setTrack(MediaStreamTrack*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<MediaStreamTrack> track_;

  friend class V8MediaStreamTrackEventInit;
};

void MediaStreamTrackEventInit::setTrack(MediaStreamTrack* value) {
  track_ = value;
}

}  // namespace blink

#endif  // MediaStreamTrackEventInit_h

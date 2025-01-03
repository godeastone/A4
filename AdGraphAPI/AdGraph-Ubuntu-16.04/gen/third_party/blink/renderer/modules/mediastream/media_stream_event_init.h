// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef MediaStreamEventInit_h
#define MediaStreamEventInit_h

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MediaStream;

class MODULES_EXPORT MediaStreamEventInit : public EventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  MediaStreamEventInit();
  virtual ~MediaStreamEventInit();
  MediaStreamEventInit(const MediaStreamEventInit&);
  MediaStreamEventInit& operator=(const MediaStreamEventInit&);

  bool hasStream() const { return stream_; }
  MediaStream* stream() const {
    return stream_;
  }
  inline void setStream(MediaStream*);
  inline void setStreamToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<MediaStream> stream_;

  friend class V8MediaStreamEventInit;
};

void MediaStreamEventInit::setStream(MediaStream* value) {
  stream_ = value;
}
void MediaStreamEventInit::setStreamToNull() {
  stream_ = Member<MediaStream>();
}

}  // namespace blink

#endif  // MediaStreamEventInit_h

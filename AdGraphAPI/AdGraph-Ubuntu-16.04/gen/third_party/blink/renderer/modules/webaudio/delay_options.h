// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef DelayOptions_h
#define DelayOptions_h

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webaudio/audio_node_options.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT DelayOptions : public AudioNodeOptions {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  DelayOptions();
  virtual ~DelayOptions();
  DelayOptions(const DelayOptions&);
  DelayOptions& operator=(const DelayOptions&);

  bool hasDelayTime() const { return has_delay_time_; }
  double delayTime() const {
    DCHECK(has_delay_time_);
    return delay_time_;
  }
  inline void setDelayTime(double);

  bool hasMaxDelayTime() const { return has_max_delay_time_; }
  double maxDelayTime() const {
    DCHECK(has_max_delay_time_);
    return max_delay_time_;
  }
  inline void setMaxDelayTime(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_delay_time_ = false;
  bool has_max_delay_time_ = false;

  double delay_time_;
  double max_delay_time_;

  friend class V8DelayOptions;
};

void DelayOptions::setDelayTime(double value) {
  delay_time_ = value;
  has_delay_time_ = true;
}

void DelayOptions::setMaxDelayTime(double value) {
  max_delay_time_ = value;
  has_max_delay_time_ = true;
}

}  // namespace blink

#endif  // DelayOptions_h

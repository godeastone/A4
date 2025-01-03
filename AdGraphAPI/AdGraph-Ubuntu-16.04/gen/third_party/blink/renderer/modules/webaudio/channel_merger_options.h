// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef ChannelMergerOptions_h
#define ChannelMergerOptions_h

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webaudio/audio_node_options.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT ChannelMergerOptions : public AudioNodeOptions {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  ChannelMergerOptions();
  virtual ~ChannelMergerOptions();
  ChannelMergerOptions(const ChannelMergerOptions&);
  ChannelMergerOptions& operator=(const ChannelMergerOptions&);

  bool hasNumberOfInputs() const { return has_number_of_inputs_; }
  uint32_t numberOfInputs() const {
    DCHECK(has_number_of_inputs_);
    return number_of_inputs_;
  }
  inline void setNumberOfInputs(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_number_of_inputs_ = false;

  uint32_t number_of_inputs_;

  friend class V8ChannelMergerOptions;
};

void ChannelMergerOptions::setNumberOfInputs(uint32_t value) {
  number_of_inputs_ = value;
  has_number_of_inputs_ = true;
}

}  // namespace blink

#endif  // ChannelMergerOptions_h

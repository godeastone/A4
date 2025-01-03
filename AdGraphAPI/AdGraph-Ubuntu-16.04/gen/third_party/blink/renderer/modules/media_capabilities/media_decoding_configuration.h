// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef MediaDecodingConfiguration_h
#define MediaDecodingConfiguration_h

#include "third_party/blink/renderer/modules/media_capabilities/media_configuration.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT MediaDecodingConfiguration : public MediaConfiguration {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  MediaDecodingConfiguration();
  virtual ~MediaDecodingConfiguration();
  MediaDecodingConfiguration(const MediaDecodingConfiguration&);
  MediaDecodingConfiguration& operator=(const MediaDecodingConfiguration&);

  bool hasType() const { return !type_.IsNull(); }
  const String& type() const {
    return type_;
  }
  inline void setType(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String type_;

  friend class V8MediaDecodingConfiguration;
};

void MediaDecodingConfiguration::setType(const String& value) {
  type_ = value;
}

}  // namespace blink

#endif  // MediaDecodingConfiguration_h

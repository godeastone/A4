// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef MediaConfiguration_h
#define MediaConfiguration_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/media_capabilities/audio_configuration.h"
#include "third_party/blink/renderer/modules/media_capabilities/video_configuration.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT MediaConfiguration : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  MediaConfiguration();
  virtual ~MediaConfiguration();
  MediaConfiguration(const MediaConfiguration&);
  MediaConfiguration& operator=(const MediaConfiguration&);

  bool hasAudio() const { return has_audio_; }
  const AudioConfiguration& audio() const {
    DCHECK(has_audio_);
    return audio_;
  }
  void setAudio(const AudioConfiguration&);

  bool hasVideo() const { return has_video_; }
  const VideoConfiguration& video() const {
    DCHECK(has_video_);
    return video_;
  }
  void setVideo(const VideoConfiguration&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_audio_ = false;
  bool has_video_ = false;

  AudioConfiguration audio_;
  VideoConfiguration video_;

  friend class V8MediaConfiguration;
};

}  // namespace blink

#endif  // MediaConfiguration_h

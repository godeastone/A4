// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/video_track_or_audio_track_or_text_track.h"

#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_audio_track.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text_track.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_video_track.h"

namespace blink {

VideoTrackOrAudioTrackOrTextTrack::VideoTrackOrAudioTrackOrTextTrack() : type_(SpecificType::kNone) {}

AudioTrack* VideoTrackOrAudioTrackOrTextTrack::GetAsAudioTrack() const {
  DCHECK(IsAudioTrack());
  return audio_track_;
}

void VideoTrackOrAudioTrackOrTextTrack::SetAudioTrack(AudioTrack* value) {
  DCHECK(IsNull());
  audio_track_ = value;
  type_ = SpecificType::kAudioTrack;
}

VideoTrackOrAudioTrackOrTextTrack VideoTrackOrAudioTrackOrTextTrack::FromAudioTrack(AudioTrack* value) {
  VideoTrackOrAudioTrackOrTextTrack container;
  container.SetAudioTrack(value);
  return container;
}

TextTrack* VideoTrackOrAudioTrackOrTextTrack::GetAsTextTrack() const {
  DCHECK(IsTextTrack());
  return text_track_;
}

void VideoTrackOrAudioTrackOrTextTrack::SetTextTrack(TextTrack* value) {
  DCHECK(IsNull());
  text_track_ = value;
  type_ = SpecificType::kTextTrack;
}

VideoTrackOrAudioTrackOrTextTrack VideoTrackOrAudioTrackOrTextTrack::FromTextTrack(TextTrack* value) {
  VideoTrackOrAudioTrackOrTextTrack container;
  container.SetTextTrack(value);
  return container;
}

VideoTrack* VideoTrackOrAudioTrackOrTextTrack::GetAsVideoTrack() const {
  DCHECK(IsVideoTrack());
  return video_track_;
}

void VideoTrackOrAudioTrackOrTextTrack::SetVideoTrack(VideoTrack* value) {
  DCHECK(IsNull());
  video_track_ = value;
  type_ = SpecificType::kVideoTrack;
}

VideoTrackOrAudioTrackOrTextTrack VideoTrackOrAudioTrackOrTextTrack::FromVideoTrack(VideoTrack* value) {
  VideoTrackOrAudioTrackOrTextTrack container;
  container.SetVideoTrack(value);
  return container;
}

VideoTrackOrAudioTrackOrTextTrack::VideoTrackOrAudioTrackOrTextTrack(const VideoTrackOrAudioTrackOrTextTrack&) = default;
VideoTrackOrAudioTrackOrTextTrack::~VideoTrackOrAudioTrackOrTextTrack() = default;
VideoTrackOrAudioTrackOrTextTrack& VideoTrackOrAudioTrackOrTextTrack::operator=(const VideoTrackOrAudioTrackOrTextTrack&) = default;

void VideoTrackOrAudioTrackOrTextTrack::Trace(blink::Visitor* visitor) {
  visitor->Trace(audio_track_);
  visitor->Trace(text_track_);
  visitor->Trace(video_track_);
}

void V8VideoTrackOrAudioTrackOrTextTrack::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, VideoTrackOrAudioTrackOrTextTrack& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (V8AudioTrack::hasInstance(v8Value, isolate)) {
    AudioTrack* cppValue = V8AudioTrack::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetAudioTrack(cppValue);
    return;
  }

  if (V8TextTrack::hasInstance(v8Value, isolate)) {
    TextTrack* cppValue = V8TextTrack::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetTextTrack(cppValue);
    return;
  }

  if (V8VideoTrack::hasInstance(v8Value, isolate)) {
    VideoTrack* cppValue = V8VideoTrack::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetVideoTrack(cppValue);
    return;
  }

  exceptionState.ThrowTypeError("The provided value is not of type '(VideoTrack or AudioTrack or TextTrack)'");
}

v8::Local<v8::Value> ToV8(const VideoTrackOrAudioTrackOrTextTrack& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case VideoTrackOrAudioTrackOrTextTrack::SpecificType::kNone:
      return v8::Null(isolate);
    case VideoTrackOrAudioTrackOrTextTrack::SpecificType::kAudioTrack:
      return ToV8(impl.GetAsAudioTrack(), creationContext, isolate);
    case VideoTrackOrAudioTrackOrTextTrack::SpecificType::kTextTrack:
      return ToV8(impl.GetAsTextTrack(), creationContext, isolate);
    case VideoTrackOrAudioTrackOrTextTrack::SpecificType::kVideoTrack:
      return ToV8(impl.GetAsVideoTrack(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

VideoTrackOrAudioTrackOrTextTrack NativeValueTraits<VideoTrackOrAudioTrackOrTextTrack>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  VideoTrackOrAudioTrackOrTextTrack impl;
  V8VideoTrackOrAudioTrackOrTextTrack::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink

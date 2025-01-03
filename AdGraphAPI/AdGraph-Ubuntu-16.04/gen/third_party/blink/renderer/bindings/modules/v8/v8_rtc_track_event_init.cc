// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_track_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_receiver.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCTrackEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "receiver",
    "streams",
    "track",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8RTCTrackEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, RTCTrackEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): receiver, track.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8RTCTrackEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> receiverValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&receiverValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (receiverValue.IsEmpty() || receiverValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member receiver is undefined.");
    return;
  } else {
    RTCRtpReceiver* receiverCppValue = V8RTCRtpReceiver::ToImplWithTypeCheck(isolate, receiverValue);
    if (!receiverCppValue) {
      exceptionState.ThrowTypeError("member receiver is not of type RTCRtpReceiver.");
      return;
    }
    impl.setReceiver(receiverCppValue);
  }

  v8::Local<v8::Value> streamsValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&streamsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (streamsValue.IsEmpty() || streamsValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<MediaStream>> streamsCppValue = NativeValueTraits<IDLSequence<MediaStream>>::NativeValue(isolate, streamsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setStreams(streamsCppValue);
  }

  v8::Local<v8::Value> trackValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&trackValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (trackValue.IsEmpty() || trackValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member track is undefined.");
    return;
  } else {
    MediaStreamTrack* trackCppValue = V8MediaStreamTrack::ToImplWithTypeCheck(isolate, trackValue);
    if (!trackCppValue) {
      exceptionState.ThrowTypeError("member track is not of type MediaStreamTrack.");
      return;
    }
    impl.setTrack(trackCppValue);
  }
}

v8::Local<v8::Value> RTCTrackEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCTrackEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCTrackEventInit(const RTCTrackEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8RTCTrackEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> receiverValue;
  bool receiverHasValueOrDefault = false;
  if (impl.hasReceiver()) {
    receiverValue = ToV8(impl.receiver(), creationContext, isolate);
    receiverHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (receiverHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), receiverValue))) {
    return false;
  }

  v8::Local<v8::Value> streamsValue;
  bool streamsHasValueOrDefault = false;
  if (impl.hasStreams()) {
    streamsValue = ToV8(impl.streams(), creationContext, isolate);
    streamsHasValueOrDefault = true;
  } else {
    streamsValue = ToV8(HeapVector<Member<MediaStream>>(), creationContext, isolate);
    streamsHasValueOrDefault = true;
  }
  if (streamsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), streamsValue))) {
    return false;
  }

  v8::Local<v8::Value> trackValue;
  bool trackHasValueOrDefault = false;
  if (impl.hasTrack()) {
    trackValue = ToV8(impl.track(), creationContext, isolate);
    trackHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (trackHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), trackValue))) {
    return false;
  }

  return true;
}

RTCTrackEventInit NativeValueTraits<RTCTrackEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  RTCTrackEventInit impl;
  V8RTCTrackEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

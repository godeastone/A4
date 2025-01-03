// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_track_constraints.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_track_constraint_set.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaTrackConstraintsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "advanced",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MediaTrackConstraints::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MediaTrackConstraints& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8MediaTrackConstraintSet::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8MediaTrackConstraintsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> advancedValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&advancedValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (advancedValue.IsEmpty() || advancedValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<MediaTrackConstraintSet> advancedCppValue = NativeValueTraits<IDLSequence<MediaTrackConstraintSet>>::NativeValue(isolate, advancedValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAdvanced(advancedCppValue);
  }
}

v8::Local<v8::Value> MediaTrackConstraints::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaTrackConstraints(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaTrackConstraints(const MediaTrackConstraints& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8MediaTrackConstraintSet(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8MediaTrackConstraintsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> advancedValue;
  bool advancedHasValueOrDefault = false;
  if (impl.hasAdvanced()) {
    advancedValue = ToV8(impl.advanced(), creationContext, isolate);
    advancedHasValueOrDefault = true;
  }
  if (advancedHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), advancedValue))) {
    return false;
  }

  return true;
}

MediaTrackConstraints NativeValueTraits<MediaTrackConstraints>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MediaTrackConstraints impl;
  V8MediaTrackConstraints::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

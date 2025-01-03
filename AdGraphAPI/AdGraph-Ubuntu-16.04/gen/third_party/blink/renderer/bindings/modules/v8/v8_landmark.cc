// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_landmark.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_point_2d.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8LandmarkKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "locations",
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8Landmark::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, Landmark& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): locations.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8LandmarkKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> locationsValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&locationsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (locationsValue.IsEmpty() || locationsValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member locations is undefined.");
    return;
  } else {
    HeapVector<Point2D> locationsCppValue = NativeValueTraits<IDLSequence<Point2D>>::NativeValue(isolate, locationsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setLocations(locationsCppValue);
  }

  v8::Local<v8::Value> typeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&typeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (typeValue.IsEmpty() || typeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> typeCppValue = typeValue;
    if (!typeCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "mouth",
        "eye",
        "nose",
    };
    if (!IsValidEnum(typeCppValue, validValues, arraysize(validValues), "LandmarkType", exceptionState))
      return;
    impl.setType(typeCppValue);
  }
}

v8::Local<v8::Value> Landmark::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8Landmark(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8Landmark(const Landmark& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8LandmarkKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> locationsValue;
  bool locationsHasValueOrDefault = false;
  if (impl.hasLocations()) {
    locationsValue = FreezeV8Object(ToV8(impl.locations(), creationContext, isolate), isolate);
    locationsHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (locationsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), locationsValue))) {
    return false;
  }

  v8::Local<v8::Value> typeValue;
  bool typeHasValueOrDefault = false;
  if (impl.hasType()) {
    typeValue = V8String(isolate, impl.type());
    typeHasValueOrDefault = true;
  }
  if (typeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), typeValue))) {
    return false;
  }

  return true;
}

Landmark NativeValueTraits<Landmark>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  Landmark impl;
  V8Landmark::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

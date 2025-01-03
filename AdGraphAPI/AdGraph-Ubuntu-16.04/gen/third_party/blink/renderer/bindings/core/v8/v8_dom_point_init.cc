// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_point_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8DOMPointInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "w",
    "x",
    "y",
    "z",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8DOMPointInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DOMPointInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8DOMPointInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> wValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&wValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (wValue.IsEmpty() || wValue->IsUndefined()) {
    // Do nothing.
  } else {
    double wCppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, wValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setW(wCppValue);
  }

  v8::Local<v8::Value> xValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&xValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (xValue.IsEmpty() || xValue->IsUndefined()) {
    // Do nothing.
  } else {
    double xCppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, xValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setX(xCppValue);
  }

  v8::Local<v8::Value> yValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&yValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (yValue.IsEmpty() || yValue->IsUndefined()) {
    // Do nothing.
  } else {
    double yCppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, yValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setY(yCppValue);
  }

  v8::Local<v8::Value> zValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&zValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (zValue.IsEmpty() || zValue->IsUndefined()) {
    // Do nothing.
  } else {
    double zCppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, zValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setZ(zCppValue);
  }
}

v8::Local<v8::Value> DOMPointInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8DOMPointInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8DOMPointInit(const DOMPointInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8DOMPointInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> wValue;
  bool wHasValueOrDefault = false;
  if (impl.hasW()) {
    wValue = v8::Number::New(isolate, impl.w());
    wHasValueOrDefault = true;
  } else {
    wValue = v8::Number::New(isolate, 1);
    wHasValueOrDefault = true;
  }
  if (wHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), wValue))) {
    return false;
  }

  v8::Local<v8::Value> xValue;
  bool xHasValueOrDefault = false;
  if (impl.hasX()) {
    xValue = v8::Number::New(isolate, impl.x());
    xHasValueOrDefault = true;
  } else {
    xValue = v8::Number::New(isolate, 0);
    xHasValueOrDefault = true;
  }
  if (xHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), xValue))) {
    return false;
  }

  v8::Local<v8::Value> yValue;
  bool yHasValueOrDefault = false;
  if (impl.hasY()) {
    yValue = v8::Number::New(isolate, impl.y());
    yHasValueOrDefault = true;
  } else {
    yValue = v8::Number::New(isolate, 0);
    yHasValueOrDefault = true;
  }
  if (yHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), yValue))) {
    return false;
  }

  v8::Local<v8::Value> zValue;
  bool zHasValueOrDefault = false;
  if (impl.hasZ()) {
    zValue = v8::Number::New(isolate, impl.z());
    zHasValueOrDefault = true;
  } else {
    zValue = v8::Number::New(isolate, 0);
    zHasValueOrDefault = true;
  }
  if (zHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), zValue))) {
    return false;
  }

  return true;
}

DOMPointInit NativeValueTraits<DOMPointInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DOMPointInit impl;
  V8DOMPointInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

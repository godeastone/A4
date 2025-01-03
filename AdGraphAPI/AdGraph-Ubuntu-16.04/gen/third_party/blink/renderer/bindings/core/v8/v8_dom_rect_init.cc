// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8DOMRectInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "height",
    "width",
    "x",
    "y",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8DOMRectInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DOMRectInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8DOMRectInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> heightValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&heightValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (heightValue.IsEmpty() || heightValue->IsUndefined()) {
    // Do nothing.
  } else {
    double heightCppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, heightValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setHeight(heightCppValue);
  }

  v8::Local<v8::Value> widthValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&widthValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (widthValue.IsEmpty() || widthValue->IsUndefined()) {
    // Do nothing.
  } else {
    double widthCppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, widthValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setWidth(widthCppValue);
  }

  v8::Local<v8::Value> xValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&xValue)) {
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
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&yValue)) {
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
}

v8::Local<v8::Value> DOMRectInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8DOMRectInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8DOMRectInit(const DOMRectInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8DOMRectInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> heightValue;
  bool heightHasValueOrDefault = false;
  if (impl.hasHeight()) {
    heightValue = v8::Number::New(isolate, impl.height());
    heightHasValueOrDefault = true;
  } else {
    heightValue = v8::Number::New(isolate, 0);
    heightHasValueOrDefault = true;
  }
  if (heightHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), heightValue))) {
    return false;
  }

  v8::Local<v8::Value> widthValue;
  bool widthHasValueOrDefault = false;
  if (impl.hasWidth()) {
    widthValue = v8::Number::New(isolate, impl.width());
    widthHasValueOrDefault = true;
  } else {
    widthValue = v8::Number::New(isolate, 0);
    widthHasValueOrDefault = true;
  }
  if (widthHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), widthValue))) {
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
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), xValue))) {
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
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), yValue))) {
    return false;
  }

  return true;
}

DOMRectInit NativeValueTraits<DOMRectInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DOMRectInit impl;
  V8DOMRectInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

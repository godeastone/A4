// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_quad_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_point_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8DOMQuadInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "p1",
    "p2",
    "p3",
    "p4",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8DOMQuadInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DOMQuadInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8DOMQuadInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> p1Value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&p1Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (p1Value.IsEmpty() || p1Value->IsUndefined()) {
    // Do nothing.
  } else {
    DOMPointInit p1CppValue;
    V8DOMPointInit::ToImpl(isolate, p1Value, p1CppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setP1(p1CppValue);
  }

  v8::Local<v8::Value> p2Value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&p2Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (p2Value.IsEmpty() || p2Value->IsUndefined()) {
    // Do nothing.
  } else {
    DOMPointInit p2CppValue;
    V8DOMPointInit::ToImpl(isolate, p2Value, p2CppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setP2(p2CppValue);
  }

  v8::Local<v8::Value> p3Value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&p3Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (p3Value.IsEmpty() || p3Value->IsUndefined()) {
    // Do nothing.
  } else {
    DOMPointInit p3CppValue;
    V8DOMPointInit::ToImpl(isolate, p3Value, p3CppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setP3(p3CppValue);
  }

  v8::Local<v8::Value> p4Value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&p4Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (p4Value.IsEmpty() || p4Value->IsUndefined()) {
    // Do nothing.
  } else {
    DOMPointInit p4CppValue;
    V8DOMPointInit::ToImpl(isolate, p4Value, p4CppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setP4(p4CppValue);
  }
}

v8::Local<v8::Value> DOMQuadInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8DOMQuadInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8DOMQuadInit(const DOMQuadInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8DOMQuadInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> p1Value;
  bool p1HasValueOrDefault = false;
  if (impl.hasP1()) {
    p1Value = ToV8(impl.p1(), creationContext, isolate);
    p1HasValueOrDefault = true;
  }
  if (p1HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), p1Value))) {
    return false;
  }

  v8::Local<v8::Value> p2Value;
  bool p2HasValueOrDefault = false;
  if (impl.hasP2()) {
    p2Value = ToV8(impl.p2(), creationContext, isolate);
    p2HasValueOrDefault = true;
  }
  if (p2HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), p2Value))) {
    return false;
  }

  v8::Local<v8::Value> p3Value;
  bool p3HasValueOrDefault = false;
  if (impl.hasP3()) {
    p3Value = ToV8(impl.p3(), creationContext, isolate);
    p3HasValueOrDefault = true;
  }
  if (p3HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), p3Value))) {
    return false;
  }

  v8::Local<v8::Value> p4Value;
  bool p4HasValueOrDefault = false;
  if (impl.hasP4()) {
    p4Value = ToV8(impl.p4(), creationContext, isolate);
    p4HasValueOrDefault = true;
  }
  if (p4HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), p4Value))) {
    return false;
  }

  return true;
}

DOMQuadInit NativeValueTraits<DOMQuadInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DOMQuadInit impl;
  V8DOMQuadInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

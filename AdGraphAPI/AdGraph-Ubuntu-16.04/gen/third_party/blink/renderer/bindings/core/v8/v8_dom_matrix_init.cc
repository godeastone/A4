// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix_2d_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8DOMMatrixInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "is2D",
    "m13",
    "m14",
    "m23",
    "m24",
    "m31",
    "m32",
    "m33",
    "m34",
    "m43",
    "m44",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8DOMMatrixInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DOMMatrixInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8DOMMatrix2DInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8DOMMatrixInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> is2DValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&is2DValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (is2DValue.IsEmpty() || is2DValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool is2DCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, is2DValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIs2D(is2DCppValue);
  }

  v8::Local<v8::Value> m13Value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&m13Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (m13Value.IsEmpty() || m13Value->IsUndefined()) {
    // Do nothing.
  } else {
    double m13CppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m13Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setM13(m13CppValue);
  }

  v8::Local<v8::Value> m14Value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&m14Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (m14Value.IsEmpty() || m14Value->IsUndefined()) {
    // Do nothing.
  } else {
    double m14CppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m14Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setM14(m14CppValue);
  }

  v8::Local<v8::Value> m23Value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&m23Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (m23Value.IsEmpty() || m23Value->IsUndefined()) {
    // Do nothing.
  } else {
    double m23CppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m23Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setM23(m23CppValue);
  }

  v8::Local<v8::Value> m24Value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&m24Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (m24Value.IsEmpty() || m24Value->IsUndefined()) {
    // Do nothing.
  } else {
    double m24CppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m24Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setM24(m24CppValue);
  }

  v8::Local<v8::Value> m31Value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&m31Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (m31Value.IsEmpty() || m31Value->IsUndefined()) {
    // Do nothing.
  } else {
    double m31CppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m31Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setM31(m31CppValue);
  }

  v8::Local<v8::Value> m32Value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&m32Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (m32Value.IsEmpty() || m32Value->IsUndefined()) {
    // Do nothing.
  } else {
    double m32CppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m32Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setM32(m32CppValue);
  }

  v8::Local<v8::Value> m33Value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&m33Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (m33Value.IsEmpty() || m33Value->IsUndefined()) {
    // Do nothing.
  } else {
    double m33CppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m33Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setM33(m33CppValue);
  }

  v8::Local<v8::Value> m34Value;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&m34Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (m34Value.IsEmpty() || m34Value->IsUndefined()) {
    // Do nothing.
  } else {
    double m34CppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m34Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setM34(m34CppValue);
  }

  v8::Local<v8::Value> m43Value;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&m43Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (m43Value.IsEmpty() || m43Value->IsUndefined()) {
    // Do nothing.
  } else {
    double m43CppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m43Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setM43(m43CppValue);
  }

  v8::Local<v8::Value> m44Value;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&m44Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (m44Value.IsEmpty() || m44Value->IsUndefined()) {
    // Do nothing.
  } else {
    double m44CppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m44Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setM44(m44CppValue);
  }
}

v8::Local<v8::Value> DOMMatrixInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8DOMMatrixInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8DOMMatrixInit(const DOMMatrixInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8DOMMatrix2DInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8DOMMatrixInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> is2DValue;
  bool is2DHasValueOrDefault = false;
  if (impl.hasIs2D()) {
    is2DValue = v8::Boolean::New(isolate, impl.is2D());
    is2DHasValueOrDefault = true;
  }
  if (is2DHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), is2DValue))) {
    return false;
  }

  v8::Local<v8::Value> m13Value;
  bool m13HasValueOrDefault = false;
  if (impl.hasM13()) {
    m13Value = v8::Number::New(isolate, impl.m13());
    m13HasValueOrDefault = true;
  } else {
    m13Value = v8::Number::New(isolate, 0);
    m13HasValueOrDefault = true;
  }
  if (m13HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), m13Value))) {
    return false;
  }

  v8::Local<v8::Value> m14Value;
  bool m14HasValueOrDefault = false;
  if (impl.hasM14()) {
    m14Value = v8::Number::New(isolate, impl.m14());
    m14HasValueOrDefault = true;
  } else {
    m14Value = v8::Number::New(isolate, 0);
    m14HasValueOrDefault = true;
  }
  if (m14HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), m14Value))) {
    return false;
  }

  v8::Local<v8::Value> m23Value;
  bool m23HasValueOrDefault = false;
  if (impl.hasM23()) {
    m23Value = v8::Number::New(isolate, impl.m23());
    m23HasValueOrDefault = true;
  } else {
    m23Value = v8::Number::New(isolate, 0);
    m23HasValueOrDefault = true;
  }
  if (m23HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), m23Value))) {
    return false;
  }

  v8::Local<v8::Value> m24Value;
  bool m24HasValueOrDefault = false;
  if (impl.hasM24()) {
    m24Value = v8::Number::New(isolate, impl.m24());
    m24HasValueOrDefault = true;
  } else {
    m24Value = v8::Number::New(isolate, 0);
    m24HasValueOrDefault = true;
  }
  if (m24HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), m24Value))) {
    return false;
  }

  v8::Local<v8::Value> m31Value;
  bool m31HasValueOrDefault = false;
  if (impl.hasM31()) {
    m31Value = v8::Number::New(isolate, impl.m31());
    m31HasValueOrDefault = true;
  } else {
    m31Value = v8::Number::New(isolate, 0);
    m31HasValueOrDefault = true;
  }
  if (m31HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), m31Value))) {
    return false;
  }

  v8::Local<v8::Value> m32Value;
  bool m32HasValueOrDefault = false;
  if (impl.hasM32()) {
    m32Value = v8::Number::New(isolate, impl.m32());
    m32HasValueOrDefault = true;
  } else {
    m32Value = v8::Number::New(isolate, 0);
    m32HasValueOrDefault = true;
  }
  if (m32HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), m32Value))) {
    return false;
  }

  v8::Local<v8::Value> m33Value;
  bool m33HasValueOrDefault = false;
  if (impl.hasM33()) {
    m33Value = v8::Number::New(isolate, impl.m33());
    m33HasValueOrDefault = true;
  } else {
    m33Value = v8::Number::New(isolate, 1);
    m33HasValueOrDefault = true;
  }
  if (m33HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[7].Get(isolate), m33Value))) {
    return false;
  }

  v8::Local<v8::Value> m34Value;
  bool m34HasValueOrDefault = false;
  if (impl.hasM34()) {
    m34Value = v8::Number::New(isolate, impl.m34());
    m34HasValueOrDefault = true;
  } else {
    m34Value = v8::Number::New(isolate, 0);
    m34HasValueOrDefault = true;
  }
  if (m34HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[8].Get(isolate), m34Value))) {
    return false;
  }

  v8::Local<v8::Value> m43Value;
  bool m43HasValueOrDefault = false;
  if (impl.hasM43()) {
    m43Value = v8::Number::New(isolate, impl.m43());
    m43HasValueOrDefault = true;
  } else {
    m43Value = v8::Number::New(isolate, 0);
    m43HasValueOrDefault = true;
  }
  if (m43HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[9].Get(isolate), m43Value))) {
    return false;
  }

  v8::Local<v8::Value> m44Value;
  bool m44HasValueOrDefault = false;
  if (impl.hasM44()) {
    m44Value = v8::Number::New(isolate, impl.m44());
    m44HasValueOrDefault = true;
  } else {
    m44Value = v8::Number::New(isolate, 1);
    m44HasValueOrDefault = true;
  }
  if (m44HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[10].Get(isolate), m44Value))) {
    return false;
  }

  return true;
}

DOMMatrixInit NativeValueTraits<DOMMatrixInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DOMMatrixInit impl;
  V8DOMMatrixInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

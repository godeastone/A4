// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix_2d_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8DOMMatrix2DInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "a",
    "b",
    "c",
    "d",
    "e",
    "f",
    "m11",
    "m12",
    "m21",
    "m22",
    "m41",
    "m42",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8DOMMatrix2DInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DOMMatrix2DInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8DOMMatrix2DInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> aValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&aValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (aValue.IsEmpty() || aValue->IsUndefined()) {
    // Do nothing.
  } else {
    double aCppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, aValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setA(aCppValue);
  }

  v8::Local<v8::Value> bValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&bValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (bValue.IsEmpty() || bValue->IsUndefined()) {
    // Do nothing.
  } else {
    double bCppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, bValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setB(bCppValue);
  }

  v8::Local<v8::Value> cValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&cValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (cValue.IsEmpty() || cValue->IsUndefined()) {
    // Do nothing.
  } else {
    double cCppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, cValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setC(cCppValue);
  }

  v8::Local<v8::Value> dValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&dValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (dValue.IsEmpty() || dValue->IsUndefined()) {
    // Do nothing.
  } else {
    double dCppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, dValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setD(dCppValue);
  }

  v8::Local<v8::Value> eValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&eValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (eValue.IsEmpty() || eValue->IsUndefined()) {
    // Do nothing.
  } else {
    double eCppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, eValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setE(eCppValue);
  }

  v8::Local<v8::Value> fValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&fValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (fValue.IsEmpty() || fValue->IsUndefined()) {
    // Do nothing.
  } else {
    double fCppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, fValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setF(fCppValue);
  }

  v8::Local<v8::Value> m11Value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&m11Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (m11Value.IsEmpty() || m11Value->IsUndefined()) {
    // Do nothing.
  } else {
    double m11CppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m11Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setM11(m11CppValue);
  }

  v8::Local<v8::Value> m12Value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&m12Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (m12Value.IsEmpty() || m12Value->IsUndefined()) {
    // Do nothing.
  } else {
    double m12CppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m12Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setM12(m12CppValue);
  }

  v8::Local<v8::Value> m21Value;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&m21Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (m21Value.IsEmpty() || m21Value->IsUndefined()) {
    // Do nothing.
  } else {
    double m21CppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m21Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setM21(m21CppValue);
  }

  v8::Local<v8::Value> m22Value;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&m22Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (m22Value.IsEmpty() || m22Value->IsUndefined()) {
    // Do nothing.
  } else {
    double m22CppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m22Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setM22(m22CppValue);
  }

  v8::Local<v8::Value> m41Value;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&m41Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (m41Value.IsEmpty() || m41Value->IsUndefined()) {
    // Do nothing.
  } else {
    double m41CppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m41Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setM41(m41CppValue);
  }

  v8::Local<v8::Value> m42Value;
  if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&m42Value)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (m42Value.IsEmpty() || m42Value->IsUndefined()) {
    // Do nothing.
  } else {
    double m42CppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, m42Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setM42(m42CppValue);
  }
}

v8::Local<v8::Value> DOMMatrix2DInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8DOMMatrix2DInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8DOMMatrix2DInit(const DOMMatrix2DInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8DOMMatrix2DInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> aValue;
  bool aHasValueOrDefault = false;
  if (impl.hasA()) {
    aValue = v8::Number::New(isolate, impl.a());
    aHasValueOrDefault = true;
  }
  if (aHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), aValue))) {
    return false;
  }

  v8::Local<v8::Value> bValue;
  bool bHasValueOrDefault = false;
  if (impl.hasB()) {
    bValue = v8::Number::New(isolate, impl.b());
    bHasValueOrDefault = true;
  }
  if (bHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), bValue))) {
    return false;
  }

  v8::Local<v8::Value> cValue;
  bool cHasValueOrDefault = false;
  if (impl.hasC()) {
    cValue = v8::Number::New(isolate, impl.c());
    cHasValueOrDefault = true;
  }
  if (cHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), cValue))) {
    return false;
  }

  v8::Local<v8::Value> dValue;
  bool dHasValueOrDefault = false;
  if (impl.hasD()) {
    dValue = v8::Number::New(isolate, impl.d());
    dHasValueOrDefault = true;
  }
  if (dHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), dValue))) {
    return false;
  }

  v8::Local<v8::Value> eValue;
  bool eHasValueOrDefault = false;
  if (impl.hasE()) {
    eValue = v8::Number::New(isolate, impl.e());
    eHasValueOrDefault = true;
  }
  if (eHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), eValue))) {
    return false;
  }

  v8::Local<v8::Value> fValue;
  bool fHasValueOrDefault = false;
  if (impl.hasF()) {
    fValue = v8::Number::New(isolate, impl.f());
    fHasValueOrDefault = true;
  }
  if (fHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), fValue))) {
    return false;
  }

  v8::Local<v8::Value> m11Value;
  bool m11HasValueOrDefault = false;
  if (impl.hasM11()) {
    m11Value = v8::Number::New(isolate, impl.m11());
    m11HasValueOrDefault = true;
  }
  if (m11HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), m11Value))) {
    return false;
  }

  v8::Local<v8::Value> m12Value;
  bool m12HasValueOrDefault = false;
  if (impl.hasM12()) {
    m12Value = v8::Number::New(isolate, impl.m12());
    m12HasValueOrDefault = true;
  }
  if (m12HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[7].Get(isolate), m12Value))) {
    return false;
  }

  v8::Local<v8::Value> m21Value;
  bool m21HasValueOrDefault = false;
  if (impl.hasM21()) {
    m21Value = v8::Number::New(isolate, impl.m21());
    m21HasValueOrDefault = true;
  }
  if (m21HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[8].Get(isolate), m21Value))) {
    return false;
  }

  v8::Local<v8::Value> m22Value;
  bool m22HasValueOrDefault = false;
  if (impl.hasM22()) {
    m22Value = v8::Number::New(isolate, impl.m22());
    m22HasValueOrDefault = true;
  }
  if (m22HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[9].Get(isolate), m22Value))) {
    return false;
  }

  v8::Local<v8::Value> m41Value;
  bool m41HasValueOrDefault = false;
  if (impl.hasM41()) {
    m41Value = v8::Number::New(isolate, impl.m41());
    m41HasValueOrDefault = true;
  }
  if (m41HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[10].Get(isolate), m41Value))) {
    return false;
  }

  v8::Local<v8::Value> m42Value;
  bool m42HasValueOrDefault = false;
  if (impl.hasM42()) {
    m42Value = v8::Number::New(isolate, impl.m42());
    m42HasValueOrDefault = true;
  }
  if (m42HasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[11].Get(isolate), m42Value))) {
    return false;
  }

  return true;
}

DOMMatrix2DInit NativeValueTraits<DOMMatrix2DInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DOMMatrix2DInit impl;
  V8DOMMatrix2DInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

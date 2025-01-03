// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_boolean_parameters.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ConstrainBooleanParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "exact",
    "ideal",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ConstrainBooleanParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ConstrainBooleanParameters& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ConstrainBooleanParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> exactValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&exactValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (exactValue.IsEmpty() || exactValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool exactCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, exactValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setExact(exactCppValue);
  }

  v8::Local<v8::Value> idealValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&idealValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (idealValue.IsEmpty() || idealValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool idealCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, idealValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIdeal(idealCppValue);
  }
}

v8::Local<v8::Value> ConstrainBooleanParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ConstrainBooleanParameters(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ConstrainBooleanParameters(const ConstrainBooleanParameters& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ConstrainBooleanParametersKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> exactValue;
  bool exactHasValueOrDefault = false;
  if (impl.hasExact()) {
    exactValue = v8::Boolean::New(isolate, impl.exact());
    exactHasValueOrDefault = true;
  }
  if (exactHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), exactValue))) {
    return false;
  }

  v8::Local<v8::Value> idealValue;
  bool idealHasValueOrDefault = false;
  if (impl.hasIdeal()) {
    idealValue = v8::Boolean::New(isolate, impl.ideal());
    idealHasValueOrDefault = true;
  }
  if (idealHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), idealValue))) {
    return false;
  }

  return true;
}

ConstrainBooleanParameters NativeValueTraits<ConstrainBooleanParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ConstrainBooleanParameters impl;
  V8ConstrainBooleanParameters::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

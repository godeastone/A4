// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_dictionary_derived_derived.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_dictionary_derived.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8InternalDictionaryDerivedDerivedKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "derivedDerivedStringMember",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8InternalDictionaryDerivedDerived::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, InternalDictionaryDerivedDerived& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8InternalDictionaryDerived::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8InternalDictionaryDerivedDerivedKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> derivedDerivedStringMemberValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&derivedDerivedStringMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (derivedDerivedStringMemberValue.IsEmpty() || derivedDerivedStringMemberValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> derivedDerivedStringMemberCppValue = derivedDerivedStringMemberValue;
    if (!derivedDerivedStringMemberCppValue.Prepare(exceptionState))
      return;
    impl.setDerivedDerivedStringMember(derivedDerivedStringMemberCppValue);
  }
}

v8::Local<v8::Value> InternalDictionaryDerivedDerived::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8InternalDictionaryDerivedDerived(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8InternalDictionaryDerivedDerived(const InternalDictionaryDerivedDerived& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8InternalDictionaryDerived(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8InternalDictionaryDerivedDerivedKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> derivedDerivedStringMemberValue;
  bool derivedDerivedStringMemberHasValueOrDefault = false;
  if (impl.hasDerivedDerivedStringMember()) {
    derivedDerivedStringMemberValue = V8String(isolate, impl.derivedDerivedStringMember());
    derivedDerivedStringMemberHasValueOrDefault = true;
  }
  if (derivedDerivedStringMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), derivedDerivedStringMemberValue))) {
    return false;
  }

  return true;
}

InternalDictionaryDerivedDerived NativeValueTraits<InternalDictionaryDerivedDerived>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  InternalDictionaryDerivedDerived impl;
  V8InternalDictionaryDerivedDerived::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

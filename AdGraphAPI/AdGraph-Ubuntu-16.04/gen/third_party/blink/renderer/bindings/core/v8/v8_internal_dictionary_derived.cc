// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_dictionary_derived.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_dictionary.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8InternalDictionaryDerivedKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "derivedStringMember",
    "derivedStringMemberWithDefault",
    "requiredBooleanMember",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8InternalDictionaryDerived::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, InternalDictionaryDerived& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): requiredBooleanMember.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8InternalDictionary::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8InternalDictionaryDerivedKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> derivedStringMemberValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&derivedStringMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (derivedStringMemberValue.IsEmpty() || derivedStringMemberValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> derivedStringMemberCppValue = derivedStringMemberValue;
    if (!derivedStringMemberCppValue.Prepare(exceptionState))
      return;
    impl.setDerivedStringMember(derivedStringMemberCppValue);
  }

  v8::Local<v8::Value> derivedStringMemberWithDefaultValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&derivedStringMemberWithDefaultValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (derivedStringMemberWithDefaultValue.IsEmpty() || derivedStringMemberWithDefaultValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> derivedStringMemberWithDefaultCppValue = derivedStringMemberWithDefaultValue;
    if (!derivedStringMemberWithDefaultCppValue.Prepare(exceptionState))
      return;
    impl.setDerivedStringMemberWithDefault(derivedStringMemberWithDefaultCppValue);
  }

  v8::Local<v8::Value> requiredBooleanMemberValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&requiredBooleanMemberValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (requiredBooleanMemberValue.IsEmpty() || requiredBooleanMemberValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member requiredBooleanMember is undefined.");
    return;
  } else {
    bool requiredBooleanMemberCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, requiredBooleanMemberValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRequiredBooleanMember(requiredBooleanMemberCppValue);
  }
}

v8::Local<v8::Value> InternalDictionaryDerived::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8InternalDictionaryDerived(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8InternalDictionaryDerived(const InternalDictionaryDerived& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8InternalDictionary(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8InternalDictionaryDerivedKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> derivedStringMemberValue;
  bool derivedStringMemberHasValueOrDefault = false;
  if (impl.hasDerivedStringMember()) {
    derivedStringMemberValue = V8String(isolate, impl.derivedStringMember());
    derivedStringMemberHasValueOrDefault = true;
  }
  if (derivedStringMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), derivedStringMemberValue))) {
    return false;
  }

  v8::Local<v8::Value> derivedStringMemberWithDefaultValue;
  bool derivedStringMemberWithDefaultHasValueOrDefault = false;
  if (impl.hasDerivedStringMemberWithDefault()) {
    derivedStringMemberWithDefaultValue = V8String(isolate, impl.derivedStringMemberWithDefault());
    derivedStringMemberWithDefaultHasValueOrDefault = true;
  } else {
    derivedStringMemberWithDefaultValue = V8String(isolate, "derivedDefaultStringValue");
    derivedStringMemberWithDefaultHasValueOrDefault = true;
  }
  if (derivedStringMemberWithDefaultHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), derivedStringMemberWithDefaultValue))) {
    return false;
  }

  v8::Local<v8::Value> requiredBooleanMemberValue;
  bool requiredBooleanMemberHasValueOrDefault = false;
  if (impl.hasRequiredBooleanMember()) {
    requiredBooleanMemberValue = v8::Boolean::New(isolate, impl.requiredBooleanMember());
    requiredBooleanMemberHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (requiredBooleanMemberHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), requiredBooleanMemberValue))) {
    return false;
  }

  return true;
}

InternalDictionaryDerived NativeValueTraits<InternalDictionaryDerived>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  InternalDictionaryDerived impl;
  V8InternalDictionaryDerived::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

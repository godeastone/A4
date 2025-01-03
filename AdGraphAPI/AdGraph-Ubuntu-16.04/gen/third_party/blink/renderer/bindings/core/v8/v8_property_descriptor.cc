// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_property_descriptor.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PropertyDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "inherits",
    "initialValue",
    "name",
    "syntax",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PropertyDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PropertyDescriptor& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): name.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PropertyDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> inheritsValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&inheritsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (inheritsValue.IsEmpty() || inheritsValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool inheritsCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, inheritsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setInherits(inheritsCppValue);
  }

  v8::Local<v8::Value> initialValueValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&initialValueValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (initialValueValue.IsEmpty() || initialValueValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> initialValueCppValue = initialValueValue;
    if (!initialValueCppValue.Prepare(exceptionState))
      return;
    impl.setInitialValue(initialValueCppValue);
  }

  v8::Local<v8::Value> nameValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&nameValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (nameValue.IsEmpty() || nameValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member name is undefined.");
    return;
  } else {
    V8StringResource<> nameCppValue = nameValue;
    if (!nameCppValue.Prepare(exceptionState))
      return;
    impl.setName(nameCppValue);
  }

  v8::Local<v8::Value> syntaxValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&syntaxValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (syntaxValue.IsEmpty() || syntaxValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> syntaxCppValue = syntaxValue;
    if (!syntaxCppValue.Prepare(exceptionState))
      return;
    impl.setSyntax(syntaxCppValue);
  }
}

v8::Local<v8::Value> PropertyDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PropertyDescriptor(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PropertyDescriptor(const PropertyDescriptor& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PropertyDescriptorKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> inheritsValue;
  bool inheritsHasValueOrDefault = false;
  if (impl.hasInherits()) {
    inheritsValue = v8::Boolean::New(isolate, impl.inherits());
    inheritsHasValueOrDefault = true;
  } else {
    inheritsValue = v8::Boolean::New(isolate, false);
    inheritsHasValueOrDefault = true;
  }
  if (inheritsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), inheritsValue))) {
    return false;
  }

  v8::Local<v8::Value> initialValueValue;
  bool initialValueHasValueOrDefault = false;
  if (impl.hasInitialValue()) {
    initialValueValue = V8String(isolate, impl.initialValue());
    initialValueHasValueOrDefault = true;
  }
  if (initialValueHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), initialValueValue))) {
    return false;
  }

  v8::Local<v8::Value> nameValue;
  bool nameHasValueOrDefault = false;
  if (impl.hasName()) {
    nameValue = V8String(isolate, impl.name());
    nameHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (nameHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), nameValue))) {
    return false;
  }

  v8::Local<v8::Value> syntaxValue;
  bool syntaxHasValueOrDefault = false;
  if (impl.hasSyntax()) {
    syntaxValue = V8String(isolate, impl.syntax());
    syntaxHasValueOrDefault = true;
  } else {
    syntaxValue = V8String(isolate, "*");
    syntaxHasValueOrDefault = true;
  }
  if (syntaxHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), syntaxValue))) {
    return false;
  }

  return true;
}

PropertyDescriptor NativeValueTraits<PropertyDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PropertyDescriptor impl;
  V8PropertyDescriptor::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

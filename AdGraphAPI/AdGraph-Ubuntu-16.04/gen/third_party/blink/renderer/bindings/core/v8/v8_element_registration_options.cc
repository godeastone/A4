// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_element_registration_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ElementRegistrationOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "extends",
    "prototype",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ElementRegistrationOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ElementRegistrationOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ElementRegistrationOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> extendsValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&extendsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (extendsValue.IsEmpty() || extendsValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<kTreatNullAndUndefinedAsNullString> extendsCppValue = extendsValue;
    if (!extendsCppValue.Prepare(exceptionState))
      return;
    impl.setExtends(extendsCppValue);
  }

  v8::Local<v8::Value> prototypeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&prototypeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (prototypeValue.IsEmpty() || prototypeValue->IsUndefined()) {
    // Do nothing.
  } else if (prototypeValue->IsNull()) {
    impl.setPrototypeToNull();
  } else {
    ScriptValue prototypeCppValue = ScriptValue(ScriptState::Current(isolate), prototypeValue);
    if (!prototypeCppValue.IsObject()) {
      exceptionState.ThrowTypeError("member prototype is not an object.");
      return;
    }
    impl.setPrototype(prototypeCppValue);
  }
}

v8::Local<v8::Value> ElementRegistrationOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ElementRegistrationOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ElementRegistrationOptions(const ElementRegistrationOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ElementRegistrationOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> extendsValue;
  bool extendsHasValueOrDefault = false;
  if (impl.hasExtends()) {
    extendsValue = V8String(isolate, impl.extends());
    extendsHasValueOrDefault = true;
  } else {
    extendsValue = v8::Null(isolate);
    extendsHasValueOrDefault = true;
  }
  if (extendsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), extendsValue))) {
    return false;
  }

  v8::Local<v8::Value> prototypeValue;
  bool prototypeHasValueOrDefault = false;
  if (impl.hasPrototype()) {
    DCHECK(impl.prototype().IsObject());
    prototypeValue = impl.prototype().V8Value();
    prototypeHasValueOrDefault = true;
  } else {
    prototypeValue = v8::Null(isolate);
    prototypeHasValueOrDefault = true;
  }
  if (prototypeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), prototypeValue))) {
    return false;
  }

  return true;
}

ElementRegistrationOptions NativeValueTraits<ElementRegistrationOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ElementRegistrationOptions impl;
  V8ElementRegistrationOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_error_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ErrorEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "colno",
    "error",
    "filename",
    "lineno",
    "message",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ErrorEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ErrorEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8ErrorEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> colnoValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&colnoValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (colnoValue.IsEmpty() || colnoValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t colnoCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, colnoValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setColno(colnoCppValue);
  }

  v8::Local<v8::Value> errorValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&errorValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (errorValue.IsEmpty() || errorValue->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue errorCppValue = ScriptValue(ScriptState::Current(isolate), errorValue);
    impl.setError(errorCppValue);
  }

  v8::Local<v8::Value> filenameValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&filenameValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (filenameValue.IsEmpty() || filenameValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> filenameCppValue = filenameValue;
    if (!filenameCppValue.Prepare(exceptionState))
      return;
    impl.setFilename(filenameCppValue);
  }

  v8::Local<v8::Value> linenoValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&linenoValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (linenoValue.IsEmpty() || linenoValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t linenoCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, linenoValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setLineno(linenoCppValue);
  }

  v8::Local<v8::Value> messageValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&messageValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (messageValue.IsEmpty() || messageValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> messageCppValue = messageValue;
    if (!messageCppValue.Prepare(exceptionState))
      return;
    impl.setMessage(messageCppValue);
  }
}

v8::Local<v8::Value> ErrorEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ErrorEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ErrorEventInit(const ErrorEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8ErrorEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> colnoValue;
  bool colnoHasValueOrDefault = false;
  if (impl.hasColno()) {
    colnoValue = v8::Integer::NewFromUnsigned(isolate, impl.colno());
    colnoHasValueOrDefault = true;
  }
  if (colnoHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), colnoValue))) {
    return false;
  }

  v8::Local<v8::Value> errorValue;
  bool errorHasValueOrDefault = false;
  if (impl.hasError()) {
    errorValue = impl.error().V8Value();
    errorHasValueOrDefault = true;
  }
  if (errorHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), errorValue))) {
    return false;
  }

  v8::Local<v8::Value> filenameValue;
  bool filenameHasValueOrDefault = false;
  if (impl.hasFilename()) {
    filenameValue = V8String(isolate, impl.filename());
    filenameHasValueOrDefault = true;
  }
  if (filenameHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), filenameValue))) {
    return false;
  }

  v8::Local<v8::Value> linenoValue;
  bool linenoHasValueOrDefault = false;
  if (impl.hasLineno()) {
    linenoValue = v8::Integer::NewFromUnsigned(isolate, impl.lineno());
    linenoHasValueOrDefault = true;
  }
  if (linenoHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), linenoValue))) {
    return false;
  }

  v8::Local<v8::Value> messageValue;
  bool messageHasValueOrDefault = false;
  if (impl.hasMessage()) {
    messageValue = V8String(isolate, impl.message());
    messageHasValueOrDefault = true;
  }
  if (messageHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), messageValue))) {
    return false;
  }

  return true;
}

ErrorEventInit NativeValueTraits<ErrorEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ErrorEventInit impl;
  V8ErrorEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

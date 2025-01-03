// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_session_creation_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_presentation_context.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8XRSessionCreationOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "exclusive",
    "outputContext",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8XRSessionCreationOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, XRSessionCreationOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8XRSessionCreationOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> exclusiveValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&exclusiveValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (exclusiveValue.IsEmpty() || exclusiveValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool exclusiveCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, exclusiveValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setExclusive(exclusiveCppValue);
  }

  v8::Local<v8::Value> outputContextValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&outputContextValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (outputContextValue.IsEmpty() || outputContextValue->IsUndefined()) {
    // Do nothing.
  } else {
    XRPresentationContext* outputContextCppValue = V8XRPresentationContext::ToImplWithTypeCheck(isolate, outputContextValue);
    if (!outputContextCppValue) {
      exceptionState.ThrowTypeError("member outputContext is not of type XRPresentationContext.");
      return;
    }
    impl.setOutputContext(outputContextCppValue);
  }
}

v8::Local<v8::Value> XRSessionCreationOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8XRSessionCreationOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8XRSessionCreationOptions(const XRSessionCreationOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8XRSessionCreationOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> exclusiveValue;
  bool exclusiveHasValueOrDefault = false;
  if (impl.hasExclusive()) {
    exclusiveValue = v8::Boolean::New(isolate, impl.exclusive());
    exclusiveHasValueOrDefault = true;
  } else {
    exclusiveValue = v8::Boolean::New(isolate, false);
    exclusiveHasValueOrDefault = true;
  }
  if (exclusiveHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), exclusiveValue))) {
    return false;
  }

  v8::Local<v8::Value> outputContextValue;
  bool outputContextHasValueOrDefault = false;
  if (impl.hasOutputContext()) {
    outputContextValue = ToV8(impl.outputContext(), creationContext, isolate);
    outputContextHasValueOrDefault = true;
  }
  if (outputContextHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), outputContextValue))) {
    return false;
  }

  return true;
}

XRSessionCreationOptions NativeValueTraits<XRSessionCreationOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  XRSessionCreationOptions impl;
  V8XRSessionCreationOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

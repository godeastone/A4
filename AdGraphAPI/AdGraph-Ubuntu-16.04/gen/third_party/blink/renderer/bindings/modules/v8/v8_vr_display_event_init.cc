// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_display_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_display.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8VRDisplayEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "display",
    "reason",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8VRDisplayEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, VRDisplayEventInit& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8VRDisplayEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> displayValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&displayValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (displayValue.IsEmpty() || displayValue->IsUndefined()) {
    // Do nothing.
  } else if (displayValue->IsNull()) {
    impl.setDisplayToNull();
  } else {
    VRDisplay* displayCppValue = V8VRDisplay::ToImplWithTypeCheck(isolate, displayValue);
    if (!displayCppValue) {
      exceptionState.ThrowTypeError("member display is not of type VRDisplay.");
      return;
    }
    impl.setDisplay(displayCppValue);
  }

  v8::Local<v8::Value> reasonValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&reasonValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (reasonValue.IsEmpty() || reasonValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> reasonCppValue = reasonValue;
    if (!reasonCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "connected",
        "disconnected",
        "navigation",
        "mounted",
        "unmounted",
    };
    if (!IsValidEnum(reasonCppValue, validValues, arraysize(validValues), "VRDisplayEventReason", exceptionState))
      return;
    impl.setReason(reasonCppValue);
  }
}

v8::Local<v8::Value> VRDisplayEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8VRDisplayEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8VRDisplayEventInit(const VRDisplayEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8VRDisplayEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> displayValue;
  bool displayHasValueOrDefault = false;
  if (impl.hasDisplay()) {
    displayValue = ToV8(impl.display(), creationContext, isolate);
    displayHasValueOrDefault = true;
  } else {
    displayValue = v8::Null(isolate);
    displayHasValueOrDefault = true;
  }
  if (displayHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), displayValue))) {
    return false;
  }

  v8::Local<v8::Value> reasonValue;
  bool reasonHasValueOrDefault = false;
  if (impl.hasReason()) {
    reasonValue = V8String(isolate, impl.reason());
    reasonHasValueOrDefault = true;
  }
  if (reasonHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), reasonValue))) {
    return false;
  }

  return true;
}

VRDisplayEventInit NativeValueTraits<VRDisplayEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  VRDisplayEventInit impl;
  V8VRDisplayEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

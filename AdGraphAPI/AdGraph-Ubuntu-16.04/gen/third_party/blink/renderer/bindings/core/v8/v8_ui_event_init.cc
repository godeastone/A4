// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_ui_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_input_device_capabilities.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_window.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8UIEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "detail",
    "sourceCapabilities",
    "view",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8UIEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, UIEventInit& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8UIEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> detailValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&detailValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (detailValue.IsEmpty() || detailValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t detailCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, detailValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setDetail(detailCppValue);
  }

  v8::Local<v8::Value> sourceCapabilitiesValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&sourceCapabilitiesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (sourceCapabilitiesValue.IsEmpty() || sourceCapabilitiesValue->IsUndefined()) {
    // Do nothing.
  } else if (sourceCapabilitiesValue->IsNull()) {
    impl.setSourceCapabilitiesToNull();
  } else {
    InputDeviceCapabilities* sourceCapabilitiesCppValue = V8InputDeviceCapabilities::ToImplWithTypeCheck(isolate, sourceCapabilitiesValue);
    if (!sourceCapabilitiesCppValue) {
      exceptionState.ThrowTypeError("member sourceCapabilities is not of type InputDeviceCapabilities.");
      return;
    }
    impl.setSourceCapabilities(sourceCapabilitiesCppValue);
  }

  v8::Local<v8::Value> viewValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&viewValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (viewValue.IsEmpty() || viewValue->IsUndefined()) {
    // Do nothing.
  } else if (viewValue->IsNull()) {
    impl.setViewToNull();
  } else {
    DOMWindow* viewCppValue = ToDOMWindow(isolate, viewValue);
    if (!viewCppValue) {
      exceptionState.ThrowTypeError("member view is not of type Window.");
      return;
    }
    impl.setView(viewCppValue);
  }
}

v8::Local<v8::Value> UIEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8UIEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8UIEventInit(const UIEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8UIEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> detailValue;
  bool detailHasValueOrDefault = false;
  if (impl.hasDetail()) {
    detailValue = v8::Integer::New(isolate, impl.detail());
    detailHasValueOrDefault = true;
  } else {
    detailValue = v8::Integer::New(isolate, 0);
    detailHasValueOrDefault = true;
  }
  if (detailHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), detailValue))) {
    return false;
  }

  v8::Local<v8::Value> sourceCapabilitiesValue;
  bool sourceCapabilitiesHasValueOrDefault = false;
  if (impl.hasSourceCapabilities()) {
    sourceCapabilitiesValue = ToV8(impl.sourceCapabilities(), creationContext, isolate);
    sourceCapabilitiesHasValueOrDefault = true;
  } else {
    sourceCapabilitiesValue = v8::Null(isolate);
    sourceCapabilitiesHasValueOrDefault = true;
  }
  if (sourceCapabilitiesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), sourceCapabilitiesValue))) {
    return false;
  }

  v8::Local<v8::Value> viewValue;
  bool viewHasValueOrDefault = false;
  if (impl.hasView()) {
    viewValue = ToV8(impl.view(), creationContext, isolate);
    viewHasValueOrDefault = true;
  } else {
    viewValue = v8::Null(isolate);
    viewHasValueOrDefault = true;
  }
  if (viewHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), viewValue))) {
    return false;
  }

  return true;
}

UIEventInit NativeValueTraits<UIEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  UIEventInit impl;
  V8UIEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

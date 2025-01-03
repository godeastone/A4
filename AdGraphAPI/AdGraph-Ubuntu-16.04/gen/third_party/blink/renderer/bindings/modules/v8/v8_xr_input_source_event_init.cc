// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_input_source_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_input_source.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_presentation_frame.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8XRInputSourceEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "frame",
    "inputSource",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8XRInputSourceEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, XRInputSourceEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): frame, inputSource.");
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

  const v8::Eternal<v8::Name>* keys = eternalV8XRInputSourceEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> frameValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&frameValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (frameValue.IsEmpty() || frameValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member frame is undefined.");
    return;
  } else {
    XRPresentationFrame* frameCppValue = V8XRPresentationFrame::ToImplWithTypeCheck(isolate, frameValue);
    if (!frameCppValue) {
      exceptionState.ThrowTypeError("member frame is not of type XRPresentationFrame.");
      return;
    }
    impl.setFrame(frameCppValue);
  }

  v8::Local<v8::Value> inputSourceValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&inputSourceValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (inputSourceValue.IsEmpty() || inputSourceValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member inputSource is undefined.");
    return;
  } else {
    XRInputSource* inputSourceCppValue = V8XRInputSource::ToImplWithTypeCheck(isolate, inputSourceValue);
    if (!inputSourceCppValue) {
      exceptionState.ThrowTypeError("member inputSource is not of type XRInputSource.");
      return;
    }
    impl.setInputSource(inputSourceCppValue);
  }
}

v8::Local<v8::Value> XRInputSourceEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8XRInputSourceEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8XRInputSourceEventInit(const XRInputSourceEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8XRInputSourceEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> frameValue;
  bool frameHasValueOrDefault = false;
  if (impl.hasFrame()) {
    frameValue = ToV8(impl.frame(), creationContext, isolate);
    frameHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (frameHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), frameValue))) {
    return false;
  }

  v8::Local<v8::Value> inputSourceValue;
  bool inputSourceHasValueOrDefault = false;
  if (impl.hasInputSource()) {
    inputSourceValue = ToV8(impl.inputSource(), creationContext, isolate);
    inputSourceHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (inputSourceHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), inputSourceValue))) {
    return false;
  }

  return true;
}

XRInputSourceEventInit NativeValueTraits<XRInputSourceEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  XRInputSourceEventInit impl;
  V8XRInputSourceEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

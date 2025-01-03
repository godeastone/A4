// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mouse_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_modifier_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_target.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MouseEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "button",
    "buttons",
    "clientX",
    "clientY",
    "movementX",
    "movementY",
    "region",
    "relatedTarget",
    "screenX",
    "screenY",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MouseEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MouseEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventModifierInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8MouseEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> buttonValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&buttonValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (buttonValue.IsEmpty() || buttonValue->IsUndefined()) {
    // Do nothing.
  } else {
    int16_t buttonCppValue = NativeValueTraits<IDLShort>::NativeValue(isolate, buttonValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setButton(buttonCppValue);
  }

  v8::Local<v8::Value> buttonsValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&buttonsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (buttonsValue.IsEmpty() || buttonsValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t buttonsCppValue = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, buttonsValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setButtons(buttonsCppValue);
  }

  v8::Local<v8::Value> clientXValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&clientXValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (clientXValue.IsEmpty() || clientXValue->IsUndefined()) {
    // Do nothing.
  } else {
    double clientXCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, clientXValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setClientX(clientXCppValue);
  }

  v8::Local<v8::Value> clientYValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&clientYValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (clientYValue.IsEmpty() || clientYValue->IsUndefined()) {
    // Do nothing.
  } else {
    double clientYCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, clientYValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setClientY(clientYCppValue);
  }

  v8::Local<v8::Value> movementXValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&movementXValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (movementXValue.IsEmpty() || movementXValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t movementXCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, movementXValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setMovementX(movementXCppValue);
  }

  v8::Local<v8::Value> movementYValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&movementYValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (movementYValue.IsEmpty() || movementYValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t movementYCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, movementYValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setMovementY(movementYCppValue);
  }

  v8::Local<v8::Value> regionValue;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&regionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (regionValue.IsEmpty() || regionValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<kTreatNullAndUndefinedAsNullString> regionCppValue = regionValue;
    if (!regionCppValue.Prepare(exceptionState))
      return;
    impl.setRegion(regionCppValue);
  }

  v8::Local<v8::Value> relatedTargetValue;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&relatedTargetValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (relatedTargetValue.IsEmpty() || relatedTargetValue->IsUndefined()) {
    // Do nothing.
  } else if (relatedTargetValue->IsNull()) {
    impl.setRelatedTargetToNull();
  } else {
    EventTarget* relatedTargetCppValue = V8EventTarget::ToImplWithTypeCheck(isolate, relatedTargetValue);
    if (!relatedTargetCppValue) {
      exceptionState.ThrowTypeError("member relatedTarget is not of type EventTarget.");
      return;
    }
    impl.setRelatedTarget(relatedTargetCppValue);
  }

  v8::Local<v8::Value> screenXValue;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&screenXValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (screenXValue.IsEmpty() || screenXValue->IsUndefined()) {
    // Do nothing.
  } else {
    double screenXCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, screenXValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setScreenX(screenXCppValue);
  }

  v8::Local<v8::Value> screenYValue;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&screenYValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (screenYValue.IsEmpty() || screenYValue->IsUndefined()) {
    // Do nothing.
  } else {
    double screenYCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, screenYValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setScreenY(screenYCppValue);
  }
}

v8::Local<v8::Value> MouseEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MouseEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MouseEventInit(const MouseEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventModifierInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8MouseEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> buttonValue;
  bool buttonHasValueOrDefault = false;
  if (impl.hasButton()) {
    buttonValue = v8::Integer::New(isolate, impl.button());
    buttonHasValueOrDefault = true;
  } else {
    buttonValue = v8::Integer::New(isolate, 0);
    buttonHasValueOrDefault = true;
  }
  if (buttonHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), buttonValue))) {
    return false;
  }

  v8::Local<v8::Value> buttonsValue;
  bool buttonsHasValueOrDefault = false;
  if (impl.hasButtons()) {
    buttonsValue = v8::Integer::NewFromUnsigned(isolate, impl.buttons());
    buttonsHasValueOrDefault = true;
  } else {
    buttonsValue = v8::Integer::NewFromUnsigned(isolate, 0u);
    buttonsHasValueOrDefault = true;
  }
  if (buttonsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), buttonsValue))) {
    return false;
  }

  v8::Local<v8::Value> clientXValue;
  bool clientXHasValueOrDefault = false;
  if (impl.hasClientX()) {
    clientXValue = v8::Number::New(isolate, impl.clientX());
    clientXHasValueOrDefault = true;
  } else {
    clientXValue = v8::Number::New(isolate, 0);
    clientXHasValueOrDefault = true;
  }
  if (clientXHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), clientXValue))) {
    return false;
  }

  v8::Local<v8::Value> clientYValue;
  bool clientYHasValueOrDefault = false;
  if (impl.hasClientY()) {
    clientYValue = v8::Number::New(isolate, impl.clientY());
    clientYHasValueOrDefault = true;
  } else {
    clientYValue = v8::Number::New(isolate, 0);
    clientYHasValueOrDefault = true;
  }
  if (clientYHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), clientYValue))) {
    return false;
  }

  v8::Local<v8::Value> movementXValue;
  bool movementXHasValueOrDefault = false;
  if (impl.hasMovementX()) {
    movementXValue = v8::Integer::New(isolate, impl.movementX());
    movementXHasValueOrDefault = true;
  } else {
    movementXValue = v8::Integer::New(isolate, 0);
    movementXHasValueOrDefault = true;
  }
  if (movementXHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), movementXValue))) {
    return false;
  }

  v8::Local<v8::Value> movementYValue;
  bool movementYHasValueOrDefault = false;
  if (impl.hasMovementY()) {
    movementYValue = v8::Integer::New(isolate, impl.movementY());
    movementYHasValueOrDefault = true;
  } else {
    movementYValue = v8::Integer::New(isolate, 0);
    movementYHasValueOrDefault = true;
  }
  if (movementYHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), movementYValue))) {
    return false;
  }

  v8::Local<v8::Value> regionValue;
  bool regionHasValueOrDefault = false;
  if (impl.hasRegion()) {
    regionValue = V8String(isolate, impl.region());
    regionHasValueOrDefault = true;
  } else {
    regionValue = v8::Null(isolate);
    regionHasValueOrDefault = true;
  }
  if (regionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), regionValue))) {
    return false;
  }

  v8::Local<v8::Value> relatedTargetValue;
  bool relatedTargetHasValueOrDefault = false;
  if (impl.hasRelatedTarget()) {
    relatedTargetValue = ToV8(impl.relatedTarget(), creationContext, isolate);
    relatedTargetHasValueOrDefault = true;
  } else {
    relatedTargetValue = v8::Null(isolate);
    relatedTargetHasValueOrDefault = true;
  }
  if (relatedTargetHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[7].Get(isolate), relatedTargetValue))) {
    return false;
  }

  v8::Local<v8::Value> screenXValue;
  bool screenXHasValueOrDefault = false;
  if (impl.hasScreenX()) {
    screenXValue = v8::Number::New(isolate, impl.screenX());
    screenXHasValueOrDefault = true;
  } else {
    screenXValue = v8::Number::New(isolate, 0);
    screenXHasValueOrDefault = true;
  }
  if (screenXHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[8].Get(isolate), screenXValue))) {
    return false;
  }

  v8::Local<v8::Value> screenYValue;
  bool screenYHasValueOrDefault = false;
  if (impl.hasScreenY()) {
    screenYValue = v8::Number::New(isolate, impl.screenY());
    screenYHasValueOrDefault = true;
  } else {
    screenYValue = v8::Number::New(isolate, 0);
    screenYHasValueOrDefault = true;
  }
  if (screenYHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[9].Get(isolate), screenYValue))) {
    return false;
  }

  return true;
}

MouseEventInit NativeValueTraits<MouseEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MouseEventInit impl;
  V8MouseEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

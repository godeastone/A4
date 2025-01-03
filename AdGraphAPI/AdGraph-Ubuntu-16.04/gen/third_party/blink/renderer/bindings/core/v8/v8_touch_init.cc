// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_touch_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_target.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8TouchInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "clientX",
    "clientY",
    "force",
    "identifier",
    "pageX",
    "pageY",
    "radiusX",
    "radiusY",
    "region",
    "rotationAngle",
    "screenX",
    "screenY",
    "target",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8TouchInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, TouchInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): identifier, target.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8TouchInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> clientXValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&clientXValue)) {
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
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&clientYValue)) {
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

  v8::Local<v8::Value> forceValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&forceValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (forceValue.IsEmpty() || forceValue->IsUndefined()) {
    // Do nothing.
  } else {
    float forceCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, forceValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setForce(forceCppValue);
  }

  v8::Local<v8::Value> identifierValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&identifierValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (identifierValue.IsEmpty() || identifierValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member identifier is undefined.");
    return;
  } else {
    int32_t identifierCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, identifierValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setIdentifier(identifierCppValue);
  }

  v8::Local<v8::Value> pageXValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&pageXValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (pageXValue.IsEmpty() || pageXValue->IsUndefined()) {
    // Do nothing.
  } else {
    double pageXCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, pageXValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPageX(pageXCppValue);
  }

  v8::Local<v8::Value> pageYValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&pageYValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (pageYValue.IsEmpty() || pageYValue->IsUndefined()) {
    // Do nothing.
  } else {
    double pageYCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, pageYValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPageY(pageYCppValue);
  }

  v8::Local<v8::Value> radiusXValue;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&radiusXValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (radiusXValue.IsEmpty() || radiusXValue->IsUndefined()) {
    // Do nothing.
  } else {
    float radiusXCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, radiusXValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRadiusX(radiusXCppValue);
  }

  v8::Local<v8::Value> radiusYValue;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&radiusYValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (radiusYValue.IsEmpty() || radiusYValue->IsUndefined()) {
    // Do nothing.
  } else {
    float radiusYCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, radiusYValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRadiusY(radiusYCppValue);
  }

  v8::Local<v8::Value> regionValue;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&regionValue)) {
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

  v8::Local<v8::Value> rotationAngleValue;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&rotationAngleValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (rotationAngleValue.IsEmpty() || rotationAngleValue->IsUndefined()) {
    // Do nothing.
  } else {
    float rotationAngleCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, rotationAngleValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRotationAngle(rotationAngleCppValue);
  }

  v8::Local<v8::Value> screenXValue;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&screenXValue)) {
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
  if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&screenYValue)) {
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

  v8::Local<v8::Value> targetValue;
  if (!v8Object->Get(context, keys[12].Get(isolate)).ToLocal(&targetValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (targetValue.IsEmpty() || targetValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member target is undefined.");
    return;
  } else {
    EventTarget* targetCppValue = V8EventTarget::ToImplWithTypeCheck(isolate, targetValue);
    if (!targetCppValue) {
      exceptionState.ThrowTypeError("member target is not of type EventTarget.");
      return;
    }
    impl.setTarget(targetCppValue);
  }
}

v8::Local<v8::Value> TouchInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8TouchInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8TouchInit(const TouchInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8TouchInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
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
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), clientXValue))) {
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
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), clientYValue))) {
    return false;
  }

  v8::Local<v8::Value> forceValue;
  bool forceHasValueOrDefault = false;
  if (impl.hasForce()) {
    forceValue = v8::Number::New(isolate, impl.force());
    forceHasValueOrDefault = true;
  } else {
    forceValue = v8::Number::New(isolate, 0);
    forceHasValueOrDefault = true;
  }
  if (forceHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), forceValue))) {
    return false;
  }

  v8::Local<v8::Value> identifierValue;
  bool identifierHasValueOrDefault = false;
  if (impl.hasIdentifier()) {
    identifierValue = v8::Integer::New(isolate, impl.identifier());
    identifierHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (identifierHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), identifierValue))) {
    return false;
  }

  v8::Local<v8::Value> pageXValue;
  bool pageXHasValueOrDefault = false;
  if (impl.hasPageX()) {
    pageXValue = v8::Number::New(isolate, impl.pageX());
    pageXHasValueOrDefault = true;
  } else {
    pageXValue = v8::Number::New(isolate, 0);
    pageXHasValueOrDefault = true;
  }
  if (pageXHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), pageXValue))) {
    return false;
  }

  v8::Local<v8::Value> pageYValue;
  bool pageYHasValueOrDefault = false;
  if (impl.hasPageY()) {
    pageYValue = v8::Number::New(isolate, impl.pageY());
    pageYHasValueOrDefault = true;
  } else {
    pageYValue = v8::Number::New(isolate, 0);
    pageYHasValueOrDefault = true;
  }
  if (pageYHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), pageYValue))) {
    return false;
  }

  v8::Local<v8::Value> radiusXValue;
  bool radiusXHasValueOrDefault = false;
  if (impl.hasRadiusX()) {
    radiusXValue = v8::Number::New(isolate, impl.radiusX());
    radiusXHasValueOrDefault = true;
  } else {
    radiusXValue = v8::Number::New(isolate, 0);
    radiusXHasValueOrDefault = true;
  }
  if (radiusXHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), radiusXValue))) {
    return false;
  }

  v8::Local<v8::Value> radiusYValue;
  bool radiusYHasValueOrDefault = false;
  if (impl.hasRadiusY()) {
    radiusYValue = v8::Number::New(isolate, impl.radiusY());
    radiusYHasValueOrDefault = true;
  } else {
    radiusYValue = v8::Number::New(isolate, 0);
    radiusYHasValueOrDefault = true;
  }
  if (radiusYHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[7].Get(isolate), radiusYValue))) {
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
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[8].Get(isolate), regionValue))) {
    return false;
  }

  v8::Local<v8::Value> rotationAngleValue;
  bool rotationAngleHasValueOrDefault = false;
  if (impl.hasRotationAngle()) {
    rotationAngleValue = v8::Number::New(isolate, impl.rotationAngle());
    rotationAngleHasValueOrDefault = true;
  } else {
    rotationAngleValue = v8::Number::New(isolate, 0);
    rotationAngleHasValueOrDefault = true;
  }
  if (rotationAngleHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[9].Get(isolate), rotationAngleValue))) {
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
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[10].Get(isolate), screenXValue))) {
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
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[11].Get(isolate), screenYValue))) {
    return false;
  }

  v8::Local<v8::Value> targetValue;
  bool targetHasValueOrDefault = false;
  if (impl.hasTarget()) {
    targetValue = ToV8(impl.target(), creationContext, isolate);
    targetHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (targetHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[12].Get(isolate), targetValue))) {
    return false;
  }

  return true;
}

TouchInit NativeValueTraits<TouchInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  TouchInit impl;
  V8TouchInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

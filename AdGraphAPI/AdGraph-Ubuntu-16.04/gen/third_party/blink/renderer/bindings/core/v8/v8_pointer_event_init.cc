// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_pointer_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mouse_event_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_pointer_event.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PointerEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "coalescedEvents",
    "height",
    "isPrimary",
    "pointerId",
    "pointerType",
    "pressure",
    "tangentialPressure",
    "tiltX",
    "tiltY",
    "twist",
    "width",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PointerEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PointerEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8MouseEventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8PointerEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> coalescedEventsValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&coalescedEventsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (coalescedEventsValue.IsEmpty() || coalescedEventsValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<PointerEvent>> coalescedEventsCppValue = NativeValueTraits<IDLSequence<PointerEvent>>::NativeValue(isolate, coalescedEventsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setCoalescedEvents(coalescedEventsCppValue);
  }

  v8::Local<v8::Value> heightValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&heightValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (heightValue.IsEmpty() || heightValue->IsUndefined()) {
    // Do nothing.
  } else {
    double heightCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, heightValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setHeight(heightCppValue);
  }

  v8::Local<v8::Value> isPrimaryValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&isPrimaryValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (isPrimaryValue.IsEmpty() || isPrimaryValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool isPrimaryCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, isPrimaryValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIsPrimary(isPrimaryCppValue);
  }

  v8::Local<v8::Value> pointerIdValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&pointerIdValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (pointerIdValue.IsEmpty() || pointerIdValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t pointerIdCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, pointerIdValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setPointerId(pointerIdCppValue);
  }

  v8::Local<v8::Value> pointerTypeValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&pointerTypeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (pointerTypeValue.IsEmpty() || pointerTypeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> pointerTypeCppValue = pointerTypeValue;
    if (!pointerTypeCppValue.Prepare(exceptionState))
      return;
    impl.setPointerType(pointerTypeCppValue);
  }

  v8::Local<v8::Value> pressureValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&pressureValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (pressureValue.IsEmpty() || pressureValue->IsUndefined()) {
    // Do nothing.
  } else {
    float pressureCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, pressureValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPressure(pressureCppValue);
  }

  v8::Local<v8::Value> tangentialPressureValue;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&tangentialPressureValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (tangentialPressureValue.IsEmpty() || tangentialPressureValue->IsUndefined()) {
    // Do nothing.
  } else {
    float tangentialPressureCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, tangentialPressureValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setTangentialPressure(tangentialPressureCppValue);
  }

  v8::Local<v8::Value> tiltXValue;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&tiltXValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (tiltXValue.IsEmpty() || tiltXValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t tiltXCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, tiltXValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setTiltX(tiltXCppValue);
  }

  v8::Local<v8::Value> tiltYValue;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&tiltYValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (tiltYValue.IsEmpty() || tiltYValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t tiltYCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, tiltYValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setTiltY(tiltYCppValue);
  }

  v8::Local<v8::Value> twistValue;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&twistValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (twistValue.IsEmpty() || twistValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t twistCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, twistValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setTwist(twistCppValue);
  }

  v8::Local<v8::Value> widthValue;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&widthValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (widthValue.IsEmpty() || widthValue->IsUndefined()) {
    // Do nothing.
  } else {
    double widthCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, widthValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setWidth(widthCppValue);
  }
}

v8::Local<v8::Value> PointerEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PointerEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PointerEventInit(const PointerEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8MouseEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8PointerEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> coalescedEventsValue;
  bool coalescedEventsHasValueOrDefault = false;
  if (impl.hasCoalescedEvents()) {
    coalescedEventsValue = ToV8(impl.coalescedEvents(), creationContext, isolate);
    coalescedEventsHasValueOrDefault = true;
  } else {
    coalescedEventsValue = ToV8(HeapVector<Member<PointerEvent>>(), creationContext, isolate);
    coalescedEventsHasValueOrDefault = true;
  }
  if (coalescedEventsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), coalescedEventsValue))) {
    return false;
  }

  v8::Local<v8::Value> heightValue;
  bool heightHasValueOrDefault = false;
  if (impl.hasHeight()) {
    heightValue = v8::Number::New(isolate, impl.height());
    heightHasValueOrDefault = true;
  } else {
    heightValue = v8::Number::New(isolate, 1);
    heightHasValueOrDefault = true;
  }
  if (heightHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), heightValue))) {
    return false;
  }

  v8::Local<v8::Value> isPrimaryValue;
  bool isPrimaryHasValueOrDefault = false;
  if (impl.hasIsPrimary()) {
    isPrimaryValue = v8::Boolean::New(isolate, impl.isPrimary());
    isPrimaryHasValueOrDefault = true;
  } else {
    isPrimaryValue = v8::Boolean::New(isolate, false);
    isPrimaryHasValueOrDefault = true;
  }
  if (isPrimaryHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), isPrimaryValue))) {
    return false;
  }

  v8::Local<v8::Value> pointerIdValue;
  bool pointerIdHasValueOrDefault = false;
  if (impl.hasPointerId()) {
    pointerIdValue = v8::Integer::New(isolate, impl.pointerId());
    pointerIdHasValueOrDefault = true;
  } else {
    pointerIdValue = v8::Integer::New(isolate, 0);
    pointerIdHasValueOrDefault = true;
  }
  if (pointerIdHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), pointerIdValue))) {
    return false;
  }

  v8::Local<v8::Value> pointerTypeValue;
  bool pointerTypeHasValueOrDefault = false;
  if (impl.hasPointerType()) {
    pointerTypeValue = V8String(isolate, impl.pointerType());
    pointerTypeHasValueOrDefault = true;
  } else {
    pointerTypeValue = V8String(isolate, WTF::g_empty_string);
    pointerTypeHasValueOrDefault = true;
  }
  if (pointerTypeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), pointerTypeValue))) {
    return false;
  }

  v8::Local<v8::Value> pressureValue;
  bool pressureHasValueOrDefault = false;
  if (impl.hasPressure()) {
    pressureValue = v8::Number::New(isolate, impl.pressure());
    pressureHasValueOrDefault = true;
  } else {
    pressureValue = v8::Number::New(isolate, 0);
    pressureHasValueOrDefault = true;
  }
  if (pressureHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), pressureValue))) {
    return false;
  }

  v8::Local<v8::Value> tangentialPressureValue;
  bool tangentialPressureHasValueOrDefault = false;
  if (impl.hasTangentialPressure()) {
    tangentialPressureValue = v8::Number::New(isolate, impl.tangentialPressure());
    tangentialPressureHasValueOrDefault = true;
  } else {
    tangentialPressureValue = v8::Number::New(isolate, 0);
    tangentialPressureHasValueOrDefault = true;
  }
  if (tangentialPressureHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), tangentialPressureValue))) {
    return false;
  }

  v8::Local<v8::Value> tiltXValue;
  bool tiltXHasValueOrDefault = false;
  if (impl.hasTiltX()) {
    tiltXValue = v8::Integer::New(isolate, impl.tiltX());
    tiltXHasValueOrDefault = true;
  } else {
    tiltXValue = v8::Integer::New(isolate, 0);
    tiltXHasValueOrDefault = true;
  }
  if (tiltXHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[7].Get(isolate), tiltXValue))) {
    return false;
  }

  v8::Local<v8::Value> tiltYValue;
  bool tiltYHasValueOrDefault = false;
  if (impl.hasTiltY()) {
    tiltYValue = v8::Integer::New(isolate, impl.tiltY());
    tiltYHasValueOrDefault = true;
  } else {
    tiltYValue = v8::Integer::New(isolate, 0);
    tiltYHasValueOrDefault = true;
  }
  if (tiltYHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[8].Get(isolate), tiltYValue))) {
    return false;
  }

  v8::Local<v8::Value> twistValue;
  bool twistHasValueOrDefault = false;
  if (impl.hasTwist()) {
    twistValue = v8::Integer::New(isolate, impl.twist());
    twistHasValueOrDefault = true;
  } else {
    twistValue = v8::Integer::New(isolate, 0);
    twistHasValueOrDefault = true;
  }
  if (twistHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[9].Get(isolate), twistValue))) {
    return false;
  }

  v8::Local<v8::Value> widthValue;
  bool widthHasValueOrDefault = false;
  if (impl.hasWidth()) {
    widthValue = v8::Number::New(isolate, impl.width());
    widthHasValueOrDefault = true;
  } else {
    widthValue = v8::Number::New(isolate, 1);
    widthHasValueOrDefault = true;
  }
  if (widthHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[10].Get(isolate), widthValue))) {
    return false;
  }

  return true;
}

PointerEventInit NativeValueTraits<PointerEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PointerEventInit impl;
  V8PointerEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

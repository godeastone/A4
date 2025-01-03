// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_touch_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_modifier_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_touch.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8TouchEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "changedTouches",
    "targetTouches",
    "touches",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8TouchEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, TouchEventInit& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8TouchEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> changedTouchesValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&changedTouchesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (changedTouchesValue.IsEmpty() || changedTouchesValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<Touch>> changedTouchesCppValue = NativeValueTraits<IDLSequence<Touch>>::NativeValue(isolate, changedTouchesValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setChangedTouches(changedTouchesCppValue);
  }

  v8::Local<v8::Value> targetTouchesValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&targetTouchesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (targetTouchesValue.IsEmpty() || targetTouchesValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<Touch>> targetTouchesCppValue = NativeValueTraits<IDLSequence<Touch>>::NativeValue(isolate, targetTouchesValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setTargetTouches(targetTouchesCppValue);
  }

  v8::Local<v8::Value> touchesValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&touchesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (touchesValue.IsEmpty() || touchesValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<Touch>> touchesCppValue = NativeValueTraits<IDLSequence<Touch>>::NativeValue(isolate, touchesValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setTouches(touchesCppValue);
  }
}

v8::Local<v8::Value> TouchEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8TouchEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8TouchEventInit(const TouchEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventModifierInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8TouchEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> changedTouchesValue;
  bool changedTouchesHasValueOrDefault = false;
  if (impl.hasChangedTouches()) {
    changedTouchesValue = ToV8(impl.changedTouches(), creationContext, isolate);
    changedTouchesHasValueOrDefault = true;
  } else {
    changedTouchesValue = ToV8(HeapVector<Member<Touch>>(), creationContext, isolate);
    changedTouchesHasValueOrDefault = true;
  }
  if (changedTouchesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), changedTouchesValue))) {
    return false;
  }

  v8::Local<v8::Value> targetTouchesValue;
  bool targetTouchesHasValueOrDefault = false;
  if (impl.hasTargetTouches()) {
    targetTouchesValue = ToV8(impl.targetTouches(), creationContext, isolate);
    targetTouchesHasValueOrDefault = true;
  } else {
    targetTouchesValue = ToV8(HeapVector<Member<Touch>>(), creationContext, isolate);
    targetTouchesHasValueOrDefault = true;
  }
  if (targetTouchesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), targetTouchesValue))) {
    return false;
  }

  v8::Local<v8::Value> touchesValue;
  bool touchesHasValueOrDefault = false;
  if (impl.hasTouches()) {
    touchesValue = ToV8(impl.touches(), creationContext, isolate);
    touchesHasValueOrDefault = true;
  } else {
    touchesValue = ToV8(HeapVector<Member<Touch>>(), creationContext, isolate);
    touchesHasValueOrDefault = true;
  }
  if (touchesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), touchesValue))) {
    return false;
  }

  return true;
}

TouchEventInit NativeValueTraits<TouchEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  TouchEventInit impl;
  V8TouchEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

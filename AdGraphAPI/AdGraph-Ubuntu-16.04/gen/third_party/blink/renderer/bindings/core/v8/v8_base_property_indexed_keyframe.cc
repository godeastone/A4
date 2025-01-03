// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_base_property_indexed_keyframe.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8BasePropertyIndexedKeyframeKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "composite",
    "easing",
    "offset",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8BasePropertyIndexedKeyframe::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, BasePropertyIndexedKeyframe& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8BasePropertyIndexedKeyframeKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> compositeValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&compositeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (compositeValue.IsEmpty() || compositeValue->IsUndefined()) {
    // Do nothing.
  } else {
    CompositeOperationOrCompositeOperationOrNullSequence compositeCppValue;
    V8CompositeOperationOrCompositeOperationOrNullSequence::ToImpl(isolate, compositeValue, compositeCppValue, UnionTypeConversionMode::kNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setComposite(compositeCppValue);
  }

  v8::Local<v8::Value> easingValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&easingValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (easingValue.IsEmpty() || easingValue->IsUndefined()) {
    // Do nothing.
  } else {
    StringOrStringSequence easingCppValue;
    V8StringOrStringSequence::ToImpl(isolate, easingValue, easingCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setEasing(easingCppValue);
  }

  v8::Local<v8::Value> offsetValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&offsetValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (offsetValue.IsEmpty() || offsetValue->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrDoubleOrNullSequence offsetCppValue;
    V8DoubleOrDoubleOrNullSequence::ToImpl(isolate, offsetValue, offsetCppValue, UnionTypeConversionMode::kNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setOffset(offsetCppValue);
  }
}

v8::Local<v8::Value> BasePropertyIndexedKeyframe::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8BasePropertyIndexedKeyframe(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8BasePropertyIndexedKeyframe(const BasePropertyIndexedKeyframe& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8BasePropertyIndexedKeyframeKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> compositeValue;
  bool compositeHasValueOrDefault = false;
  if (impl.hasComposite()) {
    compositeValue = ToV8(impl.composite(), creationContext, isolate);
    compositeHasValueOrDefault = true;
  } else {
    compositeValue = ToV8(CompositeOperationOrCompositeOperationOrNullSequence::FromCompositeOperationOrNullSequence(Vector<String>()), creationContext, isolate);
    compositeHasValueOrDefault = true;
  }
  if (compositeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), compositeValue))) {
    return false;
  }

  v8::Local<v8::Value> easingValue;
  bool easingHasValueOrDefault = false;
  if (impl.hasEasing()) {
    easingValue = ToV8(impl.easing(), creationContext, isolate);
    easingHasValueOrDefault = true;
  } else {
    easingValue = ToV8(StringOrStringSequence::FromStringSequence(Vector<String>()), creationContext, isolate);
    easingHasValueOrDefault = true;
  }
  if (easingHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), easingValue))) {
    return false;
  }

  v8::Local<v8::Value> offsetValue;
  bool offsetHasValueOrDefault = false;
  if (impl.hasOffset()) {
    offsetValue = ToV8(impl.offset(), creationContext, isolate);
    offsetHasValueOrDefault = true;
  } else {
    offsetValue = ToV8(DoubleOrDoubleOrNullSequence::FromDoubleOrNullSequence(Vector<base::Optional<double>>()), creationContext, isolate);
    offsetHasValueOrDefault = true;
  }
  if (offsetHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), offsetValue))) {
    return false;
  }

  return true;
}

BasePropertyIndexedKeyframe NativeValueTraits<BasePropertyIndexedKeyframe>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  BasePropertyIndexedKeyframe impl;
  V8BasePropertyIndexedKeyframe::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

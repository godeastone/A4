// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_fragment_result_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_layout_fragment.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8FragmentResultOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "autoBlockSize",
    "childFragments",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8FragmentResultOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, FragmentResultOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8FragmentResultOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> autoBlockSizeValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&autoBlockSizeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (autoBlockSizeValue.IsEmpty() || autoBlockSizeValue->IsUndefined()) {
    // Do nothing.
  } else {
    double autoBlockSizeCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, autoBlockSizeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAutoBlockSize(autoBlockSizeCppValue);
  }

  v8::Local<v8::Value> childFragmentsValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&childFragmentsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (childFragmentsValue.IsEmpty() || childFragmentsValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<CustomLayoutFragment>> childFragmentsCppValue = NativeValueTraits<IDLSequence<CustomLayoutFragment>>::NativeValue(isolate, childFragmentsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setChildFragments(childFragmentsCppValue);
  }
}

v8::Local<v8::Value> FragmentResultOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8FragmentResultOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8FragmentResultOptions(const FragmentResultOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8FragmentResultOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> autoBlockSizeValue;
  bool autoBlockSizeHasValueOrDefault = false;
  if (impl.hasAutoBlockSize()) {
    autoBlockSizeValue = v8::Number::New(isolate, impl.autoBlockSize());
    autoBlockSizeHasValueOrDefault = true;
  } else {
    autoBlockSizeValue = v8::Number::New(isolate, 0);
    autoBlockSizeHasValueOrDefault = true;
  }
  if (autoBlockSizeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), autoBlockSizeValue))) {
    return false;
  }

  v8::Local<v8::Value> childFragmentsValue;
  bool childFragmentsHasValueOrDefault = false;
  if (impl.hasChildFragments()) {
    childFragmentsValue = ToV8(impl.childFragments(), creationContext, isolate);
    childFragmentsHasValueOrDefault = true;
  } else {
    childFragmentsValue = ToV8(HeapVector<Member<CustomLayoutFragment>>(), creationContext, isolate);
    childFragmentsHasValueOrDefault = true;
  }
  if (childFragmentsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), childFragmentsValue))) {
    return false;
  }

  return true;
}

FragmentResultOptions NativeValueTraits<FragmentResultOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  FragmentResultOptions impl;
  V8FragmentResultOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

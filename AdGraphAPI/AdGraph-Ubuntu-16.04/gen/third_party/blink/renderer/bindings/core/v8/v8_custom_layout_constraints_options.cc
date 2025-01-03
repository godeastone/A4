// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_custom_layout_constraints_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CustomLayoutConstraintsOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "availableBlockSize",
    "availableInlineSize",
    "fixedBlockSize",
    "fixedInlineSize",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8CustomLayoutConstraintsOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CustomLayoutConstraintsOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CustomLayoutConstraintsOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> availableBlockSizeValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&availableBlockSizeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (availableBlockSizeValue.IsEmpty() || availableBlockSizeValue->IsUndefined()) {
    // Do nothing.
  } else {
    double availableBlockSizeCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, availableBlockSizeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAvailableBlockSize(availableBlockSizeCppValue);
  }

  v8::Local<v8::Value> availableInlineSizeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&availableInlineSizeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (availableInlineSizeValue.IsEmpty() || availableInlineSizeValue->IsUndefined()) {
    // Do nothing.
  } else {
    double availableInlineSizeCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, availableInlineSizeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAvailableInlineSize(availableInlineSizeCppValue);
  }

  v8::Local<v8::Value> fixedBlockSizeValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&fixedBlockSizeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (fixedBlockSizeValue.IsEmpty() || fixedBlockSizeValue->IsUndefined()) {
    // Do nothing.
  } else {
    double fixedBlockSizeCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, fixedBlockSizeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setFixedBlockSize(fixedBlockSizeCppValue);
  }

  v8::Local<v8::Value> fixedInlineSizeValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&fixedInlineSizeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (fixedInlineSizeValue.IsEmpty() || fixedInlineSizeValue->IsUndefined()) {
    // Do nothing.
  } else {
    double fixedInlineSizeCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, fixedInlineSizeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setFixedInlineSize(fixedInlineSizeCppValue);
  }
}

v8::Local<v8::Value> CustomLayoutConstraintsOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CustomLayoutConstraintsOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CustomLayoutConstraintsOptions(const CustomLayoutConstraintsOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CustomLayoutConstraintsOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> availableBlockSizeValue;
  bool availableBlockSizeHasValueOrDefault = false;
  if (impl.hasAvailableBlockSize()) {
    availableBlockSizeValue = v8::Number::New(isolate, impl.availableBlockSize());
    availableBlockSizeHasValueOrDefault = true;
  } else {
    availableBlockSizeValue = v8::Number::New(isolate, 0);
    availableBlockSizeHasValueOrDefault = true;
  }
  if (availableBlockSizeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), availableBlockSizeValue))) {
    return false;
  }

  v8::Local<v8::Value> availableInlineSizeValue;
  bool availableInlineSizeHasValueOrDefault = false;
  if (impl.hasAvailableInlineSize()) {
    availableInlineSizeValue = v8::Number::New(isolate, impl.availableInlineSize());
    availableInlineSizeHasValueOrDefault = true;
  } else {
    availableInlineSizeValue = v8::Number::New(isolate, 0);
    availableInlineSizeHasValueOrDefault = true;
  }
  if (availableInlineSizeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), availableInlineSizeValue))) {
    return false;
  }

  v8::Local<v8::Value> fixedBlockSizeValue;
  bool fixedBlockSizeHasValueOrDefault = false;
  if (impl.hasFixedBlockSize()) {
    fixedBlockSizeValue = v8::Number::New(isolate, impl.fixedBlockSize());
    fixedBlockSizeHasValueOrDefault = true;
  }
  if (fixedBlockSizeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), fixedBlockSizeValue))) {
    return false;
  }

  v8::Local<v8::Value> fixedInlineSizeValue;
  bool fixedInlineSizeHasValueOrDefault = false;
  if (impl.hasFixedInlineSize()) {
    fixedInlineSizeValue = v8::Number::New(isolate, impl.fixedInlineSize());
    fixedInlineSizeHasValueOrDefault = true;
  }
  if (fixedInlineSizeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), fixedInlineSizeValue))) {
    return false;
  }

  return true;
}

CustomLayoutConstraintsOptions NativeValueTraits<CustomLayoutConstraintsOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CustomLayoutConstraintsOptions impl;
  V8CustomLayoutConstraintsOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

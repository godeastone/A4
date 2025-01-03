// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_into_view_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_options.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ScrollIntoViewOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "block",
    "inline",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ScrollIntoViewOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ScrollIntoViewOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8ScrollOptions::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8ScrollIntoViewOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> blockValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&blockValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (blockValue.IsEmpty() || blockValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> blockCppValue = blockValue;
    if (!blockCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "start",
        "center",
        "end",
        "nearest",
    };
    if (!IsValidEnum(blockCppValue, validValues, arraysize(validValues), "ScrollLogicalPosition", exceptionState))
      return;
    impl.setBlock(blockCppValue);
  }

  v8::Local<v8::Value> inlineValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&inlineValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (inlineValue.IsEmpty() || inlineValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> inlineCppValue = inlineValue;
    if (!inlineCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "start",
        "center",
        "end",
        "nearest",
    };
    if (!IsValidEnum(inlineCppValue, validValues, arraysize(validValues), "ScrollLogicalPosition", exceptionState))
      return;
    impl.setInlinePosition(inlineCppValue);
  }
}

v8::Local<v8::Value> ScrollIntoViewOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ScrollIntoViewOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ScrollIntoViewOptions(const ScrollIntoViewOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8ScrollOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8ScrollIntoViewOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> blockValue;
  bool blockHasValueOrDefault = false;
  if (impl.hasBlock()) {
    blockValue = V8String(isolate, impl.block());
    blockHasValueOrDefault = true;
  } else {
    blockValue = V8String(isolate, "center");
    blockHasValueOrDefault = true;
  }
  if (blockHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), blockValue))) {
    return false;
  }

  v8::Local<v8::Value> inlineValue;
  bool inlineHasValueOrDefault = false;
  if (impl.hasInlinePosition()) {
    inlineValue = V8String(isolate, impl.inlinePosition());
    inlineHasValueOrDefault = true;
  } else {
    inlineValue = V8String(isolate, "center");
    inlineHasValueOrDefault = true;
  }
  if (inlineHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), inlineValue))) {
    return false;
  }

  return true;
}

ScrollIntoViewOptions NativeValueTraits<ScrollIntoViewOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ScrollIntoViewOptions impl;
  V8ScrollIntoViewOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

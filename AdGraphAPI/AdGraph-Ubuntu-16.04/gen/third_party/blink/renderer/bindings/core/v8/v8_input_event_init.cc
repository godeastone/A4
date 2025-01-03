// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_input_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_data_transfer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_static_range.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_ui_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8InputEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "data",
    "dataTransfer",
    "inputType",
    "isComposing",
    "targetRanges",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8InputEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, InputEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8UIEventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8InputEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> dataValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&dataValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (dataValue.IsEmpty() || dataValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<kTreatNullAndUndefinedAsNullString> dataCppValue = dataValue;
    if (!dataCppValue.Prepare(exceptionState))
      return;
    impl.setData(dataCppValue);
  }

  v8::Local<v8::Value> dataTransferValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&dataTransferValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (dataTransferValue.IsEmpty() || dataTransferValue->IsUndefined()) {
    // Do nothing.
  } else if (dataTransferValue->IsNull()) {
    impl.setDataTransferToNull();
  } else {
    DataTransfer* dataTransferCppValue = V8DataTransfer::ToImplWithTypeCheck(isolate, dataTransferValue);
    if (!dataTransferCppValue) {
      exceptionState.ThrowTypeError("member dataTransfer is not of type DataTransfer.");
      return;
    }
    impl.setDataTransfer(dataTransferCppValue);
  }

  v8::Local<v8::Value> inputTypeValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&inputTypeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (inputTypeValue.IsEmpty() || inputTypeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> inputTypeCppValue = inputTypeValue;
    if (!inputTypeCppValue.Prepare(exceptionState))
      return;
    impl.setInputType(inputTypeCppValue);
  }

  v8::Local<v8::Value> isComposingValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&isComposingValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (isComposingValue.IsEmpty() || isComposingValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool isComposingCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, isComposingValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIsComposing(isComposingCppValue);
  }

  v8::Local<v8::Value> targetRangesValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&targetRangesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (targetRangesValue.IsEmpty() || targetRangesValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<StaticRange>> targetRangesCppValue = NativeValueTraits<IDLSequence<StaticRange>>::NativeValue(isolate, targetRangesValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setTargetRanges(targetRangesCppValue);
  }
}

v8::Local<v8::Value> InputEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8InputEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8InputEventInit(const InputEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8UIEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8InputEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> dataValue;
  bool dataHasValueOrDefault = false;
  if (impl.hasData()) {
    dataValue = V8String(isolate, impl.data());
    dataHasValueOrDefault = true;
  } else {
    dataValue = v8::Null(isolate);
    dataHasValueOrDefault = true;
  }
  if (dataHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), dataValue))) {
    return false;
  }

  v8::Local<v8::Value> dataTransferValue;
  bool dataTransferHasValueOrDefault = false;
  if (impl.hasDataTransfer()) {
    dataTransferValue = ToV8(impl.dataTransfer(), creationContext, isolate);
    dataTransferHasValueOrDefault = true;
  } else {
    dataTransferValue = v8::Null(isolate);
    dataTransferHasValueOrDefault = true;
  }
  if (dataTransferHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), dataTransferValue))) {
    return false;
  }

  v8::Local<v8::Value> inputTypeValue;
  bool inputTypeHasValueOrDefault = false;
  if (impl.hasInputType()) {
    inputTypeValue = V8String(isolate, impl.inputType());
    inputTypeHasValueOrDefault = true;
  } else {
    inputTypeValue = V8String(isolate, WTF::g_empty_string);
    inputTypeHasValueOrDefault = true;
  }
  if (inputTypeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), inputTypeValue))) {
    return false;
  }

  v8::Local<v8::Value> isComposingValue;
  bool isComposingHasValueOrDefault = false;
  if (impl.hasIsComposing()) {
    isComposingValue = v8::Boolean::New(isolate, impl.isComposing());
    isComposingHasValueOrDefault = true;
  } else {
    isComposingValue = v8::Boolean::New(isolate, false);
    isComposingHasValueOrDefault = true;
  }
  if (isComposingHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), isComposingValue))) {
    return false;
  }

  v8::Local<v8::Value> targetRangesValue;
  bool targetRangesHasValueOrDefault = false;
  if (impl.hasTargetRanges()) {
    targetRangesValue = ToV8(impl.targetRanges(), creationContext, isolate);
    targetRangesHasValueOrDefault = true;
  } else {
    targetRangesValue = ToV8(HeapVector<Member<StaticRange>>(), creationContext, isolate);
    targetRangesHasValueOrDefault = true;
  }
  if (targetRangesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), targetRangesValue))) {
    return false;
  }

  return true;
}

InputEventInit NativeValueTraits<InputEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  InputEventInit impl;
  V8InputEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

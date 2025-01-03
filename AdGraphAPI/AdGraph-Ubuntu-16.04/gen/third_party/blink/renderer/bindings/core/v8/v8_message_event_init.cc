// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_message_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_target.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_message_port.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MessageEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "data",
    "lastEventId",
    "origin",
    "ports",
    "source",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MessageEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MessageEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8MessageEventInitKeys(isolate);
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
    ScriptValue dataCppValue = ScriptValue(ScriptState::Current(isolate), dataValue);
    impl.setData(dataCppValue);
  }

  v8::Local<v8::Value> lastEventIdValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&lastEventIdValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (lastEventIdValue.IsEmpty() || lastEventIdValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> lastEventIdCppValue = lastEventIdValue;
    if (!lastEventIdCppValue.Prepare(exceptionState))
      return;
    impl.setLastEventId(lastEventIdCppValue);
  }

  v8::Local<v8::Value> originValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&originValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (originValue.IsEmpty() || originValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> originCppValue = originValue;
    if (!originCppValue.Prepare(exceptionState))
      return;
    impl.setOrigin(originCppValue);
  }

  v8::Local<v8::Value> portsValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&portsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (portsValue.IsEmpty() || portsValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<MessagePort>> portsCppValue = NativeValueTraits<IDLSequence<MessagePort>>::NativeValue(isolate, portsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPorts(portsCppValue);
  }

  v8::Local<v8::Value> sourceValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&sourceValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (sourceValue.IsEmpty() || sourceValue->IsUndefined()) {
    // Do nothing.
  } else if (sourceValue->IsNull()) {
    impl.setSourceToNull();
  } else {
    EventTarget* sourceCppValue = V8EventTarget::ToImplWithTypeCheck(isolate, sourceValue);
    if (!sourceCppValue) {
      exceptionState.ThrowTypeError("member source is not of type EventTarget.");
      return;
    }
    impl.setSource(sourceCppValue);
  }
}

v8::Local<v8::Value> MessageEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MessageEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MessageEventInit(const MessageEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8MessageEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> dataValue;
  bool dataHasValueOrDefault = false;
  if (impl.hasData()) {
    dataValue = impl.data().V8Value();
    dataHasValueOrDefault = true;
  }
  if (dataHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), dataValue))) {
    return false;
  }

  v8::Local<v8::Value> lastEventIdValue;
  bool lastEventIdHasValueOrDefault = false;
  if (impl.hasLastEventId()) {
    lastEventIdValue = V8String(isolate, impl.lastEventId());
    lastEventIdHasValueOrDefault = true;
  }
  if (lastEventIdHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), lastEventIdValue))) {
    return false;
  }

  v8::Local<v8::Value> originValue;
  bool originHasValueOrDefault = false;
  if (impl.hasOrigin()) {
    originValue = V8String(isolate, impl.origin());
    originHasValueOrDefault = true;
  }
  if (originHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), originValue))) {
    return false;
  }

  v8::Local<v8::Value> portsValue;
  bool portsHasValueOrDefault = false;
  if (impl.hasPorts()) {
    portsValue = ToV8(impl.ports(), creationContext, isolate);
    portsHasValueOrDefault = true;
  } else {
    portsValue = ToV8(HeapVector<Member<MessagePort>>(), creationContext, isolate);
    portsHasValueOrDefault = true;
  }
  if (portsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), portsValue))) {
    return false;
  }

  v8::Local<v8::Value> sourceValue;
  bool sourceHasValueOrDefault = false;
  if (impl.hasSource()) {
    sourceValue = ToV8(impl.source(), creationContext, isolate);
    sourceHasValueOrDefault = true;
  } else {
    sourceValue = v8::Null(isolate);
    sourceHasValueOrDefault = true;
  }
  if (sourceHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), sourceValue))) {
    return false;
  }

  return true;
}

MessageEventInit NativeValueTraits<MessageEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MessageEventInit impl;
  V8MessageEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

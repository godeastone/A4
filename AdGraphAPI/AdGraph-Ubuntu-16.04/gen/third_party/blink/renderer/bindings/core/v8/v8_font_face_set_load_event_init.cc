// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_font_face_set_load_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_font_face.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8FontFaceSetLoadEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "fontfaces",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8FontFaceSetLoadEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, FontFaceSetLoadEventInit& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8FontFaceSetLoadEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> fontfacesValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&fontfacesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (fontfacesValue.IsEmpty() || fontfacesValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<FontFace>> fontfacesCppValue = NativeValueTraits<IDLSequence<FontFace>>::NativeValue(isolate, fontfacesValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setFontfaces(fontfacesCppValue);
  }
}

v8::Local<v8::Value> FontFaceSetLoadEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8FontFaceSetLoadEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8FontFaceSetLoadEventInit(const FontFaceSetLoadEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8FontFaceSetLoadEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> fontfacesValue;
  bool fontfacesHasValueOrDefault = false;
  if (impl.hasFontfaces()) {
    fontfacesValue = ToV8(impl.fontfaces(), creationContext, isolate);
    fontfacesHasValueOrDefault = true;
  } else {
    fontfacesValue = ToV8(HeapVector<Member<FontFace>>(), creationContext, isolate);
    fontfacesHasValueOrDefault = true;
  }
  if (fontfacesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), fontfacesValue))) {
    return false;
  }

  return true;
}

FontFaceSetLoadEventInit NativeValueTraits<FontFaceSetLoadEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  FontFaceSetLoadEventInit impl;
  V8FontFaceSetLoadEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

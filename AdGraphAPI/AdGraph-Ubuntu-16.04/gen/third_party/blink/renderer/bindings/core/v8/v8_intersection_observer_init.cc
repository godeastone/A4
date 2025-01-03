// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_intersection_observer_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8IntersectionObserverInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "root",
    "rootMargin",
    "threshold",
    "trackVisibility",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8IntersectionObserverInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, IntersectionObserverInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8IntersectionObserverInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> rootValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&rootValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (rootValue.IsEmpty() || rootValue->IsUndefined()) {
    // Do nothing.
  } else if (rootValue->IsNull()) {
    impl.setRootToNull();
  } else {
    Element* rootCppValue = V8Element::ToImplWithTypeCheck(isolate, rootValue);
    if (!rootCppValue) {
      exceptionState.ThrowTypeError("member root is not of type Element.");
      return;
    }
    impl.setRoot(rootCppValue);
  }

  v8::Local<v8::Value> rootMarginValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&rootMarginValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (rootMarginValue.IsEmpty() || rootMarginValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> rootMarginCppValue = rootMarginValue;
    if (!rootMarginCppValue.Prepare(exceptionState))
      return;
    impl.setRootMargin(rootMarginCppValue);
  }

  v8::Local<v8::Value> thresholdValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&thresholdValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (thresholdValue.IsEmpty() || thresholdValue->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrDoubleSequence thresholdCppValue;
    V8DoubleOrDoubleSequence::ToImpl(isolate, thresholdValue, thresholdCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setThreshold(thresholdCppValue);
  }

  if (RuntimeEnabledFeatures::IntersectionObserverV2Enabled()) {
    v8::Local<v8::Value> trackVisibilityValue;
    if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&trackVisibilityValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (trackVisibilityValue.IsEmpty() || trackVisibilityValue->IsUndefined()) {
      // Do nothing.
    } else {
      bool trackVisibilityCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, trackVisibilityValue, exceptionState);
      if (exceptionState.HadException())
        return;
      impl.setTrackVisibility(trackVisibilityCppValue);
    }
  }
}

v8::Local<v8::Value> IntersectionObserverInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8IntersectionObserverInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8IntersectionObserverInit(const IntersectionObserverInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8IntersectionObserverInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> rootValue;
  bool rootHasValueOrDefault = false;
  if (impl.hasRoot()) {
    rootValue = ToV8(impl.root(), creationContext, isolate);
    rootHasValueOrDefault = true;
  } else {
    rootValue = v8::Null(isolate);
    rootHasValueOrDefault = true;
  }
  if (rootHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), rootValue))) {
    return false;
  }

  v8::Local<v8::Value> rootMarginValue;
  bool rootMarginHasValueOrDefault = false;
  if (impl.hasRootMargin()) {
    rootMarginValue = V8String(isolate, impl.rootMargin());
    rootMarginHasValueOrDefault = true;
  } else {
    rootMarginValue = V8String(isolate, "0px");
    rootMarginHasValueOrDefault = true;
  }
  if (rootMarginHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), rootMarginValue))) {
    return false;
  }

  v8::Local<v8::Value> thresholdValue;
  bool thresholdHasValueOrDefault = false;
  if (impl.hasThreshold()) {
    thresholdValue = ToV8(impl.threshold(), creationContext, isolate);
    thresholdHasValueOrDefault = true;
  } else {
    thresholdValue = ToV8(DoubleOrDoubleSequence::FromDouble(0), creationContext, isolate);
    thresholdHasValueOrDefault = true;
  }
  if (thresholdHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), thresholdValue))) {
    return false;
  }

  if (RuntimeEnabledFeatures::IntersectionObserverV2Enabled()) {
    v8::Local<v8::Value> trackVisibilityValue;
    bool trackVisibilityHasValueOrDefault = false;
    if (impl.hasTrackVisibility()) {
      trackVisibilityValue = v8::Boolean::New(isolate, impl.trackVisibility());
      trackVisibilityHasValueOrDefault = true;
    } else {
      trackVisibilityValue = v8::Boolean::New(isolate, false);
      trackVisibilityHasValueOrDefault = true;
    }
    if (trackVisibilityHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), trackVisibilityValue))) {
      return false;
    }
  }

  return true;
}

IntersectionObserverInit NativeValueTraits<IntersectionObserverInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  IntersectionObserverInit impl;
  V8IntersectionObserverInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_hit_region_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_path_2d.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8HitRegionOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "control",
    "fillRule",
    "id",
    "path",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8HitRegionOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, HitRegionOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8HitRegionOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> controlValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&controlValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (controlValue.IsEmpty() || controlValue->IsUndefined()) {
    // Do nothing.
  } else if (controlValue->IsNull()) {
    impl.setControlToNull();
  } else {
    Element* controlCppValue = V8Element::ToImplWithTypeCheck(isolate, controlValue);
    if (!controlCppValue) {
      exceptionState.ThrowTypeError("member control is not of type Element.");
      return;
    }
    impl.setControl(controlCppValue);
  }

  v8::Local<v8::Value> fillRuleValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&fillRuleValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (fillRuleValue.IsEmpty() || fillRuleValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> fillRuleCppValue = fillRuleValue;
    if (!fillRuleCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "nonzero",
        "evenodd",
    };
    if (!IsValidEnum(fillRuleCppValue, validValues, arraysize(validValues), "CanvasFillRule", exceptionState))
      return;
    impl.setFillRule(fillRuleCppValue);
  }

  v8::Local<v8::Value> idValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&idValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (idValue.IsEmpty() || idValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> idCppValue = idValue;
    if (!idCppValue.Prepare(exceptionState))
      return;
    impl.setId(idCppValue);
  }

  v8::Local<v8::Value> pathValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&pathValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (pathValue.IsEmpty() || pathValue->IsUndefined()) {
    // Do nothing.
  } else if (pathValue->IsNull()) {
    impl.setPathToNull();
  } else {
    Path2D* pathCppValue = V8Path2D::ToImplWithTypeCheck(isolate, pathValue);
    if (!pathCppValue) {
      exceptionState.ThrowTypeError("member path is not of type Path2D.");
      return;
    }
    impl.setPath(pathCppValue);
  }
}

v8::Local<v8::Value> HitRegionOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8HitRegionOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8HitRegionOptions(const HitRegionOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8HitRegionOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> controlValue;
  bool controlHasValueOrDefault = false;
  if (impl.hasControl()) {
    controlValue = ToV8(impl.control(), creationContext, isolate);
    controlHasValueOrDefault = true;
  } else {
    controlValue = v8::Null(isolate);
    controlHasValueOrDefault = true;
  }
  if (controlHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), controlValue))) {
    return false;
  }

  v8::Local<v8::Value> fillRuleValue;
  bool fillRuleHasValueOrDefault = false;
  if (impl.hasFillRule()) {
    fillRuleValue = V8String(isolate, impl.fillRule());
    fillRuleHasValueOrDefault = true;
  } else {
    fillRuleValue = V8String(isolate, "nonzero");
    fillRuleHasValueOrDefault = true;
  }
  if (fillRuleHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), fillRuleValue))) {
    return false;
  }

  v8::Local<v8::Value> idValue;
  bool idHasValueOrDefault = false;
  if (impl.hasId()) {
    idValue = V8String(isolate, impl.id());
    idHasValueOrDefault = true;
  } else {
    idValue = V8String(isolate, WTF::g_empty_string);
    idHasValueOrDefault = true;
  }
  if (idHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), idValue))) {
    return false;
  }

  v8::Local<v8::Value> pathValue;
  bool pathHasValueOrDefault = false;
  if (impl.hasPath()) {
    pathValue = ToV8(impl.path(), creationContext, isolate);
    pathHasValueOrDefault = true;
  } else {
    pathValue = v8::Null(isolate);
    pathHasValueOrDefault = true;
  }
  if (pathHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), pathValue))) {
    return false;
  }

  return true;
}

HitRegionOptions NativeValueTraits<HitRegionOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  HitRegionOptions impl;
  V8HitRegionOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

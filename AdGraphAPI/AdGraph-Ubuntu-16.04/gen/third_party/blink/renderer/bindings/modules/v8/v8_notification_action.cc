// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_notification_action.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8NotificationActionKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "action",
    "icon",
    "placeholder",
    "title",
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8NotificationAction::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, NotificationAction& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): action, title.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8NotificationActionKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> actionValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&actionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (actionValue.IsEmpty() || actionValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member action is undefined.");
    return;
  } else {
    V8StringResource<> actionCppValue = actionValue;
    if (!actionCppValue.Prepare(exceptionState))
      return;
    impl.setAction(actionCppValue);
  }

  v8::Local<v8::Value> iconValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&iconValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (iconValue.IsEmpty() || iconValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> iconCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, iconValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIcon(iconCppValue);
  }

  v8::Local<v8::Value> titleValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&titleValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (titleValue.IsEmpty() || titleValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member title is undefined.");
    return;
  } else {
    V8StringResource<> titleCppValue = titleValue;
    if (!titleCppValue.Prepare(exceptionState))
      return;
    impl.setTitle(titleCppValue);
  }

  if (RuntimeEnabledFeatures::NotificationInlineRepliesEnabled()) {
    v8::Local<v8::Value> placeholderValue;
    if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&placeholderValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (placeholderValue.IsEmpty() || placeholderValue->IsUndefined()) {
      // Do nothing.
    } else {
      V8StringResource<kTreatNullAndUndefinedAsNullString> placeholderCppValue = placeholderValue;
      if (!placeholderCppValue.Prepare(exceptionState))
        return;
      impl.setPlaceholder(placeholderCppValue);
    }

    v8::Local<v8::Value> typeValue;
    if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&typeValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (typeValue.IsEmpty() || typeValue->IsUndefined()) {
      // Do nothing.
    } else {
      V8StringResource<> typeCppValue = typeValue;
      if (!typeCppValue.Prepare(exceptionState))
        return;
      const char* validValues[] = {
          "button",
          "text",
          nullptr,
      };
      if (!IsValidEnum(typeCppValue, validValues, arraysize(validValues), "NotificationActionType", exceptionState))
        return;
      impl.setType(typeCppValue);
    }
  }
}

v8::Local<v8::Value> NotificationAction::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8NotificationAction(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8NotificationAction(const NotificationAction& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8NotificationActionKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> actionValue;
  bool actionHasValueOrDefault = false;
  if (impl.hasAction()) {
    actionValue = V8String(isolate, impl.action());
    actionHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (actionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), actionValue))) {
    return false;
  }

  v8::Local<v8::Value> iconValue;
  bool iconHasValueOrDefault = false;
  if (impl.hasIcon()) {
    iconValue = V8String(isolate, impl.icon());
    iconHasValueOrDefault = true;
  }
  if (iconHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), iconValue))) {
    return false;
  }

  v8::Local<v8::Value> titleValue;
  bool titleHasValueOrDefault = false;
  if (impl.hasTitle()) {
    titleValue = V8String(isolate, impl.title());
    titleHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (titleHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), titleValue))) {
    return false;
  }

  if (RuntimeEnabledFeatures::NotificationInlineRepliesEnabled()) {
    v8::Local<v8::Value> placeholderValue;
    bool placeholderHasValueOrDefault = false;
    if (impl.hasPlaceholder()) {
      placeholderValue = V8String(isolate, impl.placeholder());
      placeholderHasValueOrDefault = true;
    } else {
      placeholderValue = v8::Null(isolate);
      placeholderHasValueOrDefault = true;
    }
    if (placeholderHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), placeholderValue))) {
      return false;
    }

    v8::Local<v8::Value> typeValue;
    bool typeHasValueOrDefault = false;
    if (impl.hasType()) {
      typeValue = V8String(isolate, impl.type());
      typeHasValueOrDefault = true;
    } else {
      typeValue = V8String(isolate, "button");
      typeHasValueOrDefault = true;
    }
    if (typeHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), typeValue))) {
      return false;
    }
  }

  return true;
}

NotificationAction NativeValueTraits<NotificationAction>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  NotificationAction impl;
  V8NotificationAction::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_notification_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_notification_action.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8NotificationOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "actions",
    "badge",
    "body",
    "data",
    "dir",
    "icon",
    "image",
    "lang",
    "renotify",
    "requireInteraction",
    "silent",
    "tag",
    "timestamp",
    "vibrate",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8NotificationOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, NotificationOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8NotificationOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> actionsValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&actionsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (actionsValue.IsEmpty() || actionsValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<NotificationAction> actionsCppValue = NativeValueTraits<IDLSequence<NotificationAction>>::NativeValue(isolate, actionsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setActions(actionsCppValue);
  }

  v8::Local<v8::Value> badgeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&badgeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (badgeValue.IsEmpty() || badgeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> badgeCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, badgeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setBadge(badgeCppValue);
  }

  v8::Local<v8::Value> bodyValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&bodyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (bodyValue.IsEmpty() || bodyValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> bodyCppValue = bodyValue;
    if (!bodyCppValue.Prepare(exceptionState))
      return;
    impl.setBody(bodyCppValue);
  }

  v8::Local<v8::Value> dataValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&dataValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (dataValue.IsEmpty() || dataValue->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue dataCppValue = ScriptValue(ScriptState::Current(isolate), dataValue);
    impl.setData(dataCppValue);
  }

  v8::Local<v8::Value> dirValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&dirValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (dirValue.IsEmpty() || dirValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> dirCppValue = dirValue;
    if (!dirCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "auto",
        "ltr",
        "rtl",
    };
    if (!IsValidEnum(dirCppValue, validValues, arraysize(validValues), "NotificationDirection", exceptionState))
      return;
    impl.setDir(dirCppValue);
  }

  v8::Local<v8::Value> iconValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&iconValue)) {
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

  v8::Local<v8::Value> langValue;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&langValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (langValue.IsEmpty() || langValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> langCppValue = langValue;
    if (!langCppValue.Prepare(exceptionState))
      return;
    impl.setLang(langCppValue);
  }

  v8::Local<v8::Value> renotifyValue;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&renotifyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (renotifyValue.IsEmpty() || renotifyValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool renotifyCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, renotifyValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRenotify(renotifyCppValue);
  }

  v8::Local<v8::Value> requireInteractionValue;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&requireInteractionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (requireInteractionValue.IsEmpty() || requireInteractionValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool requireInteractionCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, requireInteractionValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRequireInteraction(requireInteractionCppValue);
  }

  v8::Local<v8::Value> silentValue;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&silentValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (silentValue.IsEmpty() || silentValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool silentCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, silentValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setSilent(silentCppValue);
  }

  v8::Local<v8::Value> tagValue;
  if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&tagValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (tagValue.IsEmpty() || tagValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> tagCppValue = tagValue;
    if (!tagCppValue.Prepare(exceptionState))
      return;
    impl.setTag(tagCppValue);
  }

  v8::Local<v8::Value> timestampValue;
  if (!v8Object->Get(context, keys[12].Get(isolate)).ToLocal(&timestampValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (timestampValue.IsEmpty() || timestampValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t timestampCppValue = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, timestampValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setTimestamp(timestampCppValue);
  }

  v8::Local<v8::Value> vibrateValue;
  if (!v8Object->Get(context, keys[13].Get(isolate)).ToLocal(&vibrateValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (vibrateValue.IsEmpty() || vibrateValue->IsUndefined()) {
    // Do nothing.
  } else {
    UnsignedLongOrUnsignedLongSequence vibrateCppValue;
    V8UnsignedLongOrUnsignedLongSequence::ToImpl(isolate, vibrateValue, vibrateCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setVibrate(vibrateCppValue);
  }

  if (RuntimeEnabledFeatures::NotificationContentImageEnabled()) {
    v8::Local<v8::Value> imageValue;
    if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&imageValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (imageValue.IsEmpty() || imageValue->IsUndefined()) {
      // Do nothing.
    } else {
      V8StringResource<> imageCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, imageValue, exceptionState);
      if (exceptionState.HadException())
        return;
      impl.setImage(imageCppValue);
    }
  }
}

v8::Local<v8::Value> NotificationOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8NotificationOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8NotificationOptions(const NotificationOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8NotificationOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> actionsValue;
  bool actionsHasValueOrDefault = false;
  if (impl.hasActions()) {
    actionsValue = ToV8(impl.actions(), creationContext, isolate);
    actionsHasValueOrDefault = true;
  } else {
    actionsValue = ToV8(HeapVector<NotificationAction>(), creationContext, isolate);
    actionsHasValueOrDefault = true;
  }
  if (actionsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), actionsValue))) {
    return false;
  }

  v8::Local<v8::Value> badgeValue;
  bool badgeHasValueOrDefault = false;
  if (impl.hasBadge()) {
    badgeValue = V8String(isolate, impl.badge());
    badgeHasValueOrDefault = true;
  }
  if (badgeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), badgeValue))) {
    return false;
  }

  v8::Local<v8::Value> bodyValue;
  bool bodyHasValueOrDefault = false;
  if (impl.hasBody()) {
    bodyValue = V8String(isolate, impl.body());
    bodyHasValueOrDefault = true;
  } else {
    bodyValue = V8String(isolate, WTF::g_empty_string);
    bodyHasValueOrDefault = true;
  }
  if (bodyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), bodyValue))) {
    return false;
  }

  v8::Local<v8::Value> dataValue;
  bool dataHasValueOrDefault = false;
  if (impl.hasData()) {
    dataValue = impl.data().V8Value();
    dataHasValueOrDefault = true;
  } else {
    dataValue = v8::Null(isolate);
    dataHasValueOrDefault = true;
  }
  if (dataHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), dataValue))) {
    return false;
  }

  v8::Local<v8::Value> dirValue;
  bool dirHasValueOrDefault = false;
  if (impl.hasDir()) {
    dirValue = V8String(isolate, impl.dir());
    dirHasValueOrDefault = true;
  } else {
    dirValue = V8String(isolate, "auto");
    dirHasValueOrDefault = true;
  }
  if (dirHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), dirValue))) {
    return false;
  }

  v8::Local<v8::Value> iconValue;
  bool iconHasValueOrDefault = false;
  if (impl.hasIcon()) {
    iconValue = V8String(isolate, impl.icon());
    iconHasValueOrDefault = true;
  }
  if (iconHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), iconValue))) {
    return false;
  }

  v8::Local<v8::Value> langValue;
  bool langHasValueOrDefault = false;
  if (impl.hasLang()) {
    langValue = V8String(isolate, impl.lang());
    langHasValueOrDefault = true;
  } else {
    langValue = V8String(isolate, WTF::g_empty_string);
    langHasValueOrDefault = true;
  }
  if (langHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[7].Get(isolate), langValue))) {
    return false;
  }

  v8::Local<v8::Value> renotifyValue;
  bool renotifyHasValueOrDefault = false;
  if (impl.hasRenotify()) {
    renotifyValue = v8::Boolean::New(isolate, impl.renotify());
    renotifyHasValueOrDefault = true;
  } else {
    renotifyValue = v8::Boolean::New(isolate, false);
    renotifyHasValueOrDefault = true;
  }
  if (renotifyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[8].Get(isolate), renotifyValue))) {
    return false;
  }

  v8::Local<v8::Value> requireInteractionValue;
  bool requireInteractionHasValueOrDefault = false;
  if (impl.hasRequireInteraction()) {
    requireInteractionValue = v8::Boolean::New(isolate, impl.requireInteraction());
    requireInteractionHasValueOrDefault = true;
  } else {
    requireInteractionValue = v8::Boolean::New(isolate, false);
    requireInteractionHasValueOrDefault = true;
  }
  if (requireInteractionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[9].Get(isolate), requireInteractionValue))) {
    return false;
  }

  v8::Local<v8::Value> silentValue;
  bool silentHasValueOrDefault = false;
  if (impl.hasSilent()) {
    silentValue = v8::Boolean::New(isolate, impl.silent());
    silentHasValueOrDefault = true;
  } else {
    silentValue = v8::Boolean::New(isolate, false);
    silentHasValueOrDefault = true;
  }
  if (silentHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[10].Get(isolate), silentValue))) {
    return false;
  }

  v8::Local<v8::Value> tagValue;
  bool tagHasValueOrDefault = false;
  if (impl.hasTag()) {
    tagValue = V8String(isolate, impl.tag());
    tagHasValueOrDefault = true;
  } else {
    tagValue = V8String(isolate, WTF::g_empty_string);
    tagHasValueOrDefault = true;
  }
  if (tagHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[11].Get(isolate), tagValue))) {
    return false;
  }

  v8::Local<v8::Value> timestampValue;
  bool timestampHasValueOrDefault = false;
  if (impl.hasTimestamp()) {
    timestampValue = v8::Number::New(isolate, static_cast<double>(impl.timestamp()));
    timestampHasValueOrDefault = true;
  }
  if (timestampHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[12].Get(isolate), timestampValue))) {
    return false;
  }

  v8::Local<v8::Value> vibrateValue;
  bool vibrateHasValueOrDefault = false;
  if (impl.hasVibrate()) {
    vibrateValue = ToV8(impl.vibrate(), creationContext, isolate);
    vibrateHasValueOrDefault = true;
  }
  if (vibrateHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[13].Get(isolate), vibrateValue))) {
    return false;
  }

  if (RuntimeEnabledFeatures::NotificationContentImageEnabled()) {
    v8::Local<v8::Value> imageValue;
    bool imageHasValueOrDefault = false;
    if (impl.hasImage()) {
      imageValue = V8String(isolate, impl.image());
      imageHasValueOrDefault = true;
    }
    if (imageHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), imageValue))) {
      return false;
    }
  }

  return true;
}

NotificationOptions NativeValueTraits<NotificationOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  NotificationOptions impl;
  V8NotificationOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

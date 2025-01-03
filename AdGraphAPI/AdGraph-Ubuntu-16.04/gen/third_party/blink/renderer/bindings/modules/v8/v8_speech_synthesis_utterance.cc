// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_synthesis_utterance.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abstract_event_listener.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_listener_helper.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_synthesis_voice.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8SpeechSynthesisUtterance::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8SpeechSynthesisUtterance::domTemplate,
    nullptr,
    "SpeechSynthesisUtterance",
    &V8EventTarget::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SpeechSynthesisUtterance.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SpeechSynthesisUtterance::wrapper_type_info_ = V8SpeechSynthesisUtterance::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SpeechSynthesisUtterance>::value,
    "SpeechSynthesisUtterance inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SpeechSynthesisUtterance::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SpeechSynthesisUtterance is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SpeechSynthesisUtteranceV8Internal {

static void textAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  V8SetReturnValueString(info, impl->text(), info.GetIsolate());
}

static void textAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setText(cppValue);
}

static void langAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  V8SetReturnValueString(info, impl->lang(), info.GetIsolate());
}

static void langAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setLang(cppValue);
}

static void voiceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->voice()), impl);
}

static void voiceAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "SpeechSynthesisUtterance", "voice");

  // Prepare the value to be set.
  SpeechSynthesisVoice* cppValue = V8SpeechSynthesisVoice::ToImplWithTypeCheck(info.GetIsolate(), v8Value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cppValue && !IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("The provided value is not of type 'SpeechSynthesisVoice'.");
    return;
  }

  impl->setVoice(cppValue);
}

static void volumeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  V8SetReturnValue(info, impl->volume());
}

static void volumeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "SpeechSynthesisUtterance", "volume");

  // Prepare the value to be set.
  float cppValue = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setVolume(cppValue);
}

static void rateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  V8SetReturnValue(info, impl->rate());
}

static void rateAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "SpeechSynthesisUtterance", "rate");

  // Prepare the value to be set.
  float cppValue = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setRate(cppValue);
}

static void pitchAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  V8SetReturnValue(info, impl->pitch());
}

static void pitchAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "SpeechSynthesisUtterance", "pitch");

  // Prepare the value to be set.
  float cppValue = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setPitch(cppValue);
}

static void onstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onstart()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onstartAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnstart(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onend()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onendAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnend(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onerror()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onerrorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnerror(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onpauseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onpause()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onpauseAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnpause(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onresumeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onresume()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onresumeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnresume(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onmarkAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onmark()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onmarkAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnmark(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onboundaryAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onboundary()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onboundaryAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnboundary(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_ConstructorCallback");

  V8StringResource<> text;
  if (!info[0]->IsUndefined()) {
    text = info[0];
    if (!text.Prepare())
      return;
  } else {
    text = nullptr;
  }

  ExecutionContext* executionContext = ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext());
  SpeechSynthesisUtterance* impl = SpeechSynthesisUtterance::Create(executionContext, text);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), &V8SpeechSynthesisUtterance::wrapperTypeInfo, wrapper);
  V8SetReturnValue(info, wrapper);
}

} // namespace SpeechSynthesisUtteranceV8Internal

void V8SpeechSynthesisUtterance::textAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_text_Getter");

  SpeechSynthesisUtteranceV8Internal::textAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::textAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_text_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechSynthesisUtteranceV8Internal::textAttributeSetter(v8Value, info);
}

void V8SpeechSynthesisUtterance::langAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_lang_Getter");

  SpeechSynthesisUtteranceV8Internal::langAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::langAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_lang_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechSynthesisUtteranceV8Internal::langAttributeSetter(v8Value, info);
}

void V8SpeechSynthesisUtterance::voiceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_voice_Getter");

  SpeechSynthesisUtteranceV8Internal::voiceAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::voiceAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_voice_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechSynthesisUtteranceV8Internal::voiceAttributeSetter(v8Value, info);
}

void V8SpeechSynthesisUtterance::volumeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_volume_Getter");

  SpeechSynthesisUtteranceV8Internal::volumeAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::volumeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_volume_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechSynthesisUtteranceV8Internal::volumeAttributeSetter(v8Value, info);
}

void V8SpeechSynthesisUtterance::rateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_rate_Getter");

  SpeechSynthesisUtteranceV8Internal::rateAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::rateAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_rate_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechSynthesisUtteranceV8Internal::rateAttributeSetter(v8Value, info);
}

void V8SpeechSynthesisUtterance::pitchAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_pitch_Getter");

  SpeechSynthesisUtteranceV8Internal::pitchAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::pitchAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_pitch_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechSynthesisUtteranceV8Internal::pitchAttributeSetter(v8Value, info);
}

void V8SpeechSynthesisUtterance::onstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onstart_Getter");

  SpeechSynthesisUtteranceV8Internal::onstartAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::onstartAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onstart_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechSynthesisUtteranceV8Internal::onstartAttributeSetter(v8Value, info);
}

void V8SpeechSynthesisUtterance::onendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onend_Getter");

  SpeechSynthesisUtteranceV8Internal::onendAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::onendAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onend_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechSynthesisUtteranceV8Internal::onendAttributeSetter(v8Value, info);
}

void V8SpeechSynthesisUtterance::onerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onerror_Getter");

  SpeechSynthesisUtteranceV8Internal::onerrorAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::onerrorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onerror_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechSynthesisUtteranceV8Internal::onerrorAttributeSetter(v8Value, info);
}

void V8SpeechSynthesisUtterance::onpauseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onpause_Getter");

  SpeechSynthesisUtteranceV8Internal::onpauseAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::onpauseAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onpause_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechSynthesisUtteranceV8Internal::onpauseAttributeSetter(v8Value, info);
}

void V8SpeechSynthesisUtterance::onresumeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onresume_Getter");

  SpeechSynthesisUtteranceV8Internal::onresumeAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::onresumeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onresume_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechSynthesisUtteranceV8Internal::onresumeAttributeSetter(v8Value, info);
}

void V8SpeechSynthesisUtterance::onmarkAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onmark_Getter");

  SpeechSynthesisUtteranceV8Internal::onmarkAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::onmarkAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onmark_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechSynthesisUtteranceV8Internal::onmarkAttributeSetter(v8Value, info);
}

void V8SpeechSynthesisUtterance::onboundaryAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onboundary_Getter");

  SpeechSynthesisUtteranceV8Internal::onboundaryAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::onboundaryAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onboundary_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechSynthesisUtteranceV8Internal::onboundaryAttributeSetter(v8Value, info);
}

static const V8DOMConfiguration::AccessorConfiguration V8SpeechSynthesisUtteranceAccessors[] = {
    { "text", V8SpeechSynthesisUtterance::textAttributeGetterCallback, V8SpeechSynthesisUtterance::textAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "lang", V8SpeechSynthesisUtterance::langAttributeGetterCallback, V8SpeechSynthesisUtterance::langAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "voice", V8SpeechSynthesisUtterance::voiceAttributeGetterCallback, V8SpeechSynthesisUtterance::voiceAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "volume", V8SpeechSynthesisUtterance::volumeAttributeGetterCallback, V8SpeechSynthesisUtterance::volumeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "rate", V8SpeechSynthesisUtterance::rateAttributeGetterCallback, V8SpeechSynthesisUtterance::rateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "pitch", V8SpeechSynthesisUtterance::pitchAttributeGetterCallback, V8SpeechSynthesisUtterance::pitchAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onstart", V8SpeechSynthesisUtterance::onstartAttributeGetterCallback, V8SpeechSynthesisUtterance::onstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onend", V8SpeechSynthesisUtterance::onendAttributeGetterCallback, V8SpeechSynthesisUtterance::onendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onerror", V8SpeechSynthesisUtterance::onerrorAttributeGetterCallback, V8SpeechSynthesisUtterance::onerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onpause", V8SpeechSynthesisUtterance::onpauseAttributeGetterCallback, V8SpeechSynthesisUtterance::onpauseAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onresume", V8SpeechSynthesisUtterance::onresumeAttributeGetterCallback, V8SpeechSynthesisUtterance::onresumeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onmark", V8SpeechSynthesisUtterance::onmarkAttributeGetterCallback, V8SpeechSynthesisUtterance::onmarkAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onboundary", V8SpeechSynthesisUtterance::onboundaryAttributeGetterCallback, V8SpeechSynthesisUtterance::onboundaryAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

void V8SpeechSynthesisUtterance::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("SpeechSynthesisUtterance"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  SpeechSynthesisUtteranceV8Internal::constructor(info);
}

static void installV8SpeechSynthesisUtteranceTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SpeechSynthesisUtterance::wrapperTypeInfo.interface_name, V8EventTarget::domTemplate(isolate, world), V8SpeechSynthesisUtterance::internalFieldCount);
  interfaceTemplate->SetCallHandler(V8SpeechSynthesisUtterance::constructorCallback);
  interfaceTemplate->SetLength(0);

  if (!RuntimeEnabledFeatures::ScriptedSpeechEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8SpeechSynthesisUtteranceAccessors, arraysize(V8SpeechSynthesisUtteranceAccessors));

  // Custom signature

  V8SpeechSynthesisUtterance::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8SpeechSynthesisUtterance::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::ScriptedSpeechEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8SpeechSynthesisUtterance::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SpeechSynthesisUtteranceTemplate);
}

bool V8SpeechSynthesisUtterance::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SpeechSynthesisUtterance::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SpeechSynthesisUtterance* V8SpeechSynthesisUtterance::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SpeechSynthesisUtterance* NativeValueTraits<SpeechSynthesisUtterance>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  SpeechSynthesisUtterance* nativeValue = V8SpeechSynthesisUtterance::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SpeechSynthesisUtterance"));
  }
  return nativeValue;
}

}  // namespace blink

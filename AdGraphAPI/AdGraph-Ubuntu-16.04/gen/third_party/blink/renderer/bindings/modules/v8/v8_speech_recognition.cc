// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_recognition.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abstract_event_listener.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_listener_helper.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_grammar_list.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8SpeechRecognition::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8SpeechRecognition::domTemplate,
    nullptr,
    "SpeechRecognition",
    &V8EventTarget::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SpeechRecognition.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SpeechRecognition::wrapper_type_info_ = V8SpeechRecognition::wrapperTypeInfo;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, SpeechRecognition>::value,
    "SpeechRecognition does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&SpeechRecognition::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SpeechRecognition is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SpeechRecognitionV8Internal {

static void grammarsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->grammars()), impl);
}

static void grammarsAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "SpeechRecognition", "grammars");

  // Prepare the value to be set.
  SpeechGrammarList* cppValue = V8SpeechGrammarList::ToImplWithTypeCheck(info.GetIsolate(), v8Value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cppValue) {
    exceptionState.ThrowTypeError("The provided value is not of type 'SpeechGrammarList'.");
    return;
  }

  impl->setGrammars(cppValue);
}

static void langAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  V8SetReturnValueString(info, impl->lang(), info.GetIsolate());
}

static void langAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setLang(cppValue);
}

static void continuousAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  V8SetReturnValueBool(info, impl->continuous());
}

static void continuousAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "SpeechRecognition", "continuous");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setContinuous(cppValue);
}

static void interimResultsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  V8SetReturnValueBool(info, impl->interimResults());
}

static void interimResultsAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "SpeechRecognition", "interimResults");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setInterimResults(cppValue);
}

static void maxAlternativesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->maxAlternatives());
}

static void maxAlternativesAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "SpeechRecognition", "maxAlternatives");

  // Prepare the value to be set.
  uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setMaxAlternatives(cppValue);
}

static void onaudiostartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onaudiostart()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onaudiostartAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnaudiostart(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onsoundstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onsoundstart()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onsoundstartAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnsoundstart(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onspeechstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onspeechstart()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onspeechstartAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnspeechstart(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onspeechendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onspeechend()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onspeechendAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnspeechend(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onsoundendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onsoundend()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onsoundendAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnsoundend(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onaudioendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onaudioend()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onaudioendAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnaudioend(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onresultAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onresult()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onresultAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnresult(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onnomatchAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onnomatch()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onnomatchAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnnomatch(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onerror()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onerrorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnerror(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onstart()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onstartAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnstart(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onend()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onendAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnend(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void startMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SpeechRecognition", "start");

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(info.Holder());

  impl->start(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void stopMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(info.Holder());

  impl->stopFunction();
}

static void abortMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(info.Holder());

  impl->abort();
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_ConstructorCallback");

  ExecutionContext* executionContext = ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext());
  SpeechRecognition* impl = SpeechRecognition::Create(executionContext);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), &V8SpeechRecognition::wrapperTypeInfo, wrapper);
  V8SetReturnValue(info, wrapper);
}

} // namespace SpeechRecognitionV8Internal

void V8SpeechRecognition::grammarsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_grammars_Getter");

  SpeechRecognitionV8Internal::grammarsAttributeGetter(info);
}

void V8SpeechRecognition::grammarsAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_grammars_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechRecognitionV8Internal::grammarsAttributeSetter(v8Value, info);
}

void V8SpeechRecognition::langAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_lang_Getter");

  SpeechRecognitionV8Internal::langAttributeGetter(info);
}

void V8SpeechRecognition::langAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_lang_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechRecognitionV8Internal::langAttributeSetter(v8Value, info);
}

void V8SpeechRecognition::continuousAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_continuous_Getter");

  SpeechRecognitionV8Internal::continuousAttributeGetter(info);
}

void V8SpeechRecognition::continuousAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_continuous_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechRecognitionV8Internal::continuousAttributeSetter(v8Value, info);
}

void V8SpeechRecognition::interimResultsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_interimResults_Getter");

  SpeechRecognitionV8Internal::interimResultsAttributeGetter(info);
}

void V8SpeechRecognition::interimResultsAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_interimResults_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechRecognitionV8Internal::interimResultsAttributeSetter(v8Value, info);
}

void V8SpeechRecognition::maxAlternativesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_maxAlternatives_Getter");

  SpeechRecognitionV8Internal::maxAlternativesAttributeGetter(info);
}

void V8SpeechRecognition::maxAlternativesAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_maxAlternatives_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechRecognitionV8Internal::maxAlternativesAttributeSetter(v8Value, info);
}

void V8SpeechRecognition::onaudiostartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onaudiostart_Getter");

  SpeechRecognitionV8Internal::onaudiostartAttributeGetter(info);
}

void V8SpeechRecognition::onaudiostartAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onaudiostart_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechRecognitionV8Internal::onaudiostartAttributeSetter(v8Value, info);
}

void V8SpeechRecognition::onsoundstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onsoundstart_Getter");

  SpeechRecognitionV8Internal::onsoundstartAttributeGetter(info);
}

void V8SpeechRecognition::onsoundstartAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onsoundstart_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechRecognitionV8Internal::onsoundstartAttributeSetter(v8Value, info);
}

void V8SpeechRecognition::onspeechstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onspeechstart_Getter");

  SpeechRecognitionV8Internal::onspeechstartAttributeGetter(info);
}

void V8SpeechRecognition::onspeechstartAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onspeechstart_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechRecognitionV8Internal::onspeechstartAttributeSetter(v8Value, info);
}

void V8SpeechRecognition::onspeechendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onspeechend_Getter");

  SpeechRecognitionV8Internal::onspeechendAttributeGetter(info);
}

void V8SpeechRecognition::onspeechendAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onspeechend_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechRecognitionV8Internal::onspeechendAttributeSetter(v8Value, info);
}

void V8SpeechRecognition::onsoundendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onsoundend_Getter");

  SpeechRecognitionV8Internal::onsoundendAttributeGetter(info);
}

void V8SpeechRecognition::onsoundendAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onsoundend_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechRecognitionV8Internal::onsoundendAttributeSetter(v8Value, info);
}

void V8SpeechRecognition::onaudioendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onaudioend_Getter");

  SpeechRecognitionV8Internal::onaudioendAttributeGetter(info);
}

void V8SpeechRecognition::onaudioendAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onaudioend_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechRecognitionV8Internal::onaudioendAttributeSetter(v8Value, info);
}

void V8SpeechRecognition::onresultAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onresult_Getter");

  SpeechRecognitionV8Internal::onresultAttributeGetter(info);
}

void V8SpeechRecognition::onresultAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onresult_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechRecognitionV8Internal::onresultAttributeSetter(v8Value, info);
}

void V8SpeechRecognition::onnomatchAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onnomatch_Getter");

  SpeechRecognitionV8Internal::onnomatchAttributeGetter(info);
}

void V8SpeechRecognition::onnomatchAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onnomatch_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechRecognitionV8Internal::onnomatchAttributeSetter(v8Value, info);
}

void V8SpeechRecognition::onerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onerror_Getter");

  SpeechRecognitionV8Internal::onerrorAttributeGetter(info);
}

void V8SpeechRecognition::onerrorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onerror_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechRecognitionV8Internal::onerrorAttributeSetter(v8Value, info);
}

void V8SpeechRecognition::onstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onstart_Getter");

  SpeechRecognitionV8Internal::onstartAttributeGetter(info);
}

void V8SpeechRecognition::onstartAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onstart_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechRecognitionV8Internal::onstartAttributeSetter(v8Value, info);
}

void V8SpeechRecognition::onendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onend_Getter");

  SpeechRecognitionV8Internal::onendAttributeGetter(info);
}

void V8SpeechRecognition::onendAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onend_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SpeechRecognitionV8Internal::onendAttributeSetter(v8Value, info);
}

void V8SpeechRecognition::startMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_start");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8SpeechRecognition_Start_Method);
  SpeechRecognitionV8Internal::startMethod(info);
}

void V8SpeechRecognition::stopMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_stop");

  SpeechRecognitionV8Internal::stopMethod(info);
}

void V8SpeechRecognition::abortMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_abort");

  SpeechRecognitionV8Internal::abortMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8SpeechRecognitionAccessors[] = {
    { "grammars", V8SpeechRecognition::grammarsAttributeGetterCallback, V8SpeechRecognition::grammarsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "lang", V8SpeechRecognition::langAttributeGetterCallback, V8SpeechRecognition::langAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "continuous", V8SpeechRecognition::continuousAttributeGetterCallback, V8SpeechRecognition::continuousAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "interimResults", V8SpeechRecognition::interimResultsAttributeGetterCallback, V8SpeechRecognition::interimResultsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "maxAlternatives", V8SpeechRecognition::maxAlternativesAttributeGetterCallback, V8SpeechRecognition::maxAlternativesAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onaudiostart", V8SpeechRecognition::onaudiostartAttributeGetterCallback, V8SpeechRecognition::onaudiostartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onsoundstart", V8SpeechRecognition::onsoundstartAttributeGetterCallback, V8SpeechRecognition::onsoundstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onspeechstart", V8SpeechRecognition::onspeechstartAttributeGetterCallback, V8SpeechRecognition::onspeechstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onspeechend", V8SpeechRecognition::onspeechendAttributeGetterCallback, V8SpeechRecognition::onspeechendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onsoundend", V8SpeechRecognition::onsoundendAttributeGetterCallback, V8SpeechRecognition::onsoundendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onaudioend", V8SpeechRecognition::onaudioendAttributeGetterCallback, V8SpeechRecognition::onaudioendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onresult", V8SpeechRecognition::onresultAttributeGetterCallback, V8SpeechRecognition::onresultAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onnomatch", V8SpeechRecognition::onnomatchAttributeGetterCallback, V8SpeechRecognition::onnomatchAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onerror", V8SpeechRecognition::onerrorAttributeGetterCallback, V8SpeechRecognition::onerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onstart", V8SpeechRecognition::onstartAttributeGetterCallback, V8SpeechRecognition::onstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onend", V8SpeechRecognition::onendAttributeGetterCallback, V8SpeechRecognition::onendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8SpeechRecognitionMethods[] = {
    {"start", V8SpeechRecognition::startMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stop", V8SpeechRecognition::stopMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"abort", V8SpeechRecognition::abortMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8SpeechRecognition::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("SpeechRecognition"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  SpeechRecognitionV8Internal::constructor(info);
}

static void installV8SpeechRecognitionTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SpeechRecognition::wrapperTypeInfo.interface_name, V8EventTarget::domTemplate(isolate, world), V8SpeechRecognition::internalFieldCount);
  interfaceTemplate->SetCallHandler(V8SpeechRecognition::constructorCallback);
  interfaceTemplate->SetLength(0);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8SpeechRecognitionAccessors, arraysize(V8SpeechRecognitionAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8SpeechRecognitionMethods, arraysize(V8SpeechRecognitionMethods));

  // Custom signature

  V8SpeechRecognition::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8SpeechRecognition::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8SpeechRecognition::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SpeechRecognitionTemplate);
}

bool V8SpeechRecognition::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SpeechRecognition::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SpeechRecognition* V8SpeechRecognition::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SpeechRecognition* NativeValueTraits<SpeechRecognition>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  SpeechRecognition* nativeValue = V8SpeechRecognition::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SpeechRecognition"));
  }
  return nativeValue;
}

}  // namespace blink

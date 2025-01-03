// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_dtmf_sender.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abstract_event_listener.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_listener_helper.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8RTCDTMFSender::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8RTCDTMFSender::domTemplate,
    nullptr,
    "RTCDTMFSender",
    &V8EventTarget::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in RTCDTMFSender.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& RTCDTMFSender::wrapper_type_info_ = V8RTCDTMFSender::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, RTCDTMFSender>::value,
    "RTCDTMFSender inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&RTCDTMFSender::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "RTCDTMFSender is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace RTCDTMFSenderV8Internal {

static void canInsertDTMFAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCDTMFSender* impl = V8RTCDTMFSender::ToImpl(holder);

  V8SetReturnValueBool(info, impl->canInsertDTMF());
}

static void trackAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCDTMFSender* impl = V8RTCDTMFSender::ToImpl(holder);

  MediaStreamTrack* cppValue(WTF::GetPtr(impl->track()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#RTCDTMFSender#track")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void toneBufferAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCDTMFSender* impl = V8RTCDTMFSender::ToImpl(holder);

  V8SetReturnValueString(info, impl->toneBuffer(), info.GetIsolate());
}

static void durationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCDTMFSender* impl = V8RTCDTMFSender::ToImpl(holder);

  V8SetReturnValueInt(info, impl->duration());
}

static void interToneGapAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCDTMFSender* impl = V8RTCDTMFSender::ToImpl(holder);

  V8SetReturnValueInt(info, impl->interToneGap());
}

static void ontonechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCDTMFSender* impl = V8RTCDTMFSender::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->ontonechange()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ontonechangeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCDTMFSender* impl = V8RTCDTMFSender::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOntonechange(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void insertDTMFMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCDTMFSender", "insertDTMF");

  RTCDTMFSender* impl = V8RTCDTMFSender::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> tones;
  int32_t duration;
  int32_t interToneGap;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  tones = info[0];
  if (!tones.Prepare())
    return;

  if (UNLIKELY(numArgsPassed <= 1)) {
    impl->insertDTMF(tones, exceptionState);
    if (exceptionState.HadException()) {
      return;
    }
    return;
  }
  duration = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (UNLIKELY(numArgsPassed <= 2)) {
    impl->insertDTMF(tones, duration, exceptionState);
    if (exceptionState.HadException()) {
      return;
    }
    return;
  }
  interToneGap = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->insertDTMF(tones, duration, interToneGap, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

} // namespace RTCDTMFSenderV8Internal

void V8RTCDTMFSender::canInsertDTMFAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCDTMFSender_canInsertDTMF_Getter");

  RTCDTMFSenderV8Internal::canInsertDTMFAttributeGetter(info);
}

void V8RTCDTMFSender::trackAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCDTMFSender_track_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8RTCDTMFSender_Track_AttributeGetter);

  RTCDTMFSenderV8Internal::trackAttributeGetter(info);
}

void V8RTCDTMFSender::toneBufferAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCDTMFSender_toneBuffer_Getter");

  RTCDTMFSenderV8Internal::toneBufferAttributeGetter(info);
}

void V8RTCDTMFSender::durationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCDTMFSender_duration_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8RTCDTMFSender_Duration_AttributeGetter);

  RTCDTMFSenderV8Internal::durationAttributeGetter(info);
}

void V8RTCDTMFSender::interToneGapAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCDTMFSender_interToneGap_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8RTCDTMFSender_InterToneGap_AttributeGetter);

  RTCDTMFSenderV8Internal::interToneGapAttributeGetter(info);
}

void V8RTCDTMFSender::ontonechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCDTMFSender_ontonechange_Getter");

  RTCDTMFSenderV8Internal::ontonechangeAttributeGetter(info);
}

void V8RTCDTMFSender::ontonechangeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCDTMFSender_ontonechange_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  RTCDTMFSenderV8Internal::ontonechangeAttributeSetter(v8Value, info);
}

void V8RTCDTMFSender::insertDTMFMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCDTMFSender_insertDTMF");

  RTCDTMFSenderV8Internal::insertDTMFMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8RTCDTMFSenderAccessors[] = {
    { "canInsertDTMF", V8RTCDTMFSender::canInsertDTMFAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "track", V8RTCDTMFSender::trackAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "toneBuffer", V8RTCDTMFSender::toneBufferAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "duration", V8RTCDTMFSender::durationAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "interToneGap", V8RTCDTMFSender::interToneGapAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ontonechange", V8RTCDTMFSender::ontonechangeAttributeGetterCallback, V8RTCDTMFSender::ontonechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8RTCDTMFSenderMethods[] = {
    {"insertDTMF", V8RTCDTMFSender::insertDTMFMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8RTCDTMFSenderTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8RTCDTMFSender::wrapperTypeInfo.interface_name, V8EventTarget::domTemplate(isolate, world), V8RTCDTMFSender::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8RTCDTMFSenderAccessors, arraysize(V8RTCDTMFSenderAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8RTCDTMFSenderMethods, arraysize(V8RTCDTMFSenderMethods));

  // Custom signature

  V8RTCDTMFSender::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8RTCDTMFSender::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8RTCDTMFSender::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8RTCDTMFSenderTemplate);
}

bool V8RTCDTMFSender::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8RTCDTMFSender::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

RTCDTMFSender* V8RTCDTMFSender::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

RTCDTMFSender* NativeValueTraits<RTCDTMFSender>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  RTCDTMFSender* nativeValue = V8RTCDTMFSender::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "RTCDTMFSender"));
  }
  return nativeValue;
}

}  // namespace blink

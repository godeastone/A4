// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_html_video_element_partial.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abstract_event_listener.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_listener_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_video_element.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_video_playback_quality.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/deprecation.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/core/html_names.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"
#include "third_party/blink/renderer/modules/audio_output_devices/html_media_element_audio_output_device.h"
#include "third_party/blink/renderer/modules/encryptedmedia/html_media_element_encrypted_media.h"
#include "third_party/blink/renderer/modules/mediacapturefromelement/html_media_element_capture.h"
#include "third_party/blink/renderer/modules/mediasource/html_video_element_media_source.h"
#include "third_party/blink/renderer/modules/picture_in_picture/html_video_element_picture_in_picture.h"
#include "third_party/blink/renderer/modules/remoteplayback/html_media_element_remote_playback.h"
#include "third_party/blink/renderer/modules/srcobject/html_media_element_src_object.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_activity_logger.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

namespace HTMLVideoElementPartialV8Internal {

static void onenterpictureinpictureAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  EventListener* cppValue(HTMLVideoElementPictureInPicture::onenterpictureinpicture(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onenterpictureinpictureAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  // Prepare the value to be set.

  HTMLVideoElementPictureInPicture::setOnenterpictureinpicture(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onleavepictureinpictureAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  EventListener* cppValue(HTMLVideoElementPictureInPicture::onleavepictureinpicture(*impl));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onleavepictureinpictureAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  // Prepare the value to be set.

  HTMLVideoElementPictureInPicture::setOnleavepictureinpicture(*impl, V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void disablePictureInPictureAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueBool(info, HTMLVideoElementPictureInPicture::FastHasAttribute(HTMLNames::disablepictureinpictureAttr, *impl));
}

static void disablePictureInPictureAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLVideoElement", "disablePictureInPicture");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  HTMLVideoElementPictureInPicture::SetBooleanAttribute(HTMLNames::disablepictureinpictureAttr, *impl, cppValue);
}

static void getVideoPlaybackQualityMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, HTMLVideoElementMediaSource::getVideoPlaybackQuality(*impl), impl);
}

static void requestPictureInPictureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLVideoElement", "requestPictureInPicture");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8HTMLVideoElement::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = HTMLVideoElementPictureInPicture::requestPictureInPicture(scriptState, *impl);
  V8SetReturnValue(info, result.V8Value());
}

} // namespace HTMLVideoElementPartialV8Internal

void V8HTMLVideoElementPartial::onenterpictureinpictureAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_onenterpictureinpicture_Getter");

  HTMLVideoElementPartialV8Internal::onenterpictureinpictureAttributeGetter(info);
}

void V8HTMLVideoElementPartial::onenterpictureinpictureAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_onenterpictureinpicture_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  HTMLVideoElementPartialV8Internal::onenterpictureinpictureAttributeSetter(v8Value, info);
}

void V8HTMLVideoElementPartial::onleavepictureinpictureAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_onleavepictureinpicture_Getter");

  HTMLVideoElementPartialV8Internal::onleavepictureinpictureAttributeGetter(info);
}

void V8HTMLVideoElementPartial::onleavepictureinpictureAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_onleavepictureinpicture_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  HTMLVideoElementPartialV8Internal::onleavepictureinpictureAttributeSetter(v8Value, info);
}

void V8HTMLVideoElementPartial::disablePictureInPictureAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_disablePictureInPicture_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8HTMLVideoElement_DisablePictureInPicture_AttributeGetter);

  HTMLVideoElementPartialV8Internal::disablePictureInPictureAttributeGetter(info);
}

void V8HTMLVideoElementPartial::disablePictureInPictureAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_disablePictureInPicture_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8HTMLVideoElement_DisablePictureInPicture_AttributeSetter);

  CEReactionsScope ceReactionsScope;

  HTMLVideoElementPartialV8Internal::disablePictureInPictureAttributeSetter(v8Value, info);
}

void V8HTMLVideoElementPartial::getVideoPlaybackQualityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_getVideoPlaybackQuality");

  HTMLVideoElementPartialV8Internal::getVideoPlaybackQualityMethod(info);
}

void V8HTMLVideoElementPartial::requestPictureInPictureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_requestPictureInPicture");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8HTMLVideoElement_RequestPictureInPicture_Method);
  HTMLVideoElementPartialV8Internal::requestPictureInPictureMethod(info);
}

void V8HTMLVideoElementPartial::installV8HTMLVideoElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8HTMLVideoElement::installV8HTMLVideoElementTemplate(isolate, world, interfaceTemplate);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.

  // Custom signature

  V8HTMLVideoElementPartial::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8HTMLVideoElementPartial::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  V8HTMLVideoElement::InstallRuntimeEnabledFeaturesOnTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
  if (RuntimeEnabledFeatures::MediaSourceExperimentalEnabled()) {
    const V8DOMConfiguration::MethodConfiguration getVideoPlaybackQualityMethodConfiguration[] = {
      {"getVideoPlaybackQuality", V8HTMLVideoElementPartial::getVideoPlaybackQualityMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : getVideoPlaybackQualityMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
}

void V8HTMLVideoElementPartial::installPictureInPictureAPI(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8HTMLVideoElement::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  static const V8DOMConfiguration::AccessorConfiguration accessordisablePictureInPictureConfiguration[] = {
    { "disablePictureInPicture", V8HTMLVideoElementPartial::disablePictureInPictureAttributeGetterCallback, V8HTMLVideoElementPartial::disablePictureInPictureAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& accessorConfig : accessordisablePictureInPictureConfiguration)
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
  static const V8DOMConfiguration::AccessorConfiguration accessoronenterpictureinpictureConfiguration[] = {
    { "onenterpictureinpicture", V8HTMLVideoElementPartial::onenterpictureinpictureAttributeGetterCallback, V8HTMLVideoElementPartial::onenterpictureinpictureAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& accessorConfig : accessoronenterpictureinpictureConfiguration)
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
  static const V8DOMConfiguration::AccessorConfiguration accessoronleavepictureinpictureConfiguration[] = {
    { "onleavepictureinpicture", V8HTMLVideoElementPartial::onleavepictureinpictureAttributeGetterCallback, V8HTMLVideoElementPartial::onleavepictureinpictureAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& accessorConfig : accessoronleavepictureinpictureConfiguration)
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
  static const V8DOMConfiguration::MethodConfiguration methodRequestpictureinpictureConfiguration[] = {
    {"requestPictureInPicture", V8HTMLVideoElementPartial::requestPictureInPictureMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& methodConfig : methodRequestpictureinpictureConfiguration)
    V8DOMConfiguration::InstallMethod(isolate, world, instance, prototype, interface, signature, methodConfig);
}

void V8HTMLVideoElementPartial::installPictureInPictureAPI(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8HTMLVideoElement::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8HTMLVideoElement::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installPictureInPictureAPI(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8HTMLVideoElementPartial::installPictureInPictureAPI(ScriptState* scriptState) {
  installPictureInPictureAPI(scriptState, v8::Local<v8::Object>());
}

void V8HTMLVideoElementPartial::initialize() {
  // Should be invoked from ModulesInitializer.
  V8HTMLVideoElement::UpdateWrapperTypeInfo(
      &V8HTMLVideoElementPartial::installV8HTMLVideoElementTemplate,
      nullptr,
      &V8HTMLVideoElementPartial::InstallRuntimeEnabledFeaturesOnTemplate,
      nullptr);
}

}  // namespace blink

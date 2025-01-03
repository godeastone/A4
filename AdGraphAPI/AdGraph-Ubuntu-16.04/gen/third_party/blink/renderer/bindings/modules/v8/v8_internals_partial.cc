// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_internals_partial.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_internals.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_navigator.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_window.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_device_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_track_constraints.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_certificate.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/modules/accessibility/testing/internals_accessibility.h"
#include "third_party/blink/renderer/modules/mediastream/testing/internals_media_stream.h"
#include "third_party/blink/renderer/modules/navigatorcontentutils/testing/internals_navigator_content_utils.h"
#include "third_party/blink/renderer/modules/peerconnection/testing/internals_rtc_certificate.h"
#include "third_party/blink/renderer/modules/peerconnection/testing/internals_rtc_peer_connection.h"
#include "third_party/blink/renderer/modules/serviceworkers/testing/internals_service_worker.h"
#include "third_party/blink/renderer/modules/speech/testing/internals_speech_synthesis.h"
#include "third_party/blink/renderer/modules/vibration/testing/internals_vibration.h"
#include "third_party/blink/renderer/modules/webaudio/testing/internals_web_audio.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

namespace InternalsPartialV8Internal {

static void peerConnectionCountLimitAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueInt(info, InternalsRTCPeerConnection::peerConnectionCountLimit(*impl));
}

static void numberOfLiveAXObjectsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueUnsigned(info, InternalsAccessibility::numberOfLiveAXObjects(*impl));
}

static void addFakeDeviceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "addFakeDevice");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  MediaDeviceInfo* deviceInfo;
  MediaTrackConstraints capabilities;
  MediaStreamTrack* dataSource;
  deviceInfo = V8MediaDeviceInfo::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!deviceInfo) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'MediaDeviceInfo'.");
    return;
  }

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 2 ('capabilities') is not an object.");
    return;
  }
  V8MediaTrackConstraints::ToImpl(info.GetIsolate(), info[1], capabilities, exceptionState);
  if (exceptionState.HadException())
    return;

  dataSource = V8MediaStreamTrack::ToImplWithTypeCheck(info.GetIsolate(), info[2]);
  if (!dataSource && !IsUndefinedOrNull(info[2])) {
    exceptionState.ThrowTypeError("parameter 3 is not of type 'MediaStreamTrack'.");
    return;
  }

  ScriptPromise result = InternalsMediaStream::addFakeDevice(scriptState, *impl, deviceInfo, capabilities, dataSource);
  V8SetReturnValue(info, result.V8Value());
}

static void setNavigatorContentUtilsClientMockMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setNavigatorContentUtilsClientMock", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setNavigatorContentUtilsClientMock", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  InternalsNavigatorContentUtils::setNavigatorContentUtilsClientMock(*impl, document);
}

static void rtcCertificateEqualsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("rtcCertificateEquals", "Internals", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  RTCCertificate* a;
  RTCCertificate* b;
  a = V8RTCCertificate::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!a) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("rtcCertificateEquals", "Internals", "parameter 1 is not of type 'RTCCertificate'."));
    return;
  }

  b = V8RTCCertificate::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!b) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("rtcCertificateEquals", "Internals", "parameter 2 is not of type 'RTCCertificate'."));
    return;
  }

  V8SetReturnValueBool(info, InternalsRTCCertificate::rtcCertificateEquals(*impl, a, b));
}

static void peerConnectionCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueInt(info, InternalsRTCPeerConnection::peerConnectionCount(*impl));
}

static void terminateServiceWorkerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "terminateServiceWorker");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  ServiceWorker* worker;
  worker = V8ServiceWorker::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!worker) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'ServiceWorker'.");
    return;
  }

  ScriptPromise result = InternalsServiceWorker::terminateServiceWorker(scriptState, *impl, worker);
  V8SetReturnValue(info, result.V8Value());
}

static void enableMockSpeechSynthesizerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("enableMockSpeechSynthesizer", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  DOMWindow* window;
  window = ToDOMWindow(info.GetIsolate(), info[0]);
  if (!window) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("enableMockSpeechSynthesizer", "Internals", "parameter 1 is not of type 'Window'."));
    return;
  }

  InternalsSpeechSynthesis::enableMockSpeechSynthesizer(scriptState, *impl, window);
}

static void isVibratingMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isVibrating", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Navigator* navigator;
  navigator = V8Navigator::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!navigator) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isVibrating", "Internals", "parameter 1 is not of type 'Navigator'."));
    return;
  }

  V8SetReturnValueBool(info, InternalsVibration::isVibrating(*impl, navigator));
}

static void pendingVibrationPatternMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("pendingVibrationPattern", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Navigator* navigator;
  navigator = V8Navigator::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!navigator) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("pendingVibrationPattern", "Internals", "parameter 1 is not of type 'Navigator'."));
    return;
  }

  V8SetReturnValue(info, ToV8(InternalsVibration::pendingVibrationPattern(*impl, navigator), info.Holder(), info.GetIsolate()));
}

static void audioHandlerCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueUnsigned(info, InternalsWebAudio::audioHandlerCount(*impl));
}

} // namespace InternalsPartialV8Internal

void V8InternalsPartial::peerConnectionCountLimitAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_peerConnectionCountLimit_Getter");

  InternalsPartialV8Internal::peerConnectionCountLimitAttributeGetter(info);
}

void V8InternalsPartial::numberOfLiveAXObjectsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_numberOfLiveAXObjects");

  InternalsPartialV8Internal::numberOfLiveAXObjectsMethod(info);
}

void V8InternalsPartial::addFakeDeviceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_addFakeDevice");

  InternalsPartialV8Internal::addFakeDeviceMethod(info);
}

void V8InternalsPartial::setNavigatorContentUtilsClientMockMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setNavigatorContentUtilsClientMock");

  InternalsPartialV8Internal::setNavigatorContentUtilsClientMockMethod(info);
}

void V8InternalsPartial::rtcCertificateEqualsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_rtcCertificateEquals");

  InternalsPartialV8Internal::rtcCertificateEqualsMethod(info);
}

void V8InternalsPartial::peerConnectionCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_peerConnectionCount");

  InternalsPartialV8Internal::peerConnectionCountMethod(info);
}

void V8InternalsPartial::terminateServiceWorkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_terminateServiceWorker");

  InternalsPartialV8Internal::terminateServiceWorkerMethod(info);
}

void V8InternalsPartial::enableMockSpeechSynthesizerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_enableMockSpeechSynthesizer");

  InternalsPartialV8Internal::enableMockSpeechSynthesizerMethod(info);
}

void V8InternalsPartial::isVibratingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isVibrating");

  InternalsPartialV8Internal::isVibratingMethod(info);
}

void V8InternalsPartial::pendingVibrationPatternMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_pendingVibrationPattern");

  InternalsPartialV8Internal::pendingVibrationPatternMethod(info);
}

void V8InternalsPartial::audioHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_audioHandlerCount");

  InternalsPartialV8Internal::audioHandlerCountMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8InternalsAccessors[] = {
    { "peerConnectionCountLimit", V8InternalsPartial::peerConnectionCountLimitAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8InternalsMethods[] = {
    {"numberOfLiveAXObjects", V8InternalsPartial::numberOfLiveAXObjectsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addFakeDevice", V8InternalsPartial::addFakeDeviceMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setNavigatorContentUtilsClientMock", V8InternalsPartial::setNavigatorContentUtilsClientMockMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rtcCertificateEquals", V8InternalsPartial::rtcCertificateEqualsMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"peerConnectionCount", V8InternalsPartial::peerConnectionCountMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"terminateServiceWorker", V8InternalsPartial::terminateServiceWorkerMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"enableMockSpeechSynthesizer", V8InternalsPartial::enableMockSpeechSynthesizerMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isVibrating", V8InternalsPartial::isVibratingMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pendingVibrationPattern", V8InternalsPartial::pendingVibrationPatternMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"audioHandlerCount", V8InternalsPartial::audioHandlerCountMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8InternalsPartial::installV8InternalsTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8Internals::installV8InternalsTemplate(isolate, world, interfaceTemplate);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8InternalsAccessors, arraysize(V8InternalsAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8InternalsMethods, arraysize(V8InternalsMethods));

  // Custom signature

  V8InternalsPartial::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8InternalsPartial::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  V8Internals::InstallRuntimeEnabledFeaturesOnTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

void V8InternalsPartial::initialize() {
  // Should be invoked from ModulesInitializer.
  V8Internals::UpdateWrapperTypeInfo(
      &V8InternalsPartial::installV8InternalsTemplate,
      nullptr,
      &V8InternalsPartial::InstallRuntimeEnabledFeaturesOnTemplate,
      nullptr);
}

}  // namespace blink

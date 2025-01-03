// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_peer_connection.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abstract_event_listener.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_listener_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_void_function.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_answer_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_data_channel.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_data_channel_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_dtmf_sender.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_candidate.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_candidate_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_offer_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_peer_connection_error_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_receiver.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_sender.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_session_description.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_session_description_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_session_description_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_stats_callback.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
const WrapperTypeInfo V8RTCPeerConnection::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8RTCPeerConnection::domTemplate,
    nullptr,
    "RTCPeerConnection",
    &V8EventTarget::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in RTCPeerConnection.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& RTCPeerConnection::wrapper_type_info_ = V8RTCPeerConnection::wrapperTypeInfo;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, RTCPeerConnection>::value,
    "RTCPeerConnection does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&RTCPeerConnection::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "RTCPeerConnection is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace RTCPeerConnectionV8Internal {

static void localDescriptionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  RTCSessionDescription* cppValue(WTF::GetPtr(impl->localDescription()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#RTCPeerConnection#localDescription")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void remoteDescriptionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  RTCSessionDescription* cppValue(WTF::GetPtr(impl->remoteDescription()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#RTCPeerConnection#remoteDescription")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void signalingStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  V8SetReturnValueString(info, impl->signalingState(), info.GetIsolate());
}

static void iceGatheringStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  V8SetReturnValueString(info, impl->iceGatheringState(), info.GetIsolate());
}

static void iceConnectionStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  V8SetReturnValueString(info, impl->iceConnectionState(), info.GetIsolate());
}

static void onnegotiationneededAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onnegotiationneeded()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onnegotiationneededAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnnegotiationneeded(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onicecandidateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onicecandidate()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onicecandidateAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnicecandidate(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onsignalingstatechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onsignalingstatechange()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onsignalingstatechangeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnsignalingstatechange(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void oniceconnectionstatechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->oniceconnectionstatechange()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void oniceconnectionstatechangeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOniceconnectionstatechange(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onicegatheringstatechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onicegatheringstatechange()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onicegatheringstatechangeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnicegatheringstatechange(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ontrackAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->ontrack()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ontrackAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOntrack(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void ondatachannelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->ondatachannel()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ondatachannelAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOndatachannel(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onaddstreamAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onaddstream()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onaddstreamAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnaddstream(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onremovestreamAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onremovestream()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onremovestreamAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnremovestream(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void idAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  V8SetReturnValueString(info, impl->id(scriptState), info.GetIsolate());
}

static void createOffer1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "createOffer");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  RTCOfferOptions options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  V8RTCOfferOptions::ToImpl(info.GetIsolate(), info[0], options, exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->createOffer(scriptState, options);
  V8SetReturnValue(info, result.V8Value());
}

static void createAnswer1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "createAnswer");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  RTCAnswerOptions options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  V8RTCAnswerOptions::ToImpl(info.GetIsolate(), info[0], options, exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->createAnswer(scriptState, options);
  V8SetReturnValue(info, result.V8Value());
}

static void setLocalDescription1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "setLocalDescription");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  RTCSessionDescriptionInit description;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('description') is not an object.");
    return;
  }
  V8RTCSessionDescriptionInit::ToImpl(info.GetIsolate(), info[0], description, exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->setLocalDescription(scriptState, description);
  V8SetReturnValue(info, result.V8Value());
}

static void setRemoteDescription1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "setRemoteDescription");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  RTCSessionDescriptionInit description;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('description') is not an object.");
    return;
  }
  V8RTCSessionDescriptionInit::ToImpl(info.GetIsolate(), info[0], description, exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->setRemoteDescription(scriptState, description);
  V8SetReturnValue(info, result.V8Value());
}

static void addIceCandidate1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "addIceCandidate");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  RTCIceCandidateInitOrRTCIceCandidate candidate;
  V8RTCIceCandidateInitOrRTCIceCandidate::ToImpl(info.GetIsolate(), info[0], candidate, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->addIceCandidate(scriptState, candidate);
  V8SetReturnValue(info, result.V8Value());
}

static void setConfigurationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "setConfiguration");

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  RTCConfiguration configuration;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('configuration') is not an object.");
    return;
  }
  V8RTCConfiguration::ToImpl(info.GetIsolate(), info[0], configuration, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setConfiguration(scriptState, configuration, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void closeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  impl->close();
}

static void createOffer2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "createOffer");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  V8RTCSessionDescriptionCallback* successCallback;
  V8RTCPeerConnectionErrorCallback* failureCallback;
  Dictionary rtcOfferOptions;
  if (info[0]->IsFunction()) {
    successCallback = V8RTCSessionDescriptionCallback::Create(info[0].As<v8::Function>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  if (info[1]->IsFunction()) {
    failureCallback = V8RTCPeerConnectionErrorCallback::Create(info[1].As<v8::Function>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  if (!info[2]->IsNullOrUndefined() && !info[2]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 3 ('rtcOfferOptions') is not an object.");
    return;
  }
  rtcOfferOptions = NativeValueTraits<Dictionary>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->createOffer(scriptState, successCallback, failureCallback, rtcOfferOptions, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void createOfferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(3, info.Length())) {
    case 0:
      if (true) {
        createOffer1Method(info);
        return;
      }
      break;
    case 1:
      if (true) {
        createOffer1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        createOffer2Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        createOffer2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "createOffer");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);
  if (isArityError) {
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void createAnswer2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "createAnswer");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  V8RTCSessionDescriptionCallback* successCallback;
  V8RTCPeerConnectionErrorCallback* failureCallback;
  Dictionary mediaConstraints;
  if (info[0]->IsFunction()) {
    successCallback = V8RTCSessionDescriptionCallback::Create(info[0].As<v8::Function>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  if (info[1]->IsFunction()) {
    failureCallback = V8RTCPeerConnectionErrorCallback::Create(info[1].As<v8::Function>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  if (!info[2]->IsNullOrUndefined() && !info[2]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 3 ('mediaConstraints') is not an object.");
    return;
  }
  mediaConstraints = NativeValueTraits<Dictionary>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->createAnswer(scriptState, successCallback, failureCallback, mediaConstraints);
  V8SetReturnValue(info, result.V8Value());
}

static void createAnswerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(3, info.Length())) {
    case 0:
      if (true) {
        createAnswer1Method(info);
        return;
      }
      break;
    case 1:
      if (true) {
        createAnswer1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        createAnswer2Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        createAnswer2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "createAnswer");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);
  if (isArityError) {
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void setLocalDescription2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "setLocalDescription");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  RTCSessionDescriptionInit description;
  V8VoidFunction* successCallback;
  V8RTCPeerConnectionErrorCallback* failureCallback;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('description') is not an object.");
    return;
  }
  V8RTCSessionDescriptionInit::ToImpl(info.GetIsolate(), info[0], description, exceptionState);
  if (exceptionState.HadException())
    return;

  if (info[1]->IsFunction()) {
    successCallback = V8VoidFunction::Create(info[1].As<v8::Function>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  if (UNLIKELY(numArgsPassed <= 2)) {
    ScriptPromise result = impl->setLocalDescription(scriptState, description, successCallback);
    V8SetReturnValue(info, result.V8Value());
    return;
  }
  if (info[2]->IsFunction()) {
    failureCallback = V8RTCPeerConnectionErrorCallback::Create(info[2].As<v8::Function>());
  } else if (info[2]->IsNullOrUndefined()) {
    failureCallback = nullptr;
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 3 is not a function.");
    return;
  }

  ScriptPromise result = impl->setLocalDescription(scriptState, description, successCallback, failureCallback);
  V8SetReturnValue(info, result.V8Value());
}

static void setLocalDescriptionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(3, info.Length())) {
    case 1:
      if (true) {
        setLocalDescription1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        setLocalDescription2Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        setLocalDescription2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "setLocalDescription");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);
  if (isArityError) {
    if (info.Length() < 1) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void setRemoteDescription2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "setRemoteDescription");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  RTCSessionDescriptionInit description;
  V8VoidFunction* successCallback;
  V8RTCPeerConnectionErrorCallback* failureCallback;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('description') is not an object.");
    return;
  }
  V8RTCSessionDescriptionInit::ToImpl(info.GetIsolate(), info[0], description, exceptionState);
  if (exceptionState.HadException())
    return;

  if (info[1]->IsFunction()) {
    successCallback = V8VoidFunction::Create(info[1].As<v8::Function>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  if (UNLIKELY(numArgsPassed <= 2)) {
    ScriptPromise result = impl->setRemoteDescription(scriptState, description, successCallback);
    V8SetReturnValue(info, result.V8Value());
    return;
  }
  if (info[2]->IsFunction()) {
    failureCallback = V8RTCPeerConnectionErrorCallback::Create(info[2].As<v8::Function>());
  } else if (info[2]->IsNullOrUndefined()) {
    failureCallback = nullptr;
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 3 is not a function.");
    return;
  }

  ScriptPromise result = impl->setRemoteDescription(scriptState, description, successCallback, failureCallback);
  V8SetReturnValue(info, result.V8Value());
}

static void setRemoteDescriptionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(3, info.Length())) {
    case 1:
      if (true) {
        setRemoteDescription1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        setRemoteDescription2Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        setRemoteDescription2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "setRemoteDescription");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);
  if (isArityError) {
    if (info.Length() < 1) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void addIceCandidate2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "addIceCandidate");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  RTCIceCandidateInitOrRTCIceCandidate candidate;
  V8VoidFunction* successCallback;
  V8RTCPeerConnectionErrorCallback* failureCallback;
  V8RTCIceCandidateInitOrRTCIceCandidate::ToImpl(info.GetIsolate(), info[0], candidate, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  if (info[1]->IsFunction()) {
    successCallback = V8VoidFunction::Create(info[1].As<v8::Function>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  if (info[2]->IsFunction()) {
    failureCallback = V8RTCPeerConnectionErrorCallback::Create(info[2].As<v8::Function>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 3 is not a function.");
    return;
  }

  ScriptPromise result = impl->addIceCandidate(scriptState, candidate, successCallback, failureCallback);
  V8SetReturnValue(info, result.V8Value());
}

static void addIceCandidateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(3, info.Length())) {
    case 1:
      if (true) {
        UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kRTCPeerConnectionAddIceCandidatePromise);
        addIceCandidate1Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kRTCPeerConnectionAddIceCandidateLegacy);
        addIceCandidate2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "addIceCandidate");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);
  if (isArityError) {
    if (info.Length() < 1) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
    if (info.Length() >= 1) {
      exceptionState.ThrowTypeError(ExceptionMessages::InvalidArity("[1, 3]", info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void getStats1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "getStats");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  V8RTCStatsCallback* successCallback;
  MediaStreamTrack* selector;
  if (info[0]->IsFunction()) {
    successCallback = V8RTCStatsCallback::Create(info[0].As<v8::Function>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  selector = V8MediaStreamTrack::ToImplWithTypeCheck(info.GetIsolate(), info[1]);

  ScriptPromise result = impl->getStats(scriptState, successCallback, selector);
  V8SetReturnValue(info, result.V8Value());
}

static void getStats2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "getStats");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  ScriptValue callbackOrSelector;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  if (UNLIKELY(numArgsPassed <= 0)) {
    ScriptPromise result = impl->getStats(scriptState);
    V8SetReturnValue(info, result.V8Value());
    return;
  }
  callbackOrSelector = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  ScriptPromise result = impl->getStats(scriptState, callbackOrSelector);
  V8SetReturnValue(info, result.V8Value());
}

static void getStatsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(2, info.Length())) {
    case 0:
      if (true) {
        getStats2Method(info);
        return;
      }
      break;
    case 1:
      if (true) {
        getStats2Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        getStats1Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "getStats");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);
  if (isArityError) {
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void getSendersMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getSenders(), info.Holder(), info.GetIsolate()));
}

static void getReceiversMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getReceivers(), info.Holder(), info.GetIsolate()));
}

static void addTrackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "addTrack");

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  MediaStreamTrack* track;
  HeapVector<Member<MediaStream>> streams;
  track = V8MediaStreamTrack::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!track) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'MediaStreamTrack'.");
    return;
  }

  for (int i = 1; i < info.Length(); ++i) {
    if (!V8MediaStream::hasInstance(info[i], info.GetIsolate())) {
      exceptionState.ThrowTypeError("parameter 2 is not of type 'MediaStream'.");
      return;
    }
    streams.push_back(V8MediaStream::ToImpl(v8::Local<v8::Object>::Cast(info[i])));
  }

  RTCRtpSender* result = impl->addTrack(track, streams, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void removeTrackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "removeTrack");

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  RTCRtpSender* sender;
  sender = V8RTCRtpSender::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sender) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'RTCRtpSender'.");
    return;
  }

  impl->removeTrack(sender, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void createDataChannelMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "createDataChannel");

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> label;
  RTCDataChannelInit dataChannelDict;
  label = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 2 ('dataChannelDict') is not an object.");
    return;
  }
  V8RTCDataChannelInit::ToImpl(info.GetIsolate(), info[1], dataChannelDict, exceptionState);
  if (exceptionState.HadException())
    return;

  RTCDataChannel* result = impl->createDataChannel(scriptState, label, dataChannelDict, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void generateCertificateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "generateCertificate");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  ScriptState* scriptState = ScriptState::ForCurrentRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  DictionaryOrString keygenAlgorithm;
  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[0], keygenAlgorithm, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = RTCPeerConnection::generateCertificate(scriptState, keygenAlgorithm, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void getLocalStreamsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getLocalStreams(), info.Holder(), info.GetIsolate()));
}

static void getRemoteStreamsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getRemoteStreams(), info.Holder(), info.GetIsolate()));
}

static void addStreamMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "addStream");

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  MediaStream* stream;
  Dictionary mediaConstraints;
  stream = V8MediaStream::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!stream) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'MediaStream'.");
    return;
  }

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 2 ('mediaConstraints') is not an object.");
    return;
  }
  mediaConstraints = NativeValueTraits<Dictionary>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->addStream(scriptState, stream, mediaConstraints, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void removeStreamMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "removeStream");

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  MediaStream* stream;
  stream = V8MediaStream::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!stream) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'MediaStream'.");
    return;
  }

  impl->removeStream(stream, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void createDTMFSenderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "createDTMFSender");

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  MediaStreamTrack* track;
  track = V8MediaStreamTrack::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!track) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'MediaStreamTrack'.");
    return;
  }

  RTCDTMFSender* result = impl->createDTMFSender(track, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_ConstructorCallback");

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kConstructionContext, "RTCPeerConnection");

  RTCConfiguration configuration;
  Dictionary mediaConstraints;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('configuration') is not an object.");
    return;
  }
  V8RTCConfiguration::ToImpl(info.GetIsolate(), info[0], configuration, exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 2 ('mediaConstraints') is not an object.");
    return;
  }
  mediaConstraints = NativeValueTraits<Dictionary>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  ExecutionContext* executionContext = ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext());
  RTCPeerConnection* impl = RTCPeerConnection::Create(executionContext, configuration, mediaConstraints, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), &V8RTCPeerConnection::wrapperTypeInfo, wrapper);
  V8SetReturnValue(info, wrapper);
}

} // namespace RTCPeerConnectionV8Internal

void V8RTCPeerConnection::localDescriptionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_localDescription_Getter");

  RTCPeerConnectionV8Internal::localDescriptionAttributeGetter(info);
}

void V8RTCPeerConnection::remoteDescriptionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_remoteDescription_Getter");

  RTCPeerConnectionV8Internal::remoteDescriptionAttributeGetter(info);
}

void V8RTCPeerConnection::signalingStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_signalingState_Getter");

  RTCPeerConnectionV8Internal::signalingStateAttributeGetter(info);
}

void V8RTCPeerConnection::iceGatheringStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_iceGatheringState_Getter");

  RTCPeerConnectionV8Internal::iceGatheringStateAttributeGetter(info);
}

void V8RTCPeerConnection::iceConnectionStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_iceConnectionState_Getter");

  RTCPeerConnectionV8Internal::iceConnectionStateAttributeGetter(info);
}

void V8RTCPeerConnection::onnegotiationneededAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onnegotiationneeded_Getter");

  RTCPeerConnectionV8Internal::onnegotiationneededAttributeGetter(info);
}

void V8RTCPeerConnection::onnegotiationneededAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onnegotiationneeded_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  RTCPeerConnectionV8Internal::onnegotiationneededAttributeSetter(v8Value, info);
}

void V8RTCPeerConnection::onicecandidateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onicecandidate_Getter");

  RTCPeerConnectionV8Internal::onicecandidateAttributeGetter(info);
}

void V8RTCPeerConnection::onicecandidateAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onicecandidate_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  RTCPeerConnectionV8Internal::onicecandidateAttributeSetter(v8Value, info);
}

void V8RTCPeerConnection::onsignalingstatechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onsignalingstatechange_Getter");

  RTCPeerConnectionV8Internal::onsignalingstatechangeAttributeGetter(info);
}

void V8RTCPeerConnection::onsignalingstatechangeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onsignalingstatechange_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  RTCPeerConnectionV8Internal::onsignalingstatechangeAttributeSetter(v8Value, info);
}

void V8RTCPeerConnection::oniceconnectionstatechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_oniceconnectionstatechange_Getter");

  RTCPeerConnectionV8Internal::oniceconnectionstatechangeAttributeGetter(info);
}

void V8RTCPeerConnection::oniceconnectionstatechangeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_oniceconnectionstatechange_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  RTCPeerConnectionV8Internal::oniceconnectionstatechangeAttributeSetter(v8Value, info);
}

void V8RTCPeerConnection::onicegatheringstatechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onicegatheringstatechange_Getter");

  RTCPeerConnectionV8Internal::onicegatheringstatechangeAttributeGetter(info);
}

void V8RTCPeerConnection::onicegatheringstatechangeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onicegatheringstatechange_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  RTCPeerConnectionV8Internal::onicegatheringstatechangeAttributeSetter(v8Value, info);
}

void V8RTCPeerConnection::ontrackAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_ontrack_Getter");

  RTCPeerConnectionV8Internal::ontrackAttributeGetter(info);
}

void V8RTCPeerConnection::ontrackAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_ontrack_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  RTCPeerConnectionV8Internal::ontrackAttributeSetter(v8Value, info);
}

void V8RTCPeerConnection::ondatachannelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_ondatachannel_Getter");

  RTCPeerConnectionV8Internal::ondatachannelAttributeGetter(info);
}

void V8RTCPeerConnection::ondatachannelAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_ondatachannel_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  RTCPeerConnectionV8Internal::ondatachannelAttributeSetter(v8Value, info);
}

void V8RTCPeerConnection::onaddstreamAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onaddstream_Getter");

  RTCPeerConnectionV8Internal::onaddstreamAttributeGetter(info);
}

void V8RTCPeerConnection::onaddstreamAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onaddstream_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  RTCPeerConnectionV8Internal::onaddstreamAttributeSetter(v8Value, info);
}

void V8RTCPeerConnection::onremovestreamAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onremovestream_Getter");

  RTCPeerConnectionV8Internal::onremovestreamAttributeGetter(info);
}

void V8RTCPeerConnection::onremovestreamAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onremovestream_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  RTCPeerConnectionV8Internal::onremovestreamAttributeSetter(v8Value, info);
}

void V8RTCPeerConnection::idAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_id_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kRtcPeerConnectionId);

  RTCPeerConnectionV8Internal::idAttributeGetter(info);
}

void V8RTCPeerConnection::setConfigurationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_setConfiguration");

  RTCPeerConnectionV8Internal::setConfigurationMethod(info);
}

void V8RTCPeerConnection::closeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_close");

  RTCPeerConnectionV8Internal::closeMethod(info);
}

void V8RTCPeerConnection::createOfferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_createOffer");

  RTCPeerConnectionV8Internal::createOfferMethod(info);
}

void V8RTCPeerConnection::createAnswerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_createAnswer");

  RTCPeerConnectionV8Internal::createAnswerMethod(info);
}

void V8RTCPeerConnection::setLocalDescriptionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_setLocalDescription");

  RTCPeerConnectionV8Internal::setLocalDescriptionMethod(info);
}

void V8RTCPeerConnection::setRemoteDescriptionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_setRemoteDescription");

  RTCPeerConnectionV8Internal::setRemoteDescriptionMethod(info);
}

void V8RTCPeerConnection::addIceCandidateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_addIceCandidate");

  RTCPeerConnectionV8Internal::addIceCandidateMethod(info);
}

void V8RTCPeerConnection::getStatsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_getStats");

  RTCPeerConnectionV8Internal::getStatsMethod(info);
}

void V8RTCPeerConnection::getSendersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_getSenders");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8RTCPeerConnection_GetSenders_Method);
  RTCPeerConnectionV8Internal::getSendersMethod(info);
}

void V8RTCPeerConnection::getReceiversMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_getReceivers");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8RTCPeerConnection_GetReceivers_Method);
  RTCPeerConnectionV8Internal::getReceiversMethod(info);
}

void V8RTCPeerConnection::addTrackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_addTrack");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8RTCPeerConnection_AddTrack_Method);
  RTCPeerConnectionV8Internal::addTrackMethod(info);
}

void V8RTCPeerConnection::removeTrackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_removeTrack");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8RTCPeerConnection_RemoveTrack_Method);
  RTCPeerConnectionV8Internal::removeTrackMethod(info);
}

void V8RTCPeerConnection::createDataChannelMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_createDataChannel");

  RTCPeerConnectionV8Internal::createDataChannelMethod(info);
}

void V8RTCPeerConnection::generateCertificateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_generateCertificate");

  RTCPeerConnectionV8Internal::generateCertificateMethod(info);
}

void V8RTCPeerConnection::getLocalStreamsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_getLocalStreams");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8RTCPeerConnection_GetLocalStreams_Method);
  RTCPeerConnectionV8Internal::getLocalStreamsMethod(info);
}

void V8RTCPeerConnection::getRemoteStreamsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_getRemoteStreams");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8RTCPeerConnection_GetRemoteStreams_Method);
  RTCPeerConnectionV8Internal::getRemoteStreamsMethod(info);
}

void V8RTCPeerConnection::addStreamMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_addStream");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8RTCPeerConnection_AddStream_Method);
  RTCPeerConnectionV8Internal::addStreamMethod(info);
}

void V8RTCPeerConnection::removeStreamMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_removeStream");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8RTCPeerConnection_RemoveStream_Method);
  RTCPeerConnectionV8Internal::removeStreamMethod(info);
}

void V8RTCPeerConnection::createDTMFSenderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_createDTMFSender");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8RTCPeerConnection_CreateDTMFSender_Method);
  RTCPeerConnectionV8Internal::createDTMFSenderMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8RTCPeerConnectionAccessors[] = {
    { "localDescription", V8RTCPeerConnection::localDescriptionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "remoteDescription", V8RTCPeerConnection::remoteDescriptionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "signalingState", V8RTCPeerConnection::signalingStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "iceGatheringState", V8RTCPeerConnection::iceGatheringStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "iceConnectionState", V8RTCPeerConnection::iceConnectionStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onnegotiationneeded", V8RTCPeerConnection::onnegotiationneededAttributeGetterCallback, V8RTCPeerConnection::onnegotiationneededAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onicecandidate", V8RTCPeerConnection::onicecandidateAttributeGetterCallback, V8RTCPeerConnection::onicecandidateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onsignalingstatechange", V8RTCPeerConnection::onsignalingstatechangeAttributeGetterCallback, V8RTCPeerConnection::onsignalingstatechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "oniceconnectionstatechange", V8RTCPeerConnection::oniceconnectionstatechangeAttributeGetterCallback, V8RTCPeerConnection::oniceconnectionstatechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onicegatheringstatechange", V8RTCPeerConnection::onicegatheringstatechangeAttributeGetterCallback, V8RTCPeerConnection::onicegatheringstatechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ontrack", V8RTCPeerConnection::ontrackAttributeGetterCallback, V8RTCPeerConnection::ontrackAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ondatachannel", V8RTCPeerConnection::ondatachannelAttributeGetterCallback, V8RTCPeerConnection::ondatachannelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onaddstream", V8RTCPeerConnection::onaddstreamAttributeGetterCallback, V8RTCPeerConnection::onaddstreamAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onremovestream", V8RTCPeerConnection::onremovestreamAttributeGetterCallback, V8RTCPeerConnection::onremovestreamAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8RTCPeerConnectionMethods[] = {
    {"setConfiguration", V8RTCPeerConnection::setConfigurationMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"close", V8RTCPeerConnection::closeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createOffer", V8RTCPeerConnection::createOfferMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createAnswer", V8RTCPeerConnection::createAnswerMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setLocalDescription", V8RTCPeerConnection::setLocalDescriptionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setRemoteDescription", V8RTCPeerConnection::setRemoteDescriptionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addIceCandidate", V8RTCPeerConnection::addIceCandidateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getStats", V8RTCPeerConnection::getStatsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getSenders", V8RTCPeerConnection::getSendersMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getReceivers", V8RTCPeerConnection::getReceiversMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addTrack", V8RTCPeerConnection::addTrackMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeTrack", V8RTCPeerConnection::removeTrackMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createDataChannel", V8RTCPeerConnection::createDataChannelMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"generateCertificate", V8RTCPeerConnection::generateCertificateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getLocalStreams", V8RTCPeerConnection::getLocalStreamsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getRemoteStreams", V8RTCPeerConnection::getRemoteStreamsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addStream", V8RTCPeerConnection::addStreamMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeStream", V8RTCPeerConnection::removeStreamMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createDTMFSender", V8RTCPeerConnection::createDTMFSenderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8RTCPeerConnection::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("RTCPeerConnection"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  RTCPeerConnectionV8Internal::constructor(info);
}

static void installV8RTCPeerConnectionTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8RTCPeerConnection::wrapperTypeInfo.interface_name, V8EventTarget::domTemplate(isolate, world), V8RTCPeerConnection::internalFieldCount);
  interfaceTemplate->SetCallHandler(V8RTCPeerConnection::constructorCallback);
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
      signature, V8RTCPeerConnectionAccessors, arraysize(V8RTCPeerConnectionAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8RTCPeerConnectionMethods, arraysize(V8RTCPeerConnectionMethods));

  // Custom signature

  V8RTCPeerConnection::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8RTCPeerConnection::InstallRuntimeEnabledFeaturesOnTemplate(
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

void V8RTCPeerConnection::installRtcPeerConnectionId(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8RTCPeerConnection::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  static const V8DOMConfiguration::AccessorConfiguration accessoridConfiguration[] = {
    { "id", V8RTCPeerConnection::idAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& accessorConfig : accessoridConfiguration)
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
}

void V8RTCPeerConnection::installRtcPeerConnectionId(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8RTCPeerConnection::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8RTCPeerConnection::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installRtcPeerConnectionId(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8RTCPeerConnection::installRtcPeerConnectionId(ScriptState* scriptState) {
  installRtcPeerConnectionId(scriptState, v8::Local<v8::Object>());
}

v8::Local<v8::FunctionTemplate> V8RTCPeerConnection::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8RTCPeerConnectionTemplate);
}

bool V8RTCPeerConnection::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8RTCPeerConnection::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

RTCPeerConnection* V8RTCPeerConnection::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

RTCPeerConnection* NativeValueTraits<RTCPeerConnection>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  RTCPeerConnection* nativeValue = V8RTCPeerConnection::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "RTCPeerConnection"));
  }
  return nativeValue;
}

}  // namespace blink

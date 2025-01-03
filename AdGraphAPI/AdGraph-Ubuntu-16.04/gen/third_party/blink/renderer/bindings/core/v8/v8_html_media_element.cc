// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_html_media_element.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_audio_track_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_token_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_media_error.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text_track.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text_track_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_time_ranges.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_video_track_list.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/core/html_names.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
WrapperTypeInfo V8HTMLMediaElement::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8HTMLMediaElement::domTemplate,
    nullptr,
    "HTMLMediaElement",
    &V8HTMLElement::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLMediaElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& HTMLMediaElement::wrapper_type_info_ = V8HTMLMediaElement::wrapperTypeInfo;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, HTMLMediaElement>::value,
    "HTMLMediaElement does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&HTMLMediaElement::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLMediaElement is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace HTMLMediaElementV8Internal {

static void errorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->error()), impl);
}

static void srcAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->GetURLAttribute(HTMLNames::srcAttr), info.GetIsolate());
}

static void srcAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setAttribute(HTMLNames::srcAttr, cppValue);
}

static void currentSrcAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->currentSrc(), info.GetIsolate());
}

static void crossOriginAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  String cppValue(impl->FastGetAttribute(HTMLNames::crossoriginAttr));

  if (cppValue.IsNull()) {
    ;
  } else if (cppValue.IsEmpty()) {
    cppValue = "anonymous";
  } else if (EqualIgnoringASCIICase(cppValue, "anonymous")) {
    cppValue = "anonymous";
  } else if (EqualIgnoringASCIICase(cppValue, "use-credentials")) {
    cppValue = "use-credentials";
  } else {
    cppValue = "anonymous";
  }

  V8SetReturnValueStringOrNull(info, cppValue, info.GetIsolate());
}

static void crossOriginAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setAttribute(HTMLNames::crossoriginAttr, cppValue);
}

static void networkStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->getNetworkState());
}

static void preloadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->preload(), info.GetIsolate());
}

static void preloadAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setPreload(cppValue);
}

static void bufferedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->buffered()), impl);
}

static void readyStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->getReadyState());
}

static void seekingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->seeking());
}

static void currentTimeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValue(info, impl->currentTime());
}

static void currentTimeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "currentTime");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setCurrentTime(cppValue);
}

static void durationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValue(info, impl->duration());
}

static void pausedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->paused());
}

static void defaultPlaybackRateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValue(info, impl->defaultPlaybackRate());
}

static void defaultPlaybackRateAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "defaultPlaybackRate");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setDefaultPlaybackRate(cppValue);
}

static void playbackRateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValue(info, impl->playbackRate());
}

static void playbackRateAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "playbackRate");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setPlaybackRate(cppValue, exceptionState);
}

static void playedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->played()), impl);
}

static void seekableAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->seekable()), impl);
}

static void endedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->ended());
}

static void autoplayAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(HTMLNames::autoplayAttr));
}

static void autoplayAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "autoplay");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->SetBooleanAttribute(HTMLNames::autoplayAttr, cppValue);
}

static void loopAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(HTMLNames::loopAttr));
}

static void loopAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "loop");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->SetBooleanAttribute(HTMLNames::loopAttr, cppValue);
}

static void controlsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(HTMLNames::controlsAttr));
}

static void controlsAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "controls");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->SetBooleanAttribute(HTMLNames::controlsAttr, cppValue);
}

static void controlsListAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->controlsList()), impl);
}

static void controlsListAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // [PutForwards] => controlsList.value
  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "controlsList");
  v8::Local<v8::Value> target;
  if (!holder->Get(isolate->GetCurrentContext(), V8AtomicString(isolate, "controlsList")).ToLocal(&target))
    return;
  if (!target->IsObject()) {
    exceptionState.ThrowTypeError("The attribute value is not an object");
    return;
  }
  bool result;
  if (!target.As<v8::Object>()->Set(isolate->GetCurrentContext(), V8AtomicString(isolate, "value"), v8Value).To(&result))
    return;
  if (!result)
    return;
}

static void volumeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValue(info, impl->volume());
}

static void volumeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "volume");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setVolume(cppValue, exceptionState);
}

static void mutedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->muted());
}

static void mutedAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "muted");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setMuted(cppValue);
}

static void defaultMutedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(HTMLNames::mutedAttr));
}

static void defaultMutedAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "defaultMuted");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->SetBooleanAttribute(HTMLNames::mutedAttr, cppValue);
}

static void audioTracksAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->audioTracks()), impl);
}

static void videoTracksAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->videoTracks()), impl);
}

static void textTracksAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->textTracks()), impl);
}

static void webkitAudioDecodedByteCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->webkitAudioDecodedByteCount());
}

static void webkitVideoDecodedByteCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->webkitVideoDecodedByteCount());
}

static void loadMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(info.Holder());

  impl->load();
}

static void canPlayTypeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("canPlayType", "HTMLMediaElement", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> type;
  type = info[0];
  if (!type.Prepare())
    return;

  V8SetReturnValueString(info, impl->canPlayType(type), info.GetIsolate());
}

static void playMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLMediaElement", "play");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8HTMLMediaElement::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->playForBindings(scriptState);
  V8SetReturnValue(info, result.V8Value());
}

static void pauseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(info.Holder());

  impl->pause();
}

static void addTextTrackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLMediaElement", "addTextTrack");

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> kind;
  V8StringResource<> label;
  V8StringResource<> language;
  kind = info[0];
  if (!kind.Prepare())
    return;
  const char* validKindValues[] = {
      "subtitles",
      "captions",
      "descriptions",
      "chapters",
      "metadata",
  };
  if (!IsValidEnum(kind, validKindValues, arraysize(validKindValues), "TextTrackKind", exceptionState)) {
    return;
  }

  if (!info[1]->IsUndefined()) {
    label = info[1];
    if (!label.Prepare())
      return;
  } else {
    label = WTF::g_empty_string;
  }
  if (!info[2]->IsUndefined()) {
    language = info[2];
    if (!language.Prepare())
      return;
  } else {
    language = WTF::g_empty_string;
  }

  TextTrack* result = impl->addTextTrack(kind, label, language, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

} // namespace HTMLMediaElementV8Internal

void V8HTMLMediaElement::errorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_error_Getter");

  HTMLMediaElementV8Internal::errorAttributeGetter(info);
}

void V8HTMLMediaElement::srcAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_src_Getter");

  HTMLMediaElementV8Internal::srcAttributeGetter(info);
}

void V8HTMLMediaElement::srcAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_src_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLMediaElementV8Internal::srcAttributeSetter(v8Value, info);
}

void V8HTMLMediaElement::currentSrcAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_currentSrc_Getter");

  HTMLMediaElementV8Internal::currentSrcAttributeGetter(info);
}

void V8HTMLMediaElement::crossOriginAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_crossOrigin_Getter");

  HTMLMediaElementV8Internal::crossOriginAttributeGetter(info);
}

void V8HTMLMediaElement::crossOriginAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_crossOrigin_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLMediaElementV8Internal::crossOriginAttributeSetter(v8Value, info);
}

void V8HTMLMediaElement::networkStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_networkState_Getter");

  HTMLMediaElementV8Internal::networkStateAttributeGetter(info);
}

void V8HTMLMediaElement::preloadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_preload_Getter");

  HTMLMediaElementV8Internal::preloadAttributeGetter(info);
}

void V8HTMLMediaElement::preloadAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_preload_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLMediaElementV8Internal::preloadAttributeSetter(v8Value, info);
}

void V8HTMLMediaElement::bufferedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_buffered_Getter");

  HTMLMediaElementV8Internal::bufferedAttributeGetter(info);
}

void V8HTMLMediaElement::readyStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_readyState_Getter");

  HTMLMediaElementV8Internal::readyStateAttributeGetter(info);
}

void V8HTMLMediaElement::seekingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_seeking_Getter");

  HTMLMediaElementV8Internal::seekingAttributeGetter(info);
}

void V8HTMLMediaElement::currentTimeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_currentTime_Getter");

  HTMLMediaElementV8Internal::currentTimeAttributeGetter(info);
}

void V8HTMLMediaElement::currentTimeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_currentTime_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  HTMLMediaElementV8Internal::currentTimeAttributeSetter(v8Value, info);
}

void V8HTMLMediaElement::durationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_duration_Getter");

  HTMLMediaElementV8Internal::durationAttributeGetter(info);
}

void V8HTMLMediaElement::pausedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_paused_Getter");

  HTMLMediaElementV8Internal::pausedAttributeGetter(info);
}

void V8HTMLMediaElement::defaultPlaybackRateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_defaultPlaybackRate_Getter");

  HTMLMediaElementV8Internal::defaultPlaybackRateAttributeGetter(info);
}

void V8HTMLMediaElement::defaultPlaybackRateAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_defaultPlaybackRate_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  HTMLMediaElementV8Internal::defaultPlaybackRateAttributeSetter(v8Value, info);
}

void V8HTMLMediaElement::playbackRateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_playbackRate_Getter");

  HTMLMediaElementV8Internal::playbackRateAttributeGetter(info);
}

void V8HTMLMediaElement::playbackRateAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_playbackRate_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  HTMLMediaElementV8Internal::playbackRateAttributeSetter(v8Value, info);
}

void V8HTMLMediaElement::playedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_played_Getter");

  HTMLMediaElementV8Internal::playedAttributeGetter(info);
}

void V8HTMLMediaElement::seekableAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_seekable_Getter");

  HTMLMediaElementV8Internal::seekableAttributeGetter(info);
}

void V8HTMLMediaElement::endedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_ended_Getter");

  HTMLMediaElementV8Internal::endedAttributeGetter(info);
}

void V8HTMLMediaElement::autoplayAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_autoplay_Getter");

  HTMLMediaElementV8Internal::autoplayAttributeGetter(info);
}

void V8HTMLMediaElement::autoplayAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_autoplay_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLMediaElementV8Internal::autoplayAttributeSetter(v8Value, info);
}

void V8HTMLMediaElement::loopAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_loop_Getter");

  HTMLMediaElementV8Internal::loopAttributeGetter(info);
}

void V8HTMLMediaElement::loopAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_loop_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLMediaElementV8Internal::loopAttributeSetter(v8Value, info);
}

void V8HTMLMediaElement::controlsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_controls_Getter");

  HTMLMediaElementV8Internal::controlsAttributeGetter(info);
}

void V8HTMLMediaElement::controlsAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_controls_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLMediaElementV8Internal::controlsAttributeSetter(v8Value, info);
}

void V8HTMLMediaElement::controlsListAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_controlsList_Getter");

  HTMLMediaElementV8Internal::controlsListAttributeGetter(info);
}

void V8HTMLMediaElement::controlsListAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_controlsList_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  HTMLMediaElementV8Internal::controlsListAttributeSetter(v8Value, info);
}

void V8HTMLMediaElement::volumeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_volume_Getter");

  HTMLMediaElementV8Internal::volumeAttributeGetter(info);
}

void V8HTMLMediaElement::volumeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_volume_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  HTMLMediaElementV8Internal::volumeAttributeSetter(v8Value, info);
}

void V8HTMLMediaElement::mutedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_muted_Getter");

  HTMLMediaElementV8Internal::mutedAttributeGetter(info);
}

void V8HTMLMediaElement::mutedAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_muted_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  HTMLMediaElementV8Internal::mutedAttributeSetter(v8Value, info);
}

void V8HTMLMediaElement::defaultMutedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_defaultMuted_Getter");

  HTMLMediaElementV8Internal::defaultMutedAttributeGetter(info);
}

void V8HTMLMediaElement::defaultMutedAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_defaultMuted_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLMediaElementV8Internal::defaultMutedAttributeSetter(v8Value, info);
}

void V8HTMLMediaElement::audioTracksAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_audioTracks_Getter");

  HTMLMediaElementV8Internal::audioTracksAttributeGetter(info);
}

void V8HTMLMediaElement::videoTracksAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_videoTracks_Getter");

  HTMLMediaElementV8Internal::videoTracksAttributeGetter(info);
}

void V8HTMLMediaElement::textTracksAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_textTracks_Getter");

  HTMLMediaElementV8Internal::textTracksAttributeGetter(info);
}

void V8HTMLMediaElement::webkitAudioDecodedByteCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_webkitAudioDecodedByteCount_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedAudioDecodedByteCount);

  HTMLMediaElementV8Internal::webkitAudioDecodedByteCountAttributeGetter(info);
}

void V8HTMLMediaElement::webkitVideoDecodedByteCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_webkitVideoDecodedByteCount_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedVideoDecodedByteCount);

  HTMLMediaElementV8Internal::webkitVideoDecodedByteCountAttributeGetter(info);
}

void V8HTMLMediaElement::loadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_load");

  HTMLMediaElementV8Internal::loadMethod(info);
}

void V8HTMLMediaElement::canPlayTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_canPlayType");

  HTMLMediaElementV8Internal::canPlayTypeMethod(info);
}

void V8HTMLMediaElement::playMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_play");

  HTMLMediaElementV8Internal::playMethod(info);
}

void V8HTMLMediaElement::pauseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_pause");

  HTMLMediaElementV8Internal::pauseMethod(info);
}

void V8HTMLMediaElement::addTextTrackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_addTextTrack");

  HTMLMediaElementV8Internal::addTextTrackMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8HTMLMediaElementAccessors[] = {
    { "error", V8HTMLMediaElement::errorAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "src", V8HTMLMediaElement::srcAttributeGetterCallback, V8HTMLMediaElement::srcAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "currentSrc", V8HTMLMediaElement::currentSrcAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "crossOrigin", V8HTMLMediaElement::crossOriginAttributeGetterCallback, V8HTMLMediaElement::crossOriginAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "networkState", V8HTMLMediaElement::networkStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "preload", V8HTMLMediaElement::preloadAttributeGetterCallback, V8HTMLMediaElement::preloadAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "buffered", V8HTMLMediaElement::bufferedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "readyState", V8HTMLMediaElement::readyStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "seeking", V8HTMLMediaElement::seekingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "currentTime", V8HTMLMediaElement::currentTimeAttributeGetterCallback, V8HTMLMediaElement::currentTimeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "duration", V8HTMLMediaElement::durationAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "paused", V8HTMLMediaElement::pausedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "defaultPlaybackRate", V8HTMLMediaElement::defaultPlaybackRateAttributeGetterCallback, V8HTMLMediaElement::defaultPlaybackRateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "playbackRate", V8HTMLMediaElement::playbackRateAttributeGetterCallback, V8HTMLMediaElement::playbackRateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "played", V8HTMLMediaElement::playedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "seekable", V8HTMLMediaElement::seekableAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ended", V8HTMLMediaElement::endedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "autoplay", V8HTMLMediaElement::autoplayAttributeGetterCallback, V8HTMLMediaElement::autoplayAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "loop", V8HTMLMediaElement::loopAttributeGetterCallback, V8HTMLMediaElement::loopAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "controls", V8HTMLMediaElement::controlsAttributeGetterCallback, V8HTMLMediaElement::controlsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "controlsList", V8HTMLMediaElement::controlsListAttributeGetterCallback, V8HTMLMediaElement::controlsListAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "volume", V8HTMLMediaElement::volumeAttributeGetterCallback, V8HTMLMediaElement::volumeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "muted", V8HTMLMediaElement::mutedAttributeGetterCallback, V8HTMLMediaElement::mutedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "defaultMuted", V8HTMLMediaElement::defaultMutedAttributeGetterCallback, V8HTMLMediaElement::defaultMutedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "textTracks", V8HTMLMediaElement::textTracksAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webkitAudioDecodedByteCount", V8HTMLMediaElement::webkitAudioDecodedByteCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webkitVideoDecodedByteCount", V8HTMLMediaElement::webkitVideoDecodedByteCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8HTMLMediaElementMethods[] = {
    {"load", V8HTMLMediaElement::loadMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"canPlayType", V8HTMLMediaElement::canPlayTypeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"play", V8HTMLMediaElement::playMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pause", V8HTMLMediaElement::pauseMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addTextTrack", V8HTMLMediaElement::addTextTrackMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8HTMLMediaElement::installV8HTMLMediaElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8HTMLMediaElement::wrapperTypeInfo.interface_name, V8HTMLElement::domTemplate(isolate, world), V8HTMLMediaElement::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  static constexpr V8DOMConfiguration::ConstantConfiguration V8HTMLMediaElementConstants[] = {
      {"NETWORK_EMPTY", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
      {"NETWORK_IDLE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
      {"NETWORK_LOADING", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
      {"NETWORK_NO_SOURCE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
      {"HAVE_NOTHING", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
      {"HAVE_METADATA", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
      {"HAVE_CURRENT_DATA", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
      {"HAVE_FUTURE_DATA", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
      {"HAVE_ENOUGH_DATA", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
  };
  V8DOMConfiguration::InstallConstants(
      isolate, interfaceTemplate, prototypeTemplate,
      V8HTMLMediaElementConstants, arraysize(V8HTMLMediaElementConstants));
  static_assert(0 == HTMLMediaElement::kNetworkEmpty, "the value of HTMLMediaElement_kNetworkEmpty does not match with implementation");
  static_assert(1 == HTMLMediaElement::kNetworkIdle, "the value of HTMLMediaElement_kNetworkIdle does not match with implementation");
  static_assert(2 == HTMLMediaElement::kNetworkLoading, "the value of HTMLMediaElement_kNetworkLoading does not match with implementation");
  static_assert(3 == HTMLMediaElement::kNetworkNoSource, "the value of HTMLMediaElement_kNetworkNoSource does not match with implementation");
  static_assert(0 == HTMLMediaElement::kHaveNothing, "the value of HTMLMediaElement_kHaveNothing does not match with implementation");
  static_assert(1 == HTMLMediaElement::kHaveMetadata, "the value of HTMLMediaElement_kHaveMetadata does not match with implementation");
  static_assert(2 == HTMLMediaElement::kHaveCurrentData, "the value of HTMLMediaElement_kHaveCurrentData does not match with implementation");
  static_assert(3 == HTMLMediaElement::kHaveFutureData, "the value of HTMLMediaElement_kHaveFutureData does not match with implementation");
  static_assert(4 == HTMLMediaElement::kHaveEnoughData, "the value of HTMLMediaElement_kHaveEnoughData does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8HTMLMediaElementAccessors, arraysize(V8HTMLMediaElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8HTMLMediaElementMethods, arraysize(V8HTMLMediaElementMethods));

  // Custom signature
}

void V8HTMLMediaElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::AudioVideoTracksEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "audioTracks", V8HTMLMediaElement::audioTracksAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "videoTracks", V8HTMLMediaElement::videoTracksAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, accessor_configurations,
        arraysize(accessor_configurations));
  }

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8HTMLMediaElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), V8HTMLMediaElement::installV8HTMLMediaElementTemplateFunction);
}

bool V8HTMLMediaElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8HTMLMediaElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLMediaElement* V8HTMLMediaElement::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

HTMLMediaElement* NativeValueTraits<HTMLMediaElement>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  HTMLMediaElement* nativeValue = V8HTMLMediaElement::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "HTMLMediaElement"));
  }
  return nativeValue;
}

InstallRuntimeEnabledFeaturesOnTemplateFunction
V8HTMLMediaElement::install_runtime_enabled_features_on_template_function_ =
    &V8HTMLMediaElement::InstallRuntimeEnabledFeaturesOnTemplate;

InstallTemplateFunction V8HTMLMediaElement::installV8HTMLMediaElementTemplateFunction =
    &V8HTMLMediaElement::installV8HTMLMediaElementTemplate;

void V8HTMLMediaElement::UpdateWrapperTypeInfo(
    InstallTemplateFunction install_template_function,
    InstallRuntimeEnabledFeaturesFunction install_runtime_enabled_features_function,
    InstallRuntimeEnabledFeaturesOnTemplateFunction install_runtime_enabled_features_on_template_function,
    InstallConditionalFeaturesFunction install_conditional_features_function) {
  V8HTMLMediaElement::installV8HTMLMediaElementTemplateFunction =
      install_template_function;

  CHECK(install_runtime_enabled_features_on_template_function);
  V8HTMLMediaElement::install_runtime_enabled_features_on_template_function_ =
      install_runtime_enabled_features_on_template_function;

  if (install_conditional_features_function) {
    V8HTMLMediaElement::wrapperTypeInfo.install_conditional_features_function =
        install_conditional_features_function;
  }
}

}  // namespace blink

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_base_audio_context.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abstract_event_listener.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_listener_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_media_element.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_analyser_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer_source_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_destination_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_listener.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_worklet.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_biquad_filter_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_channel_merger_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_channel_splitter_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constant_source_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_convolver_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_decode_error_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_decode_success_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_delay_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_dynamics_compressor_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gain_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_iir_filter_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_element_audio_source_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_audio_destination_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_audio_source_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_oscillator_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_panner_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_periodic_wave.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_periodic_wave_constraints.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_script_processor_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_stereo_panner_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_wave_shaper_node.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
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
const WrapperTypeInfo V8BaseAudioContext::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8BaseAudioContext::domTemplate,
    V8BaseAudioContext::InstallConditionalFeatures,
    "BaseAudioContext",
    &V8EventTarget::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in BaseAudioContext.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& BaseAudioContext::wrapper_type_info_ = V8BaseAudioContext::wrapperTypeInfo;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, BaseAudioContext>::value,
    "BaseAudioContext does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&BaseAudioContext::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "BaseAudioContext is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace BaseAudioContextV8Internal {

static void destinationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(holder);

  AudioDestinationNode* cppValue(WTF::GetPtr(impl->destination()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#BaseAudioContext#destination")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void currentTimeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(holder);

  V8SetReturnValue(info, impl->currentTime());
}

static void sampleRateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(holder);

  V8SetReturnValue(info, impl->sampleRate());
}

static void listenerAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(holder);

  AudioListener* cppValue(WTF::GetPtr(impl->listener()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#BaseAudioContext#listener")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void stateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(holder);

  V8SetReturnValueString(info, impl->state(), info.GetIsolate());
}

static void audioWorkletAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(holder);

  AudioWorklet* cppValue(WTF::GetPtr(impl->audioWorklet()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#BaseAudioContext#audioWorklet")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void onstatechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onstatechange()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onstatechangeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnstatechange(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void createBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createBuffer");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t numberOfChannels;
  uint32_t numberOfFrames;
  float sampleRate;
  numberOfChannels = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  numberOfFrames = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  sampleRate = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  AudioBuffer* result = impl->createBuffer(numberOfChannels, numberOfFrames, sampleRate, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void decodeAudioDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "decodeAudioData");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8BaseAudioContext::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  DOMArrayBuffer* audioData;
  V8DecodeSuccessCallback* successCallback;
  V8DecodeErrorCallback* errorCallback;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  audioData = info[0]->IsArrayBuffer() ? V8ArrayBuffer::ToImpl(v8::Local<v8::ArrayBuffer>::Cast(info[0])) : 0;
  if (!audioData) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'ArrayBuffer'.");
    return;
  }

  if (UNLIKELY(numArgsPassed <= 1)) {
    ScriptPromise result = impl->decodeAudioData(scriptState, audioData, exceptionState);
    if (exceptionState.HadException()) {
      return;
    }
    V8SetReturnValue(info, result.V8Value());
    return;
  }
  if (info[1]->IsFunction()) {
    successCallback = V8DecodeSuccessCallback::Create(info[1].As<v8::Function>());
  } else if (info[1]->IsNullOrUndefined()) {
    successCallback = nullptr;
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  if (UNLIKELY(numArgsPassed <= 2)) {
    ScriptPromise result = impl->decodeAudioData(scriptState, audioData, successCallback, exceptionState);
    if (exceptionState.HadException()) {
      return;
    }
    V8SetReturnValue(info, result.V8Value());
    return;
  }
  if (info[2]->IsFunction()) {
    errorCallback = V8DecodeErrorCallback::Create(info[2].As<v8::Function>());
  } else if (info[2]->IsNullOrUndefined()) {
    errorCallback = nullptr;
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 3 is not a function.");
    return;
  }

  ScriptPromise result = impl->decodeAudioData(scriptState, audioData, successCallback, errorCallback, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void createBufferSourceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createBufferSource");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  AudioBufferSourceNode* result = impl->createBufferSource(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createConstantSourceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createConstantSource");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  ConstantSourceNode* result = impl->createConstantSource(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createGainMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createGain");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  GainNode* result = impl->createGain(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createDelayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createDelay");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  double maxDelayTime;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  if (UNLIKELY(numArgsPassed <= 0)) {
    DelayNode* result = impl->createDelay(exceptionState);
    if (exceptionState.HadException()) {
      return;
    }
    V8SetReturnValue(info, result);
    return;
  }
  maxDelayTime = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  DelayNode* result = impl->createDelay(maxDelayTime, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createBiquadFilterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createBiquadFilter");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  BiquadFilterNode* result = impl->createBiquadFilter(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createIIRFilterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createIIRFilter");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Vector<double> feedForward;
  Vector<double> feedBack;
  feedForward = NativeValueTraits<IDLSequence<IDLDouble>>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  feedBack = NativeValueTraits<IDLSequence<IDLDouble>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  IIRFilterNode* result = impl->createIIRFilter(feedForward, feedBack, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createWaveShaperMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createWaveShaper");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  WaveShaperNode* result = impl->createWaveShaper(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createPannerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createPanner");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  PannerNode* result = impl->createPanner(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createConvolverMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createConvolver");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  ConvolverNode* result = impl->createConvolver(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createDynamicsCompressorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createDynamicsCompressor");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  DynamicsCompressorNode* result = impl->createDynamicsCompressor(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createAnalyserMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createAnalyser");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  AnalyserNode* result = impl->createAnalyser(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createScriptProcessorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createScriptProcessor");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  uint32_t bufferSize;
  uint32_t numberOfInputChannels;
  uint32_t numberOfOutputChannels;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  if (UNLIKELY(numArgsPassed <= 0)) {
    ScriptProcessorNode* result = impl->createScriptProcessor(exceptionState);
    if (exceptionState.HadException()) {
      return;
    }
    V8SetReturnValue(info, result);
    return;
  }
  bufferSize = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (UNLIKELY(numArgsPassed <= 1)) {
    ScriptProcessorNode* result = impl->createScriptProcessor(bufferSize, exceptionState);
    if (exceptionState.HadException()) {
      return;
    }
    V8SetReturnValue(info, result);
    return;
  }
  numberOfInputChannels = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (UNLIKELY(numArgsPassed <= 2)) {
    ScriptProcessorNode* result = impl->createScriptProcessor(bufferSize, numberOfInputChannels, exceptionState);
    if (exceptionState.HadException()) {
      return;
    }
    V8SetReturnValue(info, result);
    return;
  }
  numberOfOutputChannels = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ScriptProcessorNode* result = impl->createScriptProcessor(bufferSize, numberOfInputChannels, numberOfOutputChannels, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createStereoPannerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createStereoPanner");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  StereoPannerNode* result = impl->createStereoPanner(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createOscillatorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createOscillator");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  OscillatorNode* result = impl->createOscillator(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createPeriodicWaveMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createPeriodicWave");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Vector<float> real;
  Vector<float> imag;
  PeriodicWaveConstraints options;
  real = NativeValueTraits<IDLSequence<IDLFloat>>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  imag = NativeValueTraits<IDLSequence<IDLFloat>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[2]->IsNullOrUndefined() && !info[2]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 3 ('options') is not an object.");
    return;
  }
  V8PeriodicWaveConstraints::ToImpl(info.GetIsolate(), info[2], options, exceptionState);
  if (exceptionState.HadException())
    return;

  PeriodicWave* result = impl->createPeriodicWave(real, imag, options, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createChannelSplitterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createChannelSplitter");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  uint32_t numberOfOutputs;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  if (UNLIKELY(numArgsPassed <= 0)) {
    ChannelSplitterNode* result = impl->createChannelSplitter(exceptionState);
    if (exceptionState.HadException()) {
      return;
    }
    V8SetReturnValue(info, result);
    return;
  }
  numberOfOutputs = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ChannelSplitterNode* result = impl->createChannelSplitter(numberOfOutputs, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createChannelMergerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createChannelMerger");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  uint32_t numberOfInputs;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  if (UNLIKELY(numArgsPassed <= 0)) {
    ChannelMergerNode* result = impl->createChannelMerger(exceptionState);
    if (exceptionState.HadException()) {
      return;
    }
    V8SetReturnValue(info, result);
    return;
  }
  numberOfInputs = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  ChannelMergerNode* result = impl->createChannelMerger(numberOfInputs, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void resumeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "resume");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8BaseAudioContext::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->resumeContext(scriptState);
  V8SetReturnValue(info, result.V8Value());
}

static void createMediaElementSourceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createMediaElementSource");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  HTMLMediaElement* mediaElement;
  mediaElement = V8HTMLMediaElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!mediaElement) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'HTMLMediaElement'.");
    return;
  }

  MediaElementAudioSourceNode* result = impl->createMediaElementSource(mediaElement, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createMediaStreamSourceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createMediaStreamSource");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  MediaStream* mediaStream;
  mediaStream = V8MediaStream::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!mediaStream) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'MediaStream'.");
    return;
  }

  MediaStreamAudioSourceNode* result = impl->createMediaStreamSource(mediaStream, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createMediaStreamDestinationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createMediaStreamDestination");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  MediaStreamAudioDestinationNode* result = impl->createMediaStreamDestination(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

} // namespace BaseAudioContextV8Internal

void V8BaseAudioContext::destinationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_destination_Getter");

  BaseAudioContextV8Internal::destinationAttributeGetter(info);
}

void V8BaseAudioContext::currentTimeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_currentTime_Getter");

  BaseAudioContextV8Internal::currentTimeAttributeGetter(info);
}

void V8BaseAudioContext::sampleRateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_sampleRate_Getter");

  BaseAudioContextV8Internal::sampleRateAttributeGetter(info);
}

void V8BaseAudioContext::listenerAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_listener_Getter");

  BaseAudioContextV8Internal::listenerAttributeGetter(info);
}

void V8BaseAudioContext::stateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_state_Getter");

  BaseAudioContextV8Internal::stateAttributeGetter(info);
}

void V8BaseAudioContext::audioWorkletAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_audioWorklet_Getter");

  BaseAudioContextV8Internal::audioWorkletAttributeGetter(info);
}

void V8BaseAudioContext::onstatechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_onstatechange_Getter");

  BaseAudioContextV8Internal::onstatechangeAttributeGetter(info);
}

void V8BaseAudioContext::onstatechangeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_onstatechange_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  BaseAudioContextV8Internal::onstatechangeAttributeSetter(v8Value, info);
}

void V8BaseAudioContext::createBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createBuffer");

  BaseAudioContextV8Internal::createBufferMethod(info);
}

void V8BaseAudioContext::decodeAudioDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_decodeAudioData");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextDecodeAudioData);
  BaseAudioContextV8Internal::decodeAudioDataMethod(info);
}

void V8BaseAudioContext::createBufferSourceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createBufferSource");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextCreateBufferSource);
  BaseAudioContextV8Internal::createBufferSourceMethod(info);
}

void V8BaseAudioContext::createConstantSourceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createConstantSource");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextCreateConstantSource);
  BaseAudioContextV8Internal::createConstantSourceMethod(info);
}

void V8BaseAudioContext::createGainMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createGain");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextCreateGain);
  BaseAudioContextV8Internal::createGainMethod(info);
}

void V8BaseAudioContext::createDelayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createDelay");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextCreateDelay);
  BaseAudioContextV8Internal::createDelayMethod(info);
}

void V8BaseAudioContext::createBiquadFilterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createBiquadFilter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextCreateBiquadFilter);
  BaseAudioContextV8Internal::createBiquadFilterMethod(info);
}

void V8BaseAudioContext::createIIRFilterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createIIRFilter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextCreateIIRFilter);
  BaseAudioContextV8Internal::createIIRFilterMethod(info);
}

void V8BaseAudioContext::createWaveShaperMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createWaveShaper");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextCreateWaveShaper);
  BaseAudioContextV8Internal::createWaveShaperMethod(info);
}

void V8BaseAudioContext::createPannerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createPanner");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextCreatePannerAutomated);
  BaseAudioContextV8Internal::createPannerMethod(info);
}

void V8BaseAudioContext::createConvolverMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createConvolver");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextCreateConvolver);
  BaseAudioContextV8Internal::createConvolverMethod(info);
}

void V8BaseAudioContext::createDynamicsCompressorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createDynamicsCompressor");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextCreateDynamicsCompressor);
  BaseAudioContextV8Internal::createDynamicsCompressorMethod(info);
}

void V8BaseAudioContext::createAnalyserMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createAnalyser");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextCreateAnalyser);
  BaseAudioContextV8Internal::createAnalyserMethod(info);
}

void V8BaseAudioContext::createScriptProcessorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createScriptProcessor");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextCreateScriptProcessor);
  BaseAudioContextV8Internal::createScriptProcessorMethod(info);
}

void V8BaseAudioContext::createStereoPannerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createStereoPanner");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextCreateStereoPanner);
  BaseAudioContextV8Internal::createStereoPannerMethod(info);
}

void V8BaseAudioContext::createOscillatorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createOscillator");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextCreateOscillator);
  BaseAudioContextV8Internal::createOscillatorMethod(info);
}

void V8BaseAudioContext::createPeriodicWaveMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createPeriodicWave");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextCreatePeriodicWave);
  BaseAudioContextV8Internal::createPeriodicWaveMethod(info);
}

void V8BaseAudioContext::createChannelSplitterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createChannelSplitter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextCreateChannelSplitter);
  BaseAudioContextV8Internal::createChannelSplitterMethod(info);
}

void V8BaseAudioContext::createChannelMergerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createChannelMerger");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextCreateChannelMerger);
  BaseAudioContextV8Internal::createChannelMergerMethod(info);
}

void V8BaseAudioContext::resumeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_resume");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextResume);
  BaseAudioContextV8Internal::resumeMethod(info);
}

void V8BaseAudioContext::createMediaElementSourceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createMediaElementSource");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextCreateMediaElementSource);
  BaseAudioContextV8Internal::createMediaElementSourceMethod(info);
}

void V8BaseAudioContext::createMediaStreamSourceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createMediaStreamSource");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextCreateMediaStreamSource);
  BaseAudioContextV8Internal::createMediaStreamSourceMethod(info);
}

void V8BaseAudioContext::createMediaStreamDestinationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createMediaStreamDestination");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioContextCreateMediaStreamDestination);
  BaseAudioContextV8Internal::createMediaStreamDestinationMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8BaseAudioContextAccessors[] = {
    { "destination", V8BaseAudioContext::destinationAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "currentTime", V8BaseAudioContext::currentTimeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "sampleRate", V8BaseAudioContext::sampleRateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "listener", V8BaseAudioContext::listenerAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "state", V8BaseAudioContext::stateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onstatechange", V8BaseAudioContext::onstatechangeAttributeGetterCallback, V8BaseAudioContext::onstatechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8BaseAudioContextMethods[] = {
    {"createBuffer", V8BaseAudioContext::createBufferMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"decodeAudioData", V8BaseAudioContext::decodeAudioDataMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createBufferSource", V8BaseAudioContext::createBufferSourceMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createConstantSource", V8BaseAudioContext::createConstantSourceMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createGain", V8BaseAudioContext::createGainMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createDelay", V8BaseAudioContext::createDelayMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createBiquadFilter", V8BaseAudioContext::createBiquadFilterMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createIIRFilter", V8BaseAudioContext::createIIRFilterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createWaveShaper", V8BaseAudioContext::createWaveShaperMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createPanner", V8BaseAudioContext::createPannerMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createConvolver", V8BaseAudioContext::createConvolverMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createDynamicsCompressor", V8BaseAudioContext::createDynamicsCompressorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createAnalyser", V8BaseAudioContext::createAnalyserMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createScriptProcessor", V8BaseAudioContext::createScriptProcessorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createStereoPanner", V8BaseAudioContext::createStereoPannerMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createOscillator", V8BaseAudioContext::createOscillatorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createPeriodicWave", V8BaseAudioContext::createPeriodicWaveMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createChannelSplitter", V8BaseAudioContext::createChannelSplitterMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createChannelMerger", V8BaseAudioContext::createChannelMergerMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"resume", V8BaseAudioContext::resumeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createMediaElementSource", V8BaseAudioContext::createMediaElementSourceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createMediaStreamSource", V8BaseAudioContext::createMediaStreamSourceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createMediaStreamDestination", V8BaseAudioContext::createMediaStreamDestinationMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8BaseAudioContextTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8BaseAudioContext::wrapperTypeInfo.interface_name, V8EventTarget::domTemplate(isolate, world), V8BaseAudioContext::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8BaseAudioContextAccessors, arraysize(V8BaseAudioContextAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8BaseAudioContextMethods, arraysize(V8BaseAudioContextMethods));

  // Custom signature

  V8BaseAudioContext::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8BaseAudioContext::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8BaseAudioContext::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8BaseAudioContextTemplate);
}

bool V8BaseAudioContext::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8BaseAudioContext::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

BaseAudioContext* V8BaseAudioContext::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

BaseAudioContext* NativeValueTraits<BaseAudioContext>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  BaseAudioContext* nativeValue = V8BaseAudioContext::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "BaseAudioContext"));
  }
  return nativeValue;
}

void V8BaseAudioContext::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instanceObject,
    v8::Local<v8::Object> prototypeObject,
    v8::Local<v8::Function> interfaceObject,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  CHECK(!interfaceTemplate.IsEmpty());
  DCHECK((!prototypeObject.IsEmpty() && !interfaceObject.IsEmpty()) ||
         !instanceObject.IsEmpty());

  v8::Isolate* isolate = context->GetIsolate();

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);
  bool isSecureContext = (executionContext && executionContext->IsSecureContext());

  if (!prototypeObject.IsEmpty() || !interfaceObject.IsEmpty()) {
    if (isSecureContext) {
      static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
          { "audioWorklet", V8BaseAudioContext::audioWorkletAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instanceObject, prototypeObject, interfaceObject,
          signature, accessor_configurations,
          arraysize(accessor_configurations));
    }
  }
}

}  // namespace blink

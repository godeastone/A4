// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_param.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_base_audio_context.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
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
const WrapperTypeInfo V8AudioNode::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8AudioNode::domTemplate,
    nullptr,
    "AudioNode",
    &V8EventTarget::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in AudioNode.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& AudioNode::wrapper_type_info_ = V8AudioNode::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, AudioNode>::value,
    "AudioNode inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&AudioNode::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "AudioNode is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace AudioNodeV8Internal {

static void contextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AudioNode* impl = V8AudioNode::ToImpl(holder);

  BaseAudioContext* cppValue(WTF::GetPtr(impl->context()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#AudioNode#context")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void numberOfInputsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AudioNode* impl = V8AudioNode::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->numberOfInputs());
}

static void numberOfOutputsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AudioNode* impl = V8AudioNode::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->numberOfOutputs());
}

static void channelCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AudioNode* impl = V8AudioNode::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->channelCount());
}

static void channelCountAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AudioNode* impl = V8AudioNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AudioNode", "channelCount");

  // Prepare the value to be set.
  uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setChannelCount(cppValue, exceptionState);
}

static void channelCountModeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AudioNode* impl = V8AudioNode::ToImpl(holder);

  V8SetReturnValueString(info, impl->channelCountMode(), info.GetIsolate());
}

static void channelCountModeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AudioNode* impl = V8AudioNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AudioNode", "channelCountMode");

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  // Type check per: http://heycam.github.io/webidl/#dfn-attribute-setter
  // Returns undefined without setting the value if the value is invalid.
  DummyExceptionStateForTesting dummyExceptionState;
  const char* validValues[] = {
      "max",
      "clamped-max",
      "explicit",
  };
  if (!IsValidEnum(cppValue, validValues, arraysize(validValues), "ChannelCountMode", dummyExceptionState)) {
    ExecutionContext::ForCurrentRealm(info)->AddConsoleMessage(
        ConsoleMessage::Create(kJSMessageSource, kWarningMessageLevel,
                               dummyExceptionState.Message()));
    return;
  }

  impl->setChannelCountMode(cppValue, exceptionState);
}

static void channelInterpretationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AudioNode* impl = V8AudioNode::ToImpl(holder);

  V8SetReturnValueString(info, impl->channelInterpretation(), info.GetIsolate());
}

static void channelInterpretationAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AudioNode* impl = V8AudioNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AudioNode", "channelInterpretation");

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  // Type check per: http://heycam.github.io/webidl/#dfn-attribute-setter
  // Returns undefined without setting the value if the value is invalid.
  DummyExceptionStateForTesting dummyExceptionState;
  const char* validValues[] = {
      "speakers",
      "discrete",
  };
  if (!IsValidEnum(cppValue, validValues, arraysize(validValues), "ChannelInterpretation", dummyExceptionState)) {
    ExecutionContext::ForCurrentRealm(info)->AddConsoleMessage(
        ConsoleMessage::Create(kJSMessageSource, kWarningMessageLevel,
                               dummyExceptionState.Message()));
    return;
  }

  impl->setChannelInterpretation(cppValue, exceptionState);
}

static void connect1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "AudioNode", "connect");

  AudioNode* impl = V8AudioNode::ToImpl(info.Holder());

  AudioNode* destination;
  uint32_t output;
  uint32_t input;
  destination = V8AudioNode::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!destination) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'AudioNode'.");
    return;
  }

  if (!info[1]->IsUndefined()) {
    output = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    output = 0u;
  }
  if (!info[2]->IsUndefined()) {
    input = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    input = 0u;
  }

  AudioNode* result = impl->connect(destination, output, input, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void connect2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "AudioNode", "connect");

  AudioNode* impl = V8AudioNode::ToImpl(info.Holder());

  AudioParam* destination;
  uint32_t output;
  destination = V8AudioParam::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!destination) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'AudioParam'.");
    return;
  }

  if (!info[1]->IsUndefined()) {
    output = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    output = 0u;
  }

  impl->connect(destination, output, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void connectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(3, info.Length())) {
    case 1:
      if (V8AudioNode::hasInstance(info[0], info.GetIsolate())) {
        UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioNodeConnectToAudioNode);
        connect1Method(info);
        return;
      }
      if (V8AudioParam::hasInstance(info[0], info.GetIsolate())) {
        UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioNodeConnectToAudioParam);
        connect2Method(info);
        return;
      }
      break;
    case 2:
      if (V8AudioNode::hasInstance(info[0], info.GetIsolate())) {
        UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioNodeConnectToAudioNode);
        connect1Method(info);
        return;
      }
      if (V8AudioParam::hasInstance(info[0], info.GetIsolate())) {
        UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioNodeConnectToAudioParam);
        connect2Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioNodeConnectToAudioNode);
        connect1Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "AudioNode", "connect");
  if (isArityError) {
    if (info.Length() < 1) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void disconnect1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  AudioNode* impl = V8AudioNode::ToImpl(info.Holder());

  impl->disconnect();
}

static void disconnect2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "AudioNode", "disconnect");

  AudioNode* impl = V8AudioNode::ToImpl(info.Holder());

  uint32_t output;
  output = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->disconnect(output, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void disconnect3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "AudioNode", "disconnect");

  AudioNode* impl = V8AudioNode::ToImpl(info.Holder());

  AudioNode* destination;
  destination = V8AudioNode::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!destination) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'AudioNode'.");
    return;
  }

  impl->disconnect(destination, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void disconnect4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "AudioNode", "disconnect");

  AudioNode* impl = V8AudioNode::ToImpl(info.Holder());

  AudioNode* destination;
  uint32_t output;
  destination = V8AudioNode::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!destination) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'AudioNode'.");
    return;
  }

  output = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->disconnect(destination, output, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void disconnect5Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "AudioNode", "disconnect");

  AudioNode* impl = V8AudioNode::ToImpl(info.Holder());

  AudioNode* destination;
  uint32_t output;
  uint32_t input;
  destination = V8AudioNode::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!destination) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'AudioNode'.");
    return;
  }

  output = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  input = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->disconnect(destination, output, input, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void disconnect6Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "AudioNode", "disconnect");

  AudioNode* impl = V8AudioNode::ToImpl(info.Holder());

  AudioParam* destination;
  destination = V8AudioParam::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!destination) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'AudioParam'.");
    return;
  }

  impl->disconnect(destination, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void disconnect7Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "AudioNode", "disconnect");

  AudioNode* impl = V8AudioNode::ToImpl(info.Holder());

  AudioParam* destination;
  uint32_t output;
  destination = V8AudioParam::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!destination) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'AudioParam'.");
    return;
  }

  output = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->disconnect(destination, output, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void disconnectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(3, info.Length())) {
    case 0:
      if (true) {
        disconnect1Method(info);
        return;
      }
      break;
    case 1:
      if (V8AudioNode::hasInstance(info[0], info.GetIsolate())) {
        UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioNodeDisconnectFromAudioNode);
        disconnect3Method(info);
        return;
      }
      if (V8AudioParam::hasInstance(info[0], info.GetIsolate())) {
        UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioNodeDisconnectFromAudioParam);
        disconnect6Method(info);
        return;
      }
      if (info[0]->IsNumber()) {
        UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioNodeDisconnectFromAudioNode);
        disconnect2Method(info);
        return;
      }
      if (true) {
        UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioNodeDisconnectFromAudioNode);
        disconnect2Method(info);
        return;
      }
      break;
    case 2:
      if (V8AudioNode::hasInstance(info[0], info.GetIsolate())) {
        UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioNodeDisconnectFromAudioNode);
        disconnect4Method(info);
        return;
      }
      if (V8AudioParam::hasInstance(info[0], info.GetIsolate())) {
        UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioNodeDisconnectFromAudioParam);
        disconnect7Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAudioNodeDisconnectFromAudioNode);
        disconnect5Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "AudioNode", "disconnect");
  if (isArityError) {
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

} // namespace AudioNodeV8Internal

void V8AudioNode::contextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_context_Getter");

  AudioNodeV8Internal::contextAttributeGetter(info);
}

void V8AudioNode::numberOfInputsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_numberOfInputs_Getter");

  AudioNodeV8Internal::numberOfInputsAttributeGetter(info);
}

void V8AudioNode::numberOfOutputsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_numberOfOutputs_Getter");

  AudioNodeV8Internal::numberOfOutputsAttributeGetter(info);
}

void V8AudioNode::channelCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_channelCount_Getter");

  AudioNodeV8Internal::channelCountAttributeGetter(info);
}

void V8AudioNode::channelCountAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_channelCount_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AudioNodeV8Internal::channelCountAttributeSetter(v8Value, info);
}

void V8AudioNode::channelCountModeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_channelCountMode_Getter");

  AudioNodeV8Internal::channelCountModeAttributeGetter(info);
}

void V8AudioNode::channelCountModeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_channelCountMode_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AudioNodeV8Internal::channelCountModeAttributeSetter(v8Value, info);
}

void V8AudioNode::channelInterpretationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_channelInterpretation_Getter");

  AudioNodeV8Internal::channelInterpretationAttributeGetter(info);
}

void V8AudioNode::channelInterpretationAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_channelInterpretation_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AudioNodeV8Internal::channelInterpretationAttributeSetter(v8Value, info);
}

void V8AudioNode::connectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_connect");

  AudioNodeV8Internal::connectMethod(info);
}

void V8AudioNode::disconnectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_disconnect");

  AudioNodeV8Internal::disconnectMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8AudioNodeAccessors[] = {
    { "context", V8AudioNode::contextAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "numberOfInputs", V8AudioNode::numberOfInputsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "numberOfOutputs", V8AudioNode::numberOfOutputsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "channelCount", V8AudioNode::channelCountAttributeGetterCallback, V8AudioNode::channelCountAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "channelCountMode", V8AudioNode::channelCountModeAttributeGetterCallback, V8AudioNode::channelCountModeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "channelInterpretation", V8AudioNode::channelInterpretationAttributeGetterCallback, V8AudioNode::channelInterpretationAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8AudioNodeMethods[] = {
    {"connect", V8AudioNode::connectMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"disconnect", V8AudioNode::disconnectMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8AudioNodeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8AudioNode::wrapperTypeInfo.interface_name, V8EventTarget::domTemplate(isolate, world), V8AudioNode::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8AudioNodeAccessors, arraysize(V8AudioNodeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8AudioNodeMethods, arraysize(V8AudioNodeMethods));

  // Custom signature

  V8AudioNode::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8AudioNode::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8AudioNode::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8AudioNodeTemplate);
}

bool V8AudioNode::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8AudioNode::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

AudioNode* V8AudioNode::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

AudioNode* NativeValueTraits<AudioNode>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  AudioNode* nativeValue = V8AudioNode::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "AudioNode"));
  }
  return nativeValue;
}

}  // namespace blink

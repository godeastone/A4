// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_analyser_node.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_float32_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_uint8_array.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_analyser_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_base_audio_context.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
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
const WrapperTypeInfo V8AnalyserNode::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8AnalyserNode::domTemplate,
    nullptr,
    "AnalyserNode",
    &V8AudioNode::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in AnalyserNode.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& AnalyserNode::wrapper_type_info_ = V8AnalyserNode::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, AnalyserNode>::value,
    "AnalyserNode inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&AnalyserNode::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "AnalyserNode is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace AnalyserNodeV8Internal {

static void fftSizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AnalyserNode* impl = V8AnalyserNode::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->fftSize());
}

static void fftSizeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AnalyserNode* impl = V8AnalyserNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AnalyserNode", "fftSize");

  // Prepare the value to be set.
  uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setFftSize(cppValue, exceptionState);
}

static void frequencyBinCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AnalyserNode* impl = V8AnalyserNode::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->frequencyBinCount());
}

static void minDecibelsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AnalyserNode* impl = V8AnalyserNode::ToImpl(holder);

  V8SetReturnValue(info, impl->minDecibels());
}

static void minDecibelsAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AnalyserNode* impl = V8AnalyserNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AnalyserNode", "minDecibels");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setMinDecibels(cppValue, exceptionState);
}

static void maxDecibelsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AnalyserNode* impl = V8AnalyserNode::ToImpl(holder);

  V8SetReturnValue(info, impl->maxDecibels());
}

static void maxDecibelsAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AnalyserNode* impl = V8AnalyserNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AnalyserNode", "maxDecibels");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setMaxDecibels(cppValue, exceptionState);
}

static void smoothingTimeConstantAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AnalyserNode* impl = V8AnalyserNode::ToImpl(holder);

  V8SetReturnValue(info, impl->smoothingTimeConstant());
}

static void smoothingTimeConstantAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AnalyserNode* impl = V8AnalyserNode::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "AnalyserNode", "smoothingTimeConstant");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setSmoothingTimeConstant(cppValue, exceptionState);
}

static void getFloatFrequencyDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "AnalyserNode", "getFloatFrequencyData");

  AnalyserNode* impl = V8AnalyserNode::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  NotShared<DOMFloat32Array> array;
  array = ToNotShared<NotShared<DOMFloat32Array>>(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!array) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Float32Array'.");
    return;
  }

  impl->getFloatFrequencyData(array);
}

static void getByteFrequencyDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "AnalyserNode", "getByteFrequencyData");

  AnalyserNode* impl = V8AnalyserNode::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  NotShared<DOMUint8Array> array;
  array = ToNotShared<NotShared<DOMUint8Array>>(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!array) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Uint8Array'.");
    return;
  }

  impl->getByteFrequencyData(array);
}

static void getFloatTimeDomainDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "AnalyserNode", "getFloatTimeDomainData");

  AnalyserNode* impl = V8AnalyserNode::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  NotShared<DOMFloat32Array> array;
  array = ToNotShared<NotShared<DOMFloat32Array>>(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!array) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Float32Array'.");
    return;
  }

  impl->getFloatTimeDomainData(array);
}

static void getByteTimeDomainDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "AnalyserNode", "getByteTimeDomainData");

  AnalyserNode* impl = V8AnalyserNode::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  NotShared<DOMUint8Array> array;
  array = ToNotShared<NotShared<DOMUint8Array>>(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!array) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Uint8Array'.");
    return;
  }

  impl->getByteTimeDomainData(array);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_ConstructorCallback");

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kConstructionContext, "AnalyserNode");

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  BaseAudioContext* context;
  AnalyserOptions options;
  context = V8BaseAudioContext::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!context) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'BaseAudioContext'.");
    return;
  }

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 2 ('options') is not an object.");
    return;
  }
  V8AnalyserOptions::ToImpl(info.GetIsolate(), info[1], options, exceptionState);
  if (exceptionState.HadException())
    return;

  AnalyserNode* impl = AnalyserNode::Create(context, options, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), &V8AnalyserNode::wrapperTypeInfo, wrapper);
  V8SetReturnValue(info, wrapper);
}

} // namespace AnalyserNodeV8Internal

void V8AnalyserNode::fftSizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_fftSize_Getter");

  AnalyserNodeV8Internal::fftSizeAttributeGetter(info);
}

void V8AnalyserNode::fftSizeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_fftSize_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AnalyserNodeV8Internal::fftSizeAttributeSetter(v8Value, info);
}

void V8AnalyserNode::frequencyBinCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_frequencyBinCount_Getter");

  AnalyserNodeV8Internal::frequencyBinCountAttributeGetter(info);
}

void V8AnalyserNode::minDecibelsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_minDecibels_Getter");

  AnalyserNodeV8Internal::minDecibelsAttributeGetter(info);
}

void V8AnalyserNode::minDecibelsAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_minDecibels_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AnalyserNodeV8Internal::minDecibelsAttributeSetter(v8Value, info);
}

void V8AnalyserNode::maxDecibelsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_maxDecibels_Getter");

  AnalyserNodeV8Internal::maxDecibelsAttributeGetter(info);
}

void V8AnalyserNode::maxDecibelsAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_maxDecibels_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AnalyserNodeV8Internal::maxDecibelsAttributeSetter(v8Value, info);
}

void V8AnalyserNode::smoothingTimeConstantAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_smoothingTimeConstant_Getter");

  AnalyserNodeV8Internal::smoothingTimeConstantAttributeGetter(info);
}

void V8AnalyserNode::smoothingTimeConstantAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_smoothingTimeConstant_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  AnalyserNodeV8Internal::smoothingTimeConstantAttributeSetter(v8Value, info);
}

void V8AnalyserNode::getFloatFrequencyDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_getFloatFrequencyData");

  AnalyserNodeV8Internal::getFloatFrequencyDataMethod(info);
}

void V8AnalyserNode::getByteFrequencyDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_getByteFrequencyData");

  AnalyserNodeV8Internal::getByteFrequencyDataMethod(info);
}

void V8AnalyserNode::getFloatTimeDomainDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_getFloatTimeDomainData");

  AnalyserNodeV8Internal::getFloatTimeDomainDataMethod(info);
}

void V8AnalyserNode::getByteTimeDomainDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_getByteTimeDomainData");

  AnalyserNodeV8Internal::getByteTimeDomainDataMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8AnalyserNodeAccessors[] = {
    { "fftSize", V8AnalyserNode::fftSizeAttributeGetterCallback, V8AnalyserNode::fftSizeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "frequencyBinCount", V8AnalyserNode::frequencyBinCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "minDecibels", V8AnalyserNode::minDecibelsAttributeGetterCallback, V8AnalyserNode::minDecibelsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "maxDecibels", V8AnalyserNode::maxDecibelsAttributeGetterCallback, V8AnalyserNode::maxDecibelsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "smoothingTimeConstant", V8AnalyserNode::smoothingTimeConstantAttributeGetterCallback, V8AnalyserNode::smoothingTimeConstantAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8AnalyserNodeMethods[] = {
    {"getFloatFrequencyData", V8AnalyserNode::getFloatFrequencyDataMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getByteFrequencyData", V8AnalyserNode::getByteFrequencyDataMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getFloatTimeDomainData", V8AnalyserNode::getFloatTimeDomainDataMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getByteTimeDomainData", V8AnalyserNode::getByteTimeDomainDataMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8AnalyserNode::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_Constructor");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8AnalyserNode_Constructor);
  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("AnalyserNode"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  AnalyserNodeV8Internal::constructor(info);
}

static void installV8AnalyserNodeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8AnalyserNode::wrapperTypeInfo.interface_name, V8AudioNode::domTemplate(isolate, world), V8AnalyserNode::internalFieldCount);
  interfaceTemplate->SetCallHandler(V8AnalyserNode::constructorCallback);
  interfaceTemplate->SetLength(1);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8AnalyserNodeAccessors, arraysize(V8AnalyserNodeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8AnalyserNodeMethods, arraysize(V8AnalyserNodeMethods));

  // Custom signature

  V8AnalyserNode::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8AnalyserNode::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8AnalyserNode::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8AnalyserNodeTemplate);
}

bool V8AnalyserNode::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8AnalyserNode::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

AnalyserNode* V8AnalyserNode::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

AnalyserNode* NativeValueTraits<AnalyserNode>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  AnalyserNode* nativeValue = V8AnalyserNode::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "AnalyserNode"));
  }
  return nativeValue;
}

}  // namespace blink

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_display.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_frame_request_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_display_capabilities.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_eye_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_frame_data.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_layer_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_stage_parameters.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
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
const WrapperTypeInfo V8VRDisplay::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8VRDisplay::domTemplate,
    nullptr,
    "VRDisplay",
    &V8EventTarget::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in VRDisplay.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& VRDisplay::wrapper_type_info_ = V8VRDisplay::wrapperTypeInfo;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, VRDisplay>::value,
    "VRDisplay does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&VRDisplay::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "VRDisplay is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace VRDisplayV8Internal {

static void displayIdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VRDisplay* impl = V8VRDisplay::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->displayId());
}

static void displayNameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VRDisplay* impl = V8VRDisplay::ToImpl(holder);

  V8SetReturnValueString(info, impl->displayName(), info.GetIsolate());
}

static void isPresentingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VRDisplay* impl = V8VRDisplay::ToImpl(holder);

  V8SetReturnValueBool(info, impl->isPresenting());
}

static void capabilitiesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VRDisplay* impl = V8VRDisplay::ToImpl(holder);

  VRDisplayCapabilities* cppValue(WTF::GetPtr(impl->capabilities()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#VRDisplay#capabilities")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void stageParametersAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VRDisplay* impl = V8VRDisplay::ToImpl(holder);

  VRStageParameters* cppValue(WTF::GetPtr(impl->stageParameters()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#VRDisplay#stageParameters")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void depthNearAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VRDisplay* impl = V8VRDisplay::ToImpl(holder);

  V8SetReturnValue(info, impl->depthNear());
}

static void depthNearAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VRDisplay* impl = V8VRDisplay::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "VRDisplay", "depthNear");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setDepthNear(cppValue);
}

static void depthFarAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VRDisplay* impl = V8VRDisplay::ToImpl(holder);

  V8SetReturnValue(info, impl->depthFar());
}

static void depthFarAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VRDisplay* impl = V8VRDisplay::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "VRDisplay", "depthFar");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setDepthFar(cppValue);
}

static void getFrameDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  VRDisplay* impl = V8VRDisplay::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getFrameData", "VRDisplay", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  VRFrameData* frameData;
  frameData = V8VRFrameData::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!frameData) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getFrameData", "VRDisplay", "parameter 1 is not of type 'VRFrameData'."));
    return;
  }

  V8SetReturnValueBool(info, impl->getFrameData(frameData));
}

static void getEyeParametersMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "VRDisplay", "getEyeParameters");

  VRDisplay* impl = V8VRDisplay::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> whichEye;
  whichEye = info[0];
  if (!whichEye.Prepare())
    return;
  const char* validWhichEyeValues[] = {
      "left",
      "right",
  };
  if (!IsValidEnum(whichEye, validWhichEyeValues, arraysize(validWhichEyeValues), "VREye", exceptionState)) {
    return;
  }

  V8SetReturnValue(info, impl->getEyeParameters(whichEye));
}

static void requestAnimationFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  VRDisplay* impl = V8VRDisplay::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("requestAnimationFrame", "VRDisplay", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8FrameRequestCallback* callback;
  if (info[0]->IsFunction()) {
    callback = V8FrameRequestCallback::Create(info[0].As<v8::Function>());
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("requestAnimationFrame", "VRDisplay", "The callback provided as parameter 1 is not a function."));
    return;
  }

  V8SetReturnValueInt(info, impl->requestAnimationFrame(callback));
}

static void cancelAnimationFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "VRDisplay", "cancelAnimationFrame");

  VRDisplay* impl = V8VRDisplay::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t handle;
  handle = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->cancelAnimationFrame(handle);
}

static void requestPresentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "VRDisplay", "requestPresent");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8VRDisplay::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  VRDisplay* impl = V8VRDisplay::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  HeapVector<VRLayerInit> layers;
  layers = NativeValueTraits<IDLSequence<VRLayerInit>>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = impl->requestPresent(scriptState, layers);
  V8SetReturnValue(info, result.V8Value());
}

static void exitPresentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "VRDisplay", "exitPresent");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8VRDisplay::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  VRDisplay* impl = V8VRDisplay::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->exitPresent(scriptState);
  V8SetReturnValue(info, result.V8Value());
}

static void getLayersMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  VRDisplay* impl = V8VRDisplay::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getLayers(), info.Holder(), info.GetIsolate()));
}

static void submitFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  VRDisplay* impl = V8VRDisplay::ToImpl(info.Holder());

  impl->submitFrame();
}

} // namespace VRDisplayV8Internal

void V8VRDisplay::displayIdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_displayId_Getter");

  VRDisplayV8Internal::displayIdAttributeGetter(info);
}

void V8VRDisplay::displayNameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_displayName_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kVRDisplayDisplayName);

  VRDisplayV8Internal::displayNameAttributeGetter(info);
}

void V8VRDisplay::isPresentingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_isPresenting_Getter");

  VRDisplayV8Internal::isPresentingAttributeGetter(info);
}

void V8VRDisplay::capabilitiesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_capabilities_Getter");

  VRDisplayV8Internal::capabilitiesAttributeGetter(info);
}

void V8VRDisplay::stageParametersAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_stageParameters_Getter");

  VRDisplayV8Internal::stageParametersAttributeGetter(info);
}

void V8VRDisplay::depthNearAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_depthNear_Getter");

  VRDisplayV8Internal::depthNearAttributeGetter(info);
}

void V8VRDisplay::depthNearAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_depthNear_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  VRDisplayV8Internal::depthNearAttributeSetter(v8Value, info);
}

void V8VRDisplay::depthFarAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_depthFar_Getter");

  VRDisplayV8Internal::depthFarAttributeGetter(info);
}

void V8VRDisplay::depthFarAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_depthFar_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  VRDisplayV8Internal::depthFarAttributeSetter(v8Value, info);
}

void V8VRDisplay::getFrameDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_getFrameData");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kVRDisplayGetFrameData);
  VRDisplayV8Internal::getFrameDataMethod(info);
}

void V8VRDisplay::getEyeParametersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_getEyeParameters");

  VRDisplayV8Internal::getEyeParametersMethod(info);
}

void V8VRDisplay::requestAnimationFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_requestAnimationFrame");

  VRDisplayV8Internal::requestAnimationFrameMethod(info);
}

void V8VRDisplay::cancelAnimationFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_cancelAnimationFrame");

  VRDisplayV8Internal::cancelAnimationFrameMethod(info);
}

void V8VRDisplay::requestPresentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_requestPresent");

  VRDisplayV8Internal::requestPresentMethod(info);
}

void V8VRDisplay::exitPresentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_exitPresent");

  VRDisplayV8Internal::exitPresentMethod(info);
}

void V8VRDisplay::getLayersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_getLayers");

  VRDisplayV8Internal::getLayersMethod(info);
}

void V8VRDisplay::submitFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_submitFrame");

  VRDisplayV8Internal::submitFrameMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8VRDisplayAccessors[] = {
    { "displayId", V8VRDisplay::displayIdAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "displayName", V8VRDisplay::displayNameAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "isPresenting", V8VRDisplay::isPresentingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "capabilities", V8VRDisplay::capabilitiesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "stageParameters", V8VRDisplay::stageParametersAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "depthNear", V8VRDisplay::depthNearAttributeGetterCallback, V8VRDisplay::depthNearAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "depthFar", V8VRDisplay::depthFarAttributeGetterCallback, V8VRDisplay::depthFarAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8VRDisplayMethods[] = {
    {"getFrameData", V8VRDisplay::getFrameDataMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getEyeParameters", V8VRDisplay::getEyeParametersMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"requestAnimationFrame", V8VRDisplay::requestAnimationFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"cancelAnimationFrame", V8VRDisplay::cancelAnimationFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"requestPresent", V8VRDisplay::requestPresentMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"exitPresent", V8VRDisplay::exitPresentMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getLayers", V8VRDisplay::getLayersMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"submitFrame", V8VRDisplay::submitFrameMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8VRDisplayTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8VRDisplay::wrapperTypeInfo.interface_name, V8EventTarget::domTemplate(isolate, world), V8VRDisplay::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8VRDisplayAccessors, arraysize(V8VRDisplayAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8VRDisplayMethods, arraysize(V8VRDisplayMethods));

  // Custom signature

  V8VRDisplay::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8VRDisplay::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8VRDisplay::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8VRDisplayTemplate);
}

bool V8VRDisplay::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8VRDisplay::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

VRDisplay* V8VRDisplay::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

VRDisplay* NativeValueTraits<VRDisplay>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  VRDisplay* nativeValue = V8VRDisplay::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "VRDisplay"));
  }
  return nativeValue;
}

}  // namespace blink

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_vtt_region.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
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
const WrapperTypeInfo V8VTTRegion::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8VTTRegion::domTemplate,
    nullptr,
    "VTTRegion",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in VTTRegion.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& VTTRegion::wrapper_type_info_ = V8VTTRegion::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, VTTRegion>::value,
    "VTTRegion inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&VTTRegion::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "VTTRegion is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace VTTRegionV8Internal {

static void idAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  V8SetReturnValueString(info, impl->id(), info.GetIsolate());
}

static void idAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setId(cppValue);
}

static void widthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  V8SetReturnValue(info, impl->width());
}

static void widthAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "VTTRegion", "width");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setWidth(cppValue, exceptionState);
}

static void linesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->lines());
}

static void linesAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "VTTRegion", "lines");

  // Prepare the value to be set.
  uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setLines(cppValue);
}

static void regionAnchorXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  V8SetReturnValue(info, impl->regionAnchorX());
}

static void regionAnchorXAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "VTTRegion", "regionAnchorX");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setRegionAnchorX(cppValue, exceptionState);
}

static void regionAnchorYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  V8SetReturnValue(info, impl->regionAnchorY());
}

static void regionAnchorYAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "VTTRegion", "regionAnchorY");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setRegionAnchorY(cppValue, exceptionState);
}

static void viewportAnchorXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  V8SetReturnValue(info, impl->viewportAnchorX());
}

static void viewportAnchorXAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "VTTRegion", "viewportAnchorX");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setViewportAnchorX(cppValue, exceptionState);
}

static void viewportAnchorYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  V8SetReturnValue(info, impl->viewportAnchorY());
}

static void viewportAnchorYAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "VTTRegion", "viewportAnchorY");

  // Prepare the value to be set.
  double cppValue = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setViewportAnchorY(cppValue, exceptionState);
}

static void scrollAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  V8SetReturnValueString(info, impl->scroll(), info.GetIsolate());
}

static void scrollAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "VTTRegion", "scroll");

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  // Type check per: http://heycam.github.io/webidl/#dfn-attribute-setter
  // Returns undefined without setting the value if the value is invalid.
  DummyExceptionStateForTesting dummyExceptionState;
  const char* validValues[] = {
      "",
      "up",
  };
  if (!IsValidEnum(cppValue, validValues, arraysize(validValues), "ScrollSetting", dummyExceptionState)) {
    ExecutionContext::ForCurrentRealm(info)->AddConsoleMessage(
        ConsoleMessage::Create(kJSMessageSource, kWarningMessageLevel,
                               dummyExceptionState.Message()));
    return;
  }

  impl->setScroll(cppValue);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_ConstructorCallback");

  VTTRegion* impl = VTTRegion::Create();
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), &V8VTTRegion::wrapperTypeInfo, wrapper);
  V8SetReturnValue(info, wrapper);
}

} // namespace VTTRegionV8Internal

void V8VTTRegion::idAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_id_Getter");

  VTTRegionV8Internal::idAttributeGetter(info);
}

void V8VTTRegion::idAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_id_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  VTTRegionV8Internal::idAttributeSetter(v8Value, info);
}

void V8VTTRegion::widthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_width_Getter");

  VTTRegionV8Internal::widthAttributeGetter(info);
}

void V8VTTRegion::widthAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_width_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  VTTRegionV8Internal::widthAttributeSetter(v8Value, info);
}

void V8VTTRegion::linesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_lines_Getter");

  VTTRegionV8Internal::linesAttributeGetter(info);
}

void V8VTTRegion::linesAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_lines_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  VTTRegionV8Internal::linesAttributeSetter(v8Value, info);
}

void V8VTTRegion::regionAnchorXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_regionAnchorX_Getter");

  VTTRegionV8Internal::regionAnchorXAttributeGetter(info);
}

void V8VTTRegion::regionAnchorXAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_regionAnchorX_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  VTTRegionV8Internal::regionAnchorXAttributeSetter(v8Value, info);
}

void V8VTTRegion::regionAnchorYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_regionAnchorY_Getter");

  VTTRegionV8Internal::regionAnchorYAttributeGetter(info);
}

void V8VTTRegion::regionAnchorYAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_regionAnchorY_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  VTTRegionV8Internal::regionAnchorYAttributeSetter(v8Value, info);
}

void V8VTTRegion::viewportAnchorXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_viewportAnchorX_Getter");

  VTTRegionV8Internal::viewportAnchorXAttributeGetter(info);
}

void V8VTTRegion::viewportAnchorXAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_viewportAnchorX_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  VTTRegionV8Internal::viewportAnchorXAttributeSetter(v8Value, info);
}

void V8VTTRegion::viewportAnchorYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_viewportAnchorY_Getter");

  VTTRegionV8Internal::viewportAnchorYAttributeGetter(info);
}

void V8VTTRegion::viewportAnchorYAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_viewportAnchorY_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  VTTRegionV8Internal::viewportAnchorYAttributeSetter(v8Value, info);
}

void V8VTTRegion::scrollAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_scroll_Getter");

  VTTRegionV8Internal::scrollAttributeGetter(info);
}

void V8VTTRegion::scrollAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_scroll_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  VTTRegionV8Internal::scrollAttributeSetter(v8Value, info);
}

static const V8DOMConfiguration::AccessorConfiguration V8VTTRegionAccessors[] = {
    { "id", V8VTTRegion::idAttributeGetterCallback, V8VTTRegion::idAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "width", V8VTTRegion::widthAttributeGetterCallback, V8VTTRegion::widthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "lines", V8VTTRegion::linesAttributeGetterCallback, V8VTTRegion::linesAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "regionAnchorX", V8VTTRegion::regionAnchorXAttributeGetterCallback, V8VTTRegion::regionAnchorXAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "regionAnchorY", V8VTTRegion::regionAnchorYAttributeGetterCallback, V8VTTRegion::regionAnchorYAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "viewportAnchorX", V8VTTRegion::viewportAnchorXAttributeGetterCallback, V8VTTRegion::viewportAnchorXAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "viewportAnchorY", V8VTTRegion::viewportAnchorYAttributeGetterCallback, V8VTTRegion::viewportAnchorYAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "scroll", V8VTTRegion::scrollAttributeGetterCallback, V8VTTRegion::scrollAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

void V8VTTRegion::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("VTTRegion"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  VTTRegionV8Internal::constructor(info);
}

static void installV8VTTRegionTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8VTTRegion::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8VTTRegion::internalFieldCount);
  interfaceTemplate->SetCallHandler(V8VTTRegion::constructorCallback);
  interfaceTemplate->SetLength(0);

  if (!RuntimeEnabledFeatures::WebVTTRegionsEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8VTTRegionAccessors, arraysize(V8VTTRegionAccessors));

  // Custom signature

  V8VTTRegion::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8VTTRegion::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::WebVTTRegionsEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8VTTRegion::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8VTTRegionTemplate);
}

bool V8VTTRegion::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8VTTRegion::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

VTTRegion* V8VTTRegion::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

VTTRegion* NativeValueTraits<VTTRegion>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  VTTRegion* nativeValue = V8VTTRegion::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "VTTRegion"));
  }
  return nativeValue;
}

}  // namespace blink

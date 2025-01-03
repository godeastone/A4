// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_angle.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
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
const WrapperTypeInfo V8SVGAngle::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8SVGAngle::domTemplate,
    nullptr,
    "SVGAngle",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGAngleTearOff.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SVGAngleTearOff::wrapper_type_info_ = V8SVGAngle::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGAngleTearOff>::value,
    "SVGAngleTearOff inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGAngleTearOff::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGAngleTearOff is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SVGAngleTearOffV8Internal {

static void unitTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGAngleTearOff* impl = V8SVGAngle::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->unitType());
}

static void valueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGAngleTearOff* impl = V8SVGAngle::ToImpl(holder);

  V8SetReturnValue(info, impl->value());
}

static void valueAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SVGAngleTearOff* impl = V8SVGAngle::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "SVGAngle", "value");

  // Prepare the value to be set.
  float cppValue = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setValue(cppValue, exceptionState);
}

static void valueInSpecifiedUnitsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGAngleTearOff* impl = V8SVGAngle::ToImpl(holder);

  V8SetReturnValue(info, impl->valueInSpecifiedUnits());
}

static void valueInSpecifiedUnitsAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SVGAngleTearOff* impl = V8SVGAngle::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "SVGAngle", "valueInSpecifiedUnits");

  // Prepare the value to be set.
  float cppValue = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setValueInSpecifiedUnits(cppValue, exceptionState);
}

static void valueAsStringAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGAngleTearOff* impl = V8SVGAngle::ToImpl(holder);

  V8SetReturnValueString(info, impl->valueAsString(), info.GetIsolate());
}

static void valueAsStringAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SVGAngleTearOff* impl = V8SVGAngle::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "SVGAngle", "valueAsString");

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setValueAsString(cppValue, exceptionState);
}

static void newValueSpecifiedUnitsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGAngle", "newValueSpecifiedUnits");

  SVGAngleTearOff* impl = V8SVGAngle::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint16_t unitType;
  float valueInSpecifiedUnits;
  unitType = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  valueInSpecifiedUnits = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->newValueSpecifiedUnits(unitType, valueInSpecifiedUnits, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void convertToSpecifiedUnitsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGAngle", "convertToSpecifiedUnits");

  SVGAngleTearOff* impl = V8SVGAngle::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint16_t unitType;
  unitType = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->convertToSpecifiedUnits(unitType, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

} // namespace SVGAngleTearOffV8Internal

void V8SVGAngle::unitTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGAngleTearOff_unitType_Getter");

  SVGAngleTearOffV8Internal::unitTypeAttributeGetter(info);
}

void V8SVGAngle::valueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGAngleTearOff_value_Getter");

  SVGAngleTearOffV8Internal::valueAttributeGetter(info);
}

void V8SVGAngle::valueAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGAngleTearOff_value_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SVGAngleTearOffV8Internal::valueAttributeSetter(v8Value, info);
}

void V8SVGAngle::valueInSpecifiedUnitsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGAngleTearOff_valueInSpecifiedUnits_Getter");

  SVGAngleTearOffV8Internal::valueInSpecifiedUnitsAttributeGetter(info);
}

void V8SVGAngle::valueInSpecifiedUnitsAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGAngleTearOff_valueInSpecifiedUnits_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SVGAngleTearOffV8Internal::valueInSpecifiedUnitsAttributeSetter(v8Value, info);
}

void V8SVGAngle::valueAsStringAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGAngleTearOff_valueAsString_Getter");

  SVGAngleTearOffV8Internal::valueAsStringAttributeGetter(info);
}

void V8SVGAngle::valueAsStringAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGAngleTearOff_valueAsString_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SVGAngleTearOffV8Internal::valueAsStringAttributeSetter(v8Value, info);
}

void V8SVGAngle::newValueSpecifiedUnitsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGAngleTearOff_newValueSpecifiedUnits");

  SVGAngleTearOffV8Internal::newValueSpecifiedUnitsMethod(info);
}

void V8SVGAngle::convertToSpecifiedUnitsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGAngleTearOff_convertToSpecifiedUnits");

  SVGAngleTearOffV8Internal::convertToSpecifiedUnitsMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8SVGAngleAccessors[] = {
    { "unitType", V8SVGAngle::unitTypeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "value", V8SVGAngle::valueAttributeGetterCallback, V8SVGAngle::valueAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "valueInSpecifiedUnits", V8SVGAngle::valueInSpecifiedUnitsAttributeGetterCallback, V8SVGAngle::valueInSpecifiedUnitsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "valueAsString", V8SVGAngle::valueAsStringAttributeGetterCallback, V8SVGAngle::valueAsStringAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8SVGAngleMethods[] = {
    {"newValueSpecifiedUnits", V8SVGAngle::newValueSpecifiedUnitsMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"convertToSpecifiedUnits", V8SVGAngle::convertToSpecifiedUnitsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8SVGAngleTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SVGAngle::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8SVGAngle::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  static constexpr V8DOMConfiguration::ConstantConfiguration V8SVGAngleConstants[] = {
      {"SVG_ANGLETYPE_UNKNOWN", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
      {"SVG_ANGLETYPE_UNSPECIFIED", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
      {"SVG_ANGLETYPE_DEG", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
      {"SVG_ANGLETYPE_RAD", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
      {"SVG_ANGLETYPE_GRAD", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
  };
  V8DOMConfiguration::InstallConstants(
      isolate, interfaceTemplate, prototypeTemplate,
      V8SVGAngleConstants, arraysize(V8SVGAngleConstants));
  static_assert(0 == SVGAngleTearOff::kSvgAngletypeUnknown, "the value of SVGAngleTearOff_kSvgAngletypeUnknown does not match with implementation");
  static_assert(1 == SVGAngleTearOff::kSvgAngletypeUnspecified, "the value of SVGAngleTearOff_kSvgAngletypeUnspecified does not match with implementation");
  static_assert(2 == SVGAngleTearOff::kSvgAngletypeDeg, "the value of SVGAngleTearOff_kSvgAngletypeDeg does not match with implementation");
  static_assert(3 == SVGAngleTearOff::kSvgAngletypeRad, "the value of SVGAngleTearOff_kSvgAngletypeRad does not match with implementation");
  static_assert(4 == SVGAngleTearOff::kSvgAngletypeGrad, "the value of SVGAngleTearOff_kSvgAngletypeGrad does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8SVGAngleAccessors, arraysize(V8SVGAngleAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8SVGAngleMethods, arraysize(V8SVGAngleMethods));

  // Custom signature

  V8SVGAngle::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8SVGAngle::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SVGAngle::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGAngleTemplate);
}

bool V8SVGAngle::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGAngle::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGAngleTearOff* V8SVGAngle::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SVGAngleTearOff* NativeValueTraits<SVGAngleTearOff>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  SVGAngleTearOff* nativeValue = V8SVGAngle::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SVGAngle"));
  }
  return nativeValue;
}

}  // namespace blink

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_length.h"

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
const WrapperTypeInfo V8SVGLength::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8SVGLength::domTemplate,
    nullptr,
    "SVGLength",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGLengthTearOff.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SVGLengthTearOff::wrapper_type_info_ = V8SVGLength::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGLengthTearOff>::value,
    "SVGLengthTearOff inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGLengthTearOff::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGLengthTearOff is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SVGLengthTearOffV8Internal {

static void unitTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGLengthTearOff* impl = V8SVGLength::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->unitType());
}

static void valueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGLengthTearOff* impl = V8SVGLength::ToImpl(holder);

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kGetterContext, "SVGLength", "value");

  float cppValue(impl->value(exceptionState));

  if (UNLIKELY(exceptionState.HadException()))
    return;

  V8SetReturnValue(info, cppValue);
}

static void valueAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SVGLengthTearOff* impl = V8SVGLength::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "SVGLength", "value");

  // Prepare the value to be set.
  float cppValue = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setValue(cppValue, exceptionState);
}

static void valueInSpecifiedUnitsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGLengthTearOff* impl = V8SVGLength::ToImpl(holder);

  V8SetReturnValue(info, impl->valueInSpecifiedUnits());
}

static void valueInSpecifiedUnitsAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SVGLengthTearOff* impl = V8SVGLength::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "SVGLength", "valueInSpecifiedUnits");

  // Prepare the value to be set.
  float cppValue = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setValueInSpecifiedUnits(cppValue, exceptionState);
}

static void valueAsStringAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGLengthTearOff* impl = V8SVGLength::ToImpl(holder);

  V8SetReturnValueString(info, impl->valueAsString(), info.GetIsolate());
}

static void valueAsStringAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SVGLengthTearOff* impl = V8SVGLength::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "SVGLength", "valueAsString");

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setValueAsString(cppValue, exceptionState);
}

static void newValueSpecifiedUnitsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGLength", "newValueSpecifiedUnits");

  SVGLengthTearOff* impl = V8SVGLength::ToImpl(info.Holder());

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
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGLength", "convertToSpecifiedUnits");

  SVGLengthTearOff* impl = V8SVGLength::ToImpl(info.Holder());

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

} // namespace SVGLengthTearOffV8Internal

void V8SVGLength::unitTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGLengthTearOff_unitType_Getter");

  SVGLengthTearOffV8Internal::unitTypeAttributeGetter(info);
}

void V8SVGLength::valueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGLengthTearOff_value_Getter");

  SVGLengthTearOffV8Internal::valueAttributeGetter(info);
}

void V8SVGLength::valueAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGLengthTearOff_value_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SVGLengthTearOffV8Internal::valueAttributeSetter(v8Value, info);
}

void V8SVGLength::valueInSpecifiedUnitsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGLengthTearOff_valueInSpecifiedUnits_Getter");

  SVGLengthTearOffV8Internal::valueInSpecifiedUnitsAttributeGetter(info);
}

void V8SVGLength::valueInSpecifiedUnitsAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGLengthTearOff_valueInSpecifiedUnits_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SVGLengthTearOffV8Internal::valueInSpecifiedUnitsAttributeSetter(v8Value, info);
}

void V8SVGLength::valueAsStringAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGLengthTearOff_valueAsString_Getter");

  SVGLengthTearOffV8Internal::valueAsStringAttributeGetter(info);
}

void V8SVGLength::valueAsStringAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGLengthTearOff_valueAsString_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SVGLengthTearOffV8Internal::valueAsStringAttributeSetter(v8Value, info);
}

void V8SVGLength::newValueSpecifiedUnitsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGLengthTearOff_newValueSpecifiedUnits");

  SVGLengthTearOffV8Internal::newValueSpecifiedUnitsMethod(info);
}

void V8SVGLength::convertToSpecifiedUnitsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGLengthTearOff_convertToSpecifiedUnits");

  SVGLengthTearOffV8Internal::convertToSpecifiedUnitsMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8SVGLengthAccessors[] = {
    { "unitType", V8SVGLength::unitTypeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "value", V8SVGLength::valueAttributeGetterCallback, V8SVGLength::valueAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "valueInSpecifiedUnits", V8SVGLength::valueInSpecifiedUnitsAttributeGetterCallback, V8SVGLength::valueInSpecifiedUnitsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "valueAsString", V8SVGLength::valueAsStringAttributeGetterCallback, V8SVGLength::valueAsStringAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8SVGLengthMethods[] = {
    {"newValueSpecifiedUnits", V8SVGLength::newValueSpecifiedUnitsMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"convertToSpecifiedUnits", V8SVGLength::convertToSpecifiedUnitsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8SVGLengthTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SVGLength::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8SVGLength::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  static constexpr V8DOMConfiguration::ConstantConfiguration V8SVGLengthConstants[] = {
      {"SVG_LENGTHTYPE_UNKNOWN", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
      {"SVG_LENGTHTYPE_NUMBER", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
      {"SVG_LENGTHTYPE_PERCENTAGE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
      {"SVG_LENGTHTYPE_EMS", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
      {"SVG_LENGTHTYPE_EXS", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
      {"SVG_LENGTHTYPE_PX", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(5)},
      {"SVG_LENGTHTYPE_CM", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(6)},
      {"SVG_LENGTHTYPE_MM", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(7)},
      {"SVG_LENGTHTYPE_IN", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(8)},
      {"SVG_LENGTHTYPE_PT", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(9)},
      {"SVG_LENGTHTYPE_PC", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(10)},
  };
  V8DOMConfiguration::InstallConstants(
      isolate, interfaceTemplate, prototypeTemplate,
      V8SVGLengthConstants, arraysize(V8SVGLengthConstants));
  static_assert(0 == SVGLengthTearOff::kSvgLengthtypeUnknown, "the value of SVGLengthTearOff_kSvgLengthtypeUnknown does not match with implementation");
  static_assert(1 == SVGLengthTearOff::kSvgLengthtypeNumber, "the value of SVGLengthTearOff_kSvgLengthtypeNumber does not match with implementation");
  static_assert(2 == SVGLengthTearOff::kSvgLengthtypePercentage, "the value of SVGLengthTearOff_kSvgLengthtypePercentage does not match with implementation");
  static_assert(3 == SVGLengthTearOff::kSvgLengthtypeEms, "the value of SVGLengthTearOff_kSvgLengthtypeEms does not match with implementation");
  static_assert(4 == SVGLengthTearOff::kSvgLengthtypeExs, "the value of SVGLengthTearOff_kSvgLengthtypeExs does not match with implementation");
  static_assert(5 == SVGLengthTearOff::kSvgLengthtypePx, "the value of SVGLengthTearOff_kSvgLengthtypePx does not match with implementation");
  static_assert(6 == SVGLengthTearOff::kSvgLengthtypeCm, "the value of SVGLengthTearOff_kSvgLengthtypeCm does not match with implementation");
  static_assert(7 == SVGLengthTearOff::kSvgLengthtypeMm, "the value of SVGLengthTearOff_kSvgLengthtypeMm does not match with implementation");
  static_assert(8 == SVGLengthTearOff::kSvgLengthtypeIn, "the value of SVGLengthTearOff_kSvgLengthtypeIn does not match with implementation");
  static_assert(9 == SVGLengthTearOff::kSvgLengthtypePt, "the value of SVGLengthTearOff_kSvgLengthtypePt does not match with implementation");
  static_assert(10 == SVGLengthTearOff::kSvgLengthtypePc, "the value of SVGLengthTearOff_kSvgLengthtypePc does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8SVGLengthAccessors, arraysize(V8SVGLengthAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8SVGLengthMethods, arraysize(V8SVGLengthMethods));

  // Custom signature

  V8SVGLength::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8SVGLength::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SVGLength::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGLengthTemplate);
}

bool V8SVGLength::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGLength::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGLengthTearOff* V8SVGLength::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SVGLengthTearOff* NativeValueTraits<SVGLengthTearOff>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  SVGLengthTearOff* nativeValue = V8SVGLength::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SVGLength"));
  }
  return nativeValue;
}

}  // namespace blink

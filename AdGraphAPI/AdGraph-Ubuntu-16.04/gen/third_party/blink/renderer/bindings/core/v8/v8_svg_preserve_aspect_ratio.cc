// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_preserve_aspect_ratio.h"

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
const WrapperTypeInfo V8SVGPreserveAspectRatio::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8SVGPreserveAspectRatio::domTemplate,
    nullptr,
    "SVGPreserveAspectRatio",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGPreserveAspectRatioTearOff.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SVGPreserveAspectRatioTearOff::wrapper_type_info_ = V8SVGPreserveAspectRatio::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGPreserveAspectRatioTearOff>::value,
    "SVGPreserveAspectRatioTearOff inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGPreserveAspectRatioTearOff::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGPreserveAspectRatioTearOff is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SVGPreserveAspectRatioTearOffV8Internal {

static void alignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGPreserveAspectRatioTearOff* impl = V8SVGPreserveAspectRatio::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->align());
}

static void alignAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SVGPreserveAspectRatioTearOff* impl = V8SVGPreserveAspectRatio::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "SVGPreserveAspectRatio", "align");

  // Prepare the value to be set.
  uint16_t cppValue = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setAlign(cppValue, exceptionState);
}

static void meetOrSliceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGPreserveAspectRatioTearOff* impl = V8SVGPreserveAspectRatio::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->meetOrSlice());
}

static void meetOrSliceAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SVGPreserveAspectRatioTearOff* impl = V8SVGPreserveAspectRatio::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "SVGPreserveAspectRatio", "meetOrSlice");

  // Prepare the value to be set.
  uint16_t cppValue = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setMeetOrSlice(cppValue, exceptionState);
}

} // namespace SVGPreserveAspectRatioTearOffV8Internal

void V8SVGPreserveAspectRatio::alignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGPreserveAspectRatioTearOff_align_Getter");

  SVGPreserveAspectRatioTearOffV8Internal::alignAttributeGetter(info);
}

void V8SVGPreserveAspectRatio::alignAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGPreserveAspectRatioTearOff_align_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SVGPreserveAspectRatioTearOffV8Internal::alignAttributeSetter(v8Value, info);
}

void V8SVGPreserveAspectRatio::meetOrSliceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGPreserveAspectRatioTearOff_meetOrSlice_Getter");

  SVGPreserveAspectRatioTearOffV8Internal::meetOrSliceAttributeGetter(info);
}

void V8SVGPreserveAspectRatio::meetOrSliceAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGPreserveAspectRatioTearOff_meetOrSlice_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  SVGPreserveAspectRatioTearOffV8Internal::meetOrSliceAttributeSetter(v8Value, info);
}

static const V8DOMConfiguration::AccessorConfiguration V8SVGPreserveAspectRatioAccessors[] = {
    { "align", V8SVGPreserveAspectRatio::alignAttributeGetterCallback, V8SVGPreserveAspectRatio::alignAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "meetOrSlice", V8SVGPreserveAspectRatio::meetOrSliceAttributeGetterCallback, V8SVGPreserveAspectRatio::meetOrSliceAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static void installV8SVGPreserveAspectRatioTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SVGPreserveAspectRatio::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8SVGPreserveAspectRatio::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  static constexpr V8DOMConfiguration::ConstantConfiguration V8SVGPreserveAspectRatioConstants[] = {
      {"SVG_PRESERVEASPECTRATIO_UNKNOWN", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
      {"SVG_PRESERVEASPECTRATIO_NONE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
      {"SVG_PRESERVEASPECTRATIO_XMINYMIN", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
      {"SVG_PRESERVEASPECTRATIO_XMIDYMIN", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
      {"SVG_PRESERVEASPECTRATIO_XMAXYMIN", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
      {"SVG_PRESERVEASPECTRATIO_XMINYMID", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(5)},
      {"SVG_PRESERVEASPECTRATIO_XMIDYMID", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(6)},
      {"SVG_PRESERVEASPECTRATIO_XMAXYMID", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(7)},
      {"SVG_PRESERVEASPECTRATIO_XMINYMAX", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(8)},
      {"SVG_PRESERVEASPECTRATIO_XMIDYMAX", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(9)},
      {"SVG_PRESERVEASPECTRATIO_XMAXYMAX", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(10)},
      {"SVG_MEETORSLICE_UNKNOWN", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
      {"SVG_MEETORSLICE_MEET", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
      {"SVG_MEETORSLICE_SLICE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
  };
  V8DOMConfiguration::InstallConstants(
      isolate, interfaceTemplate, prototypeTemplate,
      V8SVGPreserveAspectRatioConstants, arraysize(V8SVGPreserveAspectRatioConstants));
  static_assert(0 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioUnknown, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioUnknown does not match with implementation");
  static_assert(1 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioNone, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioNone does not match with implementation");
  static_assert(2 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioXminymin, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioXminymin does not match with implementation");
  static_assert(3 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioXmidymin, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioXmidymin does not match with implementation");
  static_assert(4 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioXmaxymin, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioXmaxymin does not match with implementation");
  static_assert(5 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioXminymid, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioXminymid does not match with implementation");
  static_assert(6 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioXmidymid, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioXmidymid does not match with implementation");
  static_assert(7 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioXmaxymid, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioXmaxymid does not match with implementation");
  static_assert(8 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioXminymax, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioXminymax does not match with implementation");
  static_assert(9 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioXmidymax, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioXmidymax does not match with implementation");
  static_assert(10 == SVGPreserveAspectRatioTearOff::kSvgPreserveaspectratioXmaxymax, "the value of SVGPreserveAspectRatioTearOff_kSvgPreserveaspectratioXmaxymax does not match with implementation");
  static_assert(0 == SVGPreserveAspectRatioTearOff::kSvgMeetorsliceUnknown, "the value of SVGPreserveAspectRatioTearOff_kSvgMeetorsliceUnknown does not match with implementation");
  static_assert(1 == SVGPreserveAspectRatioTearOff::kSvgMeetorsliceMeet, "the value of SVGPreserveAspectRatioTearOff_kSvgMeetorsliceMeet does not match with implementation");
  static_assert(2 == SVGPreserveAspectRatioTearOff::kSvgMeetorsliceSlice, "the value of SVGPreserveAspectRatioTearOff_kSvgMeetorsliceSlice does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8SVGPreserveAspectRatioAccessors, arraysize(V8SVGPreserveAspectRatioAccessors));

  // Custom signature

  V8SVGPreserveAspectRatio::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8SVGPreserveAspectRatio::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SVGPreserveAspectRatio::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGPreserveAspectRatioTemplate);
}

bool V8SVGPreserveAspectRatio::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGPreserveAspectRatio::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGPreserveAspectRatioTearOff* V8SVGPreserveAspectRatio::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SVGPreserveAspectRatioTearOff* NativeValueTraits<SVGPreserveAspectRatioTearOff>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  SVGPreserveAspectRatioTearOff* nativeValue = V8SVGPreserveAspectRatio::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SVGPreserveAspectRatio"));
  }
  return nativeValue;
}

}  // namespace blink

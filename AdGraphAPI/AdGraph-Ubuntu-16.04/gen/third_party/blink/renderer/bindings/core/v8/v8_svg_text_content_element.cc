// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_text_content_element.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_enumeration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_length.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_point.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_rect.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
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
const WrapperTypeInfo V8SVGTextContentElement::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8SVGTextContentElement::domTemplate,
    nullptr,
    "SVGTextContentElement",
    &V8SVGGraphicsElement::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGTextContentElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SVGTextContentElement::wrapper_type_info_ = V8SVGTextContentElement::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGTextContentElement>::value,
    "SVGTextContentElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGTextContentElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGTextContentElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SVGTextContentElementV8Internal {

static void textLengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->textLength()), impl);
}

static void lengthAdjustAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->lengthAdjust()), impl);
}

static void getNumberOfCharsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(info.Holder());

  V8SetReturnValueInt(info, impl->getNumberOfChars());
}

static void getComputedTextLengthMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->getComputedTextLength());
}

static void getSubStringLengthMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTextContentElement", "getSubStringLength");

  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t charnum;
  uint32_t nchars;
  charnum = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  nchars = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  float result = impl->getSubStringLength(charnum, nchars, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void getStartPositionOfCharMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTextContentElement", "getStartPositionOfChar");

  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t charnum;
  charnum = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  SVGPointTearOff* result = impl->getStartPositionOfChar(charnum, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void getEndPositionOfCharMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTextContentElement", "getEndPositionOfChar");

  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t charnum;
  charnum = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  SVGPointTearOff* result = impl->getEndPositionOfChar(charnum, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void getExtentOfCharMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTextContentElement", "getExtentOfChar");

  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t charnum;
  charnum = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  SVGRectTearOff* result = impl->getExtentOfChar(charnum, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void getRotationOfCharMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTextContentElement", "getRotationOfChar");

  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t charnum;
  charnum = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  float result = impl->getRotationOfChar(charnum, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void getCharNumAtPositionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTextContentElement", "getCharNumAtPosition");

  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  SVGPointTearOff* point;
  point = V8SVGPoint::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!point) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'SVGPoint'.");
    return;
  }

  int32_t result = impl->getCharNumAtPosition(point, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueInt(info, result);
}

static void selectSubStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTextContentElement", "selectSubString");

  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t charnum;
  uint32_t nchars;
  charnum = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  nchars = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->selectSubString(charnum, nchars, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

} // namespace SVGTextContentElementV8Internal

void V8SVGTextContentElement::LENGTHADJUST_UNKNOWNConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_LENGTHADJUST_UNKNOWN_ConstantGetter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMText);
  V8SetReturnValueInt(info, 0);
}

void V8SVGTextContentElement::LENGTHADJUST_SPACINGConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_LENGTHADJUST_SPACING_ConstantGetter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMText);
  V8SetReturnValueInt(info, 1);
}

void V8SVGTextContentElement::LENGTHADJUST_SPACINGANDGLYPHSConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_LENGTHADJUST_SPACINGANDGLYPHS_ConstantGetter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMText);
  V8SetReturnValueInt(info, 2);
}

void V8SVGTextContentElement::textLengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_textLength_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMText);

  SVGTextContentElementV8Internal::textLengthAttributeGetter(info);
}

void V8SVGTextContentElement::lengthAdjustAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_lengthAdjust_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSVG1DOMText);

  SVGTextContentElementV8Internal::lengthAdjustAttributeGetter(info);
}

void V8SVGTextContentElement::getNumberOfCharsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_getNumberOfChars");

  SVGTextContentElementV8Internal::getNumberOfCharsMethod(info);
}

void V8SVGTextContentElement::getComputedTextLengthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_getComputedTextLength");

  SVGTextContentElementV8Internal::getComputedTextLengthMethod(info);
}

void V8SVGTextContentElement::getSubStringLengthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_getSubStringLength");

  SVGTextContentElementV8Internal::getSubStringLengthMethod(info);
}

void V8SVGTextContentElement::getStartPositionOfCharMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_getStartPositionOfChar");

  SVGTextContentElementV8Internal::getStartPositionOfCharMethod(info);
}

void V8SVGTextContentElement::getEndPositionOfCharMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_getEndPositionOfChar");

  SVGTextContentElementV8Internal::getEndPositionOfCharMethod(info);
}

void V8SVGTextContentElement::getExtentOfCharMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_getExtentOfChar");

  SVGTextContentElementV8Internal::getExtentOfCharMethod(info);
}

void V8SVGTextContentElement::getRotationOfCharMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_getRotationOfChar");

  SVGTextContentElementV8Internal::getRotationOfCharMethod(info);
}

void V8SVGTextContentElement::getCharNumAtPositionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_getCharNumAtPosition");

  SVGTextContentElementV8Internal::getCharNumAtPositionMethod(info);
}

void V8SVGTextContentElement::selectSubStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_selectSubString");

  SVGTextContentElementV8Internal::selectSubStringMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8SVGTextContentElementAccessors[] = {
    { "textLength", V8SVGTextContentElement::textLengthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "lengthAdjust", V8SVGTextContentElement::lengthAdjustAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8SVGTextContentElementMethods[] = {
    {"getNumberOfChars", V8SVGTextContentElement::getNumberOfCharsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getComputedTextLength", V8SVGTextContentElement::getComputedTextLengthMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getSubStringLength", V8SVGTextContentElement::getSubStringLengthMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getStartPositionOfChar", V8SVGTextContentElement::getStartPositionOfCharMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getEndPositionOfChar", V8SVGTextContentElement::getEndPositionOfCharMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getExtentOfChar", V8SVGTextContentElement::getExtentOfCharMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getRotationOfChar", V8SVGTextContentElement::getRotationOfCharMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getCharNumAtPosition", V8SVGTextContentElement::getCharNumAtPositionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"selectSubString", V8SVGTextContentElement::selectSubStringMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8SVGTextContentElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SVGTextContentElement::wrapperTypeInfo.interface_name, V8SVGGraphicsElement::domTemplate(isolate, world), V8SVGTextContentElement::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interfaceTemplate, prototypeTemplate,
      "LENGTHADJUST_UNKNOWN", V8SVGTextContentElement::LENGTHADJUST_UNKNOWNConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interfaceTemplate, prototypeTemplate,
      "LENGTHADJUST_SPACING", V8SVGTextContentElement::LENGTHADJUST_SPACINGConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interfaceTemplate, prototypeTemplate,
      "LENGTHADJUST_SPACINGANDGLYPHS", V8SVGTextContentElement::LENGTHADJUST_SPACINGANDGLYPHSConstantGetterCallback);
  static_assert(0 == SVGTextContentElement::kLengthadjustUnknown, "the value of SVGTextContentElement_kLengthadjustUnknown does not match with implementation");
  static_assert(1 == SVGTextContentElement::kLengthadjustSpacing, "the value of SVGTextContentElement_kLengthadjustSpacing does not match with implementation");
  static_assert(2 == SVGTextContentElement::kLengthadjustSpacingandglyphs, "the value of SVGTextContentElement_kLengthadjustSpacingandglyphs does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8SVGTextContentElementAccessors, arraysize(V8SVGTextContentElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8SVGTextContentElementMethods, arraysize(V8SVGTextContentElementMethods));

  // Custom signature

  V8SVGTextContentElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8SVGTextContentElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SVGTextContentElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGTextContentElementTemplate);
}

bool V8SVGTextContentElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGTextContentElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGTextContentElement* V8SVGTextContentElement::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SVGTextContentElement* NativeValueTraits<SVGTextContentElement>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  SVGTextContentElement* nativeValue = V8SVGTextContentElement::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SVGTextContentElement"));
  }
  return nativeValue;
}

}  // namespace blink

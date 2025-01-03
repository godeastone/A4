// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_layout_worklet_global_scope.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_image_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_keyword_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_invert.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_max.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_min.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_negate.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_product.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_sum.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_matrix_component.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_numeric_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_numeric_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_perspective.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_position_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_rotate.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_scale.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_skew.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_transform_component.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_transform_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_translate.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_unit_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_unparsed_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_variable_reference_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_layout_child.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_layout_constraints.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_layout_fragment.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_layout_fragment_request.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_layout_worklet_global_scope.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_style_property_map_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worklet_global_scope.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/layout_worklet_global_scope_core_constructors.h"
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
const WrapperTypeInfo V8LayoutWorkletGlobalScope::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8LayoutWorkletGlobalScope::domTemplate,
    nullptr,
    "LayoutWorkletGlobalScope",
    &V8WorkletGlobalScope::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in LayoutWorkletGlobalScope.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& LayoutWorkletGlobalScope::wrapper_type_info_ = V8LayoutWorkletGlobalScope::wrapperTypeInfo;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, LayoutWorkletGlobalScope>::value,
    "LayoutWorkletGlobalScope does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&LayoutWorkletGlobalScope::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "LayoutWorkletGlobalScope is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace LayoutWorkletGlobalScopeV8Internal {

static void registerLayoutMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "LayoutWorkletGlobalScope", "registerLayout");

  LayoutWorkletGlobalScope* impl = V8LayoutWorkletGlobalScope::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> name;
  ScriptValue layoutCtor;
  name = info[0];
  if (!name.Prepare())
    return;

  if (info[1]->IsFunction()) {
    layoutCtor = ScriptValue(ScriptState::Current(info.GetIsolate()), info[1]);
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  impl->registerLayout(name, layoutCtor, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

} // namespace LayoutWorkletGlobalScopeV8Internal

void V8LayoutWorkletGlobalScope::LayoutChildConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_LayoutChild_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8LayoutChild::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::LayoutConstraintsConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_LayoutConstraints_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8LayoutConstraints::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::LayoutFragmentConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_LayoutFragment_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8LayoutFragment::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::LayoutFragmentRequestConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_LayoutFragmentRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8LayoutFragmentRequest::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::LayoutWorkletGlobalScopeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_LayoutWorkletGlobalScope_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8LayoutWorkletGlobalScope::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSImageValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSImageValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSImageValue::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSKeywordValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSKeywordValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSKeywordValue::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSMathInvertConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSMathInvert_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMathInvert::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSMathMaxConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSMathMax_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMathMax::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSMathMinConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSMathMin_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMathMin::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSMathNegateConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSMathNegate_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMathNegate::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSMathProductConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSMathProduct_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMathProduct::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSMathSumConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSMathSum_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMathSum::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSMathValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSMathValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMathValue::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSMatrixComponentConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSMatrixComponent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSMatrixComponent::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSNumericArrayConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSNumericArray_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSNumericArray::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSNumericValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSNumericValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSNumericValue::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSPerspectiveConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSPerspective_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSPerspective::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSPositionValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSPositionValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSPositionValue::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSRotateConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSRotate_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSRotate::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSScaleConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSScale_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSScale::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSSkewConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSSkew_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSSkew::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSStyleValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSStyleValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSStyleValue::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSTransformComponentConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSTransformComponent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSTransformComponent::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSTransformValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSTransformValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSTransformValue::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSTranslateConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSTranslate_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSTranslate::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSUnitValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSUnitValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSUnitValue::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSUnparsedValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSUnparsedValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSUnparsedValue::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::CSSVariableReferenceValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_CSSVariableReferenceValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CSSVariableReferenceValue::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::StylePropertyMapReadOnlyConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_StylePropertyMapReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8StylePropertyMapReadOnly::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::WorkletGlobalScopeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_WorkletGlobalScope_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WorkletGlobalScope::wrapperTypeInfo);
}

void V8LayoutWorkletGlobalScope::registerLayoutMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_LayoutWorkletGlobalScope_registerLayout");

  LayoutWorkletGlobalScopeV8Internal::registerLayoutMethod(info);
}

static const V8DOMConfiguration::MethodConfiguration V8LayoutWorkletGlobalScopeMethods[] = {
    {"registerLayout", V8LayoutWorkletGlobalScope::registerLayoutMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8LayoutWorkletGlobalScopeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8LayoutWorkletGlobalScope::wrapperTypeInfo.interface_name, V8WorkletGlobalScope::domTemplate(isolate, world), V8LayoutWorkletGlobalScope::internalFieldCount);

  if (!RuntimeEnabledFeatures::CSSLayoutAPIEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Global object prototype chain consists of Immutable Prototype Exotic Objects
  prototypeTemplate->SetImmutableProto();

  // Global objects are Immutable Prototype Exotic Objects
  instanceTemplate->SetImmutableProto();

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8LayoutWorkletGlobalScopeMethods, arraysize(V8LayoutWorkletGlobalScopeMethods));

  // Custom signature

  V8LayoutWorkletGlobalScope::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8LayoutWorkletGlobalScope::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::CSSLayoutAPIEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  if (RuntimeEnabledFeatures::CSSLayoutAPIEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "LayoutChild", V8LayoutWorkletGlobalScope::LayoutChildConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "LayoutConstraints", V8LayoutWorkletGlobalScope::LayoutConstraintsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "LayoutFragment", V8LayoutWorkletGlobalScope::LayoutFragmentConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "LayoutFragmentRequest", V8LayoutWorkletGlobalScope::LayoutFragmentRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "LayoutWorkletGlobalScope", V8LayoutWorkletGlobalScope::LayoutWorkletGlobalScopeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::CSSTypedOMEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "CSSImageValue", V8LayoutWorkletGlobalScope::CSSImageValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSKeywordValue", V8LayoutWorkletGlobalScope::CSSKeywordValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathInvert", V8LayoutWorkletGlobalScope::CSSMathInvertConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathMax", V8LayoutWorkletGlobalScope::CSSMathMaxConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathMin", V8LayoutWorkletGlobalScope::CSSMathMinConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathNegate", V8LayoutWorkletGlobalScope::CSSMathNegateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathProduct", V8LayoutWorkletGlobalScope::CSSMathProductConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathSum", V8LayoutWorkletGlobalScope::CSSMathSumConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMathValue", V8LayoutWorkletGlobalScope::CSSMathValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSMatrixComponent", V8LayoutWorkletGlobalScope::CSSMatrixComponentConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSNumericArray", V8LayoutWorkletGlobalScope::CSSNumericArrayConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSNumericValue", V8LayoutWorkletGlobalScope::CSSNumericValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSPerspective", V8LayoutWorkletGlobalScope::CSSPerspectiveConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSPositionValue", V8LayoutWorkletGlobalScope::CSSPositionValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSRotate", V8LayoutWorkletGlobalScope::CSSRotateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSScale", V8LayoutWorkletGlobalScope::CSSScaleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSSkew", V8LayoutWorkletGlobalScope::CSSSkewConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSStyleValue", V8LayoutWorkletGlobalScope::CSSStyleValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSTransformComponent", V8LayoutWorkletGlobalScope::CSSTransformComponentConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSTransformValue", V8LayoutWorkletGlobalScope::CSSTransformValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSTranslate", V8LayoutWorkletGlobalScope::CSSTranslateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSUnitValue", V8LayoutWorkletGlobalScope::CSSUnitValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSUnparsedValue", V8LayoutWorkletGlobalScope::CSSUnparsedValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CSSVariableReferenceValue", V8LayoutWorkletGlobalScope::CSSVariableReferenceValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "StylePropertyMapReadOnly", V8LayoutWorkletGlobalScope::StylePropertyMapReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::WorkletEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "WorkletGlobalScope", V8LayoutWorkletGlobalScope::WorkletGlobalScopeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8LayoutWorkletGlobalScope::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8LayoutWorkletGlobalScopeTemplate);
}

bool V8LayoutWorkletGlobalScope::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8LayoutWorkletGlobalScope::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

LayoutWorkletGlobalScope* V8LayoutWorkletGlobalScope::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

LayoutWorkletGlobalScope* NativeValueTraits<LayoutWorkletGlobalScope>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  LayoutWorkletGlobalScope* nativeValue = V8LayoutWorkletGlobalScope::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "LayoutWorkletGlobalScope"));
  }
  return nativeValue;
}

}  // namespace blink

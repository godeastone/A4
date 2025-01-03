// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_evaluator.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_expression.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_ns_resolver.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_result.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
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
const WrapperTypeInfo V8XPathEvaluator::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8XPathEvaluator::domTemplate,
    nullptr,
    "XPathEvaluator",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in XPathEvaluator.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& XPathEvaluator::wrapper_type_info_ = V8XPathEvaluator::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, XPathEvaluator>::value,
    "XPathEvaluator inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&XPathEvaluator::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "XPathEvaluator is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace XPathEvaluatorV8Internal {

static void createExpressionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "XPathEvaluator", "createExpression");

  XPathEvaluator* impl = V8XPathEvaluator::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> expression;
  XPathNSResolver* resolver;
  expression = info[0];
  if (!expression.Prepare())
    return;

  if (!info[1]->IsUndefined()) {
    resolver = ToXPathNSResolver(ScriptState::Current(info.GetIsolate()), info[1]);
    if (!resolver && !IsUndefinedOrNull(info[1])) {
      exceptionState.ThrowTypeError("parameter 2 is not of type 'XPathNSResolver'.");
      return;
    }
  } else {
    resolver = nullptr;
  }

  XPathExpression* result = impl->createExpression(expression, resolver, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void createNSResolverMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XPathEvaluator* impl = V8XPathEvaluator::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("createNSResolver", "XPathEvaluator", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* nodeResolver;
  nodeResolver = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!nodeResolver) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("createNSResolver", "XPathEvaluator", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValue(info, impl->createNSResolver(nodeResolver));
}

static void evaluateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "XPathEvaluator", "evaluate");

  XPathEvaluator* impl = V8XPathEvaluator::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> expression;
  Node* contextNode;
  XPathNSResolver* resolver;
  uint16_t type;
  ScriptValue inResult;
  expression = info[0];
  if (!expression.Prepare())
    return;

  contextNode = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!contextNode) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Node'.");
    return;
  }

  if (!info[2]->IsUndefined()) {
    resolver = ToXPathNSResolver(ScriptState::Current(info.GetIsolate()), info[2]);
    if (!resolver && !IsUndefinedOrNull(info[2])) {
      exceptionState.ThrowTypeError("parameter 3 is not of type 'XPathNSResolver'.");
      return;
    }
  } else {
    resolver = nullptr;
  }
  if (!info[3]->IsUndefined()) {
    type = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), info[3], exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
  } else {
    type = 0u;
  }
  if (!info[4]->IsUndefined()) {
    inResult = ScriptValue(ScriptState::Current(info.GetIsolate()), info[4]);
  } else {
    inResult = ScriptValue();
  }

  XPathResult* result = impl->evaluate(expression, contextNode, resolver, type, inResult, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathEvaluator_ConstructorCallback");

  XPathEvaluator* impl = XPathEvaluator::Create();
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), &V8XPathEvaluator::wrapperTypeInfo, wrapper);
  V8SetReturnValue(info, wrapper);
}

} // namespace XPathEvaluatorV8Internal

void V8XPathEvaluator::createExpressionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathEvaluator_createExpression");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8XPathEvaluator_CreateExpression_Method);
  XPathEvaluatorV8Internal::createExpressionMethod(info);
}

void V8XPathEvaluator::createNSResolverMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathEvaluator_createNSResolver");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8XPathEvaluator_CreateNSResolver_Method);
  XPathEvaluatorV8Internal::createNSResolverMethod(info);
}

void V8XPathEvaluator::evaluateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathEvaluator_evaluate");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8XPathEvaluator_Evaluate_Method);
  XPathEvaluatorV8Internal::evaluateMethod(info);
}

static const V8DOMConfiguration::MethodConfiguration V8XPathEvaluatorMethods[] = {
    {"createExpression", V8XPathEvaluator::createExpressionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createNSResolver", V8XPathEvaluator::createNSResolverMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"evaluate", V8XPathEvaluator::evaluateMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8XPathEvaluator::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathEvaluator_Constructor");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8XPathEvaluator_Constructor);
  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("XPathEvaluator"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  XPathEvaluatorV8Internal::constructor(info);
}

static void installV8XPathEvaluatorTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8XPathEvaluator::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8XPathEvaluator::internalFieldCount);
  interfaceTemplate->SetCallHandler(V8XPathEvaluator::constructorCallback);
  interfaceTemplate->SetLength(0);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8XPathEvaluatorMethods, arraysize(V8XPathEvaluatorMethods));

  // Custom signature

  V8XPathEvaluator::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8XPathEvaluator::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8XPathEvaluator::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8XPathEvaluatorTemplate);
}

bool V8XPathEvaluator::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8XPathEvaluator::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

XPathEvaluator* V8XPathEvaluator::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

XPathEvaluator* NativeValueTraits<XPathEvaluator>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  XPathEvaluator* nativeValue = V8XPathEvaluator::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "XPathEvaluator"));
  }
  return nativeValue;
}

}  // namespace blink

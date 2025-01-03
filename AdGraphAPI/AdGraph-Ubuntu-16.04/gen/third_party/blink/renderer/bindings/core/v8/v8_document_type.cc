// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_document_type.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/core/dom/child_node.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
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
const WrapperTypeInfo V8DocumentType::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8DocumentType::domTemplate,
    V8DocumentType::InstallConditionalFeatures,
    "DocumentType",
    &V8Node::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DocumentType.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DocumentType::wrapper_type_info_ = V8DocumentType::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DocumentType>::value,
    "DocumentType inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DocumentType::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DocumentType is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace DocumentTypeV8Internal {

static void nameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DocumentType* impl = V8DocumentType::ToImpl(holder);

  V8SetReturnValueString(info, impl->name(), info.GetIsolate());
}

static void publicIdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DocumentType* impl = V8DocumentType::ToImpl(holder);

  V8SetReturnValueString(info, impl->publicId(), info.GetIsolate());
}

static void systemIdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DocumentType* impl = V8DocumentType::ToImpl(holder);

  V8SetReturnValueString(info, impl->systemId(), info.GetIsolate());
}

static void beforeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ceReactionsScope;

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DocumentType", "before");

  DocumentType* impl = V8DocumentType::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  HeapVector<NodeOrString> nodes;
  nodes = ToImplArguments<NodeOrString>(info, 0, exceptionState);
  if (exceptionState.HadException())
    return;

  ChildNode::before(*impl, nodes, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void afterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ceReactionsScope;

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DocumentType", "after");

  DocumentType* impl = V8DocumentType::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  HeapVector<NodeOrString> nodes;
  nodes = ToImplArguments<NodeOrString>(info, 0, exceptionState);
  if (exceptionState.HadException())
    return;

  ChildNode::after(*impl, nodes, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void replaceWithMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ceReactionsScope;

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DocumentType", "replaceWith");

  DocumentType* impl = V8DocumentType::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  HeapVector<NodeOrString> nodes;
  nodes = ToImplArguments<NodeOrString>(info, 0, exceptionState);
  if (exceptionState.HadException())
    return;

  ChildNode::replaceWith(*impl, nodes, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void removeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ceReactionsScope;

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DocumentType", "remove");

  DocumentType* impl = V8DocumentType::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  ChildNode::remove(*impl, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

} // namespace DocumentTypeV8Internal

void V8DocumentType::nameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentType_name_Getter");

  DocumentTypeV8Internal::nameAttributeGetter(info);
}

void V8DocumentType::publicIdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentType_publicId_Getter");

  DocumentTypeV8Internal::publicIdAttributeGetter(info);
}

void V8DocumentType::systemIdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentType_systemId_Getter");

  DocumentTypeV8Internal::systemIdAttributeGetter(info);
}

void V8DocumentType::beforeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentType_before");

  DocumentTypeV8Internal::beforeMethod(info);
}

void V8DocumentType::afterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentType_after");

  DocumentTypeV8Internal::afterMethod(info);
}

void V8DocumentType::replaceWithMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentType_replaceWith");

  DocumentTypeV8Internal::replaceWithMethod(info);
}

void V8DocumentType::removeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentType_remove");

  DocumentTypeV8Internal::removeMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8DocumentTypeAccessors[] = {
    { "name", V8DocumentType::nameAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "publicId", V8DocumentType::publicIdAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "systemId", V8DocumentType::systemIdAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8DocumentTypeMethods[] = {
    {"before", V8DocumentType::beforeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"after", V8DocumentType::afterMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"replaceWith", V8DocumentType::replaceWithMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"remove", V8DocumentType::removeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8DocumentTypeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8DocumentType::wrapperTypeInfo.interface_name, V8Node::domTemplate(isolate, world), V8DocumentType::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8DocumentTypeAccessors, arraysize(V8DocumentTypeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8DocumentTypeMethods, arraysize(V8DocumentTypeMethods));

  // Custom signature

  V8DocumentType::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8DocumentType::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8DocumentType::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DocumentTypeTemplate);
}

bool V8DocumentType::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DocumentType::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DocumentType* V8DocumentType::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DocumentType* NativeValueTraits<DocumentType>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DocumentType* nativeValue = V8DocumentType::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "DocumentType"));
  }
  return nativeValue;
}

void V8DocumentType::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instanceObject,
    v8::Local<v8::Object> prototypeObject,
    v8::Local<v8::Function> interfaceObject,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  CHECK(!interfaceTemplate.IsEmpty());
  DCHECK((!prototypeObject.IsEmpty() && !interfaceObject.IsEmpty()) ||
         !instanceObject.IsEmpty());

  v8::Isolate* isolate = context->GetIsolate();

  if (!prototypeObject.IsEmpty()) {
    v8::Local<v8::Name> unscopablesSymbol(v8::Symbol::GetUnscopables(isolate));
    v8::Local<v8::Object> unscopables;
    bool has_unscopables;
    if (prototypeObject->HasOwnProperty(context, unscopablesSymbol).To(&has_unscopables) && has_unscopables) {
      unscopables = prototypeObject->Get(context, unscopablesSymbol).ToLocalChecked().As<v8::Object>();
    } else {
      unscopables = v8::Object::New(isolate);
    }
    unscopables->CreateDataProperty(
        context, V8AtomicString(isolate, "after"), v8::True(isolate))
        .FromJust();
    unscopables->CreateDataProperty(
        context, V8AtomicString(isolate, "before"), v8::True(isolate))
        .FromJust();
    unscopables->CreateDataProperty(
        context, V8AtomicString(isolate, "remove"), v8::True(isolate))
        .FromJust();
    unscopables->CreateDataProperty(
        context, V8AtomicString(isolate, "replaceWith"), v8::True(isolate))
        .FromJust();
    prototypeObject->CreateDataProperty(context, unscopablesSymbol, unscopables).FromJust();
  }
}

}  // namespace blink

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_document_fragment.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_collection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_list.h"
#include "third_party/blink/renderer/core/dom/class_collection.h"
#include "third_party/blink/renderer/core/dom/document.h"
#include "third_party/blink/renderer/core/dom/name_node_list.h"
#include "third_party/blink/renderer/core/dom/node_list.h"
#include "third_party/blink/renderer/core/dom/non_element_parent_node.h"
#include "third_party/blink/renderer/core/dom/parent_node.h"
#include "third_party/blink/renderer/core/dom/static_node_list.h"
#include "third_party/blink/renderer/core/dom/tag_collection.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/core/html/forms/html_data_list_options_collection.h"
#include "third_party/blink/renderer/core/html/forms/html_form_controls_collection.h"
#include "third_party/blink/renderer/core/html/forms/labels_node_list.h"
#include "third_party/blink/renderer/core/html/html_collection.h"
#include "third_party/blink/renderer/core/html/html_table_rows_collection.h"
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
const WrapperTypeInfo V8DocumentFragment::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8DocumentFragment::domTemplate,
    V8DocumentFragment::InstallConditionalFeatures,
    "DocumentFragment",
    &V8Node::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DocumentFragment.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DocumentFragment::wrapper_type_info_ = V8DocumentFragment::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DocumentFragment>::value,
    "DocumentFragment inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DocumentFragment::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DocumentFragment is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace DocumentFragmentV8Internal {

static void childrenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DocumentFragment* impl = V8DocumentFragment::ToImpl(holder);

  V8SetReturnValueFast(info, ParentNode::children(*impl), impl);
}

static void childrenAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DocumentFragment* impl = V8DocumentFragment::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, ParentNode::children(*impl));
}

static void firstElementChildAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DocumentFragment* impl = V8DocumentFragment::ToImpl(holder);

  V8SetReturnValueFast(info, ParentNode::firstElementChild(*impl), impl);
}

static void firstElementChildAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DocumentFragment* impl = V8DocumentFragment::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, ParentNode::firstElementChild(*impl));
}

static void lastElementChildAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DocumentFragment* impl = V8DocumentFragment::ToImpl(holder);

  V8SetReturnValueFast(info, ParentNode::lastElementChild(*impl), impl);
}

static void lastElementChildAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DocumentFragment* impl = V8DocumentFragment::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, ParentNode::lastElementChild(*impl));
}

static void childElementCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DocumentFragment* impl = V8DocumentFragment::ToImpl(holder);

  V8SetReturnValueUnsigned(info, ParentNode::childElementCount(*impl));
}

static void getElementByIdMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DocumentFragment* impl = V8DocumentFragment::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getElementById", "DocumentFragment", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> elementId;
  elementId = info[0];
  if (!elementId.Prepare())
    return;

  V8SetReturnValueFast(info, NonElementParentNode::getElementById(*impl, elementId), impl);
}

static void getElementByIdMethodForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DocumentFragment* impl = V8DocumentFragment::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getElementById", "DocumentFragment", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> elementId;
  elementId = info[0];
  if (!elementId.Prepare())
    return;

  V8SetReturnValueForMainWorld(info, NonElementParentNode::getElementById(*impl, elementId));
}

static void prependMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ceReactionsScope;

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DocumentFragment", "prepend");

  DocumentFragment* impl = V8DocumentFragment::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  HeapVector<NodeOrString> nodes;
  nodes = ToImplArguments<NodeOrString>(info, 0, exceptionState);
  if (exceptionState.HadException())
    return;

  ParentNode::prepend(*impl, nodes, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void appendMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ceReactionsScope;

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DocumentFragment", "append");

  DocumentFragment* impl = V8DocumentFragment::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  HeapVector<NodeOrString> nodes;
  nodes = ToImplArguments<NodeOrString>(info, 0, exceptionState);
  if (exceptionState.HadException())
    return;

  ParentNode::append(*impl, nodes, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void querySelectorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DocumentFragment", "querySelector");

  DocumentFragment* impl = V8DocumentFragment::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> selectors;
  selectors = info[0];
  if (!selectors.Prepare())
    return;

  Element* result = ParentNode::querySelector(*impl, selectors, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void querySelectorAllMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DocumentFragment", "querySelectorAll");

  DocumentFragment* impl = V8DocumentFragment::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> selectors;
  selectors = info[0];
  if (!selectors.Prepare())
    return;

  NodeList* result = ParentNode::querySelectorAll(*impl, selectors, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValueFast(info, result, impl);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_ConstructorCallback");

  Document& document = *ToDocument(ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext()));
  DocumentFragment* impl = DocumentFragment::Create(document);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), &V8DocumentFragment::wrapperTypeInfo, wrapper);
  V8SetReturnValue(info, wrapper);
}

} // namespace DocumentFragmentV8Internal

void V8DocumentFragment::childrenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_children_Getter");

  DocumentFragmentV8Internal::childrenAttributeGetter(info);
}

void V8DocumentFragment::childrenAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_children_Getter");

  DocumentFragmentV8Internal::childrenAttributeGetterForMainWorld(info);
}

void V8DocumentFragment::firstElementChildAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_firstElementChild_Getter");

  DocumentFragmentV8Internal::firstElementChildAttributeGetter(info);
}

void V8DocumentFragment::firstElementChildAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_firstElementChild_Getter");

  DocumentFragmentV8Internal::firstElementChildAttributeGetterForMainWorld(info);
}

void V8DocumentFragment::lastElementChildAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_lastElementChild_Getter");

  DocumentFragmentV8Internal::lastElementChildAttributeGetter(info);
}

void V8DocumentFragment::lastElementChildAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_lastElementChild_Getter");

  DocumentFragmentV8Internal::lastElementChildAttributeGetterForMainWorld(info);
}

void V8DocumentFragment::childElementCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_childElementCount_Getter");

  DocumentFragmentV8Internal::childElementCountAttributeGetter(info);
}

void V8DocumentFragment::getElementByIdMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_getElementById");

  DocumentFragmentV8Internal::getElementByIdMethod(info);
}

void V8DocumentFragment::getElementByIdMethodCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_getElementById");

  DocumentFragmentV8Internal::getElementByIdMethodForMainWorld(info);
}

void V8DocumentFragment::prependMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_prepend");

  DocumentFragmentV8Internal::prependMethod(info);
}

void V8DocumentFragment::appendMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_append");

  DocumentFragmentV8Internal::appendMethod(info);
}

void V8DocumentFragment::querySelectorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_querySelector");

  DocumentFragmentV8Internal::querySelectorMethod(info);
}

void V8DocumentFragment::querySelectorAllMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_querySelectorAll");

  DocumentFragmentV8Internal::querySelectorAllMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8DocumentFragmentAccessors[] = {
    { "children", V8DocumentFragment::childrenAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kMainWorld },
    { "children", V8DocumentFragment::childrenAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kNonMainWorlds },
    { "firstElementChild", V8DocumentFragment::firstElementChildAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kMainWorld },
    { "firstElementChild", V8DocumentFragment::firstElementChildAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kNonMainWorlds },
    { "lastElementChild", V8DocumentFragment::lastElementChildAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kMainWorld },
    { "lastElementChild", V8DocumentFragment::lastElementChildAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kNonMainWorlds },
    { "childElementCount", V8DocumentFragment::childElementCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8DocumentFragmentMethods[] = {
    {"getElementById", V8DocumentFragment::getElementByIdMethodCallbackForMainWorld, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kMainWorld},
    {"getElementById", V8DocumentFragment::getElementByIdMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kNonMainWorlds},
    {"prepend", V8DocumentFragment::prependMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"append", V8DocumentFragment::appendMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"querySelector", V8DocumentFragment::querySelectorMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"querySelectorAll", V8DocumentFragment::querySelectorAllMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8DocumentFragment::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("DocumentFragment"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  DocumentFragmentV8Internal::constructor(info);
}

static void installV8DocumentFragmentTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8DocumentFragment::wrapperTypeInfo.interface_name, V8Node::domTemplate(isolate, world), V8DocumentFragment::internalFieldCount);
  interfaceTemplate->SetCallHandler(V8DocumentFragment::constructorCallback);
  interfaceTemplate->SetLength(0);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8DocumentFragmentAccessors, arraysize(V8DocumentFragmentAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8DocumentFragmentMethods, arraysize(V8DocumentFragmentMethods));

  // Custom signature

  V8DocumentFragment::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8DocumentFragment::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8DocumentFragment::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DocumentFragmentTemplate);
}

bool V8DocumentFragment::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DocumentFragment::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DocumentFragment* V8DocumentFragment::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DocumentFragment* NativeValueTraits<DocumentFragment>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DocumentFragment* nativeValue = V8DocumentFragment::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "DocumentFragment"));
  }
  return nativeValue;
}

void V8DocumentFragment::InstallConditionalFeatures(
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
        context, V8AtomicString(isolate, "append"), v8::True(isolate))
        .FromJust();
    unscopables->CreateDataProperty(
        context, V8AtomicString(isolate, "prepend"), v8::True(isolate))
        .FromJust();
    prototypeObject->CreateDataProperty(context, unscopablesSymbol, unscopables).FromJust();
  }
}

}  // namespace blink

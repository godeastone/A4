// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_get_root_node_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_list.h"
#include "third_party/blink/renderer/core/dom/name_node_list.h"
#include "third_party/blink/renderer/core/dom/node_list.h"
#include "third_party/blink/renderer/core/dom/static_node_list.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/core/html/forms/labels_node_list.h"
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
const WrapperTypeInfo V8Node::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8Node::domTemplate,
    nullptr,
    "Node",
    &V8EventTarget::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Node.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& Node::wrapper_type_info_ = V8Node::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Node>::value,
    "Node inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Node::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "Node is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace NodeV8Internal {

static void nodeTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->getNodeType());
}

static void nodeNameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueString(info, impl->nodeName(), info.GetIsolate());
}

static void baseURIAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueString(info, impl->baseURI(), info.GetIsolate());
}

static void isConnectedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueBool(info, impl->isConnected());
}

static void ownerDocumentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->ownerDocument()), impl);
}

static void ownerDocumentAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, WTF::GetPtr(impl->ownerDocument()));
}

static void parentNodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->parentNode()), impl);
}

static void parentNodeAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, WTF::GetPtr(impl->parentNode()));
}

static void parentElementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->parentElement()), impl);
}

static void parentElementAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, WTF::GetPtr(impl->parentElement()));
}

static void childNodesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->childNodes()), impl);
}

static void childNodesAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, WTF::GetPtr(impl->childNodes()));
}

static void firstChildAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->firstChild()), impl);
}

static void firstChildAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, WTF::GetPtr(impl->firstChild()));
}

static void lastChildAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->lastChild()), impl);
}

static void lastChildAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, WTF::GetPtr(impl->lastChild()));
}

static void previousSiblingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->previousSibling()), impl);
}

static void previousSiblingAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, WTF::GetPtr(impl->previousSibling()));
}

static void nextSiblingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->nextSibling()), impl);
}

static void nextSiblingAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, WTF::GetPtr(impl->nextSibling()));
}

static void nodeValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->nodeValue(), info.GetIsolate());
}

static void nodeValueAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Node* impl = V8Node::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setNodeValue(cppValue);
}

static void textContentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->textContent(), info.GetIsolate());
}

static void textContentAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Node* impl = V8Node::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setTextContent(cppValue);
}

static void hasChildNodesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Node* impl = V8Node::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->hasChildren());
}

static void getRootNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Node", "getRootNode");

  Node* impl = V8Node::ToImpl(info.Holder());

  GetRootNodeOptions options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  V8GetRootNodeOptions::ToImpl(info.GetIsolate(), info[0], options, exceptionState);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueFast(info, impl->getRootNode(options), impl);
}

static void normalizeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ceReactionsScope;

  Node* impl = V8Node::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  impl->normalize();
}

static void cloneNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ceReactionsScope;

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Node", "cloneNode");

  Node* impl = V8Node::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  bool deep;
  if (!info[0]->IsUndefined()) {
    deep = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    deep = false;
  }

  Node* result = impl->cloneNode(deep, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void isEqualNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Node* impl = V8Node::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isEqualNode", "Node", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* otherNode;
  otherNode = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!otherNode && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isEqualNode", "Node", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isEqualNode(otherNode));
}

static void isSameNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Node* impl = V8Node::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isSameNode", "Node", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* otherNode;
  otherNode = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!otherNode && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isSameNode", "Node", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isSameNode(otherNode));
}

static void compareDocumentPositionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Node* impl = V8Node::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("compareDocumentPosition", "Node", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* other;
  other = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!other) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("compareDocumentPosition", "Node", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->compareDocumentPosition(other));
}

static void containsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Node* impl = V8Node::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("contains", "Node", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* other;
  other = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!other && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("contains", "Node", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValueBool(info, impl->contains(other));
}

static void lookupPrefixMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Node* impl = V8Node::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("lookupPrefix", "Node", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> namespaceURI;
  namespaceURI = info[0];
  if (!namespaceURI.Prepare())
    return;

  V8SetReturnValueStringOrNull(info, impl->lookupPrefix(namespaceURI), info.GetIsolate());
}

static void lookupNamespaceURIMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Node* impl = V8Node::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("lookupNamespaceURI", "Node", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> prefix;
  prefix = info[0];
  if (!prefix.Prepare())
    return;

  V8SetReturnValueStringOrNull(info, impl->lookupNamespaceURI(prefix), info.GetIsolate());
}

static void isDefaultNamespaceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Node* impl = V8Node::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isDefaultNamespace", "Node", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> namespaceURI;
  namespaceURI = info[0];
  if (!namespaceURI.Prepare())
    return;

  V8SetReturnValueBool(info, impl->isDefaultNamespace(namespaceURI));
}

static void insertBeforeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ceReactionsScope;

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Node", "insertBefore");

  Node* impl = V8Node::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* node;
  Node* child;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  child = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!child && !IsUndefinedOrNull(info[1])) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Node'.");
    return;
  }

  Node* result = impl->insertBefore(node, child, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void insertBeforeMethodForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ceReactionsScope;

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Node", "insertBefore");

  Node* impl = V8Node::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* node;
  Node* child;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  child = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!child && !IsUndefinedOrNull(info[1])) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Node'.");
    return;
  }

  Node* result = impl->insertBefore(node, child, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueForMainWorld(info, result);
}

static void appendChildMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ceReactionsScope;

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Node", "appendChild");

  Node* impl = V8Node::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  Node* result = impl->appendChild(node, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void appendChildMethodForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ceReactionsScope;

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Node", "appendChild");

  Node* impl = V8Node::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  Node* result = impl->appendChild(node, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueForMainWorld(info, result);
}

static void replaceChildMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ceReactionsScope;

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Node", "replaceChild");

  Node* impl = V8Node::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* node;
  Node* child;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  child = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!child) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Node'.");
    return;
  }

  Node* result = impl->replaceChild(node, child, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void replaceChildMethodForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ceReactionsScope;

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Node", "replaceChild");

  Node* impl = V8Node::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* node;
  Node* child;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  child = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!child) {
    exceptionState.ThrowTypeError("parameter 2 is not of type 'Node'.");
    return;
  }

  Node* result = impl->replaceChild(node, child, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueForMainWorld(info, result);
}

static void removeChildMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ceReactionsScope;

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Node", "removeChild");

  Node* impl = V8Node::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* child;
  child = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!child) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  Node* result = impl->removeChild(child, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

} // namespace NodeV8Internal

void V8Node::nodeTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_nodeType_Getter");

  NodeV8Internal::nodeTypeAttributeGetter(info);
}

void V8Node::nodeNameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE(info.GetIsolate(), RuntimeCallStats::CounterId::kNodeName_Getter);

  NodeV8Internal::nodeNameAttributeGetter(info);
}

void V8Node::baseURIAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_baseURI_Getter");

  NodeV8Internal::baseURIAttributeGetter(info);
}

void V8Node::isConnectedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_isConnected_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8Node_IsConnected_AttributeGetter);

  NodeV8Internal::isConnectedAttributeGetter(info);
}

void V8Node::ownerDocumentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_ownerDocument_Getter");

  NodeV8Internal::ownerDocumentAttributeGetter(info);
}

void V8Node::ownerDocumentAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_ownerDocument_Getter");

  NodeV8Internal::ownerDocumentAttributeGetterForMainWorld(info);
}

void V8Node::parentNodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_parentNode_Getter");

  NodeV8Internal::parentNodeAttributeGetter(info);
}

void V8Node::parentNodeAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_parentNode_Getter");

  NodeV8Internal::parentNodeAttributeGetterForMainWorld(info);
}

void V8Node::parentElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_parentElement_Getter");

  NodeV8Internal::parentElementAttributeGetter(info);
}

void V8Node::parentElementAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_parentElement_Getter");

  NodeV8Internal::parentElementAttributeGetterForMainWorld(info);
}

void V8Node::childNodesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_childNodes_Getter");

  NodeV8Internal::childNodesAttributeGetter(info);
}

void V8Node::childNodesAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_childNodes_Getter");

  NodeV8Internal::childNodesAttributeGetterForMainWorld(info);
}

void V8Node::firstChildAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_firstChild_Getter");

  NodeV8Internal::firstChildAttributeGetter(info);
}

void V8Node::firstChildAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_firstChild_Getter");

  NodeV8Internal::firstChildAttributeGetterForMainWorld(info);
}

void V8Node::lastChildAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_lastChild_Getter");

  NodeV8Internal::lastChildAttributeGetter(info);
}

void V8Node::lastChildAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_lastChild_Getter");

  NodeV8Internal::lastChildAttributeGetterForMainWorld(info);
}

void V8Node::previousSiblingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_previousSibling_Getter");

  NodeV8Internal::previousSiblingAttributeGetter(info);
}

void V8Node::previousSiblingAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_previousSibling_Getter");

  NodeV8Internal::previousSiblingAttributeGetterForMainWorld(info);
}

void V8Node::nextSiblingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_nextSibling_Getter");

  NodeV8Internal::nextSiblingAttributeGetter(info);
}

void V8Node::nextSiblingAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_nextSibling_Getter");

  NodeV8Internal::nextSiblingAttributeGetterForMainWorld(info);
}

void V8Node::nodeValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_nodeValue_Getter");

  NodeV8Internal::nodeValueAttributeGetter(info);
}

void V8Node::nodeValueAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_nodeValue_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  NodeV8Internal::nodeValueAttributeSetter(v8Value, info);
}

void V8Node::textContentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_textContent_Getter");

  NodeV8Internal::textContentAttributeGetter(info);
}

void V8Node::textContentAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_textContent_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  NodeV8Internal::textContentAttributeSetter(v8Value, info);
}

void V8Node::hasChildNodesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_hasChildNodes");

  NodeV8Internal::hasChildNodesMethod(info);
}

void V8Node::getRootNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_getRootNode");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kNodeGetRootNode);
  NodeV8Internal::getRootNodeMethod(info);
}

void V8Node::normalizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_normalize");

  NodeV8Internal::normalizeMethod(info);
}

void V8Node::cloneNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_cloneNode");

  NodeV8Internal::cloneNodeMethod(info);
}

void V8Node::isEqualNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_isEqualNode");

  NodeV8Internal::isEqualNodeMethod(info);
}

void V8Node::isSameNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_isSameNode");

  NodeV8Internal::isSameNodeMethod(info);
}

void V8Node::compareDocumentPositionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_compareDocumentPosition");

  NodeV8Internal::compareDocumentPositionMethod(info);
}

void V8Node::containsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_contains");

  NodeV8Internal::containsMethod(info);
}

void V8Node::lookupPrefixMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_lookupPrefix");

  NodeV8Internal::lookupPrefixMethod(info);
}

void V8Node::lookupNamespaceURIMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_lookupNamespaceURI");

  NodeV8Internal::lookupNamespaceURIMethod(info);
}

void V8Node::isDefaultNamespaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_isDefaultNamespace");

  NodeV8Internal::isDefaultNamespaceMethod(info);
}

void V8Node::insertBeforeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_insertBefore");

  NodeV8Internal::insertBeforeMethod(info);
}

void V8Node::insertBeforeMethodCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_insertBefore");

  NodeV8Internal::insertBeforeMethodForMainWorld(info);
}

void V8Node::appendChildMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE(info.GetIsolate(), RuntimeCallStats::CounterId::kNodeAppendChild);
  NodeV8Internal::appendChildMethod(info);
}

void V8Node::appendChildMethodCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE(info.GetIsolate(), RuntimeCallStats::CounterId::kNodeAppendChild);
  NodeV8Internal::appendChildMethodForMainWorld(info);
}

void V8Node::replaceChildMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_replaceChild");

  NodeV8Internal::replaceChildMethod(info);
}

void V8Node::replaceChildMethodCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_replaceChild");

  NodeV8Internal::replaceChildMethodForMainWorld(info);
}

void V8Node::removeChildMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE(info.GetIsolate(), RuntimeCallStats::CounterId::kNodeRemoveChild);
  NodeV8Internal::removeChildMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8NodeAccessors[] = {
    { "nodeType", V8Node::nodeTypeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds },
    { "nodeName", V8Node::nodeNameAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds },
    { "baseURI", V8Node::baseURIAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "isConnected", V8Node::isConnectedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ownerDocument", V8Node::ownerDocumentAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kMainWorld },
    { "ownerDocument", V8Node::ownerDocumentAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kNonMainWorlds },
    { "parentNode", V8Node::parentNodeAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kMainWorld },
    { "parentNode", V8Node::parentNodeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kNonMainWorlds },
    { "parentElement", V8Node::parentElementAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kMainWorld },
    { "parentElement", V8Node::parentElementAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kNonMainWorlds },
    { "childNodes", V8Node::childNodesAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kMainWorld },
    { "childNodes", V8Node::childNodesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kNonMainWorlds },
    { "firstChild", V8Node::firstChildAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kMainWorld },
    { "firstChild", V8Node::firstChildAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kNonMainWorlds },
    { "lastChild", V8Node::lastChildAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kMainWorld },
    { "lastChild", V8Node::lastChildAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kNonMainWorlds },
    { "previousSibling", V8Node::previousSiblingAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kMainWorld },
    { "previousSibling", V8Node::previousSiblingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kNonMainWorlds },
    { "nextSibling", V8Node::nextSiblingAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kMainWorld },
    { "nextSibling", V8Node::nextSiblingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kNonMainWorlds },
    { "nodeValue", V8Node::nodeValueAttributeGetterCallback, V8Node::nodeValueAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds },
    { "textContent", V8Node::textContentAttributeGetterCallback, V8Node::textContentAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8NodeMethods[] = {
    {"hasChildNodes", V8Node::hasChildNodesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getRootNode", V8Node::getRootNodeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"normalize", V8Node::normalizeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"cloneNode", V8Node::cloneNodeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isEqualNode", V8Node::isEqualNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isSameNode", V8Node::isSameNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"compareDocumentPosition", V8Node::compareDocumentPositionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"contains", V8Node::containsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"lookupPrefix", V8Node::lookupPrefixMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"lookupNamespaceURI", V8Node::lookupNamespaceURIMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isDefaultNamespace", V8Node::isDefaultNamespaceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"insertBefore", V8Node::insertBeforeMethodCallbackForMainWorld, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kMainWorld},
    {"insertBefore", V8Node::insertBeforeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kNonMainWorlds},
    {"appendChild", V8Node::appendChildMethodCallbackForMainWorld, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kMainWorld},
    {"appendChild", V8Node::appendChildMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kNonMainWorlds},
    {"replaceChild", V8Node::replaceChildMethodCallbackForMainWorld, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kMainWorld},
    {"replaceChild", V8Node::replaceChildMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kNonMainWorlds},
    {"removeChild", V8Node::removeChildMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8NodeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Node::wrapperTypeInfo.interface_name, V8EventTarget::domTemplate(isolate, world), V8Node::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  static constexpr V8DOMConfiguration::ConstantConfiguration V8NodeConstants[] = {
      {"ELEMENT_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
      {"ATTRIBUTE_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
      {"TEXT_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
      {"CDATA_SECTION_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
      {"ENTITY_REFERENCE_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(5)},
      {"ENTITY_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(6)},
      {"PROCESSING_INSTRUCTION_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(7)},
      {"COMMENT_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(8)},
      {"DOCUMENT_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(9)},
      {"DOCUMENT_TYPE_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(10)},
      {"DOCUMENT_FRAGMENT_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(11)},
      {"NOTATION_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(12)},
      {"DOCUMENT_POSITION_DISCONNECTED", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0x01)},
      {"DOCUMENT_POSITION_PRECEDING", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0x02)},
      {"DOCUMENT_POSITION_FOLLOWING", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0x04)},
      {"DOCUMENT_POSITION_CONTAINS", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0x08)},
      {"DOCUMENT_POSITION_CONTAINED_BY", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0x10)},
      {"DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0x20)},
  };
  V8DOMConfiguration::InstallConstants(
      isolate, interfaceTemplate, prototypeTemplate,
      V8NodeConstants, arraysize(V8NodeConstants));
  static_assert(1 == Node::kElementNode, "the value of Node_kElementNode does not match with implementation");
  static_assert(2 == Node::kAttributeNode, "the value of Node_kAttributeNode does not match with implementation");
  static_assert(3 == Node::kTextNode, "the value of Node_kTextNode does not match with implementation");
  static_assert(4 == Node::kCdataSectionNode, "the value of Node_kCdataSectionNode does not match with implementation");
  static_assert(5 == Node::kEntityReferenceNode, "the value of Node_kEntityReferenceNode does not match with implementation");
  static_assert(6 == Node::kEntityNode, "the value of Node_kEntityNode does not match with implementation");
  static_assert(7 == Node::kProcessingInstructionNode, "the value of Node_kProcessingInstructionNode does not match with implementation");
  static_assert(8 == Node::kCommentNode, "the value of Node_kCommentNode does not match with implementation");
  static_assert(9 == Node::kDocumentNode, "the value of Node_kDocumentNode does not match with implementation");
  static_assert(10 == Node::kDocumentTypeNode, "the value of Node_kDocumentTypeNode does not match with implementation");
  static_assert(11 == Node::kDocumentFragmentNode, "the value of Node_kDocumentFragmentNode does not match with implementation");
  static_assert(12 == Node::kNotationNode, "the value of Node_kNotationNode does not match with implementation");
  static_assert(0x01 == Node::kDocumentPositionDisconnected, "the value of Node_kDocumentPositionDisconnected does not match with implementation");
  static_assert(0x02 == Node::kDocumentPositionPreceding, "the value of Node_kDocumentPositionPreceding does not match with implementation");
  static_assert(0x04 == Node::kDocumentPositionFollowing, "the value of Node_kDocumentPositionFollowing does not match with implementation");
  static_assert(0x08 == Node::kDocumentPositionContains, "the value of Node_kDocumentPositionContains does not match with implementation");
  static_assert(0x10 == Node::kDocumentPositionContainedBy, "the value of Node_kDocumentPositionContainedBy does not match with implementation");
  static_assert(0x20 == Node::kDocumentPositionImplementationSpecific, "the value of Node_kDocumentPositionImplementationSpecific does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8NodeAccessors, arraysize(V8NodeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8NodeMethods, arraysize(V8NodeMethods));

  // Custom signature

  V8Node::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8Node::InstallRuntimeEnabledFeaturesOnTemplate(
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

void V8Node::InstallRuntimeEnabledFeatures(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  InstallRuntimeEnabledFeaturesImpl(isolate, world, instance, prototype, interface);
}

void V8Node::InstallRuntimeEnabledFeaturesImpl(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template = V8Node::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
}

v8::Local<v8::FunctionTemplate> V8Node::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8NodeTemplate);
}

bool V8Node::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Node::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Node* V8Node::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

Node* NativeValueTraits<Node>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  Node* nativeValue = V8Node::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Node"));
  }
  return nativeValue;
}

}  // namespace blink

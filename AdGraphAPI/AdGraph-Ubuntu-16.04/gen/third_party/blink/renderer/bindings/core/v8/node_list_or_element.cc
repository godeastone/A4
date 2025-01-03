// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/node_list_or_element.h"

#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_list.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/dom/child_node.h"
#include "third_party/blink/renderer/core/dom/name_node_list.h"
#include "third_party/blink/renderer/core/dom/node_list.h"
#include "third_party/blink/renderer/core/dom/non_document_type_child_node.h"
#include "third_party/blink/renderer/core/dom/parent_node.h"
#include "third_party/blink/renderer/core/dom/static_node_list.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
#include "third_party/blink/renderer/core/html/forms/labels_node_list.h"

namespace blink {

NodeListOrElement::NodeListOrElement() : type_(SpecificType::kNone) {}

Element* NodeListOrElement::GetAsElement() const {
  DCHECK(IsElement());
  return element_;
}

void NodeListOrElement::SetElement(Element* value) {
  DCHECK(IsNull());
  element_ = value;
  type_ = SpecificType::kElement;
}

NodeListOrElement NodeListOrElement::FromElement(Element* value) {
  NodeListOrElement container;
  container.SetElement(value);
  return container;
}

NodeList* NodeListOrElement::GetAsNodeList() const {
  DCHECK(IsNodeList());
  return node_list_;
}

void NodeListOrElement::SetNodeList(NodeList* value) {
  DCHECK(IsNull());
  node_list_ = value;
  type_ = SpecificType::kNodeList;
}

NodeListOrElement NodeListOrElement::FromNodeList(NodeList* value) {
  NodeListOrElement container;
  container.SetNodeList(value);
  return container;
}

NodeListOrElement::NodeListOrElement(const NodeListOrElement&) = default;
NodeListOrElement::~NodeListOrElement() = default;
NodeListOrElement& NodeListOrElement::operator=(const NodeListOrElement&) = default;

void NodeListOrElement::Trace(blink::Visitor* visitor) {
  visitor->Trace(element_);
  visitor->Trace(node_list_);
}

void V8NodeListOrElement::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, NodeListOrElement& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (V8Element::hasInstance(v8Value, isolate)) {
    Element* cppValue = V8Element::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetElement(cppValue);
    return;
  }

  if (V8NodeList::hasInstance(v8Value, isolate)) {
    NodeList* cppValue = V8NodeList::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetNodeList(cppValue);
    return;
  }

  exceptionState.ThrowTypeError("The provided value is not of type '(NodeList or Element)'");
}

v8::Local<v8::Value> ToV8(const NodeListOrElement& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case NodeListOrElement::SpecificType::kNone:
      return v8::Null(isolate);
    case NodeListOrElement::SpecificType::kElement:
      return ToV8(impl.GetAsElement(), creationContext, isolate);
    case NodeListOrElement::SpecificType::kNodeList:
      return ToV8(impl.GetAsNodeList(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

NodeListOrElement NativeValueTraits<NodeListOrElement>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  NodeListOrElement impl;
  V8NodeListOrElement::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink

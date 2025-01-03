// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/node_or_string.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"

namespace blink {

NodeOrString::NodeOrString() : type_(SpecificType::kNone) {}

Node* NodeOrString::GetAsNode() const {
  DCHECK(IsNode());
  return node_;
}

void NodeOrString::SetNode(Node* value) {
  DCHECK(IsNull());
  node_ = value;
  type_ = SpecificType::kNode;
}

NodeOrString NodeOrString::FromNode(Node* value) {
  NodeOrString container;
  container.SetNode(value);
  return container;
}

const String& NodeOrString::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void NodeOrString::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

NodeOrString NodeOrString::FromString(const String& value) {
  NodeOrString container;
  container.SetString(value);
  return container;
}

NodeOrString::NodeOrString(const NodeOrString&) = default;
NodeOrString::~NodeOrString() = default;
NodeOrString& NodeOrString::operator=(const NodeOrString&) = default;

void NodeOrString::Trace(blink::Visitor* visitor) {
  visitor->Trace(node_);
}

void V8NodeOrString::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, NodeOrString& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (V8Node::hasInstance(v8Value, isolate)) {
    Node* cppValue = V8Node::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetNode(cppValue);
    return;
  }

  {
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.Prepare(exceptionState))
      return;
    impl.SetString(cppValue);
    return;
  }
}

v8::Local<v8::Value> ToV8(const NodeOrString& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case NodeOrString::SpecificType::kNone:
      return v8::Null(isolate);
    case NodeOrString::SpecificType::kNode:
      return ToV8(impl.GetAsNode(), creationContext, isolate);
    case NodeOrString::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

NodeOrString NativeValueTraits<NodeOrString>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  NodeOrString impl;
  V8NodeOrString::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink

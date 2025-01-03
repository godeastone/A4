// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/radio_node_list_or_element.h"

#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_radio_node_list.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/dom/child_node.h"
#include "third_party/blink/renderer/core/dom/non_document_type_child_node.h"
#include "third_party/blink/renderer/core/dom/parent_node.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"

namespace blink {

RadioNodeListOrElement::RadioNodeListOrElement() : type_(SpecificType::kNone) {}

Element* RadioNodeListOrElement::GetAsElement() const {
  DCHECK(IsElement());
  return element_;
}

void RadioNodeListOrElement::SetElement(Element* value) {
  DCHECK(IsNull());
  element_ = value;
  type_ = SpecificType::kElement;
}

RadioNodeListOrElement RadioNodeListOrElement::FromElement(Element* value) {
  RadioNodeListOrElement container;
  container.SetElement(value);
  return container;
}

RadioNodeList* RadioNodeListOrElement::GetAsRadioNodeList() const {
  DCHECK(IsRadioNodeList());
  return radio_node_list_;
}

void RadioNodeListOrElement::SetRadioNodeList(RadioNodeList* value) {
  DCHECK(IsNull());
  radio_node_list_ = value;
  type_ = SpecificType::kRadioNodeList;
}

RadioNodeListOrElement RadioNodeListOrElement::FromRadioNodeList(RadioNodeList* value) {
  RadioNodeListOrElement container;
  container.SetRadioNodeList(value);
  return container;
}

RadioNodeListOrElement::RadioNodeListOrElement(const RadioNodeListOrElement&) = default;
RadioNodeListOrElement::~RadioNodeListOrElement() = default;
RadioNodeListOrElement& RadioNodeListOrElement::operator=(const RadioNodeListOrElement&) = default;

void RadioNodeListOrElement::Trace(blink::Visitor* visitor) {
  visitor->Trace(element_);
  visitor->Trace(radio_node_list_);
}

void V8RadioNodeListOrElement::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, RadioNodeListOrElement& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (V8Element::hasInstance(v8Value, isolate)) {
    Element* cppValue = V8Element::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetElement(cppValue);
    return;
  }

  if (V8RadioNodeList::hasInstance(v8Value, isolate)) {
    RadioNodeList* cppValue = V8RadioNodeList::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetRadioNodeList(cppValue);
    return;
  }

  exceptionState.ThrowTypeError("The provided value is not of type '(RadioNodeList or Element)'");
}

v8::Local<v8::Value> ToV8(const RadioNodeListOrElement& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case RadioNodeListOrElement::SpecificType::kNone:
      return v8::Null(isolate);
    case RadioNodeListOrElement::SpecificType::kElement:
      return ToV8(impl.GetAsElement(), creationContext, isolate);
    case RadioNodeListOrElement::SpecificType::kRadioNodeList:
      return ToV8(impl.GetAsRadioNodeList(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

RadioNodeListOrElement NativeValueTraits<RadioNodeListOrElement>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  RadioNodeListOrElement impl;
  V8RadioNodeListOrElement::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink

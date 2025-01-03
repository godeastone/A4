// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/html_collection_or_element.h"

#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_collection.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/dom/child_node.h"
#include "third_party/blink/renderer/core/dom/class_collection.h"
#include "third_party/blink/renderer/core/dom/non_document_type_child_node.h"
#include "third_party/blink/renderer/core/dom/parent_node.h"
#include "third_party/blink/renderer/core/dom/tag_collection.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
#include "third_party/blink/renderer/core/html/forms/html_data_list_options_collection.h"
#include "third_party/blink/renderer/core/html/forms/html_form_controls_collection.h"
#include "third_party/blink/renderer/core/html/html_collection.h"
#include "third_party/blink/renderer/core/html/html_table_rows_collection.h"

namespace blink {

HTMLCollectionOrElement::HTMLCollectionOrElement() : type_(SpecificType::kNone) {}

Element* HTMLCollectionOrElement::GetAsElement() const {
  DCHECK(IsElement());
  return element_;
}

void HTMLCollectionOrElement::SetElement(Element* value) {
  DCHECK(IsNull());
  element_ = value;
  type_ = SpecificType::kElement;
}

HTMLCollectionOrElement HTMLCollectionOrElement::FromElement(Element* value) {
  HTMLCollectionOrElement container;
  container.SetElement(value);
  return container;
}

HTMLCollection* HTMLCollectionOrElement::GetAsHTMLCollection() const {
  DCHECK(IsHTMLCollection());
  return html_collection_;
}

void HTMLCollectionOrElement::SetHTMLCollection(HTMLCollection* value) {
  DCHECK(IsNull());
  html_collection_ = value;
  type_ = SpecificType::kHTMLCollection;
}

HTMLCollectionOrElement HTMLCollectionOrElement::FromHTMLCollection(HTMLCollection* value) {
  HTMLCollectionOrElement container;
  container.SetHTMLCollection(value);
  return container;
}

HTMLCollectionOrElement::HTMLCollectionOrElement(const HTMLCollectionOrElement&) = default;
HTMLCollectionOrElement::~HTMLCollectionOrElement() = default;
HTMLCollectionOrElement& HTMLCollectionOrElement::operator=(const HTMLCollectionOrElement&) = default;

void HTMLCollectionOrElement::Trace(blink::Visitor* visitor) {
  visitor->Trace(element_);
  visitor->Trace(html_collection_);
}

void V8HTMLCollectionOrElement::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, HTMLCollectionOrElement& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (V8Element::hasInstance(v8Value, isolate)) {
    Element* cppValue = V8Element::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetElement(cppValue);
    return;
  }

  if (V8HTMLCollection::hasInstance(v8Value, isolate)) {
    HTMLCollection* cppValue = V8HTMLCollection::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetHTMLCollection(cppValue);
    return;
  }

  exceptionState.ThrowTypeError("The provided value is not of type '(HTMLCollection or Element)'");
}

v8::Local<v8::Value> ToV8(const HTMLCollectionOrElement& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case HTMLCollectionOrElement::SpecificType::kNone:
      return v8::Null(isolate);
    case HTMLCollectionOrElement::SpecificType::kElement:
      return ToV8(impl.GetAsElement(), creationContext, isolate);
    case HTMLCollectionOrElement::SpecificType::kHTMLCollection:
      return ToV8(impl.GetAsHTMLCollection(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

HTMLCollectionOrElement NativeValueTraits<HTMLCollectionOrElement>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  HTMLCollectionOrElement impl;
  V8HTMLCollectionOrElement::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink

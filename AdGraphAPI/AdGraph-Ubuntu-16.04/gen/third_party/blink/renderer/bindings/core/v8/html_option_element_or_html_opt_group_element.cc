// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/html_option_element_or_html_opt_group_element.h"

#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_opt_group_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_option_element.h"

namespace blink {

HTMLOptionElementOrHTMLOptGroupElement::HTMLOptionElementOrHTMLOptGroupElement() : type_(SpecificType::kNone) {}

HTMLOptGroupElement* HTMLOptionElementOrHTMLOptGroupElement::GetAsHTMLOptGroupElement() const {
  DCHECK(IsHTMLOptGroupElement());
  return html_opt_group_element_;
}

void HTMLOptionElementOrHTMLOptGroupElement::SetHTMLOptGroupElement(HTMLOptGroupElement* value) {
  DCHECK(IsNull());
  html_opt_group_element_ = value;
  type_ = SpecificType::kHTMLOptGroupElement;
}

HTMLOptionElementOrHTMLOptGroupElement HTMLOptionElementOrHTMLOptGroupElement::FromHTMLOptGroupElement(HTMLOptGroupElement* value) {
  HTMLOptionElementOrHTMLOptGroupElement container;
  container.SetHTMLOptGroupElement(value);
  return container;
}

HTMLOptionElement* HTMLOptionElementOrHTMLOptGroupElement::GetAsHTMLOptionElement() const {
  DCHECK(IsHTMLOptionElement());
  return html_option_element_;
}

void HTMLOptionElementOrHTMLOptGroupElement::SetHTMLOptionElement(HTMLOptionElement* value) {
  DCHECK(IsNull());
  html_option_element_ = value;
  type_ = SpecificType::kHTMLOptionElement;
}

HTMLOptionElementOrHTMLOptGroupElement HTMLOptionElementOrHTMLOptGroupElement::FromHTMLOptionElement(HTMLOptionElement* value) {
  HTMLOptionElementOrHTMLOptGroupElement container;
  container.SetHTMLOptionElement(value);
  return container;
}

HTMLOptionElementOrHTMLOptGroupElement::HTMLOptionElementOrHTMLOptGroupElement(const HTMLOptionElementOrHTMLOptGroupElement&) = default;
HTMLOptionElementOrHTMLOptGroupElement::~HTMLOptionElementOrHTMLOptGroupElement() = default;
HTMLOptionElementOrHTMLOptGroupElement& HTMLOptionElementOrHTMLOptGroupElement::operator=(const HTMLOptionElementOrHTMLOptGroupElement&) = default;

void HTMLOptionElementOrHTMLOptGroupElement::Trace(blink::Visitor* visitor) {
  visitor->Trace(html_opt_group_element_);
  visitor->Trace(html_option_element_);
}

void V8HTMLOptionElementOrHTMLOptGroupElement::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, HTMLOptionElementOrHTMLOptGroupElement& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (V8HTMLOptGroupElement::hasInstance(v8Value, isolate)) {
    HTMLOptGroupElement* cppValue = V8HTMLOptGroupElement::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetHTMLOptGroupElement(cppValue);
    return;
  }

  if (V8HTMLOptionElement::hasInstance(v8Value, isolate)) {
    HTMLOptionElement* cppValue = V8HTMLOptionElement::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetHTMLOptionElement(cppValue);
    return;
  }

  exceptionState.ThrowTypeError("The provided value is not of type '(HTMLOptionElement or HTMLOptGroupElement)'");
}

v8::Local<v8::Value> ToV8(const HTMLOptionElementOrHTMLOptGroupElement& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case HTMLOptionElementOrHTMLOptGroupElement::SpecificType::kNone:
      return v8::Null(isolate);
    case HTMLOptionElementOrHTMLOptGroupElement::SpecificType::kHTMLOptGroupElement:
      return ToV8(impl.GetAsHTMLOptGroupElement(), creationContext, isolate);
    case HTMLOptionElementOrHTMLOptGroupElement::SpecificType::kHTMLOptionElement:
      return ToV8(impl.GetAsHTMLOptionElement(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

HTMLOptionElementOrHTMLOptGroupElement NativeValueTraits<HTMLOptionElementOrHTMLOptGroupElement>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  HTMLOptionElementOrHTMLOptGroupElement impl;
  V8HTMLOptionElementOrHTMLOptGroupElement::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/html_element_or_long.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_element.h"
#include "third_party/blink/renderer/core/dom/global_event_handlers.h"

namespace blink {

HTMLElementOrLong::HTMLElementOrLong() : type_(SpecificType::kNone) {}

HTMLElement* HTMLElementOrLong::GetAsHTMLElement() const {
  DCHECK(IsHTMLElement());
  return html_element_;
}

void HTMLElementOrLong::SetHTMLElement(HTMLElement* value) {
  DCHECK(IsNull());
  html_element_ = value;
  type_ = SpecificType::kHTMLElement;
}

HTMLElementOrLong HTMLElementOrLong::FromHTMLElement(HTMLElement* value) {
  HTMLElementOrLong container;
  container.SetHTMLElement(value);
  return container;
}

int32_t HTMLElementOrLong::GetAsLong() const {
  DCHECK(IsLong());
  return long_;
}

void HTMLElementOrLong::SetLong(int32_t value) {
  DCHECK(IsNull());
  long_ = value;
  type_ = SpecificType::kLong;
}

HTMLElementOrLong HTMLElementOrLong::FromLong(int32_t value) {
  HTMLElementOrLong container;
  container.SetLong(value);
  return container;
}

HTMLElementOrLong::HTMLElementOrLong(const HTMLElementOrLong&) = default;
HTMLElementOrLong::~HTMLElementOrLong() = default;
HTMLElementOrLong& HTMLElementOrLong::operator=(const HTMLElementOrLong&) = default;

void HTMLElementOrLong::Trace(blink::Visitor* visitor) {
  visitor->Trace(html_element_);
}

void V8HTMLElementOrLong::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, HTMLElementOrLong& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (V8HTMLElement::hasInstance(v8Value, isolate)) {
    HTMLElement* cppValue = V8HTMLElement::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetHTMLElement(cppValue);
    return;
  }

  if (v8Value->IsNumber()) {
    int32_t cppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, v8Value, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.SetLong(cppValue);
    return;
  }

  {
    int32_t cppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, v8Value, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.SetLong(cppValue);
    return;
  }
}

v8::Local<v8::Value> ToV8(const HTMLElementOrLong& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case HTMLElementOrLong::SpecificType::kNone:
      return v8::Null(isolate);
    case HTMLElementOrLong::SpecificType::kHTMLElement:
      return ToV8(impl.GetAsHTMLElement(), creationContext, isolate);
    case HTMLElementOrLong::SpecificType::kLong:
      return v8::Integer::New(isolate, impl.GetAsLong());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

HTMLElementOrLong NativeValueTraits<HTMLElementOrLong>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  HTMLElementOrLong impl;
  V8HTMLElementOrLong::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink

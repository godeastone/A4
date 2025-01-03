// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8CSSStyleDeclaration_h
#define V8CSSStyleDeclaration_h

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/string_or_float.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/css/css_style_declaration.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class V8CSSStyleDeclaration {
  STATIC_ONLY(V8CSSStyleDeclaration);
 public:
  CORE_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  CORE_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static CSSStyleDeclaration* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<CSSStyleDeclaration>();
  }
  CORE_EXPORT static CSSStyleDeclaration* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
  CORE_EXPORT static const WrapperTypeInfo wrapperTypeInfo;
  static const int internalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  CORE_EXPORT static void cssTextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void cssTextAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void parentRuleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void cssFloatAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void cssFloatAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  CORE_EXPORT static void itemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void getPropertyValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void getPropertyPriorityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void setPropertyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void removePropertyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  CORE_EXPORT static void namedPropertyGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void namedPropertySetterCallback(v8::Local<v8::Name>, v8::Local<v8::Value>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void namedPropertyQueryCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Integer>&);
  CORE_EXPORT static void namedPropertyEnumeratorCallback(const v8::PropertyCallbackInfo<v8::Array>&);
  CORE_EXPORT static void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void indexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void indexedPropertyDescriptorCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void indexedPropertyDefinerCallback(uint32_t index, const v8::PropertyDescriptor&, const v8::PropertyCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<CSSStyleDeclaration> : public NativeValueTraitsBase<CSSStyleDeclaration> {
  CORE_EXPORT static CSSStyleDeclaration* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static CSSStyleDeclaration* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<CSSStyleDeclaration> {
  typedef V8CSSStyleDeclaration Type;
};

}  // namespace blink

#endif  // V8CSSStyleDeclaration_h

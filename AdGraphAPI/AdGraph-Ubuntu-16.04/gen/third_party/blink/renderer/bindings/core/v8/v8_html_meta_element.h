// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8HTMLMetaElement_h
#define V8HTMLMetaElement_h

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_element.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/html/html_meta_element.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class V8HTMLMetaElement {
  STATIC_ONLY(V8HTMLMetaElement);
 public:
  CORE_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  CORE_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static HTMLMetaElement* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<HTMLMetaElement>();
  }
  CORE_EXPORT static HTMLMetaElement* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
  CORE_EXPORT static const WrapperTypeInfo wrapperTypeInfo;
  static const int internalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions
  CORE_EXPORT static void constructorCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  CORE_EXPORT static void nameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void nameAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void httpEquivAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void httpEquivAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void contentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void contentAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void schemeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void schemeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<HTMLMetaElement> : public NativeValueTraitsBase<HTMLMetaElement> {
  CORE_EXPORT static HTMLMetaElement* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static HTMLMetaElement* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<HTMLMetaElement> {
  typedef V8HTMLMetaElement Type;
};

}  // namespace blink

#endif  // V8HTMLMetaElement_h
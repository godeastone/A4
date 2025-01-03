// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8CSS_h
#define V8CSS_h

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/css/dom_window_css.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class V8CSS {
  STATIC_ONLY(V8CSS);
 public:
  CORE_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  CORE_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static DOMWindowCSS* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<DOMWindowCSS>();
  }
  CORE_EXPORT static DOMWindowCSS* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
  CORE_EXPORT static WrapperTypeInfo wrapperTypeInfo;
  static const int internalFieldCount = kV8DefaultWrapperInternalFieldCount;

  CORE_EXPORT static void InstallConditionalFeatures(
      v8::Local<v8::Context>,
      const DOMWrapperWorld&,
      v8::Local<v8::Object> instanceObject,
      v8::Local<v8::Object> prototypeObject,
      v8::Local<v8::Function> interfaceObject,
      v8::Local<v8::FunctionTemplate> interfaceTemplate);

  CORE_EXPORT static void UpdateWrapperTypeInfo(
      InstallTemplateFunction,
      InstallRuntimeEnabledFeaturesFunction,
      InstallRuntimeEnabledFeaturesOnTemplateFunction,
      InstallConditionalFeaturesFunction);
  CORE_EXPORT static void installV8CSSTemplate(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::FunctionTemplate> interfaceTemplate);

  // Callback functions

  CORE_EXPORT static void layoutWorkletAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  CORE_EXPORT static void supportsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void escapeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void numberMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void percentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void emMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void exMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void chMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void remMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void vwMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void vhMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void vminMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void vmaxMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void cmMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void mmMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void inMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void ptMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void pcMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void pxMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void QMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void degMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void gradMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void radMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void turnMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void sMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void msMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void HzMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void kHzMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void dpiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void dpcmMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void dppxMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void frMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void registerPropertyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  CORE_EXPORT static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
  static InstallRuntimeEnabledFeaturesOnTemplateFunction
  install_runtime_enabled_features_on_template_function_;

 private:
  static InstallTemplateFunction installV8CSSTemplateFunction;
};

template <>
struct NativeValueTraits<DOMWindowCSS> : public NativeValueTraitsBase<DOMWindowCSS> {
  CORE_EXPORT static DOMWindowCSS* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static DOMWindowCSS* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<DOMWindowCSS> {
  typedef V8CSS Type;
};

}  // namespace blink

#endif  // V8CSS_h

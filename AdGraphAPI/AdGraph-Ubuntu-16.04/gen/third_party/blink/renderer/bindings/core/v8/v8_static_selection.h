// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8StaticSelection_h
#define V8StaticSelection_h

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/testing/static_selection.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class V8StaticSelection {
  STATIC_ONLY(V8StaticSelection);
 public:
  static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static StaticSelection* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<StaticSelection>();
  }
  static StaticSelection* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
  static const WrapperTypeInfo wrapperTypeInfo;
  static const int internalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  static void anchorNodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void anchorOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void focusNodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void focusOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<StaticSelection> : public NativeValueTraitsBase<StaticSelection> {
  static StaticSelection* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  static StaticSelection* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<StaticSelection> {
  typedef V8StaticSelection Type;
};

}  // namespace blink

#endif  // V8StaticSelection_h

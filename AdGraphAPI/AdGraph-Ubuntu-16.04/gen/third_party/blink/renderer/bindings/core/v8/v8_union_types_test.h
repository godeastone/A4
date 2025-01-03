// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8UnionTypesTest_h
#define V8UnionTypesTest_h

#include "third_party/blink/renderer/bindings/core/v8/double_or_internal_enum.h"
#include "third_party/blink/renderer/bindings/core/v8/double_or_string.h"
#include "third_party/blink/renderer/bindings/core/v8/double_or_string_or_string_sequence.h"
#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/node_list_or_element.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/testing/union_types_test.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class V8UnionTypesTest {
  STATIC_ONLY(V8UnionTypesTest);
 public:
  static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static UnionTypesTest* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<UnionTypesTest>();
  }
  static UnionTypesTest* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
  static const WrapperTypeInfo wrapperTypeInfo;
  static const int internalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  static void doubleOrStringOrStringSequenceAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void doubleOrStringOrStringSequenceAttributeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void doubleOrStringArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void doubleOrInternalEnumArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void doubleOrStringDefaultDoubleArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void doubleOrStringDefaultStringArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void doubleOrStringDefaultNullArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void doubleOrStringSequenceArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void nodeListOrElementArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void nodeListOrElementOrNullArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void doubleOrStringOrStringSequenceArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void doubleOrStringOrStringSequenceNullableArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<UnionTypesTest> : public NativeValueTraitsBase<UnionTypesTest> {
  static UnionTypesTest* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  static UnionTypesTest* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<UnionTypesTest> {
  typedef V8UnionTypesTest Type;
};

}  // namespace blink

#endif  // V8UnionTypesTest_h

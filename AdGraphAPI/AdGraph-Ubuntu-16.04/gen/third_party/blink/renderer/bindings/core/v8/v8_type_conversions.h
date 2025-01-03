// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8TypeConversions_h
#define V8TypeConversions_h

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/testing/type_conversions.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class V8TypeConversions {
  STATIC_ONLY(V8TypeConversions);
 public:
  static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static TypeConversions* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<TypeConversions>();
  }
  static TypeConversions* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
  static const WrapperTypeInfo wrapperTypeInfo;
  static const int internalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  static void testLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testEnforceRangeLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testEnforceRangeLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testUnsignedLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testUnsignedLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testEnforceRangeUnsignedLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testEnforceRangeUnsignedLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testLongLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testLongLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testEnforceRangeLongLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testEnforceRangeLongLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testUnsignedLongLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testUnsignedLongLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testEnforceRangeUnsignedLongLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testEnforceRangeUnsignedLongLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testByteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testByteAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testEnforceRangeByteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testEnforceRangeByteAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testOctetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testOctetAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testEnforceRangeOctetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testEnforceRangeOctetAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testShortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testShortAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testEnforceRangeShortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testEnforceRangeShortAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testUnsignedShortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testUnsignedShortAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testEnforceRangeUnsignedShortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testEnforceRangeUnsignedShortAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testByteStringAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testByteStringAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testUSVStringAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testUSVStringAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testUSVStringOrNullAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void testUSVStringOrNullAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void setTestByteStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setTestByteStringDefaultNullMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setTestUSVStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setTestUSVStringDefaultNullMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setTestUSVStringOrNullMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<TypeConversions> : public NativeValueTraitsBase<TypeConversions> {
  static TypeConversions* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  static TypeConversions* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<TypeConversions> {
  typedef V8TypeConversions Type;
};

}  // namespace blink

#endif  // V8TypeConversions_h

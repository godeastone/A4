// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_type_conversions.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8TypeConversions::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8TypeConversions::domTemplate,
    nullptr,
    "TypeConversions",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in TypeConversions.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& TypeConversions::wrapper_type_info_ = V8TypeConversions::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, TypeConversions>::value,
    "TypeConversions inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&TypeConversions::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "TypeConversions is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace TypeConversionsV8Internal {

static void testLongAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueInt(info, impl->testLong());
}

static void testLongAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "TypeConversions", "testLong");

  // Prepare the value to be set.
  int32_t cppValue = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setTestLong(cppValue);
}

static void testEnforceRangeLongAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueInt(info, impl->testLong());
}

static void testEnforceRangeLongAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "TypeConversions", "testEnforceRangeLong");

  // Prepare the value to be set.
  int32_t cppValue = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kEnforceRange);
  if (exceptionState.HadException())
    return;

  impl->setTestLong(cppValue);
}

static void testUnsignedLongAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->testUnsignedLong());
}

static void testUnsignedLongAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "TypeConversions", "testUnsignedLong");

  // Prepare the value to be set.
  uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setTestUnsignedLong(cppValue);
}

static void testEnforceRangeUnsignedLongAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->testUnsignedLong());
}

static void testEnforceRangeUnsignedLongAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "TypeConversions", "testEnforceRangeUnsignedLong");

  // Prepare the value to be set.
  uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kEnforceRange);
  if (exceptionState.HadException())
    return;

  impl->setTestUnsignedLong(cppValue);
}

static void testLongLongAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->testLongLong()));
}

static void testLongLongAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "TypeConversions", "testLongLong");

  // Prepare the value to be set.
  int64_t cppValue = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setTestLongLong(cppValue);
}

static void testEnforceRangeLongLongAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->testLongLong()));
}

static void testEnforceRangeLongLongAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "TypeConversions", "testEnforceRangeLongLong");

  // Prepare the value to be set.
  int64_t cppValue = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kEnforceRange);
  if (exceptionState.HadException())
    return;

  impl->setTestLongLong(cppValue);
}

static void testUnsignedLongLongAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->testUnsignedLongLong()));
}

static void testUnsignedLongLongAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "TypeConversions", "testUnsignedLongLong");

  // Prepare the value to be set.
  uint64_t cppValue = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setTestUnsignedLongLong(cppValue);
}

static void testEnforceRangeUnsignedLongLongAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->testUnsignedLongLong()));
}

static void testEnforceRangeUnsignedLongLongAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "TypeConversions", "testEnforceRangeUnsignedLongLong");

  // Prepare the value to be set.
  uint64_t cppValue = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kEnforceRange);
  if (exceptionState.HadException())
    return;

  impl->setTestUnsignedLongLong(cppValue);
}

static void testByteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueInt(info, impl->testByte());
}

static void testByteAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "TypeConversions", "testByte");

  // Prepare the value to be set.
  int8_t cppValue = NativeValueTraits<IDLByte>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setTestByte(cppValue);
}

static void testEnforceRangeByteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueInt(info, impl->testByte());
}

static void testEnforceRangeByteAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "TypeConversions", "testEnforceRangeByte");

  // Prepare the value to be set.
  int8_t cppValue = NativeValueTraits<IDLByte>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kEnforceRange);
  if (exceptionState.HadException())
    return;

  impl->setTestByte(cppValue);
}

static void testOctetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->testOctet());
}

static void testOctetAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "TypeConversions", "testOctet");

  // Prepare the value to be set.
  uint8_t cppValue = NativeValueTraits<IDLOctet>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setTestOctet(cppValue);
}

static void testEnforceRangeOctetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->testOctet());
}

static void testEnforceRangeOctetAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "TypeConversions", "testEnforceRangeOctet");

  // Prepare the value to be set.
  uint8_t cppValue = NativeValueTraits<IDLOctet>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kEnforceRange);
  if (exceptionState.HadException())
    return;

  impl->setTestOctet(cppValue);
}

static void testShortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueInt(info, impl->testShort());
}

static void testShortAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "TypeConversions", "testShort");

  // Prepare the value to be set.
  int16_t cppValue = NativeValueTraits<IDLShort>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setTestShort(cppValue);
}

static void testEnforceRangeShortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueInt(info, impl->testShort());
}

static void testEnforceRangeShortAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "TypeConversions", "testEnforceRangeShort");

  // Prepare the value to be set.
  int16_t cppValue = NativeValueTraits<IDLShort>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kEnforceRange);
  if (exceptionState.HadException())
    return;

  impl->setTestShort(cppValue);
}

static void testUnsignedShortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->testUnsignedShort());
}

static void testUnsignedShortAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "TypeConversions", "testUnsignedShort");

  // Prepare the value to be set.
  uint16_t cppValue = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setTestUnsignedShort(cppValue);
}

static void testEnforceRangeUnsignedShortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->testUnsignedShort());
}

static void testEnforceRangeUnsignedShortAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "TypeConversions", "testEnforceRangeUnsignedShort");

  // Prepare the value to be set.
  uint16_t cppValue = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kEnforceRange);
  if (exceptionState.HadException())
    return;

  impl->setTestUnsignedShort(cppValue);
}

static void testByteStringAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueString(info, impl->testByteString(), info.GetIsolate());
}

static void testByteStringAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "TypeConversions", "testByteString");

  // Prepare the value to be set.
  V8StringResource<> cppValue = NativeValueTraits<IDLByteString>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setTestByteString(cppValue);
}

static void testUSVStringAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueString(info, impl->testUSVString(), info.GetIsolate());
}

static void testUSVStringAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "TypeConversions", "testUSVString");

  // Prepare the value to be set.
  V8StringResource<> cppValue = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setTestUSVString(cppValue);
}

static void testUSVStringOrNullAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->testUSVStringOrNull(), info.GetIsolate());
}

static void testUSVStringOrNullAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "TypeConversions", "testUSVStringOrNull");

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cppValue = NativeValueTraits<IDLUSVStringBase<kTreatNullAndUndefinedAsNullString>>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setTestUSVStringOrNull(cppValue);
}

static void setTestByteStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "TypeConversions", "setTestByteString");

  TypeConversions* impl = V8TypeConversions::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> byteString;
  byteString = NativeValueTraits<IDLByteString>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setTestByteString(byteString);
}

static void setTestByteStringDefaultNullMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "TypeConversions", "setTestByteStringDefaultNull");

  TypeConversions* impl = V8TypeConversions::ToImpl(info.Holder());

  V8StringResource<> byteString;
  if (!info[0]->IsUndefined()) {
    byteString = NativeValueTraits<IDLByteString>::NativeValue(info.GetIsolate(), info[0], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    byteString = nullptr;
  }

  impl->setTestByteString(byteString);
}

static void setTestUSVStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "TypeConversions", "setTestUSVString");

  TypeConversions* impl = V8TypeConversions::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> usvString;
  usvString = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setTestUSVString(usvString);
}

static void setTestUSVStringDefaultNullMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "TypeConversions", "setTestUSVStringDefaultNull");

  TypeConversions* impl = V8TypeConversions::ToImpl(info.Holder());

  V8StringResource<> usvString;
  if (!info[0]->IsUndefined()) {
    usvString = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[0], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    usvString = nullptr;
  }

  impl->setTestUSVString(usvString);
}

static void setTestUSVStringOrNullMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "TypeConversions", "setTestUSVStringOrNull");

  TypeConversions* impl = V8TypeConversions::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> usvStringOrNull;
  usvStringOrNull = NativeValueTraits<IDLUSVStringBase<kTreatNullAndUndefinedAsNullString>>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setTestUSVStringOrNull(usvStringOrNull);
}

} // namespace TypeConversionsV8Internal

void V8TypeConversions::testLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testLong_Getter");

  TypeConversionsV8Internal::testLongAttributeGetter(info);
}

void V8TypeConversions::testLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testLong_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  TypeConversionsV8Internal::testLongAttributeSetter(v8Value, info);
}

void V8TypeConversions::testEnforceRangeLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeLong_Getter");

  TypeConversionsV8Internal::testEnforceRangeLongAttributeGetter(info);
}

void V8TypeConversions::testEnforceRangeLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeLong_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  TypeConversionsV8Internal::testEnforceRangeLongAttributeSetter(v8Value, info);
}

void V8TypeConversions::testUnsignedLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testUnsignedLong_Getter");

  TypeConversionsV8Internal::testUnsignedLongAttributeGetter(info);
}

void V8TypeConversions::testUnsignedLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testUnsignedLong_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  TypeConversionsV8Internal::testUnsignedLongAttributeSetter(v8Value, info);
}

void V8TypeConversions::testEnforceRangeUnsignedLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeUnsignedLong_Getter");

  TypeConversionsV8Internal::testEnforceRangeUnsignedLongAttributeGetter(info);
}

void V8TypeConversions::testEnforceRangeUnsignedLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeUnsignedLong_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  TypeConversionsV8Internal::testEnforceRangeUnsignedLongAttributeSetter(v8Value, info);
}

void V8TypeConversions::testLongLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testLongLong_Getter");

  TypeConversionsV8Internal::testLongLongAttributeGetter(info);
}

void V8TypeConversions::testLongLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testLongLong_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  TypeConversionsV8Internal::testLongLongAttributeSetter(v8Value, info);
}

void V8TypeConversions::testEnforceRangeLongLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeLongLong_Getter");

  TypeConversionsV8Internal::testEnforceRangeLongLongAttributeGetter(info);
}

void V8TypeConversions::testEnforceRangeLongLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeLongLong_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  TypeConversionsV8Internal::testEnforceRangeLongLongAttributeSetter(v8Value, info);
}

void V8TypeConversions::testUnsignedLongLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testUnsignedLongLong_Getter");

  TypeConversionsV8Internal::testUnsignedLongLongAttributeGetter(info);
}

void V8TypeConversions::testUnsignedLongLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testUnsignedLongLong_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  TypeConversionsV8Internal::testUnsignedLongLongAttributeSetter(v8Value, info);
}

void V8TypeConversions::testEnforceRangeUnsignedLongLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeUnsignedLongLong_Getter");

  TypeConversionsV8Internal::testEnforceRangeUnsignedLongLongAttributeGetter(info);
}

void V8TypeConversions::testEnforceRangeUnsignedLongLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeUnsignedLongLong_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  TypeConversionsV8Internal::testEnforceRangeUnsignedLongLongAttributeSetter(v8Value, info);
}

void V8TypeConversions::testByteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testByte_Getter");

  TypeConversionsV8Internal::testByteAttributeGetter(info);
}

void V8TypeConversions::testByteAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testByte_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  TypeConversionsV8Internal::testByteAttributeSetter(v8Value, info);
}

void V8TypeConversions::testEnforceRangeByteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeByte_Getter");

  TypeConversionsV8Internal::testEnforceRangeByteAttributeGetter(info);
}

void V8TypeConversions::testEnforceRangeByteAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeByte_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  TypeConversionsV8Internal::testEnforceRangeByteAttributeSetter(v8Value, info);
}

void V8TypeConversions::testOctetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testOctet_Getter");

  TypeConversionsV8Internal::testOctetAttributeGetter(info);
}

void V8TypeConversions::testOctetAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testOctet_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  TypeConversionsV8Internal::testOctetAttributeSetter(v8Value, info);
}

void V8TypeConversions::testEnforceRangeOctetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeOctet_Getter");

  TypeConversionsV8Internal::testEnforceRangeOctetAttributeGetter(info);
}

void V8TypeConversions::testEnforceRangeOctetAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeOctet_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  TypeConversionsV8Internal::testEnforceRangeOctetAttributeSetter(v8Value, info);
}

void V8TypeConversions::testShortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testShort_Getter");

  TypeConversionsV8Internal::testShortAttributeGetter(info);
}

void V8TypeConversions::testShortAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testShort_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  TypeConversionsV8Internal::testShortAttributeSetter(v8Value, info);
}

void V8TypeConversions::testEnforceRangeShortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeShort_Getter");

  TypeConversionsV8Internal::testEnforceRangeShortAttributeGetter(info);
}

void V8TypeConversions::testEnforceRangeShortAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeShort_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  TypeConversionsV8Internal::testEnforceRangeShortAttributeSetter(v8Value, info);
}

void V8TypeConversions::testUnsignedShortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testUnsignedShort_Getter");

  TypeConversionsV8Internal::testUnsignedShortAttributeGetter(info);
}

void V8TypeConversions::testUnsignedShortAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testUnsignedShort_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  TypeConversionsV8Internal::testUnsignedShortAttributeSetter(v8Value, info);
}

void V8TypeConversions::testEnforceRangeUnsignedShortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeUnsignedShort_Getter");

  TypeConversionsV8Internal::testEnforceRangeUnsignedShortAttributeGetter(info);
}

void V8TypeConversions::testEnforceRangeUnsignedShortAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeUnsignedShort_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  TypeConversionsV8Internal::testEnforceRangeUnsignedShortAttributeSetter(v8Value, info);
}

void V8TypeConversions::testByteStringAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testByteString_Getter");

  TypeConversionsV8Internal::testByteStringAttributeGetter(info);
}

void V8TypeConversions::testByteStringAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testByteString_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  TypeConversionsV8Internal::testByteStringAttributeSetter(v8Value, info);
}

void V8TypeConversions::testUSVStringAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testUSVString_Getter");

  TypeConversionsV8Internal::testUSVStringAttributeGetter(info);
}

void V8TypeConversions::testUSVStringAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testUSVString_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  TypeConversionsV8Internal::testUSVStringAttributeSetter(v8Value, info);
}

void V8TypeConversions::testUSVStringOrNullAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testUSVStringOrNull_Getter");

  TypeConversionsV8Internal::testUSVStringOrNullAttributeGetter(info);
}

void V8TypeConversions::testUSVStringOrNullAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testUSVStringOrNull_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  TypeConversionsV8Internal::testUSVStringOrNullAttributeSetter(v8Value, info);
}

void V8TypeConversions::setTestByteStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_setTestByteString");

  TypeConversionsV8Internal::setTestByteStringMethod(info);
}

void V8TypeConversions::setTestByteStringDefaultNullMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_setTestByteStringDefaultNull");

  TypeConversionsV8Internal::setTestByteStringDefaultNullMethod(info);
}

void V8TypeConversions::setTestUSVStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_setTestUSVString");

  TypeConversionsV8Internal::setTestUSVStringMethod(info);
}

void V8TypeConversions::setTestUSVStringDefaultNullMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_setTestUSVStringDefaultNull");

  TypeConversionsV8Internal::setTestUSVStringDefaultNullMethod(info);
}

void V8TypeConversions::setTestUSVStringOrNullMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_setTestUSVStringOrNull");

  TypeConversionsV8Internal::setTestUSVStringOrNullMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8TypeConversionsAccessors[] = {
    { "testLong", V8TypeConversions::testLongAttributeGetterCallback, V8TypeConversions::testLongAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "testEnforceRangeLong", V8TypeConversions::testEnforceRangeLongAttributeGetterCallback, V8TypeConversions::testEnforceRangeLongAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "testUnsignedLong", V8TypeConversions::testUnsignedLongAttributeGetterCallback, V8TypeConversions::testUnsignedLongAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "testEnforceRangeUnsignedLong", V8TypeConversions::testEnforceRangeUnsignedLongAttributeGetterCallback, V8TypeConversions::testEnforceRangeUnsignedLongAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "testLongLong", V8TypeConversions::testLongLongAttributeGetterCallback, V8TypeConversions::testLongLongAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "testEnforceRangeLongLong", V8TypeConversions::testEnforceRangeLongLongAttributeGetterCallback, V8TypeConversions::testEnforceRangeLongLongAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "testUnsignedLongLong", V8TypeConversions::testUnsignedLongLongAttributeGetterCallback, V8TypeConversions::testUnsignedLongLongAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "testEnforceRangeUnsignedLongLong", V8TypeConversions::testEnforceRangeUnsignedLongLongAttributeGetterCallback, V8TypeConversions::testEnforceRangeUnsignedLongLongAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "testByte", V8TypeConversions::testByteAttributeGetterCallback, V8TypeConversions::testByteAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "testEnforceRangeByte", V8TypeConversions::testEnforceRangeByteAttributeGetterCallback, V8TypeConversions::testEnforceRangeByteAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "testOctet", V8TypeConversions::testOctetAttributeGetterCallback, V8TypeConversions::testOctetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "testEnforceRangeOctet", V8TypeConversions::testEnforceRangeOctetAttributeGetterCallback, V8TypeConversions::testEnforceRangeOctetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "testShort", V8TypeConversions::testShortAttributeGetterCallback, V8TypeConversions::testShortAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "testEnforceRangeShort", V8TypeConversions::testEnforceRangeShortAttributeGetterCallback, V8TypeConversions::testEnforceRangeShortAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "testUnsignedShort", V8TypeConversions::testUnsignedShortAttributeGetterCallback, V8TypeConversions::testUnsignedShortAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "testEnforceRangeUnsignedShort", V8TypeConversions::testEnforceRangeUnsignedShortAttributeGetterCallback, V8TypeConversions::testEnforceRangeUnsignedShortAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "testByteString", V8TypeConversions::testByteStringAttributeGetterCallback, V8TypeConversions::testByteStringAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "testUSVString", V8TypeConversions::testUSVStringAttributeGetterCallback, V8TypeConversions::testUSVStringAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "testUSVStringOrNull", V8TypeConversions::testUSVStringOrNullAttributeGetterCallback, V8TypeConversions::testUSVStringOrNullAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8TypeConversionsMethods[] = {
    {"setTestByteString", V8TypeConversions::setTestByteStringMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTestByteStringDefaultNull", V8TypeConversions::setTestByteStringDefaultNullMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTestUSVString", V8TypeConversions::setTestUSVStringMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTestUSVStringDefaultNull", V8TypeConversions::setTestUSVStringDefaultNullMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTestUSVStringOrNull", V8TypeConversions::setTestUSVStringOrNullMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8TypeConversionsTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8TypeConversions::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8TypeConversions::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8TypeConversionsAccessors, arraysize(V8TypeConversionsAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8TypeConversionsMethods, arraysize(V8TypeConversionsMethods));

  // Custom signature

  V8TypeConversions::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8TypeConversions::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8TypeConversions::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8TypeConversionsTemplate);
}

bool V8TypeConversions::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8TypeConversions::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

TypeConversions* V8TypeConversions::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

TypeConversions* NativeValueTraits<TypeConversions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  TypeConversions* nativeValue = V8TypeConversions::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "TypeConversions"));
  }
  return nativeValue;
}

}  // namespace blink

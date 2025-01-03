// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef StringOrFloat_h
#define StringOrFloat_h

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT StringOrFloat final {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  StringOrFloat();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsFloat() const { return type_ == SpecificType::kFloat; }
  float GetAsFloat() const;
  void SetFloat(float);
  static StringOrFloat FromFloat(float);

  bool IsString() const { return type_ == SpecificType::kString; }
  const String& GetAsString() const;
  void SetString(const String&);
  static StringOrFloat FromString(const String&);

  StringOrFloat(const StringOrFloat&);
  ~StringOrFloat();
  StringOrFloat& operator=(const StringOrFloat&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kFloat,
    kString,
  };
  SpecificType type_;

  float float_;
  String string_;

  friend CORE_EXPORT v8::Local<v8::Value> ToV8(const StringOrFloat&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8StringOrFloat final {
 public:
  CORE_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, StringOrFloat&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const StringOrFloat&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, StringOrFloat& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, StringOrFloat& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<StringOrFloat> : public NativeValueTraitsBase<StringOrFloat> {
  CORE_EXPORT static StringOrFloat NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static StringOrFloat NullValue() { return StringOrFloat(); }
};

template <>
struct V8TypeOf<StringOrFloat> {
  typedef V8StringOrFloat Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::StringOrFloat);

#endif  // StringOrFloat_h

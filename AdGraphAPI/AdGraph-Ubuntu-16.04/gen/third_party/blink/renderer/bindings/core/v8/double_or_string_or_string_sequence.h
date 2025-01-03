// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef DoubleOrStringOrStringSequence_h
#define DoubleOrStringOrStringSequence_h

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT DoubleOrStringOrStringSequence final {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  DoubleOrStringOrStringSequence();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsDouble() const { return type_ == SpecificType::kDouble; }
  double GetAsDouble() const;
  void SetDouble(double);
  static DoubleOrStringOrStringSequence FromDouble(double);

  bool IsString() const { return type_ == SpecificType::kString; }
  const String& GetAsString() const;
  void SetString(const String&);
  static DoubleOrStringOrStringSequence FromString(const String&);

  bool IsStringSequence() const { return type_ == SpecificType::kStringSequence; }
  const Vector<String>& GetAsStringSequence() const;
  void SetStringSequence(const Vector<String>&);
  static DoubleOrStringOrStringSequence FromStringSequence(const Vector<String>&);

  DoubleOrStringOrStringSequence(const DoubleOrStringOrStringSequence&);
  ~DoubleOrStringOrStringSequence();
  DoubleOrStringOrStringSequence& operator=(const DoubleOrStringOrStringSequence&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kDouble,
    kString,
    kStringSequence,
  };
  SpecificType type_;

  double double_;
  String string_;
  Vector<String> string_sequence_;

  friend CORE_EXPORT v8::Local<v8::Value> ToV8(const DoubleOrStringOrStringSequence&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8DoubleOrStringOrStringSequence final {
 public:
  CORE_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, DoubleOrStringOrStringSequence&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const DoubleOrStringOrStringSequence&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, DoubleOrStringOrStringSequence& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, DoubleOrStringOrStringSequence& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<DoubleOrStringOrStringSequence> : public NativeValueTraitsBase<DoubleOrStringOrStringSequence> {
  CORE_EXPORT static DoubleOrStringOrStringSequence NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static DoubleOrStringOrStringSequence NullValue() { return DoubleOrStringOrStringSequence(); }
};

template <>
struct V8TypeOf<DoubleOrStringOrStringSequence> {
  typedef V8DoubleOrStringOrStringSequence Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::DoubleOrStringOrStringSequence);

#endif  // DoubleOrStringOrStringSequence_h

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef CompositeOperationOrCompositeOperationOrNullSequence_h
#define CompositeOperationOrCompositeOperationOrNullSequence_h

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT CompositeOperationOrCompositeOperationOrNullSequence final {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  CompositeOperationOrCompositeOperationOrNullSequence();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsCompositeOperation() const { return type_ == SpecificType::kCompositeOperation; }
  const String& GetAsCompositeOperation() const;
  void SetCompositeOperation(const String&);
  static CompositeOperationOrCompositeOperationOrNullSequence FromCompositeOperation(const String&);

  bool IsCompositeOperationOrNullSequence() const { return type_ == SpecificType::kCompositeOperationOrNullSequence; }
  const Vector<String>& GetAsCompositeOperationOrNullSequence() const;
  void SetCompositeOperationOrNullSequence(const Vector<String>&);
  static CompositeOperationOrCompositeOperationOrNullSequence FromCompositeOperationOrNullSequence(const Vector<String>&);

  CompositeOperationOrCompositeOperationOrNullSequence(const CompositeOperationOrCompositeOperationOrNullSequence&);
  ~CompositeOperationOrCompositeOperationOrNullSequence();
  CompositeOperationOrCompositeOperationOrNullSequence& operator=(const CompositeOperationOrCompositeOperationOrNullSequence&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kCompositeOperation,
    kCompositeOperationOrNullSequence,
  };
  SpecificType type_;

  String composite_operation_;
  Vector<String> composite_operation_or_null_sequence_;

  friend CORE_EXPORT v8::Local<v8::Value> ToV8(const CompositeOperationOrCompositeOperationOrNullSequence&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8CompositeOperationOrCompositeOperationOrNullSequence final {
 public:
  CORE_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, CompositeOperationOrCompositeOperationOrNullSequence&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const CompositeOperationOrCompositeOperationOrNullSequence&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, CompositeOperationOrCompositeOperationOrNullSequence& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, CompositeOperationOrCompositeOperationOrNullSequence& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<CompositeOperationOrCompositeOperationOrNullSequence> : public NativeValueTraitsBase<CompositeOperationOrCompositeOperationOrNullSequence> {
  CORE_EXPORT static CompositeOperationOrCompositeOperationOrNullSequence NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static CompositeOperationOrCompositeOperationOrNullSequence NullValue() { return CompositeOperationOrCompositeOperationOrNullSequence(); }
};

template <>
struct V8TypeOf<CompositeOperationOrCompositeOperationOrNullSequence> {
  typedef V8CompositeOperationOrCompositeOperationOrNullSequence Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::CompositeOperationOrCompositeOperationOrNullSequence);

#endif  // CompositeOperationOrCompositeOperationOrNullSequence_h

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef LongOrConstrainLongRange_h
#define LongOrConstrainLongRange_h

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_long_range.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT LongOrConstrainLongRange final {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  LongOrConstrainLongRange();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsConstrainLongRange() const { return type_ == SpecificType::kConstrainLongRange; }
  const ConstrainLongRange& GetAsConstrainLongRange() const;
  void SetConstrainLongRange(const ConstrainLongRange&);
  static LongOrConstrainLongRange FromConstrainLongRange(const ConstrainLongRange&);

  bool IsLong() const { return type_ == SpecificType::kLong; }
  int32_t GetAsLong() const;
  void SetLong(int32_t);
  static LongOrConstrainLongRange FromLong(int32_t);

  LongOrConstrainLongRange(const LongOrConstrainLongRange&);
  ~LongOrConstrainLongRange();
  LongOrConstrainLongRange& operator=(const LongOrConstrainLongRange&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kConstrainLongRange,
    kLong,
  };
  SpecificType type_;

  ConstrainLongRange constrain_long_range_;
  int32_t long_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const LongOrConstrainLongRange&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8LongOrConstrainLongRange final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, LongOrConstrainLongRange&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const LongOrConstrainLongRange&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, LongOrConstrainLongRange& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, LongOrConstrainLongRange& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<LongOrConstrainLongRange> : public NativeValueTraitsBase<LongOrConstrainLongRange> {
  MODULES_EXPORT static LongOrConstrainLongRange NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static LongOrConstrainLongRange NullValue() { return LongOrConstrainLongRange(); }
};

template <>
struct V8TypeOf<LongOrConstrainLongRange> {
  typedef V8LongOrConstrainLongRange Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::LongOrConstrainLongRange);

#endif  // LongOrConstrainLongRange_h

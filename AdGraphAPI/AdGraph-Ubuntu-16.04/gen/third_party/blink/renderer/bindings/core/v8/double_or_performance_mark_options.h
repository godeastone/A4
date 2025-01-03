// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef DoubleOrPerformanceMarkOptions_h
#define DoubleOrPerformanceMarkOptions_h

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_mark_options.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT DoubleOrPerformanceMarkOptions final {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  DoubleOrPerformanceMarkOptions();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsDouble() const { return type_ == SpecificType::kDouble; }
  double GetAsDouble() const;
  void SetDouble(double);
  static DoubleOrPerformanceMarkOptions FromDouble(double);

  bool IsPerformanceMarkOptions() const { return type_ == SpecificType::kPerformanceMarkOptions; }
  const PerformanceMarkOptions& GetAsPerformanceMarkOptions() const;
  void SetPerformanceMarkOptions(const PerformanceMarkOptions&);
  static DoubleOrPerformanceMarkOptions FromPerformanceMarkOptions(const PerformanceMarkOptions&);

  DoubleOrPerformanceMarkOptions(const DoubleOrPerformanceMarkOptions&);
  ~DoubleOrPerformanceMarkOptions();
  DoubleOrPerformanceMarkOptions& operator=(const DoubleOrPerformanceMarkOptions&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kDouble,
    kPerformanceMarkOptions,
  };
  SpecificType type_;

  double double_;
  PerformanceMarkOptions performance_mark_options_;

  friend CORE_EXPORT v8::Local<v8::Value> ToV8(const DoubleOrPerformanceMarkOptions&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8DoubleOrPerformanceMarkOptions final {
 public:
  CORE_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, DoubleOrPerformanceMarkOptions&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const DoubleOrPerformanceMarkOptions&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, DoubleOrPerformanceMarkOptions& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, DoubleOrPerformanceMarkOptions& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<DoubleOrPerformanceMarkOptions> : public NativeValueTraitsBase<DoubleOrPerformanceMarkOptions> {
  CORE_EXPORT static DoubleOrPerformanceMarkOptions NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static DoubleOrPerformanceMarkOptions NullValue() { return DoubleOrPerformanceMarkOptions(); }
};

template <>
struct V8TypeOf<DoubleOrPerformanceMarkOptions> {
  typedef V8DoubleOrPerformanceMarkOptions Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::DoubleOrPerformanceMarkOptions);

#endif  // DoubleOrPerformanceMarkOptions_h

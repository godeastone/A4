// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef StringOrDoubleOrPerformanceMeasureOptions_h
#define StringOrDoubleOrPerformanceMeasureOptions_h

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_measure_options.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT StringOrDoubleOrPerformanceMeasureOptions final {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  StringOrDoubleOrPerformanceMeasureOptions();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsDouble() const { return type_ == SpecificType::kDouble; }
  double GetAsDouble() const;
  void SetDouble(double);
  static StringOrDoubleOrPerformanceMeasureOptions FromDouble(double);

  bool IsPerformanceMeasureOptions() const { return type_ == SpecificType::kPerformanceMeasureOptions; }
  const PerformanceMeasureOptions& GetAsPerformanceMeasureOptions() const;
  void SetPerformanceMeasureOptions(const PerformanceMeasureOptions&);
  static StringOrDoubleOrPerformanceMeasureOptions FromPerformanceMeasureOptions(const PerformanceMeasureOptions&);

  bool IsString() const { return type_ == SpecificType::kString; }
  const String& GetAsString() const;
  void SetString(const String&);
  static StringOrDoubleOrPerformanceMeasureOptions FromString(const String&);

  StringOrDoubleOrPerformanceMeasureOptions(const StringOrDoubleOrPerformanceMeasureOptions&);
  ~StringOrDoubleOrPerformanceMeasureOptions();
  StringOrDoubleOrPerformanceMeasureOptions& operator=(const StringOrDoubleOrPerformanceMeasureOptions&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kDouble,
    kPerformanceMeasureOptions,
    kString,
  };
  SpecificType type_;

  double double_;
  PerformanceMeasureOptions performance_measure_options_;
  String string_;

  friend CORE_EXPORT v8::Local<v8::Value> ToV8(const StringOrDoubleOrPerformanceMeasureOptions&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8StringOrDoubleOrPerformanceMeasureOptions final {
 public:
  CORE_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, StringOrDoubleOrPerformanceMeasureOptions&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const StringOrDoubleOrPerformanceMeasureOptions&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, StringOrDoubleOrPerformanceMeasureOptions& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, StringOrDoubleOrPerformanceMeasureOptions& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<StringOrDoubleOrPerformanceMeasureOptions> : public NativeValueTraitsBase<StringOrDoubleOrPerformanceMeasureOptions> {
  CORE_EXPORT static StringOrDoubleOrPerformanceMeasureOptions NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static StringOrDoubleOrPerformanceMeasureOptions NullValue() { return StringOrDoubleOrPerformanceMeasureOptions(); }
};

template <>
struct V8TypeOf<StringOrDoubleOrPerformanceMeasureOptions> {
  typedef V8StringOrDoubleOrPerformanceMeasureOptions Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::StringOrDoubleOrPerformanceMeasureOptions);

#endif  // StringOrDoubleOrPerformanceMeasureOptions_h

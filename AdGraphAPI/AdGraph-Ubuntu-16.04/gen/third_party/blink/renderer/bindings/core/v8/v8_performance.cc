// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_performance.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abstract_event_listener.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_listener_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_memory_info.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_entry.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_mark.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_mark_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_measure.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_measure_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_navigation.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_timing.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8Performance::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8Performance::domTemplate,
    V8Performance::InstallConditionalFeatures,
    "Performance",
    &V8EventTarget::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Performance.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& Performance::wrapper_type_info_ = V8Performance::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Performance>::value,
    "Performance inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Performance::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "Performance is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace PerformanceV8Internal {

static void timeOriginAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Performance* impl = V8Performance::ToImpl(holder);

  V8SetReturnValue(info, impl->timeOrigin());
}

static void onresourcetimingbufferfullAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Performance* impl = V8Performance::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onresourcetimingbufferfull()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onresourcetimingbufferfullAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Performance* impl = V8Performance::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnresourcetimingbufferfull(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void oneventtimingbufferfullAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Performance* impl = V8Performance::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->oneventtimingbufferfull()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void oneventtimingbufferfullAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Performance* impl = V8Performance::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOneventtimingbufferfull(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void timingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Performance* impl = V8Performance::ToImpl(holder);

  PerformanceTiming* cppValue(WTF::GetPtr(impl->timing()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Performance#timing")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void navigationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Performance* impl = V8Performance::ToImpl(holder);

  PerformanceNavigation* cppValue(WTF::GetPtr(impl->navigation()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Performance#navigation")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void memoryAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Performance* impl = V8Performance::ToImpl(holder);

  MemoryInfo* cppValue(WTF::GetPtr(impl->memory()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Performance#memory")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void nowMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Performance* impl = V8Performance::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->now());
}

static void getEntriesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Performance* impl = V8Performance::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getEntries(), info.Holder(), info.GetIsolate()));
}

static void getEntriesByTypeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Performance* impl = V8Performance::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getEntriesByType", "Performance", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> entryType;
  entryType = info[0];
  if (!entryType.Prepare())
    return;

  V8SetReturnValue(info, ToV8(impl->getEntriesByType(entryType), info.Holder(), info.GetIsolate()));
}

static void getEntriesByNameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Performance* impl = V8Performance::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getEntriesByName", "Performance", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> name;
  V8StringResource<> entryType;
  name = info[0];
  if (!name.Prepare())
    return;

  if (!info[1]->IsUndefined()) {
    entryType = info[1];
    if (!entryType.Prepare())
      return;
  } else {
    entryType = nullptr;
  }

  V8SetReturnValue(info, ToV8(impl->getEntriesByName(name, entryType), info.Holder(), info.GetIsolate()));
}

static void clearResourceTimingsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Performance* impl = V8Performance::ToImpl(info.Holder());

  impl->clearResourceTimings();
}

static void setResourceTimingBufferSizeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Performance", "setResourceTimingBufferSize");

  Performance* impl = V8Performance::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t maxSize;
  maxSize = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setResourceTimingBufferSize(maxSize);
}

static void clearEventTimingsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Performance* impl = V8Performance::ToImpl(info.Holder());

  impl->clearEventTimings();
}

static void setEventTimingBufferMaxSizeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Performance", "setEventTimingBufferMaxSize");

  Performance* impl = V8Performance::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t maxSize;
  maxSize = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setEventTimingBufferMaxSize(maxSize);
}

static void mark1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Performance", "mark");

  Performance* impl = V8Performance::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  V8StringResource<> markName;
  markName = info[0];
  if (!markName.Prepare())
    return;

  impl->mark(scriptState, markName, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void mark2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Performance", "mark");

  Performance* impl = V8Performance::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  V8StringResource<> markName;
  DoubleOrPerformanceMarkOptions startTimeOrPerformanceMarkOptions;
  markName = info[0];
  if (!markName.Prepare())
    return;

  V8DoubleOrPerformanceMarkOptions::ToImpl(info.GetIsolate(), info[1], startTimeOrPerformanceMarkOptions, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  PerformanceMark* result = impl->mark(scriptState, markName, startTimeOrPerformanceMarkOptions, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static int markMethodMaxArg() {
  if (RuntimeEnabledFeatures::CustomUserTimingEnabled()) {
    return 2;
  }
  return 1;
}

static void markMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(PerformanceV8Internal::markMethodMaxArg(), info.Length())) {
    case 1:
      if (true) {
        UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kUserTiming);
        mark1Method(info);
        return;
      }
      break;
    case 2:
      if (RuntimeEnabledFeatures::CustomUserTimingEnabled()) {
        if (true) {
          UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kUserTiming);
          mark2Method(info);
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Performance", "mark");
  if (isArityError) {
    if (info.Length() < 1) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void clearMarksMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Performance* impl = V8Performance::ToImpl(info.Holder());

  V8StringResource<> markName;
  if (!info[0]->IsUndefined()) {
    markName = info[0];
    if (!markName.Prepare())
      return;
  } else {
    markName = nullptr;
  }

  impl->clearMarks(markName);
}

static void measureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Performance", "measure");

  Performance* impl = V8Performance::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> measureName;
  StringOrDoubleOrPerformanceMeasureOptions startOrOptions;
  StringOrDouble end;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  measureName = info[0];
  if (!measureName.Prepare())
    return;

  if (UNLIKELY(numArgsPassed <= 1)) {
    PerformanceMeasure* result = impl->measure(scriptState, measureName, exceptionState);
    if (exceptionState.HadException()) {
      return;
    }
    V8SetReturnValue(info, result);
    return;
  }
  V8StringOrDoubleOrPerformanceMeasureOptions::ToImpl(info.GetIsolate(), info[1], startOrOptions, UnionTypeConversionMode::kNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  if (UNLIKELY(numArgsPassed <= 2)) {
    PerformanceMeasure* result = impl->measure(scriptState, measureName, startOrOptions, exceptionState);
    if (exceptionState.HadException()) {
      return;
    }
    V8SetReturnValue(info, result);
    return;
  }
  V8StringOrDouble::ToImpl(info.GetIsolate(), info[2], end, UnionTypeConversionMode::kNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  PerformanceMeasure* result = impl->measure(scriptState, measureName, startOrOptions, end, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void clearMeasuresMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Performance* impl = V8Performance::ToImpl(info.Holder());

  V8StringResource<> measureName;
  if (!info[0]->IsUndefined()) {
    measureName = info[0];
    if (!measureName.Prepare())
      return;
  } else {
    measureName = nullptr;
  }

  impl->clearMeasures(measureName);
}

static void toJSONMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Performance* impl = V8Performance::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  ScriptValue result = impl->toJSONForBinding(scriptState);
  V8SetReturnValue(info, result.V8Value());
}

} // namespace PerformanceV8Internal

void V8Performance::timeOriginAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_timeOrigin_Getter");

  PerformanceV8Internal::timeOriginAttributeGetter(info);
}

void V8Performance::onresourcetimingbufferfullAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_onresourcetimingbufferfull_Getter");

  PerformanceV8Internal::onresourcetimingbufferfullAttributeGetter(info);
}

void V8Performance::onresourcetimingbufferfullAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_onresourcetimingbufferfull_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  PerformanceV8Internal::onresourcetimingbufferfullAttributeSetter(v8Value, info);
}

void V8Performance::oneventtimingbufferfullAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_oneventtimingbufferfull_Getter");

  PerformanceV8Internal::oneventtimingbufferfullAttributeGetter(info);
}

void V8Performance::oneventtimingbufferfullAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_oneventtimingbufferfull_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  PerformanceV8Internal::oneventtimingbufferfullAttributeSetter(v8Value, info);
}

void V8Performance::timingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_timing_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8Performance_Timing_AttributeGetter);

  PerformanceV8Internal::timingAttributeGetter(info);
}

void V8Performance::navigationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_navigation_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8Performance_Navigation_AttributeGetter);

  PerformanceV8Internal::navigationAttributeGetter(info);
}

void V8Performance::memoryAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_memory_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8Performance_Memory_AttributeGetter);

  PerformanceV8Internal::memoryAttributeGetter(info);
}

void V8Performance::nowMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_now");

  PerformanceV8Internal::nowMethod(info);
}

void V8Performance::getEntriesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_getEntries");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPerformanceTimeline);
  PerformanceV8Internal::getEntriesMethod(info);
}

void V8Performance::getEntriesByTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_getEntriesByType");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPerformanceTimeline);
  PerformanceV8Internal::getEntriesByTypeMethod(info);
}

void V8Performance::getEntriesByNameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_getEntriesByName");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPerformanceTimeline);
  PerformanceV8Internal::getEntriesByNameMethod(info);
}

void V8Performance::clearResourceTimingsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_clearResourceTimings");

  PerformanceV8Internal::clearResourceTimingsMethod(info);
}

void V8Performance::setResourceTimingBufferSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_setResourceTimingBufferSize");

  PerformanceV8Internal::setResourceTimingBufferSizeMethod(info);
}

void V8Performance::clearEventTimingsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_clearEventTimings");

  PerformanceV8Internal::clearEventTimingsMethod(info);
}

void V8Performance::setEventTimingBufferMaxSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_setEventTimingBufferMaxSize");

  PerformanceV8Internal::setEventTimingBufferMaxSizeMethod(info);
}

void V8Performance::markMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_mark");

  PerformanceV8Internal::markMethod(info);
}

void V8Performance::clearMarksMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_clearMarks");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kUserTiming);
  PerformanceV8Internal::clearMarksMethod(info);
}

void V8Performance::measureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_measure");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kUserTiming);
  PerformanceV8Internal::measureMethod(info);
}

void V8Performance::clearMeasuresMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_clearMeasures");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kUserTiming);
  PerformanceV8Internal::clearMeasuresMethod(info);
}

void V8Performance::toJSONMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Performance_toJSON");

  PerformanceV8Internal::toJSONMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8PerformanceAccessors[] = {
    { "timeOrigin", V8Performance::timeOriginAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onresourcetimingbufferfull", V8Performance::onresourcetimingbufferfullAttributeGetterCallback, V8Performance::onresourcetimingbufferfullAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8PerformanceMethods[] = {
    {"now", V8Performance::nowMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getEntries", V8Performance::getEntriesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getEntriesByType", V8Performance::getEntriesByTypeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getEntriesByName", V8Performance::getEntriesByNameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearResourceTimings", V8Performance::clearResourceTimingsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setResourceTimingBufferSize", V8Performance::setResourceTimingBufferSizeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"mark", V8Performance::markMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearMarks", V8Performance::clearMarksMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"measure", V8Performance::measureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearMeasures", V8Performance::clearMeasuresMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"toJSON", V8Performance::toJSONMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8PerformanceTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Performance::wrapperTypeInfo.interface_name, V8EventTarget::domTemplate(isolate, world), V8Performance::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8PerformanceAccessors, arraysize(V8PerformanceAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8PerformanceMethods, arraysize(V8PerformanceMethods));

  // Custom signature

  V8Performance::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8Performance::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::EventTimingEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "oneventtimingbufferfull", V8Performance::oneventtimingbufferfullAttributeGetterCallback, V8Performance::oneventtimingbufferfullAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, accessor_configurations,
        arraysize(accessor_configurations));
  }

  // Custom signature
  if (RuntimeEnabledFeatures::EventTimingEnabled()) {
    const V8DOMConfiguration::MethodConfiguration clearEventTimingsMethodConfiguration[] = {
      {"clearEventTimings", V8Performance::clearEventTimingsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : clearEventTimingsMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::EventTimingEnabled()) {
    const V8DOMConfiguration::MethodConfiguration setEventTimingBufferMaxSizeMethodConfiguration[] = {
      {"setEventTimingBufferMaxSize", V8Performance::setEventTimingBufferMaxSizeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : setEventTimingBufferMaxSizeMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
}

v8::Local<v8::FunctionTemplate> V8Performance::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8PerformanceTemplate);
}

bool V8Performance::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Performance::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Performance* V8Performance::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

Performance* NativeValueTraits<Performance>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  Performance* nativeValue = V8Performance::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Performance"));
  }
  return nativeValue;
}

void V8Performance::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instanceObject,
    v8::Local<v8::Object> prototypeObject,
    v8::Local<v8::Function> interfaceObject,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  CHECK(!interfaceTemplate.IsEmpty());
  DCHECK((!prototypeObject.IsEmpty() && !interfaceObject.IsEmpty()) ||
         !instanceObject.IsEmpty());

  v8::Isolate* isolate = context->GetIsolate();

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);

  if (!prototypeObject.IsEmpty() || !interfaceObject.IsEmpty()) {
    if (executionContext && (executionContext->IsDocument())) {
      static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
          { "memory", V8Performance::memoryAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "navigation", V8Performance::navigationAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "timing", V8Performance::timingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instanceObject, prototypeObject, interfaceObject,
          signature, accessor_configurations,
          arraysize(accessor_configurations));
    }
  }
}

}  // namespace blink

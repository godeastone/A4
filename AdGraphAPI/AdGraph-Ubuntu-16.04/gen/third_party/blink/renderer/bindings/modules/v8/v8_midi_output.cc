// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_output.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_uint8_array.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
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
const WrapperTypeInfo V8MIDIOutput::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8MIDIOutput::domTemplate,
    nullptr,
    "MIDIOutput",
    &V8MIDIPort::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MIDIOutput.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& MIDIOutput::wrapper_type_info_ = V8MIDIOutput::wrapperTypeInfo;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, MIDIOutput>::value,
    "MIDIOutput does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&MIDIOutput::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "MIDIOutput is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace MIDIOutputV8Internal {

static void send1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "MIDIOutput", "send");

  MIDIOutput* impl = V8MIDIOutput::ToImpl(info.Holder());

  NotShared<DOMUint8Array> data;
  double timestamp;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  data = ToNotShared<NotShared<DOMUint8Array>>(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!data) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Uint8Array'.");
    return;
  }

  if (UNLIKELY(numArgsPassed <= 1)) {
    impl->send(data, exceptionState);
    if (exceptionState.HadException()) {
      return;
    }
    return;
  }
  timestamp = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->send(data, timestamp, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void send2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "MIDIOutput", "send");

  MIDIOutput* impl = V8MIDIOutput::ToImpl(info.Holder());

  Vector<uint32_t> data;
  double timestamp;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  data = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  if (UNLIKELY(numArgsPassed <= 1)) {
    impl->send(data, exceptionState);
    if (exceptionState.HadException()) {
      return;
    }
    return;
  }
  timestamp = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->send(data, timestamp, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void sendMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(2, info.Length())) {
    case 1:
      if (info[0]->IsUint8Array()) {
        send1Method(info);
        return;
      }
      if (info[0]->IsArray()) {
        send2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "MIDIOutput", "send");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[0], exceptionState)) {
          send2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    case 2:
      if (info[0]->IsUint8Array()) {
        send1Method(info);
        return;
      }
      if (info[0]->IsArray()) {
        send2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "MIDIOutput", "send");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[0], exceptionState)) {
          send2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "MIDIOutput", "send");
  if (isArityError) {
    if (info.Length() < 1) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

} // namespace MIDIOutputV8Internal

void V8MIDIOutput::sendMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MIDIOutput_send");

  MIDIOutputV8Internal::sendMethod(info);
}

static const V8DOMConfiguration::MethodConfiguration V8MIDIOutputMethods[] = {
    {"send", V8MIDIOutput::sendMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8MIDIOutputTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8MIDIOutput::wrapperTypeInfo.interface_name, V8MIDIPort::domTemplate(isolate, world), V8MIDIOutput::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8MIDIOutputMethods, arraysize(V8MIDIOutputMethods));

  // Custom signature

  V8MIDIOutput::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8MIDIOutput::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8MIDIOutput::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8MIDIOutputTemplate);
}

bool V8MIDIOutput::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8MIDIOutput::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

MIDIOutput* V8MIDIOutput::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

MIDIOutput* NativeValueTraits<MIDIOutput>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MIDIOutput* nativeValue = V8MIDIOutput::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "MIDIOutput"));
  }
  return nativeValue;
}

}  // namespace blink

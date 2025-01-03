// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_message_port.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/serialization/serialized_script_value_factory.h"
#include "third_party/blink/renderer/bindings/core/v8/serialization/transferables.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abstract_event_listener.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_listener_helper.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/imagebitmap/image_bitmap.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_array_buffer_base.h"
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
const WrapperTypeInfo V8MessagePort::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8MessagePort::domTemplate,
    nullptr,
    "MessagePort",
    &V8EventTarget::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MessagePort.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& MessagePort::wrapper_type_info_ = V8MessagePort::wrapperTypeInfo;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, MessagePort>::value,
    "MessagePort does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&MessagePort::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "MessagePort is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace MessagePortV8Internal {

static void onmessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MessagePort* impl = V8MessagePort::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onmessage()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onmessageAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  MessagePort* impl = V8MessagePort::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnmessage(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onmessageerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MessagePort* impl = V8MessagePort::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onmessageerror()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onmessageerrorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  MessagePort* impl = V8MessagePort::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnmessageerror(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void postMessageImpl(const char* interfaceName, MessagePort* instance, const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, interfaceName, "postMessage");
  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Transferables transferables;
  if (info.Length() > 1) {
    const int transferablesArgIndex = 1;
    if (!SerializedScriptValue::ExtractTransferables(info.GetIsolate(), info[transferablesArgIndex], transferablesArgIndex, transferables, exceptionState)) {
      return;
    }
  }

  scoped_refptr<SerializedScriptValue> message;
  if (instance->CanTransferArrayBuffersAndImageBitmaps()) {
    // This instance supports sending array buffers by move semantics.
    SerializedScriptValue::SerializeOptions options;
    options.transferables = &transferables;
    message = SerializedScriptValue::Serialize(info.GetIsolate(), info[0], options, exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    // This instance doesn't support sending array buffers and image bitmaps
    // by move semantics. Emulate it by copy-and-neuter semantics that sends
    // array buffers and image bitmaps via structured clone and then neuters
    // the original objects

    // Clear references to array buffers and image bitmaps from transferables
    // so that the serializer can consider the array buffers as
    // non-transferable and serialize them into the message.
    ArrayBufferArray transferableArrayBuffers = SerializedScriptValue::ExtractNonSharedArrayBuffers(transferables);
    ImageBitmapArray transferableImageBitmaps = transferables.image_bitmaps;
    transferables.image_bitmaps.clear();
    SerializedScriptValue::SerializeOptions options;
    options.transferables = &transferables;
    message = SerializedScriptValue::Serialize(info.GetIsolate(), info[0], options, exceptionState);
    if (exceptionState.HadException())
      return;

    // Neuter the original array buffers on the sender context.
    SerializedScriptValue::TransferArrayBufferContents(info.GetIsolate(), transferableArrayBuffers, exceptionState);
    if (exceptionState.HadException())
      return;
    // Neuter the original image bitmaps on the sender context.
    SerializedScriptValue::TransferImageBitmapContents(info.GetIsolate(), transferableImageBitmaps, exceptionState);
    if (exceptionState.HadException())
      return;
  }

  // FIXME: Only pass scriptState/exceptionState if instance really requires it.
  ScriptState* scriptState = ScriptState::Current(info.GetIsolate());
  message->UnregisterMemoryAllocatedWithCurrentScriptContext();
  instance->postMessage(scriptState, std::move(message), transferables.message_ports, exceptionState);
}

static void startMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  MessagePort* impl = V8MessagePort::ToImpl(info.Holder());

  impl->start();
}

static void closeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  MessagePort* impl = V8MessagePort::ToImpl(info.Holder());

  impl->close();
}

} // namespace MessagePortV8Internal

void V8MessagePort::onmessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MessagePort_onmessage_Getter");

  MessagePortV8Internal::onmessageAttributeGetter(info);
}

void V8MessagePort::onmessageAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MessagePort_onmessage_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  MessagePortV8Internal::onmessageAttributeSetter(v8Value, info);
}

void V8MessagePort::onmessageerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MessagePort_onmessageerror_Getter");

  MessagePortV8Internal::onmessageerrorAttributeGetter(info);
}

void V8MessagePort::onmessageerrorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MessagePort_onmessageerror_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  MessagePortV8Internal::onmessageerrorAttributeSetter(v8Value, info);
}

void V8MessagePort::postMessageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MessagePort_postMessage");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8MessagePort_PostMessage_Method);
  MessagePortV8Internal::postMessageImpl("MessagePort", V8MessagePort::ToImpl(info.Holder()), info);
}

void V8MessagePort::startMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MessagePort_start");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8MessagePort_Start_Method);
  MessagePortV8Internal::startMethod(info);
}

void V8MessagePort::closeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MessagePort_close");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8MessagePort_Close_Method);
  MessagePortV8Internal::closeMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8MessagePortAccessors[] = {
    { "onmessage", V8MessagePort::onmessageAttributeGetterCallback, V8MessagePort::onmessageAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onmessageerror", V8MessagePort::onmessageerrorAttributeGetterCallback, V8MessagePort::onmessageerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8MessagePortMethods[] = {
    {"postMessage", V8MessagePort::postMessageMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"start", V8MessagePort::startMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"close", V8MessagePort::closeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8MessagePortTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8MessagePort::wrapperTypeInfo.interface_name, V8EventTarget::domTemplate(isolate, world), V8MessagePort::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8MessagePortAccessors, arraysize(V8MessagePortAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8MessagePortMethods, arraysize(V8MessagePortMethods));

  // Custom signature

  V8MessagePort::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8MessagePort::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8MessagePort::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8MessagePortTemplate);
}

bool V8MessagePort::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8MessagePort::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

MessagePort* V8MessagePort::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

MessagePort* NativeValueTraits<MessagePort>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MessagePort* nativeValue = V8MessagePort::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "MessagePort"));
  }
  return nativeValue;
}

}  // namespace blink

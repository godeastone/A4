// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_iterator.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8Iterator::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8Iterator::domTemplate,
    nullptr,
    "Iterator",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Iterator.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& Iterator::wrapper_type_info_ = V8Iterator::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Iterator>::value,
    "Iterator inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Iterator::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "Iterator is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace IteratorV8Internal {

static void nextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Iterator", "next");

  Iterator* impl = V8Iterator::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  ScriptValue value;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  if (UNLIKELY(numArgsPassed <= 0)) {
    ScriptValue result = impl->next(scriptState, exceptionState);
    if (exceptionState.HadException()) {
      return;
    }
    V8SetReturnValue(info, result.V8Value());
    return;
  }
  value = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  ScriptValue result = impl->next(scriptState, value, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

} // namespace IteratorV8Internal

void V8Iterator::nextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Iterator_next");

  IteratorV8Internal::nextMethod(info);
}

static const V8DOMConfiguration::MethodConfiguration V8IteratorMethods[] = {
    {"next", V8Iterator::nextMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8IteratorTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Iterator::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8Iterator::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8IteratorMethods, arraysize(V8IteratorMethods));

  // The WebIDL spec says when an interface has pair iterators the iterators it
  // returns must be instances of the "default iterator object" whose
  // [[Prototype]] points to an "iterator prototype object" whose
  // [[Prototype]], on its turn, points to %IteratorPrototype%. next() must be
  // implemented in the "iterator prototype object", while %IteratorPrototype%
  // provides @@iterator.
  // References:
  // https://heycam.github.io/webidl/#es-default-iterator-object
  // https://heycam.github.io/webidl/#es-iterator-prototype-object
  //
  // The iterators we return from interfaces that have pair interators adhere
  // to the above by:
  // - Adding the "next()" property to its prototype object.
  // - Making the prototype object inherit from %IteratorPrototype% with the
  //   hack below, which creates another function template with no prototype
  //   and sets the "prototype" property of its function object.
  //   When |interfaceTemplate|'s function object is created, its
  //   prototype.__proto__ will point to the value of the "prototype" property
  //   of |intrinsicIteratorPrototypeInterfaceTemplate|, which is exactly what
  //   we want.
  //
  // Finally, creating a FunctionTemplate here might look expensive since they
  // have the same lifetime as their context, but:
  // - |interfaceTemplate| is cached in V8PerIsolateData, so we create only one
  //   FunctionTemplate per interface.
  // - There is only one Iterator interface that creates this FunctionTemplate,
  //   so there is no need to reuse this FunctionTemplate and register it in
  //   V8PerIsolateData.
  v8::Local<v8::FunctionTemplate> intrinsicIteratorPrototypeInterfaceTemplate =
      v8::FunctionTemplate::New(isolate);
  intrinsicIteratorPrototypeInterfaceTemplate->RemovePrototype();
  intrinsicIteratorPrototypeInterfaceTemplate->SetIntrinsicDataProperty(
      V8AtomicString(isolate, "prototype"), v8::kIteratorPrototype);
  interfaceTemplate->Inherit(intrinsicIteratorPrototypeInterfaceTemplate);

  // Custom signature

  V8Iterator::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8Iterator::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8Iterator::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8IteratorTemplate);
}

bool V8Iterator::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Iterator::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Iterator* V8Iterator::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

Iterator* NativeValueTraits<Iterator>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  Iterator* nativeValue = V8Iterator::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Iterator"));
  }
  return nativeValue;
}

}  // namespace blink

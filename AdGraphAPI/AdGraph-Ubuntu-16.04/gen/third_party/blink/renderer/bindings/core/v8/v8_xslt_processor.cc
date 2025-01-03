// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_xslt_processor.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document_fragment.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/core/dom/document.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8XSLTProcessor::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8XSLTProcessor::domTemplate,
    nullptr,
    "XSLTProcessor",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in XSLTProcessor.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& XSLTProcessor::wrapper_type_info_ = V8XSLTProcessor::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, XSLTProcessor>::value,
    "XSLTProcessor inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&XSLTProcessor::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "XSLTProcessor is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace XSLTProcessorV8Internal {

static void importStylesheetMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XSLTProcessor* impl = V8XSLTProcessor::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("importStylesheet", "XSLTProcessor", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* style;
  style = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!style) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("importStylesheet", "XSLTProcessor", "parameter 1 is not of type 'Node'."));
    return;
  }

  impl->importStylesheet(style);
}

static void transformToFragmentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XSLTProcessor* impl = V8XSLTProcessor::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("transformToFragment", "XSLTProcessor", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  Node* source;
  Document* output;
  source = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!source) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("transformToFragment", "XSLTProcessor", "parameter 1 is not of type 'Node'."));
    return;
  }

  output = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!output) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("transformToFragment", "XSLTProcessor", "parameter 2 is not of type 'Document'."));
    return;
  }

  V8SetReturnValue(info, impl->transformToFragment(source, output));
}

static void transformToDocumentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XSLTProcessor* impl = V8XSLTProcessor::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("transformToDocument", "XSLTProcessor", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* source;
  source = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!source) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("transformToDocument", "XSLTProcessor", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValue(info, impl->transformToDocument(source));
}

static void setParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XSLTProcessor* impl = V8XSLTProcessor::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setParameter", "XSLTProcessor", ExceptionMessages::NotEnoughArguments(3, info.Length())));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> namespaceURI;
  V8StringResource<> localName;
  V8StringResource<> value;
  namespaceURI = info[0];
  if (!namespaceURI.Prepare())
    return;

  localName = info[1];
  if (!localName.Prepare())
    return;

  value = info[2];
  if (!value.Prepare())
    return;

  impl->setParameter(namespaceURI, localName, value);
}

static void getParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XSLTProcessor* impl = V8XSLTProcessor::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getParameter", "XSLTProcessor", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> namespaceURI;
  V8StringResource<> localName;
  namespaceURI = info[0];
  if (!namespaceURI.Prepare())
    return;

  localName = info[1];
  if (!localName.Prepare())
    return;

  V8SetReturnValueStringOrNull(info, impl->getParameter(namespaceURI, localName), info.GetIsolate());
}

static void removeParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XSLTProcessor* impl = V8XSLTProcessor::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("removeParameter", "XSLTProcessor", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> namespaceURI;
  V8StringResource<> localName;
  namespaceURI = info[0];
  if (!namespaceURI.Prepare())
    return;

  localName = info[1];
  if (!localName.Prepare())
    return;

  impl->removeParameter(namespaceURI, localName);
}

static void clearParametersMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XSLTProcessor* impl = V8XSLTProcessor::ToImpl(info.Holder());

  impl->clearParameters();
}

static void resetMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XSLTProcessor* impl = V8XSLTProcessor::ToImpl(info.Holder());

  impl->reset();
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XSLTProcessor_ConstructorCallback");

  Document& document = *ToDocument(ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext()));
  XSLTProcessor* impl = XSLTProcessor::Create(document);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), &V8XSLTProcessor::wrapperTypeInfo, wrapper);
  V8SetReturnValue(info, wrapper);
}

} // namespace XSLTProcessorV8Internal

void V8XSLTProcessor::importStylesheetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XSLTProcessor_importStylesheet");

  XSLTProcessorV8Internal::importStylesheetMethod(info);
}

void V8XSLTProcessor::transformToFragmentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XSLTProcessor_transformToFragment");

  XSLTProcessorV8Internal::transformToFragmentMethod(info);
}

void V8XSLTProcessor::transformToDocumentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XSLTProcessor_transformToDocument");

  XSLTProcessorV8Internal::transformToDocumentMethod(info);
}

void V8XSLTProcessor::setParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XSLTProcessor_setParameter");

  XSLTProcessorV8Internal::setParameterMethod(info);
}

void V8XSLTProcessor::getParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XSLTProcessor_getParameter");

  XSLTProcessorV8Internal::getParameterMethod(info);
}

void V8XSLTProcessor::removeParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XSLTProcessor_removeParameter");

  XSLTProcessorV8Internal::removeParameterMethod(info);
}

void V8XSLTProcessor::clearParametersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XSLTProcessor_clearParameters");

  XSLTProcessorV8Internal::clearParametersMethod(info);
}

void V8XSLTProcessor::resetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XSLTProcessor_reset");

  XSLTProcessorV8Internal::resetMethod(info);
}

static const V8DOMConfiguration::MethodConfiguration V8XSLTProcessorMethods[] = {
    {"importStylesheet", V8XSLTProcessor::importStylesheetMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"transformToFragment", V8XSLTProcessor::transformToFragmentMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"transformToDocument", V8XSLTProcessor::transformToDocumentMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setParameter", V8XSLTProcessor::setParameterMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getParameter", V8XSLTProcessor::getParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeParameter", V8XSLTProcessor::removeParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearParameters", V8XSLTProcessor::clearParametersMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"reset", V8XSLTProcessor::resetMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8XSLTProcessor::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XSLTProcessor_Constructor");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kXSLTProcessor);
  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("XSLTProcessor"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  XSLTProcessorV8Internal::constructor(info);
}

static void installV8XSLTProcessorTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8XSLTProcessor::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8XSLTProcessor::internalFieldCount);
  interfaceTemplate->SetCallHandler(V8XSLTProcessor::constructorCallback);
  interfaceTemplate->SetLength(0);

  if (!RuntimeEnabledFeatures::XSLTEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8XSLTProcessorMethods, arraysize(V8XSLTProcessorMethods));

  // Custom signature

  V8XSLTProcessor::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8XSLTProcessor::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::XSLTEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8XSLTProcessor::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8XSLTProcessorTemplate);
}

bool V8XSLTProcessor::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8XSLTProcessor::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

XSLTProcessor* V8XSLTProcessor::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

XSLTProcessor* NativeValueTraits<XSLTProcessor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  XSLTProcessor* nativeValue = V8XSLTProcessor::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "XSLTProcessor"));
  }
  return nativeValue;
}

}  // namespace blink

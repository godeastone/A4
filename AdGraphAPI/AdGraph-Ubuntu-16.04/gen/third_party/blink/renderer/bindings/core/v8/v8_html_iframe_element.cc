// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_html_iframe_element.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/binding_security.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_token_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_policy.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_window.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/core/html_names.h"
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
WrapperTypeInfo V8HTMLIFrameElement::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8HTMLIFrameElement::domTemplate,
    nullptr,
    "HTMLIFrameElement",
    &V8HTMLElement::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLIFrameElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& HTMLIFrameElement::wrapper_type_info_ = V8HTMLIFrameElement::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, HTMLIFrameElement>::value,
    "HTMLIFrameElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&HTMLIFrameElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLIFrameElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace HTMLIFrameElementV8Internal {

static void srcAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->GetURLAttribute(HTMLNames::srcAttr), info.GetIsolate());
}

static void srcAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLIFrameElement", "src");

  // Prepare the value to be set.
  V8StringResource<> cppValue = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setAttribute(HTMLNames::srcAttr, cppValue);
}

static void srcdocAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(HTMLNames::srcdocAttr), info.GetIsolate());
}

static void srcdocAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setAttribute(HTMLNames::srcdocAttr, cppValue);
}

static void nameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->GetNameAttribute(), info.GetIsolate());
}

static void nameAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setAttribute(HTMLNames::nameAttr, cppValue);
}

static void sandboxAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->sandbox()), impl);
}

static void sandboxAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // [PutForwards] => sandbox.value
  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLIFrameElement", "sandbox");
  v8::Local<v8::Value> target;
  if (!holder->Get(isolate->GetCurrentContext(), V8AtomicString(isolate, "sandbox")).ToLocal(&target))
    return;
  if (!target->IsObject()) {
    exceptionState.ThrowTypeError("The attribute value is not an object");
    return;
  }
  bool result;
  if (!target.As<v8::Object>()->Set(isolate->GetCurrentContext(), V8AtomicString(isolate, "value"), v8Value).To(&result))
    return;
  if (!result)
    return;
}

static void allowFullscreenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(HTMLNames::allowfullscreenAttr));
}

static void allowFullscreenAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLIFrameElement", "allowFullscreen");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->SetBooleanAttribute(HTMLNames::allowfullscreenAttr, cppValue);
}

static void widthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(HTMLNames::widthAttr), info.GetIsolate());
}

static void widthAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setAttribute(HTMLNames::widthAttr, cppValue);
}

static void heightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(HTMLNames::heightAttr), info.GetIsolate());
}

static void heightAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setAttribute(HTMLNames::heightAttr, cppValue);
}

static void contentDocumentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  // Perform a security check for the returned object.
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kGetterContext, "HTMLIFrameElement", "contentDocument");
  if (!BindingSecurity::ShouldAllowAccessTo(CurrentDOMWindow(info.GetIsolate()), WTF::GetPtr(impl->contentDocument()), BindingSecurity::ErrorReportOption::kDoNotReport)) {
    UseCounter::Count(CurrentExecutionContext(info.GetIsolate()),
                      WebFeature::kCrossOriginHTMLIFrameElementContentDocument);
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValue(info, ToV8(WTF::GetPtr(impl->contentDocument()), ToV8(impl->contentWindow(), v8::Local<v8::Object>(), info.GetIsolate()).As<v8::Object>(), info.GetIsolate()));
}

static void contentWindowAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->contentWindow()), impl);
}

static void referrerPolicyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  String cppValue(impl->FastGetAttribute(HTMLNames::referrerpolicyAttr));

  if (cppValue.IsEmpty()) {
    ;
  } else if (EqualIgnoringASCIICase(cppValue, "")) {
    cppValue = "";
  } else if (EqualIgnoringASCIICase(cppValue, "no-referrer")) {
    cppValue = "no-referrer";
  } else if (EqualIgnoringASCIICase(cppValue, "origin")) {
    cppValue = "origin";
  } else if (EqualIgnoringASCIICase(cppValue, "no-referrer-when-downgrade")) {
    cppValue = "no-referrer-when-downgrade";
  } else if (EqualIgnoringASCIICase(cppValue, "origin-when-cross-origin")) {
    cppValue = "origin-when-cross-origin";
  } else if (EqualIgnoringASCIICase(cppValue, "unsafe-url")) {
    cppValue = "unsafe-url";
  } else {
    cppValue = "";
  }

  V8SetReturnValueString(info, cppValue, info.GetIsolate());
}

static void referrerPolicyAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setAttribute(HTMLNames::referrerpolicyAttr, cppValue);
}

static void cspAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(HTMLNames::cspAttr), info.GetIsolate());
}

static void cspAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setAttribute(HTMLNames::cspAttr, cppValue);
}

static void allowAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(HTMLNames::allowAttr), info.GetIsolate());
}

static void allowAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setAttribute(HTMLNames::allowAttr, cppValue);
}

static void policyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->policy()), impl);
}

static void alignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(HTMLNames::alignAttr), info.GetIsolate());
}

static void alignAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setAttribute(HTMLNames::alignAttr, cppValue);
}

static void scrollingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(HTMLNames::scrollingAttr), info.GetIsolate());
}

static void scrollingAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setAttribute(HTMLNames::scrollingAttr, cppValue);
}

static void frameBorderAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(HTMLNames::frameborderAttr), info.GetIsolate());
}

static void frameBorderAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setAttribute(HTMLNames::frameborderAttr, cppValue);
}

static void longDescAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->GetURLAttribute(HTMLNames::longdescAttr), info.GetIsolate());
}

static void longDescAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "HTMLIFrameElement", "longDesc");

  // Prepare the value to be set.
  V8StringResource<> cppValue = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setAttribute(HTMLNames::longdescAttr, cppValue);
}

static void marginHeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(HTMLNames::marginheightAttr), info.GetIsolate());
}

static void marginHeightAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAsEmptyString> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setAttribute(HTMLNames::marginheightAttr, cppValue);
}

static void marginWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(HTMLNames::marginwidthAttr), info.GetIsolate());
}

static void marginWidthAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAsEmptyString> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  impl->setAttribute(HTMLNames::marginwidthAttr, cppValue);
}

static void getSVGDocumentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLIFrameElement", "getSVGDocument");

  HTMLIFrameElement* impl = V8HTMLIFrameElement::ToImpl(info.Holder());

  if (!BindingSecurity::ShouldAllowAccessTo(CurrentDOMWindow(info.GetIsolate()), impl->getSVGDocument(exceptionState), BindingSecurity::ErrorReportOption::kDoNotReport)) {
    UseCounter::Count(CurrentExecutionContext(info.GetIsolate()),
                      WebFeature::kCrossOriginHTMLIFrameElementGetSVGDocument);
    V8SetReturnValueNull(info);
    return;
  }

  Document* result = impl->getSVGDocument(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, ToV8(result, ToV8(impl->contentWindow(), v8::Local<v8::Object>(), info.GetIsolate()).As<v8::Object>(), info.GetIsolate()));
}

} // namespace HTMLIFrameElementV8Internal

void V8HTMLIFrameElement::srcAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_src_Getter");

  HTMLIFrameElementV8Internal::srcAttributeGetter(info);
}

void V8HTMLIFrameElement::srcAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_src_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLIFrameElementV8Internal::srcAttributeSetter(v8Value, info);
}

void V8HTMLIFrameElement::srcdocAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_srcdoc_Getter");

  HTMLIFrameElementV8Internal::srcdocAttributeGetter(info);
}

void V8HTMLIFrameElement::srcdocAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_srcdoc_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLIFrameElementV8Internal::srcdocAttributeSetter(v8Value, info);
}

void V8HTMLIFrameElement::nameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_name_Getter");

  HTMLIFrameElementV8Internal::nameAttributeGetter(info);
}

void V8HTMLIFrameElement::nameAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_name_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLIFrameElementV8Internal::nameAttributeSetter(v8Value, info);
}

void V8HTMLIFrameElement::sandboxAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_sandbox_Getter");

  HTMLIFrameElementV8Internal::sandboxAttributeGetter(info);
}

void V8HTMLIFrameElement::sandboxAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_sandbox_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  HTMLIFrameElementV8Internal::sandboxAttributeSetter(v8Value, info);
}

void V8HTMLIFrameElement::allowFullscreenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_allowFullscreen_Getter");

  HTMLIFrameElementV8Internal::allowFullscreenAttributeGetter(info);
}

void V8HTMLIFrameElement::allowFullscreenAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_allowFullscreen_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLIFrameElementV8Internal::allowFullscreenAttributeSetter(v8Value, info);
}

void V8HTMLIFrameElement::widthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_width_Getter");

  HTMLIFrameElementV8Internal::widthAttributeGetter(info);
}

void V8HTMLIFrameElement::widthAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_width_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLIFrameElementV8Internal::widthAttributeSetter(v8Value, info);
}

void V8HTMLIFrameElement::heightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_height_Getter");

  HTMLIFrameElementV8Internal::heightAttributeGetter(info);
}

void V8HTMLIFrameElement::heightAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_height_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLIFrameElementV8Internal::heightAttributeSetter(v8Value, info);
}

void V8HTMLIFrameElement::contentDocumentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_contentDocument_Getter");

  HTMLIFrameElementV8Internal::contentDocumentAttributeGetter(info);
}

void V8HTMLIFrameElement::contentWindowAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_contentWindow_Getter");

  HTMLIFrameElementV8Internal::contentWindowAttributeGetter(info);
}

void V8HTMLIFrameElement::referrerPolicyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_referrerPolicy_Getter");

  HTMLIFrameElementV8Internal::referrerPolicyAttributeGetter(info);
}

void V8HTMLIFrameElement::referrerPolicyAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_referrerPolicy_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLIFrameElementV8Internal::referrerPolicyAttributeSetter(v8Value, info);
}

void V8HTMLIFrameElement::cspAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_csp_Getter");

  HTMLIFrameElementV8Internal::cspAttributeGetter(info);
}

void V8HTMLIFrameElement::cspAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_csp_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLIFrameElementV8Internal::cspAttributeSetter(v8Value, info);
}

void V8HTMLIFrameElement::allowAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_allow_Getter");

  HTMLIFrameElementV8Internal::allowAttributeGetter(info);
}

void V8HTMLIFrameElement::allowAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_allow_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLIFrameElementV8Internal::allowAttributeSetter(v8Value, info);
}

void V8HTMLIFrameElement::policyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_policy_Getter");

  HTMLIFrameElementV8Internal::policyAttributeGetter(info);
}

void V8HTMLIFrameElement::alignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_align_Getter");

  HTMLIFrameElementV8Internal::alignAttributeGetter(info);
}

void V8HTMLIFrameElement::alignAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_align_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLIFrameElementV8Internal::alignAttributeSetter(v8Value, info);
}

void V8HTMLIFrameElement::scrollingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_scrolling_Getter");

  HTMLIFrameElementV8Internal::scrollingAttributeGetter(info);
}

void V8HTMLIFrameElement::scrollingAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_scrolling_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLIFrameElementV8Internal::scrollingAttributeSetter(v8Value, info);
}

void V8HTMLIFrameElement::frameBorderAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_frameBorder_Getter");

  HTMLIFrameElementV8Internal::frameBorderAttributeGetter(info);
}

void V8HTMLIFrameElement::frameBorderAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_frameBorder_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLIFrameElementV8Internal::frameBorderAttributeSetter(v8Value, info);
}

void V8HTMLIFrameElement::longDescAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_longDesc_Getter");

  HTMLIFrameElementV8Internal::longDescAttributeGetter(info);
}

void V8HTMLIFrameElement::longDescAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_longDesc_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLIFrameElementV8Internal::longDescAttributeSetter(v8Value, info);
}

void V8HTMLIFrameElement::marginHeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_marginHeight_Getter");

  HTMLIFrameElementV8Internal::marginHeightAttributeGetter(info);
}

void V8HTMLIFrameElement::marginHeightAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_marginHeight_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLIFrameElementV8Internal::marginHeightAttributeSetter(v8Value, info);
}

void V8HTMLIFrameElement::marginWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_marginWidth_Getter");

  HTMLIFrameElementV8Internal::marginWidthAttributeGetter(info);
}

void V8HTMLIFrameElement::marginWidthAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_marginWidth_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  CEReactionsScope ceReactionsScope;

  HTMLIFrameElementV8Internal::marginWidthAttributeSetter(v8Value, info);
}

void V8HTMLIFrameElement::getSVGDocumentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_getSVGDocument");

  HTMLIFrameElementV8Internal::getSVGDocumentMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8HTMLIFrameElementAccessors[] = {
    { "src", V8HTMLIFrameElement::srcAttributeGetterCallback, V8HTMLIFrameElement::srcAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "srcdoc", V8HTMLIFrameElement::srcdocAttributeGetterCallback, V8HTMLIFrameElement::srcdocAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "name", V8HTMLIFrameElement::nameAttributeGetterCallback, V8HTMLIFrameElement::nameAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "sandbox", V8HTMLIFrameElement::sandboxAttributeGetterCallback, V8HTMLIFrameElement::sandboxAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "allowFullscreen", V8HTMLIFrameElement::allowFullscreenAttributeGetterCallback, V8HTMLIFrameElement::allowFullscreenAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "width", V8HTMLIFrameElement::widthAttributeGetterCallback, V8HTMLIFrameElement::widthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "height", V8HTMLIFrameElement::heightAttributeGetterCallback, V8HTMLIFrameElement::heightAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "contentDocument", V8HTMLIFrameElement::contentDocumentAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "contentWindow", V8HTMLIFrameElement::contentWindowAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "referrerPolicy", V8HTMLIFrameElement::referrerPolicyAttributeGetterCallback, V8HTMLIFrameElement::referrerPolicyAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "allow", V8HTMLIFrameElement::allowAttributeGetterCallback, V8HTMLIFrameElement::allowAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "align", V8HTMLIFrameElement::alignAttributeGetterCallback, V8HTMLIFrameElement::alignAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "scrolling", V8HTMLIFrameElement::scrollingAttributeGetterCallback, V8HTMLIFrameElement::scrollingAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "frameBorder", V8HTMLIFrameElement::frameBorderAttributeGetterCallback, V8HTMLIFrameElement::frameBorderAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "longDesc", V8HTMLIFrameElement::longDescAttributeGetterCallback, V8HTMLIFrameElement::longDescAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "marginHeight", V8HTMLIFrameElement::marginHeightAttributeGetterCallback, V8HTMLIFrameElement::marginHeightAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "marginWidth", V8HTMLIFrameElement::marginWidthAttributeGetterCallback, V8HTMLIFrameElement::marginWidthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8HTMLIFrameElementMethods[] = {
    {"getSVGDocument", V8HTMLIFrameElement::getSVGDocumentMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8HTMLIFrameElement::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLIFrameElement_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("HTMLIFrameElement"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  V8HTMLConstructor::HtmlConstructor(info, V8HTMLIFrameElement::wrapperTypeInfo, HTMLElementType::kHTMLIFrameElement);
}

void V8HTMLIFrameElement::installV8HTMLIFrameElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8HTMLIFrameElement::wrapperTypeInfo.interface_name, V8HTMLElement::domTemplate(isolate, world), V8HTMLIFrameElement::internalFieldCount);
  interfaceTemplate->SetCallHandler(V8HTMLIFrameElement::constructorCallback);
  interfaceTemplate->SetLength(0);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8HTMLIFrameElementAccessors, arraysize(V8HTMLIFrameElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8HTMLIFrameElementMethods, arraysize(V8HTMLIFrameElementMethods));

  // Custom signature
}

void V8HTMLIFrameElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::EmbedderCSPEnforcementEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "csp", V8HTMLIFrameElement::cspAttributeGetterCallback, V8HTMLIFrameElement::cspAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, accessor_configurations,
        arraysize(accessor_configurations));
  }
  if (RuntimeEnabledFeatures::FeaturePolicyJavaScriptInterfaceEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "policy", V8HTMLIFrameElement::policyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, accessor_configurations,
        arraysize(accessor_configurations));
  }

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8HTMLIFrameElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), V8HTMLIFrameElement::installV8HTMLIFrameElementTemplateFunction);
}

bool V8HTMLIFrameElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8HTMLIFrameElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLIFrameElement* V8HTMLIFrameElement::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

HTMLIFrameElement* NativeValueTraits<HTMLIFrameElement>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  HTMLIFrameElement* nativeValue = V8HTMLIFrameElement::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "HTMLIFrameElement"));
  }
  return nativeValue;
}

InstallRuntimeEnabledFeaturesOnTemplateFunction
V8HTMLIFrameElement::install_runtime_enabled_features_on_template_function_ =
    &V8HTMLIFrameElement::InstallRuntimeEnabledFeaturesOnTemplate;

InstallTemplateFunction V8HTMLIFrameElement::installV8HTMLIFrameElementTemplateFunction =
    &V8HTMLIFrameElement::installV8HTMLIFrameElementTemplate;

void V8HTMLIFrameElement::UpdateWrapperTypeInfo(
    InstallTemplateFunction install_template_function,
    InstallRuntimeEnabledFeaturesFunction install_runtime_enabled_features_function,
    InstallRuntimeEnabledFeaturesOnTemplateFunction install_runtime_enabled_features_on_template_function,
    InstallConditionalFeaturesFunction install_conditional_features_function) {
  V8HTMLIFrameElement::installV8HTMLIFrameElementTemplateFunction =
      install_template_function;

  CHECK(install_runtime_enabled_features_on_template_function);
  V8HTMLIFrameElement::install_runtime_enabled_features_on_template_function_ =
      install_runtime_enabled_features_on_template_function;

  if (install_conditional_features_function) {
    V8HTMLIFrameElement::wrapperTypeInfo.install_conditional_features_function =
        install_conditional_features_function;
  }
}

}  // namespace blink

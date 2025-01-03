// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_location.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/binding_security.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_cross_origin_setter_info.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_string_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_url.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8Location::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8Location::domTemplate,
    nullptr,
    "Location",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Location.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& Location::wrapper_type_info_ = V8Location::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Location>::value,
    "Location inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Location::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "Location is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace LocationV8Internal {

static void ancestorOriginsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Location* impl = V8Location::ToImpl(holder);

  DOMStringList* cppValue(WTF::GetPtr(impl->ancestorOrigins()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Location#ancestorOrigins")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void hrefAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Location* impl = V8Location::ToImpl(holder);

  USVStringOrTrustedURL result;
  impl->href(result);

  V8SetReturnValue(info, result);
}

static void hrefAttributeSetter(v8::Local<v8::Value> v8Value, const V8CrossOriginSetterInfo& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Location* impl = V8Location::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "Location", "href");

  // Prepare the value to be set.
  USVStringOrTrustedURL cppValue;
  V8USVStringOrTrustedURL::ToImpl(info.GetIsolate(), v8Value, cppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setHref(CurrentDOMWindow(info.GetIsolate()), EnteredDOMWindow(info.GetIsolate()), cppValue, exceptionState);
}

static void originAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Location* impl = V8Location::ToImpl(holder);

  V8SetReturnValueString(info, impl->origin(), info.GetIsolate());
}

static void protocolAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Location* impl = V8Location::ToImpl(holder);

  V8SetReturnValueString(info, impl->protocol(), info.GetIsolate());
}

static void protocolAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Location* impl = V8Location::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "Location", "protocol");

  // Prepare the value to be set.
  V8StringResource<> cppValue = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setProtocol(CurrentDOMWindow(info.GetIsolate()), EnteredDOMWindow(info.GetIsolate()), cppValue, exceptionState);
}

static void hostAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Location* impl = V8Location::ToImpl(holder);

  V8SetReturnValueString(info, impl->host(), info.GetIsolate());
}

static void hostAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Location* impl = V8Location::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "Location", "host");

  // Prepare the value to be set.
  V8StringResource<> cppValue = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setHost(CurrentDOMWindow(info.GetIsolate()), EnteredDOMWindow(info.GetIsolate()), cppValue, exceptionState);
}

static void hostnameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Location* impl = V8Location::ToImpl(holder);

  V8SetReturnValueString(info, impl->hostname(), info.GetIsolate());
}

static void hostnameAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Location* impl = V8Location::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "Location", "hostname");

  // Prepare the value to be set.
  V8StringResource<> cppValue = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setHostname(CurrentDOMWindow(info.GetIsolate()), EnteredDOMWindow(info.GetIsolate()), cppValue, exceptionState);
}

static void portAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Location* impl = V8Location::ToImpl(holder);

  V8SetReturnValueString(info, impl->port(), info.GetIsolate());
}

static void portAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Location* impl = V8Location::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "Location", "port");

  // Prepare the value to be set.
  V8StringResource<> cppValue = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setPort(CurrentDOMWindow(info.GetIsolate()), EnteredDOMWindow(info.GetIsolate()), cppValue, exceptionState);
}

static void pathnameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Location* impl = V8Location::ToImpl(holder);

  V8SetReturnValueString(info, impl->pathname(), info.GetIsolate());
}

static void pathnameAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Location* impl = V8Location::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "Location", "pathname");

  // Prepare the value to be set.
  V8StringResource<> cppValue = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setPathname(CurrentDOMWindow(info.GetIsolate()), EnteredDOMWindow(info.GetIsolate()), cppValue, exceptionState);
}

static void searchAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Location* impl = V8Location::ToImpl(holder);

  V8SetReturnValueString(info, impl->search(), info.GetIsolate());
}

static void searchAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Location* impl = V8Location::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "Location", "search");

  // Prepare the value to be set.
  V8StringResource<> cppValue = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setSearch(CurrentDOMWindow(info.GetIsolate()), EnteredDOMWindow(info.GetIsolate()), cppValue, exceptionState);
}

static void hashAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Location* impl = V8Location::ToImpl(holder);

  V8SetReturnValueString(info, impl->hash(), info.GetIsolate());
}

static void hashAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Location* impl = V8Location::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "Location", "hash");

  // Prepare the value to be set.
  V8StringResource<> cppValue = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setHash(CurrentDOMWindow(info.GetIsolate()), EnteredDOMWindow(info.GetIsolate()), cppValue, exceptionState);
}

static void assignMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Location", "assign");

  Location* impl = V8Location::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> url;
  url = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->assign(CurrentDOMWindow(info.GetIsolate()), EnteredDOMWindow(info.GetIsolate()), url, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void assignOriginSafeMethodGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  static int domTemplateKey; // This address is used for a key to look up the dom template.
  V8PerIsolateData* data = V8PerIsolateData::From(info.GetIsolate());
  const DOMWrapperWorld& world = DOMWrapperWorld::World(info.GetIsolate()->GetCurrentContext());
  v8::Local<v8::FunctionTemplate> interfaceTemplate = data->FindInterfaceTemplate(world, &V8Location::wrapperTypeInfo);
  v8::Local<v8::Signature> signature = v8::Signature::New(info.GetIsolate(), interfaceTemplate);

  v8::Local<v8::FunctionTemplate> methodTemplate = data->FindOrCreateOperationTemplate(world, &domTemplateKey, V8Location::assignMethodCallback, V8Undefined(), signature, 1);
  // Return the function by default, unless the user script has overwritten it.
  V8SetReturnValue(info, methodTemplate->GetFunction(info.GetIsolate()->GetCurrentContext()).ToLocalChecked());

  Location* impl = V8Location::ToImpl(info.Holder());
  if (!BindingSecurity::ShouldAllowAccessTo(CurrentDOMWindow(info.GetIsolate()), impl, BindingSecurity::ErrorReportOption::kDoNotReport)) {
    return;
  }

  // {{method.name}} must be same with |methodName| (=name) in
  // {{cpp_class}}OriginSafeMethodSetter defined in interface.cpp.tmpl.
  V8PrivateProperty::Symbol propertySymbol =
      V8PrivateProperty::GetSymbol(info.GetIsolate(), "assign");
  v8::Local<v8::Object> holder = v8::Local<v8::Object>::Cast(info.Holder());
  if (propertySymbol.HasValue(holder)) {
    V8SetReturnValue(info, propertySymbol.GetOrUndefined(holder));
  }
}

static void replaceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Location", "replace");

  Location* impl = V8Location::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> url;
  url = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->replace(CurrentDOMWindow(info.GetIsolate()), EnteredDOMWindow(info.GetIsolate()), url, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void replaceOriginSafeMethodGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  static int domTemplateKey; // This address is used for a key to look up the dom template.
  V8PerIsolateData* data = V8PerIsolateData::From(info.GetIsolate());
  const DOMWrapperWorld& world = DOMWrapperWorld::World(info.GetIsolate()->GetCurrentContext());
  v8::Local<v8::FunctionTemplate> interfaceTemplate = data->FindInterfaceTemplate(world, &V8Location::wrapperTypeInfo);
  v8::Local<v8::Signature> signature = v8::Signature::New(info.GetIsolate(), interfaceTemplate);

  v8::Local<v8::FunctionTemplate> methodTemplate = data->FindOrCreateOperationTemplate(world, &domTemplateKey, V8Location::replaceMethodCallback, V8Undefined(), signature, 1);
  // Return the function by default, unless the user script has overwritten it.
  V8SetReturnValue(info, methodTemplate->GetFunction(info.GetIsolate()->GetCurrentContext()).ToLocalChecked());

  Location* impl = V8Location::ToImpl(info.Holder());
  if (!BindingSecurity::ShouldAllowAccessTo(CurrentDOMWindow(info.GetIsolate()), impl, BindingSecurity::ErrorReportOption::kDoNotReport)) {
    return;
  }

  // {{method.name}} must be same with |methodName| (=name) in
  // {{cpp_class}}OriginSafeMethodSetter defined in interface.cpp.tmpl.
  V8PrivateProperty::Symbol propertySymbol =
      V8PrivateProperty::GetSymbol(info.GetIsolate(), "replace");
  v8::Local<v8::Object> holder = v8::Local<v8::Object>::Cast(info.Holder());
  if (propertySymbol.HasValue(holder)) {
    V8SetReturnValue(info, propertySymbol.GetOrUndefined(holder));
  }
}

static void reloadMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Location* impl = V8Location::ToImpl(info.Holder());

  impl->reload(CurrentDOMWindow(info.GetIsolate()));
}

static void toStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Location* impl = V8Location::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->toString(), info.GetIsolate());
}

static void valueOfMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Location* impl = V8Location::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  V8SetReturnValue(info, impl->valueOf(ScriptValue(scriptState, info.Holder())).V8Value());
}

static const struct {
  using GetterCallback = void(*)(const v8::PropertyCallbackInfo<v8::Value>&);
  using SetterCallback = void(*)(v8::Local<v8::Value>, const V8CrossOriginSetterInfo&);

  const char* const name;
  const GetterCallback getter;
  const SetterCallback setter;
} kCrossOriginAttributeTable[] = {
  {
    "href",
    nullptr,
    &LocationV8Internal::hrefAttributeSetter,
  },
  {"assign", &LocationV8Internal::assignOriginSafeMethodGetter, nullptr},
  {"replace", &LocationV8Internal::replaceOriginSafeMethodGetter, nullptr},
};
} // namespace LocationV8Internal

void V8Location::ancestorOriginsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_ancestorOrigins_Getter");

  LocationV8Internal::ancestorOriginsAttributeGetter(info);
}

void V8Location::hrefAttributeGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_href_Getter");

  LocationV8Internal::hrefAttributeGetter(info);
}

void V8Location::hrefAttributeSetterCallback(v8::Local<v8::Name>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_href_Setter");

  LocationV8Internal::hrefAttributeSetter(v8Value, V8CrossOriginSetterInfo(info.GetIsolate(), info.Holder()));
}

void V8Location::originAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_origin_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kLocationOrigin);

  LocationV8Internal::originAttributeGetter(info);
}

void V8Location::protocolAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_protocol_Getter");

  LocationV8Internal::protocolAttributeGetter(info);
}

void V8Location::protocolAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_protocol_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  LocationV8Internal::protocolAttributeSetter(v8Value, info);
}

void V8Location::hostAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_host_Getter");

  LocationV8Internal::hostAttributeGetter(info);
}

void V8Location::hostAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_host_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  LocationV8Internal::hostAttributeSetter(v8Value, info);
}

void V8Location::hostnameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_hostname_Getter");

  LocationV8Internal::hostnameAttributeGetter(info);
}

void V8Location::hostnameAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_hostname_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  LocationV8Internal::hostnameAttributeSetter(v8Value, info);
}

void V8Location::portAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_port_Getter");

  LocationV8Internal::portAttributeGetter(info);
}

void V8Location::portAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_port_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  LocationV8Internal::portAttributeSetter(v8Value, info);
}

void V8Location::pathnameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_pathname_Getter");

  LocationV8Internal::pathnameAttributeGetter(info);
}

void V8Location::pathnameAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_pathname_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  LocationV8Internal::pathnameAttributeSetter(v8Value, info);
}

void V8Location::searchAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_search_Getter");

  LocationV8Internal::searchAttributeGetter(info);
}

void V8Location::searchAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_search_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  LocationV8Internal::searchAttributeSetter(v8Value, info);
}

void V8Location::hashAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_hash_Getter");

  LocationV8Internal::hashAttributeGetter(info);
}

void V8Location::hashAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_hash_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  LocationV8Internal::hashAttributeSetter(v8Value, info);
}

void V8Location::assignMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_assign");

  LocationV8Internal::assignMethod(info);
}

void V8Location::assignOriginSafeMethodGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_assign_OriginSafeMethodGetter");

  LocationV8Internal::assignOriginSafeMethodGetter(info);
}

void V8Location::replaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_replace");

  LocationV8Internal::replaceMethod(info);
}

void V8Location::replaceOriginSafeMethodGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_replace_OriginSafeMethodGetter");

  LocationV8Internal::replaceOriginSafeMethodGetter(info);
}

void V8Location::reloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_reload");

  LocationV8Internal::reloadMethod(info);
}

void V8Location::toStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_toString");

  LocationV8Internal::toStringMethod(info);
}

void V8Location::valueOfMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_valueOf");

  LocationV8Internal::valueOfMethod(info);
}

bool V8Location::securityCheck(v8::Local<v8::Context> accessingContext, v8::Local<v8::Object> accessedObject, v8::Local<v8::Value> data) {
  Location* impl = V8Location::ToImpl(accessedObject);
  return BindingSecurity::ShouldAllowAccessTo(ToLocalDOMWindow(accessingContext), impl, BindingSecurity::ErrorReportOption::kDoNotReport);
}

void V8Location::crossOriginNamedGetter(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_CrossOriginNamedGetter");

  if (!name->IsString())
    return;
  const AtomicString& propertyName = ToCoreAtomicString(name.As<v8::String>());

  for (const auto& attribute : LocationV8Internal::kCrossOriginAttributeTable) {
    if (propertyName == attribute.name && attribute.getter) {
      attribute.getter(info);
      return;
    }
  }

  // HTML 7.2.3.3 CrossOriginGetOwnPropertyHelper ( O, P )
  // https://html.spec.whatwg.org/multipage/browsers.html#crossorigingetownpropertyhelper-(-o,-p-)
  // step 3. If P is "then", @@toStringTag, @@hasInstance, or
  //   @@isConcatSpreadable, then return PropertyDescriptor{ [[Value]]:
  //   undefined, [[Writable]]: false, [[Enumerable]]: false,
  //   [[Configurable]]: true }.
  if (propertyName == "then") {
    V8SetReturnValue(info, v8::Undefined(info.GetIsolate()));
    return;
  }

  BindingSecurity::FailedAccessCheckFor(
      info.GetIsolate(),
      &V8Location::wrapperTypeInfo,
      info.Holder());
}

void V8Location::crossOriginNamedSetter(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Location_CrossOriginNamedSetter");

  if (!name->IsString())
    return;
  const AtomicString& propertyName = ToCoreAtomicString(name.As<v8::String>());

  for (const auto& attribute : LocationV8Internal::kCrossOriginAttributeTable) {
    if (propertyName == attribute.name && attribute.setter) {
      attribute.setter(value, V8CrossOriginSetterInfo(info.GetIsolate(), info.Holder()));
      return;
    }
  }

  BindingSecurity::FailedAccessCheckFor(
      info.GetIsolate(),
      &V8Location::wrapperTypeInfo,
      info.Holder());
}

void V8Location::crossOriginNamedEnumerator(const v8::PropertyCallbackInfo<v8::Array>& info) {
  Vector<String> names;
  for (const auto& attribute : LocationV8Internal::kCrossOriginAttributeTable)
    names.push_back(attribute.name);

  // Use the current context as the creation context, as a cross-origin access
  // may involve an object that does not have a creation context.
  V8SetReturnValue(info,
                   ToV8(names, info.GetIsolate()->GetCurrentContext()->Global(),
                        info.GetIsolate()).As<v8::Array>());
}

// Suppress warning: global constructors, because AttributeConfiguration is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
static const V8DOMConfiguration::AttributeConfiguration V8LocationAttributes[] = {
    { "href", V8Location::hrefAttributeGetterCallback, V8Location::hrefAttributeSetterCallback, static_cast<v8::PropertyAttribute>(v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds },
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

static const V8DOMConfiguration::AccessorConfiguration V8LocationAccessors[] = {
    { "ancestorOrigins", V8Location::ancestorOriginsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "origin", V8Location::originAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "protocol", V8Location::protocolAttributeGetterCallback, V8Location::protocolAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "host", V8Location::hostAttributeGetterCallback, V8Location::hostAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "hostname", V8Location::hostnameAttributeGetterCallback, V8Location::hostnameAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "port", V8Location::portAttributeGetterCallback, V8Location::portAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "pathname", V8Location::pathnameAttributeGetterCallback, V8Location::pathnameAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "search", V8Location::searchAttributeGetterCallback, V8Location::searchAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "hash", V8Location::hashAttributeGetterCallback, V8Location::hashAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8LocationMethods[] = {
    {"reload", V8Location::reloadMethodCallback, 0, static_cast<v8::PropertyAttribute>(v8::ReadOnly | v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"toString", V8Location::toStringMethodCallback, 0, static_cast<v8::PropertyAttribute>(v8::ReadOnly | v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"valueOf", V8Location::valueOfMethodCallback, 0, static_cast<v8::PropertyAttribute>(v8::DontEnum | v8::ReadOnly | v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8LocationTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Location::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8Location::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAttributes(
      isolate, world, instanceTemplate, prototypeTemplate,
      V8LocationAttributes, arraysize(V8LocationAttributes));
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8LocationAccessors, arraysize(V8LocationAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8LocationMethods, arraysize(V8LocationMethods));

  // Cross-origin access check
  instanceTemplate->SetAccessCheckCallbackAndHandler(
      V8Location::securityCheck,
      v8::NamedPropertyHandlerConfiguration(
          V8Location::crossOriginNamedGetter,
          V8Location::crossOriginNamedSetter,
          nullptr,
          nullptr,
          V8Location::crossOriginNamedEnumerator),
      v8::IndexedPropertyHandlerConfiguration(nullptr),
      v8::External::New(isolate, const_cast<WrapperTypeInfo*>(&V8Location::wrapperTypeInfo)));

  // Symbol.toPrimitive
  // Prevent author scripts to inject Symbol.toPrimitive property into location
  // objects, also prevent the look-up of Symbol.toPrimitive through the
  // prototype chain.
  instanceTemplate->Set(v8::Symbol::GetToPrimitive(isolate),
                        v8::Undefined(isolate),
                        static_cast<v8::PropertyAttribute>(
                            v8::ReadOnly | v8::DontEnum | v8::DontDelete));

  // Custom signature
  static const V8DOMConfiguration::AttributeConfiguration assignOriginSafeAttributeConfiguration[] = {
      {"assign", V8Location::assignOriginSafeMethodGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::ReadOnly | v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& attributeConfig : assignOriginSafeAttributeConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeConfig);
  static const V8DOMConfiguration::AttributeConfiguration replaceOriginSafeAttributeConfiguration[] = {
      {"replace", V8Location::replaceOriginSafeMethodGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::ReadOnly | v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& attributeConfig : replaceOriginSafeAttributeConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeConfig);

  V8Location::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8Location::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8Location::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8LocationTemplate);
}

bool V8Location::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Location::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Location* V8Location::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

Location* NativeValueTraits<Location>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  Location* nativeValue = V8Location::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Location"));
  }
  return nativeValue;
}

}  // namespace blink

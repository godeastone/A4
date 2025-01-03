// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abstract_event_listener.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_listener_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_form_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_url_search_params.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request_upload.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
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
const WrapperTypeInfo V8XMLHttpRequest::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8XMLHttpRequest::domTemplate,
    nullptr,
    "XMLHttpRequest",
    &V8XMLHttpRequestEventTarget::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in XMLHttpRequest.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& XMLHttpRequest::wrapper_type_info_ = V8XMLHttpRequest::wrapperTypeInfo;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, XMLHttpRequest>::value,
    "XMLHttpRequest does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&XMLHttpRequest::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "XMLHttpRequest is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace XMLHttpRequestV8Internal {

static void onreadystatechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onreadystatechange()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onreadystatechangeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnreadystatechange(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void readyStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->readyState());
}

static void timeoutAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->timeout());
}

static void timeoutAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "XMLHttpRequest", "timeout");

  // Prepare the value to be set.
  uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8Value, exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setTimeout(cppValue, exceptionState);
}

static void withCredentialsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  V8SetReturnValueBool(info, impl->withCredentials());
}

static void withCredentialsAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "XMLHttpRequest", "withCredentials");

  // Prepare the value to be set.
  bool cppValue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8Value, exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setWithCredentials(cppValue, exceptionState);
}

static void uploadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  XMLHttpRequestUpload* cppValue(WTF::GetPtr(impl->upload()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#XMLHttpRequest#upload")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void responseURLAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  V8SetReturnValueString(info, impl->responseURL(), info.GetIsolate());
}

static void statusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->status());
}

static void statusTextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  V8SetReturnValueString(info, impl->statusText(), info.GetIsolate());
}

static void responseTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  V8SetReturnValueString(info, impl->responseType(), info.GetIsolate());
}

static void responseTypeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  ExceptionState exceptionState(isolate, ExceptionState::kSetterContext, "XMLHttpRequest", "responseType");

  // Prepare the value to be set.
  V8StringResource<> cppValue = v8Value;
  if (!cppValue.Prepare())
    return;

  // Type check per: http://heycam.github.io/webidl/#dfn-attribute-setter
  // Returns undefined without setting the value if the value is invalid.
  DummyExceptionStateForTesting dummyExceptionState;
  const char* validValues[] = {
      "",
      "arraybuffer",
      "blob",
      "document",
      "json",
      "text",
  };
  if (!IsValidEnum(cppValue, validValues, arraysize(validValues), "XMLHttpRequestResponseType", dummyExceptionState)) {
    ExecutionContext::ForCurrentRealm(info)->AddConsoleMessage(
        ConsoleMessage::Create(kJSMessageSource, kWarningMessageLevel,
                               dummyExceptionState.Message()));
    return;
  }

  impl->setResponseType(cppValue, exceptionState);
}

static void responseXMLAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(holder);

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kGetterContext, "XMLHttpRequest", "responseXML");

  Document* cppValue(impl->responseXML(exceptionState));

  if (UNLIKELY(exceptionState.HadException()))
    return;

  V8SetReturnValueFast(info, cppValue, impl);
}

static void open1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "XMLHttpRequest", "open");

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(info.Holder());

  V8StringResource<> method;
  V8StringResource<> url;
  method = NativeValueTraits<IDLByteString>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  url = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->open(method, url, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void open2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "XMLHttpRequest", "open");

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(info.Holder());

  V8StringResource<> method;
  V8StringResource<> url;
  bool async;
  V8StringResource<kTreatNullAndUndefinedAsNullString> username;
  V8StringResource<kTreatNullAndUndefinedAsNullString> password;
  method = NativeValueTraits<IDLByteString>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  url = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  async = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    username = NativeValueTraits<IDLUSVStringBase<kTreatNullAndUndefinedAsNullString>>::NativeValue(info.GetIsolate(), info[3], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    username = nullptr;
  }
  if (!info[4]->IsUndefined()) {
    password = NativeValueTraits<IDLUSVStringBase<kTreatNullAndUndefinedAsNullString>>::NativeValue(info.GetIsolate(), info[4], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    password = nullptr;
  }

  impl->open(method, url, async, username, password, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void openMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(5, info.Length())) {
    case 2:
      if (true) {
        open1Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        open2Method(info);
        return;
      }
      break;
    case 4:
      if (true) {
        open2Method(info);
        return;
      }
      break;
    case 5:
      if (true) {
        open2Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "XMLHttpRequest", "open");
  if (isArityError) {
    if (info.Length() < 2) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void setRequestHeaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "XMLHttpRequest", "setRequestHeader");

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> name;
  V8StringResource<> value;
  name = NativeValueTraits<IDLByteString>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  value = NativeValueTraits<IDLByteString>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setRequestHeader(name, value, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void sendMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "XMLHttpRequest", "send");

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(info.Holder());

  ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormDataOrURLSearchParams body;
  if (!info[0]->IsUndefined()) {
    V8ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormDataOrURLSearchParams::ToImpl(info.GetIsolate(), info[0], body, UnionTypeConversionMode::kNullable, exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    /* null default value */;
  }

  impl->send(body, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void abortMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(info.Holder());

  impl->abort();
}

static void getResponseHeaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "XMLHttpRequest", "getResponseHeader");

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> name;
  name = NativeValueTraits<IDLByteString>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueStringOrNull(info, impl->getResponseHeader(name), info.GetIsolate());
}

static void getAllResponseHeadersMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->getAllResponseHeaders(), info.GetIsolate());
}

static void overrideMimeTypeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "XMLHttpRequest", "overrideMimeType");

  XMLHttpRequest* impl = V8XMLHttpRequest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> mime;
  mime = info[0];
  if (!mime.Prepare())
    return;

  impl->overrideMimeType(mime, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_ConstructorCallback");

  ScriptState* scriptState = ScriptState::From(
      info.NewTarget().As<v8::Object>()->CreationContext());

  XMLHttpRequest* impl = XMLHttpRequest::Create(scriptState);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), &V8XMLHttpRequest::wrapperTypeInfo, wrapper);
  V8SetReturnValue(info, wrapper);
}

} // namespace XMLHttpRequestV8Internal

void V8XMLHttpRequest::onreadystatechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_onreadystatechange_Getter");

  XMLHttpRequestV8Internal::onreadystatechangeAttributeGetter(info);
}

void V8XMLHttpRequest::onreadystatechangeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_onreadystatechange_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  XMLHttpRequestV8Internal::onreadystatechangeAttributeSetter(v8Value, info);
}

void V8XMLHttpRequest::readyStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_readyState_Getter");

  XMLHttpRequestV8Internal::readyStateAttributeGetter(info);
}

void V8XMLHttpRequest::timeoutAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_timeout_Getter");

  XMLHttpRequestV8Internal::timeoutAttributeGetter(info);
}

void V8XMLHttpRequest::timeoutAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_timeout_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  XMLHttpRequestV8Internal::timeoutAttributeSetter(v8Value, info);
}

void V8XMLHttpRequest::withCredentialsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_withCredentials_Getter");

  XMLHttpRequestV8Internal::withCredentialsAttributeGetter(info);
}

void V8XMLHttpRequest::withCredentialsAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_withCredentials_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  XMLHttpRequestV8Internal::withCredentialsAttributeSetter(v8Value, info);
}

void V8XMLHttpRequest::uploadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_upload_Getter");

  XMLHttpRequestV8Internal::uploadAttributeGetter(info);
}

void V8XMLHttpRequest::responseURLAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_responseURL_Getter");

  XMLHttpRequestV8Internal::responseURLAttributeGetter(info);
}

void V8XMLHttpRequest::statusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_status_Getter");

  XMLHttpRequestV8Internal::statusAttributeGetter(info);
}

void V8XMLHttpRequest::statusTextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_statusText_Getter");

  XMLHttpRequestV8Internal::statusTextAttributeGetter(info);
}

void V8XMLHttpRequest::responseTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_responseType_Getter");

  XMLHttpRequestV8Internal::responseTypeAttributeGetter(info);
}

void V8XMLHttpRequest::responseTypeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_responseType_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  XMLHttpRequestV8Internal::responseTypeAttributeSetter(v8Value, info);
}

void V8XMLHttpRequest::responseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_response_Getter");

  V8XMLHttpRequest::responseAttributeGetterCustom(info);
}

void V8XMLHttpRequest::responseTextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_responseText_Getter");

  V8XMLHttpRequest::responseTextAttributeGetterCustom(info);
}

void V8XMLHttpRequest::responseXMLAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_responseXML_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kXMLHttpRequestResponseXML);

  XMLHttpRequestV8Internal::responseXMLAttributeGetter(info);
}

void V8XMLHttpRequest::openMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_open");

  XMLHttpRequestV8Internal::openMethod(info);
}

void V8XMLHttpRequest::setRequestHeaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_setRequestHeader");

  XMLHttpRequestV8Internal::setRequestHeaderMethod(info);
}

void V8XMLHttpRequest::sendMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_send");

  XMLHttpRequestV8Internal::sendMethod(info);
}

void V8XMLHttpRequest::abortMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_abort");

  XMLHttpRequestV8Internal::abortMethod(info);
}

void V8XMLHttpRequest::getResponseHeaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_getResponseHeader");

  XMLHttpRequestV8Internal::getResponseHeaderMethod(info);
}

void V8XMLHttpRequest::getAllResponseHeadersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_getAllResponseHeaders");

  XMLHttpRequestV8Internal::getAllResponseHeadersMethod(info);
}

void V8XMLHttpRequest::overrideMimeTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_overrideMimeType");

  XMLHttpRequestV8Internal::overrideMimeTypeMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8XMLHttpRequestAccessors[] = {
    { "onreadystatechange", V8XMLHttpRequest::onreadystatechangeAttributeGetterCallback, V8XMLHttpRequest::onreadystatechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "readyState", V8XMLHttpRequest::readyStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "timeout", V8XMLHttpRequest::timeoutAttributeGetterCallback, V8XMLHttpRequest::timeoutAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "withCredentials", V8XMLHttpRequest::withCredentialsAttributeGetterCallback, V8XMLHttpRequest::withCredentialsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "upload", V8XMLHttpRequest::uploadAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "responseURL", V8XMLHttpRequest::responseURLAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "status", V8XMLHttpRequest::statusAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "statusText", V8XMLHttpRequest::statusTextAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "responseType", V8XMLHttpRequest::responseTypeAttributeGetterCallback, V8XMLHttpRequest::responseTypeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "response", V8XMLHttpRequest::responseAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "responseText", V8XMLHttpRequest::responseTextAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "responseXML", V8XMLHttpRequest::responseXMLAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8XMLHttpRequestMethods[] = {
    {"open", V8XMLHttpRequest::openMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setRequestHeader", V8XMLHttpRequest::setRequestHeaderMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"send", V8XMLHttpRequest::sendMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"abort", V8XMLHttpRequest::abortMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getResponseHeader", V8XMLHttpRequest::getResponseHeaderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getAllResponseHeaders", V8XMLHttpRequest::getAllResponseHeadersMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"overrideMimeType", V8XMLHttpRequest::overrideMimeTypeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8XMLHttpRequest::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequest_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("XMLHttpRequest"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  XMLHttpRequestV8Internal::constructor(info);
}

static void installV8XMLHttpRequestTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8XMLHttpRequest::wrapperTypeInfo.interface_name, V8XMLHttpRequestEventTarget::domTemplate(isolate, world), V8XMLHttpRequest::internalFieldCount);
  interfaceTemplate->SetCallHandler(V8XMLHttpRequest::constructorCallback);
  interfaceTemplate->SetLength(0);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  static constexpr V8DOMConfiguration::ConstantConfiguration V8XMLHttpRequestConstants[] = {
      {"UNSENT", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
      {"OPENED", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
      {"HEADERS_RECEIVED", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
      {"LOADING", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
      {"DONE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
  };
  V8DOMConfiguration::InstallConstants(
      isolate, interfaceTemplate, prototypeTemplate,
      V8XMLHttpRequestConstants, arraysize(V8XMLHttpRequestConstants));
  static_assert(0 == XMLHttpRequest::kUnsent, "the value of XMLHttpRequest_kUnsent does not match with implementation");
  static_assert(1 == XMLHttpRequest::kOpened, "the value of XMLHttpRequest_kOpened does not match with implementation");
  static_assert(2 == XMLHttpRequest::kHeadersReceived, "the value of XMLHttpRequest_kHeadersReceived does not match with implementation");
  static_assert(3 == XMLHttpRequest::kLoading, "the value of XMLHttpRequest_kLoading does not match with implementation");
  static_assert(4 == XMLHttpRequest::kDone, "the value of XMLHttpRequest_kDone does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8XMLHttpRequestAccessors, arraysize(V8XMLHttpRequestAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8XMLHttpRequestMethods, arraysize(V8XMLHttpRequestMethods));

  // Custom signature

  V8XMLHttpRequest::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8XMLHttpRequest::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8XMLHttpRequest::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8XMLHttpRequestTemplate);
}

bool V8XMLHttpRequest::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8XMLHttpRequest::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

XMLHttpRequest* V8XMLHttpRequest::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

XMLHttpRequest* NativeValueTraits<XMLHttpRequest>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  XMLHttpRequest* nativeValue = V8XMLHttpRequest::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "XMLHttpRequest"));
  }
  return nativeValue;
}

}  // namespace blink

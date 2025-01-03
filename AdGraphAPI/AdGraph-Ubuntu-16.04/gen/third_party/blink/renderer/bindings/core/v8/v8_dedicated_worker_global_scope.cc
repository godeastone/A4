// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_dedicated_worker_global_scope.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/serialization/serialized_script_value_factory.h"
#include "third_party/blink/renderer/bindings/core/v8/serialization/transferables.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abort_controller.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abort_signal.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abstract_event_listener.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_custom_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dedicated_worker_global_scope.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_exception.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_point.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_point_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_quad.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_string_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_listener_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_target.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file_reader.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file_reader_sync.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_font_face.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_form_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_headers.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_bitmap.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_message_channel.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_message_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_message_port.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_handle.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_interface_interceptor.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_interface_request_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_watcher.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_offscreen_canvas.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_entry.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_observer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_observer_entry_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_resource_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_server_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_progress_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_promise_rejection_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_request.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_response.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_html.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_script_url.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_url.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_url.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_url_search_params.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_global_scope.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_location.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_navigator.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request_event_target.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request_upload.h"
#include "third_party/blink/renderer/core/dedicated_worker_global_scope_core_constructors.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/fetch/global_fetch.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/imagebitmap/image_bitmap.h"
#include "third_party/blink/renderer/core/timing/worker_global_scope_performance.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_array_buffer_base.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
WrapperTypeInfo V8DedicatedWorkerGlobalScope::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8DedicatedWorkerGlobalScope::domTemplate,
    nullptr,
    "DedicatedWorkerGlobalScope",
    &V8WorkerGlobalScope::wrapperTypeInfo,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DedicatedWorkerGlobalScope.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DedicatedWorkerGlobalScope::wrapper_type_info_ = V8DedicatedWorkerGlobalScope::wrapperTypeInfo;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, DedicatedWorkerGlobalScope>::value,
    "DedicatedWorkerGlobalScope does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&DedicatedWorkerGlobalScope::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DedicatedWorkerGlobalScope is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace DedicatedWorkerGlobalScopeV8Internal {

static void onmessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onmessage()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onmessageAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnmessage(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void onmessageerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(holder);

  EventListener* cppValue(WTF::GetPtr(impl->onmessageerror()));

  V8SetReturnValue(info, cppValue ? V8AbstractEventListener::Cast(cppValue)->GetListenerOrNull(info.GetIsolate(), impl->GetExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onmessageerrorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnmessageerror(V8EventListenerHelper::GetEventListener(ScriptState::ForRelevantRealm(info), v8Value, true, kListenerFindOrCreate));
}

static void postMessageImpl(const char* interfaceName, DedicatedWorkerGlobalScope* instance, const v8::FunctionCallbackInfo<v8::Value>& info) {
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

static void closeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(info.Holder());

  impl->close();
}

} // namespace DedicatedWorkerGlobalScopeV8Internal

void V8DedicatedWorkerGlobalScope::onmessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_onmessage_Getter");

  DedicatedWorkerGlobalScopeV8Internal::onmessageAttributeGetter(info);
}

void V8DedicatedWorkerGlobalScope::onmessageAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_onmessage_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DedicatedWorkerGlobalScopeV8Internal::onmessageAttributeSetter(v8Value, info);
}

void V8DedicatedWorkerGlobalScope::onmessageerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_onmessageerror_Getter");

  DedicatedWorkerGlobalScopeV8Internal::onmessageerrorAttributeGetter(info);
}

void V8DedicatedWorkerGlobalScope::onmessageerrorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_onmessageerror_Setter");

  v8::Local<v8::Value> v8Value = info[0];

  DedicatedWorkerGlobalScopeV8Internal::onmessageerrorAttributeSetter(v8Value, info);
}

void V8DedicatedWorkerGlobalScope::MojoConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Mojo_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Mojo::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::MojoHandleConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_MojoHandle_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MojoHandle::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::MojoWatcherConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_MojoWatcher_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MojoWatcher::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::MojoInterfaceInterceptorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_MojoInterfaceInterceptor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MojoInterfaceInterceptor::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::MojoInterfaceRequestEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_MojoInterfaceRequestEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MojoInterfaceRequestEvent::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::FontFaceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_FontFace_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8FontFace::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::OffscreenCanvasConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_OffscreenCanvas_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8OffscreenCanvas::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::PerformanceServerTimingConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PerformanceServerTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PerformanceServerTiming::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::TrustedHTMLConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_TrustedHTML_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TrustedHTML::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::TrustedScriptURLConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_TrustedScriptURL_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TrustedScriptURL::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::TrustedURLConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_TrustedURL_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TrustedURL::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::AbortControllerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_AbortController_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AbortController::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::AbortSignalConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_AbortSignal_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8AbortSignal::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::BlobConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Blob_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Blob::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::CustomEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_CustomEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CustomEvent::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::DOMExceptionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_DOMException_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMException::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::DOMMatrixConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_DOMMatrix_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMMatrix::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::DOMMatrixReadOnlyConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_DOMMatrixReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMMatrixReadOnly::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::DOMPointConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_DOMPoint_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMPoint::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::DOMPointReadOnlyConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_DOMPointReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMPointReadOnly::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::DOMQuadConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_DOMQuad_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMQuad::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::DOMRectConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_DOMRect_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMRect::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::DOMRectReadOnlyConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_DOMRectReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMRectReadOnly::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::DOMStringListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_DOMStringList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DOMStringList::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::DedicatedWorkerGlobalScopeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_DedicatedWorkerGlobalScope_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8DedicatedWorkerGlobalScope::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::EventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Event_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Event::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::EventTargetConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_EventTarget_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8EventTarget::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::FileConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_File_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8File::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::FileListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_FileList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8FileList::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::FileReaderConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_FileReader_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8FileReader::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::FileReaderSyncConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_FileReaderSync_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8FileReaderSync::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::FormDataConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_FormData_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8FormData::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::HeadersConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Headers_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Headers::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::ImageBitmapConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_ImageBitmap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ImageBitmap::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::ImageDataConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_ImageData_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ImageData::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::MessageChannelConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_MessageChannel_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MessageChannel::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::MessageEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_MessageEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MessageEvent::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::MessagePortConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_MessagePort_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8MessagePort::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::PerformanceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Performance_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Performance::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::PerformanceEntryConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PerformanceEntry_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PerformanceEntry::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::PerformanceObserverConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PerformanceObserver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PerformanceObserver::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::PerformanceObserverEntryListConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PerformanceObserverEntryList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PerformanceObserverEntryList::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::PerformanceResourceTimingConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PerformanceResourceTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PerformanceResourceTiming::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::ProgressEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_ProgressEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ProgressEvent::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::PromiseRejectionEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PromiseRejectionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PromiseRejectionEvent::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::RequestConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Request_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Request::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::ResponseConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Response_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Response::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::URLConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_URL_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8URL::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::URLSearchParamsConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_URLSearchParams_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8URLSearchParams::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::WorkerGlobalScopeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WorkerGlobalScope_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WorkerGlobalScope::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::WorkerLocationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WorkerLocation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WorkerLocation::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::WorkerNavigatorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WorkerNavigator_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WorkerNavigator::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::XMLHttpRequestConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_XMLHttpRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XMLHttpRequest::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::XMLHttpRequestEventTargetConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_XMLHttpRequestEventTarget_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XMLHttpRequestEventTarget::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::XMLHttpRequestUploadConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_XMLHttpRequestUpload_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8XMLHttpRequestUpload::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScope::postMessageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_postMessage");

  DedicatedWorkerGlobalScopeV8Internal::postMessageImpl("DedicatedWorkerGlobalScope", V8DedicatedWorkerGlobalScope::ToImpl(info.Holder()), info);
}

void V8DedicatedWorkerGlobalScope::closeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_close");

  DedicatedWorkerGlobalScopeV8Internal::closeMethod(info);
}

// Suppress warning: global constructors, because AttributeConfiguration is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
static const V8DOMConfiguration::AttributeConfiguration V8DedicatedWorkerGlobalScopeLazyDataAttributes[] = {
    { "AbortController", V8DedicatedWorkerGlobalScope::AbortControllerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "AbortSignal", V8DedicatedWorkerGlobalScope::AbortSignalConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Blob", V8DedicatedWorkerGlobalScope::BlobConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CustomEvent", V8DedicatedWorkerGlobalScope::CustomEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMException", V8DedicatedWorkerGlobalScope::DOMExceptionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMMatrix", V8DedicatedWorkerGlobalScope::DOMMatrixConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMMatrixReadOnly", V8DedicatedWorkerGlobalScope::DOMMatrixReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMPoint", V8DedicatedWorkerGlobalScope::DOMPointConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMPointReadOnly", V8DedicatedWorkerGlobalScope::DOMPointReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMQuad", V8DedicatedWorkerGlobalScope::DOMQuadConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMRect", V8DedicatedWorkerGlobalScope::DOMRectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMRectReadOnly", V8DedicatedWorkerGlobalScope::DOMRectReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DOMStringList", V8DedicatedWorkerGlobalScope::DOMStringListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "DedicatedWorkerGlobalScope", V8DedicatedWorkerGlobalScope::DedicatedWorkerGlobalScopeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Event", V8DedicatedWorkerGlobalScope::EventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "EventTarget", V8DedicatedWorkerGlobalScope::EventTargetConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "File", V8DedicatedWorkerGlobalScope::FileConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "FileList", V8DedicatedWorkerGlobalScope::FileListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "FileReader", V8DedicatedWorkerGlobalScope::FileReaderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "FileReaderSync", V8DedicatedWorkerGlobalScope::FileReaderSyncConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "FormData", V8DedicatedWorkerGlobalScope::FormDataConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Headers", V8DedicatedWorkerGlobalScope::HeadersConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ImageBitmap", V8DedicatedWorkerGlobalScope::ImageBitmapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ImageData", V8DedicatedWorkerGlobalScope::ImageDataConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MessageChannel", V8DedicatedWorkerGlobalScope::MessageChannelConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MessageEvent", V8DedicatedWorkerGlobalScope::MessageEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "MessagePort", V8DedicatedWorkerGlobalScope::MessagePortConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Performance", V8DedicatedWorkerGlobalScope::PerformanceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PerformanceEntry", V8DedicatedWorkerGlobalScope::PerformanceEntryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PerformanceObserver", V8DedicatedWorkerGlobalScope::PerformanceObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PerformanceObserverEntryList", V8DedicatedWorkerGlobalScope::PerformanceObserverEntryListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PerformanceResourceTiming", V8DedicatedWorkerGlobalScope::PerformanceResourceTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ProgressEvent", V8DedicatedWorkerGlobalScope::ProgressEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "PromiseRejectionEvent", V8DedicatedWorkerGlobalScope::PromiseRejectionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Request", V8DedicatedWorkerGlobalScope::RequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Response", V8DedicatedWorkerGlobalScope::ResponseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "URL", V8DedicatedWorkerGlobalScope::URLConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "URLSearchParams", V8DedicatedWorkerGlobalScope::URLSearchParamsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WorkerGlobalScope", V8DedicatedWorkerGlobalScope::WorkerGlobalScopeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WorkerLocation", V8DedicatedWorkerGlobalScope::WorkerLocationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WorkerNavigator", V8DedicatedWorkerGlobalScope::WorkerNavigatorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "XMLHttpRequest", V8DedicatedWorkerGlobalScope::XMLHttpRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "XMLHttpRequestEventTarget", V8DedicatedWorkerGlobalScope::XMLHttpRequestEventTargetConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "XMLHttpRequestUpload", V8DedicatedWorkerGlobalScope::XMLHttpRequestUploadConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

static const V8DOMConfiguration::AccessorConfiguration V8DedicatedWorkerGlobalScopeAccessors[] = {
    { "onmessage", V8DedicatedWorkerGlobalScope::onmessageAttributeGetterCallback, V8DedicatedWorkerGlobalScope::onmessageAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "onmessageerror", V8DedicatedWorkerGlobalScope::onmessageerrorAttributeGetterCallback, V8DedicatedWorkerGlobalScope::onmessageerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8DedicatedWorkerGlobalScopeMethods[] = {
    {"postMessage", V8DedicatedWorkerGlobalScope::postMessageMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"close", V8DedicatedWorkerGlobalScope::closeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8DedicatedWorkerGlobalScope::installV8DedicatedWorkerGlobalScopeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8DedicatedWorkerGlobalScope::wrapperTypeInfo.interface_name, V8WorkerGlobalScope::domTemplate(isolate, world), V8DedicatedWorkerGlobalScope::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Global object prototype chain consists of Immutable Prototype Exotic Objects
  prototypeTemplate->SetImmutableProto();

  // Global objects are Immutable Prototype Exotic Objects
  instanceTemplate->SetImmutableProto();

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallLazyDataAttributes(
      isolate, world, instanceTemplate, prototypeTemplate,
      V8DedicatedWorkerGlobalScopeLazyDataAttributes, arraysize(V8DedicatedWorkerGlobalScopeLazyDataAttributes));
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8DedicatedWorkerGlobalScopeAccessors, arraysize(V8DedicatedWorkerGlobalScopeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8DedicatedWorkerGlobalScopeMethods, arraysize(V8DedicatedWorkerGlobalScopeMethods));

  // Custom signature
}

void V8DedicatedWorkerGlobalScope::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::MojoJSEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "Mojo", V8DedicatedWorkerGlobalScope::MojoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "MojoHandle", V8DedicatedWorkerGlobalScope::MojoHandleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "MojoWatcher", V8DedicatedWorkerGlobalScope::MojoWatcherConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::MojoJSTestEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "MojoInterfaceInterceptor", V8DedicatedWorkerGlobalScope::MojoInterfaceInterceptorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "MojoInterfaceRequestEvent", V8DedicatedWorkerGlobalScope::MojoInterfaceRequestEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "OffscreenCanvas", V8DedicatedWorkerGlobalScope::OffscreenCanvasConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::OffscreenCanvasTextEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "FontFace", V8DedicatedWorkerGlobalScope::FontFaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::ServerTimingEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "PerformanceServerTiming", V8DedicatedWorkerGlobalScope::PerformanceServerTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::TrustedDOMTypesEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "TrustedHTML", V8DedicatedWorkerGlobalScope::TrustedHTMLConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "TrustedScriptURL", V8DedicatedWorkerGlobalScope::TrustedScriptURLConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "TrustedURL", V8DedicatedWorkerGlobalScope::TrustedURLConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }

  // Custom signature
}

void V8DedicatedWorkerGlobalScope::installMojoJS(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8DedicatedWorkerGlobalScope::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  static const V8DOMConfiguration::AttributeConfiguration attributeMojoConfiguration[] = {
    { "Mojo", V8DedicatedWorkerGlobalScope::MojoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& attributeConfig : attributeMojoConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  static const V8DOMConfiguration::AttributeConfiguration attributeMojoHandleConfiguration[] = {
    { "MojoHandle", V8DedicatedWorkerGlobalScope::MojoHandleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& attributeConfig : attributeMojoHandleConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  static const V8DOMConfiguration::AttributeConfiguration attributeMojoWatcherConfiguration[] = {
    { "MojoWatcher", V8DedicatedWorkerGlobalScope::MojoWatcherConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& attributeConfig : attributeMojoWatcherConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
}

void V8DedicatedWorkerGlobalScope::installMojoJS(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8DedicatedWorkerGlobalScope::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8DedicatedWorkerGlobalScope::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installMojoJS(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8DedicatedWorkerGlobalScope::installMojoJS(ScriptState* scriptState) {
  installMojoJS(scriptState, v8::Local<v8::Object>());
}

v8::Local<v8::FunctionTemplate> V8DedicatedWorkerGlobalScope::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), V8DedicatedWorkerGlobalScope::installV8DedicatedWorkerGlobalScopeTemplateFunction);
}

bool V8DedicatedWorkerGlobalScope::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DedicatedWorkerGlobalScope::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DedicatedWorkerGlobalScope* V8DedicatedWorkerGlobalScope::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DedicatedWorkerGlobalScope* NativeValueTraits<DedicatedWorkerGlobalScope>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DedicatedWorkerGlobalScope* nativeValue = V8DedicatedWorkerGlobalScope::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "DedicatedWorkerGlobalScope"));
  }
  return nativeValue;
}

InstallRuntimeEnabledFeaturesOnTemplateFunction
V8DedicatedWorkerGlobalScope::install_runtime_enabled_features_on_template_function_ =
    &V8DedicatedWorkerGlobalScope::InstallRuntimeEnabledFeaturesOnTemplate;

InstallTemplateFunction V8DedicatedWorkerGlobalScope::installV8DedicatedWorkerGlobalScopeTemplateFunction =
    &V8DedicatedWorkerGlobalScope::installV8DedicatedWorkerGlobalScopeTemplate;

void V8DedicatedWorkerGlobalScope::UpdateWrapperTypeInfo(
    InstallTemplateFunction install_template_function,
    InstallRuntimeEnabledFeaturesFunction install_runtime_enabled_features_function,
    InstallRuntimeEnabledFeaturesOnTemplateFunction install_runtime_enabled_features_on_template_function,
    InstallConditionalFeaturesFunction install_conditional_features_function) {
  V8DedicatedWorkerGlobalScope::installV8DedicatedWorkerGlobalScopeTemplateFunction =
      install_template_function;

  CHECK(install_runtime_enabled_features_on_template_function);
  V8DedicatedWorkerGlobalScope::install_runtime_enabled_features_on_template_function_ =
      install_runtime_enabled_features_on_template_function;

  if (install_conditional_features_function) {
    V8DedicatedWorkerGlobalScope::wrapperTypeInfo.install_conditional_features_function =
        install_conditional_features_function;
  }
}

}  // namespace blink

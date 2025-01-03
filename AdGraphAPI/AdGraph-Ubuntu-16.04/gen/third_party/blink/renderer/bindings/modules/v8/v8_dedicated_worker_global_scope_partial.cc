// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_dedicated_worker_global_scope_partial.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/serialization/serialized_script_value_factory.h"
#include "third_party/blink/renderer/bindings/core/v8/serialization/transferables.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dedicated_worker_global_scope.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_fetch.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_registration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_barcode_detector.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_broadcast_channel.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_budget_service.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_budget_state.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cache.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cache_storage.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_gradient.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_pattern.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_close_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_crypto.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_crypto_key.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_dom_file_system_sync.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_entry_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_entry_sync.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_error_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_event_source.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_face_detector.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_file_system_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_cursor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_cursor_with_value.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_database.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_factory.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_index.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_key_range.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_object_store.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_observation.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_observer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_open_db_request.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_request.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_transaction.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_version_change_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_navigation_preload_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_network_information.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_notification.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_offscreen_canvas_rendering_context_2d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_path_2d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_instruments.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_permission_status.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_permissions.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_push_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_push_subscription.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_push_subscription_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker_registration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_subtle_crypto.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sync_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_decoder.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_detector.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_encoder.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_alternate_interface.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_connection_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_device.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_endpoint.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_in_transfer_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_interface.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_isochronous_in_transfer_packet.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_isochronous_in_transfer_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_isochronous_out_transfer_packet.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_isochronous_out_transfer_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_out_transfer_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl2_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_websocket.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/imagebitmap/image_bitmap.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_array_buffer_base.h"
#include "third_party/blink/renderer/modules/cache_storage/global_cache_storage.h"
#include "third_party/blink/renderer/modules/crypto/worker_global_scope_crypto.h"
#include "third_party/blink/renderer/modules/dedicated_worker_global_scope_modules_constructors.h"
#include "third_party/blink/renderer/modules/filesystem/worker_global_scope_file_system.h"
#include "third_party/blink/renderer/modules/indexeddb/global_indexed_db.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

namespace DedicatedWorkerGlobalScopePartialV8Internal {

static void webkitRequestFileSystemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DedicatedWorkerGlobalScope", "webkitRequestFileSystem");

  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint16_t type;
  int64_t size;
  V8FileSystemCallback* successCallback;
  V8ErrorCallback* errorCallback;
  type = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  size = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  if (info[2]->IsObject()) {
    successCallback = V8FileSystemCallback::Create(info[2].As<v8::Object>());
  } else if (info[2]->IsNullOrUndefined()) {
    successCallback = nullptr;
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 3 is not an object.");
    return;
  }

  if (info[3]->IsObject()) {
    errorCallback = V8ErrorCallback::Create(info[3].As<v8::Object>());
  } else if (info[3]->IsNullOrUndefined()) {
    errorCallback = nullptr;
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 4 is not an object.");
    return;
  }

  WorkerGlobalScopeFileSystem::webkitRequestFileSystem(*impl, type, size, successCallback, errorCallback);
}

static void webkitRequestFileSystemSyncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DedicatedWorkerGlobalScope", "webkitRequestFileSystemSync");

  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint16_t type;
  int64_t size;
  type = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  size = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[1], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  DOMFileSystemSync* result = WorkerGlobalScopeFileSystem::webkitRequestFileSystemSync(*impl, type, size, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void webkitResolveLocalFileSystemURLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("webkitResolveLocalFileSystemURL", "DedicatedWorkerGlobalScope", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  V8StringResource<> url;
  V8EntryCallback* successCallback;
  V8ErrorCallback* errorCallback;
  url = info[0];
  if (!url.Prepare())
    return;

  if (info[1]->IsObject()) {
    successCallback = V8EntryCallback::Create(info[1].As<v8::Object>());
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("webkitResolveLocalFileSystemURL", "DedicatedWorkerGlobalScope", "The callback provided as parameter 2 is not an object."));
    return;
  }

  if (info[2]->IsObject()) {
    errorCallback = V8ErrorCallback::Create(info[2].As<v8::Object>());
  } else if (info[2]->IsNullOrUndefined()) {
    errorCallback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("webkitResolveLocalFileSystemURL", "DedicatedWorkerGlobalScope", "The callback provided as parameter 3 is not an object."));
    return;
  }

  WorkerGlobalScopeFileSystem::webkitResolveLocalFileSystemURL(*impl, url, successCallback, errorCallback);
}

static void webkitResolveLocalFileSystemSyncURLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DedicatedWorkerGlobalScope", "webkitResolveLocalFileSystemSyncURL");

  DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> url;
  url = info[0];
  if (!url.Prepare())
    return;

  EntrySync* result = WorkerGlobalScopeFileSystem::webkitResolveLocalFileSystemSyncURL(*impl, url, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

} // namespace DedicatedWorkerGlobalScopePartialV8Internal

void V8DedicatedWorkerGlobalScopePartial::BudgetStateConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_BudgetState_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BudgetState::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::LockConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Lock_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Lock::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::LockManagerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_LockManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8LockManager::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::BackgroundFetchFetchConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_BackgroundFetchFetch_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BackgroundFetchFetch::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::BackgroundFetchManagerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_BackgroundFetchManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BackgroundFetchManager::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::BackgroundFetchRegistrationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_BackgroundFetchRegistration_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BackgroundFetchRegistration::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::BudgetServiceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_BudgetService_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BudgetService::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::IDBObservationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBObservation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBObservation::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::IDBObserverConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBObserver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBObserver::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::NotificationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Notification_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Notification::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::CanvasGradientConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_CanvasGradient_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CanvasGradient::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::CanvasPatternConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_CanvasPattern_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CanvasPattern::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::OffscreenCanvasRenderingContext2DConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_OffscreenCanvasRenderingContext2D_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8OffscreenCanvasRenderingContext2D::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::Path2DConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Path2D_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Path2D::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::WebGL2RenderingContextConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WebGL2RenderingContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WebGL2RenderingContext::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::WebGLRenderingContextConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WebGLRenderingContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WebGLRenderingContext::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::PaymentInstrumentsConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PaymentInstruments_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PaymentInstruments::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::PermissionStatusConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PermissionStatus_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PermissionStatus::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::PermissionsConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Permissions_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Permissions::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::PushManagerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PushManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PushManager::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::PushSubscriptionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PushSubscription_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PushSubscription::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::PushSubscriptionOptionsConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_PushSubscriptionOptions_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8PushSubscriptionOptions::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::BarcodeDetectorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_BarcodeDetector_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BarcodeDetector::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::FaceDetectorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_FaceDetector_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8FaceDetector::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::TextDetectorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_TextDetector_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TextDetector::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::USBConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USB_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USB::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::USBAlternateInterfaceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBAlternateInterface_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBAlternateInterface::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::USBConfigurationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBConfiguration_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBConfiguration::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::USBConnectionEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBConnectionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBConnectionEvent::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::USBDeviceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBDevice_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBDevice::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::USBEndpointConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBEndpoint_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBEndpoint::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::USBInTransferResultConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBInTransferResult_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBInTransferResult::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::USBInterfaceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBInterface_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBInterface::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::USBIsochronousInTransferPacketConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBIsochronousInTransferPacket_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBIsochronousInTransferPacket::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::USBIsochronousInTransferResultConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBIsochronousInTransferResult_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBIsochronousInTransferResult::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::USBIsochronousOutTransferPacketConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBIsochronousOutTransferPacket_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBIsochronousOutTransferPacket::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::USBIsochronousOutTransferResultConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBIsochronousOutTransferResult_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBIsochronousOutTransferResult::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::USBOutTransferResultConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_USBOutTransferResult_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8USBOutTransferResult::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::CacheConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Cache_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Cache::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::CacheStorageConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_CacheStorage_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CacheStorage::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::NavigationPreloadManagerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_NavigationPreloadManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8NavigationPreloadManager::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::StorageManagerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_StorageManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8StorageManager::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::BroadcastChannelConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_BroadcastChannel_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8BroadcastChannel::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::CloseEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_CloseEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CloseEvent::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::CryptoConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_Crypto_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8Crypto::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::CryptoKeyConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_CryptoKey_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8CryptoKey::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::EventSourceConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_EventSource_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8EventSource::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::IDBCursorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBCursor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBCursor::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::IDBCursorWithValueConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBCursorWithValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBCursorWithValue::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::IDBDatabaseConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBDatabase_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBDatabase::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::IDBFactoryConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBFactory_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBFactory::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::IDBIndexConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBIndex_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBIndex::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::IDBKeyRangeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBKeyRange_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBKeyRange::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::IDBObjectStoreConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBObjectStore_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBObjectStore::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::IDBOpenDBRequestConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBOpenDBRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBOpenDBRequest::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::IDBRequestConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBRequest::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::IDBTransactionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBTransaction_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBTransaction::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::IDBVersionChangeEventConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_IDBVersionChangeEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8IDBVersionChangeEvent::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::NetworkInformationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_NetworkInformation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8NetworkInformation::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::ServiceWorkerRegistrationConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_ServiceWorkerRegistration_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8ServiceWorkerRegistration::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::SubtleCryptoConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_SubtleCrypto_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SubtleCrypto::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::SyncManagerConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_SyncManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8SyncManager::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::TextDecoderConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_TextDecoder_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TextDecoder::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::TextEncoderConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_TextEncoder_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8TextEncoder::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::WebSocketConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_WebSocket_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, &V8WebSocket::wrapperTypeInfo);
}

void V8DedicatedWorkerGlobalScopePartial::webkitRequestFileSystemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_webkitRequestFileSystem");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kRequestFileSystemWorker);
  DedicatedWorkerGlobalScopePartialV8Internal::webkitRequestFileSystemMethod(info);
}

void V8DedicatedWorkerGlobalScopePartial::webkitRequestFileSystemSyncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_webkitRequestFileSystemSync");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kRequestFileSystemSyncWorker);
  DedicatedWorkerGlobalScopePartialV8Internal::webkitRequestFileSystemSyncMethod(info);
}

void V8DedicatedWorkerGlobalScopePartial::webkitResolveLocalFileSystemURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_webkitResolveLocalFileSystemURL");

  DedicatedWorkerGlobalScopePartialV8Internal::webkitResolveLocalFileSystemURLMethod(info);
}

void V8DedicatedWorkerGlobalScopePartial::webkitResolveLocalFileSystemSyncURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DedicatedWorkerGlobalScope_webkitResolveLocalFileSystemSyncURL");

  DedicatedWorkerGlobalScopePartialV8Internal::webkitResolveLocalFileSystemSyncURLMethod(info);
}

// Suppress warning: global constructors, because AttributeConfiguration is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
static const V8DOMConfiguration::AttributeConfiguration V8DedicatedWorkerGlobalScopeLazyDataAttributes[] = {
    { "BroadcastChannel", V8DedicatedWorkerGlobalScopePartial::BroadcastChannelConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CloseEvent", V8DedicatedWorkerGlobalScopePartial::CloseEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "Crypto", V8DedicatedWorkerGlobalScopePartial::CryptoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "CryptoKey", V8DedicatedWorkerGlobalScopePartial::CryptoKeyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "EventSource", V8DedicatedWorkerGlobalScopePartial::EventSourceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBCursor", V8DedicatedWorkerGlobalScopePartial::IDBCursorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBCursorWithValue", V8DedicatedWorkerGlobalScopePartial::IDBCursorWithValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBDatabase", V8DedicatedWorkerGlobalScopePartial::IDBDatabaseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBFactory", V8DedicatedWorkerGlobalScopePartial::IDBFactoryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBIndex", V8DedicatedWorkerGlobalScopePartial::IDBIndexConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBKeyRange", V8DedicatedWorkerGlobalScopePartial::IDBKeyRangeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBObjectStore", V8DedicatedWorkerGlobalScopePartial::IDBObjectStoreConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBOpenDBRequest", V8DedicatedWorkerGlobalScopePartial::IDBOpenDBRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBRequest", V8DedicatedWorkerGlobalScopePartial::IDBRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBTransaction", V8DedicatedWorkerGlobalScopePartial::IDBTransactionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "IDBVersionChangeEvent", V8DedicatedWorkerGlobalScopePartial::IDBVersionChangeEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "NetworkInformation", V8DedicatedWorkerGlobalScopePartial::NetworkInformationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "ServiceWorkerRegistration", V8DedicatedWorkerGlobalScopePartial::ServiceWorkerRegistrationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SubtleCrypto", V8DedicatedWorkerGlobalScopePartial::SubtleCryptoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "SyncManager", V8DedicatedWorkerGlobalScopePartial::SyncManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "TextDecoder", V8DedicatedWorkerGlobalScopePartial::TextDecoderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "TextEncoder", V8DedicatedWorkerGlobalScopePartial::TextEncoderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "WebSocket", V8DedicatedWorkerGlobalScopePartial::WebSocketConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

void V8DedicatedWorkerGlobalScopePartial::installV8DedicatedWorkerGlobalScopeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DedicatedWorkerGlobalScope::installV8DedicatedWorkerGlobalScopeTemplate(isolate, world, interfaceTemplate);

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
  static constexpr V8DOMConfiguration::ConstantConfiguration V8DedicatedWorkerGlobalScopeConstants[] = {
      {"TEMPORARY", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
      {"PERSISTENT", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
  };
  V8DOMConfiguration::InstallConstants(
      isolate, interfaceTemplate, prototypeTemplate,
      V8DedicatedWorkerGlobalScopeConstants, arraysize(V8DedicatedWorkerGlobalScopeConstants));
  static_assert(0 == WorkerGlobalScopeFileSystem::kTemporary, "the value of DedicatedWorkerGlobalScope_kTemporary does not match with implementation");
  static_assert(1 == WorkerGlobalScopeFileSystem::kPersistent, "the value of DedicatedWorkerGlobalScope_kPersistent does not match with implementation");
  V8DOMConfiguration::InstallLazyDataAttributes(
      isolate, world, instanceTemplate, prototypeTemplate,
      V8DedicatedWorkerGlobalScopeLazyDataAttributes, arraysize(V8DedicatedWorkerGlobalScopeLazyDataAttributes));

  // Custom signature

  V8DedicatedWorkerGlobalScopePartial::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8DedicatedWorkerGlobalScopePartial::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  V8DedicatedWorkerGlobalScope::InstallRuntimeEnabledFeaturesOnTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  if (RuntimeEnabledFeatures::BackgroundFetchEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "BackgroundFetchFetch", V8DedicatedWorkerGlobalScopePartial::BackgroundFetchFetchConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "BackgroundFetchManager", V8DedicatedWorkerGlobalScopePartial::BackgroundFetchManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "BackgroundFetchRegistration", V8DedicatedWorkerGlobalScopePartial::BackgroundFetchRegistrationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::IDBObserverEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "IDBObservation", V8DedicatedWorkerGlobalScopePartial::IDBObservationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "IDBObserver", V8DedicatedWorkerGlobalScopePartial::IDBObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::NotificationsEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "Notification", V8DedicatedWorkerGlobalScopePartial::NotificationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "CanvasGradient", V8DedicatedWorkerGlobalScopePartial::CanvasGradientConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "CanvasPattern", V8DedicatedWorkerGlobalScopePartial::CanvasPatternConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "OffscreenCanvasRenderingContext2D", V8DedicatedWorkerGlobalScopePartial::OffscreenCanvasRenderingContext2DConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "Path2D", V8DedicatedWorkerGlobalScopePartial::Path2DConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "WebGL2RenderingContext", V8DedicatedWorkerGlobalScopePartial::WebGL2RenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "WebGLRenderingContext", V8DedicatedWorkerGlobalScopePartial::WebGLRenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::PaymentAppEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "PaymentInstruments", V8DedicatedWorkerGlobalScopePartial::PaymentInstrumentsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::PermissionsEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "Permissions", V8DedicatedWorkerGlobalScopePartial::PermissionsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PermissionStatus", V8DedicatedWorkerGlobalScopePartial::PermissionStatusConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::PushMessagingEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "PushManager", V8DedicatedWorkerGlobalScopePartial::PushManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PushSubscription", V8DedicatedWorkerGlobalScopePartial::PushSubscriptionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "PushSubscriptionOptions", V8DedicatedWorkerGlobalScopePartial::PushSubscriptionOptionsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::ShapeDetectionEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "BarcodeDetector", V8DedicatedWorkerGlobalScopePartial::BarcodeDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "FaceDetector", V8DedicatedWorkerGlobalScopePartial::FaceDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "TextDetector", V8DedicatedWorkerGlobalScopePartial::TextDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }
  if (RuntimeEnabledFeatures::WebUSBOnDedicatedAndSharedWorkersEnabled()) {
    static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
        { "USBAlternateInterface", V8DedicatedWorkerGlobalScopePartial::USBAlternateInterfaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBConfiguration", V8DedicatedWorkerGlobalScopePartial::USBConfigurationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBConnectionEvent", V8DedicatedWorkerGlobalScopePartial::USBConnectionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBDevice", V8DedicatedWorkerGlobalScopePartial::USBDeviceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBEndpoint", V8DedicatedWorkerGlobalScopePartial::USBEndpointConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBInterface", V8DedicatedWorkerGlobalScopePartial::USBInterfaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBInTransferResult", V8DedicatedWorkerGlobalScopePartial::USBInTransferResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBIsochronousInTransferPacket", V8DedicatedWorkerGlobalScopePartial::USBIsochronousInTransferPacketConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBIsochronousInTransferResult", V8DedicatedWorkerGlobalScopePartial::USBIsochronousInTransferResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBIsochronousOutTransferPacket", V8DedicatedWorkerGlobalScopePartial::USBIsochronousOutTransferPacketConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBIsochronousOutTransferResult", V8DedicatedWorkerGlobalScopePartial::USBIsochronousOutTransferResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        { "USBOutTransferResult", V8DedicatedWorkerGlobalScopePartial::USBOutTransferResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        attribute_configurations, arraysize(attribute_configurations));
  }

  // Custom signature
  if (RuntimeEnabledFeatures::FileSystemEnabled()) {
    const V8DOMConfiguration::MethodConfiguration webkitRequestFileSystemMethodConfiguration[] = {
      {"webkitRequestFileSystem", V8DedicatedWorkerGlobalScopePartial::webkitRequestFileSystemMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : webkitRequestFileSystemMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::FileSystemEnabled()) {
    const V8DOMConfiguration::MethodConfiguration webkitRequestFileSystemSyncMethodConfiguration[] = {
      {"webkitRequestFileSystemSync", V8DedicatedWorkerGlobalScopePartial::webkitRequestFileSystemSyncMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : webkitRequestFileSystemSyncMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::FileSystemEnabled()) {
    const V8DOMConfiguration::MethodConfiguration webkitResolveLocalFileSystemURLMethodConfiguration[] = {
      {"webkitResolveLocalFileSystemURL", V8DedicatedWorkerGlobalScopePartial::webkitResolveLocalFileSystemURLMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : webkitResolveLocalFileSystemURLMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::FileSystemEnabled()) {
    const V8DOMConfiguration::MethodConfiguration webkitResolveLocalFileSystemSyncURLMethodConfiguration[] = {
      {"webkitResolveLocalFileSystemSyncURL", V8DedicatedWorkerGlobalScopePartial::webkitResolveLocalFileSystemSyncURLMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : webkitResolveLocalFileSystemSyncURLMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
}

void V8DedicatedWorkerGlobalScopePartial::installBudgetQuery(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8DedicatedWorkerGlobalScope::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  static const V8DOMConfiguration::AttributeConfiguration attributeBudgetStateConfiguration[] = {
    { "BudgetState", V8DedicatedWorkerGlobalScopePartial::BudgetStateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& attributeConfig : attributeBudgetStateConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
}

void V8DedicatedWorkerGlobalScopePartial::installBudgetQuery(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8DedicatedWorkerGlobalScope::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8DedicatedWorkerGlobalScope::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installBudgetQuery(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8DedicatedWorkerGlobalScopePartial::installWebLocksAPI(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8DedicatedWorkerGlobalScope::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* executionContext = ToExecutionContext(isolate->GetCurrentContext());
  bool isSecureContext = (executionContext && executionContext->IsSecureContext());
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeLockConfiguration[] = {
      { "Lock", V8DedicatedWorkerGlobalScopePartial::LockConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeLockConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
  if (isSecureContext) {
    static const V8DOMConfiguration::AttributeConfiguration attributeLockManagerConfiguration[] = {
      { "LockManager", V8DedicatedWorkerGlobalScopePartial::LockManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& attributeConfig : attributeLockManagerConfiguration)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, attributeConfig);
  }
}

void V8DedicatedWorkerGlobalScopePartial::installWebLocksAPI(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8DedicatedWorkerGlobalScope::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8DedicatedWorkerGlobalScope::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installWebLocksAPI(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8DedicatedWorkerGlobalScopePartial::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instanceObject,
    v8::Local<v8::Object> prototypeObject,
    v8::Local<v8::Function> interfaceObject,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  CHECK(!interfaceTemplate.IsEmpty());
  DCHECK((!prototypeObject.IsEmpty() && !interfaceObject.IsEmpty()) ||
         !instanceObject.IsEmpty());
  V8DedicatedWorkerGlobalScope::InstallConditionalFeatures(
      context, world, instanceObject, prototypeObject, interfaceObject, interfaceTemplate);

  v8::Isolate* isolate = context->GetIsolate();

  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);
  bool isSecureContext = (executionContext && executionContext->IsSecureContext());

  if (!instanceObject.IsEmpty()) {
    if (isSecureContext) {
      static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
          { "Cache", V8DedicatedWorkerGlobalScopePartial::CacheConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "CacheStorage", V8DedicatedWorkerGlobalScopePartial::CacheStorageConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "NavigationPreloadManager", V8DedicatedWorkerGlobalScopePartial::NavigationPreloadManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "StorageManager", V8DedicatedWorkerGlobalScopePartial::StorageManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAttributes(
          isolate, world, instanceObject, prototypeObject,
          attribute_configurations, arraysize(attribute_configurations));
      if (RuntimeEnabledFeatures::BudgetEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "BudgetService", V8DedicatedWorkerGlobalScopePartial::BudgetServiceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instanceObject, prototypeObject,
            attribute_configurations, arraysize(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::WebUSBOnDedicatedAndSharedWorkersEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "USB", V8DedicatedWorkerGlobalScopePartial::USBConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instanceObject, prototypeObject,
            attribute_configurations, arraysize(attribute_configurations));
      }
    }
  }

  if (!prototypeObject.IsEmpty() || !interfaceObject.IsEmpty()) {
  }
}

void V8DedicatedWorkerGlobalScopePartial::initialize() {
  // Should be invoked from ModulesInitializer.
  V8DedicatedWorkerGlobalScope::UpdateWrapperTypeInfo(
      &V8DedicatedWorkerGlobalScopePartial::installV8DedicatedWorkerGlobalScopeTemplate,
      nullptr,
      &V8DedicatedWorkerGlobalScopePartial::InstallRuntimeEnabledFeaturesOnTemplate,
      V8DedicatedWorkerGlobalScopePartial::InstallConditionalFeatures);
}

}  // namespace blink

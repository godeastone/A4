// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_navigator_partial.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_form_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_navigator.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_budget_service.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_clipboard.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_credentials_container.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_deprecated_storage_quota.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_list.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_geolocation.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_keyboard.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_capabilities.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_devices.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_system_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_session.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_constraints.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_mime_type_array.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_navigator_user_media_error_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_navigator_user_media_success_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_network_information.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_nfc.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_permissions.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_plugin_array.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_presentation.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker_container.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_share_data.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/modules/battery/navigator_battery.h"
#include "third_party/blink/renderer/modules/beacon/navigator_beacon.h"
#include "third_party/blink/renderer/modules/bluetooth/navigator_bluetooth.h"
#include "third_party/blink/renderer/modules/budget/navigator_budget.h"
#include "third_party/blink/renderer/modules/clipboard/navigator_clipboard.h"
#include "third_party/blink/renderer/modules/credentialmanager/navigator_credentials.h"
#include "third_party/blink/renderer/modules/donottrack/navigator_do_not_track.h"
#include "third_party/blink/renderer/modules/encryptedmedia/navigator_request_media_key_system_access.h"
#include "third_party/blink/renderer/modules/gamepad/navigator_gamepad.h"
#include "third_party/blink/renderer/modules/geolocation/navigator_geolocation.h"
#include "third_party/blink/renderer/modules/installedapp/navigator_installed_app.h"
#include "third_party/blink/renderer/modules/keyboard/navigator_keyboard.h"
#include "third_party/blink/renderer/modules/locks/navigator_locks.h"
#include "third_party/blink/renderer/modules/media_capabilities/navigator_media_capabilities.h"
#include "third_party/blink/renderer/modules/mediasession/navigator_media_session.h"
#include "third_party/blink/renderer/modules/mediastream/navigator_media_stream.h"
#include "third_party/blink/renderer/modules/mediastream/navigator_user_media.h"
#include "third_party/blink/renderer/modules/navigatorcontentutils/navigator_content_utils.h"
#include "third_party/blink/renderer/modules/netinfo/navigator_network_information.h"
#include "third_party/blink/renderer/modules/nfc/navigator_nfc.h"
#include "third_party/blink/renderer/modules/permissions/navigator_permissions.h"
#include "third_party/blink/renderer/modules/plugins/navigator_plugins.h"
#include "third_party/blink/renderer/modules/presentation/navigator_presentation.h"
#include "third_party/blink/renderer/modules/quota/navigator_storage_quota.h"
#include "third_party/blink/renderer/modules/serviceworkers/navigator_service_worker.h"
#include "third_party/blink/renderer/modules/vibration/navigator_vibration.h"
#include "third_party/blink/renderer/modules/vr/navigator_vr.h"
#include "third_party/blink/renderer/modules/webmidi/navigator_web_midi.h"
#include "third_party/blink/renderer/modules/webshare/navigator_share.h"
#include "third_party/blink/renderer/modules/webusb/navigator_usb.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

namespace NavigatorPartialV8Internal {

static void bluetoothAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  Bluetooth* cppValue(NavigatorBluetooth::bluetooth(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#bluetooth")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void budgetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  ExecutionContext* executionContext = ExecutionContext::ForRelevantRealm(info);

  BudgetService* cppValue(NavigatorBudget::budget(executionContext, *impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#budget")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void clipboardAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  Clipboard* cppValue(NavigatorClipboard::clipboard(scriptState, *impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#clipboard")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void credentialsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  CredentialsContainer* cppValue(NavigatorCredentials::credentials(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#credentials")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void doNotTrackAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, NavigatorDoNotTrack::doNotTrack(*impl), info.GetIsolate());
}

static void geolocationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  Geolocation* cppValue(NavigatorGeolocation::geolocation(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#geolocation")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void keyboardAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  Keyboard* cppValue(NavigatorKeyboard::keyboard(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#keyboard")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void locksAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  LockManager* cppValue(NavigatorLocks::locks(scriptState, *impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#locks")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void mediaCapabilitiesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  MediaCapabilities* cppValue(NavigatorMediaCapabilities::mediaCapabilities(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#mediaCapabilities")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void mediaSessionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  MediaSession* cppValue(NavigatorMediaSession::mediaSession(scriptState, *impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#mediaSession")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void mediaDevicesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  MediaDevices* cppValue(NavigatorUserMedia::mediaDevices(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#mediaDevices")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void connectionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  NetworkInformation* cppValue(NavigatorNetworkInformation::connection(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#connection")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void nfcAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  NFC* cppValue(NavigatorNFC::nfc(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#nfc")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void permissionsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  Permissions* cppValue(NavigatorPermissions::permissions(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#permissions")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void pluginsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  DOMPluginArray* cppValue(NavigatorPlugins::plugins(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#plugins")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void mimeTypesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  DOMMimeTypeArray* cppValue(NavigatorPlugins::mimeTypes(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#mimeTypes")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void presentationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  Presentation* cppValue(NavigatorPresentation::presentation(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#presentation")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void webkitTemporaryStorageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  DeprecatedStorageQuota* cppValue(NavigatorStorageQuota::webkitTemporaryStorage(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#webkitTemporaryStorage")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void webkitPersistentStorageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  DeprecatedStorageQuota* cppValue(NavigatorStorageQuota::webkitPersistentStorage(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#webkitPersistentStorage")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void storageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  StorageManager* cppValue(NavigatorStorageQuota::storage(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#storage")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void serviceWorkerAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kGetterContext, "Navigator", "serviceWorker");

  ServiceWorkerContainer* cppValue(NavigatorServiceWorker::serviceWorker(scriptState, *impl, exceptionState));

  if (UNLIKELY(exceptionState.HadException()))
    return;

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#serviceWorker")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void xrAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  XR* cppValue(NavigatorVR::xr(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#xr")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void usbAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  USB* cppValue(NavigatorUSB::usb(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cppValue && DOMDataStore::SetReturnValue(info.GetReturnValue(), cppValue))
    return;
  v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#usb")
      .Set(holder, v8Value);

  V8SetReturnValue(info, v8Value);
}

static void getBatteryMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "getBattery");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Navigator::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = NavigatorBattery::getBattery(scriptState, *impl);
  V8SetReturnValue(info, result.V8Value());
}

static void sendBeaconMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "sendBeacon");

  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> url;
  ArrayBufferViewOrBlobOrStringOrFormData data;
  url = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[1]->IsUndefined()) {
    V8ArrayBufferViewOrBlobOrStringOrFormData::ToImpl(info.GetIsolate(), info[1], data, UnionTypeConversionMode::kNullable, exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    /* null default value */;
  }

  bool result = NavigatorBeacon::sendBeacon(scriptState, *impl, url, data, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void requestMediaKeySystemAccessMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "requestMediaKeySystemAccess");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Navigator::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> keySystem;
  HeapVector<MediaKeySystemConfiguration> supportedConfigurations;
  keySystem = info[0];
  if (!keySystem.Prepare(exceptionState))
    return;

  supportedConfigurations = NativeValueTraits<IDLSequence<MediaKeySystemConfiguration>>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = NavigatorRequestMediaKeySystemAccess::requestMediaKeySystemAccess(scriptState, *impl, keySystem, supportedConfigurations);
  V8SetReturnValue(info, result.V8Value());
}

static void getGamepadsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  V8SetReturnValue(info, NavigatorGamepad::getGamepads(*impl));
}

static void getInstalledRelatedAppsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "getInstalledRelatedApps");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Navigator::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = NavigatorInstalledApp::getInstalledRelatedApps(scriptState, *impl);
  V8SetReturnValue(info, result.V8Value());
}

static void getUserMediaMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "getUserMedia");

  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  MediaStreamConstraints constraints;
  V8NavigatorUserMediaSuccessCallback* successCallback;
  V8NavigatorUserMediaErrorCallback* errorCallback;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('constraints') is not an object.");
    return;
  }
  V8MediaStreamConstraints::ToImpl(info.GetIsolate(), info[0], constraints, exceptionState);
  if (exceptionState.HadException())
    return;

  if (info[1]->IsFunction()) {
    successCallback = V8NavigatorUserMediaSuccessCallback::Create(info[1].As<v8::Function>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  if (info[2]->IsFunction()) {
    errorCallback = V8NavigatorUserMediaErrorCallback::Create(info[2].As<v8::Function>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 3 is not a function.");
    return;
  }

  NavigatorMediaStream::getUserMedia(*impl, constraints, successCallback, errorCallback, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void webkitGetUserMediaMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "webkitGetUserMedia");

  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  MediaStreamConstraints constraints;
  V8NavigatorUserMediaSuccessCallback* successCallback;
  V8NavigatorUserMediaErrorCallback* errorCallback;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('constraints') is not an object.");
    return;
  }
  V8MediaStreamConstraints::ToImpl(info.GetIsolate(), info[0], constraints, exceptionState);
  if (exceptionState.HadException())
    return;

  if (info[1]->IsFunction()) {
    successCallback = V8NavigatorUserMediaSuccessCallback::Create(info[1].As<v8::Function>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  if (info[2]->IsFunction()) {
    errorCallback = V8NavigatorUserMediaErrorCallback::Create(info[2].As<v8::Function>());
  } else {
    exceptionState.ThrowTypeError("The callback provided as parameter 3 is not a function.");
    return;
  }

  NavigatorMediaStream::getUserMedia(*impl, constraints, successCallback, errorCallback, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void registerProtocolHandlerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "registerProtocolHandler");

  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  V8StringResource<> scheme;
  V8StringResource<> url;
  V8StringResource<> title;
  scheme = info[0];
  if (!scheme.Prepare())
    return;

  url = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  title = info[2];
  if (!title.Prepare())
    return;

  NavigatorContentUtils::registerProtocolHandler(*impl, scheme, url, title, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void unregisterProtocolHandlerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "unregisterProtocolHandler");

  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> scheme;
  V8StringResource<> url;
  scheme = info[0];
  if (!scheme.Prepare())
    return;

  url = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  NavigatorContentUtils::unregisterProtocolHandler(*impl, scheme, url, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
}

static void javaEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  V8SetReturnValueBool(info, NavigatorPlugins::javaEnabled(*impl));
}

static void vibrate1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "vibrate");

  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  uint32_t pattern;
  pattern = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kClamp);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueBool(info, NavigatorVibration::vibrate(*impl, pattern));
}

static void vibrate2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "vibrate");

  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  Vector<uint32_t> pattern;
  pattern = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  V8SetReturnValueBool(info, NavigatorVibration::vibrate(*impl, pattern));
}

static void vibrateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  bool isArityError = false;

  switch (std::min(1, info.Length())) {
    case 1:
      if (info[0]->IsArray()) {
        vibrate2Method(info);
        return;
      }
      {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "Navigator", "vibrate");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[0], exceptionState)) {
          vibrate2Method(info);
          return;
        }
        if (exceptionState.HadException()) {
          exceptionState.RethrowV8Exception(exceptionState.GetException());
          return;
        }
      }
      if (info[0]->IsNumber()) {
        vibrate1Method(info);
        return;
      }
      if (true) {
        vibrate1Method(info);
        return;
      }
      break;
    default:
      isArityError = true;
  }

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "vibrate");
  if (isArityError) {
    if (info.Length() < 1) {
      exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exceptionState.ThrowTypeError("No function was found that matched the signature provided.");
}

static void getVRDisplaysMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "getVRDisplays");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Navigator::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = NavigatorVR::getVRDisplays(scriptState, *impl);
  V8SetReturnValue(info, result.V8Value());
}

static void requestMIDIAccessMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "requestMIDIAccess");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Navigator::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  MIDIOptions options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  V8MIDIOptions::ToImpl(info.GetIsolate(), info[0], options, exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = NavigatorWebMIDI::requestMIDIAccess(scriptState, *impl, options);
  V8SetReturnValue(info, result.V8Value());
}

static void shareMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "share");
  ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Navigator::hasInstance(info.Holder(), info.GetIsolate())) {
    exceptionState.ThrowTypeError("Illegal invocation");
    return;
  }
  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  ShareData data;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('data') is not an object.");
    return;
  }
  V8ShareData::ToImpl(info.GetIsolate(), info[0], data, exceptionState);
  if (exceptionState.HadException())
    return;

  ScriptPromise result = NavigatorShare::share(scriptState, *impl, data);
  V8SetReturnValue(info, result.V8Value());
}

} // namespace NavigatorPartialV8Internal

void V8NavigatorPartial::bluetoothAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_bluetooth_Getter");

  NavigatorPartialV8Internal::bluetoothAttributeGetter(info);
}

void V8NavigatorPartial::budgetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_budget_Getter");

  NavigatorPartialV8Internal::budgetAttributeGetter(info);
}

void V8NavigatorPartial::clipboardAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_clipboard_Getter");

  NavigatorPartialV8Internal::clipboardAttributeGetter(info);
}

void V8NavigatorPartial::credentialsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_credentials_Getter");

  NavigatorPartialV8Internal::credentialsAttributeGetter(info);
}

void V8NavigatorPartial::doNotTrackAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_doNotTrack_Getter");

  NavigatorPartialV8Internal::doNotTrackAttributeGetter(info);
}

void V8NavigatorPartial::geolocationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_geolocation_Getter");

  NavigatorPartialV8Internal::geolocationAttributeGetter(info);
}

void V8NavigatorPartial::keyboardAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_keyboard_Getter");

  NavigatorPartialV8Internal::keyboardAttributeGetter(info);
}

void V8NavigatorPartial::locksAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_locks_Getter");

  NavigatorPartialV8Internal::locksAttributeGetter(info);
}

void V8NavigatorPartial::mediaCapabilitiesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_mediaCapabilities_Getter");

  NavigatorPartialV8Internal::mediaCapabilitiesAttributeGetter(info);
}

void V8NavigatorPartial::mediaSessionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_mediaSession_Getter");

  NavigatorPartialV8Internal::mediaSessionAttributeGetter(info);
}

void V8NavigatorPartial::mediaDevicesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_mediaDevices_Getter");

  NavigatorPartialV8Internal::mediaDevicesAttributeGetter(info);
}

void V8NavigatorPartial::connectionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_connection_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kNetInfo);

  NavigatorPartialV8Internal::connectionAttributeGetter(info);
}

void V8NavigatorPartial::nfcAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_nfc_Getter");

  NavigatorPartialV8Internal::nfcAttributeGetter(info);
}

void V8NavigatorPartial::permissionsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_permissions_Getter");

  NavigatorPartialV8Internal::permissionsAttributeGetter(info);
}

void V8NavigatorPartial::pluginsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_plugins_Getter");

  NavigatorPartialV8Internal::pluginsAttributeGetter(info);
}

void V8NavigatorPartial::mimeTypesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_mimeTypes_Getter");

  NavigatorPartialV8Internal::mimeTypesAttributeGetter(info);
}

void V8NavigatorPartial::presentationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_presentation_Getter");

  NavigatorPartialV8Internal::presentationAttributeGetter(info);
}

void V8NavigatorPartial::webkitTemporaryStorageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_webkitTemporaryStorage_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedStorageQuota);

  NavigatorPartialV8Internal::webkitTemporaryStorageAttributeGetter(info);
}

void V8NavigatorPartial::webkitPersistentStorageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_webkitPersistentStorage_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedStorageQuota);

  NavigatorPartialV8Internal::webkitPersistentStorageAttributeGetter(info);
}

void V8NavigatorPartial::storageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_storage_Getter");

  NavigatorPartialV8Internal::storageAttributeGetter(info);
}

void V8NavigatorPartial::serviceWorkerAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_serviceWorker_Getter");

  NavigatorPartialV8Internal::serviceWorkerAttributeGetter(info);
}

void V8NavigatorPartial::xrAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_xr_Getter");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kNavigatorXR);

  NavigatorPartialV8Internal::xrAttributeGetter(info);
}

void V8NavigatorPartial::usbAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_usb_Getter");

  NavigatorPartialV8Internal::usbAttributeGetter(info);
}

void V8NavigatorPartial::getBatteryMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_getBattery");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kBatteryStatusGetBattery);
  NavigatorPartialV8Internal::getBatteryMethod(info);
}

void V8NavigatorPartial::sendBeaconMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_sendBeacon");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kSendBeacon);
  NavigatorPartialV8Internal::sendBeaconMethod(info);
}

void V8NavigatorPartial::requestMediaKeySystemAccessMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_requestMediaKeySystemAccess");

  NavigatorPartialV8Internal::requestMediaKeySystemAccessMethod(info);
}

void V8NavigatorPartial::getGamepadsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_getGamepads");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kGetGamepads);
  NavigatorPartialV8Internal::getGamepadsMethod(info);
}

void V8NavigatorPartial::getInstalledRelatedAppsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_getInstalledRelatedApps");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8Navigator_GetInstalledRelatedApps_Method);
  NavigatorPartialV8Internal::getInstalledRelatedAppsMethod(info);
}

void V8NavigatorPartial::getUserMediaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_getUserMedia");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kGetUserMediaLegacy);
  NavigatorPartialV8Internal::getUserMediaMethod(info);
}

void V8NavigatorPartial::webkitGetUserMediaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_webkitGetUserMedia");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kGetUserMediaPrefixed);
  NavigatorPartialV8Internal::webkitGetUserMediaMethod(info);
}

void V8NavigatorPartial::registerProtocolHandlerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_registerProtocolHandler");

  NavigatorPartialV8Internal::registerProtocolHandlerMethod(info);
}

void V8NavigatorPartial::unregisterProtocolHandlerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_unregisterProtocolHandler");

  NavigatorPartialV8Internal::unregisterProtocolHandlerMethod(info);
}

void V8NavigatorPartial::javaEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_javaEnabled");

  NavigatorPartialV8Internal::javaEnabledMethod(info);
}

void V8NavigatorPartial::vibrateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_vibrate");

  NavigatorPartialV8Internal::vibrateMethod(info);
}

void V8NavigatorPartial::getVRDisplaysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_getVRDisplays");

  NavigatorPartialV8Internal::getVRDisplaysMethod(info);
}

void V8NavigatorPartial::requestMIDIAccessMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_requestMIDIAccess");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kRequestMIDIAccess_ObscuredByFootprinting);
  NavigatorPartialV8Internal::requestMIDIAccessMethod(info);
}

void V8NavigatorPartial::shareMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_share");

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWebShareShare);
  NavigatorPartialV8Internal::shareMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8NavigatorAccessors[] = {
    { "doNotTrack", V8NavigatorPartial::doNotTrackAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "geolocation", V8NavigatorPartial::geolocationAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mediaDevices", V8NavigatorPartial::mediaDevicesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "connection", V8NavigatorPartial::connectionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "plugins", V8NavigatorPartial::pluginsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "mimeTypes", V8NavigatorPartial::mimeTypesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webkitTemporaryStorage", V8NavigatorPartial::webkitTemporaryStorageAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "webkitPersistentStorage", V8NavigatorPartial::webkitPersistentStorageAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "serviceWorker", V8NavigatorPartial::serviceWorkerAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8NavigatorMethods[] = {
    {"getBattery", V8NavigatorPartial::getBatteryMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"sendBeacon", V8NavigatorPartial::sendBeaconMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getGamepads", V8NavigatorPartial::getGamepadsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getUserMedia", V8NavigatorPartial::getUserMediaMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"webkitGetUserMedia", V8NavigatorPartial::webkitGetUserMediaMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"javaEnabled", V8NavigatorPartial::javaEnabledMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vibrate", V8NavigatorPartial::vibrateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"requestMIDIAccess", V8NavigatorPartial::requestMIDIAccessMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8NavigatorPartial::installV8NavigatorTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8Navigator::installV8NavigatorTemplate(isolate, world, interfaceTemplate);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8NavigatorAccessors, arraysize(V8NavigatorAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8NavigatorMethods, arraysize(V8NavigatorMethods));

  // Custom signature

  V8NavigatorPartial::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8NavigatorPartial::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  V8Navigator::InstallRuntimeEnabledFeaturesOnTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  if (RuntimeEnabledFeatures::BudgetEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "budget", V8NavigatorPartial::budgetAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, accessor_configurations,
        arraysize(accessor_configurations));
  }
  if (RuntimeEnabledFeatures::MediaSessionEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "mediaSession", V8NavigatorPartial::mediaSessionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, accessor_configurations,
        arraysize(accessor_configurations));
  }
  if (RuntimeEnabledFeatures::PermissionsEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "permissions", V8NavigatorPartial::permissionsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, accessor_configurations,
        arraysize(accessor_configurations));
  }
  if (RuntimeEnabledFeatures::PresentationEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "presentation", V8NavigatorPartial::presentationAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, accessor_configurations,
        arraysize(accessor_configurations));
  }
  if (RuntimeEnabledFeatures::WebBluetoothEnabled()) {
    static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
        { "bluetooth", V8NavigatorPartial::bluetoothAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, accessor_configurations,
        arraysize(accessor_configurations));
  }

  // Custom signature
  if (RuntimeEnabledFeatures::NavigatorContentUtilsEnabled()) {
    const V8DOMConfiguration::MethodConfiguration registerProtocolHandlerMethodConfiguration[] = {
      {"registerProtocolHandler", V8NavigatorPartial::registerProtocolHandlerMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : registerProtocolHandlerMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
  if (RuntimeEnabledFeatures::NavigatorContentUtilsEnabled()) {
    const V8DOMConfiguration::MethodConfiguration unregisterProtocolHandlerMethodConfiguration[] = {
      {"unregisterProtocolHandler", V8NavigatorPartial::unregisterProtocolHandlerMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : unregisterProtocolHandlerMethodConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance_template, prototype_template, interface_template, signature, methodConfig);
  }
}

void V8NavigatorPartial::installInstalledApp(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8Navigator::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* executionContext = ToExecutionContext(isolate->GetCurrentContext());
  bool isSecureContext = (executionContext && executionContext->IsSecureContext());
  if (isSecureContext) {
    static const V8DOMConfiguration::MethodConfiguration methodGetinstalledrelatedappsConfiguration[] = {
      {"getInstalledRelatedApps", V8NavigatorPartial::getInstalledRelatedAppsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& methodConfig : methodGetinstalledrelatedappsConfiguration)
      V8DOMConfiguration::InstallMethod(isolate, world, instance, prototype, interface, signature, methodConfig);
  }
}

void V8NavigatorPartial::installInstalledApp(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8Navigator::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8Navigator::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installInstalledApp(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8NavigatorPartial::installInstalledApp(ScriptState* scriptState) {
  installInstalledApp(scriptState, v8::Local<v8::Object>());
}

void V8NavigatorPartial::installWebVR(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8Navigator::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  static const V8DOMConfiguration::MethodConfiguration methodGetvrdisplaysConfiguration[] = {
    {"getVRDisplays", V8NavigatorPartial::getVRDisplaysMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& methodConfig : methodGetvrdisplaysConfiguration)
    V8DOMConfiguration::InstallMethod(isolate, world, instance, prototype, interface, signature, methodConfig);
}

void V8NavigatorPartial::installWebVR(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8Navigator::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8Navigator::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installWebVR(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8NavigatorPartial::installWebVR(ScriptState* scriptState) {
  installWebVR(scriptState, v8::Local<v8::Object>());
}

void V8NavigatorPartial::installWebLocksAPI(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8Navigator::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* executionContext = ToExecutionContext(isolate->GetCurrentContext());
  bool isSecureContext = (executionContext && executionContext->IsSecureContext());
  if (isSecureContext) {
    static const V8DOMConfiguration::AccessorConfiguration accessorlocksConfiguration[] = {
      { "locks", V8NavigatorPartial::locksAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& accessorConfig : accessorlocksConfiguration)
      V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
  }
}

void V8NavigatorPartial::installWebLocksAPI(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8Navigator::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8Navigator::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installWebLocksAPI(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8NavigatorPartial::installWebLocksAPI(ScriptState* scriptState) {
  installWebLocksAPI(scriptState, v8::Local<v8::Object>());
}

void V8NavigatorPartial::installMediaCapabilities(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8Navigator::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  static const V8DOMConfiguration::AccessorConfiguration accessormediaCapabilitiesConfiguration[] = {
    { "mediaCapabilities", V8NavigatorPartial::mediaCapabilitiesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& accessorConfig : accessormediaCapabilitiesConfiguration)
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
}

void V8NavigatorPartial::installMediaCapabilities(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8Navigator::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8Navigator::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installMediaCapabilities(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8NavigatorPartial::installMediaCapabilities(ScriptState* scriptState) {
  installMediaCapabilities(scriptState, v8::Local<v8::Object>());
}

void V8NavigatorPartial::installWebXR(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interfaceTemplate = V8Navigator::wrapperTypeInfo.domTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* executionContext = ToExecutionContext(isolate->GetCurrentContext());
  bool isSecureContext = (executionContext && executionContext->IsSecureContext());
  if (isSecureContext) {
    static const V8DOMConfiguration::AccessorConfiguration accessorxrConfiguration[] = {
      { "xr", V8NavigatorPartial::xrAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& accessorConfig : accessorxrConfiguration)
      V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype, interface, signature, accessorConfig);
  }
}

void V8NavigatorPartial::installWebXR(ScriptState* scriptState, v8::Local<v8::Object> instance) {
  V8PerContextData* perContextData = scriptState->PerContextData();
  v8::Local<v8::Object> prototype = perContextData->PrototypeForType(&V8Navigator::wrapperTypeInfo);
  v8::Local<v8::Function> interface = perContextData->ConstructorForType(&V8Navigator::wrapperTypeInfo);
  ALLOW_UNUSED_LOCAL(interface);
  installWebXR(scriptState->GetIsolate(), scriptState->World(), instance, prototype, interface);
}

void V8NavigatorPartial::installWebXR(ScriptState* scriptState) {
  installWebXR(scriptState, v8::Local<v8::Object>());
}

void V8NavigatorPartial::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instanceObject,
    v8::Local<v8::Object> prototypeObject,
    v8::Local<v8::Function> interfaceObject,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  CHECK(!interfaceTemplate.IsEmpty());
  DCHECK((!prototypeObject.IsEmpty() && !interfaceObject.IsEmpty()) ||
         !instanceObject.IsEmpty());
  V8Navigator::InstallConditionalFeatures(
      context, world, instanceObject, prototypeObject, interfaceObject, interfaceTemplate);

  v8::Isolate* isolate = context->GetIsolate();

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);
  bool isSecureContext = (executionContext && executionContext->IsSecureContext());

  if (!prototypeObject.IsEmpty() || !interfaceObject.IsEmpty()) {
    if (isSecureContext) {
      static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
          { "clipboard", V8NavigatorPartial::clipboardAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "credentials", V8NavigatorPartial::credentialsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
          { "storage", V8NavigatorPartial::storageAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instanceObject, prototypeObject, interfaceObject,
          signature, accessor_configurations,
          arraysize(accessor_configurations));
      if (RuntimeEnabledFeatures::KeyboardLockEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
            { "keyboard", V8NavigatorPartial::keyboardAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAccessors(
            isolate, world, instanceObject, prototypeObject, interfaceObject,
            signature, accessor_configurations,
            arraysize(accessor_configurations));
      }
      if (RuntimeEnabledFeatures::WebNFCEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
            { "nfc", V8NavigatorPartial::nfcAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAccessors(
            isolate, world, instanceObject, prototypeObject, interfaceObject,
            signature, accessor_configurations,
            arraysize(accessor_configurations));
      }
      if (RuntimeEnabledFeatures::WebUSBEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
            { "usb", V8NavigatorPartial::usbAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAccessors(
            isolate, world, instanceObject, prototypeObject, interfaceObject,
            signature, accessor_configurations,
            arraysize(accessor_configurations));
      }
    }
    if (isSecureContext) {
      const V8DOMConfiguration::MethodConfiguration requestMediaKeySystemAccessMethodConfiguration[] = {
        {"requestMediaKeySystemAccess", V8NavigatorPartial::requestMediaKeySystemAccessMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& methodConfig : requestMediaKeySystemAccessMethodConfiguration)
        V8DOMConfiguration::InstallMethod(isolate, world, v8::Local<v8::Object>(), prototypeObject, interfaceObject, signature, methodConfig);
    }
    if (isSecureContext) {
      if (RuntimeEnabledFeatures::WebShareEnabled()) {
        const V8DOMConfiguration::MethodConfiguration shareMethodConfiguration[] = {
          {"share", V8NavigatorPartial::shareMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& methodConfig : shareMethodConfiguration)
          V8DOMConfiguration::InstallMethod(isolate, world, v8::Local<v8::Object>(), prototypeObject, interfaceObject, signature, methodConfig);
      }
    }
  }
}

void V8NavigatorPartial::initialize() {
  // Should be invoked from ModulesInitializer.
  V8Navigator::UpdateWrapperTypeInfo(
      &V8NavigatorPartial::installV8NavigatorTemplate,
      nullptr,
      &V8NavigatorPartial::InstallRuntimeEnabledFeaturesOnTemplate,
      V8NavigatorPartial::InstallConditionalFeatures);
}

}  // namespace blink

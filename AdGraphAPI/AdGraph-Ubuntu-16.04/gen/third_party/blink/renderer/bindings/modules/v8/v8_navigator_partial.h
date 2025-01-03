// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8NavigatorPartial_h
#define V8NavigatorPartial_h

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/array_buffer_view_or_blob_or_string_or_form_data.h"
#include "third_party/blink/renderer/bindings/modules/v8/dom_exception_or_overconstrained_error.h"
#include "third_party/blink/renderer/core/frame/navigator.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class ScriptState;

class V8NavigatorPartial {
  STATIC_ONLY(V8NavigatorPartial);
 public:
  static void initialize();
  static void InstallConditionalFeatures(
      v8::Local<v8::Context>,
      const DOMWrapperWorld&,
      v8::Local<v8::Object> instance,
      v8::Local<v8::Object> prototype,
      v8::Local<v8::Function> interface,
      v8::Local<v8::FunctionTemplate> interface_template);

  static void installInstalledApp(ScriptState*, v8::Local<v8::Object> instance);
  static void installInstalledApp(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface);
  static void installInstalledApp(ScriptState*);
  static void installWebVR(ScriptState*, v8::Local<v8::Object> instance);
  static void installWebVR(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface);
  static void installWebVR(ScriptState*);
  static void installWebLocksAPI(ScriptState*, v8::Local<v8::Object> instance);
  static void installWebLocksAPI(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface);
  static void installWebLocksAPI(ScriptState*);
  static void installMediaCapabilities(ScriptState*, v8::Local<v8::Object> instance);
  static void installMediaCapabilities(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface);
  static void installMediaCapabilities(ScriptState*);
  static void installWebXR(ScriptState*, v8::Local<v8::Object> instance);
  static void installWebXR(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface);
  static void installWebXR(ScriptState*);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);

  // Callback functions
  static void bluetoothAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void budgetAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void clipboardAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void credentialsAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void doNotTrackAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void geolocationAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void keyboardAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void locksAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void mediaCapabilitiesAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void mediaSessionAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void mediaDevicesAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void connectionAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void nfcAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void permissionsAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void pluginsAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void mimeTypesAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void presentationAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void webkitTemporaryStorageAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void webkitPersistentStorageAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void storageAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void serviceWorkerAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void xrAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void usbAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);

  static void getBatteryMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void sendBeaconMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void requestMediaKeySystemAccessMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void getGamepadsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void getInstalledRelatedAppsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void getUserMediaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void webkitGetUserMediaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void registerProtocolHandlerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void unregisterProtocolHandlerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void javaEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void vibrateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void getVRDisplaysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void requestMIDIAccessMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void shareMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);

 private:
  static void installV8NavigatorTemplate(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::FunctionTemplate> interfaceTemplate);
};

}  // namespace blink

#endif  // V8NavigatorPartial_h

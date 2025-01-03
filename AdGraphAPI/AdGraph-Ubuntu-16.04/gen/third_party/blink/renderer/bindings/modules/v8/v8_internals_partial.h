// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8InternalsPartial_h
#define V8InternalsPartial_h

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/testing/internals.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class V8InternalsPartial {
  STATIC_ONLY(V8InternalsPartial);
 public:
  static void initialize();

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);

  // Callback functions
  static void peerConnectionCountLimitAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);

  static void numberOfLiveAXObjectsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void addFakeDeviceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void setNavigatorContentUtilsClientMockMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void rtcCertificateEqualsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void peerConnectionCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void terminateServiceWorkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void enableMockSpeechSynthesizerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void isVibratingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void pendingVibrationPatternMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void audioHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);

 private:
  static void installV8InternalsTemplate(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::FunctionTemplate> interfaceTemplate);
};

}  // namespace blink

#endif  // V8InternalsPartial_h

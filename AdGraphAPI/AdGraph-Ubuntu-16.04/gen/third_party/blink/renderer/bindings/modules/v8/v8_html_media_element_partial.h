// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8HTMLMediaElementPartial_h
#define V8HTMLMediaElementPartial_h

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/html/media/html_media_element.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class V8HTMLMediaElementPartial {
  STATIC_ONLY(V8HTMLMediaElementPartial);
 public:
  static void initialize();
  static void InstallConditionalFeatures(
      v8::Local<v8::Context>,
      const DOMWrapperWorld&,
      v8::Local<v8::Object> instance,
      v8::Local<v8::Object> prototype,
      v8::Local<v8::Function> interface,
      v8::Local<v8::FunctionTemplate> interface_template);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);

  // Callback functions
  static void sinkIdAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void mediaKeysAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void onencryptedAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void onencryptedAttributeSetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void onwaitingforkeyAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void onwaitingforkeyAttributeSetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void remoteAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void disableRemotePlaybackAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void disableRemotePlaybackAttributeSetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void srcObjectAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void srcObjectAttributeSetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);

  static void setSinkIdMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void setMediaKeysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void captureStreamMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);

 private:
  static void installV8HTMLMediaElementTemplate(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::FunctionTemplate> interfaceTemplate);
};

}  // namespace blink

#endif  // V8HTMLMediaElementPartial_h

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8HTMLVideoElementPartial_h
#define V8HTMLVideoElementPartial_h

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/html/media/html_video_element.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class ScriptState;

class V8HTMLVideoElementPartial {
  STATIC_ONLY(V8HTMLVideoElementPartial);
 public:
  static void initialize();

  static void installPictureInPictureAPI(ScriptState*, v8::Local<v8::Object> instance);
  static void installPictureInPictureAPI(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface);
  static void installPictureInPictureAPI(ScriptState*);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);

  // Callback functions
  static void onenterpictureinpictureAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void onenterpictureinpictureAttributeSetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void onleavepictureinpictureAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void onleavepictureinpictureAttributeSetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void disablePictureInPictureAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void disablePictureInPictureAttributeSetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);

  static void getVideoPlaybackQualityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void requestPictureInPictureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);

 private:
  static void installV8HTMLVideoElementTemplate(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::FunctionTemplate> interfaceTemplate);
};

}  // namespace blink

#endif  // V8HTMLVideoElementPartial_h

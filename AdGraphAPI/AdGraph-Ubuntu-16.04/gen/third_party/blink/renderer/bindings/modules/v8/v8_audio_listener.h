// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8AudioListener_h
#define V8AudioListener_h

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webaudio/audio_listener.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class V8AudioListener {
  STATIC_ONLY(V8AudioListener);
 public:
  MODULES_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  MODULES_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static AudioListener* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<AudioListener>();
  }
  MODULES_EXPORT static AudioListener* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
  MODULES_EXPORT static const WrapperTypeInfo wrapperTypeInfo;
  static const int internalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  MODULES_EXPORT static void positionXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void positionYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void positionZAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void forwardXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void forwardYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void forwardZAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void upXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void upYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void upZAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  MODULES_EXPORT static void setPositionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void setOrientationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<AudioListener> : public NativeValueTraitsBase<AudioListener> {
  MODULES_EXPORT static AudioListener* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static AudioListener* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<AudioListener> {
  typedef V8AudioListener Type;
};

}  // namespace blink

#endif  // V8AudioListener_h

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8MIDIPort_h
#define V8MIDIPort_h

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_target.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webmidi/midi_port.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class V8MIDIPort {
  STATIC_ONLY(V8MIDIPort);
 public:
  MODULES_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  MODULES_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static MIDIPort* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<MIDIPort>();
  }
  MODULES_EXPORT static MIDIPort* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
  MODULES_EXPORT static const WrapperTypeInfo wrapperTypeInfo;
  static const int internalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  MODULES_EXPORT static void connectionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void idAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void manufacturerAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void nameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void stateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void typeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void versionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void onstatechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void onstatechangeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  MODULES_EXPORT static void openMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void closeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<MIDIPort> : public NativeValueTraitsBase<MIDIPort> {
  MODULES_EXPORT static MIDIPort* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static MIDIPort* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<MIDIPort> {
  typedef V8MIDIPort Type;
};

}  // namespace blink

#endif  // V8MIDIPort_h

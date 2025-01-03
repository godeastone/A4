// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8InternalSettings_h
#define V8InternalSettings_h

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_settings_generated.h"
#include "third_party/blink/renderer/core/testing/internal_settings.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class V8InternalSettings {
  STATIC_ONLY(V8InternalSettings);
 public:
  static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static InternalSettings* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<InternalSettings>();
  }
  static InternalSettings* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
  static const WrapperTypeInfo wrapperTypeInfo;
  static const int internalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  static void setMockScrollbarsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setHideScrollbarsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setMockGestureTapHighlightsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setStandardFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setSerifFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setSansSerifFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setFixedFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setCursiveFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setFantasyFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setPictographFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setTextAutosizingEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setTextAutosizingWindowSizeOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setTextTrackKindUserPreferenceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAccessibilityFontScaleFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setMediaTypeOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setDisplayModeOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setEditingBehaviorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setImagesEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setDefaultVideoPosterURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setViewportEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setViewportMetaEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setViewportStyleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAvailablePointerTypesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setPrimaryPointerTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAvailableHoverTypesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setPrimaryHoverTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setImageAnimationPolicyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setPresentationReceiverMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setAutoplayPolicyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setLangAttributeAwareFormControlUIEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setExperimentalContentSecurityPolicyFeaturesEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void setScrollTopLeftInteropEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<InternalSettings> : public NativeValueTraitsBase<InternalSettings> {
  static InternalSettings* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  static InternalSettings* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<InternalSettings> {
  typedef V8InternalSettings Type;
};

}  // namespace blink

#endif  // V8InternalSettings_h

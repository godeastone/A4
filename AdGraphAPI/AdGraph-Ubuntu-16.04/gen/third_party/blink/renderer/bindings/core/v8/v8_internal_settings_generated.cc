// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_settings_generated.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8InternalSettingsGenerated::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8InternalSettingsGenerated::domTemplate,
    nullptr,
    "InternalSettingsGenerated",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in InternalSettingsGenerated.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& InternalSettingsGenerated::wrapper_type_info_ = V8InternalSettingsGenerated::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, InternalSettingsGenerated>::value,
    "InternalSettingsGenerated inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&InternalSettingsGenerated::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "InternalSettingsGenerated is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace InternalSettingsGeneratedV8Internal {

static void setDOMPasteAllowedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setDOMPasteAllowed");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool DOMPasteAllowed;
  DOMPasteAllowed = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setDOMPasteAllowed(DOMPasteAllowed);
}

static void setAccelerated2dCanvasMSAASampleCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setAccelerated2dCanvasMSAASampleCount");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t accelerated2dCanvasMSAASampleCount;
  accelerated2dCanvasMSAASampleCount = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setAccelerated2dCanvasMSAASampleCount(accelerated2dCanvasMSAASampleCount);
}

static void setAcceleratedCompositingEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setAcceleratedCompositingEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool acceleratedCompositingEnabled;
  acceleratedCompositingEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setAcceleratedCompositingEnabled(acceleratedCompositingEnabled);
}

static void setAccessibilityEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setAccessibilityEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool accessibilityEnabled;
  accessibilityEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setAccessibilityEnabled(accessibilityEnabled);
}

static void setAccessibilityFontScaleFactorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setAccessibilityFontScaleFactor");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double accessibilityFontScaleFactor;
  accessibilityFontScaleFactor = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setAccessibilityFontScaleFactor(accessibilityFontScaleFactor);
}

static void setAccessibilityPasswordValuesEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setAccessibilityPasswordValuesEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool accessibilityPasswordValuesEnabled;
  accessibilityPasswordValuesEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setAccessibilityPasswordValuesEnabled(accessibilityPasswordValuesEnabled);
}

static void setAllowCustomScrollbarInMainFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setAllowCustomScrollbarInMainFrame");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool allowCustomScrollbarInMainFrame;
  allowCustomScrollbarInMainFrame = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setAllowCustomScrollbarInMainFrame(allowCustomScrollbarInMainFrame);
}

static void setAllowFileAccessFromFileURLsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setAllowFileAccessFromFileURLs");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool allowFileAccessFromFileURLs;
  allowFileAccessFromFileURLs = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setAllowFileAccessFromFileURLs(allowFileAccessFromFileURLs);
}

static void setAllowGeolocationOnInsecureOriginsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setAllowGeolocationOnInsecureOrigins");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool allowGeolocationOnInsecureOrigins;
  allowGeolocationOnInsecureOrigins = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setAllowGeolocationOnInsecureOrigins(allowGeolocationOnInsecureOrigins);
}

static void setAllowRunningOfInsecureContentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setAllowRunningOfInsecureContent");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool allowRunningOfInsecureContent;
  allowRunningOfInsecureContent = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setAllowRunningOfInsecureContent(allowRunningOfInsecureContent);
}

static void setAllowScriptsToCloseWindowsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setAllowScriptsToCloseWindows");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool allowScriptsToCloseWindows;
  allowScriptsToCloseWindows = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setAllowScriptsToCloseWindows(allowScriptsToCloseWindows);
}

static void setAllowUniversalAccessFromFileURLsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setAllowUniversalAccessFromFileURLs");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool allowUniversalAccessFromFileURLs;
  allowUniversalAccessFromFileURLs = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setAllowUniversalAccessFromFileURLs(allowUniversalAccessFromFileURLs);
}

static void setAlwaysShowContextMenuOnTouchMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setAlwaysShowContextMenuOnTouch");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool alwaysShowContextMenuOnTouch;
  alwaysShowContextMenuOnTouch = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setAlwaysShowContextMenuOnTouch(alwaysShowContextMenuOnTouch);
}

static void setAntialiased2dCanvasEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setAntialiased2dCanvasEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool antialiased2dCanvasEnabled;
  antialiased2dCanvasEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setAntialiased2dCanvasEnabled(antialiased2dCanvasEnabled);
}

static void setAntialiasedClips2dCanvasEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setAntialiasedClips2dCanvasEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool antialiasedClips2dCanvasEnabled;
  antialiasedClips2dCanvasEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setAntialiasedClips2dCanvasEnabled(antialiasedClips2dCanvasEnabled);
}

static void setAvailableHoverTypesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setAvailableHoverTypes");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t availableHoverTypes;
  availableHoverTypes = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setAvailableHoverTypes(availableHoverTypes);
}

static void setAvailablePointerTypesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setAvailablePointerTypes");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t availablePointerTypes;
  availablePointerTypes = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setAvailablePointerTypes(availablePointerTypes);
}

static void setBarrelButtonForDragEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setBarrelButtonForDragEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool barrelButtonForDragEnabled;
  barrelButtonForDragEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setBarrelButtonForDragEnabled(barrelButtonForDragEnabled);
}

static void setCookieEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setCookieEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool cookieEnabled;
  cookieEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setCookieEnabled(cookieEnabled);
}

static void setCSSExternalScannerNoPreloadMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setCSSExternalScannerNoPreload");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool cssExternalScannerNoPreload;
  cssExternalScannerNoPreload = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setCSSExternalScannerNoPreload(cssExternalScannerNoPreload);
}

static void setCSSExternalScannerPreloadMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setCSSExternalScannerPreload");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool cssExternalScannerPreload;
  cssExternalScannerPreload = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setCSSExternalScannerPreload(cssExternalScannerPreload);
}

static void setDataSaverHoldbackMediaApiMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setDataSaverHoldbackMediaApi");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool dataSaverHoldbackMediaApi;
  dataSaverHoldbackMediaApi = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setDataSaverHoldbackMediaApi(dataSaverHoldbackMediaApi);
}

static void setDataSaverHoldbackWebApiMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setDataSaverHoldbackWebApi");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool dataSaverHoldbackWebApi;
  dataSaverHoldbackWebApi = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setDataSaverHoldbackWebApi(dataSaverHoldbackWebApi);
}

static void setDefaultFixedFontSizeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setDefaultFixedFontSize");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t defaultFixedFontSize;
  defaultFixedFontSize = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setDefaultFixedFontSize(defaultFixedFontSize);
}

static void setDefaultFontSizeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setDefaultFontSize");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t defaultFontSize;
  defaultFontSize = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setDefaultFontSize(defaultFontSize);
}

static void setDefaultTextEncodingNameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setDefaultTextEncodingName", "InternalSettingsGenerated", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> defaultTextEncodingName;
  defaultTextEncodingName = info[0];
  if (!defaultTextEncodingName.Prepare())
    return;

  impl->setDefaultTextEncodingName(defaultTextEncodingName);
}

static void setDefaultVideoPosterURLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setDefaultVideoPosterURL", "InternalSettingsGenerated", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> defaultVideoPosterURL;
  defaultVideoPosterURL = info[0];
  if (!defaultVideoPosterURL.Prepare())
    return;

  impl->setDefaultVideoPosterURL(defaultVideoPosterURL);
}

static void setDeviceScaleAdjustmentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setDeviceScaleAdjustment");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double deviceScaleAdjustment;
  deviceScaleAdjustment = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setDeviceScaleAdjustment(deviceScaleAdjustment);
}

static void setDeviceSupportsTouchMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setDeviceSupportsTouch");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool deviceSupportsTouch;
  deviceSupportsTouch = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setDeviceSupportsTouch(deviceSupportsTouch);
}

static void setDisableReadingFromCanvasMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setDisableReadingFromCanvas");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool disableReadingFromCanvas;
  disableReadingFromCanvas = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setDisableReadingFromCanvas(disableReadingFromCanvas);
}

static void setDisallowFetchForDocWrittenScriptsInMainFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setDisallowFetchForDocWrittenScriptsInMainFrame");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool disallowFetchForDocWrittenScriptsInMainFrame;
  disallowFetchForDocWrittenScriptsInMainFrame = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setDisallowFetchForDocWrittenScriptsInMainFrame(disallowFetchForDocWrittenScriptsInMainFrame);
}

static void setDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2GMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G;
  disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G(disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G);
}

static void setDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnectionsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections;
  disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections(disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections);
}

static void setDNSPrefetchingEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setDNSPrefetchingEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool dnsPrefetchingEnabled;
  dnsPrefetchingEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setDNSPrefetchingEnabled(dnsPrefetchingEnabled);
}

static void setDoHtmlPreloadScanningMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setDoHtmlPreloadScanning");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool doHtmlPreloadScanning;
  doHtmlPreloadScanning = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setDoHtmlPreloadScanning(doHtmlPreloadScanning);
}

static void setDoNotUpdateSelectionOnMutatingSelectionRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setDoNotUpdateSelectionOnMutatingSelectionRange");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool doNotUpdateSelectionOnMutatingSelectionRange;
  doNotUpdateSelectionOnMutatingSelectionRange = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setDoNotUpdateSelectionOnMutatingSelectionRange(doNotUpdateSelectionOnMutatingSelectionRange);
}

static void setDownloadableBinaryFontsEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setDownloadableBinaryFontsEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool downloadableBinaryFontsEnabled;
  downloadableBinaryFontsEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setDownloadableBinaryFontsEnabled(downloadableBinaryFontsEnabled);
}

static void setEmbeddedMediaExperienceEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setEmbeddedMediaExperienceEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool embeddedMediaExperienceEnabled;
  embeddedMediaExperienceEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setEmbeddedMediaExperienceEnabled(embeddedMediaExperienceEnabled);
}

static void setFetchImagePlaceholdersMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setFetchImagePlaceholders");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool fetchImagePlaceholders;
  fetchImagePlaceholders = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setFetchImagePlaceholders(fetchImagePlaceholders);
}

static void setForceAndroidOverlayScrollbarMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setForceAndroidOverlayScrollbar");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool forceAndroidOverlayScrollbar;
  forceAndroidOverlayScrollbar = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setForceAndroidOverlayScrollbar(forceAndroidOverlayScrollbar);
}

static void setForceMainWorldInitializationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setForceMainWorldInitialization");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool forceMainWorldInitialization;
  forceMainWorldInitialization = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setForceMainWorldInitialization(forceMainWorldInitialization);
}

static void setForcePreloadNoneForMediaElementsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setForcePreloadNoneForMediaElements");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool forcePreloadNoneForMediaElements;
  forcePreloadNoneForMediaElements = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setForcePreloadNoneForMediaElements(forcePreloadNoneForMediaElements);
}

static void setForceTouchEventFeatureDetectionForInspectorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setForceTouchEventFeatureDetectionForInspector");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool forceTouchEventFeatureDetectionForInspector;
  forceTouchEventFeatureDetectionForInspector = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setForceTouchEventFeatureDetectionForInspector(forceTouchEventFeatureDetectionForInspector);
}

static void setForceZeroLayoutHeightMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setForceZeroLayoutHeight");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool forceZeroLayoutHeight;
  forceZeroLayoutHeight = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setForceZeroLayoutHeight(forceZeroLayoutHeight);
}

static void setFullscreenSupportedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setFullscreenSupported");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool fullscreenSupported;
  fullscreenSupported = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setFullscreenSupported(fullscreenSupported);
}

static void setHideDownloadUIMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setHideDownloadUI");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool hideDownloadUI;
  hideDownloadUI = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setHideDownloadUI(hideDownloadUI);
}

static void setHideScrollbarsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setHideScrollbars");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool hideScrollbars;
  hideScrollbars = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setHideScrollbars(hideScrollbars);
}

static void setHighContrastContrastMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setHighContrastContrast");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double highContrastContrast;
  highContrastContrast = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setHighContrastContrast(highContrastContrast);
}

static void setHighContrastGrayscaleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setHighContrastGrayscale");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool highContrastGrayscale;
  highContrastGrayscale = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setHighContrastGrayscale(highContrastGrayscale);
}

static void setHistoryEntryRequiresUserGestureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setHistoryEntryRequiresUserGesture");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool historyEntryRequiresUserGesture;
  historyEntryRequiresUserGesture = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setHistoryEntryRequiresUserGesture(historyEntryRequiresUserGesture);
}

static void setHyperlinkAuditingEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setHyperlinkAuditingEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool hyperlinkAuditingEnabled;
  hyperlinkAuditingEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setHyperlinkAuditingEnabled(hyperlinkAuditingEnabled);
}

static void setIgnoreMainFrameOverflowHiddenQuirkMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setIgnoreMainFrameOverflowHiddenQuirk");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool ignoreMainFrameOverflowHiddenQuirk;
  ignoreMainFrameOverflowHiddenQuirk = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setIgnoreMainFrameOverflowHiddenQuirk(ignoreMainFrameOverflowHiddenQuirk);
}

static void setImagesEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setImagesEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool imagesEnabled;
  imagesEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setImagesEnabled(imagesEnabled);
}

static void setImmersiveModeEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setImmersiveModeEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool immersiveModeEnabled;
  immersiveModeEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setImmersiveModeEnabled(immersiveModeEnabled);
}

static void setInlineTextBoxAccessibilityEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setInlineTextBoxAccessibilityEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool inlineTextBoxAccessibilityEnabled;
  inlineTextBoxAccessibilityEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setInlineTextBoxAccessibilityEnabled(inlineTextBoxAccessibilityEnabled);
}

static void setJavaScriptCanAccessClipboardMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setJavaScriptCanAccessClipboard");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool javaScriptCanAccessClipboard;
  javaScriptCanAccessClipboard = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setJavaScriptCanAccessClipboard(javaScriptCanAccessClipboard);
}

static void setLoadWithOverviewModeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setLoadWithOverviewMode");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool loadWithOverviewMode;
  loadWithOverviewMode = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setLoadWithOverviewMode(loadWithOverviewMode);
}

static void setLoadsImagesAutomaticallyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setLoadsImagesAutomatically");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool loadsImagesAutomatically;
  loadsImagesAutomatically = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setLoadsImagesAutomatically(loadsImagesAutomatically);
}

static void setLocalStorageEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setLocalStorageEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool localStorageEnabled;
  localStorageEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setLocalStorageEnabled(localStorageEnabled);
}

static void setLogDnsPrefetchAndPreconnectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setLogDnsPrefetchAndPreconnect");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool logDnsPrefetchAndPreconnect;
  logDnsPrefetchAndPreconnect = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setLogDnsPrefetchAndPreconnect(logDnsPrefetchAndPreconnect);
}

static void setLogPreloadMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setLogPreload");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool logPreload;
  logPreload = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setLogPreload(logPreload);
}

static void setMainFrameClipsContentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setMainFrameClipsContent");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool mainFrameClipsContent;
  mainFrameClipsContent = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setMainFrameClipsContent(mainFrameClipsContent);
}

static void setMainFrameResizesAreOrientationChangesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setMainFrameResizesAreOrientationChanges");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool mainFrameResizesAreOrientationChanges;
  mainFrameResizesAreOrientationChanges = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setMainFrameResizesAreOrientationChanges(mainFrameResizesAreOrientationChanges);
}

static void setMaxTouchPointsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setMaxTouchPoints");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t maxTouchPoints;
  maxTouchPoints = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setMaxTouchPoints(maxTouchPoints);
}

static void setMediaControlsEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setMediaControlsEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool mediaControlsEnabled;
  mediaControlsEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setMediaControlsEnabled(mediaControlsEnabled);
}

static void setMediaDownloadInProductHelpEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setMediaDownloadInProductHelpEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool mediaDownloadInProductHelpEnabled;
  mediaDownloadInProductHelpEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setMediaDownloadInProductHelpEnabled(mediaDownloadInProductHelpEnabled);
}

static void setMediaPlaybackGestureWhitelistScopeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setMediaPlaybackGestureWhitelistScope", "InternalSettingsGenerated", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> mediaPlaybackGestureWhitelistScope;
  mediaPlaybackGestureWhitelistScope = info[0];
  if (!mediaPlaybackGestureWhitelistScope.Prepare())
    return;

  impl->setMediaPlaybackGestureWhitelistScope(mediaPlaybackGestureWhitelistScope);
}

static void setMediaTypeOverrideMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setMediaTypeOverride", "InternalSettingsGenerated", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> mediaTypeOverride;
  mediaTypeOverride = info[0];
  if (!mediaTypeOverride.Prepare())
    return;

  impl->setMediaTypeOverride(mediaTypeOverride);
}

static void setMinimumAccelerated2dCanvasSizeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setMinimumAccelerated2dCanvasSize");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t minimumAccelerated2dCanvasSize;
  minimumAccelerated2dCanvasSize = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setMinimumAccelerated2dCanvasSize(minimumAccelerated2dCanvasSize);
}

static void setMinimumFontSizeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setMinimumFontSize");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t minimumFontSize;
  minimumFontSize = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setMinimumFontSize(minimumFontSize);
}

static void setMinimumLogicalFontSizeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setMinimumLogicalFontSize");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t minimumLogicalFontSize;
  minimumLogicalFontSize = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setMinimumLogicalFontSize(minimumLogicalFontSize);
}

static void setMockGestureTapHighlightsEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setMockGestureTapHighlightsEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool mockGestureTapHighlightsEnabled;
  mockGestureTapHighlightsEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setMockGestureTapHighlightsEnabled(mockGestureTapHighlightsEnabled);
}

static void setMultiTargetTapNotificationEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setMultiTargetTapNotificationEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool multiTargetTapNotificationEnabled;
  multiTargetTapNotificationEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setMultiTargetTapNotificationEnabled(multiTargetTapNotificationEnabled);
}

static void setNavigateOnDragDropMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setNavigateOnDragDrop");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool navigateOnDragDrop;
  navigateOnDragDrop = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setNavigateOnDragDrop(navigateOnDragDrop);
}

static void setNavigatorPlatformOverrideMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setNavigatorPlatformOverride", "InternalSettingsGenerated", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> navigatorPlatformOverride;
  navigatorPlatformOverride = info[0];
  if (!navigatorPlatformOverride.Prepare())
    return;

  impl->setNavigatorPlatformOverride(navigatorPlatformOverride);
}

static void setOfflineWebApplicationCacheEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setOfflineWebApplicationCacheEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool offlineWebApplicationCacheEnabled;
  offlineWebApplicationCacheEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setOfflineWebApplicationCacheEnabled(offlineWebApplicationCacheEnabled);
}

static void setPasswordEchoDurationInSecondsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setPasswordEchoDurationInSeconds");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double passwordEchoDurationInSeconds;
  passwordEchoDurationInSeconds = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setPasswordEchoDurationInSeconds(passwordEchoDurationInSeconds);
}

static void setPasswordEchoEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setPasswordEchoEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool passwordEchoEnabled;
  passwordEchoEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setPasswordEchoEnabled(passwordEchoEnabled);
}

static void setPictureInPictureEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setPictureInPictureEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool pictureInPictureEnabled;
  pictureInPictureEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setPictureInPictureEnabled(pictureInPictureEnabled);
}

static void setPluginsEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setPluginsEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool pluginsEnabled;
  pluginsEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setPluginsEnabled(pluginsEnabled);
}

static void setPreferCompositingToLCDTextEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setPreferCompositingToLCDTextEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool preferCompositingToLCDTextEnabled;
  preferCompositingToLCDTextEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setPreferCompositingToLCDTextEnabled(preferCompositingToLCDTextEnabled);
}

static void setPreferHiddenVolumeControlsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setPreferHiddenVolumeControls");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool preferHiddenVolumeControls;
  preferHiddenVolumeControls = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setPreferHiddenVolumeControls(preferHiddenVolumeControls);
}

static void setPresentationReceiverMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setPresentationReceiver");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool presentationReceiver;
  presentationReceiver = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setPresentationReceiver(presentationReceiver);
}

static void setPresentationRequiresUserGestureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setPresentationRequiresUserGesture");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool presentationRequiresUserGesture;
  presentationRequiresUserGesture = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setPresentationRequiresUserGesture(presentationRequiresUserGesture);
}

static void setReportScreenSizeInPhysicalPixelsQuirkMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setReportScreenSizeInPhysicalPixelsQuirk");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool reportScreenSizeInPhysicalPixelsQuirk;
  reportScreenSizeInPhysicalPixelsQuirk = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setReportScreenSizeInPhysicalPixelsQuirk(reportScreenSizeInPhysicalPixelsQuirk);
}

static void setRubberBandingOnCompositorThreadMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setRubberBandingOnCompositorThread");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool rubberBandingOnCompositorThread;
  rubberBandingOnCompositorThread = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setRubberBandingOnCompositorThread(rubberBandingOnCompositorThread);
}

static void setScriptEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setScriptEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool scriptEnabled;
  scriptEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setScriptEnabled(scriptEnabled);
}

static void setScrollAnimatorEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setScrollAnimatorEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool scrollAnimatorEnabled;
  scrollAnimatorEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setScrollAnimatorEnabled(scrollAnimatorEnabled);
}

static void setSelectTrailingWhitespaceEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setSelectTrailingWhitespaceEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool selectTrailingWhitespaceEnabled;
  selectTrailingWhitespaceEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setSelectTrailingWhitespaceEnabled(selectTrailingWhitespaceEnabled);
}

static void setSelectionIncludesAltImageTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setSelectionIncludesAltImageText");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool selectionIncludesAltImageText;
  selectionIncludesAltImageText = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setSelectionIncludesAltImageText(selectionIncludesAltImageText);
}

static void setShouldClearDocumentBackgroundMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setShouldClearDocumentBackground");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool shouldClearDocumentBackground;
  shouldClearDocumentBackground = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setShouldClearDocumentBackground(shouldClearDocumentBackground);
}

static void setShouldPrintBackgroundsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setShouldPrintBackgrounds");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool shouldPrintBackgrounds;
  shouldPrintBackgrounds = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setShouldPrintBackgrounds(shouldPrintBackgrounds);
}

static void setShouldRespectImageOrientationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setShouldRespectImageOrientation");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool shouldRespectImageOrientation;
  shouldRespectImageOrientation = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setShouldRespectImageOrientation(shouldRespectImageOrientation);
}

static void setShouldReuseGlobalForUnownedMainFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setShouldReuseGlobalForUnownedMainFrame");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool shouldReuseGlobalForUnownedMainFrame;
  shouldReuseGlobalForUnownedMainFrame = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setShouldReuseGlobalForUnownedMainFrame(shouldReuseGlobalForUnownedMainFrame);
}

static void setShouldThrottlePushStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setShouldThrottlePushState");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool shouldThrottlePushState;
  shouldThrottlePushState = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setShouldThrottlePushState(shouldThrottlePushState);
}

static void setShowContextMenuOnMouseUpMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setShowContextMenuOnMouseUp");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool showContextMenuOnMouseUp;
  showContextMenuOnMouseUp = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setShowContextMenuOnMouseUp(showContextMenuOnMouseUp);
}

static void setSmartInsertDeleteEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setSmartInsertDeleteEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool smartInsertDeleteEnabled;
  smartInsertDeleteEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setSmartInsertDeleteEnabled(smartInsertDeleteEnabled);
}

static void setSmoothScrollForFindEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setSmoothScrollForFindEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool smoothScrollForFindEnabled;
  smoothScrollForFindEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setSmoothScrollForFindEnabled(smoothScrollForFindEnabled);
}

static void setSpatialNavigationEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setSpatialNavigationEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool spatialNavigationEnabled;
  spatialNavigationEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setSpatialNavigationEnabled(spatialNavigationEnabled);
}

static void setSpellCheckEnabledByDefaultMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setSpellCheckEnabledByDefault");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool spellCheckEnabledByDefault;
  spellCheckEnabledByDefault = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setSpellCheckEnabledByDefault(spellCheckEnabledByDefault);
}

static void setStrictMixedContentCheckingMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setStrictMixedContentChecking");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool strictMixedContentChecking;
  strictMixedContentChecking = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setStrictMixedContentChecking(strictMixedContentChecking);
}

static void setStrictMixedContentCheckingForPluginMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setStrictMixedContentCheckingForPlugin");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool strictMixedContentCheckingForPlugin;
  strictMixedContentCheckingForPlugin = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setStrictMixedContentCheckingForPlugin(strictMixedContentCheckingForPlugin);
}

static void setStrictPowerfulFeatureRestrictionsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setStrictPowerfulFeatureRestrictions");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool strictPowerfulFeatureRestrictions;
  strictPowerfulFeatureRestrictions = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setStrictPowerfulFeatureRestrictions(strictPowerfulFeatureRestrictions);
}

static void setStrictlyBlockBlockableMixedContentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setStrictlyBlockBlockableMixedContent");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool strictlyBlockBlockableMixedContent;
  strictlyBlockBlockableMixedContent = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setStrictlyBlockBlockableMixedContent(strictlyBlockBlockableMixedContent);
}

static void setSupportsMultipleWindowsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setSupportsMultipleWindows");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool supportsMultipleWindows;
  supportsMultipleWindows = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setSupportsMultipleWindows(supportsMultipleWindows);
}

static void setSyncXHRInDocumentsEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setSyncXHRInDocumentsEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool syncXHRInDocumentsEnabled;
  syncXHRInDocumentsEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setSyncXHRInDocumentsEnabled(syncXHRInDocumentsEnabled);
}

static void setTextAreasAreResizableMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setTextAreasAreResizable");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool textAreasAreResizable;
  textAreasAreResizable = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setTextAreasAreResizable(textAreasAreResizable);
}

static void setTextTrackBackgroundColorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setTextTrackBackgroundColor", "InternalSettingsGenerated", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> textTrackBackgroundColor;
  textTrackBackgroundColor = info[0];
  if (!textTrackBackgroundColor.Prepare())
    return;

  impl->setTextTrackBackgroundColor(textTrackBackgroundColor);
}

static void setTextTrackFontFamilyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setTextTrackFontFamily", "InternalSettingsGenerated", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> textTrackFontFamily;
  textTrackFontFamily = info[0];
  if (!textTrackFontFamily.Prepare())
    return;

  impl->setTextTrackFontFamily(textTrackFontFamily);
}

static void setTextTrackFontStyleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setTextTrackFontStyle", "InternalSettingsGenerated", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> textTrackFontStyle;
  textTrackFontStyle = info[0];
  if (!textTrackFontStyle.Prepare())
    return;

  impl->setTextTrackFontStyle(textTrackFontStyle);
}

static void setTextTrackFontVariantMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setTextTrackFontVariant", "InternalSettingsGenerated", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> textTrackFontVariant;
  textTrackFontVariant = info[0];
  if (!textTrackFontVariant.Prepare())
    return;

  impl->setTextTrackFontVariant(textTrackFontVariant);
}

static void setTextTrackMarginPercentageMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setTextTrackMarginPercentage");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double textTrackMarginPercentage;
  textTrackMarginPercentage = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setTextTrackMarginPercentage(textTrackMarginPercentage);
}

static void setTextTrackTextColorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setTextTrackTextColor", "InternalSettingsGenerated", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> textTrackTextColor;
  textTrackTextColor = info[0];
  if (!textTrackTextColor.Prepare())
    return;

  impl->setTextTrackTextColor(textTrackTextColor);
}

static void setTextTrackTextShadowMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setTextTrackTextShadow", "InternalSettingsGenerated", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> textTrackTextShadow;
  textTrackTextShadow = info[0];
  if (!textTrackTextShadow.Prepare())
    return;

  impl->setTextTrackTextShadow(textTrackTextShadow);
}

static void setTextTrackTextSizeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setTextTrackTextSize", "InternalSettingsGenerated", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> textTrackTextSize;
  textTrackTextSize = info[0];
  if (!textTrackTextSize.Prepare())
    return;

  impl->setTextTrackTextSize(textTrackTextSize);
}

static void setThreadedScrollingEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setThreadedScrollingEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool threadedScrollingEnabled;
  threadedScrollingEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setThreadedScrollingEnabled(threadedScrollingEnabled);
}

static void setTouchAdjustmentEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setTouchAdjustmentEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool touchAdjustmentEnabled;
  touchAdjustmentEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setTouchAdjustmentEnabled(touchAdjustmentEnabled);
}

static void setTouchDragDropEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setTouchDragDropEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool touchDragDropEnabled;
  touchDragDropEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setTouchDragDropEnabled(touchDragDropEnabled);
}

static void setTouchEditingEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setTouchEditingEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool touchEditingEnabled;
  touchEditingEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setTouchEditingEnabled(touchEditingEnabled);
}

static void setUseLegacyBackgroundSizeShorthandBehaviorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setUseLegacyBackgroundSizeShorthandBehavior");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool useLegacyBackgroundSizeShorthandBehavior;
  useLegacyBackgroundSizeShorthandBehavior = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setUseLegacyBackgroundSizeShorthandBehavior(useLegacyBackgroundSizeShorthandBehavior);
}

static void setUseSolidColorScrollbarsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setUseSolidColorScrollbars");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool useSolidColorScrollbars;
  useSolidColorScrollbars = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setUseSolidColorScrollbars(useSolidColorScrollbars);
}

static void setUseWideViewportMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setUseWideViewport");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool useWideViewport;
  useWideViewport = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setUseWideViewport(useWideViewport);
}

static void setValidationMessageTimerMagnificationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setValidationMessageTimerMagnification");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t validationMessageTimerMagnification;
  validationMessageTimerMagnification = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exceptionState, kNormalConversion);
  if (exceptionState.HadException())
    return;

  impl->setValidationMessageTimerMagnification(validationMessageTimerMagnification);
}

static void setViewportEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setViewportEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool viewportEnabled;
  viewportEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setViewportEnabled(viewportEnabled);
}

static void setViewportMetaEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setViewportMetaEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool viewportMetaEnabled;
  viewportMetaEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setViewportMetaEnabled(viewportMetaEnabled);
}

static void setViewportMetaMergeContentQuirkMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setViewportMetaMergeContentQuirk");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool viewportMetaMergeContentQuirk;
  viewportMetaMergeContentQuirk = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setViewportMetaMergeContentQuirk(viewportMetaMergeContentQuirk);
}

static void setViewportMetaZeroValuesQuirkMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setViewportMetaZeroValuesQuirk");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool viewportMetaZeroValuesQuirk;
  viewportMetaZeroValuesQuirk = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setViewportMetaZeroValuesQuirk(viewportMetaZeroValuesQuirk);
}

static void setWebGL1EnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setWebGL1Enabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool webGL1Enabled;
  webGL1Enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setWebGL1Enabled(webGL1Enabled);
}

static void setWebGL2EnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setWebGL2Enabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool webGL2Enabled;
  webGL2Enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setWebGL2Enabled(webGL2Enabled);
}

static void setWebGLErrorsToConsoleEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setWebGLErrorsToConsoleEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool webGLErrorsToConsoleEnabled;
  webGLErrorsToConsoleEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setWebGLErrorsToConsoleEnabled(webGLErrorsToConsoleEnabled);
}

static void setWebSecurityEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setWebSecurityEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool webSecurityEnabled;
  webSecurityEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setWebSecurityEnabled(webSecurityEnabled);
}

static void setWideViewportQuirkEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setWideViewportQuirkEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool wideViewportQuirkEnabled;
  wideViewportQuirkEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setWideViewportQuirkEnabled(wideViewportQuirkEnabled);
}

static void setXSSAuditorEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettingsGenerated", "setXSSAuditorEnabled");

  InternalSettingsGenerated* impl = V8InternalSettingsGenerated::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool xssAuditorEnabled;
  xssAuditorEnabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;

  impl->setXSSAuditorEnabled(xssAuditorEnabled);
}

} // namespace InternalSettingsGeneratedV8Internal

void V8InternalSettingsGenerated::setDOMPasteAllowedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setDOMPasteAllowed");

  InternalSettingsGeneratedV8Internal::setDOMPasteAllowedMethod(info);
}

void V8InternalSettingsGenerated::setAccelerated2dCanvasMSAASampleCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setAccelerated2dCanvasMSAASampleCount");

  InternalSettingsGeneratedV8Internal::setAccelerated2dCanvasMSAASampleCountMethod(info);
}

void V8InternalSettingsGenerated::setAcceleratedCompositingEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setAcceleratedCompositingEnabled");

  InternalSettingsGeneratedV8Internal::setAcceleratedCompositingEnabledMethod(info);
}

void V8InternalSettingsGenerated::setAccessibilityEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setAccessibilityEnabled");

  InternalSettingsGeneratedV8Internal::setAccessibilityEnabledMethod(info);
}

void V8InternalSettingsGenerated::setAccessibilityFontScaleFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setAccessibilityFontScaleFactor");

  InternalSettingsGeneratedV8Internal::setAccessibilityFontScaleFactorMethod(info);
}

void V8InternalSettingsGenerated::setAccessibilityPasswordValuesEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setAccessibilityPasswordValuesEnabled");

  InternalSettingsGeneratedV8Internal::setAccessibilityPasswordValuesEnabledMethod(info);
}

void V8InternalSettingsGenerated::setAllowCustomScrollbarInMainFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setAllowCustomScrollbarInMainFrame");

  InternalSettingsGeneratedV8Internal::setAllowCustomScrollbarInMainFrameMethod(info);
}

void V8InternalSettingsGenerated::setAllowFileAccessFromFileURLsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setAllowFileAccessFromFileURLs");

  InternalSettingsGeneratedV8Internal::setAllowFileAccessFromFileURLsMethod(info);
}

void V8InternalSettingsGenerated::setAllowGeolocationOnInsecureOriginsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setAllowGeolocationOnInsecureOrigins");

  InternalSettingsGeneratedV8Internal::setAllowGeolocationOnInsecureOriginsMethod(info);
}

void V8InternalSettingsGenerated::setAllowRunningOfInsecureContentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setAllowRunningOfInsecureContent");

  InternalSettingsGeneratedV8Internal::setAllowRunningOfInsecureContentMethod(info);
}

void V8InternalSettingsGenerated::setAllowScriptsToCloseWindowsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setAllowScriptsToCloseWindows");

  InternalSettingsGeneratedV8Internal::setAllowScriptsToCloseWindowsMethod(info);
}

void V8InternalSettingsGenerated::setAllowUniversalAccessFromFileURLsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setAllowUniversalAccessFromFileURLs");

  InternalSettingsGeneratedV8Internal::setAllowUniversalAccessFromFileURLsMethod(info);
}

void V8InternalSettingsGenerated::setAlwaysShowContextMenuOnTouchMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setAlwaysShowContextMenuOnTouch");

  InternalSettingsGeneratedV8Internal::setAlwaysShowContextMenuOnTouchMethod(info);
}

void V8InternalSettingsGenerated::setAntialiased2dCanvasEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setAntialiased2dCanvasEnabled");

  InternalSettingsGeneratedV8Internal::setAntialiased2dCanvasEnabledMethod(info);
}

void V8InternalSettingsGenerated::setAntialiasedClips2dCanvasEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setAntialiasedClips2dCanvasEnabled");

  InternalSettingsGeneratedV8Internal::setAntialiasedClips2dCanvasEnabledMethod(info);
}

void V8InternalSettingsGenerated::setAvailableHoverTypesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setAvailableHoverTypes");

  InternalSettingsGeneratedV8Internal::setAvailableHoverTypesMethod(info);
}

void V8InternalSettingsGenerated::setAvailablePointerTypesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setAvailablePointerTypes");

  InternalSettingsGeneratedV8Internal::setAvailablePointerTypesMethod(info);
}

void V8InternalSettingsGenerated::setBarrelButtonForDragEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setBarrelButtonForDragEnabled");

  InternalSettingsGeneratedV8Internal::setBarrelButtonForDragEnabledMethod(info);
}

void V8InternalSettingsGenerated::setCookieEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setCookieEnabled");

  InternalSettingsGeneratedV8Internal::setCookieEnabledMethod(info);
}

void V8InternalSettingsGenerated::setCSSExternalScannerNoPreloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setCSSExternalScannerNoPreload");

  InternalSettingsGeneratedV8Internal::setCSSExternalScannerNoPreloadMethod(info);
}

void V8InternalSettingsGenerated::setCSSExternalScannerPreloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setCSSExternalScannerPreload");

  InternalSettingsGeneratedV8Internal::setCSSExternalScannerPreloadMethod(info);
}

void V8InternalSettingsGenerated::setDataSaverHoldbackMediaApiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setDataSaverHoldbackMediaApi");

  InternalSettingsGeneratedV8Internal::setDataSaverHoldbackMediaApiMethod(info);
}

void V8InternalSettingsGenerated::setDataSaverHoldbackWebApiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setDataSaverHoldbackWebApi");

  InternalSettingsGeneratedV8Internal::setDataSaverHoldbackWebApiMethod(info);
}

void V8InternalSettingsGenerated::setDefaultFixedFontSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setDefaultFixedFontSize");

  InternalSettingsGeneratedV8Internal::setDefaultFixedFontSizeMethod(info);
}

void V8InternalSettingsGenerated::setDefaultFontSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setDefaultFontSize");

  InternalSettingsGeneratedV8Internal::setDefaultFontSizeMethod(info);
}

void V8InternalSettingsGenerated::setDefaultTextEncodingNameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setDefaultTextEncodingName");

  InternalSettingsGeneratedV8Internal::setDefaultTextEncodingNameMethod(info);
}

void V8InternalSettingsGenerated::setDefaultVideoPosterURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setDefaultVideoPosterURL");

  InternalSettingsGeneratedV8Internal::setDefaultVideoPosterURLMethod(info);
}

void V8InternalSettingsGenerated::setDeviceScaleAdjustmentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setDeviceScaleAdjustment");

  InternalSettingsGeneratedV8Internal::setDeviceScaleAdjustmentMethod(info);
}

void V8InternalSettingsGenerated::setDeviceSupportsTouchMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setDeviceSupportsTouch");

  InternalSettingsGeneratedV8Internal::setDeviceSupportsTouchMethod(info);
}

void V8InternalSettingsGenerated::setDisableReadingFromCanvasMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setDisableReadingFromCanvas");

  InternalSettingsGeneratedV8Internal::setDisableReadingFromCanvasMethod(info);
}

void V8InternalSettingsGenerated::setDisallowFetchForDocWrittenScriptsInMainFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setDisallowFetchForDocWrittenScriptsInMainFrame");

  InternalSettingsGeneratedV8Internal::setDisallowFetchForDocWrittenScriptsInMainFrameMethod(info);
}

void V8InternalSettingsGenerated::setDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2GMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G");

  InternalSettingsGeneratedV8Internal::setDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2GMethod(info);
}

void V8InternalSettingsGenerated::setDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnectionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections");

  InternalSettingsGeneratedV8Internal::setDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnectionsMethod(info);
}

void V8InternalSettingsGenerated::setDNSPrefetchingEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setDNSPrefetchingEnabled");

  InternalSettingsGeneratedV8Internal::setDNSPrefetchingEnabledMethod(info);
}

void V8InternalSettingsGenerated::setDoHtmlPreloadScanningMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setDoHtmlPreloadScanning");

  InternalSettingsGeneratedV8Internal::setDoHtmlPreloadScanningMethod(info);
}

void V8InternalSettingsGenerated::setDoNotUpdateSelectionOnMutatingSelectionRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setDoNotUpdateSelectionOnMutatingSelectionRange");

  InternalSettingsGeneratedV8Internal::setDoNotUpdateSelectionOnMutatingSelectionRangeMethod(info);
}

void V8InternalSettingsGenerated::setDownloadableBinaryFontsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setDownloadableBinaryFontsEnabled");

  InternalSettingsGeneratedV8Internal::setDownloadableBinaryFontsEnabledMethod(info);
}

void V8InternalSettingsGenerated::setEmbeddedMediaExperienceEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setEmbeddedMediaExperienceEnabled");

  InternalSettingsGeneratedV8Internal::setEmbeddedMediaExperienceEnabledMethod(info);
}

void V8InternalSettingsGenerated::setFetchImagePlaceholdersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setFetchImagePlaceholders");

  InternalSettingsGeneratedV8Internal::setFetchImagePlaceholdersMethod(info);
}

void V8InternalSettingsGenerated::setForceAndroidOverlayScrollbarMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setForceAndroidOverlayScrollbar");

  InternalSettingsGeneratedV8Internal::setForceAndroidOverlayScrollbarMethod(info);
}

void V8InternalSettingsGenerated::setForceMainWorldInitializationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setForceMainWorldInitialization");

  InternalSettingsGeneratedV8Internal::setForceMainWorldInitializationMethod(info);
}

void V8InternalSettingsGenerated::setForcePreloadNoneForMediaElementsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setForcePreloadNoneForMediaElements");

  InternalSettingsGeneratedV8Internal::setForcePreloadNoneForMediaElementsMethod(info);
}

void V8InternalSettingsGenerated::setForceTouchEventFeatureDetectionForInspectorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setForceTouchEventFeatureDetectionForInspector");

  InternalSettingsGeneratedV8Internal::setForceTouchEventFeatureDetectionForInspectorMethod(info);
}

void V8InternalSettingsGenerated::setForceZeroLayoutHeightMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setForceZeroLayoutHeight");

  InternalSettingsGeneratedV8Internal::setForceZeroLayoutHeightMethod(info);
}

void V8InternalSettingsGenerated::setFullscreenSupportedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setFullscreenSupported");

  InternalSettingsGeneratedV8Internal::setFullscreenSupportedMethod(info);
}

void V8InternalSettingsGenerated::setHideDownloadUIMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setHideDownloadUI");

  InternalSettingsGeneratedV8Internal::setHideDownloadUIMethod(info);
}

void V8InternalSettingsGenerated::setHideScrollbarsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setHideScrollbars");

  InternalSettingsGeneratedV8Internal::setHideScrollbarsMethod(info);
}

void V8InternalSettingsGenerated::setHighContrastContrastMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setHighContrastContrast");

  InternalSettingsGeneratedV8Internal::setHighContrastContrastMethod(info);
}

void V8InternalSettingsGenerated::setHighContrastGrayscaleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setHighContrastGrayscale");

  InternalSettingsGeneratedV8Internal::setHighContrastGrayscaleMethod(info);
}

void V8InternalSettingsGenerated::setHistoryEntryRequiresUserGestureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setHistoryEntryRequiresUserGesture");

  InternalSettingsGeneratedV8Internal::setHistoryEntryRequiresUserGestureMethod(info);
}

void V8InternalSettingsGenerated::setHyperlinkAuditingEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setHyperlinkAuditingEnabled");

  InternalSettingsGeneratedV8Internal::setHyperlinkAuditingEnabledMethod(info);
}

void V8InternalSettingsGenerated::setIgnoreMainFrameOverflowHiddenQuirkMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setIgnoreMainFrameOverflowHiddenQuirk");

  InternalSettingsGeneratedV8Internal::setIgnoreMainFrameOverflowHiddenQuirkMethod(info);
}

void V8InternalSettingsGenerated::setImagesEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setImagesEnabled");

  InternalSettingsGeneratedV8Internal::setImagesEnabledMethod(info);
}

void V8InternalSettingsGenerated::setImmersiveModeEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setImmersiveModeEnabled");

  InternalSettingsGeneratedV8Internal::setImmersiveModeEnabledMethod(info);
}

void V8InternalSettingsGenerated::setInlineTextBoxAccessibilityEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setInlineTextBoxAccessibilityEnabled");

  InternalSettingsGeneratedV8Internal::setInlineTextBoxAccessibilityEnabledMethod(info);
}

void V8InternalSettingsGenerated::setJavaScriptCanAccessClipboardMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setJavaScriptCanAccessClipboard");

  InternalSettingsGeneratedV8Internal::setJavaScriptCanAccessClipboardMethod(info);
}

void V8InternalSettingsGenerated::setLoadWithOverviewModeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setLoadWithOverviewMode");

  InternalSettingsGeneratedV8Internal::setLoadWithOverviewModeMethod(info);
}

void V8InternalSettingsGenerated::setLoadsImagesAutomaticallyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setLoadsImagesAutomatically");

  InternalSettingsGeneratedV8Internal::setLoadsImagesAutomaticallyMethod(info);
}

void V8InternalSettingsGenerated::setLocalStorageEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setLocalStorageEnabled");

  InternalSettingsGeneratedV8Internal::setLocalStorageEnabledMethod(info);
}

void V8InternalSettingsGenerated::setLogDnsPrefetchAndPreconnectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setLogDnsPrefetchAndPreconnect");

  InternalSettingsGeneratedV8Internal::setLogDnsPrefetchAndPreconnectMethod(info);
}

void V8InternalSettingsGenerated::setLogPreloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setLogPreload");

  InternalSettingsGeneratedV8Internal::setLogPreloadMethod(info);
}

void V8InternalSettingsGenerated::setMainFrameClipsContentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setMainFrameClipsContent");

  InternalSettingsGeneratedV8Internal::setMainFrameClipsContentMethod(info);
}

void V8InternalSettingsGenerated::setMainFrameResizesAreOrientationChangesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setMainFrameResizesAreOrientationChanges");

  InternalSettingsGeneratedV8Internal::setMainFrameResizesAreOrientationChangesMethod(info);
}

void V8InternalSettingsGenerated::setMaxTouchPointsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setMaxTouchPoints");

  InternalSettingsGeneratedV8Internal::setMaxTouchPointsMethod(info);
}

void V8InternalSettingsGenerated::setMediaControlsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setMediaControlsEnabled");

  InternalSettingsGeneratedV8Internal::setMediaControlsEnabledMethod(info);
}

void V8InternalSettingsGenerated::setMediaDownloadInProductHelpEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setMediaDownloadInProductHelpEnabled");

  InternalSettingsGeneratedV8Internal::setMediaDownloadInProductHelpEnabledMethod(info);
}

void V8InternalSettingsGenerated::setMediaPlaybackGestureWhitelistScopeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setMediaPlaybackGestureWhitelistScope");

  InternalSettingsGeneratedV8Internal::setMediaPlaybackGestureWhitelistScopeMethod(info);
}

void V8InternalSettingsGenerated::setMediaTypeOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setMediaTypeOverride");

  InternalSettingsGeneratedV8Internal::setMediaTypeOverrideMethod(info);
}

void V8InternalSettingsGenerated::setMinimumAccelerated2dCanvasSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setMinimumAccelerated2dCanvasSize");

  InternalSettingsGeneratedV8Internal::setMinimumAccelerated2dCanvasSizeMethod(info);
}

void V8InternalSettingsGenerated::setMinimumFontSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setMinimumFontSize");

  InternalSettingsGeneratedV8Internal::setMinimumFontSizeMethod(info);
}

void V8InternalSettingsGenerated::setMinimumLogicalFontSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setMinimumLogicalFontSize");

  InternalSettingsGeneratedV8Internal::setMinimumLogicalFontSizeMethod(info);
}

void V8InternalSettingsGenerated::setMockGestureTapHighlightsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setMockGestureTapHighlightsEnabled");

  InternalSettingsGeneratedV8Internal::setMockGestureTapHighlightsEnabledMethod(info);
}

void V8InternalSettingsGenerated::setMultiTargetTapNotificationEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setMultiTargetTapNotificationEnabled");

  InternalSettingsGeneratedV8Internal::setMultiTargetTapNotificationEnabledMethod(info);
}

void V8InternalSettingsGenerated::setNavigateOnDragDropMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setNavigateOnDragDrop");

  InternalSettingsGeneratedV8Internal::setNavigateOnDragDropMethod(info);
}

void V8InternalSettingsGenerated::setNavigatorPlatformOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setNavigatorPlatformOverride");

  InternalSettingsGeneratedV8Internal::setNavigatorPlatformOverrideMethod(info);
}

void V8InternalSettingsGenerated::setOfflineWebApplicationCacheEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setOfflineWebApplicationCacheEnabled");

  InternalSettingsGeneratedV8Internal::setOfflineWebApplicationCacheEnabledMethod(info);
}

void V8InternalSettingsGenerated::setPasswordEchoDurationInSecondsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setPasswordEchoDurationInSeconds");

  InternalSettingsGeneratedV8Internal::setPasswordEchoDurationInSecondsMethod(info);
}

void V8InternalSettingsGenerated::setPasswordEchoEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setPasswordEchoEnabled");

  InternalSettingsGeneratedV8Internal::setPasswordEchoEnabledMethod(info);
}

void V8InternalSettingsGenerated::setPictureInPictureEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setPictureInPictureEnabled");

  InternalSettingsGeneratedV8Internal::setPictureInPictureEnabledMethod(info);
}

void V8InternalSettingsGenerated::setPluginsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setPluginsEnabled");

  InternalSettingsGeneratedV8Internal::setPluginsEnabledMethod(info);
}

void V8InternalSettingsGenerated::setPreferCompositingToLCDTextEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setPreferCompositingToLCDTextEnabled");

  InternalSettingsGeneratedV8Internal::setPreferCompositingToLCDTextEnabledMethod(info);
}

void V8InternalSettingsGenerated::setPreferHiddenVolumeControlsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setPreferHiddenVolumeControls");

  InternalSettingsGeneratedV8Internal::setPreferHiddenVolumeControlsMethod(info);
}

void V8InternalSettingsGenerated::setPresentationReceiverMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setPresentationReceiver");

  InternalSettingsGeneratedV8Internal::setPresentationReceiverMethod(info);
}

void V8InternalSettingsGenerated::setPresentationRequiresUserGestureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setPresentationRequiresUserGesture");

  InternalSettingsGeneratedV8Internal::setPresentationRequiresUserGestureMethod(info);
}

void V8InternalSettingsGenerated::setReportScreenSizeInPhysicalPixelsQuirkMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setReportScreenSizeInPhysicalPixelsQuirk");

  InternalSettingsGeneratedV8Internal::setReportScreenSizeInPhysicalPixelsQuirkMethod(info);
}

void V8InternalSettingsGenerated::setRubberBandingOnCompositorThreadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setRubberBandingOnCompositorThread");

  InternalSettingsGeneratedV8Internal::setRubberBandingOnCompositorThreadMethod(info);
}

void V8InternalSettingsGenerated::setScriptEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setScriptEnabled");

  InternalSettingsGeneratedV8Internal::setScriptEnabledMethod(info);
}

void V8InternalSettingsGenerated::setScrollAnimatorEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setScrollAnimatorEnabled");

  InternalSettingsGeneratedV8Internal::setScrollAnimatorEnabledMethod(info);
}

void V8InternalSettingsGenerated::setSelectTrailingWhitespaceEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setSelectTrailingWhitespaceEnabled");

  InternalSettingsGeneratedV8Internal::setSelectTrailingWhitespaceEnabledMethod(info);
}

void V8InternalSettingsGenerated::setSelectionIncludesAltImageTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setSelectionIncludesAltImageText");

  InternalSettingsGeneratedV8Internal::setSelectionIncludesAltImageTextMethod(info);
}

void V8InternalSettingsGenerated::setShouldClearDocumentBackgroundMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setShouldClearDocumentBackground");

  InternalSettingsGeneratedV8Internal::setShouldClearDocumentBackgroundMethod(info);
}

void V8InternalSettingsGenerated::setShouldPrintBackgroundsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setShouldPrintBackgrounds");

  InternalSettingsGeneratedV8Internal::setShouldPrintBackgroundsMethod(info);
}

void V8InternalSettingsGenerated::setShouldRespectImageOrientationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setShouldRespectImageOrientation");

  InternalSettingsGeneratedV8Internal::setShouldRespectImageOrientationMethod(info);
}

void V8InternalSettingsGenerated::setShouldReuseGlobalForUnownedMainFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setShouldReuseGlobalForUnownedMainFrame");

  InternalSettingsGeneratedV8Internal::setShouldReuseGlobalForUnownedMainFrameMethod(info);
}

void V8InternalSettingsGenerated::setShouldThrottlePushStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setShouldThrottlePushState");

  InternalSettingsGeneratedV8Internal::setShouldThrottlePushStateMethod(info);
}

void V8InternalSettingsGenerated::setShowContextMenuOnMouseUpMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setShowContextMenuOnMouseUp");

  InternalSettingsGeneratedV8Internal::setShowContextMenuOnMouseUpMethod(info);
}

void V8InternalSettingsGenerated::setSmartInsertDeleteEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setSmartInsertDeleteEnabled");

  InternalSettingsGeneratedV8Internal::setSmartInsertDeleteEnabledMethod(info);
}

void V8InternalSettingsGenerated::setSmoothScrollForFindEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setSmoothScrollForFindEnabled");

  InternalSettingsGeneratedV8Internal::setSmoothScrollForFindEnabledMethod(info);
}

void V8InternalSettingsGenerated::setSpatialNavigationEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setSpatialNavigationEnabled");

  InternalSettingsGeneratedV8Internal::setSpatialNavigationEnabledMethod(info);
}

void V8InternalSettingsGenerated::setSpellCheckEnabledByDefaultMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setSpellCheckEnabledByDefault");

  InternalSettingsGeneratedV8Internal::setSpellCheckEnabledByDefaultMethod(info);
}

void V8InternalSettingsGenerated::setStrictMixedContentCheckingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setStrictMixedContentChecking");

  InternalSettingsGeneratedV8Internal::setStrictMixedContentCheckingMethod(info);
}

void V8InternalSettingsGenerated::setStrictMixedContentCheckingForPluginMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setStrictMixedContentCheckingForPlugin");

  InternalSettingsGeneratedV8Internal::setStrictMixedContentCheckingForPluginMethod(info);
}

void V8InternalSettingsGenerated::setStrictPowerfulFeatureRestrictionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setStrictPowerfulFeatureRestrictions");

  InternalSettingsGeneratedV8Internal::setStrictPowerfulFeatureRestrictionsMethod(info);
}

void V8InternalSettingsGenerated::setStrictlyBlockBlockableMixedContentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setStrictlyBlockBlockableMixedContent");

  InternalSettingsGeneratedV8Internal::setStrictlyBlockBlockableMixedContentMethod(info);
}

void V8InternalSettingsGenerated::setSupportsMultipleWindowsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setSupportsMultipleWindows");

  InternalSettingsGeneratedV8Internal::setSupportsMultipleWindowsMethod(info);
}

void V8InternalSettingsGenerated::setSyncXHRInDocumentsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setSyncXHRInDocumentsEnabled");

  InternalSettingsGeneratedV8Internal::setSyncXHRInDocumentsEnabledMethod(info);
}

void V8InternalSettingsGenerated::setTextAreasAreResizableMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setTextAreasAreResizable");

  InternalSettingsGeneratedV8Internal::setTextAreasAreResizableMethod(info);
}

void V8InternalSettingsGenerated::setTextTrackBackgroundColorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setTextTrackBackgroundColor");

  InternalSettingsGeneratedV8Internal::setTextTrackBackgroundColorMethod(info);
}

void V8InternalSettingsGenerated::setTextTrackFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setTextTrackFontFamily");

  InternalSettingsGeneratedV8Internal::setTextTrackFontFamilyMethod(info);
}

void V8InternalSettingsGenerated::setTextTrackFontStyleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setTextTrackFontStyle");

  InternalSettingsGeneratedV8Internal::setTextTrackFontStyleMethod(info);
}

void V8InternalSettingsGenerated::setTextTrackFontVariantMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setTextTrackFontVariant");

  InternalSettingsGeneratedV8Internal::setTextTrackFontVariantMethod(info);
}

void V8InternalSettingsGenerated::setTextTrackMarginPercentageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setTextTrackMarginPercentage");

  InternalSettingsGeneratedV8Internal::setTextTrackMarginPercentageMethod(info);
}

void V8InternalSettingsGenerated::setTextTrackTextColorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setTextTrackTextColor");

  InternalSettingsGeneratedV8Internal::setTextTrackTextColorMethod(info);
}

void V8InternalSettingsGenerated::setTextTrackTextShadowMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setTextTrackTextShadow");

  InternalSettingsGeneratedV8Internal::setTextTrackTextShadowMethod(info);
}

void V8InternalSettingsGenerated::setTextTrackTextSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setTextTrackTextSize");

  InternalSettingsGeneratedV8Internal::setTextTrackTextSizeMethod(info);
}

void V8InternalSettingsGenerated::setThreadedScrollingEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setThreadedScrollingEnabled");

  InternalSettingsGeneratedV8Internal::setThreadedScrollingEnabledMethod(info);
}

void V8InternalSettingsGenerated::setTouchAdjustmentEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setTouchAdjustmentEnabled");

  InternalSettingsGeneratedV8Internal::setTouchAdjustmentEnabledMethod(info);
}

void V8InternalSettingsGenerated::setTouchDragDropEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setTouchDragDropEnabled");

  InternalSettingsGeneratedV8Internal::setTouchDragDropEnabledMethod(info);
}

void V8InternalSettingsGenerated::setTouchEditingEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setTouchEditingEnabled");

  InternalSettingsGeneratedV8Internal::setTouchEditingEnabledMethod(info);
}

void V8InternalSettingsGenerated::setUseLegacyBackgroundSizeShorthandBehaviorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setUseLegacyBackgroundSizeShorthandBehavior");

  InternalSettingsGeneratedV8Internal::setUseLegacyBackgroundSizeShorthandBehaviorMethod(info);
}

void V8InternalSettingsGenerated::setUseSolidColorScrollbarsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setUseSolidColorScrollbars");

  InternalSettingsGeneratedV8Internal::setUseSolidColorScrollbarsMethod(info);
}

void V8InternalSettingsGenerated::setUseWideViewportMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setUseWideViewport");

  InternalSettingsGeneratedV8Internal::setUseWideViewportMethod(info);
}

void V8InternalSettingsGenerated::setValidationMessageTimerMagnificationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setValidationMessageTimerMagnification");

  InternalSettingsGeneratedV8Internal::setValidationMessageTimerMagnificationMethod(info);
}

void V8InternalSettingsGenerated::setViewportEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setViewportEnabled");

  InternalSettingsGeneratedV8Internal::setViewportEnabledMethod(info);
}

void V8InternalSettingsGenerated::setViewportMetaEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setViewportMetaEnabled");

  InternalSettingsGeneratedV8Internal::setViewportMetaEnabledMethod(info);
}

void V8InternalSettingsGenerated::setViewportMetaMergeContentQuirkMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setViewportMetaMergeContentQuirk");

  InternalSettingsGeneratedV8Internal::setViewportMetaMergeContentQuirkMethod(info);
}

void V8InternalSettingsGenerated::setViewportMetaZeroValuesQuirkMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setViewportMetaZeroValuesQuirk");

  InternalSettingsGeneratedV8Internal::setViewportMetaZeroValuesQuirkMethod(info);
}

void V8InternalSettingsGenerated::setWebGL1EnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setWebGL1Enabled");

  InternalSettingsGeneratedV8Internal::setWebGL1EnabledMethod(info);
}

void V8InternalSettingsGenerated::setWebGL2EnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setWebGL2Enabled");

  InternalSettingsGeneratedV8Internal::setWebGL2EnabledMethod(info);
}

void V8InternalSettingsGenerated::setWebGLErrorsToConsoleEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setWebGLErrorsToConsoleEnabled");

  InternalSettingsGeneratedV8Internal::setWebGLErrorsToConsoleEnabledMethod(info);
}

void V8InternalSettingsGenerated::setWebSecurityEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setWebSecurityEnabled");

  InternalSettingsGeneratedV8Internal::setWebSecurityEnabledMethod(info);
}

void V8InternalSettingsGenerated::setWideViewportQuirkEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setWideViewportQuirkEnabled");

  InternalSettingsGeneratedV8Internal::setWideViewportQuirkEnabledMethod(info);
}

void V8InternalSettingsGenerated::setXSSAuditorEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettingsGenerated_setXSSAuditorEnabled");

  InternalSettingsGeneratedV8Internal::setXSSAuditorEnabledMethod(info);
}

static const V8DOMConfiguration::MethodConfiguration V8InternalSettingsGeneratedMethods[] = {
    {"setDOMPasteAllowed", V8InternalSettingsGenerated::setDOMPasteAllowedMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAccelerated2dCanvasMSAASampleCount", V8InternalSettingsGenerated::setAccelerated2dCanvasMSAASampleCountMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAcceleratedCompositingEnabled", V8InternalSettingsGenerated::setAcceleratedCompositingEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAccessibilityEnabled", V8InternalSettingsGenerated::setAccessibilityEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAccessibilityFontScaleFactor", V8InternalSettingsGenerated::setAccessibilityFontScaleFactorMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAccessibilityPasswordValuesEnabled", V8InternalSettingsGenerated::setAccessibilityPasswordValuesEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAllowCustomScrollbarInMainFrame", V8InternalSettingsGenerated::setAllowCustomScrollbarInMainFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAllowFileAccessFromFileURLs", V8InternalSettingsGenerated::setAllowFileAccessFromFileURLsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAllowGeolocationOnInsecureOrigins", V8InternalSettingsGenerated::setAllowGeolocationOnInsecureOriginsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAllowRunningOfInsecureContent", V8InternalSettingsGenerated::setAllowRunningOfInsecureContentMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAllowScriptsToCloseWindows", V8InternalSettingsGenerated::setAllowScriptsToCloseWindowsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAllowUniversalAccessFromFileURLs", V8InternalSettingsGenerated::setAllowUniversalAccessFromFileURLsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAlwaysShowContextMenuOnTouch", V8InternalSettingsGenerated::setAlwaysShowContextMenuOnTouchMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAntialiased2dCanvasEnabled", V8InternalSettingsGenerated::setAntialiased2dCanvasEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAntialiasedClips2dCanvasEnabled", V8InternalSettingsGenerated::setAntialiasedClips2dCanvasEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAvailableHoverTypes", V8InternalSettingsGenerated::setAvailableHoverTypesMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAvailablePointerTypes", V8InternalSettingsGenerated::setAvailablePointerTypesMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setBarrelButtonForDragEnabled", V8InternalSettingsGenerated::setBarrelButtonForDragEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setCookieEnabled", V8InternalSettingsGenerated::setCookieEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setCSSExternalScannerNoPreload", V8InternalSettingsGenerated::setCSSExternalScannerNoPreloadMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setCSSExternalScannerPreload", V8InternalSettingsGenerated::setCSSExternalScannerPreloadMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDataSaverHoldbackMediaApi", V8InternalSettingsGenerated::setDataSaverHoldbackMediaApiMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDataSaverHoldbackWebApi", V8InternalSettingsGenerated::setDataSaverHoldbackWebApiMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDefaultFixedFontSize", V8InternalSettingsGenerated::setDefaultFixedFontSizeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDefaultFontSize", V8InternalSettingsGenerated::setDefaultFontSizeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDefaultTextEncodingName", V8InternalSettingsGenerated::setDefaultTextEncodingNameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDefaultVideoPosterURL", V8InternalSettingsGenerated::setDefaultVideoPosterURLMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDeviceScaleAdjustment", V8InternalSettingsGenerated::setDeviceScaleAdjustmentMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDeviceSupportsTouch", V8InternalSettingsGenerated::setDeviceSupportsTouchMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDisableReadingFromCanvas", V8InternalSettingsGenerated::setDisableReadingFromCanvasMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDisallowFetchForDocWrittenScriptsInMainFrame", V8InternalSettingsGenerated::setDisallowFetchForDocWrittenScriptsInMainFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G", V8InternalSettingsGenerated::setDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2GMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections", V8InternalSettingsGenerated::setDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnectionsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDNSPrefetchingEnabled", V8InternalSettingsGenerated::setDNSPrefetchingEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDoHtmlPreloadScanning", V8InternalSettingsGenerated::setDoHtmlPreloadScanningMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDoNotUpdateSelectionOnMutatingSelectionRange", V8InternalSettingsGenerated::setDoNotUpdateSelectionOnMutatingSelectionRangeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDownloadableBinaryFontsEnabled", V8InternalSettingsGenerated::setDownloadableBinaryFontsEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setEmbeddedMediaExperienceEnabled", V8InternalSettingsGenerated::setEmbeddedMediaExperienceEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setFetchImagePlaceholders", V8InternalSettingsGenerated::setFetchImagePlaceholdersMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setForceAndroidOverlayScrollbar", V8InternalSettingsGenerated::setForceAndroidOverlayScrollbarMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setForceMainWorldInitialization", V8InternalSettingsGenerated::setForceMainWorldInitializationMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setForcePreloadNoneForMediaElements", V8InternalSettingsGenerated::setForcePreloadNoneForMediaElementsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setForceTouchEventFeatureDetectionForInspector", V8InternalSettingsGenerated::setForceTouchEventFeatureDetectionForInspectorMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setForceZeroLayoutHeight", V8InternalSettingsGenerated::setForceZeroLayoutHeightMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setFullscreenSupported", V8InternalSettingsGenerated::setFullscreenSupportedMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setHideDownloadUI", V8InternalSettingsGenerated::setHideDownloadUIMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setHideScrollbars", V8InternalSettingsGenerated::setHideScrollbarsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setHighContrastContrast", V8InternalSettingsGenerated::setHighContrastContrastMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setHighContrastGrayscale", V8InternalSettingsGenerated::setHighContrastGrayscaleMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setHistoryEntryRequiresUserGesture", V8InternalSettingsGenerated::setHistoryEntryRequiresUserGestureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setHyperlinkAuditingEnabled", V8InternalSettingsGenerated::setHyperlinkAuditingEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setIgnoreMainFrameOverflowHiddenQuirk", V8InternalSettingsGenerated::setIgnoreMainFrameOverflowHiddenQuirkMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setImagesEnabled", V8InternalSettingsGenerated::setImagesEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setImmersiveModeEnabled", V8InternalSettingsGenerated::setImmersiveModeEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setInlineTextBoxAccessibilityEnabled", V8InternalSettingsGenerated::setInlineTextBoxAccessibilityEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setJavaScriptCanAccessClipboard", V8InternalSettingsGenerated::setJavaScriptCanAccessClipboardMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setLoadWithOverviewMode", V8InternalSettingsGenerated::setLoadWithOverviewModeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setLoadsImagesAutomatically", V8InternalSettingsGenerated::setLoadsImagesAutomaticallyMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setLocalStorageEnabled", V8InternalSettingsGenerated::setLocalStorageEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setLogDnsPrefetchAndPreconnect", V8InternalSettingsGenerated::setLogDnsPrefetchAndPreconnectMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setLogPreload", V8InternalSettingsGenerated::setLogPreloadMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMainFrameClipsContent", V8InternalSettingsGenerated::setMainFrameClipsContentMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMainFrameResizesAreOrientationChanges", V8InternalSettingsGenerated::setMainFrameResizesAreOrientationChangesMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMaxTouchPoints", V8InternalSettingsGenerated::setMaxTouchPointsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMediaControlsEnabled", V8InternalSettingsGenerated::setMediaControlsEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMediaDownloadInProductHelpEnabled", V8InternalSettingsGenerated::setMediaDownloadInProductHelpEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMediaPlaybackGestureWhitelistScope", V8InternalSettingsGenerated::setMediaPlaybackGestureWhitelistScopeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMediaTypeOverride", V8InternalSettingsGenerated::setMediaTypeOverrideMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMinimumAccelerated2dCanvasSize", V8InternalSettingsGenerated::setMinimumAccelerated2dCanvasSizeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMinimumFontSize", V8InternalSettingsGenerated::setMinimumFontSizeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMinimumLogicalFontSize", V8InternalSettingsGenerated::setMinimumLogicalFontSizeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMockGestureTapHighlightsEnabled", V8InternalSettingsGenerated::setMockGestureTapHighlightsEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMultiTargetTapNotificationEnabled", V8InternalSettingsGenerated::setMultiTargetTapNotificationEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setNavigateOnDragDrop", V8InternalSettingsGenerated::setNavigateOnDragDropMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setNavigatorPlatformOverride", V8InternalSettingsGenerated::setNavigatorPlatformOverrideMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setOfflineWebApplicationCacheEnabled", V8InternalSettingsGenerated::setOfflineWebApplicationCacheEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPasswordEchoDurationInSeconds", V8InternalSettingsGenerated::setPasswordEchoDurationInSecondsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPasswordEchoEnabled", V8InternalSettingsGenerated::setPasswordEchoEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPictureInPictureEnabled", V8InternalSettingsGenerated::setPictureInPictureEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPluginsEnabled", V8InternalSettingsGenerated::setPluginsEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPreferCompositingToLCDTextEnabled", V8InternalSettingsGenerated::setPreferCompositingToLCDTextEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPreferHiddenVolumeControls", V8InternalSettingsGenerated::setPreferHiddenVolumeControlsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPresentationReceiver", V8InternalSettingsGenerated::setPresentationReceiverMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPresentationRequiresUserGesture", V8InternalSettingsGenerated::setPresentationRequiresUserGestureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setReportScreenSizeInPhysicalPixelsQuirk", V8InternalSettingsGenerated::setReportScreenSizeInPhysicalPixelsQuirkMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setRubberBandingOnCompositorThread", V8InternalSettingsGenerated::setRubberBandingOnCompositorThreadMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setScriptEnabled", V8InternalSettingsGenerated::setScriptEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setScrollAnimatorEnabled", V8InternalSettingsGenerated::setScrollAnimatorEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setSelectTrailingWhitespaceEnabled", V8InternalSettingsGenerated::setSelectTrailingWhitespaceEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setSelectionIncludesAltImageText", V8InternalSettingsGenerated::setSelectionIncludesAltImageTextMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setShouldClearDocumentBackground", V8InternalSettingsGenerated::setShouldClearDocumentBackgroundMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setShouldPrintBackgrounds", V8InternalSettingsGenerated::setShouldPrintBackgroundsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setShouldRespectImageOrientation", V8InternalSettingsGenerated::setShouldRespectImageOrientationMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setShouldReuseGlobalForUnownedMainFrame", V8InternalSettingsGenerated::setShouldReuseGlobalForUnownedMainFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setShouldThrottlePushState", V8InternalSettingsGenerated::setShouldThrottlePushStateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setShowContextMenuOnMouseUp", V8InternalSettingsGenerated::setShowContextMenuOnMouseUpMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setSmartInsertDeleteEnabled", V8InternalSettingsGenerated::setSmartInsertDeleteEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setSmoothScrollForFindEnabled", V8InternalSettingsGenerated::setSmoothScrollForFindEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setSpatialNavigationEnabled", V8InternalSettingsGenerated::setSpatialNavigationEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setSpellCheckEnabledByDefault", V8InternalSettingsGenerated::setSpellCheckEnabledByDefaultMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setStrictMixedContentChecking", V8InternalSettingsGenerated::setStrictMixedContentCheckingMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setStrictMixedContentCheckingForPlugin", V8InternalSettingsGenerated::setStrictMixedContentCheckingForPluginMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setStrictPowerfulFeatureRestrictions", V8InternalSettingsGenerated::setStrictPowerfulFeatureRestrictionsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setStrictlyBlockBlockableMixedContent", V8InternalSettingsGenerated::setStrictlyBlockBlockableMixedContentMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setSupportsMultipleWindows", V8InternalSettingsGenerated::setSupportsMultipleWindowsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setSyncXHRInDocumentsEnabled", V8InternalSettingsGenerated::setSyncXHRInDocumentsEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTextAreasAreResizable", V8InternalSettingsGenerated::setTextAreasAreResizableMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTextTrackBackgroundColor", V8InternalSettingsGenerated::setTextTrackBackgroundColorMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTextTrackFontFamily", V8InternalSettingsGenerated::setTextTrackFontFamilyMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTextTrackFontStyle", V8InternalSettingsGenerated::setTextTrackFontStyleMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTextTrackFontVariant", V8InternalSettingsGenerated::setTextTrackFontVariantMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTextTrackMarginPercentage", V8InternalSettingsGenerated::setTextTrackMarginPercentageMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTextTrackTextColor", V8InternalSettingsGenerated::setTextTrackTextColorMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTextTrackTextShadow", V8InternalSettingsGenerated::setTextTrackTextShadowMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTextTrackTextSize", V8InternalSettingsGenerated::setTextTrackTextSizeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setThreadedScrollingEnabled", V8InternalSettingsGenerated::setThreadedScrollingEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTouchAdjustmentEnabled", V8InternalSettingsGenerated::setTouchAdjustmentEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTouchDragDropEnabled", V8InternalSettingsGenerated::setTouchDragDropEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTouchEditingEnabled", V8InternalSettingsGenerated::setTouchEditingEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setUseLegacyBackgroundSizeShorthandBehavior", V8InternalSettingsGenerated::setUseLegacyBackgroundSizeShorthandBehaviorMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setUseSolidColorScrollbars", V8InternalSettingsGenerated::setUseSolidColorScrollbarsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setUseWideViewport", V8InternalSettingsGenerated::setUseWideViewportMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setValidationMessageTimerMagnification", V8InternalSettingsGenerated::setValidationMessageTimerMagnificationMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setViewportEnabled", V8InternalSettingsGenerated::setViewportEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setViewportMetaEnabled", V8InternalSettingsGenerated::setViewportMetaEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setViewportMetaMergeContentQuirk", V8InternalSettingsGenerated::setViewportMetaMergeContentQuirkMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setViewportMetaZeroValuesQuirk", V8InternalSettingsGenerated::setViewportMetaZeroValuesQuirkMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setWebGL1Enabled", V8InternalSettingsGenerated::setWebGL1EnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setWebGL2Enabled", V8InternalSettingsGenerated::setWebGL2EnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setWebGLErrorsToConsoleEnabled", V8InternalSettingsGenerated::setWebGLErrorsToConsoleEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setWebSecurityEnabled", V8InternalSettingsGenerated::setWebSecurityEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setWideViewportQuirkEnabled", V8InternalSettingsGenerated::setWideViewportQuirkEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setXSSAuditorEnabled", V8InternalSettingsGenerated::setXSSAuditorEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void installV8InternalSettingsGeneratedTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8InternalSettingsGenerated::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8InternalSettingsGenerated::internalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8InternalSettingsGeneratedMethods, arraysize(V8InternalSettingsGeneratedMethods));

  // Custom signature

  V8InternalSettingsGenerated::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8InternalSettingsGenerated::InstallRuntimeEnabledFeaturesOnTemplate(
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

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8InternalSettingsGenerated::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8InternalSettingsGeneratedTemplate);
}

bool V8InternalSettingsGenerated::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8InternalSettingsGenerated::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

InternalSettingsGenerated* V8InternalSettingsGenerated::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

InternalSettingsGenerated* NativeValueTraits<InternalSettingsGenerated>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  InternalSettingsGenerated* nativeValue = V8InternalSettingsGenerated::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "InternalSettingsGenerated"));
  }
  return nativeValue;
}

}  // namespace blink

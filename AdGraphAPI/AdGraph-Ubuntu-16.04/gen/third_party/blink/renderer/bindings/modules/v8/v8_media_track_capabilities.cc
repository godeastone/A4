// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_track_capabilities.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_double_range.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_long_range.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_settings_range.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaTrackCapabilitiesKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "aspectRatio",
    "autoGainControl",
    "brightness",
    "colorTemperature",
    "contrast",
    "deviceId",
    "echoCancellation",
    "exposureCompensation",
    "exposureMode",
    "facingMode",
    "focusMode",
    "frameRate",
    "groupId",
    "height",
    "iso",
    "noiseSuppression",
    "saturation",
    "sharpness",
    "torch",
    "whiteBalanceMode",
    "width",
    "zoom",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MediaTrackCapabilities::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MediaTrackCapabilities& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MediaTrackCapabilitiesKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> aspectRatioValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&aspectRatioValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (aspectRatioValue.IsEmpty() || aspectRatioValue->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleRange aspectRatioCppValue;
    V8DoubleRange::ToImpl(isolate, aspectRatioValue, aspectRatioCppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAspectRatio(aspectRatioCppValue);
  }

  v8::Local<v8::Value> autoGainControlValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&autoGainControlValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (autoGainControlValue.IsEmpty() || autoGainControlValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<bool> autoGainControlCppValue = NativeValueTraits<IDLSequence<IDLBoolean>>::NativeValue(isolate, autoGainControlValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAutoGainControl(autoGainControlCppValue);
  }

  v8::Local<v8::Value> brightnessValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&brightnessValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (brightnessValue.IsEmpty() || brightnessValue->IsUndefined()) {
    // Do nothing.
  } else {
    MediaSettingsRange* brightnessCppValue = V8MediaSettingsRange::ToImplWithTypeCheck(isolate, brightnessValue);
    if (!brightnessCppValue) {
      exceptionState.ThrowTypeError("member brightness is not of type MediaSettingsRange.");
      return;
    }
    impl.setBrightness(brightnessCppValue);
  }

  v8::Local<v8::Value> colorTemperatureValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&colorTemperatureValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (colorTemperatureValue.IsEmpty() || colorTemperatureValue->IsUndefined()) {
    // Do nothing.
  } else {
    MediaSettingsRange* colorTemperatureCppValue = V8MediaSettingsRange::ToImplWithTypeCheck(isolate, colorTemperatureValue);
    if (!colorTemperatureCppValue) {
      exceptionState.ThrowTypeError("member colorTemperature is not of type MediaSettingsRange.");
      return;
    }
    impl.setColorTemperature(colorTemperatureCppValue);
  }

  v8::Local<v8::Value> contrastValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&contrastValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (contrastValue.IsEmpty() || contrastValue->IsUndefined()) {
    // Do nothing.
  } else {
    MediaSettingsRange* contrastCppValue = V8MediaSettingsRange::ToImplWithTypeCheck(isolate, contrastValue);
    if (!contrastCppValue) {
      exceptionState.ThrowTypeError("member contrast is not of type MediaSettingsRange.");
      return;
    }
    impl.setContrast(contrastCppValue);
  }

  v8::Local<v8::Value> deviceIdValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&deviceIdValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (deviceIdValue.IsEmpty() || deviceIdValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> deviceIdCppValue = deviceIdValue;
    if (!deviceIdCppValue.Prepare(exceptionState))
      return;
    impl.setDeviceId(deviceIdCppValue);
  }

  v8::Local<v8::Value> echoCancellationValue;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&echoCancellationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (echoCancellationValue.IsEmpty() || echoCancellationValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<bool> echoCancellationCppValue = NativeValueTraits<IDLSequence<IDLBoolean>>::NativeValue(isolate, echoCancellationValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setEchoCancellation(echoCancellationCppValue);
  }

  v8::Local<v8::Value> exposureCompensationValue;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&exposureCompensationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (exposureCompensationValue.IsEmpty() || exposureCompensationValue->IsUndefined()) {
    // Do nothing.
  } else {
    MediaSettingsRange* exposureCompensationCppValue = V8MediaSettingsRange::ToImplWithTypeCheck(isolate, exposureCompensationValue);
    if (!exposureCompensationCppValue) {
      exceptionState.ThrowTypeError("member exposureCompensation is not of type MediaSettingsRange.");
      return;
    }
    impl.setExposureCompensation(exposureCompensationCppValue);
  }

  v8::Local<v8::Value> exposureModeValue;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&exposureModeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (exposureModeValue.IsEmpty() || exposureModeValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> exposureModeCppValue = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, exposureModeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setExposureMode(exposureModeCppValue);
  }

  v8::Local<v8::Value> facingModeValue;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&facingModeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (facingModeValue.IsEmpty() || facingModeValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> facingModeCppValue = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, facingModeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setFacingMode(facingModeCppValue);
  }

  v8::Local<v8::Value> focusModeValue;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&focusModeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (focusModeValue.IsEmpty() || focusModeValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> focusModeCppValue = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, focusModeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setFocusMode(focusModeCppValue);
  }

  v8::Local<v8::Value> frameRateValue;
  if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&frameRateValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (frameRateValue.IsEmpty() || frameRateValue->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleRange frameRateCppValue;
    V8DoubleRange::ToImpl(isolate, frameRateValue, frameRateCppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setFrameRate(frameRateCppValue);
  }

  v8::Local<v8::Value> groupIdValue;
  if (!v8Object->Get(context, keys[12].Get(isolate)).ToLocal(&groupIdValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (groupIdValue.IsEmpty() || groupIdValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> groupIdCppValue = groupIdValue;
    if (!groupIdCppValue.Prepare(exceptionState))
      return;
    impl.setGroupId(groupIdCppValue);
  }

  v8::Local<v8::Value> heightValue;
  if (!v8Object->Get(context, keys[13].Get(isolate)).ToLocal(&heightValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (heightValue.IsEmpty() || heightValue->IsUndefined()) {
    // Do nothing.
  } else {
    LongRange heightCppValue;
    V8LongRange::ToImpl(isolate, heightValue, heightCppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setHeight(heightCppValue);
  }

  v8::Local<v8::Value> isoValue;
  if (!v8Object->Get(context, keys[14].Get(isolate)).ToLocal(&isoValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (isoValue.IsEmpty() || isoValue->IsUndefined()) {
    // Do nothing.
  } else {
    MediaSettingsRange* isoCppValue = V8MediaSettingsRange::ToImplWithTypeCheck(isolate, isoValue);
    if (!isoCppValue) {
      exceptionState.ThrowTypeError("member iso is not of type MediaSettingsRange.");
      return;
    }
    impl.setIso(isoCppValue);
  }

  v8::Local<v8::Value> noiseSuppressionValue;
  if (!v8Object->Get(context, keys[15].Get(isolate)).ToLocal(&noiseSuppressionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (noiseSuppressionValue.IsEmpty() || noiseSuppressionValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<bool> noiseSuppressionCppValue = NativeValueTraits<IDLSequence<IDLBoolean>>::NativeValue(isolate, noiseSuppressionValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setNoiseSuppression(noiseSuppressionCppValue);
  }

  v8::Local<v8::Value> saturationValue;
  if (!v8Object->Get(context, keys[16].Get(isolate)).ToLocal(&saturationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (saturationValue.IsEmpty() || saturationValue->IsUndefined()) {
    // Do nothing.
  } else {
    MediaSettingsRange* saturationCppValue = V8MediaSettingsRange::ToImplWithTypeCheck(isolate, saturationValue);
    if (!saturationCppValue) {
      exceptionState.ThrowTypeError("member saturation is not of type MediaSettingsRange.");
      return;
    }
    impl.setSaturation(saturationCppValue);
  }

  v8::Local<v8::Value> sharpnessValue;
  if (!v8Object->Get(context, keys[17].Get(isolate)).ToLocal(&sharpnessValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (sharpnessValue.IsEmpty() || sharpnessValue->IsUndefined()) {
    // Do nothing.
  } else {
    MediaSettingsRange* sharpnessCppValue = V8MediaSettingsRange::ToImplWithTypeCheck(isolate, sharpnessValue);
    if (!sharpnessCppValue) {
      exceptionState.ThrowTypeError("member sharpness is not of type MediaSettingsRange.");
      return;
    }
    impl.setSharpness(sharpnessCppValue);
  }

  v8::Local<v8::Value> torchValue;
  if (!v8Object->Get(context, keys[18].Get(isolate)).ToLocal(&torchValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (torchValue.IsEmpty() || torchValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool torchCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, torchValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setTorch(torchCppValue);
  }

  v8::Local<v8::Value> whiteBalanceModeValue;
  if (!v8Object->Get(context, keys[19].Get(isolate)).ToLocal(&whiteBalanceModeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (whiteBalanceModeValue.IsEmpty() || whiteBalanceModeValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> whiteBalanceModeCppValue = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, whiteBalanceModeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setWhiteBalanceMode(whiteBalanceModeCppValue);
  }

  v8::Local<v8::Value> widthValue;
  if (!v8Object->Get(context, keys[20].Get(isolate)).ToLocal(&widthValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (widthValue.IsEmpty() || widthValue->IsUndefined()) {
    // Do nothing.
  } else {
    LongRange widthCppValue;
    V8LongRange::ToImpl(isolate, widthValue, widthCppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setWidth(widthCppValue);
  }

  v8::Local<v8::Value> zoomValue;
  if (!v8Object->Get(context, keys[21].Get(isolate)).ToLocal(&zoomValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (zoomValue.IsEmpty() || zoomValue->IsUndefined()) {
    // Do nothing.
  } else {
    MediaSettingsRange* zoomCppValue = V8MediaSettingsRange::ToImplWithTypeCheck(isolate, zoomValue);
    if (!zoomCppValue) {
      exceptionState.ThrowTypeError("member zoom is not of type MediaSettingsRange.");
      return;
    }
    impl.setZoom(zoomCppValue);
  }
}

v8::Local<v8::Value> MediaTrackCapabilities::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaTrackCapabilities(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaTrackCapabilities(const MediaTrackCapabilities& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MediaTrackCapabilitiesKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> aspectRatioValue;
  bool aspectRatioHasValueOrDefault = false;
  if (impl.hasAspectRatio()) {
    aspectRatioValue = ToV8(impl.aspectRatio(), creationContext, isolate);
    aspectRatioHasValueOrDefault = true;
  }
  if (aspectRatioHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), aspectRatioValue))) {
    return false;
  }

  v8::Local<v8::Value> autoGainControlValue;
  bool autoGainControlHasValueOrDefault = false;
  if (impl.hasAutoGainControl()) {
    autoGainControlValue = ToV8(impl.autoGainControl(), creationContext, isolate);
    autoGainControlHasValueOrDefault = true;
  }
  if (autoGainControlHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), autoGainControlValue))) {
    return false;
  }

  v8::Local<v8::Value> brightnessValue;
  bool brightnessHasValueOrDefault = false;
  if (impl.hasBrightness()) {
    brightnessValue = ToV8(impl.brightness(), creationContext, isolate);
    brightnessHasValueOrDefault = true;
  }
  if (brightnessHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), brightnessValue))) {
    return false;
  }

  v8::Local<v8::Value> colorTemperatureValue;
  bool colorTemperatureHasValueOrDefault = false;
  if (impl.hasColorTemperature()) {
    colorTemperatureValue = ToV8(impl.colorTemperature(), creationContext, isolate);
    colorTemperatureHasValueOrDefault = true;
  }
  if (colorTemperatureHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), colorTemperatureValue))) {
    return false;
  }

  v8::Local<v8::Value> contrastValue;
  bool contrastHasValueOrDefault = false;
  if (impl.hasContrast()) {
    contrastValue = ToV8(impl.contrast(), creationContext, isolate);
    contrastHasValueOrDefault = true;
  }
  if (contrastHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), contrastValue))) {
    return false;
  }

  v8::Local<v8::Value> deviceIdValue;
  bool deviceIdHasValueOrDefault = false;
  if (impl.hasDeviceId()) {
    deviceIdValue = V8String(isolate, impl.deviceId());
    deviceIdHasValueOrDefault = true;
  }
  if (deviceIdHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), deviceIdValue))) {
    return false;
  }

  v8::Local<v8::Value> echoCancellationValue;
  bool echoCancellationHasValueOrDefault = false;
  if (impl.hasEchoCancellation()) {
    echoCancellationValue = ToV8(impl.echoCancellation(), creationContext, isolate);
    echoCancellationHasValueOrDefault = true;
  }
  if (echoCancellationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), echoCancellationValue))) {
    return false;
  }

  v8::Local<v8::Value> exposureCompensationValue;
  bool exposureCompensationHasValueOrDefault = false;
  if (impl.hasExposureCompensation()) {
    exposureCompensationValue = ToV8(impl.exposureCompensation(), creationContext, isolate);
    exposureCompensationHasValueOrDefault = true;
  }
  if (exposureCompensationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[7].Get(isolate), exposureCompensationValue))) {
    return false;
  }

  v8::Local<v8::Value> exposureModeValue;
  bool exposureModeHasValueOrDefault = false;
  if (impl.hasExposureMode()) {
    exposureModeValue = ToV8(impl.exposureMode(), creationContext, isolate);
    exposureModeHasValueOrDefault = true;
  }
  if (exposureModeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[8].Get(isolate), exposureModeValue))) {
    return false;
  }

  v8::Local<v8::Value> facingModeValue;
  bool facingModeHasValueOrDefault = false;
  if (impl.hasFacingMode()) {
    facingModeValue = ToV8(impl.facingMode(), creationContext, isolate);
    facingModeHasValueOrDefault = true;
  }
  if (facingModeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[9].Get(isolate), facingModeValue))) {
    return false;
  }

  v8::Local<v8::Value> focusModeValue;
  bool focusModeHasValueOrDefault = false;
  if (impl.hasFocusMode()) {
    focusModeValue = ToV8(impl.focusMode(), creationContext, isolate);
    focusModeHasValueOrDefault = true;
  }
  if (focusModeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[10].Get(isolate), focusModeValue))) {
    return false;
  }

  v8::Local<v8::Value> frameRateValue;
  bool frameRateHasValueOrDefault = false;
  if (impl.hasFrameRate()) {
    frameRateValue = ToV8(impl.frameRate(), creationContext, isolate);
    frameRateHasValueOrDefault = true;
  }
  if (frameRateHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[11].Get(isolate), frameRateValue))) {
    return false;
  }

  v8::Local<v8::Value> groupIdValue;
  bool groupIdHasValueOrDefault = false;
  if (impl.hasGroupId()) {
    groupIdValue = V8String(isolate, impl.groupId());
    groupIdHasValueOrDefault = true;
  }
  if (groupIdHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[12].Get(isolate), groupIdValue))) {
    return false;
  }

  v8::Local<v8::Value> heightValue;
  bool heightHasValueOrDefault = false;
  if (impl.hasHeight()) {
    heightValue = ToV8(impl.height(), creationContext, isolate);
    heightHasValueOrDefault = true;
  }
  if (heightHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[13].Get(isolate), heightValue))) {
    return false;
  }

  v8::Local<v8::Value> isoValue;
  bool isoHasValueOrDefault = false;
  if (impl.hasIso()) {
    isoValue = ToV8(impl.iso(), creationContext, isolate);
    isoHasValueOrDefault = true;
  }
  if (isoHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[14].Get(isolate), isoValue))) {
    return false;
  }

  v8::Local<v8::Value> noiseSuppressionValue;
  bool noiseSuppressionHasValueOrDefault = false;
  if (impl.hasNoiseSuppression()) {
    noiseSuppressionValue = ToV8(impl.noiseSuppression(), creationContext, isolate);
    noiseSuppressionHasValueOrDefault = true;
  }
  if (noiseSuppressionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[15].Get(isolate), noiseSuppressionValue))) {
    return false;
  }

  v8::Local<v8::Value> saturationValue;
  bool saturationHasValueOrDefault = false;
  if (impl.hasSaturation()) {
    saturationValue = ToV8(impl.saturation(), creationContext, isolate);
    saturationHasValueOrDefault = true;
  }
  if (saturationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[16].Get(isolate), saturationValue))) {
    return false;
  }

  v8::Local<v8::Value> sharpnessValue;
  bool sharpnessHasValueOrDefault = false;
  if (impl.hasSharpness()) {
    sharpnessValue = ToV8(impl.sharpness(), creationContext, isolate);
    sharpnessHasValueOrDefault = true;
  }
  if (sharpnessHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[17].Get(isolate), sharpnessValue))) {
    return false;
  }

  v8::Local<v8::Value> torchValue;
  bool torchHasValueOrDefault = false;
  if (impl.hasTorch()) {
    torchValue = v8::Boolean::New(isolate, impl.torch());
    torchHasValueOrDefault = true;
  }
  if (torchHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[18].Get(isolate), torchValue))) {
    return false;
  }

  v8::Local<v8::Value> whiteBalanceModeValue;
  bool whiteBalanceModeHasValueOrDefault = false;
  if (impl.hasWhiteBalanceMode()) {
    whiteBalanceModeValue = ToV8(impl.whiteBalanceMode(), creationContext, isolate);
    whiteBalanceModeHasValueOrDefault = true;
  }
  if (whiteBalanceModeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[19].Get(isolate), whiteBalanceModeValue))) {
    return false;
  }

  v8::Local<v8::Value> widthValue;
  bool widthHasValueOrDefault = false;
  if (impl.hasWidth()) {
    widthValue = ToV8(impl.width(), creationContext, isolate);
    widthHasValueOrDefault = true;
  }
  if (widthHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[20].Get(isolate), widthValue))) {
    return false;
  }

  v8::Local<v8::Value> zoomValue;
  bool zoomHasValueOrDefault = false;
  if (impl.hasZoom()) {
    zoomValue = ToV8(impl.zoom(), creationContext, isolate);
    zoomHasValueOrDefault = true;
  }
  if (zoomHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[21].Get(isolate), zoomValue))) {
    return false;
  }

  return true;
}

MediaTrackCapabilities NativeValueTraits<MediaTrackCapabilities>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MediaTrackCapabilities impl;
  V8MediaTrackCapabilities::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

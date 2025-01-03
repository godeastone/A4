// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_track_settings.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_point_2d.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaTrackSettingsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "aspectRatio",
    "autoGainControl",
    "brightness",
    "colorTemperature",
    "contrast",
    "depthFar",
    "depthNear",
    "deviceId",
    "echoCancellation",
    "exposureCompensation",
    "exposureMode",
    "facingMode",
    "focalLengthX",
    "focalLengthY",
    "focusMode",
    "frameRate",
    "groupId",
    "height",
    "iso",
    "noiseSuppression",
    "pointsOfInterest",
    "saturation",
    "sharpness",
    "torch",
    "videoKind",
    "whiteBalanceMode",
    "width",
    "zoom",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MediaTrackSettings::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MediaTrackSettings& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MediaTrackSettingsKeys(isolate);
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
    double aspectRatioCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, aspectRatioValue, exceptionState);
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
    bool autoGainControlCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, autoGainControlValue, exceptionState);
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
    double brightnessCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, brightnessValue, exceptionState);
    if (exceptionState.HadException())
      return;
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
    double colorTemperatureCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, colorTemperatureValue, exceptionState);
    if (exceptionState.HadException())
      return;
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
    double contrastCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, contrastValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setContrast(contrastCppValue);
  }

  v8::Local<v8::Value> deviceIdValue;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&deviceIdValue)) {
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
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&echoCancellationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (echoCancellationValue.IsEmpty() || echoCancellationValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool echoCancellationCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, echoCancellationValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setEchoCancellation(echoCancellationCppValue);
  }

  v8::Local<v8::Value> exposureCompensationValue;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&exposureCompensationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (exposureCompensationValue.IsEmpty() || exposureCompensationValue->IsUndefined()) {
    // Do nothing.
  } else {
    double exposureCompensationCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, exposureCompensationValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setExposureCompensation(exposureCompensationCppValue);
  }

  v8::Local<v8::Value> exposureModeValue;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&exposureModeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (exposureModeValue.IsEmpty() || exposureModeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> exposureModeCppValue = exposureModeValue;
    if (!exposureModeCppValue.Prepare(exceptionState))
      return;
    impl.setExposureMode(exposureModeCppValue);
  }

  v8::Local<v8::Value> facingModeValue;
  if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&facingModeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (facingModeValue.IsEmpty() || facingModeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> facingModeCppValue = facingModeValue;
    if (!facingModeCppValue.Prepare(exceptionState))
      return;
    impl.setFacingMode(facingModeCppValue);
  }

  v8::Local<v8::Value> focusModeValue;
  if (!v8Object->Get(context, keys[14].Get(isolate)).ToLocal(&focusModeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (focusModeValue.IsEmpty() || focusModeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> focusModeCppValue = focusModeValue;
    if (!focusModeCppValue.Prepare(exceptionState))
      return;
    impl.setFocusMode(focusModeCppValue);
  }

  v8::Local<v8::Value> frameRateValue;
  if (!v8Object->Get(context, keys[15].Get(isolate)).ToLocal(&frameRateValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (frameRateValue.IsEmpty() || frameRateValue->IsUndefined()) {
    // Do nothing.
  } else {
    double frameRateCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, frameRateValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setFrameRate(frameRateCppValue);
  }

  v8::Local<v8::Value> groupIdValue;
  if (!v8Object->Get(context, keys[16].Get(isolate)).ToLocal(&groupIdValue)) {
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
  if (!v8Object->Get(context, keys[17].Get(isolate)).ToLocal(&heightValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (heightValue.IsEmpty() || heightValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t heightCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, heightValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setHeight(heightCppValue);
  }

  v8::Local<v8::Value> isoValue;
  if (!v8Object->Get(context, keys[18].Get(isolate)).ToLocal(&isoValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (isoValue.IsEmpty() || isoValue->IsUndefined()) {
    // Do nothing.
  } else {
    double isoCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, isoValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIso(isoCppValue);
  }

  v8::Local<v8::Value> noiseSuppressionValue;
  if (!v8Object->Get(context, keys[19].Get(isolate)).ToLocal(&noiseSuppressionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (noiseSuppressionValue.IsEmpty() || noiseSuppressionValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool noiseSuppressionCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, noiseSuppressionValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setNoiseSuppression(noiseSuppressionCppValue);
  }

  v8::Local<v8::Value> pointsOfInterestValue;
  if (!v8Object->Get(context, keys[20].Get(isolate)).ToLocal(&pointsOfInterestValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (pointsOfInterestValue.IsEmpty() || pointsOfInterestValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Point2D> pointsOfInterestCppValue = NativeValueTraits<IDLSequence<Point2D>>::NativeValue(isolate, pointsOfInterestValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPointsOfInterest(pointsOfInterestCppValue);
  }

  v8::Local<v8::Value> saturationValue;
  if (!v8Object->Get(context, keys[21].Get(isolate)).ToLocal(&saturationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (saturationValue.IsEmpty() || saturationValue->IsUndefined()) {
    // Do nothing.
  } else {
    double saturationCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, saturationValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setSaturation(saturationCppValue);
  }

  v8::Local<v8::Value> sharpnessValue;
  if (!v8Object->Get(context, keys[22].Get(isolate)).ToLocal(&sharpnessValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (sharpnessValue.IsEmpty() || sharpnessValue->IsUndefined()) {
    // Do nothing.
  } else {
    double sharpnessCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, sharpnessValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setSharpness(sharpnessCppValue);
  }

  v8::Local<v8::Value> torchValue;
  if (!v8Object->Get(context, keys[23].Get(isolate)).ToLocal(&torchValue)) {
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
  if (!v8Object->Get(context, keys[25].Get(isolate)).ToLocal(&whiteBalanceModeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (whiteBalanceModeValue.IsEmpty() || whiteBalanceModeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> whiteBalanceModeCppValue = whiteBalanceModeValue;
    if (!whiteBalanceModeCppValue.Prepare(exceptionState))
      return;
    impl.setWhiteBalanceMode(whiteBalanceModeCppValue);
  }

  v8::Local<v8::Value> widthValue;
  if (!v8Object->Get(context, keys[26].Get(isolate)).ToLocal(&widthValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (widthValue.IsEmpty() || widthValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t widthCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, widthValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setWidth(widthCppValue);
  }

  v8::Local<v8::Value> zoomValue;
  if (!v8Object->Get(context, keys[27].Get(isolate)).ToLocal(&zoomValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (zoomValue.IsEmpty() || zoomValue->IsUndefined()) {
    // Do nothing.
  } else {
    double zoomCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, zoomValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setZoom(zoomCppValue);
  }

  if (RuntimeEnabledFeatures::MediaCaptureDepthEnabled()) {
    v8::Local<v8::Value> depthFarValue;
    if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&depthFarValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (depthFarValue.IsEmpty() || depthFarValue->IsUndefined()) {
      // Do nothing.
    } else {
      double depthFarCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, depthFarValue, exceptionState);
      if (exceptionState.HadException())
        return;
      impl.setDepthFar(depthFarCppValue);
    }

    v8::Local<v8::Value> depthNearValue;
    if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&depthNearValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (depthNearValue.IsEmpty() || depthNearValue->IsUndefined()) {
      // Do nothing.
    } else {
      double depthNearCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, depthNearValue, exceptionState);
      if (exceptionState.HadException())
        return;
      impl.setDepthNear(depthNearCppValue);
    }

    v8::Local<v8::Value> focalLengthXValue;
    if (!v8Object->Get(context, keys[12].Get(isolate)).ToLocal(&focalLengthXValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (focalLengthXValue.IsEmpty() || focalLengthXValue->IsUndefined()) {
      // Do nothing.
    } else {
      double focalLengthXCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, focalLengthXValue, exceptionState);
      if (exceptionState.HadException())
        return;
      impl.setFocalLengthX(focalLengthXCppValue);
    }

    v8::Local<v8::Value> focalLengthYValue;
    if (!v8Object->Get(context, keys[13].Get(isolate)).ToLocal(&focalLengthYValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (focalLengthYValue.IsEmpty() || focalLengthYValue->IsUndefined()) {
      // Do nothing.
    } else {
      double focalLengthYCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, focalLengthYValue, exceptionState);
      if (exceptionState.HadException())
        return;
      impl.setFocalLengthY(focalLengthYCppValue);
    }
  }

  if (RuntimeEnabledFeatures::MediaCaptureDepthVideoKindEnabled()) {
    v8::Local<v8::Value> videoKindValue;
    if (!v8Object->Get(context, keys[24].Get(isolate)).ToLocal(&videoKindValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (videoKindValue.IsEmpty() || videoKindValue->IsUndefined()) {
      // Do nothing.
    } else {
      V8StringResource<> videoKindCppValue = videoKindValue;
      if (!videoKindCppValue.Prepare(exceptionState))
        return;
      impl.setVideoKind(videoKindCppValue);
    }
  }
}

v8::Local<v8::Value> MediaTrackSettings::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaTrackSettings(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaTrackSettings(const MediaTrackSettings& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MediaTrackSettingsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> aspectRatioValue;
  bool aspectRatioHasValueOrDefault = false;
  if (impl.hasAspectRatio()) {
    aspectRatioValue = v8::Number::New(isolate, impl.aspectRatio());
    aspectRatioHasValueOrDefault = true;
  }
  if (aspectRatioHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), aspectRatioValue))) {
    return false;
  }

  v8::Local<v8::Value> autoGainControlValue;
  bool autoGainControlHasValueOrDefault = false;
  if (impl.hasAutoGainControl()) {
    autoGainControlValue = v8::Boolean::New(isolate, impl.autoGainControl());
    autoGainControlHasValueOrDefault = true;
  }
  if (autoGainControlHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), autoGainControlValue))) {
    return false;
  }

  v8::Local<v8::Value> brightnessValue;
  bool brightnessHasValueOrDefault = false;
  if (impl.hasBrightness()) {
    brightnessValue = v8::Number::New(isolate, impl.brightness());
    brightnessHasValueOrDefault = true;
  }
  if (brightnessHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), brightnessValue))) {
    return false;
  }

  v8::Local<v8::Value> colorTemperatureValue;
  bool colorTemperatureHasValueOrDefault = false;
  if (impl.hasColorTemperature()) {
    colorTemperatureValue = v8::Number::New(isolate, impl.colorTemperature());
    colorTemperatureHasValueOrDefault = true;
  }
  if (colorTemperatureHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), colorTemperatureValue))) {
    return false;
  }

  v8::Local<v8::Value> contrastValue;
  bool contrastHasValueOrDefault = false;
  if (impl.hasContrast()) {
    contrastValue = v8::Number::New(isolate, impl.contrast());
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
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[7].Get(isolate), deviceIdValue))) {
    return false;
  }

  v8::Local<v8::Value> echoCancellationValue;
  bool echoCancellationHasValueOrDefault = false;
  if (impl.hasEchoCancellation()) {
    echoCancellationValue = v8::Boolean::New(isolate, impl.echoCancellation());
    echoCancellationHasValueOrDefault = true;
  }
  if (echoCancellationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[8].Get(isolate), echoCancellationValue))) {
    return false;
  }

  v8::Local<v8::Value> exposureCompensationValue;
  bool exposureCompensationHasValueOrDefault = false;
  if (impl.hasExposureCompensation()) {
    exposureCompensationValue = v8::Number::New(isolate, impl.exposureCompensation());
    exposureCompensationHasValueOrDefault = true;
  }
  if (exposureCompensationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[9].Get(isolate), exposureCompensationValue))) {
    return false;
  }

  v8::Local<v8::Value> exposureModeValue;
  bool exposureModeHasValueOrDefault = false;
  if (impl.hasExposureMode()) {
    exposureModeValue = V8String(isolate, impl.exposureMode());
    exposureModeHasValueOrDefault = true;
  }
  if (exposureModeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[10].Get(isolate), exposureModeValue))) {
    return false;
  }

  v8::Local<v8::Value> facingModeValue;
  bool facingModeHasValueOrDefault = false;
  if (impl.hasFacingMode()) {
    facingModeValue = V8String(isolate, impl.facingMode());
    facingModeHasValueOrDefault = true;
  }
  if (facingModeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[11].Get(isolate), facingModeValue))) {
    return false;
  }

  v8::Local<v8::Value> focusModeValue;
  bool focusModeHasValueOrDefault = false;
  if (impl.hasFocusMode()) {
    focusModeValue = V8String(isolate, impl.focusMode());
    focusModeHasValueOrDefault = true;
  }
  if (focusModeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[14].Get(isolate), focusModeValue))) {
    return false;
  }

  v8::Local<v8::Value> frameRateValue;
  bool frameRateHasValueOrDefault = false;
  if (impl.hasFrameRate()) {
    frameRateValue = v8::Number::New(isolate, impl.frameRate());
    frameRateHasValueOrDefault = true;
  }
  if (frameRateHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[15].Get(isolate), frameRateValue))) {
    return false;
  }

  v8::Local<v8::Value> groupIdValue;
  bool groupIdHasValueOrDefault = false;
  if (impl.hasGroupId()) {
    groupIdValue = V8String(isolate, impl.groupId());
    groupIdHasValueOrDefault = true;
  }
  if (groupIdHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[16].Get(isolate), groupIdValue))) {
    return false;
  }

  v8::Local<v8::Value> heightValue;
  bool heightHasValueOrDefault = false;
  if (impl.hasHeight()) {
    heightValue = v8::Integer::New(isolate, impl.height());
    heightHasValueOrDefault = true;
  }
  if (heightHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[17].Get(isolate), heightValue))) {
    return false;
  }

  v8::Local<v8::Value> isoValue;
  bool isoHasValueOrDefault = false;
  if (impl.hasIso()) {
    isoValue = v8::Number::New(isolate, impl.iso());
    isoHasValueOrDefault = true;
  }
  if (isoHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[18].Get(isolate), isoValue))) {
    return false;
  }

  v8::Local<v8::Value> noiseSuppressionValue;
  bool noiseSuppressionHasValueOrDefault = false;
  if (impl.hasNoiseSuppression()) {
    noiseSuppressionValue = v8::Boolean::New(isolate, impl.noiseSuppression());
    noiseSuppressionHasValueOrDefault = true;
  }
  if (noiseSuppressionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[19].Get(isolate), noiseSuppressionValue))) {
    return false;
  }

  v8::Local<v8::Value> pointsOfInterestValue;
  bool pointsOfInterestHasValueOrDefault = false;
  if (impl.hasPointsOfInterest()) {
    pointsOfInterestValue = ToV8(impl.pointsOfInterest(), creationContext, isolate);
    pointsOfInterestHasValueOrDefault = true;
  }
  if (pointsOfInterestHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[20].Get(isolate), pointsOfInterestValue))) {
    return false;
  }

  v8::Local<v8::Value> saturationValue;
  bool saturationHasValueOrDefault = false;
  if (impl.hasSaturation()) {
    saturationValue = v8::Number::New(isolate, impl.saturation());
    saturationHasValueOrDefault = true;
  }
  if (saturationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[21].Get(isolate), saturationValue))) {
    return false;
  }

  v8::Local<v8::Value> sharpnessValue;
  bool sharpnessHasValueOrDefault = false;
  if (impl.hasSharpness()) {
    sharpnessValue = v8::Number::New(isolate, impl.sharpness());
    sharpnessHasValueOrDefault = true;
  }
  if (sharpnessHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[22].Get(isolate), sharpnessValue))) {
    return false;
  }

  v8::Local<v8::Value> torchValue;
  bool torchHasValueOrDefault = false;
  if (impl.hasTorch()) {
    torchValue = v8::Boolean::New(isolate, impl.torch());
    torchHasValueOrDefault = true;
  }
  if (torchHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[23].Get(isolate), torchValue))) {
    return false;
  }

  v8::Local<v8::Value> whiteBalanceModeValue;
  bool whiteBalanceModeHasValueOrDefault = false;
  if (impl.hasWhiteBalanceMode()) {
    whiteBalanceModeValue = V8String(isolate, impl.whiteBalanceMode());
    whiteBalanceModeHasValueOrDefault = true;
  }
  if (whiteBalanceModeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[25].Get(isolate), whiteBalanceModeValue))) {
    return false;
  }

  v8::Local<v8::Value> widthValue;
  bool widthHasValueOrDefault = false;
  if (impl.hasWidth()) {
    widthValue = v8::Integer::New(isolate, impl.width());
    widthHasValueOrDefault = true;
  }
  if (widthHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[26].Get(isolate), widthValue))) {
    return false;
  }

  v8::Local<v8::Value> zoomValue;
  bool zoomHasValueOrDefault = false;
  if (impl.hasZoom()) {
    zoomValue = v8::Number::New(isolate, impl.zoom());
    zoomHasValueOrDefault = true;
  }
  if (zoomHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[27].Get(isolate), zoomValue))) {
    return false;
  }

  if (RuntimeEnabledFeatures::MediaCaptureDepthEnabled()) {
    v8::Local<v8::Value> depthFarValue;
    bool depthFarHasValueOrDefault = false;
    if (impl.hasDepthFar()) {
      depthFarValue = v8::Number::New(isolate, impl.depthFar());
      depthFarHasValueOrDefault = true;
    }
    if (depthFarHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), depthFarValue))) {
      return false;
    }

    v8::Local<v8::Value> depthNearValue;
    bool depthNearHasValueOrDefault = false;
    if (impl.hasDepthNear()) {
      depthNearValue = v8::Number::New(isolate, impl.depthNear());
      depthNearHasValueOrDefault = true;
    }
    if (depthNearHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), depthNearValue))) {
      return false;
    }

    v8::Local<v8::Value> focalLengthXValue;
    bool focalLengthXHasValueOrDefault = false;
    if (impl.hasFocalLengthX()) {
      focalLengthXValue = v8::Number::New(isolate, impl.focalLengthX());
      focalLengthXHasValueOrDefault = true;
    }
    if (focalLengthXHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[12].Get(isolate), focalLengthXValue))) {
      return false;
    }

    v8::Local<v8::Value> focalLengthYValue;
    bool focalLengthYHasValueOrDefault = false;
    if (impl.hasFocalLengthY()) {
      focalLengthYValue = v8::Number::New(isolate, impl.focalLengthY());
      focalLengthYHasValueOrDefault = true;
    }
    if (focalLengthYHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[13].Get(isolate), focalLengthYValue))) {
      return false;
    }
  }

  if (RuntimeEnabledFeatures::MediaCaptureDepthVideoKindEnabled()) {
    v8::Local<v8::Value> videoKindValue;
    bool videoKindHasValueOrDefault = false;
    if (impl.hasVideoKind()) {
      videoKindValue = V8String(isolate, impl.videoKind());
      videoKindHasValueOrDefault = true;
    }
    if (videoKindHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[24].Get(isolate), videoKindValue))) {
      return false;
    }
  }

  return true;
}

MediaTrackSettings NativeValueTraits<MediaTrackSettings>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MediaTrackSettings impl;
  V8MediaTrackSettings::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_track_constraint_set.h"

#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_boolean_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_dom_string_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_double_range.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_long_range.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_point_2d_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_point_2d.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaTrackConstraintSetKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "aspectRatio",
    "autoGainControl",
    "brightness",
    "channelCount",
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
    "latency",
    "mandatory",
    "noiseSuppression",
    "optional",
    "pointsOfInterest",
    "sampleRate",
    "sampleSize",
    "saturation",
    "sharpness",
    "torch",
    "videoKind",
    "volume",
    "whiteBalanceMode",
    "width",
    "zoom",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MediaTrackConstraintSet::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MediaTrackConstraintSet& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MediaTrackConstraintSetKeys(isolate);
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
    DoubleOrConstrainDoubleRange aspectRatioCppValue;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, aspectRatioValue, aspectRatioCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
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
    BooleanOrConstrainBooleanParameters autoGainControlCppValue;
    V8BooleanOrConstrainBooleanParameters::ToImpl(isolate, autoGainControlValue, autoGainControlCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
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
    DoubleOrConstrainDoubleRange brightnessCppValue;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, brightnessValue, brightnessCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setBrightness(brightnessCppValue);
  }

  v8::Local<v8::Value> channelCountValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&channelCountValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (channelCountValue.IsEmpty() || channelCountValue->IsUndefined()) {
    // Do nothing.
  } else {
    LongOrConstrainLongRange channelCountCppValue;
    V8LongOrConstrainLongRange::ToImpl(isolate, channelCountValue, channelCountCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setChannelCount(channelCountCppValue);
  }

  v8::Local<v8::Value> colorTemperatureValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&colorTemperatureValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (colorTemperatureValue.IsEmpty() || colorTemperatureValue->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange colorTemperatureCppValue;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, colorTemperatureValue, colorTemperatureCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setColorTemperature(colorTemperatureCppValue);
  }

  v8::Local<v8::Value> contrastValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&contrastValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (contrastValue.IsEmpty() || contrastValue->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange contrastCppValue;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, contrastValue, contrastCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setContrast(contrastCppValue);
  }

  v8::Local<v8::Value> deviceIdValue;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&deviceIdValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (deviceIdValue.IsEmpty() || deviceIdValue->IsUndefined()) {
    // Do nothing.
  } else {
    StringOrStringSequenceOrConstrainDOMStringParameters deviceIdCppValue;
    V8StringOrStringSequenceOrConstrainDOMStringParameters::ToImpl(isolate, deviceIdValue, deviceIdCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDeviceId(deviceIdCppValue);
  }

  v8::Local<v8::Value> echoCancellationValue;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&echoCancellationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (echoCancellationValue.IsEmpty() || echoCancellationValue->IsUndefined()) {
    // Do nothing.
  } else {
    BooleanOrConstrainBooleanParameters echoCancellationCppValue;
    V8BooleanOrConstrainBooleanParameters::ToImpl(isolate, echoCancellationValue, echoCancellationCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setEchoCancellation(echoCancellationCppValue);
  }

  v8::Local<v8::Value> exposureCompensationValue;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&exposureCompensationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (exposureCompensationValue.IsEmpty() || exposureCompensationValue->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange exposureCompensationCppValue;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, exposureCompensationValue, exposureCompensationCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setExposureCompensation(exposureCompensationCppValue);
  }

  v8::Local<v8::Value> exposureModeValue;
  if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&exposureModeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (exposureModeValue.IsEmpty() || exposureModeValue->IsUndefined()) {
    // Do nothing.
  } else {
    StringOrStringSequenceOrConstrainDOMStringParameters exposureModeCppValue;
    V8StringOrStringSequenceOrConstrainDOMStringParameters::ToImpl(isolate, exposureModeValue, exposureModeCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setExposureMode(exposureModeCppValue);
  }

  v8::Local<v8::Value> facingModeValue;
  if (!v8Object->Get(context, keys[12].Get(isolate)).ToLocal(&facingModeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (facingModeValue.IsEmpty() || facingModeValue->IsUndefined()) {
    // Do nothing.
  } else {
    StringOrStringSequenceOrConstrainDOMStringParameters facingModeCppValue;
    V8StringOrStringSequenceOrConstrainDOMStringParameters::ToImpl(isolate, facingModeValue, facingModeCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setFacingMode(facingModeCppValue);
  }

  v8::Local<v8::Value> focusModeValue;
  if (!v8Object->Get(context, keys[15].Get(isolate)).ToLocal(&focusModeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (focusModeValue.IsEmpty() || focusModeValue->IsUndefined()) {
    // Do nothing.
  } else {
    StringOrStringSequenceOrConstrainDOMStringParameters focusModeCppValue;
    V8StringOrStringSequenceOrConstrainDOMStringParameters::ToImpl(isolate, focusModeValue, focusModeCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setFocusMode(focusModeCppValue);
  }

  v8::Local<v8::Value> frameRateValue;
  if (!v8Object->Get(context, keys[16].Get(isolate)).ToLocal(&frameRateValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (frameRateValue.IsEmpty() || frameRateValue->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange frameRateCppValue;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, frameRateValue, frameRateCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setFrameRate(frameRateCppValue);
  }

  v8::Local<v8::Value> groupIdValue;
  if (!v8Object->Get(context, keys[17].Get(isolate)).ToLocal(&groupIdValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (groupIdValue.IsEmpty() || groupIdValue->IsUndefined()) {
    // Do nothing.
  } else {
    StringOrStringSequenceOrConstrainDOMStringParameters groupIdCppValue;
    V8StringOrStringSequenceOrConstrainDOMStringParameters::ToImpl(isolate, groupIdValue, groupIdCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setGroupId(groupIdCppValue);
  }

  v8::Local<v8::Value> heightValue;
  if (!v8Object->Get(context, keys[18].Get(isolate)).ToLocal(&heightValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (heightValue.IsEmpty() || heightValue->IsUndefined()) {
    // Do nothing.
  } else {
    LongOrConstrainLongRange heightCppValue;
    V8LongOrConstrainLongRange::ToImpl(isolate, heightValue, heightCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setHeight(heightCppValue);
  }

  v8::Local<v8::Value> isoValue;
  if (!v8Object->Get(context, keys[19].Get(isolate)).ToLocal(&isoValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (isoValue.IsEmpty() || isoValue->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange isoCppValue;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, isoValue, isoCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIso(isoCppValue);
  }

  v8::Local<v8::Value> latencyValue;
  if (!v8Object->Get(context, keys[20].Get(isolate)).ToLocal(&latencyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (latencyValue.IsEmpty() || latencyValue->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange latencyCppValue;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, latencyValue, latencyCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setLatency(latencyCppValue);
  }

  v8::Local<v8::Value> mandatoryValue;
  if (!v8Object->Get(context, keys[21].Get(isolate)).ToLocal(&mandatoryValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (mandatoryValue.IsEmpty() || mandatoryValue->IsUndefined()) {
    // Do nothing.
  } else {
    Dictionary mandatoryCppValue = NativeValueTraits<Dictionary>::NativeValue(isolate, mandatoryValue, exceptionState);
    if (exceptionState.HadException())
      return;
    if (!mandatoryCppValue.IsObject()) {
      exceptionState.ThrowTypeError("member mandatory is not an object.");
      return;
    }
    impl.setMandatory(mandatoryCppValue);
  }

  v8::Local<v8::Value> noiseSuppressionValue;
  if (!v8Object->Get(context, keys[22].Get(isolate)).ToLocal(&noiseSuppressionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (noiseSuppressionValue.IsEmpty() || noiseSuppressionValue->IsUndefined()) {
    // Do nothing.
  } else {
    BooleanOrConstrainBooleanParameters noiseSuppressionCppValue;
    V8BooleanOrConstrainBooleanParameters::ToImpl(isolate, noiseSuppressionValue, noiseSuppressionCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setNoiseSuppression(noiseSuppressionCppValue);
  }

  v8::Local<v8::Value> optionalValue;
  if (!v8Object->Get(context, keys[23].Get(isolate)).ToLocal(&optionalValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (optionalValue.IsEmpty() || optionalValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<Dictionary> optionalCppValue = NativeValueTraits<IDLSequence<Dictionary>>::NativeValue(isolate, optionalValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setOptional(optionalCppValue);
  }

  v8::Local<v8::Value> pointsOfInterestValue;
  if (!v8Object->Get(context, keys[24].Get(isolate)).ToLocal(&pointsOfInterestValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (pointsOfInterestValue.IsEmpty() || pointsOfInterestValue->IsUndefined()) {
    // Do nothing.
  } else {
    Point2DSequenceOrConstrainPoint2DParameters pointsOfInterestCppValue;
    V8Point2DSequenceOrConstrainPoint2DParameters::ToImpl(isolate, pointsOfInterestValue, pointsOfInterestCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPointsOfInterest(pointsOfInterestCppValue);
  }

  v8::Local<v8::Value> sampleRateValue;
  if (!v8Object->Get(context, keys[25].Get(isolate)).ToLocal(&sampleRateValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (sampleRateValue.IsEmpty() || sampleRateValue->IsUndefined()) {
    // Do nothing.
  } else {
    LongOrConstrainLongRange sampleRateCppValue;
    V8LongOrConstrainLongRange::ToImpl(isolate, sampleRateValue, sampleRateCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setSampleRate(sampleRateCppValue);
  }

  v8::Local<v8::Value> sampleSizeValue;
  if (!v8Object->Get(context, keys[26].Get(isolate)).ToLocal(&sampleSizeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (sampleSizeValue.IsEmpty() || sampleSizeValue->IsUndefined()) {
    // Do nothing.
  } else {
    LongOrConstrainLongRange sampleSizeCppValue;
    V8LongOrConstrainLongRange::ToImpl(isolate, sampleSizeValue, sampleSizeCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setSampleSize(sampleSizeCppValue);
  }

  v8::Local<v8::Value> saturationValue;
  if (!v8Object->Get(context, keys[27].Get(isolate)).ToLocal(&saturationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (saturationValue.IsEmpty() || saturationValue->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange saturationCppValue;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, saturationValue, saturationCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setSaturation(saturationCppValue);
  }

  v8::Local<v8::Value> sharpnessValue;
  if (!v8Object->Get(context, keys[28].Get(isolate)).ToLocal(&sharpnessValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (sharpnessValue.IsEmpty() || sharpnessValue->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange sharpnessCppValue;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, sharpnessValue, sharpnessCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setSharpness(sharpnessCppValue);
  }

  v8::Local<v8::Value> torchValue;
  if (!v8Object->Get(context, keys[29].Get(isolate)).ToLocal(&torchValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (torchValue.IsEmpty() || torchValue->IsUndefined()) {
    // Do nothing.
  } else {
    BooleanOrConstrainBooleanParameters torchCppValue;
    V8BooleanOrConstrainBooleanParameters::ToImpl(isolate, torchValue, torchCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setTorch(torchCppValue);
  }

  v8::Local<v8::Value> volumeValue;
  if (!v8Object->Get(context, keys[31].Get(isolate)).ToLocal(&volumeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (volumeValue.IsEmpty() || volumeValue->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange volumeCppValue;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, volumeValue, volumeCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setVolume(volumeCppValue);
  }

  v8::Local<v8::Value> whiteBalanceModeValue;
  if (!v8Object->Get(context, keys[32].Get(isolate)).ToLocal(&whiteBalanceModeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (whiteBalanceModeValue.IsEmpty() || whiteBalanceModeValue->IsUndefined()) {
    // Do nothing.
  } else {
    StringOrStringSequenceOrConstrainDOMStringParameters whiteBalanceModeCppValue;
    V8StringOrStringSequenceOrConstrainDOMStringParameters::ToImpl(isolate, whiteBalanceModeValue, whiteBalanceModeCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setWhiteBalanceMode(whiteBalanceModeCppValue);
  }

  v8::Local<v8::Value> widthValue;
  if (!v8Object->Get(context, keys[33].Get(isolate)).ToLocal(&widthValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (widthValue.IsEmpty() || widthValue->IsUndefined()) {
    // Do nothing.
  } else {
    LongOrConstrainLongRange widthCppValue;
    V8LongOrConstrainLongRange::ToImpl(isolate, widthValue, widthCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setWidth(widthCppValue);
  }

  v8::Local<v8::Value> zoomValue;
  if (!v8Object->Get(context, keys[34].Get(isolate)).ToLocal(&zoomValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (zoomValue.IsEmpty() || zoomValue->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange zoomCppValue;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, zoomValue, zoomCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setZoom(zoomCppValue);
  }

  if (RuntimeEnabledFeatures::MediaCaptureDepthEnabled()) {
    v8::Local<v8::Value> depthFarValue;
    if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&depthFarValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (depthFarValue.IsEmpty() || depthFarValue->IsUndefined()) {
      // Do nothing.
    } else {
      DoubleOrConstrainDoubleRange depthFarCppValue;
      V8DoubleOrConstrainDoubleRange::ToImpl(isolate, depthFarValue, depthFarCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
      if (exceptionState.HadException())
        return;
      impl.setDepthFar(depthFarCppValue);
    }

    v8::Local<v8::Value> depthNearValue;
    if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&depthNearValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (depthNearValue.IsEmpty() || depthNearValue->IsUndefined()) {
      // Do nothing.
    } else {
      DoubleOrConstrainDoubleRange depthNearCppValue;
      V8DoubleOrConstrainDoubleRange::ToImpl(isolate, depthNearValue, depthNearCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
      if (exceptionState.HadException())
        return;
      impl.setDepthNear(depthNearCppValue);
    }

    v8::Local<v8::Value> focalLengthXValue;
    if (!v8Object->Get(context, keys[13].Get(isolate)).ToLocal(&focalLengthXValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (focalLengthXValue.IsEmpty() || focalLengthXValue->IsUndefined()) {
      // Do nothing.
    } else {
      DoubleOrConstrainDoubleRange focalLengthXCppValue;
      V8DoubleOrConstrainDoubleRange::ToImpl(isolate, focalLengthXValue, focalLengthXCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
      if (exceptionState.HadException())
        return;
      impl.setFocalLengthX(focalLengthXCppValue);
    }

    v8::Local<v8::Value> focalLengthYValue;
    if (!v8Object->Get(context, keys[14].Get(isolate)).ToLocal(&focalLengthYValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (focalLengthYValue.IsEmpty() || focalLengthYValue->IsUndefined()) {
      // Do nothing.
    } else {
      DoubleOrConstrainDoubleRange focalLengthYCppValue;
      V8DoubleOrConstrainDoubleRange::ToImpl(isolate, focalLengthYValue, focalLengthYCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
      if (exceptionState.HadException())
        return;
      impl.setFocalLengthY(focalLengthYCppValue);
    }
  }

  if (RuntimeEnabledFeatures::MediaCaptureDepthVideoKindEnabled()) {
    v8::Local<v8::Value> videoKindValue;
    if (!v8Object->Get(context, keys[30].Get(isolate)).ToLocal(&videoKindValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (videoKindValue.IsEmpty() || videoKindValue->IsUndefined()) {
      // Do nothing.
    } else {
      StringOrStringSequenceOrConstrainDOMStringParameters videoKindCppValue;
      V8StringOrStringSequenceOrConstrainDOMStringParameters::ToImpl(isolate, videoKindValue, videoKindCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
      if (exceptionState.HadException())
        return;
      impl.setVideoKind(videoKindCppValue);
    }
  }
}

v8::Local<v8::Value> MediaTrackConstraintSet::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaTrackConstraintSet(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaTrackConstraintSet(const MediaTrackConstraintSet& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MediaTrackConstraintSetKeys(isolate);
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

  v8::Local<v8::Value> channelCountValue;
  bool channelCountHasValueOrDefault = false;
  if (impl.hasChannelCount()) {
    channelCountValue = ToV8(impl.channelCount(), creationContext, isolate);
    channelCountHasValueOrDefault = true;
  }
  if (channelCountHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), channelCountValue))) {
    return false;
  }

  v8::Local<v8::Value> colorTemperatureValue;
  bool colorTemperatureHasValueOrDefault = false;
  if (impl.hasColorTemperature()) {
    colorTemperatureValue = ToV8(impl.colorTemperature(), creationContext, isolate);
    colorTemperatureHasValueOrDefault = true;
  }
  if (colorTemperatureHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), colorTemperatureValue))) {
    return false;
  }

  v8::Local<v8::Value> contrastValue;
  bool contrastHasValueOrDefault = false;
  if (impl.hasContrast()) {
    contrastValue = ToV8(impl.contrast(), creationContext, isolate);
    contrastHasValueOrDefault = true;
  }
  if (contrastHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), contrastValue))) {
    return false;
  }

  v8::Local<v8::Value> deviceIdValue;
  bool deviceIdHasValueOrDefault = false;
  if (impl.hasDeviceId()) {
    deviceIdValue = ToV8(impl.deviceId(), creationContext, isolate);
    deviceIdHasValueOrDefault = true;
  }
  if (deviceIdHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[8].Get(isolate), deviceIdValue))) {
    return false;
  }

  v8::Local<v8::Value> echoCancellationValue;
  bool echoCancellationHasValueOrDefault = false;
  if (impl.hasEchoCancellation()) {
    echoCancellationValue = ToV8(impl.echoCancellation(), creationContext, isolate);
    echoCancellationHasValueOrDefault = true;
  }
  if (echoCancellationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[9].Get(isolate), echoCancellationValue))) {
    return false;
  }

  v8::Local<v8::Value> exposureCompensationValue;
  bool exposureCompensationHasValueOrDefault = false;
  if (impl.hasExposureCompensation()) {
    exposureCompensationValue = ToV8(impl.exposureCompensation(), creationContext, isolate);
    exposureCompensationHasValueOrDefault = true;
  }
  if (exposureCompensationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[10].Get(isolate), exposureCompensationValue))) {
    return false;
  }

  v8::Local<v8::Value> exposureModeValue;
  bool exposureModeHasValueOrDefault = false;
  if (impl.hasExposureMode()) {
    exposureModeValue = ToV8(impl.exposureMode(), creationContext, isolate);
    exposureModeHasValueOrDefault = true;
  }
  if (exposureModeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[11].Get(isolate), exposureModeValue))) {
    return false;
  }

  v8::Local<v8::Value> facingModeValue;
  bool facingModeHasValueOrDefault = false;
  if (impl.hasFacingMode()) {
    facingModeValue = ToV8(impl.facingMode(), creationContext, isolate);
    facingModeHasValueOrDefault = true;
  }
  if (facingModeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[12].Get(isolate), facingModeValue))) {
    return false;
  }

  v8::Local<v8::Value> focusModeValue;
  bool focusModeHasValueOrDefault = false;
  if (impl.hasFocusMode()) {
    focusModeValue = ToV8(impl.focusMode(), creationContext, isolate);
    focusModeHasValueOrDefault = true;
  }
  if (focusModeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[15].Get(isolate), focusModeValue))) {
    return false;
  }

  v8::Local<v8::Value> frameRateValue;
  bool frameRateHasValueOrDefault = false;
  if (impl.hasFrameRate()) {
    frameRateValue = ToV8(impl.frameRate(), creationContext, isolate);
    frameRateHasValueOrDefault = true;
  }
  if (frameRateHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[16].Get(isolate), frameRateValue))) {
    return false;
  }

  v8::Local<v8::Value> groupIdValue;
  bool groupIdHasValueOrDefault = false;
  if (impl.hasGroupId()) {
    groupIdValue = ToV8(impl.groupId(), creationContext, isolate);
    groupIdHasValueOrDefault = true;
  }
  if (groupIdHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[17].Get(isolate), groupIdValue))) {
    return false;
  }

  v8::Local<v8::Value> heightValue;
  bool heightHasValueOrDefault = false;
  if (impl.hasHeight()) {
    heightValue = ToV8(impl.height(), creationContext, isolate);
    heightHasValueOrDefault = true;
  }
  if (heightHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[18].Get(isolate), heightValue))) {
    return false;
  }

  v8::Local<v8::Value> isoValue;
  bool isoHasValueOrDefault = false;
  if (impl.hasIso()) {
    isoValue = ToV8(impl.iso(), creationContext, isolate);
    isoHasValueOrDefault = true;
  }
  if (isoHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[19].Get(isolate), isoValue))) {
    return false;
  }

  v8::Local<v8::Value> latencyValue;
  bool latencyHasValueOrDefault = false;
  if (impl.hasLatency()) {
    latencyValue = ToV8(impl.latency(), creationContext, isolate);
    latencyHasValueOrDefault = true;
  }
  if (latencyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[20].Get(isolate), latencyValue))) {
    return false;
  }

  v8::Local<v8::Value> mandatoryValue;
  bool mandatoryHasValueOrDefault = false;
  if (impl.hasMandatory()) {
    DCHECK(impl.mandatory().IsObject());
    mandatoryValue = impl.mandatory().V8Value();
    mandatoryHasValueOrDefault = true;
  }
  if (mandatoryHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[21].Get(isolate), mandatoryValue))) {
    return false;
  }

  v8::Local<v8::Value> noiseSuppressionValue;
  bool noiseSuppressionHasValueOrDefault = false;
  if (impl.hasNoiseSuppression()) {
    noiseSuppressionValue = ToV8(impl.noiseSuppression(), creationContext, isolate);
    noiseSuppressionHasValueOrDefault = true;
  }
  if (noiseSuppressionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[22].Get(isolate), noiseSuppressionValue))) {
    return false;
  }

  v8::Local<v8::Value> optionalValue;
  bool optionalHasValueOrDefault = false;
  if (impl.hasOptional()) {
    optionalValue = ToV8(impl.optional(), creationContext, isolate);
    optionalHasValueOrDefault = true;
  }
  if (optionalHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[23].Get(isolate), optionalValue))) {
    return false;
  }

  v8::Local<v8::Value> pointsOfInterestValue;
  bool pointsOfInterestHasValueOrDefault = false;
  if (impl.hasPointsOfInterest()) {
    pointsOfInterestValue = ToV8(impl.pointsOfInterest(), creationContext, isolate);
    pointsOfInterestHasValueOrDefault = true;
  }
  if (pointsOfInterestHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[24].Get(isolate), pointsOfInterestValue))) {
    return false;
  }

  v8::Local<v8::Value> sampleRateValue;
  bool sampleRateHasValueOrDefault = false;
  if (impl.hasSampleRate()) {
    sampleRateValue = ToV8(impl.sampleRate(), creationContext, isolate);
    sampleRateHasValueOrDefault = true;
  }
  if (sampleRateHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[25].Get(isolate), sampleRateValue))) {
    return false;
  }

  v8::Local<v8::Value> sampleSizeValue;
  bool sampleSizeHasValueOrDefault = false;
  if (impl.hasSampleSize()) {
    sampleSizeValue = ToV8(impl.sampleSize(), creationContext, isolate);
    sampleSizeHasValueOrDefault = true;
  }
  if (sampleSizeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[26].Get(isolate), sampleSizeValue))) {
    return false;
  }

  v8::Local<v8::Value> saturationValue;
  bool saturationHasValueOrDefault = false;
  if (impl.hasSaturation()) {
    saturationValue = ToV8(impl.saturation(), creationContext, isolate);
    saturationHasValueOrDefault = true;
  }
  if (saturationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[27].Get(isolate), saturationValue))) {
    return false;
  }

  v8::Local<v8::Value> sharpnessValue;
  bool sharpnessHasValueOrDefault = false;
  if (impl.hasSharpness()) {
    sharpnessValue = ToV8(impl.sharpness(), creationContext, isolate);
    sharpnessHasValueOrDefault = true;
  }
  if (sharpnessHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[28].Get(isolate), sharpnessValue))) {
    return false;
  }

  v8::Local<v8::Value> torchValue;
  bool torchHasValueOrDefault = false;
  if (impl.hasTorch()) {
    torchValue = ToV8(impl.torch(), creationContext, isolate);
    torchHasValueOrDefault = true;
  }
  if (torchHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[29].Get(isolate), torchValue))) {
    return false;
  }

  v8::Local<v8::Value> volumeValue;
  bool volumeHasValueOrDefault = false;
  if (impl.hasVolume()) {
    volumeValue = ToV8(impl.volume(), creationContext, isolate);
    volumeHasValueOrDefault = true;
  }
  if (volumeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[31].Get(isolate), volumeValue))) {
    return false;
  }

  v8::Local<v8::Value> whiteBalanceModeValue;
  bool whiteBalanceModeHasValueOrDefault = false;
  if (impl.hasWhiteBalanceMode()) {
    whiteBalanceModeValue = ToV8(impl.whiteBalanceMode(), creationContext, isolate);
    whiteBalanceModeHasValueOrDefault = true;
  }
  if (whiteBalanceModeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[32].Get(isolate), whiteBalanceModeValue))) {
    return false;
  }

  v8::Local<v8::Value> widthValue;
  bool widthHasValueOrDefault = false;
  if (impl.hasWidth()) {
    widthValue = ToV8(impl.width(), creationContext, isolate);
    widthHasValueOrDefault = true;
  }
  if (widthHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[33].Get(isolate), widthValue))) {
    return false;
  }

  v8::Local<v8::Value> zoomValue;
  bool zoomHasValueOrDefault = false;
  if (impl.hasZoom()) {
    zoomValue = ToV8(impl.zoom(), creationContext, isolate);
    zoomHasValueOrDefault = true;
  }
  if (zoomHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[34].Get(isolate), zoomValue))) {
    return false;
  }

  if (RuntimeEnabledFeatures::MediaCaptureDepthEnabled()) {
    v8::Local<v8::Value> depthFarValue;
    bool depthFarHasValueOrDefault = false;
    if (impl.hasDepthFar()) {
      depthFarValue = ToV8(impl.depthFar(), creationContext, isolate);
      depthFarHasValueOrDefault = true;
    }
    if (depthFarHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), depthFarValue))) {
      return false;
    }

    v8::Local<v8::Value> depthNearValue;
    bool depthNearHasValueOrDefault = false;
    if (impl.hasDepthNear()) {
      depthNearValue = ToV8(impl.depthNear(), creationContext, isolate);
      depthNearHasValueOrDefault = true;
    }
    if (depthNearHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[7].Get(isolate), depthNearValue))) {
      return false;
    }

    v8::Local<v8::Value> focalLengthXValue;
    bool focalLengthXHasValueOrDefault = false;
    if (impl.hasFocalLengthX()) {
      focalLengthXValue = ToV8(impl.focalLengthX(), creationContext, isolate);
      focalLengthXHasValueOrDefault = true;
    }
    if (focalLengthXHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[13].Get(isolate), focalLengthXValue))) {
      return false;
    }

    v8::Local<v8::Value> focalLengthYValue;
    bool focalLengthYHasValueOrDefault = false;
    if (impl.hasFocalLengthY()) {
      focalLengthYValue = ToV8(impl.focalLengthY(), creationContext, isolate);
      focalLengthYHasValueOrDefault = true;
    }
    if (focalLengthYHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[14].Get(isolate), focalLengthYValue))) {
      return false;
    }
  }

  if (RuntimeEnabledFeatures::MediaCaptureDepthVideoKindEnabled()) {
    v8::Local<v8::Value> videoKindValue;
    bool videoKindHasValueOrDefault = false;
    if (impl.hasVideoKind()) {
      videoKindValue = ToV8(impl.videoKind(), creationContext, isolate);
      videoKindHasValueOrDefault = true;
    }
    if (videoKindHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[30].Get(isolate), videoKindValue))) {
      return false;
    }
  }

  return true;
}

MediaTrackConstraintSet NativeValueTraits<MediaTrackConstraintSet>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MediaTrackConstraintSet impl;
  V8MediaTrackConstraintSet::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink

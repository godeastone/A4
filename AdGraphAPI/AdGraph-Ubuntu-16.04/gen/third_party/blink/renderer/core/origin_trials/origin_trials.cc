// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/origin_trials.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/platform/runtime_enabled_features.json5


#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"

#include "third_party/blink/renderer/core/origin_trials/origin_trial_context.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

const char OriginTrials::kAnimationWorkletTrialName[] = "AnimationWorklet";
const char OriginTrials::kBudgetQueryTrialName[] = "BudgetQuery";
const char OriginTrials::kDisableHardwareNoiseSuppressionTrialName[] = "DisableHardwareNoiseSuppression";
const char OriginTrials::kExperimentalHardwareEchoCancellationTrialName[] = "ExperimentalHardwareEchoCancellation";
const char OriginTrials::kGamepadExtensionsTrialName[] = "WebVR1.1M62";
const char OriginTrials::kInstalledAppTrialName[] = "InstalledApp";
const char OriginTrials::kLowLatencyCanvasTrialName[] = "LowLatencyCanvas";
const char OriginTrials::kMediaCapabilitiesTrialName[] = "MediaCapabilities";
const char OriginTrials::kOriginTrialsSampleAPITrialName[] = "Frobulate";
const char OriginTrials::kOriginTrialsSampleAPIImpliedTrialName[] = "FrobulateImplied";
const char OriginTrials::kPictureInPictureAPITrialName[] = "PictureInPictureAPI";
const char OriginTrials::kRtcPeerConnectionIdTrialName[] = "RtcPeerConnectionId";
const char OriginTrials::kSensorTrialName[] = "GenericSensor";
const char OriginTrials::kSignatureBasedIntegrityTrialName[] = "SignatureBasedIntegrity";
const char OriginTrials::kTouchEventFeatureDetectionTrialName[] = "ForceTouchEventFeatureDetectionForInspector";
const char OriginTrials::kWebLocksAPITrialName[] = "WebLocksAPI";
const char OriginTrials::kWebRtcVaapiHWVP8EncodingTrialName[] = "WebRtcVaapiHWVP8Encoding";
const char OriginTrials::kWebVRTrialName[] = "WebVR1.1M62";
const char OriginTrials::kWebXRTrialName[] = "WebXRDevice";
const char OriginTrials::kWebXRGamepadSupportTrialName[] = "WebXRGamepadSupport";


bool OriginTrials::animationWorkletEnabled(const ExecutionContext* executionContext) {
  if (RuntimeEnabledFeatures::AnimationWorkletEnabledByRuntimeFlag())
    return true;

  const OriginTrialContext* context = OriginTrialContext::From(executionContext);
  if (!context) return false;
  if (context->IsTrialEnabled(kAnimationWorkletTrialName))
    return true;
  return false;
}


bool OriginTrials::budgetQueryEnabled(const ExecutionContext* executionContext) {
  if (RuntimeEnabledFeatures::BudgetQueryEnabledByRuntimeFlag())
    return true;

  const OriginTrialContext* context = OriginTrialContext::From(executionContext);
  if (!context) return false;
  if (context->IsTrialEnabled(kBudgetQueryTrialName))
    return true;
  return false;
}


bool OriginTrials::disableHardwareNoiseSuppressionEnabled(const ExecutionContext* executionContext) {
  if (RuntimeEnabledFeatures::DisableHardwareNoiseSuppressionEnabledByRuntimeFlag())
    return true;

  const OriginTrialContext* context = OriginTrialContext::From(executionContext);
  if (!context) return false;
  if (context->IsTrialEnabled(kDisableHardwareNoiseSuppressionTrialName))
    return true;
  return false;
}


bool OriginTrials::experimentalHardwareEchoCancellationEnabled(const ExecutionContext* executionContext) {
  if (RuntimeEnabledFeatures::ExperimentalHardwareEchoCancellationEnabledByRuntimeFlag())
    return true;

  const OriginTrialContext* context = OriginTrialContext::From(executionContext);
  if (!context) return false;
  if (context->IsTrialEnabled(kExperimentalHardwareEchoCancellationTrialName))
    return true;
  return false;
}


bool OriginTrials::gamepadExtensionsEnabled(const ExecutionContext* executionContext) {
  if (RuntimeEnabledFeatures::GamepadExtensionsEnabledByRuntimeFlag())
    return true;

  const OriginTrialContext* context = OriginTrialContext::From(executionContext);
  if (!context) return false;
  if (context->IsTrialEnabled(kGamepadExtensionsTrialName))
    return true;
  return false;
}


bool OriginTrials::installedAppEnabled(const ExecutionContext* executionContext) {
  if (RuntimeEnabledFeatures::InstalledAppEnabledByRuntimeFlag())
    return true;

  const OriginTrialContext* context = OriginTrialContext::From(executionContext);
  if (!context) return false;
  if (context->IsTrialEnabled(kInstalledAppTrialName))
    return true;
  return false;
}


bool OriginTrials::lowLatencyCanvasEnabled(const ExecutionContext* executionContext) {
  if (RuntimeEnabledFeatures::LowLatencyCanvasEnabledByRuntimeFlag())
    return true;

  const OriginTrialContext* context = OriginTrialContext::From(executionContext);
  if (!context) return false;
  if (context->IsTrialEnabled(kLowLatencyCanvasTrialName))
    return true;
  return false;
}


bool OriginTrials::mediaCapabilitiesEnabled(const ExecutionContext* executionContext) {
  if (RuntimeEnabledFeatures::MediaCapabilitiesEnabledByRuntimeFlag())
    return true;

  const OriginTrialContext* context = OriginTrialContext::From(executionContext);
  if (!context) return false;
  if (context->IsTrialEnabled(kMediaCapabilitiesTrialName))
    return true;
  return false;
}


bool OriginTrials::originTrialsSampleAPIEnabled(const ExecutionContext* executionContext) {
  if (RuntimeEnabledFeatures::OriginTrialsSampleAPIEnabledByRuntimeFlag())
    return true;

  const OriginTrialContext* context = OriginTrialContext::From(executionContext);
  if (!context) return false;
  if (context->IsTrialEnabled(kOriginTrialsSampleAPITrialName))
    return true;
  return false;
}


bool OriginTrials::originTrialsSampleAPIImpliedEnabled(const ExecutionContext* executionContext) {
  if (RuntimeEnabledFeatures::OriginTrialsSampleAPIImpliedEnabledByRuntimeFlag())
    return true;

  const OriginTrialContext* context = OriginTrialContext::From(executionContext);
  if (!context) return false;
  if (context->IsTrialEnabled(kOriginTrialsSampleAPIImpliedTrialName))
    return true;
  // TODO(crbug.com/831346): This check should be redundant with
  // GetImpliedTrials() being checked in OriginTrialContext::EnableTrialFromToken().
  // Remove when verified by further testing.
  if (context->IsTrialEnabled(kOriginTrialsSampleAPITrialName))
    return true;
  return false;
}


bool OriginTrials::pictureInPictureAPIEnabled(const ExecutionContext* executionContext) {
  if (RuntimeEnabledFeatures::PictureInPictureAPIEnabledByRuntimeFlag())
    return true;
#if defined(OS_CHROMEOS) || defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_WIN)
  const OriginTrialContext* context = OriginTrialContext::From(executionContext);
  if (!context) return false;
  if (context->IsTrialEnabled(kPictureInPictureAPITrialName))
    return true;
  return false;
#else
  return false;
#endif
}


bool OriginTrials::rtcPeerConnectionIdEnabled(const ExecutionContext* executionContext) {
  if (RuntimeEnabledFeatures::RtcPeerConnectionIdEnabledByRuntimeFlag())
    return true;

  const OriginTrialContext* context = OriginTrialContext::From(executionContext);
  if (!context) return false;
  if (context->IsTrialEnabled(kRtcPeerConnectionIdTrialName))
    return true;
  return false;
}


bool OriginTrials::sensorEnabled(const ExecutionContext* executionContext) {
  if (RuntimeEnabledFeatures::SensorEnabledByRuntimeFlag())
    return true;

  const OriginTrialContext* context = OriginTrialContext::From(executionContext);
  if (!context) return false;
  if (context->IsTrialEnabled(kSensorTrialName))
    return true;
  return false;
}


bool OriginTrials::signatureBasedIntegrityEnabled(const ExecutionContext* executionContext) {
  if (RuntimeEnabledFeatures::SignatureBasedIntegrityEnabledByRuntimeFlag())
    return true;

  const OriginTrialContext* context = OriginTrialContext::From(executionContext);
  if (!context) return false;
  if (context->IsTrialEnabled(kSignatureBasedIntegrityTrialName))
    return true;
  return false;
}


bool OriginTrials::touchEventFeatureDetectionEnabled(const ExecutionContext* executionContext) {
  if (RuntimeEnabledFeatures::TouchEventFeatureDetectionEnabledByRuntimeFlag())
    return true;

  const OriginTrialContext* context = OriginTrialContext::From(executionContext);
  if (!context) return false;
  if (context->IsTrialEnabled(kTouchEventFeatureDetectionTrialName))
    return true;
  return false;
}


bool OriginTrials::webLocksAPIEnabled(const ExecutionContext* executionContext) {
  if (RuntimeEnabledFeatures::WebLocksAPIEnabledByRuntimeFlag())
    return true;

  const OriginTrialContext* context = OriginTrialContext::From(executionContext);
  if (!context) return false;
  if (context->IsTrialEnabled(kWebLocksAPITrialName))
    return true;
  return false;
}


bool OriginTrials::webRtcVaapiHWVP8EncodingEnabled(const ExecutionContext* executionContext) {
  if (RuntimeEnabledFeatures::WebRtcVaapiHWVP8EncodingEnabledByRuntimeFlag())
    return true;
#if defined(OS_CHROMEOS)
  const OriginTrialContext* context = OriginTrialContext::From(executionContext);
  if (!context) return false;
  if (context->IsTrialEnabled(kWebRtcVaapiHWVP8EncodingTrialName))
    return true;
  return false;
#else
  return false;
#endif
}


bool OriginTrials::webVREnabled(const ExecutionContext* executionContext) {
  if (RuntimeEnabledFeatures::WebVREnabledByRuntimeFlag())
    return true;

  const OriginTrialContext* context = OriginTrialContext::From(executionContext);
  if (!context) return false;
  if (context->IsTrialEnabled(kWebVRTrialName))
    return true;
  return false;
}


bool OriginTrials::webXREnabled(const ExecutionContext* executionContext) {
  if (RuntimeEnabledFeatures::WebXREnabledByRuntimeFlag())
    return true;

  const OriginTrialContext* context = OriginTrialContext::From(executionContext);
  if (!context) return false;
  if (context->IsTrialEnabled(kWebXRTrialName))
    return true;
  return false;
}


bool OriginTrials::webXRGamepadSupportEnabled(const ExecutionContext* executionContext) {
  if (RuntimeEnabledFeatures::WebXRGamepadSupportEnabledByRuntimeFlag())
    return true;

  const OriginTrialContext* context = OriginTrialContext::From(executionContext);
  if (!context) return false;
  if (context->IsTrialEnabled(kWebXRGamepadSupportTrialName))
    return true;
  // TODO(crbug.com/831346): This check should be redundant with
  // GetImpliedTrials() being checked in OriginTrialContext::EnableTrialFromToken().
  // Remove when verified by further testing.
  if (context->IsTrialEnabled(kGamepadExtensionsTrialName))
    return true;
  return false;
}


Vector<AtomicString> OriginTrials::GetImpliedTrials(const String& trial_name) {
  if (trial_name == kOriginTrialsSampleAPITrialName) {
    Vector<AtomicString> implied_trials = {AtomicString(kOriginTrialsSampleAPIImpliedTrialName),};
    return implied_trials;
  }
  if (trial_name == kGamepadExtensionsTrialName) {
    Vector<AtomicString> implied_trials = {AtomicString(kWebXRGamepadSupportTrialName),};
    return implied_trials;
  }
  return Vector<AtomicString>();
}

} // namespace blink

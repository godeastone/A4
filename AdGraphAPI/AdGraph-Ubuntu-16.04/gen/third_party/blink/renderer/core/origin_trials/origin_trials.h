// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/origin_trials.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/platform/runtime_enabled_features.json5


#ifndef BLINK_CORE_ORIGIN_TRIALS_ORIGIN_TRIALS_H_
#define BLINK_CORE_ORIGIN_TRIALS_ORIGIN_TRIALS_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class ExecutionContext;

// A namespace with dynamic tests for experimental features which can be
// enabled by the origin trials framework via origin trial tokens.
namespace OriginTrials {

CORE_EXPORT extern const char kAnimationWorkletTrialName[];
CORE_EXPORT extern const char kBudgetQueryTrialName[];
CORE_EXPORT extern const char kDisableHardwareNoiseSuppressionTrialName[];
CORE_EXPORT extern const char kExperimentalHardwareEchoCancellationTrialName[];
CORE_EXPORT extern const char kGamepadExtensionsTrialName[];
CORE_EXPORT extern const char kInstalledAppTrialName[];
CORE_EXPORT extern const char kLowLatencyCanvasTrialName[];
CORE_EXPORT extern const char kMediaCapabilitiesTrialName[];
CORE_EXPORT extern const char kOriginTrialsSampleAPITrialName[];
CORE_EXPORT extern const char kOriginTrialsSampleAPIImpliedTrialName[];
CORE_EXPORT extern const char kPictureInPictureAPITrialName[];
CORE_EXPORT extern const char kRtcPeerConnectionIdTrialName[];
CORE_EXPORT extern const char kSensorTrialName[];
CORE_EXPORT extern const char kSignatureBasedIntegrityTrialName[];
CORE_EXPORT extern const char kTouchEventFeatureDetectionTrialName[];
CORE_EXPORT extern const char kWebLocksAPITrialName[];
CORE_EXPORT extern const char kWebRtcVaapiHWVP8EncodingTrialName[];
CORE_EXPORT extern const char kWebVRTrialName[];
CORE_EXPORT extern const char kWebXRTrialName[];
CORE_EXPORT extern const char kWebXRGamepadSupportTrialName[];

CORE_EXPORT bool animationWorkletEnabled(const ExecutionContext*);
CORE_EXPORT bool budgetQueryEnabled(const ExecutionContext*);
CORE_EXPORT bool disableHardwareNoiseSuppressionEnabled(const ExecutionContext*);
CORE_EXPORT bool experimentalHardwareEchoCancellationEnabled(const ExecutionContext*);
CORE_EXPORT bool gamepadExtensionsEnabled(const ExecutionContext*);
CORE_EXPORT bool installedAppEnabled(const ExecutionContext*);
CORE_EXPORT bool lowLatencyCanvasEnabled(const ExecutionContext*);
CORE_EXPORT bool mediaCapabilitiesEnabled(const ExecutionContext*);
CORE_EXPORT bool originTrialsSampleAPIEnabled(const ExecutionContext*);
CORE_EXPORT bool originTrialsSampleAPIImpliedEnabled(const ExecutionContext*);
CORE_EXPORT bool pictureInPictureAPIEnabled(const ExecutionContext*);
CORE_EXPORT bool rtcPeerConnectionIdEnabled(const ExecutionContext*);
CORE_EXPORT bool sensorEnabled(const ExecutionContext*);
CORE_EXPORT bool signatureBasedIntegrityEnabled(const ExecutionContext*);
CORE_EXPORT bool touchEventFeatureDetectionEnabled(const ExecutionContext*);
CORE_EXPORT bool webLocksAPIEnabled(const ExecutionContext*);
CORE_EXPORT bool webRtcVaapiHWVP8EncodingEnabled(const ExecutionContext*);
CORE_EXPORT bool webVREnabled(const ExecutionContext*);
CORE_EXPORT bool webXREnabled(const ExecutionContext*);
CORE_EXPORT bool webXRGamepadSupportEnabled(const ExecutionContext*);

CORE_EXPORT Vector<AtomicString> GetImpliedTrials(const String& trial_name);

} // namespace OriginTrials

} // namespace blink

#endif // BLINK_CORE_ORIGIN_TRIALS_ORIGIN_TRIALS_H_

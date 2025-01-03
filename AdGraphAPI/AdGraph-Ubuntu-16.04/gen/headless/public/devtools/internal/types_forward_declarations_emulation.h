// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_EMULATION_H_
#define HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_EMULATION_H_

#include "base/values.h"

namespace headless {

namespace emulation {
class ScreenOrientation;
class CanEmulateParams;
class CanEmulateResult;
class ClearDeviceMetricsOverrideParams;
class ClearDeviceMetricsOverrideResult;
class ClearGeolocationOverrideParams;
class ClearGeolocationOverrideResult;
class ResetPageScaleFactorParams;
class ResetPageScaleFactorResult;
class SetCPUThrottlingRateParams;
class SetCPUThrottlingRateResult;
class SetDefaultBackgroundColorOverrideParams;
class SetDefaultBackgroundColorOverrideResult;
class SetDeviceMetricsOverrideParams;
class SetDeviceMetricsOverrideResult;
class SetEmitTouchEventsForMouseParams;
class SetEmitTouchEventsForMouseResult;
class SetEmulatedMediaParams;
class SetEmulatedMediaResult;
class SetGeolocationOverrideParams;
class SetGeolocationOverrideResult;
class SetNavigatorOverridesParams;
class SetNavigatorOverridesResult;
class SetPageScaleFactorParams;
class SetPageScaleFactorResult;
class SetScriptExecutionDisabledParams;
class SetScriptExecutionDisabledResult;
class SetTouchEmulationEnabledParams;
class SetTouchEmulationEnabledResult;
class SetVirtualTimePolicyParams;
class SetVirtualTimePolicyResult;
class SetVisibleSizeParams;
class SetVisibleSizeResult;
class VirtualTimeAdvancedParams;
class VirtualTimeBudgetExpiredParams;
class VirtualTimePausedParams;

enum class VirtualTimePolicy {
  ADVANCE,
  PAUSE,
  PAUSE_IF_NETWORK_FETCHES_PENDING
};

enum class ScreenOrientationType {
  PORTRAIT_PRIMARY,
  PORTRAIT_SECONDARY,
  LANDSCAPE_PRIMARY,
  LANDSCAPE_SECONDARY
};

enum class SetEmitTouchEventsForMouseConfiguration {
  MOBILE,
  DESKTOP
};

}  // namespace emulation

}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_EMULATION_H_

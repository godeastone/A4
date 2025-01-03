// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_EMULATION_H_
#define HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_EMULATION_H_

#include "headless/public/devtools/domains/types_emulation.h"
#include "headless/public/internal/value_conversions.h"

namespace headless {
namespace internal {


template <>
struct FromValue<emulation::ScreenOrientation> {
  static std::unique_ptr<emulation::ScreenOrientation> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::ScreenOrientation::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::ScreenOrientation& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<emulation::VirtualTimePolicy> {
  static emulation::VirtualTimePolicy Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return emulation::VirtualTimePolicy::ADVANCE;
    }
    if (value.GetString() == "advance")
      return emulation::VirtualTimePolicy::ADVANCE;
    if (value.GetString() == "pause")
      return emulation::VirtualTimePolicy::PAUSE;
    if (value.GetString() == "pauseIfNetworkFetchesPending")
      return emulation::VirtualTimePolicy::PAUSE_IF_NETWORK_FETCHES_PENDING;
    errors->AddError("invalid enum value");
    return emulation::VirtualTimePolicy::ADVANCE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::VirtualTimePolicy& value, T*) {
  switch (value) {
    case emulation::VirtualTimePolicy::ADVANCE:
      return std::make_unique<base::Value>("advance");
    case emulation::VirtualTimePolicy::PAUSE:
      return std::make_unique<base::Value>("pause");
    case emulation::VirtualTimePolicy::PAUSE_IF_NETWORK_FETCHES_PENDING:
      return std::make_unique<base::Value>("pauseIfNetworkFetchesPending");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<emulation::ScreenOrientationType> {
  static emulation::ScreenOrientationType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return emulation::ScreenOrientationType::PORTRAIT_PRIMARY;
    }
    if (value.GetString() == "portraitPrimary")
      return emulation::ScreenOrientationType::PORTRAIT_PRIMARY;
    if (value.GetString() == "portraitSecondary")
      return emulation::ScreenOrientationType::PORTRAIT_SECONDARY;
    if (value.GetString() == "landscapePrimary")
      return emulation::ScreenOrientationType::LANDSCAPE_PRIMARY;
    if (value.GetString() == "landscapeSecondary")
      return emulation::ScreenOrientationType::LANDSCAPE_SECONDARY;
    errors->AddError("invalid enum value");
    return emulation::ScreenOrientationType::PORTRAIT_PRIMARY;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::ScreenOrientationType& value, T*) {
  switch (value) {
    case emulation::ScreenOrientationType::PORTRAIT_PRIMARY:
      return std::make_unique<base::Value>("portraitPrimary");
    case emulation::ScreenOrientationType::PORTRAIT_SECONDARY:
      return std::make_unique<base::Value>("portraitSecondary");
    case emulation::ScreenOrientationType::LANDSCAPE_PRIMARY:
      return std::make_unique<base::Value>("landscapePrimary");
    case emulation::ScreenOrientationType::LANDSCAPE_SECONDARY:
      return std::make_unique<base::Value>("landscapeSecondary");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<emulation::CanEmulateParams> {
  static std::unique_ptr<emulation::CanEmulateParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::CanEmulateParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::CanEmulateParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::CanEmulateResult> {
  static std::unique_ptr<emulation::CanEmulateResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::CanEmulateResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::CanEmulateResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::ClearDeviceMetricsOverrideParams> {
  static std::unique_ptr<emulation::ClearDeviceMetricsOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::ClearDeviceMetricsOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::ClearDeviceMetricsOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::ClearDeviceMetricsOverrideResult> {
  static std::unique_ptr<emulation::ClearDeviceMetricsOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::ClearDeviceMetricsOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::ClearDeviceMetricsOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::ClearGeolocationOverrideParams> {
  static std::unique_ptr<emulation::ClearGeolocationOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::ClearGeolocationOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::ClearGeolocationOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::ClearGeolocationOverrideResult> {
  static std::unique_ptr<emulation::ClearGeolocationOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::ClearGeolocationOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::ClearGeolocationOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::ResetPageScaleFactorParams> {
  static std::unique_ptr<emulation::ResetPageScaleFactorParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::ResetPageScaleFactorParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::ResetPageScaleFactorParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::ResetPageScaleFactorResult> {
  static std::unique_ptr<emulation::ResetPageScaleFactorResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::ResetPageScaleFactorResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::ResetPageScaleFactorResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetCPUThrottlingRateParams> {
  static std::unique_ptr<emulation::SetCPUThrottlingRateParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetCPUThrottlingRateParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetCPUThrottlingRateParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetCPUThrottlingRateResult> {
  static std::unique_ptr<emulation::SetCPUThrottlingRateResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetCPUThrottlingRateResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetCPUThrottlingRateResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetDefaultBackgroundColorOverrideParams> {
  static std::unique_ptr<emulation::SetDefaultBackgroundColorOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetDefaultBackgroundColorOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetDefaultBackgroundColorOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetDefaultBackgroundColorOverrideResult> {
  static std::unique_ptr<emulation::SetDefaultBackgroundColorOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetDefaultBackgroundColorOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetDefaultBackgroundColorOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetDeviceMetricsOverrideParams> {
  static std::unique_ptr<emulation::SetDeviceMetricsOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetDeviceMetricsOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetDeviceMetricsOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetDeviceMetricsOverrideResult> {
  static std::unique_ptr<emulation::SetDeviceMetricsOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetDeviceMetricsOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetDeviceMetricsOverrideResult& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<emulation::SetEmitTouchEventsForMouseConfiguration> {
  static emulation::SetEmitTouchEventsForMouseConfiguration Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return emulation::SetEmitTouchEventsForMouseConfiguration::MOBILE;
    }
    if (value.GetString() == "mobile")
      return emulation::SetEmitTouchEventsForMouseConfiguration::MOBILE;
    if (value.GetString() == "desktop")
      return emulation::SetEmitTouchEventsForMouseConfiguration::DESKTOP;
    errors->AddError("invalid enum value");
    return emulation::SetEmitTouchEventsForMouseConfiguration::MOBILE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetEmitTouchEventsForMouseConfiguration& value, T*) {
  switch (value) {
    case emulation::SetEmitTouchEventsForMouseConfiguration::MOBILE:
      return std::make_unique<base::Value>("mobile");
    case emulation::SetEmitTouchEventsForMouseConfiguration::DESKTOP:
      return std::make_unique<base::Value>("desktop");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<emulation::SetEmitTouchEventsForMouseParams> {
  static std::unique_ptr<emulation::SetEmitTouchEventsForMouseParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetEmitTouchEventsForMouseParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetEmitTouchEventsForMouseParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetEmitTouchEventsForMouseResult> {
  static std::unique_ptr<emulation::SetEmitTouchEventsForMouseResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetEmitTouchEventsForMouseResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetEmitTouchEventsForMouseResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetEmulatedMediaParams> {
  static std::unique_ptr<emulation::SetEmulatedMediaParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetEmulatedMediaParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetEmulatedMediaParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetEmulatedMediaResult> {
  static std::unique_ptr<emulation::SetEmulatedMediaResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetEmulatedMediaResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetEmulatedMediaResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetGeolocationOverrideParams> {
  static std::unique_ptr<emulation::SetGeolocationOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetGeolocationOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetGeolocationOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetGeolocationOverrideResult> {
  static std::unique_ptr<emulation::SetGeolocationOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetGeolocationOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetGeolocationOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetNavigatorOverridesParams> {
  static std::unique_ptr<emulation::SetNavigatorOverridesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetNavigatorOverridesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetNavigatorOverridesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetNavigatorOverridesResult> {
  static std::unique_ptr<emulation::SetNavigatorOverridesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetNavigatorOverridesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetNavigatorOverridesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetPageScaleFactorParams> {
  static std::unique_ptr<emulation::SetPageScaleFactorParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetPageScaleFactorParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetPageScaleFactorParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetPageScaleFactorResult> {
  static std::unique_ptr<emulation::SetPageScaleFactorResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetPageScaleFactorResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetPageScaleFactorResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetScriptExecutionDisabledParams> {
  static std::unique_ptr<emulation::SetScriptExecutionDisabledParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetScriptExecutionDisabledParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetScriptExecutionDisabledParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetScriptExecutionDisabledResult> {
  static std::unique_ptr<emulation::SetScriptExecutionDisabledResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetScriptExecutionDisabledResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetScriptExecutionDisabledResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetTouchEmulationEnabledParams> {
  static std::unique_ptr<emulation::SetTouchEmulationEnabledParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetTouchEmulationEnabledParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetTouchEmulationEnabledParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetTouchEmulationEnabledResult> {
  static std::unique_ptr<emulation::SetTouchEmulationEnabledResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetTouchEmulationEnabledResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetTouchEmulationEnabledResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetVirtualTimePolicyParams> {
  static std::unique_ptr<emulation::SetVirtualTimePolicyParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetVirtualTimePolicyParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetVirtualTimePolicyParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetVirtualTimePolicyResult> {
  static std::unique_ptr<emulation::SetVirtualTimePolicyResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetVirtualTimePolicyResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetVirtualTimePolicyResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetVisibleSizeParams> {
  static std::unique_ptr<emulation::SetVisibleSizeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetVisibleSizeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetVisibleSizeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::SetVisibleSizeResult> {
  static std::unique_ptr<emulation::SetVisibleSizeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::SetVisibleSizeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::SetVisibleSizeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::VirtualTimeAdvancedParams> {
  static std::unique_ptr<emulation::VirtualTimeAdvancedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::VirtualTimeAdvancedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::VirtualTimeAdvancedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::VirtualTimeBudgetExpiredParams> {
  static std::unique_ptr<emulation::VirtualTimeBudgetExpiredParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::VirtualTimeBudgetExpiredParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::VirtualTimeBudgetExpiredParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<emulation::VirtualTimePausedParams> {
  static std::unique_ptr<emulation::VirtualTimePausedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return emulation::VirtualTimePausedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const emulation::VirtualTimePausedParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_EMULATION_H_

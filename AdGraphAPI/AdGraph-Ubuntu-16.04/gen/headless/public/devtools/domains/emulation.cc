// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "headless/public/devtools/domains/emulation.h"

#include "base/bind.h"
#include "headless/public/util/error_reporter.h"

namespace headless {

namespace emulation {

ExperimentalDomain* Domain::GetExperimental() {
  return static_cast<ExperimentalDomain*>(this);
}

void Domain::AddObserver(Observer* observer) {
  RegisterEventHandlersIfNeeded();
  observers_.AddObserver(observer);
}

void Domain::RemoveObserver(Observer* observer) {
  observers_.RemoveObserver(observer);
}

void Domain::RegisterEventHandlersIfNeeded() {
  if (event_handlers_registered_)
    return;
  event_handlers_registered_ = true;
  dispatcher_->RegisterEventHandler(
      "Emulation.virtualTimeAdvanced",
      base::BindRepeating(&Domain::DispatchVirtualTimeAdvancedEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Emulation.virtualTimeBudgetExpired",
      base::BindRepeating(&Domain::DispatchVirtualTimeBudgetExpiredEvent,
                          base::Unretained(this)));
  dispatcher_->RegisterEventHandler(
      "Emulation.virtualTimePaused",
      base::BindRepeating(&Domain::DispatchVirtualTimePausedEvent,
                          base::Unretained(this)));
}


void Domain::CanEmulate(std::unique_ptr<CanEmulateParams> params, base::OnceCallback<void(std::unique_ptr<CanEmulateResult>)> callback) {
  dispatcher_->SendMessage("Emulation.canEmulate", params->Serialize(), base::BindOnce(&Domain::HandleCanEmulateResponse, std::move(callback)));
}

void Domain::CanEmulate(base::OnceCallback<void(std::unique_ptr<CanEmulateResult>)> callback) {
  std::unique_ptr<CanEmulateParams> params = CanEmulateParams::Builder()
      .Build();
dispatcher_->SendMessage("Emulation.canEmulate", params->Serialize(), base::BindOnce(&Domain::HandleCanEmulateResponse, std::move(callback)));
}

void Domain::ClearDeviceMetricsOverride(std::unique_ptr<ClearDeviceMetricsOverrideParams> params, base::OnceCallback<void(std::unique_ptr<ClearDeviceMetricsOverrideResult>)> callback) {
  dispatcher_->SendMessage("Emulation.clearDeviceMetricsOverride", params->Serialize(), base::BindOnce(&Domain::HandleClearDeviceMetricsOverrideResponse, std::move(callback)));
}

void Domain::ClearDeviceMetricsOverride(base::OnceClosure callback) {
  std::unique_ptr<ClearDeviceMetricsOverrideParams> params = ClearDeviceMetricsOverrideParams::Builder()
      .Build();
  dispatcher_->SendMessage("Emulation.clearDeviceMetricsOverride", params->Serialize(), std::move(callback));
}
void Domain::ClearDeviceMetricsOverride(std::unique_ptr<ClearDeviceMetricsOverrideParams> params, base::OnceClosure callback) {
  dispatcher_->SendMessage("Emulation.clearDeviceMetricsOverride", params->Serialize(), std::move(callback));
}

void Domain::ClearGeolocationOverride(std::unique_ptr<ClearGeolocationOverrideParams> params, base::OnceCallback<void(std::unique_ptr<ClearGeolocationOverrideResult>)> callback) {
  dispatcher_->SendMessage("Emulation.clearGeolocationOverride", params->Serialize(), base::BindOnce(&Domain::HandleClearGeolocationOverrideResponse, std::move(callback)));
}

void Domain::ClearGeolocationOverride(base::OnceClosure callback) {
  std::unique_ptr<ClearGeolocationOverrideParams> params = ClearGeolocationOverrideParams::Builder()
      .Build();
  dispatcher_->SendMessage("Emulation.clearGeolocationOverride", params->Serialize(), std::move(callback));
}
void Domain::ClearGeolocationOverride(std::unique_ptr<ClearGeolocationOverrideParams> params, base::OnceClosure callback) {
  dispatcher_->SendMessage("Emulation.clearGeolocationOverride", params->Serialize(), std::move(callback));
}

void ExperimentalDomain::ResetPageScaleFactor(std::unique_ptr<ResetPageScaleFactorParams> params, base::OnceCallback<void(std::unique_ptr<ResetPageScaleFactorResult>)> callback) {
  dispatcher_->SendMessage("Emulation.resetPageScaleFactor", params->Serialize(), base::BindOnce(&Domain::HandleResetPageScaleFactorResponse, std::move(callback)));
}

void ExperimentalDomain::SetCPUThrottlingRate(std::unique_ptr<SetCPUThrottlingRateParams> params, base::OnceCallback<void(std::unique_ptr<SetCPUThrottlingRateResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setCPUThrottlingRate", params->Serialize(), base::BindOnce(&Domain::HandleSetCPUThrottlingRateResponse, std::move(callback)));
}

void Domain::SetDefaultBackgroundColorOverride(std::unique_ptr<SetDefaultBackgroundColorOverrideParams> params, base::OnceCallback<void(std::unique_ptr<SetDefaultBackgroundColorOverrideResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setDefaultBackgroundColorOverride", params->Serialize(), base::BindOnce(&Domain::HandleSetDefaultBackgroundColorOverrideResponse, std::move(callback)));
}

void Domain::SetDefaultBackgroundColorOverride(base::OnceClosure callback) {
  std::unique_ptr<SetDefaultBackgroundColorOverrideParams> params = SetDefaultBackgroundColorOverrideParams::Builder()
      .Build();
  dispatcher_->SendMessage("Emulation.setDefaultBackgroundColorOverride", params->Serialize(), std::move(callback));
}
void Domain::SetDefaultBackgroundColorOverride(std::unique_ptr<SetDefaultBackgroundColorOverrideParams> params, base::OnceClosure callback) {
  dispatcher_->SendMessage("Emulation.setDefaultBackgroundColorOverride", params->Serialize(), std::move(callback));
}

void Domain::SetDeviceMetricsOverride(std::unique_ptr<SetDeviceMetricsOverrideParams> params, base::OnceCallback<void(std::unique_ptr<SetDeviceMetricsOverrideResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setDeviceMetricsOverride", params->Serialize(), base::BindOnce(&Domain::HandleSetDeviceMetricsOverrideResponse, std::move(callback)));
}

void Domain::SetDeviceMetricsOverride(int width, int height, double device_scale_factor, bool mobile, base::OnceClosure callback) {
  std::unique_ptr<SetDeviceMetricsOverrideParams> params = SetDeviceMetricsOverrideParams::Builder()
      .SetWidth(std::move(width))
      .SetHeight(std::move(height))
      .SetDeviceScaleFactor(std::move(device_scale_factor))
      .SetMobile(std::move(mobile))
      .Build();
  dispatcher_->SendMessage("Emulation.setDeviceMetricsOverride", params->Serialize(), std::move(callback));
}
void Domain::SetDeviceMetricsOverride(std::unique_ptr<SetDeviceMetricsOverrideParams> params, base::OnceClosure callback) {
  dispatcher_->SendMessage("Emulation.setDeviceMetricsOverride", params->Serialize(), std::move(callback));
}

void ExperimentalDomain::SetEmitTouchEventsForMouse(std::unique_ptr<SetEmitTouchEventsForMouseParams> params, base::OnceCallback<void(std::unique_ptr<SetEmitTouchEventsForMouseResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setEmitTouchEventsForMouse", params->Serialize(), base::BindOnce(&Domain::HandleSetEmitTouchEventsForMouseResponse, std::move(callback)));
}

void Domain::SetEmulatedMedia(std::unique_ptr<SetEmulatedMediaParams> params, base::OnceCallback<void(std::unique_ptr<SetEmulatedMediaResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setEmulatedMedia", params->Serialize(), base::BindOnce(&Domain::HandleSetEmulatedMediaResponse, std::move(callback)));
}

void Domain::SetEmulatedMedia(const std::string& media, base::OnceClosure callback) {
  std::unique_ptr<SetEmulatedMediaParams> params = SetEmulatedMediaParams::Builder()
      .SetMedia(std::move(media))
      .Build();
  dispatcher_->SendMessage("Emulation.setEmulatedMedia", params->Serialize(), std::move(callback));
}
void Domain::SetEmulatedMedia(std::unique_ptr<SetEmulatedMediaParams> params, base::OnceClosure callback) {
  dispatcher_->SendMessage("Emulation.setEmulatedMedia", params->Serialize(), std::move(callback));
}

void Domain::SetGeolocationOverride(std::unique_ptr<SetGeolocationOverrideParams> params, base::OnceCallback<void(std::unique_ptr<SetGeolocationOverrideResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setGeolocationOverride", params->Serialize(), base::BindOnce(&Domain::HandleSetGeolocationOverrideResponse, std::move(callback)));
}

void Domain::SetGeolocationOverride(base::OnceClosure callback) {
  std::unique_ptr<SetGeolocationOverrideParams> params = SetGeolocationOverrideParams::Builder()
      .Build();
  dispatcher_->SendMessage("Emulation.setGeolocationOverride", params->Serialize(), std::move(callback));
}
void Domain::SetGeolocationOverride(std::unique_ptr<SetGeolocationOverrideParams> params, base::OnceClosure callback) {
  dispatcher_->SendMessage("Emulation.setGeolocationOverride", params->Serialize(), std::move(callback));
}

void ExperimentalDomain::SetNavigatorOverrides(std::unique_ptr<SetNavigatorOverridesParams> params, base::OnceCallback<void(std::unique_ptr<SetNavigatorOverridesResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setNavigatorOverrides", params->Serialize(), base::BindOnce(&Domain::HandleSetNavigatorOverridesResponse, std::move(callback)));
}

void ExperimentalDomain::SetPageScaleFactor(std::unique_ptr<SetPageScaleFactorParams> params, base::OnceCallback<void(std::unique_ptr<SetPageScaleFactorResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setPageScaleFactor", params->Serialize(), base::BindOnce(&Domain::HandleSetPageScaleFactorResponse, std::move(callback)));
}

void Domain::SetScriptExecutionDisabled(std::unique_ptr<SetScriptExecutionDisabledParams> params, base::OnceCallback<void(std::unique_ptr<SetScriptExecutionDisabledResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setScriptExecutionDisabled", params->Serialize(), base::BindOnce(&Domain::HandleSetScriptExecutionDisabledResponse, std::move(callback)));
}

void Domain::SetScriptExecutionDisabled(bool value, base::OnceClosure callback) {
  std::unique_ptr<SetScriptExecutionDisabledParams> params = SetScriptExecutionDisabledParams::Builder()
      .SetValue(std::move(value))
      .Build();
  dispatcher_->SendMessage("Emulation.setScriptExecutionDisabled", params->Serialize(), std::move(callback));
}
void Domain::SetScriptExecutionDisabled(std::unique_ptr<SetScriptExecutionDisabledParams> params, base::OnceClosure callback) {
  dispatcher_->SendMessage("Emulation.setScriptExecutionDisabled", params->Serialize(), std::move(callback));
}

void Domain::SetTouchEmulationEnabled(std::unique_ptr<SetTouchEmulationEnabledParams> params, base::OnceCallback<void(std::unique_ptr<SetTouchEmulationEnabledResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setTouchEmulationEnabled", params->Serialize(), base::BindOnce(&Domain::HandleSetTouchEmulationEnabledResponse, std::move(callback)));
}

void Domain::SetTouchEmulationEnabled(bool enabled, base::OnceClosure callback) {
  std::unique_ptr<SetTouchEmulationEnabledParams> params = SetTouchEmulationEnabledParams::Builder()
      .SetEnabled(std::move(enabled))
      .Build();
  dispatcher_->SendMessage("Emulation.setTouchEmulationEnabled", params->Serialize(), std::move(callback));
}
void Domain::SetTouchEmulationEnabled(std::unique_ptr<SetTouchEmulationEnabledParams> params, base::OnceClosure callback) {
  dispatcher_->SendMessage("Emulation.setTouchEmulationEnabled", params->Serialize(), std::move(callback));
}

void ExperimentalDomain::SetVirtualTimePolicy(std::unique_ptr<SetVirtualTimePolicyParams> params, base::OnceCallback<void(std::unique_ptr<SetVirtualTimePolicyResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setVirtualTimePolicy", params->Serialize(), base::BindOnce(&Domain::HandleSetVirtualTimePolicyResponse, std::move(callback)));
}

void ExperimentalDomain::SetVisibleSize(std::unique_ptr<SetVisibleSizeParams> params, base::OnceCallback<void(std::unique_ptr<SetVisibleSizeResult>)> callback) {
  dispatcher_->SendMessage("Emulation.setVisibleSize", params->Serialize(), base::BindOnce(&Domain::HandleSetVisibleSizeResponse, std::move(callback)));
}


// static
void Domain::HandleCanEmulateResponse(base::OnceCallback<void(std::unique_ptr<CanEmulateResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<CanEmulateResult> result = CanEmulateResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleClearDeviceMetricsOverrideResponse(base::OnceCallback<void(std::unique_ptr<ClearDeviceMetricsOverrideResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<ClearDeviceMetricsOverrideResult> result = ClearDeviceMetricsOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleClearGeolocationOverrideResponse(base::OnceCallback<void(std::unique_ptr<ClearGeolocationOverrideResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<ClearGeolocationOverrideResult> result = ClearGeolocationOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleResetPageScaleFactorResponse(base::OnceCallback<void(std::unique_ptr<ResetPageScaleFactorResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<ResetPageScaleFactorResult> result = ResetPageScaleFactorResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetCPUThrottlingRateResponse(base::OnceCallback<void(std::unique_ptr<SetCPUThrottlingRateResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetCPUThrottlingRateResult> result = SetCPUThrottlingRateResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetDefaultBackgroundColorOverrideResponse(base::OnceCallback<void(std::unique_ptr<SetDefaultBackgroundColorOverrideResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetDefaultBackgroundColorOverrideResult> result = SetDefaultBackgroundColorOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetDeviceMetricsOverrideResponse(base::OnceCallback<void(std::unique_ptr<SetDeviceMetricsOverrideResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetDeviceMetricsOverrideResult> result = SetDeviceMetricsOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetEmitTouchEventsForMouseResponse(base::OnceCallback<void(std::unique_ptr<SetEmitTouchEventsForMouseResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetEmitTouchEventsForMouseResult> result = SetEmitTouchEventsForMouseResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetEmulatedMediaResponse(base::OnceCallback<void(std::unique_ptr<SetEmulatedMediaResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetEmulatedMediaResult> result = SetEmulatedMediaResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetGeolocationOverrideResponse(base::OnceCallback<void(std::unique_ptr<SetGeolocationOverrideResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetGeolocationOverrideResult> result = SetGeolocationOverrideResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetNavigatorOverridesResponse(base::OnceCallback<void(std::unique_ptr<SetNavigatorOverridesResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetNavigatorOverridesResult> result = SetNavigatorOverridesResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetPageScaleFactorResponse(base::OnceCallback<void(std::unique_ptr<SetPageScaleFactorResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetPageScaleFactorResult> result = SetPageScaleFactorResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetScriptExecutionDisabledResponse(base::OnceCallback<void(std::unique_ptr<SetScriptExecutionDisabledResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetScriptExecutionDisabledResult> result = SetScriptExecutionDisabledResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetTouchEmulationEnabledResponse(base::OnceCallback<void(std::unique_ptr<SetTouchEmulationEnabledResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetTouchEmulationEnabledResult> result = SetTouchEmulationEnabledResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetVirtualTimePolicyResponse(base::OnceCallback<void(std::unique_ptr<SetVirtualTimePolicyResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetVirtualTimePolicyResult> result = SetVirtualTimePolicyResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetVisibleSizeResponse(base::OnceCallback<void(std::unique_ptr<SetVisibleSizeResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetVisibleSizeResult> result = SetVisibleSizeResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

void Domain::DispatchVirtualTimeAdvancedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<VirtualTimeAdvancedParams> parsed_params(VirtualTimeAdvancedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnVirtualTimeAdvanced(*parsed_params);
  }
}

void Domain::DispatchVirtualTimeBudgetExpiredEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<VirtualTimeBudgetExpiredParams> parsed_params(VirtualTimeBudgetExpiredParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnVirtualTimeBudgetExpired(*parsed_params);
  }
}

void Domain::DispatchVirtualTimePausedEvent(const base::Value& params) {
  ErrorReporter errors;
  std::unique_ptr<VirtualTimePausedParams> parsed_params(VirtualTimePausedParams::Parse(params, &errors));
  DCHECK(!errors.HasErrors()) << errors.ToString();
  for (ExperimentalObserver& observer : observers_) {
    observer.OnVirtualTimePaused(*parsed_params);
  }
}

Domain::Domain(internal::MessageDispatcher* dispatcher)
    : dispatcher_(dispatcher) {
}

Domain::~Domain() {}

ExperimentalDomain::ExperimentalDomain(internal::MessageDispatcher* dispatcher)
    : Domain(dispatcher) {}

ExperimentalDomain::~ExperimentalDomain() {}

void ExperimentalDomain::AddObserver(ExperimentalObserver* observer) {
  RegisterEventHandlersIfNeeded();
  observers_.AddObserver(observer);
}

void ExperimentalDomain::RemoveObserver(ExperimentalObserver* observer) {
  observers_.RemoveObserver(observer);
}

}  // namespace emulation

} // namespace headless

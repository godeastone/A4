// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "headless/public/devtools/domains/types_dom.h"
#include "headless/public/devtools/domains/types_debugger.h"
#include "headless/public/devtools/domains/types_emulation.h"
#include "headless/public/devtools/domains/types_io.h"
#include "headless/public/devtools/domains/types_network.h"
#include "headless/public/devtools/domains/types_page.h"
#include "headless/public/devtools/domains/types_runtime.h"
#include "headless/public/devtools/domains/types_security.h"

#include "base/memory/ptr_util.h"
#include "headless/public/devtools/internal/type_conversions_dom.h"
#include "headless/public/devtools/internal/type_conversions_debugger.h"
#include "headless/public/devtools/internal/type_conversions_emulation.h"
#include "headless/public/devtools/internal/type_conversions_io.h"
#include "headless/public/devtools/internal/type_conversions_network.h"
#include "headless/public/devtools/internal/type_conversions_page.h"
#include "headless/public/devtools/internal/type_conversions_runtime.h"
#include "headless/public/devtools/internal/type_conversions_security.h"

namespace headless {

namespace internal {

template <typename T>
std::unique_ptr<base::Value> ToValue(const T& value) {
  return ToValueImpl(value, static_cast<T*>(nullptr));
}

}  // namespace internal

namespace emulation {

std::unique_ptr<ScreenOrientation> ScreenOrientation::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("ScreenOrientation");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<ScreenOrientation> result(new ScreenOrientation());
  errors->Push();
  errors->SetName("ScreenOrientation");
  const base::Value* type_value = value.FindKey("type");
  if (type_value) {
    errors->SetName("type");
    result->type_ = internal::FromValue<::headless::emulation::ScreenOrientationType>::Parse(*type_value, errors);
  } else {
    errors->AddError("required property missing: type");
  }
  const base::Value* angle_value = value.FindKey("angle");
  if (angle_value) {
    errors->SetName("angle");
    result->angle_ = internal::FromValue<int>::Parse(*angle_value, errors);
  } else {
    errors->AddError("required property missing: angle");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> ScreenOrientation::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("type", internal::ToValue(type_));
  result->Set("angle", internal::ToValue(angle_));
  return std::move(result);
}

std::unique_ptr<ScreenOrientation> ScreenOrientation::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<ScreenOrientation> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<CanEmulateParams> CanEmulateParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("CanEmulateParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<CanEmulateParams> result(new CanEmulateParams());
  errors->Push();
  errors->SetName("CanEmulateParams");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> CanEmulateParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<CanEmulateParams> CanEmulateParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<CanEmulateParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<CanEmulateResult> CanEmulateResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("CanEmulateResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<CanEmulateResult> result(new CanEmulateResult());
  errors->Push();
  errors->SetName("CanEmulateResult");
  const base::Value* result_value = value.FindKey("result");
  if (result_value) {
    errors->SetName("result");
    result->result_ = internal::FromValue<bool>::Parse(*result_value, errors);
  } else {
    errors->AddError("required property missing: result");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> CanEmulateResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("result", internal::ToValue(result_));
  return std::move(result);
}

std::unique_ptr<CanEmulateResult> CanEmulateResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<CanEmulateResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<ClearDeviceMetricsOverrideParams> ClearDeviceMetricsOverrideParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("ClearDeviceMetricsOverrideParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<ClearDeviceMetricsOverrideParams> result(new ClearDeviceMetricsOverrideParams());
  errors->Push();
  errors->SetName("ClearDeviceMetricsOverrideParams");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> ClearDeviceMetricsOverrideParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<ClearDeviceMetricsOverrideParams> ClearDeviceMetricsOverrideParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<ClearDeviceMetricsOverrideParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<ClearDeviceMetricsOverrideResult> ClearDeviceMetricsOverrideResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("ClearDeviceMetricsOverrideResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<ClearDeviceMetricsOverrideResult> result(new ClearDeviceMetricsOverrideResult());
  errors->Push();
  errors->SetName("ClearDeviceMetricsOverrideResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> ClearDeviceMetricsOverrideResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<ClearDeviceMetricsOverrideResult> ClearDeviceMetricsOverrideResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<ClearDeviceMetricsOverrideResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<ClearGeolocationOverrideParams> ClearGeolocationOverrideParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("ClearGeolocationOverrideParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<ClearGeolocationOverrideParams> result(new ClearGeolocationOverrideParams());
  errors->Push();
  errors->SetName("ClearGeolocationOverrideParams");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> ClearGeolocationOverrideParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<ClearGeolocationOverrideParams> ClearGeolocationOverrideParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<ClearGeolocationOverrideParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<ClearGeolocationOverrideResult> ClearGeolocationOverrideResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("ClearGeolocationOverrideResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<ClearGeolocationOverrideResult> result(new ClearGeolocationOverrideResult());
  errors->Push();
  errors->SetName("ClearGeolocationOverrideResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> ClearGeolocationOverrideResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<ClearGeolocationOverrideResult> ClearGeolocationOverrideResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<ClearGeolocationOverrideResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<ResetPageScaleFactorParams> ResetPageScaleFactorParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("ResetPageScaleFactorParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<ResetPageScaleFactorParams> result(new ResetPageScaleFactorParams());
  errors->Push();
  errors->SetName("ResetPageScaleFactorParams");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> ResetPageScaleFactorParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<ResetPageScaleFactorParams> ResetPageScaleFactorParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<ResetPageScaleFactorParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<ResetPageScaleFactorResult> ResetPageScaleFactorResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("ResetPageScaleFactorResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<ResetPageScaleFactorResult> result(new ResetPageScaleFactorResult());
  errors->Push();
  errors->SetName("ResetPageScaleFactorResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> ResetPageScaleFactorResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<ResetPageScaleFactorResult> ResetPageScaleFactorResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<ResetPageScaleFactorResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetCPUThrottlingRateParams> SetCPUThrottlingRateParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetCPUThrottlingRateParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetCPUThrottlingRateParams> result(new SetCPUThrottlingRateParams());
  errors->Push();
  errors->SetName("SetCPUThrottlingRateParams");
  const base::Value* rate_value = value.FindKey("rate");
  if (rate_value) {
    errors->SetName("rate");
    result->rate_ = internal::FromValue<double>::Parse(*rate_value, errors);
  } else {
    errors->AddError("required property missing: rate");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetCPUThrottlingRateParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("rate", internal::ToValue(rate_));
  return std::move(result);
}

std::unique_ptr<SetCPUThrottlingRateParams> SetCPUThrottlingRateParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetCPUThrottlingRateParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetCPUThrottlingRateResult> SetCPUThrottlingRateResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetCPUThrottlingRateResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetCPUThrottlingRateResult> result(new SetCPUThrottlingRateResult());
  errors->Push();
  errors->SetName("SetCPUThrottlingRateResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetCPUThrottlingRateResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetCPUThrottlingRateResult> SetCPUThrottlingRateResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetCPUThrottlingRateResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetDefaultBackgroundColorOverrideParams> SetDefaultBackgroundColorOverrideParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetDefaultBackgroundColorOverrideParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetDefaultBackgroundColorOverrideParams> result(new SetDefaultBackgroundColorOverrideParams());
  errors->Push();
  errors->SetName("SetDefaultBackgroundColorOverrideParams");
  const base::Value* color_value = value.FindKey("color");
  if (color_value) {
    errors->SetName("color");
    result->color_ = internal::FromValue<::headless::dom::RGBA>::Parse(*color_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetDefaultBackgroundColorOverrideParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  if (color_)
    result->Set("color", internal::ToValue(*color_.value()));
  return std::move(result);
}

std::unique_ptr<SetDefaultBackgroundColorOverrideParams> SetDefaultBackgroundColorOverrideParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetDefaultBackgroundColorOverrideParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetDefaultBackgroundColorOverrideResult> SetDefaultBackgroundColorOverrideResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetDefaultBackgroundColorOverrideResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetDefaultBackgroundColorOverrideResult> result(new SetDefaultBackgroundColorOverrideResult());
  errors->Push();
  errors->SetName("SetDefaultBackgroundColorOverrideResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetDefaultBackgroundColorOverrideResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetDefaultBackgroundColorOverrideResult> SetDefaultBackgroundColorOverrideResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetDefaultBackgroundColorOverrideResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetDeviceMetricsOverrideParams> SetDeviceMetricsOverrideParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetDeviceMetricsOverrideParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetDeviceMetricsOverrideParams> result(new SetDeviceMetricsOverrideParams());
  errors->Push();
  errors->SetName("SetDeviceMetricsOverrideParams");
  const base::Value* width_value = value.FindKey("width");
  if (width_value) {
    errors->SetName("width");
    result->width_ = internal::FromValue<int>::Parse(*width_value, errors);
  } else {
    errors->AddError("required property missing: width");
  }
  const base::Value* height_value = value.FindKey("height");
  if (height_value) {
    errors->SetName("height");
    result->height_ = internal::FromValue<int>::Parse(*height_value, errors);
  } else {
    errors->AddError("required property missing: height");
  }
  const base::Value* device_scale_factor_value = value.FindKey("deviceScaleFactor");
  if (device_scale_factor_value) {
    errors->SetName("deviceScaleFactor");
    result->device_scale_factor_ = internal::FromValue<double>::Parse(*device_scale_factor_value, errors);
  } else {
    errors->AddError("required property missing: deviceScaleFactor");
  }
  const base::Value* mobile_value = value.FindKey("mobile");
  if (mobile_value) {
    errors->SetName("mobile");
    result->mobile_ = internal::FromValue<bool>::Parse(*mobile_value, errors);
  } else {
    errors->AddError("required property missing: mobile");
  }
  const base::Value* scale_value = value.FindKey("scale");
  if (scale_value) {
    errors->SetName("scale");
    result->scale_ = internal::FromValue<double>::Parse(*scale_value, errors);
  }
  const base::Value* screen_width_value = value.FindKey("screenWidth");
  if (screen_width_value) {
    errors->SetName("screenWidth");
    result->screen_width_ = internal::FromValue<int>::Parse(*screen_width_value, errors);
  }
  const base::Value* screen_height_value = value.FindKey("screenHeight");
  if (screen_height_value) {
    errors->SetName("screenHeight");
    result->screen_height_ = internal::FromValue<int>::Parse(*screen_height_value, errors);
  }
  const base::Value* positionx_value = value.FindKey("positionX");
  if (positionx_value) {
    errors->SetName("positionX");
    result->positionx_ = internal::FromValue<int>::Parse(*positionx_value, errors);
  }
  const base::Value* positiony_value = value.FindKey("positionY");
  if (positiony_value) {
    errors->SetName("positionY");
    result->positiony_ = internal::FromValue<int>::Parse(*positiony_value, errors);
  }
  const base::Value* dont_set_visible_size_value = value.FindKey("dontSetVisibleSize");
  if (dont_set_visible_size_value) {
    errors->SetName("dontSetVisibleSize");
    result->dont_set_visible_size_ = internal::FromValue<bool>::Parse(*dont_set_visible_size_value, errors);
  }
  const base::Value* screen_orientation_value = value.FindKey("screenOrientation");
  if (screen_orientation_value) {
    errors->SetName("screenOrientation");
    result->screen_orientation_ = internal::FromValue<::headless::emulation::ScreenOrientation>::Parse(*screen_orientation_value, errors);
  }
  const base::Value* viewport_value = value.FindKey("viewport");
  if (viewport_value) {
    errors->SetName("viewport");
    result->viewport_ = internal::FromValue<::headless::page::Viewport>::Parse(*viewport_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetDeviceMetricsOverrideParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("width", internal::ToValue(width_));
  result->Set("height", internal::ToValue(height_));
  result->Set("deviceScaleFactor", internal::ToValue(device_scale_factor_));
  result->Set("mobile", internal::ToValue(mobile_));
  if (scale_)
    result->Set("scale", internal::ToValue(scale_.value()));
  if (screen_width_)
    result->Set("screenWidth", internal::ToValue(screen_width_.value()));
  if (screen_height_)
    result->Set("screenHeight", internal::ToValue(screen_height_.value()));
  if (positionx_)
    result->Set("positionX", internal::ToValue(positionx_.value()));
  if (positiony_)
    result->Set("positionY", internal::ToValue(positiony_.value()));
  if (dont_set_visible_size_)
    result->Set("dontSetVisibleSize", internal::ToValue(dont_set_visible_size_.value()));
  if (screen_orientation_)
    result->Set("screenOrientation", internal::ToValue(*screen_orientation_.value()));
  if (viewport_)
    result->Set("viewport", internal::ToValue(*viewport_.value()));
  return std::move(result);
}

std::unique_ptr<SetDeviceMetricsOverrideParams> SetDeviceMetricsOverrideParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetDeviceMetricsOverrideParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetDeviceMetricsOverrideResult> SetDeviceMetricsOverrideResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetDeviceMetricsOverrideResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetDeviceMetricsOverrideResult> result(new SetDeviceMetricsOverrideResult());
  errors->Push();
  errors->SetName("SetDeviceMetricsOverrideResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetDeviceMetricsOverrideResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetDeviceMetricsOverrideResult> SetDeviceMetricsOverrideResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetDeviceMetricsOverrideResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetEmitTouchEventsForMouseParams> SetEmitTouchEventsForMouseParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetEmitTouchEventsForMouseParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetEmitTouchEventsForMouseParams> result(new SetEmitTouchEventsForMouseParams());
  errors->Push();
  errors->SetName("SetEmitTouchEventsForMouseParams");
  const base::Value* enabled_value = value.FindKey("enabled");
  if (enabled_value) {
    errors->SetName("enabled");
    result->enabled_ = internal::FromValue<bool>::Parse(*enabled_value, errors);
  } else {
    errors->AddError("required property missing: enabled");
  }
  const base::Value* configuration_value = value.FindKey("configuration");
  if (configuration_value) {
    errors->SetName("configuration");
    result->configuration_ = internal::FromValue<::headless::emulation::SetEmitTouchEventsForMouseConfiguration>::Parse(*configuration_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetEmitTouchEventsForMouseParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("enabled", internal::ToValue(enabled_));
  if (configuration_)
    result->Set("configuration", internal::ToValue(configuration_.value()));
  return std::move(result);
}

std::unique_ptr<SetEmitTouchEventsForMouseParams> SetEmitTouchEventsForMouseParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetEmitTouchEventsForMouseParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetEmitTouchEventsForMouseResult> SetEmitTouchEventsForMouseResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetEmitTouchEventsForMouseResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetEmitTouchEventsForMouseResult> result(new SetEmitTouchEventsForMouseResult());
  errors->Push();
  errors->SetName("SetEmitTouchEventsForMouseResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetEmitTouchEventsForMouseResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetEmitTouchEventsForMouseResult> SetEmitTouchEventsForMouseResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetEmitTouchEventsForMouseResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetEmulatedMediaParams> SetEmulatedMediaParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetEmulatedMediaParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetEmulatedMediaParams> result(new SetEmulatedMediaParams());
  errors->Push();
  errors->SetName("SetEmulatedMediaParams");
  const base::Value* media_value = value.FindKey("media");
  if (media_value) {
    errors->SetName("media");
    result->media_ = internal::FromValue<std::string>::Parse(*media_value, errors);
  } else {
    errors->AddError("required property missing: media");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetEmulatedMediaParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("media", internal::ToValue(media_));
  return std::move(result);
}

std::unique_ptr<SetEmulatedMediaParams> SetEmulatedMediaParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetEmulatedMediaParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetEmulatedMediaResult> SetEmulatedMediaResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetEmulatedMediaResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetEmulatedMediaResult> result(new SetEmulatedMediaResult());
  errors->Push();
  errors->SetName("SetEmulatedMediaResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetEmulatedMediaResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetEmulatedMediaResult> SetEmulatedMediaResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetEmulatedMediaResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetGeolocationOverrideParams> SetGeolocationOverrideParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetGeolocationOverrideParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetGeolocationOverrideParams> result(new SetGeolocationOverrideParams());
  errors->Push();
  errors->SetName("SetGeolocationOverrideParams");
  const base::Value* latitude_value = value.FindKey("latitude");
  if (latitude_value) {
    errors->SetName("latitude");
    result->latitude_ = internal::FromValue<double>::Parse(*latitude_value, errors);
  }
  const base::Value* longitude_value = value.FindKey("longitude");
  if (longitude_value) {
    errors->SetName("longitude");
    result->longitude_ = internal::FromValue<double>::Parse(*longitude_value, errors);
  }
  const base::Value* accuracy_value = value.FindKey("accuracy");
  if (accuracy_value) {
    errors->SetName("accuracy");
    result->accuracy_ = internal::FromValue<double>::Parse(*accuracy_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetGeolocationOverrideParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  if (latitude_)
    result->Set("latitude", internal::ToValue(latitude_.value()));
  if (longitude_)
    result->Set("longitude", internal::ToValue(longitude_.value()));
  if (accuracy_)
    result->Set("accuracy", internal::ToValue(accuracy_.value()));
  return std::move(result);
}

std::unique_ptr<SetGeolocationOverrideParams> SetGeolocationOverrideParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetGeolocationOverrideParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetGeolocationOverrideResult> SetGeolocationOverrideResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetGeolocationOverrideResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetGeolocationOverrideResult> result(new SetGeolocationOverrideResult());
  errors->Push();
  errors->SetName("SetGeolocationOverrideResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetGeolocationOverrideResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetGeolocationOverrideResult> SetGeolocationOverrideResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetGeolocationOverrideResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetNavigatorOverridesParams> SetNavigatorOverridesParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetNavigatorOverridesParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetNavigatorOverridesParams> result(new SetNavigatorOverridesParams());
  errors->Push();
  errors->SetName("SetNavigatorOverridesParams");
  const base::Value* platform_value = value.FindKey("platform");
  if (platform_value) {
    errors->SetName("platform");
    result->platform_ = internal::FromValue<std::string>::Parse(*platform_value, errors);
  } else {
    errors->AddError("required property missing: platform");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetNavigatorOverridesParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("platform", internal::ToValue(platform_));
  return std::move(result);
}

std::unique_ptr<SetNavigatorOverridesParams> SetNavigatorOverridesParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetNavigatorOverridesParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetNavigatorOverridesResult> SetNavigatorOverridesResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetNavigatorOverridesResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetNavigatorOverridesResult> result(new SetNavigatorOverridesResult());
  errors->Push();
  errors->SetName("SetNavigatorOverridesResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetNavigatorOverridesResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetNavigatorOverridesResult> SetNavigatorOverridesResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetNavigatorOverridesResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetPageScaleFactorParams> SetPageScaleFactorParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetPageScaleFactorParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetPageScaleFactorParams> result(new SetPageScaleFactorParams());
  errors->Push();
  errors->SetName("SetPageScaleFactorParams");
  const base::Value* page_scale_factor_value = value.FindKey("pageScaleFactor");
  if (page_scale_factor_value) {
    errors->SetName("pageScaleFactor");
    result->page_scale_factor_ = internal::FromValue<double>::Parse(*page_scale_factor_value, errors);
  } else {
    errors->AddError("required property missing: pageScaleFactor");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetPageScaleFactorParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("pageScaleFactor", internal::ToValue(page_scale_factor_));
  return std::move(result);
}

std::unique_ptr<SetPageScaleFactorParams> SetPageScaleFactorParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetPageScaleFactorParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetPageScaleFactorResult> SetPageScaleFactorResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetPageScaleFactorResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetPageScaleFactorResult> result(new SetPageScaleFactorResult());
  errors->Push();
  errors->SetName("SetPageScaleFactorResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetPageScaleFactorResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetPageScaleFactorResult> SetPageScaleFactorResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetPageScaleFactorResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetScriptExecutionDisabledParams> SetScriptExecutionDisabledParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetScriptExecutionDisabledParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetScriptExecutionDisabledParams> result(new SetScriptExecutionDisabledParams());
  errors->Push();
  errors->SetName("SetScriptExecutionDisabledParams");
  const base::Value* value_value = value.FindKey("value");
  if (value_value) {
    errors->SetName("value");
    result->value_ = internal::FromValue<bool>::Parse(*value_value, errors);
  } else {
    errors->AddError("required property missing: value");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetScriptExecutionDisabledParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("value", internal::ToValue(value_));
  return std::move(result);
}

std::unique_ptr<SetScriptExecutionDisabledParams> SetScriptExecutionDisabledParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetScriptExecutionDisabledParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetScriptExecutionDisabledResult> SetScriptExecutionDisabledResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetScriptExecutionDisabledResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetScriptExecutionDisabledResult> result(new SetScriptExecutionDisabledResult());
  errors->Push();
  errors->SetName("SetScriptExecutionDisabledResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetScriptExecutionDisabledResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetScriptExecutionDisabledResult> SetScriptExecutionDisabledResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetScriptExecutionDisabledResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetTouchEmulationEnabledParams> SetTouchEmulationEnabledParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetTouchEmulationEnabledParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetTouchEmulationEnabledParams> result(new SetTouchEmulationEnabledParams());
  errors->Push();
  errors->SetName("SetTouchEmulationEnabledParams");
  const base::Value* enabled_value = value.FindKey("enabled");
  if (enabled_value) {
    errors->SetName("enabled");
    result->enabled_ = internal::FromValue<bool>::Parse(*enabled_value, errors);
  } else {
    errors->AddError("required property missing: enabled");
  }
  const base::Value* max_touch_points_value = value.FindKey("maxTouchPoints");
  if (max_touch_points_value) {
    errors->SetName("maxTouchPoints");
    result->max_touch_points_ = internal::FromValue<int>::Parse(*max_touch_points_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetTouchEmulationEnabledParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("enabled", internal::ToValue(enabled_));
  if (max_touch_points_)
    result->Set("maxTouchPoints", internal::ToValue(max_touch_points_.value()));
  return std::move(result);
}

std::unique_ptr<SetTouchEmulationEnabledParams> SetTouchEmulationEnabledParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetTouchEmulationEnabledParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetTouchEmulationEnabledResult> SetTouchEmulationEnabledResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetTouchEmulationEnabledResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetTouchEmulationEnabledResult> result(new SetTouchEmulationEnabledResult());
  errors->Push();
  errors->SetName("SetTouchEmulationEnabledResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetTouchEmulationEnabledResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetTouchEmulationEnabledResult> SetTouchEmulationEnabledResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetTouchEmulationEnabledResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetVirtualTimePolicyParams> SetVirtualTimePolicyParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetVirtualTimePolicyParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetVirtualTimePolicyParams> result(new SetVirtualTimePolicyParams());
  errors->Push();
  errors->SetName("SetVirtualTimePolicyParams");
  const base::Value* policy_value = value.FindKey("policy");
  if (policy_value) {
    errors->SetName("policy");
    result->policy_ = internal::FromValue<::headless::emulation::VirtualTimePolicy>::Parse(*policy_value, errors);
  } else {
    errors->AddError("required property missing: policy");
  }
  const base::Value* budget_value = value.FindKey("budget");
  if (budget_value) {
    errors->SetName("budget");
    result->budget_ = internal::FromValue<double>::Parse(*budget_value, errors);
  }
  const base::Value* max_virtual_time_task_starvation_count_value = value.FindKey("maxVirtualTimeTaskStarvationCount");
  if (max_virtual_time_task_starvation_count_value) {
    errors->SetName("maxVirtualTimeTaskStarvationCount");
    result->max_virtual_time_task_starvation_count_ = internal::FromValue<int>::Parse(*max_virtual_time_task_starvation_count_value, errors);
  }
  const base::Value* wait_for_navigation_value = value.FindKey("waitForNavigation");
  if (wait_for_navigation_value) {
    errors->SetName("waitForNavigation");
    result->wait_for_navigation_ = internal::FromValue<bool>::Parse(*wait_for_navigation_value, errors);
  }
  const base::Value* initial_virtual_time_value = value.FindKey("initialVirtualTime");
  if (initial_virtual_time_value) {
    errors->SetName("initialVirtualTime");
    result->initial_virtual_time_ = internal::FromValue<double>::Parse(*initial_virtual_time_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetVirtualTimePolicyParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("policy", internal::ToValue(policy_));
  if (budget_)
    result->Set("budget", internal::ToValue(budget_.value()));
  if (max_virtual_time_task_starvation_count_)
    result->Set("maxVirtualTimeTaskStarvationCount", internal::ToValue(max_virtual_time_task_starvation_count_.value()));
  if (wait_for_navigation_)
    result->Set("waitForNavigation", internal::ToValue(wait_for_navigation_.value()));
  if (initial_virtual_time_)
    result->Set("initialVirtualTime", internal::ToValue(initial_virtual_time_.value()));
  return std::move(result);
}

std::unique_ptr<SetVirtualTimePolicyParams> SetVirtualTimePolicyParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetVirtualTimePolicyParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetVirtualTimePolicyResult> SetVirtualTimePolicyResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetVirtualTimePolicyResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetVirtualTimePolicyResult> result(new SetVirtualTimePolicyResult());
  errors->Push();
  errors->SetName("SetVirtualTimePolicyResult");
  const base::Value* virtual_time_ticks_base_value = value.FindKey("virtualTimeTicksBase");
  if (virtual_time_ticks_base_value) {
    errors->SetName("virtualTimeTicksBase");
    result->virtual_time_ticks_base_ = internal::FromValue<double>::Parse(*virtual_time_ticks_base_value, errors);
  } else {
    errors->AddError("required property missing: virtualTimeTicksBase");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetVirtualTimePolicyResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("virtualTimeTicksBase", internal::ToValue(virtual_time_ticks_base_));
  return std::move(result);
}

std::unique_ptr<SetVirtualTimePolicyResult> SetVirtualTimePolicyResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetVirtualTimePolicyResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetVisibleSizeParams> SetVisibleSizeParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetVisibleSizeParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetVisibleSizeParams> result(new SetVisibleSizeParams());
  errors->Push();
  errors->SetName("SetVisibleSizeParams");
  const base::Value* width_value = value.FindKey("width");
  if (width_value) {
    errors->SetName("width");
    result->width_ = internal::FromValue<int>::Parse(*width_value, errors);
  } else {
    errors->AddError("required property missing: width");
  }
  const base::Value* height_value = value.FindKey("height");
  if (height_value) {
    errors->SetName("height");
    result->height_ = internal::FromValue<int>::Parse(*height_value, errors);
  } else {
    errors->AddError("required property missing: height");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetVisibleSizeParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("width", internal::ToValue(width_));
  result->Set("height", internal::ToValue(height_));
  return std::move(result);
}

std::unique_ptr<SetVisibleSizeParams> SetVisibleSizeParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetVisibleSizeParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetVisibleSizeResult> SetVisibleSizeResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetVisibleSizeResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetVisibleSizeResult> result(new SetVisibleSizeResult());
  errors->Push();
  errors->SetName("SetVisibleSizeResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetVisibleSizeResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetVisibleSizeResult> SetVisibleSizeResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetVisibleSizeResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<VirtualTimeAdvancedParams> VirtualTimeAdvancedParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("VirtualTimeAdvancedParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<VirtualTimeAdvancedParams> result(new VirtualTimeAdvancedParams());
  errors->Push();
  errors->SetName("VirtualTimeAdvancedParams");
  const base::Value* virtual_time_elapsed_value = value.FindKey("virtualTimeElapsed");
  if (virtual_time_elapsed_value) {
    errors->SetName("virtualTimeElapsed");
    result->virtual_time_elapsed_ = internal::FromValue<double>::Parse(*virtual_time_elapsed_value, errors);
  } else {
    errors->AddError("required property missing: virtualTimeElapsed");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> VirtualTimeAdvancedParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("virtualTimeElapsed", internal::ToValue(virtual_time_elapsed_));
  return std::move(result);
}

std::unique_ptr<VirtualTimeAdvancedParams> VirtualTimeAdvancedParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<VirtualTimeAdvancedParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<VirtualTimeBudgetExpiredParams> VirtualTimeBudgetExpiredParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("VirtualTimeBudgetExpiredParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<VirtualTimeBudgetExpiredParams> result(new VirtualTimeBudgetExpiredParams());
  errors->Push();
  errors->SetName("VirtualTimeBudgetExpiredParams");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> VirtualTimeBudgetExpiredParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<VirtualTimeBudgetExpiredParams> VirtualTimeBudgetExpiredParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<VirtualTimeBudgetExpiredParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<VirtualTimePausedParams> VirtualTimePausedParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("VirtualTimePausedParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<VirtualTimePausedParams> result(new VirtualTimePausedParams());
  errors->Push();
  errors->SetName("VirtualTimePausedParams");
  const base::Value* virtual_time_elapsed_value = value.FindKey("virtualTimeElapsed");
  if (virtual_time_elapsed_value) {
    errors->SetName("virtualTimeElapsed");
    result->virtual_time_elapsed_ = internal::FromValue<double>::Parse(*virtual_time_elapsed_value, errors);
  } else {
    errors->AddError("required property missing: virtualTimeElapsed");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> VirtualTimePausedParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("virtualTimeElapsed", internal::ToValue(virtual_time_elapsed_));
  return std::move(result);
}

std::unique_ptr<VirtualTimePausedParams> VirtualTimePausedParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<VirtualTimePausedParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


}  // namespace emulation
}  // namespace headless

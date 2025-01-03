// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "headless/public/devtools/domains/types_system_info.h"

#include "base/memory/ptr_util.h"
#include "headless/public/devtools/internal/type_conversions_system_info.h"

namespace headless {

namespace internal {

template <typename T>
std::unique_ptr<base::Value> ToValue(const T& value) {
  return ToValueImpl(value, static_cast<T*>(nullptr));
}

}  // namespace internal

namespace system_info {

std::unique_ptr<GPUDevice> GPUDevice::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GPUDevice");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GPUDevice> result(new GPUDevice());
  errors->Push();
  errors->SetName("GPUDevice");
  const base::Value* vendor_id_value = value.FindKey("vendorId");
  if (vendor_id_value) {
    errors->SetName("vendorId");
    result->vendor_id_ = internal::FromValue<double>::Parse(*vendor_id_value, errors);
  } else {
    errors->AddError("required property missing: vendorId");
  }
  const base::Value* device_id_value = value.FindKey("deviceId");
  if (device_id_value) {
    errors->SetName("deviceId");
    result->device_id_ = internal::FromValue<double>::Parse(*device_id_value, errors);
  } else {
    errors->AddError("required property missing: deviceId");
  }
  const base::Value* vendor_string_value = value.FindKey("vendorString");
  if (vendor_string_value) {
    errors->SetName("vendorString");
    result->vendor_string_ = internal::FromValue<std::string>::Parse(*vendor_string_value, errors);
  } else {
    errors->AddError("required property missing: vendorString");
  }
  const base::Value* device_string_value = value.FindKey("deviceString");
  if (device_string_value) {
    errors->SetName("deviceString");
    result->device_string_ = internal::FromValue<std::string>::Parse(*device_string_value, errors);
  } else {
    errors->AddError("required property missing: deviceString");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GPUDevice::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("vendorId", internal::ToValue(vendor_id_));
  result->Set("deviceId", internal::ToValue(device_id_));
  result->Set("vendorString", internal::ToValue(vendor_string_));
  result->Set("deviceString", internal::ToValue(device_string_));
  return std::move(result);
}

std::unique_ptr<GPUDevice> GPUDevice::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GPUDevice> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GPUInfo> GPUInfo::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GPUInfo");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GPUInfo> result(new GPUInfo());
  errors->Push();
  errors->SetName("GPUInfo");
  const base::Value* devices_value = value.FindKey("devices");
  if (devices_value) {
    errors->SetName("devices");
    result->devices_ = internal::FromValue<std::vector<std::unique_ptr<::headless::system_info::GPUDevice>>>::Parse(*devices_value, errors);
  } else {
    errors->AddError("required property missing: devices");
  }
  const base::Value* aux_attributes_value = value.FindKey("auxAttributes");
  if (aux_attributes_value) {
    errors->SetName("auxAttributes");
    result->aux_attributes_ = internal::FromValue<base::Value>::Parse(*aux_attributes_value, errors);
  }
  const base::Value* feature_status_value = value.FindKey("featureStatus");
  if (feature_status_value) {
    errors->SetName("featureStatus");
    result->feature_status_ = internal::FromValue<base::Value>::Parse(*feature_status_value, errors);
  }
  const base::Value* driver_bug_workarounds_value = value.FindKey("driverBugWorkarounds");
  if (driver_bug_workarounds_value) {
    errors->SetName("driverBugWorkarounds");
    result->driver_bug_workarounds_ = internal::FromValue<std::vector<std::string>>::Parse(*driver_bug_workarounds_value, errors);
  } else {
    errors->AddError("required property missing: driverBugWorkarounds");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GPUInfo::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("devices", internal::ToValue(devices_));
  if (aux_attributes_)
    result->Set("auxAttributes", internal::ToValue(*aux_attributes_.value()));
  if (feature_status_)
    result->Set("featureStatus", internal::ToValue(*feature_status_.value()));
  result->Set("driverBugWorkarounds", internal::ToValue(driver_bug_workarounds_));
  return std::move(result);
}

std::unique_ptr<GPUInfo> GPUInfo::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GPUInfo> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetInfoParams> GetInfoParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetInfoParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetInfoParams> result(new GetInfoParams());
  errors->Push();
  errors->SetName("GetInfoParams");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetInfoParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<GetInfoParams> GetInfoParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetInfoParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetInfoResult> GetInfoResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetInfoResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetInfoResult> result(new GetInfoResult());
  errors->Push();
  errors->SetName("GetInfoResult");
  const base::Value* gpu_value = value.FindKey("gpu");
  if (gpu_value) {
    errors->SetName("gpu");
    result->gpu_ = internal::FromValue<::headless::system_info::GPUInfo>::Parse(*gpu_value, errors);
  } else {
    errors->AddError("required property missing: gpu");
  }
  const base::Value* model_name_value = value.FindKey("modelName");
  if (model_name_value) {
    errors->SetName("modelName");
    result->model_name_ = internal::FromValue<std::string>::Parse(*model_name_value, errors);
  } else {
    errors->AddError("required property missing: modelName");
  }
  const base::Value* model_version_value = value.FindKey("modelVersion");
  if (model_version_value) {
    errors->SetName("modelVersion");
    result->model_version_ = internal::FromValue<std::string>::Parse(*model_version_value, errors);
  } else {
    errors->AddError("required property missing: modelVersion");
  }
  const base::Value* command_line_value = value.FindKey("commandLine");
  if (command_line_value) {
    errors->SetName("commandLine");
    result->command_line_ = internal::FromValue<std::string>::Parse(*command_line_value, errors);
  } else {
    errors->AddError("required property missing: commandLine");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetInfoResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("gpu", internal::ToValue(*gpu_));
  result->Set("modelName", internal::ToValue(model_name_));
  result->Set("modelVersion", internal::ToValue(model_version_));
  result->Set("commandLine", internal::ToValue(command_line_));
  return std::move(result);
}

std::unique_ptr<GetInfoResult> GetInfoResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetInfoResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


}  // namespace system_info
}  // namespace headless

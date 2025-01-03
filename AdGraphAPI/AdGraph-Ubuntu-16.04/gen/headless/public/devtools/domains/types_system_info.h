// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_TYPES_SYSTEM_INFO_H_
#define HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_TYPES_SYSTEM_INFO_H_

#include "base/optional.h"
#include "base/values.h"
#include "headless/public/devtools/internal/types_forward_declarations_system_info.h"
#include "headless/public/headless_export.h"

namespace headless {

class ErrorReporter;

namespace system_info {

// Describes a single graphics processor (GPU).
class HEADLESS_EXPORT GPUDevice {
 public:
  static std::unique_ptr<GPUDevice> Parse(const base::Value& value, ErrorReporter* errors);
  ~GPUDevice() { }

  // PCI ID of the GPU vendor, if available; 0 otherwise.
  double GetVendorId() const { return vendor_id_; }
  void SetVendorId(double value) { vendor_id_ = value; }

  // PCI ID of the GPU device, if available; 0 otherwise.
  double GetDeviceId() const { return device_id_; }
  void SetDeviceId(double value) { device_id_ = value; }

  // String description of the GPU vendor, if the PCI ID is not available.
  std::string GetVendorString() const { return vendor_string_; }
  void SetVendorString(const std::string& value) { vendor_string_ = value; }

  // String description of the GPU device, if the PCI ID is not available.
  std::string GetDeviceString() const { return device_string_; }
  void SetDeviceString(const std::string& value) { device_string_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GPUDevice> Clone() const;

  template<int STATE>
  class GPUDeviceBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kVendorIdSet = 1 << 1,
    kDeviceIdSet = 1 << 2,
    kVendorStringSet = 1 << 3,
    kDeviceStringSet = 1 << 4,
      kAllRequiredFieldsSet = (kVendorIdSet | kDeviceIdSet | kVendorStringSet | kDeviceStringSet | 0)
    };

    GPUDeviceBuilder<STATE | kVendorIdSet>& SetVendorId(double value) {
      static_assert(!(STATE & kVendorIdSet), "property vendorId should not have already been set");
      result_->SetVendorId(value);
      return CastState<kVendorIdSet>();
    }

    GPUDeviceBuilder<STATE | kDeviceIdSet>& SetDeviceId(double value) {
      static_assert(!(STATE & kDeviceIdSet), "property deviceId should not have already been set");
      result_->SetDeviceId(value);
      return CastState<kDeviceIdSet>();
    }

    GPUDeviceBuilder<STATE | kVendorStringSet>& SetVendorString(const std::string& value) {
      static_assert(!(STATE & kVendorStringSet), "property vendorString should not have already been set");
      result_->SetVendorString(value);
      return CastState<kVendorStringSet>();
    }

    GPUDeviceBuilder<STATE | kDeviceStringSet>& SetDeviceString(const std::string& value) {
      static_assert(!(STATE & kDeviceStringSet), "property deviceString should not have already been set");
      result_->SetDeviceString(value);
      return CastState<kDeviceStringSet>();
    }

    std::unique_ptr<GPUDevice> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GPUDevice;
    GPUDeviceBuilder() : result_(new GPUDevice()) { }

    template<int STEP> GPUDeviceBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GPUDeviceBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GPUDevice> result_;
  };

  static GPUDeviceBuilder<0> Builder() {
    return GPUDeviceBuilder<0>();
  }

 private:
  GPUDevice() { }

  double vendor_id_;
  double device_id_;
  std::string vendor_string_;
  std::string device_string_;

  DISALLOW_COPY_AND_ASSIGN(GPUDevice);
};


// Provides information about the GPU(s) on the system.
class HEADLESS_EXPORT GPUInfo {
 public:
  static std::unique_ptr<GPUInfo> Parse(const base::Value& value, ErrorReporter* errors);
  ~GPUInfo() { }

  // The graphics devices on the system. Element 0 is the primary GPU.
  const std::vector<std::unique_ptr<::headless::system_info::GPUDevice>>* GetDevices() const { return &devices_; }
  void SetDevices(std::vector<std::unique_ptr<::headless::system_info::GPUDevice>> value) { devices_ = std::move(value); }

  // An optional dictionary of additional GPU related attributes.
  bool HasAuxAttributes() const { return !!aux_attributes_; }
  const base::Value* GetAuxAttributes() const { DCHECK(HasAuxAttributes()); return aux_attributes_.value().get(); }
  void SetAuxAttributes(std::unique_ptr<base::Value> value) { aux_attributes_ = std::move(value); }

  // An optional dictionary of graphics features and their status.
  bool HasFeatureStatus() const { return !!feature_status_; }
  const base::Value* GetFeatureStatus() const { DCHECK(HasFeatureStatus()); return feature_status_.value().get(); }
  void SetFeatureStatus(std::unique_ptr<base::Value> value) { feature_status_ = std::move(value); }

  // An optional array of GPU driver bug workarounds.
  const std::vector<std::string>* GetDriverBugWorkarounds() const { return &driver_bug_workarounds_; }
  void SetDriverBugWorkarounds(std::vector<std::string> value) { driver_bug_workarounds_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GPUInfo> Clone() const;

  template<int STATE>
  class GPUInfoBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kDevicesSet = 1 << 1,
    kDriverBugWorkaroundsSet = 1 << 2,
      kAllRequiredFieldsSet = (kDevicesSet | kDriverBugWorkaroundsSet | 0)
    };

    GPUInfoBuilder<STATE | kDevicesSet>& SetDevices(std::vector<std::unique_ptr<::headless::system_info::GPUDevice>> value) {
      static_assert(!(STATE & kDevicesSet), "property devices should not have already been set");
      result_->SetDevices(std::move(value));
      return CastState<kDevicesSet>();
    }

    GPUInfoBuilder<STATE>& SetAuxAttributes(std::unique_ptr<base::Value> value) {
      result_->SetAuxAttributes(std::move(value));
      return *this;
    }

    GPUInfoBuilder<STATE>& SetFeatureStatus(std::unique_ptr<base::Value> value) {
      result_->SetFeatureStatus(std::move(value));
      return *this;
    }

    GPUInfoBuilder<STATE | kDriverBugWorkaroundsSet>& SetDriverBugWorkarounds(std::vector<std::string> value) {
      static_assert(!(STATE & kDriverBugWorkaroundsSet), "property driverBugWorkarounds should not have already been set");
      result_->SetDriverBugWorkarounds(std::move(value));
      return CastState<kDriverBugWorkaroundsSet>();
    }

    std::unique_ptr<GPUInfo> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GPUInfo;
    GPUInfoBuilder() : result_(new GPUInfo()) { }

    template<int STEP> GPUInfoBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GPUInfoBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GPUInfo> result_;
  };

  static GPUInfoBuilder<0> Builder() {
    return GPUInfoBuilder<0>();
  }

 private:
  GPUInfo() { }

  std::vector<std::unique_ptr<::headless::system_info::GPUDevice>> devices_;
  base::Optional<std::unique_ptr<base::Value>> aux_attributes_;
  base::Optional<std::unique_ptr<base::Value>> feature_status_;
  std::vector<std::string> driver_bug_workarounds_;

  DISALLOW_COPY_AND_ASSIGN(GPUInfo);
};


// Parameters for the GetInfo command.
class HEADLESS_EXPORT GetInfoParams {
 public:
  static std::unique_ptr<GetInfoParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~GetInfoParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetInfoParams> Clone() const;

  template<int STATE>
  class GetInfoParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<GetInfoParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetInfoParams;
    GetInfoParamsBuilder() : result_(new GetInfoParams()) { }

    template<int STEP> GetInfoParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetInfoParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetInfoParams> result_;
  };

  static GetInfoParamsBuilder<0> Builder() {
    return GetInfoParamsBuilder<0>();
  }

 private:
  GetInfoParams() { }


  DISALLOW_COPY_AND_ASSIGN(GetInfoParams);
};


// Result for the GetInfo command.
class HEADLESS_EXPORT GetInfoResult {
 public:
  static std::unique_ptr<GetInfoResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~GetInfoResult() { }

  // Information about the GPUs on the system.
  const ::headless::system_info::GPUInfo* GetGpu() const { return gpu_.get(); }
  void SetGpu(std::unique_ptr<::headless::system_info::GPUInfo> value) { gpu_ = std::move(value); }

  // A platform-dependent description of the model of the machine. On Mac OS, this is, for
  // example, 'MacBookPro'. Will be the empty string if not supported.
  std::string GetModelName() const { return model_name_; }
  void SetModelName(const std::string& value) { model_name_ = value; }

  // A platform-dependent description of the version of the machine. On Mac OS, this is, for
  // example, '10.1'. Will be the empty string if not supported.
  std::string GetModelVersion() const { return model_version_; }
  void SetModelVersion(const std::string& value) { model_version_ = value; }

  // The command line string used to launch the browser. Will be the empty string if not
  // supported.
  std::string GetCommandLine() const { return command_line_; }
  void SetCommandLine(const std::string& value) { command_line_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetInfoResult> Clone() const;

  template<int STATE>
  class GetInfoResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kGpuSet = 1 << 1,
    kModelNameSet = 1 << 2,
    kModelVersionSet = 1 << 3,
    kCommandLineSet = 1 << 4,
      kAllRequiredFieldsSet = (kGpuSet | kModelNameSet | kModelVersionSet | kCommandLineSet | 0)
    };

    GetInfoResultBuilder<STATE | kGpuSet>& SetGpu(std::unique_ptr<::headless::system_info::GPUInfo> value) {
      static_assert(!(STATE & kGpuSet), "property gpu should not have already been set");
      result_->SetGpu(std::move(value));
      return CastState<kGpuSet>();
    }

    GetInfoResultBuilder<STATE | kModelNameSet>& SetModelName(const std::string& value) {
      static_assert(!(STATE & kModelNameSet), "property modelName should not have already been set");
      result_->SetModelName(value);
      return CastState<kModelNameSet>();
    }

    GetInfoResultBuilder<STATE | kModelVersionSet>& SetModelVersion(const std::string& value) {
      static_assert(!(STATE & kModelVersionSet), "property modelVersion should not have already been set");
      result_->SetModelVersion(value);
      return CastState<kModelVersionSet>();
    }

    GetInfoResultBuilder<STATE | kCommandLineSet>& SetCommandLine(const std::string& value) {
      static_assert(!(STATE & kCommandLineSet), "property commandLine should not have already been set");
      result_->SetCommandLine(value);
      return CastState<kCommandLineSet>();
    }

    std::unique_ptr<GetInfoResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetInfoResult;
    GetInfoResultBuilder() : result_(new GetInfoResult()) { }

    template<int STEP> GetInfoResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetInfoResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetInfoResult> result_;
  };

  static GetInfoResultBuilder<0> Builder() {
    return GetInfoResultBuilder<0>();
  }

 private:
  GetInfoResult() { }

  std::unique_ptr<::headless::system_info::GPUInfo> gpu_;
  std::string model_name_;
  std::string model_version_;
  std::string command_line_;

  DISALLOW_COPY_AND_ASSIGN(GetInfoResult);
};


}  // namespace system_info

}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_TYPES_SYSTEM_INFO_H_

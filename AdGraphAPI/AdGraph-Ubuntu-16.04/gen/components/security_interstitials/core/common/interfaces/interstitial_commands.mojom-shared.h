// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SECURITY_INTERSTITIALS_CORE_COMMON_INTERFACES_INTERSTITIAL_COMMANDS_MOJOM_SHARED_H_
#define COMPONENTS_SECURITY_INTERSTITIALS_CORE_COMMON_INTERFACES_INTERSTITIAL_COMMANDS_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "components/security_interstitials/core/common/interfaces/interstitial_commands.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace security_interstitials {
namespace mojom {


}  // namespace mojom
}  // namespace security_interstitials

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace security_interstitials {
namespace mojom {
// Interface base classes. They are used for type safety check.
class InterstitialCommandsInterfaceBase {};

using InterstitialCommandsPtrDataView =
    mojo::InterfacePtrDataView<InterstitialCommandsInterfaceBase>;
using InterstitialCommandsRequestDataView =
    mojo::InterfaceRequestDataView<InterstitialCommandsInterfaceBase>;
using InterstitialCommandsAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InterstitialCommandsInterfaceBase>;
using InterstitialCommandsAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InterstitialCommandsInterfaceBase>;
class InterstitialCommands_DontProceed_ParamsDataView {
 public:
  InterstitialCommands_DontProceed_ParamsDataView() {}

  InterstitialCommands_DontProceed_ParamsDataView(
      internal::InterstitialCommands_DontProceed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InterstitialCommands_DontProceed_Params_Data* data_ = nullptr;
};

class InterstitialCommands_Proceed_ParamsDataView {
 public:
  InterstitialCommands_Proceed_ParamsDataView() {}

  InterstitialCommands_Proceed_ParamsDataView(
      internal::InterstitialCommands_Proceed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InterstitialCommands_Proceed_Params_Data* data_ = nullptr;
};

class InterstitialCommands_ShowMoreSection_ParamsDataView {
 public:
  InterstitialCommands_ShowMoreSection_ParamsDataView() {}

  InterstitialCommands_ShowMoreSection_ParamsDataView(
      internal::InterstitialCommands_ShowMoreSection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InterstitialCommands_ShowMoreSection_Params_Data* data_ = nullptr;
};

class InterstitialCommands_OpenHelpCenter_ParamsDataView {
 public:
  InterstitialCommands_OpenHelpCenter_ParamsDataView() {}

  InterstitialCommands_OpenHelpCenter_ParamsDataView(
      internal::InterstitialCommands_OpenHelpCenter_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InterstitialCommands_OpenHelpCenter_Params_Data* data_ = nullptr;
};

class InterstitialCommands_OpenDiagnostic_ParamsDataView {
 public:
  InterstitialCommands_OpenDiagnostic_ParamsDataView() {}

  InterstitialCommands_OpenDiagnostic_ParamsDataView(
      internal::InterstitialCommands_OpenDiagnostic_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InterstitialCommands_OpenDiagnostic_Params_Data* data_ = nullptr;
};

class InterstitialCommands_Reload_ParamsDataView {
 public:
  InterstitialCommands_Reload_ParamsDataView() {}

  InterstitialCommands_Reload_ParamsDataView(
      internal::InterstitialCommands_Reload_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InterstitialCommands_Reload_Params_Data* data_ = nullptr;
};

class InterstitialCommands_OpenDateSettings_ParamsDataView {
 public:
  InterstitialCommands_OpenDateSettings_ParamsDataView() {}

  InterstitialCommands_OpenDateSettings_ParamsDataView(
      internal::InterstitialCommands_OpenDateSettings_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InterstitialCommands_OpenDateSettings_Params_Data* data_ = nullptr;
};

class InterstitialCommands_OpenLogin_ParamsDataView {
 public:
  InterstitialCommands_OpenLogin_ParamsDataView() {}

  InterstitialCommands_OpenLogin_ParamsDataView(
      internal::InterstitialCommands_OpenLogin_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InterstitialCommands_OpenLogin_Params_Data* data_ = nullptr;
};

class InterstitialCommands_DoReport_ParamsDataView {
 public:
  InterstitialCommands_DoReport_ParamsDataView() {}

  InterstitialCommands_DoReport_ParamsDataView(
      internal::InterstitialCommands_DoReport_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InterstitialCommands_DoReport_Params_Data* data_ = nullptr;
};

class InterstitialCommands_DontReport_ParamsDataView {
 public:
  InterstitialCommands_DontReport_ParamsDataView() {}

  InterstitialCommands_DontReport_ParamsDataView(
      internal::InterstitialCommands_DontReport_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InterstitialCommands_DontReport_Params_Data* data_ = nullptr;
};

class InterstitialCommands_OpenReportingPrivacy_ParamsDataView {
 public:
  InterstitialCommands_OpenReportingPrivacy_ParamsDataView() {}

  InterstitialCommands_OpenReportingPrivacy_ParamsDataView(
      internal::InterstitialCommands_OpenReportingPrivacy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InterstitialCommands_OpenReportingPrivacy_Params_Data* data_ = nullptr;
};

class InterstitialCommands_OpenWhitepaper_ParamsDataView {
 public:
  InterstitialCommands_OpenWhitepaper_ParamsDataView() {}

  InterstitialCommands_OpenWhitepaper_ParamsDataView(
      internal::InterstitialCommands_OpenWhitepaper_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InterstitialCommands_OpenWhitepaper_Params_Data* data_ = nullptr;
};

class InterstitialCommands_ReportPhishingError_ParamsDataView {
 public:
  InterstitialCommands_ReportPhishingError_ParamsDataView() {}

  InterstitialCommands_ReportPhishingError_ParamsDataView(
      internal::InterstitialCommands_ReportPhishingError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InterstitialCommands_ReportPhishingError_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace security_interstitials

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace security_interstitials {
namespace mojom {




























}  // namespace mojom
}  // namespace security_interstitials

#endif  // COMPONENTS_SECURITY_INTERSTITIALS_CORE_COMMON_INTERFACES_INTERSTITIAL_COMMANDS_MOJOM_SHARED_H_

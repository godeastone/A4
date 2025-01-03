// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_CLOUD_PRINT_MOJOM_SHARED_H_
#define CHROME_COMMON_CLOUD_PRINT_MOJOM_SHARED_H_

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
#include "chrome/common/cloud_print.mojom-shared-internal.h"
#include "mojo/public/mojom/base/values.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace cloud_print {
namespace mojom {


}  // namespace mojom
}  // namespace cloud_print

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace cloud_print {
namespace mojom {
// Interface base classes. They are used for type safety check.
class CloudPrintInterfaceBase {};

using CloudPrintPtrDataView =
    mojo::InterfacePtrDataView<CloudPrintInterfaceBase>;
using CloudPrintRequestDataView =
    mojo::InterfaceRequestDataView<CloudPrintInterfaceBase>;
using CloudPrintAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CloudPrintInterfaceBase>;
using CloudPrintAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CloudPrintInterfaceBase>;
class CloudPrint_EnableCloudPrintProxyWithRobot_ParamsDataView {
 public:
  CloudPrint_EnableCloudPrintProxyWithRobot_ParamsDataView() {}

  CloudPrint_EnableCloudPrintProxyWithRobot_ParamsDataView(
      internal::CloudPrint_EnableCloudPrintProxyWithRobot_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRobotAuthCodeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRobotAuthCode(UserType* output) {
    auto* pointer = data_->robot_auth_code.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetRobotEmailDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRobotEmail(UserType* output) {
    auto* pointer = data_->robot_email.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUserEmailDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserEmail(UserType* output) {
    auto* pointer = data_->user_email.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUserSettingsDataView(
      ::mojo_base::mojom::DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserSettings(UserType* output) {
    auto* pointer = data_->user_settings.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::CloudPrint_EnableCloudPrintProxyWithRobot_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CloudPrint_DisableCloudPrintProxy_ParamsDataView {
 public:
  CloudPrint_DisableCloudPrintProxy_ParamsDataView() {}

  CloudPrint_DisableCloudPrintProxy_ParamsDataView(
      internal::CloudPrint_DisableCloudPrintProxy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CloudPrint_DisableCloudPrintProxy_Params_Data* data_ = nullptr;
};

class CloudPrint_GetCloudPrintProxyInfo_ParamsDataView {
 public:
  CloudPrint_GetCloudPrintProxyInfo_ParamsDataView() {}

  CloudPrint_GetCloudPrintProxyInfo_ParamsDataView(
      internal::CloudPrint_GetCloudPrintProxyInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CloudPrint_GetCloudPrintProxyInfo_Params_Data* data_ = nullptr;
};

class CloudPrint_GetCloudPrintProxyInfo_ResponseParamsDataView {
 public:
  CloudPrint_GetCloudPrintProxyInfo_ResponseParamsDataView() {}

  CloudPrint_GetCloudPrintProxyInfo_ResponseParamsDataView(
      internal::CloudPrint_GetCloudPrintProxyInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool enabled() const {
    return data_->enabled;
  }
  inline void GetEmailDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEmail(UserType* output) {
    auto* pointer = data_->email.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetProxyIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProxyId(UserType* output) {
    auto* pointer = data_->proxy_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::CloudPrint_GetCloudPrintProxyInfo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CloudPrint_GetPrinters_ParamsDataView {
 public:
  CloudPrint_GetPrinters_ParamsDataView() {}

  CloudPrint_GetPrinters_ParamsDataView(
      internal::CloudPrint_GetPrinters_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CloudPrint_GetPrinters_Params_Data* data_ = nullptr;
};

class CloudPrint_GetPrinters_ResponseParamsDataView {
 public:
  CloudPrint_GetPrinters_ResponseParamsDataView() {}

  CloudPrint_GetPrinters_ResponseParamsDataView(
      internal::CloudPrint_GetPrinters_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPrintersDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrinters(UserType* output) {
    auto* pointer = data_->printers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CloudPrint_GetPrinters_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace cloud_print

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace cloud_print {
namespace mojom {

inline void CloudPrint_EnableCloudPrintProxyWithRobot_ParamsDataView::GetRobotAuthCodeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->robot_auth_code.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CloudPrint_EnableCloudPrintProxyWithRobot_ParamsDataView::GetRobotEmailDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->robot_email.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CloudPrint_EnableCloudPrintProxyWithRobot_ParamsDataView::GetUserEmailDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->user_email.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CloudPrint_EnableCloudPrintProxyWithRobot_ParamsDataView::GetUserSettingsDataView(
    ::mojo_base::mojom::DictionaryValueDataView* output) {
  auto pointer = data_->user_settings.Get();
  *output = ::mojo_base::mojom::DictionaryValueDataView(pointer, context_);
}






inline void CloudPrint_GetCloudPrintProxyInfo_ResponseParamsDataView::GetEmailDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->email.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CloudPrint_GetCloudPrintProxyInfo_ResponseParamsDataView::GetProxyIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->proxy_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void CloudPrint_GetPrinters_ResponseParamsDataView::GetPrintersDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->printers.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace cloud_print

#endif  // CHROME_COMMON_CLOUD_PRINT_MOJOM_SHARED_H_

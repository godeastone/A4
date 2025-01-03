// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_SERVICE_PROCESS_MOJOM_SHARED_H_
#define CHROME_COMMON_SERVICE_PROCESS_MOJOM_SHARED_H_

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
#include "chrome/common/service_process.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace chrome {
namespace mojom {


}  // namespace mojom
}  // namespace chrome

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace chrome {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ServiceProcessInterfaceBase {};

using ServiceProcessPtrDataView =
    mojo::InterfacePtrDataView<ServiceProcessInterfaceBase>;
using ServiceProcessRequestDataView =
    mojo::InterfaceRequestDataView<ServiceProcessInterfaceBase>;
using ServiceProcessAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceProcessInterfaceBase>;
using ServiceProcessAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceProcessInterfaceBase>;
class ServiceProcess_Hello_ParamsDataView {
 public:
  ServiceProcess_Hello_ParamsDataView() {}

  ServiceProcess_Hello_ParamsDataView(
      internal::ServiceProcess_Hello_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceProcess_Hello_Params_Data* data_ = nullptr;
};

class ServiceProcess_Hello_ResponseParamsDataView {
 public:
  ServiceProcess_Hello_ResponseParamsDataView() {}

  ServiceProcess_Hello_ResponseParamsDataView(
      internal::ServiceProcess_Hello_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceProcess_Hello_ResponseParams_Data* data_ = nullptr;
};

class ServiceProcess_GetHistograms_ParamsDataView {
 public:
  ServiceProcess_GetHistograms_ParamsDataView() {}

  ServiceProcess_GetHistograms_ParamsDataView(
      internal::ServiceProcess_GetHistograms_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceProcess_GetHistograms_Params_Data* data_ = nullptr;
};

class ServiceProcess_GetHistograms_ResponseParamsDataView {
 public:
  ServiceProcess_GetHistograms_ResponseParamsDataView() {}

  ServiceProcess_GetHistograms_ResponseParamsDataView(
      internal::ServiceProcess_GetHistograms_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHistogramsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHistograms(UserType* output) {
    auto* pointer = data_->histograms.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ServiceProcess_GetHistograms_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceProcess_UpdateAvailable_ParamsDataView {
 public:
  ServiceProcess_UpdateAvailable_ParamsDataView() {}

  ServiceProcess_UpdateAvailable_ParamsDataView(
      internal::ServiceProcess_UpdateAvailable_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceProcess_UpdateAvailable_Params_Data* data_ = nullptr;
};

class ServiceProcess_ShutDown_ParamsDataView {
 public:
  ServiceProcess_ShutDown_ParamsDataView() {}

  ServiceProcess_ShutDown_ParamsDataView(
      internal::ServiceProcess_ShutDown_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceProcess_ShutDown_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace chrome

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace chrome {
namespace mojom {







inline void ServiceProcess_GetHistograms_ResponseParamsDataView::GetHistogramsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->histograms.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}







}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_SERVICE_PROCESS_MOJOM_SHARED_H_

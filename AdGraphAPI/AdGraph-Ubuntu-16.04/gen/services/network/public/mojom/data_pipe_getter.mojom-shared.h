// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/data_pipe_getter.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace network {
namespace mojom {


}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {
// Interface base classes. They are used for type safety check.
class DataPipeGetterInterfaceBase {};

using DataPipeGetterPtrDataView =
    mojo::InterfacePtrDataView<DataPipeGetterInterfaceBase>;
using DataPipeGetterRequestDataView =
    mojo::InterfaceRequestDataView<DataPipeGetterInterfaceBase>;
using DataPipeGetterAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DataPipeGetterInterfaceBase>;
using DataPipeGetterAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DataPipeGetterInterfaceBase>;
class DataPipeGetter_Read_ParamsDataView {
 public:
  DataPipeGetter_Read_ParamsDataView() {}

  DataPipeGetter_Read_ParamsDataView(
      internal::DataPipeGetter_Read_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedDataPipeProducerHandle TakePipe() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DataPipeGetter_Read_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DataPipeGetter_Read_ResponseParamsDataView {
 public:
  DataPipeGetter_Read_ResponseParamsDataView() {}

  DataPipeGetter_Read_ResponseParamsDataView(
      internal::DataPipeGetter_Read_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t status() const {
    return data_->status;
  }
  uint64_t size() const {
    return data_->size;
  }
 private:
  internal::DataPipeGetter_Read_ResponseParams_Data* data_ = nullptr;
};

class DataPipeGetter_Clone_ParamsDataView {
 public:
  DataPipeGetter_Clone_ParamsDataView() {}

  DataPipeGetter_Clone_ParamsDataView(
      internal::DataPipeGetter_Clone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::DataPipeGetterRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DataPipeGetter_Clone_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace network {
namespace mojom {








}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_SHARED_H_

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CHUNKED_DATA_PIPE_GETTER_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CHUNKED_DATA_PIPE_GETTER_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/chunked_data_pipe_getter.mojom-shared-internal.h"

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
class ChunkedDataPipeGetterInterfaceBase {};

using ChunkedDataPipeGetterPtrDataView =
    mojo::InterfacePtrDataView<ChunkedDataPipeGetterInterfaceBase>;
using ChunkedDataPipeGetterRequestDataView =
    mojo::InterfaceRequestDataView<ChunkedDataPipeGetterInterfaceBase>;
using ChunkedDataPipeGetterAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ChunkedDataPipeGetterInterfaceBase>;
using ChunkedDataPipeGetterAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ChunkedDataPipeGetterInterfaceBase>;
class ChunkedDataPipeGetter_GetSize_ParamsDataView {
 public:
  ChunkedDataPipeGetter_GetSize_ParamsDataView() {}

  ChunkedDataPipeGetter_GetSize_ParamsDataView(
      internal::ChunkedDataPipeGetter_GetSize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ChunkedDataPipeGetter_GetSize_Params_Data* data_ = nullptr;
};

class ChunkedDataPipeGetter_GetSize_ResponseParamsDataView {
 public:
  ChunkedDataPipeGetter_GetSize_ResponseParamsDataView() {}

  ChunkedDataPipeGetter_GetSize_ResponseParamsDataView(
      internal::ChunkedDataPipeGetter_GetSize_ResponseParams_Data* data,
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
  internal::ChunkedDataPipeGetter_GetSize_ResponseParams_Data* data_ = nullptr;
};

class ChunkedDataPipeGetter_StartReading_ParamsDataView {
 public:
  ChunkedDataPipeGetter_StartReading_ParamsDataView() {}

  ChunkedDataPipeGetter_StartReading_ParamsDataView(
      internal::ChunkedDataPipeGetter_StartReading_Params_Data* data,
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
  internal::ChunkedDataPipeGetter_StartReading_Params_Data* data_ = nullptr;
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

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_CHUNKED_DATA_PIPE_GETTER_MOJOM_SHARED_H_

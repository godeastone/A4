// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_HISTOGRAM_FETCHER_MOJOM_SHARED_H_
#define CONTENT_COMMON_HISTOGRAM_FETCHER_MOJOM_SHARED_H_

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
#include "content/common/histogram_fetcher.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {


}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ChildHistogramFetcherFactoryInterfaceBase {};

using ChildHistogramFetcherFactoryPtrDataView =
    mojo::InterfacePtrDataView<ChildHistogramFetcherFactoryInterfaceBase>;
using ChildHistogramFetcherFactoryRequestDataView =
    mojo::InterfaceRequestDataView<ChildHistogramFetcherFactoryInterfaceBase>;
using ChildHistogramFetcherFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ChildHistogramFetcherFactoryInterfaceBase>;
using ChildHistogramFetcherFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ChildHistogramFetcherFactoryInterfaceBase>;
class ChildHistogramFetcherInterfaceBase {};

using ChildHistogramFetcherPtrDataView =
    mojo::InterfacePtrDataView<ChildHistogramFetcherInterfaceBase>;
using ChildHistogramFetcherRequestDataView =
    mojo::InterfaceRequestDataView<ChildHistogramFetcherInterfaceBase>;
using ChildHistogramFetcherAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ChildHistogramFetcherInterfaceBase>;
using ChildHistogramFetcherAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ChildHistogramFetcherInterfaceBase>;
class ChildHistogramFetcherFactory_CreateFetcher_ParamsDataView {
 public:
  ChildHistogramFetcherFactory_CreateFetcher_ParamsDataView() {}

  ChildHistogramFetcherFactory_CreateFetcher_ParamsDataView(
      internal::ChildHistogramFetcherFactory_CreateFetcher_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedSharedBufferHandle TakeShmHandle() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->shm_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeChildHistogramFetcher() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::ChildHistogramFetcherRequestDataView>(
            &data_->child_histogram_fetcher, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ChildHistogramFetcherFactory_CreateFetcher_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ChildHistogramFetcher_GetChildNonPersistentHistogramData_ParamsDataView {
 public:
  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ParamsDataView() {}

  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ParamsDataView(
      internal::ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data* data_ = nullptr;
};

class ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParamsDataView {
 public:
  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParamsDataView() {}

  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParamsDataView(
      internal::ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeltasDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeltas(UserType* output) {
    auto* pointer = data_->deltas.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace content {
namespace mojom {





inline void ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParamsDataView::GetDeltasDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->deltas.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_HISTOGRAM_FETCHER_MOJOM_SHARED_H_

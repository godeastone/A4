// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_PROVIDER_MOJOM_SHARED_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_PROVIDER_MOJOM_SHARED_H_

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
#include "services/resource_coordinator/public/mojom/coordination_unit_provider.mojom-shared-internal.h"
#include "services/resource_coordinator/public/mojom/coordination_unit.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace resource_coordinator {
namespace mojom {


}  // namespace mojom
}  // namespace resource_coordinator

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace resource_coordinator {
namespace mojom {
// Interface base classes. They are used for type safety check.
class CoordinationUnitProviderInterfaceBase {};

using CoordinationUnitProviderPtrDataView =
    mojo::InterfacePtrDataView<CoordinationUnitProviderInterfaceBase>;
using CoordinationUnitProviderRequestDataView =
    mojo::InterfaceRequestDataView<CoordinationUnitProviderInterfaceBase>;
using CoordinationUnitProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CoordinationUnitProviderInterfaceBase>;
using CoordinationUnitProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CoordinationUnitProviderInterfaceBase>;
class CoordinationUnitProvider_CreateFrameCoordinationUnit_ParamsDataView {
 public:
  CoordinationUnitProvider_CreateFrameCoordinationUnit_ParamsDataView() {}

  CoordinationUnitProvider_CreateFrameCoordinationUnit_ParamsDataView(
      internal::CoordinationUnitProvider_CreateFrameCoordinationUnit_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::resource_coordinator::mojom::FrameCoordinationUnitRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetIdDataView(
      ::resource_coordinator::mojom::CoordinationUnitIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::CoordinationUnitProvider_CreateFrameCoordinationUnit_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CoordinationUnitProvider_CreatePageCoordinationUnit_ParamsDataView {
 public:
  CoordinationUnitProvider_CreatePageCoordinationUnit_ParamsDataView() {}

  CoordinationUnitProvider_CreatePageCoordinationUnit_ParamsDataView(
      internal::CoordinationUnitProvider_CreatePageCoordinationUnit_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::resource_coordinator::mojom::PageCoordinationUnitRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetIdDataView(
      ::resource_coordinator::mojom::CoordinationUnitIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::CoordinationUnitProvider_CreatePageCoordinationUnit_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CoordinationUnitProvider_CreateProcessCoordinationUnit_ParamsDataView {
 public:
  CoordinationUnitProvider_CreateProcessCoordinationUnit_ParamsDataView() {}

  CoordinationUnitProvider_CreateProcessCoordinationUnit_ParamsDataView(
      internal::CoordinationUnitProvider_CreateProcessCoordinationUnit_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::resource_coordinator::mojom::ProcessCoordinationUnitRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetIdDataView(
      ::resource_coordinator::mojom::CoordinationUnitIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::CoordinationUnitProvider_CreateProcessCoordinationUnit_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CoordinationUnitProvider_GetSystemCoordinationUnit_ParamsDataView {
 public:
  CoordinationUnitProvider_GetSystemCoordinationUnit_ParamsDataView() {}

  CoordinationUnitProvider_GetSystemCoordinationUnit_ParamsDataView(
      internal::CoordinationUnitProvider_GetSystemCoordinationUnit_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::resource_coordinator::mojom::SystemCoordinationUnitRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::CoordinationUnitProvider_GetSystemCoordinationUnit_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace resource_coordinator

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace resource_coordinator {
namespace mojom {

inline void CoordinationUnitProvider_CreateFrameCoordinationUnit_ParamsDataView::GetIdDataView(
    ::resource_coordinator::mojom::CoordinationUnitIDDataView* output) {
  auto pointer = data_->id.Get();
  *output = ::resource_coordinator::mojom::CoordinationUnitIDDataView(pointer, context_);
}


inline void CoordinationUnitProvider_CreatePageCoordinationUnit_ParamsDataView::GetIdDataView(
    ::resource_coordinator::mojom::CoordinationUnitIDDataView* output) {
  auto pointer = data_->id.Get();
  *output = ::resource_coordinator::mojom::CoordinationUnitIDDataView(pointer, context_);
}


inline void CoordinationUnitProvider_CreateProcessCoordinationUnit_ParamsDataView::GetIdDataView(
    ::resource_coordinator::mojom::CoordinationUnitIDDataView* output) {
  auto pointer = data_->id.Get();
  *output = ::resource_coordinator::mojom::CoordinationUnitIDDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace resource_coordinator

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_PROVIDER_MOJOM_SHARED_H_

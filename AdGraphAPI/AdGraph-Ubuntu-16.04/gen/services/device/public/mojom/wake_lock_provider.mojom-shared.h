// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/wake_lock_provider.mojom-shared-internal.h"
#include "services/device/public/mojom/wake_lock_context.mojom-shared.h"
#include "services/device/public/mojom/wake_lock.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace device {
namespace mojom {


}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {
// Interface base classes. They are used for type safety check.
class WakeLockProviderInterfaceBase {};

using WakeLockProviderPtrDataView =
    mojo::InterfacePtrDataView<WakeLockProviderInterfaceBase>;
using WakeLockProviderRequestDataView =
    mojo::InterfaceRequestDataView<WakeLockProviderInterfaceBase>;
using WakeLockProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WakeLockProviderInterfaceBase>;
using WakeLockProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WakeLockProviderInterfaceBase>;
class WakeLockProvider_GetWakeLockContextForID_ParamsDataView {
 public:
  WakeLockProvider_GetWakeLockContextForID_ParamsDataView() {}

  WakeLockProvider_GetWakeLockContextForID_ParamsDataView(
      internal::WakeLockProvider_GetWakeLockContextForID_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t context_id() const {
    return data_->context_id;
  }
  template <typename UserType>
  UserType TakeContext() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::WakeLockContextRequestDataView>(
            &data_->context, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WakeLockProvider_GetWakeLockContextForID_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WakeLockProvider_GetWakeLockWithoutContext_ParamsDataView {
 public:
  WakeLockProvider_GetWakeLockWithoutContext_ParamsDataView() {}

  WakeLockProvider_GetWakeLockWithoutContext_ParamsDataView(
      internal::WakeLockProvider_GetWakeLockWithoutContext_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::mojom::WakeLockType>(
        data_value, output);
  }

  ::device::mojom::WakeLockType type() const {
    return static_cast<::device::mojom::WakeLockType>(data_->type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::device::mojom::WakeLockReason>(
        data_value, output);
  }

  ::device::mojom::WakeLockReason reason() const {
    return static_cast<::device::mojom::WakeLockReason>(data_->reason);
  }
  inline void GetDescriptionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescription(UserType* output) {
    auto* pointer = data_->description.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeWakeLock() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::WakeLockRequestDataView>(
            &data_->wake_lock, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WakeLockProvider_GetWakeLockWithoutContext_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace device {
namespace mojom {



inline void WakeLockProvider_GetWakeLockWithoutContext_ParamsDataView::GetDescriptionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->description.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_SHARED_H_

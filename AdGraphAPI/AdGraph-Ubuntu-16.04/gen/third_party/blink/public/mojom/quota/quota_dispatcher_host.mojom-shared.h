// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_DISPATCHER_HOST_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_DISPATCHER_HOST_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/quota/quota_dispatcher_host.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/quota/quota_types.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class QuotaDispatcherHostInterfaceBase {};

using QuotaDispatcherHostPtrDataView =
    mojo::InterfacePtrDataView<QuotaDispatcherHostInterfaceBase>;
using QuotaDispatcherHostRequestDataView =
    mojo::InterfaceRequestDataView<QuotaDispatcherHostInterfaceBase>;
using QuotaDispatcherHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<QuotaDispatcherHostInterfaceBase>;
using QuotaDispatcherHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<QuotaDispatcherHostInterfaceBase>;
class QuotaDispatcherHost_QueryStorageUsageAndQuota_ParamsDataView {
 public:
  QuotaDispatcherHost_QueryStorageUsageAndQuota_ParamsDataView() {}

  QuotaDispatcherHost_QueryStorageUsageAndQuota_ParamsDataView(
      internal::QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStorageType(UserType* output) const {
    auto data_value = data_->storage_type;
    return mojo::internal::Deserialize<::blink::mojom::StorageType>(
        data_value, output);
  }

  ::blink::mojom::StorageType storage_type() const {
    return static_cast<::blink::mojom::StorageType>(data_->storage_type);
  }
 private:
  internal::QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParamsDataView {
 public:
  QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParamsDataView() {}

  QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParamsDataView(
      internal::QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::QuotaStatusCode>(
        data_value, output);
  }

  ::blink::mojom::QuotaStatusCode error() const {
    return static_cast<::blink::mojom::QuotaStatusCode>(data_->error);
  }
  int64_t current_usage() const {
    return data_->current_usage;
  }
  int64_t current_quota() const {
    return data_->current_quota;
  }
 private:
  internal::QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data* data_ = nullptr;
};

class QuotaDispatcherHost_RequestStorageQuota_ParamsDataView {
 public:
  QuotaDispatcherHost_RequestStorageQuota_ParamsDataView() {}

  QuotaDispatcherHost_RequestStorageQuota_ParamsDataView(
      internal::QuotaDispatcherHost_RequestStorageQuota_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStorageType(UserType* output) const {
    auto data_value = data_->storage_type;
    return mojo::internal::Deserialize<::blink::mojom::StorageType>(
        data_value, output);
  }

  ::blink::mojom::StorageType storage_type() const {
    return static_cast<::blink::mojom::StorageType>(data_->storage_type);
  }
  uint64_t requested_size() const {
    return data_->requested_size;
  }
 private:
  internal::QuotaDispatcherHost_RequestStorageQuota_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class QuotaDispatcherHost_RequestStorageQuota_ResponseParamsDataView {
 public:
  QuotaDispatcherHost_RequestStorageQuota_ResponseParamsDataView() {}

  QuotaDispatcherHost_RequestStorageQuota_ResponseParamsDataView(
      internal::QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::QuotaStatusCode>(
        data_value, output);
  }

  ::blink::mojom::QuotaStatusCode error() const {
    return static_cast<::blink::mojom::QuotaStatusCode>(data_->error);
  }
  int64_t current_usage() const {
    return data_->current_usage;
  }
  int64_t granted_quota() const {
    return data_->granted_quota;
  }
 private:
  internal::QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace blink {
namespace mojom {

inline void QuotaDispatcherHost_QueryStorageUsageAndQuota_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}




inline void QuotaDispatcherHost_RequestStorageQuota_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_DISPATCHER_HOST_MOJOM_SHARED_H_

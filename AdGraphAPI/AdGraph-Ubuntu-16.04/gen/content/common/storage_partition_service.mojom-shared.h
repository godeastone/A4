// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_STORAGE_PARTITION_SERVICE_MOJOM_SHARED_H_
#define CONTENT_COMMON_STORAGE_PARTITION_SERVICE_MOJOM_SHARED_H_

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
#include "content/common/storage_partition_service.mojom-shared-internal.h"
#include "content/common/leveldb_wrapper.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"

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
class SessionStorageNamespaceInterfaceBase {};

using SessionStorageNamespacePtrDataView =
    mojo::InterfacePtrDataView<SessionStorageNamespaceInterfaceBase>;
using SessionStorageNamespaceRequestDataView =
    mojo::InterfaceRequestDataView<SessionStorageNamespaceInterfaceBase>;
using SessionStorageNamespaceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SessionStorageNamespaceInterfaceBase>;
using SessionStorageNamespaceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SessionStorageNamespaceInterfaceBase>;
class StoragePartitionServiceInterfaceBase {};

using StoragePartitionServicePtrDataView =
    mojo::InterfacePtrDataView<StoragePartitionServiceInterfaceBase>;
using StoragePartitionServiceRequestDataView =
    mojo::InterfaceRequestDataView<StoragePartitionServiceInterfaceBase>;
using StoragePartitionServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<StoragePartitionServiceInterfaceBase>;
using StoragePartitionServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<StoragePartitionServiceInterfaceBase>;
class SessionStorageNamespace_OpenArea_ParamsDataView {
 public:
  SessionStorageNamespace_OpenArea_ParamsDataView() {}

  SessionStorageNamespace_OpenArea_ParamsDataView(
      internal::SessionStorageNamespace_OpenArea_Params_Data* data,
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
  UserType TakeDatabase() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::LevelDBWrapperAssociatedRequestDataView>(
            &data_->database, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::SessionStorageNamespace_OpenArea_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SessionStorageNamespace_Clone_ParamsDataView {
 public:
  SessionStorageNamespace_Clone_ParamsDataView() {}

  SessionStorageNamespace_Clone_ParamsDataView(
      internal::SessionStorageNamespace_Clone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCloneToNamespaceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCloneToNamespace(UserType* output) {
    auto* pointer = data_->clone_to_namespace.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::SessionStorageNamespace_Clone_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StoragePartitionService_OpenLocalStorage_ParamsDataView {
 public:
  StoragePartitionService_OpenLocalStorage_ParamsDataView() {}

  StoragePartitionService_OpenLocalStorage_ParamsDataView(
      internal::StoragePartitionService_OpenLocalStorage_Params_Data* data,
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
  UserType TakeDatabase() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::LevelDBWrapperRequestDataView>(
            &data_->database, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::StoragePartitionService_OpenLocalStorage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StoragePartitionService_OpenSessionStorage_ParamsDataView {
 public:
  StoragePartitionService_OpenSessionStorage_ParamsDataView() {}

  StoragePartitionService_OpenSessionStorage_ParamsDataView(
      internal::StoragePartitionService_OpenSessionStorage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNamespaceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNamespaceId(UserType* output) {
    auto* pointer = data_->namespace_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeSessionNamespace() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::SessionStorageNamespaceRequestDataView>(
            &data_->session_namespace, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::StoragePartitionService_OpenSessionStorage_Params_Data* data_ = nullptr;
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

inline void SessionStorageNamespace_OpenArea_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}


inline void SessionStorageNamespace_Clone_ParamsDataView::GetCloneToNamespaceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->clone_to_namespace.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void StoragePartitionService_OpenLocalStorage_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}


inline void StoragePartitionService_OpenSessionStorage_ParamsDataView::GetNamespaceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->namespace_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_STORAGE_PARTITION_SERVICE_MOJOM_SHARED_H_

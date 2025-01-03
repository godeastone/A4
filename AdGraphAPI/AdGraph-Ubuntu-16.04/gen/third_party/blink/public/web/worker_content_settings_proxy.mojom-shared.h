// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_WEB_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_WEB_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_SHARED_H_

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
#include "third_party/blink/public/web/worker_content_settings_proxy.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
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
class WorkerContentSettingsProxyInterfaceBase {};

using WorkerContentSettingsProxyPtrDataView =
    mojo::InterfacePtrDataView<WorkerContentSettingsProxyInterfaceBase>;
using WorkerContentSettingsProxyRequestDataView =
    mojo::InterfaceRequestDataView<WorkerContentSettingsProxyInterfaceBase>;
using WorkerContentSettingsProxyAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WorkerContentSettingsProxyInterfaceBase>;
using WorkerContentSettingsProxyAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WorkerContentSettingsProxyInterfaceBase>;
class WorkerContentSettingsProxy_AllowIndexedDB_ParamsDataView {
 public:
  WorkerContentSettingsProxy_AllowIndexedDB_ParamsDataView() {}

  WorkerContentSettingsProxy_AllowIndexedDB_ParamsDataView(
      internal::WorkerContentSettingsProxy_AllowIndexedDB_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::WorkerContentSettingsProxy_AllowIndexedDB_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WorkerContentSettingsProxy_AllowIndexedDB_ResponseParamsDataView {
 public:
  WorkerContentSettingsProxy_AllowIndexedDB_ResponseParamsDataView() {}

  WorkerContentSettingsProxy_AllowIndexedDB_ResponseParamsDataView(
      internal::WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams_Data* data_ = nullptr;
};

class WorkerContentSettingsProxy_RequestFileSystemAccessSync_ParamsDataView {
 public:
  WorkerContentSettingsProxy_RequestFileSystemAccessSync_ParamsDataView() {}

  WorkerContentSettingsProxy_RequestFileSystemAccessSync_ParamsDataView(
      internal::WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params_Data* data_ = nullptr;
};

class WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParamsDataView {
 public:
  WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParamsDataView() {}

  WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParamsDataView(
      internal::WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace blink {
namespace mojom {

inline void WorkerContentSettingsProxy_AllowIndexedDB_ParamsDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}









}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_WEB_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_SHARED_H_

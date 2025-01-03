// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_HOST_MOJOM_SHARED_H_
#define CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_HOST_MOJOM_SHARED_H_

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
#include "content/common/shared_worker/shared_worker_host.mojom-shared-internal.h"
#include "third_party/blink/public/platform/web_feature.mojom-shared.h"

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
class SharedWorkerHostInterfaceBase {};

using SharedWorkerHostPtrDataView =
    mojo::InterfacePtrDataView<SharedWorkerHostInterfaceBase>;
using SharedWorkerHostRequestDataView =
    mojo::InterfaceRequestDataView<SharedWorkerHostInterfaceBase>;
using SharedWorkerHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SharedWorkerHostInterfaceBase>;
using SharedWorkerHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SharedWorkerHostInterfaceBase>;
class SharedWorkerHost_OnConnected_ParamsDataView {
 public:
  SharedWorkerHost_OnConnected_ParamsDataView() {}

  SharedWorkerHost_OnConnected_ParamsDataView(
      internal::SharedWorkerHost_OnConnected_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t connection_id() const {
    return data_->connection_id;
  }
 private:
  internal::SharedWorkerHost_OnConnected_Params_Data* data_ = nullptr;
};

class SharedWorkerHost_OnContextClosed_ParamsDataView {
 public:
  SharedWorkerHost_OnContextClosed_ParamsDataView() {}

  SharedWorkerHost_OnContextClosed_ParamsDataView(
      internal::SharedWorkerHost_OnContextClosed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SharedWorkerHost_OnContextClosed_Params_Data* data_ = nullptr;
};

class SharedWorkerHost_OnReadyForInspection_ParamsDataView {
 public:
  SharedWorkerHost_OnReadyForInspection_ParamsDataView() {}

  SharedWorkerHost_OnReadyForInspection_ParamsDataView(
      internal::SharedWorkerHost_OnReadyForInspection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SharedWorkerHost_OnReadyForInspection_Params_Data* data_ = nullptr;
};

class SharedWorkerHost_OnScriptLoaded_ParamsDataView {
 public:
  SharedWorkerHost_OnScriptLoaded_ParamsDataView() {}

  SharedWorkerHost_OnScriptLoaded_ParamsDataView(
      internal::SharedWorkerHost_OnScriptLoaded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SharedWorkerHost_OnScriptLoaded_Params_Data* data_ = nullptr;
};

class SharedWorkerHost_OnScriptLoadFailed_ParamsDataView {
 public:
  SharedWorkerHost_OnScriptLoadFailed_ParamsDataView() {}

  SharedWorkerHost_OnScriptLoadFailed_ParamsDataView(
      internal::SharedWorkerHost_OnScriptLoadFailed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SharedWorkerHost_OnScriptLoadFailed_Params_Data* data_ = nullptr;
};

class SharedWorkerHost_OnFeatureUsed_ParamsDataView {
 public:
  SharedWorkerHost_OnFeatureUsed_ParamsDataView() {}

  SharedWorkerHost_OnFeatureUsed_ParamsDataView(
      internal::SharedWorkerHost_OnFeatureUsed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFeature(UserType* output) const {
    auto data_value = data_->feature;
    return mojo::internal::Deserialize<::blink::mojom::WebFeature>(
        data_value, output);
  }

  ::blink::mojom::WebFeature feature() const {
    return static_cast<::blink::mojom::WebFeature>(data_->feature);
  }
 private:
  internal::SharedWorkerHost_OnFeatureUsed_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace content {
namespace mojom {














}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_HOST_MOJOM_SHARED_H_

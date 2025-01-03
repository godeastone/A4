// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_CLIENT_MOJOM_SHARED_H_
#define CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_CLIENT_MOJOM_SHARED_H_

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
#include "content/common/shared_worker/shared_worker_client.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/shared_worker/shared_worker_creation_context_type.mojom-shared.h"
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
class SharedWorkerClientInterfaceBase {};

using SharedWorkerClientPtrDataView =
    mojo::InterfacePtrDataView<SharedWorkerClientInterfaceBase>;
using SharedWorkerClientRequestDataView =
    mojo::InterfaceRequestDataView<SharedWorkerClientInterfaceBase>;
using SharedWorkerClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SharedWorkerClientInterfaceBase>;
using SharedWorkerClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SharedWorkerClientInterfaceBase>;
class SharedWorkerClient_OnCreated_ParamsDataView {
 public:
  SharedWorkerClient_OnCreated_ParamsDataView() {}

  SharedWorkerClient_OnCreated_ParamsDataView(
      internal::SharedWorkerClient_OnCreated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCreationContextType(UserType* output) const {
    auto data_value = data_->creation_context_type;
    return mojo::internal::Deserialize<::blink::mojom::SharedWorkerCreationContextType>(
        data_value, output);
  }

  ::blink::mojom::SharedWorkerCreationContextType creation_context_type() const {
    return static_cast<::blink::mojom::SharedWorkerCreationContextType>(data_->creation_context_type);
  }
 private:
  internal::SharedWorkerClient_OnCreated_Params_Data* data_ = nullptr;
};

class SharedWorkerClient_OnConnected_ParamsDataView {
 public:
  SharedWorkerClient_OnConnected_ParamsDataView() {}

  SharedWorkerClient_OnConnected_ParamsDataView(
      internal::SharedWorkerClient_OnConnected_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFeaturesUsedDataView(
      mojo::ArrayDataView<::blink::mojom::WebFeature>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFeaturesUsed(UserType* output) {
    auto* pointer = data_->features_used.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::WebFeature>>(
        pointer, output, context_);
  }
 private:
  internal::SharedWorkerClient_OnConnected_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SharedWorkerClient_OnScriptLoadFailed_ParamsDataView {
 public:
  SharedWorkerClient_OnScriptLoadFailed_ParamsDataView() {}

  SharedWorkerClient_OnScriptLoadFailed_ParamsDataView(
      internal::SharedWorkerClient_OnScriptLoadFailed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SharedWorkerClient_OnScriptLoadFailed_Params_Data* data_ = nullptr;
};

class SharedWorkerClient_OnFeatureUsed_ParamsDataView {
 public:
  SharedWorkerClient_OnFeatureUsed_ParamsDataView() {}

  SharedWorkerClient_OnFeatureUsed_ParamsDataView(
      internal::SharedWorkerClient_OnFeatureUsed_Params_Data* data,
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
  internal::SharedWorkerClient_OnFeatureUsed_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace content {
namespace mojom {



inline void SharedWorkerClient_OnConnected_ParamsDataView::GetFeaturesUsedDataView(
    mojo::ArrayDataView<::blink::mojom::WebFeature>* output) {
  auto pointer = data_->features_used.Get();
  *output = mojo::ArrayDataView<::blink::mojom::WebFeature>(pointer, context_);
}







}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_CLIENT_MOJOM_SHARED_H_

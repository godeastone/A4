// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_CONNECTOR_MOJOM_SHARED_H_
#define CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_CONNECTOR_MOJOM_SHARED_H_

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
#include "content/common/shared_worker/shared_worker_connector.mojom-shared-internal.h"
#include "content/common/shared_worker/shared_worker_client.mojom-shared.h"
#include "content/common/shared_worker/shared_worker_info.mojom-shared.h"
#include "third_party/blink/public/mojom/shared_worker/shared_worker_creation_context_type.mojom-shared.h"

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
class SharedWorkerConnectorInterfaceBase {};

using SharedWorkerConnectorPtrDataView =
    mojo::InterfacePtrDataView<SharedWorkerConnectorInterfaceBase>;
using SharedWorkerConnectorRequestDataView =
    mojo::InterfaceRequestDataView<SharedWorkerConnectorInterfaceBase>;
using SharedWorkerConnectorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SharedWorkerConnectorInterfaceBase>;
using SharedWorkerConnectorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SharedWorkerConnectorInterfaceBase>;
class SharedWorkerConnector_Connect_ParamsDataView {
 public:
  SharedWorkerConnector_Connect_ParamsDataView() {}

  SharedWorkerConnector_Connect_ParamsDataView(
      internal::SharedWorkerConnector_Connect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      ::content::mojom::SharedWorkerInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::content::mojom::SharedWorkerInfoDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::SharedWorkerClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCreationContextType(UserType* output) const {
    auto data_value = data_->creation_context_type;
    return mojo::internal::Deserialize<::blink::mojom::SharedWorkerCreationContextType>(
        data_value, output);
  }

  ::blink::mojom::SharedWorkerCreationContextType creation_context_type() const {
    return static_cast<::blink::mojom::SharedWorkerCreationContextType>(data_->creation_context_type);
  }
  mojo::ScopedMessagePipeHandle TakeMessagePort() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->message_port, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::SharedWorkerConnector_Connect_Params_Data* data_ = nullptr;
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

inline void SharedWorkerConnector_Connect_ParamsDataView::GetInfoDataView(
    ::content::mojom::SharedWorkerInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = ::content::mojom::SharedWorkerInfoDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_CONNECTOR_MOJOM_SHARED_H_

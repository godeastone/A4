// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_MOJOM_SHARED_H_
#define CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_MOJOM_SHARED_H_

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
#include "content/common/shared_worker/shared_worker.mojom-shared-internal.h"
#include "third_party/blink/public/web/devtools_agent.mojom-shared.h"

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
class SharedWorkerInterfaceBase {};

using SharedWorkerPtrDataView =
    mojo::InterfacePtrDataView<SharedWorkerInterfaceBase>;
using SharedWorkerRequestDataView =
    mojo::InterfaceRequestDataView<SharedWorkerInterfaceBase>;
using SharedWorkerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SharedWorkerInterfaceBase>;
using SharedWorkerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SharedWorkerInterfaceBase>;
class SharedWorker_Connect_ParamsDataView {
 public:
  SharedWorker_Connect_ParamsDataView() {}

  SharedWorker_Connect_ParamsDataView(
      internal::SharedWorker_Connect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t connection_id() const {
    return data_->connection_id;
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
  internal::SharedWorker_Connect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SharedWorker_Terminate_ParamsDataView {
 public:
  SharedWorker_Terminate_ParamsDataView() {}

  SharedWorker_Terminate_ParamsDataView(
      internal::SharedWorker_Terminate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SharedWorker_Terminate_Params_Data* data_ = nullptr;
};

class SharedWorker_BindDevToolsAgent_ParamsDataView {
 public:
  SharedWorker_BindDevToolsAgent_ParamsDataView() {}

  SharedWorker_BindDevToolsAgent_ParamsDataView(
      internal::SharedWorker_BindDevToolsAgent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeDevtoolsAgent() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::DevToolsAgentAssociatedRequestDataView>(
            &data_->devtools_agent, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::SharedWorker_BindDevToolsAgent_Params_Data* data_ = nullptr;
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








}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_MOJOM_SHARED_H_

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_FACTORY_MOJOM_SHARED_H_
#define CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_FACTORY_MOJOM_SHARED_H_

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
#include "content/common/shared_worker/shared_worker_factory.mojom-shared-internal.h"
#include "content/common/service_worker/service_worker_provider.mojom-shared.h"
#include "content/common/shared_worker/shared_worker.mojom-shared.h"
#include "content/common/shared_worker/shared_worker_host.mojom-shared.h"
#include "content/common/shared_worker/shared_worker_info.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-shared.h"
#include "third_party/blink/public/web/worker_content_settings_proxy.mojom-shared.h"

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
class SharedWorkerFactoryInterfaceBase {};

using SharedWorkerFactoryPtrDataView =
    mojo::InterfacePtrDataView<SharedWorkerFactoryInterfaceBase>;
using SharedWorkerFactoryRequestDataView =
    mojo::InterfaceRequestDataView<SharedWorkerFactoryInterfaceBase>;
using SharedWorkerFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SharedWorkerFactoryInterfaceBase>;
using SharedWorkerFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SharedWorkerFactoryInterfaceBase>;
class SharedWorkerFactory_CreateSharedWorker_ParamsDataView {
 public:
  SharedWorkerFactory_CreateSharedWorker_ParamsDataView() {}

  SharedWorkerFactory_CreateSharedWorker_ParamsDataView(
      internal::SharedWorkerFactory_CreateSharedWorker_Params_Data* data,
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
  bool pause_on_start() const {
    return data_->pause_on_start;
  }
  inline void GetDevtoolsWorkerTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevtoolsWorkerToken(UserType* output) {
    auto* pointer = data_->devtools_worker_token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeContentSettings() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::WorkerContentSettingsProxyPtrDataView>(
            &data_->content_settings, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetServiceWorkerProviderInfoDataView(
      ::content::mojom::ServiceWorkerProviderInfoForSharedWorkerDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServiceWorkerProviderInfo(UserType* output) {
    auto* pointer = data_->service_worker_provider_info.Get();
    return mojo::internal::Deserialize<::content::mojom::ServiceWorkerProviderInfoForSharedWorkerDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeScriptLoaderFactoryPtrInfo() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderFactoryAssociatedPtrInfoDataView>(
            &data_->script_loader_factory_ptr_info, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::SharedWorkerHostPtrDataView>(
            &data_->host, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeSharedWorker() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::SharedWorkerRequestDataView>(
            &data_->shared_worker, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeInterfaceProvider() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
            &data_->interface_provider, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::SharedWorkerFactory_CreateSharedWorker_Params_Data* data_ = nullptr;
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

inline void SharedWorkerFactory_CreateSharedWorker_ParamsDataView::GetInfoDataView(
    ::content::mojom::SharedWorkerInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = ::content::mojom::SharedWorkerInfoDataView(pointer, context_);
}
inline void SharedWorkerFactory_CreateSharedWorker_ParamsDataView::GetDevtoolsWorkerTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->devtools_worker_token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}
inline void SharedWorkerFactory_CreateSharedWorker_ParamsDataView::GetServiceWorkerProviderInfoDataView(
    ::content::mojom::ServiceWorkerProviderInfoForSharedWorkerDataView* output) {
  auto pointer = data_->service_worker_provider_info.Get();
  *output = ::content::mojom::ServiceWorkerProviderInfoForSharedWorkerDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_FACTORY_MOJOM_SHARED_H_

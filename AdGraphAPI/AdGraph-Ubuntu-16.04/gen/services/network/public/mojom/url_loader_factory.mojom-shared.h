// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/url_loader_factory.mojom-shared-internal.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared.h"
#include "services/network/public/mojom/url_loader.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace network {
namespace mojom {


}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {
// Interface base classes. They are used for type safety check.
class URLLoaderFactoryInterfaceBase {};

using URLLoaderFactoryPtrDataView =
    mojo::InterfacePtrDataView<URLLoaderFactoryInterfaceBase>;
using URLLoaderFactoryRequestDataView =
    mojo::InterfaceRequestDataView<URLLoaderFactoryInterfaceBase>;
using URLLoaderFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<URLLoaderFactoryInterfaceBase>;
using URLLoaderFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<URLLoaderFactoryInterfaceBase>;
class URLLoaderFactory_CreateLoaderAndStart_ParamsDataView {
 public:
  URLLoaderFactory_CreateLoaderAndStart_ParamsDataView() {}

  URLLoaderFactory_CreateLoaderAndStart_ParamsDataView(
      internal::URLLoaderFactory_CreateLoaderAndStart_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeLoader() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderRequestDataView>(
            &data_->loader, &result, context_);
    DCHECK(ret);
    return result;
  }
  int32_t routing_id() const {
    return data_->routing_id;
  }
  int32_t request_id() const {
    return data_->request_id;
  }
  uint32_t options() const {
    return data_->options;
  }
  inline void GetRequestDataView(
      ::network::mojom::URLRequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequest(UserType* output) {
    auto* pointer = data_->request.Get();
    return mojo::internal::Deserialize<::network::mojom::URLRequestDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetTrafficAnnotationDataView(
      ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTrafficAnnotation(UserType* output) {
    auto* pointer = data_->traffic_annotation.Get();
    return mojo::internal::Deserialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
        pointer, output, context_);
  }
 private:
  internal::URLLoaderFactory_CreateLoaderAndStart_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class URLLoaderFactory_Clone_ParamsDataView {
 public:
  URLLoaderFactory_Clone_ParamsDataView() {}

  URLLoaderFactory_Clone_ParamsDataView(
      internal::URLLoaderFactory_Clone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeFactory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderFactoryRequestDataView>(
            &data_->factory, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::URLLoaderFactory_Clone_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace network {
namespace mojom {

inline void URLLoaderFactory_CreateLoaderAndStart_ParamsDataView::GetRequestDataView(
    ::network::mojom::URLRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = ::network::mojom::URLRequestDataView(pointer, context_);
}
inline void URLLoaderFactory_CreateLoaderAndStart_ParamsDataView::GetTrafficAnnotationDataView(
    ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output) {
  auto pointer = data_->traffic_annotation.Get();
  *output = ::network::mojom::MutableNetworkTrafficAnnotationTagDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_SHARED_H_

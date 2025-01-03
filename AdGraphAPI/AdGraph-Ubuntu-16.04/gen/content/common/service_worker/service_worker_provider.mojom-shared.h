// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_SHARED_H_
#define CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_SHARED_H_

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
#include "content/common/service_worker/service_worker_provider.mojom-shared-internal.h"
#include "content/common/service_worker/service_worker_container.mojom-shared.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_provider_type.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
class ServiceWorkerProviderInfoForSharedWorkerDataView;

class ServiceWorkerProviderInfoForStartWorkerDataView;

class ServiceWorkerProviderHostInfoDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::ServiceWorkerProviderInfoForSharedWorkerDataView> {
  using Data = ::content::mojom::internal::ServiceWorkerProviderInfoForSharedWorker_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::ServiceWorkerProviderInfoForStartWorkerDataView> {
  using Data = ::content::mojom::internal::ServiceWorkerProviderInfoForStartWorker_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::ServiceWorkerProviderHostInfoDataView> {
  using Data = ::content::mojom::internal::ServiceWorkerProviderHostInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ServiceWorkerWorkerClientInterfaceBase {};

using ServiceWorkerWorkerClientPtrDataView =
    mojo::InterfacePtrDataView<ServiceWorkerWorkerClientInterfaceBase>;
using ServiceWorkerWorkerClientRequestDataView =
    mojo::InterfaceRequestDataView<ServiceWorkerWorkerClientInterfaceBase>;
using ServiceWorkerWorkerClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceWorkerWorkerClientInterfaceBase>;
using ServiceWorkerWorkerClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceWorkerWorkerClientInterfaceBase>;
class ServiceWorkerProviderInfoForSharedWorkerDataView {
 public:
  ServiceWorkerProviderInfoForSharedWorkerDataView() {}

  ServiceWorkerProviderInfoForSharedWorkerDataView(
      internal::ServiceWorkerProviderInfoForSharedWorker_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t provider_id() const {
    return data_->provider_id;
  }
  template <typename UserType>
  UserType TakeHostPtrInfo() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::ServiceWorkerContainerHostAssociatedPtrInfoDataView>(
            &data_->host_ptr_info, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::ServiceWorkerContainerAssociatedRequestDataView>(
            &data_->client_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorkerProviderInfoForSharedWorker_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerProviderInfoForStartWorkerDataView {
 public:
  ServiceWorkerProviderInfoForStartWorkerDataView() {}

  ServiceWorkerProviderInfoForStartWorkerDataView(
      internal::ServiceWorkerProviderInfoForStartWorker_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t provider_id() const {
    return data_->provider_id;
  }
  template <typename UserType>
  UserType TakeHostPtrInfo() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::ServiceWorkerContainerHostAssociatedPtrInfoDataView>(
            &data_->host_ptr_info, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::ServiceWorkerContainerAssociatedRequestDataView>(
            &data_->client_request, &result, context_);
    DCHECK(ret);
    return result;
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
  UserType TakeInterfaceProvider() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
            &data_->interface_provider, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorkerProviderInfoForStartWorker_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerProviderHostInfoDataView {
 public:
  ServiceWorkerProviderHostInfoDataView() {}

  ServiceWorkerProviderHostInfoDataView(
      internal::ServiceWorkerProviderHostInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t provider_id() const {
    return data_->provider_id;
  }
  int32_t route_id() const {
    return data_->route_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerProviderType>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerProviderType type() const {
    return static_cast<::blink::mojom::ServiceWorkerProviderType>(data_->type);
  }
  bool is_parent_frame_secure() const {
    return data_->is_parent_frame_secure;
  }
  template <typename UserType>
  UserType TakeHostRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::ServiceWorkerContainerHostAssociatedRequestDataView>(
            &data_->host_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClientPtrInfo() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::ServiceWorkerContainerAssociatedPtrInfoDataView>(
            &data_->client_ptr_info, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorkerProviderHostInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerWorkerClient_SetControllerServiceWorker_ParamsDataView {
 public:
  ServiceWorkerWorkerClient_SetControllerServiceWorker_ParamsDataView() {}

  ServiceWorkerWorkerClient_SetControllerServiceWorker_ParamsDataView(
      internal::ServiceWorkerWorkerClient_SetControllerServiceWorker_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t controller_version_id() const {
    return data_->controller_version_id;
  }
 private:
  internal::ServiceWorkerWorkerClient_SetControllerServiceWorker_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::ServiceWorkerProviderInfoForSharedWorkerDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::ServiceWorkerProviderInfoForSharedWorkerDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::ServiceWorkerProviderInfoForSharedWorker_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->provider_id = CallWithContext(Traits::provider_id, input, custom_context);
    decltype(CallWithContext(Traits::host_ptr_info, input, custom_context)) in_host_ptr_info = CallWithContext(Traits::host_ptr_info, input, custom_context);
    mojo::internal::Serialize<::content::mojom::ServiceWorkerContainerHostAssociatedPtrInfoDataView>(
        in_host_ptr_info, &(*output)->host_ptr_info, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->host_ptr_info),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid host_ptr_info in ServiceWorkerProviderInfoForSharedWorker struct");
    decltype(CallWithContext(Traits::client_request, input, custom_context)) in_client_request = CallWithContext(Traits::client_request, input, custom_context);
    mojo::internal::Serialize<::content::mojom::ServiceWorkerContainerAssociatedRequestDataView>(
        in_client_request, &(*output)->client_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->client_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid client_request in ServiceWorkerProviderInfoForSharedWorker struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::ServiceWorkerProviderInfoForSharedWorker_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::ServiceWorkerProviderInfoForSharedWorkerDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::ServiceWorkerProviderInfoForStartWorkerDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::ServiceWorkerProviderInfoForStartWorkerDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::ServiceWorkerProviderInfoForStartWorker_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->provider_id = CallWithContext(Traits::provider_id, input, custom_context);
    decltype(CallWithContext(Traits::host_ptr_info, input, custom_context)) in_host_ptr_info = CallWithContext(Traits::host_ptr_info, input, custom_context);
    mojo::internal::Serialize<::content::mojom::ServiceWorkerContainerHostAssociatedPtrInfoDataView>(
        in_host_ptr_info, &(*output)->host_ptr_info, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->host_ptr_info),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid host_ptr_info in ServiceWorkerProviderInfoForStartWorker struct");
    decltype(CallWithContext(Traits::client_request, input, custom_context)) in_client_request = CallWithContext(Traits::client_request, input, custom_context);
    mojo::internal::Serialize<::content::mojom::ServiceWorkerContainerAssociatedRequestDataView>(
        in_client_request, &(*output)->client_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->client_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid client_request in ServiceWorkerProviderInfoForStartWorker struct");
    decltype(CallWithContext(Traits::script_loader_factory_ptr_info, input, custom_context)) in_script_loader_factory_ptr_info = CallWithContext(Traits::script_loader_factory_ptr_info, input, custom_context);
    mojo::internal::Serialize<::network::mojom::URLLoaderFactoryAssociatedPtrInfoDataView>(
        in_script_loader_factory_ptr_info, &(*output)->script_loader_factory_ptr_info, context);
    decltype(CallWithContext(Traits::interface_provider, input, custom_context)) in_interface_provider = CallWithContext(Traits::interface_provider, input, custom_context);
    mojo::internal::Serialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
        in_interface_provider, &(*output)->interface_provider, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->interface_provider),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid interface_provider in ServiceWorkerProviderInfoForStartWorker struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::ServiceWorkerProviderInfoForStartWorker_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::ServiceWorkerProviderInfoForStartWorkerDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::ServiceWorkerProviderHostInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::ServiceWorkerProviderHostInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::ServiceWorkerProviderHostInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->provider_id = CallWithContext(Traits::provider_id, input, custom_context);
    (*output)->route_id = CallWithContext(Traits::route_id, input, custom_context);
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerProviderType>(
        CallWithContext(Traits::type, input, custom_context), &(*output)->type);
    (*output)->is_parent_frame_secure = CallWithContext(Traits::is_parent_frame_secure, input, custom_context);
    decltype(CallWithContext(Traits::host_request, input, custom_context)) in_host_request = CallWithContext(Traits::host_request, input, custom_context);
    mojo::internal::Serialize<::content::mojom::ServiceWorkerContainerHostAssociatedRequestDataView>(
        in_host_request, &(*output)->host_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->host_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid host_request in ServiceWorkerProviderHostInfo struct");
    decltype(CallWithContext(Traits::client_ptr_info, input, custom_context)) in_client_ptr_info = CallWithContext(Traits::client_ptr_info, input, custom_context);
    mojo::internal::Serialize<::content::mojom::ServiceWorkerContainerAssociatedPtrInfoDataView>(
        in_client_ptr_info, &(*output)->client_ptr_info, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->client_ptr_info),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid client_ptr_info in ServiceWorkerProviderHostInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::ServiceWorkerProviderHostInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::ServiceWorkerProviderHostInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {










}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_SHARED_H_

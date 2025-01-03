// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_SHARED_H_
#define CONTENT_COMMON_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_SHARED_H_

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
#include "content/common/service_worker/controller_service_worker.mojom-shared-internal.h"
#include "content/common/service_worker/dispatch_fetch_event_params.mojom-shared.h"
#include "content/common/service_worker/service_worker_event_dispatcher.mojom-shared.h"
#include "content/common/service_worker/service_worker_fetch_response_callback.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "services/network/public/mojom/url_loader.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-shared.h"
#include "third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
class ControllerServiceWorkerInfoDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::ControllerServiceWorkerInfoDataView> {
  using Data = ::content::mojom::internal::ControllerServiceWorkerInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ControllerServiceWorkerInterfaceBase {};

using ControllerServiceWorkerPtrDataView =
    mojo::InterfacePtrDataView<ControllerServiceWorkerInterfaceBase>;
using ControllerServiceWorkerRequestDataView =
    mojo::InterfaceRequestDataView<ControllerServiceWorkerInterfaceBase>;
using ControllerServiceWorkerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ControllerServiceWorkerInterfaceBase>;
using ControllerServiceWorkerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ControllerServiceWorkerInterfaceBase>;
class ControllerServiceWorkerInfoDataView {
 public:
  ControllerServiceWorkerInfoDataView() {}

  ControllerServiceWorkerInfoDataView(
      internal::ControllerServiceWorkerInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeEndpoint() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::ControllerServiceWorkerPtrDataView>(
            &data_->endpoint, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetClientIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientId(UserType* output) {
    auto* pointer = data_->client_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetObjectInfoDataView(
      ::blink::mojom::ServiceWorkerObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadObjectInfo(UserType* output) {
    auto* pointer = data_->object_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ControllerServiceWorkerInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ControllerServiceWorker_DispatchFetchEvent_ParamsDataView {
 public:
  ControllerServiceWorker_DispatchFetchEvent_ParamsDataView() {}

  ControllerServiceWorker_DispatchFetchEvent_ParamsDataView(
      internal::ControllerServiceWorker_DispatchFetchEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      ::content::mojom::DispatchFetchEventParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::content::mojom::DispatchFetchEventParamsDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeResponseCallback() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::ServiceWorkerFetchResponseCallbackPtrDataView>(
            &data_->response_callback, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ControllerServiceWorker_DispatchFetchEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ControllerServiceWorker_DispatchFetchEvent_ResponseParamsDataView {
 public:
  ControllerServiceWorker_DispatchFetchEvent_ResponseParamsDataView() {}

  ControllerServiceWorker_DispatchFetchEvent_ResponseParamsDataView(
      internal::ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
  }
  inline void GetDispatchEventTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDispatchEventTime(UserType* output) {
    auto* pointer = data_->dispatch_event_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ControllerServiceWorker_Clone_ParamsDataView {
 public:
  ControllerServiceWorker_Clone_ParamsDataView() {}

  ControllerServiceWorker_Clone_ParamsDataView(
      internal::ControllerServiceWorker_Clone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeController() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::ControllerServiceWorkerRequestDataView>(
            &data_->controller, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ControllerServiceWorker_Clone_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::ControllerServiceWorkerInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::ControllerServiceWorkerInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::ControllerServiceWorkerInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::endpoint, input, custom_context)) in_endpoint = CallWithContext(Traits::endpoint, input, custom_context);
    mojo::internal::Serialize<::content::mojom::ControllerServiceWorkerPtrDataView>(
        in_endpoint, &(*output)->endpoint, context);
    decltype(CallWithContext(Traits::client_id, input, custom_context)) in_client_id = CallWithContext(Traits::client_id, input, custom_context);
    typename decltype((*output)->client_id)::BaseType::BufferWriter
        client_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_client_id, buffer, &client_id_writer, context);
    (*output)->client_id.Set(
        client_id_writer.is_null() ? nullptr : client_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->client_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null client_id in ControllerServiceWorkerInfo struct");
    decltype(CallWithContext(Traits::object_info, input, custom_context)) in_object_info = CallWithContext(Traits::object_info, input, custom_context);
    typename decltype((*output)->object_info)::BaseType::BufferWriter
        object_info_writer;
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        in_object_info, buffer, &object_info_writer, context);
    (*output)->object_info.Set(
        object_info_writer.is_null() ? nullptr : object_info_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::ControllerServiceWorkerInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::ControllerServiceWorkerInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {

inline void ControllerServiceWorkerInfoDataView::GetClientIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->client_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ControllerServiceWorkerInfoDataView::GetObjectInfoDataView(
    ::blink::mojom::ServiceWorkerObjectInfoDataView* output) {
  auto pointer = data_->object_info.Get();
  *output = ::blink::mojom::ServiceWorkerObjectInfoDataView(pointer, context_);
}


inline void ControllerServiceWorker_DispatchFetchEvent_ParamsDataView::GetParamsDataView(
    ::content::mojom::DispatchFetchEventParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::content::mojom::DispatchFetchEventParamsDataView(pointer, context_);
}


inline void ControllerServiceWorker_DispatchFetchEvent_ResponseParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_SHARED_H_

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_DISPATCH_FETCH_EVENT_PARAMS_MOJOM_SHARED_H_
#define CONTENT_COMMON_SERVICE_WORKER_DISPATCH_FETCH_EVENT_PARAMS_MOJOM_SHARED_H_

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
#include "content/common/service_worker/dispatch_fetch_event_params.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
class FetchEventPreloadHandleDataView;

class DispatchFetchEventParamsDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::FetchEventPreloadHandleDataView> {
  using Data = ::content::mojom::internal::FetchEventPreloadHandle_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::DispatchFetchEventParamsDataView> {
  using Data = ::content::mojom::internal::DispatchFetchEventParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
class FetchEventPreloadHandleDataView {
 public:
  FetchEventPreloadHandleDataView() {}

  FetchEventPreloadHandleDataView(
      internal::FetchEventPreloadHandle_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeUrlLoader() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderPtrDataView>(
            &data_->url_loader, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeUrlLoaderClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderClientRequestDataView>(
            &data_->url_loader_client_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FetchEventPreloadHandle_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DispatchFetchEventParamsDataView {
 public:
  DispatchFetchEventParamsDataView() {}

  DispatchFetchEventParamsDataView(
      internal::DispatchFetchEventParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestDataView(
      ::network::mojom::URLRequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequest(UserType* output) {
    auto* pointer = data_->request.Get();
    return mojo::internal::Deserialize<::network::mojom::URLRequestDataView>(
        pointer, output, context_);
  }
  inline void GetRequestBodyBlobPtrsDataView(
      mojo::ArrayDataView<::blink::mojom::BlobPtrDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestBodyBlobPtrs(UserType* output) {
    auto* pointer = data_->request_body_blob_ptrs.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::BlobPtrDataView>>(
        pointer, output, context_);
  }
  inline void GetRequestBodyBlobUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestBodyBlobUuid(UserType* output) {
    auto* pointer = data_->request_body_blob_uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint64_t request_body_blob_size() const {
    return data_->request_body_blob_size;
  }
  template <typename UserType>
  UserType TakeRequestBodyBlob() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobPtrDataView>(
            &data_->request_body_blob, &result, context_);
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
  inline void GetPreloadHandleDataView(
      FetchEventPreloadHandleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPreloadHandle(UserType* output) {
    auto* pointer = data_->preload_handle.Get();
    return mojo::internal::Deserialize<::content::mojom::FetchEventPreloadHandleDataView>(
        pointer, output, context_);
  }
 private:
  internal::DispatchFetchEventParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::FetchEventPreloadHandleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::FetchEventPreloadHandleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::FetchEventPreloadHandle_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::url_loader, input, custom_context)) in_url_loader = CallWithContext(Traits::url_loader, input, custom_context);
    mojo::internal::Serialize<::network::mojom::URLLoaderPtrDataView>(
        in_url_loader, &(*output)->url_loader, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->url_loader),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid url_loader in FetchEventPreloadHandle struct");
    decltype(CallWithContext(Traits::url_loader_client_request, input, custom_context)) in_url_loader_client_request = CallWithContext(Traits::url_loader_client_request, input, custom_context);
    mojo::internal::Serialize<::network::mojom::URLLoaderClientRequestDataView>(
        in_url_loader_client_request, &(*output)->url_loader_client_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->url_loader_client_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid url_loader_client_request in FetchEventPreloadHandle struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::FetchEventPreloadHandle_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::FetchEventPreloadHandleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::DispatchFetchEventParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::DispatchFetchEventParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::DispatchFetchEventParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::request, input, custom_context)) in_request = CallWithContext(Traits::request, input, custom_context);
    typename decltype((*output)->request)::BaseType::BufferWriter
        request_writer;
    mojo::internal::Serialize<::network::mojom::URLRequestDataView>(
        in_request, buffer, &request_writer, context);
    (*output)->request.Set(
        request_writer.is_null() ? nullptr : request_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->request.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null request in DispatchFetchEventParams struct");
    decltype(CallWithContext(Traits::request_body_blob_ptrs, input, custom_context)) in_request_body_blob_ptrs = CallWithContext(Traits::request_body_blob_ptrs, input, custom_context);
    typename decltype((*output)->request_body_blob_ptrs)::BaseType::BufferWriter
        request_body_blob_ptrs_writer;
    const mojo::internal::ContainerValidateParams request_body_blob_ptrs_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::BlobPtrDataView>>(
        in_request_body_blob_ptrs, buffer, &request_body_blob_ptrs_writer, &request_body_blob_ptrs_validate_params,
        context);
    (*output)->request_body_blob_ptrs.Set(
        request_body_blob_ptrs_writer.is_null() ? nullptr : request_body_blob_ptrs_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->request_body_blob_ptrs.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null request_body_blob_ptrs in DispatchFetchEventParams struct");
    decltype(CallWithContext(Traits::request_body_blob_uuid, input, custom_context)) in_request_body_blob_uuid = CallWithContext(Traits::request_body_blob_uuid, input, custom_context);
    typename decltype((*output)->request_body_blob_uuid)::BaseType::BufferWriter
        request_body_blob_uuid_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_request_body_blob_uuid, buffer, &request_body_blob_uuid_writer, context);
    (*output)->request_body_blob_uuid.Set(
        request_body_blob_uuid_writer.is_null() ? nullptr : request_body_blob_uuid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->request_body_blob_uuid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null request_body_blob_uuid in DispatchFetchEventParams struct");
    (*output)->request_body_blob_size = CallWithContext(Traits::request_body_blob_size, input, custom_context);
    decltype(CallWithContext(Traits::request_body_blob, input, custom_context)) in_request_body_blob = CallWithContext(Traits::request_body_blob, input, custom_context);
    mojo::internal::Serialize<::blink::mojom::BlobPtrDataView>(
        in_request_body_blob, &(*output)->request_body_blob, context);
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
        "null client_id in DispatchFetchEventParams struct");
    decltype(CallWithContext(Traits::preload_handle, input, custom_context)) in_preload_handle = CallWithContext(Traits::preload_handle, input, custom_context);
    typename decltype((*output)->preload_handle)::BaseType::BufferWriter
        preload_handle_writer;
    mojo::internal::Serialize<::content::mojom::FetchEventPreloadHandleDataView>(
        in_preload_handle, buffer, &preload_handle_writer, context);
    (*output)->preload_handle.Set(
        preload_handle_writer.is_null() ? nullptr : preload_handle_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::DispatchFetchEventParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::DispatchFetchEventParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {



inline void DispatchFetchEventParamsDataView::GetRequestDataView(
    ::network::mojom::URLRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = ::network::mojom::URLRequestDataView(pointer, context_);
}
inline void DispatchFetchEventParamsDataView::GetRequestBodyBlobPtrsDataView(
    mojo::ArrayDataView<::blink::mojom::BlobPtrDataView>* output) {
  auto pointer = data_->request_body_blob_ptrs.Get();
  *output = mojo::ArrayDataView<::blink::mojom::BlobPtrDataView>(pointer, context_);
}
inline void DispatchFetchEventParamsDataView::GetRequestBodyBlobUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->request_body_blob_uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DispatchFetchEventParamsDataView::GetClientIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->client_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DispatchFetchEventParamsDataView::GetPreloadHandleDataView(
    FetchEventPreloadHandleDataView* output) {
  auto pointer = data_->preload_handle.Get();
  *output = FetchEventPreloadHandleDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_DISPATCH_FETCH_EVENT_PARAMS_MOJOM_SHARED_H_

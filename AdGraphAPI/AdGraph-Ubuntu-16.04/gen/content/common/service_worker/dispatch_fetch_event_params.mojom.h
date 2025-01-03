// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_DISPATCH_FETCH_EVENT_PARAMS_MOJOM_H_
#define CONTENT_COMMON_SERVICE_WORKER_DISPATCH_FETCH_EVENT_PARAMS_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "content/common/service_worker/dispatch_fetch_event_params.mojom-shared.h"
#include "services/network/public/mojom/url_loader.mojom.h"
#include "third_party/blink/public/mojom/blob/blob.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class FetchEventPreloadHandle;
using FetchEventPreloadHandlePtr = mojo::StructPtr<FetchEventPreloadHandle>;

class DispatchFetchEventParams;
using DispatchFetchEventParamsPtr = mojo::StructPtr<DispatchFetchEventParams>;







class CONTENT_EXPORT FetchEventPreloadHandle {
 public:
  using DataView = FetchEventPreloadHandleDataView;
  using Data_ = internal::FetchEventPreloadHandle_Data;

  template <typename... Args>
  static FetchEventPreloadHandlePtr New(Args&&... args) {
    return FetchEventPreloadHandlePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FetchEventPreloadHandlePtr From(const U& u) {
    return mojo::TypeConverter<FetchEventPreloadHandlePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FetchEventPreloadHandle>::Convert(*this);
  }


  FetchEventPreloadHandle();

  FetchEventPreloadHandle(
      ::network::mojom::URLLoaderPtrInfo url_loader,
      ::network::mojom::URLLoaderClientRequest url_loader_client_request);

  ~FetchEventPreloadHandle();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FetchEventPreloadHandlePtr>
  FetchEventPreloadHandlePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FetchEventPreloadHandle>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FetchEventPreloadHandle::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FetchEventPreloadHandle::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FetchEventPreloadHandle_UnserializedMessageContext<
            UserType, FetchEventPreloadHandle::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FetchEventPreloadHandle::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FetchEventPreloadHandle::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FetchEventPreloadHandle_UnserializedMessageContext<
            UserType, FetchEventPreloadHandle::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FetchEventPreloadHandle::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ::network::mojom::URLLoaderPtrInfo url_loader;
  ::network::mojom::URLLoaderClientRequest url_loader_client_request;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(FetchEventPreloadHandle);
};


class CONTENT_EXPORT DispatchFetchEventParams {
 public:
  using DataView = DispatchFetchEventParamsDataView;
  using Data_ = internal::DispatchFetchEventParams_Data;

  template <typename... Args>
  static DispatchFetchEventParamsPtr New(Args&&... args) {
    return DispatchFetchEventParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DispatchFetchEventParamsPtr From(const U& u) {
    return mojo::TypeConverter<DispatchFetchEventParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DispatchFetchEventParams>::Convert(*this);
  }


  DispatchFetchEventParams();

  DispatchFetchEventParams(
      const network::ResourceRequest& request,
      std::vector<::blink::mojom::BlobPtrInfo> request_body_blob_ptrs,
      const std::string& request_body_blob_uuid,
      uint64_t request_body_blob_size,
      ::blink::mojom::BlobPtrInfo request_body_blob,
      const std::string& client_id,
      FetchEventPreloadHandlePtr preload_handle);

  ~DispatchFetchEventParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DispatchFetchEventParamsPtr>
  DispatchFetchEventParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DispatchFetchEventParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DispatchFetchEventParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DispatchFetchEventParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DispatchFetchEventParams_UnserializedMessageContext<
            UserType, DispatchFetchEventParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DispatchFetchEventParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DispatchFetchEventParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DispatchFetchEventParams_UnserializedMessageContext<
            UserType, DispatchFetchEventParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DispatchFetchEventParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  network::ResourceRequest request;
  std::vector<::blink::mojom::BlobPtrInfo> request_body_blob_ptrs;
  std::string request_body_blob_uuid;
  uint64_t request_body_blob_size;
  ::blink::mojom::BlobPtrInfo request_body_blob;
  std::string client_id;
  FetchEventPreloadHandlePtr preload_handle;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(DispatchFetchEventParams);
};

template <typename StructPtrType>
FetchEventPreloadHandlePtr FetchEventPreloadHandle::Clone() const {
  return New(
      mojo::Clone(url_loader),
      mojo::Clone(url_loader_client_request)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FetchEventPreloadHandle>::value>::type*>
bool FetchEventPreloadHandle::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url_loader, other_struct.url_loader))
    return false;
  if (!mojo::Equals(this->url_loader_client_request, other_struct.url_loader_client_request))
    return false;
  return true;
}
template <typename StructPtrType>
DispatchFetchEventParamsPtr DispatchFetchEventParams::Clone() const {
  return New(
      mojo::Clone(request),
      mojo::Clone(request_body_blob_ptrs),
      mojo::Clone(request_body_blob_uuid),
      mojo::Clone(request_body_blob_size),
      mojo::Clone(request_body_blob),
      mojo::Clone(client_id),
      mojo::Clone(preload_handle)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DispatchFetchEventParams>::value>::type*>
bool DispatchFetchEventParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->request, other_struct.request))
    return false;
  if (!mojo::Equals(this->request_body_blob_ptrs, other_struct.request_body_blob_ptrs))
    return false;
  if (!mojo::Equals(this->request_body_blob_uuid, other_struct.request_body_blob_uuid))
    return false;
  if (!mojo::Equals(this->request_body_blob_size, other_struct.request_body_blob_size))
    return false;
  if (!mojo::Equals(this->request_body_blob, other_struct.request_body_blob))
    return false;
  if (!mojo::Equals(this->client_id, other_struct.client_id))
    return false;
  if (!mojo::Equals(this->preload_handle, other_struct.preload_handle))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::FetchEventPreloadHandle::DataView,
                                         ::content::mojom::FetchEventPreloadHandlePtr> {
  static bool IsNull(const ::content::mojom::FetchEventPreloadHandlePtr& input) { return !input; }
  static void SetToNull(::content::mojom::FetchEventPreloadHandlePtr* output) { output->reset(); }

  static  decltype(::content::mojom::FetchEventPreloadHandle::url_loader)& url_loader(
       ::content::mojom::FetchEventPreloadHandlePtr& input) {
    return input->url_loader;
  }

  static  decltype(::content::mojom::FetchEventPreloadHandle::url_loader_client_request)& url_loader_client_request(
       ::content::mojom::FetchEventPreloadHandlePtr& input) {
    return input->url_loader_client_request;
  }

  static bool Read(::content::mojom::FetchEventPreloadHandle::DataView input, ::content::mojom::FetchEventPreloadHandlePtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::DispatchFetchEventParams::DataView,
                                         ::content::mojom::DispatchFetchEventParamsPtr> {
  static bool IsNull(const ::content::mojom::DispatchFetchEventParamsPtr& input) { return !input; }
  static void SetToNull(::content::mojom::DispatchFetchEventParamsPtr* output) { output->reset(); }

  static const decltype(::content::mojom::DispatchFetchEventParams::request)& request(
      const ::content::mojom::DispatchFetchEventParamsPtr& input) {
    return input->request;
  }

  static  decltype(::content::mojom::DispatchFetchEventParams::request_body_blob_ptrs)& request_body_blob_ptrs(
       ::content::mojom::DispatchFetchEventParamsPtr& input) {
    return input->request_body_blob_ptrs;
  }

  static const decltype(::content::mojom::DispatchFetchEventParams::request_body_blob_uuid)& request_body_blob_uuid(
      const ::content::mojom::DispatchFetchEventParamsPtr& input) {
    return input->request_body_blob_uuid;
  }

  static decltype(::content::mojom::DispatchFetchEventParams::request_body_blob_size) request_body_blob_size(
      const ::content::mojom::DispatchFetchEventParamsPtr& input) {
    return input->request_body_blob_size;
  }

  static  decltype(::content::mojom::DispatchFetchEventParams::request_body_blob)& request_body_blob(
       ::content::mojom::DispatchFetchEventParamsPtr& input) {
    return input->request_body_blob;
  }

  static const decltype(::content::mojom::DispatchFetchEventParams::client_id)& client_id(
      const ::content::mojom::DispatchFetchEventParamsPtr& input) {
    return input->client_id;
  }

  static  decltype(::content::mojom::DispatchFetchEventParams::preload_handle)& preload_handle(
       ::content::mojom::DispatchFetchEventParamsPtr& input) {
    return input->preload_handle;
  }

  static bool Read(::content::mojom::DispatchFetchEventParams::DataView input, ::content::mojom::DispatchFetchEventParamsPtr* output);
};

}  // namespace mojo

#endif  // CONTENT_COMMON_SERVICE_WORKER_DISPATCH_FETCH_EVENT_PARAMS_MOJOM_H_
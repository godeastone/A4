// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "content/common/service_worker/dispatch_fetch_event_params.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "content/common/service_worker/dispatch_fetch_event_params.mojom-shared-message-ids.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "services/network/public/cpp/url_request_mojom_traits.h"
namespace content {
namespace mojom {
FetchEventPreloadHandle::FetchEventPreloadHandle()
    : url_loader(),
      url_loader_client_request() {}

FetchEventPreloadHandle::FetchEventPreloadHandle(
    ::network::mojom::URLLoaderPtrInfo url_loader_in,
    ::network::mojom::URLLoaderClientRequest url_loader_client_request_in)
    : url_loader(std::move(url_loader_in)),
      url_loader_client_request(std::move(url_loader_client_request_in)) {}

FetchEventPreloadHandle::~FetchEventPreloadHandle() = default;

bool FetchEventPreloadHandle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DispatchFetchEventParams::DispatchFetchEventParams()
    : request(),
      request_body_blob_ptrs(),
      request_body_blob_uuid(),
      request_body_blob_size(),
      request_body_blob(),
      client_id(),
      preload_handle() {}

DispatchFetchEventParams::DispatchFetchEventParams(
    const network::ResourceRequest& request_in,
    std::vector<::blink::mojom::BlobPtrInfo> request_body_blob_ptrs_in,
    const std::string& request_body_blob_uuid_in,
    uint64_t request_body_blob_size_in,
    ::blink::mojom::BlobPtrInfo request_body_blob_in,
    const std::string& client_id_in,
    FetchEventPreloadHandlePtr preload_handle_in)
    : request(std::move(request_in)),
      request_body_blob_ptrs(std::move(request_body_blob_ptrs_in)),
      request_body_blob_uuid(std::move(request_body_blob_uuid_in)),
      request_body_blob_size(std::move(request_body_blob_size_in)),
      request_body_blob(std::move(request_body_blob_in)),
      client_id(std::move(client_id_in)),
      preload_handle(std::move(preload_handle_in)) {}

DispatchFetchEventParams::~DispatchFetchEventParams() = default;

bool DispatchFetchEventParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::FetchEventPreloadHandle::DataView, ::content::mojom::FetchEventPreloadHandlePtr>::Read(
    ::content::mojom::FetchEventPreloadHandle::DataView input,
    ::content::mojom::FetchEventPreloadHandlePtr* output) {
  bool success = true;
  ::content::mojom::FetchEventPreloadHandlePtr result(::content::mojom::FetchEventPreloadHandle::New());
  
      result->url_loader =
          input.TakeUrlLoader<decltype(result->url_loader)>();
      result->url_loader_client_request =
          input.TakeUrlLoaderClientRequest<decltype(result->url_loader_client_request)>();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::DispatchFetchEventParams::DataView, ::content::mojom::DispatchFetchEventParamsPtr>::Read(
    ::content::mojom::DispatchFetchEventParams::DataView input,
    ::content::mojom::DispatchFetchEventParamsPtr* output) {
  bool success = true;
  ::content::mojom::DispatchFetchEventParamsPtr result(::content::mojom::DispatchFetchEventParams::New());
  
      if (!input.ReadRequest(&result->request))
        success = false;
      if (!input.ReadRequestBodyBlobPtrs(&result->request_body_blob_ptrs))
        success = false;
      if (!input.ReadRequestBodyBlobUuid(&result->request_body_blob_uuid))
        success = false;
      result->request_body_blob_size = input.request_body_blob_size();
      result->request_body_blob =
          input.TakeRequestBodyBlob<decltype(result->request_body_blob)>();
      if (!input.ReadClientId(&result->client_id))
        success = false;
      if (!input.ReadPreloadHandle(&result->preload_handle))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
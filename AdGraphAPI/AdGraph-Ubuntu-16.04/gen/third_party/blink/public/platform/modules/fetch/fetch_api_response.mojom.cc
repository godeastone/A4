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

#include "third_party/blink/public/platform/modules/fetch/fetch_api_response.mojom.h"

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

#include "third_party/blink/public/platform/modules/fetch/fetch_api_response.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace blink {
namespace mojom {
FetchAPIResponse::FetchAPIResponse()
    : url_list(),
      status_code(),
      status_text(),
      response_type(),
      headers(),
      blob(),
      error(),
      response_time(),
      cache_storage_cache_name(),
      cors_exposed_header_names(),
      is_in_cache_storage(),
      side_data_blob() {}

FetchAPIResponse::FetchAPIResponse(
    const std::vector<GURL>& url_list_in,
    int32_t status_code_in,
    const std::string& status_text_in,
    ::network::mojom::FetchResponseType response_type_in,
    const base::flat_map<std::string, std::string>& headers_in,
    ::blink::mojom::SerializedBlobPtr blob_in,
    ::blink::mojom::ServiceWorkerResponseError error_in,
    base::Time response_time_in,
    const base::Optional<std::string>& cache_storage_cache_name_in,
    const std::vector<std::string>& cors_exposed_header_names_in,
    bool is_in_cache_storage_in,
    ::blink::mojom::SerializedBlobPtr side_data_blob_in)
    : url_list(std::move(url_list_in)),
      status_code(std::move(status_code_in)),
      status_text(std::move(status_text_in)),
      response_type(std::move(response_type_in)),
      headers(std::move(headers_in)),
      blob(std::move(blob_in)),
      error(std::move(error_in)),
      response_time(std::move(response_time_in)),
      cache_storage_cache_name(std::move(cache_storage_cache_name_in)),
      cors_exposed_header_names(std::move(cors_exposed_header_names_in)),
      is_in_cache_storage(std::move(is_in_cache_storage_in)),
      side_data_blob(std::move(side_data_blob_in)) {}

FetchAPIResponse::~FetchAPIResponse() = default;

bool FetchAPIResponse::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::FetchAPIResponse::DataView, ::blink::mojom::FetchAPIResponsePtr>::Read(
    ::blink::mojom::FetchAPIResponse::DataView input,
    ::blink::mojom::FetchAPIResponsePtr* output) {
  bool success = true;
  ::blink::mojom::FetchAPIResponsePtr result(::blink::mojom::FetchAPIResponse::New());
  
      if (!input.ReadUrlList(&result->url_list))
        success = false;
      result->status_code = input.status_code();
      if (!input.ReadStatusText(&result->status_text))
        success = false;
      if (!input.ReadResponseType(&result->response_type))
        success = false;
      if (!input.ReadHeaders(&result->headers))
        success = false;
      if (!input.ReadBlob(&result->blob))
        success = false;
      if (!input.ReadError(&result->error))
        success = false;
      if (!input.ReadResponseTime(&result->response_time))
        success = false;
      if (!input.ReadCacheStorageCacheName(&result->cache_storage_cache_name))
        success = false;
      if (!input.ReadCorsExposedHeaderNames(&result->cors_exposed_header_names))
        success = false;
      result->is_in_cache_storage = input.is_in_cache_storage();
      if (!input.ReadSideDataBlob(&result->side_data_blob))
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
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

#include "third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom.h"

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

#include "third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom-shared-message-ids.h"
#include "content/common/service_worker/service_worker_fetch_request_mojom_traits.h"
#include "content/public/common/referrer_struct_traits.h"
#include "third_party/blink/public/platform/referrer_policy_enum_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace blink {
namespace mojom {
FetchAPIRequest::FetchAPIRequest()
    : mode(),
      is_main_resource_load(),
      request_context_type(),
      frame_type(),
      url(),
      method(),
      headers(),
      blob(),
      referrer(),
      credentials_mode(),
      cache_mode(),
      redirect_mode(),
      integrity(),
      keepalive(),
      client_id(),
      is_reload() {}

FetchAPIRequest::FetchAPIRequest(
    ::network::mojom::FetchRequestMode mode_in,
    bool is_main_resource_load_in,
    ::content::RequestContextType request_context_type_in,
    ::network::mojom::RequestContextFrameType frame_type_in,
    const GURL& url_in,
    const std::string& method_in,
    const base::flat_map<std::string, std::string>& headers_in,
    ::blink::mojom::SerializedBlobPtr blob_in,
    const content::Referrer& referrer_in,
    ::network::mojom::FetchCredentialsMode credentials_mode_in,
    FetchCacheMode cache_mode_in,
    ::network::mojom::FetchRedirectMode redirect_mode_in,
    const base::Optional<std::string>& integrity_in,
    bool keepalive_in,
    const base::Optional<std::string>& client_id_in,
    bool is_reload_in)
    : mode(std::move(mode_in)),
      is_main_resource_load(std::move(is_main_resource_load_in)),
      request_context_type(std::move(request_context_type_in)),
      frame_type(std::move(frame_type_in)),
      url(std::move(url_in)),
      method(std::move(method_in)),
      headers(std::move(headers_in)),
      blob(std::move(blob_in)),
      referrer(std::move(referrer_in)),
      credentials_mode(std::move(credentials_mode_in)),
      cache_mode(std::move(cache_mode_in)),
      redirect_mode(std::move(redirect_mode_in)),
      integrity(std::move(integrity_in)),
      keepalive(std::move(keepalive_in)),
      client_id(std::move(client_id_in)),
      is_reload(std::move(is_reload_in)) {}

FetchAPIRequest::~FetchAPIRequest() = default;

bool FetchAPIRequest::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::FetchAPIRequest::DataView, ::blink::mojom::FetchAPIRequestPtr>::Read(
    ::blink::mojom::FetchAPIRequest::DataView input,
    ::blink::mojom::FetchAPIRequestPtr* output) {
  bool success = true;
  ::blink::mojom::FetchAPIRequestPtr result(::blink::mojom::FetchAPIRequest::New());
  
      if (!input.ReadMode(&result->mode))
        success = false;
      result->is_main_resource_load = input.is_main_resource_load();
      if (!input.ReadRequestContextType(&result->request_context_type))
        success = false;
      if (!input.ReadFrameType(&result->frame_type))
        success = false;
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadMethod(&result->method))
        success = false;
      if (!input.ReadHeaders(&result->headers))
        success = false;
      if (!input.ReadBlob(&result->blob))
        success = false;
      if (!input.ReadReferrer(&result->referrer))
        success = false;
      if (!input.ReadCredentialsMode(&result->credentials_mode))
        success = false;
      if (!input.ReadCacheMode(&result->cache_mode))
        success = false;
      if (!input.ReadRedirectMode(&result->redirect_mode))
        success = false;
      if (!input.ReadIntegrity(&result->integrity))
        success = false;
      result->keepalive = input.keepalive();
      if (!input.ReadClientId(&result->client_id))
        success = false;
      result->is_reload = input.is_reload();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
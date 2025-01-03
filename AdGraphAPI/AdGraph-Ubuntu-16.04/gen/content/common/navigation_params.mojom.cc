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

#include "content/common/navigation_params.mojom.h"

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

#include "content/common/navigation_params.mojom-shared-message-ids.h"
#include "content/common/resource_messages.h"
#include "content/common/service_worker/service_worker_fetch_request_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace content {
namespace mojom {
BeginNavigationParams::BeginNavigationParams()
    : headers(),
      load_flags(),
      skip_service_worker(),
      request_context_type(),
      mixed_content_context_type(),
      is_form_submission(),
      searchable_form_url(),
      searchable_form_encoding(),
      initiator_origin(),
      client_side_redirect_url(),
      devtools_initiator() {}

BeginNavigationParams::BeginNavigationParams(
    const std::string& headers_in,
    int32_t load_flags_in,
    bool skip_service_worker_in,
    ::content::RequestContextType request_context_type_in,
    ::blink::WebMixedContentContextType mixed_content_context_type_in,
    bool is_form_submission_in,
    const GURL& searchable_form_url_in,
    const std::string& searchable_form_encoding_in,
    const base::Optional<url::Origin>& initiator_origin_in,
    const GURL& client_side_redirect_url_in,
    base::Optional<base::Value> devtools_initiator_in)
    : headers(std::move(headers_in)),
      load_flags(std::move(load_flags_in)),
      skip_service_worker(std::move(skip_service_worker_in)),
      request_context_type(std::move(request_context_type_in)),
      mixed_content_context_type(std::move(mixed_content_context_type_in)),
      is_form_submission(std::move(is_form_submission_in)),
      searchable_form_url(std::move(searchable_form_url_in)),
      searchable_form_encoding(std::move(searchable_form_encoding_in)),
      initiator_origin(std::move(initiator_origin_in)),
      client_side_redirect_url(std::move(client_side_redirect_url_in)),
      devtools_initiator(std::move(devtools_initiator_in)) {}

BeginNavigationParams::~BeginNavigationParams() = default;

bool BeginNavigationParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::BeginNavigationParams::DataView, ::content::mojom::BeginNavigationParamsPtr>::Read(
    ::content::mojom::BeginNavigationParams::DataView input,
    ::content::mojom::BeginNavigationParamsPtr* output) {
  bool success = true;
  ::content::mojom::BeginNavigationParamsPtr result(::content::mojom::BeginNavigationParams::New());
  
      if (!input.ReadHeaders(&result->headers))
        success = false;
      result->load_flags = input.load_flags();
      result->skip_service_worker = input.skip_service_worker();
      if (!input.ReadRequestContextType(&result->request_context_type))
        success = false;
      if (!input.ReadMixedContentContextType(&result->mixed_content_context_type))
        success = false;
      result->is_form_submission = input.is_form_submission();
      if (!input.ReadSearchableFormUrl(&result->searchable_form_url))
        success = false;
      if (!input.ReadSearchableFormEncoding(&result->searchable_form_encoding))
        success = false;
      if (!input.ReadInitiatorOrigin(&result->initiator_origin))
        success = false;
      if (!input.ReadClientSideRedirectUrl(&result->client_side_redirect_url))
        success = false;
      if (!input.ReadDevtoolsInitiator(&result->devtools_initiator))
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
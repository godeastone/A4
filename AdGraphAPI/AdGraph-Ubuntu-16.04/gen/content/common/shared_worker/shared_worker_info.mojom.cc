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

#include "content/common/shared_worker/shared_worker_info.mojom.h"

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

#include "content/common/shared_worker/shared_worker_info.mojom-shared-message-ids.h"
#include "third_party/blink/public/platform/content_security_policy_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace content {
namespace mojom {
SharedWorkerInfo::SharedWorkerInfo()
    : url(),
      name(),
      content_security_policy(),
      content_security_policy_type(),
      creation_address_space() {}

SharedWorkerInfo::SharedWorkerInfo(
    const GURL& url_in,
    const std::string& name_in,
    const std::string& content_security_policy_in,
    ::blink::WebContentSecurityPolicyType content_security_policy_type_in,
    ::blink::mojom::IPAddressSpace creation_address_space_in)
    : url(std::move(url_in)),
      name(std::move(name_in)),
      content_security_policy(std::move(content_security_policy_in)),
      content_security_policy_type(std::move(content_security_policy_type_in)),
      creation_address_space(std::move(creation_address_space_in)) {}

SharedWorkerInfo::~SharedWorkerInfo() = default;

bool SharedWorkerInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::SharedWorkerInfo::DataView, ::content::mojom::SharedWorkerInfoPtr>::Read(
    ::content::mojom::SharedWorkerInfo::DataView input,
    ::content::mojom::SharedWorkerInfoPtr* output) {
  bool success = true;
  ::content::mojom::SharedWorkerInfoPtr result(::content::mojom::SharedWorkerInfo::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadContentSecurityPolicy(&result->content_security_policy))
        success = false;
      if (!input.ReadContentSecurityPolicyType(&result->content_security_policy_type))
        success = false;
      if (!input.ReadCreationAddressSpace(&result->creation_address_space))
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
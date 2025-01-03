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

#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom-blink.h"

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

#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
namespace blink {
namespace mojom {
namespace blink {
ServiceWorkerClientQueryOptions::ServiceWorkerClientQueryOptions()
    : include_uncontrolled(false),
      client_type(ServiceWorkerClientType::kWindow) {}

ServiceWorkerClientQueryOptions::ServiceWorkerClientQueryOptions(
    bool include_uncontrolled_in,
    ServiceWorkerClientType client_type_in)
    : include_uncontrolled(std::move(include_uncontrolled_in)),
      client_type(std::move(client_type_in)) {}

ServiceWorkerClientQueryOptions::~ServiceWorkerClientQueryOptions() = default;
size_t ServiceWorkerClientQueryOptions::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->include_uncontrolled);
  seed = mojo::internal::WTFHash(seed, this->client_type);
  return seed;
}

bool ServiceWorkerClientQueryOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ServiceWorkerClientInfo::ServiceWorkerClientInfo()
    : url(),
      client_uuid(),
      client_type(),
      page_visibility_state(::blink::mojom::blink::PageVisibilityState::kHidden),
      is_focused(false),
      frame_type(::network::mojom::blink::RequestContextFrameType::kNone),
      last_focus_time(),
      creation_time() {}

ServiceWorkerClientInfo::ServiceWorkerClientInfo(
    const ::blink::KURL& url_in,
    const WTF::String& client_uuid_in,
    ServiceWorkerClientType client_type_in,
    ::blink::mojom::blink::PageVisibilityState page_visibility_state_in,
    bool is_focused_in,
    ::network::mojom::blink::RequestContextFrameType frame_type_in,
    ::mojo_base::mojom::blink::TimeTicksPtr last_focus_time_in,
    ::mojo_base::mojom::blink::TimeTicksPtr creation_time_in)
    : url(std::move(url_in)),
      client_uuid(std::move(client_uuid_in)),
      client_type(std::move(client_type_in)),
      page_visibility_state(std::move(page_visibility_state_in)),
      is_focused(std::move(is_focused_in)),
      frame_type(std::move(frame_type_in)),
      last_focus_time(std::move(last_focus_time_in)),
      creation_time(std::move(creation_time_in)) {}

ServiceWorkerClientInfo::~ServiceWorkerClientInfo() = default;

bool ServiceWorkerClientInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::ServiceWorkerClientQueryOptions::DataView, ::blink::mojom::blink::ServiceWorkerClientQueryOptionsPtr>::Read(
    ::blink::mojom::blink::ServiceWorkerClientQueryOptions::DataView input,
    ::blink::mojom::blink::ServiceWorkerClientQueryOptionsPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerClientQueryOptionsPtr result(::blink::mojom::blink::ServiceWorkerClientQueryOptions::New());
  
      result->include_uncontrolled = input.include_uncontrolled();
      if (!input.ReadClientType(&result->client_type))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::ServiceWorkerClientInfo::DataView, ::blink::mojom::blink::ServiceWorkerClientInfoPtr>::Read(
    ::blink::mojom::blink::ServiceWorkerClientInfo::DataView input,
    ::blink::mojom::blink::ServiceWorkerClientInfoPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerClientInfoPtr result(::blink::mojom::blink::ServiceWorkerClientInfo::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadClientUuid(&result->client_uuid))
        success = false;
      if (!input.ReadClientType(&result->client_type))
        success = false;
      if (!input.ReadPageVisibilityState(&result->page_visibility_state))
        success = false;
      result->is_focused = input.is_focused();
      if (!input.ReadFrameType(&result->frame_type))
        success = false;
      if (!input.ReadLastFocusTime(&result->last_focus_time))
        success = false;
      if (!input.ReadCreationTime(&result->creation_time))
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
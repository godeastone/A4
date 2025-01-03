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

#include "components/web_cache/public/interfaces/web_cache.mojom.h"

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

#include "components/web_cache/public/interfaces/web_cache.mojom-shared-message-ids.h"
namespace web_cache {
namespace mojom {
const char WebCache::Name_[] = "web_cache.mojom.WebCache";

WebCacheProxy::WebCacheProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WebCacheProxy::SetCacheCapacity(
    uint64_t in_capacity) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "web_cache::mojom::WebCache::SetCacheCapacity");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebCache_SetCacheCapacity_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::web_cache::mojom::internal::WebCache_SetCacheCapacity_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->capacity = in_capacity;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WebCacheProxy::ClearCache(
    bool in_on_navigation) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "web_cache::mojom::WebCache::ClearCache");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebCache_ClearCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::web_cache::mojom::internal::WebCache_ClearCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->on_navigation = in_on_navigation;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool WebCacheStubDispatch::Accept(
    WebCache* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWebCache_SetCacheCapacity_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)web_cache::mojom::WebCache::SetCacheCapacity",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebCache_SetCacheCapacity_Params_Data* params =
          reinterpret_cast<internal::WebCache_SetCacheCapacity_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_capacity{};
      WebCache_SetCacheCapacity_ParamsDataView input_data_view(params, &serialization_context);
      
      p_capacity = input_data_view.capacity();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebCache::SetCacheCapacity deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetCacheCapacity(
std::move(p_capacity));
      return true;
    }
    case internal::kWebCache_ClearCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)web_cache::mojom::WebCache::ClearCache",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebCache_ClearCache_Params_Data* params =
          reinterpret_cast<internal::WebCache_ClearCache_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_on_navigation{};
      WebCache_ClearCache_ParamsDataView input_data_view(params, &serialization_context);
      
      p_on_navigation = input_data_view.on_navigation();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebCache::ClearCache deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClearCache(
std::move(p_on_navigation));
      return true;
    }
  }
  return false;
}

// static
bool WebCacheStubDispatch::AcceptWithResponder(
    WebCache* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWebCache_SetCacheCapacity_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)web_cache::mojom::WebCache::SetCacheCapacity",
               "message", message->name());
#endif
      break;
    }
    case internal::kWebCache_ClearCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)web_cache::mojom::WebCache::ClearCache",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool WebCacheRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WebCache RequestValidator");

  switch (message->header()->name) {
    case internal::kWebCache_SetCacheCapacity_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebCache_SetCacheCapacity_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebCache_ClearCache_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebCache_ClearCache_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

void WebCacheInterceptorForTesting::SetCacheCapacity(uint64_t capacity) {
  GetForwardingInterface()->SetCacheCapacity(std::move(capacity));
}
void WebCacheInterceptorForTesting::ClearCache(bool on_navigation) {
  GetForwardingInterface()->ClearCache(std::move(on_navigation));
}
WebCacheAsyncWaiter::WebCacheAsyncWaiter(
    WebCache* proxy) : proxy_(proxy) {}

WebCacheAsyncWaiter::~WebCacheAsyncWaiter() = default;


}  // namespace mojom
}  // namespace web_cache

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
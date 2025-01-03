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

#include "components/visitedlink/common/visitedlink.mojom.h"

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

#include "components/visitedlink/common/visitedlink.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
namespace visitedlink {
namespace mojom {
const char VisitedLinkNotificationSink::Name_[] = "visitedlink.mojom.VisitedLinkNotificationSink";

VisitedLinkNotificationSinkProxy::VisitedLinkNotificationSinkProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VisitedLinkNotificationSinkProxy::UpdateVisitedLinks(
    base::ReadOnlySharedMemoryRegion in_table_region) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "visitedlink::mojom::VisitedLinkNotificationSink::UpdateVisitedLinks");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVisitedLinkNotificationSink_UpdateVisitedLinks_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::visitedlink::mojom::internal::VisitedLinkNotificationSink_UpdateVisitedLinks_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->table_region)::BaseType::BufferWriter
      table_region_writer;
  mojo::internal::Serialize<::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView>(
      in_table_region, buffer, &table_region_writer, &serialization_context);
  params->table_region.Set(
      table_region_writer.is_null() ? nullptr : table_region_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->table_region.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null table_region in VisitedLinkNotificationSink.UpdateVisitedLinks request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VisitedLinkNotificationSinkProxy::AddVisitedLinks(
    const std::vector<uint64_t>& in_link_hashes) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "visitedlink::mojom::VisitedLinkNotificationSink::AddVisitedLinks");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVisitedLinkNotificationSink_AddVisitedLinks_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::visitedlink::mojom::internal::VisitedLinkNotificationSink_AddVisitedLinks_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->link_hashes)::BaseType::BufferWriter
      link_hashes_writer;
  const mojo::internal::ContainerValidateParams link_hashes_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint64_t>>(
      in_link_hashes, buffer, &link_hashes_writer, &link_hashes_validate_params,
      &serialization_context);
  params->link_hashes.Set(
      link_hashes_writer.is_null() ? nullptr : link_hashes_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->link_hashes.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null link_hashes in VisitedLinkNotificationSink.AddVisitedLinks request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VisitedLinkNotificationSinkProxy::ResetVisitedLinks(
    bool in_invalidate_cached_hashes) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "visitedlink::mojom::VisitedLinkNotificationSink::ResetVisitedLinks");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVisitedLinkNotificationSink_ResetVisitedLinks_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::visitedlink::mojom::internal::VisitedLinkNotificationSink_ResetVisitedLinks_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->invalidate_cached_hashes = in_invalidate_cached_hashes;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool VisitedLinkNotificationSinkStubDispatch::Accept(
    VisitedLinkNotificationSink* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVisitedLinkNotificationSink_UpdateVisitedLinks_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)visitedlink::mojom::VisitedLinkNotificationSink::UpdateVisitedLinks",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VisitedLinkNotificationSink_UpdateVisitedLinks_Params_Data* params =
          reinterpret_cast<internal::VisitedLinkNotificationSink_UpdateVisitedLinks_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::ReadOnlySharedMemoryRegion p_table_region{};
      VisitedLinkNotificationSink_UpdateVisitedLinks_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTableRegion(&p_table_region))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VisitedLinkNotificationSink::UpdateVisitedLinks deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UpdateVisitedLinks(
std::move(p_table_region));
      return true;
    }
    case internal::kVisitedLinkNotificationSink_AddVisitedLinks_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)visitedlink::mojom::VisitedLinkNotificationSink::AddVisitedLinks",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VisitedLinkNotificationSink_AddVisitedLinks_Params_Data* params =
          reinterpret_cast<internal::VisitedLinkNotificationSink_AddVisitedLinks_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint64_t> p_link_hashes{};
      VisitedLinkNotificationSink_AddVisitedLinks_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLinkHashes(&p_link_hashes))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VisitedLinkNotificationSink::AddVisitedLinks deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddVisitedLinks(
std::move(p_link_hashes));
      return true;
    }
    case internal::kVisitedLinkNotificationSink_ResetVisitedLinks_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)visitedlink::mojom::VisitedLinkNotificationSink::ResetVisitedLinks",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VisitedLinkNotificationSink_ResetVisitedLinks_Params_Data* params =
          reinterpret_cast<internal::VisitedLinkNotificationSink_ResetVisitedLinks_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_invalidate_cached_hashes{};
      VisitedLinkNotificationSink_ResetVisitedLinks_ParamsDataView input_data_view(params, &serialization_context);
      
      p_invalidate_cached_hashes = input_data_view.invalidate_cached_hashes();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VisitedLinkNotificationSink::ResetVisitedLinks deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ResetVisitedLinks(
std::move(p_invalidate_cached_hashes));
      return true;
    }
  }
  return false;
}

// static
bool VisitedLinkNotificationSinkStubDispatch::AcceptWithResponder(
    VisitedLinkNotificationSink* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVisitedLinkNotificationSink_UpdateVisitedLinks_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)visitedlink::mojom::VisitedLinkNotificationSink::UpdateVisitedLinks",
               "message", message->name());
#endif
      break;
    }
    case internal::kVisitedLinkNotificationSink_AddVisitedLinks_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)visitedlink::mojom::VisitedLinkNotificationSink::AddVisitedLinks",
               "message", message->name());
#endif
      break;
    }
    case internal::kVisitedLinkNotificationSink_ResetVisitedLinks_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)visitedlink::mojom::VisitedLinkNotificationSink::ResetVisitedLinks",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool VisitedLinkNotificationSinkRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VisitedLinkNotificationSink RequestValidator");

  switch (message->header()->name) {
    case internal::kVisitedLinkNotificationSink_UpdateVisitedLinks_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VisitedLinkNotificationSink_UpdateVisitedLinks_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVisitedLinkNotificationSink_AddVisitedLinks_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VisitedLinkNotificationSink_AddVisitedLinks_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVisitedLinkNotificationSink_ResetVisitedLinks_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VisitedLinkNotificationSink_ResetVisitedLinks_Params_Data>(
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

void VisitedLinkNotificationSinkInterceptorForTesting::UpdateVisitedLinks(base::ReadOnlySharedMemoryRegion table_region) {
  GetForwardingInterface()->UpdateVisitedLinks(std::move(table_region));
}
void VisitedLinkNotificationSinkInterceptorForTesting::AddVisitedLinks(const std::vector<uint64_t>& link_hashes) {
  GetForwardingInterface()->AddVisitedLinks(std::move(link_hashes));
}
void VisitedLinkNotificationSinkInterceptorForTesting::ResetVisitedLinks(bool invalidate_cached_hashes) {
  GetForwardingInterface()->ResetVisitedLinks(std::move(invalidate_cached_hashes));
}
VisitedLinkNotificationSinkAsyncWaiter::VisitedLinkNotificationSinkAsyncWaiter(
    VisitedLinkNotificationSink* proxy) : proxy_(proxy) {}

VisitedLinkNotificationSinkAsyncWaiter::~VisitedLinkNotificationSinkAsyncWaiter() = default;


}  // namespace mojom
}  // namespace visitedlink

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
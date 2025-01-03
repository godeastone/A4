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

#include "chrome/common/cache_stats_recorder.mojom.h"

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

#include "chrome/common/cache_stats_recorder.mojom-shared-message-ids.h"
namespace chrome {
namespace mojom {
const char CacheStatsRecorder::Name_[] = "chrome.mojom.CacheStatsRecorder";

CacheStatsRecorderProxy::CacheStatsRecorderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CacheStatsRecorderProxy::RecordCacheStats(
    uint64_t in_capacity, uint64_t in_size) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::CacheStatsRecorder::RecordCacheStats");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCacheStatsRecorder_RecordCacheStats_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::CacheStatsRecorder_RecordCacheStats_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->capacity = in_capacity;
  params->size = in_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool CacheStatsRecorderStubDispatch::Accept(
    CacheStatsRecorder* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCacheStatsRecorder_RecordCacheStats_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::CacheStatsRecorder::RecordCacheStats",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CacheStatsRecorder_RecordCacheStats_Params_Data* params =
          reinterpret_cast<internal::CacheStatsRecorder_RecordCacheStats_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_capacity{};
      uint64_t p_size{};
      CacheStatsRecorder_RecordCacheStats_ParamsDataView input_data_view(params, &serialization_context);
      
      p_capacity = input_data_view.capacity();
      p_size = input_data_view.size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CacheStatsRecorder::RecordCacheStats deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RecordCacheStats(
std::move(p_capacity), 
std::move(p_size));
      return true;
    }
  }
  return false;
}

// static
bool CacheStatsRecorderStubDispatch::AcceptWithResponder(
    CacheStatsRecorder* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCacheStatsRecorder_RecordCacheStats_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::CacheStatsRecorder::RecordCacheStats",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool CacheStatsRecorderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CacheStatsRecorder RequestValidator");

  switch (message->header()->name) {
    case internal::kCacheStatsRecorder_RecordCacheStats_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CacheStatsRecorder_RecordCacheStats_Params_Data>(
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

void CacheStatsRecorderInterceptorForTesting::RecordCacheStats(uint64_t capacity, uint64_t size) {
  GetForwardingInterface()->RecordCacheStats(std::move(capacity), std::move(size));
}
CacheStatsRecorderAsyncWaiter::CacheStatsRecorderAsyncWaiter(
    CacheStatsRecorder* proxy) : proxy_(proxy) {}

CacheStatsRecorderAsyncWaiter::~CacheStatsRecorderAsyncWaiter() = default;


}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
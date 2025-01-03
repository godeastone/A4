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

#include "components/startup_metric_utils/common/startup_metric.mojom.h"

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

#include "components/startup_metric_utils/common/startup_metric.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
namespace startup_metric_utils {
namespace mojom {
const char StartupMetricHost::Name_[] = "startup_metric_utils.mojom.StartupMetricHost";

StartupMetricHostProxy::StartupMetricHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void StartupMetricHostProxy::RecordRendererMainEntryTime(
    base::TimeTicks in_renderer_main_entry_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "startup_metric_utils::mojom::StartupMetricHost::RecordRendererMainEntryTime");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStartupMetricHost_RecordRendererMainEntryTime_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::startup_metric_utils::mojom::internal::StartupMetricHost_RecordRendererMainEntryTime_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->renderer_main_entry_time)::BaseType::BufferWriter
      renderer_main_entry_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
      in_renderer_main_entry_time, buffer, &renderer_main_entry_time_writer, &serialization_context);
  params->renderer_main_entry_time.Set(
      renderer_main_entry_time_writer.is_null() ? nullptr : renderer_main_entry_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->renderer_main_entry_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null renderer_main_entry_time in StartupMetricHost.RecordRendererMainEntryTime request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool StartupMetricHostStubDispatch::Accept(
    StartupMetricHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kStartupMetricHost_RecordRendererMainEntryTime_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)startup_metric_utils::mojom::StartupMetricHost::RecordRendererMainEntryTime",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::StartupMetricHost_RecordRendererMainEntryTime_Params_Data* params =
          reinterpret_cast<internal::StartupMetricHost_RecordRendererMainEntryTime_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::TimeTicks p_renderer_main_entry_time{};
      StartupMetricHost_RecordRendererMainEntryTime_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRendererMainEntryTime(&p_renderer_main_entry_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "StartupMetricHost::RecordRendererMainEntryTime deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RecordRendererMainEntryTime(
std::move(p_renderer_main_entry_time));
      return true;
    }
  }
  return false;
}

// static
bool StartupMetricHostStubDispatch::AcceptWithResponder(
    StartupMetricHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kStartupMetricHost_RecordRendererMainEntryTime_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)startup_metric_utils::mojom::StartupMetricHost::RecordRendererMainEntryTime",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool StartupMetricHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "StartupMetricHost RequestValidator");

  switch (message->header()->name) {
    case internal::kStartupMetricHost_RecordRendererMainEntryTime_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StartupMetricHost_RecordRendererMainEntryTime_Params_Data>(
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

void StartupMetricHostInterceptorForTesting::RecordRendererMainEntryTime(base::TimeTicks renderer_main_entry_time) {
  GetForwardingInterface()->RecordRendererMainEntryTime(std::move(renderer_main_entry_time));
}
StartupMetricHostAsyncWaiter::StartupMetricHostAsyncWaiter(
    StartupMetricHost* proxy) : proxy_(proxy) {}

StartupMetricHostAsyncWaiter::~StartupMetricHostAsyncWaiter() = default;


}  // namespace mojom
}  // namespace startup_metric_utils

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
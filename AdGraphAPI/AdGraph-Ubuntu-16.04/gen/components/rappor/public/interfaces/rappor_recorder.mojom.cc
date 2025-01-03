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

#include "components/rappor/public/interfaces/rappor_recorder.mojom.h"

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

#include "components/rappor/public/interfaces/rappor_recorder.mojom-shared-message-ids.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace rappor {
namespace mojom {
const char RapporRecorder::Name_[] = "rappor.mojom.RapporRecorder";

RapporRecorderProxy::RapporRecorderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RapporRecorderProxy::RecordRappor(
    const std::string& in_metric, const std::string& in_sample) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "rappor::mojom::RapporRecorder::RecordRappor");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRapporRecorder_RecordRappor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::rappor::mojom::internal::RapporRecorder_RecordRappor_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->metric)::BaseType::BufferWriter
      metric_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_metric, buffer, &metric_writer, &serialization_context);
  params->metric.Set(
      metric_writer.is_null() ? nullptr : metric_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->metric.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null metric in RapporRecorder.RecordRappor request");
  typename decltype(params->sample)::BaseType::BufferWriter
      sample_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_sample, buffer, &sample_writer, &serialization_context);
  params->sample.Set(
      sample_writer.is_null() ? nullptr : sample_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sample.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sample in RapporRecorder.RecordRappor request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RapporRecorderProxy::RecordRapporURL(
    const std::string& in_metric, const GURL& in_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "rappor::mojom::RapporRecorder::RecordRapporURL");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRapporRecorder_RecordRapporURL_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::rappor::mojom::internal::RapporRecorder_RecordRapporURL_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->metric)::BaseType::BufferWriter
      metric_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_metric, buffer, &metric_writer, &serialization_context);
  params->metric.Set(
      metric_writer.is_null() ? nullptr : metric_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->metric.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null metric in RapporRecorder.RecordRapporURL request");
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in RapporRecorder.RecordRapporURL request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool RapporRecorderStubDispatch::Accept(
    RapporRecorder* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRapporRecorder_RecordRappor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)rappor::mojom::RapporRecorder::RecordRappor",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RapporRecorder_RecordRappor_Params_Data* params =
          reinterpret_cast<internal::RapporRecorder_RecordRappor_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_metric{};
      std::string p_sample{};
      RapporRecorder_RecordRappor_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMetric(&p_metric))
        success = false;
      if (!input_data_view.ReadSample(&p_sample))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RapporRecorder::RecordRappor deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RecordRappor(
std::move(p_metric), 
std::move(p_sample));
      return true;
    }
    case internal::kRapporRecorder_RecordRapporURL_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)rappor::mojom::RapporRecorder::RecordRapporURL",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RapporRecorder_RecordRapporURL_Params_Data* params =
          reinterpret_cast<internal::RapporRecorder_RecordRapporURL_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_metric{};
      GURL p_url{};
      RapporRecorder_RecordRapporURL_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMetric(&p_metric))
        success = false;
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RapporRecorder::RecordRapporURL deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RecordRapporURL(
std::move(p_metric), 
std::move(p_url));
      return true;
    }
  }
  return false;
}

// static
bool RapporRecorderStubDispatch::AcceptWithResponder(
    RapporRecorder* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRapporRecorder_RecordRappor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)rappor::mojom::RapporRecorder::RecordRappor",
               "message", message->name());
#endif
      break;
    }
    case internal::kRapporRecorder_RecordRapporURL_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)rappor::mojom::RapporRecorder::RecordRapporURL",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool RapporRecorderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RapporRecorder RequestValidator");

  switch (message->header()->name) {
    case internal::kRapporRecorder_RecordRappor_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RapporRecorder_RecordRappor_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRapporRecorder_RecordRapporURL_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RapporRecorder_RecordRapporURL_Params_Data>(
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

void RapporRecorderInterceptorForTesting::RecordRappor(const std::string& metric, const std::string& sample) {
  GetForwardingInterface()->RecordRappor(std::move(metric), std::move(sample));
}
void RapporRecorderInterceptorForTesting::RecordRapporURL(const std::string& metric, const GURL& url) {
  GetForwardingInterface()->RecordRapporURL(std::move(metric), std::move(url));
}
RapporRecorderAsyncWaiter::RapporRecorderAsyncWaiter(
    RapporRecorder* proxy) : proxy_(proxy) {}

RapporRecorderAsyncWaiter::~RapporRecorderAsyncWaiter() = default;


}  // namespace mojom
}  // namespace rappor

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
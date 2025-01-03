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

#include "third_party/blink/public/platform/reporting.mojom-blink.h"

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

#include "third_party/blink/public/platform/reporting.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "ipc/ipc_message_utils.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
namespace blink {
namespace mojom {
namespace blink {
const char ReportingServiceProxy::Name_[] = "blink.mojom.ReportingServiceProxy";

ReportingServiceProxyProxy::ReportingServiceProxyProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ReportingServiceProxyProxy::QueueInterventionReport(
    const ::blink::KURL& in_url, const WTF::String& in_message, const WTF::String& in_source_file, int32_t in_line_number, int32_t in_column_number) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ReportingServiceProxy::QueueInterventionReport");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kReportingServiceProxy_QueueInterventionReport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ReportingServiceProxy_QueueInterventionReport_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ReportingServiceProxy.QueueInterventionReport request");
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in ReportingServiceProxy.QueueInterventionReport request");
  typename decltype(params->source_file)::BaseType::BufferWriter
      source_file_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source_file, buffer, &source_file_writer, &serialization_context);
  params->source_file.Set(
      source_file_writer.is_null() ? nullptr : source_file_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_file.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_file in ReportingServiceProxy.QueueInterventionReport request");
  params->line_number = in_line_number;
  params->column_number = in_column_number;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ReportingServiceProxyProxy::QueueDeprecationReport(
    const ::blink::KURL& in_url, const WTF::String& in_id, WTF::Time in_anticipatedRemoval, const WTF::String& in_message, const WTF::String& in_source_file, int32_t in_line_number, int32_t in_column_number) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ReportingServiceProxy::QueueDeprecationReport");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kReportingServiceProxy_QueueDeprecationReport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ReportingServiceProxy_QueueDeprecationReport_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ReportingServiceProxy.QueueDeprecationReport request");
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in ReportingServiceProxy.QueueDeprecationReport request");
  typename decltype(params->anticipatedRemoval)::BaseType::BufferWriter
      anticipatedRemoval_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_anticipatedRemoval, buffer, &anticipatedRemoval_writer, &serialization_context);
  params->anticipatedRemoval.Set(
      anticipatedRemoval_writer.is_null() ? nullptr : anticipatedRemoval_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->anticipatedRemoval.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null anticipatedRemoval in ReportingServiceProxy.QueueDeprecationReport request");
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in ReportingServiceProxy.QueueDeprecationReport request");
  typename decltype(params->source_file)::BaseType::BufferWriter
      source_file_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source_file, buffer, &source_file_writer, &serialization_context);
  params->source_file.Set(
      source_file_writer.is_null() ? nullptr : source_file_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_file.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_file in ReportingServiceProxy.QueueDeprecationReport request");
  params->line_number = in_line_number;
  params->column_number = in_column_number;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ReportingServiceProxyProxy::QueueCspViolationReport(
    const ::blink::KURL& in_url, const WTF::String& in_group, const WTF::String& in_document_uri, const WTF::String& in_referrer, const WTF::String& in_violated_directive, const WTF::String& in_effective_directive, const WTF::String& in_original_policy, const WTF::String& in_disposition, const WTF::String& in_blocked_uri, int32_t in_line_number, int32_t in_column_number, const WTF::String& in_source_file, int32_t in_status_code, const WTF::String& in_script_sample) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ReportingServiceProxy::QueueCspViolationReport");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kReportingServiceProxy_QueueCspViolationReport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ReportingServiceProxy_QueueCspViolationReport_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ReportingServiceProxy.QueueCspViolationReport request");
  typename decltype(params->group)::BaseType::BufferWriter
      group_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_group, buffer, &group_writer, &serialization_context);
  params->group.Set(
      group_writer.is_null() ? nullptr : group_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->group.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null group in ReportingServiceProxy.QueueCspViolationReport request");
  typename decltype(params->document_uri)::BaseType::BufferWriter
      document_uri_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_document_uri, buffer, &document_uri_writer, &serialization_context);
  params->document_uri.Set(
      document_uri_writer.is_null() ? nullptr : document_uri_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->document_uri.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null document_uri in ReportingServiceProxy.QueueCspViolationReport request");
  typename decltype(params->referrer)::BaseType::BufferWriter
      referrer_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_referrer, buffer, &referrer_writer, &serialization_context);
  params->referrer.Set(
      referrer_writer.is_null() ? nullptr : referrer_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->referrer.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null referrer in ReportingServiceProxy.QueueCspViolationReport request");
  typename decltype(params->violated_directive)::BaseType::BufferWriter
      violated_directive_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_violated_directive, buffer, &violated_directive_writer, &serialization_context);
  params->violated_directive.Set(
      violated_directive_writer.is_null() ? nullptr : violated_directive_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->violated_directive.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null violated_directive in ReportingServiceProxy.QueueCspViolationReport request");
  typename decltype(params->effective_directive)::BaseType::BufferWriter
      effective_directive_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_effective_directive, buffer, &effective_directive_writer, &serialization_context);
  params->effective_directive.Set(
      effective_directive_writer.is_null() ? nullptr : effective_directive_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->effective_directive.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null effective_directive in ReportingServiceProxy.QueueCspViolationReport request");
  typename decltype(params->original_policy)::BaseType::BufferWriter
      original_policy_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_original_policy, buffer, &original_policy_writer, &serialization_context);
  params->original_policy.Set(
      original_policy_writer.is_null() ? nullptr : original_policy_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->original_policy.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null original_policy in ReportingServiceProxy.QueueCspViolationReport request");
  typename decltype(params->disposition)::BaseType::BufferWriter
      disposition_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_disposition, buffer, &disposition_writer, &serialization_context);
  params->disposition.Set(
      disposition_writer.is_null() ? nullptr : disposition_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->disposition.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null disposition in ReportingServiceProxy.QueueCspViolationReport request");
  typename decltype(params->blocked_uri)::BaseType::BufferWriter
      blocked_uri_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_blocked_uri, buffer, &blocked_uri_writer, &serialization_context);
  params->blocked_uri.Set(
      blocked_uri_writer.is_null() ? nullptr : blocked_uri_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->blocked_uri.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null blocked_uri in ReportingServiceProxy.QueueCspViolationReport request");
  params->line_number = in_line_number;
  params->column_number = in_column_number;
  typename decltype(params->source_file)::BaseType::BufferWriter
      source_file_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source_file, buffer, &source_file_writer, &serialization_context);
  params->source_file.Set(
      source_file_writer.is_null() ? nullptr : source_file_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_file.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_file in ReportingServiceProxy.QueueCspViolationReport request");
  params->status_code = in_status_code;
  typename decltype(params->script_sample)::BaseType::BufferWriter
      script_sample_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_script_sample, buffer, &script_sample_writer, &serialization_context);
  params->script_sample.Set(
      script_sample_writer.is_null() ? nullptr : script_sample_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->script_sample.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null script_sample in ReportingServiceProxy.QueueCspViolationReport request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ReportingServiceProxyStubDispatch::Accept(
    ReportingServiceProxy* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kReportingServiceProxy_QueueInterventionReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ReportingServiceProxy::QueueInterventionReport",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ReportingServiceProxy_QueueInterventionReport_Params_Data* params =
          reinterpret_cast<internal::ReportingServiceProxy_QueueInterventionReport_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::KURL p_url{};
      WTF::String p_message{};
      WTF::String p_source_file{};
      int32_t p_line_number{};
      int32_t p_column_number{};
      ReportingServiceProxy_QueueInterventionReport_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!input_data_view.ReadSourceFile(&p_source_file))
        success = false;
      p_line_number = input_data_view.line_number();
      p_column_number = input_data_view.column_number();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ReportingServiceProxy::QueueInterventionReport deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->QueueInterventionReport(
std::move(p_url), 
std::move(p_message), 
std::move(p_source_file), 
std::move(p_line_number), 
std::move(p_column_number));
      return true;
    }
    case internal::kReportingServiceProxy_QueueDeprecationReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ReportingServiceProxy::QueueDeprecationReport",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ReportingServiceProxy_QueueDeprecationReport_Params_Data* params =
          reinterpret_cast<internal::ReportingServiceProxy_QueueDeprecationReport_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::KURL p_url{};
      WTF::String p_id{};
      WTF::Time p_anticipatedRemoval{};
      WTF::String p_message{};
      WTF::String p_source_file{};
      int32_t p_line_number{};
      int32_t p_column_number{};
      ReportingServiceProxy_QueueDeprecationReport_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadId(&p_id))
        success = false;
      if (!input_data_view.ReadAnticipatedRemoval(&p_anticipatedRemoval))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!input_data_view.ReadSourceFile(&p_source_file))
        success = false;
      p_line_number = input_data_view.line_number();
      p_column_number = input_data_view.column_number();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ReportingServiceProxy::QueueDeprecationReport deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->QueueDeprecationReport(
std::move(p_url), 
std::move(p_id), 
std::move(p_anticipatedRemoval), 
std::move(p_message), 
std::move(p_source_file), 
std::move(p_line_number), 
std::move(p_column_number));
      return true;
    }
    case internal::kReportingServiceProxy_QueueCspViolationReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ReportingServiceProxy::QueueCspViolationReport",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ReportingServiceProxy_QueueCspViolationReport_Params_Data* params =
          reinterpret_cast<internal::ReportingServiceProxy_QueueCspViolationReport_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::KURL p_url{};
      WTF::String p_group{};
      WTF::String p_document_uri{};
      WTF::String p_referrer{};
      WTF::String p_violated_directive{};
      WTF::String p_effective_directive{};
      WTF::String p_original_policy{};
      WTF::String p_disposition{};
      WTF::String p_blocked_uri{};
      int32_t p_line_number{};
      int32_t p_column_number{};
      WTF::String p_source_file{};
      int32_t p_status_code{};
      WTF::String p_script_sample{};
      ReportingServiceProxy_QueueCspViolationReport_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadGroup(&p_group))
        success = false;
      if (!input_data_view.ReadDocumentUri(&p_document_uri))
        success = false;
      if (!input_data_view.ReadReferrer(&p_referrer))
        success = false;
      if (!input_data_view.ReadViolatedDirective(&p_violated_directive))
        success = false;
      if (!input_data_view.ReadEffectiveDirective(&p_effective_directive))
        success = false;
      if (!input_data_view.ReadOriginalPolicy(&p_original_policy))
        success = false;
      if (!input_data_view.ReadDisposition(&p_disposition))
        success = false;
      if (!input_data_view.ReadBlockedUri(&p_blocked_uri))
        success = false;
      p_line_number = input_data_view.line_number();
      p_column_number = input_data_view.column_number();
      if (!input_data_view.ReadSourceFile(&p_source_file))
        success = false;
      p_status_code = input_data_view.status_code();
      if (!input_data_view.ReadScriptSample(&p_script_sample))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ReportingServiceProxy::QueueCspViolationReport deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->QueueCspViolationReport(
std::move(p_url), 
std::move(p_group), 
std::move(p_document_uri), 
std::move(p_referrer), 
std::move(p_violated_directive), 
std::move(p_effective_directive), 
std::move(p_original_policy), 
std::move(p_disposition), 
std::move(p_blocked_uri), 
std::move(p_line_number), 
std::move(p_column_number), 
std::move(p_source_file), 
std::move(p_status_code), 
std::move(p_script_sample));
      return true;
    }
  }
  return false;
}

// static
bool ReportingServiceProxyStubDispatch::AcceptWithResponder(
    ReportingServiceProxy* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kReportingServiceProxy_QueueInterventionReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ReportingServiceProxy::QueueInterventionReport",
               "message", message->name());
#endif
      break;
    }
    case internal::kReportingServiceProxy_QueueDeprecationReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ReportingServiceProxy::QueueDeprecationReport",
               "message", message->name());
#endif
      break;
    }
    case internal::kReportingServiceProxy_QueueCspViolationReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ReportingServiceProxy::QueueCspViolationReport",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ReportingServiceProxyRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ReportingServiceProxy RequestValidator");

  switch (message->header()->name) {
    case internal::kReportingServiceProxy_QueueInterventionReport_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ReportingServiceProxy_QueueInterventionReport_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kReportingServiceProxy_QueueDeprecationReport_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ReportingServiceProxy_QueueDeprecationReport_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kReportingServiceProxy_QueueCspViolationReport_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ReportingServiceProxy_QueueCspViolationReport_Params_Data>(
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

void ReportingServiceProxyInterceptorForTesting::QueueInterventionReport(const ::blink::KURL& url, const WTF::String& message, const WTF::String& source_file, int32_t line_number, int32_t column_number) {
  GetForwardingInterface()->QueueInterventionReport(std::move(url), std::move(message), std::move(source_file), std::move(line_number), std::move(column_number));
}
void ReportingServiceProxyInterceptorForTesting::QueueDeprecationReport(const ::blink::KURL& url, const WTF::String& id, WTF::Time anticipatedRemoval, const WTF::String& message, const WTF::String& source_file, int32_t line_number, int32_t column_number) {
  GetForwardingInterface()->QueueDeprecationReport(std::move(url), std::move(id), std::move(anticipatedRemoval), std::move(message), std::move(source_file), std::move(line_number), std::move(column_number));
}
void ReportingServiceProxyInterceptorForTesting::QueueCspViolationReport(const ::blink::KURL& url, const WTF::String& group, const WTF::String& document_uri, const WTF::String& referrer, const WTF::String& violated_directive, const WTF::String& effective_directive, const WTF::String& original_policy, const WTF::String& disposition, const WTF::String& blocked_uri, int32_t line_number, int32_t column_number, const WTF::String& source_file, int32_t status_code, const WTF::String& script_sample) {
  GetForwardingInterface()->QueueCspViolationReport(std::move(url), std::move(group), std::move(document_uri), std::move(referrer), std::move(violated_directive), std::move(effective_directive), std::move(original_policy), std::move(disposition), std::move(blocked_uri), std::move(line_number), std::move(column_number), std::move(source_file), std::move(status_code), std::move(script_sample));
}
ReportingServiceProxyAsyncWaiter::ReportingServiceProxyAsyncWaiter(
    ReportingServiceProxy* proxy) : proxy_(proxy) {}

ReportingServiceProxyAsyncWaiter::~ReportingServiceProxyAsyncWaiter() = default;


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
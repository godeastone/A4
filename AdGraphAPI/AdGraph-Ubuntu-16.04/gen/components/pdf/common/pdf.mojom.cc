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

#include "components/pdf/common/pdf.mojom.h"

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

#include "components/pdf/common/pdf.mojom-shared-message-ids.h"
#include "content/public/common/referrer_struct_traits.h"
#include "third_party/blink/public/platform/referrer_policy_enum_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace pdf {
namespace mojom {
const char PdfListener::Name_[] = "pdf.mojom.PdfListener";

PdfListenerProxy::PdfListenerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PdfListenerProxy::SetCaretPosition(
    const gfx::PointF& in_position) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "pdf::mojom::PdfListener::SetCaretPosition");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPdfListener_SetCaretPosition_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::pdf::mojom::internal::PdfListener_SetCaretPosition_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->position)::BaseType::BufferWriter
      position_writer;
  mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
      in_position, buffer, &position_writer, &serialization_context);
  params->position.Set(
      position_writer.is_null() ? nullptr : position_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->position.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null position in PdfListener.SetCaretPosition request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PdfListenerProxy::MoveRangeSelectionExtent(
    const gfx::PointF& in_extent) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "pdf::mojom::PdfListener::MoveRangeSelectionExtent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPdfListener_MoveRangeSelectionExtent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::pdf::mojom::internal::PdfListener_MoveRangeSelectionExtent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->extent)::BaseType::BufferWriter
      extent_writer;
  mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
      in_extent, buffer, &extent_writer, &serialization_context);
  params->extent.Set(
      extent_writer.is_null() ? nullptr : extent_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->extent.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null extent in PdfListener.MoveRangeSelectionExtent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PdfListenerProxy::SetSelectionBounds(
    const gfx::PointF& in_base, const gfx::PointF& in_extent) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "pdf::mojom::PdfListener::SetSelectionBounds");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPdfListener_SetSelectionBounds_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::pdf::mojom::internal::PdfListener_SetSelectionBounds_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->base)::BaseType::BufferWriter
      base_writer;
  mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
      in_base, buffer, &base_writer, &serialization_context);
  params->base.Set(
      base_writer.is_null() ? nullptr : base_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->base.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null base in PdfListener.SetSelectionBounds request");
  typename decltype(params->extent)::BaseType::BufferWriter
      extent_writer;
  mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
      in_extent, buffer, &extent_writer, &serialization_context);
  params->extent.Set(
      extent_writer.is_null() ? nullptr : extent_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->extent.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null extent in PdfListener.SetSelectionBounds request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PdfListenerStubDispatch::Accept(
    PdfListener* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPdfListener_SetCaretPosition_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)pdf::mojom::PdfListener::SetCaretPosition",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PdfListener_SetCaretPosition_Params_Data* params =
          reinterpret_cast<internal::PdfListener_SetCaretPosition_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::PointF p_position{};
      PdfListener_SetCaretPosition_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPosition(&p_position))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PdfListener::SetCaretPosition deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetCaretPosition(
std::move(p_position));
      return true;
    }
    case internal::kPdfListener_MoveRangeSelectionExtent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)pdf::mojom::PdfListener::MoveRangeSelectionExtent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PdfListener_MoveRangeSelectionExtent_Params_Data* params =
          reinterpret_cast<internal::PdfListener_MoveRangeSelectionExtent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::PointF p_extent{};
      PdfListener_MoveRangeSelectionExtent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadExtent(&p_extent))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PdfListener::MoveRangeSelectionExtent deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->MoveRangeSelectionExtent(
std::move(p_extent));
      return true;
    }
    case internal::kPdfListener_SetSelectionBounds_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)pdf::mojom::PdfListener::SetSelectionBounds",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PdfListener_SetSelectionBounds_Params_Data* params =
          reinterpret_cast<internal::PdfListener_SetSelectionBounds_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::PointF p_base{};
      gfx::PointF p_extent{};
      PdfListener_SetSelectionBounds_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBase(&p_base))
        success = false;
      if (!input_data_view.ReadExtent(&p_extent))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PdfListener::SetSelectionBounds deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetSelectionBounds(
std::move(p_base), 
std::move(p_extent));
      return true;
    }
  }
  return false;
}

// static
bool PdfListenerStubDispatch::AcceptWithResponder(
    PdfListener* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPdfListener_SetCaretPosition_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)pdf::mojom::PdfListener::SetCaretPosition",
               "message", message->name());
#endif
      break;
    }
    case internal::kPdfListener_MoveRangeSelectionExtent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)pdf::mojom::PdfListener::MoveRangeSelectionExtent",
               "message", message->name());
#endif
      break;
    }
    case internal::kPdfListener_SetSelectionBounds_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)pdf::mojom::PdfListener::SetSelectionBounds",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PdfListenerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PdfListener RequestValidator");

  switch (message->header()->name) {
    case internal::kPdfListener_SetCaretPosition_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PdfListener_SetCaretPosition_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPdfListener_MoveRangeSelectionExtent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PdfListener_MoveRangeSelectionExtent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPdfListener_SetSelectionBounds_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PdfListener_SetSelectionBounds_Params_Data>(
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

void PdfListenerInterceptorForTesting::SetCaretPosition(const gfx::PointF& position) {
  GetForwardingInterface()->SetCaretPosition(std::move(position));
}
void PdfListenerInterceptorForTesting::MoveRangeSelectionExtent(const gfx::PointF& extent) {
  GetForwardingInterface()->MoveRangeSelectionExtent(std::move(extent));
}
void PdfListenerInterceptorForTesting::SetSelectionBounds(const gfx::PointF& base, const gfx::PointF& extent) {
  GetForwardingInterface()->SetSelectionBounds(std::move(base), std::move(extent));
}
PdfListenerAsyncWaiter::PdfListenerAsyncWaiter(
    PdfListener* proxy) : proxy_(proxy) {}

PdfListenerAsyncWaiter::~PdfListenerAsyncWaiter() = default;


const char PdfService::Name_[] = "pdf.mojom.PdfService";

PdfServiceProxy::PdfServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PdfServiceProxy::SetListener(
    PdfListenerPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "pdf::mojom::PdfService::SetListener");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPdfService_SetListener_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::pdf::mojom::internal::PdfService_SetListener_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::pdf::mojom::PdfListenerPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in PdfService.SetListener request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PdfServiceProxy::UpdateContentRestrictions(
    int32_t in_restrictions) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "pdf::mojom::PdfService::UpdateContentRestrictions");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPdfService_UpdateContentRestrictions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::pdf::mojom::internal::PdfService_UpdateContentRestrictions_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->restrictions = in_restrictions;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PdfServiceProxy::HasUnsupportedFeature(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "pdf::mojom::PdfService::HasUnsupportedFeature");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPdfService_HasUnsupportedFeature_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::pdf::mojom::internal::PdfService_HasUnsupportedFeature_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PdfServiceProxy::SaveUrlAs(
    const GURL& in_url, const content::Referrer& in_referrer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "pdf::mojom::PdfService::SaveUrlAs");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPdfService_SaveUrlAs_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::pdf::mojom::internal::PdfService_SaveUrlAs_Params_Data::BufferWriter
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
      "null url in PdfService.SaveUrlAs request");
  typename decltype(params->referrer)::BaseType::BufferWriter
      referrer_writer;
  mojo::internal::Serialize<::blink::mojom::ReferrerDataView>(
      in_referrer, buffer, &referrer_writer, &serialization_context);
  params->referrer.Set(
      referrer_writer.is_null() ? nullptr : referrer_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->referrer.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null referrer in PdfService.SaveUrlAs request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PdfServiceProxy::SelectionChanged(
    const gfx::PointF& in_left, int32_t in_left_height, const gfx::PointF& in_right, int32_t in_right_height) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "pdf::mojom::PdfService::SelectionChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPdfService_SelectionChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::pdf::mojom::internal::PdfService_SelectionChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->left)::BaseType::BufferWriter
      left_writer;
  mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
      in_left, buffer, &left_writer, &serialization_context);
  params->left.Set(
      left_writer.is_null() ? nullptr : left_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->left.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null left in PdfService.SelectionChanged request");
  params->left_height = in_left_height;
  typename decltype(params->right)::BaseType::BufferWriter
      right_writer;
  mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
      in_right, buffer, &right_writer, &serialization_context);
  params->right.Set(
      right_writer.is_null() ? nullptr : right_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->right.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null right in PdfService.SelectionChanged request");
  params->right_height = in_right_height;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PdfServiceStubDispatch::Accept(
    PdfService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPdfService_SetListener_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)pdf::mojom::PdfService::SetListener",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PdfService_SetListener_Params_Data* params =
          reinterpret_cast<internal::PdfService_SetListener_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PdfListenerPtr p_client{};
      PdfService_SetListener_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PdfService::SetListener deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetListener(
std::move(p_client));
      return true;
    }
    case internal::kPdfService_UpdateContentRestrictions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)pdf::mojom::PdfService::UpdateContentRestrictions",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PdfService_UpdateContentRestrictions_Params_Data* params =
          reinterpret_cast<internal::PdfService_UpdateContentRestrictions_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_restrictions{};
      PdfService_UpdateContentRestrictions_ParamsDataView input_data_view(params, &serialization_context);
      
      p_restrictions = input_data_view.restrictions();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PdfService::UpdateContentRestrictions deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UpdateContentRestrictions(
std::move(p_restrictions));
      return true;
    }
    case internal::kPdfService_HasUnsupportedFeature_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)pdf::mojom::PdfService::HasUnsupportedFeature",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PdfService_HasUnsupportedFeature_Params_Data* params =
          reinterpret_cast<internal::PdfService_HasUnsupportedFeature_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PdfService_HasUnsupportedFeature_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PdfService::HasUnsupportedFeature deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->HasUnsupportedFeature();
      return true;
    }
    case internal::kPdfService_SaveUrlAs_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)pdf::mojom::PdfService::SaveUrlAs",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PdfService_SaveUrlAs_Params_Data* params =
          reinterpret_cast<internal::PdfService_SaveUrlAs_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      content::Referrer p_referrer{};
      PdfService_SaveUrlAs_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadReferrer(&p_referrer))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PdfService::SaveUrlAs deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SaveUrlAs(
std::move(p_url), 
std::move(p_referrer));
      return true;
    }
    case internal::kPdfService_SelectionChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)pdf::mojom::PdfService::SelectionChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PdfService_SelectionChanged_Params_Data* params =
          reinterpret_cast<internal::PdfService_SelectionChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::PointF p_left{};
      int32_t p_left_height{};
      gfx::PointF p_right{};
      int32_t p_right_height{};
      PdfService_SelectionChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLeft(&p_left))
        success = false;
      p_left_height = input_data_view.left_height();
      if (!input_data_view.ReadRight(&p_right))
        success = false;
      p_right_height = input_data_view.right_height();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PdfService::SelectionChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SelectionChanged(
std::move(p_left), 
std::move(p_left_height), 
std::move(p_right), 
std::move(p_right_height));
      return true;
    }
  }
  return false;
}

// static
bool PdfServiceStubDispatch::AcceptWithResponder(
    PdfService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPdfService_SetListener_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)pdf::mojom::PdfService::SetListener",
               "message", message->name());
#endif
      break;
    }
    case internal::kPdfService_UpdateContentRestrictions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)pdf::mojom::PdfService::UpdateContentRestrictions",
               "message", message->name());
#endif
      break;
    }
    case internal::kPdfService_HasUnsupportedFeature_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)pdf::mojom::PdfService::HasUnsupportedFeature",
               "message", message->name());
#endif
      break;
    }
    case internal::kPdfService_SaveUrlAs_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)pdf::mojom::PdfService::SaveUrlAs",
               "message", message->name());
#endif
      break;
    }
    case internal::kPdfService_SelectionChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)pdf::mojom::PdfService::SelectionChanged",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PdfServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PdfService RequestValidator");

  switch (message->header()->name) {
    case internal::kPdfService_SetListener_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PdfService_SetListener_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPdfService_UpdateContentRestrictions_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PdfService_UpdateContentRestrictions_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPdfService_HasUnsupportedFeature_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PdfService_HasUnsupportedFeature_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPdfService_SaveUrlAs_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PdfService_SaveUrlAs_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPdfService_SelectionChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PdfService_SelectionChanged_Params_Data>(
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

void PdfServiceInterceptorForTesting::SetListener(PdfListenerPtr client) {
  GetForwardingInterface()->SetListener(std::move(client));
}
void PdfServiceInterceptorForTesting::UpdateContentRestrictions(int32_t restrictions) {
  GetForwardingInterface()->UpdateContentRestrictions(std::move(restrictions));
}
void PdfServiceInterceptorForTesting::HasUnsupportedFeature() {
  GetForwardingInterface()->HasUnsupportedFeature();
}
void PdfServiceInterceptorForTesting::SaveUrlAs(const GURL& url, const content::Referrer& referrer) {
  GetForwardingInterface()->SaveUrlAs(std::move(url), std::move(referrer));
}
void PdfServiceInterceptorForTesting::SelectionChanged(const gfx::PointF& left, int32_t left_height, const gfx::PointF& right, int32_t right_height) {
  GetForwardingInterface()->SelectionChanged(std::move(left), std::move(left_height), std::move(right), std::move(right_height));
}
PdfServiceAsyncWaiter::PdfServiceAsyncWaiter(
    PdfService* proxy) : proxy_(proxy) {}

PdfServiceAsyncWaiter::~PdfServiceAsyncWaiter() = default;


}  // namespace mojom
}  // namespace pdf

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
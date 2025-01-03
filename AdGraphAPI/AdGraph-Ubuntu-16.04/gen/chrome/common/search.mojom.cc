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

#include "chrome/common/search.mojom.h"

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

#include "chrome/common/search.mojom-shared-message-ids.h"
#include "chrome/common/instant_struct_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace chrome {
namespace mojom {
const char EmbeddedSearchConnector::Name_[] = "chrome.mojom.EmbeddedSearchConnector";

EmbeddedSearchConnectorProxy::EmbeddedSearchConnectorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void EmbeddedSearchConnectorProxy::Connect(
    EmbeddedSearchAssociatedRequest in_embedded_search, EmbeddedSearchClientAssociatedPtrInfo in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::EmbeddedSearchConnector::Connect");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedSearchConnector_Connect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::EmbeddedSearchConnector_Connect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::chrome::mojom::EmbeddedSearchAssociatedRequestDataView>(
      in_embedded_search, &params->embedded_search, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->embedded_search),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid embedded_search in EmbeddedSearchConnector.Connect request");
  mojo::internal::Serialize<::chrome::mojom::EmbeddedSearchClientAssociatedPtrInfoDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid client in EmbeddedSearchConnector.Connect request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool EmbeddedSearchConnectorStubDispatch::Accept(
    EmbeddedSearchConnector* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kEmbeddedSearchConnector_Connect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearchConnector::Connect",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedSearchConnector_Connect_Params_Data* params =
          reinterpret_cast<internal::EmbeddedSearchConnector_Connect_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      EmbeddedSearchAssociatedRequest p_embedded_search{};
      EmbeddedSearchClientAssociatedPtrInfo p_client{};
      EmbeddedSearchConnector_Connect_ParamsDataView input_data_view(params, &serialization_context);
      
      p_embedded_search =
          input_data_view.TakeEmbeddedSearch<decltype(p_embedded_search)>();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedSearchConnector::Connect deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Connect(
std::move(p_embedded_search), 
std::move(p_client));
      return true;
    }
  }
  return false;
}

// static
bool EmbeddedSearchConnectorStubDispatch::AcceptWithResponder(
    EmbeddedSearchConnector* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kEmbeddedSearchConnector_Connect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearchConnector::Connect",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool EmbeddedSearchConnectorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "EmbeddedSearchConnector RequestValidator");

  switch (message->header()->name) {
    case internal::kEmbeddedSearchConnector_Connect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedSearchConnector_Connect_Params_Data>(
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

void EmbeddedSearchConnectorInterceptorForTesting::Connect(EmbeddedSearchAssociatedRequest embedded_search, EmbeddedSearchClientAssociatedPtrInfo client) {
  GetForwardingInterface()->Connect(std::move(embedded_search), std::move(client));
}
EmbeddedSearchConnectorAsyncWaiter::EmbeddedSearchConnectorAsyncWaiter(
    EmbeddedSearchConnector* proxy) : proxy_(proxy) {}

EmbeddedSearchConnectorAsyncWaiter::~EmbeddedSearchConnectorAsyncWaiter() = default;


const char EmbeddedSearch::Name_[] = "chrome.mojom.EmbeddedSearch";

class EmbeddedSearch_HistorySyncCheck_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  EmbeddedSearch_HistorySyncCheck_ForwardToCallback(
      EmbeddedSearch::HistorySyncCheckCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  EmbeddedSearch::HistorySyncCheckCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(EmbeddedSearch_HistorySyncCheck_ForwardToCallback);
};

class EmbeddedSearch_ChromeIdentityCheck_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  EmbeddedSearch_ChromeIdentityCheck_ForwardToCallback(
      EmbeddedSearch::ChromeIdentityCheckCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  EmbeddedSearch::ChromeIdentityCheckCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(EmbeddedSearch_ChromeIdentityCheck_ForwardToCallback);
};

EmbeddedSearchProxy::EmbeddedSearchProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void EmbeddedSearchProxy::FocusOmnibox(
    int32_t in_page_seq_no, ::OmniboxFocusState in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::EmbeddedSearch::FocusOmnibox");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedSearch_FocusOmnibox_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::EmbeddedSearch_FocusOmnibox_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->page_seq_no = in_page_seq_no;
  mojo::internal::Serialize<::chrome::mojom::OmniboxFocusState>(
      in_state, &params->state);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedSearchProxy::DeleteMostVisitedItem(
    int32_t in_page_seq_no, const GURL& in_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::EmbeddedSearch::DeleteMostVisitedItem");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedSearch_DeleteMostVisitedItem_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::EmbeddedSearch_DeleteMostVisitedItem_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->page_seq_no = in_page_seq_no;
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in EmbeddedSearch.DeleteMostVisitedItem request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedSearchProxy::UndoAllMostVisitedDeletions(
    int32_t in_page_seq_no) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::EmbeddedSearch::UndoAllMostVisitedDeletions");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedSearch_UndoAllMostVisitedDeletions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::EmbeddedSearch_UndoAllMostVisitedDeletions_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->page_seq_no = in_page_seq_no;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedSearchProxy::UndoMostVisitedDeletion(
    int32_t in_page_seq_no, const GURL& in_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::EmbeddedSearch::UndoMostVisitedDeletion");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedSearch_UndoMostVisitedDeletion_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::EmbeddedSearch_UndoMostVisitedDeletion_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->page_seq_no = in_page_seq_no;
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in EmbeddedSearch.UndoMostVisitedDeletion request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedSearchProxy::LogEvent(
    int32_t in_page_seq_no, ::NTPLoggingEventType in_event, base::TimeDelta in_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::EmbeddedSearch::LogEvent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedSearch_LogEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::EmbeddedSearch_LogEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->page_seq_no = in_page_seq_no;
  mojo::internal::Serialize<::chrome::mojom::NTPLoggingEventType>(
      in_event, &params->event);
  typename decltype(params->time)::BaseType::BufferWriter
      time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_time, buffer, &time_writer, &serialization_context);
  params->time.Set(
      time_writer.is_null() ? nullptr : time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null time in EmbeddedSearch.LogEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedSearchProxy::LogMostVisitedImpression(
    int32_t in_page_seq_no, const ::ntp_tiles::NTPTileImpression& in_impression) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::EmbeddedSearch::LogMostVisitedImpression");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedSearch_LogMostVisitedImpression_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::EmbeddedSearch_LogMostVisitedImpression_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->page_seq_no = in_page_seq_no;
  typename decltype(params->impression)::BaseType::BufferWriter
      impression_writer;
  mojo::internal::Serialize<::chrome::mojom::NTPTileImpressionDataView>(
      in_impression, buffer, &impression_writer, &serialization_context);
  params->impression.Set(
      impression_writer.is_null() ? nullptr : impression_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->impression.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null impression in EmbeddedSearch.LogMostVisitedImpression request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedSearchProxy::LogMostVisitedNavigation(
    int32_t in_page_seq_no, const ::ntp_tiles::NTPTileImpression& in_impression) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::EmbeddedSearch::LogMostVisitedNavigation");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedSearch_LogMostVisitedNavigation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::EmbeddedSearch_LogMostVisitedNavigation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->page_seq_no = in_page_seq_no;
  typename decltype(params->impression)::BaseType::BufferWriter
      impression_writer;
  mojo::internal::Serialize<::chrome::mojom::NTPTileImpressionDataView>(
      in_impression, buffer, &impression_writer, &serialization_context);
  params->impression.Set(
      impression_writer.is_null() ? nullptr : impression_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->impression.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null impression in EmbeddedSearch.LogMostVisitedNavigation request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedSearchProxy::PasteAndOpenDropdown(
    int32_t in_page_seq_no, const base::string16& in_text_to_be_pasted) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::EmbeddedSearch::PasteAndOpenDropdown");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedSearch_PasteAndOpenDropdown_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::EmbeddedSearch_PasteAndOpenDropdown_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->page_seq_no = in_page_seq_no;
  typename decltype(params->text_to_be_pasted)::BaseType::BufferWriter
      text_to_be_pasted_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_text_to_be_pasted, buffer, &text_to_be_pasted_writer, &serialization_context);
  params->text_to_be_pasted.Set(
      text_to_be_pasted_writer.is_null() ? nullptr : text_to_be_pasted_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->text_to_be_pasted.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null text_to_be_pasted in EmbeddedSearch.PasteAndOpenDropdown request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedSearchProxy::HistorySyncCheck(
    int32_t in_page_seq_no, HistorySyncCheckCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::EmbeddedSearch::HistorySyncCheck");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedSearch_HistorySyncCheck_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::EmbeddedSearch_HistorySyncCheck_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->page_seq_no = in_page_seq_no;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new EmbeddedSearch_HistorySyncCheck_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void EmbeddedSearchProxy::ChromeIdentityCheck(
    int32_t in_page_seq_no, const base::string16& in_identity, ChromeIdentityCheckCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::EmbeddedSearch::ChromeIdentityCheck");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedSearch_ChromeIdentityCheck_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::EmbeddedSearch_ChromeIdentityCheck_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->page_seq_no = in_page_seq_no;
  typename decltype(params->identity)::BaseType::BufferWriter
      identity_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_identity, buffer, &identity_writer, &serialization_context);
  params->identity.Set(
      identity_writer.is_null() ? nullptr : identity_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->identity.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null identity in EmbeddedSearch.ChromeIdentityCheck request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new EmbeddedSearch_ChromeIdentityCheck_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class EmbeddedSearch_HistorySyncCheck_ProxyToResponder {
 public:
  static EmbeddedSearch::HistorySyncCheckCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<EmbeddedSearch_HistorySyncCheck_ProxyToResponder> proxy(
        new EmbeddedSearch_HistorySyncCheck_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&EmbeddedSearch_HistorySyncCheck_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~EmbeddedSearch_HistorySyncCheck_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  EmbeddedSearch_HistorySyncCheck_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "EmbeddedSearch::HistorySyncCheckCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_sync_history);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(EmbeddedSearch_HistorySyncCheck_ProxyToResponder);
};

bool EmbeddedSearch_HistorySyncCheck_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "chrome::mojom::EmbeddedSearch::HistorySyncCheckCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::EmbeddedSearch_HistorySyncCheck_ResponseParams_Data* params =
      reinterpret_cast<
          internal::EmbeddedSearch_HistorySyncCheck_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_sync_history{};
  EmbeddedSearch_HistorySyncCheck_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_sync_history = input_data_view.sync_history();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "EmbeddedSearch::HistorySyncCheck response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_sync_history));
  return true;
}

void EmbeddedSearch_HistorySyncCheck_ProxyToResponder::Run(
    bool in_sync_history) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedSearch_HistorySyncCheck_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::EmbeddedSearch_HistorySyncCheck_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->sync_history = in_sync_history;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::HistorySyncCheckCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class EmbeddedSearch_ChromeIdentityCheck_ProxyToResponder {
 public:
  static EmbeddedSearch::ChromeIdentityCheckCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<EmbeddedSearch_ChromeIdentityCheck_ProxyToResponder> proxy(
        new EmbeddedSearch_ChromeIdentityCheck_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&EmbeddedSearch_ChromeIdentityCheck_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~EmbeddedSearch_ChromeIdentityCheck_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  EmbeddedSearch_ChromeIdentityCheck_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "EmbeddedSearch::ChromeIdentityCheckCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_identity_match);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(EmbeddedSearch_ChromeIdentityCheck_ProxyToResponder);
};

bool EmbeddedSearch_ChromeIdentityCheck_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "chrome::mojom::EmbeddedSearch::ChromeIdentityCheckCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::EmbeddedSearch_ChromeIdentityCheck_ResponseParams_Data* params =
      reinterpret_cast<
          internal::EmbeddedSearch_ChromeIdentityCheck_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_identity_match{};
  EmbeddedSearch_ChromeIdentityCheck_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_identity_match = input_data_view.identity_match();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "EmbeddedSearch::ChromeIdentityCheck response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_identity_match));
  return true;
}

void EmbeddedSearch_ChromeIdentityCheck_ProxyToResponder::Run(
    bool in_identity_match) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedSearch_ChromeIdentityCheck_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::EmbeddedSearch_ChromeIdentityCheck_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->identity_match = in_identity_match;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::ChromeIdentityCheckCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool EmbeddedSearchStubDispatch::Accept(
    EmbeddedSearch* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kEmbeddedSearch_FocusOmnibox_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::FocusOmnibox",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedSearch_FocusOmnibox_Params_Data* params =
          reinterpret_cast<internal::EmbeddedSearch_FocusOmnibox_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_page_seq_no{};
      ::OmniboxFocusState p_state{};
      EmbeddedSearch_FocusOmnibox_ParamsDataView input_data_view(params, &serialization_context);
      
      p_page_seq_no = input_data_view.page_seq_no();
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedSearch::FocusOmnibox deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FocusOmnibox(
std::move(p_page_seq_no), 
std::move(p_state));
      return true;
    }
    case internal::kEmbeddedSearch_DeleteMostVisitedItem_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::DeleteMostVisitedItem",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedSearch_DeleteMostVisitedItem_Params_Data* params =
          reinterpret_cast<internal::EmbeddedSearch_DeleteMostVisitedItem_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_page_seq_no{};
      GURL p_url{};
      EmbeddedSearch_DeleteMostVisitedItem_ParamsDataView input_data_view(params, &serialization_context);
      
      p_page_seq_no = input_data_view.page_seq_no();
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedSearch::DeleteMostVisitedItem deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DeleteMostVisitedItem(
std::move(p_page_seq_no), 
std::move(p_url));
      return true;
    }
    case internal::kEmbeddedSearch_UndoAllMostVisitedDeletions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::UndoAllMostVisitedDeletions",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedSearch_UndoAllMostVisitedDeletions_Params_Data* params =
          reinterpret_cast<internal::EmbeddedSearch_UndoAllMostVisitedDeletions_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_page_seq_no{};
      EmbeddedSearch_UndoAllMostVisitedDeletions_ParamsDataView input_data_view(params, &serialization_context);
      
      p_page_seq_no = input_data_view.page_seq_no();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedSearch::UndoAllMostVisitedDeletions deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UndoAllMostVisitedDeletions(
std::move(p_page_seq_no));
      return true;
    }
    case internal::kEmbeddedSearch_UndoMostVisitedDeletion_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::UndoMostVisitedDeletion",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedSearch_UndoMostVisitedDeletion_Params_Data* params =
          reinterpret_cast<internal::EmbeddedSearch_UndoMostVisitedDeletion_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_page_seq_no{};
      GURL p_url{};
      EmbeddedSearch_UndoMostVisitedDeletion_ParamsDataView input_data_view(params, &serialization_context);
      
      p_page_seq_no = input_data_view.page_seq_no();
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedSearch::UndoMostVisitedDeletion deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UndoMostVisitedDeletion(
std::move(p_page_seq_no), 
std::move(p_url));
      return true;
    }
    case internal::kEmbeddedSearch_LogEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::LogEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedSearch_LogEvent_Params_Data* params =
          reinterpret_cast<internal::EmbeddedSearch_LogEvent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_page_seq_no{};
      ::NTPLoggingEventType p_event{};
      base::TimeDelta p_time{};
      EmbeddedSearch_LogEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_page_seq_no = input_data_view.page_seq_no();
      if (!input_data_view.ReadEvent(&p_event))
        success = false;
      if (!input_data_view.ReadTime(&p_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedSearch::LogEvent deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->LogEvent(
std::move(p_page_seq_no), 
std::move(p_event), 
std::move(p_time));
      return true;
    }
    case internal::kEmbeddedSearch_LogMostVisitedImpression_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::LogMostVisitedImpression",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedSearch_LogMostVisitedImpression_Params_Data* params =
          reinterpret_cast<internal::EmbeddedSearch_LogMostVisitedImpression_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_page_seq_no{};
      ::ntp_tiles::NTPTileImpression p_impression{};
      EmbeddedSearch_LogMostVisitedImpression_ParamsDataView input_data_view(params, &serialization_context);
      
      p_page_seq_no = input_data_view.page_seq_no();
      if (!input_data_view.ReadImpression(&p_impression))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedSearch::LogMostVisitedImpression deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->LogMostVisitedImpression(
std::move(p_page_seq_no), 
std::move(p_impression));
      return true;
    }
    case internal::kEmbeddedSearch_LogMostVisitedNavigation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::LogMostVisitedNavigation",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedSearch_LogMostVisitedNavigation_Params_Data* params =
          reinterpret_cast<internal::EmbeddedSearch_LogMostVisitedNavigation_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_page_seq_no{};
      ::ntp_tiles::NTPTileImpression p_impression{};
      EmbeddedSearch_LogMostVisitedNavigation_ParamsDataView input_data_view(params, &serialization_context);
      
      p_page_seq_no = input_data_view.page_seq_no();
      if (!input_data_view.ReadImpression(&p_impression))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedSearch::LogMostVisitedNavigation deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->LogMostVisitedNavigation(
std::move(p_page_seq_no), 
std::move(p_impression));
      return true;
    }
    case internal::kEmbeddedSearch_PasteAndOpenDropdown_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::PasteAndOpenDropdown",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedSearch_PasteAndOpenDropdown_Params_Data* params =
          reinterpret_cast<internal::EmbeddedSearch_PasteAndOpenDropdown_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_page_seq_no{};
      base::string16 p_text_to_be_pasted{};
      EmbeddedSearch_PasteAndOpenDropdown_ParamsDataView input_data_view(params, &serialization_context);
      
      p_page_seq_no = input_data_view.page_seq_no();
      if (!input_data_view.ReadTextToBePasted(&p_text_to_be_pasted))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedSearch::PasteAndOpenDropdown deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PasteAndOpenDropdown(
std::move(p_page_seq_no), 
std::move(p_text_to_be_pasted));
      return true;
    }
    case internal::kEmbeddedSearch_HistorySyncCheck_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::HistorySyncCheck",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedSearch_ChromeIdentityCheck_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::ChromeIdentityCheck",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool EmbeddedSearchStubDispatch::AcceptWithResponder(
    EmbeddedSearch* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kEmbeddedSearch_FocusOmnibox_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::FocusOmnibox",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedSearch_DeleteMostVisitedItem_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::DeleteMostVisitedItem",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedSearch_UndoAllMostVisitedDeletions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::UndoAllMostVisitedDeletions",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedSearch_UndoMostVisitedDeletion_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::UndoMostVisitedDeletion",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedSearch_LogEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::LogEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedSearch_LogMostVisitedImpression_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::LogMostVisitedImpression",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedSearch_LogMostVisitedNavigation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::LogMostVisitedNavigation",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedSearch_PasteAndOpenDropdown_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::PasteAndOpenDropdown",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedSearch_HistorySyncCheck_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::HistorySyncCheck",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::EmbeddedSearch_HistorySyncCheck_Params_Data* params =
          reinterpret_cast<
              internal::EmbeddedSearch_HistorySyncCheck_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_page_seq_no{};
      EmbeddedSearch_HistorySyncCheck_ParamsDataView input_data_view(params, &serialization_context);
      
      p_page_seq_no = input_data_view.page_seq_no();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedSearch::HistorySyncCheck deserializer");
        return false;
      }
      EmbeddedSearch::HistorySyncCheckCallback callback =
          EmbeddedSearch_HistorySyncCheck_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->HistorySyncCheck(
std::move(p_page_seq_no), std::move(callback));
      return true;
    }
    case internal::kEmbeddedSearch_ChromeIdentityCheck_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearch::ChromeIdentityCheck",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::EmbeddedSearch_ChromeIdentityCheck_Params_Data* params =
          reinterpret_cast<
              internal::EmbeddedSearch_ChromeIdentityCheck_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_page_seq_no{};
      base::string16 p_identity{};
      EmbeddedSearch_ChromeIdentityCheck_ParamsDataView input_data_view(params, &serialization_context);
      
      p_page_seq_no = input_data_view.page_seq_no();
      if (!input_data_view.ReadIdentity(&p_identity))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedSearch::ChromeIdentityCheck deserializer");
        return false;
      }
      EmbeddedSearch::ChromeIdentityCheckCallback callback =
          EmbeddedSearch_ChromeIdentityCheck_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ChromeIdentityCheck(
std::move(p_page_seq_no), 
std::move(p_identity), std::move(callback));
      return true;
    }
  }
  return false;
}

bool EmbeddedSearchRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "EmbeddedSearch RequestValidator");

  switch (message->header()->name) {
    case internal::kEmbeddedSearch_FocusOmnibox_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedSearch_FocusOmnibox_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedSearch_DeleteMostVisitedItem_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedSearch_DeleteMostVisitedItem_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedSearch_UndoAllMostVisitedDeletions_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedSearch_UndoAllMostVisitedDeletions_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedSearch_UndoMostVisitedDeletion_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedSearch_UndoMostVisitedDeletion_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedSearch_LogEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedSearch_LogEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedSearch_LogMostVisitedImpression_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedSearch_LogMostVisitedImpression_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedSearch_LogMostVisitedNavigation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedSearch_LogMostVisitedNavigation_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedSearch_PasteAndOpenDropdown_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedSearch_PasteAndOpenDropdown_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedSearch_HistorySyncCheck_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedSearch_HistorySyncCheck_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedSearch_ChromeIdentityCheck_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedSearch_ChromeIdentityCheck_Params_Data>(
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

bool EmbeddedSearchResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "EmbeddedSearch ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kEmbeddedSearch_HistorySyncCheck_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedSearch_HistorySyncCheck_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedSearch_ChromeIdentityCheck_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedSearch_ChromeIdentityCheck_ResponseParams_Data>(
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
void EmbeddedSearchInterceptorForTesting::FocusOmnibox(int32_t page_seq_no, ::OmniboxFocusState state) {
  GetForwardingInterface()->FocusOmnibox(std::move(page_seq_no), std::move(state));
}
void EmbeddedSearchInterceptorForTesting::DeleteMostVisitedItem(int32_t page_seq_no, const GURL& url) {
  GetForwardingInterface()->DeleteMostVisitedItem(std::move(page_seq_no), std::move(url));
}
void EmbeddedSearchInterceptorForTesting::UndoAllMostVisitedDeletions(int32_t page_seq_no) {
  GetForwardingInterface()->UndoAllMostVisitedDeletions(std::move(page_seq_no));
}
void EmbeddedSearchInterceptorForTesting::UndoMostVisitedDeletion(int32_t page_seq_no, const GURL& url) {
  GetForwardingInterface()->UndoMostVisitedDeletion(std::move(page_seq_no), std::move(url));
}
void EmbeddedSearchInterceptorForTesting::LogEvent(int32_t page_seq_no, ::NTPLoggingEventType event, base::TimeDelta time) {
  GetForwardingInterface()->LogEvent(std::move(page_seq_no), std::move(event), std::move(time));
}
void EmbeddedSearchInterceptorForTesting::LogMostVisitedImpression(int32_t page_seq_no, const ::ntp_tiles::NTPTileImpression& impression) {
  GetForwardingInterface()->LogMostVisitedImpression(std::move(page_seq_no), std::move(impression));
}
void EmbeddedSearchInterceptorForTesting::LogMostVisitedNavigation(int32_t page_seq_no, const ::ntp_tiles::NTPTileImpression& impression) {
  GetForwardingInterface()->LogMostVisitedNavigation(std::move(page_seq_no), std::move(impression));
}
void EmbeddedSearchInterceptorForTesting::PasteAndOpenDropdown(int32_t page_seq_no, const base::string16& text_to_be_pasted) {
  GetForwardingInterface()->PasteAndOpenDropdown(std::move(page_seq_no), std::move(text_to_be_pasted));
}
void EmbeddedSearchInterceptorForTesting::HistorySyncCheck(int32_t page_seq_no, HistorySyncCheckCallback callback) {
  GetForwardingInterface()->HistorySyncCheck(std::move(page_seq_no), std::move(callback));
}
void EmbeddedSearchInterceptorForTesting::ChromeIdentityCheck(int32_t page_seq_no, const base::string16& identity, ChromeIdentityCheckCallback callback) {
  GetForwardingInterface()->ChromeIdentityCheck(std::move(page_seq_no), std::move(identity), std::move(callback));
}
EmbeddedSearchAsyncWaiter::EmbeddedSearchAsyncWaiter(
    EmbeddedSearch* proxy) : proxy_(proxy) {}

EmbeddedSearchAsyncWaiter::~EmbeddedSearchAsyncWaiter() = default;

void EmbeddedSearchAsyncWaiter::HistorySyncCheck(
    int32_t page_seq_no, bool* out_sync_history) {
  base::RunLoop loop;
  proxy_->HistorySyncCheck(std::move(page_seq_no),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_sync_history
,
             bool sync_history) {*out_sync_history = std::move(sync_history);
            loop->Quit();
          },
          &loop,
          out_sync_history));
  loop.Run();
}
void EmbeddedSearchAsyncWaiter::ChromeIdentityCheck(
    int32_t page_seq_no, const base::string16& identity, bool* out_identity_match) {
  base::RunLoop loop;
  proxy_->ChromeIdentityCheck(std::move(page_seq_no),std::move(identity),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_identity_match
,
             bool identity_match) {*out_identity_match = std::move(identity_match);
            loop->Quit();
          },
          &loop,
          out_identity_match));
  loop.Run();
}

const char EmbeddedSearchClient::Name_[] = "chrome.mojom.EmbeddedSearchClient";

EmbeddedSearchClientProxy::EmbeddedSearchClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void EmbeddedSearchClientProxy::SetPageSequenceNumber(
    int32_t in_page_seq_no) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::EmbeddedSearchClient::SetPageSequenceNumber");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedSearchClient_SetPageSequenceNumber_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::EmbeddedSearchClient_SetPageSequenceNumber_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->page_seq_no = in_page_seq_no;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedSearchClientProxy::FocusChanged(
    ::OmniboxFocusState in_new_focus_state, ::OmniboxFocusChangeReason in_reason) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::EmbeddedSearchClient::FocusChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedSearchClient_FocusChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::EmbeddedSearchClient_FocusChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::chrome::mojom::OmniboxFocusState>(
      in_new_focus_state, &params->new_focus_state);
  mojo::internal::Serialize<::chrome::mojom::OmniboxFocusChangeReason>(
      in_reason, &params->reason);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedSearchClientProxy::MostVisitedChanged(
    const std::vector<::InstantMostVisitedItem>& in_items) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::EmbeddedSearchClient::MostVisitedChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedSearchClient_MostVisitedChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::EmbeddedSearchClient_MostVisitedChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->items)::BaseType::BufferWriter
      items_writer;
  const mojo::internal::ContainerValidateParams items_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::chrome::mojom::InstantMostVisitedItemDataView>>(
      in_items, buffer, &items_writer, &items_validate_params,
      &serialization_context);
  params->items.Set(
      items_writer.is_null() ? nullptr : items_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->items.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null items in EmbeddedSearchClient.MostVisitedChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedSearchClientProxy::SetInputInProgress(
    bool in_input_in_progress) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::EmbeddedSearchClient::SetInputInProgress");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedSearchClient_SetInputInProgress_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::EmbeddedSearchClient_SetInputInProgress_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->input_in_progress = in_input_in_progress;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedSearchClientProxy::ThemeChanged(
    const ::ThemeBackgroundInfo& in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::EmbeddedSearchClient::ThemeChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedSearchClient_ThemeChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::EmbeddedSearchClient_ThemeChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  mojo::internal::Serialize<::chrome::mojom::ThemeBackgroundInfoDataView>(
      in_value, buffer, &value_writer, &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in EmbeddedSearchClient.ThemeChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool EmbeddedSearchClientStubDispatch::Accept(
    EmbeddedSearchClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kEmbeddedSearchClient_SetPageSequenceNumber_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearchClient::SetPageSequenceNumber",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedSearchClient_SetPageSequenceNumber_Params_Data* params =
          reinterpret_cast<internal::EmbeddedSearchClient_SetPageSequenceNumber_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_page_seq_no{};
      EmbeddedSearchClient_SetPageSequenceNumber_ParamsDataView input_data_view(params, &serialization_context);
      
      p_page_seq_no = input_data_view.page_seq_no();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedSearchClient::SetPageSequenceNumber deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetPageSequenceNumber(
std::move(p_page_seq_no));
      return true;
    }
    case internal::kEmbeddedSearchClient_FocusChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearchClient::FocusChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedSearchClient_FocusChanged_Params_Data* params =
          reinterpret_cast<internal::EmbeddedSearchClient_FocusChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::OmniboxFocusState p_new_focus_state{};
      ::OmniboxFocusChangeReason p_reason{};
      EmbeddedSearchClient_FocusChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadNewFocusState(&p_new_focus_state))
        success = false;
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedSearchClient::FocusChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FocusChanged(
std::move(p_new_focus_state), 
std::move(p_reason));
      return true;
    }
    case internal::kEmbeddedSearchClient_MostVisitedChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearchClient::MostVisitedChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedSearchClient_MostVisitedChanged_Params_Data* params =
          reinterpret_cast<internal::EmbeddedSearchClient_MostVisitedChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<::InstantMostVisitedItem> p_items{};
      EmbeddedSearchClient_MostVisitedChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadItems(&p_items))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedSearchClient::MostVisitedChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->MostVisitedChanged(
std::move(p_items));
      return true;
    }
    case internal::kEmbeddedSearchClient_SetInputInProgress_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearchClient::SetInputInProgress",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedSearchClient_SetInputInProgress_Params_Data* params =
          reinterpret_cast<internal::EmbeddedSearchClient_SetInputInProgress_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_input_in_progress{};
      EmbeddedSearchClient_SetInputInProgress_ParamsDataView input_data_view(params, &serialization_context);
      
      p_input_in_progress = input_data_view.input_in_progress();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedSearchClient::SetInputInProgress deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetInputInProgress(
std::move(p_input_in_progress));
      return true;
    }
    case internal::kEmbeddedSearchClient_ThemeChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearchClient::ThemeChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedSearchClient_ThemeChanged_Params_Data* params =
          reinterpret_cast<internal::EmbeddedSearchClient_ThemeChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::ThemeBackgroundInfo p_value{};
      EmbeddedSearchClient_ThemeChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedSearchClient::ThemeChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ThemeChanged(
std::move(p_value));
      return true;
    }
  }
  return false;
}

// static
bool EmbeddedSearchClientStubDispatch::AcceptWithResponder(
    EmbeddedSearchClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kEmbeddedSearchClient_SetPageSequenceNumber_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearchClient::SetPageSequenceNumber",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedSearchClient_FocusChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearchClient::FocusChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedSearchClient_MostVisitedChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearchClient::MostVisitedChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedSearchClient_SetInputInProgress_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearchClient::SetInputInProgress",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedSearchClient_ThemeChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::EmbeddedSearchClient::ThemeChanged",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool EmbeddedSearchClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "EmbeddedSearchClient RequestValidator");

  switch (message->header()->name) {
    case internal::kEmbeddedSearchClient_SetPageSequenceNumber_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedSearchClient_SetPageSequenceNumber_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedSearchClient_FocusChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedSearchClient_FocusChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedSearchClient_MostVisitedChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedSearchClient_MostVisitedChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedSearchClient_SetInputInProgress_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedSearchClient_SetInputInProgress_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedSearchClient_ThemeChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedSearchClient_ThemeChanged_Params_Data>(
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

void EmbeddedSearchClientInterceptorForTesting::SetPageSequenceNumber(int32_t page_seq_no) {
  GetForwardingInterface()->SetPageSequenceNumber(std::move(page_seq_no));
}
void EmbeddedSearchClientInterceptorForTesting::FocusChanged(::OmniboxFocusState new_focus_state, ::OmniboxFocusChangeReason reason) {
  GetForwardingInterface()->FocusChanged(std::move(new_focus_state), std::move(reason));
}
void EmbeddedSearchClientInterceptorForTesting::MostVisitedChanged(const std::vector<::InstantMostVisitedItem>& items) {
  GetForwardingInterface()->MostVisitedChanged(std::move(items));
}
void EmbeddedSearchClientInterceptorForTesting::SetInputInProgress(bool input_in_progress) {
  GetForwardingInterface()->SetInputInProgress(std::move(input_in_progress));
}
void EmbeddedSearchClientInterceptorForTesting::ThemeChanged(const ::ThemeBackgroundInfo& value) {
  GetForwardingInterface()->ThemeChanged(std::move(value));
}
EmbeddedSearchClientAsyncWaiter::EmbeddedSearchClientAsyncWaiter(
    EmbeddedSearchClient* proxy) : proxy_(proxy) {}

EmbeddedSearchClientAsyncWaiter::~EmbeddedSearchClientAsyncWaiter() = default;


const char SearchBouncer::Name_[] = "chrome.mojom.SearchBouncer";

SearchBouncerProxy::SearchBouncerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SearchBouncerProxy::SetNewTabPageURL(
    const GURL& in_new_tab_page_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::SearchBouncer::SetNewTabPageURL");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSearchBouncer_SetNewTabPageURL_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::SearchBouncer_SetNewTabPageURL_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->new_tab_page_url)::BaseType::BufferWriter
      new_tab_page_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_new_tab_page_url, buffer, &new_tab_page_url_writer, &serialization_context);
  params->new_tab_page_url.Set(
      new_tab_page_url_writer.is_null() ? nullptr : new_tab_page_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_tab_page_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_tab_page_url in SearchBouncer.SetNewTabPageURL request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SearchBouncerStubDispatch::Accept(
    SearchBouncer* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSearchBouncer_SetNewTabPageURL_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::SearchBouncer::SetNewTabPageURL",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SearchBouncer_SetNewTabPageURL_Params_Data* params =
          reinterpret_cast<internal::SearchBouncer_SetNewTabPageURL_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_new_tab_page_url{};
      SearchBouncer_SetNewTabPageURL_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadNewTabPageUrl(&p_new_tab_page_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SearchBouncer::SetNewTabPageURL deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetNewTabPageURL(
std::move(p_new_tab_page_url));
      return true;
    }
  }
  return false;
}

// static
bool SearchBouncerStubDispatch::AcceptWithResponder(
    SearchBouncer* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSearchBouncer_SetNewTabPageURL_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::SearchBouncer::SetNewTabPageURL",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool SearchBouncerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SearchBouncer RequestValidator");

  switch (message->header()->name) {
    case internal::kSearchBouncer_SetNewTabPageURL_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SearchBouncer_SetNewTabPageURL_Params_Data>(
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

void SearchBouncerInterceptorForTesting::SetNewTabPageURL(const GURL& new_tab_page_url) {
  GetForwardingInterface()->SetNewTabPageURL(std::move(new_tab_page_url));
}
SearchBouncerAsyncWaiter::SearchBouncerAsyncWaiter(
    SearchBouncer* proxy) : proxy_(proxy) {}

SearchBouncerAsyncWaiter::~SearchBouncerAsyncWaiter() = default;


}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
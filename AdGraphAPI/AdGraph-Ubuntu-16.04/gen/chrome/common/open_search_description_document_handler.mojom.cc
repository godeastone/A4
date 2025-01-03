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

#include "chrome/common/open_search_description_document_handler.mojom.h"

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

#include "chrome/common/open_search_description_document_handler.mojom-shared-message-ids.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace chrome {
namespace mojom {
const char OpenSearchDescriptionDocumentHandler::Name_[] = "chrome.mojom.OpenSearchDescriptionDocumentHandler";

OpenSearchDescriptionDocumentHandlerProxy::OpenSearchDescriptionDocumentHandlerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void OpenSearchDescriptionDocumentHandlerProxy::PageHasOpenSearchDescriptionDocument(
    const GURL& in_page_url, const GURL& in_osdd_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::OpenSearchDescriptionDocumentHandler::PageHasOpenSearchDescriptionDocument");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kOpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->page_url)::BaseType::BufferWriter
      page_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_page_url, buffer, &page_url_writer, &serialization_context);
  params->page_url.Set(
      page_url_writer.is_null() ? nullptr : page_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->page_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null page_url in OpenSearchDescriptionDocumentHandler.PageHasOpenSearchDescriptionDocument request");
  typename decltype(params->osdd_url)::BaseType::BufferWriter
      osdd_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_osdd_url, buffer, &osdd_url_writer, &serialization_context);
  params->osdd_url.Set(
      osdd_url_writer.is_null() ? nullptr : osdd_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->osdd_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null osdd_url in OpenSearchDescriptionDocumentHandler.PageHasOpenSearchDescriptionDocument request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool OpenSearchDescriptionDocumentHandlerStubDispatch::Accept(
    OpenSearchDescriptionDocumentHandler* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kOpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::OpenSearchDescriptionDocumentHandler::PageHasOpenSearchDescriptionDocument",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params_Data* params =
          reinterpret_cast<internal::OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_page_url{};
      GURL p_osdd_url{};
      OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPageUrl(&p_page_url))
        success = false;
      if (!input_data_view.ReadOsddUrl(&p_osdd_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OpenSearchDescriptionDocumentHandler::PageHasOpenSearchDescriptionDocument deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PageHasOpenSearchDescriptionDocument(
std::move(p_page_url), 
std::move(p_osdd_url));
      return true;
    }
  }
  return false;
}

// static
bool OpenSearchDescriptionDocumentHandlerStubDispatch::AcceptWithResponder(
    OpenSearchDescriptionDocumentHandler* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kOpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::OpenSearchDescriptionDocumentHandler::PageHasOpenSearchDescriptionDocument",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool OpenSearchDescriptionDocumentHandlerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "OpenSearchDescriptionDocumentHandler RequestValidator");

  switch (message->header()->name) {
    case internal::kOpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params_Data>(
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

void OpenSearchDescriptionDocumentHandlerInterceptorForTesting::PageHasOpenSearchDescriptionDocument(const GURL& page_url, const GURL& osdd_url) {
  GetForwardingInterface()->PageHasOpenSearchDescriptionDocument(std::move(page_url), std::move(osdd_url));
}
OpenSearchDescriptionDocumentHandlerAsyncWaiter::OpenSearchDescriptionDocumentHandlerAsyncWaiter(
    OpenSearchDescriptionDocumentHandler* proxy) : proxy_(proxy) {}

OpenSearchDescriptionDocumentHandlerAsyncWaiter::~OpenSearchDescriptionDocumentHandlerAsyncWaiter() = default;


}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
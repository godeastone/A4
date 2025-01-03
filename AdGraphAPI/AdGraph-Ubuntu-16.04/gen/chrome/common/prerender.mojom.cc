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

#include "chrome/common/prerender.mojom.h"

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

#include "chrome/common/prerender.mojom-shared-message-ids.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace chrome {
namespace mojom {
const char PrerenderCanceler::Name_[] = "chrome.mojom.PrerenderCanceler";

PrerenderCancelerProxy::PrerenderCancelerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PrerenderCancelerProxy::CancelPrerenderForPrinting(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::PrerenderCanceler::CancelPrerenderForPrinting");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPrerenderCanceler_CancelPrerenderForPrinting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PrerenderCanceler_CancelPrerenderForPrinting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PrerenderCancelerProxy::CancelPrerenderForUnsupportedMethod(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::PrerenderCanceler::CancelPrerenderForUnsupportedMethod");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPrerenderCanceler_CancelPrerenderForUnsupportedMethod_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PrerenderCancelerProxy::CancelPrerenderForUnsupportedScheme(
    const GURL& in_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::PrerenderCanceler::CancelPrerenderForUnsupportedScheme");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPrerenderCanceler_CancelPrerenderForUnsupportedScheme_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data::BufferWriter
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
      "null url in PrerenderCanceler.CancelPrerenderForUnsupportedScheme request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PrerenderCancelerProxy::CancelPrerenderForSyncDeferredRedirect(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::PrerenderCanceler::CancelPrerenderForSyncDeferredRedirect");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PrerenderCancelerStubDispatch::Accept(
    PrerenderCanceler* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPrerenderCanceler_CancelPrerenderForPrinting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PrerenderCanceler::CancelPrerenderForPrinting",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PrerenderCanceler_CancelPrerenderForPrinting_Params_Data* params =
          reinterpret_cast<internal::PrerenderCanceler_CancelPrerenderForPrinting_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PrerenderCanceler_CancelPrerenderForPrinting_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PrerenderCanceler::CancelPrerenderForPrinting deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CancelPrerenderForPrinting();
      return true;
    }
    case internal::kPrerenderCanceler_CancelPrerenderForUnsupportedMethod_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PrerenderCanceler::CancelPrerenderForUnsupportedMethod",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params_Data* params =
          reinterpret_cast<internal::PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PrerenderCanceler_CancelPrerenderForUnsupportedMethod_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PrerenderCanceler::CancelPrerenderForUnsupportedMethod deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CancelPrerenderForUnsupportedMethod();
      return true;
    }
    case internal::kPrerenderCanceler_CancelPrerenderForUnsupportedScheme_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PrerenderCanceler::CancelPrerenderForUnsupportedScheme",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data* params =
          reinterpret_cast<internal::PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      PrerenderCanceler_CancelPrerenderForUnsupportedScheme_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PrerenderCanceler::CancelPrerenderForUnsupportedScheme deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CancelPrerenderForUnsupportedScheme(
std::move(p_url));
      return true;
    }
    case internal::kPrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PrerenderCanceler::CancelPrerenderForSyncDeferredRedirect",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params_Data* params =
          reinterpret_cast<internal::PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PrerenderCanceler::CancelPrerenderForSyncDeferredRedirect deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CancelPrerenderForSyncDeferredRedirect();
      return true;
    }
  }
  return false;
}

// static
bool PrerenderCancelerStubDispatch::AcceptWithResponder(
    PrerenderCanceler* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPrerenderCanceler_CancelPrerenderForPrinting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PrerenderCanceler::CancelPrerenderForPrinting",
               "message", message->name());
#endif
      break;
    }
    case internal::kPrerenderCanceler_CancelPrerenderForUnsupportedMethod_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PrerenderCanceler::CancelPrerenderForUnsupportedMethod",
               "message", message->name());
#endif
      break;
    }
    case internal::kPrerenderCanceler_CancelPrerenderForUnsupportedScheme_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PrerenderCanceler::CancelPrerenderForUnsupportedScheme",
               "message", message->name());
#endif
      break;
    }
    case internal::kPrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PrerenderCanceler::CancelPrerenderForSyncDeferredRedirect",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PrerenderCancelerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PrerenderCanceler RequestValidator");

  switch (message->header()->name) {
    case internal::kPrerenderCanceler_CancelPrerenderForPrinting_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PrerenderCanceler_CancelPrerenderForPrinting_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPrerenderCanceler_CancelPrerenderForUnsupportedMethod_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPrerenderCanceler_CancelPrerenderForUnsupportedScheme_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params_Data>(
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

void PrerenderCancelerInterceptorForTesting::CancelPrerenderForPrinting() {
  GetForwardingInterface()->CancelPrerenderForPrinting();
}
void PrerenderCancelerInterceptorForTesting::CancelPrerenderForUnsupportedMethod() {
  GetForwardingInterface()->CancelPrerenderForUnsupportedMethod();
}
void PrerenderCancelerInterceptorForTesting::CancelPrerenderForUnsupportedScheme(const GURL& url) {
  GetForwardingInterface()->CancelPrerenderForUnsupportedScheme(std::move(url));
}
void PrerenderCancelerInterceptorForTesting::CancelPrerenderForSyncDeferredRedirect() {
  GetForwardingInterface()->CancelPrerenderForSyncDeferredRedirect();
}
PrerenderCancelerAsyncWaiter::PrerenderCancelerAsyncWaiter(
    PrerenderCanceler* proxy) : proxy_(proxy) {}

PrerenderCancelerAsyncWaiter::~PrerenderCancelerAsyncWaiter() = default;


const char PrerenderDispatcher::Name_[] = "chrome.mojom.PrerenderDispatcher";

PrerenderDispatcherProxy::PrerenderDispatcherProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PrerenderDispatcherProxy::PrerenderStart(
    int32_t in_prerender_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::PrerenderDispatcher::PrerenderStart");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPrerenderDispatcher_PrerenderStart_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PrerenderDispatcher_PrerenderStart_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->prerender_id = in_prerender_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PrerenderDispatcherProxy::PrerenderStopLoading(
    int32_t in_prerender_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::PrerenderDispatcher::PrerenderStopLoading");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPrerenderDispatcher_PrerenderStopLoading_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PrerenderDispatcher_PrerenderStopLoading_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->prerender_id = in_prerender_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PrerenderDispatcherProxy::PrerenderDomContentLoaded(
    int32_t in_prerender_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::PrerenderDispatcher::PrerenderDomContentLoaded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPrerenderDispatcher_PrerenderDomContentLoaded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PrerenderDispatcher_PrerenderDomContentLoaded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->prerender_id = in_prerender_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PrerenderDispatcherProxy::PrerenderAddAlias(
    const GURL& in_alias) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::PrerenderDispatcher::PrerenderAddAlias");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPrerenderDispatcher_PrerenderAddAlias_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PrerenderDispatcher_PrerenderAddAlias_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->alias)::BaseType::BufferWriter
      alias_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_alias, buffer, &alias_writer, &serialization_context);
  params->alias.Set(
      alias_writer.is_null() ? nullptr : alias_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->alias.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null alias in PrerenderDispatcher.PrerenderAddAlias request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PrerenderDispatcherProxy::PrerenderRemoveAliases(
    const std::vector<GURL>& in_aliases) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::PrerenderDispatcher::PrerenderRemoveAliases");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPrerenderDispatcher_PrerenderRemoveAliases_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PrerenderDispatcher_PrerenderRemoveAliases_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->aliases)::BaseType::BufferWriter
      aliases_writer;
  const mojo::internal::ContainerValidateParams aliases_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::url::mojom::UrlDataView>>(
      in_aliases, buffer, &aliases_writer, &aliases_validate_params,
      &serialization_context);
  params->aliases.Set(
      aliases_writer.is_null() ? nullptr : aliases_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->aliases.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null aliases in PrerenderDispatcher.PrerenderRemoveAliases request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PrerenderDispatcherProxy::PrerenderStop(
    int32_t in_prerender_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::PrerenderDispatcher::PrerenderStop");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPrerenderDispatcher_PrerenderStop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PrerenderDispatcher_PrerenderStop_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->prerender_id = in_prerender_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PrerenderDispatcherStubDispatch::Accept(
    PrerenderDispatcher* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPrerenderDispatcher_PrerenderStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PrerenderDispatcher::PrerenderStart",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PrerenderDispatcher_PrerenderStart_Params_Data* params =
          reinterpret_cast<internal::PrerenderDispatcher_PrerenderStart_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_prerender_id{};
      PrerenderDispatcher_PrerenderStart_ParamsDataView input_data_view(params, &serialization_context);
      
      p_prerender_id = input_data_view.prerender_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PrerenderDispatcher::PrerenderStart deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PrerenderStart(
std::move(p_prerender_id));
      return true;
    }
    case internal::kPrerenderDispatcher_PrerenderStopLoading_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PrerenderDispatcher::PrerenderStopLoading",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PrerenderDispatcher_PrerenderStopLoading_Params_Data* params =
          reinterpret_cast<internal::PrerenderDispatcher_PrerenderStopLoading_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_prerender_id{};
      PrerenderDispatcher_PrerenderStopLoading_ParamsDataView input_data_view(params, &serialization_context);
      
      p_prerender_id = input_data_view.prerender_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PrerenderDispatcher::PrerenderStopLoading deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PrerenderStopLoading(
std::move(p_prerender_id));
      return true;
    }
    case internal::kPrerenderDispatcher_PrerenderDomContentLoaded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PrerenderDispatcher::PrerenderDomContentLoaded",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PrerenderDispatcher_PrerenderDomContentLoaded_Params_Data* params =
          reinterpret_cast<internal::PrerenderDispatcher_PrerenderDomContentLoaded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_prerender_id{};
      PrerenderDispatcher_PrerenderDomContentLoaded_ParamsDataView input_data_view(params, &serialization_context);
      
      p_prerender_id = input_data_view.prerender_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PrerenderDispatcher::PrerenderDomContentLoaded deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PrerenderDomContentLoaded(
std::move(p_prerender_id));
      return true;
    }
    case internal::kPrerenderDispatcher_PrerenderAddAlias_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PrerenderDispatcher::PrerenderAddAlias",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PrerenderDispatcher_PrerenderAddAlias_Params_Data* params =
          reinterpret_cast<internal::PrerenderDispatcher_PrerenderAddAlias_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_alias{};
      PrerenderDispatcher_PrerenderAddAlias_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadAlias(&p_alias))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PrerenderDispatcher::PrerenderAddAlias deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PrerenderAddAlias(
std::move(p_alias));
      return true;
    }
    case internal::kPrerenderDispatcher_PrerenderRemoveAliases_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PrerenderDispatcher::PrerenderRemoveAliases",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PrerenderDispatcher_PrerenderRemoveAliases_Params_Data* params =
          reinterpret_cast<internal::PrerenderDispatcher_PrerenderRemoveAliases_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<GURL> p_aliases{};
      PrerenderDispatcher_PrerenderRemoveAliases_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadAliases(&p_aliases))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PrerenderDispatcher::PrerenderRemoveAliases deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PrerenderRemoveAliases(
std::move(p_aliases));
      return true;
    }
    case internal::kPrerenderDispatcher_PrerenderStop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PrerenderDispatcher::PrerenderStop",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PrerenderDispatcher_PrerenderStop_Params_Data* params =
          reinterpret_cast<internal::PrerenderDispatcher_PrerenderStop_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_prerender_id{};
      PrerenderDispatcher_PrerenderStop_ParamsDataView input_data_view(params, &serialization_context);
      
      p_prerender_id = input_data_view.prerender_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PrerenderDispatcher::PrerenderStop deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PrerenderStop(
std::move(p_prerender_id));
      return true;
    }
  }
  return false;
}

// static
bool PrerenderDispatcherStubDispatch::AcceptWithResponder(
    PrerenderDispatcher* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPrerenderDispatcher_PrerenderStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PrerenderDispatcher::PrerenderStart",
               "message", message->name());
#endif
      break;
    }
    case internal::kPrerenderDispatcher_PrerenderStopLoading_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PrerenderDispatcher::PrerenderStopLoading",
               "message", message->name());
#endif
      break;
    }
    case internal::kPrerenderDispatcher_PrerenderDomContentLoaded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PrerenderDispatcher::PrerenderDomContentLoaded",
               "message", message->name());
#endif
      break;
    }
    case internal::kPrerenderDispatcher_PrerenderAddAlias_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PrerenderDispatcher::PrerenderAddAlias",
               "message", message->name());
#endif
      break;
    }
    case internal::kPrerenderDispatcher_PrerenderRemoveAliases_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PrerenderDispatcher::PrerenderRemoveAliases",
               "message", message->name());
#endif
      break;
    }
    case internal::kPrerenderDispatcher_PrerenderStop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PrerenderDispatcher::PrerenderStop",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PrerenderDispatcherRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PrerenderDispatcher RequestValidator");

  switch (message->header()->name) {
    case internal::kPrerenderDispatcher_PrerenderStart_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PrerenderDispatcher_PrerenderStart_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPrerenderDispatcher_PrerenderStopLoading_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PrerenderDispatcher_PrerenderStopLoading_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPrerenderDispatcher_PrerenderDomContentLoaded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PrerenderDispatcher_PrerenderDomContentLoaded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPrerenderDispatcher_PrerenderAddAlias_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PrerenderDispatcher_PrerenderAddAlias_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPrerenderDispatcher_PrerenderRemoveAliases_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PrerenderDispatcher_PrerenderRemoveAliases_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPrerenderDispatcher_PrerenderStop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PrerenderDispatcher_PrerenderStop_Params_Data>(
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

void PrerenderDispatcherInterceptorForTesting::PrerenderStart(int32_t prerender_id) {
  GetForwardingInterface()->PrerenderStart(std::move(prerender_id));
}
void PrerenderDispatcherInterceptorForTesting::PrerenderStopLoading(int32_t prerender_id) {
  GetForwardingInterface()->PrerenderStopLoading(std::move(prerender_id));
}
void PrerenderDispatcherInterceptorForTesting::PrerenderDomContentLoaded(int32_t prerender_id) {
  GetForwardingInterface()->PrerenderDomContentLoaded(std::move(prerender_id));
}
void PrerenderDispatcherInterceptorForTesting::PrerenderAddAlias(const GURL& alias) {
  GetForwardingInterface()->PrerenderAddAlias(std::move(alias));
}
void PrerenderDispatcherInterceptorForTesting::PrerenderRemoveAliases(const std::vector<GURL>& aliases) {
  GetForwardingInterface()->PrerenderRemoveAliases(std::move(aliases));
}
void PrerenderDispatcherInterceptorForTesting::PrerenderStop(int32_t prerender_id) {
  GetForwardingInterface()->PrerenderStop(std::move(prerender_id));
}
PrerenderDispatcherAsyncWaiter::PrerenderDispatcherAsyncWaiter(
    PrerenderDispatcher* proxy) : proxy_(proxy) {}

PrerenderDispatcherAsyncWaiter::~PrerenderDispatcherAsyncWaiter() = default;


}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
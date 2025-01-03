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

#include "content/common/shared_worker/shared_worker_connector.mojom.h"

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

#include "content/common/shared_worker/shared_worker_connector.mojom-shared-message-ids.h"
#include "third_party/blink/public/platform/content_security_policy_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace content {
namespace mojom {
const char SharedWorkerConnector::Name_[] = "content.mojom.SharedWorkerConnector";

SharedWorkerConnectorProxy::SharedWorkerConnectorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SharedWorkerConnectorProxy::Connect(
    ::content::mojom::SharedWorkerInfoPtr in_info, ::content::mojom::SharedWorkerClientPtr in_client, ::blink::mojom::SharedWorkerCreationContextType in_creation_context_type, mojo::ScopedMessagePipeHandle in_message_port) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SharedWorkerConnector::Connect");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSharedWorkerConnector_Connect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SharedWorkerConnector_Connect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::content::mojom::SharedWorkerInfoDataView>(
      in_info, buffer, &info_writer, &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null info in SharedWorkerConnector.Connect request");
  mojo::internal::Serialize<::content::mojom::SharedWorkerClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in SharedWorkerConnector.Connect request");
  mojo::internal::Serialize<::blink::mojom::SharedWorkerCreationContextType>(
      in_creation_context_type, &params->creation_context_type);
  mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
      in_message_port, &params->message_port, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->message_port),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid message_port in SharedWorkerConnector.Connect request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SharedWorkerConnectorStubDispatch::Accept(
    SharedWorkerConnector* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSharedWorkerConnector_Connect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SharedWorkerConnector::Connect",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SharedWorkerConnector_Connect_Params_Data* params =
          reinterpret_cast<internal::SharedWorkerConnector_Connect_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::content::mojom::SharedWorkerInfoPtr p_info{};
      ::content::mojom::SharedWorkerClientPtr p_client{};
      ::blink::mojom::SharedWorkerCreationContextType p_creation_context_type{};
      mojo::ScopedMessagePipeHandle p_message_port{};
      SharedWorkerConnector_Connect_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInfo(&p_info))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!input_data_view.ReadCreationContextType(&p_creation_context_type))
        success = false;
      p_message_port = input_data_view.TakeMessagePort();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SharedWorkerConnector::Connect deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Connect(
std::move(p_info), 
std::move(p_client), 
std::move(p_creation_context_type), 
std::move(p_message_port));
      return true;
    }
  }
  return false;
}

// static
bool SharedWorkerConnectorStubDispatch::AcceptWithResponder(
    SharedWorkerConnector* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSharedWorkerConnector_Connect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SharedWorkerConnector::Connect",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool SharedWorkerConnectorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SharedWorkerConnector RequestValidator");

  switch (message->header()->name) {
    case internal::kSharedWorkerConnector_Connect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SharedWorkerConnector_Connect_Params_Data>(
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

void SharedWorkerConnectorInterceptorForTesting::Connect(::content::mojom::SharedWorkerInfoPtr info, ::content::mojom::SharedWorkerClientPtr client, ::blink::mojom::SharedWorkerCreationContextType creation_context_type, mojo::ScopedMessagePipeHandle message_port) {
  GetForwardingInterface()->Connect(std::move(info), std::move(client), std::move(creation_context_type), std::move(message_port));
}
SharedWorkerConnectorAsyncWaiter::SharedWorkerConnectorAsyncWaiter(
    SharedWorkerConnector* proxy) : proxy_(proxy) {}

SharedWorkerConnectorAsyncWaiter::~SharedWorkerConnectorAsyncWaiter() = default;


}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
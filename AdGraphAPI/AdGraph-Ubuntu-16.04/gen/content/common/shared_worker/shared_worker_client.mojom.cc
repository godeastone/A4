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

#include "content/common/shared_worker/shared_worker_client.mojom.h"

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

#include "content/common/shared_worker/shared_worker_client.mojom-shared-message-ids.h"
namespace content {
namespace mojom {
const char SharedWorkerClient::Name_[] = "content.mojom.SharedWorkerClient";

SharedWorkerClientProxy::SharedWorkerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SharedWorkerClientProxy::OnCreated(
    ::blink::mojom::SharedWorkerCreationContextType in_creation_context_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SharedWorkerClient::OnCreated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSharedWorkerClient_OnCreated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SharedWorkerClient_OnCreated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::SharedWorkerCreationContextType>(
      in_creation_context_type, &params->creation_context_type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SharedWorkerClientProxy::OnConnected(
    const std::vector<::blink::mojom::WebFeature>& in_features_used) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SharedWorkerClient::OnConnected");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSharedWorkerClient_OnConnected_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SharedWorkerClient_OnConnected_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->features_used)::BaseType::BufferWriter
      features_used_writer;
  const mojo::internal::ContainerValidateParams features_used_validate_params(
      0, ::blink::mojom::internal::WebFeature_Data::Validate);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::WebFeature>>(
      in_features_used, buffer, &features_used_writer, &features_used_validate_params,
      &serialization_context);
  params->features_used.Set(
      features_used_writer.is_null() ? nullptr : features_used_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->features_used.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null features_used in SharedWorkerClient.OnConnected request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SharedWorkerClientProxy::OnScriptLoadFailed(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SharedWorkerClient::OnScriptLoadFailed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSharedWorkerClient_OnScriptLoadFailed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SharedWorkerClient_OnScriptLoadFailed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SharedWorkerClientProxy::OnFeatureUsed(
    ::blink::mojom::WebFeature in_feature) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SharedWorkerClient::OnFeatureUsed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSharedWorkerClient_OnFeatureUsed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SharedWorkerClient_OnFeatureUsed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::WebFeature>(
      in_feature, &params->feature);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SharedWorkerClientStubDispatch::Accept(
    SharedWorkerClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSharedWorkerClient_OnCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SharedWorkerClient::OnCreated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SharedWorkerClient_OnCreated_Params_Data* params =
          reinterpret_cast<internal::SharedWorkerClient_OnCreated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::SharedWorkerCreationContextType p_creation_context_type{};
      SharedWorkerClient_OnCreated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCreationContextType(&p_creation_context_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SharedWorkerClient::OnCreated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnCreated(
std::move(p_creation_context_type));
      return true;
    }
    case internal::kSharedWorkerClient_OnConnected_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SharedWorkerClient::OnConnected",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SharedWorkerClient_OnConnected_Params_Data* params =
          reinterpret_cast<internal::SharedWorkerClient_OnConnected_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<::blink::mojom::WebFeature> p_features_used{};
      SharedWorkerClient_OnConnected_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFeaturesUsed(&p_features_used))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SharedWorkerClient::OnConnected deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnConnected(
std::move(p_features_used));
      return true;
    }
    case internal::kSharedWorkerClient_OnScriptLoadFailed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SharedWorkerClient::OnScriptLoadFailed",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SharedWorkerClient_OnScriptLoadFailed_Params_Data* params =
          reinterpret_cast<internal::SharedWorkerClient_OnScriptLoadFailed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SharedWorkerClient_OnScriptLoadFailed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SharedWorkerClient::OnScriptLoadFailed deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnScriptLoadFailed();
      return true;
    }
    case internal::kSharedWorkerClient_OnFeatureUsed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SharedWorkerClient::OnFeatureUsed",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SharedWorkerClient_OnFeatureUsed_Params_Data* params =
          reinterpret_cast<internal::SharedWorkerClient_OnFeatureUsed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::WebFeature p_feature{};
      SharedWorkerClient_OnFeatureUsed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFeature(&p_feature))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SharedWorkerClient::OnFeatureUsed deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnFeatureUsed(
std::move(p_feature));
      return true;
    }
  }
  return false;
}

// static
bool SharedWorkerClientStubDispatch::AcceptWithResponder(
    SharedWorkerClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSharedWorkerClient_OnCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SharedWorkerClient::OnCreated",
               "message", message->name());
#endif
      break;
    }
    case internal::kSharedWorkerClient_OnConnected_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SharedWorkerClient::OnConnected",
               "message", message->name());
#endif
      break;
    }
    case internal::kSharedWorkerClient_OnScriptLoadFailed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SharedWorkerClient::OnScriptLoadFailed",
               "message", message->name());
#endif
      break;
    }
    case internal::kSharedWorkerClient_OnFeatureUsed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SharedWorkerClient::OnFeatureUsed",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool SharedWorkerClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SharedWorkerClient RequestValidator");

  switch (message->header()->name) {
    case internal::kSharedWorkerClient_OnCreated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SharedWorkerClient_OnCreated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSharedWorkerClient_OnConnected_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SharedWorkerClient_OnConnected_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSharedWorkerClient_OnScriptLoadFailed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SharedWorkerClient_OnScriptLoadFailed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSharedWorkerClient_OnFeatureUsed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SharedWorkerClient_OnFeatureUsed_Params_Data>(
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

void SharedWorkerClientInterceptorForTesting::OnCreated(::blink::mojom::SharedWorkerCreationContextType creation_context_type) {
  GetForwardingInterface()->OnCreated(std::move(creation_context_type));
}
void SharedWorkerClientInterceptorForTesting::OnConnected(const std::vector<::blink::mojom::WebFeature>& features_used) {
  GetForwardingInterface()->OnConnected(std::move(features_used));
}
void SharedWorkerClientInterceptorForTesting::OnScriptLoadFailed() {
  GetForwardingInterface()->OnScriptLoadFailed();
}
void SharedWorkerClientInterceptorForTesting::OnFeatureUsed(::blink::mojom::WebFeature feature) {
  GetForwardingInterface()->OnFeatureUsed(std::move(feature));
}
SharedWorkerClientAsyncWaiter::SharedWorkerClientAsyncWaiter(
    SharedWorkerClient* proxy) : proxy_(proxy) {}

SharedWorkerClientAsyncWaiter::~SharedWorkerClientAsyncWaiter() = default;


}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
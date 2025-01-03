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

#include "services/network/public/mojom/network_change_manager.mojom-blink.h"

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

#include "services/network/public/mojom/network_change_manager.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace network {
namespace mojom {
namespace blink {
const char NetworkChangeManagerClient::Name_[] = "network.mojom.NetworkChangeManagerClient";

NetworkChangeManagerClientProxy::NetworkChangeManagerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class NetworkChangeManagerClientProxy_OnInitialConnectionType_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkChangeManagerClientProxy_OnInitialConnectionType_Message(
      uint32_t message_flags
      , ConnectionType param_type
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkChangeManagerClient_OnInitialConnectionType_Name,
          message_flags)
      , param_type_(std::move(param_type)){}
  ~NetworkChangeManagerClientProxy_OnInitialConnectionType_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      ConnectionType param_type) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkChangeManagerClientProxy_OnInitialConnectionType_Message>(
          kFlags
          , std::move(param_type)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkChangeManagerClient_OnInitialConnectionType_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkChangeManagerClient_OnInitialConnectionType_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::ConnectionType>(
      param_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkChangeManagerClient* impl) {
    impl->OnInitialConnectionType(
        std::move(param_type_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkChangeManagerClient_OnInitialConnectionType_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::ConnectionType>(
      param_type_, &params->type);
  }
  ConnectionType param_type_;

  DISALLOW_COPY_AND_ASSIGN(NetworkChangeManagerClientProxy_OnInitialConnectionType_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkChangeManagerClientProxy_OnInitialConnectionType_Message::kMessageTag = {};

void NetworkChangeManagerClientProxy::OnInitialConnectionType(
    ConnectionType in_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkChangeManagerClient::OnInitialConnectionType");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkChangeManagerClientProxy_OnInitialConnectionType_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_type));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkChangeManagerClientProxy_OnNetworkChanged_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkChangeManagerClientProxy_OnNetworkChanged_Message(
      uint32_t message_flags
      , ConnectionType param_type
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkChangeManagerClient_OnNetworkChanged_Name,
          message_flags)
      , param_type_(std::move(param_type)){}
  ~NetworkChangeManagerClientProxy_OnNetworkChanged_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      ConnectionType param_type) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkChangeManagerClientProxy_OnNetworkChanged_Message>(
          kFlags
          , std::move(param_type)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkChangeManagerClient_OnNetworkChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkChangeManagerClient_OnNetworkChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::ConnectionType>(
      param_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkChangeManagerClient* impl) {
    impl->OnNetworkChanged(
        std::move(param_type_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkChangeManagerClient_OnNetworkChanged_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::ConnectionType>(
      param_type_, &params->type);
  }
  ConnectionType param_type_;

  DISALLOW_COPY_AND_ASSIGN(NetworkChangeManagerClientProxy_OnNetworkChanged_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkChangeManagerClientProxy_OnNetworkChanged_Message::kMessageTag = {};

void NetworkChangeManagerClientProxy::OnNetworkChanged(
    ConnectionType in_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkChangeManagerClient::OnNetworkChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkChangeManagerClientProxy_OnNetworkChanged_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_type));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool NetworkChangeManagerClientStubDispatch::Accept(
    NetworkChangeManagerClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNetworkChangeManagerClient_OnInitialConnectionType_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkChangeManagerClient::OnInitialConnectionType",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkChangeManagerClientProxy_OnInitialConnectionType_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was serialized using a different variant of these bindings.
          // Force serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          context->Dispatch(impl);
          return true;
        }
      }

      DCHECK(message->is_serialized());
      internal::NetworkChangeManagerClient_OnInitialConnectionType_Params_Data* params =
          reinterpret_cast<internal::NetworkChangeManagerClient_OnInitialConnectionType_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ConnectionType p_type{};
      NetworkChangeManagerClient_OnInitialConnectionType_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkChangeManagerClient::OnInitialConnectionType deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnInitialConnectionType(
std::move(p_type));
      return true;
    }
    case internal::kNetworkChangeManagerClient_OnNetworkChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkChangeManagerClient::OnNetworkChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkChangeManagerClientProxy_OnNetworkChanged_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was serialized using a different variant of these bindings.
          // Force serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          context->Dispatch(impl);
          return true;
        }
      }

      DCHECK(message->is_serialized());
      internal::NetworkChangeManagerClient_OnNetworkChanged_Params_Data* params =
          reinterpret_cast<internal::NetworkChangeManagerClient_OnNetworkChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ConnectionType p_type{};
      NetworkChangeManagerClient_OnNetworkChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkChangeManagerClient::OnNetworkChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnNetworkChanged(
std::move(p_type));
      return true;
    }
  }
  return false;
}

// static
bool NetworkChangeManagerClientStubDispatch::AcceptWithResponder(
    NetworkChangeManagerClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNetworkChangeManagerClient_OnInitialConnectionType_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkChangeManagerClient::OnInitialConnectionType",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkChangeManagerClient_OnNetworkChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkChangeManagerClient::OnNetworkChanged",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool NetworkChangeManagerClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkChangeManagerClient RequestValidator");

  switch (message->header()->name) {
    case internal::kNetworkChangeManagerClient_OnInitialConnectionType_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkChangeManagerClient_OnInitialConnectionType_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkChangeManagerClient_OnNetworkChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkChangeManagerClient_OnNetworkChanged_Params_Data>(
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

void NetworkChangeManagerClientInterceptorForTesting::OnInitialConnectionType(ConnectionType type) {
  GetForwardingInterface()->OnInitialConnectionType(std::move(type));
}
void NetworkChangeManagerClientInterceptorForTesting::OnNetworkChanged(ConnectionType type) {
  GetForwardingInterface()->OnNetworkChanged(std::move(type));
}
NetworkChangeManagerClientAsyncWaiter::NetworkChangeManagerClientAsyncWaiter(
    NetworkChangeManagerClient* proxy) : proxy_(proxy) {}

NetworkChangeManagerClientAsyncWaiter::~NetworkChangeManagerClientAsyncWaiter() = default;


const char NetworkChangeManager::Name_[] = "network.mojom.NetworkChangeManager";

NetworkChangeManagerProxy::NetworkChangeManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class NetworkChangeManagerProxy_RequestNotifications_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit NetworkChangeManagerProxy_RequestNotifications_Message(
      uint32_t message_flags
      , NetworkChangeManagerClientPtr param_client_ptr
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kNetworkChangeManager_RequestNotifications_Name,
          message_flags)
      , param_client_ptr_(param_client_ptr.PassInterface()){}
  ~NetworkChangeManagerProxy_RequestNotifications_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      NetworkChangeManagerClientPtr param_client_ptr) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<NetworkChangeManagerProxy_RequestNotifications_Message>(
          kFlags
          , std::move(param_client_ptr)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kNetworkChangeManager_RequestNotifications_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkChangeManager_RequestNotifications_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::NetworkChangeManagerClientPtrDataView>(
      param_client_ptr, &params->client_ptr, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client_ptr),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client_ptr in NetworkChangeManager.RequestNotifications request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(NetworkChangeManager* impl) {
    impl->RequestNotifications(
        NetworkChangeManagerClientPtr(std::move(param_client_ptr_)));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::network::mojom::internal::NetworkChangeManager_RequestNotifications_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::NetworkChangeManagerClientPtrDataView>(
      param_client_ptr_, &params->client_ptr, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client_ptr),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client_ptr in NetworkChangeManager.RequestNotifications request");
  }
  NetworkChangeManagerClientPtrInfo param_client_ptr_;

  DISALLOW_COPY_AND_ASSIGN(NetworkChangeManagerProxy_RequestNotifications_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
NetworkChangeManagerProxy_RequestNotifications_Message::kMessageTag = {};

void NetworkChangeManagerProxy::RequestNotifications(
    NetworkChangeManagerClientPtr in_client_ptr) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "network::mojom::NetworkChangeManager::RequestNotifications");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = NetworkChangeManagerProxy_RequestNotifications_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_client_ptr));
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool NetworkChangeManagerStubDispatch::Accept(
    NetworkChangeManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNetworkChangeManager_RequestNotifications_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkChangeManager::RequestNotifications",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            NetworkChangeManagerProxy_RequestNotifications_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was serialized using a different variant of these bindings.
          // Force serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          context->Dispatch(impl);
          return true;
        }
      }

      DCHECK(message->is_serialized());
      internal::NetworkChangeManager_RequestNotifications_Params_Data* params =
          reinterpret_cast<internal::NetworkChangeManager_RequestNotifications_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkChangeManagerClientPtr p_client_ptr{};
      NetworkChangeManager_RequestNotifications_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client_ptr =
          input_data_view.TakeClientPtr<decltype(p_client_ptr)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkChangeManager::RequestNotifications deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestNotifications(
std::move(p_client_ptr));
      return true;
    }
  }
  return false;
}

// static
bool NetworkChangeManagerStubDispatch::AcceptWithResponder(
    NetworkChangeManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNetworkChangeManager_RequestNotifications_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)network::mojom::NetworkChangeManager::RequestNotifications",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool NetworkChangeManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkChangeManager RequestValidator");

  switch (message->header()->name) {
    case internal::kNetworkChangeManager_RequestNotifications_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkChangeManager_RequestNotifications_Params_Data>(
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

void NetworkChangeManagerInterceptorForTesting::RequestNotifications(NetworkChangeManagerClientPtr client_ptr) {
  GetForwardingInterface()->RequestNotifications(std::move(client_ptr));
}
NetworkChangeManagerAsyncWaiter::NetworkChangeManagerAsyncWaiter(
    NetworkChangeManager* proxy) : proxy_(proxy) {}

NetworkChangeManagerAsyncWaiter::~NetworkChangeManagerAsyncWaiter() = default;


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif